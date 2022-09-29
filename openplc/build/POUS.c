void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void EXAMEN_FIN_init__(EXAMEN_FIN *data__, BOOL retain) {
  __INIT_VAR(data__->CARSINSIDE,0,retain)
  __INIT_VAR(data__->ISSYSTEMON,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CARSCAMEIN,0,retain)
  __INIT_VAR(data__->HASTICKET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ISBARRIERINOPEN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ISCOMINGIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CARSCAMEOUT,0,retain)
  __INIT_VAR(data__->HASPAID,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ISBARRIEROUTOPEN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ISCOMINGOUT,__BOOL_LITERAL(FALSE),retain)
  TOF_init__(&data__->TOFIN,retain);
  __INIT_VAR(data__->TOFIN_ET,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->TOFOUT_ET,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  TOF_init__(&data__->TOFOUT,retain);
  CTU_init__(&data__->CTUIN,retain);
  CTU_init__(&data__->CTUOUT,retain);
  R_TRIG_init__(&data__->R_TRIG1,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
}

// Code part
void EXAMEN_FIN_body__(EXAMEN_FIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,ISCOMINGIN,,(__GET_VAR(data__->ISSYSTEMON,) && __GET_VAR(data__->ISCOMINGIN,)));
  __SET_VAR(data__->,ISCOMINGOUT,,(__GET_VAR(data__->ISSYSTEMON,) && __GET_VAR(data__->ISCOMINGOUT,)));
  __SET_VAR(data__->,HASTICKET,,(__GET_VAR(data__->ISCOMINGIN,) && __GET_VAR(data__->HASTICKET,)));
  __SET_VAR(data__->,HASPAID,,(__GET_VAR(data__->ISCOMINGOUT,) && __GET_VAR(data__->HASPAID,)));
  __SET_VAR(data__->TOFIN.,IN,,__GET_VAR(data__->HASTICKET,));
  __SET_VAR(data__->TOFIN.,PT,,__time_to_timespec(1, 3000, 0, 0, 0, 0));
  TOF_body__(&data__->TOFIN);
  __SET_VAR(data__->,ISBARRIERINOPEN,,__GET_VAR(data__->TOFIN.Q,));
  __SET_VAR(data__->,TOFIN_ET,,__GET_VAR(data__->TOFIN.ET,));
  __SET_VAR(data__->TOFOUT.,IN,,__GET_VAR(data__->HASPAID,));
  __SET_VAR(data__->TOFOUT.,PT,,__time_to_timespec(1, 3000, 0, 0, 0, 0));
  TOF_body__(&data__->TOFOUT);
  __SET_VAR(data__->,ISBARRIEROUTOPEN,,__GET_VAR(data__->TOFOUT.Q,));
  __SET_VAR(data__->,TOFOUT_ET,,__GET_VAR(data__->TOFOUT.ET,));
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->HASTICKET,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->CTUIN.,CU,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->CTUIN.,R,,__GET_VAR(data__->ISSYSTEMON,));
  __SET_VAR(data__->CTUIN.,PV,,__GET_VAR(data__->CARSCAMEIN,));
  CTU_body__(&data__->CTUIN);
  __SET_VAR(data__->,CARSCAMEIN,,__GET_VAR(data__->CTUIN.CV,));
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->HASPAID,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->CTUOUT.,CU,,__GET_VAR(data__->R_TRIG2.Q,));
  __SET_VAR(data__->CTUOUT.,R,,__GET_VAR(data__->ISSYSTEMON,));
  __SET_VAR(data__->CTUOUT.,PV,,__GET_VAR(data__->CARSCAMEOUT,));
  CTU_body__(&data__->CTUOUT);
  __SET_VAR(data__->,CARSCAMEOUT,,__GET_VAR(data__->CTUOUT.CV,));

  goto __end;

__end:
  return;
} // EXAMEN_FIN_body__() 





