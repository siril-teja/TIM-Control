#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
PmfMessageId sm_ssci_recordRunTimeError ( const char * errorId , const char *
errorMsg , NeuDiagnosticManager * mgr ) ;
#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))
PmIntVector * pm_create_int_vector ( size_t , PmAllocator * ) ; int_T
pm_create_int_vector_fields ( PmIntVector * , size_t , PmAllocator * ) ;
int_T pm_create_real_vector_fields ( PmRealVector * , size_t , PmAllocator *
) ; int_T pm_create_char_vector_fields ( PmCharVector * , size_t ,
PmAllocator * ) ; int_T pm_create_bool_vector_fields ( PmBoolVector * ,
size_t , PmAllocator * ) ; void pm_rv_equals_rv ( const PmRealVector * ,
const PmRealVector * ) ; extern const NeAssertData
draft7_a151ee3d_1_assertData [ ] ; extern const NeZCData
draft7_a151ee3d_1_ZCData [ ] ; void
draft7_a151ee3d_1_computeRuntimeParameters ( const double *
runtimeRootVariables , double * runtimeParameters ) ; void
draft7_a151ee3d_1_validateRuntimeParameters ( const double *
runtimeParameters , int32_T * assertSatisfactionFlags ) ; void
draft7_a151ee3d_1_computeAsmRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void draft7_a151ee3d_1_computeSimRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void draft7_a151ee3d_1_initializeGeometries ( const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ) ; PmfMessageId
draft7_a151ee3d_1_compDerivs ( const RuntimeDerivedValuesBundle * , const int
* , const double * , const int * , const double * , const double * , const
double * , const double * , double * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId draft7_a151ee3d_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
draft7_a151ee3d_1_numJacPerturbHiBounds ( const RuntimeDerivedValuesBundle *
, const int * , const double * , const int * , const double * , const double
* , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
draft7_a151ee3d_1_checkDynamics ( const RuntimeDerivedValuesBundle * , const
double * , const double * , const double * , const double * , const double *
, const int * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
draft7_a151ee3d_1_compOutputsDyn ( const RuntimeDerivedValuesBundle * , const
int * , const double * , const int * , const double * , const double * ,
const double * , const double * , double * , double * , int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
draft7_a151ee3d_1_compOutputsKin ( const RuntimeDerivedValuesBundle * , const
double * , const int * , const double * , const double * , const double * ,
const double * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
draft7_a151ee3d_1_compOutputs ( const RuntimeDerivedValuesBundle * , const
int * , const double * , const int * , const double * , const double * ,
const double * , const double * , double * , double * , int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
draft7_a151ee3d_1_computeAsmModeVector ( const double * , const double * ,
const double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId draft7_a151ee3d_1_computeSimModeVector ( const double * , const
double * , const double * , int * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId draft7_a151ee3d_1_computeZeroCrossings ( const
RuntimeDerivedValuesBundle * , const double * , const double * , const double
* , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId draft7_a151ee3d_1_recordLog
( const RuntimeDerivedValuesBundle * , const int * , const double * , const
int * , const double * , const double * , const double * , double * , double
* , NeuDiagnosticManager * neDiagMgr ) ; void draft7_a151ee3d_1_setTargets (
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , CTarget *
targets ) ; void draft7_a151ee3d_1_resetAsmStateVector ( const void * mech ,
double * stateVector ) ; void draft7_a151ee3d_1_resetSimStateVector ( const
void * mech , double * stateVector ) ; void
draft7_a151ee3d_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
modeVector , const double * motionData , double * stateVector ) ; void
draft7_a151ee3d_1_computeDiscreteState ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , double *
stateVector ) ; void draft7_a151ee3d_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * stateVector ) ; void
draft7_a151ee3d_1_perturbAsmJointPrimitiveState ( const void * mech , size_t
stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
draft7_a151ee3d_1_perturbSimJointPrimitiveState ( const void * mech , size_t
stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
draft7_a151ee3d_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double magnitude , boolean_T doPerturbVelocity , double *
stateVector ) ; void draft7_a151ee3d_1_computePosDofBlendMatrix ( const void
* mech , size_t stageIdx , size_t primitiveIdx , const double * stateVector ,
int partialType , double * matrix ) ; void
draft7_a151ee3d_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primitiveIdx , const double * stateVector , int partialType
, double * matrix ) ; void draft7_a151ee3d_1_projectPartiallyTargetedPos (
const void * mech , size_t stageIdx , size_t primitiveIdx , const double *
origStateVector , int partialType , double * stateVector ) ; void
draft7_a151ee3d_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , double * motionData ) ; size_t
draft7_a151ee3d_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData , double *
error ) ; size_t draft7_a151ee3d_1_computeAssemblyJacobian ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , boolean_T forVelocitySatisfaction , const double *
stateVector , const int * modeVector , const double * motionData , double * J
) ; size_t draft7_a151ee3d_1_computeFullAssemblyJacobian ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
double * stateVector , const int * modeVector , const double * motionData ,
double * J ) ; boolean_T draft7_a151ee3d_1_isInKinematicSingularity ( const
void * mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
size_t constraintIdx , const int * modeVector , const double * motionData ) ;
void draft7_a151ee3d_1_convertStateVector ( const void * asmMech , const
RuntimeDerivedValuesBundle * asmRuntimeDerivedValuesBundle , const void *
simMech , const double * asmStateVector , const int * asmModeVector , const
int * simModeVector , double * simStateVector ) ; void
draft7_a151ee3d_1_constructStateVector ( const void * mech , const double *
solverStateVector , const double * u , const double * uDot , const double *
discreteStateVector , double * fullStateVector ) ; void
draft7_a151ee3d_1_extractSolverStateVector ( const void * mech , const double
* fullStateVector , double * solverStateVector ) ; boolean_T
draft7_a151ee3d_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; boolean_T draft7_a151ee3d_1_isVelocityViolation ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
int * constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; PmfMessageId draft7_a151ee3d_1_projectStateSim ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
int * constraintEqnEnableFlags , const int * modeVector , double *
stateVector , void * neDiagMgr ) ; void
draft7_a151ee3d_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , const int * modeVector , double * error ) ; void
draft7_a151ee3d_1_resetModeVector ( const void * mech , int * modeVector ) ;
boolean_T draft7_a151ee3d_1_hasJointDisToNormModeChange ( const void * mech ,
const int * prevModeVector , const int * modeVector ) ; PmfMessageId
draft7_a151ee3d_1_performJointDisToNormModeChange ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const int * prevModeVector , const int *
modeVector , const double * inputVector , double * stateVector , void *
neDiagMgr ) ; void draft7_a151ee3d_1_onModeChangedCutJoints ( const void *
mech , const int * prevModeVector , const int * modeVector , double *
stateVector ) ; PmfMessageId draft7_a151ee3d_1_assemble ( const double * u ,
double * udot , double * x , NeuDiagnosticManager * neDiagMgr ) { ( void ) x
; ( void ) u ; ( void ) udot ; ( void ) neDiagMgr ; return NULL ; } static
void dae_cg_setParameters_function ( const NeDae * dae , const
NeParameterBundle * paramBundle ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeRootVariables = paramBundle ->
mRealParameters . mX ; if ( smData -> mRuntimeParameterScalars . mN == 0 )
return ; draft7_a151ee3d_1_computeRuntimeParameters ( runtimeRootVariables ,
smData -> mRuntimeParameterScalars . mX ) ;
draft7_a151ee3d_1_computeAsmRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mAsmRuntimeDerivedValuesBundle ) ;
draft7_a151ee3d_1_computeSimRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mSimRuntimeDerivedValuesBundle ) ; draft7_a151ee3d_1_initializeGeometries ( &
smData -> mSimRuntimeDerivedValuesBundle ) ;
sm_core_computeRedundantConstraintEquations ( & dae -> mPrivateData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ) ;
#if 0
{ size_t i ; const size_t n = smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mSize ; pmf_printf (
"\nRuntime Enabled Equations (%lu)\n" , n ) ; for ( i = 0 ; i < n ; ++ i )
pmf_printf ( "  %2lu:  %d\n" , i , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues [ i ] ) ; }
#endif
} static PmfMessageId dae_cg_pAssert_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeParams = smData ->
mRuntimeParameterScalars . mX ; int32_T * assertSatisfactionFlags =
daeMethodOutput -> mPASSERT . mX ; ( void ) systemInput ; ( void ) neDiagMgr
; draft7_a151ee3d_1_validateRuntimeParameters ( runtimeParams ,
assertSatisfactionFlags ) ; return NULL ; } static PmfMessageId
dae_cg_deriv_method ( const NeDae * dae , const NeSystemInput * systemInput ,
NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) {
const NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId
= NULL ; double errorResult = 0.0 ; if ( smData ->
mCachedDerivativesAvailable ) memcpy ( daeMethodOutput -> mXP0 . mX , smData
-> mCachedDerivatives . mX , 42 * sizeof ( real_T ) ) ; else errorId =
draft7_a151ee3d_1_compDerivs ( & smData -> mSimRuntimeDerivedValuesBundle ,
smData -> mSimulationDelegate . mRunTimeEnabledEquations . mValues ,
systemInput -> mX . mX , systemInput -> mM . mX , systemInput -> mU . mX ,
systemInput -> mU . mX + 172 , systemInput -> mV . mX + 172 , systemInput ->
mD . mX , daeMethodOutput -> mXP0 . mX , & errorResult , neDiagMgr ) ; return
errorId ; } static PmfMessageId dae_cg_numJacPerturbLoBounds_method ( const
NeDae * dae , const NeSystemInput * systemInput , NeDaeMethodOutput *
daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData
* smData = dae -> mPrivateData ; PmfMessageId errorId = NULL ; double
errorResult = 0.0 ; errorId = draft7_a151ee3d_1_numJacPerturbLoBounds ( &
smData -> mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 172 , systemInput
-> mV . mX + 172 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_LO
. mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbHiBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
draft7_a151ee3d_1_numJacPerturbHiBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 172 , systemInput
-> mV . mX + 172 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_HI
. mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_compOutputs_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { PmfMessageId errorId = NULL ; NeDaePrivateData * smData = dae
-> mPrivateData ; if ( smData -> mDoComputeDynamicOutputs ) { int derivErr =
0 ; double errorResult = 0.0 ; errorId = draft7_a151ee3d_1_compOutputsDyn ( &
smData -> mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 172 , systemInput
-> mV . mX + 172 , systemInput -> mD . mX , smData -> mCachedDerivatives . mX
, daeMethodOutput -> mY . mX , & derivErr , & errorResult , neDiagMgr ) ;
smData -> mCachedDerivativesAvailable = ( derivErr == 0 ) ; } else errorId =
draft7_a151ee3d_1_compOutputsKin ( & smData -> mSimRuntimeDerivedValuesBundle
, systemInput -> mX . mX , systemInput -> mM . mX , systemInput -> mU . mX ,
systemInput -> mU . mX + 172 , systemInput -> mV . mX + 172 , systemInput ->
mD . mX , daeMethodOutput -> mY . mX , neDiagMgr ) ; return errorId ; }
static PmfMessageId dae_cg_mode_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; PmfMessageId errorId = NULL ; double errorResult = 0.0 ;
errorId = draft7_a151ee3d_1_computeSimModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 172 , systemInput -> mV . mX + 172 , daeMethodOutput
-> mMODE . mX , & errorResult , neDiagMgr ) ; memcpy ( smData ->
mCachedModeVector . mX , daeMethodOutput -> mMODE . mX , 0 * sizeof ( int32_T
) ) ; return errorId ; } static PmfMessageId dae_cg_zeroCrossing_method (
const NeDae * dae , const NeSystemInput * systemInput , NeDaeMethodOutput *
daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData
* smData = dae -> mPrivateData ; double errorResult = 0.0 ; return
draft7_a151ee3d_1_computeZeroCrossings ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 172 , systemInput -> mV . mX + 172 ,
systemInput -> mD . mX , daeMethodOutput -> mZC . mX , & errorResult ,
neDiagMgr ) ; } static void dae_cg_setupLoggerFcn ( const NeDae * dae ,
NeLoggerBuilder * neLoggerBuilder ) { ( void ) dae ; ( void ) neLoggerBuilder
; } static PmfMessageId dae_cg_recordLog_method ( const NeDae * dae , const
NeSystemInput * systemInput , PmRealVector * output , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; double *
fullStateVector = smData -> mSimulationFullStateVector . mX ;
draft7_a151ee3d_1_constructStateVector ( NULL , systemInput -> mX . mX ,
systemInput -> mU . mX , systemInput -> mU . mX + 172 , systemInput -> mD .
mX , fullStateVector ) ; errorId = draft7_a151ee3d_1_recordLog ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , fullStateVector , systemInput -> mM . mX
, systemInput -> mU . mX , systemInput -> mU . mX + 172 , systemInput -> mV .
mX + 172 , output -> mX , & errorResult , neDiagMgr ) ; return errorId ; }
static PmfMessageId dae_cg_project_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 172 , systemInput -> mD . mX , systemInput ->
mX . mX , neDiagMgr ) ; } static PmfMessageId dae_cg_check_solve ( const
NeDae * dae , const NeSystemInput * systemInput , NeuDiagnosticManager *
neDiagMgr ) { NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId
errorId = NULL ; if ( smData -> mNumConstraintEqns > 0 ) errorId =
sm_core_projectState ( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 172 , systemInput -> mD . mX , systemInput ->
mX . mX , neDiagMgr ) ; if ( errorId == NULL ) { double result = 0.0 ;
errorId = draft7_a151ee3d_1_checkDynamics ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 172 , systemInput -> mV . mX + 172 ,
systemInput -> mD . mX , systemInput -> mM . mX , & result , neDiagMgr ) ; }
return errorId ; } static PmfMessageId dae_cg_CIC_MODE_solve ( const NeDae *
dae , const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr )
{ NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId =
NULL ; double errorResult = 0.0 ; const size_t mvSize = smData ->
mModeVectorSize ; boolean_T modeChanged = false ; if ( mvSize > 0 ) { errorId
= draft7_a151ee3d_1_computeSimModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 172 , systemInput -> mV . mX + 172 , systemInput ->
mM . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId
; { size_t i ; for ( i = 0 ; i < mvSize ; ++ i ) if ( systemInput -> mM . mX
[ i ] != smData -> mCachedModeVector . mX [ i ] ) { modeChanged = true ;
break ; } } } if ( modeChanged ) { errorId = sm_core_onModeChanged ( & smData
-> mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mU . mX , systemInput -> mU . mX + 172 , systemInput -> mD .
mX , smData -> mCachedModeVector . mX , systemInput -> mM . mX , systemInput
-> mX . mX , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; memcpy (
smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 * sizeof (
int32_T ) ) ; } errorId = sm_core_projectState ( true , & smData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mM . mX , systemInput -> mU . mX , systemInput -> mU . mX +
172 , systemInput -> mD . mX , systemInput -> mX . mX , neDiagMgr ) ; return
errorId ; } static PmfMessageId dae_cg_assemble_solve ( const NeDae * dae ,
const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; const SmMechanismDelegate *
delegate = & smData -> mAssemblyDelegate ; const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle = & smData -> mAsmRuntimeDerivedValuesBundle ;
PmfMessageId errorId = NULL ; size_t i ; double errorResult = 0.0 ; const
size_t numTargets = 150 ; unsigned int asmStatus = 0 ; double *
assemblyFullStateVector = smData -> mAssemblyFullStateVector . mX ; double *
simulationFullStateVector = smData -> mSimulationFullStateVector . mX ; ( *
delegate -> mSetTargets ) ( runtimeDerivedValuesBundle , smData -> mTargets )
; { const double * u = systemInput -> mU . mX ; const double * uDot = u +
smData -> mInputVectorSize ; CTarget * target = smData -> mTargets + smData
-> mNumInternalTargets ; for ( i = 0 ; i < smData ->
mNumInputMotionPrimitives ; ++ i ) { const size_t inputOffset = smData ->
mMotionInputOffsets . mX [ i ] ; ( target ++ ) -> mValue [ 0 ] = u [
inputOffset ] ; ( target ++ ) -> mValue [ 0 ] = uDot [ inputOffset ] ; } } if
( smData -> mAssemblyModeVector . mN > 0 ) { errorId =
draft7_a151ee3d_1_computeAsmModeVector ( systemInput -> mU . mX , systemInput
-> mU . mX + 172 , systemInput -> mV . mX + 172 , smData ->
mAssemblyModeVector . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL
) return errorId ; } sm_core_computeStateVector ( delegate ,
runtimeDerivedValuesBundle , smData -> mAssemblyModeVector . mX , numTargets
, smData -> mTargets , assemblyFullStateVector ) ; asmStatus =
sm_core_checkAssembly ( delegate , runtimeDerivedValuesBundle ,
assemblyFullStateVector , smData -> mAssemblyModeVector . mX , NULL , NULL ,
NULL ) ; if ( asmStatus != 1 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:ssci:core:dae:dae:assemblyFailure" , asmStatus == 2 ?
 "Model not assembled. The following violation occurred: Position Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
: ( asmStatus == 3 ?
 "Model not assembled. The following violation occurred: Velocity Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
:
 "Model not assembled. The following violation occurred: Singularity Violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
) , neDiagMgr ) ; }
#if 0
draft7_a151ee3d_1_checkTargets ( & smData -> mSimRuntimeDerivedValuesBundle ,
assemblyFullStateVector ) ;
#endif
if ( smData -> mModeVectorSize > 0 ) { errorId =
draft7_a151ee3d_1_computeSimModeVector ( systemInput -> mU . mX , systemInput
-> mU . mX + 172 , systemInput -> mV . mX + 172 , systemInput -> mM . mX , &
errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; memcpy (
smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 * sizeof (
int32_T ) ) ; } ( * delegate -> mConvertStateVector ) ( NULL ,
runtimeDerivedValuesBundle , NULL , assemblyFullStateVector , smData ->
mAssemblyModeVector . mX , systemInput -> mM . mX , simulationFullStateVector
) ; for ( i = 0 ; i < smData -> mStateVectorSize ; ++ i ) systemInput -> mX .
mX [ i ] = simulationFullStateVector [ smData -> mStateVectorMap . mX [ i ] ]
; memcpy ( systemInput -> mD . mX , simulationFullStateVector + smData ->
mFullStateVectorSize - smData -> mDiscreteStateSize , smData ->
mDiscreteStateSize * sizeof ( double ) ) ; return errorId ; } typedef struct
{ size_t first ; size_t second ; } SizePair ; static void checkMemAllocStatus
( int_T status ) { ( void ) status ; } static PmCharVector
cStringToCharVector ( const char * src ) { const size_t n = strlen ( src ) ;
PmCharVector charVect ; const int_T status = pm_create_char_vector_fields ( &
charVect , n + 1 , pm_default_allocator ( ) ) ; checkMemAllocStatus ( status
) ; strcpy ( charVect . mX , src ) ; return charVect ; } static void
initBasicAttributes ( NeDaePrivateData * smData ) { size_t i ; smData ->
mStateVectorSize = 42 ; smData -> mFullStateVectorSize = 90 ; smData ->
mDiscreteStateSize = 0 ; smData -> mModeVectorSize = 0 ; smData ->
mNumZeroCrossings = 0 ; smData -> mInputVectorSize = 172 ; smData ->
mOutputVectorSize = 128 ; smData -> mNumConstraintEqns = 0 ; for ( i = 0 ; i
< 4 ; ++ i ) smData -> mChecksum [ i ] = 0 ; } static void initStateVector (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; const int32_T stateVectorMap [ 42 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 ,
9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24
, 25 , 26 , 27 , 28 , 29 , 78 , 79 , 80 , 81 , 82 , 83 , 84 , 85 , 86 , 87 ,
88 , 89 } ; const CTarget targets [ 150 ] = { { 0 , 322 , 0 , false , 0 , 0 ,
"1" , false , true , + 1.000000000000000000e+00 , false , 1 , { +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 322 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 322 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 322 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 322 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 322 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 323 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 323 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 323 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 323 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 323 , 2
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 323 , 2 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 323 , 3
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 323 , 3 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 323 , 4
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 323 , 4 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 323 , 5
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 323 , 5 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 349 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 349 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 349 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 349 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 349 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 349 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 375 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 375 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 375 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 375 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 375 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 375 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 401 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 401 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 401 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 401 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 401 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 401 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 427 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 427 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 427 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 427 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 427 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 427 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 542 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 542 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 542 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 542 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 542 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 542 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 554 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 554 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 554 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 554 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 554 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 554 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 566 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 566 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 566 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 566 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 566 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 566 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 578 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 578 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 578 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 578 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 578 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 578 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 590 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 590 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 590 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 590 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 590 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 590 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 602 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 602 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 602 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 602 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 602 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 602 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 614 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 614 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 614 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 614 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 614 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 614 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 626 , 0
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 626 , 0 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 626 , 1
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 626 , 1 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 626 , 2
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 626 , 2 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 697 , 0
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 697 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 697 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 697 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 697 , 2
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 697 , 2 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 697 , 3
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 697 , 3 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 697 , 4
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 697 , 4 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 697 , 5
, false , 0 , 0 , "1" , false , true , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 697 , 5 , false , 0 , 0 , "1" , true ,
true , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 542 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 542 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 542 , 1
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 542 , 1 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 542 , 2
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 542 , 2 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 554 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 554 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 554 , 1
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 554 , 1 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 554 , 2
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 554 , 2 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 566 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 566 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 566 , 1
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 566 , 1 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 566 , 2
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 566 , 2 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 578 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 578 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 578 , 1
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 578 , 1 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 578 , 2
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 578 , 2 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 590 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 590 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 590 , 1
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 590 , 1 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 590 , 2
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 590 , 2 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 602 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 602 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 602 , 1
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 602 , 1 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 602 , 2
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 602 , 2 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 614 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 614 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 614 , 1
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 614 , 1 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 614 , 2
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 614 , 2 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 626 , 0
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 626 , 0 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 626 , 1
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 626 , 1 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 626 , 2
, false , 0 , 3 , "" , false , false , + 1.000000000000000000e+00 , false , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 626 , 2 , false , 0 , 3 , "" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } } ; const
size_t numTargets = 150 ; int_T status ; size_t i ; status =
pm_create_real_vector_fields ( & smData -> mAssemblyFullStateVector , 90 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_real_vector_fields ( & smData -> mSimulationFullStateVector , 90 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_int_vector_fields ( & smData -> mStateVectorMap , smData ->
mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize *
sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 102 ; smData ->
mNumInputMotionPrimitives = 24 ; PM_ALLOCATE_ARRAY ( smData -> mTargets ,
CTarget , numTargets , alloc ) ; for ( i = 0 ; i < numTargets ; ++ i )
sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; } static
void initAsserts ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; smData -> mNumParamAsserts = 24
; smData -> mParamAssertObjects = NULL ; smData -> mParamAssertPaths = NULL ;
smData -> mParamAssertDescriptors = NULL ; smData -> mParamAssertMessages =
NULL ; smData -> mParamAssertMessageIds = NULL ; status =
pm_create_bool_vector_fields ( & smData -> mParamAssertIsWarnings , smData ->
mNumParamAsserts , alloc ) ; checkMemAllocStatus ( status ) ; if ( smData ->
mNumParamAsserts > 0 ) { const NeAssertData * ad =
draft7_a151ee3d_1_assertData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mParamAssertObjects , PmCharVector , 24 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mParamAssertPaths , PmCharVector , 24 , alloc ) ; PM_ALLOCATE_ARRAY
( smData -> mParamAssertDescriptors , PmCharVector , 24 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessages , PmCharVector , 24 ,
alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessageIds , PmCharVector
, 24 , alloc ) ; for ( i = 0 ; i < smData -> mNumParamAsserts ; ++ i , ++ ad
) { smData -> mParamAssertObjects [ i ] = cStringToCharVector ( ad -> mObject
) ; smData -> mParamAssertPaths [ i ] = cStringToCharVector ( ad -> mPath ) ;
smData -> mParamAssertDescriptors [ i ] = cStringToCharVector ( ad ->
mDescriptor ) ; smData -> mParamAssertMessages [ i ] = cStringToCharVector (
ad -> mMessage ) ; smData -> mParamAssertMessageIds [ i ] =
cStringToCharVector ( ad -> mMessageID ) ; smData -> mParamAssertIsWarnings .
mX [ i ] = ad -> mIsWarn ; } } } static void initModeVector (
NeDaePrivateData * smData ) { { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mAssemblyModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mAssemblyModeVector . mN ; ++ i ) smData -> mAssemblyModeVector .
mX [ i ] = 0 ; } { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mCachedModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mModeVectorSize ; ++ i ) smData -> mCachedModeVector . mX [ i ] =
0 ; } } static void initZeroCrossings ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; smData ->
mZeroCrossingObjects = NULL ; smData -> mZeroCrossingPaths = NULL ; smData ->
mZeroCrossingDescriptors = NULL ; status = pm_create_int_vector_fields ( &
smData -> mZeroCrossingTypes , 0 , alloc ) ; checkMemAllocStatus ( status ) ;
if ( smData -> mNumZeroCrossings > 0 ) { const NeZCData * zcd =
draft7_a151ee3d_1_ZCData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mZeroCrossingObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mZeroCrossingPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY
( smData -> mZeroCrossingDescriptors , PmCharVector , 0 , alloc ) ; for ( i =
0 ; i < smData -> mNumZeroCrossings ; ++ i , ++ zcd ) { smData ->
mZeroCrossingObjects [ i ] = cStringToCharVector ( zcd -> mObject ) ; smData
-> mZeroCrossingPaths [ i ] = cStringToCharVector ( zcd -> mPath ) ; smData
-> mZeroCrossingDescriptors [ i ] = cStringToCharVector ( zcd -> mDescriptor
) ; smData -> mZeroCrossingTypes . mX [ i ] = zcd -> mType ; } } } static
void initVariables ( NeDaePrivateData * smData ) { const char * varFullPaths
[ 42 ] = { "L5.Gimbal_Joint.Rx.q" , "L5.Gimbal_Joint.Ry.q" ,
"L5.Gimbal_Joint.Rz.q" , "L5.Gimbal_Joint.Rx.w" , "L5.Gimbal_Joint.Ry.w" ,
"L5.Gimbal_Joint.Rz.w" , "L4.Gimbal_Joint1.Rx.q" , "L4.Gimbal_Joint1.Ry.q" ,
"L4.Gimbal_Joint1.Rz.q" , "L4.Gimbal_Joint1.Rx.w" , "L4.Gimbal_Joint1.Ry.w" ,
"L4.Gimbal_Joint1.Rz.w" , "L3.Gimbal_Joint1.Rx.q" , "L3.Gimbal_Joint1.Ry.q" ,
"L3.Gimbal_Joint1.Rz.q" , "L3.Gimbal_Joint1.Rx.w" , "L3.Gimbal_Joint1.Ry.w" ,
"L3.Gimbal_Joint1.Rz.w" , "L2.Gimbal_Joint1.Rx.q" , "L2.Gimbal_Joint1.Ry.q" ,
"L2.Gimbal_Joint1.Rz.q" , "L2.Gimbal_Joint1.Rx.w" , "L2.Gimbal_Joint1.Ry.w" ,
"L2.Gimbal_Joint1.Rz.w" , "L1.Gimbal_Joint1.Rx.q" , "L1.Gimbal_Joint1.Ry.q" ,
"L1.Gimbal_Joint1.Rz.q" , "L1.Gimbal_Joint1.Rx.w" , "L1.Gimbal_Joint1.Ry.w" ,
"L1.Gimbal_Joint1.Rz.w" , "L1_S1_Bushing_Joint.Rx.q" ,
"L1_S1_Bushing_Joint.Ry.q" , "L1_S1_Bushing_Joint.Rz.q" ,
"L1_S1_Bushing_Joint.Rx.w" , "L1_S1_Bushing_Joint.Ry.w" ,
"L1_S1_Bushing_Joint.Rz.w" , "T1_S1_Bushing_Joint.Rx.q" ,
"T1_S1_Bushing_Joint.Ry.q" , "T1_S1_Bushing_Joint.Rz.q" ,
"T1_S1_Bushing_Joint.Rx.w" , "T1_S1_Bushing_Joint.Ry.w" ,
"T1_S1_Bushing_Joint.Rz.w" } ; const char * varObjects [ 42 ] = {
"draft7/L5/Gimbal Joint" , "draft7/L5/Gimbal Joint" ,
"draft7/L5/Gimbal Joint" , "draft7/L5/Gimbal Joint" ,
"draft7/L5/Gimbal Joint" , "draft7/L5/Gimbal Joint" ,
"draft7/L4/Gimbal Joint1" , "draft7/L4/Gimbal Joint1" ,
"draft7/L4/Gimbal Joint1" , "draft7/L4/Gimbal Joint1" ,
"draft7/L4/Gimbal Joint1" , "draft7/L4/Gimbal Joint1" ,
"draft7/L3/Gimbal Joint1" , "draft7/L3/Gimbal Joint1" ,
"draft7/L3/Gimbal Joint1" , "draft7/L3/Gimbal Joint1" ,
"draft7/L3/Gimbal Joint1" , "draft7/L3/Gimbal Joint1" ,
"draft7/L2/Gimbal Joint1" , "draft7/L2/Gimbal Joint1" ,
"draft7/L2/Gimbal Joint1" , "draft7/L2/Gimbal Joint1" ,
"draft7/L2/Gimbal Joint1" , "draft7/L2/Gimbal Joint1" ,
"draft7/L1/Gimbal Joint1" , "draft7/L1/Gimbal Joint1" ,
"draft7/L1/Gimbal Joint1" , "draft7/L1/Gimbal Joint1" ,
"draft7/L1/Gimbal Joint1" , "draft7/L1/Gimbal Joint1" ,
"draft7/L1-S1 Bushing Joint" , "draft7/L1-S1 Bushing Joint" ,
"draft7/L1-S1 Bushing Joint" , "draft7/L1-S1 Bushing Joint" ,
"draft7/L1-S1 Bushing Joint" , "draft7/L1-S1 Bushing Joint" ,
"draft7/T1-S1 Bushing Joint" , "draft7/T1-S1 Bushing Joint" ,
"draft7/T1-S1 Bushing Joint" , "draft7/T1-S1 Bushing Joint" ,
"draft7/T1-S1 Bushing Joint" , "draft7/T1-S1 Bushing Joint" } ; smData ->
mNumVarScalars = 42 ; smData -> mVarFullPaths = NULL ; smData -> mVarObjects
= NULL ; if ( smData -> mNumVarScalars > 0 ) { size_t s ; PmAllocator * alloc
= pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( smData -> mVarFullPaths ,
PmCharVector , 42 , alloc ) ; PM_ALLOCATE_ARRAY ( smData -> mVarObjects ,
PmCharVector , 42 , alloc ) ; for ( s = 0 ; s < smData -> mNumVarScalars ; ++
s ) { smData -> mVarFullPaths [ s ] = cStringToCharVector ( varFullPaths [ s
] ) ; smData -> mVarObjects [ s ] = cStringToCharVector ( varObjects [ s ] )
; } } } static void initRuntimeParameters ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; size_t i
= 0 ; const int32_T rtpRootVarRows [ 8 ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 }
; const int32_T rtpRootVarCols [ 8 ] = { 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 } ;
const char * rtpFullPaths [ 8 ] = { "RTP_3519DDD2_GraphicDiffuseColor" ,
"RTP_3A003FD7_GraphicDiffuseColor" , "RTP_421EED44_GraphicDiffuseColor" ,
"RTP_4D070F41_GraphicDiffuseColor" , "RTP_AABF2246_GraphicDiffuseColor" ,
"RTP_AC108C68_GraphicDiffuseColor" , "RTP_DB17BCFE_GraphicDiffuseColor" ,
"RTP_FBAAAFE3_GraphicDiffuseColor" } ; smData -> mNumRtpRootVars = 8 ; status
= pm_create_int_vector_fields ( & smData -> mRtpRootVarRows , smData ->
mNumRtpRootVars , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mRtpRootVarRows . mX , rtpRootVarRows , smData -> mNumRtpRootVars * sizeof
( int32_T ) ) ; status = pm_create_int_vector_fields ( & smData ->
mRtpRootVarCols , smData -> mNumRtpRootVars , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mRtpRootVarCols . mX , rtpRootVarCols , smData
-> mNumRtpRootVars * sizeof ( int32_T ) ) ; smData -> mRtpFullPaths = NULL ;
if ( smData -> mNumRtpRootVars > 0 ) { size_t v ; PM_ALLOCATE_ARRAY ( smData
-> mRtpFullPaths , PmCharVector , 8 , alloc ) ; for ( v = 0 ; v < smData ->
mNumRtpRootVars ; ++ v ) { smData -> mRtpFullPaths [ v ] =
cStringToCharVector ( rtpFullPaths [ v ] ) ; } } smData ->
mNumRuntimeRootVarScalars = 24 ; status = pm_create_real_vector_fields ( &
smData -> mRuntimeParameterScalars , 24 , alloc ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mRuntimeParameterScalars . mN ; ++ i )
smData -> mRuntimeParameterScalars . mX [ i ] = 0.0 ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mAsmRuntimeDerivedValuesBundle , 0 , 0 ) ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mSimRuntimeDerivedValuesBundle , 0 , 0 ) ; } static void initIoInfoHelper (
size_t n , const char * portPathsSource [ ] , const char * unitsSource [ ] ,
const SizePair dimensions [ ] , boolean_T doInputs , NeDaePrivateData *
smData ) { PmCharVector * portPaths = NULL ; PmCharVector * units = NULL ;
SscIoInfo * infos = NULL ; if ( n > 0 ) { size_t s ; PmAllocator * alloc =
pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( portPaths , PmCharVector , n ,
alloc ) ; PM_ALLOCATE_ARRAY ( units , PmCharVector , n , alloc ) ;
PM_ALLOCATE_ARRAY ( infos , SscIoInfo , n , alloc ) ; for ( s = 0 ; s < n ;
++ s ) { portPaths [ s ] = cStringToCharVector ( portPathsSource [ s ] ) ;
units [ s ] = cStringToCharVector ( unitsSource [ s ] ) ; { SscIoInfo * info
= infos + s ; info -> mName = info -> mIdentifier = portPaths [ s ] . mX ;
ssc_array_size_set_scalar ( & info -> mSize ) ; ssc_array_size_set_dim ( &
info -> mSize , 0 , dimensions [ s ] . first ) ; ssc_array_size_set_dim ( &
info -> mSize , 1 , dimensions [ s ] . second ) ; info -> mUnit = units [ s ]
. mX ; } } } if ( doInputs ) { smData -> mNumInputs = n ; smData ->
mInputPortPaths = portPaths ; smData -> mInputUnits = units ; smData ->
mInputInfos = infos ; } else { smData -> mNumOutputs = n ; smData ->
mOutputPortPaths = portPaths ; smData -> mOutputUnits = units ; smData ->
mOutputInfos = infos ; } } static void initIoInfo ( NeDaePrivateData * smData
) { const char * inputPortPaths [ 172 ] = {
"Muscle_Forces.Muscle1.Variable_Cylindrical_Solid.leni" ,
"Muscle_Forces.Muscle2.Variable_Cylindrical_Solid1.leni" ,
"Muscle_Forces.Muscle3.Variable_Cylindrical_Solid1.leni" ,
"Muscle_Forces.Muscle4.Variable_Cylindrical_Solid1.leni" ,
"Muscle_Forces.Muscle5.Variable_Cylindrical_Solid1.leni" ,
"Muscle_Forces.Muscle6.Variable_Cylindrical_Solid1.leni" ,
"Muscle_Forces.Muscle7.Variable_Cylindrical_Solid1.leni" ,
"Muscle_Forces.Muscle8.Variable_Cylindrical_Solid1.leni" ,
"L1.Gimbal_Joint1.txi" , "L1.Gimbal_Joint1.tyi" , "L1.Gimbal_Joint1.tzi" ,
"L2.Gimbal_Joint1.txi" , "L2.Gimbal_Joint1.tyi" , "L2.Gimbal_Joint1.tzi" ,
"L3.Gimbal_Joint1.txi" , "L3.Gimbal_Joint1.tyi" , "L3.Gimbal_Joint1.tzi" ,
"L4.Gimbal_Joint1.txi" , "L4.Gimbal_Joint1.tyi" , "L4.Gimbal_Joint1.tzi" ,
"L5.Gimbal_Joint.txi" , "L5.Gimbal_Joint.tyi" , "L5.Gimbal_Joint.tzi" ,
"Muscle_Forces.Muscle1.Gimbal_Joint.qxi" ,
"Muscle_Forces.Muscle1.Gimbal_Joint.qyi" ,
"Muscle_Forces.Muscle1.Gimbal_Joint.qzi" ,
"Muscle_Forces.Muscle2.Gimbal_Joint.qxi" ,
"Muscle_Forces.Muscle2.Gimbal_Joint.qyi" ,
"Muscle_Forces.Muscle2.Gimbal_Joint.qzi" ,
"Muscle_Forces.Muscle3.Gimbal_Joint.qxi" ,
"Muscle_Forces.Muscle3.Gimbal_Joint.qyi" ,
"Muscle_Forces.Muscle3.Gimbal_Joint.qzi" ,
"Muscle_Forces.Muscle4.Gimbal_Joint.qxi" ,
"Muscle_Forces.Muscle4.Gimbal_Joint.qyi" ,
"Muscle_Forces.Muscle4.Gimbal_Joint.qzi" ,
"Muscle_Forces.Muscle5.Gimbal_Joint.qxi" ,
"Muscle_Forces.Muscle5.Gimbal_Joint.qyi" ,
"Muscle_Forces.Muscle5.Gimbal_Joint.qzi" ,
"Muscle_Forces.Muscle6.Gimbal_Joint.qxi" ,
"Muscle_Forces.Muscle6.Gimbal_Joint.qyi" ,
"Muscle_Forces.Muscle6.Gimbal_Joint.qzi" ,
"Muscle_Forces.Muscle7.Gimbal_Joint.qxi" ,
"Muscle_Forces.Muscle7.Gimbal_Joint.qyi" ,
"Muscle_Forces.Muscle7.Gimbal_Joint.qzi" ,
"Muscle_Forces.Muscle8.Gimbal_Joint.qxi" ,
"Muscle_Forces.Muscle8.Gimbal_Joint.qyi" ,
"Muscle_Forces.Muscle8.Gimbal_Joint.qzi" , "Flexion_force_at_T1.fy" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque1.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque10.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque11.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque12.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque13.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque14.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque15.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque16.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque17.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque18.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque19.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque2.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque20.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque21.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque22.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque23.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque24.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque25.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque26.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque27.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque28.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque29.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque3.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque30.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque31.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque32.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque33.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque34.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque35.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque36.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque37.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque38.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque39.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque4.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque40.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque41.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque42.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque43.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque44.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque45.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque46.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque47.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque48.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque49.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque5.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque50.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque51.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque52.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque53.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque54.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque55.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque56.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque57.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque58.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque59.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque6.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque60.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque61.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque62.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque63.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque64.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque65.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque66.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque67.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque68.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque69.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque7.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque70.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque71.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque72.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque73.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque74.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque75.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque76.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque77.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque78.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque79.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque8.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque80.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque81.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque82.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque83.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque84.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque85.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque86.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque87.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque88.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque89.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque9.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque90.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque91.fz" ,
"IAP_Individual_Forces_Model.External_Force_and_Torque92.fz" ,
"Interspinous_Ligaments.L1_L2_ISL.fm" , "Interspinous_Ligaments.L2_L3_ISL.fm"
, "Interspinous_Ligaments.L3_L4_ISL.fm" ,
"Interspinous_Ligaments.L4_L5_ISL.fm" , "Interspinous_Ligaments.L5_S1_ISL.fm"
, "Left_and_Right_Intertransverse_Ligaments.Left_L1_L2_ITL.fm" ,
"Left_and_Right_Intertransverse_Ligaments.Left_L2_L3_ITL.fm" ,
"Left_and_Right_Intertransverse_Ligaments.Left_L3_L4_ITL.fm" ,
"Left_and_Right_Intertransverse_Ligaments.Left_L4_L5_ITL.fm" ,
"Left_and_Right_Intertransverse_Ligaments.Left_L5_S1_ITL.fm" ,
"Left_and_Right_Intertransverse_Ligaments.Right_L1_L2_ITL.fm" ,
"Left_and_Right_Intertransverse_Ligaments.Right_L2_L3_ITL.fm" ,
"Left_and_Right_Intertransverse_Ligaments.Right_L3_L4_ITL.fm" ,
"Left_and_Right_Intertransverse_Ligaments.Right_L4_L5_ITL.fm" ,
"Left_and_Right_Intertransverse_Ligaments.Right_L5_S1_ITL.fm" ,
"Muscle_Forces.Internal_Force.fm" , "Muscle_Forces.Internal_Force1.fm" ,
"Muscle_Forces.Internal_Force2.fm" , "Muscle_Forces.Internal_Force3.fm" ,
"Muscle_Forces.Internal_Force4.fm" , "Muscle_Forces.Internal_Force5.fm" ,
"Muscle_Forces.Internal_Force6.fm" , "Muscle_Forces.Internal_Force7.fm" ,
"Pure_AR_Moment_at_L1_COM.tz" , "Pure_FE_Moment_at_L1_COM.tx" ,
"Pure_LB_Moment_at_L1_COM.ty" , "Supraspinous_Ligaments.L1_L2_SSL.fm" ,
"Supraspinous_Ligaments.L2_L3_SSL.fm" , "Supraspinous_Ligaments.L3_L4_SSL.fm"
, "Supraspinous_Ligaments.L4_L5_SSL.fm" ,
"Supraspinous_Ligaments.L5_S1_SSL.fm" } ; const char * inputUnits [ 172 ] = {
"m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "kg*m^2/s^2" , "kg*m^2/s^2" ,
"kg*m^2/s^2" , "kg*m^2/s^2" , "kg*m^2/s^2" , "kg*m^2/s^2" , "kg*m^2/s^2" ,
"kg*m^2/s^2" , "kg*m^2/s^2" , "kg*m^2/s^2" , "kg*m^2/s^2" , "kg*m^2/s^2" ,
"kg*m^2/s^2" , "kg*m^2/s^2" , "kg*m^2/s^2" , "rad" , "rad" , "rad" , "rad" ,
"rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad"
, "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad" ,
"rad" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m^2/s^2" ,
"kg*m^2/s^2" , "kg*m^2/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" } ; const SizePair inputDimensions [ 172 ] = { { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } } ; const char * outputPortPaths [ 124 ] = {
"L1.Gimbal_Joint1.qx" , "L1.Gimbal_Joint1.tx" , "L1.Gimbal_Joint1.qy" ,
"L1.Gimbal_Joint1.ty" , "L1.Gimbal_Joint1.qz" , "L1.Gimbal_Joint1.tz" ,
"L1_S1_Bushing_Joint.qx" , "L1_S1_Bushing_Joint.qy" ,
"L1_S1_Bushing_Joint.qz" , "L2.Gimbal_Joint1.qx" , "L2.Gimbal_Joint1.tx" ,
"L2.Gimbal_Joint1.qy" , "L2.Gimbal_Joint1.ty" , "L2.Gimbal_Joint1.qz" ,
"L2.Gimbal_Joint1.tz" , "L3.Gimbal_Joint1.qx" , "L3.Gimbal_Joint1.tx" ,
"L3.Gimbal_Joint1.qy" , "L3.Gimbal_Joint1.ty" , "L3.Gimbal_Joint1.qz" ,
"L3.Gimbal_Joint1.tz" , "L4.Gimbal_Joint1.qx" , "L4.Gimbal_Joint1.tx" ,
"L4.Gimbal_Joint1.qy" , "L4.Gimbal_Joint1.ty" , "L4.Gimbal_Joint1.qz" ,
"L4.Gimbal_Joint1.tz" , "L5.Gimbal_Joint.qx" , "L5.Gimbal_Joint.tx" ,
"L5.Gimbal_Joint.qy" , "L5.Gimbal_Joint.ty" , "L5.Gimbal_Joint.qz" ,
"L5.Gimbal_Joint.tz" , "L5.Gimbal_Joint.fc" , "L5.Gimbal_Joint.ft" ,
"T1_S1_Bushing_Joint.px" , "T1_S1_Bushing_Joint.py" ,
"T1_S1_Bushing_Joint.pz" , "Interspinous_Ligaments.Transform_Sensor.dst" ,
"Interspinous_Ligaments.Transform_Sensor1.dst" ,
"Interspinous_Ligaments.Transform_Sensor2.dst" ,
"Interspinous_Ligaments.Transform_Sensor3.dst" ,
"Interspinous_Ligaments.Transform_Sensor4.dst" ,
"Left_and_Right_Intertransverse_Ligaments.Transform_Sensor.dst" ,
"Left_and_Right_Intertransverse_Ligaments.Transform_Sensor1.dst" ,
"Left_and_Right_Intertransverse_Ligaments.Transform_Sensor2.dst" ,
"Left_and_Right_Intertransverse_Ligaments.Transform_Sensor3.dst" ,
"Left_and_Right_Intertransverse_Ligaments.Transform_Sensor4.dst" ,
"Left_and_Right_Intertransverse_Ligaments.Transform_Sensor5.dst" ,
"Left_and_Right_Intertransverse_Ligaments.Transform_Sensor6.dst" ,
"Left_and_Right_Intertransverse_Ligaments.Transform_Sensor7.dst" ,
"Left_and_Right_Intertransverse_Ligaments.Transform_Sensor8.dst" ,
"Left_and_Right_Intertransverse_Ligaments.Transform_Sensor9.dst" ,
"Muscle_Forces.Muscle1.Transform_Sensor.x" ,
"Muscle_Forces.Muscle1.Transform_Sensor.y" ,
"Muscle_Forces.Muscle1.Transform_Sensor.z" ,
"Muscle_Forces.Muscle1.Transform_Sensor1.x" ,
"Muscle_Forces.Muscle1.Transform_Sensor1.y" ,
"Muscle_Forces.Muscle1.Transform_Sensor1.z" ,
"Muscle_Forces.Muscle2.Transform_Sensor.x" ,
"Muscle_Forces.Muscle2.Transform_Sensor.y" ,
"Muscle_Forces.Muscle2.Transform_Sensor.z" ,
"Muscle_Forces.Muscle2.Transform_Sensor1.x" ,
"Muscle_Forces.Muscle2.Transform_Sensor1.y" ,
"Muscle_Forces.Muscle2.Transform_Sensor1.z" ,
"Muscle_Forces.Muscle3.Transform_Sensor.x" ,
"Muscle_Forces.Muscle3.Transform_Sensor.y" ,
"Muscle_Forces.Muscle3.Transform_Sensor.z" ,
"Muscle_Forces.Muscle3.Transform_Sensor1.x" ,
"Muscle_Forces.Muscle3.Transform_Sensor1.y" ,
"Muscle_Forces.Muscle3.Transform_Sensor1.z" ,
"Muscle_Forces.Muscle4.Transform_Sensor.x" ,
"Muscle_Forces.Muscle4.Transform_Sensor.y" ,
"Muscle_Forces.Muscle4.Transform_Sensor.z" ,
"Muscle_Forces.Muscle4.Transform_Sensor1.x" ,
"Muscle_Forces.Muscle4.Transform_Sensor1.y" ,
"Muscle_Forces.Muscle4.Transform_Sensor1.z" ,
"Muscle_Forces.Muscle5.Transform_Sensor.x" ,
"Muscle_Forces.Muscle5.Transform_Sensor.y" ,
"Muscle_Forces.Muscle5.Transform_Sensor.z" ,
"Muscle_Forces.Muscle5.Transform_Sensor1.x" ,
"Muscle_Forces.Muscle5.Transform_Sensor1.y" ,
"Muscle_Forces.Muscle5.Transform_Sensor1.z" ,
"Muscle_Forces.Muscle6.Transform_Sensor.x" ,
"Muscle_Forces.Muscle6.Transform_Sensor.y" ,
"Muscle_Forces.Muscle6.Transform_Sensor.z" ,
"Muscle_Forces.Muscle6.Transform_Sensor1.x" ,
"Muscle_Forces.Muscle6.Transform_Sensor1.y" ,
"Muscle_Forces.Muscle6.Transform_Sensor1.z" ,
"Muscle_Forces.Muscle7.Transform_Sensor.x" ,
"Muscle_Forces.Muscle7.Transform_Sensor.y" ,
"Muscle_Forces.Muscle7.Transform_Sensor.z" ,
"Muscle_Forces.Muscle7.Transform_Sensor1.x" ,
"Muscle_Forces.Muscle7.Transform_Sensor1.y" ,
"Muscle_Forces.Muscle7.Transform_Sensor1.z" ,
"Muscle_Forces.Muscle8.Transform_Sensor.x" ,
"Muscle_Forces.Muscle8.Transform_Sensor.y" ,
"Muscle_Forces.Muscle8.Transform_Sensor.z" ,
"Muscle_Forces.Muscle8.Transform_Sensor1.x" ,
"Muscle_Forces.Muscle8.Transform_Sensor1.y" ,
"Muscle_Forces.Muscle8.Transform_Sensor1.z" ,
"Sagittal_Kinematics_Readings.L1_Spinous_Process_Position.y" ,
"Sagittal_Kinematics_Readings.L1_Spinous_Process_Position.z" ,
"Sagittal_Kinematics_Readings.L2_Spinous_process_Position.y" ,
"Sagittal_Kinematics_Readings.L2_Spinous_process_Position.z" ,
"Sagittal_Kinematics_Readings.L3_Spinous_process_Position.y" ,
"Sagittal_Kinematics_Readings.L3_Spinous_process_Position.z" ,
"Sagittal_Kinematics_Readings.L4_Spinous_Process_Position.y" ,
"Sagittal_Kinematics_Readings.L4_Spinous_Process_Position.z" ,
"Sagittal_Kinematics_Readings.L5_Spinous_Process_Position.y" ,
"Sagittal_Kinematics_Readings.L5_Spinous_Process_Position.z" ,
"Sagittal_Kinematics_Readings.T10_Position.y" ,
"Sagittal_Kinematics_Readings.T10_Position.z" ,
"Sagittal_Kinematics_Readings.T12_Position.y" ,
"Sagittal_Kinematics_Readings.T12_Position.z" ,
"Sagittal_Kinematics_Readings.T1_Position.y" ,
"Sagittal_Kinematics_Readings.T1_Position.z" ,
"Sagittal_Kinematics_Readings.T5_Position.y" ,
"Sagittal_Kinematics_Readings.T5_Position.z" ,
"Supraspinous_Ligaments.Transform_Sensor.dst" ,
"Supraspinous_Ligaments.Transform_Sensor1.dst" ,
"Supraspinous_Ligaments.Transform_Sensor2.dst" ,
"Supraspinous_Ligaments.Transform_Sensor3.dst" ,
"Supraspinous_Ligaments.Transform_Sensor4.dst" } ; const char * outputUnits [
124 ] = { "rad" , "kg*m^2/s^2" , "rad" , "kg*m^2/s^2" , "rad" , "kg*m^2/s^2"
, "rad" , "rad" , "rad" , "rad" , "kg*m^2/s^2" , "rad" , "kg*m^2/s^2" , "rad"
, "kg*m^2/s^2" , "rad" , "kg*m^2/s^2" , "rad" , "kg*m^2/s^2" , "rad" ,
"kg*m^2/s^2" , "rad" , "kg*m^2/s^2" , "rad" , "kg*m^2/s^2" , "rad" ,
"kg*m^2/s^2" , "rad" , "kg*m^2/s^2" , "rad" , "kg*m^2/s^2" , "rad" ,
"kg*m^2/s^2" , "kg*m/s^2" , "kg*m/s^2" , "m" , "m" , "m" , "m" , "m" , "m" ,
"m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" ,
"m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" ,
"m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" ,
"m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" ,
"m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" ,
"m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" , "m" ,
"m" , "m" , "m" , "m" , "m" } ; const SizePair outputDimensions [ 124 ] = { {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 3 , 1 } , { 3 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} } ; initIoInfoHelper ( 172 , inputPortPaths , inputUnits , inputDimensions
, true , smData ) ; initIoInfoHelper ( 124 , outputPortPaths , outputUnits ,
outputDimensions , false , smData ) ; } static void initInputDerivs (
NeDaePrivateData * smData ) { const int32_T numInputDerivs [ 172 ] = { 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2
, 2 , 2 , 2 , 2 , 2 , 2 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; PmAllocator *
alloc = pm_default_allocator ( ) ; const int_T status =
pm_create_int_vector_fields ( & smData -> mNumInputDerivs , smData ->
mInputVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mNumInputDerivs . mX , numInputDerivs , 172 * sizeof ( int32_T ) ) ;
smData -> mInputOrder = 2 ; } static void initDirectFeedthrough (
NeDaePrivateData * smData ) { const boolean_T directFeedthroughVector [ 172 ]
= { false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false } ; const
boolean_T directFeedthroughMatrix [ 44032 ] = { false , true , false , true ,
false , true , false , false , false , false , true , false , true , false ,
true , false , true , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , false , true , true ,
true , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, false , true , false , true , false , false , false , false , true , false
, true , false , true , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , false , true , false ,
true , true , true , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , false , true , false , true , false , false , false , false
, true , false , true , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , false , true , false ,
true , false , true , true , true , true , true , true , true , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , true , false , true , false , true , false , false ,
false , false , true , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , false , true , false ,
true , false , true , false , true , true , true , true , true , true , true
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , false , true , false , true ,
false , false , false , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , true , true , true , true
, true , true , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , true , false , true , false
, true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , false , true , false , true , false , true ,
false , false , false , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , true , true , true , true
, true , true , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , true , false , true , false
, true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , false , true , false , true , false , true , false , false ,
false , false , true , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , false , true , false ,
true , false , true , false , true , true , true , true , true , true , true
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , false , true , false , true ,
false , false , false , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , false , true , false ,
true , false , true , false , true , false , true , true , true , true , true
, true , true , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , true , false , true , false
, true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , false , true , false , true , false , false , false
, false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , true , true , true , true , true , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , false , true , false , true , false ,
false , false , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , true , true , true , true , true
, true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , false , true , false ,
true , false , false , false , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, true , false , true , false , false , false , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , false , true , false , true , false , false , false , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , false , true , false , true , false , true , false , true ,
false , true , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false } ; PmAllocator * alloc = pm_default_allocator ( ) ; { const int_T
status = pm_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector
, 172 , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 172 * sizeof (
boolean_T ) ) ; } { const int_T status = pm_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 44032 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 44032 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; const int32_T outputFunctionMap [ 128 ] = { 0 , 1
, 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 0 , 1 , 0 , 1 , 0 , 1 , 0 , 1 ,
0 , 1 , 0 , 1 , 0 , 1 , 0 , 1 , 0 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; smData -> mOutputFunctionMap =
pm_create_int_vector ( 128 , alloc ) ; memcpy ( smData -> mOutputFunctionMap
-> mX , outputFunctionMap , 128 * sizeof ( int32_T ) ) ; smData ->
mNumOutputClasses = 2 ; smData -> mHasKinematicOutputs = true ; smData ->
mHasDynamicOutputs = true ; smData -> mIsOutputClass0Dynamic = false ; smData
-> mDoComputeDynamicOutputs = false ; smData -> mCachedDerivativesAvailable =
false ; { size_t i = 0 ; const int_T status = pm_create_real_vector_fields (
& smData -> mCachedDerivatives , 42 , pm_default_allocator ( ) ) ;
checkMemAllocStatus ( status ) ; for ( i = 0 ; i < smData ->
mCachedDerivatives . mN ; ++ i ) smData -> mCachedDerivatives . mX [ i ] =
0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initAssemblyDelegate ( SmMechanismDelegate * delegate ) {
SmMechanismDelegateScratchpad * scratchpad = NULL ; const SmSizePair
jointToStageIdx [ 13 ] = { { 322 , 4 } , { 349 , 3 } , { 375 , 2 } , { 401 ,
1 } , { 427 , 0 } , { 542 , 5 } , { 554 , 6 } , { 566 , 7 } , { 578 , 8 } , {
590 , 9 } , { 602 , 10 } , { 614 , 11 } , { 626 , 12 } } ; const size_t
primitiveIndices [ 13 + 1 ] = { 0 , 3 , 6 , 9 , 12 , 15 , 18 , 21 , 24 , 27 ,
30 , 33 , 36 , 39 } ; const SmSizePair stateOffsets [ 39 ] = { { 0 , 3 } , {
1 , 4 } , { 2 , 5 } , { 6 , 9 } , { 7 , 10 } , { 8 , 11 } , { 12 , 15 } , {
13 , 16 } , { 14 , 17 } , { 18 , 21 } , { 19 , 22 } , { 20 , 23 } , { 24 , 27
} , { 25 , 28 } , { 26 , 29 } , { 30 , 33 } , { 31 , 34 } , { 32 , 35 } , {
36 , 39 } , { 37 , 40 } , { 38 , 41 } , { 42 , 45 } , { 43 , 46 } , { 44 , 47
} , { 48 , 51 } , { 49 , 52 } , { 50 , 53 } , { 54 , 57 } , { 55 , 58 } , {
56 , 59 } , { 60 , 63 } , { 61 , 64 } , { 62 , 65 } , { 66 , 69 } , { 67 , 70
} , { 68 , 71 } , { 72 , 75 } , { 73 , 76 } , { 74 , 77 } } ; const
SmSizePair dofOffsets [ 39 ] = { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } , { 3 , 4
} , { 4 , 5 } , { 5 , 6 } , { 6 , 7 } , { 7 , 8 } , { 8 , 9 } , { 9 , 10 } ,
{ 10 , 11 } , { 11 , 12 } , { 12 , 13 } , { 13 , 14 } , { 14 , 15 } , { 15 ,
16 } , { 16 , 17 } , { 17 , 18 } , { 18 , 19 } , { 19 , 20 } , { 20 , 21 } ,
{ 21 , 22 } , { 22 , 23 } , { 23 , 24 } , { 24 , 25 } , { 25 , 26 } , { 26 ,
27 } , { 27 , 28 } , { 28 , 29 } , { 29 , 30 } , { 30 , 31 } , { 31 , 32 } ,
{ 32 , 33 } , { 33 , 34 } , { 34 , 35 } , { 35 , 36 } , { 36 , 37 } , { 37 ,
38 } , { 38 , 39 } } ; const size_t * flexibleStages = NULL ; const size_t
remodIndices [ 39 ] = { 0 , 1 , 2 , 6 , 7 , 8 , 12 , 13 , 14 , 18 , 19 , 20 ,
24 , 25 , 26 , 30 , 31 , 32 , 36 , 37 , 38 , 42 , 43 , 44 , 48 , 49 , 50 , 54
, 55 , 56 , 60 , 61 , 62 , 66 , 67 , 68 , 72 , 73 , 74 } ; const size_t
equationsPerConstraint [ 2 ] = { 0 , 0 } ; const int32_T
hasAllVelocityDisabledEquations [ 2 ] = { 0 , 0 } ; const int32_T *
runtimeEnabledEquations = NULL ; const size_t dofToVelSlot [ 39 ] = { 3 , 4 ,
5 , 9 , 10 , 11 , 15 , 16 , 17 , 21 , 22 , 23 , 27 , 28 , 29 , 33 , 34 , 35 ,
39 , 40 , 41 , 45 , 46 , 47 , 51 , 52 , 53 , 57 , 58 , 59 , 63 , 64 , 65 , 69
, 70 , 71 , 75 , 76 , 77 } ; const size_t constraintDofs [ 30 ] = { 0 , 1 , 2
, 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 0 , 1 , 2 , 3 , 4 , 5
, 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 } ; const size_t
constraintDofOffsets [ 2 + 1 ] = { 0 , 15 , 30 } ; const size_t Jm = 0 ;
const size_t Jn = 39 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst =
zeroSizePair . mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad (
delegate ) ; scratchpad = delegate -> mScratchpad ; delegate ->
mTargetStrengthFree = 0 ; delegate -> mTargetStrengthSuggested = 1 ; delegate
-> mTargetStrengthDesired = 2 ; delegate -> mTargetStrengthRequired = 3 ;
delegate -> mConsistencyTol = + 1.000000000000000062e-09 ; delegate ->
mTreeJointDof = 39 ; delegate -> mDof = 39 ; delegate -> mStateSize = 90 ;
delegate -> mContinuousStateSize = 90 ; delegate -> mModeVectorSize = 0 ;
delegate -> mNumStages = 13 ; delegate -> mNumConstraints = 2 ; delegate ->
mNumAllConstraintEquations = 0 ; sm_core_SmSizePairVector_create ( & delegate
-> mJointToStageIdx , 13 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , 13 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mPrimitiveIndices , delegate -> mNumStages + 1 , 0 ) ; memcpy
( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mPrimitiveIndices ) ,
primitiveIndices , ( delegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mStateOffsets , 39 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mStateOffsets ) , stateOffsets , 39 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 39 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 39 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 39 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 39 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mHasAllVelocityDisabledEquations , delegate -> mNumConstraints ,
0 ) ; memcpy ( sm_core_SmIntVector_nonConstValues ( & delegate ->
mHasAllVelocityDisabledEquations ) , hasAllVelocityDisabledEquations ,
delegate -> mNumConstraints * sizeof ( int32_T ) ) ;
sm_core_SmIntVector_create ( & delegate -> mRunTimeEnabledEquations ,
delegate -> mNumAllConstraintEquations , 0 ) ; memcpy (
sm_core_SmIntVector_nonConstValues ( & delegate -> mRunTimeEnabledEquations )
, runtimeEnabledEquations , delegate -> mNumAllConstraintEquations * sizeof (
int32_T ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot ,
delegate -> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof (
size_t ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs ,
30 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofs ) , constraintDofs , 30 * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofOffsets , delegate
-> mNumConstraints + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues
( & delegate -> mConstraintDofOffsets ) , constraintDofOffsets , ( delegate
-> mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create
( & scratchpad -> mPosRequired , 39 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 39 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 2 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 2 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 39 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 39 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 39 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 39 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 39 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 39 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 39 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 0 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 90 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 90 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 90 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 90 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 1600 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 39 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 90 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 39 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 218 , 0.0
) ; delegate -> mSetTargets = draft7_a151ee3d_1_setTargets ; delegate ->
mResetStateVector = draft7_a151ee3d_1_resetAsmStateVector ; delegate ->
mInitializeTrackedAngleState = draft7_a151ee3d_1_initializeTrackedAngleState
; delegate -> mComputeDiscreteState = draft7_a151ee3d_1_computeDiscreteState
; delegate -> mAdjustPosition = draft7_a151ee3d_1_adjustPosition ; delegate
-> mPerturbJointPrimitiveState =
draft7_a151ee3d_1_perturbAsmJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState = NULL ; delegate -> mComputePosDofBlendMatrix =
draft7_a151ee3d_1_computePosDofBlendMatrix ; delegate ->
mComputeVelDofBlendMatrix = draft7_a151ee3d_1_computeVelDofBlendMatrix ;
delegate -> mProjectPartiallyTargetedPos =
draft7_a151ee3d_1_projectPartiallyTargetedPos ; delegate -> mPropagateMotion
= draft7_a151ee3d_1_propagateMotion ; delegate -> mComputeAssemblyError =
draft7_a151ee3d_1_computeAssemblyError ; delegate -> mComputeAssemblyJacobian
= draft7_a151ee3d_1_computeAssemblyJacobian ; delegate ->
mComputeFullAssemblyJacobian = draft7_a151ee3d_1_computeFullAssemblyJacobian
; delegate -> mIsInKinematicSingularity =
draft7_a151ee3d_1_isInKinematicSingularity ; delegate -> mConvertStateVector
= draft7_a151ee3d_1_convertStateVector ; delegate -> mConstructStateVector =
NULL ; delegate -> mExtractSolverStateVector = NULL ; delegate ->
mIsPositionViolation = NULL ; delegate -> mIsVelocityViolation = NULL ;
delegate -> mProjectStateSim = NULL ; delegate -> mComputeConstraintError =
NULL ; delegate -> mResetModeVector = NULL ; delegate ->
mHasJointDisToNormModeChange = NULL ; delegate ->
mPerformJointDisToNormModeChange = NULL ; delegate -> mOnModeChangedCutJoints
= NULL ; delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * delegate ) { SmMechanismDelegateScratchpad * scratchpad
= NULL ; const SmSizePair jointToStageIdx [ 13 ] = { { 322 , 4 } , { 349 , 3
} , { 375 , 2 } , { 401 , 1 } , { 427 , 0 } , { 542 , 5 } , { 554 , 6 } , {
566 , 7 } , { 578 , 8 } , { 590 , 9 } , { 602 , 10 } , { 614 , 11 } , { 626 ,
12 } } ; const size_t primitiveIndices [ 13 + 1 ] = { 0 , 3 , 6 , 9 , 12 , 15
, 18 , 21 , 24 , 27 , 30 , 33 , 36 , 39 } ; const SmSizePair stateOffsets [
39 ] = { { 0 , 3 } , { 1 , 4 } , { 2 , 5 } , { 6 , 9 } , { 7 , 10 } , { 8 ,
11 } , { 12 , 15 } , { 13 , 16 } , { 14 , 17 } , { 18 , 21 } , { 19 , 22 } ,
{ 20 , 23 } , { 24 , 27 } , { 25 , 28 } , { 26 , 29 } , { 30 , 33 } , { 31 ,
34 } , { 32 , 35 } , { 36 , 39 } , { 37 , 40 } , { 38 , 41 } , { 42 , 45 } ,
{ 43 , 46 } , { 44 , 47 } , { 48 , 51 } , { 49 , 52 } , { 50 , 53 } , { 54 ,
57 } , { 55 , 58 } , { 56 , 59 } , { 60 , 63 } , { 61 , 64 } , { 62 , 65 } ,
{ 66 , 69 } , { 67 , 70 } , { 68 , 71 } , { 72 , 75 } , { 73 , 76 } , { 74 ,
77 } } ; const SmSizePair dofOffsets [ 39 ] = { { 0 , 1 } , { 1 , 2 } , { 2 ,
3 } , { 3 , 4 } , { 4 , 5 } , { 5 , 6 } , { 6 , 7 } , { 7 , 8 } , { 8 , 9 } ,
{ 9 , 10 } , { 10 , 11 } , { 11 , 12 } , { 12 , 13 } , { 13 , 14 } , { 14 ,
15 } , { 15 , 16 } , { 16 , 17 } , { 17 , 18 } , { 18 , 19 } , { 19 , 20 } ,
{ 20 , 21 } , { 21 , 22 } , { 22 , 23 } , { 23 , 24 } , { 24 , 25 } , { 25 ,
26 } , { 26 , 27 } , { 27 , 28 } , { 28 , 29 } , { 29 , 30 } , { 30 , 31 } ,
{ 31 , 32 } , { 32 , 33 } , { 33 , 34 } , { 34 , 35 } , { 35 , 36 } , { 36 ,
37 } , { 37 , 38 } , { 38 , 39 } } ; const size_t * flexibleStages = NULL ;
const size_t remodIndices [ 39 ] = { 0 , 1 , 2 , 6 , 7 , 8 , 12 , 13 , 14 ,
18 , 19 , 20 , 24 , 25 , 26 , 30 , 31 , 32 , 36 , 37 , 38 , 42 , 43 , 44 , 48
, 49 , 50 , 54 , 55 , 56 , 60 , 61 , 62 , 66 , 67 , 68 , 72 , 73 , 74 } ;
const size_t equationsPerConstraint [ 2 ] = { 0 , 0 } ; const int32_T
hasAllVelocityDisabledEquations [ 2 ] = { 0 , 0 } ; const int32_T *
runtimeEnabledEquations = NULL ; const size_t dofToVelSlot [ 39 ] = { 3 , 4 ,
5 , 9 , 10 , 11 , 15 , 16 , 17 , 21 , 22 , 23 , 27 , 28 , 29 , 33 , 34 , 35 ,
39 , 40 , 41 , 45 , 46 , 47 , 51 , 52 , 53 , 57 , 58 , 59 , 63 , 64 , 65 , 69
, 70 , 71 , 75 , 76 , 77 } ; const size_t constraintDofs [ 30 ] = { 0 , 1 , 2
, 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 0 , 1 , 2 , 3 , 4 , 5
, 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 } ; const size_t
constraintDofOffsets [ 2 + 1 ] = { 0 , 15 , 30 } ; const size_t Jm = 0 ;
const size_t Jn = 39 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst =
zeroSizePair . mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad (
delegate ) ; scratchpad = delegate -> mScratchpad ; delegate ->
mTargetStrengthFree = 0 ; delegate -> mTargetStrengthSuggested = 1 ; delegate
-> mTargetStrengthDesired = 2 ; delegate -> mTargetStrengthRequired = 3 ;
delegate -> mConsistencyTol = + 1.000000000000000062e-09 ; delegate ->
mTreeJointDof = 39 ; delegate -> mDof = 39 ; delegate -> mStateSize = 90 ;
delegate -> mContinuousStateSize = 90 ; delegate -> mModeVectorSize = 0 ;
delegate -> mNumStages = 13 ; delegate -> mNumConstraints = 2 ; delegate ->
mNumAllConstraintEquations = 0 ; sm_core_SmSizePairVector_create ( & delegate
-> mJointToStageIdx , 13 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , 13 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mPrimitiveIndices , delegate -> mNumStages + 1 , 0 ) ; memcpy
( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mPrimitiveIndices ) ,
primitiveIndices , ( delegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mStateOffsets , 39 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mStateOffsets ) , stateOffsets , 39 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 39 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 39 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 39 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 39 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mHasAllVelocityDisabledEquations , delegate -> mNumConstraints ,
0 ) ; memcpy ( sm_core_SmIntVector_nonConstValues ( & delegate ->
mHasAllVelocityDisabledEquations ) , hasAllVelocityDisabledEquations ,
delegate -> mNumConstraints * sizeof ( int32_T ) ) ;
sm_core_SmIntVector_create ( & delegate -> mRunTimeEnabledEquations ,
delegate -> mNumAllConstraintEquations , 0 ) ; memcpy (
sm_core_SmIntVector_nonConstValues ( & delegate -> mRunTimeEnabledEquations )
, runtimeEnabledEquations , delegate -> mNumAllConstraintEquations * sizeof (
int32_T ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot ,
delegate -> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof (
size_t ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs ,
30 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofs ) , constraintDofs , 30 * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofOffsets , delegate
-> mNumConstraints + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues
( & delegate -> mConstraintDofOffsets ) , constraintDofOffsets , ( delegate
-> mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create
( & scratchpad -> mPosRequired , 39 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 39 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 2 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 2 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 2 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 39 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 39 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 39 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 39 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 39 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 39 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 39 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 0 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 90 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 90 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 90 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 90 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 1600 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 39 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 90 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 39 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 218 , 0.0
) ; delegate -> mSetTargets = NULL ; delegate -> mResetStateVector =
draft7_a151ee3d_1_resetSimStateVector ; delegate ->
mInitializeTrackedAngleState = NULL ; delegate -> mComputeDiscreteState =
NULL ; delegate -> mAdjustPosition = NULL ; delegate ->
mPerturbJointPrimitiveState = draft7_a151ee3d_1_perturbSimJointPrimitiveState
; delegate -> mPerturbFlexibleBodyState =
draft7_a151ee3d_1_perturbFlexibleBodyState ; delegate ->
mComputePosDofBlendMatrix = NULL ; delegate -> mComputeVelDofBlendMatrix =
NULL ; delegate -> mProjectPartiallyTargetedPos = NULL ; delegate ->
mPropagateMotion = NULL ; delegate -> mComputeAssemblyError = NULL ; delegate
-> mComputeAssemblyJacobian = NULL ; delegate -> mComputeFullAssemblyJacobian
= NULL ; delegate -> mIsInKinematicSingularity = NULL ; delegate ->
mConvertStateVector = NULL ; delegate -> mConstructStateVector =
draft7_a151ee3d_1_constructStateVector ; delegate ->
mExtractSolverStateVector = draft7_a151ee3d_1_extractSolverStateVector ;
delegate -> mIsPositionViolation = draft7_a151ee3d_1_isPositionViolation ;
delegate -> mIsVelocityViolation = draft7_a151ee3d_1_isVelocityViolation ;
delegate -> mProjectStateSim = draft7_a151ee3d_1_projectStateSim ; delegate
-> mComputeConstraintError = draft7_a151ee3d_1_computeConstraintError ;
delegate -> mResetModeVector = draft7_a151ee3d_1_resetModeVector ; delegate
-> mHasJointDisToNormModeChange =
draft7_a151ee3d_1_hasJointDisToNormModeChange ; delegate ->
mPerformJointDisToNormModeChange =
draft7_a151ee3d_1_performJointDisToNormModeChange ; delegate ->
mOnModeChangedCutJoints = draft7_a151ee3d_1_onModeChangedCutJoints ; delegate
-> mMech = NULL ; } static void initMechanismDelegates ( NeDaePrivateData *
smData ) { PmAllocator * alloc = pm_default_allocator ( ) ; const int32_T
motionInputOffsets [ 24 ] = { 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32
, 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 } ;
int_T status = 0 ; initAssemblyDelegate ( & smData -> mAssemblyDelegate ) ;
initSimulationDelegate ( & smData -> mSimulationDelegate ) ; status =
pm_create_int_vector_fields ( & smData -> mMotionInputOffsets , smData ->
mNumInputMotionPrimitives , alloc ) ; checkMemAllocStatus ( status ) ; memcpy
( smData -> mMotionInputOffsets . mX , motionInputOffsets , 24 * sizeof (
int32_T ) ) ; } static void initComputationFcnPtrs ( NeDaePrivateData *
smData ) { smData -> mSetParametersFcn = dae_cg_setParameters_function ;
smData -> mPAssertFcn = dae_cg_pAssert_method ; smData -> mDerivativeFcn =
dae_cg_deriv_method ; smData -> mNumJacPerturbLoBoundsFcn =
dae_cg_numJacPerturbLoBounds_method ; smData -> mNumJacPerturbHiBoundsFcn =
dae_cg_numJacPerturbHiBounds_method ; smData -> mOutputFcn =
dae_cg_compOutputs_method ; smData -> mModeFcn = dae_cg_mode_method ; smData
-> mZeroCrossingFcn = dae_cg_zeroCrossing_method ; smData -> mProjectionFcn =
dae_cg_project_solve ; smData -> mCIC_MODE_Fcn = dae_cg_CIC_MODE_solve ;
smData -> mCheckFcn = ( smData -> mStateVectorSize == 0 ) ?
dae_cg_check_solve : NULL ; smData -> mAssemblyFcn = dae_cg_assemble_solve ;
smData -> mSetupLoggerFcn = dae_cg_setupLoggerFcn ; smData -> mLogFcn =
dae_cg_recordLog_method ; smData -> mResidualsFcn = NULL ; smData ->
mLinearizeFcn = NULL ; smData -> mGenerateFcn = NULL ; } static void
initLiveLinkToSm ( NeDaePrivateData * smData ) { smData -> mLiveSmLink = NULL
; smData -> mLiveSmLink_destroy = NULL ; smData -> mLiveSmLink_copy = NULL ;
} void draft7_a151ee3d_1_NeDaePrivateData_create ( NeDaePrivateData * smData
) { initBasicAttributes ( smData ) ; initStateVector ( smData ) ; initAsserts
( smData ) ; initModeVector ( smData ) ; initZeroCrossings ( smData ) ;
initVariables ( smData ) ; initRuntimeParameters ( smData ) ; initIoInfo (
smData ) ; initInputDerivs ( smData ) ; initDirectFeedthrough ( smData ) ;
initOutputDerivProc ( smData ) ; initMechanismDelegates ( smData ) ;
initComputationFcnPtrs ( smData ) ; initLiveLinkToSm ( smData ) ; }
