#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "draft7_a151ee3d_1_geometries.h"
PmfMessageId draft7_a151ee3d_1_compOutputsDyn ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
deriv , double * output , int * derivErr , double * errorResult ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; boolean_T bb [ 3 ]
; int ii [ 2 ] ; double xx [ 1686 ] ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) eqnEnableFlags ; ( void ) modeVector ; ( void ) discreteState ; ( void
) neDiagMgr ; ( void ) derivErr ; xx [ 0 ] = 1.0 ; xx [ 1 ] = 0.5 ; xx [ 2 ]
= xx [ 1 ] * state [ 2 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] =
0.1535761481414752 ; xx [ 5 ] = xx [ 1 ] * state [ 0 ] ; xx [ 6 ] = cos ( xx
[ 5 ] ) ; xx [ 7 ] = 0.9881368157912284 ; xx [ 8 ] = sin ( xx [ 5 ] ) ; xx [
5 ] = xx [ 4 ] * xx [ 6 ] - xx [ 7 ] * xx [ 8 ] ; xx [ 9 ] =
0.258564134865625 ; xx [ 10 ] = xx [ 1 ] * state [ 1 ] ; xx [ 11 ] = sin ( xx
[ 10 ] ) ; xx [ 12 ] = xx [ 9 ] * xx [ 11 ] ; xx [ 13 ] = 0.9659940932330751
; xx [ 14 ] = xx [ 13 ] * xx [ 11 ] ; xx [ 11 ] = xx [ 7 ] * xx [ 6 ] + xx [
4 ] * xx [ 8 ] ; xx [ 4 ] = xx [ 5 ] * xx [ 12 ] - xx [ 14 ] * xx [ 11 ] ; xx
[ 6 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 9 ] * xx [ 6 ] ; xx [ 7 ] = cos (
xx [ 10 ] ) ; xx [ 8 ] = xx [ 7 ] * xx [ 11 ] ; xx [ 10 ] = xx [ 5 ] * xx [ 7
] ; xx [ 7 ] = xx [ 13 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 3 ] * xx [ 4 ] - xx [ 2
] * xx [ 8 ] - xx [ 10 ] * xx [ 7 ] ; xx [ 15 ] = xx [ 12 ] * xx [ 11 ] + xx
[ 5 ] * xx [ 14 ] ; xx [ 5 ] = xx [ 15 ] * xx [ 3 ] - xx [ 7 ] * xx [ 8 ] +
xx [ 10 ] * xx [ 2 ] ; xx [ 11 ] = 2.0 ; xx [ 12 ] = xx [ 0 ] - ( xx [ 6 ] *
xx [ 6 ] + xx [ 5 ] * xx [ 5 ] ) * xx [ 11 ] ; xx [ 14 ] = xx [ 3 ] * xx [ 10
] + xx [ 7 ] * xx [ 4 ] - xx [ 15 ] * xx [ 2 ] ; xx [ 10 ] = xx [ 3 ] * xx [
8 ] + xx [ 2 ] * xx [ 4 ] + xx [ 15 ] * xx [ 7 ] ; xx [ 4 ] = xx [ 11 ] * (
xx [ 14 ] * xx [ 6 ] + xx [ 5 ] * xx [ 10 ] ) ; xx [ 8 ] = ( xx [ 5 ] * xx [
14 ] - xx [ 6 ] * xx [ 10 ] ) * xx [ 11 ] ; xx [ 15 ] = xx [ 12 ] ; xx [ 16 ]
= xx [ 4 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = 2.799562800393933e-6 ; xx [
19 ] = xx [ 1 ] * state [ 8 ] ; xx [ 20 ] = cos ( xx [ 19 ] ) ; xx [ 21 ] =
0.08149234695961537 ; xx [ 22 ] = xx [ 1 ] * state [ 6 ] ; xx [ 23 ] = sin (
xx [ 22 ] ) ; xx [ 24 ] = 0.9966739674472358 ; xx [ 25 ] = cos ( xx [ 22 ] )
; xx [ 22 ] = 3.301712910522993e-12 ; xx [ 26 ] = xx [ 21 ] * xx [ 23 ] - xx
[ 24 ] * xx [ 25 ] ; xx [ 27 ] = - ( xx [ 21 ] * xx [ 25 ] + xx [ 24 ] * xx [
23 ] ) ; xx [ 28 ] = xx [ 22 ] * xx [ 23 ] ; xx [ 29 ] = - ( xx [ 22 ] * xx [
25 ] ) ; xx [ 21 ] = xx [ 1 ] * state [ 7 ] ; xx [ 22 ] =
6.558709267800361e-12 ; xx [ 23 ] = sin ( xx [ 21 ] ) ; xx [ 24 ] =
0.9694837936076719 ; xx [ 25 ] = 0.2451554077153451 ; xx [ 30 ] = cos ( xx [
21 ] ) ; xx [ 31 ] = xx [ 22 ] * xx [ 23 ] ; xx [ 32 ] = xx [ 24 ] * xx [ 23
] ; xx [ 33 ] = - ( xx [ 25 ] * xx [ 23 ] ) ; pm_math_Quaternion_compose_ra (
xx + 26 , xx + 30 , xx + 34 ) ; xx [ 21 ] = sin ( xx [ 19 ] ) ; xx [ 19 ] =
xx [ 25 ] * xx [ 21 ] ; xx [ 23 ] = xx [ 24 ] * xx [ 21 ] ; xx [ 21 ] = xx [
20 ] * xx [ 34 ] - ( xx [ 36 ] * xx [ 19 ] + xx [ 37 ] * xx [ 23 ] ) ; xx [
26 ] = xx [ 21 ] * xx [ 21 ] ; xx [ 27 ] = xx [ 20 ] * xx [ 35 ] + xx [ 36 ]
* xx [ 23 ] - xx [ 37 ] * xx [ 19 ] ; xx [ 28 ] = xx [ 34 ] * xx [ 19 ] + xx
[ 20 ] * xx [ 36 ] - xx [ 35 ] * xx [ 23 ] ; xx [ 29 ] = xx [ 27 ] * xx [ 28
] ; xx [ 30 ] = xx [ 34 ] * xx [ 23 ] + xx [ 20 ] * xx [ 37 ] + xx [ 35 ] *
xx [ 19 ] ; xx [ 31 ] = xx [ 30 ] * xx [ 21 ] ; xx [ 32 ] = xx [ 11 ] * ( xx
[ 29 ] - xx [ 31 ] ) ; xx [ 33 ] = xx [ 30 ] * xx [ 27 ] ; xx [ 34 ] = xx [
28 ] * xx [ 21 ] ; xx [ 35 ] = xx [ 28 ] * xx [ 28 ] ; xx [ 36 ] = xx [ 30 ]
* xx [ 28 ] ; xx [ 37 ] = xx [ 27 ] * xx [ 21 ] ; xx [ 38 ] = xx [ 30 ] * xx
[ 30 ] ; xx [ 39 ] = ( xx [ 26 ] + xx [ 27 ] * xx [ 27 ] ) * xx [ 11 ] - xx [
0 ] ; xx [ 40 ] = xx [ 32 ] ; xx [ 41 ] = ( xx [ 33 ] + xx [ 34 ] ) * xx [ 11
] ; xx [ 42 ] = ( xx [ 29 ] + xx [ 31 ] ) * xx [ 11 ] ; xx [ 43 ] = ( xx [ 26
] + xx [ 35 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 44 ] = xx [ 11 ] * ( xx [ 36 ]
- xx [ 37 ] ) ; xx [ 45 ] = xx [ 11 ] * ( xx [ 33 ] - xx [ 34 ] ) ; xx [ 46 ]
= ( xx [ 36 ] + xx [ 37 ] ) * xx [ 11 ] ; xx [ 47 ] = ( xx [ 26 ] + xx [ 38 ]
) * xx [ 11 ] - xx [ 0 ] ; xx [ 26 ] = xx [ 1 ] * state [ 14 ] ; xx [ 29 ] =
cos ( xx [ 26 ] ) ; xx [ 31 ] = 0.1159778701879254 ; xx [ 36 ] = xx [ 1 ] *
state [ 12 ] ; xx [ 37 ] = sin ( xx [ 36 ] ) ; xx [ 48 ] = 0.9932517976961697
; xx [ 49 ] = cos ( xx [ 36 ] ) ; xx [ 36 ] = 4.654509323289534e-12 ; xx [ 50
] = 6.655858618855781e-12 ; xx [ 51 ] = xx [ 50 ] * xx [ 37 ] ; xx [ 52 ] =
xx [ 31 ] * xx [ 37 ] - xx [ 48 ] * xx [ 49 ] ; xx [ 53 ] = - ( xx [ 31 ] *
xx [ 49 ] + xx [ 48 ] * xx [ 37 ] + xx [ 36 ] * xx [ 51 ] ) ; xx [ 54 ] = xx
[ 48 ] * xx [ 51 ] - xx [ 36 ] * xx [ 37 ] ; xx [ 55 ] = xx [ 36 ] * xx [ 49
] - xx [ 31 ] * xx [ 51 ] ; xx [ 31 ] = xx [ 1 ] * state [ 13 ] ; xx [ 36 ] =
2.702350965790575e-12 ; xx [ 37 ] = sin ( xx [ 31 ] ) ; xx [ 48 ] =
0.9452391332067189 ; xx [ 49 ] = 0.3263785854718576 ; xx [ 56 ] = cos ( xx [
31 ] ) ; xx [ 57 ] = - ( xx [ 36 ] * xx [ 37 ] ) ; xx [ 58 ] = xx [ 48 ] * xx
[ 37 ] ; xx [ 59 ] = - ( xx [ 49 ] * xx [ 37 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 52 , xx + 56 , xx + 60 ) ; xx [ 31 ] =
sin ( xx [ 26 ] ) ; xx [ 26 ] = xx [ 49 ] * xx [ 31 ] ; xx [ 37 ] = xx [ 48 ]
* xx [ 31 ] ; xx [ 31 ] = xx [ 29 ] * xx [ 60 ] - ( xx [ 62 ] * xx [ 26 ] +
xx [ 63 ] * xx [ 37 ] ) ; xx [ 51 ] = xx [ 31 ] * xx [ 31 ] ; xx [ 52 ] = xx
[ 29 ] * xx [ 61 ] + xx [ 62 ] * xx [ 37 ] - xx [ 63 ] * xx [ 26 ] ; xx [ 53
] = xx [ 60 ] * xx [ 26 ] + xx [ 29 ] * xx [ 62 ] - xx [ 61 ] * xx [ 37 ] ;
xx [ 54 ] = xx [ 52 ] * xx [ 53 ] ; xx [ 55 ] = xx [ 60 ] * xx [ 37 ] + xx [
29 ] * xx [ 63 ] + xx [ 61 ] * xx [ 26 ] ; xx [ 56 ] = xx [ 55 ] * xx [ 31 ]
; xx [ 57 ] = xx [ 55 ] * xx [ 52 ] ; xx [ 58 ] = xx [ 53 ] * xx [ 31 ] ; xx
[ 59 ] = xx [ 55 ] * xx [ 53 ] ; xx [ 60 ] = xx [ 52 ] * xx [ 31 ] ; xx [ 61
] = ( xx [ 51 ] + xx [ 52 ] * xx [ 52 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 62 ]
= xx [ 11 ] * ( xx [ 54 ] - xx [ 56 ] ) ; xx [ 63 ] = ( xx [ 57 ] + xx [ 58 ]
) * xx [ 11 ] ; xx [ 64 ] = ( xx [ 54 ] + xx [ 56 ] ) * xx [ 11 ] ; xx [ 65 ]
= ( xx [ 51 ] + xx [ 53 ] * xx [ 53 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 66 ] =
xx [ 11 ] * ( xx [ 59 ] - xx [ 60 ] ) ; xx [ 67 ] = xx [ 11 ] * ( xx [ 57 ] -
xx [ 58 ] ) ; xx [ 68 ] = ( xx [ 59 ] + xx [ 60 ] ) * xx [ 11 ] ; xx [ 69 ] =
( xx [ 51 ] + xx [ 55 ] * xx [ 55 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 51 ] =
0.9961405467325101 ; xx [ 54 ] = xx [ 1 ] * state [ 18 ] ; xx [ 57 ] = cos (
xx [ 54 ] ) ; xx [ 58 ] = 3.201611086326645e-12 ; xx [ 59 ] =
2.826845832587476e-12 ; xx [ 60 ] = sin ( xx [ 54 ] ) ; xx [ 54 ] = xx [ 59 ]
* xx [ 60 ] ; xx [ 70 ] = 0.08777249657755079 ; xx [ 71 ] =
1.028498847019974e-11 ; xx [ 72 ] = - ( xx [ 51 ] * xx [ 57 ] + xx [ 58 ] *
xx [ 54 ] - xx [ 70 ] * xx [ 60 ] ) ; xx [ 73 ] = - ( xx [ 70 ] * xx [ 57 ] +
xx [ 51 ] * xx [ 60 ] + xx [ 71 ] * xx [ 54 ] ) ; xx [ 74 ] = xx [ 58 ] * xx
[ 57 ] - xx [ 51 ] * xx [ 54 ] + xx [ 71 ] * xx [ 60 ] ; xx [ 75 ] = xx [ 58
] * xx [ 60 ] - xx [ 71 ] * xx [ 57 ] + xx [ 70 ] * xx [ 54 ] ; xx [ 51 ] =
xx [ 1 ] * state [ 19 ] ; xx [ 54 ] = 1.596819818085218e-11 ; xx [ 57 ] = sin
( xx [ 51 ] ) ; xx [ 58 ] = 0.9562867924269723 ; xx [ 60 ] =
0.2924304543472392 ; xx [ 76 ] = cos ( xx [ 51 ] ) ; xx [ 77 ] = xx [ 54 ] *
xx [ 57 ] ; xx [ 78 ] = xx [ 58 ] * xx [ 57 ] ; xx [ 79 ] = - ( xx [ 60 ] *
xx [ 57 ] ) ; pm_math_Quaternion_compose_ra ( xx + 72 , xx + 76 , xx + 80 ) ;
xx [ 51 ] = xx [ 1 ] * state [ 20 ] ; xx [ 57 ] = cos ( xx [ 51 ] ) ; xx [ 70
] = 1.035832709073648e-11 ; xx [ 71 ] = sin ( xx [ 51 ] ) ; xx [ 51 ] = xx [
70 ] * xx [ 71 ] ; xx [ 72 ] = xx [ 60 ] * xx [ 71 ] ; xx [ 73 ] = xx [ 58 ]
* xx [ 71 ] ; xx [ 74 ] = xx [ 57 ] ; xx [ 75 ] = xx [ 51 ] ; xx [ 76 ] = xx
[ 72 ] ; xx [ 77 ] = xx [ 73 ] ; pm_math_Quaternion_compose_ra ( xx + 80 , xx
+ 74 , xx + 84 ) ; xx [ 71 ] = xx [ 84 ] * xx [ 84 ] ; xx [ 78 ] = xx [ 85 ]
* xx [ 86 ] ; xx [ 79 ] = xx [ 84 ] * xx [ 87 ] ; xx [ 80 ] = xx [ 85 ] * xx
[ 87 ] ; xx [ 81 ] = xx [ 84 ] * xx [ 86 ] ; xx [ 82 ] = xx [ 86 ] * xx [ 87
] ; xx [ 83 ] = xx [ 84 ] * xx [ 85 ] ; xx [ 88 ] = ( xx [ 71 ] + xx [ 85 ] *
xx [ 85 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 89 ] = xx [ 11 ] * ( xx [ 78 ] - xx
[ 79 ] ) ; xx [ 90 ] = ( xx [ 80 ] + xx [ 81 ] ) * xx [ 11 ] ; xx [ 91 ] = (
xx [ 78 ] + xx [ 79 ] ) * xx [ 11 ] ; xx [ 92 ] = ( xx [ 71 ] + xx [ 86 ] *
xx [ 86 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 93 ] = xx [ 11 ] * ( xx [ 82 ] - xx
[ 83 ] ) ; xx [ 94 ] = xx [ 11 ] * ( xx [ 80 ] - xx [ 81 ] ) ; xx [ 95 ] = (
xx [ 82 ] + xx [ 83 ] ) * xx [ 11 ] ; xx [ 96 ] = ( xx [ 71 ] + xx [ 87 ] *
xx [ 87 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 71 ] = xx [ 1 ] * state [ 24 ] ; xx
[ 78 ] = sin ( xx [ 71 ] ) ; xx [ 80 ] = 1.82992095932877e-11 ; xx [ 81 ] =
5.235917730680519e-12 ; xx [ 97 ] = cos ( xx [ 71 ] ) ; xx [ 98 ] = xx [ 78 ]
; xx [ 99 ] = - ( xx [ 80 ] * xx [ 78 ] ) ; xx [ 100 ] = - ( xx [ 81 ] * xx [
78 ] ) ; xx [ 101 ] = 0.9991449255755711 ; xx [ 102 ] = - 0.04069340420070983
; xx [ 103 ] = - 5.269348941183292e-3 ; xx [ 104 ] = - 5.069370067487187e-3 ;
pm_math_Quaternion_compose_ra ( xx + 97 , xx + 101 , xx + 105 ) ; xx [ 71 ] =
xx [ 1 ] * state [ 25 ] ; xx [ 78 ] = 0.01017403174547095 ; xx [ 82 ] = sin (
xx [ 71 ] ) ; xx [ 83 ] = 0.9992497622599684 ; xx [ 97 ] =
0.03736845864413881 ; xx [ 98 ] = cos ( xx [ 71 ] ) ; xx [ 99 ] = - ( xx [ 78
] * xx [ 82 ] ) ; xx [ 100 ] = xx [ 83 ] * xx [ 82 ] ; xx [ 101 ] = xx [ 97 ]
* xx [ 82 ] ; pm_math_Quaternion_compose_ra ( xx + 105 , xx + 98 , xx + 109 )
; xx [ 71 ] = xx [ 1 ] * state [ 26 ] ; xx [ 82 ] = cos ( xx [ 71 ] ) ; xx [
98 ] = 0.01050408723065136 ; xx [ 99 ] = sin ( xx [ 71 ] ) ; xx [ 71 ] = xx [
98 ] * xx [ 99 ] ; xx [ 100 ] = 0.03726153110399754 ; xx [ 101 ] = xx [ 100 ]
* xx [ 99 ] ; xx [ 102 ] = 0.9992503402307336 ; xx [ 103 ] = xx [ 102 ] * xx
[ 99 ] ; xx [ 104 ] = xx [ 82 ] ; xx [ 105 ] = xx [ 71 ] ; xx [ 106 ] = - xx
[ 101 ] ; xx [ 107 ] = xx [ 103 ] ; pm_math_Quaternion_compose_ra ( xx + 109
, xx + 104 , xx + 113 ) ; xx [ 99 ] = xx [ 113 ] * xx [ 113 ] ; xx [ 108 ] =
xx [ 114 ] * xx [ 115 ] ; xx [ 109 ] = xx [ 113 ] * xx [ 116 ] ; xx [ 110 ] =
xx [ 114 ] * xx [ 116 ] ; xx [ 111 ] = xx [ 113 ] * xx [ 115 ] ; xx [ 112 ] =
xx [ 115 ] * xx [ 116 ] ; xx [ 117 ] = xx [ 113 ] * xx [ 114 ] ; xx [ 118 ] =
( xx [ 99 ] + xx [ 114 ] * xx [ 114 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 119 ] =
xx [ 11 ] * ( xx [ 108 ] - xx [ 109 ] ) ; xx [ 120 ] = ( xx [ 110 ] + xx [
111 ] ) * xx [ 11 ] ; xx [ 121 ] = ( xx [ 108 ] + xx [ 109 ] ) * xx [ 11 ] ;
xx [ 122 ] = ( xx [ 99 ] + xx [ 115 ] * xx [ 115 ] ) * xx [ 11 ] - xx [ 0 ] ;
xx [ 123 ] = xx [ 11 ] * ( xx [ 112 ] - xx [ 117 ] ) ; xx [ 124 ] = xx [ 11 ]
* ( xx [ 110 ] - xx [ 111 ] ) ; xx [ 125 ] = ( xx [ 112 ] + xx [ 117 ] ) * xx
[ 11 ] ; xx [ 126 ] = ( xx [ 99 ] + xx [ 116 ] * xx [ 116 ] ) * xx [ 11 ] -
xx [ 0 ] ; xx [ 99 ] = xx [ 1 ] * input [ 54 ] ; xx [ 108 ] = cos ( xx [ 99 ]
) ; xx [ 109 ] = xx [ 1 ] * input [ 53 ] ; xx [ 110 ] = cos ( xx [ 109 ] ) ;
xx [ 111 ] = xx [ 1 ] * input [ 52 ] ; xx [ 112 ] = 0.9998930708978301 ; xx [
117 ] = sin ( xx [ 111 ] ) ; xx [ 127 ] = 0.01055892623245314 ; xx [ 128 ] =
0.01011710666764959 ; xx [ 129 ] = cos ( xx [ 111 ] ) ; xx [ 130 ] = xx [ 112
] * xx [ 117 ] ; xx [ 131 ] = xx [ 127 ] * xx [ 117 ] ; xx [ 132 ] = - ( xx [
128 ] * xx [ 117 ] ) ; xx [ 111 ] = 0.9958524573065585 ; xx [ 117 ] =
0.09068858100887965 ; xx [ 133 ] = - xx [ 111 ] ; xx [ 134 ] = xx [ 117 ] ;
xx [ 135 ] = - 4.559029495871781e-3 ; xx [ 136 ] = - 5.716624978144057e-3 ;
pm_math_Quaternion_compose_ra ( xx + 129 , xx + 133 , xx + 137 ) ; xx [ 129 ]
= sin ( xx [ 109 ] ) ; xx [ 109 ] = xx [ 110 ] * xx [ 137 ] - xx [ 139 ] * xx
[ 129 ] ; xx [ 130 ] = xx [ 110 ] * xx [ 140 ] + xx [ 138 ] * xx [ 129 ] ; xx
[ 131 ] = sin ( xx [ 99 ] ) ; xx [ 99 ] = xx [ 108 ] * xx [ 109 ] - xx [ 130
] * xx [ 131 ] ; xx [ 132 ] = xx [ 99 ] * xx [ 99 ] ; xx [ 133 ] = xx [ 110 ]
* xx [ 138 ] - xx [ 140 ] * xx [ 129 ] ; xx [ 134 ] = xx [ 137 ] * xx [ 129 ]
+ xx [ 110 ] * xx [ 139 ] ; xx [ 110 ] = xx [ 108 ] * xx [ 133 ] + xx [ 134 ]
* xx [ 131 ] ; xx [ 129 ] = ( xx [ 132 ] + xx [ 110 ] * xx [ 110 ] ) * xx [
11 ] - xx [ 0 ] ; xx [ 135 ] = xx [ 134 ] * xx [ 108 ] - xx [ 131 ] * xx [
133 ] ; xx [ 133 ] = xx [ 110 ] * xx [ 135 ] ; xx [ 134 ] = xx [ 131 ] * xx [
109 ] + xx [ 130 ] * xx [ 108 ] ; xx [ 109 ] = xx [ 134 ] * xx [ 99 ] ; xx [
130 ] = xx [ 11 ] * ( xx [ 133 ] - xx [ 109 ] ) ; xx [ 136 ] = xx [ 110 ] *
xx [ 134 ] ; xx [ 137 ] = xx [ 135 ] * xx [ 99 ] ; xx [ 138 ] = ( xx [ 136 ]
+ xx [ 137 ] ) * xx [ 11 ] ; xx [ 139 ] = ( xx [ 133 ] + xx [ 109 ] ) * xx [
11 ] ; xx [ 109 ] = ( xx [ 132 ] + xx [ 135 ] * xx [ 135 ] ) * xx [ 11 ] - xx
[ 0 ] ; xx [ 133 ] = xx [ 134 ] * xx [ 135 ] ; xx [ 140 ] = xx [ 110 ] * xx [
99 ] ; xx [ 141 ] = xx [ 11 ] * ( xx [ 133 ] - xx [ 140 ] ) ; xx [ 142 ] = xx
[ 11 ] * ( xx [ 136 ] - xx [ 137 ] ) ; xx [ 136 ] = ( xx [ 133 ] + xx [ 140 ]
) * xx [ 11 ] ; xx [ 133 ] = ( xx [ 132 ] + xx [ 134 ] * xx [ 134 ] ) * xx [
11 ] - xx [ 0 ] ; xx [ 143 ] = xx [ 129 ] ; xx [ 144 ] = xx [ 130 ] ; xx [
145 ] = xx [ 138 ] ; xx [ 146 ] = xx [ 139 ] ; xx [ 147 ] = xx [ 109 ] ; xx [
148 ] = xx [ 141 ] ; xx [ 149 ] = xx [ 142 ] ; xx [ 150 ] = xx [ 136 ] ; xx [
151 ] = xx [ 133 ] ; xx [ 132 ] = 0.1 ; xx [ 137 ] = 9.0e-6 ; xx [ 140 ] =
input [ 8 ] ; xx [ 152 ] = 0.0 ; bb [ 0 ] = input [ 8 ] < xx [ 152 ] ; if (
bb [ 0 ] ) * derivErr = 1 ; memcpy ( xx + 153 , xx + 140 , 1 * sizeof (
double ) ) ; xx [ 154 ] = 3.141592653589793 ; xx [ 155 ] = xx [ 132 ] * fabs
( xx [ 137 ] * xx [ 153 ] ) * xx [ 154 ] ; xx [ 156 ] = xx [ 1 ] * xx [ 153 ]
; xx [ 157 ] = 2.7e-5 ; xx [ 158 ] = 12.0 ; xx [ 159 ] = ( xx [ 157 ] + xx [
153 ] * xx [ 153 ] ) * xx [ 155 ] / xx [ 158 ] ; xx [ 153 ] = 4.5e-6 ; xx [
160 ] = xx [ 155 ] ; xx [ 161 ] = xx [ 152 ] ; xx [ 162 ] = xx [ 152 ] ; xx [
163 ] = xx [ 156 ] ; xx [ 164 ] = xx [ 159 ] ; xx [ 165 ] = xx [ 159 ] ; xx [
166 ] = xx [ 153 ] * xx [ 155 ] ; xx [ 167 ] = xx [ 152 ] ; xx [ 168 ] = xx [
152 ] ; xx [ 169 ] = xx [ 152 ] ; if ( ! ( xx [ 155 ] != xx [ 152 ] || xx [
156 ] == xx [ 152 ] ) ) * derivErr = 1 ; xx [ 155 ] = xx [ 160 ] * xx [ 161 ]
; xx [ 156 ] = xx [ 160 ] * xx [ 162 ] ; xx [ 159 ] = xx [ 160 ] * xx [ 163 ]
; xx [ 170 ] = xx [ 160 ] * xx [ 162 ] * xx [ 163 ] - xx [ 167 ] ; xx [ 171 ]
= xx [ 160 ] * xx [ 161 ] * xx [ 163 ] - xx [ 168 ] ; xx [ 167 ] = xx [ 160 ]
* xx [ 161 ] * xx [ 162 ] - xx [ 169 ] ; xx [ 172 ] = xx [ 160 ] ; xx [ 173 ]
= xx [ 155 ] ; xx [ 174 ] = xx [ 156 ] ; xx [ 175 ] = xx [ 159 ] ; xx [ 176 ]
= xx [ 1 ] * ( xx [ 165 ] + xx [ 166 ] - xx [ 164 ] ) + xx [ 160 ] * xx [ 161
] * xx [ 161 ] ; xx [ 177 ] = xx [ 1 ] * ( xx [ 166 ] + xx [ 164 ] - xx [ 165
] ) + xx [ 160 ] * xx [ 162 ] * xx [ 162 ] ; xx [ 178 ] = xx [ 1 ] * ( xx [
164 ] + xx [ 165 ] - xx [ 166 ] ) + xx [ 160 ] * xx [ 163 ] * xx [ 163 ] ; xx
[ 179 ] = ( xx [ 170 ] + xx [ 170 ] ) * xx [ 1 ] ; xx [ 180 ] = ( xx [ 171 ]
+ xx [ 171 ] ) * xx [ 1 ] ; xx [ 181 ] = ( xx [ 167 ] + xx [ 167 ] ) * xx [ 1
] ; if ( ! ( xx [ 160 ] != xx [ 152 ] || ( xx [ 155 ] == xx [ 152 ] && xx [
156 ] == xx [ 152 ] && xx [ 159 ] == xx [ 152 ] ) ) ) * derivErr = 1 ; xx [
155 ] = - xx [ 181 ] ; xx [ 156 ] = - xx [ 180 ] ; xx [ 159 ] = - xx [ 179 ]
; xx [ 160 ] = xx [ 177 ] + xx [ 178 ] ; xx [ 161 ] = xx [ 155 ] ; xx [ 162 ]
= xx [ 156 ] ; xx [ 163 ] = xx [ 155 ] ; xx [ 164 ] = xx [ 178 ] + xx [ 176 ]
; xx [ 165 ] = xx [ 159 ] ; xx [ 166 ] = xx [ 156 ] ; xx [ 167 ] = xx [ 159 ]
; xx [ 168 ] = xx [ 176 ] + xx [ 177 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 160 , xx + 143 , xx + 182 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 143 , xx + 182 , xx + 191 ) ; xx [ 155 ]
= xx [ 172 ] == 0.0 ? 0.0 : xx [ 174 ] / xx [ 172 ] ; xx [ 156 ] = xx [ 172 ]
* xx [ 155 ] ; xx [ 159 ] = xx [ 172 ] == 0.0 ? 0.0 : xx [ 175 ] / xx [ 172 ]
; xx [ 169 ] = xx [ 172 ] * xx [ 159 ] ; xx [ 170 ] = xx [ 172 ] == 0.0 ? 0.0
: xx [ 173 ] / xx [ 172 ] ; xx [ 171 ] = xx [ 172 ] * xx [ 170 ] ; xx [ 173 ]
= xx [ 138 ] * xx [ 156 ] - xx [ 130 ] * xx [ 169 ] ; xx [ 174 ] = xx [ 141 ]
* xx [ 156 ] - xx [ 169 ] * xx [ 109 ] ; xx [ 175 ] = xx [ 156 ] * xx [ 133 ]
- xx [ 136 ] * xx [ 169 ] ; xx [ 176 ] = xx [ 169 ] * xx [ 129 ] - xx [ 138 ]
* xx [ 171 ] ; xx [ 177 ] = xx [ 139 ] * xx [ 169 ] - xx [ 141 ] * xx [ 171 ]
; xx [ 178 ] = xx [ 142 ] * xx [ 169 ] - xx [ 171 ] * xx [ 133 ] ; xx [ 179 ]
= xx [ 130 ] * xx [ 171 ] - xx [ 156 ] * xx [ 129 ] ; xx [ 180 ] = xx [ 171 ]
* xx [ 109 ] - xx [ 139 ] * xx [ 156 ] ; xx [ 181 ] = xx [ 136 ] * xx [ 171 ]
- xx [ 142 ] * xx [ 156 ] ; pm_math_Matrix3x3_compose_ra ( xx + 143 , xx +
173 , xx + 182 ) ; xx [ 173 ] = 0.09519527419625862 ; xx [ 174 ] = -
0.07787409280153862 ; xx [ 175 ] = - 0.0859897565171039 ;
pm_math_Matrix3x3_postCross_ra ( xx + 182 , xx + 173 , xx + 200 ) ; xx [ 209
] = xx [ 172 ] * xx [ 129 ] ; xx [ 210 ] = xx [ 172 ] * xx [ 139 ] ; xx [ 211
] = xx [ 172 ] * xx [ 142 ] ; xx [ 212 ] = xx [ 172 ] * xx [ 130 ] ; xx [ 213
] = xx [ 172 ] * xx [ 109 ] ; xx [ 214 ] = xx [ 172 ] * xx [ 136 ] ; xx [ 215
] = xx [ 172 ] * xx [ 138 ] ; xx [ 216 ] = xx [ 172 ] * xx [ 141 ] ; xx [ 217
] = xx [ 172 ] * xx [ 133 ] ; pm_math_Matrix3x3_compose_ra ( xx + 143 , xx +
209 , xx + 218 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 218 , xx + 173 , xx
+ 141 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 141 , xx + 173 , xx + 209 ) ;
xx [ 109 ] = xx [ 191 ] - xx [ 200 ] - xx [ 200 ] - xx [ 209 ] ; xx [ 129 ] =
2.481544599738585e-3 ; xx [ 130 ] = xx [ 192 ] - xx [ 201 ] - xx [ 203 ] - xx
[ 210 ] ; xx [ 133 ] = xx [ 193 ] - xx [ 202 ] - xx [ 206 ] - xx [ 211 ] ; xx
[ 136 ] = xx [ 194 ] - xx [ 203 ] - xx [ 201 ] - xx [ 212 ] ; xx [ 138 ] =
2.854853249907261e-3 ; xx [ 139 ] = xx [ 195 ] - xx [ 204 ] - xx [ 204 ] - xx
[ 213 ] ; xx [ 150 ] = xx [ 196 ] - xx [ 205 ] - xx [ 207 ] - xx [ 214 ] ; xx
[ 151 ] = xx [ 197 ] - xx [ 206 ] - xx [ 202 ] - xx [ 215 ] ; xx [ 176 ] = xx
[ 198 ] - xx [ 207 ] - xx [ 205 ] - xx [ 216 ] ; xx [ 177 ] =
2.06157032619784e-3 ; xx [ 178 ] = xx [ 199 ] - xx [ 208 ] - xx [ 208 ] - xx
[ 217 ] ; xx [ 191 ] = xx [ 129 ] + xx [ 109 ] ; xx [ 192 ] = xx [ 130 ] ; xx
[ 193 ] = xx [ 133 ] ; xx [ 194 ] = xx [ 136 ] ; xx [ 195 ] = xx [ 138 ] + xx
[ 139 ] ; xx [ 196 ] = xx [ 150 ] ; xx [ 197 ] = xx [ 151 ] ; xx [ 198 ] = xx
[ 176 ] ; xx [ 199 ] = xx [ 177 ] + xx [ 178 ] ; xx [ 179 ] = xx [ 80 ] * xx
[ 116 ] - xx [ 81 ] * xx [ 115 ] ; xx [ 180 ] = xx [ 116 ] + xx [ 81 ] * xx [
114 ] ; xx [ 181 ] = xx [ 80 ] * xx [ 114 ] + xx [ 115 ] ; xx [ 200 ] = xx [
179 ] ; xx [ 201 ] = xx [ 180 ] ; xx [ 202 ] = - xx [ 181 ] ;
pm_math_Vector3_cross_ra ( xx + 114 , xx + 200 , xx + 203 ) ; xx [ 200 ] = xx
[ 0 ] + xx [ 11 ] * ( xx [ 203 ] - xx [ 113 ] * xx [ 179 ] ) ; xx [ 179 ] =
xx [ 11 ] * ( xx [ 204 ] - xx [ 113 ] * xx [ 180 ] ) - xx [ 80 ] ; xx [ 80 ]
= xx [ 11 ] * ( xx [ 205 ] + xx [ 113 ] * xx [ 181 ] ) - xx [ 81 ] ; xx [ 201
] = xx [ 200 ] ; xx [ 202 ] = xx [ 179 ] ; xx [ 203 ] = xx [ 80 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 191 , xx + 201 , xx + 204 ) ; xx [ 81 ] =
xx [ 182 ] - xx [ 141 ] ; xx [ 141 ] = xx [ 183 ] - xx [ 144 ] ; xx [ 144 ] =
xx [ 184 ] - xx [ 147 ] ; xx [ 147 ] = xx [ 185 ] - xx [ 142 ] ; xx [ 142 ] =
xx [ 186 ] - xx [ 145 ] ; xx [ 145 ] = xx [ 187 ] - xx [ 148 ] ; xx [ 148 ] =
xx [ 188 ] - xx [ 143 ] ; xx [ 143 ] = xx [ 189 ] - xx [ 146 ] ; xx [ 146 ] =
xx [ 190 ] - xx [ 149 ] ; xx [ 180 ] = xx [ 81 ] ; xx [ 181 ] = xx [ 141 ] ;
xx [ 182 ] = xx [ 144 ] ; xx [ 183 ] = xx [ 147 ] ; xx [ 184 ] = xx [ 142 ] ;
xx [ 185 ] = xx [ 145 ] ; xx [ 186 ] = xx [ 148 ] ; xx [ 187 ] = xx [ 143 ] ;
xx [ 188 ] = xx [ 146 ] ; xx [ 207 ] = - 1.160451719412536e-3 ; xx [ 208 ] =
- 0.02864342077244468 ; xx [ 209 ] = - 0.1242034406115433 ;
pm_math_Vector3_cross_ra ( xx + 207 , xx + 201 , xx + 210 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 180 , xx + 210 , xx + 213 ) ; xx [ 149 ] =
xx [ 204 ] + xx [ 213 ] ; xx [ 189 ] = xx [ 205 ] + xx [ 214 ] ; xx [ 190 ] =
xx [ 206 ] + xx [ 215 ] ; xx [ 204 ] = xx [ 149 ] ; xx [ 205 ] = xx [ 189 ] ;
xx [ 206 ] = xx [ 190 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 180 , xx
+ 201 , xx + 213 ) ; xx [ 216 ] = 0.2423553879524476 ; xx [ 227 ] = xx [ 216
] + xx [ 218 ] ; xx [ 228 ] = xx [ 219 ] ; xx [ 229 ] = xx [ 220 ] ; xx [ 230
] = xx [ 221 ] ; xx [ 231 ] = xx [ 216 ] + xx [ 222 ] ; xx [ 232 ] = xx [ 223
] ; xx [ 233 ] = xx [ 224 ] ; xx [ 234 ] = xx [ 225 ] ; xx [ 235 ] = xx [ 216
] + xx [ 226 ] ; pm_math_Matrix3x3_xform_ra ( xx + 227 , xx + 210 , xx + 236
) ; xx [ 217 ] = xx [ 213 ] + xx [ 236 ] ; xx [ 239 ] = xx [ 214 ] + xx [ 237
] ; xx [ 213 ] = xx [ 215 ] + xx [ 238 ] ; xx [ 236 ] = xx [ 217 ] ; xx [ 237
] = xx [ 239 ] ; xx [ 238 ] = xx [ 213 ] ; xx [ 240 ] = xx [ 82 ] ; xx [ 241
] = - xx [ 71 ] ; xx [ 242 ] = xx [ 101 ] ; xx [ 243 ] = - xx [ 103 ] ; xx [
244 ] = - xx [ 78 ] ; xx [ 245 ] = xx [ 83 ] ; xx [ 246 ] = xx [ 97 ] ;
pm_math_Quaternion_xform_ra ( xx + 240 , xx + 244 , xx + 247 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 191 , xx + 247 , xx + 240 ) ;
pm_math_Vector3_cross_ra ( xx + 207 , xx + 247 , xx + 250 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 180 , xx + 250 , xx + 253 ) ; xx [ 71 ] =
xx [ 240 ] + xx [ 253 ] ; xx [ 78 ] = xx [ 241 ] + xx [ 254 ] ; xx [ 82 ] =
xx [ 242 ] + xx [ 255 ] ; xx [ 240 ] = xx [ 71 ] ; xx [ 241 ] = xx [ 78 ] ;
xx [ 242 ] = xx [ 82 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 180 , xx
+ 247 , xx + 253 ) ; pm_math_Matrix3x3_xform_ra ( xx + 227 , xx + 250 , xx +
256 ) ; xx [ 83 ] = xx [ 253 ] + xx [ 256 ] ; xx [ 97 ] = xx [ 254 ] + xx [
257 ] ; xx [ 101 ] = xx [ 255 ] + xx [ 258 ] ; xx [ 253 ] = xx [ 83 ] ; xx [
254 ] = xx [ 97 ] ; xx [ 255 ] = xx [ 101 ] ; xx [ 103 ] =
pm_math_Vector3_dot_ra ( xx + 201 , xx + 240 ) + pm_math_Vector3_dot_ra ( xx
+ 210 , xx + 253 ) ; xx [ 256 ] = xx [ 98 ] ; xx [ 257 ] = - xx [ 100 ] ; xx
[ 258 ] = xx [ 102 ] ; pm_math_Matrix3x3_xform_ra ( xx + 191 , xx + 256 , xx
+ 259 ) ; xx [ 214 ] = 0.03324995831780794 ; xx [ 215 ] =
1.450619990863594e-4 ; xx [ 243 ] = 3.441131982155878e-4 ; xx [ 262 ] = - xx
[ 214 ] ; xx [ 263 ] = - xx [ 215 ] ; xx [ 264 ] = xx [ 243 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 180 , xx + 262 , xx + 265 ) ; xx [ 268 ] =
xx [ 259 ] + xx [ 265 ] ; xx [ 269 ] = xx [ 260 ] + xx [ 266 ] ; xx [ 259 ] =
xx [ 261 ] + xx [ 267 ] ; xx [ 265 ] = xx [ 268 ] ; xx [ 266 ] = xx [ 269 ] ;
xx [ 267 ] = xx [ 259 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 180 , xx
+ 256 , xx + 270 ) ; pm_math_Matrix3x3_xform_ra ( xx + 227 , xx + 262 , xx +
273 ) ; xx [ 260 ] = xx [ 270 ] + xx [ 273 ] ; xx [ 261 ] = xx [ 271 ] + xx [
274 ] ; xx [ 270 ] = xx [ 272 ] + xx [ 275 ] ; xx [ 271 ] = xx [ 260 ] ; xx [
272 ] = xx [ 261 ] ; xx [ 273 ] = xx [ 270 ] ; xx [ 274 ] =
pm_math_Vector3_dot_ra ( xx + 201 , xx + 265 ) + pm_math_Vector3_dot_ra ( xx
+ 210 , xx + 271 ) ; xx [ 275 ] = pm_math_Vector3_dot_ra ( xx + 247 , xx +
265 ) + pm_math_Vector3_dot_ra ( xx + 250 , xx + 271 ) ; xx [ 276 ] =
pm_math_Vector3_dot_ra ( xx + 201 , xx + 204 ) + pm_math_Vector3_dot_ra ( xx
+ 210 , xx + 236 ) ; xx [ 277 ] = xx [ 103 ] ; xx [ 278 ] = xx [ 274 ] ; xx [
279 ] = xx [ 103 ] ; xx [ 280 ] = pm_math_Vector3_dot_ra ( xx + 247 , xx +
240 ) + pm_math_Vector3_dot_ra ( xx + 250 , xx + 253 ) ; xx [ 281 ] = xx [
275 ] ; xx [ 282 ] = xx [ 274 ] ; xx [ 283 ] = xx [ 275 ] ; xx [ 284 ] =
pm_math_Vector3_dot_ra ( xx + 256 , xx + 265 ) + pm_math_Vector3_dot_ra ( xx
+ 262 , xx + 271 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 276 , 3 , xx +
204 ) ; xx [ 103 ] = 0.999999 ; bb [ 1 ] = ii [ 0 ] != 0 && fabs ( sin (
state [ 25 ] ) ) > xx [ 103 ] ; ii [ 1 ] = bb [ 1 ] ? 1 : 0 ; if ( bb [ 1 ] )
* derivErr = 1 ; if ( ii [ 0 ] + ii [ 1 ] != 0 ) * derivErr = 1 ; xx [ 285 ]
= xx [ 149 ] ; xx [ 286 ] = xx [ 71 ] ; xx [ 287 ] = xx [ 268 ] ; xx [ 288 ]
= xx [ 189 ] ; xx [ 289 ] = xx [ 78 ] ; xx [ 290 ] = xx [ 269 ] ; xx [ 291 ]
= xx [ 190 ] ; xx [ 292 ] = xx [ 82 ] ; xx [ 293 ] = xx [ 259 ] ; xx [ 294 ]
= xx [ 217 ] ; xx [ 295 ] = xx [ 83 ] ; xx [ 296 ] = xx [ 260 ] ; xx [ 297 ]
= xx [ 239 ] ; xx [ 298 ] = xx [ 97 ] ; xx [ 299 ] = xx [ 261 ] ; xx [ 300 ]
= xx [ 213 ] ; xx [ 301 ] = xx [ 101 ] ; xx [ 302 ] = xx [ 270 ] ;
solveSymmetricPosDef ( xx + 276 , xx + 285 , 3 , 6 , xx + 303 , xx + 204 ) ;
xx [ 204 ] = xx [ 189 ] * xx [ 303 ] + xx [ 78 ] * xx [ 304 ] + xx [ 269 ] *
xx [ 305 ] ; xx [ 205 ] = xx [ 190 ] * xx [ 303 ] + xx [ 82 ] * xx [ 304 ] +
xx [ 259 ] * xx [ 305 ] ; xx [ 206 ] = xx [ 190 ] * xx [ 306 ] + xx [ 82 ] *
xx [ 307 ] + xx [ 259 ] * xx [ 308 ] ; xx [ 285 ] = xx [ 109 ] - ( xx [ 149 ]
* xx [ 303 ] + xx [ 71 ] * xx [ 304 ] + xx [ 268 ] * xx [ 305 ] ) + xx [ 129
] ; xx [ 286 ] = xx [ 130 ] - xx [ 204 ] ; xx [ 287 ] = xx [ 133 ] - xx [ 205
] ; xx [ 288 ] = xx [ 136 ] - xx [ 204 ] ; xx [ 289 ] = xx [ 139 ] - ( xx [
189 ] * xx [ 306 ] + xx [ 78 ] * xx [ 307 ] + xx [ 269 ] * xx [ 308 ] ) + xx
[ 138 ] ; xx [ 290 ] = xx [ 150 ] - xx [ 206 ] ; xx [ 291 ] = xx [ 151 ] - xx
[ 205 ] ; xx [ 292 ] = xx [ 176 ] - xx [ 206 ] ; xx [ 293 ] = xx [ 178 ] - (
xx [ 190 ] * xx [ 309 ] + xx [ 82 ] * xx [ 310 ] + xx [ 259 ] * xx [ 311 ] )
+ xx [ 177 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 285 , xx + 118 ,
xx + 294 ) ; pm_math_Matrix3x3_compose_ra ( xx + 118 , xx + 294 , xx + 285 )
; xx [ 294 ] = xx [ 81 ] - ( xx [ 149 ] * xx [ 312 ] + xx [ 71 ] * xx [ 313 ]
+ xx [ 268 ] * xx [ 314 ] ) ; xx [ 295 ] = xx [ 141 ] - ( xx [ 149 ] * xx [
315 ] + xx [ 71 ] * xx [ 316 ] + xx [ 268 ] * xx [ 317 ] ) ; xx [ 296 ] = xx
[ 144 ] - ( xx [ 149 ] * xx [ 318 ] + xx [ 71 ] * xx [ 319 ] + xx [ 268 ] *
xx [ 320 ] ) ; xx [ 297 ] = xx [ 147 ] - ( xx [ 189 ] * xx [ 312 ] + xx [ 78
] * xx [ 313 ] + xx [ 269 ] * xx [ 314 ] ) ; xx [ 298 ] = xx [ 142 ] - ( xx [
189 ] * xx [ 315 ] + xx [ 78 ] * xx [ 316 ] + xx [ 269 ] * xx [ 317 ] ) ; xx
[ 299 ] = xx [ 145 ] - ( xx [ 189 ] * xx [ 318 ] + xx [ 78 ] * xx [ 319 ] +
xx [ 269 ] * xx [ 320 ] ) ; xx [ 300 ] = xx [ 148 ] - ( xx [ 190 ] * xx [ 312
] + xx [ 82 ] * xx [ 313 ] + xx [ 259 ] * xx [ 314 ] ) ; xx [ 301 ] = xx [
143 ] - ( xx [ 190 ] * xx [ 315 ] + xx [ 82 ] * xx [ 316 ] + xx [ 259 ] * xx
[ 317 ] ) ; xx [ 302 ] = xx [ 146 ] - ( xx [ 190 ] * xx [ 318 ] + xx [ 82 ] *
xx [ 319 ] + xx [ 259 ] * xx [ 320 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 294 , xx + 118 , xx + 321 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 118 , xx + 321 , xx + 294 ) ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 207 , xx + 141 ) ; xx [ 81 ] =
4.855313199912053e-13 - xx [ 141 ] ; xx [ 109 ] = 0.01419776350117569 - xx [
142 ] ; xx [ 130 ] = 0.0153662351784256 - xx [ 143 ] ; xx [ 141 ] = xx [ 81 ]
; xx [ 142 ] = xx [ 109 ] ; xx [ 143 ] = xx [ 130 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 294 , xx + 141 , xx + 321 ) ; xx [ 133
] = xx [ 239 ] * xx [ 312 ] + xx [ 97 ] * xx [ 313 ] + xx [ 261 ] * xx [ 314
] ; xx [ 136 ] = xx [ 213 ] * xx [ 312 ] + xx [ 101 ] * xx [ 313 ] + xx [ 270
] * xx [ 314 ] ; xx [ 139 ] = xx [ 213 ] * xx [ 315 ] + xx [ 101 ] * xx [ 316
] + xx [ 270 ] * xx [ 317 ] ; xx [ 330 ] = xx [ 218 ] - ( xx [ 217 ] * xx [
312 ] + xx [ 83 ] * xx [ 313 ] + xx [ 260 ] * xx [ 314 ] ) + xx [ 216 ] ; xx
[ 331 ] = xx [ 219 ] - xx [ 133 ] ; xx [ 332 ] = xx [ 220 ] - xx [ 136 ] ; xx
[ 333 ] = xx [ 221 ] - xx [ 133 ] ; xx [ 334 ] = xx [ 222 ] - ( xx [ 239 ] *
xx [ 315 ] + xx [ 97 ] * xx [ 316 ] + xx [ 261 ] * xx [ 317 ] ) + xx [ 216 ]
; xx [ 335 ] = xx [ 223 ] - xx [ 139 ] ; xx [ 336 ] = xx [ 224 ] - xx [ 136 ]
; xx [ 337 ] = xx [ 225 ] - xx [ 139 ] ; xx [ 338 ] = xx [ 226 ] - ( xx [ 213
] * xx [ 318 ] + xx [ 101 ] * xx [ 319 ] + xx [ 270 ] * xx [ 320 ] ) + xx [
216 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 330 , xx + 118 , xx +
218 ) ; pm_math_Matrix3x3_compose_ra ( xx + 118 , xx + 218 , xx + 330 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 330 , xx + 141 , xx + 118 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 118 , xx + 141 , xx + 218 ) ; xx [ 133 ]
= xx [ 285 ] - xx [ 321 ] - xx [ 321 ] - xx [ 218 ] ; xx [ 136 ] =
3.133881653570001e-6 ; xx [ 139 ] = xx [ 286 ] - xx [ 322 ] - xx [ 324 ] - xx
[ 219 ] ; xx [ 144 ] = xx [ 287 ] - xx [ 323 ] - xx [ 327 ] - xx [ 220 ] ; xx
[ 145 ] = xx [ 288 ] - xx [ 324 ] - xx [ 322 ] - xx [ 221 ] ; xx [ 146 ] =
1.518811043244711e-6 ; xx [ 147 ] = xx [ 289 ] - xx [ 325 ] - xx [ 325 ] - xx
[ 222 ] ; xx [ 148 ] = xx [ 290 ] - xx [ 326 ] - xx [ 328 ] - xx [ 223 ] ; xx
[ 150 ] = xx [ 291 ] - xx [ 327 ] - xx [ 323 ] - xx [ 224 ] ; xx [ 151 ] = xx
[ 292 ] - xx [ 328 ] - xx [ 326 ] - xx [ 225 ] ; xx [ 176 ] =
3.515161026289992e-6 ; xx [ 178 ] = xx [ 293 ] - xx [ 329 ] - xx [ 329 ] - xx
[ 226 ] ; xx [ 218 ] = xx [ 136 ] + xx [ 133 ] ; xx [ 219 ] = xx [ 139 ] ; xx
[ 220 ] = xx [ 144 ] ; xx [ 221 ] = xx [ 145 ] ; xx [ 222 ] = xx [ 146 ] + xx
[ 147 ] ; xx [ 223 ] = xx [ 148 ] ; xx [ 224 ] = xx [ 150 ] ; xx [ 225 ] = xx
[ 151 ] ; xx [ 226 ] = xx [ 176 ] + xx [ 178 ] ; xx [ 204 ] = xx [ 59 ] * xx
[ 87 ] ; xx [ 205 ] = xx [ 59 ] * xx [ 85 ] - xx [ 86 ] ; xx [ 236 ] = - xx [
204 ] ; xx [ 237 ] = xx [ 87 ] ; xx [ 238 ] = xx [ 205 ] ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 236 , xx + 240 ) ; xx [ 206 ] = xx
[ 0 ] + ( xx [ 84 ] * xx [ 204 ] + xx [ 240 ] ) * xx [ 11 ] ; xx [ 204 ] = xx
[ 59 ] + xx [ 11 ] * ( xx [ 241 ] - xx [ 79 ] ) ; xx [ 59 ] = xx [ 11 ] * (
xx [ 242 ] - xx [ 84 ] * xx [ 205 ] ) ; xx [ 236 ] = xx [ 206 ] ; xx [ 237 ]
= xx [ 204 ] ; xx [ 238 ] = xx [ 59 ] ; pm_math_Matrix3x3_xform_ra ( xx + 218
, xx + 236 , xx + 240 ) ; xx [ 79 ] = xx [ 294 ] - xx [ 118 ] ; xx [ 118 ] =
xx [ 295 ] - xx [ 121 ] ; xx [ 121 ] = xx [ 296 ] - xx [ 124 ] ; xx [ 124 ] =
xx [ 297 ] - xx [ 119 ] ; xx [ 119 ] = xx [ 298 ] - xx [ 122 ] ; xx [ 122 ] =
xx [ 299 ] - xx [ 125 ] ; xx [ 125 ] = xx [ 300 ] - xx [ 120 ] ; xx [ 120 ] =
xx [ 301 ] - xx [ 123 ] ; xx [ 123 ] = xx [ 302 ] - xx [ 126 ] ; xx [ 285 ] =
xx [ 79 ] ; xx [ 286 ] = xx [ 118 ] ; xx [ 287 ] = xx [ 121 ] ; xx [ 288 ] =
xx [ 124 ] ; xx [ 289 ] = xx [ 119 ] ; xx [ 290 ] = xx [ 122 ] ; xx [ 291 ] =
xx [ 125 ] ; xx [ 292 ] = xx [ 120 ] ; xx [ 293 ] = xx [ 123 ] ; xx [ 253 ] =
2.484784205278315e-13 ; xx [ 254 ] = 0.01055813361575447 ; xx [ 255 ] = -
0.01718904409441589 ; pm_math_Vector3_cross_ra ( xx + 253 , xx + 236 , xx +
265 ) ; pm_math_Matrix3x3_xform_ra ( xx + 285 , xx + 265 , xx + 271 ) ; xx [
126 ] = xx [ 240 ] + xx [ 271 ] ; xx [ 205 ] = xx [ 241 ] + xx [ 272 ] ; xx [
240 ] = xx [ 242 ] + xx [ 273 ] ; xx [ 271 ] = xx [ 126 ] ; xx [ 272 ] = xx [
205 ] ; xx [ 273 ] = xx [ 240 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx +
285 , xx + 236 , xx + 294 ) ; xx [ 241 ] = 7.704043062217087e-3 ; xx [ 321 ]
= xx [ 241 ] + xx [ 330 ] ; xx [ 322 ] = xx [ 331 ] ; xx [ 323 ] = xx [ 332 ]
; xx [ 324 ] = xx [ 333 ] ; xx [ 325 ] = xx [ 241 ] + xx [ 334 ] ; xx [ 326 ]
= xx [ 335 ] ; xx [ 327 ] = xx [ 336 ] ; xx [ 328 ] = xx [ 337 ] ; xx [ 329 ]
= xx [ 241 ] + xx [ 338 ] ; pm_math_Matrix3x3_xform_ra ( xx + 321 , xx + 265
, xx + 297 ) ; xx [ 242 ] = xx [ 294 ] + xx [ 297 ] ; xx [ 274 ] = xx [ 295 ]
+ xx [ 298 ] ; xx [ 275 ] = xx [ 296 ] + xx [ 299 ] ; xx [ 294 ] = xx [ 242 ]
; xx [ 295 ] = xx [ 274 ] ; xx [ 296 ] = xx [ 275 ] ; xx [ 297 ] = xx [ 57 ]
; xx [ 298 ] = - xx [ 51 ] ; xx [ 299 ] = - xx [ 72 ] ; xx [ 300 ] = - xx [
73 ] ; xx [ 339 ] = xx [ 54 ] ; xx [ 340 ] = xx [ 58 ] ; xx [ 341 ] = - xx [
60 ] ; pm_math_Quaternion_xform_ra ( xx + 297 , xx + 339 , xx + 342 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 218 , xx + 342 , xx + 297 ) ;
pm_math_Vector3_cross_ra ( xx + 253 , xx + 342 , xx + 300 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 285 , xx + 300 , xx + 345 ) ; xx [ 51 ] =
xx [ 297 ] + xx [ 345 ] ; xx [ 54 ] = xx [ 298 ] + xx [ 346 ] ; xx [ 57 ] =
xx [ 299 ] + xx [ 347 ] ; xx [ 297 ] = xx [ 51 ] ; xx [ 298 ] = xx [ 54 ] ;
xx [ 299 ] = xx [ 57 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 285 , xx
+ 342 , xx + 345 ) ; pm_math_Matrix3x3_xform_ra ( xx + 321 , xx + 300 , xx +
348 ) ; xx [ 72 ] = xx [ 345 ] + xx [ 348 ] ; xx [ 73 ] = xx [ 346 ] + xx [
349 ] ; xx [ 345 ] = xx [ 347 ] + xx [ 350 ] ; xx [ 346 ] = xx [ 72 ] ; xx [
347 ] = xx [ 73 ] ; xx [ 348 ] = xx [ 345 ] ; xx [ 349 ] =
pm_math_Vector3_dot_ra ( xx + 236 , xx + 297 ) + pm_math_Vector3_dot_ra ( xx
+ 265 , xx + 346 ) ; xx [ 350 ] = xx [ 70 ] ; xx [ 351 ] = xx [ 60 ] ; xx [
352 ] = xx [ 58 ] ; pm_math_Matrix3x3_xform_ra ( xx + 218 , xx + 350 , xx +
353 ) ; xx [ 356 ] = 0.01512320370375 ; xx [ 357 ] = 4.156663728609323e-13 ;
xx [ 358 ] = 3.670194404924682e-14 ; xx [ 359 ] = xx [ 356 ] ; xx [ 360 ] = -
xx [ 357 ] ; xx [ 361 ] = - xx [ 358 ] ; pm_math_Matrix3x3_xform_ra ( xx +
285 , xx + 359 , xx + 362 ) ; xx [ 365 ] = xx [ 353 ] + xx [ 362 ] ; xx [ 366
] = xx [ 354 ] + xx [ 363 ] ; xx [ 353 ] = xx [ 355 ] + xx [ 364 ] ; xx [ 362
] = xx [ 365 ] ; xx [ 363 ] = xx [ 366 ] ; xx [ 364 ] = xx [ 353 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 285 , xx + 350 , xx + 367 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 321 , xx + 359 , xx + 370 ) ; xx [ 354 ] =
xx [ 367 ] + xx [ 370 ] ; xx [ 355 ] = xx [ 368 ] + xx [ 371 ] ; xx [ 367 ] =
xx [ 369 ] + xx [ 372 ] ; xx [ 368 ] = xx [ 354 ] ; xx [ 369 ] = xx [ 355 ] ;
xx [ 370 ] = xx [ 367 ] ; xx [ 371 ] = pm_math_Vector3_dot_ra ( xx + 236 , xx
+ 362 ) + pm_math_Vector3_dot_ra ( xx + 265 , xx + 368 ) ; xx [ 372 ] =
pm_math_Vector3_dot_ra ( xx + 342 , xx + 362 ) + pm_math_Vector3_dot_ra ( xx
+ 300 , xx + 368 ) ; xx [ 373 ] = pm_math_Vector3_dot_ra ( xx + 236 , xx +
271 ) + pm_math_Vector3_dot_ra ( xx + 265 , xx + 294 ) ; xx [ 374 ] = xx [
349 ] ; xx [ 375 ] = xx [ 371 ] ; xx [ 376 ] = xx [ 349 ] ; xx [ 377 ] =
pm_math_Vector3_dot_ra ( xx + 342 , xx + 297 ) + pm_math_Vector3_dot_ra ( xx
+ 300 , xx + 346 ) ; xx [ 378 ] = xx [ 372 ] ; xx [ 379 ] = xx [ 371 ] ; xx [
380 ] = xx [ 372 ] ; xx [ 381 ] = pm_math_Vector3_dot_ra ( xx + 350 , xx +
362 ) + pm_math_Vector3_dot_ra ( xx + 359 , xx + 368 ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 373 , 3 , xx + 271 ) ; bb [ 1 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 19 ] ) ) > xx [ 103 ] ; ii [ 1 ] = bb [ 1 ] ? 1 : 0 ;
if ( bb [ 1 ] ) * derivErr = 1 ; if ( ii [ 0 ] + ii [ 1 ] != 0 ) * derivErr =
1 ; xx [ 382 ] = xx [ 126 ] ; xx [ 383 ] = xx [ 51 ] ; xx [ 384 ] = xx [ 365
] ; xx [ 385 ] = xx [ 205 ] ; xx [ 386 ] = xx [ 54 ] ; xx [ 387 ] = xx [ 366
] ; xx [ 388 ] = xx [ 240 ] ; xx [ 389 ] = xx [ 57 ] ; xx [ 390 ] = xx [ 353
] ; xx [ 391 ] = xx [ 242 ] ; xx [ 392 ] = xx [ 72 ] ; xx [ 393 ] = xx [ 354
] ; xx [ 394 ] = xx [ 274 ] ; xx [ 395 ] = xx [ 73 ] ; xx [ 396 ] = xx [ 355
] ; xx [ 397 ] = xx [ 275 ] ; xx [ 398 ] = xx [ 345 ] ; xx [ 399 ] = xx [ 367
] ; solveSymmetricPosDef ( xx + 373 , xx + 382 , 3 , 6 , xx + 400 , xx + 271
) ; xx [ 271 ] = xx [ 205 ] * xx [ 400 ] + xx [ 54 ] * xx [ 401 ] + xx [ 366
] * xx [ 402 ] ; xx [ 272 ] = xx [ 240 ] * xx [ 400 ] + xx [ 57 ] * xx [ 401
] + xx [ 353 ] * xx [ 402 ] ; xx [ 273 ] = xx [ 240 ] * xx [ 403 ] + xx [ 57
] * xx [ 404 ] + xx [ 353 ] * xx [ 405 ] ; xx [ 382 ] = xx [ 133 ] - ( xx [
126 ] * xx [ 400 ] + xx [ 51 ] * xx [ 401 ] + xx [ 365 ] * xx [ 402 ] ) + xx
[ 136 ] ; xx [ 383 ] = xx [ 139 ] - xx [ 271 ] ; xx [ 384 ] = xx [ 144 ] - xx
[ 272 ] ; xx [ 385 ] = xx [ 145 ] - xx [ 271 ] ; xx [ 386 ] = xx [ 147 ] - (
xx [ 205 ] * xx [ 403 ] + xx [ 54 ] * xx [ 404 ] + xx [ 366 ] * xx [ 405 ] )
+ xx [ 146 ] ; xx [ 387 ] = xx [ 148 ] - xx [ 273 ] ; xx [ 388 ] = xx [ 150 ]
- xx [ 272 ] ; xx [ 389 ] = xx [ 151 ] - xx [ 273 ] ; xx [ 390 ] = xx [ 178 ]
- ( xx [ 240 ] * xx [ 406 ] + xx [ 57 ] * xx [ 407 ] + xx [ 353 ] * xx [ 408
] ) + xx [ 176 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 382 , xx + 88
, xx + 391 ) ; pm_math_Matrix3x3_compose_ra ( xx + 88 , xx + 391 , xx + 382 )
; xx [ 391 ] = xx [ 79 ] - ( xx [ 126 ] * xx [ 409 ] + xx [ 51 ] * xx [ 410 ]
+ xx [ 365 ] * xx [ 411 ] ) ; xx [ 392 ] = xx [ 118 ] - ( xx [ 126 ] * xx [
412 ] + xx [ 51 ] * xx [ 413 ] + xx [ 365 ] * xx [ 414 ] ) ; xx [ 393 ] = xx
[ 121 ] - ( xx [ 126 ] * xx [ 415 ] + xx [ 51 ] * xx [ 416 ] + xx [ 365 ] *
xx [ 417 ] ) ; xx [ 394 ] = xx [ 124 ] - ( xx [ 205 ] * xx [ 409 ] + xx [ 54
] * xx [ 410 ] + xx [ 366 ] * xx [ 411 ] ) ; xx [ 395 ] = xx [ 119 ] - ( xx [
205 ] * xx [ 412 ] + xx [ 54 ] * xx [ 413 ] + xx [ 366 ] * xx [ 414 ] ) ; xx
[ 396 ] = xx [ 122 ] - ( xx [ 205 ] * xx [ 415 ] + xx [ 54 ] * xx [ 416 ] +
xx [ 366 ] * xx [ 417 ] ) ; xx [ 397 ] = xx [ 125 ] - ( xx [ 240 ] * xx [ 409
] + xx [ 57 ] * xx [ 410 ] + xx [ 353 ] * xx [ 411 ] ) ; xx [ 398 ] = xx [
120 ] - ( xx [ 240 ] * xx [ 412 ] + xx [ 57 ] * xx [ 413 ] + xx [ 353 ] * xx
[ 414 ] ) ; xx [ 399 ] = xx [ 123 ] - ( xx [ 240 ] * xx [ 415 ] + xx [ 57 ] *
xx [ 416 ] + xx [ 353 ] * xx [ 417 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 391 , xx + 88 , xx + 418 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 88 , xx + 418 , xx + 391 ) ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 253 , xx + 118 ) ; xx [ 79 ] =
7.111565911668068e-14 + xx [ 118 ] ; xx [ 121 ] = 0.01482354797278426 - xx [
119 ] ; xx [ 118 ] = 0.01597192626903846 - xx [ 120 ] ; xx [ 122 ] = - xx [
79 ] ; xx [ 123 ] = xx [ 121 ] ; xx [ 124 ] = xx [ 118 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 391 , xx + 122 , xx + 418 ) ; xx [ 119
] = xx [ 274 ] * xx [ 409 ] + xx [ 73 ] * xx [ 410 ] + xx [ 355 ] * xx [ 411
] ; xx [ 120 ] = xx [ 275 ] * xx [ 409 ] + xx [ 345 ] * xx [ 410 ] + xx [ 367
] * xx [ 411 ] ; xx [ 125 ] = xx [ 275 ] * xx [ 412 ] + xx [ 345 ] * xx [ 413
] + xx [ 367 ] * xx [ 414 ] ; xx [ 427 ] = xx [ 330 ] - ( xx [ 242 ] * xx [
409 ] + xx [ 72 ] * xx [ 410 ] + xx [ 354 ] * xx [ 411 ] ) + xx [ 241 ] ; xx
[ 428 ] = xx [ 331 ] - xx [ 119 ] ; xx [ 429 ] = xx [ 332 ] - xx [ 120 ] ; xx
[ 430 ] = xx [ 333 ] - xx [ 119 ] ; xx [ 431 ] = xx [ 334 ] - ( xx [ 274 ] *
xx [ 412 ] + xx [ 73 ] * xx [ 413 ] + xx [ 355 ] * xx [ 414 ] ) + xx [ 241 ]
; xx [ 432 ] = xx [ 335 ] - xx [ 125 ] ; xx [ 433 ] = xx [ 336 ] - xx [ 120 ]
; xx [ 434 ] = xx [ 337 ] - xx [ 125 ] ; xx [ 435 ] = xx [ 338 ] - ( xx [ 275
] * xx [ 415 ] + xx [ 345 ] * xx [ 416 ] + xx [ 367 ] * xx [ 417 ] ) + xx [
241 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 427 , xx + 88 , xx + 330
) ; pm_math_Matrix3x3_compose_ra ( xx + 88 , xx + 330 , xx + 427 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 427 , xx + 122 , xx + 88 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 88 , xx + 122 , xx + 330 ) ; xx [ 119 ]
= xx [ 382 ] - xx [ 418 ] - xx [ 418 ] - xx [ 330 ] ; xx [ 120 ] =
3.395310932053464e-6 ; xx [ 125 ] = xx [ 383 ] - xx [ 419 ] - xx [ 421 ] - xx
[ 331 ] ; xx [ 133 ] = xx [ 384 ] - xx [ 420 ] - xx [ 424 ] - xx [ 332 ] ; xx
[ 139 ] = xx [ 385 ] - xx [ 421 ] - xx [ 419 ] - xx [ 333 ] ; xx [ 144 ] =
1.744065755080617e-6 ; xx [ 145 ] = xx [ 144 ] + xx [ 386 ] - xx [ 422 ] - xx
[ 422 ] - xx [ 334 ] ; xx [ 147 ] = xx [ 387 ] - xx [ 423 ] - xx [ 425 ] - xx
[ 335 ] ; xx [ 148 ] = xx [ 388 ] - xx [ 424 ] - xx [ 420 ] - xx [ 336 ] ; xx
[ 150 ] = xx [ 389 ] - xx [ 425 ] - xx [ 423 ] - xx [ 337 ] ; xx [ 151 ] =
3.911790730232107e-6 ; xx [ 178 ] = xx [ 151 ] + xx [ 390 ] - xx [ 426 ] - xx
[ 426 ] - xx [ 338 ] ; xx [ 330 ] = xx [ 120 ] + xx [ 119 ] ; xx [ 331 ] = xx
[ 125 ] ; xx [ 332 ] = xx [ 133 ] ; xx [ 333 ] = xx [ 139 ] ; xx [ 334 ] = xx
[ 145 ] ; xx [ 335 ] = xx [ 147 ] ; xx [ 336 ] = xx [ 148 ] ; xx [ 337 ] = xx
[ 150 ] ; xx [ 338 ] = xx [ 178 ] ; xx [ 271 ] = xx [ 52 ] ; xx [ 272 ] = xx
[ 53 ] ; xx [ 273 ] = xx [ 55 ] ; xx [ 294 ] = xx [ 55 ] * xx [ 50 ] ; xx [
295 ] = xx [ 50 ] * xx [ 52 ] + xx [ 53 ] ; xx [ 296 ] = xx [ 294 ] ; xx [
297 ] = xx [ 55 ] ; xx [ 298 ] = - xx [ 295 ] ; pm_math_Vector3_cross_ra ( xx
+ 271 , xx + 296 , xx + 346 ) ; xx [ 271 ] = xx [ 0 ] + ( xx [ 346 ] - xx [
294 ] * xx [ 31 ] ) * xx [ 11 ] ; xx [ 272 ] = xx [ 11 ] * ( xx [ 347 ] - xx
[ 56 ] ) - xx [ 50 ] ; xx [ 50 ] = xx [ 11 ] * ( xx [ 348 ] + xx [ 31 ] * xx
[ 295 ] ) ; xx [ 294 ] = xx [ 271 ] ; xx [ 295 ] = xx [ 272 ] ; xx [ 296 ] =
xx [ 50 ] ; pm_math_Matrix3x3_xform_ra ( xx + 330 , xx + 294 , xx + 297 ) ;
xx [ 56 ] = xx [ 391 ] - xx [ 88 ] ; xx [ 88 ] = xx [ 392 ] - xx [ 91 ] ; xx
[ 91 ] = xx [ 393 ] - xx [ 94 ] ; xx [ 94 ] = xx [ 394 ] - xx [ 89 ] ; xx [
89 ] = xx [ 395 ] - xx [ 92 ] ; xx [ 92 ] = xx [ 396 ] - xx [ 95 ] ; xx [ 95
] = xx [ 397 ] - xx [ 90 ] ; xx [ 90 ] = xx [ 398 ] - xx [ 93 ] ; xx [ 93 ] =
xx [ 399 ] - xx [ 96 ] ; xx [ 382 ] = xx [ 56 ] ; xx [ 383 ] = xx [ 88 ] ; xx
[ 384 ] = xx [ 91 ] ; xx [ 385 ] = xx [ 94 ] ; xx [ 386 ] = xx [ 89 ] ; xx [
387 ] = xx [ 92 ] ; xx [ 388 ] = xx [ 95 ] ; xx [ 389 ] = xx [ 90 ] ; xx [
390 ] = xx [ 93 ] ; xx [ 346 ] = - 3.478043091554657e-14 ; xx [ 347 ] =
8.616599387917045e-3 ; xx [ 348 ] = - 0.01781379291801384 ;
pm_math_Vector3_cross_ra ( xx + 346 , xx + 294 , xx + 362 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 382 , xx + 362 , xx + 368 ) ; xx [ 96 ] =
xx [ 297 ] + xx [ 368 ] ; xx [ 273 ] = xx [ 298 ] + xx [ 369 ] ; xx [ 297 ] =
xx [ 299 ] + xx [ 370 ] ; xx [ 368 ] = xx [ 96 ] ; xx [ 369 ] = xx [ 273 ] ;
xx [ 370 ] = xx [ 297 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 382 , xx
+ 294 , xx + 391 ) ; xx [ 298 ] = 8.355848350904705e-3 ; xx [ 418 ] = xx [
298 ] + xx [ 427 ] ; xx [ 419 ] = xx [ 428 ] ; xx [ 420 ] = xx [ 429 ] ; xx [
421 ] = xx [ 430 ] ; xx [ 422 ] = xx [ 298 ] + xx [ 431 ] ; xx [ 423 ] = xx [
432 ] ; xx [ 424 ] = xx [ 433 ] ; xx [ 425 ] = xx [ 434 ] ; xx [ 426 ] = xx [
298 ] + xx [ 435 ] ; pm_math_Matrix3x3_xform_ra ( xx + 418 , xx + 362 , xx +
394 ) ; xx [ 299 ] = xx [ 391 ] + xx [ 394 ] ; xx [ 349 ] = xx [ 392 ] + xx [
395 ] ; xx [ 371 ] = xx [ 393 ] + xx [ 396 ] ; xx [ 391 ] = xx [ 299 ] ; xx [
392 ] = xx [ 349 ] ; xx [ 393 ] = xx [ 371 ] ; xx [ 372 ] = xx [ 49 ] * xx [
26 ] ; xx [ 394 ] = xx [ 48 ] * xx [ 37 ] ; xx [ 395 ] = xx [ 372 ] + xx [
394 ] ; xx [ 396 ] = xx [ 36 ] * xx [ 26 ] ; xx [ 397 ] = xx [ 36 ] * xx [ 37
] ; xx [ 398 ] = xx [ 396 ] * xx [ 26 ] + xx [ 397 ] * xx [ 37 ] ; xx [ 399 ]
= xx [ 11 ] * ( xx [ 29 ] * xx [ 395 ] + xx [ 398 ] ) - xx [ 36 ] ; xx [ 436
] = xx [ 29 ] * xx [ 397 ] ; xx [ 397 ] = xx [ 48 ] + ( xx [ 436 ] - xx [ 37
] * xx [ 395 ] ) * xx [ 11 ] ; xx [ 437 ] = xx [ 29 ] * xx [ 396 ] ; xx [ 396
] = xx [ 49 ] + ( xx [ 437 ] - xx [ 26 ] * xx [ 395 ] ) * xx [ 11 ] ; xx [
438 ] = xx [ 399 ] ; xx [ 439 ] = xx [ 397 ] ; xx [ 440 ] = - xx [ 396 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 330 , xx + 438 , xx + 441 ) ;
pm_math_Vector3_cross_ra ( xx + 346 , xx + 438 , xx + 444 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 382 , xx + 444 , xx + 447 ) ; xx [ 395 ] =
xx [ 441 ] + xx [ 447 ] ; xx [ 450 ] = xx [ 442 ] + xx [ 448 ] ; xx [ 441 ] =
xx [ 443 ] + xx [ 449 ] ; xx [ 447 ] = xx [ 395 ] ; xx [ 448 ] = xx [ 450 ] ;
xx [ 449 ] = xx [ 441 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 382 , xx
+ 438 , xx + 451 ) ; pm_math_Matrix3x3_xform_ra ( xx + 418 , xx + 444 , xx +
454 ) ; xx [ 442 ] = xx [ 451 ] + xx [ 454 ] ; xx [ 443 ] = xx [ 452 ] + xx [
455 ] ; xx [ 451 ] = xx [ 453 ] + xx [ 456 ] ; xx [ 452 ] = xx [ 442 ] ; xx [
453 ] = xx [ 443 ] ; xx [ 454 ] = xx [ 451 ] ; xx [ 455 ] =
pm_math_Vector3_dot_ra ( xx + 294 , xx + 447 ) + pm_math_Vector3_dot_ra ( xx
+ 362 , xx + 452 ) ; xx [ 456 ] = 0.0139587874710942 ; xx [ 457 ] =
3.287582437116741e-14 ; xx [ 458 ] = 1.135158784431775e-14 ; xx [ 459 ] = xx
[ 456 ] ; xx [ 460 ] = xx [ 457 ] ; xx [ 461 ] = - xx [ 458 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 382 , xx + 459 , xx + 462 ) ; xx [ 465 ] =
xx [ 49 ] * xx [ 125 ] + xx [ 48 ] * xx [ 133 ] + xx [ 462 ] ; xx [ 466 ] =
xx [ 145 ] * xx [ 49 ] + xx [ 48 ] * xx [ 147 ] + xx [ 463 ] ; xx [ 462 ] =
xx [ 49 ] * xx [ 150 ] + xx [ 178 ] * xx [ 48 ] + xx [ 464 ] ; xx [ 467 ] =
xx [ 465 ] ; xx [ 468 ] = xx [ 466 ] ; xx [ 469 ] = xx [ 462 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 418 , xx + 459 , xx + 470 ) ; xx [ 463 ] =
xx [ 49 ] * xx [ 94 ] + xx [ 48 ] * xx [ 95 ] + xx [ 470 ] ; xx [ 464 ] = xx
[ 49 ] * xx [ 89 ] + xx [ 48 ] * xx [ 90 ] + xx [ 471 ] ; xx [ 470 ] = xx [
49 ] * xx [ 92 ] + xx [ 48 ] * xx [ 93 ] + xx [ 472 ] ; xx [ 471 ] = xx [ 463
] ; xx [ 472 ] = xx [ 464 ] ; xx [ 473 ] = xx [ 470 ] ; xx [ 474 ] =
pm_math_Vector3_dot_ra ( xx + 294 , xx + 467 ) + pm_math_Vector3_dot_ra ( xx
+ 362 , xx + 471 ) ; xx [ 475 ] = pm_math_Vector3_dot_ra ( xx + 438 , xx +
467 ) + pm_math_Vector3_dot_ra ( xx + 444 , xx + 471 ) ; xx [ 476 ] =
pm_math_Vector3_dot_ra ( xx + 294 , xx + 368 ) + pm_math_Vector3_dot_ra ( xx
+ 362 , xx + 391 ) ; xx [ 477 ] = xx [ 455 ] ; xx [ 478 ] = xx [ 474 ] ; xx [
479 ] = xx [ 455 ] ; xx [ 480 ] = pm_math_Vector3_dot_ra ( xx + 438 , xx +
447 ) + pm_math_Vector3_dot_ra ( xx + 444 , xx + 452 ) ; xx [ 481 ] = xx [
475 ] ; xx [ 482 ] = xx [ 474 ] ; xx [ 483 ] = xx [ 475 ] ; xx [ 484 ] = xx [
466 ] * xx [ 49 ] + xx [ 462 ] * xx [ 48 ] + pm_math_Vector3_dot_ra ( xx +
459 , xx + 471 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 476 , 3 , xx + 368
) ; bb [ 1 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 13 ] ) ) > xx [ 103 ] ;
ii [ 1 ] = bb [ 1 ] ? 1 : 0 ; if ( bb [ 1 ] ) * derivErr = 1 ; if ( ii [ 0 ]
+ ii [ 1 ] != 0 ) * derivErr = 1 ; xx [ 485 ] = xx [ 96 ] ; xx [ 486 ] = xx [
395 ] ; xx [ 487 ] = xx [ 465 ] ; xx [ 488 ] = xx [ 273 ] ; xx [ 489 ] = xx [
450 ] ; xx [ 490 ] = xx [ 466 ] ; xx [ 491 ] = xx [ 297 ] ; xx [ 492 ] = xx [
441 ] ; xx [ 493 ] = xx [ 462 ] ; xx [ 494 ] = xx [ 299 ] ; xx [ 495 ] = xx [
442 ] ; xx [ 496 ] = xx [ 463 ] ; xx [ 497 ] = xx [ 349 ] ; xx [ 498 ] = xx [
443 ] ; xx [ 499 ] = xx [ 464 ] ; xx [ 500 ] = xx [ 371 ] ; xx [ 501 ] = xx [
451 ] ; xx [ 502 ] = xx [ 470 ] ; solveSymmetricPosDef ( xx + 476 , xx + 485
, 3 , 6 , xx + 503 , xx + 368 ) ; xx [ 368 ] = xx [ 273 ] * xx [ 503 ] + xx [
450 ] * xx [ 504 ] + xx [ 466 ] * xx [ 505 ] ; xx [ 369 ] = xx [ 297 ] * xx [
503 ] + xx [ 441 ] * xx [ 504 ] + xx [ 462 ] * xx [ 505 ] ; xx [ 370 ] = xx [
297 ] * xx [ 506 ] + xx [ 441 ] * xx [ 507 ] + xx [ 462 ] * xx [ 508 ] ; xx [
485 ] = xx [ 119 ] - ( xx [ 96 ] * xx [ 503 ] + xx [ 395 ] * xx [ 504 ] + xx
[ 465 ] * xx [ 505 ] ) + xx [ 120 ] ; xx [ 486 ] = xx [ 125 ] - xx [ 368 ] ;
xx [ 487 ] = xx [ 133 ] - xx [ 369 ] ; xx [ 488 ] = xx [ 139 ] - xx [ 368 ] ;
xx [ 489 ] = xx [ 145 ] - ( xx [ 273 ] * xx [ 506 ] + xx [ 450 ] * xx [ 507 ]
+ xx [ 466 ] * xx [ 508 ] ) ; xx [ 490 ] = xx [ 147 ] - xx [ 370 ] ; xx [ 491
] = xx [ 148 ] - xx [ 369 ] ; xx [ 492 ] = xx [ 150 ] - xx [ 370 ] ; xx [ 493
] = xx [ 178 ] - ( xx [ 297 ] * xx [ 509 ] + xx [ 441 ] * xx [ 510 ] + xx [
462 ] * xx [ 511 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 485 , xx
+ 61 , xx + 494 ) ; pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 494 , xx +
485 ) ; xx [ 494 ] = xx [ 56 ] - ( xx [ 96 ] * xx [ 512 ] + xx [ 395 ] * xx [
513 ] + xx [ 465 ] * xx [ 514 ] ) ; xx [ 495 ] = xx [ 88 ] - ( xx [ 96 ] * xx
[ 515 ] + xx [ 395 ] * xx [ 516 ] + xx [ 465 ] * xx [ 517 ] ) ; xx [ 496 ] =
xx [ 91 ] - ( xx [ 96 ] * xx [ 518 ] + xx [ 395 ] * xx [ 519 ] + xx [ 465 ] *
xx [ 520 ] ) ; xx [ 497 ] = xx [ 94 ] - ( xx [ 273 ] * xx [ 512 ] + xx [ 450
] * xx [ 513 ] + xx [ 466 ] * xx [ 514 ] ) ; xx [ 498 ] = xx [ 89 ] - ( xx [
273 ] * xx [ 515 ] + xx [ 450 ] * xx [ 516 ] + xx [ 466 ] * xx [ 517 ] ) ; xx
[ 499 ] = xx [ 92 ] - ( xx [ 273 ] * xx [ 518 ] + xx [ 450 ] * xx [ 519 ] +
xx [ 466 ] * xx [ 520 ] ) ; xx [ 500 ] = xx [ 95 ] - ( xx [ 297 ] * xx [ 512
] + xx [ 441 ] * xx [ 513 ] + xx [ 462 ] * xx [ 514 ] ) ; xx [ 501 ] = xx [
90 ] - ( xx [ 297 ] * xx [ 515 ] + xx [ 441 ] * xx [ 516 ] + xx [ 462 ] * xx
[ 517 ] ) ; xx [ 502 ] = xx [ 93 ] - ( xx [ 297 ] * xx [ 518 ] + xx [ 441 ] *
xx [ 519 ] + xx [ 462 ] * xx [ 520 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 494 , xx + 61 , xx + 521 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 521 , xx + 494 ) ; xx [ 88 ] =
xx [ 31 ] ; xx [ 89 ] = xx [ 52 ] ; xx [ 90 ] = xx [ 53 ] ; xx [ 91 ] = xx [
55 ] ; pm_math_Quaternion_xform_ra ( xx + 88 , xx + 346 , xx + 92 ) ; xx [ 31
] = 1.222885353421585e-13 - xx [ 92 ] ; xx [ 52 ] = 0.01371330802384472 - xx
[ 93 ] ; xx [ 53 ] = 0.01482112808326479 - xx [ 94 ] ; xx [ 92 ] = xx [ 31 ]
; xx [ 93 ] = xx [ 52 ] ; xx [ 94 ] = xx [ 53 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 494 , xx + 92 , xx + 521 ) ; xx [ 55 ]
= xx [ 349 ] * xx [ 512 ] + xx [ 443 ] * xx [ 513 ] + xx [ 464 ] * xx [ 514 ]
; xx [ 56 ] = xx [ 371 ] * xx [ 512 ] + xx [ 451 ] * xx [ 513 ] + xx [ 470 ]
* xx [ 514 ] ; xx [ 95 ] = xx [ 371 ] * xx [ 515 ] + xx [ 451 ] * xx [ 516 ]
+ xx [ 470 ] * xx [ 517 ] ; xx [ 530 ] = xx [ 427 ] - ( xx [ 299 ] * xx [ 512
] + xx [ 442 ] * xx [ 513 ] + xx [ 463 ] * xx [ 514 ] ) + xx [ 298 ] ; xx [
531 ] = xx [ 428 ] - xx [ 55 ] ; xx [ 532 ] = xx [ 429 ] - xx [ 56 ] ; xx [
533 ] = xx [ 430 ] - xx [ 55 ] ; xx [ 534 ] = xx [ 431 ] - ( xx [ 349 ] * xx
[ 515 ] + xx [ 443 ] * xx [ 516 ] + xx [ 464 ] * xx [ 517 ] ) + xx [ 298 ] ;
xx [ 535 ] = xx [ 432 ] - xx [ 95 ] ; xx [ 536 ] = xx [ 433 ] - xx [ 56 ] ;
xx [ 537 ] = xx [ 434 ] - xx [ 95 ] ; xx [ 538 ] = xx [ 435 ] - ( xx [ 371 ]
* xx [ 518 ] + xx [ 451 ] * xx [ 519 ] + xx [ 470 ] * xx [ 520 ] ) + xx [ 298
] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 530 , xx + 61 , xx + 427 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 427 , xx + 530 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 530 , xx + 92 , xx + 61 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 61 , xx + 92 , xx + 427 ) ; xx [ 55 ] =
xx [ 485 ] - xx [ 521 ] - xx [ 521 ] - xx [ 427 ] ; xx [ 56 ] =
2.872594976382685e-6 ; xx [ 95 ] = xx [ 486 ] - xx [ 522 ] - xx [ 524 ] - xx
[ 428 ] ; xx [ 119 ] = xx [ 487 ] - xx [ 523 ] - xx [ 527 ] - xx [ 429 ] ; xx
[ 125 ] = xx [ 488 ] - xx [ 524 ] - xx [ 522 ] - xx [ 430 ] ; xx [ 133 ] =
1.933045481959352e-6 ; xx [ 139 ] = xx [ 133 ] + xx [ 489 ] - xx [ 525 ] - xx
[ 525 ] - xx [ 431 ] ; xx [ 145 ] = xx [ 490 ] - xx [ 526 ] - xx [ 528 ] - xx
[ 432 ] ; xx [ 147 ] = xx [ 491 ] - xx [ 527 ] - xx [ 523 ] - xx [ 433 ] ; xx
[ 148 ] = xx [ 492 ] - xx [ 528 ] - xx [ 526 ] - xx [ 434 ] ; xx [ 150 ] =
3.740002603775385e-6 ; xx [ 178 ] = xx [ 150 ] + xx [ 493 ] - xx [ 529 ] - xx
[ 529 ] - xx [ 435 ] ; xx [ 427 ] = xx [ 56 ] + xx [ 55 ] ; xx [ 428 ] = xx [
95 ] ; xx [ 429 ] = xx [ 119 ] ; xx [ 430 ] = xx [ 125 ] ; xx [ 431 ] = xx [
139 ] ; xx [ 432 ] = xx [ 145 ] ; xx [ 433 ] = xx [ 147 ] ; xx [ 434 ] = xx [
148 ] ; xx [ 435 ] = xx [ 178 ] ; xx [ 368 ] = xx [ 0 ] - ( xx [ 35 ] + xx [
38 ] ) * xx [ 11 ] ; xx [ 35 ] = ( xx [ 34 ] + xx [ 33 ] ) * xx [ 11 ] ; xx [
391 ] = xx [ 368 ] ; xx [ 392 ] = xx [ 32 ] ; xx [ 393 ] = xx [ 35 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 427 , xx + 391 , xx + 447 ) ; xx [ 33 ] =
xx [ 494 ] - xx [ 61 ] ; xx [ 34 ] = xx [ 495 ] - xx [ 64 ] ; xx [ 38 ] = xx
[ 496 ] - xx [ 67 ] ; xx [ 61 ] = xx [ 497 ] - xx [ 62 ] ; xx [ 62 ] = xx [
498 ] - xx [ 65 ] ; xx [ 64 ] = xx [ 499 ] - xx [ 68 ] ; xx [ 65 ] = xx [ 500
] - xx [ 63 ] ; xx [ 63 ] = xx [ 501 ] - xx [ 66 ] ; xx [ 66 ] = xx [ 502 ] -
xx [ 69 ] ; xx [ 485 ] = xx [ 33 ] ; xx [ 486 ] = xx [ 34 ] ; xx [ 487 ] = xx
[ 38 ] ; xx [ 488 ] = xx [ 61 ] ; xx [ 489 ] = xx [ 62 ] ; xx [ 490 ] = xx [
64 ] ; xx [ 491 ] = xx [ 65 ] ; xx [ 492 ] = xx [ 63 ] ; xx [ 493 ] = xx [ 66
] ; xx [ 67 ] = 6.664202092713185e-14 ; xx [ 68 ] = 6.161981679940124e-3 ; xx
[ 69 ] = - 0.01687376340899878 ; pm_math_Vector3_cross_ra ( xx + 67 , xx +
391 , xx + 452 ) ; pm_math_Matrix3x3_xform_ra ( xx + 485 , xx + 452 , xx +
467 ) ; xx [ 369 ] = xx [ 447 ] + xx [ 467 ] ; xx [ 370 ] = xx [ 448 ] + xx [
468 ] ; xx [ 447 ] = xx [ 449 ] + xx [ 469 ] ; xx [ 467 ] = xx [ 369 ] ; xx [
468 ] = xx [ 370 ] ; xx [ 469 ] = xx [ 447 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 485 , xx + 391 , xx + 471 ) ; xx [
448 ] = 8.201635464916061e-3 ; xx [ 494 ] = xx [ 448 ] + xx [ 530 ] ; xx [
495 ] = xx [ 531 ] ; xx [ 496 ] = xx [ 532 ] ; xx [ 497 ] = xx [ 533 ] ; xx [
498 ] = xx [ 448 ] + xx [ 534 ] ; xx [ 499 ] = xx [ 535 ] ; xx [ 500 ] = xx [
536 ] ; xx [ 501 ] = xx [ 537 ] ; xx [ 502 ] = xx [ 448 ] + xx [ 538 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 494 , xx + 452 , xx + 521 ) ; xx [ 449 ] =
xx [ 471 ] + xx [ 521 ] ; xx [ 455 ] = xx [ 472 ] + xx [ 522 ] ; xx [ 471 ] =
xx [ 473 ] + xx [ 523 ] ; xx [ 472 ] = xx [ 449 ] ; xx [ 473 ] = xx [ 455 ] ;
xx [ 474 ] = xx [ 471 ] ; xx [ 475 ] = xx [ 25 ] * xx [ 19 ] ; xx [ 521 ] =
xx [ 24 ] * xx [ 23 ] ; xx [ 522 ] = xx [ 475 ] + xx [ 521 ] ; xx [ 523 ] =
xx [ 22 ] * xx [ 19 ] ; xx [ 524 ] = xx [ 22 ] * xx [ 23 ] ; xx [ 525 ] = xx
[ 523 ] * xx [ 19 ] + xx [ 524 ] * xx [ 23 ] ; xx [ 526 ] = xx [ 22 ] + xx [
11 ] * ( xx [ 20 ] * xx [ 522 ] - xx [ 525 ] ) ; xx [ 527 ] = xx [ 20 ] * xx
[ 524 ] ; xx [ 524 ] = xx [ 24 ] - ( xx [ 527 ] + xx [ 23 ] * xx [ 522 ] ) *
xx [ 11 ] ; xx [ 528 ] = xx [ 20 ] * xx [ 523 ] ; xx [ 523 ] = ( xx [ 528 ] +
xx [ 19 ] * xx [ 522 ] ) * xx [ 11 ] - xx [ 25 ] ; xx [ 539 ] = xx [ 526 ] ;
xx [ 540 ] = xx [ 524 ] ; xx [ 541 ] = xx [ 523 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 427 , xx + 539 , xx + 542 ) ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 539 , xx + 545 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 485 , xx + 545 , xx + 548 ) ; xx [ 522 ] =
xx [ 542 ] + xx [ 548 ] ; xx [ 529 ] = xx [ 543 ] + xx [ 549 ] ; xx [ 542 ] =
xx [ 544 ] + xx [ 550 ] ; xx [ 548 ] = xx [ 522 ] ; xx [ 549 ] = xx [ 529 ] ;
xx [ 550 ] = xx [ 542 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 485 , xx
+ 539 , xx + 551 ) ; pm_math_Matrix3x3_xform_ra ( xx + 494 , xx + 545 , xx +
554 ) ; xx [ 543 ] = xx [ 551 ] + xx [ 554 ] ; xx [ 544 ] = xx [ 552 ] + xx [
555 ] ; xx [ 551 ] = xx [ 553 ] + xx [ 556 ] ; xx [ 552 ] = xx [ 543 ] ; xx [
553 ] = xx [ 544 ] ; xx [ 554 ] = xx [ 551 ] ; xx [ 555 ] =
pm_math_Vector3_dot_ra ( xx + 391 , xx + 548 ) + pm_math_Vector3_dot_ra ( xx
+ 452 , xx + 552 ) ; xx [ 556 ] = 0.01011063572343469 ; xx [ 557 ] =
6.460835926211764e-14 ; xx [ 558 ] = 1.633765181136557e-14 ; xx [ 559 ] = xx
[ 556 ] ; xx [ 560 ] = - xx [ 557 ] ; xx [ 561 ] = xx [ 558 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 485 , xx + 559 , xx + 562 ) ; xx [ 565 ] =
xx [ 25 ] * xx [ 95 ] + xx [ 24 ] * xx [ 119 ] + xx [ 562 ] ; xx [ 566 ] = xx
[ 139 ] * xx [ 25 ] + xx [ 24 ] * xx [ 145 ] + xx [ 563 ] ; xx [ 562 ] = xx [
25 ] * xx [ 148 ] + xx [ 178 ] * xx [ 24 ] + xx [ 564 ] ; xx [ 567 ] = xx [
565 ] ; xx [ 568 ] = xx [ 566 ] ; xx [ 569 ] = xx [ 562 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 494 , xx + 559 , xx + 570 ) ; xx [ 563 ] =
xx [ 25 ] * xx [ 61 ] + xx [ 24 ] * xx [ 65 ] + xx [ 570 ] ; xx [ 564 ] = xx
[ 25 ] * xx [ 62 ] + xx [ 24 ] * xx [ 63 ] + xx [ 571 ] ; xx [ 570 ] = xx [
25 ] * xx [ 64 ] + xx [ 24 ] * xx [ 66 ] + xx [ 572 ] ; xx [ 571 ] = xx [ 563
] ; xx [ 572 ] = xx [ 564 ] ; xx [ 573 ] = xx [ 570 ] ; xx [ 574 ] =
pm_math_Vector3_dot_ra ( xx + 391 , xx + 567 ) + pm_math_Vector3_dot_ra ( xx
+ 452 , xx + 571 ) ; xx [ 575 ] = pm_math_Vector3_dot_ra ( xx + 539 , xx +
567 ) + pm_math_Vector3_dot_ra ( xx + 545 , xx + 571 ) ; xx [ 576 ] =
pm_math_Vector3_dot_ra ( xx + 391 , xx + 467 ) + pm_math_Vector3_dot_ra ( xx
+ 452 , xx + 472 ) ; xx [ 577 ] = xx [ 555 ] ; xx [ 578 ] = xx [ 574 ] ; xx [
579 ] = xx [ 555 ] ; xx [ 580 ] = pm_math_Vector3_dot_ra ( xx + 539 , xx +
548 ) + pm_math_Vector3_dot_ra ( xx + 545 , xx + 552 ) ; xx [ 581 ] = xx [
575 ] ; xx [ 582 ] = xx [ 574 ] ; xx [ 583 ] = xx [ 575 ] ; xx [ 584 ] = xx [
566 ] * xx [ 25 ] + xx [ 562 ] * xx [ 24 ] + pm_math_Vector3_dot_ra ( xx +
559 , xx + 571 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 576 , 3 , xx + 467
) ; bb [ 1 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 7 ] ) ) > xx [ 103 ] ;
ii [ 1 ] = bb [ 1 ] ? 1 : 0 ; if ( bb [ 1 ] ) * derivErr = 1 ; if ( ii [ 0 ]
+ ii [ 1 ] != 0 ) * derivErr = 1 ; xx [ 585 ] = xx [ 369 ] ; xx [ 586 ] = xx
[ 522 ] ; xx [ 587 ] = xx [ 565 ] ; xx [ 588 ] = xx [ 370 ] ; xx [ 589 ] = xx
[ 529 ] ; xx [ 590 ] = xx [ 566 ] ; xx [ 591 ] = xx [ 447 ] ; xx [ 592 ] = xx
[ 542 ] ; xx [ 593 ] = xx [ 562 ] ; xx [ 594 ] = xx [ 449 ] ; xx [ 595 ] = xx
[ 543 ] ; xx [ 596 ] = xx [ 563 ] ; xx [ 597 ] = xx [ 455 ] ; xx [ 598 ] = xx
[ 544 ] ; xx [ 599 ] = xx [ 564 ] ; xx [ 600 ] = xx [ 471 ] ; xx [ 601 ] = xx
[ 551 ] ; xx [ 602 ] = xx [ 570 ] ; solveSymmetricPosDef ( xx + 576 , xx +
585 , 3 , 6 , xx + 603 , xx + 467 ) ; xx [ 467 ] = xx [ 370 ] * xx [ 603 ] +
xx [ 529 ] * xx [ 604 ] + xx [ 566 ] * xx [ 605 ] ; xx [ 468 ] = xx [ 447 ] *
xx [ 603 ] + xx [ 542 ] * xx [ 604 ] + xx [ 562 ] * xx [ 605 ] ; xx [ 469 ] =
xx [ 447 ] * xx [ 606 ] + xx [ 542 ] * xx [ 607 ] + xx [ 562 ] * xx [ 608 ] ;
xx [ 585 ] = xx [ 55 ] - ( xx [ 369 ] * xx [ 603 ] + xx [ 522 ] * xx [ 604 ]
+ xx [ 565 ] * xx [ 605 ] ) + xx [ 56 ] ; xx [ 586 ] = xx [ 95 ] - xx [ 467 ]
; xx [ 587 ] = xx [ 119 ] - xx [ 468 ] ; xx [ 588 ] = xx [ 125 ] - xx [ 467 ]
; xx [ 589 ] = xx [ 139 ] - ( xx [ 370 ] * xx [ 606 ] + xx [ 529 ] * xx [ 607
] + xx [ 566 ] * xx [ 608 ] ) ; xx [ 590 ] = xx [ 145 ] - xx [ 469 ] ; xx [
591 ] = xx [ 147 ] - xx [ 468 ] ; xx [ 592 ] = xx [ 148 ] - xx [ 469 ] ; xx [
593 ] = xx [ 178 ] - ( xx [ 447 ] * xx [ 609 ] + xx [ 542 ] * xx [ 610 ] + xx
[ 562 ] * xx [ 611 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 585 ,
xx + 39 , xx + 594 ) ; pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 594 , xx
+ 585 ) ; xx [ 594 ] = xx [ 33 ] - ( xx [ 369 ] * xx [ 612 ] + xx [ 522 ] *
xx [ 613 ] + xx [ 565 ] * xx [ 614 ] ) ; xx [ 595 ] = xx [ 34 ] - ( xx [ 369
] * xx [ 615 ] + xx [ 522 ] * xx [ 616 ] + xx [ 565 ] * xx [ 617 ] ) ; xx [
596 ] = xx [ 38 ] - ( xx [ 369 ] * xx [ 618 ] + xx [ 522 ] * xx [ 619 ] + xx
[ 565 ] * xx [ 620 ] ) ; xx [ 597 ] = xx [ 61 ] - ( xx [ 370 ] * xx [ 612 ] +
xx [ 529 ] * xx [ 613 ] + xx [ 566 ] * xx [ 614 ] ) ; xx [ 598 ] = xx [ 62 ]
- ( xx [ 370 ] * xx [ 615 ] + xx [ 529 ] * xx [ 616 ] + xx [ 566 ] * xx [ 617
] ) ; xx [ 599 ] = xx [ 64 ] - ( xx [ 370 ] * xx [ 618 ] + xx [ 529 ] * xx [
619 ] + xx [ 566 ] * xx [ 620 ] ) ; xx [ 600 ] = xx [ 65 ] - ( xx [ 447 ] *
xx [ 612 ] + xx [ 542 ] * xx [ 613 ] + xx [ 562 ] * xx [ 614 ] ) ; xx [ 601 ]
= xx [ 63 ] - ( xx [ 447 ] * xx [ 615 ] + xx [ 542 ] * xx [ 616 ] + xx [ 562
] * xx [ 617 ] ) ; xx [ 602 ] = xx [ 66 ] - ( xx [ 447 ] * xx [ 618 ] + xx [
542 ] * xx [ 619 ] + xx [ 562 ] * xx [ 620 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 594 , xx + 39 , xx + 621 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 621 , xx + 594 ) ; xx [ 61 ] =
xx [ 21 ] ; xx [ 62 ] = xx [ 27 ] ; xx [ 63 ] = xx [ 28 ] ; xx [ 64 ] = xx [
30 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 67 , xx + 467 ) ; xx [ 21
] = 0.01018286292250497 - xx [ 468 ] ; xx [ 27 ] = 0.01643121746247235 - xx [
469 ] ; xx [ 472 ] = - xx [ 467 ] ; xx [ 473 ] = xx [ 21 ] ; xx [ 474 ] = xx
[ 27 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 594 , xx + 472 , xx + 621 ) ;
xx [ 28 ] = xx [ 455 ] * xx [ 612 ] + xx [ 544 ] * xx [ 613 ] + xx [ 564 ] *
xx [ 614 ] ; xx [ 30 ] = xx [ 471 ] * xx [ 612 ] + xx [ 551 ] * xx [ 613 ] +
xx [ 570 ] * xx [ 614 ] ; xx [ 33 ] = xx [ 471 ] * xx [ 615 ] + xx [ 551 ] *
xx [ 616 ] + xx [ 570 ] * xx [ 617 ] ; xx [ 630 ] = xx [ 530 ] - ( xx [ 449 ]
* xx [ 612 ] + xx [ 543 ] * xx [ 613 ] + xx [ 563 ] * xx [ 614 ] ) + xx [ 448
] ; xx [ 631 ] = xx [ 531 ] - xx [ 28 ] ; xx [ 632 ] = xx [ 532 ] - xx [ 30 ]
; xx [ 633 ] = xx [ 533 ] - xx [ 28 ] ; xx [ 634 ] = xx [ 534 ] - ( xx [ 455
] * xx [ 615 ] + xx [ 544 ] * xx [ 616 ] + xx [ 564 ] * xx [ 617 ] ) + xx [
448 ] ; xx [ 635 ] = xx [ 535 ] - xx [ 33 ] ; xx [ 636 ] = xx [ 536 ] - xx [
30 ] ; xx [ 637 ] = xx [ 537 ] - xx [ 33 ] ; xx [ 638 ] = xx [ 538 ] - ( xx [
471 ] * xx [ 618 ] + xx [ 551 ] * xx [ 619 ] + xx [ 570 ] * xx [ 620 ] ) + xx
[ 448 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 630 , xx + 39 , xx +
530 ) ; pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 530 , xx + 630 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 630 , xx + 472 , xx + 38 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 38 , xx + 472 , xx + 530 ) ; xx [ 28 ] =
xx [ 586 ] - xx [ 622 ] - xx [ 624 ] - xx [ 531 ] ; xx [ 30 ] = xx [ 587 ] -
xx [ 623 ] - xx [ 627 ] - xx [ 532 ] ; xx [ 33 ] = 3.490126909650324e-6 ; xx
[ 34 ] = xx [ 33 ] + xx [ 589 ] - xx [ 625 ] - xx [ 625 ] - xx [ 534 ] ; xx [
47 ] = xx [ 590 ] - xx [ 626 ] - xx [ 628 ] - xx [ 535 ] ; xx [ 55 ] = xx [
592 ] - xx [ 628 ] - xx [ 626 ] - xx [ 537 ] ; xx [ 65 ] =
5.069554565459512e-6 ; xx [ 66 ] = xx [ 65 ] + xx [ 593 ] - xx [ 629 ] - xx [
629 ] - xx [ 538 ] ; xx [ 639 ] = xx [ 18 ] + xx [ 585 ] - xx [ 621 ] - xx [
621 ] - xx [ 530 ] ; xx [ 640 ] = xx [ 28 ] ; xx [ 641 ] = xx [ 30 ] ; xx [
642 ] = xx [ 588 ] - xx [ 624 ] - xx [ 622 ] - xx [ 533 ] ; xx [ 643 ] = xx [
34 ] ; xx [ 644 ] = xx [ 47 ] ; xx [ 645 ] = xx [ 591 ] - xx [ 627 ] - xx [
623 ] - xx [ 536 ] ; xx [ 646 ] = xx [ 55 ] ; xx [ 647 ] = xx [ 66 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 639 , xx + 15 , xx + 530 ) ; xx [ 95 ] = xx
[ 594 ] - xx [ 38 ] ; xx [ 38 ] = xx [ 597 ] - xx [ 39 ] ; xx [ 39 ] = xx [
598 ] - xx [ 42 ] ; xx [ 42 ] = xx [ 599 ] - xx [ 45 ] ; xx [ 45 ] = xx [ 600
] - xx [ 40 ] ; xx [ 40 ] = xx [ 601 ] - xx [ 43 ] ; xx [ 43 ] = xx [ 602 ] -
xx [ 46 ] ; xx [ 585 ] = xx [ 95 ] ; xx [ 586 ] = xx [ 595 ] - xx [ 41 ] ; xx
[ 587 ] = xx [ 596 ] - xx [ 44 ] ; xx [ 588 ] = xx [ 38 ] ; xx [ 589 ] = xx [
39 ] ; xx [ 590 ] = xx [ 42 ] ; xx [ 591 ] = xx [ 45 ] ; xx [ 592 ] = xx [ 40
] ; xx [ 593 ] = xx [ 43 ] ; xx [ 41 ] = 8.538390167322628e-3 ; xx [ 44 ] =
0.0187094325596859 ; xx [ 46 ] = xx [ 41 ] * xx [ 8 ] + xx [ 44 ] * xx [ 4 ]
; xx [ 119 ] = xx [ 44 ] * xx [ 12 ] ; xx [ 125 ] = xx [ 41 ] * xx [ 12 ] ;
xx [ 533 ] = xx [ 46 ] ; xx [ 534 ] = - xx [ 119 ] ; xx [ 535 ] = - xx [ 125
] ; pm_math_Matrix3x3_xform_ra ( xx + 585 , xx + 533 , xx + 536 ) ; xx [ 139
] = xx [ 530 ] + xx [ 536 ] ; xx [ 145 ] = xx [ 531 ] + xx [ 537 ] ; xx [ 147
] = xx [ 532 ] + xx [ 538 ] ; xx [ 530 ] = xx [ 139 ] ; xx [ 531 ] = xx [ 145
] ; xx [ 532 ] = xx [ 147 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 585
, xx + 15 , xx + 536 ) ; xx [ 148 ] = 9.266435618121707e-3 ; xx [ 178 ] = xx
[ 148 ] + xx [ 630 ] ; xx [ 594 ] = xx [ 178 ] ; xx [ 595 ] = xx [ 631 ] ; xx
[ 596 ] = xx [ 632 ] ; xx [ 597 ] = xx [ 633 ] ; xx [ 598 ] = xx [ 148 ] + xx
[ 634 ] ; xx [ 599 ] = xx [ 635 ] ; xx [ 600 ] = xx [ 636 ] ; xx [ 601 ] = xx
[ 637 ] ; xx [ 602 ] = xx [ 148 ] + xx [ 638 ] ; pm_math_Matrix3x3_xform_ra (
xx + 594 , xx + 533 , xx + 548 ) ; xx [ 468 ] = xx [ 536 ] + xx [ 548 ] ; xx
[ 469 ] = xx [ 537 ] + xx [ 549 ] ; xx [ 536 ] = xx [ 538 ] + xx [ 550 ] ; xx
[ 548 ] = xx [ 468 ] ; xx [ 549 ] = xx [ 469 ] ; xx [ 550 ] = xx [ 536 ] ; xx
[ 537 ] = xx [ 9 ] * xx [ 2 ] ; xx [ 538 ] = xx [ 13 ] * xx [ 7 ] ; xx [ 552
] = xx [ 537 ] + xx [ 538 ] ; xx [ 553 ] = xx [ 11 ] * xx [ 3 ] * xx [ 552 ]
; xx [ 554 ] = xx [ 13 ] - xx [ 11 ] * xx [ 7 ] * xx [ 552 ] ; xx [ 555 ] =
xx [ 11 ] * xx [ 2 ] * xx [ 552 ] - xx [ 9 ] ; pm_math_Matrix3x3_xform_ra (
xx + 639 , xx + 553 , xx + 567 ) ; xx [ 552 ] = xx [ 41 ] * xx [ 555 ] + xx [
554 ] * xx [ 44 ] ; xx [ 571 ] = xx [ 44 ] * xx [ 553 ] ; xx [ 572 ] = xx [
41 ] * xx [ 553 ] ; xx [ 573 ] = xx [ 552 ] ; xx [ 574 ] = - xx [ 571 ] ; xx
[ 575 ] = - xx [ 572 ] ; pm_math_Matrix3x3_xform_ra ( xx + 585 , xx + 573 ,
xx + 621 ) ; xx [ 624 ] = xx [ 567 ] + xx [ 621 ] ; xx [ 625 ] = xx [ 568 ] +
xx [ 622 ] ; xx [ 567 ] = xx [ 569 ] + xx [ 623 ] ; xx [ 621 ] = xx [ 624 ] ;
xx [ 622 ] = xx [ 625 ] ; xx [ 623 ] = xx [ 567 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 585 , xx + 553 , xx + 626 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 594 , xx + 573 , xx + 629 ) ; xx [ 568 ] =
xx [ 626 ] + xx [ 629 ] ; xx [ 569 ] = xx [ 627 ] + xx [ 630 ] ; xx [ 626 ] =
xx [ 628 ] + xx [ 631 ] ; xx [ 627 ] = xx [ 568 ] ; xx [ 628 ] = xx [ 569 ] ;
xx [ 629 ] = xx [ 626 ] ; xx [ 630 ] = pm_math_Vector3_dot_ra ( xx + 15 , xx
+ 621 ) + pm_math_Vector3_dot_ra ( xx + 533 , xx + 627 ) ; xx [ 631 ] =
0.01308562271097496 ; xx [ 632 ] = xx [ 9 ] * xx [ 28 ] + xx [ 13 ] * xx [ 30
] + xx [ 631 ] * xx [ 95 ] ; xx [ 28 ] = xx [ 34 ] * xx [ 9 ] + xx [ 13 ] *
xx [ 47 ] + xx [ 631 ] * xx [ 38 ] ; xx [ 30 ] = xx [ 9 ] * xx [ 55 ] + xx [
66 ] * xx [ 13 ] + xx [ 631 ] * xx [ 45 ] ; xx [ 648 ] = xx [ 632 ] ; xx [
649 ] = xx [ 28 ] ; xx [ 650 ] = xx [ 30 ] ; xx [ 34 ] = xx [ 9 ] * xx [ 38 ]
+ xx [ 13 ] * xx [ 45 ] + xx [ 178 ] * xx [ 631 ] ; xx [ 38 ] = xx [ 9 ] * xx
[ 39 ] + xx [ 13 ] * xx [ 40 ] + xx [ 631 ] * xx [ 633 ] ; xx [ 39 ] = xx [ 9
] * xx [ 42 ] + xx [ 13 ] * xx [ 43 ] + xx [ 631 ] * xx [ 636 ] ; xx [ 633 ]
= xx [ 34 ] ; xx [ 634 ] = xx [ 38 ] ; xx [ 635 ] = xx [ 39 ] ; xx [ 40 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 648 ) + pm_math_Vector3_dot_ra ( xx +
533 , xx + 633 ) ; xx [ 42 ] = pm_math_Vector3_dot_ra ( xx + 553 , xx + 648 )
+ pm_math_Vector3_dot_ra ( xx + 573 , xx + 633 ) ; xx [ 648 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 530 ) + pm_math_Vector3_dot_ra ( xx +
533 , xx + 548 ) ; xx [ 649 ] = xx [ 630 ] ; xx [ 650 ] = xx [ 40 ] ; xx [
651 ] = xx [ 630 ] ; xx [ 652 ] = pm_math_Vector3_dot_ra ( xx + 553 , xx +
621 ) + pm_math_Vector3_dot_ra ( xx + 573 , xx + 627 ) ; xx [ 653 ] = xx [ 42
] ; xx [ 654 ] = xx [ 40 ] ; xx [ 655 ] = xx [ 42 ] ; xx [ 656 ] = xx [ 28 ]
* xx [ 9 ] + xx [ 30 ] * xx [ 13 ] + xx [ 34 ] * xx [ 631 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 648 , 3 , xx + 530 ) ; bb [ 1 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 1 ] ) ) > xx [ 103 ] ; ii [ 1 ] = bb [ 1 ] ? 1 : 0 ;
if ( bb [ 1 ] ) * derivErr = 1 ; if ( ii [ 0 ] + ii [ 1 ] != 0 ) * derivErr =
1 ; xx [ 40 ] = 5.729577951308232 ; xx [ 42 ] = 0.5235987755982988 ; xx [ 43
] = state [ 0 ] + xx [ 42 ] ; if ( xx [ 152 ] < xx [ 43 ] ) xx [ 43 ] = xx [
152 ] ; xx [ 45 ] = 1.74532925199433e-3 ; xx [ 47 ] = - ( xx [ 43 ] / xx [ 45
] ) ; if ( xx [ 0 ] < xx [ 47 ] ) xx [ 47 ] = xx [ 0 ] ; xx [ 55 ] = 3.0 ; xx
[ 66 ] = 5729.577951308232 ; xx [ 95 ] = xx [ 66 ] * state [ 3 ] ; xx [ 103 ]
= 5.729577951308232e5 ; xx [ 178 ] = xx [ 47 ] * xx [ 47 ] * ( xx [ 55 ] - xx
[ 11 ] * xx [ 47 ] ) * ( ( - xx [ 43 ] == xx [ 152 ] ? xx [ 152 ] : - xx [ 95
] ) - xx [ 103 ] * xx [ 43 ] ) ; if ( xx [ 152 ] > xx [ 178 ] ) xx [ 178 ] =
xx [ 152 ] ; xx [ 43 ] = state [ 0 ] - xx [ 42 ] ; if ( xx [ 152 ] > xx [ 43
] ) xx [ 43 ] = xx [ 152 ] ; xx [ 47 ] = xx [ 43 ] / xx [ 45 ] ; if ( xx [ 0
] < xx [ 47 ] ) xx [ 47 ] = xx [ 0 ] ; xx [ 530 ] = ( xx [ 103 ] * xx [ 43 ]
+ ( xx [ 43 ] == xx [ 152 ] ? xx [ 152 ] : xx [ 95 ] ) ) * xx [ 47 ] * xx [
47 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 47 ] ) ; if ( xx [ 152 ] > xx [ 530 ] )
xx [ 530 ] = xx [ 152 ] ; xx [ 43 ] = xx [ 12 ] * state [ 3 ] ; xx [ 47 ] =
xx [ 537 ] + xx [ 538 ] ; xx [ 95 ] = xx [ 11 ] * xx [ 3 ] * xx [ 47 ] *
state [ 4 ] ; xx [ 3 ] = xx [ 43 ] + xx [ 95 ] ; xx [ 531 ] = xx [ 4 ] *
state [ 3 ] ; xx [ 532 ] = ( xx [ 13 ] - xx [ 11 ] * xx [ 7 ] * xx [ 47 ] ) *
state [ 4 ] ; xx [ 7 ] = xx [ 9 ] * state [ 5 ] ; xx [ 537 ] = xx [ 531 ] +
xx [ 532 ] + xx [ 7 ] ; xx [ 538 ] = xx [ 8 ] * state [ 3 ] ; xx [ 548 ] = (
xx [ 11 ] * xx [ 2 ] * xx [ 47 ] - xx [ 9 ] ) * state [ 4 ] ; xx [ 2 ] = xx [
13 ] * state [ 5 ] ; xx [ 47 ] = xx [ 538 ] + xx [ 548 ] + xx [ 2 ] ; xx [
621 ] = xx [ 3 ] ; xx [ 622 ] = xx [ 537 ] ; xx [ 623 ] = xx [ 47 ] ; xx [
627 ] = xx [ 18 ] * xx [ 3 ] ; xx [ 628 ] = xx [ 537 ] * xx [ 33 ] ; xx [ 629
] = xx [ 47 ] * xx [ 65 ] ; pm_math_Vector3_cross_ra ( xx + 621 , xx + 627 ,
xx + 633 ) ; xx [ 18 ] = 0.6903818921736785 * input [ 143 ] ; xx [ 33 ] =
input [ 143 ] - 1.380763784347357 * xx [ 18 ] ; xx [ 65 ] = 1.446890241806463
* xx [ 18 ] ; xx [ 18 ] = 0.0375915374507293 ; xx [ 627 ] = -
2.405769667632971e-13 ; xx [ 628 ] = - 0.03983410794452454 ; xx [ 629 ] = -
0.01645986959431302 ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 627 , xx +
636 ) ; xx [ 549 ] = xx [ 636 ] - xx [ 467 ] ; xx [ 550 ] = xx [ 637 ] + xx [
21 ] + xx [ 18 ] ; xx [ 630 ] = 1.590244414800102e-3 ; xx [ 636 ] = xx [ 638
] + xx [ 27 ] + xx [ 630 ] ; xx [ 637 ] = sqrt ( xx [ 549 ] * xx [ 549 ] + xx
[ 550 ] * xx [ 550 ] + xx [ 636 ] * xx [ 636 ] ) ; if ( xx [ 637 ] == 0.0 ) *
derivErr = 1 ; xx [ 638 ] = input [ 152 ] / xx [ 637 ] ; xx [ 657 ] = xx [
638 ] * xx [ 636 ] ; xx [ 658 ] = xx [ 638 ] * xx [ 550 ] ; xx [ 659 ] =
0.01759714945393536 ; xx [ 660 ] = - xx [ 10 ] ; xx [ 661 ] = xx [ 14 ] ; xx
[ 662 ] = xx [ 6 ] ; xx [ 663 ] = xx [ 5 ] ; xx [ 664 ] = xx [ 14 ] ; xx [
665 ] = xx [ 6 ] ; xx [ 666 ] = xx [ 5 ] ; xx [ 667 ] = 0.03563872347849285 ;
xx [ 668 ] = xx [ 5 ] * xx [ 667 ] - xx [ 659 ] * xx [ 6 ] ; xx [ 669 ] = xx
[ 659 ] * xx [ 14 ] ; xx [ 670 ] = xx [ 667 ] * xx [ 14 ] ; xx [ 671 ] = xx [
668 ] ; xx [ 672 ] = xx [ 669 ] ; xx [ 673 ] = - xx [ 670 ] ;
pm_math_Vector3_cross_ra ( xx + 664 , xx + 671 , xx + 674 ) ; xx [ 671 ] = xx
[ 44 ] * xx [ 6 ] + xx [ 5 ] * xx [ 41 ] ; xx [ 672 ] = xx [ 44 ] * xx [ 14 ]
; xx [ 673 ] = xx [ 41 ] * xx [ 14 ] ; xx [ 677 ] = - xx [ 671 ] ; xx [ 678 ]
= xx [ 672 ] ; xx [ 679 ] = xx [ 673 ] ; pm_math_Vector3_cross_ra ( xx + 664
, xx + 677 , xx + 680 ) ; xx [ 664 ] = ( xx [ 10 ] * xx [ 671 ] + xx [ 680 ]
) * xx [ 11 ] ; xx [ 665 ] = ( xx [ 674 ] - xx [ 10 ] * xx [ 668 ] ) * xx [
11 ] - xx [ 664 ] ; xx [ 666 ] = 0.06197538565817786 - xx [ 11 ] * ( xx [ 681
] - xx [ 672 ] * xx [ 10 ] ) ; xx [ 668 ] = xx [ 11 ] * ( xx [ 675 ] - xx [
669 ] * xx [ 10 ] ) - xx [ 667 ] + xx [ 666 ] - 0.0257594283537832 ; xx [ 669
] = 0.9283707866246274 - ( xx [ 682 ] - xx [ 673 ] * xx [ 10 ] ) * xx [ 11 ]
; xx [ 671 ] = ( xx [ 670 ] * xx [ 10 ] + xx [ 676 ] ) * xx [ 11 ] - xx [ 659
] + xx [ 669 ] - 0.906781702449562 ; xx [ 670 ] = sqrt ( xx [ 665 ] * xx [
665 ] + xx [ 668 ] * xx [ 668 ] + xx [ 671 ] * xx [ 671 ] ) ; if ( xx [ 670 ]
== 0.0 ) * derivErr = 1 ; xx [ 672 ] = input [ 153 ] / xx [ 670 ] ; xx [ 673
] = xx [ 672 ] * xx [ 665 ] ; xx [ 674 ] = xx [ 672 ] * xx [ 668 ] ; xx [ 675
] = xx [ 672 ] * xx [ 671 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 660 ,
xx + 673 , xx + 676 ) ; xx [ 673 ] = 0.04055699920652953 ; xx [ 674 ] =
0.01302079271818882 ; xx [ 675 ] = 0.0135421645305857 ; xx [ 679 ] = - xx [
673 ] ; xx [ 680 ] = - xx [ 674 ] ; xx [ 681 ] = xx [ 675 ] ; xx [ 682 ] = -
0.03653985023506644 ; xx [ 683 ] = - 0.01645220048935106 ; xx [ 684 ] =
3.239433747529818e-3 ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 682 , xx
+ 685 ) ; xx [ 688 ] = xx [ 685 ] - xx [ 467 ] + xx [ 673 ] ; xx [ 673 ] = xx
[ 686 ] + xx [ 21 ] + xx [ 674 ] ; xx [ 674 ] = xx [ 687 ] + xx [ 27 ] - xx [
675 ] ; xx [ 675 ] = sqrt ( xx [ 688 ] * xx [ 688 ] + xx [ 673 ] * xx [ 673 ]
+ xx [ 674 ] * xx [ 674 ] ) ; if ( xx [ 675 ] == 0.0 ) * derivErr = 1 ; xx [
685 ] = input [ 157 ] / xx [ 675 ] ; xx [ 686 ] = xx [ 685 ] * xx [ 688 ] ;
xx [ 687 ] = xx [ 685 ] * xx [ 673 ] ; xx [ 689 ] = xx [ 685 ] * xx [ 674 ] ;
xx [ 690 ] = - xx [ 686 ] ; xx [ 691 ] = - xx [ 687 ] ; xx [ 692 ] = - xx [
689 ] ; pm_math_Vector3_cross_ra ( xx + 679 , xx + 690 , xx + 693 ) ; xx [
679 ] = - 0.04008119964598488 ; xx [ 680 ] = - 0.01084940380361654 ; xx [ 681
] = - 9.8613284252828e-4 ; pm_math_Quaternion_xform_ra ( xx + 660 , xx + 679
, xx + 690 ) ; xx [ 696 ] = 0.044078899383545 ; xx [ 697 ] = xx [ 690 ] - xx
[ 664 ] + xx [ 696 ] ; xx [ 698 ] = 0.0499199981689453 ; xx [ 699 ] = xx [
691 ] + xx [ 666 ] - xx [ 698 ] ; xx [ 690 ] = 0.919140991210938 ; xx [ 691 ]
= xx [ 692 ] + xx [ 669 ] - xx [ 690 ] ; xx [ 692 ] = sqrt ( xx [ 697 ] * xx
[ 697 ] + xx [ 699 ] * xx [ 699 ] + xx [ 691 ] * xx [ 691 ] ) ; if ( xx [ 692
] == 0.0 ) * derivErr = 1 ; xx [ 700 ] = input [ 158 ] / xx [ 692 ] ; xx [
701 ] = xx [ 700 ] * xx [ 697 ] ; xx [ 702 ] = xx [ 700 ] * xx [ 699 ] ; xx [
703 ] = xx [ 700 ] * xx [ 691 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
660 , xx + 701 , xx + 704 ) ; pm_math_Vector3_cross_ra ( xx + 679 , xx + 704
, xx + 701 ) ; xx [ 679 ] = 0.04055699920655626 ; xx [ 680 ] =
0.0130207927181218 ; xx [ 681 ] = 0.01354216453058323 ; xx [ 707 ] = xx [ 679
] ; xx [ 708 ] = - xx [ 680 ] ; xx [ 709 ] = xx [ 681 ] ; xx [ 710 ] =
0.03653985023490417 ; xx [ 711 ] = - 0.01645220048983929 ; xx [ 712 ] =
3.239433747517833e-3 ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 710 , xx
+ 713 ) ; xx [ 716 ] = xx [ 713 ] - xx [ 467 ] - xx [ 679 ] ; xx [ 679 ] = xx
[ 714 ] + xx [ 21 ] + xx [ 680 ] ; xx [ 680 ] = xx [ 715 ] + xx [ 27 ] - xx [
681 ] ; xx [ 681 ] = sqrt ( xx [ 716 ] * xx [ 716 ] + xx [ 679 ] * xx [ 679 ]
+ xx [ 680 ] * xx [ 680 ] ) ; if ( xx [ 681 ] == 0.0 ) * derivErr = 1 ; xx [
713 ] = input [ 162 ] / xx [ 681 ] ; xx [ 714 ] = xx [ 713 ] * xx [ 716 ] ;
xx [ 715 ] = xx [ 713 ] * xx [ 679 ] ; xx [ 717 ] = xx [ 713 ] * xx [ 680 ] ;
xx [ 718 ] = - xx [ 714 ] ; xx [ 719 ] = - xx [ 715 ] ; xx [ 720 ] = - xx [
717 ] ; pm_math_Vector3_cross_ra ( xx + 707 , xx + 718 , xx + 721 ) ; xx [
707 ] = 0.04008119964600713 ; xx [ 708 ] = - 0.01084940380355031 ; xx [ 709 ]
= - 9.861328425307225e-4 ; pm_math_Quaternion_xform_ra ( xx + 660 , xx + 707
, xx + 718 ) ; xx [ 724 ] = xx [ 718 ] - xx [ 664 ] - xx [ 696 ] ; xx [ 696 ]
= xx [ 719 ] + xx [ 666 ] - xx [ 698 ] ; xx [ 698 ] = xx [ 720 ] + xx [ 669 ]
- xx [ 690 ] ; xx [ 690 ] = sqrt ( xx [ 724 ] * xx [ 724 ] + xx [ 696 ] * xx
[ 696 ] + xx [ 698 ] * xx [ 698 ] ) ; if ( xx [ 690 ] == 0.0 ) * derivErr = 1
; xx [ 718 ] = input [ 163 ] / xx [ 690 ] ; xx [ 725 ] = xx [ 718 ] * xx [
724 ] ; xx [ 726 ] = xx [ 718 ] * xx [ 696 ] ; xx [ 727 ] = xx [ 718 ] * xx [
698 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 660 , xx + 725 , xx + 728 )
; pm_math_Vector3_cross_ra ( xx + 707 , xx + 728 , xx + 725 ) ; xx [ 707 ] =
0.04705808460307085 ; xx [ 731 ] = - 3.166185351073283e-13 ; xx [ 732 ] = -
0.0513211464694144 ; xx [ 733 ] = - 0.01219126570664875 ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 731 , xx + 734 ) ; xx [ 708 ] =
xx [ 734 ] - xx [ 467 ] ; xx [ 467 ] = xx [ 735 ] + xx [ 21 ] + xx [ 707 ] ;
xx [ 21 ] = 9.875319015864496e-3 ; xx [ 709 ] = xx [ 736 ] + xx [ 27 ] + xx [
21 ] ; xx [ 27 ] = sqrt ( xx [ 708 ] * xx [ 708 ] + xx [ 467 ] * xx [ 467 ] +
xx [ 709 ] * xx [ 709 ] ) ; if ( xx [ 27 ] == 0.0 ) * derivErr = 1 ; xx [ 719
] = input [ 178 ] / xx [ 27 ] ; xx [ 720 ] = xx [ 719 ] * xx [ 709 ] ; xx [
734 ] = xx [ 719 ] * xx [ 467 ] ; xx [ 735 ] = - 3.88840995326696e-5 ; xx [
736 ] = - 0.04658678468440397 ; xx [ 737 ] = - 0.0171197768192325 ;
pm_math_Quaternion_xform_ra ( xx + 660 , xx + 735 , xx + 738 ) ; xx [ 741 ] =
xx [ 738 ] - xx [ 664 ] ; xx [ 742 ] = xx [ 739 ] + xx [ 666 ] -
0.019933675415717 ; xx [ 738 ] = xx [ 740 ] + xx [ 669 ] - 0.904526583782246
; xx [ 739 ] = sqrt ( xx [ 741 ] * xx [ 741 ] + xx [ 742 ] * xx [ 742 ] + xx
[ 738 ] * xx [ 738 ] ) ; if ( xx [ 739 ] == 0.0 ) * derivErr = 1 ; xx [ 740 ]
= input [ 179 ] / xx [ 739 ] ; xx [ 743 ] = xx [ 740 ] * xx [ 741 ] ; xx [
744 ] = xx [ 740 ] * xx [ 742 ] ; xx [ 745 ] = xx [ 740 ] * xx [ 738 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 660 , xx + 743 , xx + 746 ) ;
pm_math_Vector3_cross_ra ( xx + 735 , xx + 746 , xx + 743 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 621 , xx + 735 ) ; xx [
749 ] = xx [ 368 ] * state [ 9 ] ; xx [ 750 ] = xx [ 475 ] + xx [ 521 ] ; xx
[ 475 ] = ( xx [ 22 ] - ( xx [ 525 ] - xx [ 20 ] * xx [ 750 ] ) * xx [ 11 ] )
* state [ 10 ] ; xx [ 20 ] = xx [ 749 ] + xx [ 475 ] ; xx [ 22 ] = xx [ 735 ]
+ xx [ 20 ] ; xx [ 521 ] = xx [ 32 ] * state [ 9 ] ; xx [ 525 ] = ( xx [ 24 ]
- xx [ 11 ] * ( xx [ 23 ] * xx [ 750 ] + xx [ 527 ] ) ) * state [ 10 ] ; xx [
23 ] = xx [ 25 ] * state [ 11 ] ; xx [ 527 ] = xx [ 521 ] + xx [ 525 ] + xx [
23 ] ; xx [ 751 ] = xx [ 736 ] + xx [ 527 ] ; xx [ 752 ] = xx [ 35 ] * state
[ 9 ] ; xx [ 753 ] = ( xx [ 11 ] * ( xx [ 528 ] + xx [ 19 ] * xx [ 750 ] ) -
xx [ 25 ] ) * state [ 10 ] ; xx [ 19 ] = xx [ 24 ] * state [ 11 ] ; xx [ 528
] = xx [ 752 ] + xx [ 753 ] + xx [ 19 ] ; xx [ 750 ] = xx [ 737 ] + xx [ 528
] ; xx [ 754 ] = xx [ 22 ] ; xx [ 755 ] = xx [ 751 ] ; xx [ 756 ] = xx [ 750
] ; xx [ 757 ] = xx [ 22 ] * xx [ 56 ] ; xx [ 758 ] = xx [ 751 ] * xx [ 133 ]
; xx [ 759 ] = xx [ 750 ] * xx [ 150 ] ; pm_math_Vector3_cross_ra ( xx + 754
, xx + 757 , xx + 760 ) ; xx [ 757 ] = 2.234568172515435e-13 ; xx [ 758 ] =
0.02939308698039612 ; xx [ 759 ] = - 5.661597909317728e-3 ; xx [ 56 ] =
0.7847814363844873 ; xx [ 133 ] = 2.339080312536016e-12 ; xx [ 150 ] = xx [
133 ] * input [ 144 ] ; xx [ 763 ] = 0.619772617260799 ; xx [ 764 ] = xx [
763 ] * input [ 144 ] ; xx [ 765 ] = ( xx [ 56 ] * xx [ 150 ] + xx [ 133 ] *
xx [ 764 ] ) * xx [ 11 ] ; xx [ 766 ] = xx [ 133 ] * xx [ 150 ] ; xx [ 133 ]
= xx [ 11 ] * ( xx [ 766 ] - xx [ 56 ] * xx [ 764 ] ) ; xx [ 56 ] = input [
144 ] - ( xx [ 763 ] * xx [ 764 ] + xx [ 766 ] ) * xx [ 11 ] ; xx [ 766 ] = -
xx [ 765 ] ; xx [ 767 ] = xx [ 133 ] ; xx [ 768 ] = xx [ 56 ] ;
pm_math_Vector3_cross_ra ( xx + 757 , xx + 766 , xx + 769 ) ; xx [ 150 ] =
2.408429233865428e-13 ; xx [ 757 ] = 0.04027776673008778 ; xx [ 758 ] =
9.50951981748549e-6 ; xx [ 766 ] = - xx [ 150 ] ; xx [ 767 ] = - xx [ 757 ] ;
xx [ 768 ] = - xx [ 758 ] ; xx [ 772 ] = 1.167567527306757e-13 ; xx [ 773 ] =
- 0.04472798265803164 ; xx [ 774 ] = - 0.01492244588929304 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 772 , xx + 775 ) ; xx [ 759 ] =
xx [ 775 ] + xx [ 31 ] + xx [ 150 ] ; xx [ 150 ] = xx [ 776 ] + xx [ 52 ] +
xx [ 757 ] ; xx [ 757 ] = xx [ 777 ] + xx [ 53 ] + xx [ 758 ] ; xx [ 758 ] =
sqrt ( xx [ 759 ] * xx [ 759 ] + xx [ 150 ] * xx [ 150 ] + xx [ 757 ] * xx [
757 ] ) ; if ( xx [ 758 ] == 0.0 ) * derivErr = 1 ; xx [ 763 ] = input [ 151
] / xx [ 758 ] ; xx [ 764 ] = xx [ 763 ] * xx [ 759 ] ; xx [ 775 ] = xx [ 763
] * xx [ 150 ] ; xx [ 776 ] = xx [ 763 ] * xx [ 757 ] ; xx [ 777 ] = - xx [
764 ] ; xx [ 778 ] = - xx [ 775 ] ; xx [ 779 ] = - xx [ 776 ] ;
pm_math_Vector3_cross_ra ( xx + 766 , xx + 777 , xx + 780 ) ; xx [ 766 ] = xx
[ 638 ] * xx [ 549 ] ; xx [ 777 ] = xx [ 766 ] ; xx [ 778 ] = xx [ 658 ] ; xx
[ 779 ] = xx [ 657 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx +
777 , xx + 783 ) ; pm_math_Vector3_cross_ra ( xx + 627 , xx + 783 , xx + 777
) ; xx [ 627 ] = 0.03492720031745133 ; xx [ 628 ] = 0.01477959769994918 ; xx
[ 629 ] = 0.01134881117700549 ; xx [ 786 ] = - xx [ 627 ] ; xx [ 787 ] = - xx
[ 628 ] ; xx [ 788 ] = xx [ 629 ] ; xx [ 789 ] = - 0.03087794971463731 ; xx [
790 ] = - 0.01577384625407678 ; xx [ 791 ] = 4.057911382721502e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 789 , xx + 792 ) ; xx [ 767 ] =
xx [ 792 ] + xx [ 31 ] + xx [ 627 ] ; xx [ 627 ] = xx [ 793 ] + xx [ 52 ] +
xx [ 628 ] ; xx [ 628 ] = xx [ 794 ] + xx [ 53 ] - xx [ 629 ] ; xx [ 629 ] =
sqrt ( xx [ 767 ] * xx [ 767 ] + xx [ 627 ] * xx [ 627 ] + xx [ 628 ] * xx [
628 ] ) ; if ( xx [ 629 ] == 0.0 ) * derivErr = 1 ; xx [ 768 ] = input [ 156
] / xx [ 629 ] ; xx [ 792 ] = xx [ 768 ] * xx [ 767 ] ; xx [ 793 ] = xx [ 768
] * xx [ 627 ] ; xx [ 794 ] = xx [ 768 ] * xx [ 628 ] ; xx [ 795 ] = - xx [
792 ] ; xx [ 796 ] = - xx [ 793 ] ; xx [ 797 ] = - xx [ 794 ] ;
pm_math_Vector3_cross_ra ( xx + 786 , xx + 795 , xx + 798 ) ; xx [ 786 ] = xx
[ 686 ] ; xx [ 787 ] = xx [ 687 ] ; xx [ 788 ] = xx [ 689 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 786 , xx + 795 ) ;
pm_math_Vector3_cross_ra ( xx + 682 , xx + 795 , xx + 786 ) ; xx [ 682 ] =
0.03492470169060014 ; xx [ 683 ] = 0.01552496039123881 ; xx [ 684 ] =
0.01167234256981233 ; xx [ 801 ] = xx [ 682 ] ; xx [ 802 ] = - xx [ 683 ] ;
xx [ 803 ] = xx [ 684 ] ; xx [ 804 ] = 0.03087794971468379 ; xx [ 805 ] = -
0.01577384625389952 ; xx [ 806 ] = 4.057911382755352e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 804 , xx + 807 ) ; xx [ 810 ] =
xx [ 807 ] + xx [ 31 ] - xx [ 682 ] ; xx [ 682 ] = xx [ 808 ] + xx [ 52 ] +
xx [ 683 ] ; xx [ 683 ] = xx [ 809 ] + xx [ 53 ] - xx [ 684 ] ; xx [ 684 ] =
sqrt ( xx [ 810 ] * xx [ 810 ] + xx [ 682 ] * xx [ 682 ] + xx [ 683 ] * xx [
683 ] ) ; if ( xx [ 684 ] == 0.0 ) * derivErr = 1 ; xx [ 807 ] = input [ 161
] / xx [ 684 ] ; xx [ 808 ] = xx [ 807 ] * xx [ 810 ] ; xx [ 809 ] = xx [ 807
] * xx [ 682 ] ; xx [ 811 ] = xx [ 807 ] * xx [ 683 ] ; xx [ 812 ] = - xx [
808 ] ; xx [ 813 ] = - xx [ 809 ] ; xx [ 814 ] = - xx [ 811 ] ;
pm_math_Vector3_cross_ra ( xx + 801 , xx + 812 , xx + 815 ) ; xx [ 801 ] = xx
[ 714 ] ; xx [ 802 ] = xx [ 715 ] ; xx [ 803 ] = xx [ 717 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 801 , xx + 812 ) ;
pm_math_Vector3_cross_ra ( xx + 710 , xx + 812 , xx + 801 ) ; xx [ 710 ] =
3.146640243071065e-13 ; xx [ 711 ] = 0.05113078984265527 ; xx [ 712 ] =
8.028332428854309e-3 ; xx [ 818 ] = - xx [ 710 ] ; xx [ 819 ] = - xx [ 711 ]
; xx [ 820 ] = - xx [ 712 ] ; xx [ 821 ] = 1.4285959311088e-13 ; xx [ 822 ] =
- 0.05524484988788111 ; xx [ 823 ] = - 7.469488033553544e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 821 , xx + 824 ) ; xx [ 827 ] =
xx [ 824 ] + xx [ 31 ] + xx [ 710 ] ; xx [ 31 ] = xx [ 825 ] + xx [ 52 ] + xx
[ 711 ] ; xx [ 52 ] = xx [ 826 ] + xx [ 53 ] + xx [ 712 ] ; xx [ 53 ] = sqrt
( xx [ 827 ] * xx [ 827 ] + xx [ 31 ] * xx [ 31 ] + xx [ 52 ] * xx [ 52 ] ) ;
if ( xx [ 53 ] == 0.0 ) * derivErr = 1 ; xx [ 710 ] = input [ 177 ] / xx [ 53
] ; xx [ 711 ] = xx [ 710 ] * xx [ 827 ] ; xx [ 712 ] = xx [ 710 ] * xx [ 31
] ; xx [ 824 ] = xx [ 710 ] * xx [ 52 ] ; xx [ 828 ] = - xx [ 711 ] ; xx [
829 ] = - xx [ 712 ] ; xx [ 830 ] = - xx [ 824 ] ; pm_math_Vector3_cross_ra (
xx + 818 , xx + 828 , xx + 831 ) ; xx [ 818 ] = xx [ 719 ] * xx [ 708 ] ; xx
[ 828 ] = xx [ 818 ] ; xx [ 829 ] = xx [ 734 ] ; xx [ 830 ] = xx [ 720 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 828 , xx + 834 ) ;
pm_math_Vector3_cross_ra ( xx + 731 , xx + 834 , xx + 828 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 754 , xx + 731 ) ; xx [
819 ] = xx [ 271 ] * state [ 15 ] ; xx [ 820 ] = xx [ 372 ] + xx [ 394 ] ; xx
[ 372 ] = ( ( xx [ 29 ] * xx [ 820 ] + xx [ 398 ] ) * xx [ 11 ] - xx [ 36 ] )
* state [ 16 ] ; xx [ 29 ] = xx [ 819 ] + xx [ 372 ] ; xx [ 36 ] = xx [ 731 ]
+ xx [ 29 ] ; xx [ 394 ] = xx [ 272 ] * state [ 15 ] ; xx [ 398 ] = ( xx [ 48
] + xx [ 11 ] * ( xx [ 436 ] - xx [ 37 ] * xx [ 820 ] ) ) * state [ 16 ] ; xx
[ 37 ] = xx [ 49 ] * state [ 17 ] ; xx [ 436 ] = xx [ 394 ] + xx [ 398 ] + xx
[ 37 ] ; xx [ 825 ] = xx [ 732 ] + xx [ 436 ] ; xx [ 826 ] = xx [ 50 ] *
state [ 15 ] ; xx [ 837 ] = ( xx [ 11 ] * ( xx [ 26 ] * xx [ 820 ] - xx [ 437
] ) - xx [ 49 ] ) * state [ 16 ] ; xx [ 26 ] = xx [ 48 ] * state [ 17 ] ; xx
[ 437 ] = xx [ 826 ] + xx [ 837 ] + xx [ 26 ] ; xx [ 820 ] = xx [ 733 ] + xx
[ 437 ] ; xx [ 838 ] = xx [ 36 ] ; xx [ 839 ] = xx [ 825 ] ; xx [ 840 ] = xx
[ 820 ] ; xx [ 841 ] = xx [ 36 ] * xx [ 120 ] ; xx [ 842 ] = xx [ 825 ] * xx
[ 144 ] ; xx [ 843 ] = xx [ 820 ] * xx [ 151 ] ; pm_math_Vector3_cross_ra (
xx + 838 , xx + 841 , xx + 844 ) ; xx [ 841 ] = - 1.076648921049358e-13 ; xx
[ 842 ] = 0.03139087037316381 ; xx [ 843 ] = - 4.53476976212614e-3 ; xx [ 120
] = 0.64004249649544 * input [ 146 ] ; xx [ 144 ] = xx [ 11 ] *
1.278175242626048e-12 * xx [ 120 ] ; xx [ 151 ] = xx [ 11 ] *
0.7683395100343888 * xx [ 120 ] ; xx [ 847 ] = input [ 146 ] -
1.28008499299088 * xx [ 120 ] ; xx [ 848 ] = xx [ 144 ] ; xx [ 849 ] = - xx [
151 ] ; xx [ 850 ] = xx [ 847 ] ; pm_math_Vector3_cross_ra ( xx + 841 , xx +
848 , xx + 851 ) ; xx [ 841 ] = 8.947197148478258e-14 ; xx [ 842 ] =
0.0386335011732275 ; xx [ 843 ] = 2.940430357145393e-3 ; xx [ 848 ] = xx [
841 ] ; xx [ 849 ] = - xx [ 842 ] ; xx [ 850 ] = xx [ 843 ] ; xx [ 854 ] = -
6.841875673243218e-13 ; xx [ 855 ] = - 0.04146091222789498 ; xx [ 856 ] = -
0.01351410150666451 ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 854 , xx +
857 ) ; xx [ 860 ] = xx [ 857 ] - xx [ 79 ] - xx [ 841 ] ; xx [ 841 ] = xx [
858 ] + xx [ 121 ] + xx [ 842 ] ; xx [ 842 ] = xx [ 859 ] + xx [ 118 ] - xx [
843 ] ; xx [ 843 ] = sqrt ( xx [ 860 ] * xx [ 860 ] + xx [ 841 ] * xx [ 841 ]
+ xx [ 842 ] * xx [ 842 ] ) ; if ( xx [ 843 ] == 0.0 ) * derivErr = 1 ; xx [
857 ] = input [ 150 ] / xx [ 843 ] ; xx [ 858 ] = xx [ 857 ] * xx [ 860 ] ;
xx [ 859 ] = xx [ 857 ] * xx [ 841 ] ; xx [ 861 ] = xx [ 857 ] * xx [ 842 ] ;
xx [ 862 ] = - xx [ 858 ] ; xx [ 863 ] = - xx [ 859 ] ; xx [ 864 ] = - xx [
861 ] ; pm_math_Vector3_cross_ra ( xx + 848 , xx + 862 , xx + 865 ) ; xx [
848 ] = xx [ 764 ] ; xx [ 849 ] = xx [ 775 ] ; xx [ 850 ] = xx [ 776 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 848 , xx + 862 ) ;
pm_math_Vector3_cross_ra ( xx + 772 , xx + 862 , xx + 848 ) ; xx [ 772 ] =
0.03295989990232563 ; xx [ 773 ] = 0.01601356214963441 ; xx [ 774 ] =
0.01475302284708025 ; xx [ 868 ] = - xx [ 772 ] ; xx [ 869 ] = - xx [ 773 ] ;
xx [ 870 ] = xx [ 774 ] ; xx [ 871 ] = - 0.03226754951497003 ; xx [ 872 ] = -
0.02045999852626687 ; xx [ 873 ] = 5.644585224138508e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 871 , xx + 874 ) ; xx [ 877 ] =
xx [ 874 ] - xx [ 79 ] + xx [ 772 ] ; xx [ 772 ] = xx [ 875 ] + xx [ 121 ] +
xx [ 773 ] ; xx [ 773 ] = xx [ 876 ] + xx [ 118 ] - xx [ 774 ] ; xx [ 774 ] =
sqrt ( xx [ 877 ] * xx [ 877 ] + xx [ 772 ] * xx [ 772 ] + xx [ 773 ] * xx [
773 ] ) ; if ( xx [ 774 ] == 0.0 ) * derivErr = 1 ; xx [ 874 ] = input [ 155
] / xx [ 774 ] ; xx [ 875 ] = xx [ 874 ] * xx [ 877 ] ; xx [ 876 ] = xx [ 874
] * xx [ 772 ] ; xx [ 878 ] = xx [ 874 ] * xx [ 773 ] ; xx [ 879 ] = - xx [
875 ] ; xx [ 880 ] = - xx [ 876 ] ; xx [ 881 ] = - xx [ 878 ] ;
pm_math_Vector3_cross_ra ( xx + 868 , xx + 879 , xx + 882 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 792 , xx + 868 ) ;
pm_math_Vector3_cross_ra ( xx + 789 , xx + 868 , xx + 879 ) ; xx [ 789 ] =
0.03295989990236177 ; xx [ 790 ] = 0.01601356214944519 ; xx [ 791 ] =
0.01475302284711638 ; xx [ 885 ] = xx [ 789 ] ; xx [ 886 ] = - xx [ 790 ] ;
xx [ 887 ] = xx [ 791 ] ; xx [ 888 ] = 0.03226754951457088 ; xx [ 889 ] = -
0.02045999852744781 ; xx [ 890 ] = 5.644585223800618e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 888 , xx + 891 ) ; xx [ 894 ] =
xx [ 891 ] - xx [ 79 ] - xx [ 789 ] ; xx [ 789 ] = xx [ 892 ] + xx [ 121 ] +
xx [ 790 ] ; xx [ 790 ] = xx [ 893 ] + xx [ 118 ] - xx [ 791 ] ; xx [ 791 ] =
sqrt ( xx [ 894 ] * xx [ 894 ] + xx [ 789 ] * xx [ 789 ] + xx [ 790 ] * xx [
790 ] ) ; if ( xx [ 791 ] == 0.0 ) * derivErr = 1 ; xx [ 891 ] = input [ 160
] / xx [ 791 ] ; xx [ 892 ] = xx [ 891 ] * xx [ 894 ] ; xx [ 893 ] = xx [ 891
] * xx [ 789 ] ; xx [ 895 ] = xx [ 891 ] * xx [ 790 ] ; xx [ 896 ] = - xx [
892 ] ; xx [ 897 ] = - xx [ 893 ] ; xx [ 898 ] = - xx [ 895 ] ;
pm_math_Vector3_cross_ra ( xx + 885 , xx + 896 , xx + 899 ) ; xx [ 885 ] = xx
[ 808 ] ; xx [ 886 ] = xx [ 809 ] ; xx [ 887 ] = xx [ 811 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 885 , xx + 896 ) ;
pm_math_Vector3_cross_ra ( xx + 804 , xx + 896 , xx + 885 ) ; xx [ 804 ] =
1.392865120001009e-13 ; xx [ 805 ] = 0.05459122458051579 ; xx [ 806 ] =
4.374450014251545e-3 ; xx [ 902 ] = xx [ 804 ] ; xx [ 903 ] = - xx [ 805 ] ;
xx [ 904 ] = - xx [ 806 ] ; xx [ 905 ] = - 8.371860108687535e-13 ; xx [ 906 ]
= - 0.05202883057027102 ; xx [ 907 ] = - 5.800535526395379e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 905 , xx + 908 ) ; xx [ 911 ] =
xx [ 908 ] - xx [ 79 ] - xx [ 804 ] ; xx [ 79 ] = xx [ 909 ] + xx [ 121 ] +
xx [ 805 ] ; xx [ 121 ] = xx [ 910 ] + xx [ 118 ] + xx [ 806 ] ; xx [ 118 ] =
sqrt ( xx [ 911 ] * xx [ 911 ] + xx [ 79 ] * xx [ 79 ] + xx [ 121 ] * xx [
121 ] ) ; if ( xx [ 118 ] == 0.0 ) * derivErr = 1 ; xx [ 804 ] = input [ 176
] / xx [ 118 ] ; xx [ 805 ] = xx [ 804 ] * xx [ 911 ] ; xx [ 806 ] = xx [ 804
] * xx [ 79 ] ; xx [ 908 ] = xx [ 804 ] * xx [ 121 ] ; xx [ 912 ] = - xx [
805 ] ; xx [ 913 ] = - xx [ 806 ] ; xx [ 914 ] = - xx [ 908 ] ;
pm_math_Vector3_cross_ra ( xx + 902 , xx + 912 , xx + 915 ) ; xx [ 902 ] = xx
[ 711 ] ; xx [ 903 ] = xx [ 712 ] ; xx [ 904 ] = xx [ 824 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 902 , xx + 912 ) ;
pm_math_Vector3_cross_ra ( xx + 821 , xx + 912 , xx + 902 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 838 , xx + 821 ) ; xx [
909 ] = xx [ 206 ] * state [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
74 , xx + 339 , xx + 918 ) ; xx [ 74 ] = xx [ 918 ] * state [ 22 ] ; xx [ 75
] = xx [ 70 ] * state [ 23 ] ; xx [ 76 ] = xx [ 909 ] + xx [ 74 ] + xx [ 75 ]
; xx [ 77 ] = xx [ 821 ] + xx [ 76 ] ; xx [ 339 ] = xx [ 204 ] * state [ 21 ]
; xx [ 340 ] = xx [ 919 ] * state [ 22 ] ; xx [ 341 ] = xx [ 60 ] * state [
23 ] ; xx [ 910 ] = xx [ 339 ] + xx [ 340 ] + xx [ 341 ] ; xx [ 921 ] = xx [
822 ] + xx [ 910 ] ; xx [ 922 ] = xx [ 59 ] * state [ 21 ] ; xx [ 918 ] = xx
[ 920 ] * state [ 22 ] ; xx [ 919 ] = xx [ 58 ] * state [ 23 ] ; xx [ 920 ] =
xx [ 922 ] + xx [ 918 ] + xx [ 919 ] ; xx [ 923 ] = xx [ 823 ] + xx [ 920 ] ;
xx [ 924 ] = xx [ 77 ] ; xx [ 925 ] = xx [ 921 ] ; xx [ 926 ] = xx [ 923 ] ;
xx [ 927 ] = xx [ 77 ] * xx [ 136 ] ; xx [ 928 ] = xx [ 921 ] * xx [ 146 ] ;
xx [ 929 ] = xx [ 923 ] * xx [ 176 ] ; pm_math_Vector3_cross_ra ( xx + 924 ,
xx + 927 , xx + 930 ) ; xx [ 927 ] = 7.188464506654162e-13 ; xx [ 928 ] =
0.03225412823629766 ; xx [ 929 ] = - 3.133507134471407e-3 ; xx [ 136 ] =
0.7453544942628708 ; xx [ 146 ] = 4.148454829529507e-12 ; xx [ 176 ] = xx [
146 ] * input [ 147 ] ; xx [ 933 ] = 8.56489137069967e-12 ; xx [ 934 ] =
0.6666683417428341 ; xx [ 935 ] = xx [ 934 ] * input [ 147 ] ; xx [ 936 ] = (
xx [ 136 ] * xx [ 176 ] + xx [ 933 ] * xx [ 935 ] ) * xx [ 11 ] ; xx [ 937 ]
= xx [ 11 ] * ( xx [ 933 ] * xx [ 176 ] - xx [ 136 ] * xx [ 935 ] ) ; xx [
136 ] = input [ 147 ] - ( xx [ 934 ] * xx [ 935 ] + xx [ 146 ] * xx [ 176 ] )
* xx [ 11 ] ; xx [ 933 ] = - xx [ 936 ] ; xx [ 934 ] = xx [ 937 ] ; xx [ 935
] = xx [ 136 ] ; pm_math_Vector3_cross_ra ( xx + 927 , xx + 933 , xx + 938 )
; xx [ 146 ] = 5.287708455224579e-13 ; xx [ 176 ] = 0.03767096436270765 ; xx
[ 927 ] = 2.923671226993926e-3 ; xx [ 933 ] = - xx [ 146 ] ; xx [ 934 ] = -
xx [ 176 ] ; xx [ 935 ] = xx [ 927 ] ; xx [ 941 ] = - 6.605394032297572e-4 ;
xx [ 942 ] = - 0.08234236971698156 ; xx [ 943 ] = - 0.130840158189375 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 941 , xx + 944 ) ; xx [ 928 ] =
xx [ 944 ] + xx [ 81 ] + xx [ 146 ] ; xx [ 146 ] = xx [ 945 ] + xx [ 109 ] +
xx [ 176 ] ; xx [ 176 ] = xx [ 946 ] + xx [ 130 ] - xx [ 927 ] ; xx [ 927 ] =
sqrt ( xx [ 928 ] * xx [ 928 ] + xx [ 146 ] * xx [ 146 ] + xx [ 176 ] * xx [
176 ] ) ; if ( xx [ 927 ] == 0.0 ) * derivErr = 1 ; xx [ 929 ] = input [ 149
] / xx [ 927 ] ; xx [ 944 ] = xx [ 929 ] * xx [ 928 ] ; xx [ 945 ] = xx [ 929
] * xx [ 146 ] ; xx [ 946 ] = xx [ 929 ] * xx [ 176 ] ; xx [ 947 ] = - xx [
944 ] ; xx [ 948 ] = - xx [ 945 ] ; xx [ 949 ] = - xx [ 946 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 947 , xx + 950 ) ; xx [ 933 ] = xx
[ 858 ] ; xx [ 934 ] = xx [ 859 ] ; xx [ 935 ] = xx [ 861 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 933 , xx + 947 ) ;
pm_math_Vector3_cross_ra ( xx + 854 , xx + 947 , xx + 933 ) ; xx [ 854 ] =
0.03234149932875941 ; xx [ 855 ] = 0.02029712378537596 ; xx [ 856 ] =
0.01526834402904475 ; xx [ 953 ] = - xx [ 854 ] ; xx [ 954 ] = - xx [ 855 ] ;
xx [ 955 ] = xx [ 856 ] ; xx [ 956 ] = - 0.02855975561335375 ; xx [ 957 ] = -
0.06190209972411849 ; xx [ 958 ] = - 0.1103901590767691 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 956 , xx + 959 ) ; xx [ 962 ] =
xx [ 959 ] + xx [ 81 ] + xx [ 854 ] ; xx [ 854 ] = xx [ 960 ] + xx [ 109 ] +
xx [ 855 ] ; xx [ 855 ] = xx [ 961 ] + xx [ 130 ] - xx [ 856 ] ; xx [ 856 ] =
sqrt ( xx [ 962 ] * xx [ 962 ] + xx [ 854 ] * xx [ 854 ] + xx [ 855 ] * xx [
855 ] ) ; if ( xx [ 856 ] == 0.0 ) * derivErr = 1 ; xx [ 959 ] = input [ 154
] / xx [ 856 ] ; xx [ 960 ] = xx [ 959 ] * xx [ 962 ] ; xx [ 961 ] = xx [ 959
] * xx [ 854 ] ; xx [ 963 ] = xx [ 959 ] * xx [ 855 ] ; xx [ 964 ] = - xx [
960 ] ; xx [ 965 ] = - xx [ 961 ] ; xx [ 966 ] = - xx [ 963 ] ;
pm_math_Vector3_cross_ra ( xx + 953 , xx + 964 , xx + 967 ) ; xx [ 953 ] = xx
[ 875 ] ; xx [ 954 ] = xx [ 876 ] ; xx [ 955 ] = xx [ 878 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 953 , xx + 964 ) ;
pm_math_Vector3_cross_ra ( xx + 871 , xx + 964 , xx + 953 ) ; xx [ 871 ] =
0.03234149932846699 ; xx [ 872 ] = 0.02029712378655961 ; xx [ 873 ] =
0.01526834402870608 ; xx [ 970 ] = xx [ 871 ] ; xx [ 971 ] = - xx [ 872 ] ;
xx [ 972 ] = xx [ 873 ] ; xx [ 973 ] = 0.02720888144130509 ; xx [ 974 ] = -
0.06131317982669802 ; xx [ 975 ] = - 0.1109544366642564 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 973 , xx + 976 ) ; xx [ 979 ] =
xx [ 976 ] + xx [ 81 ] - xx [ 871 ] ; xx [ 871 ] = xx [ 977 ] + xx [ 109 ] +
xx [ 872 ] ; xx [ 872 ] = xx [ 978 ] + xx [ 130 ] - xx [ 873 ] ; xx [ 873 ] =
sqrt ( xx [ 979 ] * xx [ 979 ] + xx [ 871 ] * xx [ 871 ] + xx [ 872 ] * xx [
872 ] ) ; if ( xx [ 873 ] == 0.0 ) * derivErr = 1 ; xx [ 976 ] = input [ 159
] / xx [ 873 ] ; xx [ 977 ] = xx [ 976 ] * xx [ 979 ] ; xx [ 978 ] = xx [ 976
] * xx [ 871 ] ; xx [ 980 ] = xx [ 976 ] * xx [ 872 ] ; xx [ 981 ] = - xx [
977 ] ; xx [ 982 ] = - xx [ 978 ] ; xx [ 983 ] = - xx [ 980 ] ;
pm_math_Vector3_cross_ra ( xx + 970 , xx + 981 , xx + 984 ) ; xx [ 970 ] = xx
[ 892 ] ; xx [ 971 ] = xx [ 893 ] ; xx [ 972 ] = xx [ 895 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 970 , xx + 981 ) ;
pm_math_Vector3_cross_ra ( xx + 888 , xx + 981 , xx + 970 ) ; xx [ 888 ] =
7.867570466502235e-13 ; xx [ 889 ] = 0.05039051001790674 ; xx [ 890 ] =
1.894890190564144e-3 ; xx [ 987 ] = - xx [ 888 ] ; xx [ 988 ] = - xx [ 889 ]
; xx [ 989 ] = - xx [ 890 ] ; xx [ 990 ] = - 5.113793264997846e-4 ; xx [ 991
] = - 0.09338152545463696 ; xx [ 992 ] = - 0.1276196231940676 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 990 , xx + 993 ) ; xx [ 996 ] =
xx [ 993 ] + xx [ 81 ] + xx [ 888 ] ; xx [ 81 ] = xx [ 994 ] + xx [ 109 ] +
xx [ 889 ] ; xx [ 109 ] = xx [ 995 ] + xx [ 130 ] + xx [ 890 ] ; xx [ 130 ] =
sqrt ( xx [ 996 ] * xx [ 996 ] + xx [ 81 ] * xx [ 81 ] + xx [ 109 ] * xx [
109 ] ) ; if ( xx [ 130 ] == 0.0 ) * derivErr = 1 ; xx [ 888 ] = input [ 175
] / xx [ 130 ] ; xx [ 889 ] = xx [ 888 ] * xx [ 996 ] ; xx [ 890 ] = xx [ 888
] * xx [ 81 ] ; xx [ 993 ] = xx [ 888 ] * xx [ 109 ] ; xx [ 997 ] = - xx [
889 ] ; xx [ 998 ] = - xx [ 890 ] ; xx [ 999 ] = - xx [ 993 ] ;
pm_math_Vector3_cross_ra ( xx + 987 , xx + 997 , xx + 1000 ) ; xx [ 987 ] =
xx [ 805 ] ; xx [ 988 ] = xx [ 806 ] ; xx [ 989 ] = xx [ 908 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 987 , xx + 997 ) ;
pm_math_Vector3_cross_ra ( xx + 905 , xx + 997 , xx + 987 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 924 , xx + 905 ) ; xx [
994 ] = xx [ 200 ] * state [ 27 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
104 , xx + 244 , xx + 1003 ) ; xx [ 104 ] = xx [ 1003 ] * state [ 28 ] ; xx [
105 ] = xx [ 98 ] * state [ 29 ] ; xx [ 106 ] = xx [ 994 ] + xx [ 104 ] + xx
[ 105 ] ; xx [ 107 ] = xx [ 905 ] + xx [ 106 ] ; xx [ 244 ] = xx [ 179 ] *
state [ 27 ] ; xx [ 245 ] = xx [ 1004 ] * state [ 28 ] ; xx [ 246 ] = xx [
100 ] * state [ 29 ] ; xx [ 995 ] = xx [ 244 ] + xx [ 245 ] - xx [ 246 ] ; xx
[ 1006 ] = xx [ 906 ] + xx [ 995 ] ; xx [ 1007 ] = xx [ 80 ] * state [ 27 ] ;
xx [ 1003 ] = xx [ 1005 ] * state [ 28 ] ; xx [ 1004 ] = xx [ 102 ] * state [
29 ] ; xx [ 1005 ] = xx [ 1007 ] + xx [ 1003 ] + xx [ 1004 ] ; xx [ 1008 ] =
xx [ 907 ] + xx [ 1005 ] ; xx [ 1009 ] = xx [ 107 ] ; xx [ 1010 ] = xx [ 1006
] ; xx [ 1011 ] = xx [ 1008 ] ; xx [ 1012 ] = xx [ 107 ] * xx [ 129 ] ; xx [
1013 ] = xx [ 1006 ] * xx [ 138 ] ; xx [ 1014 ] = xx [ 1008 ] * xx [ 177 ] ;
pm_math_Vector3_cross_ra ( xx + 1009 , xx + 1012 , xx + 1015 ) ; xx [ 1012 ]
= 1.621693191737018e-3 ; xx [ 1013 ] = 0.01603935194780268 ; xx [ 1014 ] =
0.1973953748196041 ; xx [ 129 ] = 4.55902949587172e-3 ; xx [ 138 ] = xx [ 117
] * input [ 55 ] ; xx [ 177 ] = 5.716624978144062e-3 ; xx [ 1018 ] = xx [ 177
] * input [ 55 ] ; xx [ 1019 ] = xx [ 11 ] * ( xx [ 129 ] * xx [ 138 ] + xx [
111 ] * xx [ 1018 ] ) ; xx [ 1020 ] = input [ 55 ] - ( xx [ 177 ] * xx [ 1018
] + xx [ 117 ] * xx [ 138 ] ) * xx [ 11 ] ; xx [ 1021 ] = ( xx [ 129 ] * xx [
1018 ] - xx [ 111 ] * xx [ 138 ] ) * xx [ 11 ] ; xx [ 1022 ] = - xx [ 1019 ]
; xx [ 1023 ] = xx [ 1020 ] ; xx [ 1024 ] = xx [ 1021 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1022 , xx + 1025 ) ; xx [ 1012 ]
= - 0.018100209446297 ; xx [ 1013 ] = - 0.01269442968022964 ; xx [ 1014 ] = -
0.05133171280667402 ; xx [ 138 ] = 0.6266170963976704 ; xx [ 1018 ] =
0.2657482314476699 ; xx [ 1022 ] = xx [ 1018 ] * input [ 56 ] ; xx [ 1023 ] =
0.2923293170648436 ; xx [ 1024 ] = 0.6717681611754092 ; xx [ 1028 ] = xx [
1024 ] * input [ 56 ] ; xx [ 1029 ] = ( xx [ 138 ] * xx [ 1022 ] + xx [ 1023
] * xx [ 1028 ] ) * xx [ 11 ] ; xx [ 1030 ] = xx [ 11 ] * ( xx [ 138 ] * xx [
1028 ] - xx [ 1023 ] * xx [ 1022 ] ) ; xx [ 138 ] = input [ 56 ] - ( xx [
1024 ] * xx [ 1028 ] + xx [ 1018 ] * xx [ 1022 ] ) * xx [ 11 ] ; xx [ 1022 ]
= - xx [ 1029 ] ; xx [ 1023 ] = xx [ 1030 ] ; xx [ 1024 ] = xx [ 138 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1022 , xx + 1031 ) ; xx [ 1012 ]
= - 0.04099705783254853 ; xx [ 1013 ] = - 0.05961213993006317 ; xx [ 1014 ] =
- 0.05881187309141439 ; xx [ 1018 ] = 0.605680446748911 ; xx [ 1022 ] =
0.4004339489383053 ; xx [ 1023 ] = xx [ 1022 ] * input [ 57 ] ; xx [ 1024 ] =
0.3853263772121769 ; xx [ 1028 ] = 0.5694975258842251 ; xx [ 1034 ] = xx [
1028 ] * input [ 57 ] ; xx [ 1035 ] = ( xx [ 1018 ] * xx [ 1023 ] + xx [ 1024
] * xx [ 1034 ] ) * xx [ 11 ] ; xx [ 1036 ] = xx [ 11 ] * ( xx [ 1018 ] * xx
[ 1034 ] - xx [ 1024 ] * xx [ 1023 ] ) ; xx [ 1018 ] = input [ 57 ] - ( xx [
1028 ] * xx [ 1034 ] + xx [ 1022 ] * xx [ 1023 ] ) * xx [ 11 ] ; xx [ 1022 ]
= - xx [ 1035 ] ; xx [ 1023 ] = xx [ 1036 ] ; xx [ 1024 ] = xx [ 1018 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1022 , xx + 1037 ) ; xx [ 1012 ]
= - 0.01743287306265905 ; xx [ 1013 ] = 0.08947660920120139 ; xx [ 1014 ] = -
0.01663697113988645 ; xx [ 1022 ] = 0.3708578463113209 ; xx [ 1023 ] =
0.05876643406157585 ; xx [ 1024 ] = xx [ 1023 ] * input [ 58 ] ; xx [ 1028 ]
= 0.1257915591767713 ; xx [ 1034 ] = 0.9182523877980892 ; xx [ 1040 ] = xx [
1034 ] * input [ 58 ] ; xx [ 1041 ] = ( xx [ 1022 ] * xx [ 1024 ] + xx [ 1028
] * xx [ 1040 ] ) * xx [ 11 ] ; xx [ 1042 ] = xx [ 11 ] * ( xx [ 1028 ] * xx
[ 1024 ] - xx [ 1022 ] * xx [ 1040 ] ) ; xx [ 1022 ] = input [ 58 ] - ( xx [
1034 ] * xx [ 1040 ] + xx [ 1023 ] * xx [ 1024 ] ) * xx [ 11 ] ; xx [ 1043 ]
= xx [ 1041 ] ; xx [ 1044 ] = xx [ 1042 ] ; xx [ 1045 ] = xx [ 1022 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1043 , xx + 1046 ) ; xx [ 1012 ]
= - 0.07836549010517251 ; xx [ 1013 ] = - 0.07517998721125167 ; xx [ 1014 ] =
- 0.07998584424533033 ; xx [ 1023 ] = 0.6735319025732429 ; xx [ 1024 ] =
0.2035426274293738 ; xx [ 1028 ] = xx [ 1024 ] * input [ 59 ] ; xx [ 1034 ] =
0.1987359770566641 ; xx [ 1040 ] = 0.6822237070481707 ; xx [ 1043 ] = xx [
1040 ] * input [ 59 ] ; xx [ 1044 ] = ( xx [ 1023 ] * xx [ 1028 ] + xx [ 1034
] * xx [ 1043 ] ) * xx [ 11 ] ; xx [ 1045 ] = xx [ 11 ] * ( xx [ 1023 ] * xx
[ 1043 ] - xx [ 1034 ] * xx [ 1028 ] ) ; xx [ 1023 ] = input [ 59 ] - ( xx [
1040 ] * xx [ 1043 ] + xx [ 1024 ] * xx [ 1028 ] ) * xx [ 11 ] ; xx [ 1049 ]
= xx [ 1044 ] ; xx [ 1050 ] = xx [ 1045 ] ; xx [ 1051 ] = xx [ 1023 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1049 , xx + 1052 ) ; xx [ 1012 ]
= - 0.06532404920399051 ; xx [ 1013 ] = - 0.06376972582252889 ; xx [ 1014 ] =
- 0.03607869452634164 ; xx [ 1024 ] = 0.3977366413461614 ; xx [ 1028 ] =
0.06756736113505621 ; xx [ 1034 ] = xx [ 1028 ] * input [ 60 ] ; xx [ 1040 ]
= 0.1528209788093872 ; xx [ 1043 ] = 0.9021562859480953 ; xx [ 1049 ] = xx [
1043 ] * input [ 60 ] ; xx [ 1050 ] = ( xx [ 1024 ] * xx [ 1034 ] + xx [ 1040
] * xx [ 1049 ] ) * xx [ 11 ] ; xx [ 1051 ] = xx [ 11 ] * ( xx [ 1024 ] * xx
[ 1049 ] - xx [ 1040 ] * xx [ 1034 ] ) ; xx [ 1024 ] = input [ 60 ] - ( xx [
1043 ] * xx [ 1049 ] + xx [ 1028 ] * xx [ 1034 ] ) * xx [ 11 ] ; xx [ 1055 ]
= xx [ 1050 ] ; xx [ 1056 ] = xx [ 1051 ] ; xx [ 1057 ] = xx [ 1024 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1055 , xx + 1058 ) ; xx [ 1012 ]
= - 0.05345440800790809 ; xx [ 1013 ] = - 0.02948419519477849 ; xx [ 1014 ] =
- 0.01170478395315091 ; xx [ 1028 ] = 0.1836791436760975 ; xx [ 1034 ] =
0.01030834667839922 ; xx [ 1040 ] = xx [ 1034 ] * input [ 61 ] ; xx [ 1043 ]
= 0.03828129250334947 ; xx [ 1049 ] = 0.982186465398219 ; xx [ 1055 ] = xx [
1049 ] * input [ 61 ] ; xx [ 1056 ] = ( xx [ 1028 ] * xx [ 1040 ] + xx [ 1043
] * xx [ 1055 ] ) * xx [ 11 ] ; xx [ 1057 ] = xx [ 11 ] * ( xx [ 1028 ] * xx
[ 1055 ] - xx [ 1043 ] * xx [ 1040 ] ) ; xx [ 1028 ] = input [ 61 ] - ( xx [
1049 ] * xx [ 1055 ] + xx [ 1034 ] * xx [ 1040 ] ) * xx [ 11 ] ; xx [ 1061 ]
= - xx [ 1056 ] ; xx [ 1062 ] = xx [ 1057 ] ; xx [ 1063 ] = xx [ 1028 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1061 , xx + 1064 ) ; xx [ 1012 ]
= - 0.04199285130556987 ; xx [ 1013 ] = 2.315642183133806e-3 ; xx [ 1014 ] =
- 1.535421406011225e-3 ; xx [ 1034 ] = 5.7833158625729e-3 ; xx [ 1040 ] =
0.9927480738095794 ; xx [ 1043 ] = xx [ 1040 ] * input [ 62 ] ; xx [ 1049 ] =
0.1200301699424373 ; xx [ 1055 ] = 3.251693188713919e-3 ; xx [ 1061 ] = xx [
1055 ] * input [ 62 ] ; xx [ 1062 ] = ( xx [ 1034 ] * xx [ 1043 ] - xx [ 1049
] * xx [ 1061 ] ) * xx [ 11 ] ; xx [ 1063 ] = xx [ 11 ] * ( xx [ 1034 ] * xx
[ 1061 ] + xx [ 1049 ] * xx [ 1043 ] ) ; xx [ 1034 ] = input [ 62 ] - ( xx [
1040 ] * xx [ 1043 ] + xx [ 1055 ] * xx [ 1061 ] ) * xx [ 11 ] ; xx [ 1067 ]
= xx [ 1062 ] ; xx [ 1068 ] = xx [ 1063 ] ; xx [ 1069 ] = xx [ 1034 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1067 , xx + 1070 ) ; xx [ 1012 ]
= - 0.03043206748930935 ; xx [ 1013 ] = 0.03373335873633954 ; xx [ 1014 ] =
3.745598028823231e-4 ; xx [ 1040 ] = 0.05258429504046449 ; xx [ 1043 ] =
0.01039385327931081 ; xx [ 1049 ] = xx [ 1043 ] * input [ 63 ] ; xx [ 1055 ]
= 0.08656117151675111 ; xx [ 1061 ] = 0.994803509902711 ; xx [ 1067 ] = xx [
1061 ] * input [ 63 ] ; xx [ 1068 ] = ( xx [ 1040 ] * xx [ 1049 ] + xx [ 1055
] * xx [ 1067 ] ) * xx [ 11 ] ; xx [ 1069 ] = xx [ 11 ] * ( xx [ 1055 ] * xx
[ 1049 ] - xx [ 1040 ] * xx [ 1067 ] ) ; xx [ 1040 ] = input [ 63 ] - ( xx [
1061 ] * xx [ 1067 ] + xx [ 1043 ] * xx [ 1049 ] ) * xx [ 11 ] ; xx [ 1073 ]
= xx [ 1068 ] ; xx [ 1074 ] = xx [ 1069 ] ; xx [ 1075 ] = xx [ 1040 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1073 , xx + 1076 ) ; xx [ 1012 ]
= - 0.03085448323118554 ; xx [ 1013 ] = 0.0757435853054349 ; xx [ 1014 ] = -
9.984752429257794e-3 ; xx [ 1043 ] = 0.2319036612108555 ; xx [ 1049 ] =
0.03039616387005119 ; xx [ 1055 ] = xx [ 1049 ] * input [ 64 ] ; xx [ 1061 ]
= 0.09661200488939115 ; xx [ 1067 ] = 0.967451748486837 ; xx [ 1073 ] = xx [
1067 ] * input [ 64 ] ; xx [ 1074 ] = ( xx [ 1043 ] * xx [ 1055 ] + xx [ 1061
] * xx [ 1073 ] ) * xx [ 11 ] ; xx [ 1075 ] = xx [ 11 ] * ( xx [ 1061 ] * xx
[ 1055 ] - xx [ 1043 ] * xx [ 1073 ] ) ; xx [ 1043 ] = input [ 64 ] - ( xx [
1067 ] * xx [ 1073 ] + xx [ 1049 ] * xx [ 1055 ] ) * xx [ 11 ] ; xx [ 1079 ]
= xx [ 1074 ] ; xx [ 1080 ] = xx [ 1075 ] ; xx [ 1081 ] = xx [ 1043 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1079 , xx + 1082 ) ; xx [ 1012 ]
= - 0.09031673281473247 ; xx [ 1013 ] = - 0.06318390459877354 ; xx [ 1014 ] =
- 0.1149965835010578 ; xx [ 1049 ] = 0.7051604877432256 ; xx [ 1055 ] =
0.2882213429642925 ; xx [ 1061 ] = xx [ 1055 ] * input [ 65 ] ; xx [ 1067 ] =
0.2379882103024527 ; xx [ 1073 ] = 0.6025269751161617 ; xx [ 1079 ] = xx [
1073 ] * input [ 65 ] ; xx [ 1080 ] = ( xx [ 1049 ] * xx [ 1061 ] + xx [ 1067
] * xx [ 1079 ] ) * xx [ 11 ] ; xx [ 1081 ] = xx [ 11 ] * ( xx [ 1049 ] * xx
[ 1079 ] - xx [ 1067 ] * xx [ 1061 ] ) ; xx [ 1049 ] = input [ 65 ] - ( xx [
1073 ] * xx [ 1079 ] + xx [ 1055 ] * xx [ 1061 ] ) * xx [ 11 ] ; xx [ 1085 ]
= xx [ 1080 ] ; xx [ 1086 ] = xx [ 1081 ] ; xx [ 1087 ] = xx [ 1049 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1085 , xx + 1088 ) ; xx [ 1012 ]
= - 0.08905003310803741 ; xx [ 1013 ] = - 0.06352724945861782 ; xx [ 1014 ] =
- 0.05308632888278775 ; xx [ 1055 ] = 0.562721235256249 ; xx [ 1061 ] =
0.2322640742938012 ; xx [ 1067 ] = xx [ 1061 ] * input [ 66 ] ; xx [ 1073 ] =
0.2973320519379396 ; xx [ 1079 ] = 0.7355214898794594 ; xx [ 1085 ] = xx [
1079 ] * input [ 66 ] ; xx [ 1086 ] = ( xx [ 1055 ] * xx [ 1067 ] + xx [ 1073
] * xx [ 1085 ] ) * xx [ 11 ] ; xx [ 1087 ] = xx [ 11 ] * ( xx [ 1055 ] * xx
[ 1085 ] - xx [ 1073 ] * xx [ 1067 ] ) ; xx [ 1055 ] = input [ 66 ] - ( xx [
1079 ] * xx [ 1085 ] + xx [ 1061 ] * xx [ 1067 ] ) * xx [ 11 ] ; xx [ 1091 ]
= xx [ 1086 ] ; xx [ 1092 ] = xx [ 1087 ] ; xx [ 1093 ] = xx [ 1055 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1091 , xx + 1094 ) ; xx [ 1012 ]
= - 0.07771895238882454 ; xx [ 1013 ] = - 0.04411342736155736 ; xx [ 1014 ] =
- 0.02357135213144143 ; xx [ 1061 ] = 0.2775968795533705 ; xx [ 1067 ] =
0.03501379881749344 ; xx [ 1073 ] = xx [ 1067 ] * input [ 67 ] ; xx [ 1079 ]
= 0.1262932992895385 ; xx [ 1085 ] = 0.9517163489765023 ; xx [ 1091 ] = xx [
1085 ] * input [ 67 ] ; xx [ 1092 ] = ( xx [ 1061 ] * xx [ 1073 ] + xx [ 1079
] * xx [ 1091 ] ) * xx [ 11 ] ; xx [ 1093 ] = xx [ 11 ] * ( xx [ 1061 ] * xx
[ 1091 ] - xx [ 1079 ] * xx [ 1073 ] ) ; xx [ 1061 ] = input [ 67 ] - ( xx [
1085 ] * xx [ 1091 ] + xx [ 1067 ] * xx [ 1073 ] ) * xx [ 11 ] ; xx [ 1097 ]
= xx [ 1092 ] ; xx [ 1098 ] = xx [ 1093 ] ; xx [ 1099 ] = xx [ 1061 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1097 , xx + 1100 ) ; xx [ 1012 ]
= - 0.03058273761503733 ; xx [ 1013 ] = - 0.03212652624056211 ; xx [ 1014 ] =
- 0.03502163932209757 ; xx [ 1067 ] = 0.4899239161389347 ; xx [ 1073 ] =
0.3424918976734947 ; xx [ 1079 ] = xx [ 1073 ] * input [ 68 ] ; xx [ 1085 ] =
0.4638887284690384 ; xx [ 1091 ] = 0.6538203912562512 ; xx [ 1097 ] = xx [
1091 ] * input [ 68 ] ; xx [ 1098 ] = ( xx [ 1067 ] * xx [ 1079 ] + xx [ 1085
] * xx [ 1097 ] ) * xx [ 11 ] ; xx [ 1099 ] = xx [ 11 ] * ( xx [ 1067 ] * xx
[ 1097 ] - xx [ 1085 ] * xx [ 1079 ] ) ; xx [ 1067 ] = input [ 68 ] - ( xx [
1091 ] * xx [ 1097 ] + xx [ 1073 ] * xx [ 1079 ] ) * xx [ 11 ] ; xx [ 1103 ]
= - xx [ 1098 ] ; xx [ 1104 ] = xx [ 1099 ] ; xx [ 1105 ] = xx [ 1067 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1103 , xx + 1106 ) ; xx [ 1012 ]
= - 0.06569296216337495 ; xx [ 1013 ] = - 5.789251234493722e-3 ; xx [ 1014 ]
= - 6.04185571885384e-3 ; xx [ 1073 ] = 0.08624836612663388 ; xx [ 1079 ] =
8.910936692993903e-3 ; xx [ 1085 ] = xx [ 1079 ] * input [ 69 ] ; xx [ 1091 ]
= 0.1519018818697432 ; xx [ 1097 ] = 0.98458500538662 ; xx [ 1103 ] = xx [
1097 ] * input [ 69 ] ; xx [ 1104 ] = ( xx [ 1073 ] * xx [ 1085 ] + xx [ 1091
] * xx [ 1103 ] ) * xx [ 11 ] ; xx [ 1105 ] = xx [ 11 ] * ( xx [ 1073 ] * xx
[ 1103 ] - xx [ 1091 ] * xx [ 1085 ] ) ; xx [ 1073 ] = input [ 69 ] - ( xx [
1097 ] * xx [ 1103 ] + xx [ 1079 ] * xx [ 1085 ] ) * xx [ 11 ] ; xx [ 1109 ]
= xx [ 1104 ] ; xx [ 1110 ] = xx [ 1105 ] ; xx [ 1111 ] = xx [ 1073 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1109 , xx + 1112 ) ; xx [ 1012 ]
= - 0.05394756191514125 ; xx [ 1013 ] = 0.02771789746310824 ; xx [ 1014 ] = -
2.47730874572253e-3 ; xx [ 1079 ] = 0.0566209977693985 ; xx [ 1085 ] =
9.460058942232674e-3 ; xx [ 1091 ] = xx [ 1085 ] * input [ 70 ] ; xx [ 1097 ]
= 0.06363610745357245 ; xx [ 1103 ] = 0.9963207393829382 ; xx [ 1109 ] = xx [
1103 ] * input [ 70 ] ; xx [ 1110 ] = ( xx [ 1079 ] * xx [ 1091 ] + xx [ 1097
] * xx [ 1109 ] ) * xx [ 11 ] ; xx [ 1111 ] = xx [ 11 ] * ( xx [ 1097 ] * xx
[ 1091 ] - xx [ 1079 ] * xx [ 1109 ] ) ; xx [ 1079 ] = input [ 70 ] - ( xx [
1103 ] * xx [ 1109 ] + xx [ 1085 ] * xx [ 1091 ] ) * xx [ 11 ] ; xx [ 1115 ]
= xx [ 1110 ] ; xx [ 1116 ] = xx [ 1111 ] ; xx [ 1117 ] = xx [ 1079 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1115 , xx + 1118 ) ; xx [ 1012 ]
= - 0.04249591255465229 ; xx [ 1013 ] = 0.05268462409333922 ; xx [ 1014 ] = -
4.606763623076205e-3 ; xx [ 1085 ] = 0.09354188588086317 ; xx [ 1091 ] =
0.01447175992546536 ; xx [ 1097 ] = xx [ 1091 ] * input [ 71 ] ; xx [ 1103 ]
= 0.0878088631658558 ; xx [ 1109 ] = 0.9916300153283136 ; xx [ 1115 ] = xx [
1109 ] * input [ 71 ] ; xx [ 1116 ] = ( xx [ 1085 ] * xx [ 1097 ] + xx [ 1103
] * xx [ 1115 ] ) * xx [ 11 ] ; xx [ 1117 ] = xx [ 11 ] * ( xx [ 1103 ] * xx
[ 1097 ] - xx [ 1085 ] * xx [ 1115 ] ) ; xx [ 1085 ] = input [ 71 ] - ( xx [
1109 ] * xx [ 1115 ] + xx [ 1091 ] * xx [ 1097 ] ) * xx [ 11 ] ; xx [ 1121 ]
= xx [ 1116 ] ; xx [ 1122 ] = xx [ 1117 ] ; xx [ 1123 ] = xx [ 1085 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1121 , xx + 1124 ) ; xx [ 1012 ]
= - 0.1013294628621652 ; xx [ 1013 ] = - 0.05440669426042376 ; xx [ 1014 ] =
- 0.08521685899457788 ; xx [ 1091 ] = 0.6624965949287286 ; xx [ 1097 ] =
0.3067121827978402 ; xx [ 1103 ] = xx [ 1097 ] * input [ 72 ] ; xx [ 1109 ] =
0.2803859780123734 ; xx [ 1115 ] = 0.6232251615309427 ; xx [ 1121 ] = xx [
1115 ] * input [ 72 ] ; xx [ 1122 ] = ( xx [ 1091 ] * xx [ 1103 ] + xx [ 1109
] * xx [ 1121 ] ) * xx [ 11 ] ; xx [ 1123 ] = xx [ 11 ] * ( xx [ 1091 ] * xx
[ 1121 ] - xx [ 1109 ] * xx [ 1103 ] ) ; xx [ 1091 ] = input [ 72 ] - ( xx [
1115 ] * xx [ 1121 ] + xx [ 1097 ] * xx [ 1103 ] ) * xx [ 11 ] ; xx [ 1127 ]
= xx [ 1122 ] ; xx [ 1128 ] = xx [ 1123 ] ; xx [ 1129 ] = xx [ 1091 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1127 , xx + 1130 ) ; xx [ 1012 ]
= - 0.1006488674172343 ; xx [ 1013 ] = - 0.03655403301522824 ; xx [ 1014 ] =
- 0.03482102239186442 ; xx [ 1097 ] = 0.2665968614874874 ; xx [ 1103 ] =
0.1292083701120501 ; xx [ 1109 ] = xx [ 1103 ] * input [ 73 ] ; xx [ 1115 ] =
0.4210766355824749 ; xx [ 1121 ] = 0.8572781214428331 ; xx [ 1127 ] = xx [
1121 ] * input [ 73 ] ; xx [ 1128 ] = ( xx [ 1097 ] * xx [ 1109 ] + xx [ 1115
] * xx [ 1127 ] ) * xx [ 11 ] ; xx [ 1129 ] = xx [ 11 ] * ( xx [ 1097 ] * xx
[ 1127 ] - xx [ 1115 ] * xx [ 1109 ] ) ; xx [ 1097 ] = input [ 73 ] - ( xx [
1121 ] * xx [ 1127 ] + xx [ 1103 ] * xx [ 1109 ] ) * xx [ 11 ] ; xx [ 1133 ]
= xx [ 1128 ] ; xx [ 1134 ] = xx [ 1129 ] ; xx [ 1135 ] = xx [ 1097 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1133 , xx + 1136 ) ; xx [ 1012 ]
= - 0.08940329708669266 ; xx [ 1013 ] = - 0.0107182514182957 ; xx [ 1014 ] =
- 0.01663531123898001 ; xx [ 1103 ] = 0.06643271209133222 ; xx [ 1109 ] =
0.01652383313092456 ; xx [ 1115 ] = xx [ 1109 ] * input [ 74 ] ; xx [ 1121 ]
= 0.3046495507201246 ; xx [ 1127 ] = 0.9500012152354745 ; xx [ 1133 ] = xx [
1127 ] * input [ 74 ] ; xx [ 1134 ] = ( xx [ 1103 ] * xx [ 1115 ] + xx [ 1121
] * xx [ 1133 ] ) * xx [ 11 ] ; xx [ 1135 ] = xx [ 11 ] * ( xx [ 1103 ] * xx
[ 1133 ] - xx [ 1121 ] * xx [ 1115 ] ) ; xx [ 1103 ] = input [ 74 ] - ( xx [
1127 ] * xx [ 1133 ] + xx [ 1109 ] * xx [ 1115 ] ) * xx [ 11 ] ; xx [ 1139 ]
= xx [ 1134 ] ; xx [ 1140 ] = xx [ 1135 ] ; xx [ 1141 ] = xx [ 1103 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1139 , xx + 1142 ) ; xx [ 1012 ]
= - 0.07827353512039555 ; xx [ 1013 ] = 0.0286709022067658 ; xx [ 1014 ] = -
0.01159036647949716 ; xx [ 1109 ] = 0.1089834380549926 ; xx [ 1115 ] =
0.03500768667018416 ; xx [ 1121 ] = xx [ 1115 ] * input [ 75 ] ; xx [ 1127 ]
= 0.2510328511948578 ; xx [ 1133 ] = 0.9611865478275778 ; xx [ 1139 ] = xx [
1133 ] * input [ 75 ] ; xx [ 1140 ] = ( xx [ 1109 ] * xx [ 1121 ] + xx [ 1127
] * xx [ 1139 ] ) * xx [ 11 ] ; xx [ 1141 ] = xx [ 11 ] * ( xx [ 1127 ] * xx
[ 1121 ] - xx [ 1109 ] * xx [ 1139 ] ) ; xx [ 1109 ] = input [ 75 ] - ( xx [
1133 ] * xx [ 1139 ] + xx [ 1115 ] * xx [ 1121 ] ) * xx [ 11 ] ; xx [ 1145 ]
= xx [ 1140 ] ; xx [ 1146 ] = xx [ 1141 ] ; xx [ 1147 ] = xx [ 1109 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1145 , xx + 1148 ) ; xx [ 1012 ]
= - 0.0660648177255008 ; xx [ 1013 ] = 0.05628905449019814 ; xx [ 1014 ] = -
0.01644484058504699 ; xx [ 1115 ] = 0.2585782393790033 ; xx [ 1121 ] =
0.0810078467025219 ; xx [ 1127 ] = xx [ 1121 ] * input [ 76 ] ; xx [ 1133 ] =
0.2625074170017326 ; xx [ 1139 ] = 0.9261019808376152 ; xx [ 1145 ] = xx [
1139 ] * input [ 76 ] ; xx [ 1146 ] = ( xx [ 1115 ] * xx [ 1127 ] + xx [ 1133
] * xx [ 1145 ] ) * xx [ 11 ] ; xx [ 1147 ] = xx [ 11 ] * ( xx [ 1133 ] * xx
[ 1127 ] - xx [ 1115 ] * xx [ 1145 ] ) ; xx [ 1115 ] = input [ 76 ] - ( xx [
1139 ] * xx [ 1145 ] + xx [ 1121 ] * xx [ 1127 ] ) * xx [ 11 ] ; xx [ 1151 ]
= xx [ 1146 ] ; xx [ 1152 ] = xx [ 1147 ] ; xx [ 1153 ] = xx [ 1115 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1151 , xx + 1154 ) ; xx [ 1012 ]
= - 0.05402727094602115 ; xx [ 1013 ] = 0.07479484954550918 ; xx [ 1014 ] = -
0.0245122227950146 ; xx [ 1121 ] = 0.4178606219087699 ; xx [ 1127 ] =
0.1414118805700174 ; xx [ 1133 ] = xx [ 1127 ] * input [ 77 ] ; xx [ 1139 ] =
0.2721100286937727 ; xx [ 1145 ] = 0.8551908050113386 ; xx [ 1151 ] = xx [
1145 ] * input [ 77 ] ; xx [ 1152 ] = ( xx [ 1121 ] * xx [ 1133 ] + xx [ 1139
] * xx [ 1151 ] ) * xx [ 11 ] ; xx [ 1153 ] = xx [ 11 ] * ( xx [ 1139 ] * xx
[ 1133 ] - xx [ 1121 ] * xx [ 1151 ] ) ; xx [ 1121 ] = input [ 77 ] - ( xx [
1145 ] * xx [ 1151 ] + xx [ 1127 ] * xx [ 1133 ] ) * xx [ 11 ] ; xx [ 1157 ]
= xx [ 1152 ] ; xx [ 1158 ] = xx [ 1153 ] ; xx [ 1159 ] = xx [ 1121 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1157 , xx + 1160 ) ; xx [ 1012 ]
= - 0.04293946919453471 ; xx [ 1013 ] = 0.08811005315728188 ; xx [ 1014 ] = -
0.03293948695364328 ; xx [ 1127 ] = 0.5381403936204883 ; xx [ 1133 ] =
0.172882008059172 ; xx [ 1139 ] = xx [ 1133 ] * input [ 78 ] ; xx [ 1145 ] =
0.2411337866914131 ; xx [ 1151 ] = 0.788905079815864 ; xx [ 1157 ] = xx [
1151 ] * input [ 78 ] ; xx [ 1158 ] = ( xx [ 1127 ] * xx [ 1139 ] + xx [ 1145
] * xx [ 1157 ] ) * xx [ 11 ] ; xx [ 1159 ] = xx [ 11 ] * ( xx [ 1145 ] * xx
[ 1139 ] - xx [ 1127 ] * xx [ 1157 ] ) ; xx [ 1127 ] = input [ 78 ] - ( xx [
1151 ] * xx [ 1157 ] + xx [ 1133 ] * xx [ 1139 ] ) * xx [ 11 ] ; xx [ 1163 ]
= xx [ 1158 ] ; xx [ 1164 ] = xx [ 1159 ] ; xx [ 1165 ] = xx [ 1127 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1163 , xx + 1166 ) ; xx [ 1012 ]
= - 0.01753054762004361 ; xx [ 1013 ] = - 7.241709836714854e-3 ; xx [ 1014 ]
= - 0.01455634065671041 ; xx [ 1133 ] = 0.6646547705646365 ; xx [ 1139 ] =
0.1739273614473019 ; xx [ 1145 ] = xx [ 1139 ] * input [ 79 ] ; xx [ 1151 ] =
0.1906376598594076 ; xx [ 1157 ] = 0.7011708718629001 ; xx [ 1163 ] = xx [
1157 ] * input [ 79 ] ; xx [ 1164 ] = ( xx [ 1133 ] * xx [ 1145 ] + xx [ 1151
] * xx [ 1163 ] ) * xx [ 11 ] ; xx [ 1165 ] = xx [ 11 ] * ( xx [ 1133 ] * xx
[ 1163 ] - xx [ 1151 ] * xx [ 1145 ] ) ; xx [ 1133 ] = input [ 79 ] - ( xx [
1157 ] * xx [ 1163 ] + xx [ 1139 ] * xx [ 1145 ] ) * xx [ 11 ] ; xx [ 1169 ]
= - xx [ 1164 ] ; xx [ 1170 ] = xx [ 1165 ] ; xx [ 1171 ] = xx [ 1133 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1169 , xx + 1172 ) ; xx [ 1012 ]
= - 0.1098093924233946 ; xx [ 1013 ] = - 0.03718968283129956 ; xx [ 1014 ] =
- 0.1153002663316233 ; xx [ 1139 ] = 0.6782479603435443 ; xx [ 1145 ] =
0.4285522328871861 ; xx [ 1151 ] = xx [ 1145 ] * input [ 80 ] ; xx [ 1157 ] =
0.3121212591158557 ; xx [ 1163 ] = 0.5088251247581651 ; xx [ 1169 ] = xx [
1163 ] * input [ 80 ] ; xx [ 1170 ] = ( xx [ 1139 ] * xx [ 1151 ] + xx [ 1157
] * xx [ 1169 ] ) * xx [ 11 ] ; xx [ 1171 ] = xx [ 11 ] * ( xx [ 1139 ] * xx
[ 1169 ] - xx [ 1157 ] * xx [ 1151 ] ) ; xx [ 1139 ] = input [ 80 ] - ( xx [
1163 ] * xx [ 1169 ] + xx [ 1145 ] * xx [ 1151 ] ) * xx [ 11 ] ; xx [ 1175 ]
= xx [ 1170 ] ; xx [ 1176 ] = xx [ 1171 ] ; xx [ 1177 ] = xx [ 1139 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1175 , xx + 1178 ) ; xx [ 1012 ]
= - 0.1094970351153031 ; xx [ 1013 ] = - 0.04003782354650123 ; xx [ 1014 ] =
- 0.06694069005340339 ; xx [ 1145 ] = 0.5215775193693708 ; xx [ 1151 ] =
0.3656035624705763 ; xx [ 1157 ] = xx [ 1151 ] * input [ 81 ] ; xx [ 1163 ] =
0.4373677010243754 ; xx [ 1169 ] = 0.6348231411172484 ; xx [ 1175 ] = xx [
1169 ] * input [ 81 ] ; xx [ 1176 ] = ( xx [ 1145 ] * xx [ 1157 ] + xx [ 1163
] * xx [ 1175 ] ) * xx [ 11 ] ; xx [ 1177 ] = xx [ 11 ] * ( xx [ 1145 ] * xx
[ 1175 ] - xx [ 1163 ] * xx [ 1157 ] ) ; xx [ 1145 ] = input [ 81 ] - ( xx [
1169 ] * xx [ 1175 ] + xx [ 1151 ] * xx [ 1157 ] ) * xx [ 11 ] ; xx [ 1181 ]
= xx [ 1176 ] ; xx [ 1182 ] = xx [ 1177 ] ; xx [ 1183 ] = xx [ 1145 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1181 , xx + 1184 ) ; xx [ 1012 ]
= - 0.1090634608935626 ; xx [ 1013 ] = - 9.049355481174783e-3 ; xx [ 1014 ] =
- 0.03708031420471432 ; xx [ 1151 ] = 0.03036498074447355 ; xx [ 1157 ] =
0.01445744959734118 ; xx [ 1163 ] = xx [ 1157 ] * input [ 82 ] ; xx [ 1169 ]
= 0.5573897988713492 ; xx [ 1175 ] = 0.8295695041463889 ; xx [ 1181 ] = xx [
1175 ] * input [ 82 ] ; xx [ 1182 ] = ( xx [ 1151 ] * xx [ 1163 ] + xx [ 1169
] * xx [ 1181 ] ) * xx [ 11 ] ; xx [ 1183 ] = xx [ 11 ] * ( xx [ 1151 ] * xx
[ 1181 ] - xx [ 1169 ] * xx [ 1163 ] ) ; xx [ 1151 ] = input [ 82 ] - ( xx [
1175 ] * xx [ 1181 ] + xx [ 1157 ] * xx [ 1163 ] ) * xx [ 11 ] ; xx [ 1187 ]
= xx [ 1182 ] ; xx [ 1188 ] = xx [ 1183 ] ; xx [ 1189 ] = xx [ 1151 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1187 , xx + 1190 ) ; xx [ 1012 ]
= - 0.1010291140985155 ; xx [ 1013 ] = 0.02076290141192311 ; xx [ 1014 ] = -
0.03004226911671877 ; xx [ 1157 ] = 0.1888417575813727 ; xx [ 1163 ] =
0.1104877504971639 ; xx [ 1169 ] = xx [ 1163 ] * input [ 83 ] ; xx [ 1175 ] =
0.4651486145686861 ; xx [ 1181 ] = 0.8577692078575021 ; xx [ 1187 ] = xx [
1181 ] * input [ 83 ] ; xx [ 1188 ] = ( xx [ 1157 ] * xx [ 1169 ] + xx [ 1175
] * xx [ 1187 ] ) * xx [ 11 ] ; xx [ 1189 ] = xx [ 11 ] * ( xx [ 1175 ] * xx
[ 1169 ] - xx [ 1157 ] * xx [ 1187 ] ) ; xx [ 1157 ] = input [ 83 ] - ( xx [
1181 ] * xx [ 1187 ] + xx [ 1163 ] * xx [ 1169 ] ) * xx [ 11 ] ; xx [ 1193 ]
= xx [ 1188 ] ; xx [ 1194 ] = xx [ 1189 ] ; xx [ 1195 ] = xx [ 1157 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1193 , xx + 1196 ) ; xx [ 1012 ]
= - 0.08939423168309392 ; xx [ 1013 ] = 0.05026664692245522 ; xx [ 1014 ] = -
0.03891143517008596 ; xx [ 1163 ] = 0.4278049820722936 ; xx [ 1169 ] =
0.2441495186273143 ; xx [ 1175 ] = xx [ 1169 ] * input [ 84 ] ; xx [ 1181 ] =
0.4188650043300141 ; xx [ 1187 ] = 0.7628407553453034 ; xx [ 1193 ] = xx [
1187 ] * input [ 84 ] ; xx [ 1194 ] = ( xx [ 1163 ] * xx [ 1175 ] + xx [ 1181
] * xx [ 1193 ] ) * xx [ 11 ] ; xx [ 1195 ] = xx [ 11 ] * ( xx [ 1181 ] * xx
[ 1175 ] - xx [ 1163 ] * xx [ 1193 ] ) ; xx [ 1163 ] = input [ 84 ] - ( xx [
1187 ] * xx [ 1193 ] + xx [ 1169 ] * xx [ 1175 ] ) * xx [ 11 ] ; xx [ 1199 ]
= xx [ 1194 ] ; xx [ 1200 ] = xx [ 1195 ] ; xx [ 1201 ] = xx [ 1163 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1199 , xx + 1202 ) ; xx [ 1012 ]
= - 0.07930235604146559 ; xx [ 1013 ] = 0.06880633825740713 ; xx [ 1014 ] = -
0.05707472804904289 ; xx [ 1169 ] = 0.6353262039713063 ; xx [ 1175 ] =
0.2580041401126371 ; xx [ 1181 ] = xx [ 1175 ] * input [ 85 ] ; xx [ 1187 ] =
0.2666009172613014 ; xx [ 1193 ] = 0.6772875527776824 ; xx [ 1199 ] = xx [
1193 ] * input [ 85 ] ; xx [ 1200 ] = ( xx [ 1169 ] * xx [ 1181 ] + xx [ 1187
] * xx [ 1199 ] ) * xx [ 11 ] ; xx [ 1201 ] = xx [ 11 ] * ( xx [ 1187 ] * xx
[ 1181 ] - xx [ 1169 ] * xx [ 1199 ] ) ; xx [ 1169 ] = input [ 85 ] - ( xx [
1193 ] * xx [ 1199 ] + xx [ 1175 ] * xx [ 1181 ] ) * xx [ 11 ] ; xx [ 1205 ]
= xx [ 1200 ] ; xx [ 1206 ] = xx [ 1201 ] ; xx [ 1207 ] = xx [ 1169 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1205 , xx + 1208 ) ; xx [ 1012 ]
= - 0.06202638499895177 ; xx [ 1013 ] = 0.08188678856755247 ; xx [ 1014 ] = -
0.07370522850419119 ; xx [ 1175 ] = 0.6905341524779978 ; xx [ 1181 ] =
0.2119602768658031 ; xx [ 1187 ] = xx [ 1181 ] * input [ 86 ] ; xx [ 1193 ] =
0.1965320352559405 ; xx [ 1199 ] = 0.6630313600506564 ; xx [ 1205 ] = xx [
1199 ] * input [ 86 ] ; xx [ 1206 ] = ( xx [ 1175 ] * xx [ 1187 ] + xx [ 1193
] * xx [ 1205 ] ) * xx [ 11 ] ; xx [ 1207 ] = xx [ 11 ] * ( xx [ 1193 ] * xx
[ 1187 ] - xx [ 1175 ] * xx [ 1205 ] ) ; xx [ 1175 ] = input [ 86 ] - ( xx [
1199 ] * xx [ 1205 ] + xx [ 1181 ] * xx [ 1187 ] ) * xx [ 11 ] ; xx [ 1211 ]
= xx [ 1206 ] ; xx [ 1212 ] = xx [ 1207 ] ; xx [ 1213 ] = xx [ 1175 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1211 , xx + 1214 ) ; xx [ 1012 ]
= - 0.1157391105586126 ; xx [ 1013 ] = - 0.01123924367117589 ; xx [ 1014 ] =
- 0.1226951432359581 ; xx [ 1181 ] = 0.6368743135753699 ; xx [ 1187 ] =
0.6329088978278039 ; xx [ 1193 ] = xx [ 1187 ] * input [ 87 ] ; xx [ 1199 ] =
0.3136082738905876 ; xx [ 1205 ] = 0.3089778087592412 ; xx [ 1211 ] = xx [
1205 ] * input [ 87 ] ; xx [ 1212 ] = ( xx [ 1181 ] * xx [ 1193 ] + xx [ 1199
] * xx [ 1211 ] ) * xx [ 11 ] ; xx [ 1213 ] = xx [ 11 ] * ( xx [ 1181 ] * xx
[ 1211 ] - xx [ 1199 ] * xx [ 1193 ] ) ; xx [ 1181 ] = input [ 87 ] - ( xx [
1205 ] * xx [ 1211 ] + xx [ 1187 ] * xx [ 1193 ] ) * xx [ 11 ] ; xx [ 1217 ]
= xx [ 1212 ] ; xx [ 1218 ] = xx [ 1213 ] ; xx [ 1219 ] = xx [ 1181 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1217 , xx + 1220 ) ; xx [ 1012 ]
= - 0.1160516677561728 ; xx [ 1013 ] = - 0.01143333175071017 ; xx [ 1014 ] =
- 0.08330636306873912 ; xx [ 1187 ] = 0.4679958309924982 ; xx [ 1193 ] =
0.4909291307552261 ; xx [ 1199 ] = xx [ 1193 ] * input [ 88 ] ; xx [ 1205 ] =
0.5033127474527106 ; xx [ 1211 ] = 0.535392163746504 ; xx [ 1217 ] = xx [
1211 ] * input [ 88 ] ; xx [ 1218 ] = ( xx [ 1187 ] * xx [ 1199 ] + xx [ 1205
] * xx [ 1217 ] ) * xx [ 11 ] ; xx [ 1219 ] = xx [ 11 ] * ( xx [ 1187 ] * xx
[ 1217 ] - xx [ 1205 ] * xx [ 1199 ] ) ; xx [ 1187 ] = input [ 88 ] - ( xx [
1211 ] * xx [ 1217 ] + xx [ 1193 ] * xx [ 1199 ] ) * xx [ 11 ] ; xx [ 1223 ]
= xx [ 1218 ] ; xx [ 1224 ] = xx [ 1219 ] ; xx [ 1225 ] = xx [ 1187 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1223 , xx + 1226 ) ; xx [ 1012 ]
= - 0.110067209631064 ; xx [ 1013 ] = 0.02453955199399803 ; xx [ 1014 ] = -
0.06642056429716578 ; xx [ 1193 ] = 0.509216299963611 ; xx [ 1199 ] =
0.4048061395453557 ; xx [ 1205 ] = xx [ 1199 ] * input [ 89 ] ; xx [ 1211 ] =
0.4655982493493923 ; xx [ 1217 ] = 0.6000408481433056 ; xx [ 1223 ] = xx [
1217 ] * input [ 89 ] ; xx [ 1224 ] = ( xx [ 1193 ] * xx [ 1205 ] + xx [ 1211
] * xx [ 1223 ] ) * xx [ 11 ] ; xx [ 1225 ] = xx [ 11 ] * ( xx [ 1211 ] * xx
[ 1205 ] - xx [ 1193 ] * xx [ 1223 ] ) ; xx [ 1193 ] = input [ 89 ] - ( xx [
1217 ] * xx [ 1223 ] + xx [ 1199 ] * xx [ 1205 ] ) * xx [ 11 ] ; xx [ 1229 ]
= xx [ 1224 ] ; xx [ 1230 ] = xx [ 1225 ] ; xx [ 1231 ] = xx [ 1193 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1229 , xx + 1232 ) ; xx [ 1012 ]
= - 0.06617416083067242 ; xx [ 1013 ] = - 0.07971661038129915 ; xx [ 1014 ] =
- 0.09073845952707212 ; xx [ 1199 ] = 0.7235179426369552 ; xx [ 1205 ] =
0.0538590446688918 ; xx [ 1211 ] = xx [ 1205 ] * input [ 90 ] ; xx [ 1217 ] =
0.04375915444765855 ; xx [ 1223 ] = 0.6868086534048389 ; xx [ 1229 ] = xx [
1223 ] * input [ 90 ] ; xx [ 1230 ] = ( xx [ 1199 ] * xx [ 1211 ] + xx [ 1217
] * xx [ 1229 ] ) * xx [ 11 ] ; xx [ 1231 ] = xx [ 11 ] * ( xx [ 1199 ] * xx
[ 1229 ] - xx [ 1217 ] * xx [ 1211 ] ) ; xx [ 1199 ] = input [ 90 ] - ( xx [
1223 ] * xx [ 1229 ] + xx [ 1205 ] * xx [ 1211 ] ) * xx [ 11 ] ; xx [ 1235 ]
= xx [ 1230 ] ; xx [ 1236 ] = xx [ 1231 ] ; xx [ 1237 ] = xx [ 1199 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1235 , xx + 1238 ) ; xx [ 1012 ]
= - 0.1106485750497238 ; xx [ 1013 ] = 0.01773417046405806 ; xx [ 1014 ] = -
0.1225258118199228 ; xx [ 1205 ] = 0.6625935915012544 ; xx [ 1211 ] =
0.4596611201296349 ; xx [ 1217 ] = xx [ 1211 ] * input [ 91 ] ; xx [ 1223 ] =
0.3337564398799193 ; xx [ 1229 ] = 0.4881475452988784 ; xx [ 1235 ] = xx [
1229 ] * input [ 91 ] ; xx [ 1236 ] = ( xx [ 1205 ] * xx [ 1217 ] + xx [ 1223
] * xx [ 1235 ] ) * xx [ 11 ] ; xx [ 1237 ] = xx [ 11 ] * ( xx [ 1223 ] * xx
[ 1217 ] - xx [ 1205 ] * xx [ 1235 ] ) ; xx [ 1205 ] = input [ 91 ] - ( xx [
1229 ] * xx [ 1235 ] + xx [ 1211 ] * xx [ 1217 ] ) * xx [ 11 ] ; xx [ 1241 ]
= xx [ 1236 ] ; xx [ 1242 ] = xx [ 1237 ] ; xx [ 1243 ] = xx [ 1205 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1241 , xx + 1244 ) ; xx [ 1012 ]
= - 0.1024629917770516 ; xx [ 1013 ] = 0.04231214030604319 ; xx [ 1014 ] = -
0.08534356053751085 ; xx [ 1211 ] = 0.6724916232356 ; xx [ 1217 ] =
0.3694040981744918 ; xx [ 1223 ] = xx [ 1217 ] * input [ 92 ] ; xx [ 1229 ] =
0.3041388260371736 ; xx [ 1235 ] = 0.564619520940047 ; xx [ 1241 ] = xx [
1235 ] * input [ 92 ] ; xx [ 1242 ] = ( xx [ 1211 ] * xx [ 1223 ] + xx [ 1229
] * xx [ 1241 ] ) * xx [ 11 ] ; xx [ 1243 ] = xx [ 11 ] * ( xx [ 1229 ] * xx
[ 1223 ] - xx [ 1211 ] * xx [ 1241 ] ) ; xx [ 1211 ] = input [ 92 ] - ( xx [
1235 ] * xx [ 1241 ] + xx [ 1217 ] * xx [ 1223 ] ) * xx [ 11 ] ; xx [ 1247 ]
= xx [ 1242 ] ; xx [ 1248 ] = xx [ 1243 ] ; xx [ 1249 ] = xx [ 1211 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1247 , xx + 1250 ) ; xx [ 1012 ]
= - 0.08565381476365412 ; xx [ 1013 ] = 0.0586459764374675 ; xx [ 1014 ] = -
0.1158007647153833 ; xx [ 1217 ] = 0.7024913686853388 ; xx [ 1223 ] =
0.3180142807071604 ; xx [ 1229 ] = xx [ 1223 ] * input [ 93 ] ; xx [ 1235 ] =
0.2578772449452105 ; xx [ 1241 ] = 0.5821272375764381 ; xx [ 1247 ] = xx [
1241 ] * input [ 93 ] ; xx [ 1248 ] = ( xx [ 1217 ] * xx [ 1229 ] + xx [ 1235
] * xx [ 1247 ] ) * xx [ 11 ] ; xx [ 1249 ] = xx [ 11 ] * ( xx [ 1235 ] * xx
[ 1229 ] - xx [ 1217 ] * xx [ 1247 ] ) ; xx [ 1217 ] = input [ 93 ] - ( xx [
1241 ] * xx [ 1247 ] + xx [ 1223 ] * xx [ 1229 ] ) * xx [ 11 ] ; xx [ 1253 ]
= xx [ 1248 ] ; xx [ 1254 ] = xx [ 1249 ] ; xx [ 1255 ] = xx [ 1217 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1253 , xx + 1256 ) ; xx [ 1012 ]
= - 1.255454561475579e-3 ; xx [ 1013 ] = 0.08936900436542543 ; xx [ 1014 ] =
- 0.01042666174946011 ; xx [ 1223 ] = 0.1771377441620736 ; xx [ 1229 ] =
6.092217096126821e-3 ; xx [ 1235 ] = xx [ 1229 ] * input [ 94 ] ; xx [ 1241 ]
= 4.043444316251642e-3 ; xx [ 1247 ] = 0.9841589074138826 ; xx [ 1253 ] = xx
[ 1247 ] * input [ 94 ] ; xx [ 1254 ] = ( xx [ 1223 ] * xx [ 1235 ] - xx [
1241 ] * xx [ 1253 ] ) * xx [ 11 ] ; xx [ 1255 ] = xx [ 11 ] * ( xx [ 1241 ]
* xx [ 1235 ] + xx [ 1223 ] * xx [ 1253 ] ) ; xx [ 1223 ] = input [ 94 ] - (
xx [ 1247 ] * xx [ 1253 ] + xx [ 1229 ] * xx [ 1235 ] ) * xx [ 11 ] ; xx [
1259 ] = xx [ 1254 ] ; xx [ 1260 ] = - xx [ 1255 ] ; xx [ 1261 ] = xx [ 1223
] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1259 , xx + 1262 ) ; xx [
1012 ] = - 5.788798232309321e-4 ; xx [ 1013 ] = 0.03934347898355355 ; xx [
1014 ] = 4.230350906401621e-3 ; xx [ 1229 ] = 0.09068858100887967 ; xx [ 1235
] = 5.716624978144043e-3 ; xx [ 1241 ] = xx [ 1235 ] * input [ 95 ] ; xx [
1247 ] = 4.559029495871598e-3 ; xx [ 1253 ] = 0.9958524573065587 ; xx [ 1259
] = xx [ 1253 ] * input [ 95 ] ; xx [ 1260 ] = ( xx [ 1229 ] * xx [ 1241 ] -
xx [ 1247 ] * xx [ 1259 ] ) * xx [ 11 ] ; xx [ 1261 ] = xx [ 11 ] * ( xx [
1247 ] * xx [ 1241 ] + xx [ 1229 ] * xx [ 1259 ] ) ; xx [ 1229 ] = input [ 95
] - ( xx [ 1253 ] * xx [ 1259 ] + xx [ 1235 ] * xx [ 1241 ] ) * xx [ 11 ] ;
xx [ 1265 ] = xx [ 1260 ] ; xx [ 1266 ] = - xx [ 1261 ] ; xx [ 1267 ] = xx [
1229 ] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1265 , xx + 1268 ) ; xx
[ 1012 ] = 0.01690963297561175 ; xx [ 1013 ] = - 0.01232472380436953 ; xx [
1014 ] = - 0.05168594899503165 ; xx [ 1235 ] = 0.6269481732843243 ; xx [ 1241
] = 0.2649662167727434 ; xx [ 1247 ] = xx [ 1241 ] * input [ 96 ] ; xx [ 1253
] = 0.2788853047140321 ; xx [ 1259 ] = 0.6774598724641557 ; xx [ 1265 ] = xx
[ 1259 ] * input [ 96 ] ; xx [ 1266 ] = ( xx [ 1235 ] * xx [ 1247 ] + xx [
1253 ] * xx [ 1265 ] ) * xx [ 11 ] ; xx [ 1267 ] = xx [ 11 ] * ( xx [ 1235 ]
* xx [ 1265 ] - xx [ 1253 ] * xx [ 1247 ] ) ; xx [ 1235 ] = input [ 96 ] - (
xx [ 1259 ] * xx [ 1265 ] + xx [ 1241 ] * xx [ 1247 ] ) * xx [ 11 ] ; xx [
1271 ] = xx [ 1266 ] ; xx [ 1272 ] = xx [ 1267 ] ; xx [ 1273 ] = xx [ 1235 ]
; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1271 , xx + 1274 ) ; xx [ 1012
] = 0.04063604489054208 ; xx [ 1013 ] = - 0.05875008984204186 ; xx [ 1014 ] =
- 0.05963785222048177 ; xx [ 1241 ] = 0.6056330817001833 ; xx [ 1247 ] =
0.4005055822165586 ; xx [ 1253 ] = xx [ 1247 ] * input [ 97 ] ; xx [ 1259 ] =
0.373128172234625 ; xx [ 1265 ] = 0.5775631706130187 ; xx [ 1271 ] = xx [
1265 ] * input [ 97 ] ; xx [ 1272 ] = ( xx [ 1241 ] * xx [ 1253 ] + xx [ 1259
] * xx [ 1271 ] ) * xx [ 11 ] ; xx [ 1273 ] = xx [ 11 ] * ( xx [ 1241 ] * xx
[ 1271 ] - xx [ 1259 ] * xx [ 1253 ] ) ; xx [ 1241 ] = input [ 97 ] - ( xx [
1265 ] * xx [ 1271 ] + xx [ 1247 ] * xx [ 1253 ] ) * xx [ 11 ] ; xx [ 1277 ]
= xx [ 1272 ] ; xx [ 1278 ] = xx [ 1273 ] ; xx [ 1279 ] = xx [ 1241 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1277 , xx + 1280 ) ; xx [ 1012 ]
= 0.03012712893355168 ; xx [ 1013 ] = - 0.03148542668589369 ; xx [ 1014 ] = -
0.03563591320150283 ; xx [ 1247 ] = 0.4913046688168534 ; xx [ 1253 ] =
0.3405082465604375 ; xx [ 1259 ] = xx [ 1253 ] * input [ 98 ] ; xx [ 1265 ] =
0.4520512841339471 ; xx [ 1271 ] = 0.662060037259423 ; xx [ 1277 ] = xx [
1271 ] * input [ 98 ] ; xx [ 1278 ] = ( xx [ 1247 ] * xx [ 1259 ] + xx [ 1265
] * xx [ 1277 ] ) * xx [ 11 ] ; xx [ 1279 ] = xx [ 11 ] * ( xx [ 1247 ] * xx
[ 1277 ] - xx [ 1265 ] * xx [ 1259 ] ) ; xx [ 1247 ] = input [ 98 ] - ( xx [
1271 ] * xx [ 1277 ] + xx [ 1253 ] * xx [ 1259 ] ) * xx [ 11 ] ; xx [ 1283 ]
= xx [ 1278 ] ; xx [ 1284 ] = xx [ 1279 ] ; xx [ 1285 ] = xx [ 1247 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1283 , xx + 1286 ) ; xx [ 1012 ]
= 0.01696911852711806 ; xx [ 1013 ] = - 6.87739145058478e-3 ; xx [ 1014 ] = -
0.01490541478530271 ; xx [ 1253 ] = 0.6648369869461649 ; xx [ 1259 ] =
0.1732295352493182 ; xx [ 1265 ] = xx [ 1259 ] * input [ 99 ] ; xx [ 1271 ] =
0.1765054139502728 ; xx [ 1277 ] = 0.7048610840101003 ; xx [ 1283 ] = xx [
1277 ] * input [ 99 ] ; xx [ 1284 ] = ( xx [ 1253 ] * xx [ 1265 ] + xx [ 1271
] * xx [ 1283 ] ) * xx [ 11 ] ; xx [ 1285 ] = xx [ 11 ] * ( xx [ 1253 ] * xx
[ 1283 ] - xx [ 1271 ] * xx [ 1265 ] ) ; xx [ 1253 ] = input [ 99 ] - ( xx [
1277 ] * xx [ 1283 ] + xx [ 1259 ] * xx [ 1265 ] ) * xx [ 11 ] ; xx [ 1289 ]
= xx [ 1284 ] ; xx [ 1290 ] = xx [ 1285 ] ; xx [ 1291 ] = xx [ 1253 ] ;
pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1289 , xx + 1292 ) ; xx [ 1012 ]
= 0.06558095736323434 ; xx [ 1013 ] = - 0.07832526903266032 ; xx [ 1014 ] = -
0.09207158266150849 ; xx [ 1259 ] = 0.7235234255290708 ; xx [ 1265 ] =
0.05378533927509797 ; xx [ 1271 ] = xx [ 1265 ] * input [ 100 ] ; xx [ 1277 ]
= 0.05834256431148328 ; xx [ 1283 ] = 0.6857238038593254 ; xx [ 1289 ] = xx [
1283 ] * input [ 100 ] ; xx [ 1290 ] = ( xx [ 1259 ] * xx [ 1271 ] + xx [
1277 ] * xx [ 1289 ] ) * xx [ 11 ] ; xx [ 1291 ] = xx [ 11 ] * ( xx [ 1259 ]
* xx [ 1289 ] - xx [ 1277 ] * xx [ 1271 ] ) ; xx [ 1259 ] = input [ 100 ] - (
xx [ 1283 ] * xx [ 1289 ] + xx [ 1265 ] * xx [ 1271 ] ) * xx [ 11 ] ; xx [
1295 ] = - xx [ 1290 ] ; xx [ 1296 ] = xx [ 1291 ] ; xx [ 1297 ] = xx [ 1259
] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1295 , xx + 1298 ) ; xx [
1012 ] = - 0.0536213526876241 ; xx [ 1013 ] = - 0.07182367668605528 ; xx [
1014 ] = - 0.04789507325013141 ; xx [ 1265 ] = 0.5422753696281843 ; xx [ 1271
] = 0.03929410677551657 ; xx [ 1277 ] = xx [ 1271 ] * input [ 101 ] ; xx [
1283 ] = 0.06516590223105889 ; xx [ 1289 ] = 0.8367477528226429 ; xx [ 1295 ]
= xx [ 1289 ] * input [ 101 ] ; xx [ 1296 ] = ( xx [ 1265 ] * xx [ 1277 ] +
xx [ 1283 ] * xx [ 1295 ] ) * xx [ 11 ] ; xx [ 1297 ] = xx [ 11 ] * ( xx [
1265 ] * xx [ 1295 ] - xx [ 1283 ] * xx [ 1277 ] ) ; xx [ 1265 ] = input [
101 ] - ( xx [ 1289 ] * xx [ 1295 ] + xx [ 1271 ] * xx [ 1277 ] ) * xx [ 11 ]
; xx [ 1301 ] = - xx [ 1296 ] ; xx [ 1302 ] = xx [ 1297 ] ; xx [ 1303 ] = xx
[ 1265 ] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1301 , xx + 1304 ) ;
xx [ 1012 ] = 0.05373366350985357 ; xx [ 1013 ] = - 0.070690001766501 ; xx [
1014 ] = - 0.04898131155079476 ; xx [ 1271 ] = 0.5425079238946524 ; xx [ 1277
] = 0.03594100505250031 ; xx [ 1283 ] = xx [ 1277 ] * input [ 102 ] ; xx [
1289 ] = 0.05096762220483811 ; xx [ 1295 ] = 0.8377324740954689 ; xx [ 1301 ]
= xx [ 1295 ] * input [ 102 ] ; xx [ 1302 ] = ( xx [ 1271 ] * xx [ 1283 ] +
xx [ 1289 ] * xx [ 1301 ] ) * xx [ 11 ] ; xx [ 1303 ] = xx [ 11 ] * ( xx [
1271 ] * xx [ 1301 ] - xx [ 1289 ] * xx [ 1283 ] ) ; xx [ 1271 ] = input [
102 ] - ( xx [ 1295 ] * xx [ 1301 ] + xx [ 1277 ] * xx [ 1283 ] ) * xx [ 11 ]
; xx [ 1307 ] = xx [ 1302 ] ; xx [ 1308 ] = xx [ 1303 ] ; xx [ 1309 ] = xx [
1271 ] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1307 , xx + 1310 ) ; xx
[ 1012 ] = 0.04170815708087641 ; xx [ 1013 ] = - 0.04084259670838948 ; xx [
1014 ] = - 0.02190882443878382 ; xx [ 1277 ] = 0.2362168935499534 ; xx [ 1283
] = 0.05791248022737374 ; xx [ 1289 ] = xx [ 1283 ] * input [ 103 ] ; xx [
1295 ] = 0.2400132836924455 ; xx [ 1301 ] = 0.9398092080239978 ; xx [ 1307 ]
= xx [ 1301 ] * input [ 103 ] ; xx [ 1308 ] = ( xx [ 1277 ] * xx [ 1289 ] +
xx [ 1295 ] * xx [ 1307 ] ) * xx [ 11 ] ; xx [ 1309 ] = xx [ 11 ] * ( xx [
1277 ] * xx [ 1307 ] - xx [ 1295 ] * xx [ 1289 ] ) ; xx [ 1277 ] = input [
103 ] - ( xx [ 1301 ] * xx [ 1307 ] + xx [ 1283 ] * xx [ 1289 ] ) * xx [ 11 ]
; xx [ 1313 ] = xx [ 1308 ] ; xx [ 1314 ] = xx [ 1309 ] ; xx [ 1315 ] = xx [
1277 ] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1313 , xx + 1316 ) ; xx
[ 1012 ] = 0.02962397495869174 ; xx [ 1013 ] = - 5.97858076193959e-3 ; xx [
1014 ] = - 5.42483109988175e-3 ; xx [ 1283 ] = 0.2660160875688612 ; xx [ 1289
] = 0.01261015473456296 ; xx [ 1295 ] = xx [ 1289 ] * input [ 104 ] ; xx [
1301 ] = 0.0383859347047175 ; xx [ 1307 ] = 0.9631214591986682 ; xx [ 1313 ]
= xx [ 1307 ] * input [ 104 ] ; xx [ 1314 ] = ( xx [ 1283 ] * xx [ 1295 ] +
xx [ 1301 ] * xx [ 1313 ] ) * xx [ 11 ] ; xx [ 1315 ] = xx [ 11 ] * ( xx [
1283 ] * xx [ 1313 ] - xx [ 1301 ] * xx [ 1295 ] ) ; xx [ 1283 ] = input [
104 ] - ( xx [ 1307 ] * xx [ 1313 ] + xx [ 1289 ] * xx [ 1295 ] ) * xx [ 11 ]
; xx [ 1319 ] = - xx [ 1314 ] ; xx [ 1320 ] = xx [ 1315 ] ; xx [ 1321 ] = xx
[ 1283 ] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1319 , xx + 1322 ) ;
xx [ 1012 ] = 0.01582278174737271 ; xx [ 1013 ] = 0.02097147799811188 ; xx [
1014 ] = 3.386960009426072e-3 ; xx [ 1289 ] = 0.02559897076770395 ; xx [ 1295
] = 2.341435664389156e-3 ; xx [ 1301 ] = xx [ 1295 ] * input [ 105 ] ; xx [
1307 ] = 0.125190184679472 ; xx [ 1313 ] = 0.9917996914874414 ; xx [ 1319 ] =
xx [ 1313 ] * input [ 105 ] ; xx [ 1320 ] = ( xx [ 1289 ] * xx [ 1301 ] - xx
[ 1307 ] * xx [ 1319 ] ) * xx [ 11 ] ; xx [ 1321 ] = xx [ 11 ] * ( xx [ 1307
] * xx [ 1301 ] + xx [ 1289 ] * xx [ 1319 ] ) ; xx [ 1289 ] = input [ 105 ] -
( xx [ 1313 ] * xx [ 1319 ] + xx [ 1295 ] * xx [ 1301 ] ) * xx [ 11 ] ; xx [
1325 ] = xx [ 1320 ] ; xx [ 1326 ] = - xx [ 1321 ] ; xx [ 1327 ] = xx [ 1289
] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1325 , xx + 1328 ) ; xx [
1012 ] = 0.01545051058463876 ; xx [ 1013 ] = 0.05912544116052309 ; xx [ 1014
] = - 1.949201488789741e-3 ; xx [ 1295 ] = 0.1183223592497275 ; xx [ 1301 ] =
2.272610491874502e-3 ; xx [ 1307 ] = xx [ 1301 ] * input [ 106 ] ; xx [ 1313
] = 0.07242969728623251 ; xx [ 1319 ] = 0.9903275182959201 ; xx [ 1325 ] = xx
[ 1319 ] * input [ 106 ] ; xx [ 1326 ] = ( xx [ 1295 ] * xx [ 1307 ] + xx [
1313 ] * xx [ 1325 ] ) * xx [ 11 ] ; xx [ 1327 ] = xx [ 11 ] * ( xx [ 1313 ]
* xx [ 1307 ] - xx [ 1295 ] * xx [ 1325 ] ) ; xx [ 1295 ] = input [ 106 ] - (
xx [ 1319 ] * xx [ 1325 ] + xx [ 1301 ] * xx [ 1307 ] ) * xx [ 11 ] ; xx [
1331 ] = - xx [ 1326 ] ; xx [ 1332 ] = xx [ 1327 ] ; xx [ 1333 ] = xx [ 1295
] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1331 , xx + 1334 ) ; xx [
1012 ] = 0.01478712197719425 ; xx [ 1013 ] = 0.08981685465000155 ; xx [ 1014
] = - 0.01696297820252731 ; xx [ 1301 ] = 0.3727409608906735 ; xx [ 1307 ] =
0.04531238260434349 ; xx [ 1313 ] = xx [ 1307 ] * input [ 107 ] ; xx [ 1319 ]
= 0.1311523051115367 ; xx [ 1325 ] = 0.9175020637148159 ; xx [ 1331 ] = xx [
1325 ] * input [ 107 ] ; xx [ 1332 ] = ( xx [ 1301 ] * xx [ 1313 ] + xx [
1319 ] * xx [ 1331 ] ) * xx [ 11 ] ; xx [ 1333 ] = xx [ 11 ] * ( xx [ 1319 ]
* xx [ 1313 ] - xx [ 1301 ] * xx [ 1331 ] ) ; xx [ 1301 ] = input [ 107 ] - (
xx [ 1325 ] * xx [ 1331 ] + xx [ 1307 ] * xx [ 1313 ] ) * xx [ 11 ] ; xx [
1337 ] = - xx [ 1332 ] ; xx [ 1338 ] = xx [ 1333 ] ; xx [ 1339 ] = xx [ 1301
] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1337 , xx + 1340 ) ; xx [
1012 ] = 0.0778888264372435 ; xx [ 1013 ] = - 0.07352993297055943 ; xx [ 1014
] = - 0.08156685488911927 ; xx [ 1307 ] = 0.6734207063632587 ; xx [ 1313 ] =
0.2039102184933242 ; xx [ 1319 ] = xx [ 1313 ] * input [ 108 ] ; xx [ 1325 ]
= 0.2127286300869492 ; xx [ 1331 ] = 0.6779909328129283 ; xx [ 1337 ] = xx [
1331 ] * input [ 108 ] ; xx [ 1338 ] = ( xx [ 1307 ] * xx [ 1319 ] + xx [
1325 ] * xx [ 1337 ] ) * xx [ 11 ] ; xx [ 1339 ] = xx [ 11 ] * ( xx [ 1307 ]
* xx [ 1337 ] - xx [ 1325 ] * xx [ 1319 ] ) ; xx [ 1307 ] = input [ 108 ] - (
xx [ 1331 ] * xx [ 1337 ] + xx [ 1313 ] * xx [ 1319 ] ) * xx [ 11 ] ; xx [
1343 ] = - xx [ 1338 ] ; xx [ 1344 ] = xx [ 1339 ] ; xx [ 1345 ] = xx [ 1307
] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1343 , xx + 1346 ) ; xx [
1012 ] = 0.06550036046086356 ; xx [ 1013 ] = - 0.06238821280752714 ; xx [
1014 ] = - 0.0374024005763527 ; xx [ 1313 ] = 0.3967640724820374 ; xx [ 1319
] = 0.07306199386513242 ; xx [ 1325 ] = xx [ 1319 ] * input [ 109 ] ; xx [
1331 ] = 0.1661315210310757 ; xx [ 1337 ] = 0.8998002742608058 ; xx [ 1343 ]
= xx [ 1337 ] * input [ 109 ] ; xx [ 1344 ] = ( xx [ 1313 ] * xx [ 1325 ] +
xx [ 1331 ] * xx [ 1343 ] ) * xx [ 11 ] ; xx [ 1345 ] = xx [ 11 ] * ( xx [
1313 ] * xx [ 1343 ] - xx [ 1331 ] * xx [ 1325 ] ) ; xx [ 1313 ] = input [
109 ] - ( xx [ 1337 ] * xx [ 1343 ] + xx [ 1319 ] * xx [ 1325 ] ) * xx [ 11 ]
; xx [ 1349 ] = - xx [ 1344 ] ; xx [ 1350 ] = xx [ 1345 ] ; xx [ 1351 ] = xx
[ 1313 ] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1349 , xx + 1352 ) ;
xx [ 1012 ] = 0.05340497064709989 ; xx [ 1013 ] = - 0.02835575423513582 ; xx
[ 1014 ] = - 0.01278600729968406 ; xx [ 1319 ] = 0.1839594217308902 ; xx [
1325 ] = 1.794711470683825e-3 ; xx [ 1331 ] = xx [ 1325 ] * input [ 110 ] ;
xx [ 1337 ] = 0.02640085935264057 ; xx [ 1343 ] = 0.9825775820730981 ; xx [
1349 ] = xx [ 1343 ] * input [ 110 ] ; xx [ 1350 ] = ( xx [ 1319 ] * xx [
1331 ] + xx [ 1337 ] * xx [ 1349 ] ) * xx [ 11 ] ; xx [ 1351 ] = xx [ 11 ] *
( xx [ 1319 ] * xx [ 1349 ] - xx [ 1337 ] * xx [ 1331 ] ) ; xx [ 1319 ] =
input [ 110 ] - ( xx [ 1343 ] * xx [ 1349 ] + xx [ 1325 ] * xx [ 1331 ] ) *
xx [ 11 ] ; xx [ 1355 ] = xx [ 1350 ] ; xx [ 1356 ] = xx [ 1351 ] ; xx [ 1357
] = xx [ 1319 ] ; pm_math_Vector3_cross_ra ( xx + 1012 , xx + 1355 , xx +
1358 ) ; xx [ 1012 ] = 0.04148258714802073 ; xx [ 1013 ] =
3.197150119698775e-3 ; xx [ 1014 ] = - 2.380040901917324e-3 ; xx [ 1325 ] =
0.1199233718917195 ; xx [ 1331 ] = 6.016650158040916e-3 ; xx [ 1337 ] = xx [
1331 ] * input [ 111 ] ; xx [ 1343 ] = 0.01709382532472628 ; xx [ 1349 ] =
0.9926177441144018 ; xx [ 1355 ] = xx [ 1349 ] * input [ 111 ] ; xx [ 1356 ]
= ( xx [ 1325 ] * xx [ 1337 ] + xx [ 1343 ] * xx [ 1355 ] ) * xx [ 11 ] ; xx
[ 1357 ] = xx [ 11 ] * ( xx [ 1325 ] * xx [ 1355 ] - xx [ 1343 ] * xx [ 1337
] ) ; xx [ 1325 ] = input [ 111 ] - ( xx [ 1349 ] * xx [ 1355 ] + xx [ 1331 ]
* xx [ 1337 ] ) * xx [ 11 ] ; xx [ 1361 ] = - xx [ 1356 ] ; xx [ 1362 ] = xx
[ 1357 ] ; xx [ 1363 ] = xx [ 1325 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1361 , xx + 1364 ) ; xx [ 1012 ] = - 0.04168350328274069 ; xx [ 1013 ] =
- 0.04172321726253591 ; xx [ 1014 ] = - 0.02106505189185183 ; xx [ 1331 ] =
0.2342432592721393 ; xx [ 1337 ] = 0.06543983228921862 ; xx [ 1343 ] = xx [
1337 ] * input [ 112 ] ; xx [ 1349 ] = 0.251989966046183 ; xx [ 1355 ] =
0.9366689814697439 ; xx [ 1361 ] = xx [ 1355 ] * input [ 112 ] ; xx [ 1362 ]
= ( xx [ 1331 ] * xx [ 1343 ] + xx [ 1349 ] * xx [ 1361 ] ) * xx [ 11 ] ; xx
[ 1363 ] = xx [ 11 ] * ( xx [ 1331 ] * xx [ 1361 ] - xx [ 1349 ] * xx [ 1343
] ) ; xx [ 1331 ] = input [ 112 ] - ( xx [ 1355 ] * xx [ 1361 ] + xx [ 1337 ]
* xx [ 1343 ] ) * xx [ 11 ] ; xx [ 1367 ] = - xx [ 1362 ] ; xx [ 1368 ] = xx
[ 1363 ] ; xx [ 1369 ] = xx [ 1331 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1367 , xx + 1370 ) ; xx [ 1012 ] = 0.02930199029343554 ; xx [ 1013 ] =
0.03436415369637134 ; xx [ 1014 ] = - 2.298406593960215e-4 ; xx [ 1337 ] =
0.0535978209959625 ; xx [ 1343 ] = 6.433159249041309e-4 ; xx [ 1349 ] = xx [
1343 ] * input [ 113 ] ; xx [ 1355 ] = 0.09606121513911781 ; xx [ 1361 ] =
0.9939311357810972 ; xx [ 1367 ] = xx [ 1361 ] * input [ 113 ] ; xx [ 1368 ]
= ( xx [ 1337 ] * xx [ 1349 ] - xx [ 1355 ] * xx [ 1367 ] ) * xx [ 11 ] ; xx
[ 1369 ] = xx [ 11 ] * ( xx [ 1355 ] * xx [ 1349 ] + xx [ 1337 ] * xx [ 1367
] ) ; xx [ 1337 ] = input [ 113 ] - ( xx [ 1361 ] * xx [ 1367 ] + xx [ 1343 ]
* xx [ 1349 ] ) * xx [ 11 ] ; xx [ 1373 ] = xx [ 1368 ] ; xx [ 1374 ] = - xx
[ 1369 ] ; xx [ 1375 ] = xx [ 1337 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1373 , xx + 1376 ) ; xx [ 1012 ] = 0.02862756968731633 ; xx [ 1013 ] =
0.07637171918724878 ; xx [ 1014 ] = - 0.01058660435553563 ; xx [ 1343 ] =
0.2332065042255295 ; xx [ 1349 ] = 0.01783146791272022 ; xx [ 1355 ] = xx [
1349 ] * input [ 114 ] ; xx [ 1361 ] = 0.1039408331379334 ; xx [ 1367 ] =
0.9666918166331906 ; xx [ 1373 ] = xx [ 1367 ] * input [ 114 ] ; xx [ 1374 ]
= ( xx [ 1343 ] * xx [ 1355 ] + xx [ 1361 ] * xx [ 1373 ] ) * xx [ 11 ] ; xx
[ 1375 ] = xx [ 11 ] * ( xx [ 1361 ] * xx [ 1355 ] - xx [ 1343 ] * xx [ 1373
] ) ; xx [ 1343 ] = input [ 114 ] - ( xx [ 1367 ] * xx [ 1373 ] + xx [ 1349 ]
* xx [ 1355 ] ) * xx [ 11 ] ; xx [ 1379 ] = - xx [ 1374 ] ; xx [ 1380 ] = xx
[ 1375 ] ; xx [ 1381 ] = xx [ 1343 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1379 , xx + 1382 ) ; xx [ 1012 ] = 0.08887331662514102 ; xx [ 1013 ] = -
0.0612916453118936 ; xx [ 1014 ] = - 0.1168096624912623 ; xx [ 1349 ] =
0.7054881516792711 ; xx [ 1355 ] = 0.2874183777258685 ; xx [ 1361 ] = xx [
1355 ] * input [ 115 ] ; xx [ 1367 ] = 0.251504329686306 ; xx [ 1373 ] =
0.5970114874394273 ; xx [ 1379 ] = xx [ 1373 ] * input [ 115 ] ; xx [ 1380 ]
= ( xx [ 1349 ] * xx [ 1361 ] + xx [ 1367 ] * xx [ 1379 ] ) * xx [ 11 ] ; xx
[ 1381 ] = xx [ 11 ] * ( xx [ 1349 ] * xx [ 1379 ] - xx [ 1367 ] * xx [ 1361
] ) ; xx [ 1349 ] = input [ 115 ] - ( xx [ 1373 ] * xx [ 1379 ] + xx [ 1355 ]
* xx [ 1361 ] ) * xx [ 11 ] ; xx [ 1385 ] = - xx [ 1380 ] ; xx [ 1386 ] = xx
[ 1381 ] ; xx [ 1387 ] = xx [ 1349 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1385 , xx + 1388 ) ; xx [ 1012 ] = 0.08886697790382755 ; xx [ 1013 ] = -
0.06164843565869298 ; xx [ 1014 ] = - 0.05488652689462781 ; xx [ 1355 ] =
0.5618713971915271 ; xx [ 1361 ] = 0.2343124448976534 ; xx [ 1367 ] = xx [
1361 ] * input [ 116 ] ; xx [ 1373 ] = 0.3106833398705445 ; xx [ 1379 ] =
0.7299822419148356 ; xx [ 1385 ] = xx [ 1379 ] * input [ 116 ] ; xx [ 1386 ]
= ( xx [ 1355 ] * xx [ 1367 ] + xx [ 1373 ] * xx [ 1385 ] ) * xx [ 11 ] ; xx
[ 1387 ] = xx [ 11 ] * ( xx [ 1355 ] * xx [ 1385 ] - xx [ 1373 ] * xx [ 1367
] ) ; xx [ 1355 ] = input [ 116 ] - ( xx [ 1379 ] * xx [ 1385 ] + xx [ 1361 ]
* xx [ 1367 ] ) * xx [ 11 ] ; xx [ 1391 ] = - xx [ 1386 ] ; xx [ 1392 ] = xx
[ 1387 ] ; xx [ 1393 ] = xx [ 1355 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1391 , xx + 1394 ) ; xx [ 1012 ] = 0.07772795717396366 ; xx [ 1013 ] = -
0.04247189938330817 ; xx [ 1014 ] = - 0.0251441932791364 ; xx [ 1361 ] =
0.276587913074899 ; xx [ 1367 ] = 0.0422506803054369 ; xx [ 1373 ] = xx [
1367 ] * input [ 117 ] ; xx [ 1379 ] = 0.1388395356539401 ; xx [ 1385 ] =
0.9499671519026319 ; xx [ 1391 ] = xx [ 1385 ] * input [ 117 ] ; xx [ 1392 ]
= ( xx [ 1361 ] * xx [ 1373 ] + xx [ 1379 ] * xx [ 1391 ] ) * xx [ 11 ] ; xx
[ 1393 ] = xx [ 11 ] * ( xx [ 1361 ] * xx [ 1391 ] - xx [ 1379 ] * xx [ 1373
] ) ; xx [ 1361 ] = input [ 117 ] - ( xx [ 1385 ] * xx [ 1391 ] + xx [ 1367 ]
* xx [ 1373 ] ) * xx [ 11 ] ; xx [ 1397 ] = - xx [ 1392 ] ; xx [ 1398 ] = xx
[ 1393 ] ; xx [ 1399 ] = xx [ 1361 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1397 , xx + 1400 ) ; xx [ 1012 ] = 0.06525253027268166 ; xx [ 1013 ] = -
4.406459578718907e-3 ; xx [ 1014 ] = - 7.366786907179716e-3 ; xx [ 1367 ] =
0.08472537579807812 ; xx [ 1373 ] = 0.01843356037597695 ; xx [ 1379 ] = xx [
1373 ] * input [ 118 ] ; xx [ 1385 ] = 0.1627574807963621 ; xx [ 1391 ] =
0.9828488271308878 ; xx [ 1397 ] = xx [ 1391 ] * input [ 118 ] ; xx [ 1398 ]
= ( xx [ 1367 ] * xx [ 1379 ] + xx [ 1385 ] * xx [ 1397 ] ) * xx [ 11 ] ; xx
[ 1399 ] = xx [ 11 ] * ( xx [ 1367 ] * xx [ 1397 ] - xx [ 1385 ] * xx [ 1379
] ) ; xx [ 1367 ] = input [ 118 ] - ( xx [ 1391 ] * xx [ 1397 ] + xx [ 1373 ]
* xx [ 1379 ] ) * xx [ 11 ] ; xx [ 1403 ] = - xx [ 1398 ] ; xx [ 1404 ] = xx
[ 1399 ] ; xx [ 1405 ] = xx [ 1367 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1403 , xx + 1406 ) ; xx [ 1012 ] = 0.0528767481880339 ; xx [ 1013 ] =
0.02884596809690045 ; xx [ 1014 ] = - 3.558177262034436e-3 ; xx [ 1373 ] =
0.05738258072666671 ; xx [ 1379 ] = 1.633870478445837e-3 ; xx [ 1385 ] = xx [
1379 ] * input [ 119 ] ; xx [ 1391 ] = 0.07311132915861022 ; xx [ 1397 ] =
0.9956702784783066 ; xx [ 1403 ] = xx [ 1397 ] * input [ 119 ] ; xx [ 1404 ]
= ( xx [ 1373 ] * xx [ 1385 ] - xx [ 1391 ] * xx [ 1403 ] ) * xx [ 11 ] ; xx
[ 1405 ] = xx [ 11 ] * ( xx [ 1391 ] * xx [ 1385 ] + xx [ 1373 ] * xx [ 1403
] ) ; xx [ 1373 ] = input [ 119 ] - ( xx [ 1397 ] * xx [ 1403 ] + xx [ 1379 ]
* xx [ 1385 ] ) * xx [ 11 ] ; xx [ 1409 ] = xx [ 1404 ] ; xx [ 1410 ] = - xx
[ 1405 ] ; xx [ 1411 ] = xx [ 1373 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1409 , xx + 1412 ) ; xx [ 1012 ] = 0.04085972611525981 ; xx [ 1013 ] =
0.05356486425640417 ; xx [ 1014 ] = - 5.450171695717721e-3 ; xx [ 1379 ] =
0.09460546317854919 ; xx [ 1385 ] = 3.053291054081917e-3 ; xx [ 1391 ] = xx [
1385 ] * input [ 120 ] ; xx [ 1397 ] = 0.09684419861021348 ; xx [ 1403 ] =
0.9907884158315826 ; xx [ 1409 ] = xx [ 1403 ] * input [ 120 ] ; xx [ 1410 ]
= ( xx [ 1379 ] * xx [ 1391 ] + xx [ 1397 ] * xx [ 1409 ] ) * xx [ 11 ] ; xx
[ 1411 ] = xx [ 11 ] * ( xx [ 1397 ] * xx [ 1391 ] - xx [ 1379 ] * xx [ 1409
] ) ; xx [ 1379 ] = input [ 120 ] - ( xx [ 1403 ] * xx [ 1409 ] + xx [ 1385 ]
* xx [ 1391 ] ) * xx [ 11 ] ; xx [ 1415 ] = - xx [ 1410 ] ; xx [ 1416 ] = xx
[ 1411 ] ; xx [ 1417 ] = xx [ 1379 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1415 , xx + 1418 ) ; xx [ 1012 ] = 0.1002985030736737 ; xx [ 1013 ] = -
0.05227749176799683 ; xx [ 1014 ] = - 0.08725696878023967 ; xx [ 1385 ] =
0.6625682197738285 ; xx [ 1391 ] = 0.3065574261284753 ; xx [ 1397 ] = xx [
1391 ] * input [ 121 ] ; xx [ 1403 ] = 0.2936564847037592 ; xx [ 1409 ] =
0.6170832744635487 ; xx [ 1415 ] = xx [ 1409 ] * input [ 121 ] ; xx [ 1416 ]
= ( xx [ 1385 ] * xx [ 1397 ] + xx [ 1403 ] * xx [ 1415 ] ) * xx [ 11 ] ; xx
[ 1417 ] = xx [ 11 ] * ( xx [ 1385 ] * xx [ 1415 ] - xx [ 1403 ] * xx [ 1397
] ) ; xx [ 1385 ] = input [ 121 ] - ( xx [ 1409 ] * xx [ 1415 ] + xx [ 1391 ]
* xx [ 1397 ] ) * xx [ 11 ] ; xx [ 1421 ] = - xx [ 1416 ] ; xx [ 1422 ] = xx
[ 1417 ] ; xx [ 1423 ] = xx [ 1385 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1421 , xx + 1424 ) ; xx [ 1012 ] = 0.1002608402311033 ; xx [ 1013 ] = -
0.03443241537289735 ; xx [ 1014 ] = - 0.03685386470256991 ; xx [ 1391 ] =
0.2634294522538985 ; xx [ 1397 ] = 0.1355493015371225 ; xx [ 1403 ] = xx [
1397 ] * input [ 122 ] ; xx [ 1409 ] = 0.432519761028617 ; xx [ 1415 ] =
0.8515620745769256 ; xx [ 1421 ] = xx [ 1415 ] * input [ 122 ] ; xx [ 1422 ]
= ( xx [ 1391 ] * xx [ 1403 ] + xx [ 1409 ] * xx [ 1421 ] ) * xx [ 11 ] ; xx
[ 1423 ] = xx [ 11 ] * ( xx [ 1391 ] * xx [ 1421 ] - xx [ 1409 ] * xx [ 1403
] ) ; xx [ 1391 ] = input [ 122 ] - ( xx [ 1415 ] * xx [ 1421 ] + xx [ 1397 ]
* xx [ 1403 ] ) * xx [ 11 ] ; xx [ 1427 ] = - xx [ 1422 ] ; xx [ 1428 ] = xx
[ 1423 ] ; xx [ 1429 ] = xx [ 1391 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1427 , xx + 1430 ) ; xx [ 1012 ] = - 0.03000715893276557 ; xx [ 1013 ] =
- 6.608288839976439e-3 ; xx [ 1014 ] = - 4.82147204094653e-3 ; xx [ 1397 ] =
0.2662653786798204 ; xx [ 1403 ] = 5.130591034712339e-3 ; xx [ 1409 ] = xx [
1403 ] * input [ 123 ] ; xx [ 1415 ] = 0.02582898334928278 ; xx [ 1421 ] =
0.9635399777753225 ; xx [ 1427 ] = xx [ 1421 ] * input [ 123 ] ; xx [ 1428 ]
= ( xx [ 1397 ] * xx [ 1409 ] + xx [ 1415 ] * xx [ 1427 ] ) * xx [ 11 ] ; xx
[ 1429 ] = xx [ 11 ] * ( xx [ 1397 ] * xx [ 1427 ] - xx [ 1415 ] * xx [ 1409
] ) ; xx [ 1397 ] = input [ 123 ] - ( xx [ 1421 ] * xx [ 1427 ] + xx [ 1403 ]
* xx [ 1409 ] ) * xx [ 11 ] ; xx [ 1433 ] = xx [ 1428 ] ; xx [ 1434 ] = xx [
1429 ] ; xx [ 1435 ] = xx [ 1397 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1433 , xx + 1436 ) ; xx [ 1012 ] = 0.08884247588866538 ; xx [ 1013 ] = -
8.835966179131649e-3 ; xx [ 1014 ] = - 0.01843883558646855 ; xx [ 1403 ] =
0.06337600975061324 ; xx [ 1409 ] = 0.02588095217024628 ; xx [ 1415 ] = xx [
1409 ] * input [ 124 ] ; xx [ 1421 ] = 0.3149296965525175 ; xx [ 1427 ] =
0.9466429865224752 ; xx [ 1433 ] = xx [ 1427 ] * input [ 124 ] ; xx [ 1434 ]
= ( xx [ 1403 ] * xx [ 1415 ] + xx [ 1421 ] * xx [ 1433 ] ) * xx [ 11 ] ; xx
[ 1435 ] = xx [ 11 ] * ( xx [ 1403 ] * xx [ 1433 ] - xx [ 1421 ] * xx [ 1415
] ) ; xx [ 1403 ] = input [ 124 ] - ( xx [ 1427 ] * xx [ 1433 ] + xx [ 1409 ]
* xx [ 1415 ] ) * xx [ 11 ] ; xx [ 1439 ] = - xx [ 1434 ] ; xx [ 1440 ] = xx
[ 1435 ] ; xx [ 1441 ] = xx [ 1403 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1439 , xx + 1442 ) ; xx [ 1012 ] = 0.07698781823301588 ; xx [ 1013 ] =
0.03031047070116234 ; xx [ 1014 ] = - 0.0131613301344704 ; xx [ 1409 ] =
0.1119765984117292 ; xx [ 1415 ] = 0.02375224840773239 ; xx [ 1421 ] = xx [
1415 ] * input [ 125 ] ; xx [ 1427 ] = 0.2595796872263635 ; xx [ 1433 ] =
0.9589136864614975 ; xx [ 1439 ] = xx [ 1433 ] * input [ 125 ] ; xx [ 1440 ]
= ( xx [ 1409 ] * xx [ 1421 ] + xx [ 1427 ] * xx [ 1439 ] ) * xx [ 11 ] ; xx
[ 1441 ] = xx [ 11 ] * ( xx [ 1427 ] * xx [ 1421 ] - xx [ 1409 ] * xx [ 1439
] ) ; xx [ 1409 ] = input [ 125 ] - ( xx [ 1433 ] * xx [ 1439 ] + xx [ 1415 ]
* xx [ 1421 ] ) * xx [ 11 ] ; xx [ 1445 ] = - xx [ 1440 ] ; xx [ 1446 ] = xx
[ 1441 ] ; xx [ 1447 ] = xx [ 1409 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1445 , xx + 1448 ) ; xx [ 1012 ] = 0.06410293276591428 ; xx [ 1013 ] =
0.05766363314794307 ; xx [ 1014 ] = - 0.01776190243369759 ; xx [ 1415 ] =
0.2621419513176254 ; xx [ 1421 ] = 0.06860447847708197 ; xx [ 1427 ] = xx [
1421 ] * input [ 126 ] ; xx [ 1433 ] = 0.2691185112896542 ; xx [ 1439 ] =
0.9242024939230125 ; xx [ 1445 ] = xx [ 1439 ] * input [ 126 ] ; xx [ 1446 ]
= ( xx [ 1415 ] * xx [ 1427 ] + xx [ 1433 ] * xx [ 1445 ] ) * xx [ 11 ] ; xx
[ 1447 ] = xx [ 11 ] * ( xx [ 1433 ] * xx [ 1427 ] - xx [ 1415 ] * xx [ 1445
] ) ; xx [ 1415 ] = input [ 126 ] - ( xx [ 1439 ] * xx [ 1445 ] + xx [ 1421 ]
* xx [ 1427 ] ) * xx [ 11 ] ; xx [ 1451 ] = - xx [ 1446 ] ; xx [ 1452 ] = xx
[ 1447 ] ; xx [ 1453 ] = xx [ 1415 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1451 , xx + 1454 ) ; xx [ 1012 ] = 0.05151655382800063 ; xx [ 1013 ] =
0.07590939818327416 ; xx [ 1014 ] = - 0.02558013511927111 ; xx [ 1421 ] =
0.4221198092475255 ; xx [ 1427 ] = 0.1281393224157436 ; xx [ 1433 ] = xx [
1427 ] * input [ 127 ] ; xx [ 1439 ] = 0.2763208293260235 ; xx [ 1445 ] =
0.8538395516560742 ; xx [ 1451 ] = xx [ 1445 ] * input [ 127 ] ; xx [ 1452 ]
= ( xx [ 1421 ] * xx [ 1433 ] + xx [ 1439 ] * xx [ 1451 ] ) * xx [ 11 ] ; xx
[ 1453 ] = xx [ 11 ] * ( xx [ 1439 ] * xx [ 1433 ] - xx [ 1421 ] * xx [ 1451
] ) ; xx [ 1421 ] = input [ 127 ] - ( xx [ 1445 ] * xx [ 1451 ] + xx [ 1427 ]
* xx [ 1433 ] ) * xx [ 11 ] ; xx [ 1457 ] = - xx [ 1452 ] ; xx [ 1458 ] = xx
[ 1453 ] ; xx [ 1459 ] = xx [ 1421 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1457 , xx + 1460 ) ; xx [ 1012 ] = 0.03998183499215965 ; xx [ 1013 ] =
0.08898570672413771 ; xx [ 1014 ] = - 0.03377850034806965 ; xx [ 1427 ] =
0.5423780303336361 ; xx [ 1433 ] = 0.1590891076346561 ; xx [ 1439 ] = xx [
1433 ] * input [ 128 ] ; xx [ 1445 ] = 0.2434072545963042 ; xx [ 1451 ] =
0.7882065950328658 ; xx [ 1457 ] = xx [ 1451 ] * input [ 128 ] ; xx [ 1458 ]
= ( xx [ 1427 ] * xx [ 1439 ] + xx [ 1445 ] * xx [ 1457 ] ) * xx [ 11 ] ; xx
[ 1459 ] = xx [ 11 ] * ( xx [ 1445 ] * xx [ 1439 ] - xx [ 1427 ] * xx [ 1457
] ) ; xx [ 1427 ] = input [ 128 ] - ( xx [ 1451 ] * xx [ 1457 ] + xx [ 1433 ]
* xx [ 1439 ] ) * xx [ 11 ] ; xx [ 1463 ] = - xx [ 1458 ] ; xx [ 1464 ] = xx
[ 1459 ] ; xx [ 1465 ] = xx [ 1427 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1463 , xx + 1466 ) ; xx [ 1012 ] = 0.1078026094018518 ; xx [ 1013 ] = -
0.03489168803420988 ; xx [ 1014 ] = - 0.1175021056069469 ; xx [ 1433 ] =
0.6792154792002904 ; xx [ 1439 ] = 0.4270171481773202 ; xx [ 1445 ] = xx [
1439 ] * input [ 129 ] ; xx [ 1451 ] = 0.3243972925127879 ; xx [ 1457 ] =
0.5010879010588875 ; xx [ 1463 ] = xx [ 1457 ] * input [ 129 ] ; xx [ 1464 ]
= ( xx [ 1433 ] * xx [ 1445 ] + xx [ 1451 ] * xx [ 1463 ] ) * xx [ 11 ] ; xx
[ 1465 ] = xx [ 11 ] * ( xx [ 1433 ] * xx [ 1463 ] - xx [ 1451 ] * xx [ 1445
] ) ; xx [ 1433 ] = input [ 129 ] - ( xx [ 1457 ] * xx [ 1463 ] + xx [ 1439 ]
* xx [ 1445 ] ) * xx [ 11 ] ; xx [ 1469 ] = - xx [ 1464 ] ; xx [ 1470 ] = xx
[ 1465 ] ; xx [ 1471 ] = xx [ 1433 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1469 , xx + 1472 ) ; xx [ 1012 ] = 0.1085289392221315 ; xx [ 1013 ] = -
0.03773545717674479 ; xx [ 1014 ] = - 0.06914671798067905 ; xx [ 1439 ] =
0.5206024645015256 ; xx [ 1445 ] = 0.3669906641286951 ; xx [ 1451 ] = xx [
1445 ] * input [ 130 ] ; xx [ 1457 ] = 0.4492508056740898 ; xx [ 1463 ] =
0.6264699833180344 ; xx [ 1469 ] = xx [ 1463 ] * input [ 130 ] ; xx [ 1470 ]
= ( xx [ 1439 ] * xx [ 1451 ] + xx [ 1457 ] * xx [ 1469 ] ) * xx [ 11 ] ; xx
[ 1471 ] = xx [ 11 ] * ( xx [ 1439 ] * xx [ 1469 ] - xx [ 1457 ] * xx [ 1451
] ) ; xx [ 1439 ] = input [ 130 ] - ( xx [ 1463 ] * xx [ 1469 ] + xx [ 1445 ]
* xx [ 1451 ] ) * xx [ 11 ] ; xx [ 1475 ] = - xx [ 1470 ] ; xx [ 1476 ] = xx
[ 1471 ] ; xx [ 1477 ] = xx [ 1439 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1475 , xx + 1478 ) ; xx [ 1012 ] = 0.108045347124532 ; xx [ 1013 ] = -
6.756674438570453e-3 ; xx [ 1014 ] = - 0.03927706207019656 ; xx [ 1445 ] =
0.0246225636350577 ; xx [ 1451 ] = 0.0229080611250566 ; xx [ 1457 ] = xx [
1451 ] * input [ 131 ] ; xx [ 1463 ] = 0.5660436624340061 ; xx [ 1469 ] =
0.8236889718296739 ; xx [ 1475 ] = xx [ 1469 ] * input [ 131 ] ; xx [ 1476 ]
= ( xx [ 1445 ] * xx [ 1457 ] + xx [ 1463 ] * xx [ 1475 ] ) * xx [ 11 ] ; xx
[ 1477 ] = xx [ 11 ] * ( xx [ 1445 ] * xx [ 1475 ] - xx [ 1463 ] * xx [ 1457
] ) ; xx [ 1445 ] = input [ 131 ] - ( xx [ 1469 ] * xx [ 1475 ] + xx [ 1451 ]
* xx [ 1457 ] ) * xx [ 11 ] ; xx [ 1481 ] = - xx [ 1476 ] ; xx [ 1482 ] = xx
[ 1477 ] ; xx [ 1483 ] = xx [ 1445 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1481 , xx + 1484 ) ; xx [ 1012 ] = 0.09952732681281544 ; xx [ 1013 ] =
0.0228807887491343 ; xx [ 1014 ] = - 0.03207153656907608 ; xx [ 1451 ] =
0.1948508511673901 ; xx [ 1457 ] = 0.09950828214620858 ; xx [ 1463 ] = xx [
1457 ] * input [ 132 ] ; xx [ 1469 ] = 0.4717830530291653 ; xx [ 1475 ] =
0.8541381612234252 ; xx [ 1481 ] = xx [ 1475 ] * input [ 132 ] ; xx [ 1482 ]
= ( xx [ 1451 ] * xx [ 1463 ] + xx [ 1469 ] * xx [ 1481 ] ) * xx [ 11 ] ; xx
[ 1483 ] = xx [ 11 ] * ( xx [ 1469 ] * xx [ 1463 ] - xx [ 1451 ] * xx [ 1481
] ) ; xx [ 1451 ] = input [ 132 ] - ( xx [ 1475 ] * xx [ 1481 ] + xx [ 1457 ]
* xx [ 1463 ] ) * xx [ 11 ] ; xx [ 1487 ] = - xx [ 1482 ] ; xx [ 1488 ] = xx
[ 1483 ] ; xx [ 1489 ] = xx [ 1451 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1487 , xx + 1490 ) ; xx [ 1012 ] = 0.08709499034352691 ; xx [ 1013 ] =
0.05213038288345741 ; xx [ 1014 ] = - 0.04069718640773098 ; xx [ 1457 ] =
0.434652088674542 ; xx [ 1463 ] = 0.2317404840391152 ; xx [ 1469 ] = xx [
1463 ] * input [ 133 ] ; xx [ 1475 ] = 0.4220207955158514 ; xx [ 1481 ] =
0.761099440296958 ; xx [ 1487 ] = xx [ 1481 ] * input [ 133 ] ; xx [ 1488 ] =
( xx [ 1457 ] * xx [ 1469 ] + xx [ 1475 ] * xx [ 1487 ] ) * xx [ 11 ] ; xx [
1489 ] = xx [ 11 ] * ( xx [ 1475 ] * xx [ 1469 ] - xx [ 1457 ] * xx [ 1487 ]
) ; xx [ 1457 ] = input [ 133 ] - ( xx [ 1481 ] * xx [ 1487 ] + xx [ 1463 ] *
xx [ 1469 ] ) * xx [ 11 ] ; xx [ 1493 ] = - xx [ 1488 ] ; xx [ 1494 ] = xx [
1489 ] ; xx [ 1495 ] = xx [ 1457 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1493 , xx + 1496 ) ; xx [ 1012 ] = - 0.01660265431542934 ; xx [ 1013 ] =
0.0206290635966051 ; xx [ 1014 ] = 3.715046686832338e-3 ; xx [ 1463 ] =
0.0242980481220576 ; xx [ 1469 ] = 8.390142000848796e-3 ; xx [ 1475 ] = xx [
1469 ] * input [ 134 ] ; xx [ 1481 ] = 0.1154129525776666 ; xx [ 1487 ] =
0.9929849247355014 ; xx [ 1493 ] = xx [ 1487 ] * input [ 134 ] ; xx [ 1494 ]
= ( xx [ 1463 ] * xx [ 1475 ] + xx [ 1481 ] * xx [ 1493 ] ) * xx [ 11 ] ; xx
[ 1495 ] = xx [ 11 ] * ( xx [ 1481 ] * xx [ 1475 ] - xx [ 1463 ] * xx [ 1493
] ) ; xx [ 1463 ] = input [ 134 ] - ( xx [ 1487 ] * xx [ 1493 ] + xx [ 1469 ]
* xx [ 1475 ] ) * xx [ 11 ] ; xx [ 1499 ] = xx [ 1494 ] ; xx [ 1500 ] = xx [
1495 ] ; xx [ 1501 ] = xx [ 1463 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1499 , xx + 1502 ) ; xx [ 1012 ] = 0.0762484734824999 ; xx [ 1013 ] =
0.07044896380206572 ; xx [ 1014 ] = - 0.05864862028843598 ; xx [ 1469 ] =
0.6406835439358122 ; xx [ 1475 ] = 0.2443974596793096 ; xx [ 1481 ] = xx [
1475 ] * input [ 135 ] ; xx [ 1487 ] = 0.2667162377594259 ; xx [ 1493 ] =
0.677242147793244 ; xx [ 1499 ] = xx [ 1493 ] * input [ 135 ] ; xx [ 1500 ] =
( xx [ 1469 ] * xx [ 1481 ] + xx [ 1487 ] * xx [ 1499 ] ) * xx [ 11 ] ; xx [
1501 ] = xx [ 11 ] * ( xx [ 1487 ] * xx [ 1481 ] - xx [ 1469 ] * xx [ 1499 ]
) ; xx [ 1469 ] = input [ 135 ] - ( xx [ 1493 ] * xx [ 1499 ] + xx [ 1475 ] *
xx [ 1481 ] ) * xx [ 11 ] ; xx [ 1505 ] = - xx [ 1500 ] ; xx [ 1506 ] = xx [
1501 ] ; xx [ 1507 ] = xx [ 1469 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1505 , xx + 1508 ) ; xx [ 1012 ] = 0.05836722086711408 ; xx [ 1013 ] =
0.08315815171647134 ; xx [ 1014 ] = - 0.07492339371415332 ; xx [ 1475 ] =
0.6946799062739931 ; xx [ 1481 ] = 0.1979505052448488 ; xx [ 1487 ] = xx [
1481 ] * input [ 136 ] ; xx [ 1493 ] = 0.1959276800784864 ; xx [ 1499 ] =
0.6632102000659578 ; xx [ 1505 ] = xx [ 1499 ] * input [ 136 ] ; xx [ 1506 ]
= ( xx [ 1475 ] * xx [ 1487 ] + xx [ 1493 ] * xx [ 1505 ] ) * xx [ 11 ] ; xx
[ 1507 ] = xx [ 11 ] * ( xx [ 1493 ] * xx [ 1487 ] - xx [ 1475 ] * xx [ 1505
] ) ; xx [ 1475 ] = input [ 136 ] - ( xx [ 1499 ] * xx [ 1505 ] + xx [ 1481 ]
* xx [ 1487 ] ) * xx [ 11 ] ; xx [ 1511 ] = - xx [ 1506 ] ; xx [ 1512 ] = xx
[ 1507 ] ; xx [ 1513 ] = xx [ 1475 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1511 , xx + 1514 ) ; xx [ 1012 ] = 0.1130322189712437 ; xx [ 1013 ] = -
8.823405755190483e-3 ; xx [ 1014 ] = - 0.1250098946936068 ; xx [ 1481 ] =
0.6398980533771547 ; xx [ 1487 ] = 0.6296603699734298 ; xx [ 1493 ] = xx [
1487 ] * input [ 137 ] ; xx [ 1499 ] = 0.3234254103849678 ; xx [ 1505 ] =
0.2990891233167245 ; xx [ 1511 ] = xx [ 1505 ] * input [ 137 ] ; xx [ 1512 ]
= ( xx [ 1481 ] * xx [ 1493 ] + xx [ 1499 ] * xx [ 1511 ] ) * xx [ 11 ] ; xx
[ 1513 ] = xx [ 11 ] * ( xx [ 1481 ] * xx [ 1511 ] - xx [ 1499 ] * xx [ 1493
] ) ; xx [ 1481 ] = input [ 137 ] - ( xx [ 1505 ] * xx [ 1511 ] + xx [ 1487 ]
* xx [ 1493 ] ) * xx [ 11 ] ; xx [ 1517 ] = - xx [ 1512 ] ; xx [ 1518 ] = xx
[ 1513 ] ; xx [ 1519 ] = xx [ 1481 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1517 , xx + 1520 ) ; xx [ 1012 ] = 0.1141456565335867 ; xx [ 1013 ] = -
9.002435251046298e-3 ; xx [ 1014 ] = - 0.08563554301030606 ; xx [ 1487 ] =
0.4675981288283714 ; xx [ 1493 ] = 0.4917950387643119 ; xx [ 1499 ] = xx [
1493 ] * input [ 138 ] ; xx [ 1505 ] = 0.5136170817587071 ; xx [ 1511 ] =
0.5250591615129523 ; xx [ 1517 ] = xx [ 1511 ] * input [ 138 ] ; xx [ 1518 ]
= ( xx [ 1487 ] * xx [ 1499 ] + xx [ 1505 ] * xx [ 1517 ] ) * xx [ 11 ] ; xx
[ 1519 ] = xx [ 11 ] * ( xx [ 1487 ] * xx [ 1517 ] - xx [ 1505 ] * xx [ 1499
] ) ; xx [ 1487 ] = input [ 138 ] - ( xx [ 1511 ] * xx [ 1517 ] + xx [ 1493 ]
* xx [ 1499 ] ) * xx [ 11 ] ; xx [ 1523 ] = - xx [ 1518 ] ; xx [ 1524 ] = xx
[ 1519 ] ; xx [ 1525 ] = xx [ 1487 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1523 , xx + 1526 ) ; xx [ 1012 ] = 0.1077458034218663 ; xx [ 1013 ] =
0.02683966948079 ; xx [ 1014 ] = - 0.06862443744200107 ; xx [ 1493 ] =
0.5181735343841858 ; xx [ 1499 ] = 0.3932752713126598 ; xx [ 1505 ] = xx [
1499 ] * input [ 139 ] ; xx [ 1511 ] = 0.4662423632645503 ; xx [ 1517 ] =
0.599540497327113 ; xx [ 1523 ] = xx [ 1517 ] * input [ 139 ] ; xx [ 1524 ] =
( xx [ 1493 ] * xx [ 1505 ] + xx [ 1511 ] * xx [ 1523 ] ) * xx [ 11 ] ; xx [
1525 ] = xx [ 11 ] * ( xx [ 1511 ] * xx [ 1505 ] - xx [ 1493 ] * xx [ 1523 ]
) ; xx [ 1493 ] = input [ 139 ] - ( xx [ 1517 ] * xx [ 1523 ] + xx [ 1499 ] *
xx [ 1505 ] ) * xx [ 11 ] ; xx [ 1529 ] = - xx [ 1524 ] ; xx [ 1530 ] = xx [
1525 ] ; xx [ 1531 ] = xx [ 1493 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1529 , xx + 1532 ) ; xx [ 1012 ] = 0.1073354957132696 ; xx [ 1013 ] =
0.02003609432974655 ; xx [ 1014 ] = - 0.1247314157589293 ; xx [ 1499 ] =
0.6706972911750326 ; xx [ 1505 ] = 0.4477541250148736 ; xx [ 1511 ] = xx [
1505 ] * input [ 140 ] ; xx [ 1517 ] = 0.3316631155340412 ; xx [ 1523 ] =
0.4895722264762288 ; xx [ 1529 ] = xx [ 1523 ] * input [ 140 ] ; xx [ 1530 ]
= ( xx [ 1499 ] * xx [ 1511 ] + xx [ 1517 ] * xx [ 1529 ] ) * xx [ 11 ] ; xx
[ 1531 ] = xx [ 11 ] * ( xx [ 1517 ] * xx [ 1511 ] - xx [ 1499 ] * xx [ 1529
] ) ; xx [ 1499 ] = input [ 140 ] - ( xx [ 1523 ] * xx [ 1529 ] + xx [ 1505 ]
* xx [ 1511 ] ) * xx [ 11 ] ; xx [ 1535 ] = - xx [ 1530 ] ; xx [ 1536 ] = xx
[ 1531 ] ; xx [ 1537 ] = xx [ 1499 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1535 , xx + 1538 ) ; xx [ 1012 ] = 0.09938670807675551 ; xx [ 1013 ] =
0.0444436843209301 ; xx [ 1014 ] = - 0.08738591386877287 ; xx [ 1505 ] =
0.6793683944033605 ; xx [ 1511 ] = 0.3565991527695513 ; xx [ 1517 ] = xx [
1511 ] * input [ 141 ] ; xx [ 1523 ] = 0.3027178312238702 ; xx [ 1529 ] =
0.5653826523594042 ; xx [ 1535 ] = xx [ 1529 ] * input [ 141 ] ; xx [ 1536 ]
= ( xx [ 1505 ] * xx [ 1517 ] + xx [ 1523 ] * xx [ 1535 ] ) * xx [ 11 ] ; xx
[ 1537 ] = xx [ 11 ] * ( xx [ 1523 ] * xx [ 1517 ] - xx [ 1505 ] * xx [ 1535
] ) ; xx [ 1505 ] = input [ 141 ] - ( xx [ 1529 ] * xx [ 1535 ] + xx [ 1511 ]
* xx [ 1517 ] ) * xx [ 11 ] ; xx [ 1541 ] = - xx [ 1536 ] ; xx [ 1542 ] = xx
[ 1537 ] ; xx [ 1543 ] = xx [ 1505 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1541 , xx + 1544 ) ; xx [ 1012 ] = 0.08162360991290972 ; xx [ 1013 ] =
0.06041243531084342 ; xx [ 1014 ] = - 0.1174933092461929 ; xx [ 1511 ] =
0.7083565431201579 ; xx [ 1517 ] = 0.3047264570560833 ; xx [ 1523 ] = xx [
1517 ] * input [ 142 ] ; xx [ 1529 ] = 0.2563215591787598 ; xx [ 1535 ] =
0.5828139089701587 ; xx [ 1541 ] = xx [ 1535 ] * input [ 142 ] ; xx [ 1542 ]
= ( xx [ 1511 ] * xx [ 1523 ] + xx [ 1529 ] * xx [ 1541 ] ) * xx [ 11 ] ; xx
[ 1543 ] = xx [ 11 ] * ( xx [ 1529 ] * xx [ 1523 ] - xx [ 1511 ] * xx [ 1541
] ) ; xx [ 1511 ] = input [ 142 ] - ( xx [ 1535 ] * xx [ 1541 ] + xx [ 1517 ]
* xx [ 1523 ] ) * xx [ 11 ] ; xx [ 1547 ] = - xx [ 1542 ] ; xx [ 1548 ] = xx
[ 1543 ] ; xx [ 1549 ] = xx [ 1511 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1547 , xx + 1550 ) ; xx [ 1012 ] = - 0.0171442268584411 ; xx [ 1013 ] =
0.05878123656883572 ; xx [ 1014 ] = - 1.619412475548285e-3 ; xx [ 1517 ] =
0.1175219350726416 ; xx [ 1523 ] = 0.01392624262502743 ; xx [ 1529 ] = xx [
1523 ] * input [ 145 ] ; xx [ 1535 ] = 0.06365206036819079 ; xx [ 1541 ] =
0.990930406110346 ; xx [ 1547 ] = xx [ 1541 ] * input [ 145 ] ; xx [ 1548 ] =
( xx [ 1517 ] * xx [ 1529 ] + xx [ 1535 ] * xx [ 1547 ] ) * xx [ 11 ] ; xx [
1549 ] = xx [ 11 ] * ( xx [ 1535 ] * xx [ 1529 ] - xx [ 1517 ] * xx [ 1547 ]
) ; xx [ 1517 ] = input [ 145 ] - ( xx [ 1541 ] * xx [ 1547 ] + xx [ 1523 ] *
xx [ 1529 ] ) * xx [ 11 ] ; xx [ 1553 ] = xx [ 1548 ] ; xx [ 1554 ] = xx [
1549 ] ; xx [ 1555 ] = xx [ 1517 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1553 , xx + 1556 ) ; xx [ 1012 ] = - 1.174202054215593e-3 ; xx [ 1013 ]
= - 0.01034665570639538 ; xx [ 1014 ] = - 0.1064666178194215 ; xx [ 1523 ] =
0.670304392204657 ; xx [ 1529 ] = 7.308788146271698e-3 ; xx [ 1535 ] = xx [
1529 ] * input [ 148 ] ; xx [ 1541 ] = 2.148648828607749e-4 ; xx [ 1547 ] =
0.7420502390270221 ; xx [ 1553 ] = xx [ 1547 ] * input [ 148 ] ; xx [ 1554 ]
= ( xx [ 1523 ] * xx [ 1535 ] - xx [ 1541 ] * xx [ 1553 ] ) * xx [ 11 ] ; xx
[ 1555 ] = xx [ 11 ] * ( xx [ 1541 ] * xx [ 1535 ] + xx [ 1523 ] * xx [ 1553
] ) ; xx [ 1523 ] = input [ 148 ] - ( xx [ 1547 ] * xx [ 1553 ] + xx [ 1529 ]
* xx [ 1535 ] ) * xx [ 11 ] ; xx [ 1559 ] = xx [ 1554 ] ; xx [ 1560 ] = - xx
[ 1555 ] ; xx [ 1561 ] = xx [ 1523 ] ; pm_math_Vector3_cross_ra ( xx + 1012 ,
xx + 1559 , xx + 1562 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx
+ 944 , xx + 1012 ) ; pm_math_Vector3_cross_ra ( xx + 941 , xx + 1012 , xx +
1559 ) ; xx [ 941 ] = xx [ 960 ] ; xx [ 942 ] = xx [ 961 ] ; xx [ 943 ] = xx
[ 963 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 941 , xx +
1565 ) ; pm_math_Vector3_cross_ra ( xx + 956 , xx + 1565 , xx + 941 ) ; xx [
956 ] = xx [ 977 ] ; xx [ 957 ] = xx [ 978 ] ; xx [ 958 ] = xx [ 980 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 956 , xx + 1568 ) ;
pm_math_Vector3_cross_ra ( xx + 973 , xx + 1568 , xx + 956 ) ; xx [ 973 ] =
0.01519594655146509 ; xx [ 974 ] = 0.1066526728995764 ; xx [ 975 ] = -
0.03585936688742598 ; pm_math_Quaternion_compose_ra ( xx + 660 , xx + 61 , xx
+ 1571 ) ; pm_math_Quaternion_compose_ra ( xx + 1571 , xx + 88 , xx + 1575 )
; pm_math_Quaternion_compose_ra ( xx + 1575 , xx + 84 , xx + 1579 ) ;
pm_math_Quaternion_compose_ra ( xx + 1579 , xx + 113 , xx + 1583 ) ;
pm_math_Quaternion_xform_ra ( xx + 1583 , xx + 973 , xx + 1587 ) ;
pm_math_Quaternion_xform_ra ( xx + 1579 , xx + 141 , xx + 1590 ) ;
pm_math_Quaternion_xform_ra ( xx + 1575 , xx + 122 , xx + 1579 ) ;
pm_math_Quaternion_xform_ra ( xx + 1571 , xx + 92 , xx + 1575 ) ;
pm_math_Quaternion_xform_ra ( xx + 660 , xx + 472 , xx + 1571 ) ; xx [ 1529 ]
= xx [ 1590 ] + xx [ 1579 ] + xx [ 1575 ] + xx [ 1571 ] - xx [ 664 ] ; xx [
664 ] = 0.01688944435119629 ; xx [ 1535 ] = xx [ 1587 ] + xx [ 1529 ] - xx [
664 ] ; xx [ 1541 ] = xx [ 1591 ] + xx [ 1580 ] + xx [ 1576 ] + xx [ 1572 ] +
xx [ 666 ] ; xx [ 666 ] = 0.1319682159423828 ; xx [ 1547 ] = xx [ 1588 ] + xx
[ 1541 ] - xx [ 666 ] ; xx [ 1553 ] = xx [ 1592 ] + xx [ 1581 ] + xx [ 1577 ]
+ xx [ 1573 ] + xx [ 669 ] ; xx [ 669 ] = 0.8089576416015625 ; xx [ 1571 ] =
xx [ 1589 ] + xx [ 1553 ] - xx [ 669 ] ; xx [ 1572 ] = sqrt ( xx [ 1535 ] *
xx [ 1535 ] + xx [ 1547 ] * xx [ 1547 ] + xx [ 1571 ] * xx [ 1571 ] ) ; if (
xx [ 1572 ] == 0.0 ) * derivErr = 1 ; xx [ 1573 ] = input [ 164 ] / xx [ 1572
] ; xx [ 1574 ] = xx [ 1573 ] * xx [ 1535 ] ; xx [ 1575 ] = xx [ 1573 ] * xx
[ 1547 ] ; xx [ 1576 ] = xx [ 1573 ] * xx [ 1571 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1583 , xx + 1574 , xx + 1577 ) ;
pm_math_Vector3_cross_ra ( xx + 973 , xx + 1577 , xx + 1574 ) ; xx [ 973 ] =
- 0.01857933020468612 ; xx [ 974 ] = 0.1062960041055536 ; xx [ 975 ] = -
0.03551762226730922 ; pm_math_Quaternion_xform_ra ( xx + 1583 , xx + 973 , xx
+ 1580 ) ; xx [ 1587 ] = xx [ 1580 ] + xx [ 1529 ] + xx [ 664 ] ; xx [ 664 ]
= xx [ 1581 ] + xx [ 1541 ] - xx [ 666 ] ; xx [ 666 ] = xx [ 1582 ] + xx [
1553 ] - xx [ 669 ] ; xx [ 669 ] = sqrt ( xx [ 1587 ] * xx [ 1587 ] + xx [
664 ] * xx [ 664 ] + xx [ 666 ] * xx [ 666 ] ) ; if ( xx [ 669 ] == 0.0 ) *
derivErr = 1 ; xx [ 1580 ] = input [ 165 ] / xx [ 669 ] ; xx [ 1588 ] = xx [
1580 ] * xx [ 1587 ] ; xx [ 1589 ] = xx [ 1580 ] * xx [ 664 ] ; xx [ 1590 ] =
xx [ 1580 ] * xx [ 666 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1583 ,
xx + 1588 , xx + 1591 ) ; pm_math_Vector3_cross_ra ( xx + 973 , xx + 1591 ,
xx + 1588 ) ; xx [ 973 ] = 0.01045379203557594 ; xx [ 974 ] = -
0.08550357325700537 ; xx [ 975 ] = 4.618692289715317e-3 ;
pm_math_Quaternion_xform_ra ( xx + 1583 , xx + 973 , xx + 1594 ) ; xx [ 1581
] = 9.709312438964843e-3 ; xx [ 1582 ] = xx [ 1594 ] + xx [ 1529 ] - xx [
1581 ] ; xx [ 1597 ] = 2.232642650604248e-3 ; xx [ 1598 ] = xx [ 1595 ] + xx
[ 1541 ] + xx [ 1597 ] ; xx [ 1594 ] = 0.8689576416015625 ; xx [ 1595 ] = xx
[ 1596 ] + xx [ 1553 ] - xx [ 1594 ] ; xx [ 1596 ] = sqrt ( xx [ 1582 ] * xx
[ 1582 ] + xx [ 1598 ] * xx [ 1598 ] + xx [ 1595 ] * xx [ 1595 ] ) ; if ( xx
[ 1596 ] == 0.0 ) * derivErr = 1 ; xx [ 1599 ] = input [ 166 ] / xx [ 1596 ]
; xx [ 1600 ] = xx [ 1599 ] * xx [ 1582 ] ; xx [ 1601 ] = xx [ 1599 ] * xx [
1598 ] ; xx [ 1602 ] = xx [ 1599 ] * xx [ 1595 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1583 , xx + 1600 , xx + 1603 ) ;
pm_math_Vector3_cross_ra ( xx + 973 , xx + 1603 , xx + 1600 ) ; xx [ 973 ] =
- 8.962756426230073e-3 ; xx [ 974 ] = - 0.08570861308462711 ; xx [ 975 ] =
4.815152588944403e-3 ; pm_math_Quaternion_xform_ra ( xx + 1583 , xx + 973 ,
xx + 1606 ) ; xx [ 1609 ] = xx [ 1606 ] + xx [ 1529 ] + xx [ 1581 ] ; xx [
1581 ] = xx [ 1607 ] + xx [ 1541 ] + xx [ 1597 ] ; xx [ 1597 ] = xx [ 1608 ]
+ xx [ 1553 ] - xx [ 1594 ] ; xx [ 1594 ] = sqrt ( xx [ 1609 ] * xx [ 1609 ]
+ xx [ 1581 ] * xx [ 1581 ] + xx [ 1597 ] * xx [ 1597 ] ) ; if ( xx [ 1594 ]
== 0.0 ) * derivErr = 1 ; xx [ 1606 ] = input [ 167 ] / xx [ 1594 ] ; xx [
1610 ] = xx [ 1606 ] * xx [ 1609 ] ; xx [ 1611 ] = xx [ 1606 ] * xx [ 1581 ]
; xx [ 1612 ] = xx [ 1606 ] * xx [ 1597 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1583 , xx + 1610 , xx + 1613 ) ;
pm_math_Vector3_cross_ra ( xx + 973 , xx + 1613 , xx + 1610 ) ; xx [ 973 ] =
0.1049001030020798 ; xx [ 974 ] = 0.02043269096374428 ; xx [ 975 ] = -
0.1631011914932122 ; pm_math_Quaternion_xform_ra ( xx + 1583 , xx + 973 , xx
+ 1616 ) ; xx [ 1607 ] = 0.06488653564453126 ; xx [ 1608 ] = xx [ 1616 ] + xx
[ 1529 ] - xx [ 1607 ] ; xx [ 1619 ] = 0.03644176864624023 ; xx [ 1620 ] = xx
[ 1617 ] + xx [ 1541 ] - xx [ 1619 ] ; xx [ 1616 ] = 0.9499576416015625 ; xx
[ 1617 ] = xx [ 1618 ] + xx [ 1553 ] - xx [ 1616 ] ; xx [ 1618 ] = sqrt ( xx
[ 1608 ] * xx [ 1608 ] + xx [ 1620 ] * xx [ 1620 ] + xx [ 1617 ] * xx [ 1617
] ) ; if ( xx [ 1618 ] == 0.0 ) * derivErr = 1 ; xx [ 1621 ] = input [ 168 ]
/ xx [ 1618 ] ; xx [ 1622 ] = xx [ 1621 ] * xx [ 1608 ] ; xx [ 1623 ] = xx [
1621 ] * xx [ 1620 ] ; xx [ 1624 ] = xx [ 1621 ] * xx [ 1617 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1583 , xx + 1622 , xx + 1625 ) ;
pm_math_Vector3_cross_ra ( xx + 973 , xx + 1625 , xx + 1622 ) ;
pm_math_Quaternion_xform_ra ( xx + 1583 , xx + 173 , xx + 973 ) ; xx [ 1628 ]
= 0.1324676666259766 ; xx [ 1629 ] = xx [ 973 ] + xx [ 1529 ] - xx [ 1628 ] ;
xx [ 1630 ] = 0.1263068237304688 ; xx [ 1631 ] = xx [ 974 ] + xx [ 1541 ] -
xx [ 1630 ] ; xx [ 973 ] = 0.9199576416015626 ; xx [ 974 ] = xx [ 975 ] + xx
[ 1553 ] - xx [ 973 ] ; xx [ 975 ] = sqrt ( xx [ 1629 ] * xx [ 1629 ] + xx [
1631 ] * xx [ 1631 ] + xx [ 974 ] * xx [ 974 ] ) ; if ( xx [ 975 ] == 0.0 ) *
derivErr = 1 ; xx [ 1632 ] = input [ 169 ] / xx [ 975 ] ; xx [ 1633 ] = xx [
1632 ] * xx [ 1629 ] ; xx [ 1634 ] = xx [ 1632 ] * xx [ 1631 ] ; xx [ 1635 ]
= xx [ 1632 ] * xx [ 974 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1583 ,
xx + 1633 , xx + 1636 ) ; pm_math_Vector3_cross_ra ( xx + 173 , xx + 1636 ,
xx + 1633 ) ; xx [ 1639 ] = - 0.1089988975238918 ; xx [ 1640 ] =
0.01817390566611121 ; xx [ 1641 ] = - 0.1609369210652937 ;
pm_math_Quaternion_xform_ra ( xx + 1583 , xx + 1639 , xx + 1642 ) ; xx [ 1645
] = xx [ 1642 ] + xx [ 1529 ] + xx [ 1607 ] ; xx [ 1607 ] = xx [ 1643 ] + xx
[ 1541 ] - xx [ 1619 ] ; xx [ 1619 ] = xx [ 1644 ] + xx [ 1553 ] - xx [ 1616
] ; xx [ 1616 ] = sqrt ( xx [ 1645 ] * xx [ 1645 ] + xx [ 1607 ] * xx [ 1607
] + xx [ 1619 ] * xx [ 1619 ] ) ; if ( xx [ 1616 ] == 0.0 ) * derivErr = 1 ;
xx [ 1642 ] = input [ 170 ] / xx [ 1616 ] ; xx [ 1646 ] = xx [ 1642 ] * xx [
1645 ] ; xx [ 1647 ] = xx [ 1642 ] * xx [ 1607 ] ; xx [ 1648 ] = xx [ 1642 ]
* xx [ 1619 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1583 , xx + 1646 ,
xx + 1649 ) ; pm_math_Vector3_cross_ra ( xx + 1639 , xx + 1649 , xx + 1646 )
; xx [ 1639 ] = - 0.09566229085706808 ; xx [ 1640 ] = - 0.0798895592638616 ;
xx [ 1641 ] = - 0.08405862367883098 ; pm_math_Quaternion_xform_ra ( xx + 1583
, xx + 1639 , xx + 1652 ) ; xx [ 1643 ] = xx [ 1652 ] + xx [ 1529 ] + xx [
1628 ] ; xx [ 1529 ] = xx [ 1653 ] + xx [ 1541 ] - xx [ 1630 ] ; xx [ 1541 ]
= xx [ 1654 ] + xx [ 1553 ] - xx [ 973 ] ; xx [ 973 ] = sqrt ( xx [ 1643 ] *
xx [ 1643 ] + xx [ 1529 ] * xx [ 1529 ] + xx [ 1541 ] * xx [ 1541 ] ) ; if (
xx [ 973 ] == 0.0 ) * derivErr = 1 ; xx [ 1553 ] = input [ 171 ] / xx [ 973 ]
; xx [ 1652 ] = xx [ 1553 ] * xx [ 1643 ] ; xx [ 1653 ] = xx [ 1553 ] * xx [
1529 ] ; xx [ 1654 ] = xx [ 1553 ] * xx [ 1541 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1583 , xx + 1652 , xx + 1655 ) ;
pm_math_Vector3_cross_ra ( xx + 1639 , xx + 1655 , xx + 1652 ) ; xx [ 1628 ]
= xx [ 1584 ] * input [ 172 ] ; xx [ 1630 ] = xx [ 1585 ] * input [ 172 ] ;
xx [ 1639 ] = xx [ 1585 ] * input [ 173 ] ; xx [ 1640 ] = xx [ 1586 ] * input
[ 173 ] ; xx [ 1641 ] = xx [ 1586 ] * input [ 174 ] ; xx [ 1644 ] = xx [ 1584
] * input [ 174 ] ; xx [ 1658 ] = xx [ 889 ] ; xx [ 1659 ] = xx [ 890 ] ; xx
[ 1660 ] = xx [ 993 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx +
1658 , xx + 1661 ) ; pm_math_Vector3_cross_ra ( xx + 990 , xx + 1661 , xx +
1658 ) ; xx [ 1664 ] = xx [ 99 ] ; xx [ 1665 ] = xx [ 110 ] ; xx [ 1666 ] =
xx [ 135 ] ; xx [ 1667 ] = xx [ 134 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 1664 , xx + 1009 , xx + 990 ) ; xx [ 1668 ] = xx [ 112 ] ; xx [ 1669 ] =
xx [ 127 ] ; xx [ 1670 ] = - xx [ 128 ] ; pm_math_Quaternion_inverseXform_ra
( xx + 1664 , xx + 1668 , xx + 1671 ) ; xx [ 99 ] = xx [ 1671 ] * inputDot [
52 ] ; xx [ 110 ] = xx [ 108 ] * xx [ 131 ] ; xx [ 108 ] = xx [ 11 ] * xx [
110 ] * inputDot [ 53 ] ; xx [ 112 ] = xx [ 99 ] + xx [ 108 ] ; xx [ 127 ] =
xx [ 1672 ] * inputDot [ 52 ] ; xx [ 128 ] = xx [ 0 ] - xx [ 11 ] * xx [ 131
] * xx [ 131 ] ; xx [ 131 ] = xx [ 128 ] * inputDot [ 53 ] ; xx [ 134 ] = xx
[ 127 ] + xx [ 131 ] ; xx [ 135 ] = xx [ 1673 ] * inputDot [ 52 ] ; xx [ 1668
] = xx [ 135 ] + inputDot [ 54 ] ; xx [ 1674 ] = xx [ 990 ] + xx [ 112 ] ; xx
[ 1675 ] = xx [ 991 ] + xx [ 134 ] ; xx [ 1676 ] = xx [ 992 ] + xx [ 1668 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 160 , xx + 1674 , xx + 1677 ) ;
pm_math_Vector3_cross_ra ( xx + 1674 , xx + 1677 , xx + 1680 ) ; xx [ 1677 ]
= xx [ 112 ] ; xx [ 1678 ] = xx [ 134 ] ; xx [ 1679 ] = xx [ 1668 ] ;
pm_math_Vector3_cross_ra ( xx + 990 , xx + 1677 , xx + 1668 ) ; xx [ 990 ] =
xx [ 99 ] ; xx [ 991 ] = xx [ 127 ] ; xx [ 992 ] = xx [ 135 ] ;
pm_math_Vector3_cross_ra ( xx + 1677 , xx + 990 , xx + 1683 ) ; xx [ 99 ] =
xx [ 1668 ] + xx [ 131 ] * inputDot [ 54 ] - xx [ 1683 ] + xx [ 1671 ] *
inputDdot [ 52 ] + xx [ 11 ] * xx [ 110 ] * inputDdot [ 53 ] ; xx [ 110 ] =
xx [ 1669 ] - ( xx [ 1684 ] + xx [ 108 ] * inputDot [ 54 ] ) + xx [ 1672 ] *
inputDdot [ 52 ] + xx [ 128 ] * inputDdot [ 53 ] ; xx [ 108 ] = xx [ 1670 ] -
xx [ 1685 ] + xx [ 1673 ] * inputDdot [ 52 ] + inputDdot [ 54 ] ; xx [ 990 ]
= xx [ 99 ] ; xx [ 991 ] = xx [ 110 ] ; xx [ 992 ] = xx [ 108 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 160 , xx + 990 , xx + 1668 ) ;
pm_math_Vector3_cross_ra ( xx + 1009 , xx + 173 , xx + 160 ) ;
pm_math_Vector3_cross_ra ( xx + 1009 , xx + 160 , xx + 163 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 1664 , xx + 163 , xx + 160 ) ; xx [
163 ] = xx [ 1680 ] + xx [ 1668 ] + xx [ 162 ] * xx [ 156 ] - xx [ 161 ] * xx
[ 169 ] ; xx [ 164 ] = xx [ 1681 ] + xx [ 1669 ] + xx [ 160 ] * xx [ 169 ] -
xx [ 162 ] * xx [ 171 ] ; xx [ 165 ] = xx [ 1682 ] + xx [ 1670 ] + xx [ 161 ]
* xx [ 171 ] - xx [ 160 ] * xx [ 156 ] ; pm_math_Quaternion_xform_ra ( xx +
1664 , xx + 163 , xx + 166 ) ; xx [ 163 ] = xx [ 170 ] ; xx [ 164 ] = xx [
155 ] ; xx [ 165 ] = xx [ 159 ] ; pm_math_Vector3_cross_ra ( xx + 1674 , xx +
163 , xx + 990 ) ; pm_math_Vector3_cross_ra ( xx + 1674 , xx + 990 , xx + 163
) ; xx [ 990 ] = xx [ 163 ] * xx [ 172 ] + xx [ 110 ] * xx [ 169 ] - xx [ 108
] * xx [ 156 ] + xx [ 160 ] * xx [ 172 ] ; xx [ 991 ] = xx [ 172 ] * xx [ 164
] + xx [ 108 ] * xx [ 171 ] - xx [ 99 ] * xx [ 169 ] + xx [ 172 ] * xx [ 161
] ; xx [ 992 ] = xx [ 172 ] * xx [ 165 ] + xx [ 99 ] * xx [ 156 ] - xx [ 110
] * xx [ 171 ] + xx [ 172 ] * xx [ 162 ] ; pm_math_Quaternion_xform_ra ( xx +
1664 , xx + 990 , xx + 163 ) ; pm_math_Vector3_cross_ra ( xx + 173 , xx + 163
, xx + 169 ) ; xx [ 990 ] = xx [ 106 ] ; xx [ 991 ] = xx [ 995 ] ; xx [ 992 ]
= xx [ 1005 ] ; pm_math_Vector3_cross_ra ( xx + 905 , xx + 990 , xx + 1668 )
; xx [ 1671 ] = xx [ 994 ] ; xx [ 1672 ] = xx [ 244 ] ; xx [ 1673 ] = xx [
1007 ] ; pm_math_Vector3_cross_ra ( xx + 990 , xx + 1671 , xx + 1677 ) ; xx [
1671 ] = xx [ 105 ] ; xx [ 1672 ] = - xx [ 246 ] ; xx [ 1673 ] = xx [ 1004 ]
; xx [ 1680 ] = xx [ 104 ] ; xx [ 1681 ] = xx [ 245 ] ; xx [ 1682 ] = xx [
1003 ] ; pm_math_Vector3_cross_ra ( xx + 1671 , xx + 1680 , xx + 104 ) ; xx [
112 ] = xx [ 1677 ] + xx [ 104 ] ; xx [ 127 ] = xx [ 1668 ] - xx [ 112 ] ; xx
[ 128 ] = xx [ 1678 ] + xx [ 105 ] ; xx [ 131 ] = xx [ 1669 ] - xx [ 128 ] ;
xx [ 104 ] = xx [ 1679 ] + xx [ 106 ] ; xx [ 105 ] = xx [ 1670 ] - xx [ 104 ]
; xx [ 244 ] = xx [ 127 ] ; xx [ 245 ] = xx [ 131 ] ; xx [ 246 ] = xx [ 105 ]
; pm_math_Matrix3x3_xform_ra ( xx + 191 , xx + 244 , xx + 1003 ) ; xx [ 191 ]
= xx [ 905 ] + xx [ 107 ] ; xx [ 192 ] = xx [ 906 ] + xx [ 1006 ] ; xx [ 193
] = xx [ 907 ] + xx [ 1008 ] ; pm_math_Vector3_cross_ra ( xx + 207 , xx + 990
, xx + 194 ) ; pm_math_Vector3_cross_ra ( xx + 191 , xx + 194 , xx + 197 ) ;
pm_math_Vector3_cross_ra ( xx + 924 , xx + 141 , xx + 191 ) ;
pm_math_Vector3_cross_ra ( xx + 924 , xx + 191 , xx + 194 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 194 , xx + 191 ) ; xx [
194 ] = - xx [ 112 ] ; xx [ 195 ] = - xx [ 128 ] ; xx [ 196 ] = - xx [ 104 ]
; pm_math_Vector3_cross_ra ( xx + 207 , xx + 194 , xx + 905 ) ; xx [ 104 ] =
xx [ 197 ] + xx [ 191 ] + xx [ 905 ] ; xx [ 106 ] = xx [ 198 ] + xx [ 192 ] +
xx [ 906 ] ; xx [ 107 ] = xx [ 199 ] + xx [ 193 ] + xx [ 907 ] ; xx [ 191 ] =
xx [ 104 ] ; xx [ 192 ] = xx [ 106 ] ; xx [ 193 ] = xx [ 107 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 180 , xx + 191 , xx + 194 ) ; xx [ 112 ] =
xx [ 1015 ] - xx [ 1025 ] - xx [ 1031 ] - xx [ 1037 ] - xx [ 1046 ] - xx [
1052 ] - xx [ 1058 ] - xx [ 1064 ] - xx [ 1070 ] - xx [ 1076 ] - xx [ 1082 ]
- xx [ 1088 ] - xx [ 1094 ] - xx [ 1100 ] - xx [ 1106 ] - xx [ 1112 ] - xx [
1118 ] - xx [ 1124 ] - xx [ 1130 ] - xx [ 1136 ] - xx [ 1142 ] - xx [ 1148 ]
- xx [ 1154 ] - xx [ 1160 ] - xx [ 1166 ] - xx [ 1172 ] - xx [ 1178 ] - xx [
1184 ] - xx [ 1190 ] - xx [ 1196 ] - xx [ 1202 ] - xx [ 1208 ] - xx [ 1214 ]
- xx [ 1220 ] - xx [ 1226 ] - xx [ 1232 ] - xx [ 1238 ] - xx [ 1244 ] - xx [
1250 ] - xx [ 1256 ] - xx [ 1262 ] - xx [ 1268 ] - xx [ 1274 ] - xx [ 1280 ]
- xx [ 1286 ] - xx [ 1292 ] - xx [ 1298 ] - xx [ 1304 ] - xx [ 1310 ] - xx [
1316 ] - xx [ 1322 ] - xx [ 1328 ] - xx [ 1334 ] - xx [ 1340 ] - xx [ 1346 ]
- xx [ 1352 ] - xx [ 1358 ] - xx [ 1364 ] - xx [ 1370 ] - xx [ 1376 ] - xx [
1382 ] - xx [ 1388 ] - xx [ 1394 ] - xx [ 1400 ] - xx [ 1406 ] - xx [ 1412 ]
- xx [ 1418 ] - xx [ 1424 ] - xx [ 1430 ] - xx [ 1436 ] - xx [ 1442 ] - xx [
1448 ] - xx [ 1454 ] - xx [ 1460 ] - xx [ 1466 ] - xx [ 1472 ] - xx [ 1478 ]
- xx [ 1484 ] - xx [ 1490 ] - xx [ 1496 ] - xx [ 1502 ] - xx [ 1508 ] - xx [
1514 ] - xx [ 1520 ] - xx [ 1526 ] - xx [ 1532 ] - xx [ 1538 ] - xx [ 1544 ]
- xx [ 1550 ] - xx [ 1556 ] - xx [ 1562 ] - xx [ 1559 ] - xx [ 941 ] - xx [
956 ] - xx [ 1574 ] - xx [ 1588 ] - xx [ 1600 ] - xx [ 1610 ] - xx [ 1622 ] -
xx [ 1633 ] - xx [ 1646 ] - xx [ 1652 ] - xx [ 11 ] * ( xx [ 1586 ] * xx [
1628 ] - xx [ 1583 ] * xx [ 1630 ] ) - ( input [ 173 ] - ( xx [ 1585 ] * xx [
1639 ] + xx [ 1586 ] * xx [ 1640 ] ) * xx [ 11 ] ) - ( xx [ 1583 ] * xx [
1641 ] + xx [ 1585 ] * xx [ 1644 ] ) * xx [ 11 ] - xx [ 1658 ] + xx [ 166 ] +
xx [ 169 ] + xx [ 1003 ] + xx [ 194 ] ; xx [ 128 ] = state [ 24 ] + xx [ 42 ]
; if ( xx [ 152 ] < xx [ 128 ] ) xx [ 128 ] = xx [ 152 ] ; xx [ 134 ] = - (
xx [ 128 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 134 ] ) xx [ 134 ] = xx [ 0 ]
; xx [ 135 ] = xx [ 66 ] * state [ 27 ] ; xx [ 155 ] = xx [ 134 ] * xx [ 134
] * ( xx [ 55 ] - xx [ 11 ] * xx [ 134 ] ) * ( ( - xx [ 128 ] == xx [ 152 ] ?
xx [ 152 ] : - xx [ 135 ] ) - xx [ 103 ] * xx [ 128 ] ) ; if ( xx [ 152 ] >
xx [ 155 ] ) xx [ 155 ] = xx [ 152 ] ; xx [ 128 ] = state [ 24 ] - xx [ 42 ]
; if ( xx [ 152 ] > xx [ 128 ] ) xx [ 128 ] = xx [ 152 ] ; xx [ 134 ] = xx [
128 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 134 ] ) xx [ 134 ] = xx [ 0 ] ; xx [
156 ] = ( xx [ 103 ] * xx [ 128 ] + ( xx [ 128 ] == xx [ 152 ] ? xx [ 152 ] :
xx [ 135 ] ) ) * xx [ 134 ] * xx [ 134 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 134
] ) ; if ( xx [ 152 ] > xx [ 156 ] ) xx [ 156 ] = xx [ 152 ] ; xx [ 128 ] =
xx [ 1016 ] - xx [ 1026 ] - xx [ 1032 ] - xx [ 1038 ] - xx [ 1047 ] - xx [
1053 ] - xx [ 1059 ] - xx [ 1065 ] - xx [ 1071 ] - xx [ 1077 ] - xx [ 1083 ]
- xx [ 1089 ] - xx [ 1095 ] - xx [ 1101 ] - xx [ 1107 ] - xx [ 1113 ] - xx [
1119 ] - xx [ 1125 ] - xx [ 1131 ] - xx [ 1137 ] - xx [ 1143 ] - xx [ 1149 ]
- xx [ 1155 ] - xx [ 1161 ] - xx [ 1167 ] - xx [ 1173 ] - xx [ 1179 ] - xx [
1185 ] - xx [ 1191 ] - xx [ 1197 ] - xx [ 1203 ] - xx [ 1209 ] - xx [ 1215 ]
- xx [ 1221 ] - xx [ 1227 ] - xx [ 1233 ] - xx [ 1239 ] - xx [ 1245 ] - xx [
1251 ] - xx [ 1257 ] - xx [ 1263 ] - xx [ 1269 ] - xx [ 1275 ] - xx [ 1281 ]
- xx [ 1287 ] - xx [ 1293 ] - xx [ 1299 ] - xx [ 1305 ] - xx [ 1311 ] - xx [
1317 ] - xx [ 1323 ] - xx [ 1329 ] - xx [ 1335 ] - xx [ 1341 ] - xx [ 1347 ]
- xx [ 1353 ] - xx [ 1359 ] - xx [ 1365 ] - xx [ 1371 ] - xx [ 1377 ] - xx [
1383 ] - xx [ 1389 ] - xx [ 1395 ] - xx [ 1401 ] - xx [ 1407 ] - xx [ 1413 ]
- xx [ 1419 ] - xx [ 1425 ] - xx [ 1431 ] - xx [ 1437 ] - xx [ 1443 ] - xx [
1449 ] - xx [ 1455 ] - xx [ 1461 ] - xx [ 1467 ] - xx [ 1473 ] - xx [ 1479 ]
- xx [ 1485 ] - xx [ 1491 ] - xx [ 1497 ] - xx [ 1503 ] - xx [ 1509 ] - xx [
1515 ] - xx [ 1521 ] - xx [ 1527 ] - xx [ 1533 ] - xx [ 1539 ] - xx [ 1545 ]
- xx [ 1551 ] - xx [ 1557 ] - xx [ 1563 ] - xx [ 1560 ] - xx [ 942 ] - xx [
957 ] - xx [ 1575 ] - xx [ 1589 ] - xx [ 1601 ] - xx [ 1611 ] - xx [ 1623 ] -
xx [ 1634 ] - xx [ 1647 ] - xx [ 1653 ] - ( xx [ 1583 ] * xx [ 1628 ] + xx [
1586 ] * xx [ 1630 ] ) * xx [ 11 ] - xx [ 11 ] * ( xx [ 1584 ] * xx [ 1639 ]
- xx [ 1583 ] * xx [ 1640 ] ) - ( input [ 174 ] - ( xx [ 1586 ] * xx [ 1641 ]
+ xx [ 1584 ] * xx [ 1644 ] ) * xx [ 11 ] ) - xx [ 1659 ] + xx [ 167 ] + xx [
170 ] + xx [ 1004 ] + xx [ 195 ] ; xx [ 134 ] = xx [ 1017 ] - xx [ 1027 ] -
xx [ 1033 ] - xx [ 1039 ] - xx [ 1048 ] - xx [ 1054 ] - xx [ 1060 ] - xx [
1066 ] - xx [ 1072 ] - xx [ 1078 ] - xx [ 1084 ] - xx [ 1090 ] - xx [ 1096 ]
- xx [ 1102 ] - xx [ 1108 ] - xx [ 1114 ] - xx [ 1120 ] - xx [ 1126 ] - xx [
1132 ] - xx [ 1138 ] - xx [ 1144 ] - xx [ 1150 ] - xx [ 1156 ] - xx [ 1162 ]
- xx [ 1168 ] - xx [ 1174 ] - xx [ 1180 ] - xx [ 1186 ] - xx [ 1192 ] - xx [
1198 ] - xx [ 1204 ] - xx [ 1210 ] - xx [ 1216 ] - xx [ 1222 ] - xx [ 1228 ]
- xx [ 1234 ] - xx [ 1240 ] - xx [ 1246 ] - xx [ 1252 ] - xx [ 1258 ] - xx [
1264 ] - xx [ 1270 ] - xx [ 1276 ] - xx [ 1282 ] - xx [ 1288 ] - xx [ 1294 ]
- xx [ 1300 ] - xx [ 1306 ] - xx [ 1312 ] - xx [ 1318 ] - xx [ 1324 ] - xx [
1330 ] - xx [ 1336 ] - xx [ 1342 ] - xx [ 1348 ] - xx [ 1354 ] - xx [ 1360 ]
- xx [ 1366 ] - xx [ 1372 ] - xx [ 1378 ] - xx [ 1384 ] - xx [ 1390 ] - xx [
1396 ] - xx [ 1402 ] - xx [ 1408 ] - xx [ 1414 ] - xx [ 1420 ] - xx [ 1426 ]
- xx [ 1432 ] - xx [ 1438 ] - xx [ 1444 ] - xx [ 1450 ] - xx [ 1456 ] - xx [
1462 ] - xx [ 1468 ] - xx [ 1474 ] - xx [ 1480 ] - xx [ 1486 ] - xx [ 1492 ]
- xx [ 1498 ] - xx [ 1504 ] - xx [ 1510 ] - xx [ 1516 ] - xx [ 1522 ] - xx [
1528 ] - xx [ 1534 ] - xx [ 1540 ] - xx [ 1546 ] - xx [ 1552 ] - xx [ 1558 ]
- xx [ 1564 ] - xx [ 1561 ] - xx [ 943 ] - xx [ 958 ] - xx [ 1576 ] - xx [
1590 ] - xx [ 1602 ] - xx [ 1612 ] - xx [ 1624 ] - xx [ 1635 ] - xx [ 1648 ]
- xx [ 1654 ] - ( input [ 172 ] - ( xx [ 1584 ] * xx [ 1628 ] + xx [ 1585 ] *
xx [ 1630 ] ) * xx [ 11 ] ) - ( xx [ 1583 ] * xx [ 1639 ] + xx [ 1584 ] * xx
[ 1640 ] ) * xx [ 11 ] - xx [ 11 ] * ( xx [ 1585 ] * xx [ 1641 ] - xx [ 1583
] * xx [ 1644 ] ) - xx [ 1660 ] + xx [ 168 ] + xx [ 171 ] + xx [ 1005 ] + xx
[ 196 ] ; xx [ 166 ] = xx [ 112 ] ; xx [ 167 ] = xx [ 128 ] ; xx [ 168 ] = xx
[ 134 ] ; xx [ 135 ] = xx [ 1041 ] - ( xx [ 1019 ] + xx [ 1029 ] + xx [ 1035
] ) + xx [ 1044 ] + xx [ 1050 ] - xx [ 1056 ] + xx [ 1062 ] + xx [ 1068 ] +
xx [ 1074 ] + xx [ 1080 ] + xx [ 1086 ] + xx [ 1092 ] - xx [ 1098 ] + xx [
1104 ] + xx [ 1110 ] + xx [ 1116 ] + xx [ 1122 ] + xx [ 1128 ] + xx [ 1134 ]
+ xx [ 1140 ] + xx [ 1146 ] + xx [ 1152 ] + xx [ 1158 ] - xx [ 1164 ] + xx [
1170 ] + xx [ 1176 ] + xx [ 1182 ] + xx [ 1188 ] + xx [ 1194 ] + xx [ 1200 ]
+ xx [ 1206 ] + xx [ 1212 ] + xx [ 1218 ] + xx [ 1224 ] + xx [ 1230 ] + xx [
1236 ] + xx [ 1242 ] + xx [ 1248 ] + xx [ 1254 ] + xx [ 1260 ] + xx [ 1266 ]
+ xx [ 1272 ] + xx [ 1278 ] + xx [ 1284 ] - xx [ 1290 ] - xx [ 1296 ] + xx [
1302 ] + xx [ 1308 ] - xx [ 1314 ] + xx [ 1320 ] - xx [ 1326 ] - xx [ 1332 ]
- xx [ 1338 ] - xx [ 1344 ] + xx [ 1350 ] - xx [ 1356 ] - xx [ 1362 ] + xx [
1368 ] - xx [ 1374 ] - xx [ 1380 ] - xx [ 1386 ] - xx [ 1392 ] - xx [ 1398 ]
+ xx [ 1404 ] - xx [ 1410 ] - xx [ 1416 ] - xx [ 1422 ] + xx [ 1428 ] - xx [
1434 ] - xx [ 1440 ] - xx [ 1446 ] - xx [ 1452 ] - xx [ 1458 ] - xx [ 1464 ]
- xx [ 1470 ] - xx [ 1476 ] - xx [ 1482 ] - xx [ 1488 ] + xx [ 1494 ] - xx [
1500 ] - xx [ 1506 ] - xx [ 1512 ] - xx [ 1518 ] - xx [ 1524 ] - xx [ 1530 ]
- xx [ 1536 ] - xx [ 1542 ] + xx [ 1548 ] + xx [ 1554 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 180 , xx + 244 , xx + 169 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 227 , xx + 191 , xx + 180 ) ; xx [ 159 ] =
xx [ 163 ] - ( xx [ 135 ] + xx [ 1012 ] + xx [ 1565 ] + xx [ 1568 ] + xx [
1577 ] + xx [ 1591 ] + xx [ 1603 ] + xx [ 1613 ] + xx [ 1625 ] + xx [ 1636 ]
+ xx [ 1649 ] + xx [ 1655 ] + xx [ 1661 ] ) + xx [ 169 ] + xx [ 180 ] ; xx [
163 ] = xx [ 1020 ] + xx [ 1030 ] + xx [ 1036 ] + xx [ 1042 ] + xx [ 1045 ] +
xx [ 1051 ] + xx [ 1057 ] + xx [ 1063 ] + xx [ 1069 ] + xx [ 1075 ] + xx [
1081 ] + xx [ 1087 ] + xx [ 1093 ] + xx [ 1099 ] + xx [ 1105 ] + xx [ 1111 ]
+ xx [ 1117 ] + xx [ 1123 ] + xx [ 1129 ] + xx [ 1135 ] + xx [ 1141 ] + xx [
1147 ] + xx [ 1153 ] + xx [ 1159 ] + xx [ 1165 ] + xx [ 1171 ] + xx [ 1177 ]
+ xx [ 1183 ] + xx [ 1189 ] + xx [ 1195 ] + xx [ 1201 ] + xx [ 1207 ] + xx [
1213 ] + xx [ 1219 ] + xx [ 1225 ] + xx [ 1231 ] + xx [ 1237 ] + xx [ 1243 ]
+ xx [ 1249 ] - xx [ 1255 ] - xx [ 1261 ] + xx [ 1267 ] + xx [ 1273 ] + xx [
1279 ] + xx [ 1285 ] + xx [ 1291 ] + xx [ 1297 ] + xx [ 1303 ] + xx [ 1309 ]
+ xx [ 1315 ] - xx [ 1321 ] + xx [ 1327 ] + xx [ 1333 ] + xx [ 1339 ] + xx [
1345 ] + xx [ 1351 ] + xx [ 1357 ] + xx [ 1363 ] - xx [ 1369 ] + xx [ 1375 ]
+ xx [ 1381 ] + xx [ 1387 ] + xx [ 1393 ] + xx [ 1399 ] - xx [ 1405 ] + xx [
1411 ] + xx [ 1417 ] + xx [ 1423 ] + xx [ 1429 ] + xx [ 1435 ] + xx [ 1441 ]
+ xx [ 1447 ] + xx [ 1453 ] + xx [ 1459 ] + xx [ 1465 ] + xx [ 1471 ] + xx [
1477 ] + xx [ 1483 ] + xx [ 1489 ] + xx [ 1495 ] + xx [ 1501 ] + xx [ 1507 ]
+ xx [ 1513 ] + xx [ 1519 ] + xx [ 1525 ] + xx [ 1531 ] + xx [ 1537 ] + xx [
1543 ] + xx [ 1549 ] - xx [ 1555 ] ; xx [ 172 ] = xx [ 164 ] - ( xx [ 163 ] +
xx [ 1013 ] + xx [ 1566 ] + xx [ 1569 ] + xx [ 1578 ] + xx [ 1592 ] + xx [
1604 ] + xx [ 1614 ] + xx [ 1626 ] + xx [ 1637 ] + xx [ 1650 ] + xx [ 1656 ]
+ xx [ 1662 ] ) + xx [ 170 ] + xx [ 181 ] ; xx [ 164 ] = xx [ 1021 ] + xx [
138 ] + xx [ 1018 ] + xx [ 1022 ] + xx [ 1023 ] + xx [ 1024 ] + xx [ 1028 ] +
xx [ 1034 ] + xx [ 1040 ] + xx [ 1043 ] + xx [ 1049 ] + xx [ 1055 ] + xx [
1061 ] + xx [ 1067 ] + xx [ 1073 ] + xx [ 1079 ] + xx [ 1085 ] + xx [ 1091 ]
+ xx [ 1097 ] + xx [ 1103 ] + xx [ 1109 ] + xx [ 1115 ] + xx [ 1121 ] + xx [
1127 ] + xx [ 1133 ] + xx [ 1139 ] + xx [ 1145 ] + xx [ 1151 ] + xx [ 1157 ]
+ xx [ 1163 ] + xx [ 1169 ] + xx [ 1175 ] + xx [ 1181 ] + xx [ 1187 ] + xx [
1193 ] + xx [ 1199 ] + xx [ 1205 ] + xx [ 1211 ] + xx [ 1217 ] + xx [ 1223 ]
+ xx [ 1229 ] + xx [ 1235 ] + xx [ 1241 ] + xx [ 1247 ] + xx [ 1253 ] + xx [
1259 ] + xx [ 1265 ] + xx [ 1271 ] + xx [ 1277 ] + xx [ 1283 ] + xx [ 1289 ]
+ xx [ 1295 ] + xx [ 1301 ] + xx [ 1307 ] + xx [ 1313 ] + xx [ 1319 ] + xx [
1325 ] + xx [ 1331 ] + xx [ 1337 ] + xx [ 1343 ] + xx [ 1349 ] + xx [ 1355 ]
+ xx [ 1361 ] + xx [ 1367 ] + xx [ 1373 ] + xx [ 1379 ] + xx [ 1385 ] + xx [
1391 ] + xx [ 1397 ] + xx [ 1403 ] + xx [ 1409 ] + xx [ 1415 ] + xx [ 1421 ]
+ xx [ 1427 ] + xx [ 1433 ] + xx [ 1439 ] + xx [ 1445 ] + xx [ 1451 ] + xx [
1457 ] + xx [ 1463 ] + xx [ 1469 ] + xx [ 1475 ] + xx [ 1481 ] + xx [ 1487 ]
+ xx [ 1493 ] + xx [ 1499 ] + xx [ 1505 ] + xx [ 1511 ] + xx [ 1517 ] + xx [
1523 ] ; xx [ 138 ] = xx [ 165 ] - ( xx [ 164 ] + xx [ 1014 ] + xx [ 1567 ] +
xx [ 1570 ] + xx [ 1579 ] + xx [ 1593 ] + xx [ 1605 ] + xx [ 1615 ] + xx [
1627 ] + xx [ 1638 ] + xx [ 1651 ] + xx [ 1657 ] + xx [ 1663 ] ) + xx [ 171 ]
+ xx [ 182 ] ; xx [ 169 ] = xx [ 159 ] ; xx [ 170 ] = xx [ 172 ] ; xx [ 171 ]
= xx [ 138 ] ; xx [ 165 ] = state [ 25 ] + xx [ 42 ] ; if ( xx [ 152 ] < xx [
165 ] ) xx [ 165 ] = xx [ 152 ] ; xx [ 180 ] = - ( xx [ 165 ] / xx [ 45 ] ) ;
if ( xx [ 0 ] < xx [ 180 ] ) xx [ 180 ] = xx [ 0 ] ; xx [ 181 ] = xx [ 66 ] *
state [ 28 ] ; xx [ 182 ] = xx [ 180 ] * xx [ 180 ] * ( xx [ 55 ] - xx [ 11 ]
* xx [ 180 ] ) * ( ( - xx [ 165 ] == xx [ 152 ] ? xx [ 152 ] : - xx [ 181 ] )
- xx [ 103 ] * xx [ 165 ] ) ; if ( xx [ 152 ] > xx [ 182 ] ) xx [ 182 ] = xx
[ 152 ] ; xx [ 165 ] = state [ 25 ] - xx [ 42 ] ; if ( xx [ 152 ] > xx [ 165
] ) xx [ 165 ] = xx [ 152 ] ; xx [ 180 ] = xx [ 165 ] / xx [ 45 ] ; if ( xx [
0 ] < xx [ 180 ] ) xx [ 180 ] = xx [ 0 ] ; xx [ 183 ] = ( xx [ 103 ] * xx [
165 ] + ( xx [ 165 ] == xx [ 152 ] ? xx [ 152 ] : xx [ 181 ] ) ) * xx [ 180 ]
* xx [ 180 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 180 ] ) ; if ( xx [ 152 ] > xx
[ 183 ] ) xx [ 183 ] = xx [ 152 ] ; xx [ 165 ] = state [ 26 ] + xx [ 42 ] ;
if ( xx [ 152 ] < xx [ 165 ] ) xx [ 165 ] = xx [ 152 ] ; xx [ 180 ] = - ( xx
[ 165 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 180 ] ) xx [ 180 ] = xx [ 0 ] ;
xx [ 181 ] = xx [ 66 ] * state [ 29 ] ; xx [ 184 ] = xx [ 180 ] * xx [ 180 ]
* ( xx [ 55 ] - xx [ 11 ] * xx [ 180 ] ) * ( ( - xx [ 165 ] == xx [ 152 ] ?
xx [ 152 ] : - xx [ 181 ] ) - xx [ 103 ] * xx [ 165 ] ) ; if ( xx [ 152 ] >
xx [ 184 ] ) xx [ 184 ] = xx [ 152 ] ; xx [ 165 ] = state [ 26 ] - xx [ 42 ]
; if ( xx [ 152 ] > xx [ 165 ] ) xx [ 165 ] = xx [ 152 ] ; xx [ 180 ] = xx [
165 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 180 ] ) xx [ 180 ] = xx [ 0 ] ; xx [
185 ] = ( xx [ 103 ] * xx [ 165 ] + ( xx [ 165 ] == xx [ 152 ] ? xx [ 152 ] :
xx [ 181 ] ) ) * xx [ 180 ] * xx [ 180 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 180
] ) ; if ( xx [ 152 ] > xx [ 185 ] ) xx [ 185 ] = xx [ 152 ] ; xx [ 186 ] =
input [ 10 ] - xx [ 40 ] * state [ 27 ] + xx [ 155 ] - xx [ 156 ] - (
pm_math_Vector3_dot_ra ( xx + 201 , xx + 166 ) + pm_math_Vector3_dot_ra ( xx
+ 210 , xx + 169 ) ) ; xx [ 187 ] = input [ 11 ] - xx [ 40 ] * state [ 28 ] +
xx [ 182 ] - xx [ 183 ] - ( pm_math_Vector3_dot_ra ( xx + 247 , xx + 166 ) +
pm_math_Vector3_dot_ra ( xx + 250 , xx + 169 ) ) ; xx [ 188 ] = input [ 12 ]
- xx [ 40 ] * state [ 29 ] + xx [ 184 ] - xx [ 185 ] - (
pm_math_Vector3_dot_ra ( xx + 256 , xx + 166 ) + pm_math_Vector3_dot_ra ( xx
+ 262 , xx + 169 ) ) ; solveSymmetricPosDef ( xx + 276 , xx + 186 , 3 , 1 ,
xx + 165 , xx + 168 ) ; xx [ 168 ] = xx [ 112 ] + xx [ 149 ] * xx [ 165 ] +
xx [ 71 ] * xx [ 166 ] + xx [ 268 ] * xx [ 167 ] ; xx [ 169 ] = xx [ 128 ] +
xx [ 189 ] * xx [ 165 ] + xx [ 78 ] * xx [ 166 ] + xx [ 269 ] * xx [ 167 ] ;
xx [ 170 ] = xx [ 134 ] + xx [ 190 ] * xx [ 165 ] + xx [ 82 ] * xx [ 166 ] +
xx [ 259 ] * xx [ 167 ] ; pm_math_Quaternion_xform_ra ( xx + 113 , xx + 168 ,
xx + 180 ) ; xx [ 168 ] = xx [ 159 ] + xx [ 217 ] * xx [ 165 ] + xx [ 83 ] *
xx [ 166 ] + xx [ 260 ] * xx [ 167 ] ; xx [ 169 ] = xx [ 172 ] + xx [ 239 ] *
xx [ 165 ] + xx [ 97 ] * xx [ 166 ] + xx [ 261 ] * xx [ 167 ] ; xx [ 170 ] =
xx [ 138 ] + xx [ 213 ] * xx [ 165 ] + xx [ 101 ] * xx [ 166 ] + xx [ 270 ] *
xx [ 167 ] ; pm_math_Quaternion_xform_ra ( xx + 113 , xx + 168 , xx + 183 ) ;
pm_math_Vector3_cross_ra ( xx + 141 , xx + 183 , xx + 168 ) ; xx [ 186 ] = xx
[ 76 ] ; xx [ 187 ] = xx [ 910 ] ; xx [ 188 ] = xx [ 920 ] ;
pm_math_Vector3_cross_ra ( xx + 821 , xx + 186 , xx + 189 ) ; xx [ 192 ] = xx
[ 909 ] ; xx [ 193 ] = xx [ 339 ] ; xx [ 194 ] = xx [ 922 ] ;
pm_math_Vector3_cross_ra ( xx + 186 , xx + 192 , xx + 195 ) ; xx [ 192 ] = xx
[ 75 ] ; xx [ 193 ] = xx [ 341 ] ; xx [ 194 ] = xx [ 919 ] ; xx [ 201 ] = xx
[ 74 ] ; xx [ 202 ] = xx [ 340 ] ; xx [ 203 ] = xx [ 918 ] ;
pm_math_Vector3_cross_ra ( xx + 192 , xx + 201 , xx + 74 ) ; xx [ 71 ] = xx [
195 ] + xx [ 74 ] ; xx [ 78 ] = xx [ 189 ] - xx [ 71 ] ; xx [ 82 ] = xx [ 196
] + xx [ 75 ] ; xx [ 83 ] = xx [ 190 ] - xx [ 82 ] ; xx [ 74 ] = xx [ 197 ] +
xx [ 76 ] ; xx [ 75 ] = xx [ 191 ] - xx [ 74 ] ; xx [ 189 ] = xx [ 78 ] ; xx
[ 190 ] = xx [ 83 ] ; xx [ 191 ] = xx [ 75 ] ; pm_math_Matrix3x3_xform_ra (
xx + 218 , xx + 189 , xx + 192 ) ; xx [ 195 ] = xx [ 821 ] + xx [ 77 ] ; xx [
196 ] = xx [ 822 ] + xx [ 921 ] ; xx [ 197 ] = xx [ 823 ] + xx [ 923 ] ;
pm_math_Vector3_cross_ra ( xx + 253 , xx + 186 , xx + 201 ) ;
pm_math_Vector3_cross_ra ( xx + 195 , xx + 201 , xx + 186 ) ;
pm_math_Vector3_cross_ra ( xx + 838 , xx + 122 , xx + 195 ) ;
pm_math_Vector3_cross_ra ( xx + 838 , xx + 195 , xx + 201 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 201 , xx + 195 ) ; xx [
201 ] = - xx [ 71 ] ; xx [ 202 ] = - xx [ 82 ] ; xx [ 203 ] = - xx [ 74 ] ;
pm_math_Vector3_cross_ra ( xx + 253 , xx + 201 , xx + 207 ) ; xx [ 71 ] = xx
[ 186 ] + xx [ 195 ] + xx [ 207 ] ; xx [ 74 ] = xx [ 187 ] + xx [ 196 ] + xx
[ 208 ] ; xx [ 76 ] = xx [ 188 ] + xx [ 197 ] + xx [ 209 ] ; xx [ 186 ] = xx
[ 71 ] ; xx [ 187 ] = xx [ 74 ] ; xx [ 188 ] = xx [ 76 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 285 , xx + 186 , xx + 195 ) ; xx [ 77 ] =
xx [ 930 ] - xx [ 938 ] - xx [ 950 ] - xx [ 933 ] - xx [ 967 ] - xx [ 953 ] -
xx [ 984 ] - xx [ 970 ] - xx [ 1000 ] - xx [ 987 ] + xx [ 180 ] + xx [ 168 ]
+ xx [ 192 ] + xx [ 195 ] ; xx [ 82 ] = state [ 18 ] + xx [ 42 ] ; if ( xx [
152 ] < xx [ 82 ] ) xx [ 82 ] = xx [ 152 ] ; xx [ 97 ] = - ( xx [ 82 ] / xx [
45 ] ) ; if ( xx [ 0 ] < xx [ 97 ] ) xx [ 97 ] = xx [ 0 ] ; xx [ 101 ] = xx [
66 ] * state [ 21 ] ; xx [ 112 ] = xx [ 97 ] * xx [ 97 ] * ( xx [ 55 ] - xx [
11 ] * xx [ 97 ] ) * ( ( - xx [ 82 ] == xx [ 152 ] ? xx [ 152 ] : - xx [ 101
] ) - xx [ 103 ] * xx [ 82 ] ) ; if ( xx [ 152 ] > xx [ 112 ] ) xx [ 112 ] =
xx [ 152 ] ; xx [ 82 ] = state [ 18 ] - xx [ 42 ] ; if ( xx [ 152 ] > xx [ 82
] ) xx [ 82 ] = xx [ 152 ] ; xx [ 97 ] = xx [ 82 ] / xx [ 45 ] ; if ( xx [ 0
] < xx [ 97 ] ) xx [ 97 ] = xx [ 0 ] ; xx [ 128 ] = ( xx [ 103 ] * xx [ 82 ]
+ ( xx [ 82 ] == xx [ 152 ] ? xx [ 152 ] : xx [ 101 ] ) ) * xx [ 97 ] * xx [
97 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 97 ] ) ; if ( xx [ 152 ] > xx [ 128 ] )
xx [ 128 ] = xx [ 152 ] ; xx [ 82 ] = xx [ 931 ] - xx [ 939 ] - xx [ 951 ] -
xx [ 934 ] - xx [ 968 ] - xx [ 954 ] - xx [ 985 ] - xx [ 971 ] - xx [ 1001 ]
- xx [ 988 ] + xx [ 181 ] + xx [ 169 ] + xx [ 193 ] + xx [ 196 ] ; xx [ 97 ]
= xx [ 932 ] - xx [ 940 ] - xx [ 952 ] - xx [ 935 ] - xx [ 969 ] - xx [ 955 ]
- xx [ 986 ] - xx [ 972 ] - xx [ 1002 ] - xx [ 989 ] + xx [ 182 ] + xx [ 170
] + xx [ 194 ] + xx [ 197 ] ; xx [ 168 ] = xx [ 77 ] ; xx [ 169 ] = xx [ 82 ]
; xx [ 170 ] = xx [ 97 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 285 ,
xx + 189 , xx + 180 ) ; pm_math_Matrix3x3_xform_ra ( xx + 321 , xx + 186 , xx
+ 189 ) ; xx [ 101 ] = xx [ 944 ] + xx [ 936 ] - xx [ 947 ] + xx [ 960 ] - xx
[ 964 ] + xx [ 977 ] - xx [ 981 ] + xx [ 889 ] - xx [ 997 ] + xx [ 183 ] + xx
[ 180 ] + xx [ 189 ] ; xx [ 134 ] = xx [ 945 ] - xx [ 937 ] - xx [ 948 ] + xx
[ 961 ] - xx [ 965 ] + xx [ 978 ] - xx [ 982 ] + xx [ 890 ] - xx [ 998 ] + xx
[ 184 ] + xx [ 181 ] + xx [ 190 ] ; xx [ 138 ] = xx [ 946 ] - xx [ 136 ] - xx
[ 949 ] + xx [ 963 ] - xx [ 966 ] + xx [ 980 ] - xx [ 983 ] + xx [ 993 ] - xx
[ 999 ] + xx [ 185 ] + xx [ 182 ] + xx [ 191 ] ; xx [ 180 ] = xx [ 101 ] ; xx
[ 181 ] = xx [ 134 ] ; xx [ 182 ] = xx [ 138 ] ; xx [ 149 ] = state [ 19 ] +
xx [ 42 ] ; if ( xx [ 152 ] < xx [ 149 ] ) xx [ 149 ] = xx [ 152 ] ; xx [ 155
] = - ( xx [ 149 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 155 ] ) xx [ 155 ] =
xx [ 0 ] ; xx [ 156 ] = xx [ 66 ] * state [ 22 ] ; xx [ 159 ] = xx [ 155 ] *
xx [ 155 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 155 ] ) * ( ( - xx [ 149 ] == xx
[ 152 ] ? xx [ 152 ] : - xx [ 156 ] ) - xx [ 103 ] * xx [ 149 ] ) ; if ( xx [
152 ] > xx [ 159 ] ) xx [ 159 ] = xx [ 152 ] ; xx [ 149 ] = state [ 19 ] - xx
[ 42 ] ; if ( xx [ 152 ] > xx [ 149 ] ) xx [ 149 ] = xx [ 152 ] ; xx [ 155 ]
= xx [ 149 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 155 ] ) xx [ 155 ] = xx [ 0 ]
; xx [ 171 ] = ( xx [ 103 ] * xx [ 149 ] + ( xx [ 149 ] == xx [ 152 ] ? xx [
152 ] : xx [ 156 ] ) ) * xx [ 155 ] * xx [ 155 ] * ( xx [ 55 ] - xx [ 11 ] *
xx [ 155 ] ) ; if ( xx [ 152 ] > xx [ 171 ] ) xx [ 171 ] = xx [ 152 ] ; xx [
149 ] = state [ 20 ] + xx [ 42 ] ; if ( xx [ 152 ] < xx [ 149 ] ) xx [ 149 ]
= xx [ 152 ] ; xx [ 155 ] = - ( xx [ 149 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx
[ 155 ] ) xx [ 155 ] = xx [ 0 ] ; xx [ 156 ] = xx [ 66 ] * state [ 23 ] ; xx
[ 172 ] = xx [ 155 ] * xx [ 155 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 155 ] ) *
( ( - xx [ 149 ] == xx [ 152 ] ? xx [ 152 ] : - xx [ 156 ] ) - xx [ 103 ] *
xx [ 149 ] ) ; if ( xx [ 152 ] > xx [ 172 ] ) xx [ 172 ] = xx [ 152 ] ; xx [
149 ] = state [ 20 ] - xx [ 42 ] ; if ( xx [ 152 ] > xx [ 149 ] ) xx [ 149 ]
= xx [ 152 ] ; xx [ 155 ] = xx [ 149 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 155
] ) xx [ 155 ] = xx [ 0 ] ; xx [ 183 ] = ( xx [ 103 ] * xx [ 149 ] + ( xx [
149 ] == xx [ 152 ] ? xx [ 152 ] : xx [ 156 ] ) ) * xx [ 155 ] * xx [ 155 ] *
( xx [ 55 ] - xx [ 11 ] * xx [ 155 ] ) ; if ( xx [ 152 ] > xx [ 183 ] ) xx [
183 ] = xx [ 152 ] ; xx [ 184 ] = input [ 13 ] - xx [ 40 ] * state [ 21 ] +
xx [ 112 ] - xx [ 128 ] - ( pm_math_Vector3_dot_ra ( xx + 236 , xx + 168 ) +
pm_math_Vector3_dot_ra ( xx + 265 , xx + 180 ) ) ; xx [ 185 ] = input [ 14 ]
- xx [ 40 ] * state [ 22 ] + xx [ 159 ] - xx [ 171 ] - (
pm_math_Vector3_dot_ra ( xx + 342 , xx + 168 ) + pm_math_Vector3_dot_ra ( xx
+ 300 , xx + 180 ) ) ; xx [ 186 ] = input [ 15 ] - xx [ 40 ] * state [ 23 ] +
xx [ 172 ] - xx [ 183 ] - ( pm_math_Vector3_dot_ra ( xx + 350 , xx + 168 ) +
pm_math_Vector3_dot_ra ( xx + 359 , xx + 180 ) ) ; solveSymmetricPosDef ( xx
+ 373 , xx + 184 , 3 , 1 , xx + 168 , xx + 180 ) ; xx [ 180 ] = xx [ 77 ] +
xx [ 126 ] * xx [ 168 ] + xx [ 51 ] * xx [ 169 ] + xx [ 365 ] * xx [ 170 ] ;
xx [ 181 ] = xx [ 82 ] + xx [ 205 ] * xx [ 168 ] + xx [ 54 ] * xx [ 169 ] +
xx [ 366 ] * xx [ 170 ] ; xx [ 182 ] = xx [ 97 ] + xx [ 240 ] * xx [ 168 ] +
xx [ 57 ] * xx [ 169 ] + xx [ 353 ] * xx [ 170 ] ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 180 , xx + 183 ) ; xx [ 180 ] =
xx [ 101 ] + xx [ 242 ] * xx [ 168 ] + xx [ 72 ] * xx [ 169 ] + xx [ 354 ] *
xx [ 170 ] ; xx [ 181 ] = xx [ 134 ] + xx [ 274 ] * xx [ 168 ] + xx [ 73 ] *
xx [ 169 ] + xx [ 355 ] * xx [ 170 ] ; xx [ 182 ] = xx [ 138 ] + xx [ 275 ] *
xx [ 168 ] + xx [ 345 ] * xx [ 169 ] + xx [ 367 ] * xx [ 170 ] ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 180 , xx + 186 ) ;
pm_math_Vector3_cross_ra ( xx + 122 , xx + 186 , xx + 180 ) ; xx [ 189 ] = xx
[ 29 ] ; xx [ 190 ] = xx [ 436 ] ; xx [ 191 ] = xx [ 437 ] ;
pm_math_Vector3_cross_ra ( xx + 731 , xx + 189 , xx + 192 ) ; xx [ 195 ] = xx
[ 819 ] ; xx [ 196 ] = xx [ 394 ] ; xx [ 197 ] = xx [ 826 ] ;
pm_math_Vector3_cross_ra ( xx + 189 , xx + 195 , xx + 201 ) ; xx [ 29 ] = xx
[ 201 ] + xx [ 837 ] * xx [ 37 ] - xx [ 398 ] * xx [ 26 ] ; xx [ 51 ] = xx [
192 ] - xx [ 29 ] ; xx [ 54 ] = xx [ 202 ] + xx [ 26 ] * xx [ 372 ] ; xx [ 26
] = xx [ 193 ] - xx [ 54 ] ; xx [ 57 ] = xx [ 37 ] * xx [ 372 ] - xx [ 203 ]
; xx [ 37 ] = xx [ 194 ] + xx [ 57 ] ; xx [ 192 ] = xx [ 51 ] ; xx [ 193 ] =
xx [ 26 ] ; xx [ 194 ] = xx [ 37 ] ; pm_math_Matrix3x3_xform_ra ( xx + 330 ,
xx + 192 , xx + 195 ) ; xx [ 201 ] = xx [ 731 ] + xx [ 36 ] ; xx [ 202 ] = xx
[ 732 ] + xx [ 825 ] ; xx [ 203 ] = xx [ 733 ] + xx [ 820 ] ;
pm_math_Vector3_cross_ra ( xx + 346 , xx + 189 , xx + 207 ) ;
pm_math_Vector3_cross_ra ( xx + 201 , xx + 207 , xx + 189 ) ;
pm_math_Vector3_cross_ra ( xx + 754 , xx + 92 , xx + 201 ) ;
pm_math_Vector3_cross_ra ( xx + 754 , xx + 201 , xx + 207 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 207 , xx + 201 ) ; xx [
207 ] = - xx [ 29 ] ; xx [ 208 ] = - xx [ 54 ] ; xx [ 209 ] = xx [ 57 ] ;
pm_math_Vector3_cross_ra ( xx + 346 , xx + 207 , xx + 217 ) ; xx [ 29 ] = xx
[ 189 ] + xx [ 201 ] + xx [ 217 ] ; xx [ 36 ] = xx [ 190 ] + xx [ 202 ] + xx
[ 218 ] ; xx [ 54 ] = xx [ 191 ] + xx [ 203 ] + xx [ 219 ] ; xx [ 189 ] = xx
[ 29 ] ; xx [ 190 ] = xx [ 36 ] ; xx [ 191 ] = xx [ 54 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 382 , xx + 189 , xx + 201 ) ; xx [ 57 ] =
xx [ 844 ] - xx [ 851 ] - xx [ 865 ] - xx [ 848 ] - xx [ 882 ] - xx [ 879 ] -
xx [ 899 ] - xx [ 885 ] - xx [ 915 ] - xx [ 902 ] + xx [ 183 ] + xx [ 180 ] +
xx [ 195 ] + xx [ 201 ] ; xx [ 72 ] = state [ 12 ] + xx [ 42 ] ; if ( xx [
152 ] < xx [ 72 ] ) xx [ 72 ] = xx [ 152 ] ; xx [ 73 ] = - ( xx [ 72 ] / xx [
45 ] ) ; if ( xx [ 0 ] < xx [ 73 ] ) xx [ 73 ] = xx [ 0 ] ; xx [ 77 ] = xx [
66 ] * state [ 15 ] ; xx [ 82 ] = xx [ 73 ] * xx [ 73 ] * ( xx [ 55 ] - xx [
11 ] * xx [ 73 ] ) * ( ( - xx [ 72 ] == xx [ 152 ] ? xx [ 152 ] : - xx [ 77 ]
) - xx [ 103 ] * xx [ 72 ] ) ; if ( xx [ 152 ] > xx [ 82 ] ) xx [ 82 ] = xx [
152 ] ; xx [ 72 ] = state [ 12 ] - xx [ 42 ] ; if ( xx [ 152 ] > xx [ 72 ] )
xx [ 72 ] = xx [ 152 ] ; xx [ 73 ] = xx [ 72 ] / xx [ 45 ] ; if ( xx [ 0 ] <
xx [ 73 ] ) xx [ 73 ] = xx [ 0 ] ; xx [ 97 ] = ( xx [ 103 ] * xx [ 72 ] + (
xx [ 72 ] == xx [ 152 ] ? xx [ 152 ] : xx [ 77 ] ) ) * xx [ 73 ] * xx [ 73 ]
* ( xx [ 55 ] - xx [ 11 ] * xx [ 73 ] ) ; if ( xx [ 152 ] > xx [ 97 ] ) xx [
97 ] = xx [ 152 ] ; xx [ 72 ] = xx [ 845 ] - xx [ 852 ] - xx [ 866 ] - xx [
849 ] - xx [ 883 ] - xx [ 880 ] - xx [ 900 ] - xx [ 886 ] - xx [ 916 ] - xx [
903 ] + xx [ 184 ] + xx [ 181 ] + xx [ 196 ] + xx [ 202 ] ; xx [ 73 ] = xx [
846 ] - xx [ 853 ] - xx [ 867 ] - xx [ 850 ] - xx [ 884 ] - xx [ 881 ] - xx [
901 ] - xx [ 887 ] - xx [ 917 ] - xx [ 904 ] + xx [ 185 ] + xx [ 182 ] + xx [
197 ] + xx [ 203 ] ; xx [ 180 ] = xx [ 57 ] ; xx [ 181 ] = xx [ 72 ] ; xx [
182 ] = xx [ 73 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 382 , xx + 192
, xx + 183 ) ; pm_math_Matrix3x3_xform_ra ( xx + 418 , xx + 189 , xx + 192 )
; xx [ 77 ] = xx [ 858 ] - xx [ 144 ] - xx [ 862 ] + xx [ 875 ] - xx [ 868 ]
+ xx [ 892 ] - xx [ 896 ] + xx [ 805 ] - xx [ 912 ] + xx [ 186 ] + xx [ 183 ]
+ xx [ 192 ] ; xx [ 101 ] = xx [ 151 ] + xx [ 859 ] - xx [ 863 ] + xx [ 876 ]
- xx [ 869 ] + xx [ 893 ] - xx [ 897 ] + xx [ 806 ] - xx [ 913 ] + xx [ 187 ]
+ xx [ 184 ] + xx [ 193 ] ; xx [ 112 ] = xx [ 861 ] - xx [ 847 ] - xx [ 864 ]
+ xx [ 878 ] - xx [ 870 ] + xx [ 895 ] - xx [ 898 ] + xx [ 908 ] - xx [ 914 ]
+ xx [ 188 ] + xx [ 185 ] + xx [ 194 ] ; xx [ 183 ] = xx [ 77 ] ; xx [ 184 ]
= xx [ 101 ] ; xx [ 185 ] = xx [ 112 ] ; xx [ 126 ] = state [ 13 ] + xx [ 42
] ; if ( xx [ 152 ] < xx [ 126 ] ) xx [ 126 ] = xx [ 152 ] ; xx [ 128 ] = - (
xx [ 126 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 128 ] ) xx [ 128 ] = xx [ 0 ]
; xx [ 134 ] = xx [ 66 ] * state [ 16 ] ; xx [ 138 ] = xx [ 128 ] * xx [ 128
] * ( xx [ 55 ] - xx [ 11 ] * xx [ 128 ] ) * ( ( - xx [ 126 ] == xx [ 152 ] ?
xx [ 152 ] : - xx [ 134 ] ) - xx [ 103 ] * xx [ 126 ] ) ; if ( xx [ 152 ] >
xx [ 138 ] ) xx [ 138 ] = xx [ 152 ] ; xx [ 126 ] = state [ 13 ] - xx [ 42 ]
; if ( xx [ 152 ] > xx [ 126 ] ) xx [ 126 ] = xx [ 152 ] ; xx [ 128 ] = xx [
126 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 128 ] ) xx [ 128 ] = xx [ 0 ] ; xx [
144 ] = ( xx [ 103 ] * xx [ 126 ] + ( xx [ 126 ] == xx [ 152 ] ? xx [ 152 ] :
xx [ 134 ] ) ) * xx [ 128 ] * xx [ 128 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 128
] ) ; if ( xx [ 152 ] > xx [ 144 ] ) xx [ 144 ] = xx [ 152 ] ; xx [ 126 ] =
state [ 14 ] + xx [ 42 ] ; if ( xx [ 152 ] < xx [ 126 ] ) xx [ 126 ] = xx [
152 ] ; xx [ 128 ] = - ( xx [ 126 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 128
] ) xx [ 128 ] = xx [ 0 ] ; xx [ 134 ] = xx [ 66 ] * state [ 17 ] ; xx [ 149
] = xx [ 128 ] * xx [ 128 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 128 ] ) * ( ( -
xx [ 126 ] == xx [ 152 ] ? xx [ 152 ] : - xx [ 134 ] ) - xx [ 103 ] * xx [
126 ] ) ; if ( xx [ 152 ] > xx [ 149 ] ) xx [ 149 ] = xx [ 152 ] ; xx [ 126 ]
= state [ 14 ] - xx [ 42 ] ; if ( xx [ 152 ] > xx [ 126 ] ) xx [ 126 ] = xx [
152 ] ; xx [ 128 ] = xx [ 126 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 128 ] ) xx
[ 128 ] = xx [ 0 ] ; xx [ 151 ] = ( xx [ 103 ] * xx [ 126 ] + ( xx [ 126 ] ==
xx [ 152 ] ? xx [ 152 ] : xx [ 134 ] ) ) * xx [ 128 ] * xx [ 128 ] * ( xx [
55 ] - xx [ 11 ] * xx [ 128 ] ) ; if ( xx [ 152 ] > xx [ 151 ] ) xx [ 151 ] =
xx [ 152 ] ; xx [ 186 ] = input [ 16 ] - xx [ 40 ] * state [ 15 ] + xx [ 82 ]
- xx [ 97 ] - ( pm_math_Vector3_dot_ra ( xx + 294 , xx + 180 ) +
pm_math_Vector3_dot_ra ( xx + 362 , xx + 183 ) ) ; xx [ 187 ] = input [ 17 ]
- xx [ 40 ] * state [ 16 ] + xx [ 138 ] - xx [ 144 ] - (
pm_math_Vector3_dot_ra ( xx + 438 , xx + 180 ) + pm_math_Vector3_dot_ra ( xx
+ 444 , xx + 183 ) ) ; xx [ 188 ] = input [ 18 ] - xx [ 40 ] * state [ 17 ] +
xx [ 149 ] - xx [ 151 ] - ( xx [ 72 ] * xx [ 49 ] + xx [ 73 ] * xx [ 48 ] +
pm_math_Vector3_dot_ra ( xx + 459 , xx + 183 ) ) ; solveSymmetricPosDef ( xx
+ 476 , xx + 186 , 3 , 1 , xx + 180 , xx + 183 ) ; xx [ 183 ] = xx [ 57 ] +
xx [ 96 ] * xx [ 180 ] + xx [ 395 ] * xx [ 181 ] + xx [ 465 ] * xx [ 182 ] ;
xx [ 184 ] = xx [ 72 ] + xx [ 273 ] * xx [ 180 ] + xx [ 450 ] * xx [ 181 ] +
xx [ 466 ] * xx [ 182 ] ; xx [ 185 ] = xx [ 73 ] + xx [ 297 ] * xx [ 180 ] +
xx [ 441 ] * xx [ 181 ] + xx [ 462 ] * xx [ 182 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 183 , xx + 186 ) ; xx [ 183 ] =
xx [ 77 ] + xx [ 299 ] * xx [ 180 ] + xx [ 442 ] * xx [ 181 ] + xx [ 463 ] *
xx [ 182 ] ; xx [ 184 ] = xx [ 101 ] + xx [ 349 ] * xx [ 180 ] + xx [ 443 ] *
xx [ 181 ] + xx [ 464 ] * xx [ 182 ] ; xx [ 185 ] = xx [ 112 ] + xx [ 371 ] *
xx [ 180 ] + xx [ 451 ] * xx [ 181 ] + xx [ 470 ] * xx [ 182 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 183 , xx + 189 ) ;
pm_math_Vector3_cross_ra ( xx + 92 , xx + 189 , xx + 183 ) ; xx [ 192 ] = xx
[ 20 ] ; xx [ 193 ] = xx [ 527 ] ; xx [ 194 ] = xx [ 528 ] ;
pm_math_Vector3_cross_ra ( xx + 735 , xx + 192 , xx + 195 ) ; xx [ 201 ] = xx
[ 749 ] ; xx [ 202 ] = xx [ 521 ] ; xx [ 203 ] = xx [ 752 ] ;
pm_math_Vector3_cross_ra ( xx + 192 , xx + 201 , xx + 207 ) ; xx [ 20 ] = xx
[ 207 ] + xx [ 753 ] * xx [ 23 ] - xx [ 525 ] * xx [ 19 ] ; xx [ 57 ] = xx [
195 ] - xx [ 20 ] ; xx [ 72 ] = xx [ 208 ] + xx [ 19 ] * xx [ 475 ] ; xx [ 19
] = xx [ 196 ] - xx [ 72 ] ; xx [ 73 ] = xx [ 23 ] * xx [ 475 ] - xx [ 209 ]
; xx [ 23 ] = xx [ 197 ] + xx [ 73 ] ; xx [ 195 ] = xx [ 57 ] ; xx [ 196 ] =
xx [ 19 ] ; xx [ 197 ] = xx [ 23 ] ; pm_math_Matrix3x3_xform_ra ( xx + 427 ,
xx + 195 , xx + 201 ) ; xx [ 207 ] = xx [ 735 ] + xx [ 22 ] ; xx [ 208 ] = xx
[ 736 ] + xx [ 751 ] ; xx [ 209 ] = xx [ 737 ] + xx [ 750 ] ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 192 , xx + 217 ) ;
pm_math_Vector3_cross_ra ( xx + 207 , xx + 217 , xx + 192 ) ;
pm_math_Vector3_cross_ra ( xx + 621 , xx + 472 , xx + 207 ) ;
pm_math_Vector3_cross_ra ( xx + 621 , xx + 207 , xx + 217 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 217 , xx + 207 ) ; xx [
217 ] = - xx [ 20 ] ; xx [ 218 ] = - xx [ 72 ] ; xx [ 219 ] = xx [ 73 ] ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 217 , xx + 220 ) ; xx [ 20 ] = xx [
192 ] + xx [ 207 ] + xx [ 220 ] ; xx [ 22 ] = xx [ 193 ] + xx [ 208 ] + xx [
221 ] ; xx [ 67 ] = xx [ 194 ] + xx [ 209 ] + xx [ 222 ] ; xx [ 192 ] = xx [
20 ] ; xx [ 193 ] = xx [ 22 ] ; xx [ 194 ] = xx [ 67 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 485 , xx + 192 , xx + 207 ) ; xx [ 68 ] =
xx [ 760 ] - xx [ 769 ] - xx [ 780 ] - xx [ 777 ] - xx [ 798 ] - xx [ 786 ] -
xx [ 815 ] - xx [ 801 ] - xx [ 831 ] - xx [ 828 ] + xx [ 186 ] + xx [ 183 ] +
xx [ 201 ] + xx [ 207 ] ; xx [ 69 ] = state [ 6 ] + xx [ 42 ] ; if ( xx [ 152
] < xx [ 69 ] ) xx [ 69 ] = xx [ 152 ] ; xx [ 72 ] = - ( xx [ 69 ] / xx [ 45
] ) ; if ( xx [ 0 ] < xx [ 72 ] ) xx [ 72 ] = xx [ 0 ] ; xx [ 73 ] = xx [ 66
] * state [ 9 ] ; xx [ 77 ] = xx [ 72 ] * xx [ 72 ] * ( xx [ 55 ] - xx [ 11 ]
* xx [ 72 ] ) * ( ( - xx [ 69 ] == xx [ 152 ] ? xx [ 152 ] : - xx [ 73 ] ) -
xx [ 103 ] * xx [ 69 ] ) ; if ( xx [ 152 ] > xx [ 77 ] ) xx [ 77 ] = xx [ 152
] ; xx [ 69 ] = state [ 6 ] - xx [ 42 ] ; if ( xx [ 152 ] > xx [ 69 ] ) xx [
69 ] = xx [ 152 ] ; xx [ 72 ] = xx [ 69 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [
72 ] ) xx [ 72 ] = xx [ 0 ] ; xx [ 82 ] = ( xx [ 103 ] * xx [ 69 ] + ( xx [
69 ] == xx [ 152 ] ? xx [ 152 ] : xx [ 73 ] ) ) * xx [ 72 ] * xx [ 72 ] * (
xx [ 55 ] - xx [ 11 ] * xx [ 72 ] ) ; if ( xx [ 152 ] > xx [ 82 ] ) xx [ 82 ]
= xx [ 152 ] ; xx [ 69 ] = xx [ 761 ] - xx [ 770 ] - xx [ 781 ] - xx [ 778 ]
- xx [ 799 ] - xx [ 787 ] - xx [ 816 ] - xx [ 802 ] - xx [ 832 ] - xx [ 829 ]
+ xx [ 187 ] + xx [ 184 ] + xx [ 202 ] + xx [ 208 ] ; xx [ 72 ] = xx [ 762 ]
- xx [ 771 ] - xx [ 782 ] - xx [ 779 ] - xx [ 800 ] - xx [ 788 ] - xx [ 817 ]
- xx [ 803 ] - xx [ 833 ] - xx [ 830 ] + xx [ 188 ] + xx [ 185 ] + xx [ 203 ]
+ xx [ 209 ] ; xx [ 183 ] = xx [ 68 ] ; xx [ 184 ] = xx [ 69 ] ; xx [ 185 ] =
xx [ 72 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 485 , xx + 195 , xx +
186 ) ; pm_math_Matrix3x3_xform_ra ( xx + 494 , xx + 192 , xx + 195 ) ; xx [
73 ] = xx [ 764 ] + xx [ 765 ] - xx [ 783 ] + xx [ 792 ] - xx [ 795 ] + xx [
808 ] - xx [ 812 ] + xx [ 711 ] - xx [ 834 ] + xx [ 189 ] + xx [ 186 ] + xx [
195 ] ; xx [ 96 ] = xx [ 775 ] - xx [ 133 ] - xx [ 784 ] + xx [ 793 ] - xx [
796 ] + xx [ 809 ] - xx [ 813 ] + xx [ 712 ] - xx [ 835 ] + xx [ 190 ] + xx [
187 ] + xx [ 196 ] ; xx [ 97 ] = xx [ 776 ] - xx [ 56 ] - xx [ 785 ] + xx [
794 ] - xx [ 797 ] + xx [ 811 ] - xx [ 814 ] + xx [ 824 ] - xx [ 836 ] + xx [
191 ] + xx [ 188 ] + xx [ 197 ] ; xx [ 186 ] = xx [ 73 ] ; xx [ 187 ] = xx [
96 ] ; xx [ 188 ] = xx [ 97 ] ; xx [ 101 ] = state [ 7 ] + xx [ 42 ] ; if (
xx [ 152 ] < xx [ 101 ] ) xx [ 101 ] = xx [ 152 ] ; xx [ 112 ] = - ( xx [ 101
] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 112 ] ) xx [ 112 ] = xx [ 0 ] ; xx [
126 ] = xx [ 66 ] * state [ 10 ] ; xx [ 128 ] = xx [ 112 ] * xx [ 112 ] * (
xx [ 55 ] - xx [ 11 ] * xx [ 112 ] ) * ( ( - xx [ 101 ] == xx [ 152 ] ? xx [
152 ] : - xx [ 126 ] ) - xx [ 103 ] * xx [ 101 ] ) ; if ( xx [ 152 ] > xx [
128 ] ) xx [ 128 ] = xx [ 152 ] ; xx [ 101 ] = state [ 7 ] - xx [ 42 ] ; if (
xx [ 152 ] > xx [ 101 ] ) xx [ 101 ] = xx [ 152 ] ; xx [ 112 ] = xx [ 101 ] /
xx [ 45 ] ; if ( xx [ 0 ] < xx [ 112 ] ) xx [ 112 ] = xx [ 0 ] ; xx [ 134 ] =
( xx [ 103 ] * xx [ 101 ] + ( xx [ 101 ] == xx [ 152 ] ? xx [ 152 ] : xx [
126 ] ) ) * xx [ 112 ] * xx [ 112 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 112 ] )
; if ( xx [ 152 ] > xx [ 134 ] ) xx [ 134 ] = xx [ 152 ] ; xx [ 101 ] = state
[ 8 ] + xx [ 42 ] ; if ( xx [ 152 ] < xx [ 101 ] ) xx [ 101 ] = xx [ 152 ] ;
xx [ 112 ] = - ( xx [ 101 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 112 ] ) xx [
112 ] = xx [ 0 ] ; xx [ 126 ] = xx [ 66 ] * state [ 11 ] ; xx [ 138 ] = xx [
112 ] * xx [ 112 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 112 ] ) * ( ( - xx [ 101
] == xx [ 152 ] ? xx [ 152 ] : - xx [ 126 ] ) - xx [ 103 ] * xx [ 101 ] ) ;
if ( xx [ 152 ] > xx [ 138 ] ) xx [ 138 ] = xx [ 152 ] ; xx [ 101 ] = state [
8 ] - xx [ 42 ] ; if ( xx [ 152 ] > xx [ 101 ] ) xx [ 101 ] = xx [ 152 ] ; xx
[ 112 ] = xx [ 101 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 112 ] ) xx [ 112 ] =
xx [ 0 ] ; xx [ 144 ] = ( xx [ 103 ] * xx [ 101 ] + ( xx [ 101 ] == xx [ 152
] ? xx [ 152 ] : xx [ 126 ] ) ) * xx [ 112 ] * xx [ 112 ] * ( xx [ 55 ] - xx
[ 11 ] * xx [ 112 ] ) ; if ( xx [ 152 ] > xx [ 144 ] ) xx [ 144 ] = xx [ 152
] ; xx [ 189 ] = input [ 19 ] - xx [ 40 ] * state [ 9 ] + xx [ 77 ] - xx [ 82
] - ( pm_math_Vector3_dot_ra ( xx + 391 , xx + 183 ) + pm_math_Vector3_dot_ra
( xx + 452 , xx + 186 ) ) ; xx [ 190 ] = input [ 20 ] - xx [ 40 ] * state [
10 ] + xx [ 128 ] - xx [ 134 ] - ( pm_math_Vector3_dot_ra ( xx + 539 , xx +
183 ) + pm_math_Vector3_dot_ra ( xx + 545 , xx + 186 ) ) ; xx [ 191 ] = input
[ 21 ] - xx [ 40 ] * state [ 11 ] + xx [ 138 ] - xx [ 144 ] - ( xx [ 69 ] *
xx [ 25 ] + xx [ 72 ] * xx [ 24 ] + pm_math_Vector3_dot_ra ( xx + 559 , xx +
186 ) ) ; solveSymmetricPosDef ( xx + 576 , xx + 189 , 3 , 1 , xx + 183 , xx
+ 186 ) ; xx [ 186 ] = xx [ 68 ] + xx [ 369 ] * xx [ 183 ] + xx [ 522 ] * xx
[ 184 ] + xx [ 565 ] * xx [ 185 ] ; xx [ 187 ] = xx [ 69 ] + xx [ 370 ] * xx
[ 183 ] + xx [ 529 ] * xx [ 184 ] + xx [ 566 ] * xx [ 185 ] ; xx [ 188 ] = xx
[ 72 ] + xx [ 447 ] * xx [ 183 ] + xx [ 542 ] * xx [ 184 ] + xx [ 562 ] * xx
[ 185 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 186 , xx + 189 ) ; xx
[ 186 ] = xx [ 73 ] + xx [ 449 ] * xx [ 183 ] + xx [ 543 ] * xx [ 184 ] + xx
[ 563 ] * xx [ 185 ] ; xx [ 187 ] = xx [ 96 ] + xx [ 455 ] * xx [ 183 ] + xx
[ 544 ] * xx [ 184 ] + xx [ 564 ] * xx [ 185 ] ; xx [ 188 ] = xx [ 97 ] + xx
[ 471 ] * xx [ 183 ] + xx [ 551 ] * xx [ 184 ] + xx [ 570 ] * xx [ 185 ] ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 186 , xx + 192 ) ;
pm_math_Vector3_cross_ra ( xx + 472 , xx + 192 , xx + 186 ) ; xx [ 195 ] = xx
[ 43 ] ; xx [ 196 ] = xx [ 531 ] ; xx [ 197 ] = xx [ 538 ] ;
pm_math_Vector3_cross_ra ( xx + 621 , xx + 195 , xx + 201 ) ; xx [ 43 ] = xx
[ 201 ] + xx [ 7 ] * xx [ 548 ] - xx [ 532 ] * xx [ 2 ] ; xx [ 68 ] = xx [ 2
] * xx [ 95 ] + xx [ 202 ] ; xx [ 2 ] = xx [ 203 ] - xx [ 7 ] * xx [ 95 ] ;
xx [ 95 ] = - xx [ 43 ] ; xx [ 96 ] = - xx [ 68 ] ; xx [ 97 ] = - xx [ 2 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 639 , xx + 95 , xx + 195 ) ; xx [ 201 ] =
xx [ 47 ] * xx [ 41 ] + xx [ 537 ] * xx [ 44 ] ; xx [ 202 ] = - ( xx [ 44 ] *
xx [ 3 ] ) ; xx [ 203 ] = - ( xx [ 41 ] * xx [ 3 ] ) ;
pm_math_Vector3_cross_ra ( xx + 621 , xx + 201 , xx + 207 ) ; xx [ 3 ] = xx [
207 ] - ( xx [ 2 ] * xx [ 41 ] + xx [ 44 ] * xx [ 68 ] ) ; xx [ 7 ] = xx [
208 ] + xx [ 43 ] * xx [ 44 ] ; xx [ 44 ] = xx [ 209 ] + xx [ 43 ] * xx [ 41
] ; xx [ 201 ] = xx [ 3 ] ; xx [ 202 ] = xx [ 7 ] ; xx [ 203 ] = xx [ 44 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 585 , xx + 201 , xx + 207 ) ; xx [ 41 ] =
xx [ 634 ] - xx [ 630 ] * xx [ 766 ] + xx [ 659 ] * xx [ 676 ] - xx [ 694 ] -
xx [ 702 ] - xx [ 722 ] - xx [ 726 ] - xx [ 21 ] * xx [ 818 ] - xx [ 744 ] +
xx [ 190 ] + xx [ 187 ] + xx [ 196 ] + xx [ 208 ] ; xx [ 47 ] = xx [ 635 ] +
xx [ 18 ] * xx [ 766 ] - xx [ 667 ] * xx [ 676 ] - xx [ 695 ] - xx [ 703 ] -
xx [ 723 ] - xx [ 727 ] + xx [ 707 ] * xx [ 818 ] - xx [ 745 ] + xx [ 191 ] +
xx [ 188 ] + xx [ 197 ] + xx [ 209 ] ; xx [ 196 ] = xx [ 633 ] - (
0.02933876077043094 * xx [ 33 ] - 2.074016415803327e-3 * xx [ 65 ] ) - ( xx [
18 ] * xx [ 657 ] - xx [ 630 ] * xx [ 658 ] ) - ( xx [ 659 ] * xx [ 677 ] -
xx [ 667 ] * xx [ 678 ] ) - xx [ 693 ] - xx [ 701 ] - xx [ 721 ] - xx [ 725 ]
- ( xx [ 707 ] * xx [ 720 ] - xx [ 21 ] * xx [ 734 ] ) - xx [ 743 ] + xx [
189 ] + xx [ 186 ] + xx [ 195 ] + xx [ 207 ] ; xx [ 197 ] = xx [ 41 ] ; xx [
198 ] = xx [ 47 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 585 , xx + 95
, xx + 186 ) ; pm_math_Matrix3x3_xform_ra ( xx + 594 , xx + 201 , xx + 95 ) ;
xx [ 18 ] = xx [ 766 ] - xx [ 676 ] + xx [ 686 ] - xx [ 704 ] + xx [ 714 ] -
xx [ 728 ] + xx [ 818 ] - xx [ 746 ] + xx [ 192 ] + xx [ 186 ] + xx [ 95 ] ;
xx [ 189 ] = xx [ 18 ] ; xx [ 190 ] = xx [ 65 ] + xx [ 658 ] - xx [ 677 ] +
xx [ 687 ] - xx [ 705 ] + xx [ 715 ] - xx [ 729 ] + xx [ 734 ] - xx [ 747 ] +
xx [ 193 ] + xx [ 187 ] + xx [ 96 ] ; xx [ 191 ] = xx [ 657 ] - xx [ 33 ] -
xx [ 678 ] + xx [ 689 ] - xx [ 706 ] + xx [ 717 ] - xx [ 730 ] + xx [ 720 ] -
xx [ 748 ] + xx [ 194 ] + xx [ 188 ] + xx [ 97 ] ; xx [ 21 ] = state [ 1 ] +
xx [ 42 ] ; if ( xx [ 152 ] < xx [ 21 ] ) xx [ 21 ] = xx [ 152 ] ; xx [ 69 ]
= - ( xx [ 21 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 69 ] ) xx [ 69 ] = xx [
0 ] ; xx [ 72 ] = xx [ 66 ] * state [ 4 ] ; xx [ 73 ] = xx [ 69 ] * xx [ 69 ]
* ( xx [ 55 ] - xx [ 11 ] * xx [ 69 ] ) * ( ( - xx [ 21 ] == xx [ 152 ] ? xx
[ 152 ] : - xx [ 72 ] ) - xx [ 103 ] * xx [ 21 ] ) ; if ( xx [ 152 ] > xx [
73 ] ) xx [ 73 ] = xx [ 152 ] ; xx [ 21 ] = state [ 1 ] - xx [ 42 ] ; if ( xx
[ 152 ] > xx [ 21 ] ) xx [ 21 ] = xx [ 152 ] ; xx [ 69 ] = xx [ 21 ] / xx [
45 ] ; if ( xx [ 0 ] < xx [ 69 ] ) xx [ 69 ] = xx [ 0 ] ; xx [ 77 ] = ( xx [
103 ] * xx [ 21 ] + ( xx [ 21 ] == xx [ 152 ] ? xx [ 152 ] : xx [ 72 ] ) ) *
xx [ 69 ] * xx [ 69 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 69 ] ) ; if ( xx [ 152
] > xx [ 77 ] ) xx [ 77 ] = xx [ 152 ] ; xx [ 21 ] = state [ 2 ] + xx [ 42 ]
; if ( xx [ 152 ] < xx [ 21 ] ) xx [ 21 ] = xx [ 152 ] ; xx [ 69 ] = - ( xx [
21 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 69 ] ) xx [ 69 ] = xx [ 0 ] ; xx [
72 ] = xx [ 66 ] * state [ 5 ] ; xx [ 66 ] = xx [ 69 ] * xx [ 69 ] * ( xx [
55 ] - xx [ 11 ] * xx [ 69 ] ) * ( ( - xx [ 21 ] == xx [ 152 ] ? xx [ 152 ] :
- xx [ 72 ] ) - xx [ 103 ] * xx [ 21 ] ) ; if ( xx [ 152 ] > xx [ 66 ] ) xx [
66 ] = xx [ 152 ] ; xx [ 21 ] = state [ 2 ] - xx [ 42 ] ; if ( xx [ 152 ] >
xx [ 21 ] ) xx [ 21 ] = xx [ 152 ] ; xx [ 42 ] = xx [ 21 ] / xx [ 45 ] ; if (
xx [ 0 ] < xx [ 42 ] ) xx [ 42 ] = xx [ 0 ] ; xx [ 45 ] = ( xx [ 103 ] * xx [
21 ] + ( xx [ 21 ] == xx [ 152 ] ? xx [ 152 ] : xx [ 72 ] ) ) * xx [ 42 ] *
xx [ 42 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 42 ] ) ; if ( xx [ 152 ] > xx [ 45
] ) xx [ 45 ] = xx [ 152 ] ; xx [ 95 ] = input [ 22 ] - xx [ 40 ] * state [ 3
] + xx [ 178 ] - xx [ 530 ] - ( pm_math_Vector3_dot_ra ( xx + 15 , xx + 196 )
+ pm_math_Vector3_dot_ra ( xx + 533 , xx + 189 ) ) ; xx [ 96 ] = input [ 23 ]
- xx [ 40 ] * state [ 4 ] + xx [ 73 ] - xx [ 77 ] - ( pm_math_Vector3_dot_ra
( xx + 553 , xx + 196 ) + pm_math_Vector3_dot_ra ( xx + 573 , xx + 189 ) ) ;
xx [ 97 ] = input [ 24 ] - xx [ 40 ] * state [ 5 ] + xx [ 66 ] - xx [ 45 ] -
( xx [ 41 ] * xx [ 9 ] + xx [ 47 ] * xx [ 13 ] + xx [ 18 ] * xx [ 631 ] ) ;
solveSymmetricPosDef ( xx + 648 , xx + 95 , 3 , 1 , xx + 15 , xx + 40 ) ; xx
[ 217 ] = xx [ 139 ] ; xx [ 218 ] = xx [ 624 ] ; xx [ 219 ] = xx [ 632 ] ; xx
[ 220 ] = xx [ 145 ] ; xx [ 221 ] = xx [ 625 ] ; xx [ 222 ] = xx [ 28 ] ; xx
[ 223 ] = xx [ 147 ] ; xx [ 224 ] = xx [ 567 ] ; xx [ 225 ] = xx [ 30 ] ; xx
[ 226 ] = xx [ 468 ] ; xx [ 227 ] = xx [ 568 ] ; xx [ 228 ] = xx [ 34 ] ; xx
[ 229 ] = xx [ 469 ] ; xx [ 230 ] = xx [ 569 ] ; xx [ 231 ] = xx [ 38 ] ; xx
[ 232 ] = xx [ 536 ] ; xx [ 233 ] = xx [ 626 ] ; xx [ 234 ] = xx [ 39 ] ;
solveSymmetricPosDef ( xx + 648 , xx + 217 , 3 , 6 , xx + 273 , xx + 38 ) ;
xx [ 38 ] = xx [ 282 ] ; xx [ 39 ] = xx [ 285 ] ; xx [ 40 ] = xx [ 288 ] ; xx
[ 18 ] = 9.806649999999999 ; xx [ 21 ] = xx [ 18 ] * xx [ 14 ] ; xx [ 28 ] =
xx [ 18 ] * xx [ 6 ] ; xx [ 30 ] = xx [ 11 ] * ( xx [ 5 ] * xx [ 21 ] + xx [
28 ] * xx [ 10 ] ) ; xx [ 34 ] = ( xx [ 5 ] * xx [ 28 ] - xx [ 21 ] * xx [ 10
] ) * xx [ 11 ] ; xx [ 41 ] = ( xx [ 21 ] * xx [ 14 ] + xx [ 28 ] * xx [ 6 ]
) * xx [ 11 ] ; xx [ 95 ] = xx [ 30 ] ; xx [ 96 ] = xx [ 34 ] ; xx [ 97 ] =
xx [ 18 ] - xx [ 41 ] ; xx [ 21 ] = xx [ 15 ] - pm_math_Vector3_dot_ra ( xx +
38 , xx + 95 ) ; xx [ 38 ] = xx [ 283 ] ; xx [ 39 ] = xx [ 286 ] ; xx [ 40 ]
= xx [ 289 ] ; xx [ 28 ] = xx [ 16 ] - pm_math_Vector3_dot_ra ( xx + 38 , xx
+ 95 ) ; xx [ 38 ] = xx [ 284 ] ; xx [ 39 ] = xx [ 287 ] ; xx [ 40 ] = xx [
290 ] ; xx [ 15 ] = xx [ 17 ] - pm_math_Vector3_dot_ra ( xx + 38 , xx + 95 )
; xx [ 38 ] = xx [ 603 ] ; xx [ 39 ] = xx [ 606 ] ; xx [ 40 ] = xx [ 609 ] ;
xx [ 95 ] = xx [ 12 ] * xx [ 21 ] + xx [ 553 ] * xx [ 28 ] - xx [ 43 ] ; xx [
96 ] = xx [ 4 ] * xx [ 21 ] + xx [ 554 ] * xx [ 28 ] + xx [ 9 ] * xx [ 15 ] -
xx [ 68 ] ; xx [ 97 ] = xx [ 8 ] * xx [ 21 ] + xx [ 28 ] * xx [ 555 ] + xx [
13 ] * xx [ 15 ] - xx [ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 ,
xx + 95 , xx + 186 ) ; xx [ 189 ] = xx [ 612 ] ; xx [ 190 ] = xx [ 615 ] ; xx
[ 191 ] = xx [ 618 ] ; xx [ 2 ] = xx [ 30 ] + xx [ 21 ] * xx [ 46 ] + xx [ 28
] * xx [ 552 ] + xx [ 631 ] * xx [ 15 ] + xx [ 3 ] ; pm_math_Vector3_cross_ra
( xx + 95 , xx + 472 , xx + 45 ) ; xx [ 3 ] = xx [ 34 ] - xx [ 119 ] * xx [
21 ] - xx [ 571 ] * xx [ 28 ] + xx [ 7 ] ; xx [ 4 ] = xx [ 44 ] - ( xx [ 41 ]
+ xx [ 125 ] * xx [ 21 ] + xx [ 572 ] * xx [ 28 ] ) + xx [ 18 ] ; xx [ 7 ] =
xx [ 2 ] + xx [ 45 ] ; xx [ 8 ] = xx [ 3 ] + xx [ 46 ] ; xx [ 9 ] = xx [ 4 ]
+ xx [ 47 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 7 , xx + 16
) ; xx [ 7 ] = xx [ 183 ] - ( pm_math_Vector3_dot_ra ( xx + 38 , xx + 186 ) +
pm_math_Vector3_dot_ra ( xx + 189 , xx + 16 ) ) ; xx [ 38 ] = xx [ 604 ] ; xx
[ 39 ] = xx [ 607 ] ; xx [ 40 ] = xx [ 610 ] ; xx [ 41 ] = xx [ 613 ] ; xx [
42 ] = xx [ 616 ] ; xx [ 43 ] = xx [ 619 ] ; xx [ 8 ] = xx [ 184 ] - (
pm_math_Vector3_dot_ra ( xx + 38 , xx + 186 ) + pm_math_Vector3_dot_ra ( xx +
41 , xx + 16 ) ) ; xx [ 38 ] = xx [ 605 ] ; xx [ 39 ] = xx [ 608 ] ; xx [ 40
] = xx [ 611 ] ; xx [ 41 ] = xx [ 614 ] ; xx [ 42 ] = xx [ 617 ] ; xx [ 43 ]
= xx [ 620 ] ; xx [ 9 ] = xx [ 185 ] - ( pm_math_Vector3_dot_ra ( xx + 38 ,
xx + 186 ) + pm_math_Vector3_dot_ra ( xx + 41 , xx + 16 ) ) ; xx [ 38 ] = xx
[ 503 ] ; xx [ 39 ] = xx [ 506 ] ; xx [ 40 ] = xx [ 509 ] ; xx [ 41 ] = xx [
186 ] + xx [ 368 ] * xx [ 7 ] + xx [ 526 ] * xx [ 8 ] + xx [ 57 ] ; xx [ 42 ]
= xx [ 187 ] + xx [ 32 ] * xx [ 7 ] + xx [ 524 ] * xx [ 8 ] + xx [ 25 ] * xx
[ 9 ] + xx [ 19 ] ; xx [ 43 ] = xx [ 188 ] + xx [ 35 ] * xx [ 7 ] + xx [ 8 ]
* xx [ 523 ] + xx [ 24 ] * xx [ 9 ] + xx [ 23 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 41 , xx + 23 ) ; xx [ 44
] = xx [ 512 ] ; xx [ 45 ] = xx [ 515 ] ; xx [ 46 ] = xx [ 518 ] ; xx [ 12 ]
= xx [ 16 ] + xx [ 452 ] * xx [ 7 ] + xx [ 545 ] * xx [ 8 ] + xx [ 556 ] * xx
[ 9 ] + xx [ 20 ] ; pm_math_Vector3_cross_ra ( xx + 41 , xx + 92 , xx + 95 )
; xx [ 13 ] = xx [ 17 ] + xx [ 453 ] * xx [ 7 ] + xx [ 546 ] * xx [ 8 ] - xx
[ 557 ] * xx [ 9 ] + xx [ 22 ] ; xx [ 16 ] = xx [ 18 ] + xx [ 454 ] * xx [ 7
] + xx [ 547 ] * xx [ 8 ] + xx [ 558 ] * xx [ 9 ] + xx [ 67 ] ; xx [ 17 ] =
xx [ 12 ] + xx [ 95 ] ; xx [ 18 ] = xx [ 13 ] + xx [ 96 ] ; xx [ 19 ] = xx [
16 ] + xx [ 97 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 17 ,
xx + 41 ) ; xx [ 17 ] = xx [ 180 ] - ( pm_math_Vector3_dot_ra ( xx + 38 , xx
+ 23 ) + pm_math_Vector3_dot_ra ( xx + 44 , xx + 41 ) ) ; xx [ 18 ] = xx [
504 ] ; xx [ 19 ] = xx [ 507 ] ; xx [ 20 ] = xx [ 510 ] ; xx [ 38 ] = xx [
513 ] ; xx [ 39 ] = xx [ 516 ] ; xx [ 40 ] = xx [ 519 ] ; xx [ 22 ] = xx [
181 ] - ( pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) +
pm_math_Vector3_dot_ra ( xx + 38 , xx + 41 ) ) ; xx [ 18 ] = xx [ 505 ] ; xx
[ 19 ] = xx [ 508 ] ; xx [ 20 ] = xx [ 511 ] ; xx [ 38 ] = xx [ 514 ] ; xx [
39 ] = xx [ 517 ] ; xx [ 40 ] = xx [ 520 ] ; xx [ 30 ] = xx [ 182 ] - (
pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
38 , xx + 41 ) ) ; xx [ 18 ] = xx [ 400 ] ; xx [ 19 ] = xx [ 403 ] ; xx [ 20
] = xx [ 406 ] ; xx [ 38 ] = xx [ 23 ] + xx [ 271 ] * xx [ 17 ] + xx [ 399 ]
* xx [ 22 ] + xx [ 51 ] ; xx [ 39 ] = xx [ 24 ] + xx [ 272 ] * xx [ 17 ] + xx
[ 397 ] * xx [ 22 ] + xx [ 49 ] * xx [ 30 ] + xx [ 26 ] ; xx [ 40 ] = xx [ 25
] + xx [ 50 ] * xx [ 17 ] - xx [ 22 ] * xx [ 396 ] + xx [ 48 ] * xx [ 30 ] +
xx [ 37 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 38 , xx + 23
) ; xx [ 44 ] = xx [ 409 ] ; xx [ 45 ] = xx [ 412 ] ; xx [ 46 ] = xx [ 415 ]
; xx [ 26 ] = xx [ 41 ] + xx [ 362 ] * xx [ 17 ] + xx [ 444 ] * xx [ 22 ] +
xx [ 456 ] * xx [ 30 ] + xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 38 , xx
+ 122 , xx + 47 ) ; xx [ 29 ] = xx [ 42 ] + xx [ 363 ] * xx [ 17 ] + xx [ 445
] * xx [ 22 ] + xx [ 457 ] * xx [ 30 ] + xx [ 36 ] ; xx [ 32 ] = xx [ 43 ] +
xx [ 364 ] * xx [ 17 ] + xx [ 446 ] * xx [ 22 ] - xx [ 458 ] * xx [ 30 ] + xx
[ 54 ] ; xx [ 34 ] = xx [ 26 ] + xx [ 47 ] ; xx [ 35 ] = xx [ 29 ] + xx [ 48
] ; xx [ 36 ] = xx [ 32 ] + xx [ 49 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 84 , xx + 34 , xx + 37 ) ; xx [ 34 ] = xx [ 168 ] - (
pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
44 , xx + 37 ) ) ; xx [ 18 ] = xx [ 401 ] ; xx [ 19 ] = xx [ 404 ] ; xx [ 20
] = xx [ 407 ] ; xx [ 40 ] = xx [ 410 ] ; xx [ 41 ] = xx [ 413 ] ; xx [ 42 ]
= xx [ 416 ] ; xx [ 35 ] = xx [ 169 ] - ( pm_math_Vector3_dot_ra ( xx + 18 ,
xx + 23 ) + pm_math_Vector3_dot_ra ( xx + 40 , xx + 37 ) ) ; xx [ 18 ] = xx [
402 ] ; xx [ 19 ] = xx [ 405 ] ; xx [ 20 ] = xx [ 408 ] ; xx [ 40 ] = xx [
411 ] ; xx [ 41 ] = xx [ 414 ] ; xx [ 42 ] = xx [ 417 ] ; xx [ 36 ] = xx [
170 ] - ( pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) +
pm_math_Vector3_dot_ra ( xx + 40 , xx + 37 ) ) ; xx [ 18 ] = xx [ 303 ] ; xx
[ 19 ] = xx [ 306 ] ; xx [ 20 ] = xx [ 309 ] ; xx [ 40 ] = xx [ 23 ] + xx [
206 ] * xx [ 34 ] + xx [ 342 ] * xx [ 35 ] + xx [ 70 ] * xx [ 36 ] + xx [ 78
] ; xx [ 41 ] = xx [ 24 ] + xx [ 204 ] * xx [ 34 ] + xx [ 343 ] * xx [ 35 ] +
xx [ 60 ] * xx [ 36 ] + xx [ 83 ] ; xx [ 42 ] = xx [ 25 ] + xx [ 59 ] * xx [
34 ] + xx [ 344 ] * xx [ 35 ] + xx [ 58 ] * xx [ 36 ] + xx [ 75 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 40 , xx + 23 ) ; xx [ 43
] = xx [ 312 ] ; xx [ 44 ] = xx [ 315 ] ; xx [ 45 ] = xx [ 318 ] ; xx [ 46 ]
= xx [ 37 ] + xx [ 265 ] * xx [ 34 ] + xx [ 300 ] * xx [ 35 ] + xx [ 356 ] *
xx [ 36 ] + xx [ 71 ] ; pm_math_Vector3_cross_ra ( xx + 40 , xx + 141 , xx +
47 ) ; xx [ 37 ] = xx [ 38 ] + xx [ 266 ] * xx [ 34 ] + xx [ 301 ] * xx [ 35
] - xx [ 357 ] * xx [ 36 ] + xx [ 74 ] ; xx [ 38 ] = xx [ 39 ] + xx [ 267 ] *
xx [ 34 ] + xx [ 302 ] * xx [ 35 ] - xx [ 358 ] * xx [ 36 ] + xx [ 76 ] ; xx
[ 39 ] = xx [ 46 ] + xx [ 47 ] ; xx [ 40 ] = xx [ 37 ] + xx [ 48 ] ; xx [ 41
] = xx [ 38 ] + xx [ 49 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 ,
xx + 39 , xx + 47 ) ; xx [ 39 ] = xx [ 165 ] - ( pm_math_Vector3_dot_ra ( xx
+ 18 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx + 43 , xx + 47 ) ) ; xx [ 18 ]
= xx [ 304 ] ; xx [ 19 ] = xx [ 307 ] ; xx [ 20 ] = xx [ 310 ] ; xx [ 40 ] =
xx [ 313 ] ; xx [ 41 ] = xx [ 316 ] ; xx [ 42 ] = xx [ 319 ] ; xx [ 43 ] = xx
[ 166 ] - ( pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) +
pm_math_Vector3_dot_ra ( xx + 40 , xx + 47 ) ) ; xx [ 18 ] = xx [ 305 ] ; xx
[ 19 ] = xx [ 308 ] ; xx [ 20 ] = xx [ 311 ] ; xx [ 40 ] = xx [ 314 ] ; xx [
41 ] = xx [ 317 ] ; xx [ 42 ] = xx [ 320 ] ; xx [ 44 ] = xx [ 167 ] - (
pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
40 , xx + 47 ) ) ; xx [ 18 ] = xx [ 23 ] + xx [ 200 ] * xx [ 39 ] + xx [ 247
] * xx [ 43 ] + xx [ 98 ] * xx [ 44 ] + xx [ 127 ] ; xx [ 19 ] = xx [ 0 ] - (
xx [ 1585 ] * xx [ 1585 ] + xx [ 1586 ] * xx [ 1586 ] ) * xx [ 11 ] ; xx [ 20
] = xx [ 11 ] * ( xx [ 1584 ] * xx [ 1585 ] - xx [ 1583 ] * xx [ 1586 ] ) ;
xx [ 23 ] = ( xx [ 1583 ] * xx [ 1585 ] + xx [ 1584 ] * xx [ 1586 ] ) * xx [
11 ] ; xx [ 40 ] = xx [ 19 ] ; xx [ 41 ] = xx [ 20 ] ; xx [ 42 ] = xx [ 23 ]
; xx [ 45 ] = pm_math_Vector3_dot_ra ( xx + 1009 , xx + 40 ) ; xx [ 50 ] =
0.01085440859974902 ; xx [ 51 ] = 0.07228022064246183 ; xx [ 54 ] =
0.997325298745513 ; xx [ 57 ] = xx [ 50 ] ; xx [ 58 ] = - xx [ 51 ] ; xx [ 59
] = xx [ 54 ] ; xx [ 55 ] = pm_math_Vector3_dot_ra ( xx + 40 , xx + 57 ) ; xx
[ 60 ] = xx [ 0 ] - xx [ 55 ] * xx [ 55 ] ; xx [ 66 ] = xx [ 60 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 1009 , xx + 57 ) - xx [ 45 ] * xx [ 55
] ) / xx [ 60 ] ; xx [ 67 ] = xx [ 45 ] - xx [ 55 ] * xx [ 66 ] ; xx [ 68 ] =
xx [ 67 ] * xx [ 19 ] ; xx [ 69 ] = xx [ 20 ] * xx [ 67 ] ; xx [ 70 ] = xx [
23 ] * xx [ 67 ] ; pm_math_Vector3_cross_ra ( xx + 1009 , xx + 68 , xx + 71 )
; xx [ 67 ] = xx [ 50 ] * xx [ 66 ] ; xx [ 68 ] = - ( xx [ 51 ] * xx [ 66 ] )
; xx [ 69 ] = xx [ 54 ] * xx [ 66 ] ; xx [ 74 ] = - xx [ 1583 ] ; xx [ 75 ] =
- xx [ 1584 ] ; xx [ 76 ] = - xx [ 1585 ] ; xx [ 77 ] = - xx [ 1586 ] ; xx [
92 ] = 0.9993181225840584 ; xx [ 93 ] = 0.03619150900402053 ; xx [ 94 ] =
5.246456256884902e-3 ; xx [ 95 ] = 5.093058789132701e-3 ;
pm_math_Quaternion_compose_ra ( xx + 74 , xx + 92 , xx + 122 ) ; xx [ 66 ] =
( xx [ 123 ] * xx [ 125 ] + xx [ 122 ] * xx [ 124 ] ) * xx [ 11 ] ; xx [ 70 ]
= 0.99999999999999 ; bb [ 1 ] = fabs ( xx [ 66 ] ) > xx [ 70 ] ; if ( xx [ 66
] < 0.0 ) xx [ 78 ] = - 1.0 ; else if ( xx [ 66 ] > 0.0 ) xx [ 78 ] = + 1.0 ;
else xx [ 78 ] = 0.0 ; xx [ 82 ] = xx [ 124 ] * xx [ 125 ] ; xx [ 83 ] = xx [
122 ] * xx [ 123 ] ; xx [ 92 ] = xx [ 122 ] * xx [ 122 ] ; xx [ 93 ] = ( xx [
92 ] + xx [ 124 ] * xx [ 124 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 94 ] = ( xx [
82 ] + xx [ 83 ] ) * xx [ 11 ] ; xx [ 93 ] = ( xx [ 94 ] == 0.0 && xx [ 93 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 94 ] , xx [ 93 ] ) ; xx [ 94 ] = ( xx [ 92 ] +
xx [ 125 ] * xx [ 125 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 95 ] = - ( xx [ 11 ]
* ( xx [ 82 ] - xx [ 83 ] ) ) ; xx [ 94 ] = ( xx [ 95 ] == 0.0 && xx [ 94 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 95 ] , xx [ 94 ] ) ; xx [ 82 ] = ( xx [ 92 ] +
xx [ 123 ] * xx [ 123 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 83 ] = - ( xx [ 11 ]
* ( xx [ 123 ] * xx [ 124 ] - xx [ 122 ] * xx [ 125 ] ) ) ; xx [ 82 ] = ( xx
[ 83 ] == 0.0 && xx [ 82 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 83 ] , xx [ 82 ] ) ;
xx [ 83 ] = bb [ 1 ] ? xx [ 78 ] * ( bb [ 1 ] ? xx [ 1 ] * xx [ 93 ] : xx [
94 ] ) : xx [ 82 ] ; xx [ 82 ] = 1.570796326794897 ; xx [ 92 ] = ( ( cos (
state [ 31 ] ) ) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 93 ] = xx [ 0 ] - xx [ 92 ] ;
xx [ 94 ] = xx [ 1 ] * ( xx [ 83 ] - xx [ 82 ] * ( xx [ 83 ] < 0.0 ? - 1.0 :
+ 1.0 ) * xx [ 93 ] ) ; xx [ 83 ] = sin ( xx [ 94 ] ) ; xx [ 95 ] = cos ( xx
[ 94 ] ) ; xx [ 96 ] = xx [ 50 ] * xx [ 83 ] ; xx [ 97 ] = - ( xx [ 51 ] * xx
[ 83 ] ) ; xx [ 98 ] = xx [ 54 ] * xx [ 83 ] ; xx [ 122 ] = -
9.799417557012156e-3 ; xx [ 123 ] = 0.9973284708563647 ; xx [ 124 ] =
0.07238710268306554 ; pm_math_Quaternion_inverseXform_ra ( xx + 95 , xx + 122
, xx + 125 ) ; xx [ 50 ] = pm_math_Vector3_dot_ra ( xx + 1009 , xx + 125 ) ;
xx [ 94 ] = xx [ 50 ] * xx [ 125 ] ; xx [ 95 ] = xx [ 50 ] * xx [ 126 ] ; xx
[ 96 ] = xx [ 50 ] * xx [ 127 ] ; pm_math_Vector3_cross_ra ( xx + 67 , xx +
94 , xx + 122 ) ; xx [ 50 ] = xx [ 24 ] + xx [ 179 ] * xx [ 39 ] + xx [ 248 ]
* xx [ 43 ] - xx [ 100 ] * xx [ 44 ] + xx [ 131 ] ; xx [ 24 ] = xx [ 25 ] +
xx [ 80 ] * xx [ 39 ] + xx [ 249 ] * xx [ 43 ] + xx [ 102 ] * xx [ 44 ] + xx
[ 105 ] ; xx [ 67 ] = xx [ 18 ] + xx [ 71 ] + xx [ 122 ] ; xx [ 68 ] = xx [
50 ] + xx [ 72 ] + xx [ 123 ] ; xx [ 69 ] = xx [ 24 ] + xx [ 73 ] + xx [ 124
] ; xx [ 25 ] = pm_math_Vector3_dot_ra ( xx + 67 , xx + 40 ) ; xx [ 51 ] = xx
[ 60 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 67 , xx + 57 ) - xx [
25 ] * xx [ 55 ] ) / xx [ 60 ] ; xx [ 54 ] = 8.043376237938261e-3 ; xx [ 57 ]
= 0.1806770170184598 ; xx [ 58 ] = 0.9835095930493033 ; xx [ 71 ] = xx [ 54 ]
; xx [ 72 ] = xx [ 57 ] ; xx [ 73 ] = xx [ 58 ] ; xx [ 59 ] =
pm_math_Vector3_dot_ra ( xx + 40 , xx + 71 ) ; xx [ 60 ] = xx [ 0 ] - xx [ 59
] * xx [ 59 ] ; xx [ 80 ] = xx [ 60 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra
( xx + 1009 , xx + 71 ) - xx [ 45 ] * xx [ 59 ] ) / xx [ 60 ] ; xx [ 83 ] =
xx [ 45 ] - xx [ 59 ] * xx [ 80 ] ; xx [ 94 ] = xx [ 83 ] * xx [ 19 ] ; xx [
95 ] = xx [ 20 ] * xx [ 83 ] ; xx [ 96 ] = xx [ 23 ] * xx [ 83 ] ;
pm_math_Vector3_cross_ra ( xx + 1009 , xx + 94 , xx + 100 ) ; xx [ 94 ] = xx
[ 54 ] * xx [ 80 ] ; xx [ 95 ] = xx [ 57 ] * xx [ 80 ] ; xx [ 96 ] = xx [ 58
] * xx [ 80 ] ; xx [ 141 ] = xx [ 111 ] ; xx [ 142 ] = - xx [ 117 ] ; xx [
143 ] = xx [ 129 ] ; xx [ 144 ] = xx [ 177 ] ; pm_math_Quaternion_compose_ra
( xx + 74 , xx + 141 , xx + 165 ) ; xx [ 19 ] = ( xx [ 166 ] * xx [ 168 ] +
xx [ 165 ] * xx [ 167 ] ) * xx [ 11 ] ; bb [ 2 ] = fabs ( xx [ 19 ] ) > xx [
70 ] ; if ( xx [ 19 ] < 0.0 ) xx [ 20 ] = - 1.0 ; else if ( xx [ 19 ] > 0.0 )
xx [ 20 ] = + 1.0 ; else xx [ 20 ] = 0.0 ; xx [ 23 ] = xx [ 167 ] * xx [ 168
] ; xx [ 45 ] = xx [ 165 ] * xx [ 166 ] ; xx [ 70 ] = xx [ 165 ] * xx [ 165 ]
; xx [ 74 ] = ( xx [ 70 ] + xx [ 167 ] * xx [ 167 ] ) * xx [ 11 ] - xx [ 0 ]
; xx [ 75 ] = ( xx [ 23 ] + xx [ 45 ] ) * xx [ 11 ] ; xx [ 74 ] = ( xx [ 75 ]
== 0.0 && xx [ 74 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 75 ] , xx [ 74 ] ) ; xx [
75 ] = ( xx [ 70 ] + xx [ 168 ] * xx [ 168 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [
76 ] = - ( xx [ 11 ] * ( xx [ 23 ] - xx [ 45 ] ) ) ; xx [ 75 ] = ( xx [ 76 ]
== 0.0 && xx [ 75 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 76 ] , xx [ 75 ] ) ; xx [
23 ] = ( xx [ 70 ] + xx [ 166 ] * xx [ 166 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [
45 ] = - ( xx [ 11 ] * ( xx [ 166 ] * xx [ 167 ] - xx [ 165 ] * xx [ 168 ] )
) ; xx [ 23 ] = ( xx [ 45 ] == 0.0 && xx [ 23 ] == 0.0 ) ? 0.0 : atan2 ( xx [
45 ] , xx [ 23 ] ) ; xx [ 11 ] = bb [ 2 ] ? xx [ 20 ] * ( bb [ 2 ] ? xx [ 1 ]
* xx [ 74 ] : xx [ 75 ] ) : xx [ 23 ] ; xx [ 23 ] = ( ( cos ( state [ 37 ] )
) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 45 ] = xx [ 0 ] - xx [ 23 ] ; xx [ 0 ] = xx
[ 1 ] * ( xx [ 11 ] - xx [ 82 ] * ( xx [ 11 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [
45 ] ) ; xx [ 11 ] = sin ( xx [ 0 ] ) ; xx [ 74 ] = cos ( xx [ 0 ] ) ; xx [
75 ] = xx [ 54 ] * xx [ 11 ] ; xx [ 76 ] = xx [ 57 ] * xx [ 11 ] ; xx [ 77 ]
= xx [ 58 ] * xx [ 11 ] ; xx [ 122 ] = - 0.0122127338954861 ; xx [ 123 ] =
0.9834858029469102 ; xx [ 124 ] = - 0.180572767970891 ;
pm_math_Quaternion_inverseXform_ra ( xx + 74 , xx + 122 , xx + 141 ) ; xx [ 0
] = pm_math_Vector3_dot_ra ( xx + 1009 , xx + 141 ) ; xx [ 74 ] = xx [ 0 ] *
xx [ 141 ] ; xx [ 75 ] = xx [ 0 ] * xx [ 142 ] ; xx [ 76 ] = xx [ 0 ] * xx [
143 ] ; pm_math_Vector3_cross_ra ( xx + 94 , xx + 74 , xx + 122 ) ; xx [ 74 ]
= xx [ 18 ] + xx [ 100 ] + xx [ 122 ] ; xx [ 75 ] = xx [ 50 ] + xx [ 101 ] +
xx [ 123 ] ; xx [ 76 ] = xx [ 24 ] + xx [ 102 ] + xx [ 124 ] ; xx [ 0 ] =
pm_math_Vector3_dot_ra ( xx + 74 , xx + 40 ) ; xx [ 11 ] = xx [ 60 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 74 , xx + 71 ) - xx [ 0 ] * xx [ 59 ] )
/ xx [ 60 ] ; deriv [ 0 ] = state [ 3 ] ; deriv [ 1 ] = state [ 4 ] ; deriv [
2 ] = state [ 5 ] ; deriv [ 3 ] = xx [ 21 ] ; deriv [ 4 ] = xx [ 28 ] ; deriv
[ 5 ] = xx [ 15 ] ; deriv [ 6 ] = state [ 9 ] ; deriv [ 7 ] = state [ 10 ] ;
deriv [ 8 ] = state [ 11 ] ; deriv [ 9 ] = xx [ 7 ] ; deriv [ 10 ] = xx [ 8 ]
; deriv [ 11 ] = xx [ 9 ] ; deriv [ 12 ] = state [ 15 ] ; deriv [ 13 ] =
state [ 16 ] ; deriv [ 14 ] = state [ 17 ] ; deriv [ 15 ] = xx [ 17 ] ; deriv
[ 16 ] = xx [ 22 ] ; deriv [ 17 ] = xx [ 30 ] ; deriv [ 18 ] = state [ 21 ] ;
deriv [ 19 ] = state [ 22 ] ; deriv [ 20 ] = state [ 23 ] ; deriv [ 21 ] = xx
[ 34 ] ; deriv [ 22 ] = xx [ 35 ] ; deriv [ 23 ] = xx [ 36 ] ; deriv [ 24 ] =
state [ 27 ] ; deriv [ 25 ] = state [ 28 ] ; deriv [ 26 ] = state [ 29 ] ;
deriv [ 27 ] = xx [ 39 ] ; deriv [ 28 ] = xx [ 43 ] ; deriv [ 29 ] = xx [ 44
] ; deriv [ 30 ] = state [ 33 ] ; deriv [ 31 ] = state [ 34 ] ; deriv [ 32 ]
= state [ 35 ] ; deriv [ 33 ] = xx [ 25 ] - xx [ 55 ] * xx [ 51 ] ; deriv [
34 ] = pm_math_Vector3_dot_ra ( xx + 67 , xx + 125 ) ; deriv [ 35 ] = xx [ 51
] ; deriv [ 36 ] = state [ 39 ] ; deriv [ 37 ] = state [ 40 ] ; deriv [ 38 ]
= state [ 41 ] ; deriv [ 39 ] = xx [ 0 ] - xx [ 59 ] * xx [ 11 ] ; deriv [ 40
] = pm_math_Vector3_dot_ra ( xx + 74 , xx + 141 ) ; deriv [ 41 ] = xx [ 11 ]
; if ( xx [ 927 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L1-L2 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 0 ] = input [ 149 ] / xx [ 927 ] ; if ( xx [ 843 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L2-L3 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 7 ] = input [ 150 ] / xx [ 843 ] ; if ( xx [ 758 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L3-L4 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 8 ] = input [ 151 ] / xx [ 758 ] ; if ( xx [ 637 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L4-L5 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 9 ] = input [ 152 ] / xx [ 637 ] ; if ( xx [ 670 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L5-S1 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 11 ] = input [ 153 ] / xx [ 670 ] ; if ( xx [ 856 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 15 ] = input [ 154 ] / xx [ 856 ] ; if ( xx [ 774 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 17 ] = input [ 155 ] / xx [ 774 ] ; if ( xx [ 629 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 21 ] = input [ 156 ] / xx [ 629 ] ; if ( xx [ 675 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 22 ] = input [ 157 ] / xx [ 675 ] ; if ( xx [ 692 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 25 ] = input [ 158 ] / xx [ 692 ] ; if ( xx [ 873 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 28 ] = input [ 159 ] / xx [ 873 ] ; if ( xx [ 791 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 30 ] = input [ 160 ] / xx [ 791 ] ; if ( xx [ 684 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 34 ] = input [ 161 ] / xx [ 684 ] ; if ( xx [ 681 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 35 ] = input [ 162 ] / xx [ 681 ] ; if ( xx [ 690 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 36 ] = input [ 163 ] / xx [ 690 ] ; if ( xx [ 1572 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 40 ] = input [ 164 ] / xx [ 1572 ] ; if ( xx [ 669 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force1' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 41 ] = input [ 165 ] / xx [ 669 ] ; if ( xx [ 1596 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force2' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 42 ] = input [ 166 ] / xx [ 1596 ] ; if ( xx [ 1594 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force3' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 51 ] = input [ 167 ] / xx [ 1594 ] ; if ( xx [ 1618 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force4' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 54 ] = input [ 168 ] / xx [ 1618 ] ; if ( xx [ 975 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force5' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 55 ] = input [ 169 ] / xx [ 975 ] ; if ( xx [ 1616 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force6' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 57 ] = input [ 170 ] / xx [ 1616 ] ; if ( xx [ 973 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force7' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 58 ] = input [ 171 ] / xx [ 973 ] ; if ( xx [ 130 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L1-L2 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 59 ] = input [ 175 ] / xx [ 130 ] ; if ( xx [ 118 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L2-L3 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 60 ] = input [ 176 ] / xx [ 118 ] ; if ( xx [ 53 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L3-L4 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 67 ] = input [ 177 ] / xx [ 53 ] ; if ( xx [ 27 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L4-L5 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 53 ] = input [ 178 ] / xx [ 27 ] ; if ( xx [ 739 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L5-S1 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 27 ] = input [ 179 ] / xx [ 739 ] ; xx [ 68 ] = fabs (
xx [ 66 ] ) > 1.0 ? atan2 ( xx [ 66 ] , 0.0 ) : asin ( xx [ 66 ] ) ; xx [ 66
] = bb [ 1 ] ? xx [ 82 ] * xx [ 78 ] : xx [ 68 ] ; xx [ 68 ] = state [ 31 ] +
pm_math_canonicalAngle ( xx [ 92 ] * xx [ 66 ] + xx [ 82 ] * ( xx [ 66 ] <
0.0 ? - 1.0 : + 1.0 ) * xx [ 93 ] - state [ 31 ] ) ; xx [ 66 ] = cos ( xx [
68 ] ) ; if ( xx [ 66 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L1-S1 Bushing Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } xx [ 66 ] = sin ( xx [ 68 ] ) / xx [ 66 ] ; xx [ 68 ] =
fabs ( xx [ 19 ] ) > 1.0 ? atan2 ( xx [ 19 ] , 0.0 ) : asin ( xx [ 19 ] ) ;
xx [ 19 ] = bb [ 2 ] ? xx [ 82 ] * xx [ 20 ] : xx [ 68 ] ; xx [ 20 ] = state
[ 37 ] + pm_math_canonicalAngle ( xx [ 23 ] * xx [ 19 ] + xx [ 82 ] * ( xx [
19 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 45 ] - state [ 37 ] ) ; xx [ 19 ] = cos (
xx [ 20 ] ) ; if ( xx [ 19 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/T1-S1 Bushing Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } xx [ 19 ] = sin ( xx [ 20 ] ) / xx [ 19 ] ; ii [ 0 ] = bb [
1 ] ? 1 : 0 ; if ( bb [ 1 ] ) * derivErr = 1 ; ii [ 1 ] = bb [ 2 ] ? 1 : 0 ;
if ( bb [ 2 ] ) * derivErr = 1 ; errorResult [ 0 ] = xx [ 929 ] + xx [ 857 ]
+ xx [ 763 ] + xx [ 638 ] + xx [ 672 ] + xx [ 959 ] + xx [ 874 ] + xx [ 768 ]
+ xx [ 685 ] + xx [ 700 ] + xx [ 976 ] + xx [ 891 ] + xx [ 807 ] + xx [ 713 ]
+ xx [ 718 ] + xx [ 1573 ] + xx [ 1580 ] + xx [ 1599 ] + xx [ 1606 ] + xx [
1621 ] + xx [ 1632 ] + xx [ 1642 ] + xx [ 1553 ] + xx [ 888 ] + xx [ 804 ] +
xx [ 710 ] + xx [ 719 ] + xx [ 740 ] + xx [ 0 ] + xx [ 7 ] + xx [ 8 ] + xx [
9 ] + xx [ 11 ] + xx [ 15 ] + xx [ 17 ] + xx [ 21 ] + xx [ 22 ] + xx [ 25 ] +
xx [ 28 ] + xx [ 30 ] + xx [ 34 ] + xx [ 35 ] + xx [ 36 ] + xx [ 40 ] + xx [
41 ] + xx [ 42 ] + xx [ 51 ] + xx [ 54 ] + xx [ 55 ] + xx [ 57 ] + xx [ 58 ]
+ xx [ 59 ] + xx [ 60 ] + xx [ 67 ] + xx [ 53 ] + xx [ 27 ] + xx [ 66 ] + xx
[ 19 ] + ( double ) ( ii [ 0 ] + ii [ 1 ] ) ; xx [ 19 ] = 9.87654321 ; xx [
20 ] = 0.9596745588240466 ; xx [ 23 ] = 0.2811133955290491 ; xx [ 68 ] = xx [
20 ] * xx [ 10 ] + xx [ 23 ] * xx [ 14 ] ; xx [ 69 ] = xx [ 20 ] * xx [ 14 ]
- xx [ 23 ] * xx [ 10 ] ; xx [ 70 ] = xx [ 20 ] * xx [ 6 ] - xx [ 5 ] * xx [
23 ] ; xx [ 71 ] = xx [ 5 ] * xx [ 20 ] + xx [ 23 ] * xx [ 6 ] ; xx [ 5 ] =
xx [ 9 ] * xx [ 549 ] ; xx [ 72 ] = xx [ 11 ] * xx [ 665 ] ; xx [ 73 ] = xx [
11 ] * xx [ 668 ] ; xx [ 74 ] = xx [ 11 ] * xx [ 671 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 660 , xx + 72 , xx + 75 ) ; xx [ 6
] = xx [ 22 ] * xx [ 688 ] ; xx [ 72 ] = xx [ 25 ] * xx [ 697 ] ; xx [ 73 ] =
xx [ 25 ] * xx [ 699 ] ; xx [ 74 ] = xx [ 25 ] * xx [ 691 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 660 , xx + 72 , xx + 92 ) ; xx [ 10
] = xx [ 35 ] * xx [ 716 ] ; xx [ 72 ] = xx [ 36 ] * xx [ 724 ] ; xx [ 73 ] =
xx [ 36 ] * xx [ 696 ] ; xx [ 74 ] = xx [ 36 ] * xx [ 698 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 660 , xx + 72 , xx + 95 ) ; xx [ 11
] = xx [ 53 ] * xx [ 708 ] ; xx [ 72 ] = xx [ 27 ] * xx [ 741 ] ; xx [ 73 ] =
xx [ 27 ] * xx [ 742 ] ; xx [ 74 ] = xx [ 27 ] * xx [ 738 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 660 , xx + 72 , xx + 100 ) ; xx [
14 ] = xx [ 8 ] * xx [ 759 ] ; xx [ 20 ] = xx [ 9 ] * xx [ 550 ] ; xx [ 23 ]
= xx [ 9 ] * xx [ 636 ] ; xx [ 72 ] = xx [ 5 ] ; xx [ 73 ] = xx [ 20 ] ; xx [
74 ] = xx [ 23 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 72 ,
xx + 117 ) ; xx [ 9 ] = xx [ 21 ] * xx [ 767 ] ; xx [ 25 ] = xx [ 22 ] * xx [
673 ] ; xx [ 27 ] = xx [ 22 ] * xx [ 674 ] ; xx [ 72 ] = xx [ 6 ] ; xx [ 73 ]
= xx [ 25 ] ; xx [ 74 ] = xx [ 27 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 61 , xx + 72 , xx + 122 ) ; xx [ 22 ] = xx [ 34 ] * xx [ 810 ] ; xx [ 36 ]
= xx [ 35 ] * xx [ 679 ] ; xx [ 45 ] = xx [ 35 ] * xx [ 680 ] ; xx [ 72 ] =
xx [ 10 ] ; xx [ 73 ] = xx [ 36 ] ; xx [ 74 ] = xx [ 45 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 72 , xx + 125 ) ; xx [ 35
] = xx [ 67 ] * xx [ 827 ] ; xx [ 66 ] = xx [ 53 ] * xx [ 467 ] ; xx [ 72 ] =
xx [ 53 ] * xx [ 709 ] ; xx [ 128 ] = xx [ 11 ] ; xx [ 129 ] = xx [ 66 ] ; xx
[ 130 ] = xx [ 72 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 128
, xx + 141 ) ; xx [ 53 ] = xx [ 7 ] * xx [ 860 ] ; xx [ 73 ] = xx [ 8 ] * xx
[ 150 ] ; xx [ 74 ] = xx [ 8 ] * xx [ 757 ] ; xx [ 128 ] = xx [ 14 ] ; xx [
129 ] = xx [ 73 ] ; xx [ 130 ] = xx [ 74 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 128 , xx + 149 ) ; xx [ 8
] = xx [ 17 ] * xx [ 877 ] ; xx [ 78 ] = xx [ 21 ] * xx [ 627 ] ; xx [ 80 ] =
xx [ 21 ] * xx [ 628 ] ; xx [ 128 ] = xx [ 9 ] ; xx [ 129 ] = xx [ 78 ] ; xx
[ 130 ] = xx [ 80 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 128
, xx + 165 ) ; xx [ 21 ] = xx [ 30 ] * xx [ 894 ] ; xx [ 82 ] = xx [ 34 ] *
xx [ 682 ] ; xx [ 83 ] = xx [ 34 ] * xx [ 683 ] ; xx [ 128 ] = xx [ 22 ] ; xx
[ 129 ] = xx [ 82 ] ; xx [ 130 ] = xx [ 83 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 128 , xx + 168 ) ; xx [
34 ] = xx [ 60 ] * xx [ 911 ] ; xx [ 98 ] = xx [ 67 ] * xx [ 31 ] ; xx [ 31 ]
= xx [ 67 ] * xx [ 52 ] ; xx [ 128 ] = xx [ 35 ] ; xx [ 129 ] = xx [ 98 ] ;
xx [ 130 ] = xx [ 31 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx +
128 , xx + 177 ) ; xx [ 52 ] = xx [ 0 ] * xx [ 928 ] ; xx [ 67 ] = xx [ 7 ] *
xx [ 841 ] ; xx [ 103 ] = xx [ 7 ] * xx [ 842 ] ; xx [ 128 ] = xx [ 53 ] ; xx
[ 129 ] = xx [ 67 ] ; xx [ 130 ] = xx [ 103 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 128 , xx + 180 ) ; xx [ 7
] = xx [ 15 ] * xx [ 962 ] ; xx [ 105 ] = xx [ 17 ] * xx [ 772 ] ; xx [ 111 ]
= xx [ 17 ] * xx [ 773 ] ; xx [ 128 ] = xx [ 8 ] ; xx [ 129 ] = xx [ 105 ] ;
xx [ 130 ] = xx [ 111 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx +
128 , xx + 183 ) ; xx [ 17 ] = xx [ 28 ] * xx [ 979 ] ; xx [ 112 ] = xx [ 30
] * xx [ 789 ] ; xx [ 128 ] = xx [ 30 ] * xx [ 790 ] ; xx [ 129 ] = xx [ 21 ]
; xx [ 130 ] = xx [ 112 ] ; xx [ 131 ] = xx [ 128 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 129 , xx + 186 ) ; xx [
30 ] = xx [ 59 ] * xx [ 996 ] ; xx [ 129 ] = xx [ 60 ] * xx [ 79 ] ; xx [ 79
] = xx [ 60 ] * xx [ 121 ] ; xx [ 189 ] = xx [ 34 ] ; xx [ 190 ] = xx [ 129 ]
; xx [ 191 ] = xx [ 79 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx
+ 189 , xx + 192 ) ; xx [ 60 ] = xx [ 47 ] + xx [ 210 ] * xx [ 39 ] + xx [
250 ] * xx [ 43 ] - xx [ 214 ] * xx [ 44 ] + xx [ 104 ] ; xx [ 47 ] = xx [ 0
] * xx [ 146 ] ; xx [ 104 ] = xx [ 0 ] * xx [ 176 ] ; xx [ 144 ] = xx [ 52 ]
; xx [ 145 ] = xx [ 47 ] ; xx [ 146 ] = xx [ 104 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 144 , xx + 189 ) ; xx [
0 ] = xx [ 15 ] * xx [ 854 ] ; xx [ 121 ] = xx [ 15 ] * xx [ 855 ] ; xx [ 144
] = xx [ 7 ] ; xx [ 145 ] = xx [ 0 ] ; xx [ 146 ] = xx [ 121 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 144 , xx + 195 ) ; xx [
15 ] = xx [ 28 ] * xx [ 871 ] ; xx [ 130 ] = xx [ 28 ] * xx [ 872 ] ; xx [
144 ] = xx [ 17 ] ; xx [ 145 ] = xx [ 15 ] ; xx [ 146 ] = xx [ 130 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 144 , xx + 198 ) ; xx [
144 ] = xx [ 40 ] * xx [ 1535 ] ; xx [ 145 ] = xx [ 40 ] * xx [ 1547 ] ; xx [
146 ] = xx [ 40 ] * xx [ 1571 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1583 , xx + 144 , xx + 201 ) ; xx [ 144 ] = xx [ 41 ] * xx [ 1587 ] ; xx [
145 ] = xx [ 41 ] * xx [ 664 ] ; xx [ 146 ] = xx [ 41 ] * xx [ 666 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1583 , xx + 144 , xx + 204 ) ; xx [
144 ] = xx [ 42 ] * xx [ 1582 ] ; xx [ 145 ] = xx [ 42 ] * xx [ 1598 ] ; xx [
146 ] = xx [ 42 ] * xx [ 1595 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1583 , xx + 144 , xx + 40 ) ; xx [ 144 ] = xx [ 51 ] * xx [ 1609 ] ; xx [ 145
] = xx [ 51 ] * xx [ 1581 ] ; xx [ 146 ] = xx [ 51 ] * xx [ 1597 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1583 , xx + 144 , xx + 207 ) ; xx [
144 ] = xx [ 54 ] * xx [ 1608 ] ; xx [ 145 ] = xx [ 54 ] * xx [ 1620 ] ; xx [
146 ] = xx [ 54 ] * xx [ 1617 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1583 , xx + 144 , xx + 217 ) ; xx [ 144 ] = xx [ 55 ] * xx [ 1629 ] ; xx [
145 ] = xx [ 55 ] * xx [ 1631 ] ; xx [ 146 ] = xx [ 55 ] * xx [ 974 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1583 , xx + 144 , xx + 220 ) ; xx [
144 ] = xx [ 57 ] * xx [ 1645 ] ; xx [ 145 ] = xx [ 57 ] * xx [ 1607 ] ; xx [
146 ] = xx [ 57 ] * xx [ 1619 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1583 , xx + 144 , xx + 223 ) ; xx [ 144 ] = xx [ 58 ] * xx [ 1643 ] ; xx [
145 ] = xx [ 58 ] * xx [ 1529 ] ; xx [ 146 ] = xx [ 58 ] * xx [ 1541 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1583 , xx + 144 , xx + 226 ) ; xx [
28 ] = xx [ 59 ] * xx [ 81 ] ; xx [ 51 ] = xx [ 59 ] * xx [ 109 ] ; xx [ 57 ]
= xx [ 30 ] ; xx [ 58 ] = xx [ 28 ] ; xx [ 59 ] = xx [ 51 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 57 , xx + 144 ) ; if (
bb [ 0 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:system:variableCylindricalSolidBlock:negativeLength"
,
 "The Length parameter of 'draft7/Muscle Forces/WrapedMuscle/Variable Cylindrical Solid1' is negative. Solid dimensions cannot be negative. Set this parameter to a positive number."
, neDiagMgr ) ; } xx [ 54 ] = xx [ 132 ] * fabs ( xx [ 137 ] * xx [ 140 ] ) *
xx [ 154 ] ; xx [ 55 ] = xx [ 1 ] * xx [ 140 ] ; xx [ 57 ] = ( xx [ 157 ] +
xx [ 140 ] * xx [ 140 ] ) * xx [ 54 ] / xx [ 158 ] ; xx [ 229 ] = xx [ 54 ] ;
xx [ 230 ] = xx [ 152 ] ; xx [ 231 ] = xx [ 152 ] ; xx [ 232 ] = xx [ 55 ] ;
xx [ 233 ] = xx [ 57 ] ; xx [ 234 ] = xx [ 57 ] ; xx [ 235 ] = xx [ 153 ] *
xx [ 54 ] ; xx [ 236 ] = xx [ 152 ] ; xx [ 237 ] = xx [ 152 ] ; xx [ 238 ] =
xx [ 152 ] ; if ( ! ( xx [ 54 ] != xx [ 152 ] || xx [ 55 ] == xx [ 152 ] ) )
{ return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:system:variableInertia:invalidZeroMass" ,
 "'draft7/Muscle Forces/WrapedMuscle/Variable Cylindrical Solid1' has zero mass but nonzero center of mass, which is invalid."
, neDiagMgr ) ; } xx [ 54 ] = xx [ 229 ] * xx [ 230 ] ; xx [ 55 ] = xx [ 229
] * xx [ 231 ] ; xx [ 57 ] = xx [ 229 ] * xx [ 232 ] ; xx [ 58 ] = xx [ 229 ]
* xx [ 231 ] * xx [ 232 ] - xx [ 236 ] ; xx [ 59 ] = xx [ 229 ] * xx [ 230 ]
* xx [ 232 ] - xx [ 237 ] ; xx [ 81 ] = xx [ 229 ] * xx [ 230 ] * xx [ 231 ]
- xx [ 238 ] ; xx [ 253 ] = xx [ 229 ] ; xx [ 254 ] = xx [ 54 ] ; xx [ 255 ]
= xx [ 55 ] ; xx [ 256 ] = xx [ 57 ] ; xx [ 257 ] = xx [ 1 ] * ( xx [ 234 ] +
xx [ 235 ] - xx [ 233 ] ) + xx [ 229 ] * xx [ 230 ] * xx [ 230 ] ; xx [ 258 ]
= xx [ 1 ] * ( xx [ 235 ] + xx [ 233 ] - xx [ 234 ] ) + xx [ 229 ] * xx [ 231
] * xx [ 231 ] ; xx [ 259 ] = xx [ 1 ] * ( xx [ 233 ] + xx [ 234 ] - xx [ 235
] ) + xx [ 229 ] * xx [ 232 ] * xx [ 232 ] ; xx [ 260 ] = ( xx [ 58 ] + xx [
58 ] ) * xx [ 1 ] ; xx [ 261 ] = ( xx [ 59 ] + xx [ 59 ] ) * xx [ 1 ] ; xx [
262 ] = ( xx [ 81 ] + xx [ 81 ] ) * xx [ 1 ] ; if ( ! ( xx [ 229 ] != xx [
152 ] || ( xx [ 54 ] == xx [ 152 ] && xx [ 55 ] == xx [ 152 ] && xx [ 57 ] ==
xx [ 152 ] ) ) ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:body:bodyInertia:invalidMassDistribution" ,
 "The rigid component containing 'draft7/Muscle Forces/WrapedMuscle/Variable Cylindrical Solid1' has an invalid mass distribution. It has zero total mass and nonzero first moment of mass."
, neDiagMgr ) ; } xx [ 1 ] = xx [ 253 ] == 0.0 ? 0.0 : xx [ 254 ] / xx [ 253
] ; xx [ 54 ] = xx [ 253 ] == 0.0 ? 0.0 : xx [ 255 ] / xx [ 253 ] ; xx [ 55 ]
= xx [ 253 ] == 0.0 ? 0.0 : xx [ 256 ] / xx [ 253 ] ; xx [ 57 ] = xx [ 1 ] ;
xx [ 58 ] = xx [ 54 ] ; xx [ 59 ] = xx [ 55 ] ; pm_math_Vector3_cross_ra ( xx
+ 1674 , xx + 57 , xx + 137 ) ; pm_math_Vector3_cross_ra ( xx + 1674 , xx +
137 , xx + 57 ) ; xx [ 137 ] = xx [ 18 ] ; xx [ 138 ] = xx [ 50 ] ; xx [ 139
] = xx [ 24 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1664 , xx + 137 ,
xx + 152 ) ; xx [ 18 ] = xx [ 153 ] + xx [ 110 ] ; xx [ 24 ] = xx [ 253 ] *
xx [ 55 ] ; xx [ 50 ] = xx [ 154 ] + xx [ 108 ] ; xx [ 55 ] = xx [ 253 ] * xx
[ 54 ] ; pm_math_Vector3_cross_ra ( xx + 137 , xx + 173 , xx + 108 ) ; xx [
54 ] = xx [ 48 ] + xx [ 211 ] * xx [ 39 ] + xx [ 251 ] * xx [ 43 ] - xx [ 215
] * xx [ 44 ] + xx [ 106 ] ; xx [ 48 ] = xx [ 49 ] + xx [ 212 ] * xx [ 39 ] +
xx [ 252 ] * xx [ 43 ] + xx [ 243 ] * xx [ 44 ] + xx [ 107 ] ; xx [ 137 ] =
xx [ 60 ] + xx [ 108 ] ; xx [ 138 ] = xx [ 54 ] + xx [ 109 ] ; xx [ 139 ] =
xx [ 48 ] + xx [ 110 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1664 , xx
+ 137 , xx + 106 ) ; xx [ 39 ] = xx [ 253 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 152
] + xx [ 99 ] ; xx [ 137 ] = xx [ 57 ] * xx [ 253 ] + xx [ 18 ] * xx [ 24 ] -
xx [ 50 ] * xx [ 55 ] + ( xx [ 106 ] + xx [ 160 ] ) * xx [ 253 ] ; xx [ 138 ]
= xx [ 253 ] * xx [ 58 ] + xx [ 50 ] * xx [ 39 ] - xx [ 1 ] * xx [ 24 ] + (
xx [ 107 ] + xx [ 161 ] ) * xx [ 253 ] ; xx [ 139 ] = xx [ 253 ] * xx [ 59 ]
+ xx [ 1 ] * xx [ 55 ] - xx [ 18 ] * xx [ 39 ] + ( xx [ 108 ] + xx [ 162 ] )
* xx [ 253 ] ; pm_math_Quaternion_xform_ra ( xx + 1664 , xx + 137 , xx + 57 )
; xx [ 106 ] = xx [ 60 ] * xx [ 216 ] - ( xx [ 135 ] + xx [ 189 ] + xx [ 195
] + xx [ 198 ] + xx [ 201 ] + xx [ 204 ] + xx [ 40 ] + xx [ 207 ] + xx [ 217
] + xx [ 220 ] + xx [ 223 ] + xx [ 226 ] + xx [ 144 ] ) + xx [ 57 ] ; xx [
107 ] = xx [ 54 ] * xx [ 216 ] - ( xx [ 163 ] + xx [ 190 ] + xx [ 196 ] + xx
[ 199 ] + xx [ 202 ] + xx [ 205 ] + xx [ 41 ] + xx [ 208 ] + xx [ 218 ] + xx
[ 221 ] + xx [ 224 ] + xx [ 227 ] + xx [ 145 ] ) + xx [ 58 ] ; xx [ 108 ] =
xx [ 48 ] * xx [ 216 ] - ( xx [ 164 ] + xx [ 191 ] + xx [ 197 ] + xx [ 200 ]
+ xx [ 203 ] + xx [ 206 ] + xx [ 42 ] + xx [ 209 ] + xx [ 219 ] + xx [ 222 ]
+ xx [ 225 ] + xx [ 228 ] + xx [ 146 ] ) + xx [ 59 ] ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 106 , xx + 39 ) ; xx [ 42 ] =
xx [ 52 ] + xx [ 936 ] - xx [ 180 ] + xx [ 7 ] - xx [ 183 ] + xx [ 17 ] - xx
[ 186 ] + xx [ 30 ] - xx [ 192 ] + xx [ 46 ] * xx [ 241 ] + xx [ 39 ] ; xx [
43 ] = xx [ 47 ] - xx [ 937 ] - xx [ 181 ] + xx [ 0 ] - xx [ 184 ] + xx [ 15
] - xx [ 187 ] + xx [ 28 ] - xx [ 193 ] + xx [ 37 ] * xx [ 241 ] + xx [ 40 ]
; xx [ 44 ] = xx [ 104 ] - xx [ 136 ] - xx [ 182 ] + xx [ 121 ] - xx [ 185 ]
+ xx [ 130 ] - xx [ 188 ] + xx [ 51 ] - xx [ 194 ] + xx [ 38 ] * xx [ 241 ] +
xx [ 41 ] ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 42 , xx + 37 ) ; xx
[ 40 ] = xx [ 53 ] - 2.556350485252097e-12 * xx [ 120 ] - xx [ 149 ] + xx [ 8
] - xx [ 165 ] + xx [ 21 ] - xx [ 168 ] + xx [ 34 ] - xx [ 177 ] + xx [ 26 ]
* xx [ 298 ] + xx [ 37 ] ; xx [ 41 ] = 1.536679020068778 * xx [ 120 ] + xx [
67 ] - xx [ 150 ] + xx [ 105 ] - xx [ 166 ] + xx [ 112 ] - xx [ 169 ] + xx [
129 ] - xx [ 178 ] + xx [ 29 ] * xx [ 298 ] + xx [ 38 ] ; xx [ 42 ] = xx [
103 ] - xx [ 847 ] - xx [ 151 ] + xx [ 111 ] - xx [ 167 ] + xx [ 128 ] - xx [
170 ] + xx [ 79 ] - xx [ 179 ] + xx [ 32 ] * xx [ 298 ] + xx [ 39 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 40 , xx + 28 ) ; xx [ 37 ] = xx
[ 14 ] + xx [ 765 ] - xx [ 117 ] + xx [ 9 ] - xx [ 122 ] + xx [ 22 ] - xx [
125 ] + xx [ 35 ] - xx [ 141 ] + xx [ 12 ] * xx [ 448 ] + xx [ 28 ] ; xx [ 38
] = xx [ 73 ] - xx [ 133 ] - xx [ 118 ] + xx [ 78 ] - xx [ 123 ] + xx [ 82 ]
- xx [ 126 ] + xx [ 98 ] - xx [ 142 ] + xx [ 13 ] * xx [ 448 ] + xx [ 29 ] ;
xx [ 39 ] = xx [ 74 ] - xx [ 56 ] - xx [ 119 ] + xx [ 80 ] - xx [ 124 ] + xx
[ 83 ] - xx [ 127 ] + xx [ 31 ] - xx [ 143 ] + xx [ 16 ] * xx [ 448 ] + xx [
30 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 37 , xx + 7 ) ; xx [ 12 ]
= - ( xx [ 5 ] - xx [ 75 ] + xx [ 6 ] - xx [ 92 ] + xx [ 10 ] - xx [ 95 ] +
xx [ 11 ] - xx [ 100 ] + xx [ 2 ] * xx [ 148 ] + xx [ 7 ] ) ; xx [ 13 ] = - (
xx [ 65 ] + xx [ 20 ] - xx [ 76 ] + xx [ 25 ] - xx [ 93 ] + xx [ 36 ] - xx [
96 ] + xx [ 66 ] - xx [ 101 ] + xx [ 3 ] * xx [ 148 ] + xx [ 8 ] ) ; xx [ 14
] = - ( xx [ 23 ] - xx [ 33 ] - xx [ 77 ] + xx [ 27 ] - xx [ 94 ] + xx [ 45 ]
- xx [ 97 ] + xx [ 72 ] - xx [ 102 ] + xx [ 4 ] * xx [ 148 ] + xx [ 9 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 68 , xx + 12 , xx + 0 ) ; output [
1 ] = input [ 10 ] ; output [ 3 ] = input [ 11 ] ; output [ 5 ] = input [ 12
] ; output [ 10 ] = input [ 13 ] ; output [ 12 ] = input [ 14 ] ; output [ 14
] = input [ 15 ] ; output [ 16 ] = input [ 16 ] ; output [ 18 ] = input [ 17
] ; output [ 20 ] = input [ 18 ] ; output [ 22 ] = input [ 19 ] ; output [ 24
] = input [ 20 ] ; output [ 26 ] = input [ 21 ] ; output [ 28 ] = input [ 22
] ; output [ 30 ] = input [ 23 ] ; output [ 32 ] = input [ 24 ] ; output [ 33
] = xx [ 0 ] ; output [ 34 ] = xx [ 1 ] ; output [ 35 ] = xx [ 2 ] ; output [
36 ] = xx [ 0 ] ; output [ 37 ] = xx [ 1 ] ; output [ 38 ] = xx [ 2 ] ;
return NULL ; }
