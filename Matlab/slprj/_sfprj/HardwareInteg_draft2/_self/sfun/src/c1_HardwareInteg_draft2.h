#ifndef __c1_HardwareInteg_draft2_h__
#define __c1_HardwareInteg_draft2_h__

/* Forward Declarations */
struct c1_emxArray_real_T;
struct SFc1_HardwareInteg_draft2InstanceStruct;

/* Type Definitions */
#ifndef struct_c1_emxArray_real_T
#define struct_c1_emxArray_real_T

struct c1_emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_c1_emxArray_real_T */

#ifndef typedef_c1_HardwareInteg_draft2StackData
#define typedef_c1_HardwareInteg_draft2StackData

typedef struct {
} c1_HardwareInteg_draft2StackData;

#endif                                 /* typedef_c1_HardwareInteg_draft2StackData */

#ifndef struct_SFc1_HardwareInteg_draft2InstanceStruct
#define struct_SFc1_HardwareInteg_draft2InstanceStruct

struct SFc1_HardwareInteg_draft2InstanceStruct
{
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c1_sfEvent;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_HardwareInteg_draft2;
  uint8_T c1_JITStateAnimation[1];
  uint8_T c1_JITTransitionAnimation[1];
  int32_T c1_IsDebuggerActive;
  int32_T c1_IsSequenceViewerPresent;
  int32_T c1_SequenceViewerOptimization;
  int32_T c1_IsHeatMapPresent;
  void *c1_RuntimeVar;
  real_T c1_error_prev;
  boolean_T c1_error_prev_not_empty;
  real_T c1_relay_state;
  boolean_T c1_relay_state_not_empty;
  c1_emxArray_real_T *c1_oscillation_data;
  boolean_T c1_oscillation_data_not_empty;
  real_T c1_time;
  boolean_T c1_time_not_empty;
  uint32_T c1_mlFcnLineNumber;
  void *c1_fcnDataPtrs[10];
  char_T *c1_dataNames[10];
  uint32_T c1_numFcnVars;
  uint32_T c1_ssIds[10];
  uint32_T c1_statuses[10];
  void *c1_outMexFcns[10];
  void *c1_inMexFcns[10];
  CovrtStateflowInstance *c1_covrtInstance;
  void *c1_fEmlrtCtx;
  real_T *c1_pressure;
  real_T *c1_Kp;
  real_T *c1_setpoint;
  real_T *c1_relay_amplitude;
  real_T *c1_dt;
  real_T *c1_Ki;
  real_T *c1_Kd;
};

#endif                                 /* struct_SFc1_HardwareInteg_draft2InstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_HardwareInteg_draft2_get_eml_resolved_functions_info
  ();

/* Function Definitions */
extern void sf_c1_HardwareInteg_draft2_get_check_sum(mxArray *plhs[]);
extern void c1_HardwareInteg_draft2_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
