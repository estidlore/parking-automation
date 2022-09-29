PROGRAM Examen_Fin
  VAR
    carsInside : INT;
  END_VAR
  VAR
    isSystemOn AT %IX0.4 : BOOL;
  END_VAR
  VAR
    carsCameIn : INT;
  END_VAR
  VAR
    hasTicket AT %IX0.3 : BOOL;
    isBarrierInOpen AT %QX0.0 : BOOL;
    isComingIn AT %IX0.0 : BOOL;
  END_VAR
  VAR
    carsCameOut : INT;
  END_VAR
  VAR
    hasPaid AT %IX0.2 : BOOL;
    isBarrierOutOpen AT %QX0.1 : BOOL;
    isComingOut AT %IX0.1 : BOOL;
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
