#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void untitled_1a62e0cc_1_setTargets ( const RuntimeDerivedValuesBundle * rtdv
, CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
untitled_1a62e0cc_1_resetAsmStateVector ( const void * mech , double * state
) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx [ 0 ]
; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = 1.0 ; state
[ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0 ] ; state [
7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ] ; state [ 10
] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ] ; } void
untitled_1a62e0cc_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * state ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector ; ( void
) motionData ; } void untitled_1a62e0cc_1_computeDiscreteState ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , double * state ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
state ; } void untitled_1a62e0cc_1_adjustPosition ( const void * mech , const
double * dofDeltas , double * state ) { double xx [ 11 ] ; ( void ) mech ; xx
[ 0 ] = state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [
3 ] = state [ 6 ] ; xx [ 4 ] = dofDeltas [ 3 ] ; xx [ 5 ] = dofDeltas [ 4 ] ;
xx [ 6 ] = dofDeltas [ 5 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 0 , xx +
4 , xx + 7 ) ; xx [ 0 ] = state [ 3 ] + xx [ 7 ] ; xx [ 1 ] = state [ 4 ] +
xx [ 8 ] ; xx [ 2 ] = state [ 5 ] + xx [ 9 ] ; xx [ 3 ] = state [ 6 ] + xx [
10 ] ; xx [ 4 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 1 ] * xx [ 1 ] + xx [ 2 ]
* xx [ 2 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 5 ] = 1.0e-64 ; if ( xx [ 5 ] > xx
[ 4 ] ) xx [ 4 ] = xx [ 5 ] ; state [ 0 ] = state [ 0 ] + dofDeltas [ 0 ] ;
state [ 1 ] = state [ 1 ] + dofDeltas [ 1 ] ; state [ 2 ] = state [ 2 ] +
dofDeltas [ 2 ] ; state [ 3 ] = xx [ 0 ] / xx [ 4 ] ; state [ 4 ] = xx [ 1 ]
/ xx [ 4 ] ; state [ 5 ] = xx [ 2 ] / xx [ 4 ] ; state [ 6 ] = xx [ 3 ] / xx
[ 4 ] ; } static void perturbAsmJointPrimitiveState_0_0 ( double mag , double
* state ) { state [ 0 ] = state [ 0 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_1 ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_1v ( double mag , double * state ) { state [
1 ] = state [ 1 ] + mag ; state [ 8 ] = state [ 8 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_2 ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_0_3 ( double mag , double * state ) {
double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [
0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ]
) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx
[ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [
4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 :
xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] ==
0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5
] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx
[ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [
8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx
[ 0 ] = state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [
3 ] = state [ 6 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0 , xx + 4
) ; state [ 3 ] = xx [ 4 ] ; state [ 4 ] = xx [ 5 ] ; state [ 5 ] = xx [ 6 ]
; state [ 6 ] = xx [ 7 ] ; } static void perturbAsmJointPrimitiveState_0_3v (
double mag , double * state ) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ]
= fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) +
1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ]
= sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ;
xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx
[ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ]
= xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [
3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2
] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx
[ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] = state [ 3 ] ; xx [ 4 ] = state [ 4
] ; xx [ 5 ] = state [ 5 ] ; xx [ 6 ] = state [ 6 ] ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ; state [ 3 ] =
xx [ 7 ] ; state [ 4 ] = xx [ 8 ] ; state [ 5 ] = xx [ 9 ] ; state [ 6 ] = xx
[ 10 ] ; state [ 10 ] = state [ 10 ] + 1.2 * mag ; state [ 11 ] = state [ 11
] - xx [ 2 ] ; state [ 12 ] = state [ 12 ] + 0.9 * mag ; } void
untitled_1a62e0cc_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 2 :
perturbAsmJointPrimitiveState_0_1 ( mag , state ) ; break ; case 3 :
perturbAsmJointPrimitiveState_0_1v ( mag , state ) ; break ; case 4 :
perturbAsmJointPrimitiveState_0_2 ( mag , state ) ; break ; case 5 :
perturbAsmJointPrimitiveState_0_2v ( mag , state ) ; break ; case 6 :
perturbAsmJointPrimitiveState_0_3 ( mag , state ) ; break ; case 7 :
perturbAsmJointPrimitiveState_0_3v ( mag , state ) ; break ; } } static void
computePosDofBlendMatrix_0_3 ( const double * state , int partialType ,
double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 2.0
; xx [ 2 ] = xx [ 1 ] * ( state [ 4 ] * state [ 5 ] - state [ 3 ] * state [ 6
] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ] = ( state [
3 ] * state [ 3 ] + state [ 4 ] * state [ 4 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [
6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8
] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx
[ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx
[ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state [ 4 ] * state [ 6 ]
+ state [ 3 ] * state [ 5 ] ) * xx [ 1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] + xx [
11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ]
; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ; xx [
17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6 ] =
xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ] /
xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3 ]
= xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [
14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] =
xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + ( partialType ) ] ; xx
[ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 10 ]
; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [
17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] = xx [ 12 + ( partialType
) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ]
+ xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [
5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ;
xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7
] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10
] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ;
xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + ( partialType ) ] ; xx [ 9 ] =
xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13
] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx
[ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [ 11 + ( partialType ) ] ;
matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ; matrix [ 2 ] = xx [ 1 ] ;
matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ; matrix [ 5 ] = xx [ 0 ] ;
matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ; matrix [ 8 ] = xx [ 8 ] ;
} void untitled_1a62e0cc_1_computePosDofBlendMatrix ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * state , int partialType ,
double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx *
6 + primIdx ) ) { case 3 : computePosDofBlendMatrix_0_3 ( state , partialType
, matrix ) ; break ; } } static void computeVelDofBlendMatrix_0_3 ( const
double * state , int partialType , double * matrix ) { double xx [ 15 ] ; (
void ) state ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [
4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [
2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
11 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
0 ] = xx [ 3 + ( partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] =
xx [ 11 ] ; matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4
] = xx [ 14 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [
7 ] = xx [ 13 ] ; matrix [ 8 ] = xx [ 13 ] ; } void
untitled_1a62e0cc_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { case 3 : computeVelDofBlendMatrix_0_3 ( state , partialType ,
matrix ) ; break ; } } static void projectPartiallyTargetedPos_0_3 ( const
double * origState , int partialType , double * state ) { boolean_T bb [ 2 ]
; double xx [ 17 ] ; xx [ 0 ] = 2.0 ; xx [ 1 ] = ( state [ 4 ] * state [ 6 ]
+ state [ 3 ] * state [ 5 ] ) * xx [ 0 ] ; xx [ 2 ] = 0.99999999999999 ; bb [
0 ] = fabs ( xx [ 1 ] ) > xx [ 2 ] ; xx [ 3 ] = 1.570796326794897 ; if ( xx [
1 ] < 0.0 ) xx [ 4 ] = - 1.0 ; else if ( xx [ 1 ] > 0.0 ) xx [ 4 ] = + 1.0 ;
else xx [ 4 ] = 0.0 ; xx [ 5 ] = fabs ( xx [ 1 ] ) > 1.0 ? atan2 ( xx [ 1 ] ,
0.0 ) : asin ( xx [ 1 ] ) ; xx [ 1 ] = bb [ 0 ] ? xx [ 3 ] * xx [ 4 ] : xx [
5 ] ; xx [ 5 ] = ( origState [ 4 ] * origState [ 6 ] + origState [ 3 ] *
origState [ 5 ] ) * xx [ 0 ] ; bb [ 1 ] = fabs ( xx [ 5 ] ) > xx [ 2 ] ; if (
xx [ 5 ] < 0.0 ) xx [ 2 ] = - 1.0 ; else if ( xx [ 5 ] > 0.0 ) xx [ 2 ] = +
1.0 ; else xx [ 2 ] = 0.0 ; xx [ 6 ] = fabs ( xx [ 5 ] ) > 1.0 ? atan2 ( xx [
5 ] , 0.0 ) : asin ( xx [ 5 ] ) ; xx [ 5 ] = bb [ 1 ] ? xx [ 3 ] * xx [ 2 ] :
xx [ 6 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 5 ] ;
xx [ 9 ] = xx [ 5 ] ; xx [ 10 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 1 ] ; xx [ 12 ]
= xx [ 5 ] ; xx [ 1 ] = xx [ 6 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1
] ) ; xx [ 5 ] = 0.5 ; xx [ 6 ] = state [ 5 ] * state [ 6 ] ; xx [ 7 ] =
state [ 3 ] * state [ 4 ] ; xx [ 8 ] = state [ 3 ] * state [ 3 ] ; xx [ 9 ] =
1.0 ; xx [ 10 ] = ( xx [ 8 ] + state [ 5 ] * state [ 5 ] ) * xx [ 0 ] - xx [
9 ] ; xx [ 11 ] = ( xx [ 6 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 10 ] = ( xx [ 11
] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 11 ] , xx [ 10 ] ) ; xx [
11 ] = ( xx [ 8 ] + state [ 6 ] * state [ 6 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [
12 ] = - ( xx [ 0 ] * ( xx [ 6 ] - xx [ 7 ] ) ) ; xx [ 11 ] = ( xx [ 12 ] ==
0.0 && xx [ 11 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 6 ]
= bb [ 0 ] ? xx [ 5 ] * xx [ 10 ] : xx [ 11 ] ; xx [ 7 ] = ( xx [ 8 ] + state
[ 4 ] * state [ 4 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 10 ] = - ( xx [ 0 ] * (
state [ 4 ] * state [ 5 ] - state [ 3 ] * state [ 6 ] ) ) ; xx [ 7 ] = ( xx [
10 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 10 ] , xx [ 7 ] ) ; xx
[ 8 ] = bb [ 0 ] ? xx [ 4 ] * xx [ 6 ] : xx [ 7 ] ; xx [ 4 ] = origState [ 5
] * origState [ 6 ] ; xx [ 7 ] = origState [ 3 ] * origState [ 4 ] ; xx [ 10
] = origState [ 3 ] * origState [ 3 ] ; xx [ 11 ] = ( xx [ 10 ] + origState [
5 ] * origState [ 5 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 12 ] = ( xx [ 4 ] + xx [
7 ] ) * xx [ 0 ] ; xx [ 11 ] = ( xx [ 12 ] == 0.0 && xx [ 11 ] == 0.0 ) ? 0.0
: atan2 ( xx [ 12 ] , xx [ 11 ] ) ; xx [ 12 ] = ( xx [ 10 ] + origState [ 6 ]
* origState [ 6 ] ) * xx [ 0 ] - xx [ 9 ] ; xx [ 13 ] = - ( xx [ 0 ] * ( xx [
4 ] - xx [ 7 ] ) ) ; xx [ 12 ] = ( xx [ 13 ] == 0.0 && xx [ 12 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 13 ] , xx [ 12 ] ) ; xx [ 4 ] = bb [ 1 ] ? xx [ 5 ] * xx [
11 ] : xx [ 12 ] ; xx [ 5 ] = ( xx [ 10 ] + origState [ 4 ] * origState [ 4 ]
) * xx [ 0 ] - xx [ 9 ] ; xx [ 7 ] = - ( xx [ 0 ] * ( origState [ 4 ] *
origState [ 5 ] - origState [ 3 ] * origState [ 6 ] ) ) ; xx [ 5 ] = ( xx [ 7
] == 0.0 && xx [ 5 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 7 ] , xx [ 5 ] ) ; xx [ 0
] = bb [ 1 ] ? xx [ 2 ] * xx [ 4 ] : xx [ 5 ] ; xx [ 9 ] = xx [ 8 ] ; xx [ 10
] = xx [ 8 ] ; xx [ 11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [
0 ] ; xx [ 14 ] = xx [ 0 ] ; xx [ 15 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 9 + (
partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ;
xx [ 0 ] = sin ( xx [ 1 ] ) ; xx [ 7 ] = xx [ 6 ] ; xx [ 8 ] = xx [ 4 ] ; xx
[ 9 ] = xx [ 6 ] ; xx [ 10 ] = xx [ 4 ] ; xx [ 11 ] = xx [ 6 ] ; xx [ 12 ] =
xx [ 4 ] ; xx [ 13 ] = xx [ 6 ] ; xx [ 1 ] = xx [ 7 + ( partialType ) ] ; xx
[ 4 ] = cos ( xx [ 1 ] ) ; xx [ 6 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 2 ]
* xx [ 6 ] ; xx [ 7 ] = xx [ 4 ] * xx [ 2 ] ; xx [ 8 ] = xx [ 3 ] * xx [ 2 ]
; xx [ 9 ] = - ( xx [ 3 ] * xx [ 5 ] ) ; xx [ 10 ] = xx [ 0 ] ; xx [ 11 ] =
xx [ 4 ] * xx [ 5 ] + xx [ 1 ] * xx [ 0 ] ; xx [ 12 ] = xx [ 7 ] - xx [ 6 ] *
xx [ 0 ] * xx [ 5 ] ; xx [ 13 ] = - ( xx [ 3 ] * xx [ 6 ] ) ; xx [ 14 ] = xx
[ 6 ] * xx [ 5 ] - xx [ 7 ] * xx [ 0 ] ; xx [ 15 ] = xx [ 1 ] + xx [ 4 ] * xx
[ 0 ] * xx [ 5 ] ; xx [ 16 ] = xx [ 4 ] * xx [ 3 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 8 , xx + 0 ) ; state [ 3 ] = xx [
0 ] ; state [ 4 ] = xx [ 1 ] ; state [ 5 ] = xx [ 2 ] ; state [ 6 ] = xx [ 3
] ; } void untitled_1a62e0cc_1_projectPartiallyTargetedPos ( const void *
mech , size_t stageIdx , size_t primIdx , const double * origState , int
partialType , double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void )
primIdx ; ( void ) origState ; ( void ) partialType ; ( void ) state ; switch
( ( stageIdx * 6 + primIdx ) ) { case 3 : projectPartiallyTargetedPos_0_3 (
origState , partialType , state ) ; break ; } } void
untitled_1a62e0cc_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 21 ] ; ( void ) mech ; ( void
) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = state [ 3 ] ; xx [ 1 ] = state [ 4 ] ;
xx [ 2 ] = state [ 5 ] ; xx [ 3 ] = state [ 6 ] ; xx [ 4 ] =
0.889608045184854 ; xx [ 5 ] = - 0.3564680111741521 ; xx [ 6 ] = -
0.2853959205535299 ; xx [ 7 ] = 8.789282298961688e-3 ;
pm_math_Quaternion_composeInverse_ra ( xx + 0 , xx + 4 , xx + 8 ) ; xx [ 0 ]
= 0.6135521146467586 ; xx [ 1 ] = 0.7630384674237647 ; xx [ 2 ] =
0.5452091182896963 ; xx [ 12 ] = xx [ 0 ] ; xx [ 13 ] = - xx [ 1 ] ; xx [ 14
] = - xx [ 2 ] ; pm_math_Quaternion_xform_ra ( xx + 8 , xx + 12 , xx + 15 ) ;
xx [ 12 ] = state [ 10 ] ; xx [ 13 ] = state [ 11 ] ; xx [ 14 ] = state [ 12
] ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 12 , xx + 18 ) ; xx [ 3 ] =
state [ 7 ] ; xx [ 4 ] = state [ 8 ] ; xx [ 5 ] = state [ 9 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 8 , xx + 3 , xx + 12 ) ; xx [ 3 ] =
- xx [ 0 ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ;
pm_math_Vector3_cross_ra ( xx + 18 , xx + 3 , xx + 0 ) ; motionData [ 0 ] =
xx [ 8 ] ; motionData [ 1 ] = xx [ 9 ] ; motionData [ 2 ] = xx [ 10 ] ;
motionData [ 3 ] = xx [ 11 ] ; motionData [ 4 ] = state [ 0 ] - xx [ 15 ] ;
motionData [ 5 ] = state [ 1 ] - xx [ 16 ] ; motionData [ 6 ] = state [ 2 ] -
xx [ 17 ] ; motionData [ 7 ] = xx [ 18 ] ; motionData [ 8 ] = xx [ 19 ] ;
motionData [ 9 ] = xx [ 20 ] ; motionData [ 10 ] = xx [ 12 ] + xx [ 0 ] ;
motionData [ 11 ] = xx [ 13 ] + xx [ 1 ] ; motionData [ 12 ] = xx [ 14 ] + xx
[ 2 ] ; } size_t untitled_1a62e0cc_1_computeAssemblyError ( const void * mech
, const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int
* modeVector , const double * motionData , double * error ) { ( void ) mech ;
( void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void ) error ;
switch ( constraintIdx ) { } return 0 ; } size_t
untitled_1a62e0cc_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { } return 0 ; }
size_t untitled_1a62e0cc_1_computeFullAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void )
modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; } boolean_T
untitled_1a62e0cc_1_isInKinematicSingularity ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData ) { ( void ) mech ; ( void ) rtdv ; (
void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) { } return
0 ; } void untitled_1a62e0cc_1_convertStateVector ( const void * asmMech ,
const RuntimeDerivedValuesBundle * rtdv , const void * simMech , const double
* asmState , const int * asmModeVector , const int * simModeVector , double *
simState ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; ( void ) asmMech ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ; ( void ) simModeVector
; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ] ;
simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ; simState
[ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState [ 6 ] =
asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; simState [ 8 ] = asmState
[ 8 ] ; simState [ 9 ] = asmState [ 9 ] ; simState [ 10 ] = asmState [ 10 ] ;
simState [ 11 ] = asmState [ 11 ] ; simState [ 12 ] = asmState [ 12 ] ; }
