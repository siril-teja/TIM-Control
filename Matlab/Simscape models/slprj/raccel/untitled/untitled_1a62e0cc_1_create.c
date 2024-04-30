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
untitled_1a62e0cc_1_assertData [ ] ; extern const NeZCData
untitled_1a62e0cc_1_ZCData [ ] ; void
untitled_1a62e0cc_1_computeRuntimeParameters ( const double *
runtimeRootVariables , double * runtimeParameters ) ; void
untitled_1a62e0cc_1_validateRuntimeParameters ( const double *
runtimeParameters , int32_T * assertSatisfactionFlags ) ; void
untitled_1a62e0cc_1_computeAsmRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void untitled_1a62e0cc_1_computeSimRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void untitled_1a62e0cc_1_initializeGeometries ( const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ) ; PmfMessageId
untitled_1a62e0cc_1_compDerivs ( const RuntimeDerivedValuesBundle * , const
int * , const double * , const int * , const double * , const double * ,
const double * , const double * , double * , double * , NeuDiagnosticManager
* neDiagMgr ) ; PmfMessageId untitled_1a62e0cc_1_numJacPerturbLoBounds (
const RuntimeDerivedValuesBundle * , const int * , const double * , const int
* , const double * , const double * , const double * , const double * ,
double * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
untitled_1a62e0cc_1_numJacPerturbHiBounds ( const RuntimeDerivedValuesBundle
* , const int * , const double * , const int * , const double * , const
double * , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
untitled_1a62e0cc_1_checkDynamics ( const RuntimeDerivedValuesBundle * ,
const double * , const double * , const double * , const double * , const
double * , const int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId untitled_1a62e0cc_1_compOutputsDyn ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId untitled_1a62e0cc_1_compOutputsKin ( const
RuntimeDerivedValuesBundle * , const double * , const int * , const double *
, const double * , const double * , const double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
untitled_1a62e0cc_1_compOutputs ( const RuntimeDerivedValuesBundle * , const
double * , const int * , const double * , const double * , const double * ,
const double * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
untitled_1a62e0cc_1_computeAsmModeVector ( const double * , const double * ,
const double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId untitled_1a62e0cc_1_computeSimModeVector ( const double * ,
const double * , const double * , int * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId untitled_1a62e0cc_1_computeZeroCrossings ( const
RuntimeDerivedValuesBundle * , const double * , const double * , const double
* , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
untitled_1a62e0cc_1_recordLog ( const RuntimeDerivedValuesBundle * , const
int * , const double * , const int * , const double * , const double * ,
const double * , double * , double * , NeuDiagnosticManager * neDiagMgr ) ;
void untitled_1a62e0cc_1_setTargets ( const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle , CTarget * targets ) ; void
untitled_1a62e0cc_1_resetAsmStateVector ( const void * mech , double *
stateVector ) ; void untitled_1a62e0cc_1_resetSimStateVector ( const void *
mech , double * stateVector ) ; void
untitled_1a62e0cc_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
modeVector , const double * motionData , double * stateVector ) ; void
untitled_1a62e0cc_1_computeDiscreteState ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , double *
stateVector ) ; void untitled_1a62e0cc_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * stateVector ) ; void
untitled_1a62e0cc_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
untitled_1a62e0cc_1_perturbSimJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
untitled_1a62e0cc_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double magnitude , boolean_T doPerturbVelocity , double *
stateVector ) ; void untitled_1a62e0cc_1_computePosDofBlendMatrix ( const
void * mech , size_t stageIdx , size_t primitiveIdx , const double *
stateVector , int partialType , double * matrix ) ; void
untitled_1a62e0cc_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primitiveIdx , const double * stateVector , int partialType
, double * matrix ) ; void untitled_1a62e0cc_1_projectPartiallyTargetedPos (
const void * mech , size_t stageIdx , size_t primitiveIdx , const double *
origStateVector , int partialType , double * stateVector ) ; void
untitled_1a62e0cc_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , double * motionData ) ; size_t
untitled_1a62e0cc_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData , double *
error ) ; size_t untitled_1a62e0cc_1_computeAssemblyJacobian ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , boolean_T forVelocitySatisfaction , const double *
stateVector , const int * modeVector , const double * motionData , double * J
) ; size_t untitled_1a62e0cc_1_computeFullAssemblyJacobian ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
double * stateVector , const int * modeVector , const double * motionData ,
double * J ) ; boolean_T untitled_1a62e0cc_1_isInKinematicSingularity ( const
void * mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
size_t constraintIdx , const int * modeVector , const double * motionData ) ;
void untitled_1a62e0cc_1_convertStateVector ( const void * asmMech , const
RuntimeDerivedValuesBundle * asmRuntimeDerivedValuesBundle , const void *
simMech , const double * asmStateVector , const int * asmModeVector , const
int * simModeVector , double * simStateVector ) ; void
untitled_1a62e0cc_1_constructStateVector ( const void * mech , const double *
solverStateVector , const double * u , const double * uDot , const double *
discreteStateVector , double * fullStateVector ) ; void
untitled_1a62e0cc_1_extractSolverStateVector ( const void * mech , const
double * fullStateVector , double * solverStateVector ) ; boolean_T
untitled_1a62e0cc_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; boolean_T untitled_1a62e0cc_1_isVelocityViolation ( const void
* mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
const int * constraintEqnEnableFlags , const double * stateVector , const int
* modeVector ) ; PmfMessageId untitled_1a62e0cc_1_projectStateSim ( const
void * mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle ,
const int * constraintEqnEnableFlags , const int * modeVector , double *
stateVector , void * neDiagMgr ) ; void
untitled_1a62e0cc_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , const int * modeVector , double * error ) ; void
untitled_1a62e0cc_1_resetModeVector ( const void * mech , int * modeVector )
; boolean_T untitled_1a62e0cc_1_hasJointDisToNormModeChange ( const void *
mech , const int * prevModeVector , const int * modeVector ) ; PmfMessageId
untitled_1a62e0cc_1_performJointDisToNormModeChange ( const void * mech ,
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const int * prevModeVector , const int *
modeVector , const double * inputVector , double * stateVector , void *
neDiagMgr ) ; void untitled_1a62e0cc_1_onModeChangedCutJoints ( const void *
mech , const int * prevModeVector , const int * modeVector , double *
stateVector ) ; PmfMessageId untitled_1a62e0cc_1_assemble ( const double * u
, double * udot , double * x , NeuDiagnosticManager * neDiagMgr ) { ( void )
x ; ( void ) u ; ( void ) udot ; ( void ) neDiagMgr ; return NULL ; } static
void dae_cg_setParameters_function ( const NeDae * dae , const
NeParameterBundle * paramBundle ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeRootVariables = paramBundle ->
mRealParameters . mX ; if ( smData -> mRuntimeParameterScalars . mN == 0 )
return ; untitled_1a62e0cc_1_computeRuntimeParameters ( runtimeRootVariables
, smData -> mRuntimeParameterScalars . mX ) ;
untitled_1a62e0cc_1_computeAsmRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mAsmRuntimeDerivedValuesBundle ) ;
untitled_1a62e0cc_1_computeSimRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mSimRuntimeDerivedValuesBundle ) ; untitled_1a62e0cc_1_initializeGeometries (
& smData -> mSimRuntimeDerivedValuesBundle ) ;
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
; untitled_1a62e0cc_1_validateRuntimeParameters ( runtimeParams ,
assertSatisfactionFlags ) ; return NULL ; } static PmfMessageId
dae_cg_deriv_method ( const NeDae * dae , const NeSystemInput * systemInput ,
NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) {
const NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId
= NULL ; double errorResult = 0.0 ; if ( smData ->
mCachedDerivativesAvailable ) memcpy ( daeMethodOutput -> mXP0 . mX , smData
-> mCachedDerivatives . mX , 13 * sizeof ( real_T ) ) ; else errorId =
untitled_1a62e0cc_1_compDerivs ( & smData -> mSimRuntimeDerivedValuesBundle ,
smData -> mSimulationDelegate . mRunTimeEnabledEquations . mValues ,
systemInput -> mX . mX , systemInput -> mM . mX , systemInput -> mU . mX ,
systemInput -> mU . mX + 132 , systemInput -> mV . mX + 132 , systemInput ->
mD . mX , daeMethodOutput -> mXP0 . mX , & errorResult , neDiagMgr ) ; return
errorId ; } static PmfMessageId dae_cg_numJacPerturbLoBounds_method ( const
NeDae * dae , const NeSystemInput * systemInput , NeDaeMethodOutput *
daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData
* smData = dae -> mPrivateData ; PmfMessageId errorId = NULL ; double
errorResult = 0.0 ; errorId = untitled_1a62e0cc_1_numJacPerturbLoBounds ( &
smData -> mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 132 , systemInput
-> mV . mX + 132 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_LO
. mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbHiBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
untitled_1a62e0cc_1_numJacPerturbHiBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 132 , systemInput
-> mV . mX + 132 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_HI
. mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_compOutputs_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { PmfMessageId errorId = NULL ; ( void ) dae ; ( void )
systemInput ; ( void ) daeMethodOutput ; ( void ) neDiagMgr ; return errorId
; } static PmfMessageId dae_cg_mode_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; PmfMessageId errorId = NULL ; double errorResult = 0.0 ;
errorId = untitled_1a62e0cc_1_computeSimModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 132 , systemInput -> mV . mX + 132 , daeMethodOutput
-> mMODE . mX , & errorResult , neDiagMgr ) ; memcpy ( smData ->
mCachedModeVector . mX , daeMethodOutput -> mMODE . mX , 0 * sizeof ( int32_T
) ) ; return errorId ; } static PmfMessageId dae_cg_zeroCrossing_method (
const NeDae * dae , const NeSystemInput * systemInput , NeDaeMethodOutput *
daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData
* smData = dae -> mPrivateData ; double errorResult = 0.0 ; return
untitled_1a62e0cc_1_computeZeroCrossings ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 132 , systemInput -> mV . mX + 132 ,
systemInput -> mD . mX , daeMethodOutput -> mZC . mX , & errorResult ,
neDiagMgr ) ; } static void dae_cg_setupLoggerFcn ( const NeDae * dae ,
NeLoggerBuilder * neLoggerBuilder ) { ( void ) dae ; ( void ) neLoggerBuilder
; } static PmfMessageId dae_cg_recordLog_method ( const NeDae * dae , const
NeSystemInput * systemInput , PmRealVector * output , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; double *
fullStateVector = smData -> mSimulationFullStateVector . mX ;
untitled_1a62e0cc_1_constructStateVector ( NULL , systemInput -> mX . mX ,
systemInput -> mU . mX , systemInput -> mU . mX + 132 , systemInput -> mD .
mX , fullStateVector ) ; errorId = untitled_1a62e0cc_1_recordLog ( & smData
-> mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , fullStateVector , systemInput -> mM . mX
, systemInput -> mU . mX , systemInput -> mU . mX + 132 , systemInput -> mV .
mX + 132 , output -> mX , & errorResult , neDiagMgr ) ; return errorId ; }
static PmfMessageId dae_cg_project_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 132 , systemInput -> mD . mX , systemInput ->
mX . mX , neDiagMgr ) ; } static PmfMessageId dae_cg_check_solve ( const
NeDae * dae , const NeSystemInput * systemInput , NeuDiagnosticManager *
neDiagMgr ) { NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId
errorId = NULL ; if ( smData -> mNumConstraintEqns > 0 ) errorId =
sm_core_projectState ( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 132 , systemInput -> mD . mX , systemInput ->
mX . mX , neDiagMgr ) ; if ( errorId == NULL ) { double result = 0.0 ;
errorId = untitled_1a62e0cc_1_checkDynamics ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 132 , systemInput -> mV . mX + 132 ,
systemInput -> mD . mX , systemInput -> mM . mX , & result , neDiagMgr ) ; }
return errorId ; } static PmfMessageId dae_cg_CIC_MODE_solve ( const NeDae *
dae , const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr )
{ NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId =
NULL ; double errorResult = 0.0 ; const size_t mvSize = smData ->
mModeVectorSize ; boolean_T modeChanged = false ; if ( mvSize > 0 ) { errorId
= untitled_1a62e0cc_1_computeSimModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 132 , systemInput -> mV . mX + 132 , systemInput ->
mM . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId
; { size_t i ; for ( i = 0 ; i < mvSize ; ++ i ) if ( systemInput -> mM . mX
[ i ] != smData -> mCachedModeVector . mX [ i ] ) { modeChanged = true ;
break ; } } } if ( modeChanged ) { errorId = sm_core_onModeChanged ( & smData
-> mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mU . mX , systemInput -> mU . mX + 132 , systemInput -> mD .
mX , smData -> mCachedModeVector . mX , systemInput -> mM . mX , systemInput
-> mX . mX , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; memcpy (
smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 * sizeof (
int32_T ) ) ; } errorId = sm_core_projectState ( true , & smData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ,
systemInput -> mM . mX , systemInput -> mU . mX , systemInput -> mU . mX +
132 , systemInput -> mD . mX , systemInput -> mX . mX , neDiagMgr ) ; return
errorId ; } static PmfMessageId dae_cg_assemble_solve ( const NeDae * dae ,
const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; const SmMechanismDelegate *
delegate = & smData -> mAssemblyDelegate ; const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle = & smData -> mAsmRuntimeDerivedValuesBundle ;
PmfMessageId errorId = NULL ; size_t i ; double errorResult = 0.0 ; const
size_t numTargets = 8 ; unsigned int asmStatus = 0 ; double *
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
untitled_1a62e0cc_1_computeAsmModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 132 , systemInput -> mV . mX + 132 , smData ->
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
untitled_1a62e0cc_1_checkTargets ( & smData -> mSimRuntimeDerivedValuesBundle
, assemblyFullStateVector ) ;
#endif
if ( smData -> mModeVectorSize > 0 ) { errorId =
untitled_1a62e0cc_1_computeSimModeVector ( systemInput -> mU . mX ,
systemInput -> mU . mX + 132 , systemInput -> mV . mX + 132 , systemInput ->
mM . mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId
; memcpy ( smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 *
sizeof ( int32_T ) ) ; } ( * delegate -> mConvertStateVector ) ( NULL ,
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
mStateVectorSize = 13 ; smData -> mFullStateVectorSize = 13 ; smData ->
mDiscreteStateSize = 0 ; smData -> mModeVectorSize = 0 ; smData ->
mNumZeroCrossings = 0 ; smData -> mInputVectorSize = 132 ; smData ->
mOutputVectorSize = 0 ; smData -> mNumConstraintEqns = 0 ; for ( i = 0 ; i <
4 ; ++ i ) smData -> mChecksum [ i ] = 0 ; } static void initStateVector (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; const int32_T stateVectorMap [ 13 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 ,
9 , 10 , 11 , 12 } ; const CTarget targets [ 8 ] = { { 0 , 140 , 0 , false ,
0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false , 1 , { +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 140 , 0 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 140 , 1
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 140 , 1 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 140 , 2
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
1 , { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 140 , 2 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 1 , 140 , 3
, false , 0 , 0 , "1" , false , false , + 1.000000000000000000e+00 , false ,
4 , { + 1.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 2 , 140 , 3 , false , 0 , 0 , "1" , true ,
false , + 1.000000000000000000e+00 , false , 3 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } } ; const
size_t numTargets = 8 ; int_T status ; size_t i ; status =
pm_create_real_vector_fields ( & smData -> mAssemblyFullStateVector , 13 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_real_vector_fields ( & smData -> mSimulationFullStateVector , 13 ,
alloc ) ; checkMemAllocStatus ( status ) ; status =
pm_create_int_vector_fields ( & smData -> mStateVectorMap , smData ->
mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize *
sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 8 ; smData ->
mNumInputMotionPrimitives = 0 ; PM_ALLOCATE_ARRAY ( smData -> mTargets ,
CTarget , numTargets , alloc ) ; for ( i = 0 ; i < numTargets ; ++ i )
sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; } static
void initAsserts ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; smData -> mNumParamAsserts = 0
; smData -> mParamAssertObjects = NULL ; smData -> mParamAssertPaths = NULL ;
smData -> mParamAssertDescriptors = NULL ; smData -> mParamAssertMessages =
NULL ; smData -> mParamAssertMessageIds = NULL ; status =
pm_create_bool_vector_fields ( & smData -> mParamAssertIsWarnings , smData ->
mNumParamAsserts , alloc ) ; checkMemAllocStatus ( status ) ; if ( smData ->
mNumParamAsserts > 0 ) { const NeAssertData * ad =
untitled_1a62e0cc_1_assertData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mParamAssertObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData
-> mParamAssertPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mParamAssertDescriptors , PmCharVector , 0 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessages , PmCharVector , 0 , alloc
) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessageIds , PmCharVector , 0 ,
alloc ) ; for ( i = 0 ; i < smData -> mNumParamAsserts ; ++ i , ++ ad ) {
smData -> mParamAssertObjects [ i ] = cStringToCharVector ( ad -> mObject ) ;
smData -> mParamAssertPaths [ i ] = cStringToCharVector ( ad -> mPath ) ;
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
untitled_1a62e0cc_1_ZCData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mZeroCrossingObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mZeroCrossingPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY
( smData -> mZeroCrossingDescriptors , PmCharVector , 0 , alloc ) ; for ( i =
0 ; i < smData -> mNumZeroCrossings ; ++ i , ++ zcd ) { smData ->
mZeroCrossingObjects [ i ] = cStringToCharVector ( zcd -> mObject ) ; smData
-> mZeroCrossingPaths [ i ] = cStringToCharVector ( zcd -> mPath ) ; smData
-> mZeroCrossingDescriptors [ i ] = cStringToCharVector ( zcd -> mDescriptor
) ; smData -> mZeroCrossingTypes . mX [ i ] = zcd -> mType ; } } } static
void initVariables ( NeDaePrivateData * smData ) { const char * varFullPaths
[ 13 ] = { "x6_DOF_Joint.Px.p" , "x6_DOF_Joint.Py.p" , "x6_DOF_Joint.Pz.p" ,
"x6_DOF_Joint.S.Q" , "x6_DOF_Joint.S.Q" , "x6_DOF_Joint.S.Q" ,
"x6_DOF_Joint.S.Q" , "x6_DOF_Joint.Px.v" , "x6_DOF_Joint.Py.v" ,
"x6_DOF_Joint.Pz.v" , "x6_DOF_Joint.S.w" , "x6_DOF_Joint.S.w" ,
"x6_DOF_Joint.S.w" } ; const char * varObjects [ 13 ] = {
"untitled/6-DOF Joint" , "untitled/6-DOF Joint" , "untitled/6-DOF Joint" ,
"untitled/6-DOF Joint" , "untitled/6-DOF Joint" , "untitled/6-DOF Joint" ,
"untitled/6-DOF Joint" , "untitled/6-DOF Joint" , "untitled/6-DOF Joint" ,
"untitled/6-DOF Joint" , "untitled/6-DOF Joint" , "untitled/6-DOF Joint" ,
"untitled/6-DOF Joint" } ; smData -> mNumVarScalars = 13 ; smData ->
mVarFullPaths = NULL ; smData -> mVarObjects = NULL ; if ( smData ->
mNumVarScalars > 0 ) { size_t s ; PmAllocator * alloc = pm_default_allocator
( ) ; PM_ALLOCATE_ARRAY ( smData -> mVarFullPaths , PmCharVector , 13 , alloc
) ; PM_ALLOCATE_ARRAY ( smData -> mVarObjects , PmCharVector , 13 , alloc ) ;
for ( s = 0 ; s < smData -> mNumVarScalars ; ++ s ) { smData -> mVarFullPaths
[ s ] = cStringToCharVector ( varFullPaths [ s ] ) ; smData -> mVarObjects [
s ] = cStringToCharVector ( varObjects [ s ] ) ; } } } static void
initRuntimeParameters ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; size_t i = 0 ; const int32_T *
rtpRootVarRows = NULL ; const int32_T * rtpRootVarCols = NULL ; const char *
* rtpFullPaths = NULL ; smData -> mNumRtpRootVars = 0 ; status =
pm_create_int_vector_fields ( & smData -> mRtpRootVarRows , smData ->
mNumRtpRootVars , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mRtpRootVarRows . mX , rtpRootVarRows , smData -> mNumRtpRootVars * sizeof
( int32_T ) ) ; status = pm_create_int_vector_fields ( & smData ->
mRtpRootVarCols , smData -> mNumRtpRootVars , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mRtpRootVarCols . mX , rtpRootVarCols , smData
-> mNumRtpRootVars * sizeof ( int32_T ) ) ; smData -> mRtpFullPaths = NULL ;
if ( smData -> mNumRtpRootVars > 0 ) { size_t v ; PM_ALLOCATE_ARRAY ( smData
-> mRtpFullPaths , PmCharVector , 0 , alloc ) ; for ( v = 0 ; v < smData ->
mNumRtpRootVars ; ++ v ) { smData -> mRtpFullPaths [ v ] =
cStringToCharVector ( rtpFullPaths [ v ] ) ; } } smData ->
mNumRuntimeRootVarScalars = 0 ; status = pm_create_real_vector_fields ( &
smData -> mRuntimeParameterScalars , 0 , alloc ) ; checkMemAllocStatus (
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
) { const char * inputPortPaths [ 132 ] = { "External_Force_and_Torque.fz" ,
"External_Force_and_Torque1.fz" , "External_Force_and_Torque10.fz" ,
"External_Force_and_Torque100.fz" , "External_Force_and_Torque101.fz" ,
"External_Force_and_Torque102.fz" , "External_Force_and_Torque103.fz" ,
"External_Force_and_Torque104.fz" , "External_Force_and_Torque105.fz" ,
"External_Force_and_Torque106.fz" , "External_Force_and_Torque107.fz" ,
"External_Force_and_Torque108.fz" , "External_Force_and_Torque109.fz" ,
"External_Force_and_Torque11.fz" , "External_Force_and_Torque110.fz" ,
"External_Force_and_Torque111.fz" , "External_Force_and_Torque112.fz" ,
"External_Force_and_Torque113.fz" , "External_Force_and_Torque114.fz" ,
"External_Force_and_Torque115.fz" , "External_Force_and_Torque116.fz" ,
"External_Force_and_Torque117.fz" , "External_Force_and_Torque118.fz" ,
"External_Force_and_Torque119.fz" , "External_Force_and_Torque12.fz" ,
"External_Force_and_Torque120.fz" , "External_Force_and_Torque121.fz" ,
"External_Force_and_Torque122.fz" , "External_Force_and_Torque123.fz" ,
"External_Force_and_Torque124.fz" , "External_Force_and_Torque125.fz" ,
"External_Force_and_Torque126.fz" , "External_Force_and_Torque127.fz" ,
"External_Force_and_Torque128.fz" , "External_Force_and_Torque129.fz" ,
"External_Force_and_Torque13.fz" , "External_Force_and_Torque130.fz" ,
"External_Force_and_Torque131.fz" , "External_Force_and_Torque14.fz" ,
"External_Force_and_Torque15.fz" , "External_Force_and_Torque16.fz" ,
"External_Force_and_Torque17.fz" , "External_Force_and_Torque18.fz" ,
"External_Force_and_Torque19.fz" , "External_Force_and_Torque2.fz" ,
"External_Force_and_Torque20.fz" , "External_Force_and_Torque21.fz" ,
"External_Force_and_Torque22.fz" , "External_Force_and_Torque23.fz" ,
"External_Force_and_Torque24.fz" , "External_Force_and_Torque25.fz" ,
"External_Force_and_Torque26.fz" , "External_Force_and_Torque27.fz" ,
"External_Force_and_Torque28.fz" , "External_Force_and_Torque29.fz" ,
"External_Force_and_Torque3.fz" , "External_Force_and_Torque30.fz" ,
"External_Force_and_Torque31.fz" , "External_Force_and_Torque32.fz" ,
"External_Force_and_Torque33.fz" , "External_Force_and_Torque34.fz" ,
"External_Force_and_Torque35.fz" , "External_Force_and_Torque36.fz" ,
"External_Force_and_Torque37.fz" , "External_Force_and_Torque38.fz" ,
"External_Force_and_Torque39.fz" , "External_Force_and_Torque4.fz" ,
"External_Force_and_Torque40.fz" , "External_Force_and_Torque41.fz" ,
"External_Force_and_Torque42.fz" , "External_Force_and_Torque43.fz" ,
"External_Force_and_Torque44.fz" , "External_Force_and_Torque45.fz" ,
"External_Force_and_Torque46.fz" , "External_Force_and_Torque47.fz" ,
"External_Force_and_Torque48.fz" , "External_Force_and_Torque49.fz" ,
"External_Force_and_Torque5.fz" , "External_Force_and_Torque50.fz" ,
"External_Force_and_Torque51.fz" , "External_Force_and_Torque52.fz" ,
"External_Force_and_Torque53.fz" , "External_Force_and_Torque54.fz" ,
"External_Force_and_Torque55.fz" , "External_Force_and_Torque56.fz" ,
"External_Force_and_Torque57.fz" , "External_Force_and_Torque58.fz" ,
"External_Force_and_Torque59.fz" , "External_Force_and_Torque6.fz" ,
"External_Force_and_Torque60.fz" , "External_Force_and_Torque61.fz" ,
"External_Force_and_Torque62.fz" , "External_Force_and_Torque63.fz" ,
"External_Force_and_Torque64.fz" , "External_Force_and_Torque65.fz" ,
"External_Force_and_Torque66.fz" , "External_Force_and_Torque67.fz" ,
"External_Force_and_Torque68.fz" , "External_Force_and_Torque69.fz" ,
"External_Force_and_Torque7.fz" , "External_Force_and_Torque70.fz" ,
"External_Force_and_Torque71.fz" , "External_Force_and_Torque72.fz" ,
"External_Force_and_Torque73.fz" , "External_Force_and_Torque74.fz" ,
"External_Force_and_Torque75.fz" , "External_Force_and_Torque76.fz" ,
"External_Force_and_Torque77.fz" , "External_Force_and_Torque78.fz" ,
"External_Force_and_Torque79.fz" , "External_Force_and_Torque8.fz" ,
"External_Force_and_Torque80.fz" , "External_Force_and_Torque81.fz" ,
"External_Force_and_Torque82.fz" , "External_Force_and_Torque83.fz" ,
"External_Force_and_Torque84.fz" , "External_Force_and_Torque85.fz" ,
"External_Force_and_Torque86.fz" , "External_Force_and_Torque87.fz" ,
"External_Force_and_Torque88.fz" , "External_Force_and_Torque89.fz" ,
"External_Force_and_Torque9.fz" , "External_Force_and_Torque90.fz" ,
"External_Force_and_Torque91.fz" , "External_Force_and_Torque92.fz" ,
"External_Force_and_Torque93.fz" , "External_Force_and_Torque94.fz" ,
"External_Force_and_Torque95.fz" , "External_Force_and_Torque96.fz" ,
"External_Force_and_Torque97.fz" , "External_Force_and_Torque98.fz" ,
"External_Force_and_Torque99.fz" } ; const char * inputUnits [ 132 ] = {
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
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" ,
"kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" , "kg*m/s^2" }
; const SizePair inputDimensions [ 132 ] = { { 1 , 1 } , { 1 , 1 } , { 1 , 1
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
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1
} , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } } ; const
char * * outputPortPaths = NULL ; const char * * outputUnits = NULL ; const
SizePair * outputDimensions = NULL ; initIoInfoHelper ( 132 , inputPortPaths
, inputUnits , inputDimensions , true , smData ) ; initIoInfoHelper ( 0 ,
outputPortPaths , outputUnits , outputDimensions , false , smData ) ; }
static void initInputDerivs ( NeDaePrivateData * smData ) { const int32_T
numInputDerivs [ 132 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 } ; PmAllocator * alloc = pm_default_allocator ( ) ; const int_T
status = pm_create_int_vector_fields ( & smData -> mNumInputDerivs , smData
-> mInputVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy (
smData -> mNumInputDerivs . mX , numInputDerivs , 132 * sizeof ( int32_T ) )
; smData -> mInputOrder = 1 ; } static void initDirectFeedthrough (
NeDaePrivateData * smData ) { const boolean_T directFeedthroughVector [ 132 ]
= { false , false , false , false , false , false , false , false , false ,
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
false , false , false , false , false , false , false , false , false } ;
const boolean_T * directFeedthroughMatrix = NULL ; PmAllocator * alloc =
pm_default_allocator ( ) ; { const int_T status =
pm_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector , 132 ,
alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 132 * sizeof (
boolean_T ) ) ; } { const int_T status = pm_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 0 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 0 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; const int32_T * outputFunctionMap = NULL ; smData
-> mOutputFunctionMap = pm_create_int_vector ( 0 , alloc ) ; memcpy ( smData
-> mOutputFunctionMap -> mX , outputFunctionMap , 0 * sizeof ( int32_T ) ) ;
smData -> mNumOutputClasses = 0 ; smData -> mHasKinematicOutputs = false ;
smData -> mHasDynamicOutputs = false ; smData -> mIsOutputClass0Dynamic =
false ; smData -> mDoComputeDynamicOutputs = false ; smData ->
mCachedDerivativesAvailable = false ; { size_t i = 0 ; const int_T status =
pm_create_real_vector_fields ( & smData -> mCachedDerivatives , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mCachedDerivatives . mN ; ++ i ) smData -> mCachedDerivatives .
mX [ i ] = 0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initAssemblyDelegate ( SmMechanismDelegate * delegate ) {
SmMechanismDelegateScratchpad * scratchpad = NULL ; const SmSizePair
jointToStageIdx [ 1 ] = { { 140 , 0 } } ; const size_t primitiveIndices [ 1 +
1 ] = { 0 , 4 } ; const SmSizePair stateOffsets [ 4 ] = { { 0 , 7 } , { 1 , 8
} , { 2 , 9 } , { 3 , 10 } } ; const SmSizePair dofOffsets [ 4 ] = { { 0 , 1
} , { 1 , 2 } , { 2 , 3 } , { 3 , 6 } } ; const size_t * flexibleStages =
NULL ; const size_t * remodIndices = NULL ; const size_t *
equationsPerConstraint = NULL ; const int32_T *
hasAllVelocityDisabledEquations = NULL ; const int32_T *
runtimeEnabledEquations = NULL ; const size_t dofToVelSlot [ 6 ] = { 7 , 8 ,
9 , 10 , 11 , 12 } ; const size_t * constraintDofs = NULL ; const size_t
constraintDofOffsets [ 0 + 1 ] = { 0 } ; const size_t Jm = 0 ; const size_t
Jn = 6 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst = zeroSizePair .
mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad ( delegate ) ;
scratchpad = delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ;
delegate -> mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired
= 2 ; delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol =
+ 1.000000000000000062e-09 ; delegate -> mTreeJointDof = 6 ; delegate -> mDof
= 6 ; delegate -> mStateSize = 13 ; delegate -> mContinuousStateSize = 13 ;
delegate -> mModeVectorSize = 0 ; delegate -> mNumStages = 1 ; delegate ->
mNumConstraints = 0 ; delegate -> mNumAllConstraintEquations = 0 ;
sm_core_SmSizePairVector_create ( & delegate -> mJointToStageIdx , 1 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mJointToStageIdx ) , jointToStageIdx , 1 * sizeof ( SmSizePair )
) ; sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate
-> mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 4 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 4 * sizeof ( SmSizePair ) ) ; sm_core_SmSizePairVector_create
( & delegate -> mDofOffsets , 4 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mDofOffsets ) ,
dofOffsets , 4 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mFlexibleStages , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages ) ,
flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mRemodIndices , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
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
size_t ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 0
, 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofs ) , constraintDofs , 0 * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofOffsets , delegate
-> mNumConstraints + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues
( & delegate -> mConstraintDofOffsets ) , constraintDofOffsets , ( delegate
-> mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create
( & scratchpad -> mPosRequired , 6 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 6 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 6 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 6 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 6 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 6 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 0 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 6 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 6 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 4 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 4 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 4 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 4 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 4 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 1 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 13 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 13 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 13 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 13 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 49 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 6 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 13 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 6 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 13 , 0.0
) ; delegate -> mSetTargets = untitled_1a62e0cc_1_setTargets ; delegate ->
mResetStateVector = untitled_1a62e0cc_1_resetAsmStateVector ; delegate ->
mInitializeTrackedAngleState =
untitled_1a62e0cc_1_initializeTrackedAngleState ; delegate ->
mComputeDiscreteState = untitled_1a62e0cc_1_computeDiscreteState ; delegate
-> mAdjustPosition = untitled_1a62e0cc_1_adjustPosition ; delegate ->
mPerturbJointPrimitiveState =
untitled_1a62e0cc_1_perturbAsmJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState = NULL ; delegate -> mComputePosDofBlendMatrix =
untitled_1a62e0cc_1_computePosDofBlendMatrix ; delegate ->
mComputeVelDofBlendMatrix = untitled_1a62e0cc_1_computeVelDofBlendMatrix ;
delegate -> mProjectPartiallyTargetedPos =
untitled_1a62e0cc_1_projectPartiallyTargetedPos ; delegate ->
mPropagateMotion = untitled_1a62e0cc_1_propagateMotion ; delegate ->
mComputeAssemblyError = untitled_1a62e0cc_1_computeAssemblyError ; delegate
-> mComputeAssemblyJacobian = untitled_1a62e0cc_1_computeAssemblyJacobian ;
delegate -> mComputeFullAssemblyJacobian =
untitled_1a62e0cc_1_computeFullAssemblyJacobian ; delegate ->
mIsInKinematicSingularity = untitled_1a62e0cc_1_isInKinematicSingularity ;
delegate -> mConvertStateVector = untitled_1a62e0cc_1_convertStateVector ;
delegate -> mConstructStateVector = NULL ; delegate ->
mExtractSolverStateVector = NULL ; delegate -> mIsPositionViolation = NULL ;
delegate -> mIsVelocityViolation = NULL ; delegate -> mProjectStateSim = NULL
; delegate -> mComputeConstraintError = NULL ; delegate -> mResetModeVector =
NULL ; delegate -> mHasJointDisToNormModeChange = NULL ; delegate ->
mPerformJointDisToNormModeChange = NULL ; delegate -> mOnModeChangedCutJoints
= NULL ; delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * delegate ) { SmMechanismDelegateScratchpad * scratchpad
= NULL ; const SmSizePair jointToStageIdx [ 1 ] = { { 140 , 0 } } ; const
size_t primitiveIndices [ 1 + 1 ] = { 0 , 4 } ; const SmSizePair stateOffsets
[ 4 ] = { { 0 , 7 } , { 1 , 8 } , { 2 , 9 } , { 3 , 10 } } ; const SmSizePair
dofOffsets [ 4 ] = { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } , { 3 , 6 } } ; const
size_t * flexibleStages = NULL ; const size_t * remodIndices = NULL ; const
size_t * equationsPerConstraint = NULL ; const int32_T *
hasAllVelocityDisabledEquations = NULL ; const int32_T *
runtimeEnabledEquations = NULL ; const size_t dofToVelSlot [ 6 ] = { 7 , 8 ,
9 , 10 , 11 , 12 } ; const size_t * constraintDofs = NULL ; const size_t
constraintDofOffsets [ 0 + 1 ] = { 0 } ; const size_t Jm = 0 ; const size_t
Jn = 6 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst = zeroSizePair .
mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad ( delegate ) ;
scratchpad = delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ;
delegate -> mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired
= 2 ; delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol =
+ 1.000000000000000062e-09 ; delegate -> mTreeJointDof = 6 ; delegate -> mDof
= 6 ; delegate -> mStateSize = 13 ; delegate -> mContinuousStateSize = 13 ;
delegate -> mModeVectorSize = 0 ; delegate -> mNumStages = 1 ; delegate ->
mNumConstraints = 0 ; delegate -> mNumAllConstraintEquations = 0 ;
sm_core_SmSizePairVector_create ( & delegate -> mJointToStageIdx , 1 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mJointToStageIdx ) , jointToStageIdx , 1 * sizeof ( SmSizePair )
) ; sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate
-> mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 4 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 4 * sizeof ( SmSizePair ) ) ; sm_core_SmSizePairVector_create
( & delegate -> mDofOffsets , 4 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mDofOffsets ) ,
dofOffsets , 4 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mFlexibleStages , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages ) ,
flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mRemodIndices , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
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
size_t ) ) ; sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 0
, 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofs ) , constraintDofs , 0 * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofOffsets , delegate
-> mNumConstraints + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues
( & delegate -> mConstraintDofOffsets ) , constraintDofOffsets , ( delegate
-> mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create
( & scratchpad -> mPosRequired , 6 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 6 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 6 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 6 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 6 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 6 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 0 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 6 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 0 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 0 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 6 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 6 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 4 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 4 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 4 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 4 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 4 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 1 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvQuaternionVelOffsets , 0
, & zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvQuaternionAzimuthValues , 0 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mInitialState , 13 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mStartState , 13 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mTestState , 13 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mFullStateVector , 13 , 0.0 ) ; sm_core_SmIntVector_create ( &
scratchpad -> mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create
( & scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 49 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 6 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 13 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 6 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 13 , 0.0
) ; delegate -> mSetTargets = NULL ; delegate -> mResetStateVector =
untitled_1a62e0cc_1_resetSimStateVector ; delegate ->
mInitializeTrackedAngleState = NULL ; delegate -> mComputeDiscreteState =
NULL ; delegate -> mAdjustPosition = NULL ; delegate ->
mPerturbJointPrimitiveState =
untitled_1a62e0cc_1_perturbSimJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState = untitled_1a62e0cc_1_perturbFlexibleBodyState ;
delegate -> mComputePosDofBlendMatrix = NULL ; delegate ->
mComputeVelDofBlendMatrix = NULL ; delegate -> mProjectPartiallyTargetedPos =
NULL ; delegate -> mPropagateMotion = NULL ; delegate ->
mComputeAssemblyError = NULL ; delegate -> mComputeAssemblyJacobian = NULL ;
delegate -> mComputeFullAssemblyJacobian = NULL ; delegate ->
mIsInKinematicSingularity = NULL ; delegate -> mConvertStateVector = NULL ;
delegate -> mConstructStateVector = untitled_1a62e0cc_1_constructStateVector
; delegate -> mExtractSolverStateVector =
untitled_1a62e0cc_1_extractSolverStateVector ; delegate ->
mIsPositionViolation = untitled_1a62e0cc_1_isPositionViolation ; delegate ->
mIsVelocityViolation = untitled_1a62e0cc_1_isVelocityViolation ; delegate ->
mProjectStateSim = untitled_1a62e0cc_1_projectStateSim ; delegate ->
mComputeConstraintError = untitled_1a62e0cc_1_computeConstraintError ;
delegate -> mResetModeVector = untitled_1a62e0cc_1_resetModeVector ; delegate
-> mHasJointDisToNormModeChange =
untitled_1a62e0cc_1_hasJointDisToNormModeChange ; delegate ->
mPerformJointDisToNormModeChange =
untitled_1a62e0cc_1_performJointDisToNormModeChange ; delegate ->
mOnModeChangedCutJoints = untitled_1a62e0cc_1_onModeChangedCutJoints ;
delegate -> mMech = NULL ; } static void initMechanismDelegates (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; const int32_T * motionInputOffsets = NULL ; int_T status = 0 ;
initAssemblyDelegate ( & smData -> mAssemblyDelegate ) ;
initSimulationDelegate ( & smData -> mSimulationDelegate ) ; status =
pm_create_int_vector_fields ( & smData -> mMotionInputOffsets , smData ->
mNumInputMotionPrimitives , alloc ) ; checkMemAllocStatus ( status ) ; memcpy
( smData -> mMotionInputOffsets . mX , motionInputOffsets , 0 * sizeof (
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
} void untitled_1a62e0cc_1_NeDaePrivateData_create ( NeDaePrivateData *
smData ) { initBasicAttributes ( smData ) ; initStateVector ( smData ) ;
initAsserts ( smData ) ; initModeVector ( smData ) ; initZeroCrossings (
smData ) ; initVariables ( smData ) ; initRuntimeParameters ( smData ) ;
initIoInfo ( smData ) ; initInputDerivs ( smData ) ; initDirectFeedthrough (
smData ) ; initOutputDerivProc ( smData ) ; initMechanismDelegates ( smData )
; initComputationFcnPtrs ( smData ) ; initLiveLinkToSm ( smData ) ; }
