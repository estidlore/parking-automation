TYPE
  LOGLEVEL : (CRITICAL, WARNING, INFO, DEBUG) := INFO;
END_TYPE

FUNCTION_BLOCK LOGGER
  VAR_INPUT
    TRIG : BOOL;
    MSG : STRING;
    LEVEL : LOGLEVEL := INFO;
  END_VAR
  VAR
    TRIG0 : BOOL;
  END_VAR

  IF TRIG AND NOT TRIG0 THEN
  {{
   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  }}
  END_IF;
  TRIG0:=TRIG;
END_FUNCTION_BLOCK



FUNCTION_BLOCK python_eval
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_poll
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_gear
  VAR_INPUT
    N : UINT;
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    py_eval : python_eval;
    COUNTER : UINT;
    _TMP_ADD10_OUT : UINT;
    _TMP_EQ13_OUT : BOOL;
    _TMP_SEL15_OUT : UINT;
    _TMP_AND7_OUT : BOOL;
  END_VAR

  _TMP_ADD10_OUT := ADD(COUNTER, 1);
  _TMP_EQ13_OUT := EQ(N, _TMP_ADD10_OUT);
  _TMP_SEL15_OUT := SEL(_TMP_EQ13_OUT, _TMP_ADD10_OUT, 0);
  COUNTER := _TMP_SEL15_OUT;
  _TMP_AND7_OUT := AND(_TMP_EQ13_OUT, TRIG);
  py_eval(TRIG := _TMP_AND7_OUT, CODE := CODE);
  ACK := py_eval.ACK;
  RESULT := py_eval.RESULT;
END_FUNCTION_BLOCK


PROGRAM Examen_Fin
  VAR
    carsInside : INT;
  END_VAR
  VAR
    isSystemOn : BOOL;
  END_VAR
  VAR
    carsCameIn : INT;
  END_VAR
  VAR
    hasTicket : BOOL;
    isBarrierInOpen : BOOL;
    isComingIn : BOOL;
  END_VAR
  VAR
    carsCameOut : INT;
  END_VAR
  VAR
    hasPaid : BOOL;
    isBarrierOutOpen : BOOL;
    isComingOut : BOOL;
  END_VAR
  VAR
    TofIn : TOF;
    TofIn_ET : TIME;
    TofOut_ET : TIME;
    TofOut : TOF;
    CTUIn : CTU;
    CTUOut : CTU;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
  END_VAR

  isComingIn := isSystemOn AND isComingIn;
  isComingOut := isSystemOn AND isComingOut;
  hasTicket := isComingIn AND hasTicket;
  hasPaid := isComingOut AND hasPaid;
  TofIn(IN := hasTicket, PT := T#3000ms);
  isBarrierInOpen := TofIn.Q;
  TofIn_ET := TofIn.ET;
  TofOut(IN := hasPaid, PT := T#3000ms);
  isBarrierOutOpen := TofOut.Q;
  TofOut_ET := TofOut.ET;
  R_TRIG1(CLK := hasTicket);
  CTUIn(CU := R_TRIG1.Q, R := isSystemOn, PV := carsCameIn);
  carsCameIn := CTUIn.CV;
  R_TRIG2(CLK := hasPaid);
  CTUOut(CU := R_TRIG2.Q, R := isSystemOn, PV := carsCameOut);
  carsCameOut := CTUOut.CV;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : Examen_Fin;
  END_RESOURCE
END_CONFIGURATION
