#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void draft7_a151ee3d_1_setTargets ( const RuntimeDerivedValuesBundle * rtdv ,
CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
draft7_a151ee3d_1_resetAsmStateVector ( const void * mech , double * state )
{ double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx [ 0 ] ;
state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [ 0 ] ;
state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0 ] ;
state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ] ;
state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ] ;
state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ] ;
state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ] ;
state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] = xx [ 0 ] ;
state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; state [ 24 ] = xx [ 0 ] ;
state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ; state [ 27 ] = xx [ 0 ] ;
state [ 28 ] = xx [ 0 ] ; state [ 29 ] = xx [ 0 ] ; state [ 30 ] = xx [ 0 ] ;
state [ 31 ] = xx [ 0 ] ; state [ 32 ] = xx [ 0 ] ; state [ 33 ] = xx [ 0 ] ;
state [ 34 ] = xx [ 0 ] ; state [ 35 ] = xx [ 0 ] ; state [ 36 ] = xx [ 0 ] ;
state [ 37 ] = xx [ 0 ] ; state [ 38 ] = xx [ 0 ] ; state [ 39 ] = xx [ 0 ] ;
state [ 40 ] = xx [ 0 ] ; state [ 41 ] = xx [ 0 ] ; state [ 42 ] = xx [ 0 ] ;
state [ 43 ] = xx [ 0 ] ; state [ 44 ] = xx [ 0 ] ; state [ 45 ] = xx [ 0 ] ;
state [ 46 ] = xx [ 0 ] ; state [ 47 ] = xx [ 0 ] ; state [ 48 ] = xx [ 0 ] ;
state [ 49 ] = xx [ 0 ] ; state [ 50 ] = xx [ 0 ] ; state [ 51 ] = xx [ 0 ] ;
state [ 52 ] = xx [ 0 ] ; state [ 53 ] = xx [ 0 ] ; state [ 54 ] = xx [ 0 ] ;
state [ 55 ] = xx [ 0 ] ; state [ 56 ] = xx [ 0 ] ; state [ 57 ] = xx [ 0 ] ;
state [ 58 ] = xx [ 0 ] ; state [ 59 ] = xx [ 0 ] ; state [ 60 ] = xx [ 0 ] ;
state [ 61 ] = xx [ 0 ] ; state [ 62 ] = xx [ 0 ] ; state [ 63 ] = xx [ 0 ] ;
state [ 64 ] = xx [ 0 ] ; state [ 65 ] = xx [ 0 ] ; state [ 66 ] = xx [ 0 ] ;
state [ 67 ] = xx [ 0 ] ; state [ 68 ] = xx [ 0 ] ; state [ 69 ] = xx [ 0 ] ;
state [ 70 ] = xx [ 0 ] ; state [ 71 ] = xx [ 0 ] ; state [ 72 ] = xx [ 0 ] ;
state [ 73 ] = xx [ 0 ] ; state [ 74 ] = xx [ 0 ] ; state [ 75 ] = xx [ 0 ] ;
state [ 76 ] = xx [ 0 ] ; state [ 77 ] = xx [ 0 ] ; state [ 78 ] = xx [ 0 ] ;
state [ 79 ] = xx [ 0 ] ; state [ 80 ] = xx [ 0 ] ; state [ 81 ] = xx [ 0 ] ;
state [ 82 ] = xx [ 0 ] ; state [ 83 ] = xx [ 0 ] ; state [ 84 ] = xx [ 0 ] ;
state [ 85 ] = xx [ 0 ] ; state [ 86 ] = xx [ 0 ] ; state [ 87 ] = xx [ 0 ] ;
state [ 88 ] = xx [ 0 ] ; state [ 89 ] = xx [ 0 ] ; state [ 90 ] = xx [ 0 ] ;
state [ 91 ] = xx [ 0 ] ; state [ 92 ] = xx [ 0 ] ; state [ 93 ] = xx [ 0 ] ;
state [ 94 ] = xx [ 0 ] ; state [ 95 ] = xx [ 0 ] ; state [ 96 ] = xx [ 0 ] ;
state [ 97 ] = xx [ 0 ] ; state [ 98 ] = xx [ 0 ] ; state [ 99 ] = xx [ 0 ] ;
state [ 100 ] = xx [ 0 ] ; state [ 101 ] = xx [ 0 ] ; } void
draft7_a151ee3d_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * state ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; boolean_T bb [ 2 ] ;
double xx [ 38 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
modeVector ; xx [ 0 ] = - motionData [ 126 ] ; xx [ 1 ] = - motionData [ 127
] ; xx [ 2 ] = - motionData [ 128 ] ; xx [ 3 ] = - motionData [ 129 ] ; xx [
4 ] = 0.9993181225840584 ; xx [ 5 ] = 0.03619150900402053 ; xx [ 6 ] =
5.246456256884902e-3 ; xx [ 7 ] = 5.093058789132701e-3 ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 4 , xx + 8 ) ; xx [ 4 ] = 2.0 ;
xx [ 5 ] = ( xx [ 9 ] * xx [ 11 ] + xx [ 8 ] * xx [ 10 ] ) * xx [ 4 ] ; xx [
6 ] = 0.99999999999999 ; bb [ 0 ] = fabs ( xx [ 5 ] ) > xx [ 6 ] ; xx [ 7 ] =
0.5 ; xx [ 12 ] = xx [ 10 ] * xx [ 11 ] ; xx [ 13 ] = xx [ 8 ] * xx [ 9 ] ;
xx [ 14 ] = xx [ 8 ] * xx [ 8 ] ; xx [ 15 ] = 1.0 ; xx [ 16 ] = ( xx [ 14 ] +
xx [ 10 ] * xx [ 10 ] ) * xx [ 4 ] - xx [ 15 ] ; xx [ 17 ] = ( xx [ 12 ] + xx
[ 13 ] ) * xx [ 4 ] ; xx [ 16 ] = ( xx [ 17 ] == 0.0 && xx [ 16 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 17 ] , xx [ 16 ] ) ; xx [ 17 ] = ( xx [ 14 ] + xx [ 11 ] *
xx [ 11 ] ) * xx [ 4 ] - xx [ 15 ] ; xx [ 18 ] = - ( xx [ 4 ] * ( xx [ 12 ] -
xx [ 13 ] ) ) ; xx [ 17 ] = ( xx [ 18 ] == 0.0 && xx [ 17 ] == 0.0 ) ? 0.0 :
atan2 ( xx [ 18 ] , xx [ 17 ] ) ; xx [ 12 ] = bb [ 0 ] ? xx [ 7 ] * xx [ 16 ]
: xx [ 17 ] ; xx [ 13 ] = 1.570796326794897 ; if ( xx [ 5 ] < 0.0 ) xx [ 16 ]
= - 1.0 ; else if ( xx [ 5 ] > 0.0 ) xx [ 16 ] = + 1.0 ; else xx [ 16 ] = 0.0
; xx [ 17 ] = fabs ( xx [ 5 ] ) > 1.0 ? atan2 ( xx [ 5 ] , 0.0 ) : asin ( xx
[ 5 ] ) ; xx [ 5 ] = ( xx [ 14 ] + xx [ 9 ] * xx [ 9 ] ) * xx [ 4 ] - xx [ 15
] ; xx [ 18 ] = - ( xx [ 4 ] * ( xx [ 9 ] * xx [ 10 ] - xx [ 8 ] * xx [ 11 ]
) ) ; xx [ 5 ] = ( xx [ 18 ] == 0.0 && xx [ 5 ] == 0.0 ) ? 0.0 : atan2 ( xx [
18 ] , xx [ 5 ] ) ; xx [ 8 ] = bb [ 0 ] ? xx [ 16 ] * xx [ 12 ] : xx [ 5 ] ;
xx [ 9 ] = motionData [ 178 ] ; xx [ 10 ] = motionData [ 179 ] ; xx [ 11 ] =
motionData [ 180 ] ; xx [ 18 ] = xx [ 15 ] - ( motionData [ 128 ] *
motionData [ 128 ] + motionData [ 129 ] * motionData [ 129 ] ) * xx [ 4 ] ;
xx [ 19 ] = xx [ 4 ] * ( motionData [ 127 ] * motionData [ 128 ] - motionData
[ 126 ] * motionData [ 129 ] ) ; xx [ 20 ] = ( motionData [ 126 ] *
motionData [ 128 ] + motionData [ 127 ] * motionData [ 129 ] ) * xx [ 4 ] ;
xx [ 5 ] = pm_math_Vector3_dot_ra ( xx + 9 , xx + 18 ) ; xx [ 14 ] =
0.01085440859974902 ; xx [ 21 ] = 0.07228022064246183 ; xx [ 22 ] =
0.997325298745513 ; xx [ 23 ] = xx [ 14 ] ; xx [ 24 ] = - xx [ 21 ] ; xx [ 25
] = xx [ 22 ] ; xx [ 26 ] = pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) ; xx
[ 27 ] = xx [ 15 ] - xx [ 26 ] * xx [ 26 ] ; xx [ 27 ] = xx [ 27 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 9 , xx + 23 ) - xx [ 26 ] * xx [ 5 ] )
/ xx [ 27 ] ; xx [ 23 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 24 ] = sin ( xx [ 23 ] )
; xx [ 28 ] = cos ( xx [ 23 ] ) ; xx [ 29 ] = xx [ 14 ] * xx [ 24 ] ; xx [ 30
] = - ( xx [ 21 ] * xx [ 24 ] ) ; xx [ 31 ] = xx [ 22 ] * xx [ 24 ] ; xx [ 21
] = - 9.799417557012156e-3 ; xx [ 22 ] = 0.9973284708563647 ; xx [ 23 ] =
0.07238710268306554 ; pm_math_Quaternion_inverseXform_ra ( xx + 28 , xx + 21
, xx + 32 ) ; xx [ 21 ] = 0.9958524573065585 ; xx [ 22 ] = -
0.09068858100887965 ; xx [ 23 ] = 4.55902949587172e-3 ; xx [ 24 ] =
5.716624978144062e-3 ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 21 , xx
+ 28 ) ; xx [ 0 ] = ( xx [ 29 ] * xx [ 31 ] + xx [ 28 ] * xx [ 30 ] ) * xx [
4 ] ; bb [ 1 ] = fabs ( xx [ 0 ] ) > xx [ 6 ] ; xx [ 1 ] = xx [ 30 ] * xx [
31 ] ; xx [ 2 ] = xx [ 28 ] * xx [ 29 ] ; xx [ 3 ] = xx [ 28 ] * xx [ 28 ] ;
xx [ 6 ] = ( xx [ 3 ] + xx [ 30 ] * xx [ 30 ] ) * xx [ 4 ] - xx [ 15 ] ; xx [
14 ] = ( xx [ 1 ] + xx [ 2 ] ) * xx [ 4 ] ; xx [ 6 ] = ( xx [ 14 ] == 0.0 &&
xx [ 6 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 14 ] , xx [ 6 ] ) ; xx [ 14 ] = ( xx [
3 ] + xx [ 31 ] * xx [ 31 ] ) * xx [ 4 ] - xx [ 15 ] ; xx [ 21 ] = - ( xx [ 4
] * ( xx [ 1 ] - xx [ 2 ] ) ) ; xx [ 14 ] = ( xx [ 21 ] == 0.0 && xx [ 14 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 21 ] , xx [ 14 ] ) ; xx [ 1 ] = bb [ 1 ] ? xx [
7 ] * xx [ 6 ] : xx [ 14 ] ; if ( xx [ 0 ] < 0.0 ) xx [ 2 ] = - 1.0 ; else if
( xx [ 0 ] > 0.0 ) xx [ 2 ] = + 1.0 ; else xx [ 2 ] = 0.0 ; xx [ 6 ] = fabs (
xx [ 0 ] ) > 1.0 ? atan2 ( xx [ 0 ] , 0.0 ) : asin ( xx [ 0 ] ) ; xx [ 0 ] =
( xx [ 3 ] + xx [ 29 ] * xx [ 29 ] ) * xx [ 4 ] - xx [ 15 ] ; xx [ 14 ] = - (
xx [ 4 ] * ( xx [ 29 ] * xx [ 30 ] - xx [ 28 ] * xx [ 31 ] ) ) ; xx [ 0 ] = (
xx [ 14 ] == 0.0 && xx [ 0 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 14 ] , xx [ 0 ] )
; xx [ 3 ] = bb [ 1 ] ? xx [ 2 ] * xx [ 1 ] : xx [ 0 ] ; xx [ 0 ] =
8.043376237938261e-3 ; xx [ 4 ] = 0.1806770170184598 ; xx [ 14 ] =
0.9835095930493033 ; xx [ 21 ] = xx [ 0 ] ; xx [ 22 ] = xx [ 4 ] ; xx [ 23 ]
= xx [ 14 ] ; xx [ 24 ] = pm_math_Vector3_dot_ra ( xx + 18 , xx + 21 ) ; xx [
18 ] = xx [ 15 ] - xx [ 24 ] * xx [ 24 ] ; xx [ 18 ] = xx [ 18 ] == 0.0 ? 0.0
: ( pm_math_Vector3_dot_ra ( xx + 9 , xx + 21 ) - xx [ 24 ] * xx [ 5 ] ) / xx
[ 18 ] ; xx [ 15 ] = xx [ 7 ] * xx [ 3 ] ; xx [ 7 ] = sin ( xx [ 15 ] ) ; xx
[ 19 ] = cos ( xx [ 15 ] ) ; xx [ 20 ] = xx [ 0 ] * xx [ 7 ] ; xx [ 21 ] = xx
[ 4 ] * xx [ 7 ] ; xx [ 22 ] = xx [ 14 ] * xx [ 7 ] ; xx [ 28 ] = -
0.0122127338954861 ; xx [ 29 ] = 0.9834858029469102 ; xx [ 30 ] = -
0.180572767970891 ; pm_math_Quaternion_inverseXform_ra ( xx + 19 , xx + 28 ,
xx + 35 ) ; state [ 90 ] = pm_math_canonicalAngle ( xx [ 12 ] ) ; state [ 91
] = pm_math_canonicalAngle ( bb [ 0 ] ? xx [ 13 ] * xx [ 16 ] : xx [ 17 ] ) ;
state [ 92 ] = pm_math_canonicalAngle ( xx [ 8 ] ) ; state [ 93 ] = xx [ 5 ]
- xx [ 26 ] * xx [ 27 ] ; state [ 94 ] = pm_math_Vector3_dot_ra ( xx + 9 , xx
+ 32 ) ; state [ 95 ] = xx [ 27 ] ; state [ 96 ] = pm_math_canonicalAngle (
xx [ 1 ] ) ; state [ 97 ] = pm_math_canonicalAngle ( bb [ 1 ] ? xx [ 13 ] *
xx [ 2 ] : xx [ 6 ] ) ; state [ 98 ] = pm_math_canonicalAngle ( xx [ 3 ] ) ;
state [ 99 ] = xx [ 5 ] - xx [ 24 ] * xx [ 18 ] ; state [ 100 ] =
pm_math_Vector3_dot_ra ( xx + 9 , xx + 35 ) ; state [ 101 ] = xx [ 18 ] ; }
void draft7_a151ee3d_1_computeDiscreteState ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , double * state ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; } void
draft7_a151ee3d_1_adjustPosition ( const void * mech , const double *
dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] = state [ 0 ] +
dofDeltas [ 0 ] ; state [ 1 ] = state [ 1 ] + dofDeltas [ 1 ] ; state [ 2 ] =
state [ 2 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ] + dofDeltas [ 3 ] ;
state [ 7 ] = state [ 7 ] + dofDeltas [ 4 ] ; state [ 8 ] = state [ 8 ] +
dofDeltas [ 5 ] ; state [ 12 ] = state [ 12 ] + dofDeltas [ 6 ] ; state [ 13
] = state [ 13 ] + dofDeltas [ 7 ] ; state [ 14 ] = state [ 14 ] + dofDeltas
[ 8 ] ; state [ 18 ] = state [ 18 ] + dofDeltas [ 9 ] ; state [ 19 ] = state
[ 19 ] + dofDeltas [ 10 ] ; state [ 20 ] = state [ 20 ] + dofDeltas [ 11 ] ;
state [ 24 ] = state [ 24 ] + dofDeltas [ 12 ] ; state [ 25 ] = state [ 25 ]
+ dofDeltas [ 13 ] ; state [ 26 ] = state [ 26 ] + dofDeltas [ 14 ] ; state [
30 ] = state [ 30 ] + dofDeltas [ 15 ] ; state [ 31 ] = state [ 31 ] +
dofDeltas [ 16 ] ; state [ 32 ] = state [ 32 ] + dofDeltas [ 17 ] ; state [
36 ] = state [ 36 ] + dofDeltas [ 18 ] ; state [ 37 ] = state [ 37 ] +
dofDeltas [ 19 ] ; state [ 38 ] = state [ 38 ] + dofDeltas [ 20 ] ; state [
42 ] = state [ 42 ] + dofDeltas [ 21 ] ; state [ 43 ] = state [ 43 ] +
dofDeltas [ 22 ] ; state [ 44 ] = state [ 44 ] + dofDeltas [ 23 ] ; state [
48 ] = state [ 48 ] + dofDeltas [ 24 ] ; state [ 49 ] = state [ 49 ] +
dofDeltas [ 25 ] ; state [ 50 ] = state [ 50 ] + dofDeltas [ 26 ] ; state [
54 ] = state [ 54 ] + dofDeltas [ 27 ] ; state [ 55 ] = state [ 55 ] +
dofDeltas [ 28 ] ; state [ 56 ] = state [ 56 ] + dofDeltas [ 29 ] ; state [
60 ] = state [ 60 ] + dofDeltas [ 30 ] ; state [ 61 ] = state [ 61 ] +
dofDeltas [ 31 ] ; state [ 62 ] = state [ 62 ] + dofDeltas [ 32 ] ; state [
66 ] = state [ 66 ] + dofDeltas [ 33 ] ; state [ 67 ] = state [ 67 ] +
dofDeltas [ 34 ] ; state [ 68 ] = state [ 68 ] + dofDeltas [ 35 ] ; state [
72 ] = state [ 72 ] + dofDeltas [ 36 ] ; state [ 73 ] = state [ 73 ] +
dofDeltas [ 37 ] ; state [ 74 ] = state [ 74 ] + dofDeltas [ 38 ] ; state [
78 ] = state [ 78 ] + dofDeltas [ 39 ] ; state [ 79 ] = state [ 79 ] +
dofDeltas [ 40 ] ; state [ 80 ] = state [ 80 ] + dofDeltas [ 41 ] ; state [
84 ] = state [ 84 ] + dofDeltas [ 42 ] ; state [ 85 ] = state [ 85 ] +
dofDeltas [ 43 ] ; state [ 86 ] = state [ 86 ] + dofDeltas [ 44 ] ; } static
void perturbAsmJointPrimitiveState_0_0 ( double mag , double * state ) {
state [ 0 ] = state [ 0 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_1 ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_1v ( double mag , double * state ) { state [
1 ] = state [ 1 ] + mag ; state [ 4 ] = state [ 4 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_2 ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_1_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbAsmJointPrimitiveState_1_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_1_1 ( double mag , double * state ) {
state [ 7 ] = state [ 7 ] + mag ; } static void
perturbAsmJointPrimitiveState_1_1v ( double mag , double * state ) { state [
7 ] = state [ 7 ] + mag ; state [ 10 ] = state [ 10 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_1_2 ( double mag , double * state )
{ state [ 8 ] = state [ 8 ] + mag ; } static void
perturbAsmJointPrimitiveState_1_2v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_2_0 ( double mag , double * state )
{ state [ 12 ] = state [ 12 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_2_1 ( double mag , double * state )
{ state [ 13 ] = state [ 13 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_1v ( double mag , double * state ) { state [
13 ] = state [ 13 ] + mag ; state [ 16 ] = state [ 16 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_2_2 ( double mag , double * state )
{ state [ 14 ] = state [ 14 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_2v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 17 ] = state [ 17 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_3_0 ( double mag , double * state )
{ state [ 18 ] = state [ 18 ] + mag ; } static void
perturbAsmJointPrimitiveState_3_0v ( double mag , double * state ) { state [
18 ] = state [ 18 ] + mag ; state [ 21 ] = state [ 21 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_3_1 ( double mag , double * state )
{ state [ 19 ] = state [ 19 ] + mag ; } static void
perturbAsmJointPrimitiveState_3_1v ( double mag , double * state ) { state [
19 ] = state [ 19 ] + mag ; state [ 22 ] = state [ 22 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_3_2 ( double mag , double * state )
{ state [ 20 ] = state [ 20 ] + mag ; } static void
perturbAsmJointPrimitiveState_3_2v ( double mag , double * state ) { state [
20 ] = state [ 20 ] + mag ; state [ 23 ] = state [ 23 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_4_0 ( double mag , double * state )
{ state [ 24 ] = state [ 24 ] + mag ; } static void
perturbAsmJointPrimitiveState_4_0v ( double mag , double * state ) { state [
24 ] = state [ 24 ] + mag ; state [ 27 ] = state [ 27 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_4_1 ( double mag , double * state )
{ state [ 25 ] = state [ 25 ] + mag ; } static void
perturbAsmJointPrimitiveState_4_1v ( double mag , double * state ) { state [
25 ] = state [ 25 ] + mag ; state [ 28 ] = state [ 28 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_4_2 ( double mag , double * state )
{ state [ 26 ] = state [ 26 ] + mag ; } static void
perturbAsmJointPrimitiveState_4_2v ( double mag , double * state ) { state [
26 ] = state [ 26 ] + mag ; state [ 29 ] = state [ 29 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_5_0 ( double mag , double * state )
{ state [ 30 ] = state [ 30 ] + mag ; } static void
perturbAsmJointPrimitiveState_5_0v ( double mag , double * state ) { state [
30 ] = state [ 30 ] + mag ; state [ 33 ] = state [ 33 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_5_1 ( double mag , double * state )
{ state [ 31 ] = state [ 31 ] + mag ; } static void
perturbAsmJointPrimitiveState_5_1v ( double mag , double * state ) { state [
31 ] = state [ 31 ] + mag ; state [ 34 ] = state [ 34 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_5_2 ( double mag , double * state )
{ state [ 32 ] = state [ 32 ] + mag ; } static void
perturbAsmJointPrimitiveState_5_2v ( double mag , double * state ) { state [
32 ] = state [ 32 ] + mag ; state [ 35 ] = state [ 35 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_6_0 ( double mag , double * state )
{ state [ 36 ] = state [ 36 ] + mag ; } static void
perturbAsmJointPrimitiveState_6_0v ( double mag , double * state ) { state [
36 ] = state [ 36 ] + mag ; state [ 39 ] = state [ 39 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_6_1 ( double mag , double * state )
{ state [ 37 ] = state [ 37 ] + mag ; } static void
perturbAsmJointPrimitiveState_6_1v ( double mag , double * state ) { state [
37 ] = state [ 37 ] + mag ; state [ 40 ] = state [ 40 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_6_2 ( double mag , double * state )
{ state [ 38 ] = state [ 38 ] + mag ; } static void
perturbAsmJointPrimitiveState_6_2v ( double mag , double * state ) { state [
38 ] = state [ 38 ] + mag ; state [ 41 ] = state [ 41 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 42 ] = state [ 42 ] + mag ; } static void
perturbAsmJointPrimitiveState_7_0v ( double mag , double * state ) { state [
42 ] = state [ 42 ] + mag ; state [ 45 ] = state [ 45 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_7_1 ( double mag , double * state )
{ state [ 43 ] = state [ 43 ] + mag ; } static void
perturbAsmJointPrimitiveState_7_1v ( double mag , double * state ) { state [
43 ] = state [ 43 ] + mag ; state [ 46 ] = state [ 46 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_7_2 ( double mag , double * state )
{ state [ 44 ] = state [ 44 ] + mag ; } static void
perturbAsmJointPrimitiveState_7_2v ( double mag , double * state ) { state [
44 ] = state [ 44 ] + mag ; state [ 47 ] = state [ 47 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_8_0 ( double mag , double * state )
{ state [ 48 ] = state [ 48 ] + mag ; } static void
perturbAsmJointPrimitiveState_8_0v ( double mag , double * state ) { state [
48 ] = state [ 48 ] + mag ; state [ 51 ] = state [ 51 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_8_1 ( double mag , double * state )
{ state [ 49 ] = state [ 49 ] + mag ; } static void
perturbAsmJointPrimitiveState_8_1v ( double mag , double * state ) { state [
49 ] = state [ 49 ] + mag ; state [ 52 ] = state [ 52 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_8_2 ( double mag , double * state )
{ state [ 50 ] = state [ 50 ] + mag ; } static void
perturbAsmJointPrimitiveState_8_2v ( double mag , double * state ) { state [
50 ] = state [ 50 ] + mag ; state [ 53 ] = state [ 53 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_9_0 ( double mag , double * state )
{ state [ 54 ] = state [ 54 ] + mag ; } static void
perturbAsmJointPrimitiveState_9_0v ( double mag , double * state ) { state [
54 ] = state [ 54 ] + mag ; state [ 57 ] = state [ 57 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_9_1 ( double mag , double * state )
{ state [ 55 ] = state [ 55 ] + mag ; } static void
perturbAsmJointPrimitiveState_9_1v ( double mag , double * state ) { state [
55 ] = state [ 55 ] + mag ; state [ 58 ] = state [ 58 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_9_2 ( double mag , double * state )
{ state [ 56 ] = state [ 56 ] + mag ; } static void
perturbAsmJointPrimitiveState_9_2v ( double mag , double * state ) { state [
56 ] = state [ 56 ] + mag ; state [ 59 ] = state [ 59 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 60 ] = state [ 60 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_0v ( double mag , double * state ) { state [
60 ] = state [ 60 ] + mag ; state [ 63 ] = state [ 63 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_1 ( double mag , double * state
) { state [ 61 ] = state [ 61 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_1v ( double mag , double * state ) { state [
61 ] = state [ 61 ] + mag ; state [ 64 ] = state [ 64 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_2 ( double mag , double * state
) { state [ 62 ] = state [ 62 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_2v ( double mag , double * state ) { state [
62 ] = state [ 62 ] + mag ; state [ 65 ] = state [ 65 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_11_0 ( double mag , double * state
) { state [ 66 ] = state [ 66 ] + mag ; } static void
perturbAsmJointPrimitiveState_11_0v ( double mag , double * state ) { state [
66 ] = state [ 66 ] + mag ; state [ 69 ] = state [ 69 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_11_1 ( double mag , double * state
) { state [ 67 ] = state [ 67 ] + mag ; } static void
perturbAsmJointPrimitiveState_11_1v ( double mag , double * state ) { state [
67 ] = state [ 67 ] + mag ; state [ 70 ] = state [ 70 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_11_2 ( double mag , double * state
) { state [ 68 ] = state [ 68 ] + mag ; } static void
perturbAsmJointPrimitiveState_11_2v ( double mag , double * state ) { state [
68 ] = state [ 68 ] + mag ; state [ 71 ] = state [ 71 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_12_0 ( double mag , double * state
) { state [ 72 ] = state [ 72 ] + mag ; } static void
perturbAsmJointPrimitiveState_12_0v ( double mag , double * state ) { state [
72 ] = state [ 72 ] + mag ; state [ 75 ] = state [ 75 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_12_1 ( double mag , double * state
) { state [ 73 ] = state [ 73 ] + mag ; } static void
perturbAsmJointPrimitiveState_12_1v ( double mag , double * state ) { state [
73 ] = state [ 73 ] + mag ; state [ 76 ] = state [ 76 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_12_2 ( double mag , double * state
) { state [ 74 ] = state [ 74 ] + mag ; } static void
perturbAsmJointPrimitiveState_12_2v ( double mag , double * state ) { state [
74 ] = state [ 74 ] + mag ; state [ 77 ] = state [ 77 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_13_0 ( double mag , double * state
) { state [ 78 ] = state [ 78 ] + mag ; } static void
perturbAsmJointPrimitiveState_13_0v ( double mag , double * state ) { state [
78 ] = state [ 78 ] + mag ; state [ 81 ] = state [ 81 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_13_1 ( double mag , double * state
) { state [ 79 ] = state [ 79 ] + mag ; } static void
perturbAsmJointPrimitiveState_13_1v ( double mag , double * state ) { state [
79 ] = state [ 79 ] + mag ; state [ 82 ] = state [ 82 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_13_2 ( double mag , double * state
) { state [ 80 ] = state [ 80 ] + mag ; } static void
perturbAsmJointPrimitiveState_13_2v ( double mag , double * state ) { state [
80 ] = state [ 80 ] + mag ; state [ 83 ] = state [ 83 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_14_0 ( double mag , double * state
) { state [ 84 ] = state [ 84 ] + mag ; } static void
perturbAsmJointPrimitiveState_14_0v ( double mag , double * state ) { state [
84 ] = state [ 84 ] + mag ; state [ 87 ] = state [ 87 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_14_1 ( double mag , double * state
) { state [ 85 ] = state [ 85 ] + mag ; } static void
perturbAsmJointPrimitiveState_14_1v ( double mag , double * state ) { state [
85 ] = state [ 85 ] + mag ; state [ 88 ] = state [ 88 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_14_2 ( double mag , double * state
) { state [ 86 ] = state [ 86 ] + mag ; } static void
perturbAsmJointPrimitiveState_14_2v ( double mag , double * state ) { state [
86 ] = state [ 86 ] + mag ; state [ 89 ] = state [ 89 ] - 0.875 * mag ; }
void draft7_a151ee3d_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 2 :
perturbAsmJointPrimitiveState_0_1 ( mag , state ) ; break ; case 3 :
perturbAsmJointPrimitiveState_0_1v ( mag , state ) ; break ; case 4 :
perturbAsmJointPrimitiveState_0_2 ( mag , state ) ; break ; case 5 :
perturbAsmJointPrimitiveState_0_2v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; case 14 :
perturbAsmJointPrimitiveState_1_1 ( mag , state ) ; break ; case 15 :
perturbAsmJointPrimitiveState_1_1v ( mag , state ) ; break ; case 16 :
perturbAsmJointPrimitiveState_1_2 ( mag , state ) ; break ; case 17 :
perturbAsmJointPrimitiveState_1_2v ( mag , state ) ; break ; case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 26 :
perturbAsmJointPrimitiveState_2_1 ( mag , state ) ; break ; case 27 :
perturbAsmJointPrimitiveState_2_1v ( mag , state ) ; break ; case 28 :
perturbAsmJointPrimitiveState_2_2 ( mag , state ) ; break ; case 29 :
perturbAsmJointPrimitiveState_2_2v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 38 :
perturbAsmJointPrimitiveState_3_1 ( mag , state ) ; break ; case 39 :
perturbAsmJointPrimitiveState_3_1v ( mag , state ) ; break ; case 40 :
perturbAsmJointPrimitiveState_3_2 ( mag , state ) ; break ; case 41 :
perturbAsmJointPrimitiveState_3_2v ( mag , state ) ; break ; case 48 :
perturbAsmJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbAsmJointPrimitiveState_4_0v ( mag , state ) ; break ; case 50 :
perturbAsmJointPrimitiveState_4_1 ( mag , state ) ; break ; case 51 :
perturbAsmJointPrimitiveState_4_1v ( mag , state ) ; break ; case 52 :
perturbAsmJointPrimitiveState_4_2 ( mag , state ) ; break ; case 53 :
perturbAsmJointPrimitiveState_4_2v ( mag , state ) ; break ; case 60 :
perturbAsmJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbAsmJointPrimitiveState_5_0v ( mag , state ) ; break ; case 62 :
perturbAsmJointPrimitiveState_5_1 ( mag , state ) ; break ; case 63 :
perturbAsmJointPrimitiveState_5_1v ( mag , state ) ; break ; case 64 :
perturbAsmJointPrimitiveState_5_2 ( mag , state ) ; break ; case 65 :
perturbAsmJointPrimitiveState_5_2v ( mag , state ) ; break ; case 72 :
perturbAsmJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbAsmJointPrimitiveState_6_0v ( mag , state ) ; break ; case 74 :
perturbAsmJointPrimitiveState_6_1 ( mag , state ) ; break ; case 75 :
perturbAsmJointPrimitiveState_6_1v ( mag , state ) ; break ; case 76 :
perturbAsmJointPrimitiveState_6_2 ( mag , state ) ; break ; case 77 :
perturbAsmJointPrimitiveState_6_2v ( mag , state ) ; break ; case 84 :
perturbAsmJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbAsmJointPrimitiveState_7_0v ( mag , state ) ; break ; case 86 :
perturbAsmJointPrimitiveState_7_1 ( mag , state ) ; break ; case 87 :
perturbAsmJointPrimitiveState_7_1v ( mag , state ) ; break ; case 88 :
perturbAsmJointPrimitiveState_7_2 ( mag , state ) ; break ; case 89 :
perturbAsmJointPrimitiveState_7_2v ( mag , state ) ; break ; case 96 :
perturbAsmJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbAsmJointPrimitiveState_8_0v ( mag , state ) ; break ; case 98 :
perturbAsmJointPrimitiveState_8_1 ( mag , state ) ; break ; case 99 :
perturbAsmJointPrimitiveState_8_1v ( mag , state ) ; break ; case 100 :
perturbAsmJointPrimitiveState_8_2 ( mag , state ) ; break ; case 101 :
perturbAsmJointPrimitiveState_8_2v ( mag , state ) ; break ; case 108 :
perturbAsmJointPrimitiveState_9_0 ( mag , state ) ; break ; case 109 :
perturbAsmJointPrimitiveState_9_0v ( mag , state ) ; break ; case 110 :
perturbAsmJointPrimitiveState_9_1 ( mag , state ) ; break ; case 111 :
perturbAsmJointPrimitiveState_9_1v ( mag , state ) ; break ; case 112 :
perturbAsmJointPrimitiveState_9_2 ( mag , state ) ; break ; case 113 :
perturbAsmJointPrimitiveState_9_2v ( mag , state ) ; break ; case 120 :
perturbAsmJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbAsmJointPrimitiveState_10_0v ( mag , state ) ; break ; case 122 :
perturbAsmJointPrimitiveState_10_1 ( mag , state ) ; break ; case 123 :
perturbAsmJointPrimitiveState_10_1v ( mag , state ) ; break ; case 124 :
perturbAsmJointPrimitiveState_10_2 ( mag , state ) ; break ; case 125 :
perturbAsmJointPrimitiveState_10_2v ( mag , state ) ; break ; case 132 :
perturbAsmJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbAsmJointPrimitiveState_11_0v ( mag , state ) ; break ; case 134 :
perturbAsmJointPrimitiveState_11_1 ( mag , state ) ; break ; case 135 :
perturbAsmJointPrimitiveState_11_1v ( mag , state ) ; break ; case 136 :
perturbAsmJointPrimitiveState_11_2 ( mag , state ) ; break ; case 137 :
perturbAsmJointPrimitiveState_11_2v ( mag , state ) ; break ; case 144 :
perturbAsmJointPrimitiveState_12_0 ( mag , state ) ; break ; case 145 :
perturbAsmJointPrimitiveState_12_0v ( mag , state ) ; break ; case 146 :
perturbAsmJointPrimitiveState_12_1 ( mag , state ) ; break ; case 147 :
perturbAsmJointPrimitiveState_12_1v ( mag , state ) ; break ; case 148 :
perturbAsmJointPrimitiveState_12_2 ( mag , state ) ; break ; case 149 :
perturbAsmJointPrimitiveState_12_2v ( mag , state ) ; break ; case 156 :
perturbAsmJointPrimitiveState_13_0 ( mag , state ) ; break ; case 157 :
perturbAsmJointPrimitiveState_13_0v ( mag , state ) ; break ; case 158 :
perturbAsmJointPrimitiveState_13_1 ( mag , state ) ; break ; case 159 :
perturbAsmJointPrimitiveState_13_1v ( mag , state ) ; break ; case 160 :
perturbAsmJointPrimitiveState_13_2 ( mag , state ) ; break ; case 161 :
perturbAsmJointPrimitiveState_13_2v ( mag , state ) ; break ; case 168 :
perturbAsmJointPrimitiveState_14_0 ( mag , state ) ; break ; case 169 :
perturbAsmJointPrimitiveState_14_0v ( mag , state ) ; break ; case 170 :
perturbAsmJointPrimitiveState_14_1 ( mag , state ) ; break ; case 171 :
perturbAsmJointPrimitiveState_14_1v ( mag , state ) ; break ; case 172 :
perturbAsmJointPrimitiveState_14_2 ( mag , state ) ; break ; case 173 :
perturbAsmJointPrimitiveState_14_2v ( mag , state ) ; break ; } } void
draft7_a151ee3d_1_computePosDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { } } void draft7_a151ee3d_1_computeVelDofBlendMatrix ( const
void * mech , size_t stageIdx , size_t primIdx , const double * state , int
partialType , double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void
) primIdx ; ( void ) state ; ( void ) partialType ; ( void ) matrix ; switch
( ( stageIdx * 6 + primIdx ) ) { } } void
draft7_a151ee3d_1_projectPartiallyTargetedPos ( const void * mech , size_t
stageIdx , size_t primIdx , const double * origState , int partialType ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) origState ; ( void ) partialType ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) ) { } } void draft7_a151ee3d_1_propagateMotion (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , const double *
state , double * motionData ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 252 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.5 ; xx [ 1 ] =
xx [ 0 ] * state [ 2 ] ; xx [ 2 ] = cos ( xx [ 1 ] ) ; xx [ 3 ] = xx [ 0 ] *
state [ 1 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] = 0.9881368157912284 ;
xx [ 6 ] = xx [ 0 ] * state [ 0 ] ; xx [ 7 ] = cos ( xx [ 6 ] ) ; xx [ 8 ] =
0.1535761481414752 ; xx [ 9 ] = sin ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 5 ] * xx [
7 ] + xx [ 8 ] * xx [ 9 ] ; xx [ 10 ] = xx [ 4 ] * xx [ 6 ] ; xx [ 11 ] =
0.258564134865625 ; xx [ 12 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 11 ] * xx
[ 12 ] ; xx [ 13 ] = xx [ 8 ] * xx [ 7 ] - xx [ 5 ] * xx [ 9 ] ; xx [ 5 ] =
sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 7 ] =
0.9659940932330751 ; xx [ 8 ] = xx [ 7 ] * xx [ 5 ] ; xx [ 5 ] = xx [ 13 ] *
xx [ 3 ] - xx [ 8 ] * xx [ 6 ] ; xx [ 9 ] = xx [ 3 ] * xx [ 6 ] + xx [ 13 ] *
xx [ 8 ] ; xx [ 3 ] = xx [ 7 ] * xx [ 12 ] ; xx [ 6 ] = xx [ 2 ] * xx [ 10 ]
+ xx [ 1 ] * xx [ 5 ] + xx [ 9 ] * xx [ 3 ] ; xx [ 8 ] = - xx [ 6 ] ; xx [ 12
] = xx [ 13 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 2 ] * xx [ 12 ] + xx [ 3 ] * xx [
5 ] - xx [ 9 ] * xx [ 1 ] ; xx [ 13 ] = xx [ 2 ] * xx [ 5 ] - xx [ 1 ] * xx [
10 ] - xx [ 12 ] * xx [ 3 ] ; xx [ 5 ] = xx [ 9 ] * xx [ 2 ] - xx [ 3 ] * xx
[ 10 ] + xx [ 12 ] * xx [ 1 ] ; xx [ 9 ] = 0.0187094325596859 ; xx [ 10 ] =
8.538390167322628e-3 ; xx [ 12 ] = xx [ 9 ] * xx [ 13 ] + xx [ 5 ] * xx [ 10
] ; xx [ 14 ] = xx [ 4 ] ; xx [ 15 ] = xx [ 13 ] ; xx [ 16 ] = xx [ 5 ] ; xx
[ 17 ] = xx [ 9 ] * xx [ 4 ] ; xx [ 18 ] = xx [ 10 ] * xx [ 4 ] ; xx [ 19 ] =
- xx [ 12 ] ; xx [ 20 ] = xx [ 17 ] ; xx [ 21 ] = xx [ 18 ] ;
pm_math_Vector3_cross_ra ( xx + 14 , xx + 19 , xx + 22 ) ; xx [ 14 ] = 2.0 ;
xx [ 15 ] = ( xx [ 6 ] * xx [ 12 ] + xx [ 22 ] ) * xx [ 14 ] ; xx [ 12 ] =
0.07051377582550049 - ( xx [ 10 ] + xx [ 14 ] * ( xx [ 23 ] - xx [ 17 ] * xx
[ 6 ] ) ) ; xx [ 16 ] = 0.9096613540649414 - ( ( xx [ 24 ] - xx [ 18 ] * xx [
6 ] ) * xx [ 14 ] - xx [ 9 ] ) ; xx [ 17 ] = xx [ 0 ] * state [ 8 ] ; xx [ 18
] = cos ( xx [ 17 ] ) ; xx [ 19 ] = 0.08149234695961537 ; xx [ 20 ] = xx [ 0
] * state [ 6 ] ; xx [ 21 ] = sin ( xx [ 20 ] ) ; xx [ 22 ] =
0.9966739674472358 ; xx [ 23 ] = cos ( xx [ 20 ] ) ; xx [ 20 ] =
3.301712910522993e-12 ; xx [ 24 ] = xx [ 19 ] * xx [ 21 ] - xx [ 22 ] * xx [
23 ] ; xx [ 25 ] = - ( xx [ 19 ] * xx [ 23 ] + xx [ 22 ] * xx [ 21 ] ) ; xx [
26 ] = xx [ 20 ] * xx [ 21 ] ; xx [ 27 ] = - ( xx [ 20 ] * xx [ 23 ] ) ; xx [
19 ] = xx [ 0 ] * state [ 7 ] ; xx [ 20 ] = 6.558709267800361e-12 ; xx [ 21 ]
= sin ( xx [ 19 ] ) ; xx [ 22 ] = 0.9694837936076719 ; xx [ 23 ] =
0.2451554077153451 ; xx [ 28 ] = cos ( xx [ 19 ] ) ; xx [ 29 ] = xx [ 20 ] *
xx [ 21 ] ; xx [ 30 ] = xx [ 22 ] * xx [ 21 ] ; xx [ 31 ] = - ( xx [ 23 ] *
xx [ 21 ] ) ; pm_math_Quaternion_compose_ra ( xx + 24 , xx + 28 , xx + 32 ) ;
xx [ 19 ] = sin ( xx [ 17 ] ) ; xx [ 17 ] = xx [ 23 ] * xx [ 19 ] ; xx [ 21 ]
= xx [ 22 ] * xx [ 19 ] ; xx [ 19 ] = xx [ 18 ] * xx [ 32 ] - ( xx [ 34 ] *
xx [ 17 ] + xx [ 35 ] * xx [ 21 ] ) ; xx [ 24 ] = xx [ 18 ] * xx [ 33 ] + xx
[ 34 ] * xx [ 21 ] - xx [ 35 ] * xx [ 17 ] ; xx [ 25 ] = xx [ 32 ] * xx [ 17
] + xx [ 18 ] * xx [ 34 ] - xx [ 33 ] * xx [ 21 ] ; xx [ 26 ] = xx [ 32 ] *
xx [ 21 ] + xx [ 18 ] * xx [ 35 ] + xx [ 33 ] * xx [ 17 ] ; xx [ 27 ] = xx [
19 ] ; xx [ 28 ] = xx [ 24 ] ; xx [ 29 ] = xx [ 25 ] ; xx [ 30 ] = xx [ 26 ]
; xx [ 31 ] = 6.664202092713185e-14 ; xx [ 32 ] = 6.161981679940124e-3 ; xx [
33 ] = - 0.01687376340899878 ; pm_math_Quaternion_xform_ra ( xx + 27 , xx +
31 , xx + 34 ) ; xx [ 37 ] = - xx [ 34 ] ; xx [ 38 ] = 0.01018286292250497 ;
xx [ 39 ] = xx [ 38 ] - xx [ 35 ] ; xx [ 40 ] = 0.01643121746247235 ; xx [ 41
] = xx [ 40 ] - xx [ 36 ] ; xx [ 42 ] = xx [ 0 ] * state [ 14 ] ; xx [ 43 ] =
cos ( xx [ 42 ] ) ; xx [ 44 ] = 0.1159778701879254 ; xx [ 45 ] = xx [ 0 ] *
state [ 12 ] ; xx [ 46 ] = sin ( xx [ 45 ] ) ; xx [ 47 ] = 0.9932517976961697
; xx [ 48 ] = cos ( xx [ 45 ] ) ; xx [ 45 ] = 4.654509323289534e-12 ; xx [ 49
] = 6.655858618855781e-12 ; xx [ 50 ] = xx [ 49 ] * xx [ 46 ] ; xx [ 51 ] =
xx [ 44 ] * xx [ 46 ] - xx [ 47 ] * xx [ 48 ] ; xx [ 52 ] = - ( xx [ 44 ] *
xx [ 48 ] + xx [ 47 ] * xx [ 46 ] + xx [ 45 ] * xx [ 50 ] ) ; xx [ 53 ] = xx
[ 47 ] * xx [ 50 ] - xx [ 45 ] * xx [ 46 ] ; xx [ 54 ] = xx [ 45 ] * xx [ 48
] - xx [ 44 ] * xx [ 50 ] ; xx [ 44 ] = xx [ 0 ] * state [ 13 ] ; xx [ 45 ] =
2.702350965790575e-12 ; xx [ 46 ] = sin ( xx [ 44 ] ) ; xx [ 47 ] =
0.9452391332067189 ; xx [ 48 ] = 0.3263785854718576 ; xx [ 55 ] = cos ( xx [
44 ] ) ; xx [ 56 ] = - ( xx [ 45 ] * xx [ 46 ] ) ; xx [ 57 ] = xx [ 47 ] * xx
[ 46 ] ; xx [ 58 ] = - ( xx [ 48 ] * xx [ 46 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 51 , xx + 55 , xx + 59 ) ; xx [ 44 ] =
sin ( xx [ 42 ] ) ; xx [ 42 ] = xx [ 48 ] * xx [ 44 ] ; xx [ 46 ] = xx [ 47 ]
* xx [ 44 ] ; xx [ 44 ] = xx [ 43 ] * xx [ 59 ] - ( xx [ 61 ] * xx [ 42 ] +
xx [ 62 ] * xx [ 46 ] ) ; xx [ 50 ] = xx [ 43 ] * xx [ 60 ] + xx [ 61 ] * xx
[ 46 ] - xx [ 62 ] * xx [ 42 ] ; xx [ 51 ] = xx [ 59 ] * xx [ 42 ] + xx [ 43
] * xx [ 61 ] - xx [ 60 ] * xx [ 46 ] ; xx [ 52 ] = xx [ 59 ] * xx [ 46 ] +
xx [ 43 ] * xx [ 62 ] + xx [ 60 ] * xx [ 42 ] ; xx [ 53 ] = xx [ 44 ] ; xx [
54 ] = xx [ 50 ] ; xx [ 55 ] = xx [ 51 ] ; xx [ 56 ] = xx [ 52 ] ; xx [ 57 ]
= - 3.478043091554657e-14 ; xx [ 58 ] = 8.616599387917045e-3 ; xx [ 59 ] = -
0.01781379291801384 ; pm_math_Quaternion_xform_ra ( xx + 53 , xx + 57 , xx +
60 ) ; xx [ 63 ] = 1.222885353421585e-13 - xx [ 60 ] ; xx [ 64 ] =
0.01371330802384472 - xx [ 61 ] ; xx [ 60 ] = 0.01482112808326479 - xx [ 62 ]
; xx [ 61 ] = 0.9961405467325101 ; xx [ 62 ] = xx [ 0 ] * state [ 18 ] ; xx [
65 ] = cos ( xx [ 62 ] ) ; xx [ 66 ] = 3.201611086326645e-12 ; xx [ 67 ] =
2.826845832587476e-12 ; xx [ 68 ] = sin ( xx [ 62 ] ) ; xx [ 62 ] = xx [ 67 ]
* xx [ 68 ] ; xx [ 69 ] = 0.08777249657755079 ; xx [ 70 ] =
1.028498847019974e-11 ; xx [ 71 ] = - ( xx [ 61 ] * xx [ 65 ] + xx [ 66 ] *
xx [ 62 ] - xx [ 69 ] * xx [ 68 ] ) ; xx [ 72 ] = - ( xx [ 69 ] * xx [ 65 ] +
xx [ 61 ] * xx [ 68 ] + xx [ 70 ] * xx [ 62 ] ) ; xx [ 73 ] = xx [ 66 ] * xx
[ 65 ] - xx [ 61 ] * xx [ 62 ] + xx [ 70 ] * xx [ 68 ] ; xx [ 74 ] = xx [ 66
] * xx [ 68 ] - xx [ 70 ] * xx [ 65 ] + xx [ 69 ] * xx [ 62 ] ; xx [ 61 ] =
xx [ 0 ] * state [ 19 ] ; xx [ 62 ] = 1.596819818085218e-11 ; xx [ 65 ] = sin
( xx [ 61 ] ) ; xx [ 66 ] = 0.9562867924269723 ; xx [ 68 ] =
0.2924304543472392 ; xx [ 75 ] = cos ( xx [ 61 ] ) ; xx [ 76 ] = xx [ 62 ] *
xx [ 65 ] ; xx [ 77 ] = xx [ 66 ] * xx [ 65 ] ; xx [ 78 ] = - ( xx [ 68 ] *
xx [ 65 ] ) ; pm_math_Quaternion_compose_ra ( xx + 71 , xx + 75 , xx + 79 ) ;
xx [ 61 ] = xx [ 0 ] * state [ 20 ] ; xx [ 65 ] = 1.035832709073648e-11 ; xx
[ 69 ] = sin ( xx [ 61 ] ) ; xx [ 70 ] = cos ( xx [ 61 ] ) ; xx [ 71 ] = xx [
65 ] * xx [ 69 ] ; xx [ 72 ] = xx [ 68 ] * xx [ 69 ] ; xx [ 73 ] = xx [ 66 ]
* xx [ 69 ] ; pm_math_Quaternion_compose_ra ( xx + 79 , xx + 70 , xx + 74 ) ;
xx [ 78 ] = 2.484784205278315e-13 ; xx [ 79 ] = 0.01055813361575447 ; xx [ 80
] = - 0.01718904409441589 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 78 ,
xx + 81 ) ; xx [ 61 ] = 7.111565911668068e-14 + xx [ 81 ] ; xx [ 69 ] = - xx
[ 61 ] ; xx [ 84 ] = 0.01482354797278426 - xx [ 82 ] ; xx [ 81 ] =
0.01597192626903846 - xx [ 83 ] ; xx [ 82 ] = xx [ 0 ] * state [ 24 ] ; xx [
83 ] = sin ( xx [ 82 ] ) ; xx [ 85 ] = 1.82992095932877e-11 ; xx [ 86 ] =
5.235917730680519e-12 ; xx [ 87 ] = cos ( xx [ 82 ] ) ; xx [ 88 ] = xx [ 83 ]
; xx [ 89 ] = - ( xx [ 85 ] * xx [ 83 ] ) ; xx [ 90 ] = - ( xx [ 86 ] * xx [
83 ] ) ; xx [ 91 ] = 0.9991449255755711 ; xx [ 92 ] = - 0.04069340420070983 ;
xx [ 93 ] = - 5.269348941183292e-3 ; xx [ 94 ] = - 5.069370067487187e-3 ;
pm_math_Quaternion_compose_ra ( xx + 87 , xx + 91 , xx + 95 ) ; xx [ 82 ] =
xx [ 0 ] * state [ 25 ] ; xx [ 83 ] = 0.01017403174547095 ; xx [ 87 ] = sin (
xx [ 82 ] ) ; xx [ 88 ] = 0.9992497622599684 ; xx [ 89 ] =
0.03736845864413881 ; xx [ 90 ] = cos ( xx [ 82 ] ) ; xx [ 91 ] = - ( xx [ 83
] * xx [ 87 ] ) ; xx [ 92 ] = xx [ 88 ] * xx [ 87 ] ; xx [ 93 ] = xx [ 89 ] *
xx [ 87 ] ; pm_math_Quaternion_compose_ra ( xx + 95 , xx + 90 , xx + 99 ) ;
xx [ 82 ] = xx [ 0 ] * state [ 26 ] ; xx [ 87 ] = 0.01050408723065136 ; xx [
90 ] = sin ( xx [ 82 ] ) ; xx [ 91 ] = 0.03726153110399754 ; xx [ 92 ] =
0.9992503402307336 ; xx [ 93 ] = cos ( xx [ 82 ] ) ; xx [ 94 ] = xx [ 87 ] *
xx [ 90 ] ; xx [ 95 ] = - ( xx [ 91 ] * xx [ 90 ] ) ; xx [ 96 ] = xx [ 92 ] *
xx [ 90 ] ; pm_math_Quaternion_compose_ra ( xx + 99 , xx + 93 , xx + 103 ) ;
xx [ 97 ] = - 1.160451719412536e-3 ; xx [ 98 ] = - 0.02864342077244468 ; xx [
99 ] = - 0.1242034406115433 ; pm_math_Quaternion_xform_ra ( xx + 103 , xx +
97 , xx + 100 ) ; xx [ 82 ] = 4.855313199912053e-13 - xx [ 100 ] ; xx [ 90 ]
= 0.01419776350117569 - xx [ 101 ] ; xx [ 100 ] = 0.0153662351784256 - xx [
102 ] ; xx [ 101 ] = xx [ 0 ] * state [ 32 ] ; xx [ 102 ] = cos ( xx [ 101 ]
) ; xx [ 107 ] = xx [ 0 ] * state [ 31 ] ; xx [ 108 ] = cos ( xx [ 107 ] ) ;
xx [ 109 ] = xx [ 0 ] * state [ 30 ] ; xx [ 110 ] = 0.9998930708978301 ; xx [
111 ] = sin ( xx [ 109 ] ) ; xx [ 112 ] = 0.01055892623245314 ; xx [ 113 ] =
0.01011710666764959 ; xx [ 114 ] = cos ( xx [ 109 ] ) ; xx [ 115 ] = xx [ 110
] * xx [ 111 ] ; xx [ 116 ] = xx [ 112 ] * xx [ 111 ] ; xx [ 117 ] = - ( xx [
113 ] * xx [ 111 ] ) ; xx [ 118 ] = - 0.9958524573065585 ; xx [ 119 ] =
0.09068858100887965 ; xx [ 120 ] = - 4.559029495871781e-3 ; xx [ 121 ] = -
5.716624978144057e-3 ; pm_math_Quaternion_compose_ra ( xx + 114 , xx + 118 ,
xx + 122 ) ; xx [ 109 ] = sin ( xx [ 107 ] ) ; xx [ 107 ] = xx [ 108 ] * xx [
122 ] - xx [ 124 ] * xx [ 109 ] ; xx [ 111 ] = xx [ 108 ] * xx [ 125 ] + xx [
123 ] * xx [ 109 ] ; xx [ 114 ] = sin ( xx [ 101 ] ) ; xx [ 101 ] = xx [ 102
] * xx [ 107 ] - xx [ 111 ] * xx [ 114 ] ; xx [ 115 ] = xx [ 108 ] * xx [ 123
] - xx [ 125 ] * xx [ 109 ] ; xx [ 116 ] = xx [ 122 ] * xx [ 109 ] + xx [ 108
] * xx [ 124 ] ; xx [ 108 ] = xx [ 102 ] * xx [ 115 ] + xx [ 116 ] * xx [ 114
] ; xx [ 109 ] = xx [ 116 ] * xx [ 102 ] - xx [ 114 ] * xx [ 115 ] ; xx [ 115
] = xx [ 114 ] * xx [ 107 ] + xx [ 111 ] * xx [ 102 ] ; xx [ 107 ] =
0.09519527419625862 ; xx [ 111 ] = - 0.07787409280153862 ; xx [ 116 ] = -
0.0859897565171039 ; xx [ 117 ] = xx [ 0 ] * state [ 36 ] ; xx [ 118 ] = sin
( xx [ 117 ] ) ; xx [ 119 ] = xx [ 0 ] * state [ 37 ] ; xx [ 120 ] = sin ( xx
[ 119 ] ) ; xx [ 121 ] = xx [ 118 ] * xx [ 120 ] ; xx [ 122 ] = xx [ 0 ] *
state [ 38 ] ; xx [ 123 ] = sin ( xx [ 122 ] ) ; xx [ 124 ] = cos ( xx [ 122
] ) ; xx [ 122 ] = cos ( xx [ 117 ] ) ; xx [ 117 ] = cos ( xx [ 119 ] ) ; xx
[ 119 ] = xx [ 122 ] * xx [ 117 ] ; xx [ 125 ] = xx [ 121 ] * xx [ 123 ] - xx
[ 124 ] * xx [ 119 ] ; xx [ 126 ] = xx [ 117 ] * xx [ 118 ] ; xx [ 117 ] = xx
[ 122 ] * xx [ 120 ] ; xx [ 118 ] = xx [ 124 ] * xx [ 126 ] + xx [ 117 ] * xx
[ 123 ] ; xx [ 120 ] = xx [ 126 ] * xx [ 123 ] - xx [ 124 ] * xx [ 117 ] ; xx
[ 117 ] = xx [ 119 ] * xx [ 123 ] + xx [ 124 ] * xx [ 121 ] ; xx [ 119 ] =
0.01688944435119629 ; xx [ 121 ] = 0.1319682159423828 ; xx [ 122 ] =
0.8089576416015625 ; xx [ 126 ] = xx [ 0 ] * state [ 42 ] ; xx [ 127 ] = sin
( xx [ 126 ] ) ; xx [ 128 ] = xx [ 0 ] * state [ 43 ] ; xx [ 129 ] = sin ( xx
[ 128 ] ) ; xx [ 130 ] = xx [ 127 ] * xx [ 129 ] ; xx [ 131 ] = xx [ 0 ] *
state [ 44 ] ; xx [ 132 ] = sin ( xx [ 131 ] ) ; xx [ 133 ] = cos ( xx [ 131
] ) ; xx [ 131 ] = cos ( xx [ 126 ] ) ; xx [ 126 ] = cos ( xx [ 128 ] ) ; xx
[ 128 ] = xx [ 131 ] * xx [ 126 ] ; xx [ 134 ] = xx [ 130 ] * xx [ 132 ] - xx
[ 133 ] * xx [ 128 ] ; xx [ 135 ] = xx [ 126 ] * xx [ 127 ] ; xx [ 126 ] = xx
[ 131 ] * xx [ 129 ] ; xx [ 127 ] = xx [ 133 ] * xx [ 135 ] + xx [ 126 ] * xx
[ 132 ] ; xx [ 129 ] = xx [ 135 ] * xx [ 132 ] - xx [ 133 ] * xx [ 126 ] ; xx
[ 126 ] = xx [ 128 ] * xx [ 132 ] + xx [ 133 ] * xx [ 130 ] ; xx [ 128 ] = xx
[ 0 ] * state [ 48 ] ; xx [ 130 ] = sin ( xx [ 128 ] ) ; xx [ 131 ] = xx [ 0
] * state [ 49 ] ; xx [ 135 ] = sin ( xx [ 131 ] ) ; xx [ 136 ] = xx [ 130 ]
* xx [ 135 ] ; xx [ 137 ] = xx [ 0 ] * state [ 50 ] ; xx [ 138 ] = sin ( xx [
137 ] ) ; xx [ 139 ] = cos ( xx [ 137 ] ) ; xx [ 137 ] = cos ( xx [ 128 ] ) ;
xx [ 128 ] = cos ( xx [ 131 ] ) ; xx [ 131 ] = xx [ 137 ] * xx [ 128 ] ; xx [
140 ] = xx [ 136 ] * xx [ 138 ] - xx [ 139 ] * xx [ 131 ] ; xx [ 141 ] = xx [
128 ] * xx [ 130 ] ; xx [ 128 ] = xx [ 137 ] * xx [ 135 ] ; xx [ 130 ] = xx [
139 ] * xx [ 141 ] + xx [ 128 ] * xx [ 138 ] ; xx [ 135 ] = xx [ 141 ] * xx [
138 ] - xx [ 139 ] * xx [ 128 ] ; xx [ 128 ] = xx [ 131 ] * xx [ 138 ] + xx [
139 ] * xx [ 136 ] ; xx [ 131 ] = 9.709312438964843e-3 ; xx [ 136 ] = -
2.232642650604248e-3 ; xx [ 137 ] = 0.8689576416015625 ; xx [ 141 ] = xx [ 0
] * state [ 54 ] ; xx [ 142 ] = sin ( xx [ 141 ] ) ; xx [ 143 ] = xx [ 0 ] *
state [ 55 ] ; xx [ 144 ] = sin ( xx [ 143 ] ) ; xx [ 145 ] = xx [ 142 ] * xx
[ 144 ] ; xx [ 146 ] = xx [ 0 ] * state [ 56 ] ; xx [ 147 ] = sin ( xx [ 146
] ) ; xx [ 148 ] = cos ( xx [ 146 ] ) ; xx [ 146 ] = cos ( xx [ 141 ] ) ; xx
[ 141 ] = cos ( xx [ 143 ] ) ; xx [ 143 ] = xx [ 146 ] * xx [ 141 ] ; xx [
149 ] = xx [ 145 ] * xx [ 147 ] - xx [ 148 ] * xx [ 143 ] ; xx [ 150 ] = xx [
141 ] * xx [ 142 ] ; xx [ 141 ] = xx [ 146 ] * xx [ 144 ] ; xx [ 142 ] = xx [
148 ] * xx [ 150 ] + xx [ 141 ] * xx [ 147 ] ; xx [ 144 ] = xx [ 150 ] * xx [
147 ] - xx [ 148 ] * xx [ 141 ] ; xx [ 141 ] = xx [ 143 ] * xx [ 147 ] + xx [
148 ] * xx [ 145 ] ; xx [ 143 ] = xx [ 0 ] * state [ 60 ] ; xx [ 145 ] = sin
( xx [ 143 ] ) ; xx [ 146 ] = xx [ 0 ] * state [ 61 ] ; xx [ 150 ] = sin ( xx
[ 146 ] ) ; xx [ 151 ] = xx [ 145 ] * xx [ 150 ] ; xx [ 152 ] = xx [ 0 ] *
state [ 62 ] ; xx [ 153 ] = sin ( xx [ 152 ] ) ; xx [ 154 ] = cos ( xx [ 152
] ) ; xx [ 152 ] = cos ( xx [ 143 ] ) ; xx [ 143 ] = cos ( xx [ 146 ] ) ; xx
[ 146 ] = xx [ 152 ] * xx [ 143 ] ; xx [ 155 ] = xx [ 151 ] * xx [ 153 ] - xx
[ 154 ] * xx [ 146 ] ; xx [ 156 ] = xx [ 143 ] * xx [ 145 ] ; xx [ 143 ] = xx
[ 152 ] * xx [ 150 ] ; xx [ 145 ] = xx [ 154 ] * xx [ 156 ] + xx [ 143 ] * xx
[ 153 ] ; xx [ 150 ] = xx [ 156 ] * xx [ 153 ] - xx [ 154 ] * xx [ 143 ] ; xx
[ 143 ] = xx [ 146 ] * xx [ 153 ] + xx [ 154 ] * xx [ 151 ] ; xx [ 146 ] =
0.06488653564453126 ; xx [ 151 ] = 0.03644176864624023 ; xx [ 152 ] =
0.9499576416015625 ; xx [ 156 ] = xx [ 0 ] * state [ 66 ] ; xx [ 157 ] = sin
( xx [ 156 ] ) ; xx [ 158 ] = xx [ 0 ] * state [ 67 ] ; xx [ 159 ] = sin ( xx
[ 158 ] ) ; xx [ 160 ] = xx [ 157 ] * xx [ 159 ] ; xx [ 161 ] = xx [ 0 ] *
state [ 68 ] ; xx [ 162 ] = sin ( xx [ 161 ] ) ; xx [ 163 ] = cos ( xx [ 161
] ) ; xx [ 161 ] = cos ( xx [ 156 ] ) ; xx [ 156 ] = cos ( xx [ 158 ] ) ; xx
[ 158 ] = xx [ 161 ] * xx [ 156 ] ; xx [ 164 ] = xx [ 160 ] * xx [ 162 ] - xx
[ 163 ] * xx [ 158 ] ; xx [ 165 ] = xx [ 156 ] * xx [ 157 ] ; xx [ 156 ] = xx
[ 161 ] * xx [ 159 ] ; xx [ 157 ] = xx [ 163 ] * xx [ 165 ] + xx [ 156 ] * xx
[ 162 ] ; xx [ 159 ] = xx [ 165 ] * xx [ 162 ] - xx [ 163 ] * xx [ 156 ] ; xx
[ 156 ] = xx [ 158 ] * xx [ 162 ] + xx [ 163 ] * xx [ 160 ] ; xx [ 158 ] =
0.1324676666259766 ; xx [ 160 ] = 0.1263068237304688 ; xx [ 161 ] =
0.9199576416015626 ; xx [ 165 ] = xx [ 0 ] * state [ 72 ] ; xx [ 166 ] = sin
( xx [ 165 ] ) ; xx [ 167 ] = xx [ 0 ] * state [ 73 ] ; xx [ 168 ] = sin ( xx
[ 167 ] ) ; xx [ 169 ] = xx [ 166 ] * xx [ 168 ] ; xx [ 170 ] = xx [ 0 ] *
state [ 74 ] ; xx [ 171 ] = sin ( xx [ 170 ] ) ; xx [ 172 ] = cos ( xx [ 170
] ) ; xx [ 170 ] = cos ( xx [ 165 ] ) ; xx [ 165 ] = cos ( xx [ 167 ] ) ; xx
[ 167 ] = xx [ 170 ] * xx [ 165 ] ; xx [ 173 ] = xx [ 169 ] * xx [ 171 ] - xx
[ 172 ] * xx [ 167 ] ; xx [ 174 ] = xx [ 165 ] * xx [ 166 ] ; xx [ 165 ] = xx
[ 170 ] * xx [ 168 ] ; xx [ 166 ] = xx [ 172 ] * xx [ 174 ] + xx [ 165 ] * xx
[ 171 ] ; xx [ 168 ] = xx [ 174 ] * xx [ 171 ] - xx [ 172 ] * xx [ 165 ] ; xx
[ 165 ] = xx [ 167 ] * xx [ 171 ] + xx [ 172 ] * xx [ 169 ] ; xx [ 167 ] = xx
[ 0 ] * state [ 78 ] ; xx [ 169 ] = sin ( xx [ 167 ] ) ; xx [ 170 ] = xx [ 0
] * state [ 79 ] ; xx [ 174 ] = sin ( xx [ 170 ] ) ; xx [ 175 ] = xx [ 169 ]
* xx [ 174 ] ; xx [ 176 ] = xx [ 0 ] * state [ 80 ] ; xx [ 177 ] = sin ( xx [
176 ] ) ; xx [ 178 ] = cos ( xx [ 176 ] ) ; xx [ 176 ] = cos ( xx [ 167 ] ) ;
xx [ 167 ] = cos ( xx [ 170 ] ) ; xx [ 170 ] = xx [ 176 ] * xx [ 167 ] ; xx [
179 ] = xx [ 175 ] * xx [ 177 ] - xx [ 178 ] * xx [ 170 ] ; xx [ 180 ] = xx [
167 ] * xx [ 169 ] ; xx [ 167 ] = xx [ 176 ] * xx [ 174 ] ; xx [ 169 ] = xx [
178 ] * xx [ 180 ] + xx [ 167 ] * xx [ 177 ] ; xx [ 174 ] = xx [ 180 ] * xx [
177 ] - xx [ 178 ] * xx [ 167 ] ; xx [ 167 ] = xx [ 170 ] * xx [ 177 ] + xx [
178 ] * xx [ 175 ] ; xx [ 170 ] = xx [ 0 ] * state [ 84 ] ; xx [ 175 ] = sin
( xx [ 170 ] ) ; xx [ 176 ] = xx [ 0 ] * state [ 85 ] ; xx [ 180 ] = sin ( xx
[ 176 ] ) ; xx [ 181 ] = xx [ 175 ] * xx [ 180 ] ; xx [ 182 ] = xx [ 0 ] *
state [ 86 ] ; xx [ 0 ] = sin ( xx [ 182 ] ) ; xx [ 183 ] = cos ( xx [ 182 ]
) ; xx [ 182 ] = cos ( xx [ 170 ] ) ; xx [ 170 ] = cos ( xx [ 176 ] ) ; xx [
176 ] = xx [ 182 ] * xx [ 170 ] ; xx [ 184 ] = xx [ 181 ] * xx [ 0 ] - xx [
183 ] * xx [ 176 ] ; xx [ 185 ] = xx [ 170 ] * xx [ 175 ] ; xx [ 170 ] = xx [
182 ] * xx [ 180 ] ; xx [ 175 ] = xx [ 183 ] * xx [ 185 ] + xx [ 170 ] * xx [
0 ] ; xx [ 180 ] = xx [ 185 ] * xx [ 0 ] - xx [ 183 ] * xx [ 170 ] ; xx [ 170
] = xx [ 176 ] * xx [ 0 ] + xx [ 183 ] * xx [ 181 ] ; xx [ 185 ] = xx [ 8 ] ;
xx [ 186 ] = xx [ 4 ] ; xx [ 187 ] = xx [ 13 ] ; xx [ 188 ] = xx [ 5 ] ;
pm_math_Quaternion_compose_ra ( xx + 185 , xx + 27 , xx + 189 ) ; xx [ 193 ]
= xx [ 37 ] ; xx [ 194 ] = xx [ 39 ] ; xx [ 195 ] = xx [ 41 ] ;
pm_math_Quaternion_xform_ra ( xx + 185 , xx + 193 , xx + 196 ) ; xx [ 176 ] =
xx [ 196 ] - xx [ 15 ] ; xx [ 181 ] = xx [ 197 ] + xx [ 12 ] ; xx [ 182 ] =
xx [ 198 ] + xx [ 16 ] ; pm_math_Quaternion_compose_ra ( xx + 189 , xx + 53 ,
xx + 185 ) ; xx [ 196 ] = xx [ 63 ] ; xx [ 197 ] = xx [ 64 ] ; xx [ 198 ] =
xx [ 60 ] ; pm_math_Quaternion_xform_ra ( xx + 189 , xx + 196 , xx + 199 ) ;
xx [ 202 ] = xx [ 199 ] + xx [ 176 ] ; xx [ 203 ] = xx [ 200 ] + xx [ 181 ] ;
xx [ 199 ] = xx [ 201 ] + xx [ 182 ] ; pm_math_Quaternion_compose_ra ( xx +
185 , xx + 74 , xx + 204 ) ; xx [ 208 ] = xx [ 69 ] ; xx [ 209 ] = xx [ 84 ]
; xx [ 210 ] = xx [ 81 ] ; pm_math_Quaternion_xform_ra ( xx + 185 , xx + 208
, xx + 211 ) ; xx [ 200 ] = xx [ 211 ] + xx [ 202 ] ; xx [ 201 ] = xx [ 212 ]
+ xx [ 203 ] ; xx [ 211 ] = xx [ 213 ] + xx [ 199 ] ;
pm_math_Quaternion_compose_ra ( xx + 204 , xx + 103 , xx + 212 ) ; xx [ 216 ]
= xx [ 82 ] ; xx [ 217 ] = xx [ 90 ] ; xx [ 218 ] = xx [ 100 ] ;
pm_math_Quaternion_xform_ra ( xx + 204 , xx + 216 , xx + 219 ) ;
pm_math_Quaternion_compose_ra ( xx + 74 , xx + 103 , xx + 222 ) ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 216 , xx + 226 ) ; xx [ 229 ] =
xx [ 226 ] - xx [ 61 ] ; xx [ 61 ] = xx [ 227 ] + xx [ 84 ] ; xx [ 226 ] = xx
[ 228 ] + xx [ 81 ] ; pm_math_Quaternion_compose_ra ( xx + 53 , xx + 222 , xx
+ 230 ) ; xx [ 234 ] = xx [ 229 ] ; xx [ 235 ] = xx [ 61 ] ; xx [ 236 ] = xx
[ 226 ] ; pm_math_Quaternion_xform_ra ( xx + 53 , xx + 234 , xx + 237 ) ; xx
[ 227 ] = xx [ 237 ] + xx [ 63 ] ; xx [ 228 ] = xx [ 238 ] + xx [ 64 ] ; xx [
234 ] = xx [ 239 ] + xx [ 60 ] ; pm_math_Quaternion_compose_ra ( xx + 27 , xx
+ 230 , xx + 235 ) ; xx [ 239 ] = xx [ 227 ] ; xx [ 240 ] = xx [ 228 ] ; xx [
241 ] = xx [ 234 ] ; pm_math_Quaternion_xform_ra ( xx + 27 , xx + 239 , xx +
242 ) ; xx [ 239 ] = 1.0 ; xx [ 240 ] = xx [ 11 ] * xx [ 1 ] + xx [ 7 ] * xx
[ 3 ] ; xx [ 241 ] = ( xx [ 239 ] - ( xx [ 13 ] * xx [ 13 ] + xx [ 5 ] * xx [
5 ] ) * xx [ 14 ] ) * state [ 3 ] + xx [ 14 ] * xx [ 2 ] * xx [ 240 ] * state
[ 4 ] ; xx [ 2 ] = xx [ 14 ] * ( xx [ 4 ] * xx [ 13 ] + xx [ 5 ] * xx [ 6 ] )
* state [ 3 ] + ( xx [ 7 ] - xx [ 14 ] * xx [ 3 ] * xx [ 240 ] ) * state [ 4
] + xx [ 11 ] * state [ 5 ] ; xx [ 3 ] = xx [ 14 ] * ( xx [ 5 ] * xx [ 4 ] -
xx [ 13 ] * xx [ 6 ] ) * state [ 3 ] + ( xx [ 14 ] * xx [ 1 ] * xx [ 240 ] -
xx [ 11 ] ) * state [ 4 ] + xx [ 7 ] * state [ 5 ] ; xx [ 1 ] = xx [ 3 ] * xx
[ 10 ] + xx [ 2 ] * xx [ 9 ] ; xx [ 6 ] = xx [ 9 ] * xx [ 241 ] ; xx [ 7 ] =
xx [ 10 ] * xx [ 241 ] ; xx [ 9 ] = xx [ 241 ] ; xx [ 10 ] = xx [ 2 ] ; xx [
11 ] = xx [ 3 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 27 , xx + 9 , xx
+ 245 ) ; xx [ 240 ] = xx [ 20 ] * xx [ 17 ] ; xx [ 248 ] = xx [ 20 ] * xx [
21 ] ; xx [ 249 ] = xx [ 23 ] * xx [ 17 ] + xx [ 22 ] * xx [ 21 ] ; xx [ 250
] = ( xx [ 239 ] - ( xx [ 25 ] * xx [ 25 ] + xx [ 26 ] * xx [ 26 ] ) * xx [
14 ] ) * state [ 9 ] + ( xx [ 20 ] - ( xx [ 240 ] * xx [ 17 ] + xx [ 248 ] *
xx [ 21 ] - xx [ 18 ] * xx [ 249 ] ) * xx [ 14 ] ) * state [ 10 ] ; xx [ 20 ]
= xx [ 245 ] + xx [ 250 ] ; xx [ 251 ] = xx [ 14 ] * ( xx [ 24 ] * xx [ 25 ]
- xx [ 26 ] * xx [ 19 ] ) * state [ 9 ] + ( xx [ 22 ] - xx [ 14 ] * ( xx [ 21
] * xx [ 249 ] + xx [ 18 ] * xx [ 248 ] ) ) * state [ 10 ] + xx [ 23 ] *
state [ 11 ] ; xx [ 21 ] = xx [ 246 ] + xx [ 251 ] ; xx [ 245 ] = xx [ 14 ] *
( xx [ 25 ] * xx [ 19 ] + xx [ 26 ] * xx [ 24 ] ) * state [ 9 ] + ( xx [ 14 ]
* ( xx [ 18 ] * xx [ 240 ] + xx [ 17 ] * xx [ 249 ] ) - xx [ 23 ] ) * state [
10 ] + xx [ 22 ] * state [ 11 ] ; xx [ 17 ] = xx [ 247 ] + xx [ 245 ] ;
pm_math_Vector3_cross_ra ( xx + 9 , xx + 193 , xx + 246 ) ; xx [ 9 ] = xx [
246 ] + xx [ 1 ] ; xx [ 10 ] = xx [ 247 ] - xx [ 6 ] ; xx [ 11 ] = xx [ 248 ]
- xx [ 7 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 27 , xx + 9 , xx + 193
) ; xx [ 9 ] = xx [ 250 ] ; xx [ 10 ] = xx [ 251 ] ; xx [ 11 ] = xx [ 245 ] ;
pm_math_Vector3_cross_ra ( xx + 31 , xx + 9 , xx + 27 ) ; xx [ 9 ] = xx [ 193
] + xx [ 27 ] ; xx [ 10 ] = xx [ 194 ] + xx [ 28 ] ; xx [ 11 ] = xx [ 195 ] +
xx [ 29 ] ; xx [ 27 ] = xx [ 20 ] ; xx [ 28 ] = xx [ 21 ] ; xx [ 29 ] = xx [
17 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 53 , xx + 27 , xx + 30 ) ;
xx [ 18 ] = xx [ 52 ] * xx [ 49 ] ; xx [ 22 ] = xx [ 49 ] * xx [ 50 ] + xx [
51 ] ; xx [ 193 ] = xx [ 18 ] ; xx [ 194 ] = xx [ 52 ] ; xx [ 195 ] = - xx [
22 ] ; pm_math_Vector3_cross_ra ( xx + 50 , xx + 193 , xx + 245 ) ; xx [ 23 ]
= xx [ 48 ] * xx [ 42 ] + xx [ 47 ] * xx [ 46 ] ; xx [ 33 ] = xx [ 45 ] * xx
[ 42 ] ; xx [ 193 ] = xx [ 45 ] * xx [ 46 ] ; xx [ 194 ] = ( xx [ 239 ] + (
xx [ 245 ] - xx [ 18 ] * xx [ 44 ] ) * xx [ 14 ] ) * state [ 15 ] + ( ( xx [
43 ] * xx [ 23 ] + xx [ 33 ] * xx [ 42 ] + xx [ 193 ] * xx [ 46 ] ) * xx [ 14
] - xx [ 45 ] ) * state [ 16 ] ; xx [ 18 ] = xx [ 30 ] + xx [ 194 ] ; xx [ 45
] = ( xx [ 14 ] * ( xx [ 246 ] - xx [ 52 ] * xx [ 44 ] ) - xx [ 49 ] ) *
state [ 15 ] + ( xx [ 47 ] + xx [ 14 ] * ( xx [ 43 ] * xx [ 193 ] - xx [ 46 ]
* xx [ 23 ] ) ) * state [ 16 ] + xx [ 48 ] * state [ 17 ] ; xx [ 46 ] = xx [
31 ] + xx [ 45 ] ; xx [ 30 ] = xx [ 14 ] * ( xx [ 247 ] + xx [ 44 ] * xx [ 22
] ) * state [ 15 ] + ( xx [ 14 ] * ( xx [ 42 ] * xx [ 23 ] - xx [ 43 ] * xx [
33 ] ) - xx [ 48 ] ) * state [ 16 ] + xx [ 47 ] * state [ 17 ] ; xx [ 22 ] =
xx [ 32 ] + xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 27 , xx + 196 , xx +
31 ) ; xx [ 27 ] = xx [ 31 ] + xx [ 9 ] ; xx [ 28 ] = xx [ 32 ] + xx [ 10 ] ;
xx [ 29 ] = xx [ 33 ] + xx [ 11 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
53 , xx + 27 , xx + 31 ) ; xx [ 27 ] = xx [ 194 ] ; xx [ 28 ] = xx [ 45 ] ;
xx [ 29 ] = xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 57 , xx + 27 , xx +
47 ) ; xx [ 23 ] = xx [ 31 ] + xx [ 47 ] ; xx [ 27 ] = xx [ 32 ] + xx [ 48 ]
; xx [ 28 ] = xx [ 33 ] + xx [ 49 ] ; xx [ 29 ] = xx [ 18 ] ; xx [ 30 ] = xx
[ 46 ] ; xx [ 31 ] = xx [ 22 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 74
, xx + 29 , xx + 47 ) ; xx [ 32 ] = xx [ 67 ] * xx [ 77 ] ; xx [ 33 ] = xx [
67 ] * xx [ 75 ] - xx [ 76 ] ; xx [ 53 ] = - xx [ 32 ] ; xx [ 54 ] = xx [ 77
] ; xx [ 55 ] = xx [ 33 ] ; pm_math_Vector3_cross_ra ( xx + 75 , xx + 53 , xx
+ 56 ) ; xx [ 53 ] = xx [ 62 ] ; xx [ 54 ] = xx [ 66 ] ; xx [ 55 ] = - xx [
68 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 70 , xx + 53 , xx + 193 ) ;
xx [ 42 ] = ( xx [ 239 ] + ( xx [ 74 ] * xx [ 32 ] + xx [ 56 ] ) * xx [ 14 ]
) * state [ 21 ] + xx [ 193 ] * state [ 22 ] + xx [ 65 ] * state [ 23 ] ; xx
[ 32 ] = xx [ 47 ] + xx [ 42 ] ; xx [ 43 ] = ( xx [ 67 ] + xx [ 14 ] * ( xx [
57 ] - xx [ 74 ] * xx [ 77 ] ) ) * state [ 21 ] + xx [ 194 ] * state [ 22 ] +
xx [ 68 ] * state [ 23 ] ; xx [ 45 ] = xx [ 48 ] + xx [ 43 ] ; xx [ 47 ] = xx
[ 14 ] * ( xx [ 58 ] - xx [ 74 ] * xx [ 33 ] ) * state [ 21 ] + xx [ 195 ] *
state [ 22 ] + xx [ 66 ] * state [ 23 ] ; xx [ 33 ] = xx [ 49 ] + xx [ 47 ] ;
pm_math_Vector3_cross_ra ( xx + 29 , xx + 208 , xx + 53 ) ; xx [ 29 ] = xx [
53 ] + xx [ 23 ] ; xx [ 30 ] = xx [ 54 ] + xx [ 27 ] ; xx [ 31 ] = xx [ 55 ]
+ xx [ 28 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 29 , xx +
53 ) ; xx [ 29 ] = xx [ 42 ] ; xx [ 30 ] = xx [ 43 ] ; xx [ 31 ] = xx [ 47 ]
; pm_math_Vector3_cross_ra ( xx + 78 , xx + 29 , xx + 47 ) ; xx [ 29 ] = xx [
53 ] + xx [ 47 ] ; xx [ 30 ] = xx [ 54 ] + xx [ 48 ] ; xx [ 31 ] = xx [ 55 ]
+ xx [ 49 ] ; xx [ 47 ] = xx [ 32 ] ; xx [ 48 ] = xx [ 45 ] ; xx [ 49 ] = xx
[ 33 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 103 , xx + 47 , xx + 53 )
; xx [ 42 ] = xx [ 85 ] * xx [ 106 ] - xx [ 86 ] * xx [ 105 ] ; xx [ 43 ] =
xx [ 106 ] + xx [ 86 ] * xx [ 104 ] ; xx [ 56 ] = xx [ 85 ] * xx [ 104 ] + xx
[ 105 ] ; xx [ 57 ] = xx [ 42 ] ; xx [ 58 ] = xx [ 43 ] ; xx [ 59 ] = - xx [
56 ] ; pm_math_Vector3_cross_ra ( xx + 104 , xx + 57 , xx + 65 ) ; xx [ 57 ]
= - xx [ 83 ] ; xx [ 58 ] = xx [ 88 ] ; xx [ 59 ] = xx [ 89 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 93 , xx + 57 , xx + 70 ) ; xx [ 57
] = ( xx [ 239 ] + xx [ 14 ] * ( xx [ 65 ] - xx [ 103 ] * xx [ 42 ] ) ) *
state [ 27 ] + xx [ 70 ] * state [ 28 ] + xx [ 87 ] * state [ 29 ] ; xx [ 42
] = xx [ 53 ] + xx [ 57 ] ; xx [ 58 ] = ( xx [ 14 ] * ( xx [ 66 ] - xx [ 103
] * xx [ 43 ] ) - xx [ 85 ] ) * state [ 27 ] + xx [ 71 ] * state [ 28 ] - xx
[ 91 ] * state [ 29 ] ; xx [ 43 ] = xx [ 54 ] + xx [ 58 ] ; xx [ 53 ] = ( xx
[ 14 ] * ( xx [ 67 ] + xx [ 103 ] * xx [ 56 ] ) - xx [ 86 ] ) * state [ 27 ]
+ xx [ 72 ] * state [ 28 ] + xx [ 92 ] * state [ 29 ] ; xx [ 54 ] = xx [ 55 ]
+ xx [ 53 ] ; pm_math_Vector3_cross_ra ( xx + 47 , xx + 216 , xx + 65 ) ; xx
[ 47 ] = xx [ 65 ] + xx [ 29 ] ; xx [ 48 ] = xx [ 66 ] + xx [ 30 ] ; xx [ 49
] = xx [ 67 ] + xx [ 31 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 103 ,
xx + 47 , xx + 65 ) ; xx [ 47 ] = xx [ 57 ] ; xx [ 48 ] = xx [ 58 ] ; xx [ 49
] = xx [ 53 ] ; pm_math_Vector3_cross_ra ( xx + 97 , xx + 47 , xx + 55 ) ; xx
[ 47 ] = xx [ 65 ] + xx [ 55 ] ; xx [ 48 ] = xx [ 66 ] + xx [ 56 ] ; xx [ 49
] = xx [ 67 ] + xx [ 57 ] ; xx [ 55 ] = xx [ 101 ] ; xx [ 56 ] = xx [ 108 ] ;
xx [ 57 ] = xx [ 109 ] ; xx [ 58 ] = xx [ 115 ] ; xx [ 65 ] = xx [ 42 ] ; xx
[ 66 ] = xx [ 43 ] ; xx [ 67 ] = xx [ 54 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 55 , xx + 65 , xx + 70 ) ; xx [ 78
] = xx [ 110 ] ; xx [ 79 ] = xx [ 112 ] ; xx [ 80 ] = - xx [ 113 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 55 , xx + 78 , xx + 85 ) ; xx [ 78
] = xx [ 107 ] ; xx [ 79 ] = xx [ 111 ] ; xx [ 80 ] = xx [ 116 ] ;
pm_math_Vector3_cross_ra ( xx + 65 , xx + 78 , xx + 91 ) ; xx [ 65 ] = xx [
91 ] + xx [ 47 ] ; xx [ 66 ] = xx [ 92 ] + xx [ 48 ] ; xx [ 67 ] = xx [ 93 ]
+ xx [ 49 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 55 , xx + 65 , xx +
78 ) ; xx [ 53 ] = 0.0 ; motionData [ 0 ] = xx [ 8 ] ; motionData [ 1 ] = xx
[ 4 ] ; motionData [ 2 ] = xx [ 13 ] ; motionData [ 3 ] = xx [ 5 ] ;
motionData [ 4 ] = - xx [ 15 ] ; motionData [ 5 ] = xx [ 12 ] ; motionData [
6 ] = xx [ 16 ] ; motionData [ 7 ] = xx [ 19 ] ; motionData [ 8 ] = xx [ 24 ]
; motionData [ 9 ] = xx [ 25 ] ; motionData [ 10 ] = xx [ 26 ] ; motionData [
11 ] = xx [ 37 ] ; motionData [ 12 ] = xx [ 39 ] ; motionData [ 13 ] = xx [
41 ] ; motionData [ 14 ] = xx [ 44 ] ; motionData [ 15 ] = xx [ 50 ] ;
motionData [ 16 ] = xx [ 51 ] ; motionData [ 17 ] = xx [ 52 ] ; motionData [
18 ] = xx [ 63 ] ; motionData [ 19 ] = xx [ 64 ] ; motionData [ 20 ] = xx [
60 ] ; motionData [ 21 ] = xx [ 74 ] ; motionData [ 22 ] = xx [ 75 ] ;
motionData [ 23 ] = xx [ 76 ] ; motionData [ 24 ] = xx [ 77 ] ; motionData [
25 ] = xx [ 69 ] ; motionData [ 26 ] = xx [ 84 ] ; motionData [ 27 ] = xx [
81 ] ; motionData [ 28 ] = xx [ 103 ] ; motionData [ 29 ] = xx [ 104 ] ;
motionData [ 30 ] = xx [ 105 ] ; motionData [ 31 ] = xx [ 106 ] ; motionData
[ 32 ] = xx [ 82 ] ; motionData [ 33 ] = xx [ 90 ] ; motionData [ 34 ] = xx [
100 ] ; motionData [ 35 ] = xx [ 101 ] ; motionData [ 36 ] = xx [ 108 ] ;
motionData [ 37 ] = xx [ 109 ] ; motionData [ 38 ] = xx [ 115 ] ; motionData
[ 39 ] = xx [ 107 ] ; motionData [ 40 ] = xx [ 111 ] ; motionData [ 41 ] = xx
[ 116 ] ; motionData [ 42 ] = xx [ 125 ] ; motionData [ 43 ] = - xx [ 118 ] ;
motionData [ 44 ] = xx [ 120 ] ; motionData [ 45 ] = - xx [ 117 ] ;
motionData [ 46 ] = xx [ 119 ] ; motionData [ 47 ] = xx [ 121 ] ; motionData
[ 48 ] = xx [ 122 ] ; motionData [ 49 ] = xx [ 134 ] ; motionData [ 50 ] = -
xx [ 127 ] ; motionData [ 51 ] = xx [ 129 ] ; motionData [ 52 ] = - xx [ 126
] ; motionData [ 53 ] = - xx [ 119 ] ; motionData [ 54 ] = xx [ 121 ] ;
motionData [ 55 ] = xx [ 122 ] ; motionData [ 56 ] = xx [ 140 ] ; motionData
[ 57 ] = - xx [ 130 ] ; motionData [ 58 ] = xx [ 135 ] ; motionData [ 59 ] =
- xx [ 128 ] ; motionData [ 60 ] = xx [ 131 ] ; motionData [ 61 ] = xx [ 136
] ; motionData [ 62 ] = xx [ 137 ] ; motionData [ 63 ] = xx [ 149 ] ;
motionData [ 64 ] = - xx [ 142 ] ; motionData [ 65 ] = xx [ 144 ] ;
motionData [ 66 ] = - xx [ 141 ] ; motionData [ 67 ] = - xx [ 131 ] ;
motionData [ 68 ] = xx [ 136 ] ; motionData [ 69 ] = xx [ 137 ] ; motionData
[ 70 ] = xx [ 155 ] ; motionData [ 71 ] = - xx [ 145 ] ; motionData [ 72 ] =
xx [ 150 ] ; motionData [ 73 ] = - xx [ 143 ] ; motionData [ 74 ] = xx [ 146
] ; motionData [ 75 ] = xx [ 151 ] ; motionData [ 76 ] = xx [ 152 ] ;
motionData [ 77 ] = xx [ 164 ] ; motionData [ 78 ] = - xx [ 157 ] ;
motionData [ 79 ] = xx [ 159 ] ; motionData [ 80 ] = - xx [ 156 ] ;
motionData [ 81 ] = xx [ 158 ] ; motionData [ 82 ] = xx [ 160 ] ; motionData
[ 83 ] = xx [ 161 ] ; motionData [ 84 ] = xx [ 173 ] ; motionData [ 85 ] = -
xx [ 166 ] ; motionData [ 86 ] = xx [ 168 ] ; motionData [ 87 ] = - xx [ 165
] ; motionData [ 88 ] = - xx [ 146 ] ; motionData [ 89 ] = xx [ 151 ] ;
motionData [ 90 ] = xx [ 152 ] ; motionData [ 91 ] = xx [ 179 ] ; motionData
[ 92 ] = - xx [ 169 ] ; motionData [ 93 ] = xx [ 174 ] ; motionData [ 94 ] =
- xx [ 167 ] ; motionData [ 95 ] = - xx [ 158 ] ; motionData [ 96 ] = xx [
160 ] ; motionData [ 97 ] = xx [ 161 ] ; motionData [ 98 ] = xx [ 184 ] ;
motionData [ 99 ] = - xx [ 175 ] ; motionData [ 100 ] = xx [ 180 ] ;
motionData [ 101 ] = - xx [ 170 ] ; motionData [ 102 ] = xx [ 158 ] ;
motionData [ 103 ] = xx [ 160 ] ; motionData [ 104 ] = xx [ 161 ] ;
motionData [ 105 ] = xx [ 189 ] ; motionData [ 106 ] = xx [ 190 ] ;
motionData [ 107 ] = xx [ 191 ] ; motionData [ 108 ] = xx [ 192 ] ;
motionData [ 109 ] = xx [ 176 ] ; motionData [ 110 ] = xx [ 181 ] ;
motionData [ 111 ] = xx [ 182 ] ; motionData [ 112 ] = xx [ 185 ] ;
motionData [ 113 ] = xx [ 186 ] ; motionData [ 114 ] = xx [ 187 ] ;
motionData [ 115 ] = xx [ 188 ] ; motionData [ 116 ] = xx [ 202 ] ;
motionData [ 117 ] = xx [ 203 ] ; motionData [ 118 ] = xx [ 199 ] ;
motionData [ 119 ] = xx [ 204 ] ; motionData [ 120 ] = xx [ 205 ] ;
motionData [ 121 ] = xx [ 206 ] ; motionData [ 122 ] = xx [ 207 ] ;
motionData [ 123 ] = xx [ 200 ] ; motionData [ 124 ] = xx [ 201 ] ;
motionData [ 125 ] = xx [ 211 ] ; motionData [ 126 ] = xx [ 212 ] ;
motionData [ 127 ] = xx [ 213 ] ; motionData [ 128 ] = xx [ 214 ] ;
motionData [ 129 ] = xx [ 215 ] ; motionData [ 130 ] = xx [ 219 ] + xx [ 200
] ; motionData [ 131 ] = xx [ 220 ] + xx [ 201 ] ; motionData [ 132 ] = xx [
221 ] + xx [ 211 ] ; motionData [ 133 ] = xx [ 222 ] ; motionData [ 134 ] =
xx [ 223 ] ; motionData [ 135 ] = xx [ 224 ] ; motionData [ 136 ] = xx [ 225
] ; motionData [ 137 ] = xx [ 229 ] ; motionData [ 138 ] = xx [ 61 ] ;
motionData [ 139 ] = xx [ 226 ] ; motionData [ 140 ] = xx [ 230 ] ;
motionData [ 141 ] = xx [ 231 ] ; motionData [ 142 ] = xx [ 232 ] ;
motionData [ 143 ] = xx [ 233 ] ; motionData [ 144 ] = xx [ 227 ] ;
motionData [ 145 ] = xx [ 228 ] ; motionData [ 146 ] = xx [ 234 ] ;
motionData [ 147 ] = xx [ 235 ] ; motionData [ 148 ] = xx [ 236 ] ;
motionData [ 149 ] = xx [ 237 ] ; motionData [ 150 ] = xx [ 238 ] ;
motionData [ 151 ] = xx [ 242 ] - xx [ 34 ] ; motionData [ 152 ] = xx [ 243 ]
- xx [ 35 ] + xx [ 38 ] ; motionData [ 153 ] = xx [ 244 ] - xx [ 36 ] + xx [
40 ] ; motionData [ 154 ] = xx [ 241 ] ; motionData [ 155 ] = xx [ 2 ] ;
motionData [ 156 ] = xx [ 3 ] ; motionData [ 157 ] = xx [ 1 ] ; motionData [
158 ] = - xx [ 6 ] ; motionData [ 159 ] = - xx [ 7 ] ; motionData [ 160 ] =
xx [ 20 ] ; motionData [ 161 ] = xx [ 21 ] ; motionData [ 162 ] = xx [ 17 ] ;
motionData [ 163 ] = xx [ 9 ] ; motionData [ 164 ] = xx [ 10 ] ; motionData [
165 ] = xx [ 11 ] ; motionData [ 166 ] = xx [ 18 ] ; motionData [ 167 ] = xx
[ 46 ] ; motionData [ 168 ] = xx [ 22 ] ; motionData [ 169 ] = xx [ 23 ] ;
motionData [ 170 ] = xx [ 27 ] ; motionData [ 171 ] = xx [ 28 ] ; motionData
[ 172 ] = xx [ 32 ] ; motionData [ 173 ] = xx [ 45 ] ; motionData [ 174 ] =
xx [ 33 ] ; motionData [ 175 ] = xx [ 29 ] ; motionData [ 176 ] = xx [ 30 ] ;
motionData [ 177 ] = xx [ 31 ] ; motionData [ 178 ] = xx [ 42 ] ; motionData
[ 179 ] = xx [ 43 ] ; motionData [ 180 ] = xx [ 54 ] ; motionData [ 181 ] =
xx [ 47 ] ; motionData [ 182 ] = xx [ 48 ] ; motionData [ 183 ] = xx [ 49 ] ;
motionData [ 184 ] = xx [ 70 ] + xx [ 85 ] * state [ 33 ] + xx [ 14 ] * xx [
102 ] * xx [ 114 ] * state [ 34 ] ; motionData [ 185 ] = xx [ 71 ] + xx [ 86
] * state [ 33 ] + ( xx [ 239 ] - xx [ 14 ] * xx [ 114 ] * xx [ 114 ] ) *
state [ 34 ] ; motionData [ 186 ] = xx [ 72 ] + xx [ 87 ] * state [ 33 ] +
state [ 35 ] ; motionData [ 187 ] = xx [ 78 ] ; motionData [ 188 ] = xx [ 79
] ; motionData [ 189 ] = xx [ 80 ] ; motionData [ 190 ] = ( xx [ 239 ] - ( xx
[ 120 ] * xx [ 120 ] + xx [ 117 ] * xx [ 117 ] ) * xx [ 14 ] ) * state [ 39 ]
+ xx [ 14 ] * xx [ 124 ] * xx [ 123 ] * state [ 40 ] ; motionData [ 191 ] =
xx [ 14 ] * ( xx [ 117 ] * xx [ 125 ] - xx [ 118 ] * xx [ 120 ] ) * state [
39 ] + ( xx [ 239 ] - xx [ 14 ] * xx [ 123 ] * xx [ 123 ] ) * state [ 40 ] ;
motionData [ 192 ] = xx [ 14 ] * ( xx [ 120 ] * xx [ 125 ] + xx [ 118 ] * xx
[ 117 ] ) * state [ 39 ] + state [ 41 ] ; motionData [ 193 ] = xx [ 53 ] ;
motionData [ 194 ] = xx [ 53 ] ; motionData [ 195 ] = xx [ 53 ] ; motionData
[ 196 ] = ( xx [ 239 ] - ( xx [ 129 ] * xx [ 129 ] + xx [ 126 ] * xx [ 126 ]
) * xx [ 14 ] ) * state [ 45 ] + xx [ 14 ] * xx [ 133 ] * xx [ 132 ] * state
[ 46 ] ; motionData [ 197 ] = xx [ 14 ] * ( xx [ 126 ] * xx [ 134 ] - xx [
127 ] * xx [ 129 ] ) * state [ 45 ] + ( xx [ 239 ] - xx [ 14 ] * xx [ 132 ] *
xx [ 132 ] ) * state [ 46 ] ; motionData [ 198 ] = xx [ 14 ] * ( xx [ 129 ] *
xx [ 134 ] + xx [ 127 ] * xx [ 126 ] ) * state [ 45 ] + state [ 47 ] ;
motionData [ 199 ] = xx [ 53 ] ; motionData [ 200 ] = xx [ 53 ] ; motionData
[ 201 ] = xx [ 53 ] ; motionData [ 202 ] = ( xx [ 239 ] - ( xx [ 135 ] * xx [
135 ] + xx [ 128 ] * xx [ 128 ] ) * xx [ 14 ] ) * state [ 51 ] + xx [ 14 ] *
xx [ 139 ] * xx [ 138 ] * state [ 52 ] ; motionData [ 203 ] = xx [ 14 ] * (
xx [ 128 ] * xx [ 140 ] - xx [ 130 ] * xx [ 135 ] ) * state [ 51 ] + ( xx [
239 ] - xx [ 14 ] * xx [ 138 ] * xx [ 138 ] ) * state [ 52 ] ; motionData [
204 ] = xx [ 14 ] * ( xx [ 135 ] * xx [ 140 ] + xx [ 130 ] * xx [ 128 ] ) *
state [ 51 ] + state [ 53 ] ; motionData [ 205 ] = xx [ 53 ] ; motionData [
206 ] = xx [ 53 ] ; motionData [ 207 ] = xx [ 53 ] ; motionData [ 208 ] = (
xx [ 239 ] - ( xx [ 144 ] * xx [ 144 ] + xx [ 141 ] * xx [ 141 ] ) * xx [ 14
] ) * state [ 57 ] + xx [ 14 ] * xx [ 148 ] * xx [ 147 ] * state [ 58 ] ;
motionData [ 209 ] = xx [ 14 ] * ( xx [ 141 ] * xx [ 149 ] - xx [ 142 ] * xx
[ 144 ] ) * state [ 57 ] + ( xx [ 239 ] - xx [ 14 ] * xx [ 147 ] * xx [ 147 ]
) * state [ 58 ] ; motionData [ 210 ] = xx [ 14 ] * ( xx [ 144 ] * xx [ 149 ]
+ xx [ 142 ] * xx [ 141 ] ) * state [ 57 ] + state [ 59 ] ; motionData [ 211
] = xx [ 53 ] ; motionData [ 212 ] = xx [ 53 ] ; motionData [ 213 ] = xx [ 53
] ; motionData [ 214 ] = ( xx [ 239 ] - ( xx [ 150 ] * xx [ 150 ] + xx [ 143
] * xx [ 143 ] ) * xx [ 14 ] ) * state [ 63 ] + xx [ 14 ] * xx [ 154 ] * xx [
153 ] * state [ 64 ] ; motionData [ 215 ] = xx [ 14 ] * ( xx [ 143 ] * xx [
155 ] - xx [ 145 ] * xx [ 150 ] ) * state [ 63 ] + ( xx [ 239 ] - xx [ 14 ] *
xx [ 153 ] * xx [ 153 ] ) * state [ 64 ] ; motionData [ 216 ] = xx [ 14 ] * (
xx [ 150 ] * xx [ 155 ] + xx [ 145 ] * xx [ 143 ] ) * state [ 63 ] + state [
65 ] ; motionData [ 217 ] = xx [ 53 ] ; motionData [ 218 ] = xx [ 53 ] ;
motionData [ 219 ] = xx [ 53 ] ; motionData [ 220 ] = ( xx [ 239 ] - ( xx [
159 ] * xx [ 159 ] + xx [ 156 ] * xx [ 156 ] ) * xx [ 14 ] ) * state [ 69 ] +
xx [ 14 ] * xx [ 163 ] * xx [ 162 ] * state [ 70 ] ; motionData [ 221 ] = xx
[ 14 ] * ( xx [ 156 ] * xx [ 164 ] - xx [ 157 ] * xx [ 159 ] ) * state [ 69 ]
+ ( xx [ 239 ] - xx [ 14 ] * xx [ 162 ] * xx [ 162 ] ) * state [ 70 ] ;
motionData [ 222 ] = xx [ 14 ] * ( xx [ 159 ] * xx [ 164 ] + xx [ 157 ] * xx
[ 156 ] ) * state [ 69 ] + state [ 71 ] ; motionData [ 223 ] = xx [ 53 ] ;
motionData [ 224 ] = xx [ 53 ] ; motionData [ 225 ] = xx [ 53 ] ; motionData
[ 226 ] = ( xx [ 239 ] - ( xx [ 168 ] * xx [ 168 ] + xx [ 165 ] * xx [ 165 ]
) * xx [ 14 ] ) * state [ 75 ] + xx [ 14 ] * xx [ 172 ] * xx [ 171 ] * state
[ 76 ] ; motionData [ 227 ] = xx [ 14 ] * ( xx [ 165 ] * xx [ 173 ] - xx [
166 ] * xx [ 168 ] ) * state [ 75 ] + ( xx [ 239 ] - xx [ 14 ] * xx [ 171 ] *
xx [ 171 ] ) * state [ 76 ] ; motionData [ 228 ] = xx [ 14 ] * ( xx [ 168 ] *
xx [ 173 ] + xx [ 166 ] * xx [ 165 ] ) * state [ 75 ] + state [ 77 ] ;
motionData [ 229 ] = xx [ 53 ] ; motionData [ 230 ] = xx [ 53 ] ; motionData
[ 231 ] = xx [ 53 ] ; motionData [ 232 ] = ( xx [ 239 ] - ( xx [ 174 ] * xx [
174 ] + xx [ 167 ] * xx [ 167 ] ) * xx [ 14 ] ) * state [ 81 ] + xx [ 14 ] *
xx [ 178 ] * xx [ 177 ] * state [ 82 ] ; motionData [ 233 ] = xx [ 14 ] * (
xx [ 167 ] * xx [ 179 ] - xx [ 169 ] * xx [ 174 ] ) * state [ 81 ] + ( xx [
239 ] - xx [ 14 ] * xx [ 177 ] * xx [ 177 ] ) * state [ 82 ] ; motionData [
234 ] = xx [ 14 ] * ( xx [ 174 ] * xx [ 179 ] + xx [ 169 ] * xx [ 167 ] ) *
state [ 81 ] + state [ 83 ] ; motionData [ 235 ] = xx [ 53 ] ; motionData [
236 ] = xx [ 53 ] ; motionData [ 237 ] = xx [ 53 ] ; motionData [ 238 ] = (
xx [ 239 ] - ( xx [ 180 ] * xx [ 180 ] + xx [ 170 ] * xx [ 170 ] ) * xx [ 14
] ) * state [ 87 ] + xx [ 14 ] * xx [ 183 ] * xx [ 0 ] * state [ 88 ] ;
motionData [ 239 ] = xx [ 14 ] * ( xx [ 170 ] * xx [ 184 ] - xx [ 175 ] * xx
[ 180 ] ) * state [ 87 ] + ( xx [ 239 ] - xx [ 14 ] * xx [ 0 ] * xx [ 0 ] ) *
state [ 88 ] ; motionData [ 240 ] = xx [ 14 ] * ( xx [ 180 ] * xx [ 184 ] +
xx [ 175 ] * xx [ 170 ] ) * state [ 87 ] + state [ 89 ] ; motionData [ 241 ]
= xx [ 53 ] ; motionData [ 242 ] = xx [ 53 ] ; motionData [ 243 ] = xx [ 53 ]
; } static size_t computeAssemblyError_0 ( const RuntimeDerivedValuesBundle *
rtdv , const int * modeVector , const double * motionData , double * error )
{ const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi =
rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
modeVector ; ( void ) motionData ; ( void ) error ; return 0 ; } static
size_t computeAssemblyError_1 ( const RuntimeDerivedValuesBundle * rtdv ,
const int * modeVector , const double * motionData , double * error ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; (
void ) motionData ; ( void ) error ; return 0 ; } size_t
draft7_a151ee3d_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData , double * error ) { ( void ) mech ; (
void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void ) error ;
switch ( constraintIdx ) { case 0 : return computeAssemblyError_0 ( rtdv ,
modeVector , motionData , error ) ; case 1 : return computeAssemblyError_1 (
rtdv , modeVector , motionData , error ) ; } return 0 ; } static size_t
computeAssemblyJacobian_0 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state
; ( void ) modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; }
static size_t computeAssemblyJacobian_1 ( const RuntimeDerivedValuesBundle *
rtdv , const double * state , const int * modeVector , const double *
motionData , double * J ) { const double * rtdvd = rtdv -> mDoubles . mValues
; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) state ; ( void ) modeVector ; ( void ) motionData ; ( void )
J ; return 0 ; } size_t draft7_a151ee3d_1_computeAssemblyJacobian ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx
, boolean_T forVelocitySatisfaction , const double * state , const int *
modeVector , const double * motionData , double * J ) { ( void ) mech ; (
void ) rtdv ; ( void ) state ; ( void ) modeVector ; ( void )
forVelocitySatisfaction ; ( void ) motionData ; ( void ) J ; switch (
constraintIdx ) { case 0 : return computeAssemblyJacobian_0 ( rtdv , state ,
modeVector , motionData , J ) ; case 1 : return computeAssemblyJacobian_1 (
rtdv , state , modeVector , motionData , J ) ; } return 0 ; } size_t
draft7_a151ee3d_1_computeFullAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void )
modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; } static boolean_T
isInKinematicSingularity_0 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double
xx [ 12 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx [ 0 ]
= - motionData [ 126 ] ; xx [ 1 ] = - motionData [ 127 ] ; xx [ 2 ] = -
motionData [ 128 ] ; xx [ 3 ] = - motionData [ 129 ] ; xx [ 4 ] =
0.9993181225840584 ; xx [ 5 ] = 0.03619150900402053 ; xx [ 6 ] =
5.246456256884902e-3 ; xx [ 7 ] = 5.093058789132701e-3 ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 4 , xx + 8 ) ; return fabs ( (
xx [ 9 ] * xx [ 11 ] + xx [ 8 ] * xx [ 10 ] ) * 2.0 ) > 0.99999999999999 ; }
static boolean_T isInKinematicSingularity_1 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 12 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) modeVector ; xx [ 0 ] = - motionData [ 126 ] ; xx [ 1
] = - motionData [ 127 ] ; xx [ 2 ] = - motionData [ 128 ] ; xx [ 3 ] = -
motionData [ 129 ] ; xx [ 4 ] = 0.9958524573065585 ; xx [ 5 ] = -
0.09068858100887965 ; xx [ 6 ] = 4.55902949587172e-3 ; xx [ 7 ] =
5.716624978144062e-3 ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 4 , xx +
8 ) ; return fabs ( ( xx [ 9 ] * xx [ 11 ] + xx [ 8 ] * xx [ 10 ] ) * 2.0 ) >
0.99999999999999 ; } boolean_T draft7_a151ee3d_1_isInKinematicSingularity (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , size_t
constraintIdx , const int * modeVector , const double * motionData ) { ( void
) mech ; ( void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; switch (
constraintIdx ) { case 0 : return isInKinematicSingularity_0 ( rtdv ,
modeVector , motionData ) ; case 1 : return isInKinematicSingularity_1 ( rtdv
, modeVector , motionData ) ; } return 0 ; } void
draft7_a151ee3d_1_convertStateVector ( const void * asmMech , const
RuntimeDerivedValuesBundle * rtdv , const void * simMech , const double *
asmState , const int * asmModeVector , const int * simModeVector , double *
simState ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; ( void ) asmMech ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ; ( void ) simModeVector
; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ] ;
simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ; simState
[ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState [ 6 ] =
asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState [ 8 ] = asmState
[ 8 ] ; simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] = asmState [ 10 ] ;
simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] = asmState [ 12 ] ;
simState [ 13 ] = asmState [ 13 ] ; simState [ 14 ] = asmState [ 14 ] ;
simState [ 15 ] = asmState [ 15 ] ; simState [ 16 ] = asmState [ 16 ] ;
simState [ 17 ] = asmState [ 17 ] ; simState [ 18 ] = asmState [ 18 ] ;
simState [ 19 ] = asmState [ 19 ] ; simState [ 20 ] = asmState [ 20 ] ;
simState [ 21 ] = asmState [ 21 ] ; simState [ 22 ] = asmState [ 22 ] ;
simState [ 23 ] = asmState [ 23 ] ; simState [ 24 ] = asmState [ 24 ] ;
simState [ 25 ] = asmState [ 25 ] ; simState [ 26 ] = asmState [ 26 ] ;
simState [ 27 ] = asmState [ 27 ] ; simState [ 28 ] = asmState [ 28 ] ;
simState [ 29 ] = asmState [ 29 ] ; simState [ 30 ] = asmState [ 30 ] ;
simState [ 31 ] = asmState [ 31 ] ; simState [ 32 ] = asmState [ 32 ] ;
simState [ 33 ] = asmState [ 33 ] ; simState [ 34 ] = asmState [ 34 ] ;
simState [ 35 ] = asmState [ 35 ] ; simState [ 36 ] = asmState [ 36 ] ;
simState [ 37 ] = asmState [ 37 ] ; simState [ 38 ] = asmState [ 38 ] ;
simState [ 39 ] = asmState [ 39 ] ; simState [ 40 ] = asmState [ 40 ] ;
simState [ 41 ] = asmState [ 41 ] ; simState [ 42 ] = asmState [ 42 ] ;
simState [ 43 ] = asmState [ 43 ] ; simState [ 44 ] = asmState [ 44 ] ;
simState [ 45 ] = asmState [ 45 ] ; simState [ 46 ] = asmState [ 46 ] ;
simState [ 47 ] = asmState [ 47 ] ; simState [ 48 ] = asmState [ 48 ] ;
simState [ 49 ] = asmState [ 49 ] ; simState [ 50 ] = asmState [ 50 ] ;
simState [ 51 ] = asmState [ 51 ] ; simState [ 52 ] = asmState [ 52 ] ;
simState [ 53 ] = asmState [ 53 ] ; simState [ 54 ] = asmState [ 54 ] ;
simState [ 55 ] = asmState [ 55 ] ; simState [ 56 ] = asmState [ 56 ] ;
simState [ 57 ] = asmState [ 57 ] ; simState [ 58 ] = asmState [ 58 ] ;
simState [ 59 ] = asmState [ 59 ] ; simState [ 60 ] = asmState [ 60 ] ;
simState [ 61 ] = asmState [ 61 ] ; simState [ 62 ] = asmState [ 62 ] ;
simState [ 63 ] = asmState [ 63 ] ; simState [ 64 ] = asmState [ 64 ] ;
simState [ 65 ] = asmState [ 65 ] ; simState [ 66 ] = asmState [ 66 ] ;
simState [ 67 ] = asmState [ 67 ] ; simState [ 68 ] = asmState [ 68 ] ;
simState [ 69 ] = asmState [ 69 ] ; simState [ 70 ] = asmState [ 70 ] ;
simState [ 71 ] = asmState [ 71 ] ; simState [ 72 ] = asmState [ 72 ] ;
simState [ 73 ] = asmState [ 73 ] ; simState [ 74 ] = asmState [ 74 ] ;
simState [ 75 ] = asmState [ 75 ] ; simState [ 76 ] = asmState [ 76 ] ;
simState [ 77 ] = asmState [ 77 ] ; simState [ 78 ] = asmState [ 78 ] ;
simState [ 79 ] = asmState [ 79 ] ; simState [ 80 ] = asmState [ 80 ] ;
simState [ 81 ] = asmState [ 81 ] ; simState [ 82 ] = asmState [ 82 ] ;
simState [ 83 ] = asmState [ 83 ] ; simState [ 84 ] = asmState [ 84 ] ;
simState [ 85 ] = asmState [ 85 ] ; simState [ 86 ] = asmState [ 86 ] ;
simState [ 87 ] = asmState [ 87 ] ; simState [ 88 ] = asmState [ 88 ] ;
simState [ 89 ] = asmState [ 89 ] ; simState [ 90 ] = asmState [ 90 ] ;
simState [ 91 ] = asmState [ 91 ] ; simState [ 92 ] = asmState [ 92 ] ;
simState [ 93 ] = asmState [ 93 ] ; simState [ 94 ] = asmState [ 94 ] ;
simState [ 95 ] = asmState [ 95 ] ; simState [ 96 ] = asmState [ 96 ] ;
simState [ 97 ] = asmState [ 97 ] ; simState [ 98 ] = asmState [ 98 ] ;
simState [ 99 ] = asmState [ 99 ] ; simState [ 100 ] = asmState [ 100 ] ;
simState [ 101 ] = asmState [ 101 ] ; }
