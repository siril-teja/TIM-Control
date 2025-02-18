#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void draft7_a151ee3d_1_validateRuntimeParameters ( const double * rtp ,
int32_T * satFlags ) { boolean_T bb [ 17 ] ; double xx [ 5 ] ; xx [ 0 ] = rtp
[ 0 ] ; xx [ 1 ] = rtp [ 1 ] ; xx [ 2 ] = rtp [ 2 ] ; bb [ 0 ] =
sm_core_math_anyIsInf ( 3 , xx + 0 ) ; bb [ 1 ] = ! bb [ 0 ] ; bb [ 0 ] =
sm_core_math_anyIsNaN ( 3 , xx + 0 ) ; bb [ 2 ] = ! bb [ 0 ] ; xx [ 0 ] = 0.0
; xx [ 1 ] = 1.0 ; xx [ 2 ] = rtp [ 3 ] ; xx [ 3 ] = rtp [ 4 ] ; xx [ 4 ] =
rtp [ 5 ] ; bb [ 0 ] = sm_core_math_anyIsInf ( 3 , xx + 2 ) ; bb [ 3 ] = ! bb
[ 0 ] ; bb [ 0 ] = sm_core_math_anyIsNaN ( 3 , xx + 2 ) ; bb [ 4 ] = ! bb [ 0
] ; xx [ 2 ] = rtp [ 6 ] ; xx [ 3 ] = rtp [ 7 ] ; xx [ 4 ] = rtp [ 8 ] ; bb [
0 ] = sm_core_math_anyIsInf ( 3 , xx + 2 ) ; bb [ 5 ] = ! bb [ 0 ] ; bb [ 0 ]
= sm_core_math_anyIsNaN ( 3 , xx + 2 ) ; bb [ 6 ] = ! bb [ 0 ] ; xx [ 2 ] =
rtp [ 9 ] ; xx [ 3 ] = rtp [ 10 ] ; xx [ 4 ] = rtp [ 11 ] ; bb [ 0 ] =
sm_core_math_anyIsInf ( 3 , xx + 2 ) ; bb [ 7 ] = ! bb [ 0 ] ; bb [ 0 ] =
sm_core_math_anyIsNaN ( 3 , xx + 2 ) ; bb [ 8 ] = ! bb [ 0 ] ; xx [ 2 ] = rtp
[ 12 ] ; xx [ 3 ] = rtp [ 13 ] ; xx [ 4 ] = rtp [ 14 ] ; bb [ 0 ] =
sm_core_math_anyIsInf ( 3 , xx + 2 ) ; bb [ 9 ] = ! bb [ 0 ] ; bb [ 0 ] =
sm_core_math_anyIsNaN ( 3 , xx + 2 ) ; bb [ 10 ] = ! bb [ 0 ] ; xx [ 2 ] =
rtp [ 15 ] ; xx [ 3 ] = rtp [ 16 ] ; xx [ 4 ] = rtp [ 17 ] ; bb [ 0 ] =
sm_core_math_anyIsInf ( 3 , xx + 2 ) ; bb [ 11 ] = ! bb [ 0 ] ; bb [ 0 ] =
sm_core_math_anyIsNaN ( 3 , xx + 2 ) ; bb [ 12 ] = ! bb [ 0 ] ; xx [ 2 ] =
rtp [ 18 ] ; xx [ 3 ] = rtp [ 19 ] ; xx [ 4 ] = rtp [ 20 ] ; bb [ 0 ] =
sm_core_math_anyIsInf ( 3 , xx + 2 ) ; bb [ 13 ] = ! bb [ 0 ] ; bb [ 0 ] =
sm_core_math_anyIsNaN ( 3 , xx + 2 ) ; bb [ 14 ] = ! bb [ 0 ] ; xx [ 2 ] =
rtp [ 21 ] ; xx [ 3 ] = rtp [ 22 ] ; xx [ 4 ] = rtp [ 23 ] ; bb [ 0 ] =
sm_core_math_anyIsInf ( 3 , xx + 2 ) ; bb [ 15 ] = ! bb [ 0 ] ; bb [ 0 ] =
sm_core_math_anyIsNaN ( 3 , xx + 2 ) ; bb [ 16 ] = ! bb [ 0 ] ; satFlags [ 0
] = bb [ 1 ] ? 1 : 0 ; satFlags [ 1 ] = bb [ 2 ] ? 1 : 0 ; satFlags [ 2 ] = !
( bb [ 1 ] && bb [ 2 ] ) || ( rtp [ 0 ] >= xx [ 0 ] && rtp [ 1 ] >= xx [ 0 ]
&& rtp [ 2 ] >= xx [ 0 ] && rtp [ 0 ] <= xx [ 1 ] && rtp [ 1 ] <= xx [ 1 ] &&
rtp [ 2 ] <= xx [ 1 ] ) ? 1 : 0 ; satFlags [ 3 ] = bb [ 3 ] ? 1 : 0 ;
satFlags [ 4 ] = bb [ 4 ] ? 1 : 0 ; satFlags [ 5 ] = ! ( bb [ 3 ] && bb [ 4 ]
) || ( rtp [ 3 ] >= xx [ 0 ] && rtp [ 4 ] >= xx [ 0 ] && rtp [ 5 ] >= xx [ 0
] && rtp [ 3 ] <= xx [ 1 ] && rtp [ 4 ] <= xx [ 1 ] && rtp [ 5 ] <= xx [ 1 ]
) ? 1 : 0 ; satFlags [ 6 ] = bb [ 5 ] ? 1 : 0 ; satFlags [ 7 ] = bb [ 6 ] ? 1
: 0 ; satFlags [ 8 ] = ! ( bb [ 5 ] && bb [ 6 ] ) || ( rtp [ 6 ] >= xx [ 0 ]
&& rtp [ 7 ] >= xx [ 0 ] && rtp [ 8 ] >= xx [ 0 ] && rtp [ 6 ] <= xx [ 1 ] &&
rtp [ 7 ] <= xx [ 1 ] && rtp [ 8 ] <= xx [ 1 ] ) ? 1 : 0 ; satFlags [ 9 ] =
bb [ 7 ] ? 1 : 0 ; satFlags [ 10 ] = bb [ 8 ] ? 1 : 0 ; satFlags [ 11 ] = ! (
bb [ 7 ] && bb [ 8 ] ) || ( rtp [ 9 ] >= xx [ 0 ] && rtp [ 10 ] >= xx [ 0 ]
&& rtp [ 11 ] >= xx [ 0 ] && rtp [ 9 ] <= xx [ 1 ] && rtp [ 10 ] <= xx [ 1 ]
&& rtp [ 11 ] <= xx [ 1 ] ) ? 1 : 0 ; satFlags [ 12 ] = bb [ 9 ] ? 1 : 0 ;
satFlags [ 13 ] = bb [ 10 ] ? 1 : 0 ; satFlags [ 14 ] = ! ( bb [ 9 ] && bb [
10 ] ) || ( rtp [ 12 ] >= xx [ 0 ] && rtp [ 13 ] >= xx [ 0 ] && rtp [ 14 ] >=
xx [ 0 ] && rtp [ 12 ] <= xx [ 1 ] && rtp [ 13 ] <= xx [ 1 ] && rtp [ 14 ] <=
xx [ 1 ] ) ? 1 : 0 ; satFlags [ 15 ] = bb [ 11 ] ? 1 : 0 ; satFlags [ 16 ] =
bb [ 12 ] ? 1 : 0 ; satFlags [ 17 ] = ! ( bb [ 11 ] && bb [ 12 ] ) || ( rtp [
15 ] >= xx [ 0 ] && rtp [ 16 ] >= xx [ 0 ] && rtp [ 17 ] >= xx [ 0 ] && rtp [
15 ] <= xx [ 1 ] && rtp [ 16 ] <= xx [ 1 ] && rtp [ 17 ] <= xx [ 1 ] ) ? 1 :
0 ; satFlags [ 18 ] = bb [ 13 ] ? 1 : 0 ; satFlags [ 19 ] = bb [ 14 ] ? 1 : 0
; satFlags [ 20 ] = ! ( bb [ 13 ] && bb [ 14 ] ) || ( rtp [ 18 ] >= xx [ 0 ]
&& rtp [ 19 ] >= xx [ 0 ] && rtp [ 20 ] >= xx [ 0 ] && rtp [ 18 ] <= xx [ 1 ]
&& rtp [ 19 ] <= xx [ 1 ] && rtp [ 20 ] <= xx [ 1 ] ) ? 1 : 0 ; satFlags [ 21
] = bb [ 15 ] ? 1 : 0 ; satFlags [ 22 ] = bb [ 16 ] ? 1 : 0 ; satFlags [ 23 ]
= ! ( bb [ 15 ] && bb [ 16 ] ) || ( rtp [ 21 ] >= xx [ 0 ] && rtp [ 22 ] >=
xx [ 0 ] && rtp [ 23 ] >= xx [ 0 ] && rtp [ 21 ] <= xx [ 1 ] && rtp [ 22 ] <=
xx [ 1 ] && rtp [ 23 ] <= xx [ 1 ] ) ? 1 : 0 ; } const NeAssertData
draft7_a151ee3d_1_assertData [ 24 ] = { {
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
, "sm:model:visualProperties:InvalidColorVector" } , {
"draft7/Muscle Forces/Muscle2/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle2.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains an Inf value, which is not allowed." ,
"sm:model:evaluate:InvalidValueInf" } , {
"draft7/Muscle Forces/Muscle2/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle2.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains a NaN value, which is not allowed." ,
"sm:model:evaluate:InvalidValueNaN" } , {
"draft7/Muscle Forces/Muscle2/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle2.Variable_Cylindrical_Solid1" , "" , true ,
 "The parameter Graphic/Color is invalid; all components must be in the range [0, 1]."
, "sm:model:visualProperties:InvalidColorVector" } , {
"draft7/Muscle Forces/Muscle3/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle3.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains an Inf value, which is not allowed." ,
"sm:model:evaluate:InvalidValueInf" } , {
"draft7/Muscle Forces/Muscle3/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle3.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains a NaN value, which is not allowed." ,
"sm:model:evaluate:InvalidValueNaN" } , {
"draft7/Muscle Forces/Muscle3/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle3.Variable_Cylindrical_Solid1" , "" , true ,
 "The parameter Graphic/Color is invalid; all components must be in the range [0, 1]."
, "sm:model:visualProperties:InvalidColorVector" } , {
"draft7/Muscle Forces/Muscle4/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle4.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains an Inf value, which is not allowed." ,
"sm:model:evaluate:InvalidValueInf" } , {
"draft7/Muscle Forces/Muscle4/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle4.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains a NaN value, which is not allowed." ,
"sm:model:evaluate:InvalidValueNaN" } , {
"draft7/Muscle Forces/Muscle4/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle4.Variable_Cylindrical_Solid1" , "" , true ,
 "The parameter Graphic/Color is invalid; all components must be in the range [0, 1]."
, "sm:model:visualProperties:InvalidColorVector" } , {
"draft7/Muscle Forces/Muscle5/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle5.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains an Inf value, which is not allowed." ,
"sm:model:evaluate:InvalidValueInf" } , {
"draft7/Muscle Forces/Muscle5/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle5.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains a NaN value, which is not allowed." ,
"sm:model:evaluate:InvalidValueNaN" } , {
"draft7/Muscle Forces/Muscle5/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle5.Variable_Cylindrical_Solid1" , "" , true ,
 "The parameter Graphic/Color is invalid; all components must be in the range [0, 1]."
, "sm:model:visualProperties:InvalidColorVector" } , {
"draft7/Muscle Forces/Muscle6/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle6.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains an Inf value, which is not allowed." ,
"sm:model:evaluate:InvalidValueInf" } , {
"draft7/Muscle Forces/Muscle6/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle6.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains a NaN value, which is not allowed." ,
"sm:model:evaluate:InvalidValueNaN" } , {
"draft7/Muscle Forces/Muscle6/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle6.Variable_Cylindrical_Solid1" , "" , true ,
 "The parameter Graphic/Color is invalid; all components must be in the range [0, 1]."
, "sm:model:visualProperties:InvalidColorVector" } , {
"draft7/Muscle Forces/Muscle7/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle7.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains an Inf value, which is not allowed." ,
"sm:model:evaluate:InvalidValueInf" } , {
"draft7/Muscle Forces/Muscle7/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle7.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains a NaN value, which is not allowed." ,
"sm:model:evaluate:InvalidValueNaN" } , {
"draft7/Muscle Forces/Muscle7/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle7.Variable_Cylindrical_Solid1" , "" , true ,
 "The parameter Graphic/Color is invalid; all components must be in the range [0, 1]."
, "sm:model:visualProperties:InvalidColorVector" } , {
"draft7/Muscle Forces/Muscle8/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle8.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains an Inf value, which is not allowed." ,
"sm:model:evaluate:InvalidValueInf" } , {
"draft7/Muscle Forces/Muscle8/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle8.Variable_Cylindrical_Solid1" , "" , false ,
"The parameter Graphic/Color contains a NaN value, which is not allowed." ,
"sm:model:evaluate:InvalidValueNaN" } , {
"draft7/Muscle Forces/Muscle8/Variable Cylindrical Solid1" , 0 , 0 ,
"Muscle_Forces.Muscle8.Variable_Cylindrical_Solid1" , "" , true ,
 "The parameter Graphic/Color is invalid; all components must be in the range [0, 1]."
, "sm:model:visualProperties:InvalidColorVector" } } ;
