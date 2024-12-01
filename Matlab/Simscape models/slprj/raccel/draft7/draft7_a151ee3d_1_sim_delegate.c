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
; state [ 40 ] = xx [ 0 ] ; state [ 41 ] = xx [ 0 ] ; state [ 42 ] = xx [ 0 ]
; state [ 43 ] = xx [ 0 ] ; state [ 44 ] = xx [ 0 ] ; state [ 45 ] = xx [ 0 ]
; state [ 46 ] = xx [ 0 ] ; state [ 47 ] = xx [ 0 ] ; state [ 48 ] = xx [ 0 ]
; state [ 49 ] = xx [ 0 ] ; state [ 50 ] = xx [ 0 ] ; state [ 51 ] = xx [ 0 ]
; state [ 52 ] = xx [ 0 ] ; state [ 53 ] = xx [ 0 ] ; state [ 54 ] = xx [ 0 ]
; state [ 55 ] = xx [ 0 ] ; state [ 56 ] = xx [ 0 ] ; state [ 57 ] = xx [ 0 ]
; state [ 58 ] = xx [ 0 ] ; state [ 59 ] = xx [ 0 ] ; state [ 60 ] = xx [ 0 ]
; state [ 61 ] = xx [ 0 ] ; state [ 62 ] = xx [ 0 ] ; state [ 63 ] = xx [ 0 ]
; state [ 64 ] = xx [ 0 ] ; state [ 65 ] = xx [ 0 ] ; state [ 66 ] = xx [ 0 ]
; state [ 67 ] = xx [ 0 ] ; state [ 68 ] = xx [ 0 ] ; state [ 69 ] = xx [ 0 ]
; state [ 70 ] = xx [ 0 ] ; state [ 71 ] = xx [ 0 ] ; state [ 72 ] = xx [ 0 ]
; state [ 73 ] = xx [ 0 ] ; state [ 74 ] = xx [ 0 ] ; state [ 75 ] = xx [ 0 ]
; state [ 76 ] = xx [ 0 ] ; state [ 77 ] = xx [ 0 ] ; state [ 78 ] = xx [ 0 ]
; state [ 79 ] = xx [ 0 ] ; state [ 80 ] = xx [ 0 ] ; state [ 81 ] = xx [ 0 ]
; state [ 82 ] = xx [ 0 ] ; state [ 83 ] = xx [ 0 ] ; state [ 84 ] = xx [ 0 ]
; state [ 85 ] = xx [ 0 ] ; state [ 86 ] = xx [ 0 ] ; state [ 87 ] = xx [ 0 ]
; state [ 88 ] = xx [ 0 ] ; state [ 89 ] = xx [ 0 ] ; state [ 90 ] = xx [ 0 ]
; state [ 91 ] = xx [ 0 ] ; state [ 92 ] = xx [ 0 ] ; state [ 93 ] = xx [ 0 ]
; state [ 94 ] = xx [ 0 ] ; state [ 95 ] = xx [ 0 ] ; state [ 96 ] = xx [ 0 ]
; state [ 97 ] = xx [ 0 ] ; state [ 98 ] = xx [ 0 ] ; state [ 99 ] = xx [ 0 ]
; state [ 100 ] = xx [ 0 ] ; state [ 101 ] = xx [ 0 ] ; } static void
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
static void perturbSimJointPrimitiveState_5_0 ( double mag , double * state )
{ state [ 30 ] = state [ 30 ] + mag ; } static void
perturbSimJointPrimitiveState_5_0v ( double mag , double * state ) { state [
30 ] = state [ 30 ] + mag ; state [ 33 ] = state [ 33 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_5_1 ( double mag , double * state )
{ state [ 31 ] = state [ 31 ] + mag ; } static void
perturbSimJointPrimitiveState_5_1v ( double mag , double * state ) { state [
31 ] = state [ 31 ] + mag ; state [ 34 ] = state [ 34 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_5_2 ( double mag , double * state )
{ state [ 32 ] = state [ 32 ] + mag ; } static void
perturbSimJointPrimitiveState_5_2v ( double mag , double * state ) { state [
32 ] = state [ 32 ] + mag ; state [ 35 ] = state [ 35 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_6_0 ( double mag , double * state )
{ state [ 36 ] = state [ 36 ] + mag ; } static void
perturbSimJointPrimitiveState_6_0v ( double mag , double * state ) { state [
36 ] = state [ 36 ] + mag ; state [ 39 ] = state [ 39 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_6_1 ( double mag , double * state )
{ state [ 37 ] = state [ 37 ] + mag ; } static void
perturbSimJointPrimitiveState_6_1v ( double mag , double * state ) { state [
37 ] = state [ 37 ] + mag ; state [ 40 ] = state [ 40 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_6_2 ( double mag , double * state )
{ state [ 38 ] = state [ 38 ] + mag ; } static void
perturbSimJointPrimitiveState_6_2v ( double mag , double * state ) { state [
38 ] = state [ 38 ] + mag ; state [ 41 ] = state [ 41 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 42 ] = state [ 42 ] + mag ; } static void
perturbSimJointPrimitiveState_7_0v ( double mag , double * state ) { state [
42 ] = state [ 42 ] + mag ; state [ 45 ] = state [ 45 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_7_1 ( double mag , double * state )
{ state [ 43 ] = state [ 43 ] + mag ; } static void
perturbSimJointPrimitiveState_7_1v ( double mag , double * state ) { state [
43 ] = state [ 43 ] + mag ; state [ 46 ] = state [ 46 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_7_2 ( double mag , double * state )
{ state [ 44 ] = state [ 44 ] + mag ; } static void
perturbSimJointPrimitiveState_7_2v ( double mag , double * state ) { state [
44 ] = state [ 44 ] + mag ; state [ 47 ] = state [ 47 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_8_0 ( double mag , double * state )
{ state [ 48 ] = state [ 48 ] + mag ; } static void
perturbSimJointPrimitiveState_8_0v ( double mag , double * state ) { state [
48 ] = state [ 48 ] + mag ; state [ 51 ] = state [ 51 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_8_1 ( double mag , double * state )
{ state [ 49 ] = state [ 49 ] + mag ; } static void
perturbSimJointPrimitiveState_8_1v ( double mag , double * state ) { state [
49 ] = state [ 49 ] + mag ; state [ 52 ] = state [ 52 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_8_2 ( double mag , double * state )
{ state [ 50 ] = state [ 50 ] + mag ; } static void
perturbSimJointPrimitiveState_8_2v ( double mag , double * state ) { state [
50 ] = state [ 50 ] + mag ; state [ 53 ] = state [ 53 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_9_0 ( double mag , double * state )
{ state [ 54 ] = state [ 54 ] + mag ; } static void
perturbSimJointPrimitiveState_9_0v ( double mag , double * state ) { state [
54 ] = state [ 54 ] + mag ; state [ 57 ] = state [ 57 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_9_1 ( double mag , double * state )
{ state [ 55 ] = state [ 55 ] + mag ; } static void
perturbSimJointPrimitiveState_9_1v ( double mag , double * state ) { state [
55 ] = state [ 55 ] + mag ; state [ 58 ] = state [ 58 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_9_2 ( double mag , double * state )
{ state [ 56 ] = state [ 56 ] + mag ; } static void
perturbSimJointPrimitiveState_9_2v ( double mag , double * state ) { state [
56 ] = state [ 56 ] + mag ; state [ 59 ] = state [ 59 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 60 ] = state [ 60 ] + mag ; } static void
perturbSimJointPrimitiveState_10_0v ( double mag , double * state ) { state [
60 ] = state [ 60 ] + mag ; state [ 63 ] = state [ 63 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_1 ( double mag , double * state
) { state [ 61 ] = state [ 61 ] + mag ; } static void
perturbSimJointPrimitiveState_10_1v ( double mag , double * state ) { state [
61 ] = state [ 61 ] + mag ; state [ 64 ] = state [ 64 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_2 ( double mag , double * state
) { state [ 62 ] = state [ 62 ] + mag ; } static void
perturbSimJointPrimitiveState_10_2v ( double mag , double * state ) { state [
62 ] = state [ 62 ] + mag ; state [ 65 ] = state [ 65 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_11_0 ( double mag , double * state
) { state [ 66 ] = state [ 66 ] + mag ; } static void
perturbSimJointPrimitiveState_11_0v ( double mag , double * state ) { state [
66 ] = state [ 66 ] + mag ; state [ 69 ] = state [ 69 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_11_1 ( double mag , double * state
) { state [ 67 ] = state [ 67 ] + mag ; } static void
perturbSimJointPrimitiveState_11_1v ( double mag , double * state ) { state [
67 ] = state [ 67 ] + mag ; state [ 70 ] = state [ 70 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_11_2 ( double mag , double * state
) { state [ 68 ] = state [ 68 ] + mag ; } static void
perturbSimJointPrimitiveState_11_2v ( double mag , double * state ) { state [
68 ] = state [ 68 ] + mag ; state [ 71 ] = state [ 71 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_12_0 ( double mag , double * state
) { state [ 72 ] = state [ 72 ] + mag ; } static void
perturbSimJointPrimitiveState_12_0v ( double mag , double * state ) { state [
72 ] = state [ 72 ] + mag ; state [ 75 ] = state [ 75 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_12_1 ( double mag , double * state
) { state [ 73 ] = state [ 73 ] + mag ; } static void
perturbSimJointPrimitiveState_12_1v ( double mag , double * state ) { state [
73 ] = state [ 73 ] + mag ; state [ 76 ] = state [ 76 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_12_2 ( double mag , double * state
) { state [ 74 ] = state [ 74 ] + mag ; } static void
perturbSimJointPrimitiveState_12_2v ( double mag , double * state ) { state [
74 ] = state [ 74 ] + mag ; state [ 77 ] = state [ 77 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_13_0 ( double mag , double * state
) { state [ 78 ] = state [ 78 ] + mag ; } static void
perturbSimJointPrimitiveState_13_0v ( double mag , double * state ) { state [
78 ] = state [ 78 ] + mag ; state [ 81 ] = state [ 81 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_13_1 ( double mag , double * state
) { state [ 79 ] = state [ 79 ] + mag ; } static void
perturbSimJointPrimitiveState_13_1v ( double mag , double * state ) { state [
79 ] = state [ 79 ] + mag ; state [ 82 ] = state [ 82 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_13_2 ( double mag , double * state
) { state [ 80 ] = state [ 80 ] + mag ; } static void
perturbSimJointPrimitiveState_13_2v ( double mag , double * state ) { state [
80 ] = state [ 80 ] + mag ; state [ 83 ] = state [ 83 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_14_0 ( double mag , double * state
) { state [ 84 ] = state [ 84 ] + mag ; } static void
perturbSimJointPrimitiveState_14_0v ( double mag , double * state ) { state [
84 ] = state [ 84 ] + mag ; state [ 87 ] = state [ 87 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_14_1 ( double mag , double * state
) { state [ 85 ] = state [ 85 ] + mag ; } static void
perturbSimJointPrimitiveState_14_1v ( double mag , double * state ) { state [
85 ] = state [ 85 ] + mag ; state [ 88 ] = state [ 88 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_14_2 ( double mag , double * state
) { state [ 86 ] = state [ 86 ] + mag ; } static void
perturbSimJointPrimitiveState_14_2v ( double mag , double * state ) { state [
86 ] = state [ 86 ] + mag ; state [ 89 ] = state [ 89 ] - 0.875 * mag ; }
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
perturbSimJointPrimitiveState_4_2v ( mag , state ) ; break ; case 60 :
perturbSimJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbSimJointPrimitiveState_5_0v ( mag , state ) ; break ; case 62 :
perturbSimJointPrimitiveState_5_1 ( mag , state ) ; break ; case 63 :
perturbSimJointPrimitiveState_5_1v ( mag , state ) ; break ; case 64 :
perturbSimJointPrimitiveState_5_2 ( mag , state ) ; break ; case 65 :
perturbSimJointPrimitiveState_5_2v ( mag , state ) ; break ; case 72 :
perturbSimJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbSimJointPrimitiveState_6_0v ( mag , state ) ; break ; case 74 :
perturbSimJointPrimitiveState_6_1 ( mag , state ) ; break ; case 75 :
perturbSimJointPrimitiveState_6_1v ( mag , state ) ; break ; case 76 :
perturbSimJointPrimitiveState_6_2 ( mag , state ) ; break ; case 77 :
perturbSimJointPrimitiveState_6_2v ( mag , state ) ; break ; case 84 :
perturbSimJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbSimJointPrimitiveState_7_0v ( mag , state ) ; break ; case 86 :
perturbSimJointPrimitiveState_7_1 ( mag , state ) ; break ; case 87 :
perturbSimJointPrimitiveState_7_1v ( mag , state ) ; break ; case 88 :
perturbSimJointPrimitiveState_7_2 ( mag , state ) ; break ; case 89 :
perturbSimJointPrimitiveState_7_2v ( mag , state ) ; break ; case 96 :
perturbSimJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbSimJointPrimitiveState_8_0v ( mag , state ) ; break ; case 98 :
perturbSimJointPrimitiveState_8_1 ( mag , state ) ; break ; case 99 :
perturbSimJointPrimitiveState_8_1v ( mag , state ) ; break ; case 100 :
perturbSimJointPrimitiveState_8_2 ( mag , state ) ; break ; case 101 :
perturbSimJointPrimitiveState_8_2v ( mag , state ) ; break ; case 108 :
perturbSimJointPrimitiveState_9_0 ( mag , state ) ; break ; case 109 :
perturbSimJointPrimitiveState_9_0v ( mag , state ) ; break ; case 110 :
perturbSimJointPrimitiveState_9_1 ( mag , state ) ; break ; case 111 :
perturbSimJointPrimitiveState_9_1v ( mag , state ) ; break ; case 112 :
perturbSimJointPrimitiveState_9_2 ( mag , state ) ; break ; case 113 :
perturbSimJointPrimitiveState_9_2v ( mag , state ) ; break ; case 120 :
perturbSimJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbSimJointPrimitiveState_10_0v ( mag , state ) ; break ; case 122 :
perturbSimJointPrimitiveState_10_1 ( mag , state ) ; break ; case 123 :
perturbSimJointPrimitiveState_10_1v ( mag , state ) ; break ; case 124 :
perturbSimJointPrimitiveState_10_2 ( mag , state ) ; break ; case 125 :
perturbSimJointPrimitiveState_10_2v ( mag , state ) ; break ; case 132 :
perturbSimJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbSimJointPrimitiveState_11_0v ( mag , state ) ; break ; case 134 :
perturbSimJointPrimitiveState_11_1 ( mag , state ) ; break ; case 135 :
perturbSimJointPrimitiveState_11_1v ( mag , state ) ; break ; case 136 :
perturbSimJointPrimitiveState_11_2 ( mag , state ) ; break ; case 137 :
perturbSimJointPrimitiveState_11_2v ( mag , state ) ; break ; case 144 :
perturbSimJointPrimitiveState_12_0 ( mag , state ) ; break ; case 145 :
perturbSimJointPrimitiveState_12_0v ( mag , state ) ; break ; case 146 :
perturbSimJointPrimitiveState_12_1 ( mag , state ) ; break ; case 147 :
perturbSimJointPrimitiveState_12_1v ( mag , state ) ; break ; case 148 :
perturbSimJointPrimitiveState_12_2 ( mag , state ) ; break ; case 149 :
perturbSimJointPrimitiveState_12_2v ( mag , state ) ; break ; case 156 :
perturbSimJointPrimitiveState_13_0 ( mag , state ) ; break ; case 157 :
perturbSimJointPrimitiveState_13_0v ( mag , state ) ; break ; case 158 :
perturbSimJointPrimitiveState_13_1 ( mag , state ) ; break ; case 159 :
perturbSimJointPrimitiveState_13_1v ( mag , state ) ; break ; case 160 :
perturbSimJointPrimitiveState_13_2 ( mag , state ) ; break ; case 161 :
perturbSimJointPrimitiveState_13_2v ( mag , state ) ; break ; case 168 :
perturbSimJointPrimitiveState_14_0 ( mag , state ) ; break ; case 169 :
perturbSimJointPrimitiveState_14_0v ( mag , state ) ; break ; case 170 :
perturbSimJointPrimitiveState_14_1 ( mag , state ) ; break ; case 171 :
perturbSimJointPrimitiveState_14_1v ( mag , state ) ; break ; case 172 :
perturbSimJointPrimitiveState_14_2 ( mag , state ) ; break ; case 173 :
perturbSimJointPrimitiveState_14_2v ( mag , state ) ; break ; } } void
draft7_a151ee3d_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double mag , boolean_T doPerturbVelocity , double * state ) { (
void ) mech ; ( void ) stageIdx ; ( void ) mag ; ( void ) doPerturbVelocity ;
( void ) state ; switch ( stageIdx * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { }
} void draft7_a151ee3d_1_constructStateVector ( const void * mech , const
double * solverState , const double * u , const double * uDot , double *
discreteState , double * fullState ) { ( void ) mech ; ( void ) discreteState
; fullState [ 0 ] = solverState [ 0 ] ; fullState [ 1 ] = solverState [ 1 ] ;
fullState [ 2 ] = solverState [ 2 ] ; fullState [ 3 ] = solverState [ 3 ] ;
fullState [ 4 ] = solverState [ 4 ] ; fullState [ 5 ] = solverState [ 5 ] ;
fullState [ 6 ] = solverState [ 6 ] ; fullState [ 7 ] = solverState [ 7 ] ;
fullState [ 8 ] = solverState [ 8 ] ; fullState [ 9 ] = solverState [ 9 ] ;
fullState [ 10 ] = solverState [ 10 ] ; fullState [ 11 ] = solverState [ 11 ]
; fullState [ 12 ] = solverState [ 12 ] ; fullState [ 13 ] = solverState [ 13
] ; fullState [ 14 ] = solverState [ 14 ] ; fullState [ 15 ] = solverState [
15 ] ; fullState [ 16 ] = solverState [ 16 ] ; fullState [ 17 ] = solverState
[ 17 ] ; fullState [ 18 ] = solverState [ 18 ] ; fullState [ 19 ] =
solverState [ 19 ] ; fullState [ 20 ] = solverState [ 20 ] ; fullState [ 21 ]
= solverState [ 21 ] ; fullState [ 22 ] = solverState [ 22 ] ; fullState [ 23
] = solverState [ 23 ] ; fullState [ 24 ] = solverState [ 24 ] ; fullState [
25 ] = solverState [ 25 ] ; fullState [ 26 ] = solverState [ 26 ] ; fullState
[ 27 ] = solverState [ 27 ] ; fullState [ 28 ] = solverState [ 28 ] ;
fullState [ 29 ] = solverState [ 29 ] ; fullState [ 30 ] = u [ 52 ] ;
fullState [ 31 ] = u [ 53 ] ; fullState [ 32 ] = u [ 54 ] ; fullState [ 33 ]
= uDot [ 52 ] ; fullState [ 34 ] = uDot [ 53 ] ; fullState [ 35 ] = uDot [ 54
] ; fullState [ 36 ] = u [ 25 ] ; fullState [ 37 ] = u [ 26 ] ; fullState [
38 ] = u [ 27 ] ; fullState [ 39 ] = uDot [ 25 ] ; fullState [ 40 ] = uDot [
26 ] ; fullState [ 41 ] = uDot [ 27 ] ; fullState [ 42 ] = u [ 28 ] ;
fullState [ 43 ] = u [ 29 ] ; fullState [ 44 ] = u [ 30 ] ; fullState [ 45 ]
= uDot [ 28 ] ; fullState [ 46 ] = uDot [ 29 ] ; fullState [ 47 ] = uDot [ 30
] ; fullState [ 48 ] = u [ 31 ] ; fullState [ 49 ] = u [ 32 ] ; fullState [
50 ] = u [ 33 ] ; fullState [ 51 ] = uDot [ 31 ] ; fullState [ 52 ] = uDot [
32 ] ; fullState [ 53 ] = uDot [ 33 ] ; fullState [ 54 ] = u [ 34 ] ;
fullState [ 55 ] = u [ 35 ] ; fullState [ 56 ] = u [ 36 ] ; fullState [ 57 ]
= uDot [ 34 ] ; fullState [ 58 ] = uDot [ 35 ] ; fullState [ 59 ] = uDot [ 36
] ; fullState [ 60 ] = u [ 37 ] ; fullState [ 61 ] = u [ 38 ] ; fullState [
62 ] = u [ 39 ] ; fullState [ 63 ] = uDot [ 37 ] ; fullState [ 64 ] = uDot [
38 ] ; fullState [ 65 ] = uDot [ 39 ] ; fullState [ 66 ] = u [ 40 ] ;
fullState [ 67 ] = u [ 41 ] ; fullState [ 68 ] = u [ 42 ] ; fullState [ 69 ]
= uDot [ 40 ] ; fullState [ 70 ] = uDot [ 41 ] ; fullState [ 71 ] = uDot [ 42
] ; fullState [ 72 ] = u [ 43 ] ; fullState [ 73 ] = u [ 44 ] ; fullState [
74 ] = u [ 45 ] ; fullState [ 75 ] = uDot [ 43 ] ; fullState [ 76 ] = uDot [
44 ] ; fullState [ 77 ] = uDot [ 45 ] ; fullState [ 78 ] = u [ 46 ] ;
fullState [ 79 ] = u [ 47 ] ; fullState [ 80 ] = u [ 48 ] ; fullState [ 81 ]
= uDot [ 46 ] ; fullState [ 82 ] = uDot [ 47 ] ; fullState [ 83 ] = uDot [ 48
] ; fullState [ 84 ] = u [ 49 ] ; fullState [ 85 ] = u [ 50 ] ; fullState [
86 ] = u [ 51 ] ; fullState [ 87 ] = uDot [ 49 ] ; fullState [ 88 ] = uDot [
50 ] ; fullState [ 89 ] = uDot [ 51 ] ; fullState [ 90 ] = solverState [ 30 ]
; fullState [ 91 ] = solverState [ 31 ] ; fullState [ 92 ] = solverState [ 32
] ; fullState [ 93 ] = solverState [ 33 ] ; fullState [ 94 ] = solverState [
34 ] ; fullState [ 95 ] = solverState [ 35 ] ; fullState [ 96 ] = solverState
[ 36 ] ; fullState [ 97 ] = solverState [ 37 ] ; fullState [ 98 ] =
solverState [ 38 ] ; fullState [ 99 ] = solverState [ 39 ] ; fullState [ 100
] = solverState [ 40 ] ; fullState [ 101 ] = solverState [ 41 ] ; } void
draft7_a151ee3d_1_extractSolverStateVector ( const void * mech , const double
* fullState , double * solverState ) { ( void ) mech ; solverState [ 0 ] =
fullState [ 0 ] ; solverState [ 1 ] = fullState [ 1 ] ; solverState [ 2 ] =
fullState [ 2 ] ; solverState [ 3 ] = fullState [ 3 ] ; solverState [ 4 ] =
fullState [ 4 ] ; solverState [ 5 ] = fullState [ 5 ] ; solverState [ 6 ] =
fullState [ 6 ] ; solverState [ 7 ] = fullState [ 7 ] ; solverState [ 8 ] =
fullState [ 8 ] ; solverState [ 9 ] = fullState [ 9 ] ; solverState [ 10 ] =
fullState [ 10 ] ; solverState [ 11 ] = fullState [ 11 ] ; solverState [ 12 ]
= fullState [ 12 ] ; solverState [ 13 ] = fullState [ 13 ] ; solverState [ 14
] = fullState [ 14 ] ; solverState [ 15 ] = fullState [ 15 ] ; solverState [
16 ] = fullState [ 16 ] ; solverState [ 17 ] = fullState [ 17 ] ; solverState
[ 18 ] = fullState [ 18 ] ; solverState [ 19 ] = fullState [ 19 ] ;
solverState [ 20 ] = fullState [ 20 ] ; solverState [ 21 ] = fullState [ 21 ]
; solverState [ 22 ] = fullState [ 22 ] ; solverState [ 23 ] = fullState [ 23
] ; solverState [ 24 ] = fullState [ 24 ] ; solverState [ 25 ] = fullState [
25 ] ; solverState [ 26 ] = fullState [ 26 ] ; solverState [ 27 ] = fullState
[ 27 ] ; solverState [ 28 ] = fullState [ 28 ] ; solverState [ 29 ] =
fullState [ 29 ] ; solverState [ 30 ] = fullState [ 90 ] ; solverState [ 31 ]
= fullState [ 91 ] ; solverState [ 32 ] = fullState [ 92 ] ; solverState [ 33
] = fullState [ 93 ] ; solverState [ 34 ] = fullState [ 94 ] ; solverState [
35 ] = fullState [ 95 ] ; solverState [ 36 ] = fullState [ 96 ] ; solverState
[ 37 ] = fullState [ 97 ] ; solverState [ 38 ] = fullState [ 98 ] ;
solverState [ 39 ] = fullState [ 99 ] ; solverState [ 40 ] = fullState [ 100
] ; solverState [ 41 ] = fullState [ 101 ] ; } boolean_T
draft7_a151ee3d_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) state ; (
void ) modeVector ; return 0 ; } boolean_T
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
boolean_T bb [ 1 ] ; double xx [ 92 ] ; ( void ) mech ; ( void ) rtdvd ; (
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
; xx [ 65 ] = - ( xx [ 45 ] * xx [ 43 ] ) ; xx [ 66 ] = 0.9991449255755711 ;
xx [ 67 ] = - 0.04069340420070983 ; xx [ 68 ] = - 5.269348941183292e-3 ; xx [
69 ] = - 5.069370067487187e-3 ; pm_math_Quaternion_compose_ra ( xx + 62 , xx
+ 66 , xx + 70 ) ; xx [ 28 ] = xx [ 0 ] * state [ 25 ] ; xx [ 43 ] =
0.01017403174547095 ; xx [ 46 ] = sin ( xx [ 28 ] ) ; xx [ 49 ] =
0.9992497622599684 ; xx [ 62 ] = 0.03736845864413881 ; xx [ 63 ] = cos ( xx [
28 ] ) ; xx [ 64 ] = - ( xx [ 43 ] * xx [ 46 ] ) ; xx [ 65 ] = xx [ 49 ] * xx
[ 46 ] ; xx [ 66 ] = xx [ 62 ] * xx [ 46 ] ; pm_math_Quaternion_compose_ra (
xx + 70 , xx + 63 , xx + 74 ) ; xx [ 28 ] = xx [ 0 ] * state [ 26 ] ; xx [ 46
] = 0.01050408723065136 ; xx [ 63 ] = sin ( xx [ 28 ] ) ; xx [ 64 ] =
0.03726153110399754 ; xx [ 65 ] = 0.9992503402307336 ; xx [ 66 ] = cos ( xx [
28 ] ) ; xx [ 67 ] = xx [ 46 ] * xx [ 63 ] ; xx [ 68 ] = - ( xx [ 64 ] * xx [
63 ] ) ; xx [ 69 ] = xx [ 65 ] * xx [ 63 ] ; pm_math_Quaternion_compose_ra (
xx + 74 , xx + 66 , xx + 70 ) ; pm_math_Quaternion_compose_ra ( xx + 58 , xx
+ 70 , xx + 74 ) ; xx [ 58 ] = - xx [ 74 ] ; xx [ 59 ] = - xx [ 75 ] ; xx [
60 ] = - xx [ 76 ] ; xx [ 61 ] = - xx [ 77 ] ; xx [ 78 ] = 0.9993181225840584
; xx [ 79 ] = 0.03619150900402053 ; xx [ 80 ] = 5.246456256884902e-3 ; xx [
81 ] = 5.093058789132701e-3 ; pm_math_Quaternion_compose_ra ( xx + 58 , xx +
78 , xx + 82 ) ; xx [ 28 ] = 2.0 ; xx [ 63 ] = ( xx [ 83 ] * xx [ 85 ] + xx [
82 ] * xx [ 84 ] ) * xx [ 28 ] ; xx [ 78 ] = 0.99999999999999 ; bb [ 0 ] =
fabs ( xx [ 63 ] ) > xx [ 78 ] ; xx [ 79 ] = xx [ 84 ] * xx [ 85 ] ; xx [ 80
] = xx [ 82 ] * xx [ 83 ] ; xx [ 81 ] = xx [ 82 ] * xx [ 82 ] ; xx [ 86 ] =
1.0 ; xx [ 87 ] = ( xx [ 81 ] + xx [ 84 ] * xx [ 84 ] ) * xx [ 28 ] - xx [ 86
] ; xx [ 88 ] = ( xx [ 79 ] + xx [ 80 ] ) * xx [ 28 ] ; xx [ 87 ] = ( xx [ 88
] == 0.0 && xx [ 87 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 88 ] , xx [ 87 ] ) ; xx [
88 ] = ( xx [ 81 ] + xx [ 85 ] * xx [ 85 ] ) * xx [ 28 ] - xx [ 86 ] ; xx [
89 ] = - ( xx [ 28 ] * ( xx [ 79 ] - xx [ 80 ] ) ) ; xx [ 88 ] = ( xx [ 89 ]
== 0.0 && xx [ 88 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 89 ] , xx [ 88 ] ) ; xx [
79 ] = bb [ 0 ] ? xx [ 0 ] * xx [ 87 ] : xx [ 88 ] ; xx [ 80 ] =
1.570796326794897 ; xx [ 87 ] = ( ( cos ( pm_math_canonicalAngle ( state [ 91
] ) ) ) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 88 ] = xx [ 80 ] * ( xx [ 86 ] - xx [
87 ] ) ; if ( xx [ 63 ] < 0.0 ) xx [ 89 ] = - 1.0 ; else if ( xx [ 63 ] > 0.0
) xx [ 89 ] = + 1.0 ; else xx [ 89 ] = 0.0 ; xx [ 90 ] = fabs ( xx [ 63 ] ) >
1.0 ? atan2 ( xx [ 63 ] , 0.0 ) : asin ( xx [ 63 ] ) ; xx [ 63 ] = bb [ 0 ] ?
xx [ 80 ] * xx [ 89 ] : xx [ 90 ] ; xx [ 90 ] = ( xx [ 81 ] + xx [ 83 ] * xx
[ 83 ] ) * xx [ 28 ] - xx [ 86 ] ; xx [ 91 ] = - ( xx [ 28 ] * ( xx [ 83 ] *
xx [ 84 ] - xx [ 82 ] * xx [ 85 ] ) ) ; xx [ 90 ] = ( xx [ 91 ] == 0.0 && xx
[ 90 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 91 ] , xx [ 90 ] ) ; xx [ 81 ] = bb [ 0
] ? xx [ 89 ] * xx [ 79 ] : xx [ 90 ] ; xx [ 82 ] = xx [ 81 ] - ( xx [ 81 ] <
0.0 ? - 1.0 : + 1.0 ) * xx [ 88 ] ; xx [ 81 ] = xx [ 11 ] * xx [ 1 ] + xx [ 7
] * xx [ 3 ] ; xx [ 83 ] = ( xx [ 86 ] - ( xx [ 12 ] * xx [ 12 ] + xx [ 5 ] *
xx [ 5 ] ) * xx [ 28 ] ) * state [ 3 ] + xx [ 28 ] * xx [ 2 ] * xx [ 81 ] *
state [ 4 ] ; xx [ 84 ] = xx [ 28 ] * ( xx [ 4 ] * xx [ 12 ] + xx [ 5 ] * xx
[ 6 ] ) * state [ 3 ] + ( xx [ 7 ] - xx [ 28 ] * xx [ 3 ] * xx [ 81 ] ) *
state [ 4 ] + xx [ 11 ] * state [ 5 ] ; xx [ 85 ] = xx [ 28 ] * ( xx [ 5 ] *
xx [ 4 ] - xx [ 12 ] * xx [ 6 ] ) * state [ 3 ] + ( xx [ 28 ] * xx [ 1 ] * xx
[ 81 ] - xx [ 11 ] ) * state [ 4 ] + xx [ 7 ] * state [ 5 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 24 , xx + 83 , xx + 1 ) ; xx [ 4 ]
= xx [ 17 ] * xx [ 8 ] ; xx [ 5 ] = xx [ 17 ] * xx [ 18 ] ; xx [ 6 ] = xx [
20 ] * xx [ 8 ] + xx [ 19 ] * xx [ 18 ] ; xx [ 24 ] = xx [ 1 ] + ( xx [ 86 ]
- ( xx [ 22 ] * xx [ 22 ] + xx [ 23 ] * xx [ 23 ] ) * xx [ 28 ] ) * state [ 9
] + ( xx [ 17 ] - ( xx [ 4 ] * xx [ 8 ] + xx [ 5 ] * xx [ 18 ] - xx [ 9 ] *
xx [ 6 ] ) * xx [ 28 ] ) * state [ 10 ] ; xx [ 25 ] = xx [ 2 ] + xx [ 28 ] *
( xx [ 21 ] * xx [ 22 ] - xx [ 23 ] * xx [ 10 ] ) * state [ 9 ] + ( xx [ 19 ]
- xx [ 28 ] * ( xx [ 18 ] * xx [ 6 ] + xx [ 9 ] * xx [ 5 ] ) ) * state [ 10 ]
+ xx [ 20 ] * state [ 11 ] ; xx [ 26 ] = xx [ 3 ] + xx [ 28 ] * ( xx [ 22 ] *
xx [ 10 ] + xx [ 23 ] * xx [ 21 ] ) * state [ 9 ] + ( xx [ 28 ] * ( xx [ 9 ]
* xx [ 4 ] + xx [ 8 ] * xx [ 6 ] ) - xx [ 20 ] ) * state [ 10 ] + xx [ 19 ] *
state [ 11 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 39 , xx + 24 , xx +
1 ) ; xx [ 4 ] = xx [ 38 ] * xx [ 35 ] ; xx [ 5 ] = xx [ 35 ] * xx [ 36 ] +
xx [ 37 ] ; xx [ 6 ] = xx [ 4 ] ; xx [ 7 ] = xx [ 38 ] ; xx [ 8 ] = - xx [ 5
] ; pm_math_Vector3_cross_ra ( xx + 36 , xx + 6 , xx + 9 ) ; xx [ 6 ] = xx [
34 ] * xx [ 13 ] + xx [ 33 ] * xx [ 32 ] ; xx [ 7 ] = xx [ 16 ] * xx [ 13 ] ;
xx [ 8 ] = xx [ 16 ] * xx [ 32 ] ; xx [ 17 ] = xx [ 1 ] + ( xx [ 86 ] + ( xx
[ 9 ] - xx [ 4 ] * xx [ 15 ] ) * xx [ 28 ] ) * state [ 15 ] + ( ( xx [ 14 ] *
xx [ 6 ] + xx [ 7 ] * xx [ 13 ] + xx [ 8 ] * xx [ 32 ] ) * xx [ 28 ] - xx [
16 ] ) * state [ 16 ] ; xx [ 18 ] = xx [ 2 ] + ( xx [ 28 ] * ( xx [ 10 ] - xx
[ 38 ] * xx [ 15 ] ) - xx [ 35 ] ) * state [ 15 ] + ( xx [ 33 ] + xx [ 28 ] *
( xx [ 14 ] * xx [ 8 ] - xx [ 32 ] * xx [ 6 ] ) ) * state [ 16 ] + xx [ 34 ]
* state [ 17 ] ; xx [ 19 ] = xx [ 3 ] + xx [ 28 ] * ( xx [ 11 ] + xx [ 15 ] *
xx [ 5 ] ) * state [ 15 ] + ( xx [ 28 ] * ( xx [ 13 ] * xx [ 6 ] - xx [ 14 ]
* xx [ 7 ] ) - xx [ 34 ] ) * state [ 16 ] + xx [ 33 ] * state [ 17 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 54 , xx + 17 , xx + 1 ) ; xx [ 4 ]
= xx [ 47 ] * xx [ 57 ] ; xx [ 5 ] = xx [ 47 ] * xx [ 55 ] - xx [ 56 ] ; xx [
6 ] = - xx [ 4 ] ; xx [ 7 ] = xx [ 57 ] ; xx [ 8 ] = xx [ 5 ] ;
pm_math_Vector3_cross_ra ( xx + 55 , xx + 6 , xx + 9 ) ; xx [ 6 ] = xx [ 29 ]
; xx [ 7 ] = xx [ 31 ] ; xx [ 8 ] = - xx [ 48 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 50 , xx + 6 , xx + 12 ) ; xx [ 6 ]
= xx [ 1 ] + ( xx [ 86 ] + ( xx [ 54 ] * xx [ 4 ] + xx [ 9 ] ) * xx [ 28 ] )
* state [ 21 ] + xx [ 12 ] * state [ 22 ] + xx [ 30 ] * state [ 23 ] ; xx [ 7
] = xx [ 2 ] + ( xx [ 47 ] + xx [ 28 ] * ( xx [ 10 ] - xx [ 54 ] * xx [ 57 ]
) ) * state [ 21 ] + xx [ 13 ] * state [ 22 ] + xx [ 48 ] * state [ 23 ] ; xx
[ 8 ] = xx [ 3 ] + xx [ 28 ] * ( xx [ 11 ] - xx [ 54 ] * xx [ 5 ] ) * state [
21 ] + xx [ 14 ] * state [ 22 ] + xx [ 31 ] * state [ 23 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 70 , xx + 6 , xx + 1 ) ; xx [ 4 ] =
xx [ 44 ] * xx [ 73 ] - xx [ 45 ] * xx [ 72 ] ; xx [ 5 ] = xx [ 73 ] + xx [
45 ] * xx [ 71 ] ; xx [ 6 ] = xx [ 44 ] * xx [ 71 ] + xx [ 72 ] ; xx [ 7 ] =
xx [ 4 ] ; xx [ 8 ] = xx [ 5 ] ; xx [ 9 ] = - xx [ 6 ] ;
pm_math_Vector3_cross_ra ( xx + 71 , xx + 7 , xx + 10 ) ; xx [ 7 ] = - xx [
43 ] ; xx [ 8 ] = xx [ 49 ] ; xx [ 9 ] = xx [ 62 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 66 , xx + 7 , xx + 13 ) ; xx [ 7 ]
= xx [ 1 ] + ( xx [ 86 ] + xx [ 28 ] * ( xx [ 10 ] - xx [ 70 ] * xx [ 4 ] ) )
* state [ 27 ] + xx [ 13 ] * state [ 28 ] + xx [ 46 ] * state [ 29 ] ; xx [ 8
] = xx [ 2 ] + ( xx [ 28 ] * ( xx [ 11 ] - xx [ 70 ] * xx [ 5 ] ) - xx [ 44 ]
) * state [ 27 ] + xx [ 14 ] * state [ 28 ] - xx [ 64 ] * state [ 29 ] ; xx [
9 ] = xx [ 3 ] + ( xx [ 28 ] * ( xx [ 12 ] + xx [ 70 ] * xx [ 6 ] ) - xx [ 45
] ) * state [ 27 ] + xx [ 15 ] * state [ 28 ] + xx [ 65 ] * state [ 29 ] ; xx
[ 1 ] = xx [ 86 ] - ( xx [ 76 ] * xx [ 76 ] + xx [ 77 ] * xx [ 77 ] ) * xx [
28 ] ; xx [ 2 ] = xx [ 28 ] * ( xx [ 75 ] * xx [ 76 ] - xx [ 74 ] * xx [ 77 ]
) ; xx [ 3 ] = ( xx [ 74 ] * xx [ 76 ] + xx [ 75 ] * xx [ 77 ] ) * xx [ 28 ]
; xx [ 4 ] = pm_math_Vector3_dot_ra ( xx + 7 , xx + 1 ) ; xx [ 5 ] =
0.01085440859974902 ; xx [ 6 ] = 0.07228022064246183 ; xx [ 10 ] =
0.997325298745513 ; xx [ 11 ] = xx [ 5 ] ; xx [ 12 ] = - xx [ 6 ] ; xx [ 13 ]
= xx [ 10 ] ; xx [ 14 ] = pm_math_Vector3_dot_ra ( xx + 1 , xx + 11 ) ; xx [
15 ] = xx [ 86 ] - xx [ 14 ] * xx [ 14 ] ; xx [ 15 ] = xx [ 15 ] == 0.0 ? 0.0
: ( pm_math_Vector3_dot_ra ( xx + 7 , xx + 11 ) - xx [ 4 ] * xx [ 14 ] ) / xx
[ 15 ] ; xx [ 11 ] = xx [ 0 ] * xx [ 82 ] ; xx [ 12 ] = sin ( xx [ 11 ] ) ;
xx [ 16 ] = cos ( xx [ 11 ] ) ; xx [ 17 ] = xx [ 5 ] * xx [ 12 ] ; xx [ 18 ]
= - ( xx [ 6 ] * xx [ 12 ] ) ; xx [ 19 ] = xx [ 10 ] * xx [ 12 ] ; xx [ 10 ]
= - 9.799417557012156e-3 ; xx [ 11 ] = 0.9973284708563647 ; xx [ 12 ] =
0.07238710268306554 ; pm_math_Quaternion_inverseXform_ra ( xx + 16 , xx + 10
, xx + 20 ) ; xx [ 10 ] = 0.9958524573065585 ; xx [ 11 ] = -
0.09068858100887965 ; xx [ 12 ] = 4.55902949587172e-3 ; xx [ 13 ] =
5.716624978144062e-3 ; pm_math_Quaternion_compose_ra ( xx + 58 , xx + 10 , xx
+ 16 ) ; xx [ 5 ] = ( xx [ 17 ] * xx [ 19 ] + xx [ 16 ] * xx [ 18 ] ) * xx [
28 ] ; bb [ 0 ] = fabs ( xx [ 5 ] ) > xx [ 78 ] ; xx [ 6 ] = xx [ 18 ] * xx [
19 ] ; xx [ 10 ] = xx [ 16 ] * xx [ 17 ] ; xx [ 11 ] = xx [ 16 ] * xx [ 16 ]
; xx [ 12 ] = ( xx [ 11 ] + xx [ 18 ] * xx [ 18 ] ) * xx [ 28 ] - xx [ 86 ] ;
xx [ 13 ] = ( xx [ 6 ] + xx [ 10 ] ) * xx [ 28 ] ; xx [ 12 ] = ( xx [ 13 ] ==
0.0 && xx [ 12 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 13 ] , xx [ 12 ] ) ; xx [ 13 ]
= ( xx [ 11 ] + xx [ 19 ] * xx [ 19 ] ) * xx [ 28 ] - xx [ 86 ] ; xx [ 23 ] =
- ( xx [ 28 ] * ( xx [ 6 ] - xx [ 10 ] ) ) ; xx [ 13 ] = ( xx [ 23 ] == 0.0
&& xx [ 13 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 23 ] , xx [ 13 ] ) ; xx [ 6 ] = bb
[ 0 ] ? xx [ 0 ] * xx [ 12 ] : xx [ 13 ] ; xx [ 10 ] = ( ( cos (
pm_math_canonicalAngle ( state [ 97 ] ) ) ) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 12
] = xx [ 80 ] * ( xx [ 86 ] - xx [ 10 ] ) ; if ( xx [ 5 ] < 0.0 ) xx [ 13 ] =
- 1.0 ; else if ( xx [ 5 ] > 0.0 ) xx [ 13 ] = + 1.0 ; else xx [ 13 ] = 0.0 ;
xx [ 23 ] = fabs ( xx [ 5 ] ) > 1.0 ? atan2 ( xx [ 5 ] , 0.0 ) : asin ( xx [
5 ] ) ; xx [ 5 ] = bb [ 0 ] ? xx [ 80 ] * xx [ 13 ] : xx [ 23 ] ; xx [ 23 ] =
( xx [ 11 ] + xx [ 17 ] * xx [ 17 ] ) * xx [ 28 ] - xx [ 86 ] ; xx [ 24 ] = -
( xx [ 28 ] * ( xx [ 17 ] * xx [ 18 ] - xx [ 16 ] * xx [ 19 ] ) ) ; xx [ 23 ]
= ( xx [ 24 ] == 0.0 && xx [ 23 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 24 ] , xx [
23 ] ) ; xx [ 11 ] = bb [ 0 ] ? xx [ 13 ] * xx [ 6 ] : xx [ 23 ] ; xx [ 13 ]
= xx [ 11 ] - ( xx [ 11 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 12 ] ; xx [ 11 ] =
8.043376237938261e-3 ; xx [ 16 ] = 0.1806770170184598 ; xx [ 17 ] =
0.9835095930493033 ; xx [ 23 ] = xx [ 11 ] ; xx [ 24 ] = xx [ 16 ] ; xx [ 25
] = xx [ 17 ] ; xx [ 18 ] = pm_math_Vector3_dot_ra ( xx + 1 , xx + 23 ) ; xx
[ 1 ] = xx [ 86 ] - xx [ 18 ] * xx [ 18 ] ; xx [ 1 ] = xx [ 1 ] == 0.0 ? 0.0
: ( pm_math_Vector3_dot_ra ( xx + 7 , xx + 23 ) - xx [ 4 ] * xx [ 18 ] ) / xx
[ 1 ] ; xx [ 2 ] = xx [ 0 ] * xx [ 13 ] ; xx [ 0 ] = sin ( xx [ 2 ] ) ; xx [
23 ] = cos ( xx [ 2 ] ) ; xx [ 24 ] = xx [ 11 ] * xx [ 0 ] ; xx [ 25 ] = xx [
16 ] * xx [ 0 ] ; xx [ 26 ] = xx [ 17 ] * xx [ 0 ] ; xx [ 27 ] = -
0.0122127338954861 ; xx [ 28 ] = 0.9834858029469102 ; xx [ 29 ] = -
0.180572767970891 ; pm_math_Quaternion_inverseXform_ra ( xx + 23 , xx + 27 ,
xx + 30 ) ; state [ 90 ] = state [ 90 ] + pm_math_canonicalAngle ( xx [ 79 ]
- ( xx [ 79 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 88 ] - state [ 90 ] ) ; state [
91 ] = state [ 91 ] + pm_math_canonicalAngle ( xx [ 87 ] * xx [ 63 ] + ( xx [
63 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 88 ] - state [ 91 ] ) ; state [ 92 ] =
state [ 92 ] + pm_math_canonicalAngle ( xx [ 82 ] - state [ 92 ] ) ; state [
93 ] = xx [ 4 ] - xx [ 14 ] * xx [ 15 ] ; state [ 94 ] =
pm_math_Vector3_dot_ra ( xx + 7 , xx + 20 ) ; state [ 95 ] = xx [ 15 ] ;
state [ 96 ] = state [ 96 ] + pm_math_canonicalAngle ( xx [ 6 ] - ( xx [ 6 ]
< 0.0 ? - 1.0 : + 1.0 ) * xx [ 12 ] - state [ 96 ] ) ; state [ 97 ] = state [
97 ] + pm_math_canonicalAngle ( xx [ 10 ] * xx [ 5 ] + ( xx [ 5 ] < 0.0 ? -
1.0 : + 1.0 ) * xx [ 12 ] - state [ 97 ] ) ; state [ 98 ] = state [ 98 ] +
pm_math_canonicalAngle ( xx [ 13 ] - state [ 98 ] ) ; state [ 99 ] = xx [ 4 ]
- xx [ 18 ] * xx [ 1 ] ; state [ 100 ] = pm_math_Vector3_dot_ra ( xx + 7 , xx
+ 30 ) ; state [ 101 ] = xx [ 1 ] ; return NULL ; } void
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
