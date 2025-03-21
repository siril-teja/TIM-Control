/* Include files */

#include "HardwareInteg_draft2_sfun.h"
#include "c1_HardwareInteg_draft2.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
const int32_T CALL_EVENT = -1;

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c1_emlrtMCI = { 87, /* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c1_b_emlrtMCI = { 49,/* lineNo */
  27,                                  /* colNo */
  "varstd",                            /* fName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd.m"/* pName */
};

static emlrtMCInfo c1_c_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c1_d_emlrtMCI = { 18,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 106,/* lineNo */
  "diff",                              /* fcnName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"/* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 9,/* lineNo */
  "std",                               /* fcnName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\std.m"/* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 105,/* lineNo */
  "varstd",                            /* fcnName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd.m"/* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 143,/* lineNo */
  "vvarstd",                           /* fcnName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 36,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#HardwareInteg_draft2:47"           /* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 37,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#HardwareInteg_draft2:47"           /* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 2,/* lineNo */
  39,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#HardwareInteg_draft2:47"           /* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 24,/* lineNo */
  28,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#HardwareInteg_draft2:47"           /* pName */
};

static emlrtRTEInfo c1_c_emlrtRTEI = { 27,/* lineNo */
  28,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#HardwareInteg_draft2:47"           /* pName */
};

static emlrtRTEInfo c1_d_emlrtRTEI = { 36,/* lineNo */
  53,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#HardwareInteg_draft2:47"           /* pName */
};

static emlrtRTEInfo c1_e_emlrtRTEI = { 24,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function1",                  /* fName */
  "#HardwareInteg_draft2:47"           /* pName */
};

static emlrtRTEInfo c1_f_emlrtRTEI = { 27,/* lineNo */
  9,                                   /* colNo */
  "MATLAB Function1",                  /* fName */
  "#HardwareInteg_draft2:47"           /* pName */
};

static emlrtRTEInfo c1_g_emlrtRTEI = { 126,/* lineNo */
  34,                                  /* colNo */
  "vvarstd",                           /* fName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pName */
};

static emlrtRTEInfo c1_h_emlrtRTEI = { 37,/* lineNo */
  24,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#HardwareInteg_draft2:47"           /* pName */
};

static emlrtRTEInfo c1_i_emlrtRTEI = { 36,/* lineNo */
  48,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#HardwareInteg_draft2:47"           /* pName */
};

static emlrtRTEInfo c1_j_emlrtRTEI = { 126,/* lineNo */
  9,                                   /* colNo */
  "vvarstd",                           /* fName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarstd.m"/* pName */
};

static emlrtRTEInfo c1_k_emlrtRTEI = { 77,/* lineNo */
  23,                                  /* colNo */
  "diff",                              /* fName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"/* pName */
};

static emlrtRTEInfo c1_m_emlrtRTEI = { 78,/* lineNo */
  21,                                  /* colNo */
  "diff",                              /* fName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"/* pName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 78,/* lineNo */
  "diff",                              /* fcnName */
  "D:\\Application\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"/* pathName */
};

/* Function Declarations */
static void initialize_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void initialize_params_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void mdl_start_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void mdl_terminate_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void enable_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void disable_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void sf_gateway_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void ext_mode_exec_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void c1_update_jit_animation_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void c1_do_animation_call_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void set_sim_state_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance, const mxArray *c1_st);
static void initSimStructsc1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void initSubchartIOPointersc1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void c1_diff(SFc1_HardwareInteg_draft2InstanceStruct *chartInstance,
                    const emlrtStack *c1_sp, c1_emxArray_real_T *c1_x,
                    c1_emxArray_real_T *c1_y);
static void c1_check_forloop_overflow_error
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance, const emlrtStack
   *c1_sp);
static real_T c1_blockedSummation(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, c1_emxArray_real_T *c1_x, int32_T c1_vlen);
static real_T c1_sumColumnB(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, c1_emxArray_real_T *c1_x, int32_T c1_vlen);
static real_T c1_sumColumnB4(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, c1_emxArray_real_T *c1_x, int32_T c1_vstart);
static real_T c1_b_sumColumnB(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, c1_emxArray_real_T *c1_x, int32_T c1_vlen, int32_T c1_vstart);
static real_T c1_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_b_Kd, const char_T *c1_identifier);
static real_T c1_b_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static real_T c1_c_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_b_error_prev, const char_T *c1_identifier,
  boolean_T *c1_svPtr);
static real_T c1_d_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr);
static void c1_e_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const emlrtStack *c1_sp, const mxArray *c1_b_oscillation_data,
  const char_T *c1_identifier, boolean_T *c1_svPtr, c1_emxArray_real_T *c1_y);
static void c1_f_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const emlrtStack *c1_sp, const mxArray *c1_u, const
  emlrtMsgIdentifier *c1_parentId, boolean_T *c1_svPtr, c1_emxArray_real_T *c1_y);
static uint8_T c1_g_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_HardwareInteg_draft2, const
  char_T *c1_identifier);
static uint8_T c1_h_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_slStringInitializeDynamicBuffers
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance);
static void c1_chart_data_browse_helper(SFc1_HardwareInteg_draft2InstanceStruct *
  chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig);
static void c1_emxInit_real_T(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxFree_real_T(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, c1_emxArray_real_T **c1_pEmxArray);
static void c1_emxEnsureCapacity_real_T(SFc1_HardwareInteg_draft2InstanceStruct *
  chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxEnsureCapacity_real_T1(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxInit_real_T1(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation);
static void init_dsm_address_info(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_error_prev_not_empty = false;
  chartInstance->c1_relay_state_not_empty = false;
  chartInstance->c1_oscillation_data_not_empty = false;
  chartInstance->c1_time_not_empty = false;
  chartInstance->c1_is_active_c1_HardwareInteg_draft2 = 0U;
}

static void initialize_params_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
}

static void mdl_start_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  c1_emxInit_real_T(chartInstance, &c1_st, &chartInstance->c1_oscillation_data,
                    2, &c1_emlrtRTEI);
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
  c1_emxFree_real_T(chartInstance, &chartInstance->c1_oscillation_data);
}

static void mdl_setup_runtime_resources_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
  static const int32_T c1_b_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_b_condTxtEndIdx[2] = { 665, 693 };

  static const int32_T c1_b_condTxtStartIdx[2] = { 648, 669 };

  static const int32_T c1_condTxtEndIdx[2] = { 493, 520 };

  static const int32_T c1_condTxtStartIdx[2] = { 477, 497 };

  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    32U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 4U, 0U,
                  0U, 0U, 0U, 0U, 4U, 2U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1393);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 224, 246, -1,
                    386, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 474, 520, 641,
                    782, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 641, 693, -1,
                    782, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 907, 939, 1324,
                    1389, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 477, 520, 2U,
                      0U, c1_condTxtStartIdx, c1_condTxtEndIdx, 3U,
                      c1_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 648, 693, 2U,
                      2U, c1_b_condTxtStartIdx, c1_b_condTxtEndIdx, 3U,
                      c1_b_postfixPredicateTree, false);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 477,
    493, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 497,
    520, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 648,
    665, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 669,
    693, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 910,
    939, -1, 4U);
}

static void mdl_cleanup_runtime_resources_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
  static char_T c1_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  static char_T c1_cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  ptrdiff_t c1_incx_t;
  ptrdiff_t c1_n_t;
  c1_emxArray_real_T *c1_absdiff;
  c1_emxArray_real_T *c1_r;
  c1_emxArray_real_T *c1_r1;
  c1_emxArray_real_T *c1_r2;
  c1_emxArray_real_T *c1_r3;
  c1_emxArray_real_T *c1_x;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_d_st;
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c1_b_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_y = NULL;
  real_T c1_Ku;
  real_T c1_Tu;
  real_T c1_b_Kd;
  real_T c1_b_Ki;
  real_T c1_b_Kp;
  real_T c1_b_dt;
  real_T c1_b_pressure;
  real_T c1_b_relay_amplitude;
  real_T c1_b_setpoint;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_c_y;
  real_T c1_d_x;
  real_T c1_d_y;
  real_T c1_e_x;
  real_T c1_error;
  real_T c1_f_x;
  real_T c1_f_y;
  real_T c1_g_x;
  real_T c1_h_x;
  real_T c1_i_x;
  real_T c1_xbar;
  int32_T c1_b_k;
  int32_T c1_b_loop_ub;
  int32_T c1_b_n;
  int32_T c1_b_vlen;
  int32_T c1_c_loop_ub;
  int32_T c1_c_n;
  int32_T c1_d_loop_ub;
  int32_T c1_d_n;
  int32_T c1_e_loop_ub;
  int32_T c1_e_n;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_k;
  int32_T c1_loop_ub;
  int32_T c1_n;
  int32_T c1_var;
  int32_T c1_vlen;
  boolean_T c1_b;
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_b3;
  boolean_T c1_b4;
  boolean_T c1_b5;
  boolean_T c1_b6;
  boolean_T c1_b_b;
  boolean_T c1_c_b;
  boolean_T c1_d_b;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_d_st.prev = &c1_c_st;
  c1_d_st.tls = c1_c_st.tls;
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U, *chartInstance->c1_dt);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U,
                    *chartInstance->c1_relay_amplitude);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U,
                    *chartInstance->c1_setpoint);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U,
                    *chartInstance->c1_pressure);
  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_b_pressure = *chartInstance->c1_pressure;
  c1_b_setpoint = *chartInstance->c1_setpoint;
  c1_b_relay_amplitude = *chartInstance->c1_relay_amplitude;
  c1_b_dt = *chartInstance->c1_dt;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 0,
                     !chartInstance->c1_error_prev_not_empty)) {
    chartInstance->c1_error_prev = 0.0;
    chartInstance->c1_error_prev_not_empty = true;
    chartInstance->c1_relay_state = 1.0;
    chartInstance->c1_relay_state_not_empty = true;
    chartInstance->c1_oscillation_data->size[0] = 0;
    chartInstance->c1_oscillation_data->size[1] = 2;
    c1_b = (chartInstance->c1_oscillation_data->size[0] == 0);
    chartInstance->c1_oscillation_data_not_empty = !c1_b;
    chartInstance->c1_time = 0.0;
    chartInstance->c1_time_not_empty = true;
  }

  c1_error = c1_b_setpoint - c1_b_pressure;
  c1_emxInit_real_T(chartInstance, &c1_st, &c1_r, 2, &c1_b_emlrtRTEI);
  c1_emxInit_real_T(chartInstance, &c1_st, &c1_r1, 2, &c1_c_emlrtRTEI);
  if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 0,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                        chartInstance->c1_relay_state, 1.0, -1, 0U,
                        static_cast<int32_T>(chartInstance->c1_relay_state ==
         1.0))) && covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 1,
       covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U,
        c1_error, c1_b_relay_amplitude, -1, 2U, static_cast<int32_T>(c1_error <
         c1_b_relay_amplitude)))) {
    covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 0, true);
    covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 1, true);
    chartInstance->c1_relay_state = -1.0;
    c1_i = c1_r->size[0] * c1_r->size[1];
    c1_r->size[0] = chartInstance->c1_oscillation_data->size[0] + 1;
    c1_r->size[1] = 2;
    c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_r, c1_i,
      &c1_b_emlrtRTEI);
    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_loop_ub = chartInstance->c1_oscillation_data->size[0] - 1;
      for (c1_i4 = 0; c1_i4 <= c1_loop_ub; c1_i4++) {
        c1_r->data[c1_i4 + c1_r->size[0] * c1_i2] =
          chartInstance->c1_oscillation_data->data[c1_i4 +
          chartInstance->c1_oscillation_data->size[0] * c1_i2];
      }
    }

    c1_r->data[chartInstance->c1_oscillation_data->size[0]] =
      chartInstance->c1_time;
    c1_r->data[chartInstance->c1_oscillation_data->size[0] + c1_r->size[0]] =
      c1_b_pressure;
    c1_i5 = chartInstance->c1_oscillation_data->size[0] *
      chartInstance->c1_oscillation_data->size[1];
    chartInstance->c1_oscillation_data->size[0] = c1_r->size[0];
    chartInstance->c1_oscillation_data->size[1] = 2;
    c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
      chartInstance->c1_oscillation_data, c1_i5, &c1_e_emlrtRTEI);
    c1_c_loop_ub = (c1_r->size[0] << 1) - 1;
    for (c1_i9 = 0; c1_i9 <= c1_c_loop_ub; c1_i9++) {
      chartInstance->c1_oscillation_data->data[c1_i9] = c1_r->data[c1_i9];
    }

    c1_b1 = (chartInstance->c1_oscillation_data->size[0] == 0);
    chartInstance->c1_oscillation_data_not_empty = !c1_b1;
  } else {
    covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 0, false);
    covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 1, false);
    if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 2,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 2U,
                          chartInstance->c1_relay_state, -1.0, -1, 0U,
                          static_cast<int32_T>(chartInstance->c1_relay_state ==
           -1.0))) && covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 3,
         covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U,
          c1_error, -c1_b_relay_amplitude, -1, 4U, static_cast<int32_T>(c1_error
           > -c1_b_relay_amplitude)))) {
      covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 1, true);
      covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 2, true);
      chartInstance->c1_relay_state = 1.0;
      c1_i1 = c1_r1->size[0] * c1_r1->size[1];
      c1_r1->size[0] = chartInstance->c1_oscillation_data->size[0] + 1;
      c1_r1->size[1] = 2;
      c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_r1, c1_i1,
        &c1_c_emlrtRTEI);
      for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
        c1_b_loop_ub = chartInstance->c1_oscillation_data->size[0] - 1;
        for (c1_i7 = 0; c1_i7 <= c1_b_loop_ub; c1_i7++) {
          c1_r1->data[c1_i7 + c1_r1->size[0] * c1_i3] =
            chartInstance->c1_oscillation_data->data[c1_i7 +
            chartInstance->c1_oscillation_data->size[0] * c1_i3];
        }
      }

      c1_r1->data[chartInstance->c1_oscillation_data->size[0]] =
        chartInstance->c1_time;
      c1_r1->data[chartInstance->c1_oscillation_data->size[0] + c1_r1->size[0]] =
        c1_b_pressure;
      c1_i8 = chartInstance->c1_oscillation_data->size[0] *
        chartInstance->c1_oscillation_data->size[1];
      chartInstance->c1_oscillation_data->size[0] = c1_r1->size[0];
      chartInstance->c1_oscillation_data->size[1] = 2;
      c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
        chartInstance->c1_oscillation_data, c1_i8, &c1_f_emlrtRTEI);
      c1_e_loop_ub = (c1_r1->size[0] << 1) - 1;
      for (c1_i11 = 0; c1_i11 <= c1_e_loop_ub; c1_i11++) {
        chartInstance->c1_oscillation_data->data[c1_i11] = c1_r1->data[c1_i11];
      }

      c1_b2 = (chartInstance->c1_oscillation_data->size[0] == 0);
      chartInstance->c1_oscillation_data_not_empty = !c1_b2;
    } else {
      covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 1, false);
      covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 2, false);
    }
  }

  c1_emxFree_real_T(chartInstance, &c1_r1);
  c1_emxFree_real_T(chartInstance, &c1_r);
  chartInstance->c1_time += c1_b_dt;
  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 3,
                     covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance,
        4U, 0U, 4U, static_cast<real_T>(chartInstance->c1_oscillation_data->
         size[0]), 4.0, -1, 4U, static_cast<int32_T>(static_cast<real_T>
         (chartInstance->c1_oscillation_data->size[0]) > 4.0)))) {
    c1_b_st.site = &c1_f_emlrtRSI;
    c1_emxInit_real_T1(chartInstance, &c1_b_st, &c1_r2, 1, &c1_d_emlrtRTEI);
    c1_i6 = c1_r2->size[0];
    c1_r2->size[0] = chartInstance->c1_oscillation_data->size[0];
    c1_emxEnsureCapacity_real_T1(chartInstance, &c1_b_st, c1_r2, c1_i6,
      &c1_d_emlrtRTEI);
    c1_d_loop_ub = chartInstance->c1_oscillation_data->size[0] - 1;
    for (c1_i10 = 0; c1_i10 <= c1_d_loop_ub; c1_i10++) {
      c1_r2->data[c1_i10] = chartInstance->c1_oscillation_data->data[c1_i10 +
        chartInstance->c1_oscillation_data->size[0]];
    }

    c1_emxInit_real_T1(chartInstance, &c1_b_st, &c1_x, 1, &c1_i_emlrtRTEI);
    c1_c_st.site = &c1_f_emlrtRSI;
    c1_diff(chartInstance, &c1_c_st, c1_r2, c1_x);
    c1_emxFree_real_T(chartInstance, &c1_r2);
    c1_c_st.site = &c1_c_emlrtRSI;
    if ((c1_x->size[0] == 1) || (static_cast<real_T>(c1_x->size[0]) != 1.0)) {
      c1_b3 = true;
    } else {
      c1_b3 = false;
    }

    if (!c1_b3) {
      c1_y = NULL;
      sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c1_b_y = NULL;
      sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      sf_mex_call(&c1_c_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_y, 14,
                  sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c1_c_st, NULL, "message", 1U, 1U, 14, c1_b_y)));
    }

    c1_n = c1_x->size[0];
    c1_d_st.site = &c1_d_emlrtRSI;
    c1_b_n = c1_n;
    if (c1_b_n == 0) {
      c1_c_y = rtNaN;
    } else if (c1_b_n == 1) {
      c1_xbar = c1_x->data[0];
      c1_b_x = c1_xbar;
      c1_c_x = c1_b_x;
      c1_b_b = muDoubleScalarIsInf(c1_c_x);
      c1_b4 = !c1_b_b;
      c1_d_x = c1_b_x;
      c1_c_b = muDoubleScalarIsNaN(c1_d_x);
      c1_b5 = !c1_c_b;
      c1_d_b = (c1_b4 && c1_b5);
      if (c1_d_b) {
        c1_c_y = 0.0;
      } else {
        c1_c_y = rtNaN;
      }
    } else {
      c1_vlen = c1_b_n;
      c1_xbar = c1_blockedSummation(chartInstance, c1_x, c1_vlen);
      c1_xbar /= static_cast<real_T>(c1_b_n);
      c1_emxInit_real_T1(chartInstance, &c1_d_st, &c1_absdiff, 1,
                         &c1_j_emlrtRTEI);
      c1_i12 = c1_absdiff->size[0];
      c1_absdiff->size[0] = c1_x->size[0];
      c1_emxEnsureCapacity_real_T1(chartInstance, &c1_d_st, c1_absdiff, c1_i12,
        &c1_g_emlrtRTEI);
      for (c1_k = 0; c1_k < c1_b_n; c1_k++) {
        c1_b_k = c1_k;
        c1_e_x = c1_x->data[c1_b_k] - c1_xbar;
        c1_f_x = c1_e_x;
        c1_g_x = c1_f_x;
        c1_d_y = muDoubleScalarAbs(c1_g_x);
        c1_absdiff->data[c1_b_k] = c1_d_y;
      }

      c1_c_n = c1_b_n;
      c1_d_n = c1_c_n;
      c1_e_n = c1_d_n;
      c1_var = c1_e_n;
      c1_n_t = (ptrdiff_t)c1_var;
      c1_incx_t = (ptrdiff_t)1;
      c1_c_y = dnrm2(&c1_n_t, &c1_absdiff->data[0], &c1_incx_t);
      c1_emxFree_real_T(chartInstance, &c1_absdiff);
      c1_h_x = static_cast<real_T>(c1_b_n - 1);
      c1_i_x = c1_h_x;
      c1_i_x = muDoubleScalarSqrt(c1_i_x);
      c1_c_y /= c1_i_x;
    }

    c1_Ku = 4.0 * c1_b_relay_amplitude / (3.1415926535897931 * c1_c_y);
    c1_b_st.site = &c1_g_emlrtRSI;
    c1_emxInit_real_T1(chartInstance, &c1_b_st, &c1_r3, 1, &c1_h_emlrtRTEI);
    c1_i13 = c1_r3->size[0];
    c1_r3->size[0] = chartInstance->c1_oscillation_data->size[0];
    c1_emxEnsureCapacity_real_T1(chartInstance, &c1_b_st, c1_r3, c1_i13,
      &c1_h_emlrtRTEI);
    c1_f_loop_ub = chartInstance->c1_oscillation_data->size[0] - 1;
    for (c1_i14 = 0; c1_i14 <= c1_f_loop_ub; c1_i14++) {
      c1_r3->data[c1_i14] = chartInstance->c1_oscillation_data->data[c1_i14];
    }

    c1_c_st.site = &c1_g_emlrtRSI;
    c1_diff(chartInstance, &c1_c_st, c1_r3, c1_x);
    c1_emxFree_real_T(chartInstance, &c1_r3);
    if ((c1_x->size[0] == 1) || (static_cast<real_T>(c1_x->size[0]) != 1.0)) {
      c1_b6 = true;
    } else {
      c1_b6 = false;
    }

    if (!c1_b6) {
      c1_e_y = NULL;
      sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      c1_g_y = NULL;
      sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                    false);
      sf_mex_call(&c1_b_st, &c1_d_emlrtMCI, "error", 0U, 2U, 14, c1_e_y, 14,
                  sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_g_y)));
    }

    c1_b_vlen = c1_x->size[0];
    c1_f_y = c1_blockedSummation(chartInstance, c1_x, c1_b_vlen);
    c1_Tu = c1_f_y / static_cast<real_T>(c1_x->size[0]);
    c1_emxFree_real_T(chartInstance, &c1_x);
    c1_b_Kp = 0.6 * c1_Ku;
    c1_b_Ki = 1.2 * c1_Ku / c1_Tu;
    c1_b_Kd = 0.075 * c1_Ku * c1_Tu;
  } else {
    c1_b_Kp = 0.05;
    c1_b_Ki = 0.0;
    c1_b_Kd = 0.0;
  }

  *chartInstance->c1_Kp = c1_b_Kp;
  *chartInstance->c1_Ki = c1_b_Ki;
  *chartInstance->c1_Kd = c1_b_Kd;
  c1_do_animation_call_c1_HardwareInteg_draft2(chartInstance);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 4U, *chartInstance->c1_Kp);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 5U, *chartInstance->c1_Ki);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, *chartInstance->c1_Kd);
}

static void ext_mode_exec_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
}

static void c1_update_jit_animation_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
}

static void c1_do_animation_call_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(8, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", chartInstance->c1_Kd, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", chartInstance->c1_Ki, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", chartInstance->c1_Kp, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_e_y = NULL;
  if (!chartInstance->c1_error_prev_not_empty) {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", &chartInstance->c1_error_prev, 0,
      0U, 0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_f_y = NULL;
  if (!chartInstance->c1_oscillation_data_not_empty) {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", chartInstance->
      c1_oscillation_data->data, 0, 0U, 1U, 0U, 2,
      chartInstance->c1_oscillation_data->size[0], 2), false);
  }

  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_g_y = NULL;
  if (!chartInstance->c1_error_prev_not_empty) {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", &chartInstance->c1_relay_state, 0,
      0U, 0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_h_y = NULL;
  if (!chartInstance->c1_error_prev_not_empty) {
    sf_mex_assign(&c1_h_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_h_y, sf_mex_create("y", &chartInstance->c1_time, 0, 0U, 0U,
      0U, 0), false);
  }

  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_HardwareInteg_draft2, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c1_y, 7, c1_i_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance, const mxArray *c1_st)
{
  c1_emxArray_real_T *c1_r;
  emlrtStack c1_b_st = { NULL,         /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c1_u;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_loop_ub;
  c1_b_st.tls = chartInstance->c1_fEmlrtCtx;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  *chartInstance->c1_Kd = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 0)), "Kd");
  *chartInstance->c1_Ki = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 1)), "Ki");
  *chartInstance->c1_Kp = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 2)), "Kp");
  chartInstance->c1_error_prev = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 3)), "error_prev",
    &chartInstance->c1_error_prev_not_empty);
  c1_emxInit_real_T(chartInstance, &c1_b_st, &c1_r, 2, static_cast<emlrtRTEInfo *>
                    (NULL));
  c1_e_emlrt_marshallIn(chartInstance, &c1_b_st, sf_mex_dup(sf_mex_getcell(c1_u,
    4)), "oscillation_data", &chartInstance->c1_oscillation_data_not_empty, c1_r);
  c1_i = chartInstance->c1_oscillation_data->size[0] *
    chartInstance->c1_oscillation_data->size[1];
  chartInstance->c1_oscillation_data->size[0] = c1_r->size[0];
  chartInstance->c1_oscillation_data->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st,
    chartInstance->c1_oscillation_data, c1_i, static_cast<emlrtRTEInfo *>(NULL));
  c1_loop_ub = c1_r->size[0] * c1_r->size[1] - 1;
  for (c1_i1 = 0; c1_i1 <= c1_loop_ub; c1_i1++) {
    chartInstance->c1_oscillation_data->data[c1_i1] = c1_r->data[c1_i1];
  }

  c1_emxFree_real_T(chartInstance, &c1_r);
  chartInstance->c1_relay_state = c1_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 5)), "relay_state",
    &chartInstance->c1_relay_state_not_empty);
  chartInstance->c1_time = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 6)), "time", &chartInstance->c1_time_not_empty);
  chartInstance->c1_is_active_c1_HardwareInteg_draft2 = c1_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 7)),
     "is_active_c1_HardwareInteg_draft2");
  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void initSimStructsc1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
}

static void initSubchartIOPointersc1_HardwareInteg_draft2
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
}

static void c1_diff(SFc1_HardwareInteg_draft2InstanceStruct *chartInstance,
                    const emlrtStack *c1_sp, c1_emxArray_real_T *c1_x,
                    c1_emxArray_real_T *c1_y)
{
  emlrtStack c1_b_st;
  emlrtStack c1_st;
  real_T c1_ySize[2];
  real_T c1_work_data[1];
  real_T c1_tmp1;
  real_T c1_tmp2;
  int32_T c1_b;
  int32_T c1_b_b;
  int32_T c1_dimSize;
  int32_T c1_i;
  int32_T c1_ixLead;
  int32_T c1_iyLead;
  int32_T c1_k;
  int32_T c1_m;
  int32_T c1_newDimSize;
  boolean_T c1_overflow;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_dimSize = c1_x->size[0];
  c1_newDimSize = c1_dimSize;
  c1_ySize[0] = static_cast<real_T>(c1_newDimSize - 1);
  c1_i = c1_y->size[0];
  c1_y->size[0] = static_cast<int32_T>(c1_ySize[0]);
  c1_st.site = &c1_h_emlrtRSI;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st, c1_y, c1_i,
    &c1_m_emlrtRTEI);
  c1_ixLead = 1;
  c1_iyLead = 0;
  c1_work_data[0] = c1_x->data[0];
  c1_st.site = &c1_emlrtRSI;
  c1_b = c1_dimSize;
  c1_b_b = c1_b;
  c1_overflow = (c1_b_b > 2147483646);
  if (c1_overflow) {
    c1_b_st.site = &c1_b_emlrtRSI;
    c1_check_forloop_overflow_error(chartInstance, &c1_b_st);
  }

  for (c1_m = 2; c1_m <= c1_dimSize; c1_m++) {
    c1_tmp1 = c1_x->data[c1_ixLead];
    for (c1_k = 0; c1_k < 1; c1_k++) {
      c1_tmp2 = c1_work_data[0];
      c1_work_data[0] = c1_tmp1;
      c1_tmp1 -= c1_tmp2;
    }

    c1_ixLead++;
    c1_y->data[c1_iyLead] = c1_tmp1;
    c1_iyLead++;
  }
}

static void c1_check_forloop_overflow_error
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance, const emlrtStack
   *c1_sp)
{
  static char_T c1_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c1_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_y = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c1_sp, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_y, 14, sf_mex_call
              (c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c1_sp, NULL,
    "message", 1U, 2U, 14, c1_b_y, 14, c1_c_y)));
}

static real_T c1_blockedSummation(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, c1_emxArray_real_T *c1_x, int32_T c1_vlen)
{
  real_T c1_s;
  real_T c1_y;
  int32_T c1_a;
  int32_T c1_b_ib;
  int32_T c1_b_vlen;
  int32_T c1_c_vlen;
  int32_T c1_inb;
  int32_T c1_lidx;
  int32_T c1_nfb;
  int32_T c1_nleft;
  if ((c1_x->size[0] == 0) || (c1_vlen == 0)) {
    c1_y = 0.0;
  } else {
    c1_b_vlen = c1_vlen;
    c1_c_vlen = c1_b_vlen;
    if (c1_c_vlen < 4096) {
      c1_y = c1_sumColumnB(chartInstance, c1_x, c1_c_vlen);
    } else {
      c1_a = c1_c_vlen;
      c1_nfb = static_cast<int32_T>(static_cast<uint32_T>(c1_a) >> 12);
      c1_inb = c1_nfb << 12;
      c1_lidx = c1_inb;
      c1_nleft = c1_c_vlen - c1_inb;
      c1_s = c1_sumColumnB4(chartInstance, c1_x, 1);
      for (c1_b_ib = 2; c1_b_ib <= c1_nfb; c1_b_ib++) {
        c1_s += c1_sumColumnB4(chartInstance, c1_x, 1 + ((c1_b_ib - 1) << 12));
      }

      if (c1_nleft > 0) {
        c1_s += c1_b_sumColumnB(chartInstance, c1_x, c1_nleft, c1_lidx + 1);
      }

      c1_y = c1_s;
    }
  }

  return c1_y;
}

static real_T c1_sumColumnB(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, c1_emxArray_real_T *c1_x, int32_T c1_vlen)
{
  real_T c1_b_y;
  real_T c1_c_y;
  real_T c1_y;
  int32_T c1_a;
  int32_T c1_b_k;
  int32_T c1_b_vlen;
  int32_T c1_b_vstart;
  int32_T c1_c_k;
  int32_T c1_c_vlen;
  int32_T c1_d_k;
  int32_T c1_e_k;
  int32_T c1_f_k;
  int32_T c1_g_k;
  int32_T c1_h_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i_k;
  int32_T c1_inb;
  int32_T c1_k;
  int32_T c1_lidx;
  int32_T c1_nfb;
  int32_T c1_nleft;
  int32_T c1_vstart;
  if (c1_vlen <= 1024) {
    c1_b_vlen = c1_vlen - 1;
    c1_y = c1_x->data[0];
    c1_i = c1_b_vlen - 1;
    for (c1_k = 0; c1_k <= c1_i; c1_k++) {
      c1_c_k = c1_k;
      c1_y += c1_x->data[c1_c_k + 1];
    }
  } else {
    c1_a = c1_vlen;
    c1_nfb = static_cast<int32_T>(static_cast<uint32_T>(c1_a) >> 10);
    c1_inb = c1_nfb << 10;
    c1_y = c1_x->data[0];
    for (c1_b_k = 0; c1_b_k < 1023; c1_b_k++) {
      c1_e_k = c1_b_k;
      c1_y += c1_x->data[c1_e_k + 1];
    }

    for (c1_d_k = 2; c1_d_k <= c1_nfb; c1_d_k++) {
      c1_vstart = (c1_d_k - 1) << 10;
      c1_b_y = c1_x->data[c1_vstart];
      for (c1_f_k = 0; c1_f_k < 1023; c1_f_k++) {
        c1_g_k = c1_f_k;
        c1_b_y += c1_x->data[(c1_vstart + c1_g_k) + 1];
      }

      c1_y += c1_b_y;
    }

    if (c1_vlen > c1_inb) {
      c1_nleft = c1_vlen - c1_inb;
      c1_lidx = c1_inb;
      c1_c_vlen = c1_nleft - 1;
      c1_b_vstart = c1_lidx;
      c1_c_y = c1_x->data[c1_b_vstart];
      c1_i1 = c1_c_vlen - 1;
      for (c1_h_k = 0; c1_h_k <= c1_i1; c1_h_k++) {
        c1_i_k = c1_h_k;
        c1_c_y += c1_x->data[(c1_b_vstart + c1_i_k) + 1];
      }

      c1_y += c1_c_y;
    }
  }

  return c1_y;
}

static real_T c1_sumColumnB4(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, c1_emxArray_real_T *c1_x, int32_T c1_vstart)
{
  real_T c1_psum1;
  real_T c1_psum2;
  real_T c1_psum3;
  real_T c1_psum4;
  int32_T c1_b_k;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_k;
  c1_i2 = c1_vstart + 1023;
  c1_i3 = c1_vstart + 2047;
  c1_i4 = c1_vstart + 3071;
  c1_psum1 = c1_x->data[c1_vstart - 1];
  c1_psum2 = c1_x->data[c1_i2];
  c1_psum3 = c1_x->data[c1_i3];
  c1_psum4 = c1_x->data[c1_i4];
  for (c1_k = 0; c1_k < 1023; c1_k++) {
    c1_b_k = c1_k + 1;
    c1_psum1 += c1_x->data[(c1_vstart + c1_b_k) - 1];
    c1_psum2 += c1_x->data[c1_i2 + c1_b_k];
    c1_psum3 += c1_x->data[c1_i3 + c1_b_k];
    c1_psum4 += c1_x->data[c1_i4 + c1_b_k];
  }

  return (c1_psum1 + c1_psum2) + (c1_psum3 + c1_psum4);
}

static real_T c1_b_sumColumnB(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, c1_emxArray_real_T *c1_x, int32_T c1_vlen, int32_T c1_vstart)
{
  real_T c1_b_y;
  real_T c1_c_y;
  real_T c1_y;
  int32_T c1_a;
  int32_T c1_b_k;
  int32_T c1_b_vlen;
  int32_T c1_b_vstart;
  int32_T c1_c_k;
  int32_T c1_c_vlen;
  int32_T c1_c_vstart;
  int32_T c1_d_k;
  int32_T c1_d_vstart;
  int32_T c1_e_k;
  int32_T c1_e_vstart;
  int32_T c1_f_k;
  int32_T c1_g_k;
  int32_T c1_h_k;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i_k;
  int32_T c1_inb;
  int32_T c1_k;
  int32_T c1_lidx;
  int32_T c1_nfb;
  int32_T c1_nleft;
  if (c1_vlen <= 1024) {
    c1_b_vlen = c1_vlen - 1;
    c1_b_vstart = c1_vstart - 1;
    c1_y = c1_x->data[c1_b_vstart];
    c1_i = c1_b_vlen - 1;
    for (c1_k = 0; c1_k <= c1_i; c1_k++) {
      c1_c_k = c1_k;
      c1_y += c1_x->data[(c1_b_vstart + c1_c_k) + 1];
    }
  } else {
    c1_a = c1_vlen;
    c1_nfb = static_cast<int32_T>(static_cast<uint32_T>(c1_a) >> 10);
    c1_inb = c1_nfb << 10;
    c1_c_vstart = c1_vstart - 1;
    c1_y = c1_x->data[c1_c_vstart];
    for (c1_b_k = 0; c1_b_k < 1023; c1_b_k++) {
      c1_e_k = c1_b_k;
      c1_y += c1_x->data[(c1_c_vstart + c1_e_k) + 1];
    }

    for (c1_d_k = 2; c1_d_k <= c1_nfb; c1_d_k++) {
      c1_d_vstart = (c1_vstart + ((c1_d_k - 1) << 10)) - 1;
      c1_b_y = c1_x->data[c1_d_vstart];
      for (c1_f_k = 0; c1_f_k < 1023; c1_f_k++) {
        c1_g_k = c1_f_k;
        c1_b_y += c1_x->data[(c1_d_vstart + c1_g_k) + 1];
      }

      c1_y += c1_b_y;
    }

    if (c1_vlen > c1_inb) {
      c1_nleft = c1_vlen - c1_inb;
      c1_lidx = c1_vstart + c1_inb;
      c1_c_vlen = c1_nleft - 1;
      c1_e_vstart = c1_lidx - 1;
      c1_c_y = c1_x->data[c1_e_vstart];
      c1_i1 = c1_c_vlen - 1;
      for (c1_h_k = 0; c1_h_k <= c1_i1; c1_h_k++) {
        c1_i_k = c1_h_k;
        c1_c_y += c1_x->data[(c1_e_vstart + c1_i_k) + 1];
      }

      c1_y += c1_c_y;
    }
  }

  return c1_y;
}

const mxArray *sf_c1_HardwareInteg_draft2_get_eml_resolved_functions_info()
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static real_T c1_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_b_Kd, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_Kd), &c1_thisId);
  sf_mex_destroy(&c1_b_Kd);
  return c1_y;
}

static real_T c1_b_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_d;
  real_T c1_y;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static real_T c1_c_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_b_error_prev, const char_T *c1_identifier,
  boolean_T *c1_svPtr)
{
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_error_prev),
    &c1_thisId, c1_svPtr);
  sf_mex_destroy(&c1_b_error_prev);
  return c1_y;
}

static real_T c1_d_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr)
{
  real_T c1_d;
  real_T c1_y;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d, 1, 0, 0U, 0, 0U, 0);
    c1_y = c1_d;
  }

  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_e_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const emlrtStack *c1_sp, const mxArray *c1_b_oscillation_data,
  const char_T *c1_identifier, boolean_T *c1_svPtr, c1_emxArray_real_T *c1_y)
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_f_emlrt_marshallIn(chartInstance, c1_sp, sf_mex_dup(c1_b_oscillation_data),
                        &c1_thisId, c1_svPtr, c1_y);
  sf_mex_destroy(&c1_b_oscillation_data);
}

static void c1_f_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const emlrtStack *c1_sp, const mxArray *c1_u, const
  emlrtMsgIdentifier *c1_parentId, boolean_T *c1_svPtr, c1_emxArray_real_T *c1_y)
{
  static uint32_T c1_uv1[2] = { MAX_uint32_T, 2U };

  static boolean_T c1_bv1[2] = { true, false };

  c1_emxArray_real_T *c1_r;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_loop_ub;
  uint32_T c1_uv[2];
  boolean_T c1_bv[2];
  c1_emxInit_real_T(chartInstance, c1_sp, &c1_r, 2, static_cast<emlrtRTEInfo *>
                    (NULL));
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_uv[c1_i] = c1_uv1[c1_i];
  }

  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    c1_i1 = c1_r->size[0] * c1_r->size[1];
    c1_r->size[0] = sf_mex_get_dimension(c1_u, 0);
    c1_r->size[1] = sf_mex_get_dimension(c1_u, 1);
    c1_emxEnsureCapacity_real_T(chartInstance, c1_sp, c1_r, c1_i1,
      static_cast<emlrtRTEInfo *>(NULL));
    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_bv[c1_i2] = c1_bv1[c1_i2];
    }

    sf_mex_import_vs(c1_parentId, sf_mex_dup(c1_u), c1_r->data, 1, 0, 0U, 1, 0U,
                     2, c1_bv, c1_uv, c1_r->size);
    c1_i3 = c1_y->size[0] * c1_y->size[1];
    c1_y->size[0] = c1_r->size[0];
    c1_y->size[1] = 2;
    c1_emxEnsureCapacity_real_T(chartInstance, c1_sp, c1_y, c1_i3,
      static_cast<emlrtRTEInfo *>(NULL));
    c1_loop_ub = (c1_r->size[0] << 1) - 1;
    for (c1_i4 = 0; c1_i4 <= c1_loop_ub; c1_i4++) {
      c1_y->data[c1_i4] = c1_r->data[c1_i4];
    }
  }

  sf_mex_destroy(&c1_u);
  c1_emxFree_real_T(chartInstance, &c1_r);
}

static uint8_T c1_g_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_HardwareInteg_draft2, const
  char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  c1_thisId.fIdentifier = const_cast<const char_T *>(c1_identifier);
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_HardwareInteg_draft2), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_HardwareInteg_draft2);
  return c1_y;
}

static uint8_T c1_h_emlrt_marshallIn(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_u;
  uint8_T c1_y;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_slStringInitializeDynamicBuffers
  (SFc1_HardwareInteg_draft2InstanceStruct *chartInstance)
{
}

static void c1_chart_data_browse_helper(SFc1_HardwareInteg_draft2InstanceStruct *
  chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig)
{
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d2;
  real_T c1_d3;
  real_T c1_d4;
  real_T c1_d5;
  real_T c1_d6;
  *c1_mxData = NULL;
  *c1_mxData = NULL;
  *c1_isValueTooBig = 0U;
  switch (c1_ssIdNumber) {
   case 4U:
    c1_d = *chartInstance->c1_pressure;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 5U:
    c1_d1 = *chartInstance->c1_Kp;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c1_d2 = *chartInstance->c1_setpoint;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c1_d3 = *chartInstance->c1_relay_amplitude;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c1_d4 = *chartInstance->c1_dt;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    c1_d5 = *chartInstance->c1_Ki;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d5, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 10U:
    c1_d6 = *chartInstance->c1_Kd;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d6, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void c1_emxInit_real_T(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxArray_real_T *c1_emxArray;
  int32_T c1_i;
  *c1_pEmxArray = static_cast<c1_emxArray_real_T *>(emlrtMallocMex(sizeof
    (c1_emxArray_real_T)));
  if ((void *)*c1_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray = *c1_pEmxArray;
  c1_emxArray->data = static_cast<real_T *>(NULL);
  c1_emxArray->numDimensions = c1_numDimensions;
  c1_emxArray->size = static_cast<int32_T *>(emlrtMallocMex(sizeof(int32_T) *
    static_cast<uint32_T>(c1_numDimensions)));
  if ((void *)c1_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray->allocatedSize = 0;
  c1_emxArray->canFreeData = true;
  for (c1_i = 0; c1_i < c1_numDimensions; c1_i++) {
    c1_emxArray->size[c1_i] = 0;
  }
}

static void c1_emxFree_real_T(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, c1_emxArray_real_T **c1_pEmxArray)
{
  if (*c1_pEmxArray != static_cast<c1_emxArray_real_T *>(NULL)) {
    if (((*c1_pEmxArray)->data != static_cast<real_T *>(NULL)) && (*c1_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c1_pEmxArray)->data);
    }

    emlrtFreeMex((*c1_pEmxArray)->size);
    emlrtFreeMex(*c1_pEmxArray);
    *c1_pEmxArray = static_cast<c1_emxArray_real_T *>(NULL);
  }
}

static void c1_emxEnsureCapacity_real_T(SFc1_HardwareInteg_draft2InstanceStruct *
  chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  int32_T c1_newCapacity;
  int32_T c1_newNumel;
  void *c1_newData;
  if (c1_oldNumel < 0) {
    c1_oldNumel = 0;
  }

  c1_newNumel = 1;
  for (c1_i = 0; c1_i < c1_emxArray->numDimensions; c1_i++) {
    c1_newNumel = static_cast<int32_T>(emlrtSizeMulR2012b((size_t)
      static_cast<uint32_T>(c1_newNumel), (size_t)static_cast<uint32_T>
      (c1_emxArray->size[c1_i]), c1_srcLocation, (void *)c1_sp));
  }

  if (c1_newNumel > c1_emxArray->allocatedSize) {
    c1_newCapacity = c1_emxArray->allocatedSize;
    if (c1_newCapacity < 16) {
      c1_newCapacity = 16;
    }

    while (c1_newCapacity < c1_newNumel) {
      if (c1_newCapacity > 1073741823) {
        c1_newCapacity = MAX_int32_T;
      } else {
        c1_newCapacity <<= 1;
      }
    }

    c1_newData = emlrtCallocMex(static_cast<uint32_T>(c1_newCapacity), sizeof
      (real_T));
    if (c1_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
    }

    if (c1_emxArray->data != NULL) {
      memcpy(c1_newData, c1_emxArray->data, sizeof(real_T)
             * static_cast<uint32_T>(c1_oldNumel));
      if (c1_emxArray->canFreeData) {
        emlrtFreeMex(c1_emxArray->data);
      }
    }

    c1_emxArray->data = static_cast<real_T *>(c1_newData);
    c1_emxArray->allocatedSize = c1_newCapacity;
    c1_emxArray->canFreeData = true;
  }
}

static void c1_emxEnsureCapacity_real_T1(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  int32_T c1_newCapacity;
  int32_T c1_newNumel;
  void *c1_newData;
  if (c1_oldNumel < 0) {
    c1_oldNumel = 0;
  }

  c1_newNumel = 1;
  for (c1_i = 0; c1_i < c1_emxArray->numDimensions; c1_i++) {
    c1_newNumel = static_cast<int32_T>(emlrtSizeMulR2012b((size_t)
      static_cast<uint32_T>(c1_newNumel), (size_t)static_cast<uint32_T>
      (c1_emxArray->size[c1_i]), c1_srcLocation, (void *)c1_sp));
  }

  if (c1_newNumel > c1_emxArray->allocatedSize) {
    c1_newCapacity = c1_emxArray->allocatedSize;
    if (c1_newCapacity < 16) {
      c1_newCapacity = 16;
    }

    while (c1_newCapacity < c1_newNumel) {
      if (c1_newCapacity > 1073741823) {
        c1_newCapacity = MAX_int32_T;
      } else {
        c1_newCapacity <<= 1;
      }
    }

    c1_newData = emlrtCallocMex(static_cast<uint32_T>(c1_newCapacity), sizeof
      (real_T));
    if (c1_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
    }

    if (c1_emxArray->data != NULL) {
      memcpy(c1_newData, c1_emxArray->data, sizeof(real_T)
             * static_cast<uint32_T>(c1_oldNumel));
      if (c1_emxArray->canFreeData) {
        emlrtFreeMex(c1_emxArray->data);
      }
    }

    c1_emxArray->data = static_cast<real_T *>(c1_newData);
    c1_emxArray->allocatedSize = c1_newCapacity;
    c1_emxArray->canFreeData = true;
  }
}

static void c1_emxInit_real_T1(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxArray_real_T *c1_emxArray;
  int32_T c1_i;
  *c1_pEmxArray = static_cast<c1_emxArray_real_T *>(emlrtMallocMex(sizeof
    (c1_emxArray_real_T)));
  if ((void *)*c1_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray = *c1_pEmxArray;
  c1_emxArray->data = static_cast<real_T *>(NULL);
  c1_emxArray->numDimensions = c1_numDimensions;
  c1_emxArray->size = static_cast<int32_T *>(emlrtMallocMex(sizeof(int32_T) *
    static_cast<uint32_T>(c1_numDimensions)));
  if ((void *)c1_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray->allocatedSize = 0;
  c1_emxArray->canFreeData = true;
  for (c1_i = 0; c1_i < c1_numDimensions; c1_i++) {
    c1_emxArray->size[c1_i] = 0;
  }
}

static void init_dsm_address_info(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance)
{
}

static void init_simulink_io_address(SFc1_HardwareInteg_draft2InstanceStruct
  *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_pressure = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_Kp = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_setpoint = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_relay_amplitude = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_dt = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    3);
  chartInstance->c1_Ki = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_Kd = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_HardwareInteg_draft2_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3244219117U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(134060204U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2535746760U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1184097010U);
}

mxArray *sf_c1_HardwareInteg_draft2_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString("coder.internal.blas.BLASApi"));
  return(mxcell3p);
}

mxArray *sf_c1_HardwareInteg_draft2_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_vars");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("oscillation_data");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_HardwareInteg_draft2_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_HardwareInteg_draft2(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrlVF1Kw0AQnpQYjILkwQNE8QDVJ9/cR4P47A/Kdki2spAmYbNW++ZRPIpH8Cg9grvZ1KYhGGg"
    "DjTowDN/AN/tlPiZgBdeg4kDl3AVwVN1VOQATOyW2KtX07W/sq5SzjOl+LsIgUjXBSYHx+TVIxm"
    "kx/xyW852G+VZlvlv2TcwvNuOfEM0fVvh2A39Q4XsKXUVmL4v9bE//8Xr6eV/0H66nP+tKv0c24"
    "5v3SYv+vRX9BjMhUkEzwabLOZ/w851ZtTtb7EVzYuCQNehxWvbplpqKIDekqB93nezlt/jj1fzR"
    "meYhj2OUPE1ohBJ74Q88Gn/eRv/Kn/2aPxoLFuOM5hIl68/9wH15Pw9/yp+2/7O94o8Nkk9YL/x"
    "4Hxk/fOyJH34nOm5b/Diq3YvGPKcYSj5lNDyllyiiFxQsSCR7opHAsTyrfecXO7JSbw=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_HardwareInteg_draft2_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s14OKzyCMc7Gpvp9ZDsP3NB";
}

static void sf_opaque_initialize_c1_HardwareInteg_draft2(void *chartInstanceVar)
{
  initialize_params_c1_HardwareInteg_draft2
    ((SFc1_HardwareInteg_draft2InstanceStruct*) chartInstanceVar);
  initialize_c1_HardwareInteg_draft2((SFc1_HardwareInteg_draft2InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_HardwareInteg_draft2(void *chartInstanceVar)
{
  enable_c1_HardwareInteg_draft2((SFc1_HardwareInteg_draft2InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_HardwareInteg_draft2(void *chartInstanceVar)
{
  disable_c1_HardwareInteg_draft2((SFc1_HardwareInteg_draft2InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_HardwareInteg_draft2(void *chartInstanceVar)
{
  sf_gateway_c1_HardwareInteg_draft2((SFc1_HardwareInteg_draft2InstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_HardwareInteg_draft2(SimStruct*
  S)
{
  return get_sim_state_c1_HardwareInteg_draft2
    ((SFc1_HardwareInteg_draft2InstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_HardwareInteg_draft2(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c1_HardwareInteg_draft2((SFc1_HardwareInteg_draft2InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_HardwareInteg_draft2(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_HardwareInteg_draft2InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_HardwareInteg_draft2_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_HardwareInteg_draft2
      ((SFc1_HardwareInteg_draft2InstanceStruct*) chartInstanceVar);
    ((SFc1_HardwareInteg_draft2InstanceStruct*) chartInstanceVar)->
      ~SFc1_HardwareInteg_draft2InstanceStruct();
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_HardwareInteg_draft2(void *chartInstanceVar)
{
  mdl_start_c1_HardwareInteg_draft2((SFc1_HardwareInteg_draft2InstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc1_HardwareInteg_draft2InstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c1_HardwareInteg_draft2(void
  *chartInstanceVar)
{
  mdl_terminate_c1_HardwareInteg_draft2((SFc1_HardwareInteg_draft2InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_HardwareInteg_draft2(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_HardwareInteg_draft2
      ((SFc1_HardwareInteg_draft2InstanceStruct*)sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc1_HardwareInteg_draft2
      ((SFc1_HardwareInteg_draft2InstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_HardwareInteg_draft2_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [25] = {
    "eNrtWU1vG0UYHgcTNU1T5YCEkJBIEAculUgKAiQETvzRWk2aCCcpVFTuZPe1PfLs7HZm1o4rDhz",
    "5Gf0DnDnCkSNHbkjwB+AEEhfemV07juPaO05E3ZaRNpvx7jPv98fMklx1l+C4jte364Qs4v0KXg",
    "skGa+m89zQlfyeJ5+k86+XCfFCH5oganGjwU6I2xBxsE8lDRRxH4IG8DmokMeahaIqGmF2LBMNk",
    "CA8XCAKpXaiq1gQcybalVh4hrK612Jeq9YKY+5v44LU3xO89zS6Uaz3kWKJSfB0BcDXLRnGzVaF",
    "0+ZkLUjdLbbAa6s4cNaVAl2LIyOq2o25ZhGH8gl4VaE0RS2oKfLWNNVQ1CduSjbyqlofHQYRZ1R",
    "k13WLqhpE6B0aDiMf/+7FGrWXCeu1qNTb0KIdUDusbamHAjJRZwrfPmaC6lAyyssBL5rVMsq7z1",
    "HGXQwJ7mojlHdbAm1HIRPaMSBqFdRzWdBjDiU4jpuOdGvwKDbRcMSgC9LNvo1i2AFJm7An3Hi2N",
    "iqfWKccxFJGrGYBHFG55aHvKvDd8gYGnapRdEc4wGWcsGBVXFUHknXQN1xzXdWE/0y5Lg4S71cz",
    "YS3dcgec/WpAt+KJIuVcuWEPwmgHOsAt/RLVdAZsQt8BrBTzD0L0DpNtHDNWLBhGQoothsJn2b2",
    "yM4Kyhe0uFqkMcBaYMAAf1TxgfbDQtDiKlQ6DIqac0s5ORnrnsVWhQTaoB5lrjKRMATJs/cqRrs",
    "+UCSREo5a0lTLzCkkMzgQlqhGLUjeUbdSxazE71ZWJBDc0+E1MzBpskiujdx9RHmfkOVBNjB90j",
    "0OFWdaNLmJN/MwE9qjXAt9UTsZhF/MsLpDVxMqU/C2UtsN0rwTKkyzKGkkxJnQsukZLB70IDkVb",
    "hF1RkWFQSzuvCX4FgFmDSsFEcxtLuOxVkPlsXEt4dGCzu2uTY/RMNafHxjdugcBqaGQ1XQP1MKr",
    "KAltkZOgi2Bp7jE2MUExpLNS9pNQndc/077fJaf+eH9O/vz7Uv6+mc2+jfptKv0ulDf5m3Ze0oT",
    "fteu8NrXctw36gz8ckHDmHIwNc//7uED43hi4Zuo/SW1o4+35+hN4C/pLDYXCFIdwKmYxbTHX25",
    "w8/fX9jZeWvXx/8Lv5547vfptHPnaOfs/8b3JOrbvut6+n8zX7fNMjSnXOJbFZ/UBvv79153Cvu",
    "eh/eijrRx/dLav/m3W273h9Lk/m9MsJvf75mejUMYpsTpFf1032bmdM42U+Y9T8a4ndxij6Whvw",
    "JOfvsYvh3CqN2HKevhTP6WiB3/LN+++z4f3s2/tm88P/abPxHl8X/auFi+IR+YQr/V0fizcxByl",
    "DWIwmd03V+Jm55oa8Xg+GEkWgMP4tT9LmU8mRH4V7B3n/88lL08rzYZ3XEPuYKlcc4t+W47uP2Y",
    "y7sQx4k9vnm4Utln+UR+yzbfo3TXt12mvMTP+R+Gj9fvVD2mZaf82fsk7fnM3NhjycPE3us0Tmx",
    "x9ql8PHFFHusj8TLuj2rq1OzI4P60zr/83LO2t+64sj/uLnA5V5C+bLsb/Mz4l6ZEUf+Y9xF5XP",
    "dtz/v70+qh2Tk/dU5lmNSvnc5v5k3uX5x7DveSuefDr4fFFuM+2NOMNPHO0Ab456+IP79t6P++u",
    "dJZaO/9EPz/ZtbgvKeYsnxa//nfWm+Fw4eSaBq/Lnws6gnWfcj10bi28y7TPhhV93Y2Pxg8yL16",
    "V9SVVX5",
    ""
  };

  static char newstr [1733] = "";
  newstr[0] = '\0';
  for (i = 0; i < 25; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_HardwareInteg_draft2(SimStruct *S)
{
  const char* newstr = sf_c1_HardwareInteg_draft2_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3083386865U));
  ssSetChecksum1(S,(4144827693U));
  ssSetChecksum2(S,(1860394463U));
  ssSetChecksum3(S,(3802995195U));
}

static void mdlRTW_c1_HardwareInteg_draft2(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_HardwareInteg_draft2(SimStruct *S)
{
  SFc1_HardwareInteg_draft2InstanceStruct *chartInstance;
  chartInstance = (SFc1_HardwareInteg_draft2InstanceStruct *)utMalloc(sizeof
    (SFc1_HardwareInteg_draft2InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_HardwareInteg_draft2InstanceStruct));
  chartInstance = new (chartInstance) SFc1_HardwareInteg_draft2InstanceStruct;
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S)> 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_HardwareInteg_draft2;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c1_JITStateAnimation,
    chartInstance->c1_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_HardwareInteg_draft2(chartInstance);
}

void c1_HardwareInteg_draft2_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_HardwareInteg_draft2(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_HardwareInteg_draft2(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_HardwareInteg_draft2(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_HardwareInteg_draft2_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
