#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void draft7_a151ee3d_1_validateRuntimeParameters ( const double * rtp ,
int32_T * satFlags ) { boolean_T bb [ 3 ] ; double xx [ 3 ] ; xx [ 0 ] = rtp
[ 0 ] ; xx [ 1 ] = rtp [ 1 ] ; xx [ 2 ] = rtp [ 2 ] ; bb [ 0 ] =
sm_core_math_anyIsInf ( 3 , xx + 0 ) ; bb [ 1 ] = ! bb [ 0 ] ; bb [ 0 ] =
sm_core_math_anyIsNaN ( 3 , xx + 0 ) ; bb [ 2 ] = ! bb [ 0 ] ; xx [ 0 ] = 0.0
; xx [ 1 ] = 1.0 ; satFlags [ 0 ] = bb [ 1 ] ? 1 : 0 ; satFlags [ 1 ] = bb [
2 ] ? 1 : 0 ; satFlags [ 2 ] = ! ( bb [ 1 ] && bb [ 2 ] ) || ( rtp [ 0 ] >=
xx [ 0 ] && rtp [ 1 ] >= xx [ 0 ] && rtp [ 2 ] >= xx [ 0 ] && rtp [ 0 ] <= xx
[ 1 ] && rtp [ 1 ] <= xx [ 1 ] && rtp [ 2 ] <= xx [ 1 ] ) ? 1 : 0 ; } const
NeAssertData draft7_a151ee3d_1_assertData [ 3 ] = { {
"draft7/Muscle Forces/Muscle1/Variable Cylindrical Solid" , 0 , 0 ,
"Muscle_Forces.Muscle1.Variable_Cylindrical_Solid" , "" , false ,
"The parameter Graphic/Color contains an Inf value, which is not allowed." ,
"sm:model:evaluate:InvalidValueInf" } , {
"draft7/Muscle Forces/Muscle1/Variable Cylindrical Solid" , 0 , 0 ,
"Muscle_Forces.Muscle1.Variable_Cylindrical_Solid" , "" , false ,
"The parameter Graphic/Color contains a NaN value, which is not allowed." ,
"sm:model:evaluate:InvalidValueNaN" } , {
"draft7/Muscle Forces/Muscle1/Variable Cylindrical Solid" , 0 , 0 ,
"Muscle_Forces.Muscle1.Variable_Cylindrical_Solid" , "" , true ,
 "The parameter Graphic/Color is invalid; all components must be in the range [0, 1]."
, "sm:model:visualProperties:InvalidColorVector" } } ;
