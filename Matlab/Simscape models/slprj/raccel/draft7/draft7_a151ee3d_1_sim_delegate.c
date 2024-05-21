#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void draft7_a151ee3d_1_resetSimStateVector ( const void * mech , double *
state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx
[ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [
0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0
] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ]
; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ]
; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ]
; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ]
; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] = xx [ 0 ]
; state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; state [ 24 ] = xx [ 0 ]
; state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ; state [ 27 ] = xx [ 0 ]
; state [ 28 ] = xx [ 0 ] ; state [ 29 ] = xx [ 0 ] ; state [ 30 ] = xx [ 0 ]
; state [ 31 ] = xx [ 0 ] ; state [ 32 ] = xx [ 0 ] ; state [ 33 ] = xx [ 0 ]
; state [ 34 ] = xx [ 0 ] ; state [ 35 ] = xx [ 0 ] ; state [ 36 ] = xx [ 0 ]
; state [ 37 ] = xx [ 0 ] ; state [ 38 ] = xx [ 0 ] ; state [ 39 ] = xx [ 0 ]
; state [ 40 ] = xx [ 0 ] ; state [ 41 ] = xx [ 0 ] ; } static void
perturbSimJointPrimitiveState_0_0 ( double mag , double * state ) { state [ 0
] = state [ 0 ] + mag ; } static void perturbSimJointPrimitiveState_0_0v (
double mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 3 ]
= state [ 3 ] - 0.875 * mag ; } static void perturbSimJointPrimitiveState_0_1
( double mag , double * state ) { state [ 1 ] = state [ 1 ] + mag ; } static
void perturbSimJointPrimitiveState_0_1v ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; state [ 4 ] = state [ 4 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_0_2 ( double mag , double * state )
{ state [ 2 ] = state [ 2 ] + mag ; } static void
perturbSimJointPrimitiveState_0_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_1_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbSimJointPrimitiveState_1_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_1_1 ( double mag , double * state ) {
state [ 7 ] = state [ 7 ] + mag ; } static void
perturbSimJointPrimitiveState_1_1v ( double mag , double * state ) { state [
7 ] = state [ 7 ] + mag ; state [ 10 ] = state [ 10 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_1_2 ( double mag , double * state )
{ state [ 8 ] = state [ 8 ] + mag ; } static void
perturbSimJointPrimitiveState_1_2v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_2_0 ( double mag , double * state )
{ state [ 12 ] = state [ 12 ] + mag ; } static void
perturbSimJointPrimitiveState_2_0v ( double mag , double * state ) { state [
12 ] = state [ 12 ] + mag ; state [ 15 ] = state [ 15 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_2_1 ( double mag , double * state )
{ state [ 13 ] = state [ 13 ] + mag ; } static void
perturbSimJointPrimitiveState_2_1v ( double mag , double * state ) { state [
13 ] = state [ 13 ] + mag ; state [ 16 ] = state [ 16 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_2_2 ( double mag , double * state )
{ state [ 14 ] = state [ 14 ] + mag ; } static void
perturbSimJointPrimitiveState_2_2v ( double mag , double * state ) { state [
14 ] = state [ 14 ] + mag ; state [ 17 ] = state [ 17 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_3_0 ( double mag , double * state )
{ state [ 18 ] = state [ 18 ] + mag ; } static void
perturbSimJointPrimitiveState_3_0v ( double mag , double * state ) { state [
18 ] = state [ 18 ] + mag ; state [ 21 ] = state [ 21 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_3_1 ( double mag , double * state )
{ state [ 19 ] = state [ 19 ] + mag ; } static void
perturbSimJointPrimitiveState_3_1v ( double mag , double * state ) { state [
19 ] = state [ 19 ] + mag ; state [ 22 ] = state [ 22 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_3_2 ( double mag , double * state )
{ state [ 20 ] = state [ 20 ] + mag ; } static void
perturbSimJointPrimitiveState_3_2v ( double mag , double * state ) { state [
20 ] = state [ 20 ] + mag ; state [ 23 ] = state [ 23 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_4_0 ( double mag , double * state )
{ state [ 24 ] = state [ 24 ] + mag ; } static void
perturbSimJointPrimitiveState_4_0v ( double mag , double * state ) { state [
24 ] = state [ 24 ] + mag ; state [ 27 ] = state [ 27 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_4_1 ( double mag , double * state )
{ state [ 25 ] = state [ 25 ] + mag ; } static void
perturbSimJointPrimitiveState_4_1v ( double mag , double * state ) { state [
25 ] = state [ 25 ] + mag ; state [ 28 ] = state [ 28 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_4_2 ( double mag , double * state )
{ state [ 26 ] = state [ 26 ] + mag ; } static void
perturbSimJointPrimitiveState_4_2v ( double mag , double * state ) { state [
26 ] = state [ 26 ] + mag ; state [ 29 ] = state [ 29 ] - 0.875 * mag ; }
void draft7_a151ee3d_1_perturbSimJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbSimJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbSimJointPrimitiveState_0_0v ( mag , state ) ; break ; case 2 :
perturbSimJointPrimitiveState_0_1 ( mag , state ) ; break ; case 3 :
perturbSimJointPrimitiveState_0_1v ( mag , state ) ; break ; case 4 :
perturbSimJointPrimitiveState_0_2 ( mag , state ) ; break ; case 5 :
perturbSimJointPrimitiveState_0_2v ( mag , state ) ; break ; case 12 :
perturbSimJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbSimJointPrimitiveState_1_0v ( mag , state ) ; break ; case 14 :
perturbSimJointPrimitiveState_1_1 ( mag , state ) ; break ; case 15 :
perturbSimJointPrimitiveState_1_1v ( mag , state ) ; break ; case 16 :
perturbSimJointPrimitiveState_1_2 ( mag , state ) ; break ; case 17 :
perturbSimJointPrimitiveState_1_2v ( mag , state ) ; break ; case 24 :
perturbSimJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbSimJointPrimitiveState_2_0v ( mag , state ) ; break ; case 26 :
perturbSimJointPrimitiveState_2_1 ( mag , state ) ; break ; case 27 :
perturbSimJointPrimitiveState_2_1v ( mag , state ) ; break ; case 28 :
perturbSimJointPrimitiveState_2_2 ( mag , state ) ; break ; case 29 :
perturbSimJointPrimitiveState_2_2v ( mag , state ) ; break ; case 36 :
perturbSimJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbSimJointPrimitiveState_3_0v ( mag , state ) ; break ; case 38 :
perturbSimJointPrimitiveState_3_1 ( mag , state ) ; break ; case 39 :
perturbSimJointPrimitiveState_3_1v ( mag , state ) ; break ; case 40 :
perturbSimJointPrimitiveState_3_2 ( mag , state ) ; break ; case 41 :
perturbSimJointPrimitiveState_3_2v ( mag , state ) ; break ; case 48 :
perturbSimJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbSimJointPrimitiveState_4_0v ( mag , state ) ; break ; case 50 :
perturbSimJointPrimitiveState_4_1 ( mag , state ) ; break ; case 51 :
perturbSimJointPrimitiveState_4_1v ( mag , state ) ; break ; case 52 :
perturbSimJointPrimitiveState_4_2 ( mag , state ) ; break ; case 53 :
perturbSimJointPrimitiveState_4_2v ( mag , state ) ; break ; } } void
draft7_a151ee3d_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double mag , boolean_T doPerturbVelocity , double * state ) { (
void ) mech ; ( void ) stageIdx ; ( void ) mag ; ( void ) doPerturbVelocity ;
( void ) state ; switch ( stageIdx * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { }
} void draft7_a151ee3d_1_constructStateVector ( const void * mech , const
double * solverState , const double * u , const double * uDot , double *
discreteState , double * fullState ) { ( void ) mech ; ( void ) u ; ( void )
uDot ; ( void ) discreteState ; fullState [ 0 ] = solverState [ 0 ] ;
fullState [ 1 ] = solverState [ 1 ] ; fullState [ 2 ] = solverState [ 2 ] ;
fullState [ 3 ] = solverState [ 3 ] ; fullState [ 4 ] = solverState [ 4 ] ;
fullState [ 5 ] = solverState [ 5 ] ; fullState [ 6 ] = solverState [ 6 ] ;
fullState [ 7 ] = solverState [ 7 ] ; fullState [ 8 ] = solverState [ 8 ] ;
fullState [ 9 ] = solverState [ 9 ] ; fullState [ 10 ] = solverState [ 10 ] ;
fullState [ 11 ] = solverState [ 11 ] ; fullState [ 12 ] = solverState [ 12 ]
; fullState [ 13 ] = solverState [ 13 ] ; fullState [ 14 ] = solverState [ 14
] ; fullState [ 15 ] = solverState [ 15 ] ; fullState [ 16 ] = solverState [
16 ] ; fullState [ 17 ] = solverState [ 17 ] ; fullState [ 18 ] = solverState
[ 18 ] ; fullState [ 19 ] = solverState [ 19 ] ; fullState [ 20 ] =
solverState [ 20 ] ; fullState [ 21 ] = solverState [ 21 ] ; fullState [ 22 ]
= solverState [ 22 ] ; fullState [ 23 ] = solverState [ 23 ] ; fullState [ 24
] = solverState [ 24 ] ; fullState [ 25 ] = solverState [ 25 ] ; fullState [
26 ] = solverState [ 26 ] ; fullState [ 27 ] = solverState [ 27 ] ; fullState
[ 28 ] = solverState [ 28 ] ; fullState [ 29 ] = solverState [ 29 ] ;
fullState [ 30 ] = solverState [ 30 ] ; fullState [ 31 ] = solverState [ 31 ]
; fullState [ 32 ] = solverState [ 32 ] ; fullState [ 33 ] = solverState [ 33
] ; fullState [ 34 ] = solverState [ 34 ] ; fullState [ 35 ] = solverState [
35 ] ; fullState [ 36 ] = solverState [ 36 ] ; fullState [ 37 ] = solverState
[ 37 ] ; fullState [ 38 ] = solverState [ 38 ] ; fullState [ 39 ] =
solverState [ 39 ] ; fullState [ 40 ] = solverState [ 40 ] ; fullState [ 41 ]
= solverState [ 41 ] ; } void draft7_a151ee3d_1_extractSolverStateVector (
const void * mech , const double * fullState , double * solverState ) { (
void ) mech ; solverState [ 0 ] = fullState [ 0 ] ; solverState [ 1 ] =
fullState [ 1 ] ; solverState [ 2 ] = fullState [ 2 ] ; solverState [ 3 ] =
fullState [ 3 ] ; solverState [ 4 ] = fullState [ 4 ] ; solverState [ 5 ] =
fullState [ 5 ] ; solverState [ 6 ] = fullState [ 6 ] ; solverState [ 7 ] =
fullState [ 7 ] ; solverState [ 8 ] = fullState [ 8 ] ; solverState [ 9 ] =
fullState [ 9 ] ; solverState [ 10 ] = fullState [ 10 ] ; solverState [ 11 ]
= fullState [ 11 ] ; solverState [ 12 ] = fullState [ 12 ] ; solverState [ 13
] = fullState [ 13 ] ; solverState [ 14 ] = fullState [ 14 ] ; solverState [
15 ] = fullState [ 15 ] ; solverState [ 16 ] = fullState [ 16 ] ; solverState
[ 17 ] = fullState [ 17 ] ; solverState [ 18 ] = fullState [ 18 ] ;
solverState [ 19 ] = fullState [ 19 ] ; solverState [ 20 ] = fullState [ 20 ]
; solverState [ 21 ] = fullState [ 21 ] ; solverState [ 22 ] = fullState [ 22
] ; solverState [ 23 ] = fullState [ 23 ] ; solverState [ 24 ] = fullState [
24 ] ; solverState [ 25 ] = fullState [ 25 ] ; solverState [ 26 ] = fullState
[ 26 ] ; solverState [ 27 ] = fullState [ 27 ] ; solverState [ 28 ] =
fullState [ 28 ] ; solverState [ 29 ] = fullState [ 29 ] ; solverState [ 30 ]
= fullState [ 30 ] ; solverState [ 31 ] = fullState [ 31 ] ; solverState [ 32
] = fullState [ 32 ] ; solverState [ 33 ] = fullState [ 33 ] ; solverState [
34 ] = fullState [ 34 ] ; solverState [ 35 ] = fullState [ 35 ] ; solverState
[ 36 ] = fullState [ 36 ] ; solverState [ 37 ] = fullState [ 37 ] ;
solverState [ 38 ] = fullState [ 38 ] ; solverState [ 39 ] = fullState [ 39 ]
; solverState [ 40 ] = fullState [ 40 ] ; solverState [ 41 ] = fullState [ 41
] ; } boolean_T draft7_a151ee3d_1_isPositionViolation ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const
double * state , const int * modeVector ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void )
mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void )
state ; ( void ) modeVector ; return 0 ; } boolean_T
draft7_a151ee3d_1_isVelocityViolation ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) state ; (
void ) modeVector ; return 0 ; } PmfMessageId
draft7_a151ee3d_1_projectStateSim ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const int *
modeVector , double * state , void * neDiagMgr0 ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ;
boolean_T bb [ 1 ] ; double xx [ 90 ] ; ( void ) mech ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void )
neDiagMgr ; xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0 ] * state [ 2 ] ; xx [ 2 ] =
cos ( xx [ 1 ] ) ; xx [ 3 ] = xx [ 0 ] * state [ 1 ] ; xx [ 4 ] = cos ( xx [
3 ] ) ; xx [ 5 ] = 0.9881368157912284 ; xx [ 6 ] = xx [ 0 ] * state [ 0 ] ;
xx [ 7 ] = cos ( xx [ 6 ] ) ; xx [ 8 ] = 0.1535761481414752 ; xx [ 9 ] = sin
( xx [ 6 ] ) ; xx [ 6 ] = xx [ 5 ] * xx [ 7 ] + xx [ 8 ] * xx [ 9 ] ; xx [ 10
] = xx [ 4 ] * xx [ 6 ] ; xx [ 11 ] = 0.258564134865625 ; xx [ 12 ] = sin (
xx [ 1 ] ) ; xx [ 1 ] = xx [ 11 ] * xx [ 12 ] ; xx [ 13 ] = xx [ 8 ] * xx [ 7
] - xx [ 5 ] * xx [ 9 ] ; xx [ 5 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 11 ]
* xx [ 5 ] ; xx [ 7 ] = 0.9659940932330751 ; xx [ 8 ] = xx [ 7 ] * xx [ 5 ] ;
xx [ 5 ] = xx [ 13 ] * xx [ 3 ] - xx [ 8 ] * xx [ 6 ] ; xx [ 9 ] = xx [ 3 ] *
xx [ 6 ] + xx [ 13 ] * xx [ 8 ] ; xx [ 3 ] = xx [ 7 ] * xx [ 12 ] ; xx [ 6 ]
= xx [ 2 ] * xx [ 10 ] + xx [ 1 ] * xx [ 5 ] + xx [ 9 ] * xx [ 3 ] ; xx [ 8 ]
= xx [ 13 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 2 ] * xx [ 8 ] + xx [ 3 ] * xx [ 5 ]
- xx [ 9 ] * xx [ 1 ] ; xx [ 12 ] = xx [ 2 ] * xx [ 5 ] - xx [ 1 ] * xx [ 10
] - xx [ 8 ] * xx [ 3 ] ; xx [ 5 ] = xx [ 9 ] * xx [ 2 ] - xx [ 3 ] * xx [ 10
] + xx [ 8 ] * xx [ 1 ] ; xx [ 13 ] = - xx [ 6 ] ; xx [ 14 ] = xx [ 4 ] ; xx
[ 15 ] = xx [ 12 ] ; xx [ 16 ] = xx [ 5 ] ; xx [ 8 ] = xx [ 0 ] * state [ 8 ]
; xx [ 9 ] = cos ( xx [ 8 ] ) ; xx [ 10 ] = 0.08149234695961537 ; xx [ 17 ] =
xx [ 0 ] * state [ 6 ] ; xx [ 18 ] = sin ( xx [ 17 ] ) ; xx [ 19 ] =
0.9966739674472358 ; xx [ 20 ] = cos ( xx [ 17 ] ) ; xx [ 17 ] =
3.301712910522993e-12 ; xx [ 21 ] = xx [ 10 ] * xx [ 18 ] - xx [ 19 ] * xx [
20 ] ; xx [ 22 ] = - ( xx [ 10 ] * xx [ 20 ] + xx [ 19 ] * xx [ 18 ] ) ; xx [
23 ] = xx [ 17 ] * xx [ 18 ] ; xx [ 24 ] = - ( xx [ 17 ] * xx [ 20 ] ) ; xx [
10 ] = xx [ 0 ] * state [ 7 ] ; xx [ 17 ] = 6.558709267800361e-12 ; xx [ 18 ]
= sin ( xx [ 10 ] ) ; xx [ 19 ] = 0.9694837936076719 ; xx [ 20 ] =
0.2451554077153451 ; xx [ 25 ] = cos ( xx [ 10 ] ) ; xx [ 26 ] = xx [ 17 ] *
xx [ 18 ] ; xx [ 27 ] = xx [ 19 ] * xx [ 18 ] ; xx [ 28 ] = - ( xx [ 20 ] *
xx [ 18 ] ) ; pm_math_Quaternion_compose_ra ( xx + 21 , xx + 25 , xx + 29 ) ;
xx [ 10 ] = sin ( xx [ 8 ] ) ; xx [ 8 ] = xx [ 20 ] * xx [ 10 ] ; xx [ 18 ] =
xx [ 19 ] * xx [ 10 ] ; xx [ 10 ] = xx [ 9 ] * xx [ 29 ] - ( xx [ 31 ] * xx [
8 ] + xx [ 32 ] * xx [ 18 ] ) ; xx [ 21 ] = xx [ 9 ] * xx [ 30 ] + xx [ 31 ]
* xx [ 18 ] - xx [ 32 ] * xx [ 8 ] ; xx [ 22 ] = xx [ 29 ] * xx [ 8 ] + xx [
9 ] * xx [ 31 ] - xx [ 30 ] * xx [ 18 ] ; xx [ 23 ] = xx [ 29 ] * xx [ 18 ] +
xx [ 9 ] * xx [ 32 ] + xx [ 30 ] * xx [ 8 ] ; xx [ 24 ] = xx [ 10 ] ; xx [ 25
] = xx [ 21 ] ; xx [ 26 ] = xx [ 22 ] ; xx [ 27 ] = xx [ 23 ] ;
pm_math_Quaternion_compose_ra ( xx + 13 , xx + 24 , xx + 28 ) ; xx [ 13 ] =
xx [ 0 ] * state [ 14 ] ; xx [ 14 ] = cos ( xx [ 13 ] ) ; xx [ 15 ] =
0.1159778701879254 ; xx [ 16 ] = xx [ 0 ] * state [ 12 ] ; xx [ 32 ] = sin (
xx [ 16 ] ) ; xx [ 33 ] = 0.9932517976961697 ; xx [ 34 ] = cos ( xx [ 16 ] )
; xx [ 16 ] = 4.654509323289534e-12 ; xx [ 35 ] = 6.655858618855781e-12 ; xx
[ 36 ] = xx [ 35 ] * xx [ 32 ] ; xx [ 37 ] = xx [ 15 ] * xx [ 32 ] - xx [ 33
] * xx [ 34 ] ; xx [ 38 ] = - ( xx [ 15 ] * xx [ 34 ] + xx [ 33 ] * xx [ 32 ]
+ xx [ 16 ] * xx [ 36 ] ) ; xx [ 39 ] = xx [ 33 ] * xx [ 36 ] - xx [ 16 ] *
xx [ 32 ] ; xx [ 40 ] = xx [ 16 ] * xx [ 34 ] - xx [ 15 ] * xx [ 36 ] ; xx [
15 ] = xx [ 0 ] * state [ 13 ] ; xx [ 16 ] = 2.702350965790575e-12 ; xx [ 32
] = sin ( xx [ 15 ] ) ; xx [ 33 ] = 0.9452391332067189 ; xx [ 34 ] =
0.3263785854718576 ; xx [ 41 ] = cos ( xx [ 15 ] ) ; xx [ 42 ] = - ( xx [ 16
] * xx [ 32 ] ) ; xx [ 43 ] = xx [ 33 ] * xx [ 32 ] ; xx [ 44 ] = - ( xx [ 34
] * xx [ 32 ] ) ; pm_math_Quaternion_compose_ra ( xx + 37 , xx + 41 , xx + 45
) ; xx [ 15 ] = sin ( xx [ 13 ] ) ; xx [ 13 ] = xx [ 34 ] * xx [ 15 ] ; xx [
32 ] = xx [ 33 ] * xx [ 15 ] ; xx [ 15 ] = xx [ 14 ] * xx [ 45 ] - ( xx [ 47
] * xx [ 13 ] + xx [ 48 ] * xx [ 32 ] ) ; xx [ 36 ] = xx [ 14 ] * xx [ 46 ] +
xx [ 47 ] * xx [ 32 ] - xx [ 48 ] * xx [ 13 ] ; xx [ 37 ] = xx [ 45 ] * xx [
13 ] + xx [ 14 ] * xx [ 47 ] - xx [ 46 ] * xx [ 32 ] ; xx [ 38 ] = xx [ 45 ]
* xx [ 32 ] + xx [ 14 ] * xx [ 48 ] + xx [ 46 ] * xx [ 13 ] ; xx [ 39 ] = xx
[ 15 ] ; xx [ 40 ] = xx [ 36 ] ; xx [ 41 ] = xx [ 37 ] ; xx [ 42 ] = xx [ 38
] ; pm_math_Quaternion_compose_ra ( xx + 28 , xx + 39 , xx + 43 ) ; xx [ 28 ]
= 0.9961405467325101 ; xx [ 29 ] = xx [ 0 ] * state [ 18 ] ; xx [ 30 ] = cos
( xx [ 29 ] ) ; xx [ 31 ] = 3.201611086326645e-12 ; xx [ 47 ] =
2.826845832587476e-12 ; xx [ 48 ] = sin ( xx [ 29 ] ) ; xx [ 29 ] = xx [ 47 ]
* xx [ 48 ] ; xx [ 49 ] = 0.08777249657755079 ; xx [ 50 ] =
1.028498847019974e-11 ; xx [ 51 ] = - ( xx [ 28 ] * xx [ 30 ] + xx [ 31 ] *
xx [ 29 ] - xx [ 49 ] * xx [ 48 ] ) ; xx [ 52 ] = - ( xx [ 49 ] * xx [ 30 ] +
xx [ 28 ] * xx [ 48 ] + xx [ 50 ] * xx [ 29 ] ) ; xx [ 53 ] = xx [ 31 ] * xx
[ 30 ] - xx [ 28 ] * xx [ 29 ] + xx [ 50 ] * xx [ 48 ] ; xx [ 54 ] = xx [ 31
] * xx [ 48 ] - xx [ 50 ] * xx [ 30 ] + xx [ 49 ] * xx [ 29 ] ; xx [ 28 ] =
xx [ 0 ] * state [ 19 ] ; xx [ 29 ] = 1.596819818085218e-11 ; xx [ 30 ] = sin
( xx [ 28 ] ) ; xx [ 31 ] = 0.9562867924269723 ; xx [ 48 ] =
0.2924304543472392 ; xx [ 55 ] = cos ( xx [ 28 ] ) ; xx [ 56 ] = xx [ 29 ] *
xx [ 30 ] ; xx [ 57 ] = xx [ 31 ] * xx [ 30 ] ; xx [ 58 ] = - ( xx [ 48 ] *
xx [ 30 ] ) ; pm_math_Quaternion_compose_ra ( xx + 51 , xx + 55 , xx + 59 ) ;
xx [ 28 ] = xx [ 0 ] * state [ 20 ] ; xx [ 30 ] = 1.035832709073648e-11 ; xx
[ 49 ] = sin ( xx [ 28 ] ) ; xx [ 50 ] = cos ( xx [ 28 ] ) ; xx [ 51 ] = xx [
30 ] * xx [ 49 ] ; xx [ 52 ] = xx [ 48 ] * xx [ 49 ] ; xx [ 53 ] = xx [ 31 ]
* xx [ 49 ] ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 50 , xx + 54 ) ;
pm_math_Quaternion_compose_ra ( xx + 43 , xx + 54 , xx + 58 ) ; xx [ 28 ] =
xx [ 0 ] * state [ 24 ] ; xx [ 43 ] = sin ( xx [ 28 ] ) ; xx [ 44 ] =
1.82992095932877e-11 ; xx [ 45 ] = 5.235917730680519e-12 ; xx [ 62 ] = cos (
xx [ 28 ] ) ; xx [ 63 ] = xx [ 43 ] ; xx [ 64 ] = - ( xx [ 44 ] * xx [ 43 ] )
; xx [ 65 ] = - ( xx [ 45 ] * xx [ 43 ] ) ; xx [ 66 ] = 0.9992594490823861 ;
xx [ 67 ] = - 0.03847796017939601 ; xx [ 68 ] = 3.657873200514057e-11 ; xx [
69 ] = 1.959485864323585e-10 ; pm_math_Quaternion_compose_ra ( xx + 62 , xx +
66 , xx + 70 ) ; xx [ 28 ] = xx [ 0 ] * state [ 25 ] ; xx [ 43 ] =
4.103512650758317e-10 ; xx [ 46 ] = sin ( xx [ 28 ] ) ; xx [ 49 ] =
0.9994592018341244 ; xx [ 62 ] = 0.03288318520300273 ; xx [ 63 ] = cos ( xx [
28 ] ) ; xx [ 64 ] = xx [ 43 ] * xx [ 46 ] ; xx [ 65 ] = xx [ 49 ] * xx [ 46
] ; xx [ 66 ] = xx [ 62 ] * xx [ 46 ] ; pm_math_Quaternion_compose_ra ( xx +
70 , xx + 63 , xx + 74 ) ; xx [ 28 ] = xx [ 0 ] * state [ 26 ] ; xx [ 46 ] =
6.492504809889092e-11 ; xx [ 63 ] = sin ( xx [ 28 ] ) ; xx [ 64 ] = cos ( xx
[ 28 ] ) ; xx [ 65 ] = - ( xx [ 46 ] * xx [ 63 ] ) ; xx [ 66 ] = - ( xx [ 62
] * xx [ 63 ] ) ; xx [ 67 ] = xx [ 49 ] * xx [ 63 ] ;
pm_math_Quaternion_compose_ra ( xx + 74 , xx + 64 , xx + 68 ) ;
pm_math_Quaternion_compose_ra ( xx + 58 , xx + 68 , xx + 72 ) ; xx [ 58 ] = -
xx [ 72 ] ; xx [ 59 ] = - xx [ 73 ] ; xx [ 60 ] = - xx [ 74 ] ; xx [ 61 ] = -
xx [ 75 ] ; xx [ 76 ] = 0.9994226636119462 ; xx [ 77 ] = 0.03397557150075099
; xx [ 78 ] = - 3.268676406922499e-11 ; xx [ 79 ] = - 2.051400253076505e-10 ;
pm_math_Quaternion_compose_ra ( xx + 58 , xx + 76 , xx + 80 ) ; xx [ 28 ] =
2.0 ; xx [ 63 ] = ( xx [ 81 ] * xx [ 83 ] + xx [ 80 ] * xx [ 82 ] ) * xx [ 28
] ; xx [ 76 ] = 0.99999999999999 ; bb [ 0 ] = fabs ( xx [ 63 ] ) > xx [ 76 ]
; xx [ 77 ] = xx [ 82 ] * xx [ 83 ] ; xx [ 78 ] = xx [ 80 ] * xx [ 81 ] ; xx
[ 79 ] = xx [ 80 ] * xx [ 80 ] ; xx [ 84 ] = 1.0 ; xx [ 85 ] = ( xx [ 79 ] +
xx [ 82 ] * xx [ 82 ] ) * xx [ 28 ] - xx [ 84 ] ; xx [ 86 ] = ( xx [ 77 ] +
xx [ 78 ] ) * xx [ 28 ] ; xx [ 85 ] = ( xx [ 86 ] == 0.0 && xx [ 85 ] == 0.0
) ? 0.0 : atan2 ( xx [ 86 ] , xx [ 85 ] ) ; xx [ 86 ] = ( xx [ 79 ] + xx [ 83
] * xx [ 83 ] ) * xx [ 28 ] - xx [ 84 ] ; xx [ 87 ] = - ( xx [ 28 ] * ( xx [
77 ] - xx [ 78 ] ) ) ; xx [ 86 ] = ( xx [ 87 ] == 0.0 && xx [ 86 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 87 ] , xx [ 86 ] ) ; xx [ 77 ] = bb [ 0 ] ? xx [ 0 ] * xx
[ 85 ] : xx [ 86 ] ; xx [ 78 ] = 1.570796326794897 ; xx [ 85 ] = ( ( cos (
pm_math_canonicalAngle ( state [ 31 ] ) ) ) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 86
] = xx [ 78 ] * ( xx [ 84 ] - xx [ 85 ] ) ; if ( xx [ 63 ] < 0.0 ) xx [ 87 ]
= - 1.0 ; else if ( xx [ 63 ] > 0.0 ) xx [ 87 ] = + 1.0 ; else xx [ 87 ] =
0.0 ; xx [ 88 ] = fabs ( xx [ 63 ] ) > 1.0 ? atan2 ( xx [ 63 ] , 0.0 ) : asin
( xx [ 63 ] ) ; xx [ 63 ] = bb [ 0 ] ? xx [ 78 ] * xx [ 87 ] : xx [ 88 ] ; xx
[ 88 ] = ( xx [ 79 ] + xx [ 81 ] * xx [ 81 ] ) * xx [ 28 ] - xx [ 84 ] ; xx [
89 ] = - ( xx [ 28 ] * ( xx [ 81 ] * xx [ 82 ] - xx [ 80 ] * xx [ 83 ] ) ) ;
xx [ 88 ] = ( xx [ 89 ] == 0.0 && xx [ 88 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 89
] , xx [ 88 ] ) ; xx [ 79 ] = bb [ 0 ] ? xx [ 87 ] * xx [ 77 ] : xx [ 88 ] ;
xx [ 80 ] = xx [ 79 ] - ( xx [ 79 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 86 ] ; xx
[ 79 ] = xx [ 11 ] * xx [ 1 ] + xx [ 7 ] * xx [ 3 ] ; xx [ 81 ] = ( xx [ 84 ]
- ( xx [ 12 ] * xx [ 12 ] + xx [ 5 ] * xx [ 5 ] ) * xx [ 28 ] ) * state [ 3 ]
+ xx [ 28 ] * xx [ 2 ] * xx [ 79 ] * state [ 4 ] ; xx [ 82 ] = xx [ 28 ] * (
xx [ 4 ] * xx [ 12 ] + xx [ 5 ] * xx [ 6 ] ) * state [ 3 ] + ( xx [ 7 ] - xx
[ 28 ] * xx [ 3 ] * xx [ 79 ] ) * state [ 4 ] + xx [ 11 ] * state [ 5 ] ; xx
[ 83 ] = xx [ 28 ] * ( xx [ 5 ] * xx [ 4 ] - xx [ 12 ] * xx [ 6 ] ) * state [
3 ] + ( xx [ 28 ] * xx [ 1 ] * xx [ 79 ] - xx [ 11 ] ) * state [ 4 ] + xx [ 7
] * state [ 5 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 24 , xx + 81 , xx
+ 1 ) ; xx [ 4 ] = xx [ 17 ] * xx [ 8 ] ; xx [ 5 ] = xx [ 17 ] * xx [ 18 ] ;
xx [ 6 ] = xx [ 20 ] * xx [ 8 ] + xx [ 19 ] * xx [ 18 ] ; xx [ 24 ] = xx [ 1
] + ( xx [ 84 ] - ( xx [ 22 ] * xx [ 22 ] + xx [ 23 ] * xx [ 23 ] ) * xx [ 28
] ) * state [ 9 ] + ( xx [ 17 ] - ( xx [ 4 ] * xx [ 8 ] + xx [ 5 ] * xx [ 18
] - xx [ 9 ] * xx [ 6 ] ) * xx [ 28 ] ) * state [ 10 ] ; xx [ 25 ] = xx [ 2 ]
+ xx [ 28 ] * ( xx [ 21 ] * xx [ 22 ] - xx [ 23 ] * xx [ 10 ] ) * state [ 9 ]
+ ( xx [ 19 ] - xx [ 28 ] * ( xx [ 18 ] * xx [ 6 ] + xx [ 9 ] * xx [ 5 ] ) )
* state [ 10 ] + xx [ 20 ] * state [ 11 ] ; xx [ 26 ] = xx [ 3 ] + xx [ 28 ]
* ( xx [ 22 ] * xx [ 10 ] + xx [ 23 ] * xx [ 21 ] ) * state [ 9 ] + ( xx [ 28
] * ( xx [ 9 ] * xx [ 4 ] + xx [ 8 ] * xx [ 6 ] ) - xx [ 20 ] ) * state [ 10
] + xx [ 19 ] * state [ 11 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 39 ,
xx + 24 , xx + 1 ) ; xx [ 4 ] = xx [ 38 ] * xx [ 35 ] ; xx [ 5 ] = xx [ 35 ]
* xx [ 36 ] + xx [ 37 ] ; xx [ 6 ] = xx [ 4 ] ; xx [ 7 ] = xx [ 38 ] ; xx [ 8
] = - xx [ 5 ] ; pm_math_Vector3_cross_ra ( xx + 36 , xx + 6 , xx + 9 ) ; xx
[ 6 ] = xx [ 34 ] * xx [ 13 ] + xx [ 33 ] * xx [ 32 ] ; xx [ 7 ] = xx [ 16 ]
* xx [ 13 ] ; xx [ 8 ] = xx [ 16 ] * xx [ 32 ] ; xx [ 17 ] = xx [ 1 ] + ( xx
[ 84 ] + ( xx [ 9 ] - xx [ 4 ] * xx [ 15 ] ) * xx [ 28 ] ) * state [ 15 ] + (
( xx [ 14 ] * xx [ 6 ] + xx [ 7 ] * xx [ 13 ] + xx [ 8 ] * xx [ 32 ] ) * xx [
28 ] - xx [ 16 ] ) * state [ 16 ] ; xx [ 18 ] = xx [ 2 ] + ( xx [ 28 ] * ( xx
[ 10 ] - xx [ 38 ] * xx [ 15 ] ) - xx [ 35 ] ) * state [ 15 ] + ( xx [ 33 ] +
xx [ 28 ] * ( xx [ 14 ] * xx [ 8 ] - xx [ 32 ] * xx [ 6 ] ) ) * state [ 16 ]
+ xx [ 34 ] * state [ 17 ] ; xx [ 19 ] = xx [ 3 ] + xx [ 28 ] * ( xx [ 11 ] +
xx [ 15 ] * xx [ 5 ] ) * state [ 15 ] + ( xx [ 28 ] * ( xx [ 13 ] * xx [ 6 ]
- xx [ 14 ] * xx [ 7 ] ) - xx [ 34 ] ) * state [ 16 ] + xx [ 33 ] * state [
17 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 54 , xx + 17 , xx + 1 ) ; xx
[ 4 ] = xx [ 47 ] * xx [ 57 ] ; xx [ 5 ] = xx [ 47 ] * xx [ 55 ] - xx [ 56 ]
; xx [ 6 ] = - xx [ 4 ] ; xx [ 7 ] = xx [ 57 ] ; xx [ 8 ] = xx [ 5 ] ;
pm_math_Vector3_cross_ra ( xx + 55 , xx + 6 , xx + 9 ) ; xx [ 6 ] = xx [ 29 ]
; xx [ 7 ] = xx [ 31 ] ; xx [ 8 ] = - xx [ 48 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 50 , xx + 6 , xx + 12 ) ; xx [ 6 ]
= xx [ 1 ] + ( xx [ 84 ] + ( xx [ 54 ] * xx [ 4 ] + xx [ 9 ] ) * xx [ 28 ] )
* state [ 21 ] + xx [ 12 ] * state [ 22 ] + xx [ 30 ] * state [ 23 ] ; xx [ 7
] = xx [ 2 ] + ( xx [ 47 ] + xx [ 28 ] * ( xx [ 10 ] - xx [ 54 ] * xx [ 57 ]
) ) * state [ 21 ] + xx [ 13 ] * state [ 22 ] + xx [ 48 ] * state [ 23 ] ; xx
[ 8 ] = xx [ 3 ] + xx [ 28 ] * ( xx [ 11 ] - xx [ 54 ] * xx [ 5 ] ) * state [
21 ] + xx [ 14 ] * state [ 22 ] + xx [ 31 ] * state [ 23 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 68 , xx + 6 , xx + 1 ) ; xx [ 4 ] =
xx [ 44 ] * xx [ 71 ] - xx [ 45 ] * xx [ 70 ] ; xx [ 5 ] = xx [ 71 ] + xx [
45 ] * xx [ 69 ] ; xx [ 6 ] = xx [ 44 ] * xx [ 69 ] + xx [ 70 ] ; xx [ 7 ] =
xx [ 4 ] ; xx [ 8 ] = xx [ 5 ] ; xx [ 9 ] = - xx [ 6 ] ;
pm_math_Vector3_cross_ra ( xx + 69 , xx + 7 , xx + 10 ) ; xx [ 7 ] = xx [ 43
] ; xx [ 8 ] = xx [ 49 ] ; xx [ 9 ] = xx [ 62 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 64 , xx + 7 , xx + 13 ) ; xx [ 7 ]
= xx [ 1 ] + ( xx [ 84 ] + xx [ 28 ] * ( xx [ 10 ] - xx [ 68 ] * xx [ 4 ] ) )
* state [ 27 ] + xx [ 13 ] * state [ 28 ] - xx [ 46 ] * state [ 29 ] ; xx [ 8
] = xx [ 2 ] + ( xx [ 28 ] * ( xx [ 11 ] - xx [ 68 ] * xx [ 5 ] ) - xx [ 44 ]
) * state [ 27 ] + xx [ 14 ] * state [ 28 ] - xx [ 62 ] * state [ 29 ] ; xx [
9 ] = xx [ 3 ] + ( xx [ 28 ] * ( xx [ 12 ] + xx [ 68 ] * xx [ 6 ] ) - xx [ 45
] ) * state [ 27 ] + xx [ 15 ] * state [ 28 ] + xx [ 49 ] * state [ 29 ] ; xx
[ 1 ] = xx [ 84 ] - ( xx [ 74 ] * xx [ 74 ] + xx [ 75 ] * xx [ 75 ] ) * xx [
28 ] ; xx [ 2 ] = xx [ 28 ] * ( xx [ 73 ] * xx [ 74 ] - xx [ 72 ] * xx [ 75 ]
) ; xx [ 3 ] = ( xx [ 72 ] * xx [ 74 ] + xx [ 73 ] * xx [ 75 ] ) * xx [ 28 ]
; xx [ 4 ] = pm_math_Vector3_dot_ra ( xx + 7 , xx + 1 ) ; xx [ 5 ] =
7.927528481685209e-11 ; xx [ 6 ] = 0.06791191233403736 ; xx [ 10 ] =
0.9976913210823947 ; xx [ 11 ] = - xx [ 5 ] ; xx [ 12 ] = - xx [ 6 ] ; xx [
13 ] = xx [ 10 ] ; xx [ 14 ] = pm_math_Vector3_dot_ra ( xx + 1 , xx + 11 ) ;
xx [ 15 ] = xx [ 84 ] - xx [ 14 ] * xx [ 14 ] ; xx [ 15 ] = xx [ 15 ] == 0.0
? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 7 , xx + 11 ) - xx [ 4 ] * xx [ 14 ]
) / xx [ 15 ] ; xx [ 11 ] = xx [ 0 ] * xx [ 80 ] ; xx [ 12 ] = sin ( xx [ 11
] ) ; xx [ 16 ] = cos ( xx [ 11 ] ) ; xx [ 17 ] = - ( xx [ 5 ] * xx [ 12 ] )
; xx [ 18 ] = - ( xx [ 6 ] * xx [ 12 ] ) ; xx [ 19 ] = xx [ 10 ] * xx [ 12 ]
; xx [ 11 ] = 4.07822078033264e-10 ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [
6 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 16 , xx + 11 , xx + 20 ) ; xx
[ 10 ] = - 0.9956754524795487 ; xx [ 11 ] = 0.09289991027792205 ; xx [ 12 ] =
6.437320495472446e-12 ; xx [ 13 ] = 2.076280636928651e-10 ;
pm_math_Quaternion_compose_ra ( xx + 58 , xx + 10 , xx + 16 ) ; xx [ 5 ] = (
xx [ 17 ] * xx [ 19 ] + xx [ 16 ] * xx [ 18 ] ) * xx [ 28 ] ; bb [ 0 ] = fabs
( xx [ 5 ] ) > xx [ 76 ] ; xx [ 6 ] = xx [ 18 ] * xx [ 19 ] ; xx [ 10 ] = xx
[ 16 ] * xx [ 17 ] ; xx [ 11 ] = xx [ 16 ] * xx [ 16 ] ; xx [ 12 ] = ( xx [
11 ] + xx [ 18 ] * xx [ 18 ] ) * xx [ 28 ] - xx [ 84 ] ; xx [ 13 ] = ( xx [ 6
] + xx [ 10 ] ) * xx [ 28 ] ; xx [ 12 ] = ( xx [ 13 ] == 0.0 && xx [ 12 ] ==
0.0 ) ? 0.0 : atan2 ( xx [ 13 ] , xx [ 12 ] ) ; xx [ 13 ] = ( xx [ 11 ] + xx
[ 19 ] * xx [ 19 ] ) * xx [ 28 ] - xx [ 84 ] ; xx [ 23 ] = - ( xx [ 28 ] * (
xx [ 6 ] - xx [ 10 ] ) ) ; xx [ 13 ] = ( xx [ 23 ] == 0.0 && xx [ 13 ] == 0.0
) ? 0.0 : atan2 ( xx [ 23 ] , xx [ 13 ] ) ; xx [ 6 ] = bb [ 0 ] ? xx [ 0 ] *
xx [ 12 ] : xx [ 13 ] ; xx [ 10 ] = ( ( cos ( pm_math_canonicalAngle ( state
[ 37 ] ) ) ) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 12 ] = xx [ 78 ] * ( xx [ 84 ] -
xx [ 10 ] ) ; if ( xx [ 5 ] < 0.0 ) xx [ 13 ] = - 1.0 ; else if ( xx [ 5 ] >
0.0 ) xx [ 13 ] = + 1.0 ; else xx [ 13 ] = 0.0 ; xx [ 23 ] = fabs ( xx [ 5 ]
) > 1.0 ? atan2 ( xx [ 5 ] , 0.0 ) : asin ( xx [ 5 ] ) ; xx [ 5 ] = bb [ 0 ]
? xx [ 78 ] * xx [ 13 ] : xx [ 23 ] ; xx [ 23 ] = ( xx [ 11 ] + xx [ 17 ] *
xx [ 17 ] ) * xx [ 28 ] - xx [ 84 ] ; xx [ 24 ] = - ( xx [ 28 ] * ( xx [ 17 ]
* xx [ 18 ] - xx [ 16 ] * xx [ 19 ] ) ) ; xx [ 23 ] = ( xx [ 24 ] == 0.0 &&
xx [ 23 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 24 ] , xx [ 23 ] ) ; xx [ 11 ] = bb [
0 ] ? xx [ 13 ] * xx [ 6 ] : xx [ 23 ] ; xx [ 13 ] = xx [ 11 ] - ( xx [ 11 ]
< 0.0 ? - 1.0 : + 1.0 ) * xx [ 12 ] ; xx [ 11 ] = 2.57582929823209e-11 ; xx [
16 ] = 0.184996320402559 ; xx [ 17 ] = 0.982739213340708 ; xx [ 23 ] = xx [
11 ] ; xx [ 24 ] = xx [ 16 ] ; xx [ 25 ] = xx [ 17 ] ; xx [ 18 ] =
pm_math_Vector3_dot_ra ( xx + 1 , xx + 23 ) ; xx [ 1 ] = xx [ 84 ] - xx [ 18
] * xx [ 18 ] ; xx [ 1 ] = xx [ 1 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra (
xx + 7 , xx + 23 ) - xx [ 4 ] * xx [ 18 ] ) / xx [ 1 ] ; xx [ 2 ] = xx [ 0 ]
* xx [ 13 ] ; xx [ 0 ] = sin ( xx [ 2 ] ) ; xx [ 23 ] = cos ( xx [ 2 ] ) ; xx
[ 24 ] = xx [ 11 ] * xx [ 0 ] ; xx [ 25 ] = xx [ 16 ] * xx [ 0 ] ; xx [ 26 ]
= xx [ 17 ] * xx [ 0 ] ; xx [ 27 ] = 4.146563855226113e-10 ; xx [ 28 ] = xx [
17 ] ; xx [ 29 ] = - xx [ 16 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 23
, xx + 27 , xx + 30 ) ; state [ 30 ] = state [ 30 ] + pm_math_canonicalAngle
( xx [ 77 ] - ( xx [ 77 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 86 ] - state [ 30 ]
) ; state [ 31 ] = state [ 31 ] + pm_math_canonicalAngle ( xx [ 85 ] * xx [
63 ] + ( xx [ 63 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 86 ] - state [ 31 ] ) ;
state [ 32 ] = state [ 32 ] + pm_math_canonicalAngle ( xx [ 80 ] - state [ 32
] ) ; state [ 33 ] = xx [ 4 ] - xx [ 14 ] * xx [ 15 ] ; state [ 34 ] =
pm_math_Vector3_dot_ra ( xx + 7 , xx + 20 ) ; state [ 35 ] = xx [ 15 ] ;
state [ 36 ] = state [ 36 ] + pm_math_canonicalAngle ( xx [ 6 ] - ( xx [ 6 ]
< 0.0 ? - 1.0 : + 1.0 ) * xx [ 12 ] - state [ 36 ] ) ; state [ 37 ] = state [
37 ] + pm_math_canonicalAngle ( xx [ 10 ] * xx [ 5 ] + ( xx [ 5 ] < 0.0 ? -
1.0 : + 1.0 ) * xx [ 12 ] - state [ 37 ] ) ; state [ 38 ] = state [ 38 ] +
pm_math_canonicalAngle ( xx [ 13 ] - state [ 38 ] ) ; state [ 39 ] = xx [ 4 ]
- xx [ 18 ] * xx [ 1 ] ; state [ 40 ] = pm_math_Vector3_dot_ra ( xx + 7 , xx
+ 30 ) ; state [ 41 ] = xx [ 1 ] ; return NULL ; } void
draft7_a151ee3d_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , double * error ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector ; ( void
) error ; } void draft7_a151ee3d_1_resetModeVector ( const void * mech , int
* modeVector ) { ( void ) mech ; ( void ) modeVector ; } boolean_T
draft7_a151ee3d_1_hasJointDisToNormModeChange ( const void * mech , const int
* prevModeVector , const int * modeVector ) { ( void ) mech ; ( void )
prevModeVector ; ( void ) modeVector ; return 0 ; } PmfMessageId
draft7_a151ee3d_1_performJointDisToNormModeChange ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const int *
prevModeVector , const int * modeVector , const double * input , double *
state , void * neDiagMgr0 ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; NeuDiagnosticManager
* neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) prevModeVector
; ( void ) modeVector ; ( void ) input ; ( void ) state ; ( void ) neDiagMgr
; return NULL ; } void draft7_a151ee3d_1_onModeChangedCutJoints ( const void
* mech , const int * prevModeVector , const int * modeVector , double * state
) { ( void ) mech ; ( void ) prevModeVector ; ( void ) modeVector ; ( void )
state ; }
