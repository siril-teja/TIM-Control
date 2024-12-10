#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "draft7_a151ee3d_1_geometries.h"
PmfMessageId draft7_a151ee3d_1_compDerivs ( const RuntimeDerivedValuesBundle
* rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * deriv , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
boolean_T bb [ 2 ] ; int ii [ 2 ] ; double xx [ 1558 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void )
discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 1.0 ; xx [ 1 ] = 0.5 ; xx [ 2
] = xx [ 1 ] * state [ 2 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] =
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
151 ] = xx [ 133 ] ; xx [ 132 ] = input [ 8 ] ; xx [ 137 ] = 0.0 ; if ( input
[ 8 ] < xx [ 137 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:system:variableCylindricalSolidBlock:negativeLength"
,
 "The Length parameter of 'draft7/Muscle Forces/WrapedMuscle/Variable Cylindrical Solid1' is negative. Solid dimensions cannot be negative. Set this parameter to a positive number."
, neDiagMgr ) ; } xx [ 140 ] = 0.1 * fabs ( 9.0e-6 * xx [ 132 ] ) *
3.141592653589793 ; xx [ 152 ] = xx [ 1 ] * xx [ 132 ] ; xx [ 153 ] = (
2.7e-5 + xx [ 132 ] * xx [ 132 ] ) * xx [ 140 ] / 12.0 ; xx [ 154 ] = xx [
140 ] ; xx [ 155 ] = xx [ 137 ] ; xx [ 156 ] = xx [ 137 ] ; xx [ 157 ] = xx [
152 ] ; xx [ 158 ] = xx [ 153 ] ; xx [ 159 ] = xx [ 153 ] ; xx [ 160 ] =
4.5e-6 * xx [ 140 ] ; xx [ 161 ] = xx [ 137 ] ; xx [ 162 ] = xx [ 137 ] ; xx
[ 163 ] = xx [ 137 ] ; if ( ! ( xx [ 140 ] != xx [ 137 ] || xx [ 152 ] == xx
[ 137 ] ) ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:system:variableInertia:invalidZeroMass" ,
 "'draft7/Muscle Forces/WrapedMuscle/Variable Cylindrical Solid1' has zero mass but nonzero center of mass, which is invalid."
, neDiagMgr ) ; } xx [ 132 ] = xx [ 154 ] * xx [ 155 ] ; xx [ 140 ] = xx [
154 ] * xx [ 156 ] ; xx [ 152 ] = xx [ 154 ] * xx [ 157 ] ; xx [ 153 ] = xx [
154 ] * xx [ 156 ] * xx [ 157 ] - xx [ 161 ] ; xx [ 164 ] = xx [ 154 ] * xx [
155 ] * xx [ 157 ] - xx [ 162 ] ; xx [ 161 ] = xx [ 154 ] * xx [ 155 ] * xx [
156 ] - xx [ 163 ] ; xx [ 165 ] = xx [ 154 ] ; xx [ 166 ] = xx [ 132 ] ; xx [
167 ] = xx [ 140 ] ; xx [ 168 ] = xx [ 152 ] ; xx [ 169 ] = xx [ 1 ] * ( xx [
159 ] + xx [ 160 ] - xx [ 158 ] ) + xx [ 154 ] * xx [ 155 ] * xx [ 155 ] ; xx
[ 170 ] = xx [ 1 ] * ( xx [ 160 ] + xx [ 158 ] - xx [ 159 ] ) + xx [ 154 ] *
xx [ 156 ] * xx [ 156 ] ; xx [ 171 ] = xx [ 1 ] * ( xx [ 158 ] + xx [ 159 ] -
xx [ 160 ] ) + xx [ 154 ] * xx [ 157 ] * xx [ 157 ] ; xx [ 172 ] = ( xx [ 153
] + xx [ 153 ] ) * xx [ 1 ] ; xx [ 173 ] = ( xx [ 164 ] + xx [ 164 ] ) * xx [
1 ] ; xx [ 174 ] = ( xx [ 161 ] + xx [ 161 ] ) * xx [ 1 ] ; if ( ! ( xx [ 154
] != xx [ 137 ] || ( xx [ 132 ] == xx [ 137 ] && xx [ 140 ] == xx [ 137 ] &&
xx [ 152 ] == xx [ 137 ] ) ) ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:body:bodyInertia:invalidMassDistribution" ,
 "The rigid component containing 'draft7/Muscle Forces/WrapedMuscle/Variable Cylindrical Solid1' has an invalid mass distribution. It has zero total mass and nonzero first moment of mass."
, neDiagMgr ) ; } xx [ 132 ] = - xx [ 174 ] ; xx [ 140 ] = - xx [ 173 ] ; xx
[ 152 ] = - xx [ 172 ] ; xx [ 153 ] = xx [ 170 ] + xx [ 171 ] ; xx [ 154 ] =
xx [ 132 ] ; xx [ 155 ] = xx [ 140 ] ; xx [ 156 ] = xx [ 132 ] ; xx [ 157 ] =
xx [ 171 ] + xx [ 169 ] ; xx [ 158 ] = xx [ 152 ] ; xx [ 159 ] = xx [ 140 ] ;
xx [ 160 ] = xx [ 152 ] ; xx [ 161 ] = xx [ 169 ] + xx [ 170 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 153 , xx + 143 , xx + 175 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 143 , xx + 175 , xx + 184 ) ; xx [ 132 ]
= xx [ 165 ] == 0.0 ? 0.0 : xx [ 167 ] / xx [ 165 ] ; xx [ 140 ] = xx [ 165 ]
* xx [ 132 ] ; xx [ 152 ] = xx [ 165 ] == 0.0 ? 0.0 : xx [ 168 ] / xx [ 165 ]
; xx [ 162 ] = xx [ 165 ] * xx [ 152 ] ; xx [ 163 ] = xx [ 165 ] == 0.0 ? 0.0
: xx [ 166 ] / xx [ 165 ] ; xx [ 164 ] = xx [ 165 ] * xx [ 163 ] ; xx [ 166 ]
= xx [ 138 ] * xx [ 140 ] - xx [ 130 ] * xx [ 162 ] ; xx [ 167 ] = xx [ 141 ]
* xx [ 140 ] - xx [ 162 ] * xx [ 109 ] ; xx [ 168 ] = xx [ 140 ] * xx [ 133 ]
- xx [ 136 ] * xx [ 162 ] ; xx [ 169 ] = xx [ 162 ] * xx [ 129 ] - xx [ 138 ]
* xx [ 164 ] ; xx [ 170 ] = xx [ 139 ] * xx [ 162 ] - xx [ 141 ] * xx [ 164 ]
; xx [ 171 ] = xx [ 142 ] * xx [ 162 ] - xx [ 164 ] * xx [ 133 ] ; xx [ 172 ]
= xx [ 130 ] * xx [ 164 ] - xx [ 140 ] * xx [ 129 ] ; xx [ 173 ] = xx [ 164 ]
* xx [ 109 ] - xx [ 139 ] * xx [ 140 ] ; xx [ 174 ] = xx [ 136 ] * xx [ 164 ]
- xx [ 142 ] * xx [ 140 ] ; pm_math_Matrix3x3_compose_ra ( xx + 143 , xx +
166 , xx + 175 ) ; xx [ 166 ] = 0.09519527419625862 ; xx [ 167 ] = -
0.07787409280153862 ; xx [ 168 ] = - 0.0859897565171039 ;
pm_math_Matrix3x3_postCross_ra ( xx + 175 , xx + 166 , xx + 193 ) ; xx [ 202
] = xx [ 165 ] * xx [ 129 ] ; xx [ 203 ] = xx [ 165 ] * xx [ 139 ] ; xx [ 204
] = xx [ 165 ] * xx [ 142 ] ; xx [ 205 ] = xx [ 165 ] * xx [ 130 ] ; xx [ 206
] = xx [ 165 ] * xx [ 109 ] ; xx [ 207 ] = xx [ 165 ] * xx [ 136 ] ; xx [ 208
] = xx [ 165 ] * xx [ 138 ] ; xx [ 209 ] = xx [ 165 ] * xx [ 141 ] ; xx [ 210
] = xx [ 165 ] * xx [ 133 ] ; pm_math_Matrix3x3_compose_ra ( xx + 143 , xx +
202 , xx + 211 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 211 , xx + 166 , xx
+ 141 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 141 , xx + 166 , xx + 202 ) ;
xx [ 109 ] = xx [ 184 ] - xx [ 193 ] - xx [ 193 ] - xx [ 202 ] ; xx [ 129 ] =
2.481544599738585e-3 ; xx [ 130 ] = xx [ 185 ] - xx [ 194 ] - xx [ 196 ] - xx
[ 203 ] ; xx [ 133 ] = xx [ 186 ] - xx [ 195 ] - xx [ 199 ] - xx [ 204 ] ; xx
[ 136 ] = xx [ 187 ] - xx [ 196 ] - xx [ 194 ] - xx [ 205 ] ; xx [ 138 ] =
2.854853249907261e-3 ; xx [ 139 ] = xx [ 188 ] - xx [ 197 ] - xx [ 197 ] - xx
[ 206 ] ; xx [ 150 ] = xx [ 189 ] - xx [ 198 ] - xx [ 200 ] - xx [ 207 ] ; xx
[ 151 ] = xx [ 190 ] - xx [ 199 ] - xx [ 195 ] - xx [ 208 ] ; xx [ 169 ] = xx
[ 191 ] - xx [ 200 ] - xx [ 198 ] - xx [ 209 ] ; xx [ 170 ] =
2.06157032619784e-3 ; xx [ 171 ] = xx [ 192 ] - xx [ 201 ] - xx [ 201 ] - xx
[ 210 ] ; xx [ 184 ] = xx [ 129 ] + xx [ 109 ] ; xx [ 185 ] = xx [ 130 ] ; xx
[ 186 ] = xx [ 133 ] ; xx [ 187 ] = xx [ 136 ] ; xx [ 188 ] = xx [ 138 ] + xx
[ 139 ] ; xx [ 189 ] = xx [ 150 ] ; xx [ 190 ] = xx [ 151 ] ; xx [ 191 ] = xx
[ 169 ] ; xx [ 192 ] = xx [ 170 ] + xx [ 171 ] ; xx [ 172 ] = xx [ 80 ] * xx
[ 116 ] - xx [ 81 ] * xx [ 115 ] ; xx [ 173 ] = xx [ 116 ] + xx [ 81 ] * xx [
114 ] ; xx [ 174 ] = xx [ 80 ] * xx [ 114 ] + xx [ 115 ] ; xx [ 193 ] = xx [
172 ] ; xx [ 194 ] = xx [ 173 ] ; xx [ 195 ] = - xx [ 174 ] ;
pm_math_Vector3_cross_ra ( xx + 114 , xx + 193 , xx + 196 ) ; xx [ 193 ] = xx
[ 0 ] + xx [ 11 ] * ( xx [ 196 ] - xx [ 113 ] * xx [ 172 ] ) ; xx [ 172 ] =
xx [ 11 ] * ( xx [ 197 ] - xx [ 113 ] * xx [ 173 ] ) - xx [ 80 ] ; xx [ 80 ]
= xx [ 11 ] * ( xx [ 198 ] + xx [ 113 ] * xx [ 174 ] ) - xx [ 81 ] ; xx [ 194
] = xx [ 193 ] ; xx [ 195 ] = xx [ 172 ] ; xx [ 196 ] = xx [ 80 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 184 , xx + 194 , xx + 197 ) ; xx [ 81 ] =
xx [ 175 ] - xx [ 141 ] ; xx [ 141 ] = xx [ 176 ] - xx [ 144 ] ; xx [ 144 ] =
xx [ 177 ] - xx [ 147 ] ; xx [ 147 ] = xx [ 178 ] - xx [ 142 ] ; xx [ 142 ] =
xx [ 179 ] - xx [ 145 ] ; xx [ 145 ] = xx [ 180 ] - xx [ 148 ] ; xx [ 148 ] =
xx [ 181 ] - xx [ 143 ] ; xx [ 143 ] = xx [ 182 ] - xx [ 146 ] ; xx [ 146 ] =
xx [ 183 ] - xx [ 149 ] ; xx [ 173 ] = xx [ 81 ] ; xx [ 174 ] = xx [ 141 ] ;
xx [ 175 ] = xx [ 144 ] ; xx [ 176 ] = xx [ 147 ] ; xx [ 177 ] = xx [ 142 ] ;
xx [ 178 ] = xx [ 145 ] ; xx [ 179 ] = xx [ 148 ] ; xx [ 180 ] = xx [ 143 ] ;
xx [ 181 ] = xx [ 146 ] ; xx [ 200 ] = - 1.160451719412536e-3 ; xx [ 201 ] =
- 0.02864342077244468 ; xx [ 202 ] = - 0.1242034406115433 ;
pm_math_Vector3_cross_ra ( xx + 200 , xx + 194 , xx + 203 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 173 , xx + 203 , xx + 206 ) ; xx [ 149 ] =
xx [ 197 ] + xx [ 206 ] ; xx [ 182 ] = xx [ 198 ] + xx [ 207 ] ; xx [ 183 ] =
xx [ 199 ] + xx [ 208 ] ; xx [ 197 ] = xx [ 149 ] ; xx [ 198 ] = xx [ 182 ] ;
xx [ 199 ] = xx [ 183 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 173 , xx
+ 194 , xx + 206 ) ; xx [ 209 ] = 0.2423553879524476 ; xx [ 220 ] = xx [ 209
] + xx [ 211 ] ; xx [ 221 ] = xx [ 212 ] ; xx [ 222 ] = xx [ 213 ] ; xx [ 223
] = xx [ 214 ] ; xx [ 224 ] = xx [ 209 ] + xx [ 215 ] ; xx [ 225 ] = xx [ 216
] ; xx [ 226 ] = xx [ 217 ] ; xx [ 227 ] = xx [ 218 ] ; xx [ 228 ] = xx [ 209
] + xx [ 219 ] ; pm_math_Matrix3x3_xform_ra ( xx + 220 , xx + 203 , xx + 229
) ; xx [ 210 ] = xx [ 206 ] + xx [ 229 ] ; xx [ 232 ] = xx [ 207 ] + xx [ 230
] ; xx [ 206 ] = xx [ 208 ] + xx [ 231 ] ; xx [ 229 ] = xx [ 210 ] ; xx [ 230
] = xx [ 232 ] ; xx [ 231 ] = xx [ 206 ] ; xx [ 233 ] = xx [ 82 ] ; xx [ 234
] = - xx [ 71 ] ; xx [ 235 ] = xx [ 101 ] ; xx [ 236 ] = - xx [ 103 ] ; xx [
237 ] = - xx [ 78 ] ; xx [ 238 ] = xx [ 83 ] ; xx [ 239 ] = xx [ 97 ] ;
pm_math_Quaternion_xform_ra ( xx + 233 , xx + 237 , xx + 240 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 184 , xx + 240 , xx + 233 ) ;
pm_math_Vector3_cross_ra ( xx + 200 , xx + 240 , xx + 243 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 173 , xx + 243 , xx + 246 ) ; xx [ 71 ] =
xx [ 233 ] + xx [ 246 ] ; xx [ 78 ] = xx [ 234 ] + xx [ 247 ] ; xx [ 82 ] =
xx [ 235 ] + xx [ 248 ] ; xx [ 233 ] = xx [ 71 ] ; xx [ 234 ] = xx [ 78 ] ;
xx [ 235 ] = xx [ 82 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 173 , xx
+ 240 , xx + 246 ) ; pm_math_Matrix3x3_xform_ra ( xx + 220 , xx + 243 , xx +
249 ) ; xx [ 83 ] = xx [ 246 ] + xx [ 249 ] ; xx [ 97 ] = xx [ 247 ] + xx [
250 ] ; xx [ 101 ] = xx [ 248 ] + xx [ 251 ] ; xx [ 246 ] = xx [ 83 ] ; xx [
247 ] = xx [ 97 ] ; xx [ 248 ] = xx [ 101 ] ; xx [ 103 ] =
pm_math_Vector3_dot_ra ( xx + 194 , xx + 233 ) + pm_math_Vector3_dot_ra ( xx
+ 203 , xx + 246 ) ; xx [ 249 ] = xx [ 98 ] ; xx [ 250 ] = - xx [ 100 ] ; xx
[ 251 ] = xx [ 102 ] ; pm_math_Matrix3x3_xform_ra ( xx + 184 , xx + 249 , xx
+ 252 ) ; xx [ 255 ] = - 0.03324995831780794 ; xx [ 256 ] = -
1.450619990863594e-4 ; xx [ 257 ] = 3.441131982155878e-4 ;
pm_math_Matrix3x3_xform_ra ( xx + 173 , xx + 255 , xx + 258 ) ; xx [ 207 ] =
xx [ 252 ] + xx [ 258 ] ; xx [ 208 ] = xx [ 253 ] + xx [ 259 ] ; xx [ 236 ] =
xx [ 254 ] + xx [ 260 ] ; xx [ 252 ] = xx [ 207 ] ; xx [ 253 ] = xx [ 208 ] ;
xx [ 254 ] = xx [ 236 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 173 , xx
+ 249 , xx + 258 ) ; pm_math_Matrix3x3_xform_ra ( xx + 220 , xx + 255 , xx +
261 ) ; xx [ 264 ] = xx [ 258 ] + xx [ 261 ] ; xx [ 265 ] = xx [ 259 ] + xx [
262 ] ; xx [ 258 ] = xx [ 260 ] + xx [ 263 ] ; xx [ 259 ] = xx [ 264 ] ; xx [
260 ] = xx [ 265 ] ; xx [ 261 ] = xx [ 258 ] ; xx [ 262 ] =
pm_math_Vector3_dot_ra ( xx + 194 , xx + 252 ) + pm_math_Vector3_dot_ra ( xx
+ 203 , xx + 259 ) ; xx [ 263 ] = pm_math_Vector3_dot_ra ( xx + 240 , xx +
252 ) + pm_math_Vector3_dot_ra ( xx + 243 , xx + 259 ) ; xx [ 266 ] =
pm_math_Vector3_dot_ra ( xx + 194 , xx + 197 ) + pm_math_Vector3_dot_ra ( xx
+ 203 , xx + 229 ) ; xx [ 267 ] = xx [ 103 ] ; xx [ 268 ] = xx [ 262 ] ; xx [
269 ] = xx [ 103 ] ; xx [ 270 ] = pm_math_Vector3_dot_ra ( xx + 240 , xx +
233 ) + pm_math_Vector3_dot_ra ( xx + 243 , xx + 246 ) ; xx [ 271 ] = xx [
263 ] ; xx [ 272 ] = xx [ 262 ] ; xx [ 273 ] = xx [ 263 ] ; xx [ 274 ] =
pm_math_Vector3_dot_ra ( xx + 249 , xx + 252 ) + pm_math_Vector3_dot_ra ( xx
+ 255 , xx + 259 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 266 , 3 , xx +
197 ) ; xx [ 103 ] = 0.999999 ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin (
state [ 25 ] ) ) > xx [ 103 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] )
{ return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L1/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L1/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 275 ] = xx [ 149 ] ; xx [ 276 ] = xx [ 71 ] ; xx [ 277
] = xx [ 207 ] ; xx [ 278 ] = xx [ 182 ] ; xx [ 279 ] = xx [ 78 ] ; xx [ 280
] = xx [ 208 ] ; xx [ 281 ] = xx [ 183 ] ; xx [ 282 ] = xx [ 82 ] ; xx [ 283
] = xx [ 236 ] ; xx [ 284 ] = xx [ 210 ] ; xx [ 285 ] = xx [ 83 ] ; xx [ 286
] = xx [ 264 ] ; xx [ 287 ] = xx [ 232 ] ; xx [ 288 ] = xx [ 97 ] ; xx [ 289
] = xx [ 265 ] ; xx [ 290 ] = xx [ 206 ] ; xx [ 291 ] = xx [ 101 ] ; xx [ 292
] = xx [ 258 ] ; solveSymmetricPosDef ( xx + 266 , xx + 275 , 3 , 6 , xx +
293 , xx + 197 ) ; xx [ 197 ] = xx [ 182 ] * xx [ 293 ] + xx [ 78 ] * xx [
294 ] + xx [ 208 ] * xx [ 295 ] ; xx [ 198 ] = xx [ 183 ] * xx [ 293 ] + xx [
82 ] * xx [ 294 ] + xx [ 236 ] * xx [ 295 ] ; xx [ 199 ] = xx [ 183 ] * xx [
296 ] + xx [ 82 ] * xx [ 297 ] + xx [ 236 ] * xx [ 298 ] ; xx [ 275 ] = xx [
109 ] - ( xx [ 149 ] * xx [ 293 ] + xx [ 71 ] * xx [ 294 ] + xx [ 207 ] * xx
[ 295 ] ) + xx [ 129 ] ; xx [ 276 ] = xx [ 130 ] - xx [ 197 ] ; xx [ 277 ] =
xx [ 133 ] - xx [ 198 ] ; xx [ 278 ] = xx [ 136 ] - xx [ 197 ] ; xx [ 279 ] =
xx [ 139 ] - ( xx [ 182 ] * xx [ 296 ] + xx [ 78 ] * xx [ 297 ] + xx [ 208 ]
* xx [ 298 ] ) + xx [ 138 ] ; xx [ 280 ] = xx [ 150 ] - xx [ 199 ] ; xx [ 281
] = xx [ 151 ] - xx [ 198 ] ; xx [ 282 ] = xx [ 169 ] - xx [ 199 ] ; xx [ 283
] = xx [ 171 ] - ( xx [ 183 ] * xx [ 299 ] + xx [ 82 ] * xx [ 300 ] + xx [
236 ] * xx [ 301 ] ) + xx [ 170 ] ; pm_math_Matrix3x3_composeTranspose_ra (
xx + 275 , xx + 118 , xx + 284 ) ; pm_math_Matrix3x3_compose_ra ( xx + 118 ,
xx + 284 , xx + 275 ) ; xx [ 284 ] = xx [ 81 ] - ( xx [ 149 ] * xx [ 302 ] +
xx [ 71 ] * xx [ 303 ] + xx [ 207 ] * xx [ 304 ] ) ; xx [ 285 ] = xx [ 141 ]
- ( xx [ 149 ] * xx [ 305 ] + xx [ 71 ] * xx [ 306 ] + xx [ 207 ] * xx [ 307
] ) ; xx [ 286 ] = xx [ 144 ] - ( xx [ 149 ] * xx [ 308 ] + xx [ 71 ] * xx [
309 ] + xx [ 207 ] * xx [ 310 ] ) ; xx [ 287 ] = xx [ 147 ] - ( xx [ 182 ] *
xx [ 302 ] + xx [ 78 ] * xx [ 303 ] + xx [ 208 ] * xx [ 304 ] ) ; xx [ 288 ]
= xx [ 142 ] - ( xx [ 182 ] * xx [ 305 ] + xx [ 78 ] * xx [ 306 ] + xx [ 208
] * xx [ 307 ] ) ; xx [ 289 ] = xx [ 145 ] - ( xx [ 182 ] * xx [ 308 ] + xx [
78 ] * xx [ 309 ] + xx [ 208 ] * xx [ 310 ] ) ; xx [ 290 ] = xx [ 148 ] - (
xx [ 183 ] * xx [ 302 ] + xx [ 82 ] * xx [ 303 ] + xx [ 236 ] * xx [ 304 ] )
; xx [ 291 ] = xx [ 143 ] - ( xx [ 183 ] * xx [ 305 ] + xx [ 82 ] * xx [ 306
] + xx [ 236 ] * xx [ 307 ] ) ; xx [ 292 ] = xx [ 146 ] - ( xx [ 183 ] * xx [
308 ] + xx [ 82 ] * xx [ 309 ] + xx [ 236 ] * xx [ 310 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 284 , xx + 118 , xx + 311 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 118 , xx + 311 , xx + 284 ) ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 200 , xx + 141 ) ; xx [ 81 ] =
4.855313199912053e-13 - xx [ 141 ] ; xx [ 109 ] = 0.01419776350117569 - xx [
142 ] ; xx [ 130 ] = 0.0153662351784256 - xx [ 143 ] ; xx [ 141 ] = xx [ 81 ]
; xx [ 142 ] = xx [ 109 ] ; xx [ 143 ] = xx [ 130 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 284 , xx + 141 , xx + 311 ) ; xx [ 133
] = xx [ 232 ] * xx [ 302 ] + xx [ 97 ] * xx [ 303 ] + xx [ 265 ] * xx [ 304
] ; xx [ 136 ] = xx [ 206 ] * xx [ 302 ] + xx [ 101 ] * xx [ 303 ] + xx [ 258
] * xx [ 304 ] ; xx [ 139 ] = xx [ 206 ] * xx [ 305 ] + xx [ 101 ] * xx [ 306
] + xx [ 258 ] * xx [ 307 ] ; xx [ 320 ] = xx [ 211 ] - ( xx [ 210 ] * xx [
302 ] + xx [ 83 ] * xx [ 303 ] + xx [ 264 ] * xx [ 304 ] ) + xx [ 209 ] ; xx
[ 321 ] = xx [ 212 ] - xx [ 133 ] ; xx [ 322 ] = xx [ 213 ] - xx [ 136 ] ; xx
[ 323 ] = xx [ 214 ] - xx [ 133 ] ; xx [ 324 ] = xx [ 215 ] - ( xx [ 232 ] *
xx [ 305 ] + xx [ 97 ] * xx [ 306 ] + xx [ 265 ] * xx [ 307 ] ) + xx [ 209 ]
; xx [ 325 ] = xx [ 216 ] - xx [ 139 ] ; xx [ 326 ] = xx [ 217 ] - xx [ 136 ]
; xx [ 327 ] = xx [ 218 ] - xx [ 139 ] ; xx [ 328 ] = xx [ 219 ] - ( xx [ 206
] * xx [ 308 ] + xx [ 101 ] * xx [ 309 ] + xx [ 258 ] * xx [ 310 ] ) + xx [
209 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 320 , xx + 118 , xx +
211 ) ; pm_math_Matrix3x3_compose_ra ( xx + 118 , xx + 211 , xx + 320 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 320 , xx + 141 , xx + 118 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 118 , xx + 141 , xx + 211 ) ; xx [ 133 ]
= xx [ 275 ] - xx [ 311 ] - xx [ 311 ] - xx [ 211 ] ; xx [ 136 ] =
3.133881653570001e-6 ; xx [ 139 ] = xx [ 276 ] - xx [ 312 ] - xx [ 314 ] - xx
[ 212 ] ; xx [ 144 ] = xx [ 277 ] - xx [ 313 ] - xx [ 317 ] - xx [ 213 ] ; xx
[ 145 ] = xx [ 278 ] - xx [ 314 ] - xx [ 312 ] - xx [ 214 ] ; xx [ 146 ] =
1.518811043244711e-6 ; xx [ 147 ] = xx [ 279 ] - xx [ 315 ] - xx [ 315 ] - xx
[ 215 ] ; xx [ 148 ] = xx [ 280 ] - xx [ 316 ] - xx [ 318 ] - xx [ 216 ] ; xx
[ 150 ] = xx [ 281 ] - xx [ 317 ] - xx [ 313 ] - xx [ 217 ] ; xx [ 151 ] = xx
[ 282 ] - xx [ 318 ] - xx [ 316 ] - xx [ 218 ] ; xx [ 169 ] =
3.515161026289992e-6 ; xx [ 171 ] = xx [ 283 ] - xx [ 319 ] - xx [ 319 ] - xx
[ 219 ] ; xx [ 211 ] = xx [ 136 ] + xx [ 133 ] ; xx [ 212 ] = xx [ 139 ] ; xx
[ 213 ] = xx [ 144 ] ; xx [ 214 ] = xx [ 145 ] ; xx [ 215 ] = xx [ 146 ] + xx
[ 147 ] ; xx [ 216 ] = xx [ 148 ] ; xx [ 217 ] = xx [ 150 ] ; xx [ 218 ] = xx
[ 151 ] ; xx [ 219 ] = xx [ 169 ] + xx [ 171 ] ; xx [ 197 ] = xx [ 59 ] * xx
[ 87 ] ; xx [ 198 ] = xx [ 59 ] * xx [ 85 ] - xx [ 86 ] ; xx [ 229 ] = - xx [
197 ] ; xx [ 230 ] = xx [ 87 ] ; xx [ 231 ] = xx [ 198 ] ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 229 , xx + 233 ) ; xx [ 199 ] = xx
[ 0 ] + ( xx [ 84 ] * xx [ 197 ] + xx [ 233 ] ) * xx [ 11 ] ; xx [ 197 ] = xx
[ 59 ] + xx [ 11 ] * ( xx [ 234 ] - xx [ 79 ] ) ; xx [ 59 ] = xx [ 11 ] * (
xx [ 235 ] - xx [ 84 ] * xx [ 198 ] ) ; xx [ 229 ] = xx [ 199 ] ; xx [ 230 ]
= xx [ 197 ] ; xx [ 231 ] = xx [ 59 ] ; pm_math_Matrix3x3_xform_ra ( xx + 211
, xx + 229 , xx + 233 ) ; xx [ 79 ] = xx [ 284 ] - xx [ 118 ] ; xx [ 118 ] =
xx [ 285 ] - xx [ 121 ] ; xx [ 121 ] = xx [ 286 ] - xx [ 124 ] ; xx [ 124 ] =
xx [ 287 ] - xx [ 119 ] ; xx [ 119 ] = xx [ 288 ] - xx [ 122 ] ; xx [ 122 ] =
xx [ 289 ] - xx [ 125 ] ; xx [ 125 ] = xx [ 290 ] - xx [ 120 ] ; xx [ 120 ] =
xx [ 291 ] - xx [ 123 ] ; xx [ 123 ] = xx [ 292 ] - xx [ 126 ] ; xx [ 275 ] =
xx [ 79 ] ; xx [ 276 ] = xx [ 118 ] ; xx [ 277 ] = xx [ 121 ] ; xx [ 278 ] =
xx [ 124 ] ; xx [ 279 ] = xx [ 119 ] ; xx [ 280 ] = xx [ 122 ] ; xx [ 281 ] =
xx [ 125 ] ; xx [ 282 ] = xx [ 120 ] ; xx [ 283 ] = xx [ 123 ] ; xx [ 246 ] =
2.484784205278315e-13 ; xx [ 247 ] = 0.01055813361575447 ; xx [ 248 ] = -
0.01718904409441589 ; pm_math_Vector3_cross_ra ( xx + 246 , xx + 229 , xx +
252 ) ; pm_math_Matrix3x3_xform_ra ( xx + 275 , xx + 252 , xx + 259 ) ; xx [
126 ] = xx [ 233 ] + xx [ 259 ] ; xx [ 198 ] = xx [ 234 ] + xx [ 260 ] ; xx [
209 ] = xx [ 235 ] + xx [ 261 ] ; xx [ 233 ] = xx [ 126 ] ; xx [ 234 ] = xx [
198 ] ; xx [ 235 ] = xx [ 209 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx +
275 , xx + 229 , xx + 259 ) ; xx [ 262 ] = 7.704043062217087e-3 ; xx [ 284 ]
= xx [ 262 ] + xx [ 320 ] ; xx [ 285 ] = xx [ 321 ] ; xx [ 286 ] = xx [ 322 ]
; xx [ 287 ] = xx [ 323 ] ; xx [ 288 ] = xx [ 262 ] + xx [ 324 ] ; xx [ 289 ]
= xx [ 325 ] ; xx [ 290 ] = xx [ 326 ] ; xx [ 291 ] = xx [ 327 ] ; xx [ 292 ]
= xx [ 262 ] + xx [ 328 ] ; pm_math_Matrix3x3_xform_ra ( xx + 284 , xx + 252
, xx + 311 ) ; xx [ 263 ] = xx [ 259 ] + xx [ 311 ] ; xx [ 314 ] = xx [ 260 ]
+ xx [ 312 ] ; xx [ 259 ] = xx [ 261 ] + xx [ 313 ] ; xx [ 311 ] = xx [ 263 ]
; xx [ 312 ] = xx [ 314 ] ; xx [ 313 ] = xx [ 259 ] ; xx [ 315 ] = xx [ 57 ]
; xx [ 316 ] = - xx [ 51 ] ; xx [ 317 ] = - xx [ 72 ] ; xx [ 318 ] = - xx [
73 ] ; xx [ 329 ] = xx [ 54 ] ; xx [ 330 ] = xx [ 58 ] ; xx [ 331 ] = - xx [
60 ] ; pm_math_Quaternion_xform_ra ( xx + 315 , xx + 329 , xx + 332 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 211 , xx + 332 , xx + 315 ) ;
pm_math_Vector3_cross_ra ( xx + 246 , xx + 332 , xx + 335 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 275 , xx + 335 , xx + 338 ) ; xx [ 51 ] =
xx [ 315 ] + xx [ 338 ] ; xx [ 54 ] = xx [ 316 ] + xx [ 339 ] ; xx [ 57 ] =
xx [ 317 ] + xx [ 340 ] ; xx [ 315 ] = xx [ 51 ] ; xx [ 316 ] = xx [ 54 ] ;
xx [ 317 ] = xx [ 57 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 275 , xx
+ 332 , xx + 338 ) ; pm_math_Matrix3x3_xform_ra ( xx + 284 , xx + 335 , xx +
341 ) ; xx [ 72 ] = xx [ 338 ] + xx [ 341 ] ; xx [ 73 ] = xx [ 339 ] + xx [
342 ] ; xx [ 260 ] = xx [ 340 ] + xx [ 343 ] ; xx [ 338 ] = xx [ 72 ] ; xx [
339 ] = xx [ 73 ] ; xx [ 340 ] = xx [ 260 ] ; xx [ 261 ] =
pm_math_Vector3_dot_ra ( xx + 229 , xx + 315 ) + pm_math_Vector3_dot_ra ( xx
+ 252 , xx + 338 ) ; xx [ 341 ] = xx [ 70 ] ; xx [ 342 ] = xx [ 60 ] ; xx [
343 ] = xx [ 58 ] ; pm_math_Matrix3x3_xform_ra ( xx + 211 , xx + 341 , xx +
344 ) ; xx [ 318 ] = 0.01512320370375 ; xx [ 319 ] = 4.156663728609323e-13 ;
xx [ 347 ] = 3.670194404924682e-14 ; xx [ 348 ] = xx [ 318 ] ; xx [ 349 ] = -
xx [ 319 ] ; xx [ 350 ] = - xx [ 347 ] ; pm_math_Matrix3x3_xform_ra ( xx +
275 , xx + 348 , xx + 351 ) ; xx [ 354 ] = xx [ 344 ] + xx [ 351 ] ; xx [ 355
] = xx [ 345 ] + xx [ 352 ] ; xx [ 344 ] = xx [ 346 ] + xx [ 353 ] ; xx [ 351
] = xx [ 354 ] ; xx [ 352 ] = xx [ 355 ] ; xx [ 353 ] = xx [ 344 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 275 , xx + 341 , xx + 356 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 284 , xx + 348 , xx + 359 ) ; xx [ 345 ] =
xx [ 356 ] + xx [ 359 ] ; xx [ 346 ] = xx [ 357 ] + xx [ 360 ] ; xx [ 356 ] =
xx [ 358 ] + xx [ 361 ] ; xx [ 357 ] = xx [ 345 ] ; xx [ 358 ] = xx [ 346 ] ;
xx [ 359 ] = xx [ 356 ] ; xx [ 360 ] = pm_math_Vector3_dot_ra ( xx + 229 , xx
+ 351 ) + pm_math_Vector3_dot_ra ( xx + 252 , xx + 357 ) ; xx [ 361 ] =
pm_math_Vector3_dot_ra ( xx + 332 , xx + 351 ) + pm_math_Vector3_dot_ra ( xx
+ 335 , xx + 357 ) ; xx [ 362 ] = pm_math_Vector3_dot_ra ( xx + 229 , xx +
233 ) + pm_math_Vector3_dot_ra ( xx + 252 , xx + 311 ) ; xx [ 363 ] = xx [
261 ] ; xx [ 364 ] = xx [ 360 ] ; xx [ 365 ] = xx [ 261 ] ; xx [ 366 ] =
pm_math_Vector3_dot_ra ( xx + 332 , xx + 315 ) + pm_math_Vector3_dot_ra ( xx
+ 335 , xx + 338 ) ; xx [ 367 ] = xx [ 361 ] ; xx [ 368 ] = xx [ 360 ] ; xx [
369 ] = xx [ 361 ] ; xx [ 370 ] = pm_math_Vector3_dot_ra ( xx + 341 , xx +
351 ) + pm_math_Vector3_dot_ra ( xx + 348 , xx + 357 ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 362 , 3 , xx + 233 ) ; bb [ 0 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 19 ] ) ) > xx [ 103 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ;
if ( bb [ 0 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L2/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L2/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 371 ] = xx [ 126 ] ; xx [ 372 ] = xx [ 51 ] ; xx [ 373
] = xx [ 354 ] ; xx [ 374 ] = xx [ 198 ] ; xx [ 375 ] = xx [ 54 ] ; xx [ 376
] = xx [ 355 ] ; xx [ 377 ] = xx [ 209 ] ; xx [ 378 ] = xx [ 57 ] ; xx [ 379
] = xx [ 344 ] ; xx [ 380 ] = xx [ 263 ] ; xx [ 381 ] = xx [ 72 ] ; xx [ 382
] = xx [ 345 ] ; xx [ 383 ] = xx [ 314 ] ; xx [ 384 ] = xx [ 73 ] ; xx [ 385
] = xx [ 346 ] ; xx [ 386 ] = xx [ 259 ] ; xx [ 387 ] = xx [ 260 ] ; xx [ 388
] = xx [ 356 ] ; solveSymmetricPosDef ( xx + 362 , xx + 371 , 3 , 6 , xx +
389 , xx + 233 ) ; xx [ 233 ] = xx [ 198 ] * xx [ 389 ] + xx [ 54 ] * xx [
390 ] + xx [ 355 ] * xx [ 391 ] ; xx [ 234 ] = xx [ 209 ] * xx [ 389 ] + xx [
57 ] * xx [ 390 ] + xx [ 344 ] * xx [ 391 ] ; xx [ 235 ] = xx [ 209 ] * xx [
392 ] + xx [ 57 ] * xx [ 393 ] + xx [ 344 ] * xx [ 394 ] ; xx [ 371 ] = xx [
133 ] - ( xx [ 126 ] * xx [ 389 ] + xx [ 51 ] * xx [ 390 ] + xx [ 354 ] * xx
[ 391 ] ) + xx [ 136 ] ; xx [ 372 ] = xx [ 139 ] - xx [ 233 ] ; xx [ 373 ] =
xx [ 144 ] - xx [ 234 ] ; xx [ 374 ] = xx [ 145 ] - xx [ 233 ] ; xx [ 375 ] =
xx [ 147 ] - ( xx [ 198 ] * xx [ 392 ] + xx [ 54 ] * xx [ 393 ] + xx [ 355 ]
* xx [ 394 ] ) + xx [ 146 ] ; xx [ 376 ] = xx [ 148 ] - xx [ 235 ] ; xx [ 377
] = xx [ 150 ] - xx [ 234 ] ; xx [ 378 ] = xx [ 151 ] - xx [ 235 ] ; xx [ 379
] = xx [ 171 ] - ( xx [ 209 ] * xx [ 395 ] + xx [ 57 ] * xx [ 396 ] + xx [
344 ] * xx [ 397 ] ) + xx [ 169 ] ; pm_math_Matrix3x3_composeTranspose_ra (
xx + 371 , xx + 88 , xx + 380 ) ; pm_math_Matrix3x3_compose_ra ( xx + 88 , xx
+ 380 , xx + 371 ) ; xx [ 380 ] = xx [ 79 ] - ( xx [ 126 ] * xx [ 398 ] + xx
[ 51 ] * xx [ 399 ] + xx [ 354 ] * xx [ 400 ] ) ; xx [ 381 ] = xx [ 118 ] - (
xx [ 126 ] * xx [ 401 ] + xx [ 51 ] * xx [ 402 ] + xx [ 354 ] * xx [ 403 ] )
; xx [ 382 ] = xx [ 121 ] - ( xx [ 126 ] * xx [ 404 ] + xx [ 51 ] * xx [ 405
] + xx [ 354 ] * xx [ 406 ] ) ; xx [ 383 ] = xx [ 124 ] - ( xx [ 198 ] * xx [
398 ] + xx [ 54 ] * xx [ 399 ] + xx [ 355 ] * xx [ 400 ] ) ; xx [ 384 ] = xx
[ 119 ] - ( xx [ 198 ] * xx [ 401 ] + xx [ 54 ] * xx [ 402 ] + xx [ 355 ] *
xx [ 403 ] ) ; xx [ 385 ] = xx [ 122 ] - ( xx [ 198 ] * xx [ 404 ] + xx [ 54
] * xx [ 405 ] + xx [ 355 ] * xx [ 406 ] ) ; xx [ 386 ] = xx [ 125 ] - ( xx [
209 ] * xx [ 398 ] + xx [ 57 ] * xx [ 399 ] + xx [ 344 ] * xx [ 400 ] ) ; xx
[ 387 ] = xx [ 120 ] - ( xx [ 209 ] * xx [ 401 ] + xx [ 57 ] * xx [ 402 ] +
xx [ 344 ] * xx [ 403 ] ) ; xx [ 388 ] = xx [ 123 ] - ( xx [ 209 ] * xx [ 404
] + xx [ 57 ] * xx [ 405 ] + xx [ 344 ] * xx [ 406 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 380 , xx + 88 , xx + 407 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 88 , xx + 407 , xx + 380 ) ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 246 , xx + 118 ) ; xx [ 79 ] =
7.111565911668068e-14 + xx [ 118 ] ; xx [ 121 ] = 0.01482354797278426 - xx [
119 ] ; xx [ 118 ] = 0.01597192626903846 - xx [ 120 ] ; xx [ 122 ] = - xx [
79 ] ; xx [ 123 ] = xx [ 121 ] ; xx [ 124 ] = xx [ 118 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 380 , xx + 122 , xx + 407 ) ; xx [ 119
] = xx [ 314 ] * xx [ 398 ] + xx [ 73 ] * xx [ 399 ] + xx [ 346 ] * xx [ 400
] ; xx [ 120 ] = xx [ 259 ] * xx [ 398 ] + xx [ 260 ] * xx [ 399 ] + xx [ 356
] * xx [ 400 ] ; xx [ 125 ] = xx [ 259 ] * xx [ 401 ] + xx [ 260 ] * xx [ 402
] + xx [ 356 ] * xx [ 403 ] ; xx [ 416 ] = xx [ 320 ] - ( xx [ 263 ] * xx [
398 ] + xx [ 72 ] * xx [ 399 ] + xx [ 345 ] * xx [ 400 ] ) + xx [ 262 ] ; xx
[ 417 ] = xx [ 321 ] - xx [ 119 ] ; xx [ 418 ] = xx [ 322 ] - xx [ 120 ] ; xx
[ 419 ] = xx [ 323 ] - xx [ 119 ] ; xx [ 420 ] = xx [ 324 ] - ( xx [ 314 ] *
xx [ 401 ] + xx [ 73 ] * xx [ 402 ] + xx [ 346 ] * xx [ 403 ] ) + xx [ 262 ]
; xx [ 421 ] = xx [ 325 ] - xx [ 125 ] ; xx [ 422 ] = xx [ 326 ] - xx [ 120 ]
; xx [ 423 ] = xx [ 327 ] - xx [ 125 ] ; xx [ 424 ] = xx [ 328 ] - ( xx [ 259
] * xx [ 404 ] + xx [ 260 ] * xx [ 405 ] + xx [ 356 ] * xx [ 406 ] ) + xx [
262 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 416 , xx + 88 , xx + 320
) ; pm_math_Matrix3x3_compose_ra ( xx + 88 , xx + 320 , xx + 416 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 416 , xx + 122 , xx + 88 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 88 , xx + 122 , xx + 320 ) ; xx [ 119 ]
= xx [ 371 ] - xx [ 407 ] - xx [ 407 ] - xx [ 320 ] ; xx [ 120 ] =
3.395310932053464e-6 ; xx [ 125 ] = xx [ 372 ] - xx [ 408 ] - xx [ 410 ] - xx
[ 321 ] ; xx [ 133 ] = xx [ 373 ] - xx [ 409 ] - xx [ 413 ] - xx [ 322 ] ; xx
[ 139 ] = xx [ 374 ] - xx [ 410 ] - xx [ 408 ] - xx [ 323 ] ; xx [ 144 ] =
1.744065755080617e-6 ; xx [ 145 ] = xx [ 144 ] + xx [ 375 ] - xx [ 411 ] - xx
[ 411 ] - xx [ 324 ] ; xx [ 147 ] = xx [ 376 ] - xx [ 412 ] - xx [ 414 ] - xx
[ 325 ] ; xx [ 148 ] = xx [ 377 ] - xx [ 413 ] - xx [ 409 ] - xx [ 326 ] ; xx
[ 150 ] = xx [ 378 ] - xx [ 414 ] - xx [ 412 ] - xx [ 327 ] ; xx [ 151 ] =
3.911790730232107e-6 ; xx [ 171 ] = xx [ 151 ] + xx [ 379 ] - xx [ 415 ] - xx
[ 415 ] - xx [ 328 ] ; xx [ 320 ] = xx [ 120 ] + xx [ 119 ] ; xx [ 321 ] = xx
[ 125 ] ; xx [ 322 ] = xx [ 133 ] ; xx [ 323 ] = xx [ 139 ] ; xx [ 324 ] = xx
[ 145 ] ; xx [ 325 ] = xx [ 147 ] ; xx [ 326 ] = xx [ 148 ] ; xx [ 327 ] = xx
[ 150 ] ; xx [ 328 ] = xx [ 171 ] ; xx [ 233 ] = xx [ 52 ] ; xx [ 234 ] = xx
[ 53 ] ; xx [ 235 ] = xx [ 55 ] ; xx [ 261 ] = xx [ 55 ] * xx [ 50 ] ; xx [
262 ] = xx [ 50 ] * xx [ 52 ] + xx [ 53 ] ; xx [ 311 ] = xx [ 261 ] ; xx [
312 ] = xx [ 55 ] ; xx [ 313 ] = - xx [ 262 ] ; pm_math_Vector3_cross_ra ( xx
+ 233 , xx + 311 , xx + 315 ) ; xx [ 233 ] = xx [ 0 ] + ( xx [ 315 ] - xx [
261 ] * xx [ 31 ] ) * xx [ 11 ] ; xx [ 234 ] = xx [ 11 ] * ( xx [ 316 ] - xx
[ 56 ] ) - xx [ 50 ] ; xx [ 50 ] = xx [ 11 ] * ( xx [ 317 ] + xx [ 31 ] * xx
[ 262 ] ) ; xx [ 311 ] = xx [ 233 ] ; xx [ 312 ] = xx [ 234 ] ; xx [ 313 ] =
xx [ 50 ] ; pm_math_Matrix3x3_xform_ra ( xx + 320 , xx + 311 , xx + 315 ) ;
xx [ 56 ] = xx [ 380 ] - xx [ 88 ] ; xx [ 88 ] = xx [ 381 ] - xx [ 91 ] ; xx
[ 91 ] = xx [ 382 ] - xx [ 94 ] ; xx [ 94 ] = xx [ 383 ] - xx [ 89 ] ; xx [
89 ] = xx [ 384 ] - xx [ 92 ] ; xx [ 92 ] = xx [ 385 ] - xx [ 95 ] ; xx [ 95
] = xx [ 386 ] - xx [ 90 ] ; xx [ 90 ] = xx [ 387 ] - xx [ 93 ] ; xx [ 93 ] =
xx [ 388 ] - xx [ 96 ] ; xx [ 371 ] = xx [ 56 ] ; xx [ 372 ] = xx [ 88 ] ; xx
[ 373 ] = xx [ 91 ] ; xx [ 374 ] = xx [ 94 ] ; xx [ 375 ] = xx [ 89 ] ; xx [
376 ] = xx [ 92 ] ; xx [ 377 ] = xx [ 95 ] ; xx [ 378 ] = xx [ 90 ] ; xx [
379 ] = xx [ 93 ] ; xx [ 338 ] = - 3.478043091554657e-14 ; xx [ 339 ] =
8.616599387917045e-3 ; xx [ 340 ] = - 0.01781379291801384 ;
pm_math_Vector3_cross_ra ( xx + 338 , xx + 311 , xx + 351 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 371 , xx + 351 , xx + 357 ) ; xx [ 96 ] =
xx [ 315 ] + xx [ 357 ] ; xx [ 235 ] = xx [ 316 ] + xx [ 358 ] ; xx [ 261 ] =
xx [ 317 ] + xx [ 359 ] ; xx [ 315 ] = xx [ 96 ] ; xx [ 316 ] = xx [ 235 ] ;
xx [ 317 ] = xx [ 261 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 371 , xx
+ 311 , xx + 357 ) ; xx [ 262 ] = 8.355848350904705e-3 ; xx [ 380 ] = xx [
262 ] + xx [ 416 ] ; xx [ 381 ] = xx [ 417 ] ; xx [ 382 ] = xx [ 418 ] ; xx [
383 ] = xx [ 419 ] ; xx [ 384 ] = xx [ 262 ] + xx [ 420 ] ; xx [ 385 ] = xx [
421 ] ; xx [ 386 ] = xx [ 422 ] ; xx [ 387 ] = xx [ 423 ] ; xx [ 388 ] = xx [
262 ] + xx [ 424 ] ; pm_math_Matrix3x3_xform_ra ( xx + 380 , xx + 351 , xx +
407 ) ; xx [ 360 ] = xx [ 357 ] + xx [ 407 ] ; xx [ 361 ] = xx [ 358 ] + xx [
408 ] ; xx [ 357 ] = xx [ 359 ] + xx [ 409 ] ; xx [ 407 ] = xx [ 360 ] ; xx [
408 ] = xx [ 361 ] ; xx [ 409 ] = xx [ 357 ] ; xx [ 358 ] = xx [ 49 ] * xx [
26 ] ; xx [ 359 ] = xx [ 48 ] * xx [ 37 ] ; xx [ 410 ] = xx [ 358 ] + xx [
359 ] ; xx [ 411 ] = xx [ 36 ] * xx [ 26 ] ; xx [ 412 ] = xx [ 36 ] * xx [ 37
] ; xx [ 413 ] = xx [ 411 ] * xx [ 26 ] + xx [ 412 ] * xx [ 37 ] ; xx [ 414 ]
= xx [ 11 ] * ( xx [ 29 ] * xx [ 410 ] + xx [ 413 ] ) - xx [ 36 ] ; xx [ 415
] = xx [ 29 ] * xx [ 412 ] ; xx [ 412 ] = xx [ 48 ] + ( xx [ 415 ] - xx [ 37
] * xx [ 410 ] ) * xx [ 11 ] ; xx [ 425 ] = xx [ 29 ] * xx [ 411 ] ; xx [ 411
] = xx [ 49 ] + ( xx [ 425 ] - xx [ 26 ] * xx [ 410 ] ) * xx [ 11 ] ; xx [
426 ] = xx [ 414 ] ; xx [ 427 ] = xx [ 412 ] ; xx [ 428 ] = - xx [ 411 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 320 , xx + 426 , xx + 429 ) ;
pm_math_Vector3_cross_ra ( xx + 338 , xx + 426 , xx + 432 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 371 , xx + 432 , xx + 435 ) ; xx [ 410 ] =
xx [ 429 ] + xx [ 435 ] ; xx [ 438 ] = xx [ 430 ] + xx [ 436 ] ; xx [ 429 ] =
xx [ 431 ] + xx [ 437 ] ; xx [ 435 ] = xx [ 410 ] ; xx [ 436 ] = xx [ 438 ] ;
xx [ 437 ] = xx [ 429 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 371 , xx
+ 426 , xx + 439 ) ; pm_math_Matrix3x3_xform_ra ( xx + 380 , xx + 432 , xx +
442 ) ; xx [ 430 ] = xx [ 439 ] + xx [ 442 ] ; xx [ 431 ] = xx [ 440 ] + xx [
443 ] ; xx [ 439 ] = xx [ 441 ] + xx [ 444 ] ; xx [ 440 ] = xx [ 430 ] ; xx [
441 ] = xx [ 431 ] ; xx [ 442 ] = xx [ 439 ] ; xx [ 443 ] =
pm_math_Vector3_dot_ra ( xx + 311 , xx + 435 ) + pm_math_Vector3_dot_ra ( xx
+ 351 , xx + 440 ) ; xx [ 444 ] = 0.0139587874710942 ; xx [ 445 ] =
3.287582437116741e-14 ; xx [ 446 ] = 1.135158784431775e-14 ; xx [ 447 ] = xx
[ 444 ] ; xx [ 448 ] = xx [ 445 ] ; xx [ 449 ] = - xx [ 446 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 371 , xx + 447 , xx + 450 ) ; xx [ 453 ] =
xx [ 49 ] * xx [ 125 ] + xx [ 48 ] * xx [ 133 ] + xx [ 450 ] ; xx [ 454 ] =
xx [ 145 ] * xx [ 49 ] + xx [ 48 ] * xx [ 147 ] + xx [ 451 ] ; xx [ 450 ] =
xx [ 49 ] * xx [ 150 ] + xx [ 171 ] * xx [ 48 ] + xx [ 452 ] ; xx [ 455 ] =
xx [ 453 ] ; xx [ 456 ] = xx [ 454 ] ; xx [ 457 ] = xx [ 450 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 380 , xx + 447 , xx + 458 ) ; xx [ 451 ] =
xx [ 49 ] * xx [ 94 ] + xx [ 48 ] * xx [ 95 ] + xx [ 458 ] ; xx [ 452 ] = xx
[ 49 ] * xx [ 89 ] + xx [ 48 ] * xx [ 90 ] + xx [ 459 ] ; xx [ 458 ] = xx [
49 ] * xx [ 92 ] + xx [ 48 ] * xx [ 93 ] + xx [ 460 ] ; xx [ 459 ] = xx [ 451
] ; xx [ 460 ] = xx [ 452 ] ; xx [ 461 ] = xx [ 458 ] ; xx [ 462 ] =
pm_math_Vector3_dot_ra ( xx + 311 , xx + 455 ) + pm_math_Vector3_dot_ra ( xx
+ 351 , xx + 459 ) ; xx [ 463 ] = pm_math_Vector3_dot_ra ( xx + 426 , xx +
455 ) + pm_math_Vector3_dot_ra ( xx + 432 , xx + 459 ) ; xx [ 464 ] =
pm_math_Vector3_dot_ra ( xx + 311 , xx + 315 ) + pm_math_Vector3_dot_ra ( xx
+ 351 , xx + 407 ) ; xx [ 465 ] = xx [ 443 ] ; xx [ 466 ] = xx [ 462 ] ; xx [
467 ] = xx [ 443 ] ; xx [ 468 ] = pm_math_Vector3_dot_ra ( xx + 426 , xx +
435 ) + pm_math_Vector3_dot_ra ( xx + 432 , xx + 440 ) ; xx [ 469 ] = xx [
463 ] ; xx [ 470 ] = xx [ 462 ] ; xx [ 471 ] = xx [ 463 ] ; xx [ 472 ] = xx [
454 ] * xx [ 49 ] + xx [ 450 ] * xx [ 48 ] + pm_math_Vector3_dot_ra ( xx +
447 , xx + 459 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 464 , 3 , xx + 315
) ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 13 ] ) ) > xx [ 103 ] ;
ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L3/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L3/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 473 ] = xx [ 96 ] ; xx [ 474 ] = xx [ 410 ] ; xx [ 475
] = xx [ 453 ] ; xx [ 476 ] = xx [ 235 ] ; xx [ 477 ] = xx [ 438 ] ; xx [ 478
] = xx [ 454 ] ; xx [ 479 ] = xx [ 261 ] ; xx [ 480 ] = xx [ 429 ] ; xx [ 481
] = xx [ 450 ] ; xx [ 482 ] = xx [ 360 ] ; xx [ 483 ] = xx [ 430 ] ; xx [ 484
] = xx [ 451 ] ; xx [ 485 ] = xx [ 361 ] ; xx [ 486 ] = xx [ 431 ] ; xx [ 487
] = xx [ 452 ] ; xx [ 488 ] = xx [ 357 ] ; xx [ 489 ] = xx [ 439 ] ; xx [ 490
] = xx [ 458 ] ; solveSymmetricPosDef ( xx + 464 , xx + 473 , 3 , 6 , xx +
491 , xx + 315 ) ; xx [ 315 ] = xx [ 235 ] * xx [ 491 ] + xx [ 438 ] * xx [
492 ] + xx [ 454 ] * xx [ 493 ] ; xx [ 316 ] = xx [ 261 ] * xx [ 491 ] + xx [
429 ] * xx [ 492 ] + xx [ 450 ] * xx [ 493 ] ; xx [ 317 ] = xx [ 261 ] * xx [
494 ] + xx [ 429 ] * xx [ 495 ] + xx [ 450 ] * xx [ 496 ] ; xx [ 473 ] = xx [
119 ] - ( xx [ 96 ] * xx [ 491 ] + xx [ 410 ] * xx [ 492 ] + xx [ 453 ] * xx
[ 493 ] ) + xx [ 120 ] ; xx [ 474 ] = xx [ 125 ] - xx [ 315 ] ; xx [ 475 ] =
xx [ 133 ] - xx [ 316 ] ; xx [ 476 ] = xx [ 139 ] - xx [ 315 ] ; xx [ 477 ] =
xx [ 145 ] - ( xx [ 235 ] * xx [ 494 ] + xx [ 438 ] * xx [ 495 ] + xx [ 454 ]
* xx [ 496 ] ) ; xx [ 478 ] = xx [ 147 ] - xx [ 317 ] ; xx [ 479 ] = xx [ 148
] - xx [ 316 ] ; xx [ 480 ] = xx [ 150 ] - xx [ 317 ] ; xx [ 481 ] = xx [ 171
] - ( xx [ 261 ] * xx [ 497 ] + xx [ 429 ] * xx [ 498 ] + xx [ 450 ] * xx [
499 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 473 , xx + 61 , xx +
482 ) ; pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 482 , xx + 473 ) ; xx [
482 ] = xx [ 56 ] - ( xx [ 96 ] * xx [ 500 ] + xx [ 410 ] * xx [ 501 ] + xx [
453 ] * xx [ 502 ] ) ; xx [ 483 ] = xx [ 88 ] - ( xx [ 96 ] * xx [ 503 ] + xx
[ 410 ] * xx [ 504 ] + xx [ 453 ] * xx [ 505 ] ) ; xx [ 484 ] = xx [ 91 ] - (
xx [ 96 ] * xx [ 506 ] + xx [ 410 ] * xx [ 507 ] + xx [ 453 ] * xx [ 508 ] )
; xx [ 485 ] = xx [ 94 ] - ( xx [ 235 ] * xx [ 500 ] + xx [ 438 ] * xx [ 501
] + xx [ 454 ] * xx [ 502 ] ) ; xx [ 486 ] = xx [ 89 ] - ( xx [ 235 ] * xx [
503 ] + xx [ 438 ] * xx [ 504 ] + xx [ 454 ] * xx [ 505 ] ) ; xx [ 487 ] = xx
[ 92 ] - ( xx [ 235 ] * xx [ 506 ] + xx [ 438 ] * xx [ 507 ] + xx [ 454 ] *
xx [ 508 ] ) ; xx [ 488 ] = xx [ 95 ] - ( xx [ 261 ] * xx [ 500 ] + xx [ 429
] * xx [ 501 ] + xx [ 450 ] * xx [ 502 ] ) ; xx [ 489 ] = xx [ 90 ] - ( xx [
261 ] * xx [ 503 ] + xx [ 429 ] * xx [ 504 ] + xx [ 450 ] * xx [ 505 ] ) ; xx
[ 490 ] = xx [ 93 ] - ( xx [ 261 ] * xx [ 506 ] + xx [ 429 ] * xx [ 507 ] +
xx [ 450 ] * xx [ 508 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 482
, xx + 61 , xx + 509 ) ; pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 509 ,
xx + 482 ) ; xx [ 88 ] = xx [ 31 ] ; xx [ 89 ] = xx [ 52 ] ; xx [ 90 ] = xx [
53 ] ; xx [ 91 ] = xx [ 55 ] ; pm_math_Quaternion_xform_ra ( xx + 88 , xx +
338 , xx + 92 ) ; xx [ 31 ] = 1.222885353421585e-13 - xx [ 92 ] ; xx [ 52 ] =
0.01371330802384472 - xx [ 93 ] ; xx [ 53 ] = 0.01482112808326479 - xx [ 94 ]
; xx [ 92 ] = xx [ 31 ] ; xx [ 93 ] = xx [ 52 ] ; xx [ 94 ] = xx [ 53 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 482 , xx + 92 , xx + 509 ) ; xx [ 55 ]
= xx [ 361 ] * xx [ 500 ] + xx [ 431 ] * xx [ 501 ] + xx [ 452 ] * xx [ 502 ]
; xx [ 56 ] = xx [ 357 ] * xx [ 500 ] + xx [ 439 ] * xx [ 501 ] + xx [ 458 ]
* xx [ 502 ] ; xx [ 95 ] = xx [ 357 ] * xx [ 503 ] + xx [ 439 ] * xx [ 504 ]
+ xx [ 458 ] * xx [ 505 ] ; xx [ 518 ] = xx [ 416 ] - ( xx [ 360 ] * xx [ 500
] + xx [ 430 ] * xx [ 501 ] + xx [ 451 ] * xx [ 502 ] ) + xx [ 262 ] ; xx [
519 ] = xx [ 417 ] - xx [ 55 ] ; xx [ 520 ] = xx [ 418 ] - xx [ 56 ] ; xx [
521 ] = xx [ 419 ] - xx [ 55 ] ; xx [ 522 ] = xx [ 420 ] - ( xx [ 361 ] * xx
[ 503 ] + xx [ 431 ] * xx [ 504 ] + xx [ 452 ] * xx [ 505 ] ) + xx [ 262 ] ;
xx [ 523 ] = xx [ 421 ] - xx [ 95 ] ; xx [ 524 ] = xx [ 422 ] - xx [ 56 ] ;
xx [ 525 ] = xx [ 423 ] - xx [ 95 ] ; xx [ 526 ] = xx [ 424 ] - ( xx [ 357 ]
* xx [ 506 ] + xx [ 439 ] * xx [ 507 ] + xx [ 458 ] * xx [ 508 ] ) + xx [ 262
] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 518 , xx + 61 , xx + 416 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 416 , xx + 518 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 518 , xx + 92 , xx + 61 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 61 , xx + 92 , xx + 416 ) ; xx [ 55 ] =
xx [ 473 ] - xx [ 509 ] - xx [ 509 ] - xx [ 416 ] ; xx [ 56 ] =
2.872594976382685e-6 ; xx [ 95 ] = xx [ 474 ] - xx [ 510 ] - xx [ 512 ] - xx
[ 417 ] ; xx [ 119 ] = xx [ 475 ] - xx [ 511 ] - xx [ 515 ] - xx [ 418 ] ; xx
[ 125 ] = xx [ 476 ] - xx [ 512 ] - xx [ 510 ] - xx [ 419 ] ; xx [ 133 ] =
1.933045481959352e-6 ; xx [ 139 ] = xx [ 133 ] + xx [ 477 ] - xx [ 513 ] - xx
[ 513 ] - xx [ 420 ] ; xx [ 145 ] = xx [ 478 ] - xx [ 514 ] - xx [ 516 ] - xx
[ 421 ] ; xx [ 147 ] = xx [ 479 ] - xx [ 515 ] - xx [ 511 ] - xx [ 422 ] ; xx
[ 148 ] = xx [ 480 ] - xx [ 516 ] - xx [ 514 ] - xx [ 423 ] ; xx [ 150 ] =
3.740002603775385e-6 ; xx [ 171 ] = xx [ 150 ] + xx [ 481 ] - xx [ 517 ] - xx
[ 517 ] - xx [ 424 ] ; xx [ 416 ] = xx [ 56 ] + xx [ 55 ] ; xx [ 417 ] = xx [
95 ] ; xx [ 418 ] = xx [ 119 ] ; xx [ 419 ] = xx [ 125 ] ; xx [ 420 ] = xx [
139 ] ; xx [ 421 ] = xx [ 145 ] ; xx [ 422 ] = xx [ 147 ] ; xx [ 423 ] = xx [
148 ] ; xx [ 424 ] = xx [ 171 ] ; xx [ 262 ] = xx [ 0 ] - ( xx [ 35 ] + xx [
38 ] ) * xx [ 11 ] ; xx [ 35 ] = ( xx [ 34 ] + xx [ 33 ] ) * xx [ 11 ] ; xx [
315 ] = xx [ 262 ] ; xx [ 316 ] = xx [ 32 ] ; xx [ 317 ] = xx [ 35 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 416 , xx + 315 , xx + 407 ) ; xx [ 33 ] =
xx [ 482 ] - xx [ 61 ] ; xx [ 34 ] = xx [ 483 ] - xx [ 64 ] ; xx [ 38 ] = xx
[ 484 ] - xx [ 67 ] ; xx [ 61 ] = xx [ 485 ] - xx [ 62 ] ; xx [ 62 ] = xx [
486 ] - xx [ 65 ] ; xx [ 64 ] = xx [ 487 ] - xx [ 68 ] ; xx [ 65 ] = xx [ 488
] - xx [ 63 ] ; xx [ 63 ] = xx [ 489 ] - xx [ 66 ] ; xx [ 66 ] = xx [ 490 ] -
xx [ 69 ] ; xx [ 473 ] = xx [ 33 ] ; xx [ 474 ] = xx [ 34 ] ; xx [ 475 ] = xx
[ 38 ] ; xx [ 476 ] = xx [ 61 ] ; xx [ 477 ] = xx [ 62 ] ; xx [ 478 ] = xx [
64 ] ; xx [ 479 ] = xx [ 65 ] ; xx [ 480 ] = xx [ 63 ] ; xx [ 481 ] = xx [ 66
] ; xx [ 67 ] = 6.664202092713185e-14 ; xx [ 68 ] = 6.161981679940124e-3 ; xx
[ 69 ] = - 0.01687376340899878 ; pm_math_Vector3_cross_ra ( xx + 67 , xx +
315 , xx + 435 ) ; pm_math_Matrix3x3_xform_ra ( xx + 473 , xx + 435 , xx +
440 ) ; xx [ 443 ] = xx [ 407 ] + xx [ 440 ] ; xx [ 455 ] = xx [ 408 ] + xx [
441 ] ; xx [ 407 ] = xx [ 409 ] + xx [ 442 ] ; xx [ 440 ] = xx [ 443 ] ; xx [
441 ] = xx [ 455 ] ; xx [ 442 ] = xx [ 407 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 473 , xx + 315 , xx + 459 ) ; xx [
408 ] = 8.201635464916061e-3 ; xx [ 482 ] = xx [ 408 ] + xx [ 518 ] ; xx [
483 ] = xx [ 519 ] ; xx [ 484 ] = xx [ 520 ] ; xx [ 485 ] = xx [ 521 ] ; xx [
486 ] = xx [ 408 ] + xx [ 522 ] ; xx [ 487 ] = xx [ 523 ] ; xx [ 488 ] = xx [
524 ] ; xx [ 489 ] = xx [ 525 ] ; xx [ 490 ] = xx [ 408 ] + xx [ 526 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 482 , xx + 435 , xx + 509 ) ; xx [ 409 ] =
xx [ 459 ] + xx [ 509 ] ; xx [ 456 ] = xx [ 460 ] + xx [ 510 ] ; xx [ 457 ] =
xx [ 461 ] + xx [ 511 ] ; xx [ 459 ] = xx [ 409 ] ; xx [ 460 ] = xx [ 456 ] ;
xx [ 461 ] = xx [ 457 ] ; xx [ 462 ] = xx [ 25 ] * xx [ 19 ] ; xx [ 463 ] =
xx [ 24 ] * xx [ 23 ] ; xx [ 509 ] = xx [ 462 ] + xx [ 463 ] ; xx [ 510 ] =
xx [ 22 ] * xx [ 19 ] ; xx [ 511 ] = xx [ 22 ] * xx [ 23 ] ; xx [ 512 ] = xx
[ 510 ] * xx [ 19 ] + xx [ 511 ] * xx [ 23 ] ; xx [ 513 ] = xx [ 22 ] + xx [
11 ] * ( xx [ 20 ] * xx [ 509 ] - xx [ 512 ] ) ; xx [ 514 ] = xx [ 20 ] * xx
[ 511 ] ; xx [ 511 ] = xx [ 24 ] - ( xx [ 514 ] + xx [ 23 ] * xx [ 509 ] ) *
xx [ 11 ] ; xx [ 515 ] = xx [ 20 ] * xx [ 510 ] ; xx [ 510 ] = ( xx [ 515 ] +
xx [ 19 ] * xx [ 509 ] ) * xx [ 11 ] - xx [ 25 ] ; xx [ 527 ] = xx [ 513 ] ;
xx [ 528 ] = xx [ 511 ] ; xx [ 529 ] = xx [ 510 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 416 , xx + 527 , xx + 530 ) ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 527 , xx + 533 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 473 , xx + 533 , xx + 536 ) ; xx [ 509 ] =
xx [ 530 ] + xx [ 536 ] ; xx [ 516 ] = xx [ 531 ] + xx [ 537 ] ; xx [ 517 ] =
xx [ 532 ] + xx [ 538 ] ; xx [ 530 ] = xx [ 509 ] ; xx [ 531 ] = xx [ 516 ] ;
xx [ 532 ] = xx [ 517 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 473 , xx
+ 527 , xx + 536 ) ; pm_math_Matrix3x3_xform_ra ( xx + 482 , xx + 533 , xx +
539 ) ; xx [ 542 ] = xx [ 536 ] + xx [ 539 ] ; xx [ 543 ] = xx [ 537 ] + xx [
540 ] ; xx [ 536 ] = xx [ 538 ] + xx [ 541 ] ; xx [ 537 ] = xx [ 542 ] ; xx [
538 ] = xx [ 543 ] ; xx [ 539 ] = xx [ 536 ] ; xx [ 540 ] =
pm_math_Vector3_dot_ra ( xx + 315 , xx + 530 ) + pm_math_Vector3_dot_ra ( xx
+ 435 , xx + 537 ) ; xx [ 541 ] = 0.01011063572343469 ; xx [ 544 ] =
6.460835926211764e-14 ; xx [ 545 ] = 1.633765181136557e-14 ; xx [ 546 ] = xx
[ 541 ] ; xx [ 547 ] = - xx [ 544 ] ; xx [ 548 ] = xx [ 545 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 473 , xx + 546 , xx + 549 ) ; xx [ 552 ] =
xx [ 25 ] * xx [ 95 ] + xx [ 24 ] * xx [ 119 ] + xx [ 549 ] ; xx [ 553 ] = xx
[ 139 ] * xx [ 25 ] + xx [ 24 ] * xx [ 145 ] + xx [ 550 ] ; xx [ 549 ] = xx [
25 ] * xx [ 148 ] + xx [ 171 ] * xx [ 24 ] + xx [ 551 ] ; xx [ 554 ] = xx [
552 ] ; xx [ 555 ] = xx [ 553 ] ; xx [ 556 ] = xx [ 549 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 482 , xx + 546 , xx + 557 ) ; xx [ 550 ] =
xx [ 25 ] * xx [ 61 ] + xx [ 24 ] * xx [ 65 ] + xx [ 557 ] ; xx [ 551 ] = xx
[ 25 ] * xx [ 62 ] + xx [ 24 ] * xx [ 63 ] + xx [ 558 ] ; xx [ 557 ] = xx [
25 ] * xx [ 64 ] + xx [ 24 ] * xx [ 66 ] + xx [ 559 ] ; xx [ 558 ] = xx [ 550
] ; xx [ 559 ] = xx [ 551 ] ; xx [ 560 ] = xx [ 557 ] ; xx [ 561 ] =
pm_math_Vector3_dot_ra ( xx + 315 , xx + 554 ) + pm_math_Vector3_dot_ra ( xx
+ 435 , xx + 558 ) ; xx [ 562 ] = pm_math_Vector3_dot_ra ( xx + 527 , xx +
554 ) + pm_math_Vector3_dot_ra ( xx + 533 , xx + 558 ) ; xx [ 563 ] =
pm_math_Vector3_dot_ra ( xx + 315 , xx + 440 ) + pm_math_Vector3_dot_ra ( xx
+ 435 , xx + 459 ) ; xx [ 564 ] = xx [ 540 ] ; xx [ 565 ] = xx [ 561 ] ; xx [
566 ] = xx [ 540 ] ; xx [ 567 ] = pm_math_Vector3_dot_ra ( xx + 527 , xx +
530 ) + pm_math_Vector3_dot_ra ( xx + 533 , xx + 537 ) ; xx [ 568 ] = xx [
562 ] ; xx [ 569 ] = xx [ 561 ] ; xx [ 570 ] = xx [ 562 ] ; xx [ 571 ] = xx [
553 ] * xx [ 25 ] + xx [ 549 ] * xx [ 24 ] + pm_math_Vector3_dot_ra ( xx +
546 , xx + 558 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 563 , 3 , xx + 440
) ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 7 ] ) ) > xx [ 103 ] ;
ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L4/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L4/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 572 ] = xx [ 443 ] ; xx [ 573 ] = xx [ 509 ] ; xx [
574 ] = xx [ 552 ] ; xx [ 575 ] = xx [ 455 ] ; xx [ 576 ] = xx [ 516 ] ; xx [
577 ] = xx [ 553 ] ; xx [ 578 ] = xx [ 407 ] ; xx [ 579 ] = xx [ 517 ] ; xx [
580 ] = xx [ 549 ] ; xx [ 581 ] = xx [ 409 ] ; xx [ 582 ] = xx [ 542 ] ; xx [
583 ] = xx [ 550 ] ; xx [ 584 ] = xx [ 456 ] ; xx [ 585 ] = xx [ 543 ] ; xx [
586 ] = xx [ 551 ] ; xx [ 587 ] = xx [ 457 ] ; xx [ 588 ] = xx [ 536 ] ; xx [
589 ] = xx [ 557 ] ; solveSymmetricPosDef ( xx + 563 , xx + 572 , 3 , 6 , xx
+ 590 , xx + 440 ) ; xx [ 440 ] = xx [ 455 ] * xx [ 590 ] + xx [ 516 ] * xx [
591 ] + xx [ 553 ] * xx [ 592 ] ; xx [ 441 ] = xx [ 407 ] * xx [ 590 ] + xx [
517 ] * xx [ 591 ] + xx [ 549 ] * xx [ 592 ] ; xx [ 442 ] = xx [ 407 ] * xx [
593 ] + xx [ 517 ] * xx [ 594 ] + xx [ 549 ] * xx [ 595 ] ; xx [ 572 ] = xx [
55 ] - ( xx [ 443 ] * xx [ 590 ] + xx [ 509 ] * xx [ 591 ] + xx [ 552 ] * xx
[ 592 ] ) + xx [ 56 ] ; xx [ 573 ] = xx [ 95 ] - xx [ 440 ] ; xx [ 574 ] = xx
[ 119 ] - xx [ 441 ] ; xx [ 575 ] = xx [ 125 ] - xx [ 440 ] ; xx [ 576 ] = xx
[ 139 ] - ( xx [ 455 ] * xx [ 593 ] + xx [ 516 ] * xx [ 594 ] + xx [ 553 ] *
xx [ 595 ] ) ; xx [ 577 ] = xx [ 145 ] - xx [ 442 ] ; xx [ 578 ] = xx [ 147 ]
- xx [ 441 ] ; xx [ 579 ] = xx [ 148 ] - xx [ 442 ] ; xx [ 580 ] = xx [ 171 ]
- ( xx [ 407 ] * xx [ 596 ] + xx [ 517 ] * xx [ 597 ] + xx [ 549 ] * xx [ 598
] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 572 , xx + 39 , xx + 581 )
; pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 581 , xx + 572 ) ; xx [ 581 ]
= xx [ 33 ] - ( xx [ 443 ] * xx [ 599 ] + xx [ 509 ] * xx [ 600 ] + xx [ 552
] * xx [ 601 ] ) ; xx [ 582 ] = xx [ 34 ] - ( xx [ 443 ] * xx [ 602 ] + xx [
509 ] * xx [ 603 ] + xx [ 552 ] * xx [ 604 ] ) ; xx [ 583 ] = xx [ 38 ] - (
xx [ 443 ] * xx [ 605 ] + xx [ 509 ] * xx [ 606 ] + xx [ 552 ] * xx [ 607 ] )
; xx [ 584 ] = xx [ 61 ] - ( xx [ 455 ] * xx [ 599 ] + xx [ 516 ] * xx [ 600
] + xx [ 553 ] * xx [ 601 ] ) ; xx [ 585 ] = xx [ 62 ] - ( xx [ 455 ] * xx [
602 ] + xx [ 516 ] * xx [ 603 ] + xx [ 553 ] * xx [ 604 ] ) ; xx [ 586 ] = xx
[ 64 ] - ( xx [ 455 ] * xx [ 605 ] + xx [ 516 ] * xx [ 606 ] + xx [ 553 ] *
xx [ 607 ] ) ; xx [ 587 ] = xx [ 65 ] - ( xx [ 407 ] * xx [ 599 ] + xx [ 517
] * xx [ 600 ] + xx [ 549 ] * xx [ 601 ] ) ; xx [ 588 ] = xx [ 63 ] - ( xx [
407 ] * xx [ 602 ] + xx [ 517 ] * xx [ 603 ] + xx [ 549 ] * xx [ 604 ] ) ; xx
[ 589 ] = xx [ 66 ] - ( xx [ 407 ] * xx [ 605 ] + xx [ 517 ] * xx [ 606 ] +
xx [ 549 ] * xx [ 607 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 581
, xx + 39 , xx + 608 ) ; pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 608 ,
xx + 581 ) ; xx [ 61 ] = xx [ 21 ] ; xx [ 62 ] = xx [ 27 ] ; xx [ 63 ] = xx [
28 ] ; xx [ 64 ] = xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx +
67 , xx + 440 ) ; xx [ 21 ] = 0.01018286292250497 - xx [ 441 ] ; xx [ 27 ] =
0.01643121746247235 - xx [ 442 ] ; xx [ 459 ] = - xx [ 440 ] ; xx [ 460 ] =
xx [ 21 ] ; xx [ 461 ] = xx [ 27 ] ; pm_math_Matrix3x3_postCross_ra ( xx +
581 , xx + 459 , xx + 608 ) ; xx [ 28 ] = xx [ 456 ] * xx [ 599 ] + xx [ 543
] * xx [ 600 ] + xx [ 551 ] * xx [ 601 ] ; xx [ 30 ] = xx [ 457 ] * xx [ 599
] + xx [ 536 ] * xx [ 600 ] + xx [ 557 ] * xx [ 601 ] ; xx [ 33 ] = xx [ 457
] * xx [ 602 ] + xx [ 536 ] * xx [ 603 ] + xx [ 557 ] * xx [ 604 ] ; xx [ 617
] = xx [ 518 ] - ( xx [ 409 ] * xx [ 599 ] + xx [ 542 ] * xx [ 600 ] + xx [
550 ] * xx [ 601 ] ) + xx [ 408 ] ; xx [ 618 ] = xx [ 519 ] - xx [ 28 ] ; xx
[ 619 ] = xx [ 520 ] - xx [ 30 ] ; xx [ 620 ] = xx [ 521 ] - xx [ 28 ] ; xx [
621 ] = xx [ 522 ] - ( xx [ 456 ] * xx [ 602 ] + xx [ 543 ] * xx [ 603 ] + xx
[ 551 ] * xx [ 604 ] ) + xx [ 408 ] ; xx [ 622 ] = xx [ 523 ] - xx [ 33 ] ;
xx [ 623 ] = xx [ 524 ] - xx [ 30 ] ; xx [ 624 ] = xx [ 525 ] - xx [ 33 ] ;
xx [ 625 ] = xx [ 526 ] - ( xx [ 457 ] * xx [ 605 ] + xx [ 536 ] * xx [ 606 ]
+ xx [ 557 ] * xx [ 607 ] ) + xx [ 408 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 617 , xx + 39 , xx + 518 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 518 , xx + 617 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 617 , xx + 459 , xx + 38 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 38 , xx + 459 , xx + 518 ) ; xx [ 28 ] =
xx [ 573 ] - xx [ 609 ] - xx [ 611 ] - xx [ 519 ] ; xx [ 30 ] = xx [ 574 ] -
xx [ 610 ] - xx [ 614 ] - xx [ 520 ] ; xx [ 33 ] = 3.490126909650324e-6 ; xx
[ 34 ] = xx [ 33 ] + xx [ 576 ] - xx [ 612 ] - xx [ 612 ] - xx [ 522 ] ; xx [
47 ] = xx [ 577 ] - xx [ 613 ] - xx [ 615 ] - xx [ 523 ] ; xx [ 55 ] = xx [
579 ] - xx [ 615 ] - xx [ 613 ] - xx [ 525 ] ; xx [ 65 ] =
5.069554565459512e-6 ; xx [ 66 ] = xx [ 65 ] + xx [ 580 ] - xx [ 616 ] - xx [
616 ] - xx [ 526 ] ; xx [ 626 ] = xx [ 18 ] + xx [ 572 ] - xx [ 608 ] - xx [
608 ] - xx [ 518 ] ; xx [ 627 ] = xx [ 28 ] ; xx [ 628 ] = xx [ 30 ] ; xx [
629 ] = xx [ 575 ] - xx [ 611 ] - xx [ 609 ] - xx [ 521 ] ; xx [ 630 ] = xx [
34 ] ; xx [ 631 ] = xx [ 47 ] ; xx [ 632 ] = xx [ 578 ] - xx [ 614 ] - xx [
610 ] - xx [ 524 ] ; xx [ 633 ] = xx [ 55 ] ; xx [ 634 ] = xx [ 66 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 626 , xx + 15 , xx + 518 ) ; xx [ 95 ] = xx
[ 581 ] - xx [ 38 ] ; xx [ 38 ] = xx [ 584 ] - xx [ 39 ] ; xx [ 39 ] = xx [
585 ] - xx [ 42 ] ; xx [ 42 ] = xx [ 586 ] - xx [ 45 ] ; xx [ 45 ] = xx [ 587
] - xx [ 40 ] ; xx [ 40 ] = xx [ 588 ] - xx [ 43 ] ; xx [ 43 ] = xx [ 589 ] -
xx [ 46 ] ; xx [ 572 ] = xx [ 95 ] ; xx [ 573 ] = xx [ 582 ] - xx [ 41 ] ; xx
[ 574 ] = xx [ 583 ] - xx [ 44 ] ; xx [ 575 ] = xx [ 38 ] ; xx [ 576 ] = xx [
39 ] ; xx [ 577 ] = xx [ 42 ] ; xx [ 578 ] = xx [ 45 ] ; xx [ 579 ] = xx [ 40
] ; xx [ 580 ] = xx [ 43 ] ; xx [ 41 ] = 8.538390167322628e-3 ; xx [ 44 ] =
0.0187094325596859 ; xx [ 46 ] = xx [ 41 ] * xx [ 8 ] + xx [ 44 ] * xx [ 4 ]
; xx [ 119 ] = xx [ 44 ] * xx [ 12 ] ; xx [ 125 ] = xx [ 41 ] * xx [ 12 ] ;
xx [ 521 ] = xx [ 46 ] ; xx [ 522 ] = - xx [ 119 ] ; xx [ 523 ] = - xx [ 125
] ; pm_math_Matrix3x3_xform_ra ( xx + 572 , xx + 521 , xx + 524 ) ; xx [ 139
] = xx [ 518 ] + xx [ 524 ] ; xx [ 145 ] = xx [ 519 ] + xx [ 525 ] ; xx [ 147
] = xx [ 520 ] + xx [ 526 ] ; xx [ 518 ] = xx [ 139 ] ; xx [ 519 ] = xx [ 145
] ; xx [ 520 ] = xx [ 147 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 572
, xx + 15 , xx + 524 ) ; xx [ 148 ] = 9.266435618121707e-3 ; xx [ 171 ] = xx
[ 148 ] + xx [ 617 ] ; xx [ 581 ] = xx [ 171 ] ; xx [ 582 ] = xx [ 618 ] ; xx
[ 583 ] = xx [ 619 ] ; xx [ 584 ] = xx [ 620 ] ; xx [ 585 ] = xx [ 148 ] + xx
[ 621 ] ; xx [ 586 ] = xx [ 622 ] ; xx [ 587 ] = xx [ 623 ] ; xx [ 588 ] = xx
[ 624 ] ; xx [ 589 ] = xx [ 148 ] + xx [ 625 ] ; pm_math_Matrix3x3_xform_ra (
xx + 581 , xx + 521 , xx + 530 ) ; xx [ 148 ] = xx [ 524 ] + xx [ 530 ] ; xx
[ 408 ] = xx [ 525 ] + xx [ 531 ] ; xx [ 441 ] = xx [ 526 ] + xx [ 532 ] ; xx
[ 524 ] = xx [ 148 ] ; xx [ 525 ] = xx [ 408 ] ; xx [ 526 ] = xx [ 441 ] ; xx
[ 442 ] = xx [ 9 ] * xx [ 2 ] ; xx [ 530 ] = xx [ 13 ] * xx [ 7 ] ; xx [ 531
] = xx [ 442 ] + xx [ 530 ] ; xx [ 532 ] = xx [ 11 ] * xx [ 3 ] * xx [ 531 ]
; xx [ 537 ] = xx [ 13 ] - xx [ 11 ] * xx [ 7 ] * xx [ 531 ] ; xx [ 538 ] =
xx [ 11 ] * xx [ 2 ] * xx [ 531 ] - xx [ 9 ] ; xx [ 554 ] = xx [ 532 ] ; xx [
555 ] = xx [ 537 ] ; xx [ 556 ] = xx [ 538 ] ; pm_math_Matrix3x3_xform_ra (
xx + 626 , xx + 554 , xx + 558 ) ; xx [ 531 ] = xx [ 41 ] * xx [ 538 ] + xx [
537 ] * xx [ 44 ] ; xx [ 539 ] = xx [ 44 ] * xx [ 532 ] ; xx [ 540 ] = xx [
41 ] * xx [ 532 ] ; xx [ 608 ] = xx [ 531 ] ; xx [ 609 ] = - xx [ 539 ] ; xx
[ 610 ] = - xx [ 540 ] ; pm_math_Matrix3x3_xform_ra ( xx + 572 , xx + 608 ,
xx + 611 ) ; xx [ 561 ] = xx [ 558 ] + xx [ 611 ] ; xx [ 562 ] = xx [ 559 ] +
xx [ 612 ] ; xx [ 558 ] = xx [ 560 ] + xx [ 613 ] ; xx [ 611 ] = xx [ 561 ] ;
xx [ 612 ] = xx [ 562 ] ; xx [ 613 ] = xx [ 558 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 572 , xx + 554 , xx + 614 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 581 , xx + 608 , xx + 617 ) ; xx [ 559 ] =
xx [ 614 ] + xx [ 617 ] ; xx [ 560 ] = xx [ 615 ] + xx [ 618 ] ; xx [ 614 ] =
xx [ 616 ] + xx [ 619 ] ; xx [ 615 ] = xx [ 559 ] ; xx [ 616 ] = xx [ 560 ] ;
xx [ 617 ] = xx [ 614 ] ; xx [ 618 ] = pm_math_Vector3_dot_ra ( xx + 15 , xx
+ 611 ) + pm_math_Vector3_dot_ra ( xx + 521 , xx + 615 ) ; xx [ 619 ] =
0.01308562271097496 ; xx [ 621 ] = xx [ 9 ] * xx [ 28 ] + xx [ 13 ] * xx [ 30
] + xx [ 619 ] * xx [ 95 ] ; xx [ 28 ] = xx [ 34 ] * xx [ 9 ] + xx [ 13 ] *
xx [ 47 ] + xx [ 619 ] * xx [ 38 ] ; xx [ 30 ] = xx [ 9 ] * xx [ 55 ] + xx [
66 ] * xx [ 13 ] + xx [ 619 ] * xx [ 45 ] ; xx [ 635 ] = xx [ 621 ] ; xx [
636 ] = xx [ 28 ] ; xx [ 637 ] = xx [ 30 ] ; xx [ 34 ] = xx [ 9 ] * xx [ 38 ]
+ xx [ 13 ] * xx [ 45 ] + xx [ 171 ] * xx [ 619 ] ; xx [ 38 ] = xx [ 9 ] * xx
[ 39 ] + xx [ 13 ] * xx [ 40 ] + xx [ 619 ] * xx [ 620 ] ; xx [ 39 ] = xx [ 9
] * xx [ 42 ] + xx [ 13 ] * xx [ 43 ] + xx [ 619 ] * xx [ 623 ] ; xx [ 622 ]
= xx [ 34 ] ; xx [ 623 ] = xx [ 38 ] ; xx [ 624 ] = xx [ 39 ] ; xx [ 40 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 635 ) + pm_math_Vector3_dot_ra ( xx +
521 , xx + 622 ) ; xx [ 42 ] = pm_math_Vector3_dot_ra ( xx + 554 , xx + 635 )
+ pm_math_Vector3_dot_ra ( xx + 608 , xx + 622 ) ; xx [ 635 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 518 ) + pm_math_Vector3_dot_ra ( xx +
521 , xx + 524 ) ; xx [ 636 ] = xx [ 618 ] ; xx [ 637 ] = xx [ 40 ] ; xx [
638 ] = xx [ 618 ] ; xx [ 639 ] = pm_math_Vector3_dot_ra ( xx + 554 , xx +
611 ) + pm_math_Vector3_dot_ra ( xx + 608 , xx + 615 ) ; xx [ 640 ] = xx [ 42
] ; xx [ 641 ] = xx [ 40 ] ; xx [ 642 ] = xx [ 42 ] ; xx [ 643 ] = xx [ 28 ]
* xx [ 9 ] + xx [ 30 ] * xx [ 13 ] + xx [ 34 ] * xx [ 619 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 635 , 3 , xx + 518 ) ; bb [ 0 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 1 ] ) ) > xx [ 103 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ;
if ( bb [ 0 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L5/Gimbal Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L5/Gimbal Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 40 ] = 5.729577951308232 ; xx [ 42 ] =
0.5235987755982988 ; xx [ 43 ] = state [ 0 ] + xx [ 42 ] ; if ( xx [ 137 ] <
xx [ 43 ] ) xx [ 43 ] = xx [ 137 ] ; xx [ 45 ] = 1.74532925199433e-3 ; xx [
47 ] = - ( xx [ 43 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 47 ] ) xx [ 47 ] =
xx [ 0 ] ; xx [ 55 ] = 3.0 ; xx [ 66 ] = 5729.577951308232 ; xx [ 95 ] = xx [
66 ] * state [ 3 ] ; xx [ 103 ] = 5.729577951308232e5 ; xx [ 171 ] = xx [ 47
] * xx [ 47 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 47 ] ) * ( ( - xx [ 43 ] == xx
[ 137 ] ? xx [ 137 ] : - xx [ 95 ] ) - xx [ 103 ] * xx [ 43 ] ) ; if ( xx [
137 ] > xx [ 171 ] ) xx [ 171 ] = xx [ 137 ] ; xx [ 43 ] = state [ 0 ] - xx [
42 ] ; if ( xx [ 137 ] > xx [ 43 ] ) xx [ 43 ] = xx [ 137 ] ; xx [ 47 ] = xx
[ 43 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 47 ] ) xx [ 47 ] = xx [ 0 ] ; xx [
518 ] = ( xx [ 103 ] * xx [ 43 ] + ( xx [ 43 ] == xx [ 137 ] ? xx [ 137 ] :
xx [ 95 ] ) ) * xx [ 47 ] * xx [ 47 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 47 ] )
; if ( xx [ 137 ] > xx [ 518 ] ) xx [ 518 ] = xx [ 137 ] ; xx [ 43 ] = xx [
12 ] * state [ 3 ] ; xx [ 47 ] = xx [ 442 ] + xx [ 530 ] ; xx [ 95 ] = xx [
11 ] * xx [ 3 ] * xx [ 47 ] * state [ 4 ] ; xx [ 3 ] = xx [ 43 ] + xx [ 95 ]
; xx [ 442 ] = xx [ 4 ] * state [ 3 ] ; xx [ 519 ] = ( xx [ 13 ] - xx [ 11 ]
* xx [ 7 ] * xx [ 47 ] ) * state [ 4 ] ; xx [ 7 ] = xx [ 9 ] * state [ 5 ] ;
xx [ 520 ] = xx [ 442 ] + xx [ 519 ] + xx [ 7 ] ; xx [ 524 ] = xx [ 8 ] *
state [ 3 ] ; xx [ 525 ] = ( xx [ 11 ] * xx [ 2 ] * xx [ 47 ] - xx [ 9 ] ) *
state [ 4 ] ; xx [ 2 ] = xx [ 13 ] * state [ 5 ] ; xx [ 47 ] = xx [ 524 ] +
xx [ 525 ] + xx [ 2 ] ; xx [ 611 ] = xx [ 3 ] ; xx [ 612 ] = xx [ 520 ] ; xx
[ 613 ] = xx [ 47 ] ; xx [ 615 ] = xx [ 18 ] * xx [ 3 ] ; xx [ 616 ] = xx [
520 ] * xx [ 33 ] ; xx [ 617 ] = xx [ 47 ] * xx [ 65 ] ;
pm_math_Vector3_cross_ra ( xx + 611 , xx + 615 , xx + 622 ) ; xx [ 18 ] =
0.6903818921736785 * input [ 143 ] ; xx [ 33 ] = input [ 143 ] -
1.380763784347357 * xx [ 18 ] ; xx [ 65 ] = 1.446890241806463 * xx [ 18 ] ;
xx [ 18 ] = 0.0375915374507293 ; xx [ 615 ] = - 2.405769667632971e-13 ; xx [
616 ] = - 0.03983410794452454 ; xx [ 617 ] = - 0.01645986959431302 ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 615 , xx + 644 ) ; xx [ 526 ] =
xx [ 644 ] - xx [ 440 ] ; xx [ 530 ] = xx [ 645 ] + xx [ 21 ] + xx [ 18 ] ;
xx [ 618 ] = 1.590244414800102e-3 ; xx [ 620 ] = xx [ 646 ] + xx [ 27 ] + xx
[ 618 ] ; xx [ 625 ] = sqrt ( xx [ 526 ] * xx [ 526 ] + xx [ 530 ] * xx [ 530
] + xx [ 620 ] * xx [ 620 ] ) ; if ( xx [ 625 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L4-L5 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 625 ] = input [ 152 ] / xx [ 625 ] ; xx [ 644 ] = xx [
625 ] * xx [ 620 ] ; xx [ 620 ] = xx [ 625 ] * xx [ 530 ] ; xx [ 530 ] =
0.01759714945393536 ; xx [ 645 ] = - xx [ 10 ] ; xx [ 646 ] = xx [ 14 ] ; xx
[ 647 ] = xx [ 6 ] ; xx [ 648 ] = xx [ 5 ] ; xx [ 649 ] = xx [ 14 ] ; xx [
650 ] = xx [ 6 ] ; xx [ 651 ] = xx [ 5 ] ; xx [ 652 ] = 0.03563872347849285 ;
xx [ 653 ] = xx [ 5 ] * xx [ 652 ] - xx [ 530 ] * xx [ 6 ] ; xx [ 654 ] = xx
[ 530 ] * xx [ 14 ] ; xx [ 655 ] = xx [ 652 ] * xx [ 14 ] ; xx [ 656 ] = xx [
653 ] ; xx [ 657 ] = xx [ 654 ] ; xx [ 658 ] = - xx [ 655 ] ;
pm_math_Vector3_cross_ra ( xx + 649 , xx + 656 , xx + 659 ) ; xx [ 656 ] = xx
[ 44 ] * xx [ 6 ] + xx [ 5 ] * xx [ 41 ] ; xx [ 657 ] = xx [ 44 ] * xx [ 14 ]
; xx [ 658 ] = xx [ 41 ] * xx [ 14 ] ; xx [ 662 ] = - xx [ 656 ] ; xx [ 663 ]
= xx [ 657 ] ; xx [ 664 ] = xx [ 658 ] ; pm_math_Vector3_cross_ra ( xx + 649
, xx + 662 , xx + 665 ) ; xx [ 649 ] = ( xx [ 10 ] * xx [ 656 ] + xx [ 665 ]
) * xx [ 11 ] ; xx [ 650 ] = ( xx [ 659 ] - xx [ 10 ] * xx [ 653 ] ) * xx [
11 ] - xx [ 649 ] ; xx [ 651 ] = 0.06197538565817786 - xx [ 11 ] * ( xx [ 666
] - xx [ 657 ] * xx [ 10 ] ) ; xx [ 653 ] = xx [ 11 ] * ( xx [ 660 ] - xx [
654 ] * xx [ 10 ] ) - xx [ 652 ] + xx [ 651 ] - 0.0257594283537832 ; xx [ 654
] = 0.9283707866246274 - ( xx [ 667 ] - xx [ 658 ] * xx [ 10 ] ) * xx [ 11 ]
; xx [ 656 ] = ( xx [ 655 ] * xx [ 10 ] + xx [ 661 ] ) * xx [ 11 ] - xx [ 530
] + xx [ 654 ] - 0.906781702449562 ; xx [ 655 ] = sqrt ( xx [ 650 ] * xx [
650 ] + xx [ 653 ] * xx [ 653 ] + xx [ 656 ] * xx [ 656 ] ) ; if ( xx [ 655 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L5-S1 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 655 ] = input [ 153 ] / xx [ 655 ] ; xx [ 657 ] = xx [
655 ] * xx [ 650 ] ; xx [ 658 ] = xx [ 655 ] * xx [ 653 ] ; xx [ 659 ] = xx [
655 ] * xx [ 656 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 645 , xx + 657
, xx + 660 ) ; xx [ 650 ] = 0.04055699920652953 ; xx [ 653 ] =
0.01302079271818882 ; xx [ 656 ] = 0.0135421645305857 ; xx [ 657 ] = - xx [
650 ] ; xx [ 658 ] = - xx [ 653 ] ; xx [ 659 ] = xx [ 656 ] ; xx [ 663 ] = -
0.03653985023506644 ; xx [ 664 ] = - 0.01645220048935106 ; xx [ 665 ] =
3.239433747529818e-3 ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 663 , xx
+ 666 ) ; xx [ 669 ] = xx [ 666 ] - xx [ 440 ] + xx [ 650 ] ; xx [ 650 ] = xx
[ 667 ] + xx [ 21 ] + xx [ 653 ] ; xx [ 653 ] = xx [ 668 ] + xx [ 27 ] - xx [
656 ] ; xx [ 656 ] = sqrt ( xx [ 669 ] * xx [ 669 ] + xx [ 650 ] * xx [ 650 ]
+ xx [ 653 ] * xx [ 653 ] ) ; if ( xx [ 656 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 656 ] = input [ 157 ] / xx [ 656 ] ; xx [ 666 ] = xx [
656 ] * xx [ 669 ] ; xx [ 667 ] = xx [ 656 ] * xx [ 650 ] ; xx [ 650 ] = xx [
656 ] * xx [ 653 ] ; xx [ 668 ] = - xx [ 666 ] ; xx [ 669 ] = - xx [ 667 ] ;
xx [ 670 ] = - xx [ 650 ] ; pm_math_Vector3_cross_ra ( xx + 657 , xx + 668 ,
xx + 671 ) ; xx [ 657 ] = - 0.04008119964598488 ; xx [ 658 ] = -
0.01084940380361654 ; xx [ 659 ] = - 9.8613284252828e-4 ;
pm_math_Quaternion_xform_ra ( xx + 645 , xx + 657 , xx + 668 ) ; xx [ 653 ] =
0.044078899383545 ; xx [ 674 ] = xx [ 668 ] - xx [ 649 ] + xx [ 653 ] ; xx [
675 ] = 0.0499199981689453 ; xx [ 676 ] = xx [ 669 ] + xx [ 651 ] - xx [ 675
] ; xx [ 668 ] = 0.919140991210938 ; xx [ 669 ] = xx [ 670 ] + xx [ 654 ] -
xx [ 668 ] ; xx [ 670 ] = sqrt ( xx [ 674 ] * xx [ 674 ] + xx [ 676 ] * xx [
676 ] + xx [ 669 ] * xx [ 669 ] ) ; if ( xx [ 670 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 670 ] = input [ 158 ] / xx [ 670 ] ; xx [ 677 ] = xx [
670 ] * xx [ 674 ] ; xx [ 678 ] = xx [ 670 ] * xx [ 676 ] ; xx [ 679 ] = xx [
670 ] * xx [ 669 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 645 , xx + 677
, xx + 680 ) ; pm_math_Vector3_cross_ra ( xx + 657 , xx + 680 , xx + 676 ) ;
xx [ 657 ] = 0.04055699920655626 ; xx [ 658 ] = 0.0130207927181218 ; xx [ 659
] = 0.01354216453058323 ; xx [ 683 ] = xx [ 657 ] ; xx [ 684 ] = - xx [ 658 ]
; xx [ 685 ] = xx [ 659 ] ; xx [ 686 ] = 0.03653985023490417 ; xx [ 687 ] = -
0.01645220048983929 ; xx [ 688 ] = 3.239433747517833e-3 ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 686 , xx + 689 ) ; xx [ 669 ] =
xx [ 689 ] - xx [ 440 ] - xx [ 657 ] ; xx [ 657 ] = xx [ 690 ] + xx [ 21 ] +
xx [ 658 ] ; xx [ 658 ] = xx [ 691 ] + xx [ 27 ] - xx [ 659 ] ; xx [ 659 ] =
sqrt ( xx [ 669 ] * xx [ 669 ] + xx [ 657 ] * xx [ 657 ] + xx [ 658 ] * xx [
658 ] ) ; if ( xx [ 659 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 659 ] = input [ 162 ] / xx [ 659 ] ; xx [ 674 ] = xx [
659 ] * xx [ 669 ] ; xx [ 669 ] = xx [ 659 ] * xx [ 657 ] ; xx [ 657 ] = xx [
659 ] * xx [ 658 ] ; xx [ 689 ] = - xx [ 674 ] ; xx [ 690 ] = - xx [ 669 ] ;
xx [ 691 ] = - xx [ 657 ] ; pm_math_Vector3_cross_ra ( xx + 683 , xx + 689 ,
xx + 692 ) ; xx [ 683 ] = 0.04008119964600713 ; xx [ 684 ] = -
0.01084940380355031 ; xx [ 685 ] = - 9.861328425307225e-4 ;
pm_math_Quaternion_xform_ra ( xx + 645 , xx + 683 , xx + 689 ) ; xx [ 658 ] =
xx [ 689 ] - xx [ 649 ] - xx [ 653 ] ; xx [ 653 ] = xx [ 690 ] + xx [ 651 ] -
xx [ 675 ] ; xx [ 675 ] = xx [ 691 ] + xx [ 654 ] - xx [ 668 ] ; xx [ 668 ] =
sqrt ( xx [ 658 ] * xx [ 658 ] + xx [ 653 ] * xx [ 653 ] + xx [ 675 ] * xx [
675 ] ) ; if ( xx [ 668 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 668 ] = input [ 163 ] / xx [ 668 ] ; xx [ 689 ] = xx [
668 ] * xx [ 658 ] ; xx [ 690 ] = xx [ 668 ] * xx [ 653 ] ; xx [ 691 ] = xx [
668 ] * xx [ 675 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 645 , xx + 689
, xx + 695 ) ; pm_math_Vector3_cross_ra ( xx + 683 , xx + 695 , xx + 689 ) ;
xx [ 653 ] = 0.04705808460307085 ; xx [ 683 ] = - 3.166185351073283e-13 ; xx
[ 684 ] = - 0.0513211464694144 ; xx [ 685 ] = - 0.01219126570664875 ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 683 , xx + 698 ) ; xx [ 658 ] =
xx [ 698 ] - xx [ 440 ] ; xx [ 440 ] = xx [ 699 ] + xx [ 21 ] + xx [ 653 ] ;
xx [ 21 ] = 9.875319015864496e-3 ; xx [ 675 ] = xx [ 700 ] + xx [ 27 ] + xx [
21 ] ; xx [ 27 ] = sqrt ( xx [ 658 ] * xx [ 658 ] + xx [ 440 ] * xx [ 440 ] +
xx [ 675 ] * xx [ 675 ] ) ; if ( xx [ 27 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L4-L5 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 27 ] = input [ 178 ] / xx [ 27 ] ; xx [ 679 ] = xx [
27 ] * xx [ 675 ] ; xx [ 675 ] = xx [ 27 ] * xx [ 440 ] ; xx [ 698 ] = -
3.88840995326696e-5 ; xx [ 699 ] = - 0.04658678468440397 ; xx [ 700 ] = -
0.0171197768192325 ; pm_math_Quaternion_xform_ra ( xx + 645 , xx + 698 , xx +
701 ) ; xx [ 440 ] = xx [ 701 ] - xx [ 649 ] ; xx [ 704 ] = xx [ 702 ] + xx [
651 ] - 0.019933675415717 ; xx [ 701 ] = xx [ 703 ] + xx [ 654 ] -
0.904526583782246 ; xx [ 702 ] = sqrt ( xx [ 440 ] * xx [ 440 ] + xx [ 704 ]
* xx [ 704 ] + xx [ 701 ] * xx [ 701 ] ) ; if ( xx [ 702 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L5-S1 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 702 ] = input [ 179 ] / xx [ 702 ] ; xx [ 705 ] = xx [
702 ] * xx [ 440 ] ; xx [ 706 ] = xx [ 702 ] * xx [ 704 ] ; xx [ 707 ] = xx [
702 ] * xx [ 701 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 645 , xx + 705
, xx + 708 ) ; pm_math_Vector3_cross_ra ( xx + 698 , xx + 708 , xx + 703 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 611 , xx + 698 ) ; xx [
440 ] = xx [ 262 ] * state [ 9 ] ; xx [ 701 ] = xx [ 462 ] + xx [ 463 ] ; xx
[ 462 ] = ( xx [ 22 ] - ( xx [ 512 ] - xx [ 20 ] * xx [ 701 ] ) * xx [ 11 ] )
* state [ 10 ] ; xx [ 20 ] = xx [ 440 ] + xx [ 462 ] ; xx [ 22 ] = xx [ 698 ]
+ xx [ 20 ] ; xx [ 463 ] = xx [ 32 ] * state [ 9 ] ; xx [ 512 ] = ( xx [ 24 ]
- xx [ 11 ] * ( xx [ 23 ] * xx [ 701 ] + xx [ 514 ] ) ) * state [ 10 ] ; xx [
23 ] = xx [ 25 ] * state [ 11 ] ; xx [ 514 ] = xx [ 463 ] + xx [ 512 ] + xx [
23 ] ; xx [ 706 ] = xx [ 699 ] + xx [ 514 ] ; xx [ 707 ] = xx [ 35 ] * state
[ 9 ] ; xx [ 711 ] = ( xx [ 11 ] * ( xx [ 515 ] + xx [ 19 ] * xx [ 701 ] ) -
xx [ 25 ] ) * state [ 10 ] ; xx [ 19 ] = xx [ 24 ] * state [ 11 ] ; xx [ 515
] = xx [ 707 ] + xx [ 711 ] + xx [ 19 ] ; xx [ 701 ] = xx [ 700 ] + xx [ 515
] ; xx [ 712 ] = xx [ 22 ] ; xx [ 713 ] = xx [ 706 ] ; xx [ 714 ] = xx [ 701
] ; xx [ 715 ] = xx [ 22 ] * xx [ 56 ] ; xx [ 716 ] = xx [ 706 ] * xx [ 133 ]
; xx [ 717 ] = xx [ 701 ] * xx [ 150 ] ; pm_math_Vector3_cross_ra ( xx + 712
, xx + 715 , xx + 718 ) ; xx [ 715 ] = 2.234568172515435e-13 ; xx [ 716 ] =
0.02939308698039612 ; xx [ 717 ] = - 5.661597909317728e-3 ; xx [ 56 ] =
0.7847814363844873 ; xx [ 133 ] = 2.339080312536016e-12 ; xx [ 150 ] = xx [
133 ] * input [ 144 ] ; xx [ 721 ] = 0.619772617260799 ; xx [ 722 ] = xx [
721 ] * input [ 144 ] ; xx [ 723 ] = ( xx [ 56 ] * xx [ 150 ] + xx [ 133 ] *
xx [ 722 ] ) * xx [ 11 ] ; xx [ 724 ] = xx [ 133 ] * xx [ 150 ] ; xx [ 133 ]
= xx [ 11 ] * ( xx [ 724 ] - xx [ 56 ] * xx [ 722 ] ) ; xx [ 56 ] = input [
144 ] - ( xx [ 721 ] * xx [ 722 ] + xx [ 724 ] ) * xx [ 11 ] ; xx [ 724 ] = -
xx [ 723 ] ; xx [ 725 ] = xx [ 133 ] ; xx [ 726 ] = xx [ 56 ] ;
pm_math_Vector3_cross_ra ( xx + 715 , xx + 724 , xx + 727 ) ; xx [ 150 ] =
2.408429233865428e-13 ; xx [ 715 ] = 0.04027776673008778 ; xx [ 716 ] =
9.50951981748549e-6 ; xx [ 724 ] = - xx [ 150 ] ; xx [ 725 ] = - xx [ 715 ] ;
xx [ 726 ] = - xx [ 716 ] ; xx [ 730 ] = 1.167567527306757e-13 ; xx [ 731 ] =
- 0.04472798265803164 ; xx [ 732 ] = - 0.01492244588929304 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 730 , xx + 733 ) ; xx [ 717 ] =
xx [ 733 ] + xx [ 31 ] + xx [ 150 ] ; xx [ 150 ] = xx [ 734 ] + xx [ 52 ] +
xx [ 715 ] ; xx [ 715 ] = xx [ 735 ] + xx [ 53 ] + xx [ 716 ] ; xx [ 716 ] =
sqrt ( xx [ 717 ] * xx [ 717 ] + xx [ 150 ] * xx [ 150 ] + xx [ 715 ] * xx [
715 ] ) ; if ( xx [ 716 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L3-L4 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 716 ] = input [ 151 ] / xx [ 716 ] ; xx [ 721 ] = xx [
716 ] * xx [ 717 ] ; xx [ 717 ] = xx [ 716 ] * xx [ 150 ] ; xx [ 150 ] = xx [
716 ] * xx [ 715 ] ; xx [ 733 ] = - xx [ 721 ] ; xx [ 734 ] = - xx [ 717 ] ;
xx [ 735 ] = - xx [ 150 ] ; pm_math_Vector3_cross_ra ( xx + 724 , xx + 733 ,
xx + 736 ) ; xx [ 715 ] = xx [ 625 ] * xx [ 526 ] ; xx [ 724 ] = xx [ 715 ] ;
xx [ 725 ] = xx [ 620 ] ; xx [ 726 ] = xx [ 644 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 724 , xx + 733 ) ;
pm_math_Vector3_cross_ra ( xx + 615 , xx + 733 , xx + 724 ) ; xx [ 526 ] =
0.03492720031745133 ; xx [ 615 ] = 0.01477959769994918 ; xx [ 616 ] =
0.01134881117700549 ; xx [ 739 ] = - xx [ 526 ] ; xx [ 740 ] = - xx [ 615 ] ;
xx [ 741 ] = xx [ 616 ] ; xx [ 742 ] = - 0.03087794971463731 ; xx [ 743 ] = -
0.01577384625407678 ; xx [ 744 ] = 4.057911382721502e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 742 , xx + 745 ) ; xx [ 617 ] =
xx [ 745 ] + xx [ 31 ] + xx [ 526 ] ; xx [ 526 ] = xx [ 746 ] + xx [ 52 ] +
xx [ 615 ] ; xx [ 615 ] = xx [ 747 ] + xx [ 53 ] - xx [ 616 ] ; xx [ 616 ] =
sqrt ( xx [ 617 ] * xx [ 617 ] + xx [ 526 ] * xx [ 526 ] + xx [ 615 ] * xx [
615 ] ) ; if ( xx [ 616 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 616 ] = input [ 156 ] / xx [ 616 ] ; xx [ 722 ] = xx [
616 ] * xx [ 617 ] ; xx [ 617 ] = xx [ 616 ] * xx [ 526 ] ; xx [ 526 ] = xx [
616 ] * xx [ 615 ] ; xx [ 745 ] = - xx [ 722 ] ; xx [ 746 ] = - xx [ 617 ] ;
xx [ 747 ] = - xx [ 526 ] ; pm_math_Vector3_cross_ra ( xx + 739 , xx + 745 ,
xx + 748 ) ; xx [ 739 ] = xx [ 666 ] ; xx [ 740 ] = xx [ 667 ] ; xx [ 741 ] =
xx [ 650 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 739 , xx +
745 ) ; pm_math_Vector3_cross_ra ( xx + 663 , xx + 745 , xx + 739 ) ; xx [
615 ] = 0.03492470169060014 ; xx [ 663 ] = 0.01552496039123881 ; xx [ 664 ] =
0.01167234256981233 ; xx [ 751 ] = xx [ 615 ] ; xx [ 752 ] = - xx [ 663 ] ;
xx [ 753 ] = xx [ 664 ] ; xx [ 754 ] = 0.03087794971468379 ; xx [ 755 ] = -
0.01577384625389952 ; xx [ 756 ] = 4.057911382755352e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 754 , xx + 757 ) ; xx [ 665 ] =
xx [ 757 ] + xx [ 31 ] - xx [ 615 ] ; xx [ 615 ] = xx [ 758 ] + xx [ 52 ] +
xx [ 663 ] ; xx [ 663 ] = xx [ 759 ] + xx [ 53 ] - xx [ 664 ] ; xx [ 664 ] =
sqrt ( xx [ 665 ] * xx [ 665 ] + xx [ 615 ] * xx [ 615 ] + xx [ 663 ] * xx [
663 ] ) ; if ( xx [ 664 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 664 ] = input [ 161 ] / xx [ 664 ] ; xx [ 757 ] = xx [
664 ] * xx [ 665 ] ; xx [ 665 ] = xx [ 664 ] * xx [ 615 ] ; xx [ 615 ] = xx [
664 ] * xx [ 663 ] ; xx [ 758 ] = - xx [ 757 ] ; xx [ 759 ] = - xx [ 665 ] ;
xx [ 760 ] = - xx [ 615 ] ; pm_math_Vector3_cross_ra ( xx + 751 , xx + 758 ,
xx + 761 ) ; xx [ 751 ] = xx [ 674 ] ; xx [ 752 ] = xx [ 669 ] ; xx [ 753 ] =
xx [ 657 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 751 , xx +
758 ) ; pm_math_Vector3_cross_ra ( xx + 686 , xx + 758 , xx + 751 ) ; xx [
663 ] = 3.146640243071065e-13 ; xx [ 686 ] = 0.05113078984265527 ; xx [ 687 ]
= 8.028332428854309e-3 ; xx [ 764 ] = - xx [ 663 ] ; xx [ 765 ] = - xx [ 686
] ; xx [ 766 ] = - xx [ 687 ] ; xx [ 767 ] = 1.4285959311088e-13 ; xx [ 768 ]
= - 0.05524484988788111 ; xx [ 769 ] = - 7.469488033553544e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 767 , xx + 770 ) ; xx [ 688 ] =
xx [ 770 ] + xx [ 31 ] + xx [ 663 ] ; xx [ 31 ] = xx [ 771 ] + xx [ 52 ] + xx
[ 686 ] ; xx [ 52 ] = xx [ 772 ] + xx [ 53 ] + xx [ 687 ] ; xx [ 53 ] = sqrt
( xx [ 688 ] * xx [ 688 ] + xx [ 31 ] * xx [ 31 ] + xx [ 52 ] * xx [ 52 ] ) ;
if ( xx [ 53 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L3-L4 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 53 ] = input [ 177 ] / xx [ 53 ] ; xx [ 663 ] = xx [
53 ] * xx [ 688 ] ; xx [ 686 ] = xx [ 53 ] * xx [ 31 ] ; xx [ 31 ] = xx [ 53
] * xx [ 52 ] ; xx [ 770 ] = - xx [ 663 ] ; xx [ 771 ] = - xx [ 686 ] ; xx [
772 ] = - xx [ 31 ] ; pm_math_Vector3_cross_ra ( xx + 764 , xx + 770 , xx +
773 ) ; xx [ 52 ] = xx [ 27 ] * xx [ 658 ] ; xx [ 764 ] = xx [ 52 ] ; xx [
765 ] = xx [ 675 ] ; xx [ 766 ] = xx [ 679 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 764 , xx + 770 ) ;
pm_math_Vector3_cross_ra ( xx + 683 , xx + 770 , xx + 764 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 712 , xx + 683 ) ; xx [
658 ] = xx [ 233 ] * state [ 15 ] ; xx [ 687 ] = xx [ 358 ] + xx [ 359 ] ; xx
[ 358 ] = ( ( xx [ 29 ] * xx [ 687 ] + xx [ 413 ] ) * xx [ 11 ] - xx [ 36 ] )
* state [ 16 ] ; xx [ 29 ] = xx [ 658 ] + xx [ 358 ] ; xx [ 36 ] = xx [ 683 ]
+ xx [ 29 ] ; xx [ 359 ] = xx [ 234 ] * state [ 15 ] ; xx [ 413 ] = ( xx [ 48
] + xx [ 11 ] * ( xx [ 415 ] - xx [ 37 ] * xx [ 687 ] ) ) * state [ 16 ] ; xx
[ 37 ] = xx [ 49 ] * state [ 17 ] ; xx [ 415 ] = xx [ 359 ] + xx [ 413 ] + xx
[ 37 ] ; xx [ 688 ] = xx [ 684 ] + xx [ 415 ] ; xx [ 776 ] = xx [ 50 ] *
state [ 15 ] ; xx [ 777 ] = ( xx [ 11 ] * ( xx [ 26 ] * xx [ 687 ] - xx [ 425
] ) - xx [ 49 ] ) * state [ 16 ] ; xx [ 26 ] = xx [ 48 ] * state [ 17 ] ; xx
[ 425 ] = xx [ 776 ] + xx [ 777 ] + xx [ 26 ] ; xx [ 687 ] = xx [ 685 ] + xx
[ 425 ] ; xx [ 778 ] = xx [ 36 ] ; xx [ 779 ] = xx [ 688 ] ; xx [ 780 ] = xx
[ 687 ] ; xx [ 781 ] = xx [ 36 ] * xx [ 120 ] ; xx [ 782 ] = xx [ 688 ] * xx
[ 144 ] ; xx [ 783 ] = xx [ 687 ] * xx [ 151 ] ; pm_math_Vector3_cross_ra (
xx + 778 , xx + 781 , xx + 784 ) ; xx [ 781 ] = - 1.076648921049358e-13 ; xx
[ 782 ] = 0.03139087037316381 ; xx [ 783 ] = - 4.53476976212614e-3 ; xx [ 120
] = 0.64004249649544 * input [ 146 ] ; xx [ 144 ] = xx [ 11 ] *
1.278175242626048e-12 * xx [ 120 ] ; xx [ 151 ] = xx [ 11 ] *
0.7683395100343888 * xx [ 120 ] ; xx [ 787 ] = input [ 146 ] -
1.28008499299088 * xx [ 120 ] ; xx [ 788 ] = xx [ 144 ] ; xx [ 789 ] = - xx [
151 ] ; xx [ 790 ] = xx [ 787 ] ; pm_math_Vector3_cross_ra ( xx + 781 , xx +
788 , xx + 791 ) ; xx [ 120 ] = 8.947197148478258e-14 ; xx [ 781 ] =
0.0386335011732275 ; xx [ 782 ] = 2.940430357145393e-3 ; xx [ 788 ] = xx [
120 ] ; xx [ 789 ] = - xx [ 781 ] ; xx [ 790 ] = xx [ 782 ] ; xx [ 794 ] = -
6.841875673243218e-13 ; xx [ 795 ] = - 0.04146091222789498 ; xx [ 796 ] = -
0.01351410150666451 ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 794 , xx +
797 ) ; xx [ 783 ] = xx [ 797 ] - xx [ 79 ] - xx [ 120 ] ; xx [ 120 ] = xx [
798 ] + xx [ 121 ] + xx [ 781 ] ; xx [ 781 ] = xx [ 799 ] + xx [ 118 ] - xx [
782 ] ; xx [ 782 ] = sqrt ( xx [ 783 ] * xx [ 783 ] + xx [ 120 ] * xx [ 120 ]
+ xx [ 781 ] * xx [ 781 ] ) ; if ( xx [ 782 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L2-L3 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 782 ] = input [ 150 ] / xx [ 782 ] ; xx [ 797 ] = xx [
782 ] * xx [ 783 ] ; xx [ 783 ] = xx [ 782 ] * xx [ 120 ] ; xx [ 120 ] = xx [
782 ] * xx [ 781 ] ; xx [ 798 ] = - xx [ 797 ] ; xx [ 799 ] = - xx [ 783 ] ;
xx [ 800 ] = - xx [ 120 ] ; pm_math_Vector3_cross_ra ( xx + 788 , xx + 798 ,
xx + 801 ) ; xx [ 788 ] = xx [ 721 ] ; xx [ 789 ] = xx [ 717 ] ; xx [ 790 ] =
xx [ 150 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 788 , xx +
798 ) ; pm_math_Vector3_cross_ra ( xx + 730 , xx + 798 , xx + 788 ) ; xx [
730 ] = 0.03295989990232563 ; xx [ 731 ] = 0.01601356214963441 ; xx [ 732 ] =
0.01475302284708025 ; xx [ 804 ] = - xx [ 730 ] ; xx [ 805 ] = - xx [ 731 ] ;
xx [ 806 ] = xx [ 732 ] ; xx [ 807 ] = - 0.03226754951497003 ; xx [ 808 ] = -
0.02045999852626687 ; xx [ 809 ] = 5.644585224138508e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 807 , xx + 810 ) ; xx [ 781 ] =
xx [ 810 ] - xx [ 79 ] + xx [ 730 ] ; xx [ 730 ] = xx [ 811 ] + xx [ 121 ] +
xx [ 731 ] ; xx [ 731 ] = xx [ 812 ] + xx [ 118 ] - xx [ 732 ] ; xx [ 732 ] =
sqrt ( xx [ 781 ] * xx [ 781 ] + xx [ 730 ] * xx [ 730 ] + xx [ 731 ] * xx [
731 ] ) ; if ( xx [ 732 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 732 ] = input [ 155 ] / xx [ 732 ] ; xx [ 810 ] = xx [
732 ] * xx [ 781 ] ; xx [ 781 ] = xx [ 732 ] * xx [ 730 ] ; xx [ 730 ] = xx [
732 ] * xx [ 731 ] ; xx [ 811 ] = - xx [ 810 ] ; xx [ 812 ] = - xx [ 781 ] ;
xx [ 813 ] = - xx [ 730 ] ; pm_math_Vector3_cross_ra ( xx + 804 , xx + 811 ,
xx + 814 ) ; xx [ 804 ] = xx [ 722 ] ; xx [ 805 ] = xx [ 617 ] ; xx [ 806 ] =
xx [ 526 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 804 , xx +
811 ) ; pm_math_Vector3_cross_ra ( xx + 742 , xx + 811 , xx + 804 ) ; xx [
731 ] = 0.03295989990236177 ; xx [ 742 ] = 0.01601356214944519 ; xx [ 743 ] =
0.01475302284711638 ; xx [ 817 ] = xx [ 731 ] ; xx [ 818 ] = - xx [ 742 ] ;
xx [ 819 ] = xx [ 743 ] ; xx [ 820 ] = 0.03226754951457088 ; xx [ 821 ] = -
0.02045999852744781 ; xx [ 822 ] = 5.644585223800618e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 820 , xx + 823 ) ; xx [ 744 ] =
xx [ 823 ] - xx [ 79 ] - xx [ 731 ] ; xx [ 731 ] = xx [ 824 ] + xx [ 121 ] +
xx [ 742 ] ; xx [ 742 ] = xx [ 825 ] + xx [ 118 ] - xx [ 743 ] ; xx [ 743 ] =
sqrt ( xx [ 744 ] * xx [ 744 ] + xx [ 731 ] * xx [ 731 ] + xx [ 742 ] * xx [
742 ] ) ; if ( xx [ 743 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 743 ] = input [ 160 ] / xx [ 743 ] ; xx [ 823 ] = xx [
743 ] * xx [ 744 ] ; xx [ 744 ] = xx [ 743 ] * xx [ 731 ] ; xx [ 731 ] = xx [
743 ] * xx [ 742 ] ; xx [ 824 ] = - xx [ 823 ] ; xx [ 825 ] = - xx [ 744 ] ;
xx [ 826 ] = - xx [ 731 ] ; pm_math_Vector3_cross_ra ( xx + 817 , xx + 824 ,
xx + 827 ) ; xx [ 817 ] = xx [ 757 ] ; xx [ 818 ] = xx [ 665 ] ; xx [ 819 ] =
xx [ 615 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 817 , xx +
824 ) ; pm_math_Vector3_cross_ra ( xx + 754 , xx + 824 , xx + 817 ) ; xx [
742 ] = 1.392865120001009e-13 ; xx [ 754 ] = 0.05459122458051579 ; xx [ 755 ]
= 4.374450014251545e-3 ; xx [ 830 ] = xx [ 742 ] ; xx [ 831 ] = - xx [ 754 ]
; xx [ 832 ] = - xx [ 755 ] ; xx [ 833 ] = - 8.371860108687535e-13 ; xx [ 834
] = - 0.05202883057027102 ; xx [ 835 ] = - 5.800535526395379e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 833 , xx + 836 ) ; xx [ 756 ] =
xx [ 836 ] - xx [ 79 ] - xx [ 742 ] ; xx [ 79 ] = xx [ 837 ] + xx [ 121 ] +
xx [ 754 ] ; xx [ 121 ] = xx [ 838 ] + xx [ 118 ] + xx [ 755 ] ; xx [ 118 ] =
sqrt ( xx [ 756 ] * xx [ 756 ] + xx [ 79 ] * xx [ 79 ] + xx [ 121 ] * xx [
121 ] ) ; if ( xx [ 118 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L2-L3 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 118 ] = input [ 176 ] / xx [ 118 ] ; xx [ 742 ] = xx [
118 ] * xx [ 756 ] ; xx [ 754 ] = xx [ 118 ] * xx [ 79 ] ; xx [ 79 ] = xx [
118 ] * xx [ 121 ] ; xx [ 836 ] = - xx [ 742 ] ; xx [ 837 ] = - xx [ 754 ] ;
xx [ 838 ] = - xx [ 79 ] ; pm_math_Vector3_cross_ra ( xx + 830 , xx + 836 ,
xx + 839 ) ; xx [ 830 ] = xx [ 663 ] ; xx [ 831 ] = xx [ 686 ] ; xx [ 832 ] =
xx [ 31 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 830 , xx +
836 ) ; pm_math_Vector3_cross_ra ( xx + 767 , xx + 836 , xx + 830 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 778 , xx + 767 ) ; xx [
121 ] = xx [ 199 ] * state [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
74 , xx + 329 , xx + 842 ) ; xx [ 74 ] = xx [ 842 ] * state [ 22 ] ; xx [ 75
] = xx [ 70 ] * state [ 23 ] ; xx [ 76 ] = xx [ 121 ] + xx [ 74 ] + xx [ 75 ]
; xx [ 77 ] = xx [ 767 ] + xx [ 76 ] ; xx [ 329 ] = xx [ 197 ] * state [ 21 ]
; xx [ 330 ] = xx [ 843 ] * state [ 22 ] ; xx [ 331 ] = xx [ 60 ] * state [
23 ] ; xx [ 755 ] = xx [ 329 ] + xx [ 330 ] + xx [ 331 ] ; xx [ 756 ] = xx [
768 ] + xx [ 755 ] ; xx [ 845 ] = xx [ 59 ] * state [ 21 ] ; xx [ 842 ] = xx
[ 844 ] * state [ 22 ] ; xx [ 843 ] = xx [ 58 ] * state [ 23 ] ; xx [ 844 ] =
xx [ 845 ] + xx [ 842 ] + xx [ 843 ] ; xx [ 846 ] = xx [ 769 ] + xx [ 844 ] ;
xx [ 847 ] = xx [ 77 ] ; xx [ 848 ] = xx [ 756 ] ; xx [ 849 ] = xx [ 846 ] ;
xx [ 850 ] = xx [ 77 ] * xx [ 136 ] ; xx [ 851 ] = xx [ 756 ] * xx [ 146 ] ;
xx [ 852 ] = xx [ 846 ] * xx [ 169 ] ; pm_math_Vector3_cross_ra ( xx + 847 ,
xx + 850 , xx + 853 ) ; xx [ 850 ] = 7.188464506654162e-13 ; xx [ 851 ] =
0.03225412823629766 ; xx [ 852 ] = - 3.133507134471407e-3 ; xx [ 136 ] =
0.7453544942628708 ; xx [ 146 ] = 4.148454829529507e-12 ; xx [ 169 ] = xx [
146 ] * input [ 147 ] ; xx [ 856 ] = 8.56489137069967e-12 ; xx [ 857 ] =
0.6666683417428341 ; xx [ 858 ] = xx [ 857 ] * input [ 147 ] ; xx [ 859 ] = (
xx [ 136 ] * xx [ 169 ] + xx [ 856 ] * xx [ 858 ] ) * xx [ 11 ] ; xx [ 860 ]
= xx [ 11 ] * ( xx [ 856 ] * xx [ 169 ] - xx [ 136 ] * xx [ 858 ] ) ; xx [
136 ] = input [ 147 ] - ( xx [ 857 ] * xx [ 858 ] + xx [ 146 ] * xx [ 169 ] )
* xx [ 11 ] ; xx [ 856 ] = - xx [ 859 ] ; xx [ 857 ] = xx [ 860 ] ; xx [ 858
] = xx [ 136 ] ; pm_math_Vector3_cross_ra ( xx + 850 , xx + 856 , xx + 861 )
; xx [ 146 ] = 5.287708455224579e-13 ; xx [ 169 ] = 0.03767096436270765 ; xx
[ 850 ] = 2.923671226993926e-3 ; xx [ 856 ] = - xx [ 146 ] ; xx [ 857 ] = -
xx [ 169 ] ; xx [ 858 ] = xx [ 850 ] ; xx [ 864 ] = - 6.605394032297572e-4 ;
xx [ 865 ] = - 0.08234236971698156 ; xx [ 866 ] = - 0.130840158189375 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 864 , xx + 867 ) ; xx [ 851 ] =
xx [ 867 ] + xx [ 81 ] + xx [ 146 ] ; xx [ 146 ] = xx [ 868 ] + xx [ 109 ] +
xx [ 169 ] ; xx [ 169 ] = xx [ 869 ] + xx [ 130 ] - xx [ 850 ] ; xx [ 850 ] =
sqrt ( xx [ 851 ] * xx [ 851 ] + xx [ 146 ] * xx [ 146 ] + xx [ 169 ] * xx [
169 ] ) ; if ( xx [ 850 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L1-L2 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 850 ] = input [ 149 ] / xx [ 850 ] ; xx [ 852 ] = xx [
850 ] * xx [ 851 ] ; xx [ 851 ] = xx [ 850 ] * xx [ 146 ] ; xx [ 146 ] = xx [
850 ] * xx [ 169 ] ; xx [ 867 ] = - xx [ 852 ] ; xx [ 868 ] = - xx [ 851 ] ;
xx [ 869 ] = - xx [ 146 ] ; pm_math_Vector3_cross_ra ( xx + 856 , xx + 867 ,
xx + 870 ) ; xx [ 856 ] = xx [ 797 ] ; xx [ 857 ] = xx [ 783 ] ; xx [ 858 ] =
xx [ 120 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 856 , xx +
867 ) ; pm_math_Vector3_cross_ra ( xx + 794 , xx + 867 , xx + 856 ) ; xx [
169 ] = 0.03234149932875941 ; xx [ 794 ] = 0.02029712378537596 ; xx [ 795 ] =
0.01526834402904475 ; xx [ 873 ] = - xx [ 169 ] ; xx [ 874 ] = - xx [ 794 ] ;
xx [ 875 ] = xx [ 795 ] ; xx [ 876 ] = - 0.02855975561335375 ; xx [ 877 ] = -
0.06190209972411849 ; xx [ 878 ] = - 0.1103901590767691 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 876 , xx + 879 ) ; xx [ 796 ] =
xx [ 879 ] + xx [ 81 ] + xx [ 169 ] ; xx [ 169 ] = xx [ 880 ] + xx [ 109 ] +
xx [ 794 ] ; xx [ 794 ] = xx [ 881 ] + xx [ 130 ] - xx [ 795 ] ; xx [ 795 ] =
sqrt ( xx [ 796 ] * xx [ 796 ] + xx [ 169 ] * xx [ 169 ] + xx [ 794 ] * xx [
794 ] ) ; if ( xx [ 795 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 795 ] = input [ 154 ] / xx [ 795 ] ; xx [ 879 ] = xx [
795 ] * xx [ 796 ] ; xx [ 796 ] = xx [ 795 ] * xx [ 169 ] ; xx [ 169 ] = xx [
795 ] * xx [ 794 ] ; xx [ 880 ] = - xx [ 879 ] ; xx [ 881 ] = - xx [ 796 ] ;
xx [ 882 ] = - xx [ 169 ] ; pm_math_Vector3_cross_ra ( xx + 873 , xx + 880 ,
xx + 883 ) ; xx [ 873 ] = xx [ 810 ] ; xx [ 874 ] = xx [ 781 ] ; xx [ 875 ] =
xx [ 730 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 873 , xx +
880 ) ; pm_math_Vector3_cross_ra ( xx + 807 , xx + 880 , xx + 873 ) ; xx [
794 ] = 0.03234149932846699 ; xx [ 807 ] = 0.02029712378655961 ; xx [ 808 ] =
0.01526834402870608 ; xx [ 886 ] = xx [ 794 ] ; xx [ 887 ] = - xx [ 807 ] ;
xx [ 888 ] = xx [ 808 ] ; xx [ 889 ] = 0.02720888144130509 ; xx [ 890 ] = -
0.06131317982669802 ; xx [ 891 ] = - 0.1109544366642564 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 889 , xx + 892 ) ; xx [ 809 ] =
xx [ 892 ] + xx [ 81 ] - xx [ 794 ] ; xx [ 794 ] = xx [ 893 ] + xx [ 109 ] +
xx [ 807 ] ; xx [ 807 ] = xx [ 894 ] + xx [ 130 ] - xx [ 808 ] ; xx [ 808 ] =
sqrt ( xx [ 809 ] * xx [ 809 ] + xx [ 794 ] * xx [ 794 ] + xx [ 807 ] * xx [
807 ] ) ; if ( xx [ 808 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 808 ] = input [ 159 ] / xx [ 808 ] ; xx [ 892 ] = xx [
808 ] * xx [ 809 ] ; xx [ 809 ] = xx [ 808 ] * xx [ 794 ] ; xx [ 794 ] = xx [
808 ] * xx [ 807 ] ; xx [ 893 ] = - xx [ 892 ] ; xx [ 894 ] = - xx [ 809 ] ;
xx [ 895 ] = - xx [ 794 ] ; pm_math_Vector3_cross_ra ( xx + 886 , xx + 893 ,
xx + 896 ) ; xx [ 886 ] = xx [ 823 ] ; xx [ 887 ] = xx [ 744 ] ; xx [ 888 ] =
xx [ 731 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 886 , xx +
893 ) ; pm_math_Vector3_cross_ra ( xx + 820 , xx + 893 , xx + 886 ) ; xx [
807 ] = 7.867570466502235e-13 ; xx [ 820 ] = 0.05039051001790674 ; xx [ 821 ]
= 1.894890190564144e-3 ; xx [ 899 ] = - xx [ 807 ] ; xx [ 900 ] = - xx [ 820
] ; xx [ 901 ] = - xx [ 821 ] ; xx [ 902 ] = - 5.113793264997846e-4 ; xx [
903 ] = - 0.09338152545463696 ; xx [ 904 ] = - 0.1276196231940676 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 902 , xx + 905 ) ; xx [ 822 ] =
xx [ 905 ] + xx [ 81 ] + xx [ 807 ] ; xx [ 81 ] = xx [ 906 ] + xx [ 109 ] +
xx [ 820 ] ; xx [ 109 ] = xx [ 907 ] + xx [ 130 ] + xx [ 821 ] ; xx [ 130 ] =
sqrt ( xx [ 822 ] * xx [ 822 ] + xx [ 81 ] * xx [ 81 ] + xx [ 109 ] * xx [
109 ] ) ; if ( xx [ 130 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L1-L2 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 130 ] = input [ 175 ] / xx [ 130 ] ; xx [ 807 ] = xx [
130 ] * xx [ 822 ] ; xx [ 820 ] = xx [ 130 ] * xx [ 81 ] ; xx [ 81 ] = xx [
130 ] * xx [ 109 ] ; xx [ 905 ] = - xx [ 807 ] ; xx [ 906 ] = - xx [ 820 ] ;
xx [ 907 ] = - xx [ 81 ] ; pm_math_Vector3_cross_ra ( xx + 899 , xx + 905 ,
xx + 908 ) ; xx [ 899 ] = xx [ 742 ] ; xx [ 900 ] = xx [ 754 ] ; xx [ 901 ] =
xx [ 79 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 899 , xx +
905 ) ; pm_math_Vector3_cross_ra ( xx + 833 , xx + 905 , xx + 899 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 847 , xx + 833 ) ; xx [
109 ] = xx [ 193 ] * state [ 27 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
104 , xx + 237 , xx + 911 ) ; xx [ 104 ] = xx [ 911 ] * state [ 28 ] ; xx [
105 ] = xx [ 98 ] * state [ 29 ] ; xx [ 106 ] = xx [ 109 ] + xx [ 104 ] + xx
[ 105 ] ; xx [ 107 ] = xx [ 833 ] + xx [ 106 ] ; xx [ 237 ] = xx [ 172 ] *
state [ 27 ] ; xx [ 238 ] = xx [ 912 ] * state [ 28 ] ; xx [ 239 ] = xx [ 100
] * state [ 29 ] ; xx [ 821 ] = xx [ 237 ] + xx [ 238 ] - xx [ 239 ] ; xx [
822 ] = xx [ 834 ] + xx [ 821 ] ; xx [ 914 ] = xx [ 80 ] * state [ 27 ] ; xx
[ 911 ] = xx [ 913 ] * state [ 28 ] ; xx [ 912 ] = xx [ 102 ] * state [ 29 ]
; xx [ 913 ] = xx [ 914 ] + xx [ 911 ] + xx [ 912 ] ; xx [ 915 ] = xx [ 835 ]
+ xx [ 913 ] ; xx [ 916 ] = xx [ 107 ] ; xx [ 917 ] = xx [ 822 ] ; xx [ 918 ]
= xx [ 915 ] ; xx [ 919 ] = xx [ 107 ] * xx [ 129 ] ; xx [ 920 ] = xx [ 822 ]
* xx [ 138 ] ; xx [ 921 ] = xx [ 915 ] * xx [ 170 ] ;
pm_math_Vector3_cross_ra ( xx + 916 , xx + 919 , xx + 922 ) ; xx [ 919 ] =
1.621693191737018e-3 ; xx [ 920 ] = 0.01603935194780268 ; xx [ 921 ] =
0.1973953748196041 ; xx [ 129 ] = 4.55902949587172e-3 ; xx [ 138 ] = xx [ 117
] * input [ 55 ] ; xx [ 170 ] = 5.716624978144062e-3 ; xx [ 925 ] = xx [ 170
] * input [ 55 ] ; xx [ 926 ] = xx [ 11 ] * ( xx [ 129 ] * xx [ 138 ] + xx [
111 ] * xx [ 925 ] ) ; xx [ 927 ] = input [ 55 ] - ( xx [ 170 ] * xx [ 925 ]
+ xx [ 117 ] * xx [ 138 ] ) * xx [ 11 ] ; xx [ 928 ] = ( xx [ 129 ] * xx [
925 ] - xx [ 111 ] * xx [ 138 ] ) * xx [ 11 ] ; xx [ 929 ] = - xx [ 926 ] ;
xx [ 930 ] = xx [ 927 ] ; xx [ 931 ] = xx [ 928 ] ; pm_math_Vector3_cross_ra
( xx + 919 , xx + 929 , xx + 932 ) ; xx [ 919 ] = - 0.018100209446297 ; xx [
920 ] = - 0.01269442968022964 ; xx [ 921 ] = - 0.05133171280667402 ; xx [ 138
] = 0.6266170963976704 ; xx [ 925 ] = 0.2657482314476699 ; xx [ 929 ] = xx [
925 ] * input [ 56 ] ; xx [ 930 ] = 0.2923293170648436 ; xx [ 931 ] =
0.6717681611754092 ; xx [ 935 ] = xx [ 931 ] * input [ 56 ] ; xx [ 936 ] = (
xx [ 138 ] * xx [ 929 ] + xx [ 930 ] * xx [ 935 ] ) * xx [ 11 ] ; xx [ 937 ]
= xx [ 11 ] * ( xx [ 138 ] * xx [ 935 ] - xx [ 930 ] * xx [ 929 ] ) ; xx [
138 ] = input [ 56 ] - ( xx [ 931 ] * xx [ 935 ] + xx [ 925 ] * xx [ 929 ] )
* xx [ 11 ] ; xx [ 929 ] = - xx [ 936 ] ; xx [ 930 ] = xx [ 937 ] ; xx [ 931
] = xx [ 138 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx + 929 , xx + 938 )
; xx [ 919 ] = - 0.04099705783254853 ; xx [ 920 ] = - 0.05961213993006317 ;
xx [ 921 ] = - 0.05881187309141439 ; xx [ 925 ] = 0.605680446748911 ; xx [
929 ] = 0.4004339489383053 ; xx [ 930 ] = xx [ 929 ] * input [ 57 ] ; xx [
931 ] = 0.3853263772121769 ; xx [ 935 ] = 0.5694975258842251 ; xx [ 941 ] =
xx [ 935 ] * input [ 57 ] ; xx [ 942 ] = ( xx [ 925 ] * xx [ 930 ] + xx [ 931
] * xx [ 941 ] ) * xx [ 11 ] ; xx [ 943 ] = xx [ 11 ] * ( xx [ 925 ] * xx [
941 ] - xx [ 931 ] * xx [ 930 ] ) ; xx [ 925 ] = input [ 57 ] - ( xx [ 935 ]
* xx [ 941 ] + xx [ 929 ] * xx [ 930 ] ) * xx [ 11 ] ; xx [ 929 ] = - xx [
942 ] ; xx [ 930 ] = xx [ 943 ] ; xx [ 931 ] = xx [ 925 ] ;
pm_math_Vector3_cross_ra ( xx + 919 , xx + 929 , xx + 944 ) ; xx [ 919 ] = -
0.01743287306265905 ; xx [ 920 ] = 0.08947660920120139 ; xx [ 921 ] = -
0.01663697113988645 ; xx [ 929 ] = 0.3708578463113209 ; xx [ 930 ] =
0.05876643406157585 ; xx [ 931 ] = xx [ 930 ] * input [ 58 ] ; xx [ 935 ] =
0.1257915591767713 ; xx [ 941 ] = 0.9182523877980892 ; xx [ 947 ] = xx [ 941
] * input [ 58 ] ; xx [ 948 ] = ( xx [ 929 ] * xx [ 931 ] + xx [ 935 ] * xx [
947 ] ) * xx [ 11 ] ; xx [ 949 ] = xx [ 11 ] * ( xx [ 935 ] * xx [ 931 ] - xx
[ 929 ] * xx [ 947 ] ) ; xx [ 929 ] = input [ 58 ] - ( xx [ 941 ] * xx [ 947
] + xx [ 930 ] * xx [ 931 ] ) * xx [ 11 ] ; xx [ 950 ] = xx [ 948 ] ; xx [
951 ] = xx [ 949 ] ; xx [ 952 ] = xx [ 929 ] ; pm_math_Vector3_cross_ra ( xx
+ 919 , xx + 950 , xx + 953 ) ; xx [ 919 ] = - 0.07836549010517251 ; xx [ 920
] = - 0.07517998721125167 ; xx [ 921 ] = - 0.07998584424533033 ; xx [ 930 ] =
0.6735319025732429 ; xx [ 931 ] = 0.2035426274293738 ; xx [ 935 ] = xx [ 931
] * input [ 59 ] ; xx [ 941 ] = 0.1987359770566641 ; xx [ 947 ] =
0.6822237070481707 ; xx [ 950 ] = xx [ 947 ] * input [ 59 ] ; xx [ 951 ] = (
xx [ 930 ] * xx [ 935 ] + xx [ 941 ] * xx [ 950 ] ) * xx [ 11 ] ; xx [ 952 ]
= xx [ 11 ] * ( xx [ 930 ] * xx [ 950 ] - xx [ 941 ] * xx [ 935 ] ) ; xx [
930 ] = input [ 59 ] - ( xx [ 947 ] * xx [ 950 ] + xx [ 931 ] * xx [ 935 ] )
* xx [ 11 ] ; xx [ 956 ] = xx [ 951 ] ; xx [ 957 ] = xx [ 952 ] ; xx [ 958 ]
= xx [ 930 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx + 956 , xx + 959 ) ;
xx [ 919 ] = - 0.06532404920399051 ; xx [ 920 ] = - 0.06376972582252889 ; xx
[ 921 ] = - 0.03607869452634164 ; xx [ 931 ] = 0.3977366413461614 ; xx [ 935
] = 0.06756736113505621 ; xx [ 941 ] = xx [ 935 ] * input [ 60 ] ; xx [ 947 ]
= 0.1528209788093872 ; xx [ 950 ] = 0.9021562859480953 ; xx [ 956 ] = xx [
950 ] * input [ 60 ] ; xx [ 957 ] = ( xx [ 931 ] * xx [ 941 ] + xx [ 947 ] *
xx [ 956 ] ) * xx [ 11 ] ; xx [ 958 ] = xx [ 11 ] * ( xx [ 931 ] * xx [ 956 ]
- xx [ 947 ] * xx [ 941 ] ) ; xx [ 931 ] = input [ 60 ] - ( xx [ 950 ] * xx [
956 ] + xx [ 935 ] * xx [ 941 ] ) * xx [ 11 ] ; xx [ 962 ] = xx [ 957 ] ; xx
[ 963 ] = xx [ 958 ] ; xx [ 964 ] = xx [ 931 ] ; pm_math_Vector3_cross_ra (
xx + 919 , xx + 962 , xx + 965 ) ; xx [ 919 ] = - 0.05345440800790809 ; xx [
920 ] = - 0.02948419519477849 ; xx [ 921 ] = - 0.01170478395315091 ; xx [ 935
] = 0.1836791436760975 ; xx [ 941 ] = 0.01030834667839922 ; xx [ 947 ] = xx [
941 ] * input [ 61 ] ; xx [ 950 ] = 0.03828129250334947 ; xx [ 956 ] =
0.982186465398219 ; xx [ 962 ] = xx [ 956 ] * input [ 61 ] ; xx [ 963 ] = (
xx [ 935 ] * xx [ 947 ] + xx [ 950 ] * xx [ 962 ] ) * xx [ 11 ] ; xx [ 964 ]
= xx [ 11 ] * ( xx [ 935 ] * xx [ 962 ] - xx [ 950 ] * xx [ 947 ] ) ; xx [
935 ] = input [ 61 ] - ( xx [ 956 ] * xx [ 962 ] + xx [ 941 ] * xx [ 947 ] )
* xx [ 11 ] ; xx [ 968 ] = - xx [ 963 ] ; xx [ 969 ] = xx [ 964 ] ; xx [ 970
] = xx [ 935 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx + 968 , xx + 971 )
; xx [ 919 ] = - 0.04199285130556987 ; xx [ 920 ] = 2.315642183133806e-3 ; xx
[ 921 ] = - 1.535421406011225e-3 ; xx [ 941 ] = 5.7833158625729e-3 ; xx [ 947
] = 0.9927480738095794 ; xx [ 950 ] = xx [ 947 ] * input [ 62 ] ; xx [ 956 ]
= 0.1200301699424373 ; xx [ 962 ] = 3.251693188713919e-3 ; xx [ 968 ] = xx [
962 ] * input [ 62 ] ; xx [ 969 ] = ( xx [ 941 ] * xx [ 950 ] - xx [ 956 ] *
xx [ 968 ] ) * xx [ 11 ] ; xx [ 970 ] = xx [ 11 ] * ( xx [ 941 ] * xx [ 968 ]
+ xx [ 956 ] * xx [ 950 ] ) ; xx [ 941 ] = input [ 62 ] - ( xx [ 947 ] * xx [
950 ] + xx [ 962 ] * xx [ 968 ] ) * xx [ 11 ] ; xx [ 974 ] = xx [ 969 ] ; xx
[ 975 ] = xx [ 970 ] ; xx [ 976 ] = xx [ 941 ] ; pm_math_Vector3_cross_ra (
xx + 919 , xx + 974 , xx + 977 ) ; xx [ 919 ] = - 0.03043206748930935 ; xx [
920 ] = 0.03373335873633954 ; xx [ 921 ] = 3.745598028823231e-4 ; xx [ 947 ]
= 0.05258429504046449 ; xx [ 950 ] = 0.01039385327931081 ; xx [ 956 ] = xx [
950 ] * input [ 63 ] ; xx [ 962 ] = 0.08656117151675111 ; xx [ 968 ] =
0.994803509902711 ; xx [ 974 ] = xx [ 968 ] * input [ 63 ] ; xx [ 975 ] = (
xx [ 947 ] * xx [ 956 ] + xx [ 962 ] * xx [ 974 ] ) * xx [ 11 ] ; xx [ 976 ]
= xx [ 11 ] * ( xx [ 962 ] * xx [ 956 ] - xx [ 947 ] * xx [ 974 ] ) ; xx [
947 ] = input [ 63 ] - ( xx [ 968 ] * xx [ 974 ] + xx [ 950 ] * xx [ 956 ] )
* xx [ 11 ] ; xx [ 980 ] = xx [ 975 ] ; xx [ 981 ] = xx [ 976 ] ; xx [ 982 ]
= xx [ 947 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx + 980 , xx + 983 ) ;
xx [ 919 ] = - 0.03085448323118554 ; xx [ 920 ] = 0.0757435853054349 ; xx [
921 ] = - 9.984752429257794e-3 ; xx [ 950 ] = 0.2319036612108555 ; xx [ 956 ]
= 0.03039616387005119 ; xx [ 962 ] = xx [ 956 ] * input [ 64 ] ; xx [ 968 ] =
0.09661200488939115 ; xx [ 974 ] = 0.967451748486837 ; xx [ 980 ] = xx [ 974
] * input [ 64 ] ; xx [ 981 ] = ( xx [ 950 ] * xx [ 962 ] + xx [ 968 ] * xx [
980 ] ) * xx [ 11 ] ; xx [ 982 ] = xx [ 11 ] * ( xx [ 968 ] * xx [ 962 ] - xx
[ 950 ] * xx [ 980 ] ) ; xx [ 950 ] = input [ 64 ] - ( xx [ 974 ] * xx [ 980
] + xx [ 956 ] * xx [ 962 ] ) * xx [ 11 ] ; xx [ 986 ] = xx [ 981 ] ; xx [
987 ] = xx [ 982 ] ; xx [ 988 ] = xx [ 950 ] ; pm_math_Vector3_cross_ra ( xx
+ 919 , xx + 986 , xx + 989 ) ; xx [ 919 ] = - 0.09031673281473247 ; xx [ 920
] = - 0.06318390459877354 ; xx [ 921 ] = - 0.1149965835010578 ; xx [ 956 ] =
0.7051604877432256 ; xx [ 962 ] = 0.2882213429642925 ; xx [ 968 ] = xx [ 962
] * input [ 65 ] ; xx [ 974 ] = 0.2379882103024527 ; xx [ 980 ] =
0.6025269751161617 ; xx [ 986 ] = xx [ 980 ] * input [ 65 ] ; xx [ 987 ] = (
xx [ 956 ] * xx [ 968 ] + xx [ 974 ] * xx [ 986 ] ) * xx [ 11 ] ; xx [ 988 ]
= xx [ 11 ] * ( xx [ 956 ] * xx [ 986 ] - xx [ 974 ] * xx [ 968 ] ) ; xx [
956 ] = input [ 65 ] - ( xx [ 980 ] * xx [ 986 ] + xx [ 962 ] * xx [ 968 ] )
* xx [ 11 ] ; xx [ 992 ] = xx [ 987 ] ; xx [ 993 ] = xx [ 988 ] ; xx [ 994 ]
= xx [ 956 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx + 992 , xx + 995 ) ;
xx [ 919 ] = - 0.08905003310803741 ; xx [ 920 ] = - 0.06352724945861782 ; xx
[ 921 ] = - 0.05308632888278775 ; xx [ 962 ] = 0.562721235256249 ; xx [ 968 ]
= 0.2322640742938012 ; xx [ 974 ] = xx [ 968 ] * input [ 66 ] ; xx [ 980 ] =
0.2973320519379396 ; xx [ 986 ] = 0.7355214898794594 ; xx [ 992 ] = xx [ 986
] * input [ 66 ] ; xx [ 993 ] = ( xx [ 962 ] * xx [ 974 ] + xx [ 980 ] * xx [
992 ] ) * xx [ 11 ] ; xx [ 994 ] = xx [ 11 ] * ( xx [ 962 ] * xx [ 992 ] - xx
[ 980 ] * xx [ 974 ] ) ; xx [ 962 ] = input [ 66 ] - ( xx [ 986 ] * xx [ 992
] + xx [ 968 ] * xx [ 974 ] ) * xx [ 11 ] ; xx [ 998 ] = xx [ 993 ] ; xx [
999 ] = xx [ 994 ] ; xx [ 1000 ] = xx [ 962 ] ; pm_math_Vector3_cross_ra ( xx
+ 919 , xx + 998 , xx + 1001 ) ; xx [ 919 ] = - 0.07771895238882454 ; xx [
920 ] = - 0.04411342736155736 ; xx [ 921 ] = - 0.02357135213144143 ; xx [ 968
] = 0.2775968795533705 ; xx [ 974 ] = 0.03501379881749344 ; xx [ 980 ] = xx [
974 ] * input [ 67 ] ; xx [ 986 ] = 0.1262932992895385 ; xx [ 992 ] =
0.9517163489765023 ; xx [ 998 ] = xx [ 992 ] * input [ 67 ] ; xx [ 999 ] = (
xx [ 968 ] * xx [ 980 ] + xx [ 986 ] * xx [ 998 ] ) * xx [ 11 ] ; xx [ 1000 ]
= xx [ 11 ] * ( xx [ 968 ] * xx [ 998 ] - xx [ 986 ] * xx [ 980 ] ) ; xx [
968 ] = input [ 67 ] - ( xx [ 992 ] * xx [ 998 ] + xx [ 974 ] * xx [ 980 ] )
* xx [ 11 ] ; xx [ 1004 ] = xx [ 999 ] ; xx [ 1005 ] = xx [ 1000 ] ; xx [
1006 ] = xx [ 968 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx + 1004 , xx +
1007 ) ; xx [ 919 ] = - 0.03058273761503733 ; xx [ 920 ] = -
0.03212652624056211 ; xx [ 921 ] = - 0.03502163932209757 ; xx [ 974 ] =
0.4899239161389347 ; xx [ 980 ] = 0.3424918976734947 ; xx [ 986 ] = xx [ 980
] * input [ 68 ] ; xx [ 992 ] = 0.4638887284690384 ; xx [ 998 ] =
0.6538203912562512 ; xx [ 1004 ] = xx [ 998 ] * input [ 68 ] ; xx [ 1005 ] =
( xx [ 974 ] * xx [ 986 ] + xx [ 992 ] * xx [ 1004 ] ) * xx [ 11 ] ; xx [
1006 ] = xx [ 11 ] * ( xx [ 974 ] * xx [ 1004 ] - xx [ 992 ] * xx [ 986 ] ) ;
xx [ 974 ] = input [ 68 ] - ( xx [ 998 ] * xx [ 1004 ] + xx [ 980 ] * xx [
986 ] ) * xx [ 11 ] ; xx [ 1010 ] = - xx [ 1005 ] ; xx [ 1011 ] = xx [ 1006 ]
; xx [ 1012 ] = xx [ 974 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx + 1010
, xx + 1013 ) ; xx [ 919 ] = - 0.06569296216337495 ; xx [ 920 ] = -
5.789251234493722e-3 ; xx [ 921 ] = - 6.04185571885384e-3 ; xx [ 980 ] =
0.08624836612663388 ; xx [ 986 ] = 8.910936692993903e-3 ; xx [ 992 ] = xx [
986 ] * input [ 69 ] ; xx [ 998 ] = 0.1519018818697432 ; xx [ 1004 ] =
0.98458500538662 ; xx [ 1010 ] = xx [ 1004 ] * input [ 69 ] ; xx [ 1011 ] = (
xx [ 980 ] * xx [ 992 ] + xx [ 998 ] * xx [ 1010 ] ) * xx [ 11 ] ; xx [ 1012
] = xx [ 11 ] * ( xx [ 980 ] * xx [ 1010 ] - xx [ 998 ] * xx [ 992 ] ) ; xx [
980 ] = input [ 69 ] - ( xx [ 1004 ] * xx [ 1010 ] + xx [ 986 ] * xx [ 992 ]
) * xx [ 11 ] ; xx [ 1016 ] = xx [ 1011 ] ; xx [ 1017 ] = xx [ 1012 ] ; xx [
1018 ] = xx [ 980 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx + 1016 , xx +
1019 ) ; xx [ 919 ] = - 0.05394756191514125 ; xx [ 920 ] =
0.02771789746310824 ; xx [ 921 ] = - 2.47730874572253e-3 ; xx [ 986 ] =
0.0566209977693985 ; xx [ 992 ] = 9.460058942232674e-3 ; xx [ 998 ] = xx [
992 ] * input [ 70 ] ; xx [ 1004 ] = 0.06363610745357245 ; xx [ 1010 ] =
0.9963207393829382 ; xx [ 1016 ] = xx [ 1010 ] * input [ 70 ] ; xx [ 1017 ] =
( xx [ 986 ] * xx [ 998 ] + xx [ 1004 ] * xx [ 1016 ] ) * xx [ 11 ] ; xx [
1018 ] = xx [ 11 ] * ( xx [ 1004 ] * xx [ 998 ] - xx [ 986 ] * xx [ 1016 ] )
; xx [ 986 ] = input [ 70 ] - ( xx [ 1010 ] * xx [ 1016 ] + xx [ 992 ] * xx [
998 ] ) * xx [ 11 ] ; xx [ 1022 ] = xx [ 1017 ] ; xx [ 1023 ] = xx [ 1018 ] ;
xx [ 1024 ] = xx [ 986 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx + 1022 ,
xx + 1025 ) ; xx [ 919 ] = - 0.04249591255465229 ; xx [ 920 ] =
0.05268462409333922 ; xx [ 921 ] = - 4.606763623076205e-3 ; xx [ 992 ] =
0.09354188588086317 ; xx [ 998 ] = 0.01447175992546536 ; xx [ 1004 ] = xx [
998 ] * input [ 71 ] ; xx [ 1010 ] = 0.0878088631658558 ; xx [ 1016 ] =
0.9916300153283136 ; xx [ 1022 ] = xx [ 1016 ] * input [ 71 ] ; xx [ 1023 ] =
( xx [ 992 ] * xx [ 1004 ] + xx [ 1010 ] * xx [ 1022 ] ) * xx [ 11 ] ; xx [
1024 ] = xx [ 11 ] * ( xx [ 1010 ] * xx [ 1004 ] - xx [ 992 ] * xx [ 1022 ] )
; xx [ 992 ] = input [ 71 ] - ( xx [ 1016 ] * xx [ 1022 ] + xx [ 998 ] * xx [
1004 ] ) * xx [ 11 ] ; xx [ 1028 ] = xx [ 1023 ] ; xx [ 1029 ] = xx [ 1024 ]
; xx [ 1030 ] = xx [ 992 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx + 1028
, xx + 1031 ) ; xx [ 919 ] = - 0.1013294628621652 ; xx [ 920 ] = -
0.05440669426042376 ; xx [ 921 ] = - 0.08521685899457788 ; xx [ 998 ] =
0.6624965949287286 ; xx [ 1004 ] = 0.3067121827978402 ; xx [ 1010 ] = xx [
1004 ] * input [ 72 ] ; xx [ 1016 ] = 0.2803859780123734 ; xx [ 1022 ] =
0.6232251615309427 ; xx [ 1028 ] = xx [ 1022 ] * input [ 72 ] ; xx [ 1029 ] =
( xx [ 998 ] * xx [ 1010 ] + xx [ 1016 ] * xx [ 1028 ] ) * xx [ 11 ] ; xx [
1030 ] = xx [ 11 ] * ( xx [ 998 ] * xx [ 1028 ] - xx [ 1016 ] * xx [ 1010 ] )
; xx [ 998 ] = input [ 72 ] - ( xx [ 1022 ] * xx [ 1028 ] + xx [ 1004 ] * xx
[ 1010 ] ) * xx [ 11 ] ; xx [ 1034 ] = xx [ 1029 ] ; xx [ 1035 ] = xx [ 1030
] ; xx [ 1036 ] = xx [ 998 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx +
1034 , xx + 1037 ) ; xx [ 919 ] = - 0.1006488674172343 ; xx [ 920 ] = -
0.03655403301522824 ; xx [ 921 ] = - 0.03482102239186442 ; xx [ 1004 ] =
0.2665968614874874 ; xx [ 1010 ] = 0.1292083701120501 ; xx [ 1016 ] = xx [
1010 ] * input [ 73 ] ; xx [ 1022 ] = 0.4210766355824749 ; xx [ 1028 ] =
0.8572781214428331 ; xx [ 1034 ] = xx [ 1028 ] * input [ 73 ] ; xx [ 1035 ] =
( xx [ 1004 ] * xx [ 1016 ] + xx [ 1022 ] * xx [ 1034 ] ) * xx [ 11 ] ; xx [
1036 ] = xx [ 11 ] * ( xx [ 1004 ] * xx [ 1034 ] - xx [ 1022 ] * xx [ 1016 ]
) ; xx [ 1004 ] = input [ 73 ] - ( xx [ 1028 ] * xx [ 1034 ] + xx [ 1010 ] *
xx [ 1016 ] ) * xx [ 11 ] ; xx [ 1040 ] = xx [ 1035 ] ; xx [ 1041 ] = xx [
1036 ] ; xx [ 1042 ] = xx [ 1004 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1040 , xx + 1043 ) ; xx [ 919 ] = - 0.08940329708669266 ; xx [ 920 ] = -
0.0107182514182957 ; xx [ 921 ] = - 0.01663531123898001 ; xx [ 1010 ] =
0.06643271209133222 ; xx [ 1016 ] = 0.01652383313092456 ; xx [ 1022 ] = xx [
1016 ] * input [ 74 ] ; xx [ 1028 ] = 0.3046495507201246 ; xx [ 1034 ] =
0.9500012152354745 ; xx [ 1040 ] = xx [ 1034 ] * input [ 74 ] ; xx [ 1041 ] =
( xx [ 1010 ] * xx [ 1022 ] + xx [ 1028 ] * xx [ 1040 ] ) * xx [ 11 ] ; xx [
1042 ] = xx [ 11 ] * ( xx [ 1010 ] * xx [ 1040 ] - xx [ 1028 ] * xx [ 1022 ]
) ; xx [ 1010 ] = input [ 74 ] - ( xx [ 1034 ] * xx [ 1040 ] + xx [ 1016 ] *
xx [ 1022 ] ) * xx [ 11 ] ; xx [ 1046 ] = xx [ 1041 ] ; xx [ 1047 ] = xx [
1042 ] ; xx [ 1048 ] = xx [ 1010 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1046 , xx + 1049 ) ; xx [ 919 ] = - 0.07827353512039555 ; xx [ 920 ] =
0.0286709022067658 ; xx [ 921 ] = - 0.01159036647949716 ; xx [ 1016 ] =
0.1089834380549926 ; xx [ 1022 ] = 0.03500768667018416 ; xx [ 1028 ] = xx [
1022 ] * input [ 75 ] ; xx [ 1034 ] = 0.2510328511948578 ; xx [ 1040 ] =
0.9611865478275778 ; xx [ 1046 ] = xx [ 1040 ] * input [ 75 ] ; xx [ 1047 ] =
( xx [ 1016 ] * xx [ 1028 ] + xx [ 1034 ] * xx [ 1046 ] ) * xx [ 11 ] ; xx [
1048 ] = xx [ 11 ] * ( xx [ 1034 ] * xx [ 1028 ] - xx [ 1016 ] * xx [ 1046 ]
) ; xx [ 1016 ] = input [ 75 ] - ( xx [ 1040 ] * xx [ 1046 ] + xx [ 1022 ] *
xx [ 1028 ] ) * xx [ 11 ] ; xx [ 1052 ] = xx [ 1047 ] ; xx [ 1053 ] = xx [
1048 ] ; xx [ 1054 ] = xx [ 1016 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1052 , xx + 1055 ) ; xx [ 919 ] = - 0.0660648177255008 ; xx [ 920 ] =
0.05628905449019814 ; xx [ 921 ] = - 0.01644484058504699 ; xx [ 1022 ] =
0.2585782393790033 ; xx [ 1028 ] = 0.0810078467025219 ; xx [ 1034 ] = xx [
1028 ] * input [ 76 ] ; xx [ 1040 ] = 0.2625074170017326 ; xx [ 1046 ] =
0.9261019808376152 ; xx [ 1052 ] = xx [ 1046 ] * input [ 76 ] ; xx [ 1053 ] =
( xx [ 1022 ] * xx [ 1034 ] + xx [ 1040 ] * xx [ 1052 ] ) * xx [ 11 ] ; xx [
1054 ] = xx [ 11 ] * ( xx [ 1040 ] * xx [ 1034 ] - xx [ 1022 ] * xx [ 1052 ]
) ; xx [ 1022 ] = input [ 76 ] - ( xx [ 1046 ] * xx [ 1052 ] + xx [ 1028 ] *
xx [ 1034 ] ) * xx [ 11 ] ; xx [ 1058 ] = xx [ 1053 ] ; xx [ 1059 ] = xx [
1054 ] ; xx [ 1060 ] = xx [ 1022 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1058 , xx + 1061 ) ; xx [ 919 ] = - 0.05402727094602115 ; xx [ 920 ] =
0.07479484954550918 ; xx [ 921 ] = - 0.0245122227950146 ; xx [ 1028 ] =
0.4178606219087699 ; xx [ 1034 ] = 0.1414118805700174 ; xx [ 1040 ] = xx [
1034 ] * input [ 77 ] ; xx [ 1046 ] = 0.2721100286937727 ; xx [ 1052 ] =
0.8551908050113386 ; xx [ 1058 ] = xx [ 1052 ] * input [ 77 ] ; xx [ 1059 ] =
( xx [ 1028 ] * xx [ 1040 ] + xx [ 1046 ] * xx [ 1058 ] ) * xx [ 11 ] ; xx [
1060 ] = xx [ 11 ] * ( xx [ 1046 ] * xx [ 1040 ] - xx [ 1028 ] * xx [ 1058 ]
) ; xx [ 1028 ] = input [ 77 ] - ( xx [ 1052 ] * xx [ 1058 ] + xx [ 1034 ] *
xx [ 1040 ] ) * xx [ 11 ] ; xx [ 1064 ] = xx [ 1059 ] ; xx [ 1065 ] = xx [
1060 ] ; xx [ 1066 ] = xx [ 1028 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1064 , xx + 1067 ) ; xx [ 919 ] = - 0.04293946919453471 ; xx [ 920 ] =
0.08811005315728188 ; xx [ 921 ] = - 0.03293948695364328 ; xx [ 1034 ] =
0.5381403936204883 ; xx [ 1040 ] = 0.172882008059172 ; xx [ 1046 ] = xx [
1040 ] * input [ 78 ] ; xx [ 1052 ] = 0.2411337866914131 ; xx [ 1058 ] =
0.788905079815864 ; xx [ 1064 ] = xx [ 1058 ] * input [ 78 ] ; xx [ 1065 ] =
( xx [ 1034 ] * xx [ 1046 ] + xx [ 1052 ] * xx [ 1064 ] ) * xx [ 11 ] ; xx [
1066 ] = xx [ 11 ] * ( xx [ 1052 ] * xx [ 1046 ] - xx [ 1034 ] * xx [ 1064 ]
) ; xx [ 1034 ] = input [ 78 ] - ( xx [ 1058 ] * xx [ 1064 ] + xx [ 1040 ] *
xx [ 1046 ] ) * xx [ 11 ] ; xx [ 1070 ] = xx [ 1065 ] ; xx [ 1071 ] = xx [
1066 ] ; xx [ 1072 ] = xx [ 1034 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1070 , xx + 1073 ) ; xx [ 919 ] = - 0.01753054762004361 ; xx [ 920 ] = -
7.241709836714854e-3 ; xx [ 921 ] = - 0.01455634065671041 ; xx [ 1040 ] =
0.6646547705646365 ; xx [ 1046 ] = 0.1739273614473019 ; xx [ 1052 ] = xx [
1046 ] * input [ 79 ] ; xx [ 1058 ] = 0.1906376598594076 ; xx [ 1064 ] =
0.7011708718629001 ; xx [ 1070 ] = xx [ 1064 ] * input [ 79 ] ; xx [ 1071 ] =
( xx [ 1040 ] * xx [ 1052 ] + xx [ 1058 ] * xx [ 1070 ] ) * xx [ 11 ] ; xx [
1072 ] = xx [ 11 ] * ( xx [ 1040 ] * xx [ 1070 ] - xx [ 1058 ] * xx [ 1052 ]
) ; xx [ 1040 ] = input [ 79 ] - ( xx [ 1064 ] * xx [ 1070 ] + xx [ 1046 ] *
xx [ 1052 ] ) * xx [ 11 ] ; xx [ 1076 ] = - xx [ 1071 ] ; xx [ 1077 ] = xx [
1072 ] ; xx [ 1078 ] = xx [ 1040 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1076 , xx + 1079 ) ; xx [ 919 ] = - 0.1098093924233946 ; xx [ 920 ] = -
0.03718968283129956 ; xx [ 921 ] = - 0.1153002663316233 ; xx [ 1046 ] =
0.6782479603435443 ; xx [ 1052 ] = 0.4285522328871861 ; xx [ 1058 ] = xx [
1052 ] * input [ 80 ] ; xx [ 1064 ] = 0.3121212591158557 ; xx [ 1070 ] =
0.5088251247581651 ; xx [ 1076 ] = xx [ 1070 ] * input [ 80 ] ; xx [ 1077 ] =
( xx [ 1046 ] * xx [ 1058 ] + xx [ 1064 ] * xx [ 1076 ] ) * xx [ 11 ] ; xx [
1078 ] = xx [ 11 ] * ( xx [ 1046 ] * xx [ 1076 ] - xx [ 1064 ] * xx [ 1058 ]
) ; xx [ 1046 ] = input [ 80 ] - ( xx [ 1070 ] * xx [ 1076 ] + xx [ 1052 ] *
xx [ 1058 ] ) * xx [ 11 ] ; xx [ 1082 ] = xx [ 1077 ] ; xx [ 1083 ] = xx [
1078 ] ; xx [ 1084 ] = xx [ 1046 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1082 , xx + 1085 ) ; xx [ 919 ] = - 0.1094970351153031 ; xx [ 920 ] = -
0.04003782354650123 ; xx [ 921 ] = - 0.06694069005340339 ; xx [ 1052 ] =
0.5215775193693708 ; xx [ 1058 ] = 0.3656035624705763 ; xx [ 1064 ] = xx [
1058 ] * input [ 81 ] ; xx [ 1070 ] = 0.4373677010243754 ; xx [ 1076 ] =
0.6348231411172484 ; xx [ 1082 ] = xx [ 1076 ] * input [ 81 ] ; xx [ 1083 ] =
( xx [ 1052 ] * xx [ 1064 ] + xx [ 1070 ] * xx [ 1082 ] ) * xx [ 11 ] ; xx [
1084 ] = xx [ 11 ] * ( xx [ 1052 ] * xx [ 1082 ] - xx [ 1070 ] * xx [ 1064 ]
) ; xx [ 1052 ] = input [ 81 ] - ( xx [ 1076 ] * xx [ 1082 ] + xx [ 1058 ] *
xx [ 1064 ] ) * xx [ 11 ] ; xx [ 1088 ] = xx [ 1083 ] ; xx [ 1089 ] = xx [
1084 ] ; xx [ 1090 ] = xx [ 1052 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1088 , xx + 1091 ) ; xx [ 919 ] = - 0.1090634608935626 ; xx [ 920 ] = -
9.049355481174783e-3 ; xx [ 921 ] = - 0.03708031420471432 ; xx [ 1058 ] =
0.03036498074447355 ; xx [ 1064 ] = 0.01445744959734118 ; xx [ 1070 ] = xx [
1064 ] * input [ 82 ] ; xx [ 1076 ] = 0.5573897988713492 ; xx [ 1082 ] =
0.8295695041463889 ; xx [ 1088 ] = xx [ 1082 ] * input [ 82 ] ; xx [ 1089 ] =
( xx [ 1058 ] * xx [ 1070 ] + xx [ 1076 ] * xx [ 1088 ] ) * xx [ 11 ] ; xx [
1090 ] = xx [ 11 ] * ( xx [ 1058 ] * xx [ 1088 ] - xx [ 1076 ] * xx [ 1070 ]
) ; xx [ 1058 ] = input [ 82 ] - ( xx [ 1082 ] * xx [ 1088 ] + xx [ 1064 ] *
xx [ 1070 ] ) * xx [ 11 ] ; xx [ 1094 ] = xx [ 1089 ] ; xx [ 1095 ] = xx [
1090 ] ; xx [ 1096 ] = xx [ 1058 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1094 , xx + 1097 ) ; xx [ 919 ] = - 0.1010291140985155 ; xx [ 920 ] =
0.02076290141192311 ; xx [ 921 ] = - 0.03004226911671877 ; xx [ 1064 ] =
0.1888417575813727 ; xx [ 1070 ] = 0.1104877504971639 ; xx [ 1076 ] = xx [
1070 ] * input [ 83 ] ; xx [ 1082 ] = 0.4651486145686861 ; xx [ 1088 ] =
0.8577692078575021 ; xx [ 1094 ] = xx [ 1088 ] * input [ 83 ] ; xx [ 1095 ] =
( xx [ 1064 ] * xx [ 1076 ] + xx [ 1082 ] * xx [ 1094 ] ) * xx [ 11 ] ; xx [
1096 ] = xx [ 11 ] * ( xx [ 1082 ] * xx [ 1076 ] - xx [ 1064 ] * xx [ 1094 ]
) ; xx [ 1064 ] = input [ 83 ] - ( xx [ 1088 ] * xx [ 1094 ] + xx [ 1070 ] *
xx [ 1076 ] ) * xx [ 11 ] ; xx [ 1100 ] = xx [ 1095 ] ; xx [ 1101 ] = xx [
1096 ] ; xx [ 1102 ] = xx [ 1064 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1100 , xx + 1103 ) ; xx [ 919 ] = - 0.08939423168309392 ; xx [ 920 ] =
0.05026664692245522 ; xx [ 921 ] = - 0.03891143517008596 ; xx [ 1070 ] =
0.4278049820722936 ; xx [ 1076 ] = 0.2441495186273143 ; xx [ 1082 ] = xx [
1076 ] * input [ 84 ] ; xx [ 1088 ] = 0.4188650043300141 ; xx [ 1094 ] =
0.7628407553453034 ; xx [ 1100 ] = xx [ 1094 ] * input [ 84 ] ; xx [ 1101 ] =
( xx [ 1070 ] * xx [ 1082 ] + xx [ 1088 ] * xx [ 1100 ] ) * xx [ 11 ] ; xx [
1102 ] = xx [ 11 ] * ( xx [ 1088 ] * xx [ 1082 ] - xx [ 1070 ] * xx [ 1100 ]
) ; xx [ 1070 ] = input [ 84 ] - ( xx [ 1094 ] * xx [ 1100 ] + xx [ 1076 ] *
xx [ 1082 ] ) * xx [ 11 ] ; xx [ 1106 ] = xx [ 1101 ] ; xx [ 1107 ] = xx [
1102 ] ; xx [ 1108 ] = xx [ 1070 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1106 , xx + 1109 ) ; xx [ 919 ] = - 0.07930235604146559 ; xx [ 920 ] =
0.06880633825740713 ; xx [ 921 ] = - 0.05707472804904289 ; xx [ 1076 ] =
0.6353262039713063 ; xx [ 1082 ] = 0.2580041401126371 ; xx [ 1088 ] = xx [
1082 ] * input [ 85 ] ; xx [ 1094 ] = 0.2666009172613014 ; xx [ 1100 ] =
0.6772875527776824 ; xx [ 1106 ] = xx [ 1100 ] * input [ 85 ] ; xx [ 1107 ] =
( xx [ 1076 ] * xx [ 1088 ] + xx [ 1094 ] * xx [ 1106 ] ) * xx [ 11 ] ; xx [
1108 ] = xx [ 11 ] * ( xx [ 1094 ] * xx [ 1088 ] - xx [ 1076 ] * xx [ 1106 ]
) ; xx [ 1076 ] = input [ 85 ] - ( xx [ 1100 ] * xx [ 1106 ] + xx [ 1082 ] *
xx [ 1088 ] ) * xx [ 11 ] ; xx [ 1112 ] = xx [ 1107 ] ; xx [ 1113 ] = xx [
1108 ] ; xx [ 1114 ] = xx [ 1076 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1112 , xx + 1115 ) ; xx [ 919 ] = - 0.06202638499895177 ; xx [ 920 ] =
0.08188678856755247 ; xx [ 921 ] = - 0.07370522850419119 ; xx [ 1082 ] =
0.6905341524779978 ; xx [ 1088 ] = 0.2119602768658031 ; xx [ 1094 ] = xx [
1088 ] * input [ 86 ] ; xx [ 1100 ] = 0.1965320352559405 ; xx [ 1106 ] =
0.6630313600506564 ; xx [ 1112 ] = xx [ 1106 ] * input [ 86 ] ; xx [ 1113 ] =
( xx [ 1082 ] * xx [ 1094 ] + xx [ 1100 ] * xx [ 1112 ] ) * xx [ 11 ] ; xx [
1114 ] = xx [ 11 ] * ( xx [ 1100 ] * xx [ 1094 ] - xx [ 1082 ] * xx [ 1112 ]
) ; xx [ 1082 ] = input [ 86 ] - ( xx [ 1106 ] * xx [ 1112 ] + xx [ 1088 ] *
xx [ 1094 ] ) * xx [ 11 ] ; xx [ 1118 ] = xx [ 1113 ] ; xx [ 1119 ] = xx [
1114 ] ; xx [ 1120 ] = xx [ 1082 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1118 , xx + 1121 ) ; xx [ 919 ] = - 0.1157391105586126 ; xx [ 920 ] = -
0.01123924367117589 ; xx [ 921 ] = - 0.1226951432359581 ; xx [ 1088 ] =
0.6368743135753699 ; xx [ 1094 ] = 0.6329088978278039 ; xx [ 1100 ] = xx [
1094 ] * input [ 87 ] ; xx [ 1106 ] = 0.3136082738905876 ; xx [ 1112 ] =
0.3089778087592412 ; xx [ 1118 ] = xx [ 1112 ] * input [ 87 ] ; xx [ 1119 ] =
( xx [ 1088 ] * xx [ 1100 ] + xx [ 1106 ] * xx [ 1118 ] ) * xx [ 11 ] ; xx [
1120 ] = xx [ 11 ] * ( xx [ 1088 ] * xx [ 1118 ] - xx [ 1106 ] * xx [ 1100 ]
) ; xx [ 1088 ] = input [ 87 ] - ( xx [ 1112 ] * xx [ 1118 ] + xx [ 1094 ] *
xx [ 1100 ] ) * xx [ 11 ] ; xx [ 1124 ] = xx [ 1119 ] ; xx [ 1125 ] = xx [
1120 ] ; xx [ 1126 ] = xx [ 1088 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1124 , xx + 1127 ) ; xx [ 919 ] = - 0.1160516677561728 ; xx [ 920 ] = -
0.01143333175071017 ; xx [ 921 ] = - 0.08330636306873912 ; xx [ 1094 ] =
0.4679958309924982 ; xx [ 1100 ] = 0.4909291307552261 ; xx [ 1106 ] = xx [
1100 ] * input [ 88 ] ; xx [ 1112 ] = 0.5033127474527106 ; xx [ 1118 ] =
0.535392163746504 ; xx [ 1124 ] = xx [ 1118 ] * input [ 88 ] ; xx [ 1125 ] =
( xx [ 1094 ] * xx [ 1106 ] + xx [ 1112 ] * xx [ 1124 ] ) * xx [ 11 ] ; xx [
1126 ] = xx [ 11 ] * ( xx [ 1094 ] * xx [ 1124 ] - xx [ 1112 ] * xx [ 1106 ]
) ; xx [ 1094 ] = input [ 88 ] - ( xx [ 1118 ] * xx [ 1124 ] + xx [ 1100 ] *
xx [ 1106 ] ) * xx [ 11 ] ; xx [ 1130 ] = xx [ 1125 ] ; xx [ 1131 ] = xx [
1126 ] ; xx [ 1132 ] = xx [ 1094 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1130 , xx + 1133 ) ; xx [ 919 ] = - 0.110067209631064 ; xx [ 920 ] =
0.02453955199399803 ; xx [ 921 ] = - 0.06642056429716578 ; xx [ 1100 ] =
0.509216299963611 ; xx [ 1106 ] = 0.4048061395453557 ; xx [ 1112 ] = xx [
1106 ] * input [ 89 ] ; xx [ 1118 ] = 0.4655982493493923 ; xx [ 1124 ] =
0.6000408481433056 ; xx [ 1130 ] = xx [ 1124 ] * input [ 89 ] ; xx [ 1131 ] =
( xx [ 1100 ] * xx [ 1112 ] + xx [ 1118 ] * xx [ 1130 ] ) * xx [ 11 ] ; xx [
1132 ] = xx [ 11 ] * ( xx [ 1118 ] * xx [ 1112 ] - xx [ 1100 ] * xx [ 1130 ]
) ; xx [ 1100 ] = input [ 89 ] - ( xx [ 1124 ] * xx [ 1130 ] + xx [ 1106 ] *
xx [ 1112 ] ) * xx [ 11 ] ; xx [ 1136 ] = xx [ 1131 ] ; xx [ 1137 ] = xx [
1132 ] ; xx [ 1138 ] = xx [ 1100 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1136 , xx + 1139 ) ; xx [ 919 ] = - 0.06617416083067242 ; xx [ 920 ] = -
0.07971661038129915 ; xx [ 921 ] = - 0.09073845952707212 ; xx [ 1106 ] =
0.7235179426369552 ; xx [ 1112 ] = 0.0538590446688918 ; xx [ 1118 ] = xx [
1112 ] * input [ 90 ] ; xx [ 1124 ] = 0.04375915444765855 ; xx [ 1130 ] =
0.6868086534048389 ; xx [ 1136 ] = xx [ 1130 ] * input [ 90 ] ; xx [ 1137 ] =
( xx [ 1106 ] * xx [ 1118 ] + xx [ 1124 ] * xx [ 1136 ] ) * xx [ 11 ] ; xx [
1138 ] = xx [ 11 ] * ( xx [ 1106 ] * xx [ 1136 ] - xx [ 1124 ] * xx [ 1118 ]
) ; xx [ 1106 ] = input [ 90 ] - ( xx [ 1130 ] * xx [ 1136 ] + xx [ 1112 ] *
xx [ 1118 ] ) * xx [ 11 ] ; xx [ 1142 ] = xx [ 1137 ] ; xx [ 1143 ] = xx [
1138 ] ; xx [ 1144 ] = xx [ 1106 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1142 , xx + 1145 ) ; xx [ 919 ] = - 0.1106485750497238 ; xx [ 920 ] =
0.01773417046405806 ; xx [ 921 ] = - 0.1225258118199228 ; xx [ 1112 ] =
0.6625935915012544 ; xx [ 1118 ] = 0.4596611201296349 ; xx [ 1124 ] = xx [
1118 ] * input [ 91 ] ; xx [ 1130 ] = 0.3337564398799193 ; xx [ 1136 ] =
0.4881475452988784 ; xx [ 1142 ] = xx [ 1136 ] * input [ 91 ] ; xx [ 1143 ] =
( xx [ 1112 ] * xx [ 1124 ] + xx [ 1130 ] * xx [ 1142 ] ) * xx [ 11 ] ; xx [
1144 ] = xx [ 11 ] * ( xx [ 1130 ] * xx [ 1124 ] - xx [ 1112 ] * xx [ 1142 ]
) ; xx [ 1112 ] = input [ 91 ] - ( xx [ 1136 ] * xx [ 1142 ] + xx [ 1118 ] *
xx [ 1124 ] ) * xx [ 11 ] ; xx [ 1148 ] = xx [ 1143 ] ; xx [ 1149 ] = xx [
1144 ] ; xx [ 1150 ] = xx [ 1112 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1148 , xx + 1151 ) ; xx [ 919 ] = - 0.1024629917770516 ; xx [ 920 ] =
0.04231214030604319 ; xx [ 921 ] = - 0.08534356053751085 ; xx [ 1118 ] =
0.6724916232356 ; xx [ 1124 ] = 0.3694040981744918 ; xx [ 1130 ] = xx [ 1124
] * input [ 92 ] ; xx [ 1136 ] = 0.3041388260371736 ; xx [ 1142 ] =
0.564619520940047 ; xx [ 1148 ] = xx [ 1142 ] * input [ 92 ] ; xx [ 1149 ] =
( xx [ 1118 ] * xx [ 1130 ] + xx [ 1136 ] * xx [ 1148 ] ) * xx [ 11 ] ; xx [
1150 ] = xx [ 11 ] * ( xx [ 1136 ] * xx [ 1130 ] - xx [ 1118 ] * xx [ 1148 ]
) ; xx [ 1118 ] = input [ 92 ] - ( xx [ 1142 ] * xx [ 1148 ] + xx [ 1124 ] *
xx [ 1130 ] ) * xx [ 11 ] ; xx [ 1154 ] = xx [ 1149 ] ; xx [ 1155 ] = xx [
1150 ] ; xx [ 1156 ] = xx [ 1118 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1154 , xx + 1157 ) ; xx [ 919 ] = - 0.08565381476365412 ; xx [ 920 ] =
0.0586459764374675 ; xx [ 921 ] = - 0.1158007647153833 ; xx [ 1124 ] =
0.7024913686853388 ; xx [ 1130 ] = 0.3180142807071604 ; xx [ 1136 ] = xx [
1130 ] * input [ 93 ] ; xx [ 1142 ] = 0.2578772449452105 ; xx [ 1148 ] =
0.5821272375764381 ; xx [ 1154 ] = xx [ 1148 ] * input [ 93 ] ; xx [ 1155 ] =
( xx [ 1124 ] * xx [ 1136 ] + xx [ 1142 ] * xx [ 1154 ] ) * xx [ 11 ] ; xx [
1156 ] = xx [ 11 ] * ( xx [ 1142 ] * xx [ 1136 ] - xx [ 1124 ] * xx [ 1154 ]
) ; xx [ 1124 ] = input [ 93 ] - ( xx [ 1148 ] * xx [ 1154 ] + xx [ 1130 ] *
xx [ 1136 ] ) * xx [ 11 ] ; xx [ 1160 ] = xx [ 1155 ] ; xx [ 1161 ] = xx [
1156 ] ; xx [ 1162 ] = xx [ 1124 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1160 , xx + 1163 ) ; xx [ 919 ] = - 1.255454561475579e-3 ; xx [ 920 ] =
0.08936900436542543 ; xx [ 921 ] = - 0.01042666174946011 ; xx [ 1130 ] =
0.1771377441620736 ; xx [ 1136 ] = 6.092217096126821e-3 ; xx [ 1142 ] = xx [
1136 ] * input [ 94 ] ; xx [ 1148 ] = 4.043444316251642e-3 ; xx [ 1154 ] =
0.9841589074138826 ; xx [ 1160 ] = xx [ 1154 ] * input [ 94 ] ; xx [ 1161 ] =
( xx [ 1130 ] * xx [ 1142 ] - xx [ 1148 ] * xx [ 1160 ] ) * xx [ 11 ] ; xx [
1162 ] = xx [ 11 ] * ( xx [ 1148 ] * xx [ 1142 ] + xx [ 1130 ] * xx [ 1160 ]
) ; xx [ 1130 ] = input [ 94 ] - ( xx [ 1154 ] * xx [ 1160 ] + xx [ 1136 ] *
xx [ 1142 ] ) * xx [ 11 ] ; xx [ 1166 ] = xx [ 1161 ] ; xx [ 1167 ] = - xx [
1162 ] ; xx [ 1168 ] = xx [ 1130 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1166 , xx + 1169 ) ; xx [ 919 ] = - 5.788798232309321e-4 ; xx [ 920 ] =
0.03934347898355355 ; xx [ 921 ] = 4.230350906401621e-3 ; xx [ 1136 ] =
0.09068858100887967 ; xx [ 1142 ] = 5.716624978144043e-3 ; xx [ 1148 ] = xx [
1142 ] * input [ 95 ] ; xx [ 1154 ] = 4.559029495871598e-3 ; xx [ 1160 ] =
0.9958524573065587 ; xx [ 1166 ] = xx [ 1160 ] * input [ 95 ] ; xx [ 1167 ] =
( xx [ 1136 ] * xx [ 1148 ] - xx [ 1154 ] * xx [ 1166 ] ) * xx [ 11 ] ; xx [
1168 ] = xx [ 11 ] * ( xx [ 1154 ] * xx [ 1148 ] + xx [ 1136 ] * xx [ 1166 ]
) ; xx [ 1136 ] = input [ 95 ] - ( xx [ 1160 ] * xx [ 1166 ] + xx [ 1142 ] *
xx [ 1148 ] ) * xx [ 11 ] ; xx [ 1172 ] = xx [ 1167 ] ; xx [ 1173 ] = - xx [
1168 ] ; xx [ 1174 ] = xx [ 1136 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1172 , xx + 1175 ) ; xx [ 919 ] = 0.01690963297561175 ; xx [ 920 ] = -
0.01232472380436953 ; xx [ 921 ] = - 0.05168594899503165 ; xx [ 1142 ] =
0.6269481732843243 ; xx [ 1148 ] = 0.2649662167727434 ; xx [ 1154 ] = xx [
1148 ] * input [ 96 ] ; xx [ 1160 ] = 0.2788853047140321 ; xx [ 1166 ] =
0.6774598724641557 ; xx [ 1172 ] = xx [ 1166 ] * input [ 96 ] ; xx [ 1173 ] =
( xx [ 1142 ] * xx [ 1154 ] + xx [ 1160 ] * xx [ 1172 ] ) * xx [ 11 ] ; xx [
1174 ] = xx [ 11 ] * ( xx [ 1142 ] * xx [ 1172 ] - xx [ 1160 ] * xx [ 1154 ]
) ; xx [ 1142 ] = input [ 96 ] - ( xx [ 1166 ] * xx [ 1172 ] + xx [ 1148 ] *
xx [ 1154 ] ) * xx [ 11 ] ; xx [ 1178 ] = xx [ 1173 ] ; xx [ 1179 ] = xx [
1174 ] ; xx [ 1180 ] = xx [ 1142 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1178 , xx + 1181 ) ; xx [ 919 ] = 0.04063604489054208 ; xx [ 920 ] = -
0.05875008984204186 ; xx [ 921 ] = - 0.05963785222048177 ; xx [ 1148 ] =
0.6056330817001833 ; xx [ 1154 ] = 0.4005055822165586 ; xx [ 1160 ] = xx [
1154 ] * input [ 97 ] ; xx [ 1166 ] = 0.373128172234625 ; xx [ 1172 ] =
0.5775631706130187 ; xx [ 1178 ] = xx [ 1172 ] * input [ 97 ] ; xx [ 1179 ] =
( xx [ 1148 ] * xx [ 1160 ] + xx [ 1166 ] * xx [ 1178 ] ) * xx [ 11 ] ; xx [
1180 ] = xx [ 11 ] * ( xx [ 1148 ] * xx [ 1178 ] - xx [ 1166 ] * xx [ 1160 ]
) ; xx [ 1148 ] = input [ 97 ] - ( xx [ 1172 ] * xx [ 1178 ] + xx [ 1154 ] *
xx [ 1160 ] ) * xx [ 11 ] ; xx [ 1184 ] = xx [ 1179 ] ; xx [ 1185 ] = xx [
1180 ] ; xx [ 1186 ] = xx [ 1148 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1184 , xx + 1187 ) ; xx [ 919 ] = 0.03012712893355168 ; xx [ 920 ] = -
0.03148542668589369 ; xx [ 921 ] = - 0.03563591320150283 ; xx [ 1154 ] =
0.4913046688168534 ; xx [ 1160 ] = 0.3405082465604375 ; xx [ 1166 ] = xx [
1160 ] * input [ 98 ] ; xx [ 1172 ] = 0.4520512841339471 ; xx [ 1178 ] =
0.662060037259423 ; xx [ 1184 ] = xx [ 1178 ] * input [ 98 ] ; xx [ 1185 ] =
( xx [ 1154 ] * xx [ 1166 ] + xx [ 1172 ] * xx [ 1184 ] ) * xx [ 11 ] ; xx [
1186 ] = xx [ 11 ] * ( xx [ 1154 ] * xx [ 1184 ] - xx [ 1172 ] * xx [ 1166 ]
) ; xx [ 1154 ] = input [ 98 ] - ( xx [ 1178 ] * xx [ 1184 ] + xx [ 1160 ] *
xx [ 1166 ] ) * xx [ 11 ] ; xx [ 1190 ] = xx [ 1185 ] ; xx [ 1191 ] = xx [
1186 ] ; xx [ 1192 ] = xx [ 1154 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1190 , xx + 1193 ) ; xx [ 919 ] = 0.01696911852711806 ; xx [ 920 ] = -
6.87739145058478e-3 ; xx [ 921 ] = - 0.01490541478530271 ; xx [ 1160 ] =
0.6648369869461649 ; xx [ 1166 ] = 0.1732295352493182 ; xx [ 1172 ] = xx [
1166 ] * input [ 99 ] ; xx [ 1178 ] = 0.1765054139502728 ; xx [ 1184 ] =
0.7048610840101003 ; xx [ 1190 ] = xx [ 1184 ] * input [ 99 ] ; xx [ 1191 ] =
( xx [ 1160 ] * xx [ 1172 ] + xx [ 1178 ] * xx [ 1190 ] ) * xx [ 11 ] ; xx [
1192 ] = xx [ 11 ] * ( xx [ 1160 ] * xx [ 1190 ] - xx [ 1178 ] * xx [ 1172 ]
) ; xx [ 1160 ] = input [ 99 ] - ( xx [ 1184 ] * xx [ 1190 ] + xx [ 1166 ] *
xx [ 1172 ] ) * xx [ 11 ] ; xx [ 1196 ] = xx [ 1191 ] ; xx [ 1197 ] = xx [
1192 ] ; xx [ 1198 ] = xx [ 1160 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1196 , xx + 1199 ) ; xx [ 919 ] = 0.06558095736323434 ; xx [ 920 ] = -
0.07832526903266032 ; xx [ 921 ] = - 0.09207158266150849 ; xx [ 1166 ] =
0.7235234255290708 ; xx [ 1172 ] = 0.05378533927509797 ; xx [ 1178 ] = xx [
1172 ] * input [ 100 ] ; xx [ 1184 ] = 0.05834256431148328 ; xx [ 1190 ] =
0.6857238038593254 ; xx [ 1196 ] = xx [ 1190 ] * input [ 100 ] ; xx [ 1197 ]
= ( xx [ 1166 ] * xx [ 1178 ] + xx [ 1184 ] * xx [ 1196 ] ) * xx [ 11 ] ; xx
[ 1198 ] = xx [ 11 ] * ( xx [ 1166 ] * xx [ 1196 ] - xx [ 1184 ] * xx [ 1178
] ) ; xx [ 1166 ] = input [ 100 ] - ( xx [ 1190 ] * xx [ 1196 ] + xx [ 1172 ]
* xx [ 1178 ] ) * xx [ 11 ] ; xx [ 1202 ] = - xx [ 1197 ] ; xx [ 1203 ] = xx
[ 1198 ] ; xx [ 1204 ] = xx [ 1166 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1202 , xx + 1205 ) ; xx [ 919 ] = - 0.0536213526876241 ; xx [ 920 ] = -
0.07182367668605528 ; xx [ 921 ] = - 0.04789507325013141 ; xx [ 1172 ] =
0.5422753696281843 ; xx [ 1178 ] = 0.03929410677551657 ; xx [ 1184 ] = xx [
1178 ] * input [ 101 ] ; xx [ 1190 ] = 0.06516590223105889 ; xx [ 1196 ] =
0.8367477528226429 ; xx [ 1202 ] = xx [ 1196 ] * input [ 101 ] ; xx [ 1203 ]
= ( xx [ 1172 ] * xx [ 1184 ] + xx [ 1190 ] * xx [ 1202 ] ) * xx [ 11 ] ; xx
[ 1204 ] = xx [ 11 ] * ( xx [ 1172 ] * xx [ 1202 ] - xx [ 1190 ] * xx [ 1184
] ) ; xx [ 1172 ] = input [ 101 ] - ( xx [ 1196 ] * xx [ 1202 ] + xx [ 1178 ]
* xx [ 1184 ] ) * xx [ 11 ] ; xx [ 1208 ] = - xx [ 1203 ] ; xx [ 1209 ] = xx
[ 1204 ] ; xx [ 1210 ] = xx [ 1172 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1208 , xx + 1211 ) ; xx [ 919 ] = 0.05373366350985357 ; xx [ 920 ] = -
0.070690001766501 ; xx [ 921 ] = - 0.04898131155079476 ; xx [ 1178 ] =
0.5425079238946524 ; xx [ 1184 ] = 0.03594100505250031 ; xx [ 1190 ] = xx [
1184 ] * input [ 102 ] ; xx [ 1196 ] = 0.05096762220483811 ; xx [ 1202 ] =
0.8377324740954689 ; xx [ 1208 ] = xx [ 1202 ] * input [ 102 ] ; xx [ 1209 ]
= ( xx [ 1178 ] * xx [ 1190 ] + xx [ 1196 ] * xx [ 1208 ] ) * xx [ 11 ] ; xx
[ 1210 ] = xx [ 11 ] * ( xx [ 1178 ] * xx [ 1208 ] - xx [ 1196 ] * xx [ 1190
] ) ; xx [ 1178 ] = input [ 102 ] - ( xx [ 1202 ] * xx [ 1208 ] + xx [ 1184 ]
* xx [ 1190 ] ) * xx [ 11 ] ; xx [ 1214 ] = xx [ 1209 ] ; xx [ 1215 ] = xx [
1210 ] ; xx [ 1216 ] = xx [ 1178 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1214 , xx + 1217 ) ; xx [ 919 ] = 0.04170815708087641 ; xx [ 920 ] = -
0.04084259670838948 ; xx [ 921 ] = - 0.02190882443878382 ; xx [ 1184 ] =
0.2362168935499534 ; xx [ 1190 ] = 0.05791248022737374 ; xx [ 1196 ] = xx [
1190 ] * input [ 103 ] ; xx [ 1202 ] = 0.2400132836924455 ; xx [ 1208 ] =
0.9398092080239978 ; xx [ 1214 ] = xx [ 1208 ] * input [ 103 ] ; xx [ 1215 ]
= ( xx [ 1184 ] * xx [ 1196 ] + xx [ 1202 ] * xx [ 1214 ] ) * xx [ 11 ] ; xx
[ 1216 ] = xx [ 11 ] * ( xx [ 1184 ] * xx [ 1214 ] - xx [ 1202 ] * xx [ 1196
] ) ; xx [ 1184 ] = input [ 103 ] - ( xx [ 1208 ] * xx [ 1214 ] + xx [ 1190 ]
* xx [ 1196 ] ) * xx [ 11 ] ; xx [ 1220 ] = xx [ 1215 ] ; xx [ 1221 ] = xx [
1216 ] ; xx [ 1222 ] = xx [ 1184 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1220 , xx + 1223 ) ; xx [ 919 ] = 0.02962397495869174 ; xx [ 920 ] = -
5.97858076193959e-3 ; xx [ 921 ] = - 5.42483109988175e-3 ; xx [ 1190 ] =
0.2660160875688612 ; xx [ 1196 ] = 0.01261015473456296 ; xx [ 1202 ] = xx [
1196 ] * input [ 104 ] ; xx [ 1208 ] = 0.0383859347047175 ; xx [ 1214 ] =
0.9631214591986682 ; xx [ 1220 ] = xx [ 1214 ] * input [ 104 ] ; xx [ 1221 ]
= ( xx [ 1190 ] * xx [ 1202 ] + xx [ 1208 ] * xx [ 1220 ] ) * xx [ 11 ] ; xx
[ 1222 ] = xx [ 11 ] * ( xx [ 1190 ] * xx [ 1220 ] - xx [ 1208 ] * xx [ 1202
] ) ; xx [ 1190 ] = input [ 104 ] - ( xx [ 1214 ] * xx [ 1220 ] + xx [ 1196 ]
* xx [ 1202 ] ) * xx [ 11 ] ; xx [ 1226 ] = - xx [ 1221 ] ; xx [ 1227 ] = xx
[ 1222 ] ; xx [ 1228 ] = xx [ 1190 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1226 , xx + 1229 ) ; xx [ 919 ] = 0.01582278174737271 ; xx [ 920 ] =
0.02097147799811188 ; xx [ 921 ] = 3.386960009426072e-3 ; xx [ 1196 ] =
0.02559897076770395 ; xx [ 1202 ] = 2.341435664389156e-3 ; xx [ 1208 ] = xx [
1202 ] * input [ 105 ] ; xx [ 1214 ] = 0.125190184679472 ; xx [ 1220 ] =
0.9917996914874414 ; xx [ 1226 ] = xx [ 1220 ] * input [ 105 ] ; xx [ 1227 ]
= ( xx [ 1196 ] * xx [ 1208 ] - xx [ 1214 ] * xx [ 1226 ] ) * xx [ 11 ] ; xx
[ 1228 ] = xx [ 11 ] * ( xx [ 1214 ] * xx [ 1208 ] + xx [ 1196 ] * xx [ 1226
] ) ; xx [ 1196 ] = input [ 105 ] - ( xx [ 1220 ] * xx [ 1226 ] + xx [ 1202 ]
* xx [ 1208 ] ) * xx [ 11 ] ; xx [ 1232 ] = xx [ 1227 ] ; xx [ 1233 ] = - xx
[ 1228 ] ; xx [ 1234 ] = xx [ 1196 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1232 , xx + 1235 ) ; xx [ 919 ] = 0.01545051058463876 ; xx [ 920 ] =
0.05912544116052309 ; xx [ 921 ] = - 1.949201488789741e-3 ; xx [ 1202 ] =
0.1183223592497275 ; xx [ 1208 ] = 2.272610491874502e-3 ; xx [ 1214 ] = xx [
1208 ] * input [ 106 ] ; xx [ 1220 ] = 0.07242969728623251 ; xx [ 1226 ] =
0.9903275182959201 ; xx [ 1232 ] = xx [ 1226 ] * input [ 106 ] ; xx [ 1233 ]
= ( xx [ 1202 ] * xx [ 1214 ] + xx [ 1220 ] * xx [ 1232 ] ) * xx [ 11 ] ; xx
[ 1234 ] = xx [ 11 ] * ( xx [ 1220 ] * xx [ 1214 ] - xx [ 1202 ] * xx [ 1232
] ) ; xx [ 1202 ] = input [ 106 ] - ( xx [ 1226 ] * xx [ 1232 ] + xx [ 1208 ]
* xx [ 1214 ] ) * xx [ 11 ] ; xx [ 1238 ] = - xx [ 1233 ] ; xx [ 1239 ] = xx
[ 1234 ] ; xx [ 1240 ] = xx [ 1202 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1238 , xx + 1241 ) ; xx [ 919 ] = 0.01478712197719425 ; xx [ 920 ] =
0.08981685465000155 ; xx [ 921 ] = - 0.01696297820252731 ; xx [ 1208 ] =
0.3727409608906735 ; xx [ 1214 ] = 0.04531238260434349 ; xx [ 1220 ] = xx [
1214 ] * input [ 107 ] ; xx [ 1226 ] = 0.1311523051115367 ; xx [ 1232 ] =
0.9175020637148159 ; xx [ 1238 ] = xx [ 1232 ] * input [ 107 ] ; xx [ 1239 ]
= ( xx [ 1208 ] * xx [ 1220 ] + xx [ 1226 ] * xx [ 1238 ] ) * xx [ 11 ] ; xx
[ 1240 ] = xx [ 11 ] * ( xx [ 1226 ] * xx [ 1220 ] - xx [ 1208 ] * xx [ 1238
] ) ; xx [ 1208 ] = input [ 107 ] - ( xx [ 1232 ] * xx [ 1238 ] + xx [ 1214 ]
* xx [ 1220 ] ) * xx [ 11 ] ; xx [ 1244 ] = - xx [ 1239 ] ; xx [ 1245 ] = xx
[ 1240 ] ; xx [ 1246 ] = xx [ 1208 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1244 , xx + 1247 ) ; xx [ 919 ] = 0.0778888264372435 ; xx [ 920 ] = -
0.07352993297055943 ; xx [ 921 ] = - 0.08156685488911927 ; xx [ 1214 ] =
0.6734207063632587 ; xx [ 1220 ] = 0.2039102184933242 ; xx [ 1226 ] = xx [
1220 ] * input [ 108 ] ; xx [ 1232 ] = 0.2127286300869492 ; xx [ 1238 ] =
0.6779909328129283 ; xx [ 1244 ] = xx [ 1238 ] * input [ 108 ] ; xx [ 1245 ]
= ( xx [ 1214 ] * xx [ 1226 ] + xx [ 1232 ] * xx [ 1244 ] ) * xx [ 11 ] ; xx
[ 1246 ] = xx [ 11 ] * ( xx [ 1214 ] * xx [ 1244 ] - xx [ 1232 ] * xx [ 1226
] ) ; xx [ 1214 ] = input [ 108 ] - ( xx [ 1238 ] * xx [ 1244 ] + xx [ 1220 ]
* xx [ 1226 ] ) * xx [ 11 ] ; xx [ 1250 ] = - xx [ 1245 ] ; xx [ 1251 ] = xx
[ 1246 ] ; xx [ 1252 ] = xx [ 1214 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1250 , xx + 1253 ) ; xx [ 919 ] = 0.06550036046086356 ; xx [ 920 ] = -
0.06238821280752714 ; xx [ 921 ] = - 0.0374024005763527 ; xx [ 1220 ] =
0.3967640724820374 ; xx [ 1226 ] = 0.07306199386513242 ; xx [ 1232 ] = xx [
1226 ] * input [ 109 ] ; xx [ 1238 ] = 0.1661315210310757 ; xx [ 1244 ] =
0.8998002742608058 ; xx [ 1250 ] = xx [ 1244 ] * input [ 109 ] ; xx [ 1251 ]
= ( xx [ 1220 ] * xx [ 1232 ] + xx [ 1238 ] * xx [ 1250 ] ) * xx [ 11 ] ; xx
[ 1252 ] = xx [ 11 ] * ( xx [ 1220 ] * xx [ 1250 ] - xx [ 1238 ] * xx [ 1232
] ) ; xx [ 1220 ] = input [ 109 ] - ( xx [ 1244 ] * xx [ 1250 ] + xx [ 1226 ]
* xx [ 1232 ] ) * xx [ 11 ] ; xx [ 1256 ] = - xx [ 1251 ] ; xx [ 1257 ] = xx
[ 1252 ] ; xx [ 1258 ] = xx [ 1220 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1256 , xx + 1259 ) ; xx [ 919 ] = 0.05340497064709989 ; xx [ 920 ] = -
0.02835575423513582 ; xx [ 921 ] = - 0.01278600729968406 ; xx [ 1226 ] =
0.1839594217308902 ; xx [ 1232 ] = 1.794711470683825e-3 ; xx [ 1238 ] = xx [
1232 ] * input [ 110 ] ; xx [ 1244 ] = 0.02640085935264057 ; xx [ 1250 ] =
0.9825775820730981 ; xx [ 1256 ] = xx [ 1250 ] * input [ 110 ] ; xx [ 1257 ]
= ( xx [ 1226 ] * xx [ 1238 ] + xx [ 1244 ] * xx [ 1256 ] ) * xx [ 11 ] ; xx
[ 1258 ] = xx [ 11 ] * ( xx [ 1226 ] * xx [ 1256 ] - xx [ 1244 ] * xx [ 1238
] ) ; xx [ 1226 ] = input [ 110 ] - ( xx [ 1250 ] * xx [ 1256 ] + xx [ 1232 ]
* xx [ 1238 ] ) * xx [ 11 ] ; xx [ 1262 ] = xx [ 1257 ] ; xx [ 1263 ] = xx [
1258 ] ; xx [ 1264 ] = xx [ 1226 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1262 , xx + 1265 ) ; xx [ 919 ] = 0.04148258714802073 ; xx [ 920 ] =
3.197150119698775e-3 ; xx [ 921 ] = - 2.380040901917324e-3 ; xx [ 1232 ] =
0.1199233718917195 ; xx [ 1238 ] = 6.016650158040916e-3 ; xx [ 1244 ] = xx [
1238 ] * input [ 111 ] ; xx [ 1250 ] = 0.01709382532472628 ; xx [ 1256 ] =
0.9926177441144018 ; xx [ 1262 ] = xx [ 1256 ] * input [ 111 ] ; xx [ 1263 ]
= ( xx [ 1232 ] * xx [ 1244 ] + xx [ 1250 ] * xx [ 1262 ] ) * xx [ 11 ] ; xx
[ 1264 ] = xx [ 11 ] * ( xx [ 1232 ] * xx [ 1262 ] - xx [ 1250 ] * xx [ 1244
] ) ; xx [ 1232 ] = input [ 111 ] - ( xx [ 1256 ] * xx [ 1262 ] + xx [ 1238 ]
* xx [ 1244 ] ) * xx [ 11 ] ; xx [ 1268 ] = - xx [ 1263 ] ; xx [ 1269 ] = xx
[ 1264 ] ; xx [ 1270 ] = xx [ 1232 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1268 , xx + 1271 ) ; xx [ 919 ] = - 0.04168350328274069 ; xx [ 920 ] = -
0.04172321726253591 ; xx [ 921 ] = - 0.02106505189185183 ; xx [ 1238 ] =
0.2342432592721393 ; xx [ 1244 ] = 0.06543983228921862 ; xx [ 1250 ] = xx [
1244 ] * input [ 112 ] ; xx [ 1256 ] = 0.251989966046183 ; xx [ 1262 ] =
0.9366689814697439 ; xx [ 1268 ] = xx [ 1262 ] * input [ 112 ] ; xx [ 1269 ]
= ( xx [ 1238 ] * xx [ 1250 ] + xx [ 1256 ] * xx [ 1268 ] ) * xx [ 11 ] ; xx
[ 1270 ] = xx [ 11 ] * ( xx [ 1238 ] * xx [ 1268 ] - xx [ 1256 ] * xx [ 1250
] ) ; xx [ 1238 ] = input [ 112 ] - ( xx [ 1262 ] * xx [ 1268 ] + xx [ 1244 ]
* xx [ 1250 ] ) * xx [ 11 ] ; xx [ 1274 ] = - xx [ 1269 ] ; xx [ 1275 ] = xx
[ 1270 ] ; xx [ 1276 ] = xx [ 1238 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1274 , xx + 1277 ) ; xx [ 919 ] = 0.02930199029343554 ; xx [ 920 ] =
0.03436415369637134 ; xx [ 921 ] = - 2.298406593960215e-4 ; xx [ 1244 ] =
0.0535978209959625 ; xx [ 1250 ] = 6.433159249041309e-4 ; xx [ 1256 ] = xx [
1250 ] * input [ 113 ] ; xx [ 1262 ] = 0.09606121513911781 ; xx [ 1268 ] =
0.9939311357810972 ; xx [ 1274 ] = xx [ 1268 ] * input [ 113 ] ; xx [ 1275 ]
= ( xx [ 1244 ] * xx [ 1256 ] - xx [ 1262 ] * xx [ 1274 ] ) * xx [ 11 ] ; xx
[ 1276 ] = xx [ 11 ] * ( xx [ 1262 ] * xx [ 1256 ] + xx [ 1244 ] * xx [ 1274
] ) ; xx [ 1244 ] = input [ 113 ] - ( xx [ 1268 ] * xx [ 1274 ] + xx [ 1250 ]
* xx [ 1256 ] ) * xx [ 11 ] ; xx [ 1280 ] = xx [ 1275 ] ; xx [ 1281 ] = - xx
[ 1276 ] ; xx [ 1282 ] = xx [ 1244 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1280 , xx + 1283 ) ; xx [ 919 ] = 0.02862756968731633 ; xx [ 920 ] =
0.07637171918724878 ; xx [ 921 ] = - 0.01058660435553563 ; xx [ 1250 ] =
0.2332065042255295 ; xx [ 1256 ] = 0.01783146791272022 ; xx [ 1262 ] = xx [
1256 ] * input [ 114 ] ; xx [ 1268 ] = 0.1039408331379334 ; xx [ 1274 ] =
0.9666918166331906 ; xx [ 1280 ] = xx [ 1274 ] * input [ 114 ] ; xx [ 1281 ]
= ( xx [ 1250 ] * xx [ 1262 ] + xx [ 1268 ] * xx [ 1280 ] ) * xx [ 11 ] ; xx
[ 1282 ] = xx [ 11 ] * ( xx [ 1268 ] * xx [ 1262 ] - xx [ 1250 ] * xx [ 1280
] ) ; xx [ 1250 ] = input [ 114 ] - ( xx [ 1274 ] * xx [ 1280 ] + xx [ 1256 ]
* xx [ 1262 ] ) * xx [ 11 ] ; xx [ 1286 ] = - xx [ 1281 ] ; xx [ 1287 ] = xx
[ 1282 ] ; xx [ 1288 ] = xx [ 1250 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1286 , xx + 1289 ) ; xx [ 919 ] = 0.08887331662514102 ; xx [ 920 ] = -
0.0612916453118936 ; xx [ 921 ] = - 0.1168096624912623 ; xx [ 1256 ] =
0.7054881516792711 ; xx [ 1262 ] = 0.2874183777258685 ; xx [ 1268 ] = xx [
1262 ] * input [ 115 ] ; xx [ 1274 ] = 0.251504329686306 ; xx [ 1280 ] =
0.5970114874394273 ; xx [ 1286 ] = xx [ 1280 ] * input [ 115 ] ; xx [ 1287 ]
= ( xx [ 1256 ] * xx [ 1268 ] + xx [ 1274 ] * xx [ 1286 ] ) * xx [ 11 ] ; xx
[ 1288 ] = xx [ 11 ] * ( xx [ 1256 ] * xx [ 1286 ] - xx [ 1274 ] * xx [ 1268
] ) ; xx [ 1256 ] = input [ 115 ] - ( xx [ 1280 ] * xx [ 1286 ] + xx [ 1262 ]
* xx [ 1268 ] ) * xx [ 11 ] ; xx [ 1292 ] = - xx [ 1287 ] ; xx [ 1293 ] = xx
[ 1288 ] ; xx [ 1294 ] = xx [ 1256 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1292 , xx + 1295 ) ; xx [ 919 ] = 0.08886697790382755 ; xx [ 920 ] = -
0.06164843565869298 ; xx [ 921 ] = - 0.05488652689462781 ; xx [ 1262 ] =
0.5618713971915271 ; xx [ 1268 ] = 0.2343124448976534 ; xx [ 1274 ] = xx [
1268 ] * input [ 116 ] ; xx [ 1280 ] = 0.3106833398705445 ; xx [ 1286 ] =
0.7299822419148356 ; xx [ 1292 ] = xx [ 1286 ] * input [ 116 ] ; xx [ 1293 ]
= ( xx [ 1262 ] * xx [ 1274 ] + xx [ 1280 ] * xx [ 1292 ] ) * xx [ 11 ] ; xx
[ 1294 ] = xx [ 11 ] * ( xx [ 1262 ] * xx [ 1292 ] - xx [ 1280 ] * xx [ 1274
] ) ; xx [ 1262 ] = input [ 116 ] - ( xx [ 1286 ] * xx [ 1292 ] + xx [ 1268 ]
* xx [ 1274 ] ) * xx [ 11 ] ; xx [ 1298 ] = - xx [ 1293 ] ; xx [ 1299 ] = xx
[ 1294 ] ; xx [ 1300 ] = xx [ 1262 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1298 , xx + 1301 ) ; xx [ 919 ] = 0.07772795717396366 ; xx [ 920 ] = -
0.04247189938330817 ; xx [ 921 ] = - 0.0251441932791364 ; xx [ 1268 ] =
0.276587913074899 ; xx [ 1274 ] = 0.0422506803054369 ; xx [ 1280 ] = xx [
1274 ] * input [ 117 ] ; xx [ 1286 ] = 0.1388395356539401 ; xx [ 1292 ] =
0.9499671519026319 ; xx [ 1298 ] = xx [ 1292 ] * input [ 117 ] ; xx [ 1299 ]
= ( xx [ 1268 ] * xx [ 1280 ] + xx [ 1286 ] * xx [ 1298 ] ) * xx [ 11 ] ; xx
[ 1300 ] = xx [ 11 ] * ( xx [ 1268 ] * xx [ 1298 ] - xx [ 1286 ] * xx [ 1280
] ) ; xx [ 1268 ] = input [ 117 ] - ( xx [ 1292 ] * xx [ 1298 ] + xx [ 1274 ]
* xx [ 1280 ] ) * xx [ 11 ] ; xx [ 1304 ] = - xx [ 1299 ] ; xx [ 1305 ] = xx
[ 1300 ] ; xx [ 1306 ] = xx [ 1268 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1304 , xx + 1307 ) ; xx [ 919 ] = 0.06525253027268166 ; xx [ 920 ] = -
4.406459578718907e-3 ; xx [ 921 ] = - 7.366786907179716e-3 ; xx [ 1274 ] =
0.08472537579807812 ; xx [ 1280 ] = 0.01843356037597695 ; xx [ 1286 ] = xx [
1280 ] * input [ 118 ] ; xx [ 1292 ] = 0.1627574807963621 ; xx [ 1298 ] =
0.9828488271308878 ; xx [ 1304 ] = xx [ 1298 ] * input [ 118 ] ; xx [ 1305 ]
= ( xx [ 1274 ] * xx [ 1286 ] + xx [ 1292 ] * xx [ 1304 ] ) * xx [ 11 ] ; xx
[ 1306 ] = xx [ 11 ] * ( xx [ 1274 ] * xx [ 1304 ] - xx [ 1292 ] * xx [ 1286
] ) ; xx [ 1274 ] = input [ 118 ] - ( xx [ 1298 ] * xx [ 1304 ] + xx [ 1280 ]
* xx [ 1286 ] ) * xx [ 11 ] ; xx [ 1310 ] = - xx [ 1305 ] ; xx [ 1311 ] = xx
[ 1306 ] ; xx [ 1312 ] = xx [ 1274 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1310 , xx + 1313 ) ; xx [ 919 ] = 0.0528767481880339 ; xx [ 920 ] =
0.02884596809690045 ; xx [ 921 ] = - 3.558177262034436e-3 ; xx [ 1280 ] =
0.05738258072666671 ; xx [ 1286 ] = 1.633870478445837e-3 ; xx [ 1292 ] = xx [
1286 ] * input [ 119 ] ; xx [ 1298 ] = 0.07311132915861022 ; xx [ 1304 ] =
0.9956702784783066 ; xx [ 1310 ] = xx [ 1304 ] * input [ 119 ] ; xx [ 1311 ]
= ( xx [ 1280 ] * xx [ 1292 ] - xx [ 1298 ] * xx [ 1310 ] ) * xx [ 11 ] ; xx
[ 1312 ] = xx [ 11 ] * ( xx [ 1298 ] * xx [ 1292 ] + xx [ 1280 ] * xx [ 1310
] ) ; xx [ 1280 ] = input [ 119 ] - ( xx [ 1304 ] * xx [ 1310 ] + xx [ 1286 ]
* xx [ 1292 ] ) * xx [ 11 ] ; xx [ 1316 ] = xx [ 1311 ] ; xx [ 1317 ] = - xx
[ 1312 ] ; xx [ 1318 ] = xx [ 1280 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1316 , xx + 1319 ) ; xx [ 919 ] = 0.04085972611525981 ; xx [ 920 ] =
0.05356486425640417 ; xx [ 921 ] = - 5.450171695717721e-3 ; xx [ 1286 ] =
0.09460546317854919 ; xx [ 1292 ] = 3.053291054081917e-3 ; xx [ 1298 ] = xx [
1292 ] * input [ 120 ] ; xx [ 1304 ] = 0.09684419861021348 ; xx [ 1310 ] =
0.9907884158315826 ; xx [ 1316 ] = xx [ 1310 ] * input [ 120 ] ; xx [ 1317 ]
= ( xx [ 1286 ] * xx [ 1298 ] + xx [ 1304 ] * xx [ 1316 ] ) * xx [ 11 ] ; xx
[ 1318 ] = xx [ 11 ] * ( xx [ 1304 ] * xx [ 1298 ] - xx [ 1286 ] * xx [ 1316
] ) ; xx [ 1286 ] = input [ 120 ] - ( xx [ 1310 ] * xx [ 1316 ] + xx [ 1292 ]
* xx [ 1298 ] ) * xx [ 11 ] ; xx [ 1322 ] = - xx [ 1317 ] ; xx [ 1323 ] = xx
[ 1318 ] ; xx [ 1324 ] = xx [ 1286 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1322 , xx + 1325 ) ; xx [ 919 ] = 0.1002985030736737 ; xx [ 920 ] = -
0.05227749176799683 ; xx [ 921 ] = - 0.08725696878023967 ; xx [ 1292 ] =
0.6625682197738285 ; xx [ 1298 ] = 0.3065574261284753 ; xx [ 1304 ] = xx [
1298 ] * input [ 121 ] ; xx [ 1310 ] = 0.2936564847037592 ; xx [ 1316 ] =
0.6170832744635487 ; xx [ 1322 ] = xx [ 1316 ] * input [ 121 ] ; xx [ 1323 ]
= ( xx [ 1292 ] * xx [ 1304 ] + xx [ 1310 ] * xx [ 1322 ] ) * xx [ 11 ] ; xx
[ 1324 ] = xx [ 11 ] * ( xx [ 1292 ] * xx [ 1322 ] - xx [ 1310 ] * xx [ 1304
] ) ; xx [ 1292 ] = input [ 121 ] - ( xx [ 1316 ] * xx [ 1322 ] + xx [ 1298 ]
* xx [ 1304 ] ) * xx [ 11 ] ; xx [ 1328 ] = - xx [ 1323 ] ; xx [ 1329 ] = xx
[ 1324 ] ; xx [ 1330 ] = xx [ 1292 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1328 , xx + 1331 ) ; xx [ 919 ] = 0.1002608402311033 ; xx [ 920 ] = -
0.03443241537289735 ; xx [ 921 ] = - 0.03685386470256991 ; xx [ 1298 ] =
0.2634294522538985 ; xx [ 1304 ] = 0.1355493015371225 ; xx [ 1310 ] = xx [
1304 ] * input [ 122 ] ; xx [ 1316 ] = 0.432519761028617 ; xx [ 1322 ] =
0.8515620745769256 ; xx [ 1328 ] = xx [ 1322 ] * input [ 122 ] ; xx [ 1329 ]
= ( xx [ 1298 ] * xx [ 1310 ] + xx [ 1316 ] * xx [ 1328 ] ) * xx [ 11 ] ; xx
[ 1330 ] = xx [ 11 ] * ( xx [ 1298 ] * xx [ 1328 ] - xx [ 1316 ] * xx [ 1310
] ) ; xx [ 1298 ] = input [ 122 ] - ( xx [ 1322 ] * xx [ 1328 ] + xx [ 1304 ]
* xx [ 1310 ] ) * xx [ 11 ] ; xx [ 1334 ] = - xx [ 1329 ] ; xx [ 1335 ] = xx
[ 1330 ] ; xx [ 1336 ] = xx [ 1298 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1334 , xx + 1337 ) ; xx [ 919 ] = - 0.03000715893276557 ; xx [ 920 ] = -
6.608288839976439e-3 ; xx [ 921 ] = - 4.82147204094653e-3 ; xx [ 1304 ] =
0.2662653786798204 ; xx [ 1310 ] = 5.130591034712339e-3 ; xx [ 1316 ] = xx [
1310 ] * input [ 123 ] ; xx [ 1322 ] = 0.02582898334928278 ; xx [ 1328 ] =
0.9635399777753225 ; xx [ 1334 ] = xx [ 1328 ] * input [ 123 ] ; xx [ 1335 ]
= ( xx [ 1304 ] * xx [ 1316 ] + xx [ 1322 ] * xx [ 1334 ] ) * xx [ 11 ] ; xx
[ 1336 ] = xx [ 11 ] * ( xx [ 1304 ] * xx [ 1334 ] - xx [ 1322 ] * xx [ 1316
] ) ; xx [ 1304 ] = input [ 123 ] - ( xx [ 1328 ] * xx [ 1334 ] + xx [ 1310 ]
* xx [ 1316 ] ) * xx [ 11 ] ; xx [ 1340 ] = xx [ 1335 ] ; xx [ 1341 ] = xx [
1336 ] ; xx [ 1342 ] = xx [ 1304 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1340 , xx + 1343 ) ; xx [ 919 ] = 0.08884247588866538 ; xx [ 920 ] = -
8.835966179131649e-3 ; xx [ 921 ] = - 0.01843883558646855 ; xx [ 1310 ] =
0.06337600975061324 ; xx [ 1316 ] = 0.02588095217024628 ; xx [ 1322 ] = xx [
1316 ] * input [ 124 ] ; xx [ 1328 ] = 0.3149296965525175 ; xx [ 1334 ] =
0.9466429865224752 ; xx [ 1340 ] = xx [ 1334 ] * input [ 124 ] ; xx [ 1341 ]
= ( xx [ 1310 ] * xx [ 1322 ] + xx [ 1328 ] * xx [ 1340 ] ) * xx [ 11 ] ; xx
[ 1342 ] = xx [ 11 ] * ( xx [ 1310 ] * xx [ 1340 ] - xx [ 1328 ] * xx [ 1322
] ) ; xx [ 1310 ] = input [ 124 ] - ( xx [ 1334 ] * xx [ 1340 ] + xx [ 1316 ]
* xx [ 1322 ] ) * xx [ 11 ] ; xx [ 1346 ] = - xx [ 1341 ] ; xx [ 1347 ] = xx
[ 1342 ] ; xx [ 1348 ] = xx [ 1310 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1346 , xx + 1349 ) ; xx [ 919 ] = 0.07698781823301588 ; xx [ 920 ] =
0.03031047070116234 ; xx [ 921 ] = - 0.0131613301344704 ; xx [ 1316 ] =
0.1119765984117292 ; xx [ 1322 ] = 0.02375224840773239 ; xx [ 1328 ] = xx [
1322 ] * input [ 125 ] ; xx [ 1334 ] = 0.2595796872263635 ; xx [ 1340 ] =
0.9589136864614975 ; xx [ 1346 ] = xx [ 1340 ] * input [ 125 ] ; xx [ 1347 ]
= ( xx [ 1316 ] * xx [ 1328 ] + xx [ 1334 ] * xx [ 1346 ] ) * xx [ 11 ] ; xx
[ 1348 ] = xx [ 11 ] * ( xx [ 1334 ] * xx [ 1328 ] - xx [ 1316 ] * xx [ 1346
] ) ; xx [ 1316 ] = input [ 125 ] - ( xx [ 1340 ] * xx [ 1346 ] + xx [ 1322 ]
* xx [ 1328 ] ) * xx [ 11 ] ; xx [ 1352 ] = - xx [ 1347 ] ; xx [ 1353 ] = xx
[ 1348 ] ; xx [ 1354 ] = xx [ 1316 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1352 , xx + 1355 ) ; xx [ 919 ] = 0.06410293276591428 ; xx [ 920 ] =
0.05766363314794307 ; xx [ 921 ] = - 0.01776190243369759 ; xx [ 1322 ] =
0.2621419513176254 ; xx [ 1328 ] = 0.06860447847708197 ; xx [ 1334 ] = xx [
1328 ] * input [ 126 ] ; xx [ 1340 ] = 0.2691185112896542 ; xx [ 1346 ] =
0.9242024939230125 ; xx [ 1352 ] = xx [ 1346 ] * input [ 126 ] ; xx [ 1353 ]
= ( xx [ 1322 ] * xx [ 1334 ] + xx [ 1340 ] * xx [ 1352 ] ) * xx [ 11 ] ; xx
[ 1354 ] = xx [ 11 ] * ( xx [ 1340 ] * xx [ 1334 ] - xx [ 1322 ] * xx [ 1352
] ) ; xx [ 1322 ] = input [ 126 ] - ( xx [ 1346 ] * xx [ 1352 ] + xx [ 1328 ]
* xx [ 1334 ] ) * xx [ 11 ] ; xx [ 1358 ] = - xx [ 1353 ] ; xx [ 1359 ] = xx
[ 1354 ] ; xx [ 1360 ] = xx [ 1322 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1358 , xx + 1361 ) ; xx [ 919 ] = 0.05151655382800063 ; xx [ 920 ] =
0.07590939818327416 ; xx [ 921 ] = - 0.02558013511927111 ; xx [ 1328 ] =
0.4221198092475255 ; xx [ 1334 ] = 0.1281393224157436 ; xx [ 1340 ] = xx [
1334 ] * input [ 127 ] ; xx [ 1346 ] = 0.2763208293260235 ; xx [ 1352 ] =
0.8538395516560742 ; xx [ 1358 ] = xx [ 1352 ] * input [ 127 ] ; xx [ 1359 ]
= ( xx [ 1328 ] * xx [ 1340 ] + xx [ 1346 ] * xx [ 1358 ] ) * xx [ 11 ] ; xx
[ 1360 ] = xx [ 11 ] * ( xx [ 1346 ] * xx [ 1340 ] - xx [ 1328 ] * xx [ 1358
] ) ; xx [ 1328 ] = input [ 127 ] - ( xx [ 1352 ] * xx [ 1358 ] + xx [ 1334 ]
* xx [ 1340 ] ) * xx [ 11 ] ; xx [ 1364 ] = - xx [ 1359 ] ; xx [ 1365 ] = xx
[ 1360 ] ; xx [ 1366 ] = xx [ 1328 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1364 , xx + 1367 ) ; xx [ 919 ] = 0.03998183499215965 ; xx [ 920 ] =
0.08898570672413771 ; xx [ 921 ] = - 0.03377850034806965 ; xx [ 1334 ] =
0.5423780303336361 ; xx [ 1340 ] = 0.1590891076346561 ; xx [ 1346 ] = xx [
1340 ] * input [ 128 ] ; xx [ 1352 ] = 0.2434072545963042 ; xx [ 1358 ] =
0.7882065950328658 ; xx [ 1364 ] = xx [ 1358 ] * input [ 128 ] ; xx [ 1365 ]
= ( xx [ 1334 ] * xx [ 1346 ] + xx [ 1352 ] * xx [ 1364 ] ) * xx [ 11 ] ; xx
[ 1366 ] = xx [ 11 ] * ( xx [ 1352 ] * xx [ 1346 ] - xx [ 1334 ] * xx [ 1364
] ) ; xx [ 1334 ] = input [ 128 ] - ( xx [ 1358 ] * xx [ 1364 ] + xx [ 1340 ]
* xx [ 1346 ] ) * xx [ 11 ] ; xx [ 1370 ] = - xx [ 1365 ] ; xx [ 1371 ] = xx
[ 1366 ] ; xx [ 1372 ] = xx [ 1334 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1370 , xx + 1373 ) ; xx [ 919 ] = 0.1078026094018518 ; xx [ 920 ] = -
0.03489168803420988 ; xx [ 921 ] = - 0.1175021056069469 ; xx [ 1340 ] =
0.6792154792002904 ; xx [ 1346 ] = 0.4270171481773202 ; xx [ 1352 ] = xx [
1346 ] * input [ 129 ] ; xx [ 1358 ] = 0.3243972925127879 ; xx [ 1364 ] =
0.5010879010588875 ; xx [ 1370 ] = xx [ 1364 ] * input [ 129 ] ; xx [ 1371 ]
= ( xx [ 1340 ] * xx [ 1352 ] + xx [ 1358 ] * xx [ 1370 ] ) * xx [ 11 ] ; xx
[ 1372 ] = xx [ 11 ] * ( xx [ 1340 ] * xx [ 1370 ] - xx [ 1358 ] * xx [ 1352
] ) ; xx [ 1340 ] = input [ 129 ] - ( xx [ 1364 ] * xx [ 1370 ] + xx [ 1346 ]
* xx [ 1352 ] ) * xx [ 11 ] ; xx [ 1376 ] = - xx [ 1371 ] ; xx [ 1377 ] = xx
[ 1372 ] ; xx [ 1378 ] = xx [ 1340 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1376 , xx + 1379 ) ; xx [ 919 ] = 0.1085289392221315 ; xx [ 920 ] = -
0.03773545717674479 ; xx [ 921 ] = - 0.06914671798067905 ; xx [ 1346 ] =
0.5206024645015256 ; xx [ 1352 ] = 0.3669906641286951 ; xx [ 1358 ] = xx [
1352 ] * input [ 130 ] ; xx [ 1364 ] = 0.4492508056740898 ; xx [ 1370 ] =
0.6264699833180344 ; xx [ 1376 ] = xx [ 1370 ] * input [ 130 ] ; xx [ 1377 ]
= ( xx [ 1346 ] * xx [ 1358 ] + xx [ 1364 ] * xx [ 1376 ] ) * xx [ 11 ] ; xx
[ 1378 ] = xx [ 11 ] * ( xx [ 1346 ] * xx [ 1376 ] - xx [ 1364 ] * xx [ 1358
] ) ; xx [ 1346 ] = input [ 130 ] - ( xx [ 1370 ] * xx [ 1376 ] + xx [ 1352 ]
* xx [ 1358 ] ) * xx [ 11 ] ; xx [ 1382 ] = - xx [ 1377 ] ; xx [ 1383 ] = xx
[ 1378 ] ; xx [ 1384 ] = xx [ 1346 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1382 , xx + 1385 ) ; xx [ 919 ] = 0.108045347124532 ; xx [ 920 ] = -
6.756674438570453e-3 ; xx [ 921 ] = - 0.03927706207019656 ; xx [ 1352 ] =
0.0246225636350577 ; xx [ 1358 ] = 0.0229080611250566 ; xx [ 1364 ] = xx [
1358 ] * input [ 131 ] ; xx [ 1370 ] = 0.5660436624340061 ; xx [ 1376 ] =
0.8236889718296739 ; xx [ 1382 ] = xx [ 1376 ] * input [ 131 ] ; xx [ 1383 ]
= ( xx [ 1352 ] * xx [ 1364 ] + xx [ 1370 ] * xx [ 1382 ] ) * xx [ 11 ] ; xx
[ 1384 ] = xx [ 11 ] * ( xx [ 1352 ] * xx [ 1382 ] - xx [ 1370 ] * xx [ 1364
] ) ; xx [ 1352 ] = input [ 131 ] - ( xx [ 1376 ] * xx [ 1382 ] + xx [ 1358 ]
* xx [ 1364 ] ) * xx [ 11 ] ; xx [ 1388 ] = - xx [ 1383 ] ; xx [ 1389 ] = xx
[ 1384 ] ; xx [ 1390 ] = xx [ 1352 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1388 , xx + 1391 ) ; xx [ 919 ] = 0.09952732681281544 ; xx [ 920 ] =
0.0228807887491343 ; xx [ 921 ] = - 0.03207153656907608 ; xx [ 1358 ] =
0.1948508511673901 ; xx [ 1364 ] = 0.09950828214620858 ; xx [ 1370 ] = xx [
1364 ] * input [ 132 ] ; xx [ 1376 ] = 0.4717830530291653 ; xx [ 1382 ] =
0.8541381612234252 ; xx [ 1388 ] = xx [ 1382 ] * input [ 132 ] ; xx [ 1389 ]
= ( xx [ 1358 ] * xx [ 1370 ] + xx [ 1376 ] * xx [ 1388 ] ) * xx [ 11 ] ; xx
[ 1390 ] = xx [ 11 ] * ( xx [ 1376 ] * xx [ 1370 ] - xx [ 1358 ] * xx [ 1388
] ) ; xx [ 1358 ] = input [ 132 ] - ( xx [ 1382 ] * xx [ 1388 ] + xx [ 1364 ]
* xx [ 1370 ] ) * xx [ 11 ] ; xx [ 1394 ] = - xx [ 1389 ] ; xx [ 1395 ] = xx
[ 1390 ] ; xx [ 1396 ] = xx [ 1358 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1394 , xx + 1397 ) ; xx [ 919 ] = 0.08709499034352691 ; xx [ 920 ] =
0.05213038288345741 ; xx [ 921 ] = - 0.04069718640773098 ; xx [ 1364 ] =
0.434652088674542 ; xx [ 1370 ] = 0.2317404840391152 ; xx [ 1376 ] = xx [
1370 ] * input [ 133 ] ; xx [ 1382 ] = 0.4220207955158514 ; xx [ 1388 ] =
0.761099440296958 ; xx [ 1394 ] = xx [ 1388 ] * input [ 133 ] ; xx [ 1395 ] =
( xx [ 1364 ] * xx [ 1376 ] + xx [ 1382 ] * xx [ 1394 ] ) * xx [ 11 ] ; xx [
1396 ] = xx [ 11 ] * ( xx [ 1382 ] * xx [ 1376 ] - xx [ 1364 ] * xx [ 1394 ]
) ; xx [ 1364 ] = input [ 133 ] - ( xx [ 1388 ] * xx [ 1394 ] + xx [ 1370 ] *
xx [ 1376 ] ) * xx [ 11 ] ; xx [ 1400 ] = - xx [ 1395 ] ; xx [ 1401 ] = xx [
1396 ] ; xx [ 1402 ] = xx [ 1364 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1400 , xx + 1403 ) ; xx [ 919 ] = - 0.01660265431542934 ; xx [ 920 ] =
0.0206290635966051 ; xx [ 921 ] = 3.715046686832338e-3 ; xx [ 1370 ] =
0.0242980481220576 ; xx [ 1376 ] = 8.390142000848796e-3 ; xx [ 1382 ] = xx [
1376 ] * input [ 134 ] ; xx [ 1388 ] = 0.1154129525776666 ; xx [ 1394 ] =
0.9929849247355014 ; xx [ 1400 ] = xx [ 1394 ] * input [ 134 ] ; xx [ 1401 ]
= ( xx [ 1370 ] * xx [ 1382 ] + xx [ 1388 ] * xx [ 1400 ] ) * xx [ 11 ] ; xx
[ 1402 ] = xx [ 11 ] * ( xx [ 1388 ] * xx [ 1382 ] - xx [ 1370 ] * xx [ 1400
] ) ; xx [ 1370 ] = input [ 134 ] - ( xx [ 1394 ] * xx [ 1400 ] + xx [ 1376 ]
* xx [ 1382 ] ) * xx [ 11 ] ; xx [ 1406 ] = xx [ 1401 ] ; xx [ 1407 ] = xx [
1402 ] ; xx [ 1408 ] = xx [ 1370 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1406 , xx + 1409 ) ; xx [ 919 ] = 0.0762484734824999 ; xx [ 920 ] =
0.07044896380206572 ; xx [ 921 ] = - 0.05864862028843598 ; xx [ 1376 ] =
0.6406835439358122 ; xx [ 1382 ] = 0.2443974596793096 ; xx [ 1388 ] = xx [
1382 ] * input [ 135 ] ; xx [ 1394 ] = 0.2667162377594259 ; xx [ 1400 ] =
0.677242147793244 ; xx [ 1406 ] = xx [ 1400 ] * input [ 135 ] ; xx [ 1407 ] =
( xx [ 1376 ] * xx [ 1388 ] + xx [ 1394 ] * xx [ 1406 ] ) * xx [ 11 ] ; xx [
1408 ] = xx [ 11 ] * ( xx [ 1394 ] * xx [ 1388 ] - xx [ 1376 ] * xx [ 1406 ]
) ; xx [ 1376 ] = input [ 135 ] - ( xx [ 1400 ] * xx [ 1406 ] + xx [ 1382 ] *
xx [ 1388 ] ) * xx [ 11 ] ; xx [ 1412 ] = - xx [ 1407 ] ; xx [ 1413 ] = xx [
1408 ] ; xx [ 1414 ] = xx [ 1376 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1412 , xx + 1415 ) ; xx [ 919 ] = 0.05836722086711408 ; xx [ 920 ] =
0.08315815171647134 ; xx [ 921 ] = - 0.07492339371415332 ; xx [ 1382 ] =
0.6946799062739931 ; xx [ 1388 ] = 0.1979505052448488 ; xx [ 1394 ] = xx [
1388 ] * input [ 136 ] ; xx [ 1400 ] = 0.1959276800784864 ; xx [ 1406 ] =
0.6632102000659578 ; xx [ 1412 ] = xx [ 1406 ] * input [ 136 ] ; xx [ 1413 ]
= ( xx [ 1382 ] * xx [ 1394 ] + xx [ 1400 ] * xx [ 1412 ] ) * xx [ 11 ] ; xx
[ 1414 ] = xx [ 11 ] * ( xx [ 1400 ] * xx [ 1394 ] - xx [ 1382 ] * xx [ 1412
] ) ; xx [ 1382 ] = input [ 136 ] - ( xx [ 1406 ] * xx [ 1412 ] + xx [ 1388 ]
* xx [ 1394 ] ) * xx [ 11 ] ; xx [ 1418 ] = - xx [ 1413 ] ; xx [ 1419 ] = xx
[ 1414 ] ; xx [ 1420 ] = xx [ 1382 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1418 , xx + 1421 ) ; xx [ 919 ] = 0.1130322189712437 ; xx [ 920 ] = -
8.823405755190483e-3 ; xx [ 921 ] = - 0.1250098946936068 ; xx [ 1388 ] =
0.6398980533771547 ; xx [ 1394 ] = 0.6296603699734298 ; xx [ 1400 ] = xx [
1394 ] * input [ 137 ] ; xx [ 1406 ] = 0.3234254103849678 ; xx [ 1412 ] =
0.2990891233167245 ; xx [ 1418 ] = xx [ 1412 ] * input [ 137 ] ; xx [ 1419 ]
= ( xx [ 1388 ] * xx [ 1400 ] + xx [ 1406 ] * xx [ 1418 ] ) * xx [ 11 ] ; xx
[ 1420 ] = xx [ 11 ] * ( xx [ 1388 ] * xx [ 1418 ] - xx [ 1406 ] * xx [ 1400
] ) ; xx [ 1388 ] = input [ 137 ] - ( xx [ 1412 ] * xx [ 1418 ] + xx [ 1394 ]
* xx [ 1400 ] ) * xx [ 11 ] ; xx [ 1424 ] = - xx [ 1419 ] ; xx [ 1425 ] = xx
[ 1420 ] ; xx [ 1426 ] = xx [ 1388 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1424 , xx + 1427 ) ; xx [ 919 ] = 0.1141456565335867 ; xx [ 920 ] = -
9.002435251046298e-3 ; xx [ 921 ] = - 0.08563554301030606 ; xx [ 1394 ] =
0.4675981288283714 ; xx [ 1400 ] = 0.4917950387643119 ; xx [ 1406 ] = xx [
1400 ] * input [ 138 ] ; xx [ 1412 ] = 0.5136170817587071 ; xx [ 1418 ] =
0.5250591615129523 ; xx [ 1424 ] = xx [ 1418 ] * input [ 138 ] ; xx [ 1425 ]
= ( xx [ 1394 ] * xx [ 1406 ] + xx [ 1412 ] * xx [ 1424 ] ) * xx [ 11 ] ; xx
[ 1426 ] = xx [ 11 ] * ( xx [ 1394 ] * xx [ 1424 ] - xx [ 1412 ] * xx [ 1406
] ) ; xx [ 1394 ] = input [ 138 ] - ( xx [ 1418 ] * xx [ 1424 ] + xx [ 1400 ]
* xx [ 1406 ] ) * xx [ 11 ] ; xx [ 1430 ] = - xx [ 1425 ] ; xx [ 1431 ] = xx
[ 1426 ] ; xx [ 1432 ] = xx [ 1394 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1430 , xx + 1433 ) ; xx [ 919 ] = 0.1077458034218663 ; xx [ 920 ] =
0.02683966948079 ; xx [ 921 ] = - 0.06862443744200107 ; xx [ 1400 ] =
0.5181735343841858 ; xx [ 1406 ] = 0.3932752713126598 ; xx [ 1412 ] = xx [
1406 ] * input [ 139 ] ; xx [ 1418 ] = 0.4662423632645503 ; xx [ 1424 ] =
0.599540497327113 ; xx [ 1430 ] = xx [ 1424 ] * input [ 139 ] ; xx [ 1431 ] =
( xx [ 1400 ] * xx [ 1412 ] + xx [ 1418 ] * xx [ 1430 ] ) * xx [ 11 ] ; xx [
1432 ] = xx [ 11 ] * ( xx [ 1418 ] * xx [ 1412 ] - xx [ 1400 ] * xx [ 1430 ]
) ; xx [ 1400 ] = input [ 139 ] - ( xx [ 1424 ] * xx [ 1430 ] + xx [ 1406 ] *
xx [ 1412 ] ) * xx [ 11 ] ; xx [ 1436 ] = - xx [ 1431 ] ; xx [ 1437 ] = xx [
1432 ] ; xx [ 1438 ] = xx [ 1400 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1436 , xx + 1439 ) ; xx [ 919 ] = 0.1073354957132696 ; xx [ 920 ] =
0.02003609432974655 ; xx [ 921 ] = - 0.1247314157589293 ; xx [ 1406 ] =
0.6706972911750326 ; xx [ 1412 ] = 0.4477541250148736 ; xx [ 1418 ] = xx [
1412 ] * input [ 140 ] ; xx [ 1424 ] = 0.3316631155340412 ; xx [ 1430 ] =
0.4895722264762288 ; xx [ 1436 ] = xx [ 1430 ] * input [ 140 ] ; xx [ 1437 ]
= ( xx [ 1406 ] * xx [ 1418 ] + xx [ 1424 ] * xx [ 1436 ] ) * xx [ 11 ] ; xx
[ 1438 ] = xx [ 11 ] * ( xx [ 1424 ] * xx [ 1418 ] - xx [ 1406 ] * xx [ 1436
] ) ; xx [ 1406 ] = input [ 140 ] - ( xx [ 1430 ] * xx [ 1436 ] + xx [ 1412 ]
* xx [ 1418 ] ) * xx [ 11 ] ; xx [ 1442 ] = - xx [ 1437 ] ; xx [ 1443 ] = xx
[ 1438 ] ; xx [ 1444 ] = xx [ 1406 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1442 , xx + 1445 ) ; xx [ 919 ] = 0.09938670807675551 ; xx [ 920 ] =
0.0444436843209301 ; xx [ 921 ] = - 0.08738591386877287 ; xx [ 1412 ] =
0.6793683944033605 ; xx [ 1418 ] = 0.3565991527695513 ; xx [ 1424 ] = xx [
1418 ] * input [ 141 ] ; xx [ 1430 ] = 0.3027178312238702 ; xx [ 1436 ] =
0.5653826523594042 ; xx [ 1442 ] = xx [ 1436 ] * input [ 141 ] ; xx [ 1443 ]
= ( xx [ 1412 ] * xx [ 1424 ] + xx [ 1430 ] * xx [ 1442 ] ) * xx [ 11 ] ; xx
[ 1444 ] = xx [ 11 ] * ( xx [ 1430 ] * xx [ 1424 ] - xx [ 1412 ] * xx [ 1442
] ) ; xx [ 1412 ] = input [ 141 ] - ( xx [ 1436 ] * xx [ 1442 ] + xx [ 1418 ]
* xx [ 1424 ] ) * xx [ 11 ] ; xx [ 1448 ] = - xx [ 1443 ] ; xx [ 1449 ] = xx
[ 1444 ] ; xx [ 1450 ] = xx [ 1412 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1448 , xx + 1451 ) ; xx [ 919 ] = 0.08162360991290972 ; xx [ 920 ] =
0.06041243531084342 ; xx [ 921 ] = - 0.1174933092461929 ; xx [ 1418 ] =
0.7083565431201579 ; xx [ 1424 ] = 0.3047264570560833 ; xx [ 1430 ] = xx [
1424 ] * input [ 142 ] ; xx [ 1436 ] = 0.2563215591787598 ; xx [ 1442 ] =
0.5828139089701587 ; xx [ 1448 ] = xx [ 1442 ] * input [ 142 ] ; xx [ 1449 ]
= ( xx [ 1418 ] * xx [ 1430 ] + xx [ 1436 ] * xx [ 1448 ] ) * xx [ 11 ] ; xx
[ 1450 ] = xx [ 11 ] * ( xx [ 1436 ] * xx [ 1430 ] - xx [ 1418 ] * xx [ 1448
] ) ; xx [ 1418 ] = input [ 142 ] - ( xx [ 1442 ] * xx [ 1448 ] + xx [ 1424 ]
* xx [ 1430 ] ) * xx [ 11 ] ; xx [ 1454 ] = - xx [ 1449 ] ; xx [ 1455 ] = xx
[ 1450 ] ; xx [ 1456 ] = xx [ 1418 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1454 , xx + 1457 ) ; xx [ 919 ] = - 0.0171442268584411 ; xx [ 920 ] =
0.05878123656883572 ; xx [ 921 ] = - 1.619412475548285e-3 ; xx [ 1424 ] =
0.1175219350726416 ; xx [ 1430 ] = 0.01392624262502743 ; xx [ 1436 ] = xx [
1430 ] * input [ 145 ] ; xx [ 1442 ] = 0.06365206036819079 ; xx [ 1448 ] =
0.990930406110346 ; xx [ 1454 ] = xx [ 1448 ] * input [ 145 ] ; xx [ 1455 ] =
( xx [ 1424 ] * xx [ 1436 ] + xx [ 1442 ] * xx [ 1454 ] ) * xx [ 11 ] ; xx [
1456 ] = xx [ 11 ] * ( xx [ 1442 ] * xx [ 1436 ] - xx [ 1424 ] * xx [ 1454 ]
) ; xx [ 1424 ] = input [ 145 ] - ( xx [ 1448 ] * xx [ 1454 ] + xx [ 1430 ] *
xx [ 1436 ] ) * xx [ 11 ] ; xx [ 1460 ] = xx [ 1455 ] ; xx [ 1461 ] = xx [
1456 ] ; xx [ 1462 ] = xx [ 1424 ] ; pm_math_Vector3_cross_ra ( xx + 919 , xx
+ 1460 , xx + 1463 ) ; xx [ 919 ] = - 1.174202054215593e-3 ; xx [ 920 ] = -
0.01034665570639538 ; xx [ 921 ] = - 0.1064666178194215 ; xx [ 1430 ] =
0.670304392204657 ; xx [ 1436 ] = 7.308788146271698e-3 ; xx [ 1442 ] = xx [
1436 ] * input [ 148 ] ; xx [ 1448 ] = 2.148648828607749e-4 ; xx [ 1454 ] =
0.7420502390270221 ; xx [ 1460 ] = xx [ 1454 ] * input [ 148 ] ; xx [ 1461 ]
= ( xx [ 1430 ] * xx [ 1442 ] - xx [ 1448 ] * xx [ 1460 ] ) * xx [ 11 ] ; xx
[ 1462 ] = xx [ 11 ] * ( xx [ 1448 ] * xx [ 1442 ] + xx [ 1430 ] * xx [ 1460
] ) ; xx [ 1430 ] = input [ 148 ] - ( xx [ 1454 ] * xx [ 1460 ] + xx [ 1436 ]
* xx [ 1442 ] ) * xx [ 11 ] ; xx [ 1466 ] = xx [ 1461 ] ; xx [ 1467 ] = - xx
[ 1462 ] ; xx [ 1468 ] = xx [ 1430 ] ; pm_math_Vector3_cross_ra ( xx + 919 ,
xx + 1466 , xx + 1469 ) ; xx [ 919 ] = xx [ 852 ] ; xx [ 920 ] = xx [ 851 ] ;
xx [ 921 ] = xx [ 146 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx
+ 919 , xx + 1466 ) ; pm_math_Vector3_cross_ra ( xx + 864 , xx + 1466 , xx +
919 ) ; xx [ 864 ] = xx [ 879 ] ; xx [ 865 ] = xx [ 796 ] ; xx [ 866 ] = xx [
169 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 864 , xx + 1472
) ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 1472 , xx + 864 ) ; xx [ 876 ]
= xx [ 892 ] ; xx [ 877 ] = xx [ 809 ] ; xx [ 878 ] = xx [ 794 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 876 , xx + 1475 ) ;
pm_math_Vector3_cross_ra ( xx + 889 , xx + 1475 , xx + 876 ) ; xx [ 889 ] =
0.01519594655146509 ; xx [ 890 ] = 0.1066526728995764 ; xx [ 891 ] = -
0.03585936688742598 ; pm_math_Quaternion_compose_ra ( xx + 645 , xx + 61 , xx
+ 1478 ) ; pm_math_Quaternion_compose_ra ( xx + 1478 , xx + 88 , xx + 1482 )
; pm_math_Quaternion_compose_ra ( xx + 1482 , xx + 84 , xx + 1486 ) ;
pm_math_Quaternion_compose_ra ( xx + 1486 , xx + 113 , xx + 1490 ) ;
pm_math_Quaternion_xform_ra ( xx + 1490 , xx + 889 , xx + 1494 ) ;
pm_math_Quaternion_xform_ra ( xx + 1486 , xx + 141 , xx + 1497 ) ;
pm_math_Quaternion_xform_ra ( xx + 1482 , xx + 122 , xx + 1486 ) ;
pm_math_Quaternion_xform_ra ( xx + 1478 , xx + 92 , xx + 1482 ) ;
pm_math_Quaternion_xform_ra ( xx + 645 , xx + 459 , xx + 1478 ) ; xx [ 645 ]
= xx [ 1497 ] + xx [ 1486 ] + xx [ 1482 ] + xx [ 1478 ] - xx [ 649 ] ; xx [
646 ] = 0.01688944435119629 ; xx [ 647 ] = xx [ 1494 ] + xx [ 645 ] - xx [
646 ] ; xx [ 648 ] = xx [ 1498 ] + xx [ 1487 ] + xx [ 1483 ] + xx [ 1479 ] +
xx [ 651 ] ; xx [ 649 ] = 0.1319682159423828 ; xx [ 651 ] = xx [ 1495 ] + xx
[ 648 ] - xx [ 649 ] ; xx [ 1436 ] = xx [ 1499 ] + xx [ 1488 ] + xx [ 1484 ]
+ xx [ 1480 ] + xx [ 654 ] ; xx [ 654 ] = 0.8089576416015625 ; xx [ 1442 ] =
xx [ 1496 ] + xx [ 1436 ] - xx [ 654 ] ; xx [ 1448 ] = sqrt ( xx [ 647 ] * xx
[ 647 ] + xx [ 651 ] * xx [ 651 ] + xx [ 1442 ] * xx [ 1442 ] ) ; if ( xx [
1448 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1448 ] = input [ 164 ] / xx [ 1448 ] ; xx [ 1478 ] =
xx [ 1448 ] * xx [ 647 ] ; xx [ 1479 ] = xx [ 1448 ] * xx [ 651 ] ; xx [ 1480
] = xx [ 1448 ] * xx [ 1442 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1490 , xx + 1478 , xx + 1481 ) ; pm_math_Vector3_cross_ra ( xx + 889 , xx +
1481 , xx + 1478 ) ; xx [ 889 ] = - 0.01857933020468612 ; xx [ 890 ] =
0.1062960041055536 ; xx [ 891 ] = - 0.03551762226730922 ;
pm_math_Quaternion_xform_ra ( xx + 1490 , xx + 889 , xx + 1484 ) ; xx [ 647 ]
= xx [ 1484 ] + xx [ 645 ] + xx [ 646 ] ; xx [ 646 ] = xx [ 1485 ] + xx [ 648
] - xx [ 649 ] ; xx [ 649 ] = xx [ 1486 ] + xx [ 1436 ] - xx [ 654 ] ; xx [
651 ] = sqrt ( xx [ 647 ] * xx [ 647 ] + xx [ 646 ] * xx [ 646 ] + xx [ 649 ]
* xx [ 649 ] ) ; if ( xx [ 651 ] == 0.0 ) { return sm_ssci_recordRunTimeError
( "physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force1' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 651 ] = input [ 165 ] / xx [ 651 ] ; xx [ 1484 ] = xx
[ 651 ] * xx [ 647 ] ; xx [ 1485 ] = xx [ 651 ] * xx [ 646 ] ; xx [ 1486 ] =
xx [ 651 ] * xx [ 649 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1490 , xx
+ 1484 , xx + 1487 ) ; pm_math_Vector3_cross_ra ( xx + 889 , xx + 1487 , xx +
1484 ) ; xx [ 889 ] = 0.01045379203557594 ; xx [ 890 ] = -
0.08550357325700537 ; xx [ 891 ] = 4.618692289715317e-3 ;
pm_math_Quaternion_xform_ra ( xx + 1490 , xx + 889 , xx + 1494 ) ; xx [ 646 ]
= 9.709312438964843e-3 ; xx [ 647 ] = xx [ 1494 ] + xx [ 645 ] - xx [ 646 ] ;
xx [ 649 ] = 2.232642650604248e-3 ; xx [ 654 ] = xx [ 1495 ] + xx [ 648 ] +
xx [ 649 ] ; xx [ 1442 ] = 0.8689576416015625 ; xx [ 1454 ] = xx [ 1496 ] +
xx [ 1436 ] - xx [ 1442 ] ; xx [ 1460 ] = sqrt ( xx [ 647 ] * xx [ 647 ] + xx
[ 654 ] * xx [ 654 ] + xx [ 1454 ] * xx [ 1454 ] ) ; if ( xx [ 1460 ] == 0.0
) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force2' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1460 ] = input [ 166 ] / xx [ 1460 ] ; xx [ 1494 ] =
xx [ 1460 ] * xx [ 647 ] ; xx [ 1495 ] = xx [ 1460 ] * xx [ 654 ] ; xx [ 1496
] = xx [ 1460 ] * xx [ 1454 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1490 , xx + 1494 , xx + 1497 ) ; pm_math_Vector3_cross_ra ( xx + 889 , xx +
1497 , xx + 1494 ) ; xx [ 889 ] = - 8.962756426230073e-3 ; xx [ 890 ] = -
0.08570861308462711 ; xx [ 891 ] = 4.815152588944403e-3 ;
pm_math_Quaternion_xform_ra ( xx + 1490 , xx + 889 , xx + 1500 ) ; xx [ 647 ]
= xx [ 1500 ] + xx [ 645 ] + xx [ 646 ] ; xx [ 646 ] = xx [ 1501 ] + xx [ 648
] + xx [ 649 ] ; xx [ 649 ] = xx [ 1502 ] + xx [ 1436 ] - xx [ 1442 ] ; xx [
654 ] = sqrt ( xx [ 647 ] * xx [ 647 ] + xx [ 646 ] * xx [ 646 ] + xx [ 649 ]
* xx [ 649 ] ) ; if ( xx [ 654 ] == 0.0 ) { return sm_ssci_recordRunTimeError
( "physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force3' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 654 ] = input [ 167 ] / xx [ 654 ] ; xx [ 1500 ] = xx
[ 654 ] * xx [ 647 ] ; xx [ 1501 ] = xx [ 654 ] * xx [ 646 ] ; xx [ 1502 ] =
xx [ 654 ] * xx [ 649 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1490 , xx
+ 1500 , xx + 1503 ) ; pm_math_Vector3_cross_ra ( xx + 889 , xx + 1503 , xx +
1500 ) ; xx [ 889 ] = 0.1049001030020798 ; xx [ 890 ] = 0.02043269096374428 ;
xx [ 891 ] = - 0.1631011914932122 ; pm_math_Quaternion_xform_ra ( xx + 1490 ,
xx + 889 , xx + 1506 ) ; xx [ 646 ] = 0.06488653564453126 ; xx [ 647 ] = xx [
1506 ] + xx [ 645 ] - xx [ 646 ] ; xx [ 649 ] = 0.03644176864624023 ; xx [
1442 ] = xx [ 1507 ] + xx [ 648 ] - xx [ 649 ] ; xx [ 1454 ] =
0.9499576416015625 ; xx [ 1506 ] = xx [ 1508 ] + xx [ 1436 ] - xx [ 1454 ] ;
xx [ 1507 ] = sqrt ( xx [ 647 ] * xx [ 647 ] + xx [ 1442 ] * xx [ 1442 ] + xx
[ 1506 ] * xx [ 1506 ] ) ; if ( xx [ 1507 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force4' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1507 ] = input [ 168 ] / xx [ 1507 ] ; xx [ 1508 ] =
xx [ 1507 ] * xx [ 647 ] ; xx [ 1509 ] = xx [ 1507 ] * xx [ 1442 ] ; xx [
1510 ] = xx [ 1507 ] * xx [ 1506 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 1490 , xx + 1508 , xx + 1511 ) ; pm_math_Vector3_cross_ra ( xx + 889 , xx +
1511 , xx + 1508 ) ; pm_math_Quaternion_xform_ra ( xx + 1490 , xx + 166 , xx
+ 889 ) ; xx [ 647 ] = 0.1324676666259766 ; xx [ 1442 ] = xx [ 889 ] + xx [
645 ] - xx [ 647 ] ; xx [ 1506 ] = 0.1263068237304688 ; xx [ 1514 ] = xx [
890 ] + xx [ 648 ] - xx [ 1506 ] ; xx [ 889 ] = 0.9199576416015626 ; xx [ 890
] = xx [ 891 ] + xx [ 1436 ] - xx [ 889 ] ; xx [ 891 ] = sqrt ( xx [ 1442 ] *
xx [ 1442 ] + xx [ 1514 ] * xx [ 1514 ] + xx [ 890 ] * xx [ 890 ] ) ; if ( xx
[ 891 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force5' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 891 ] = input [ 169 ] / xx [ 891 ] ; xx [ 1515 ] = xx
[ 891 ] * xx [ 1442 ] ; xx [ 1516 ] = xx [ 891 ] * xx [ 1514 ] ; xx [ 1517 ]
= xx [ 891 ] * xx [ 890 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1490 ,
xx + 1515 , xx + 1518 ) ; pm_math_Vector3_cross_ra ( xx + 166 , xx + 1518 ,
xx + 1514 ) ; xx [ 1521 ] = - 0.1089988975238918 ; xx [ 1522 ] =
0.01817390566611121 ; xx [ 1523 ] = - 0.1609369210652937 ;
pm_math_Quaternion_xform_ra ( xx + 1490 , xx + 1521 , xx + 1524 ) ; xx [ 890
] = xx [ 1524 ] + xx [ 645 ] + xx [ 646 ] ; xx [ 646 ] = xx [ 1525 ] + xx [
648 ] - xx [ 649 ] ; xx [ 649 ] = xx [ 1526 ] + xx [ 1436 ] - xx [ 1454 ] ;
xx [ 1442 ] = sqrt ( xx [ 890 ] * xx [ 890 ] + xx [ 646 ] * xx [ 646 ] + xx [
649 ] * xx [ 649 ] ) ; if ( xx [ 1442 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force6' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1442 ] = input [ 170 ] / xx [ 1442 ] ; xx [ 1524 ] =
xx [ 1442 ] * xx [ 890 ] ; xx [ 1525 ] = xx [ 1442 ] * xx [ 646 ] ; xx [ 1526
] = xx [ 1442 ] * xx [ 649 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1490
, xx + 1524 , xx + 1527 ) ; pm_math_Vector3_cross_ra ( xx + 1521 , xx + 1527
, xx + 1524 ) ; xx [ 1521 ] = - 0.09566229085706808 ; xx [ 1522 ] = -
0.0798895592638616 ; xx [ 1523 ] = - 0.08405862367883098 ;
pm_math_Quaternion_xform_ra ( xx + 1490 , xx + 1521 , xx + 1530 ) ; xx [ 646
] = xx [ 1530 ] + xx [ 645 ] + xx [ 647 ] ; xx [ 645 ] = xx [ 1531 ] + xx [
648 ] - xx [ 1506 ] ; xx [ 647 ] = xx [ 1532 ] + xx [ 1436 ] - xx [ 889 ] ;
xx [ 648 ] = sqrt ( xx [ 646 ] * xx [ 646 ] + xx [ 645 ] * xx [ 645 ] + xx [
647 ] * xx [ 647 ] ) ; if ( xx [ 648 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force7' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 648 ] = input [ 171 ] / xx [ 648 ] ; xx [ 1530 ] = xx
[ 648 ] * xx [ 646 ] ; xx [ 1531 ] = xx [ 648 ] * xx [ 645 ] ; xx [ 1532 ] =
xx [ 648 ] * xx [ 647 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1490 , xx
+ 1530 , xx + 645 ) ; pm_math_Vector3_cross_ra ( xx + 1521 , xx + 645 , xx +
1530 ) ; xx [ 649 ] = xx [ 1491 ] * input [ 172 ] ; xx [ 889 ] = xx [ 1492 ]
* input [ 172 ] ; xx [ 890 ] = xx [ 1492 ] * input [ 173 ] ; xx [ 1436 ] = xx
[ 1493 ] * input [ 173 ] ; xx [ 1454 ] = xx [ 1493 ] * input [ 174 ] ; xx [
1506 ] = xx [ 1491 ] * input [ 174 ] ; xx [ 1521 ] = xx [ 807 ] ; xx [ 1522 ]
= xx [ 820 ] ; xx [ 1523 ] = xx [ 81 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 113 , xx + 1521 , xx + 1533 ) ; pm_math_Vector3_cross_ra ( xx + 902 , xx
+ 1533 , xx + 1521 ) ; xx [ 1536 ] = xx [ 99 ] ; xx [ 1537 ] = xx [ 110 ] ;
xx [ 1538 ] = xx [ 135 ] ; xx [ 1539 ] = xx [ 134 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1536 , xx + 916 , xx + 902 ) ; xx [
1540 ] = xx [ 112 ] ; xx [ 1541 ] = xx [ 127 ] ; xx [ 1542 ] = - xx [ 128 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1536 , xx + 1540 , xx + 1543 ) ; xx
[ 99 ] = xx [ 1543 ] * inputDot [ 52 ] ; xx [ 110 ] = xx [ 108 ] * xx [ 131 ]
; xx [ 108 ] = xx [ 11 ] * xx [ 110 ] * inputDot [ 53 ] ; xx [ 112 ] = xx [
99 ] + xx [ 108 ] ; xx [ 127 ] = xx [ 1544 ] * inputDot [ 52 ] ; xx [ 128 ] =
xx [ 0 ] - xx [ 11 ] * xx [ 131 ] * xx [ 131 ] ; xx [ 131 ] = xx [ 128 ] *
inputDot [ 53 ] ; xx [ 134 ] = xx [ 127 ] + xx [ 131 ] ; xx [ 135 ] = xx [
1545 ] * inputDot [ 52 ] ; xx [ 1517 ] = xx [ 135 ] + inputDot [ 54 ] ; xx [
1540 ] = xx [ 902 ] + xx [ 112 ] ; xx [ 1541 ] = xx [ 903 ] + xx [ 134 ] ; xx
[ 1542 ] = xx [ 904 ] + xx [ 1517 ] ; pm_math_Matrix3x3_xform_ra ( xx + 153 ,
xx + 1540 , xx + 1546 ) ; pm_math_Vector3_cross_ra ( xx + 1540 , xx + 1546 ,
xx + 1549 ) ; xx [ 1546 ] = xx [ 112 ] ; xx [ 1547 ] = xx [ 134 ] ; xx [ 1548
] = xx [ 1517 ] ; pm_math_Vector3_cross_ra ( xx + 902 , xx + 1546 , xx + 1552
) ; xx [ 902 ] = xx [ 99 ] ; xx [ 903 ] = xx [ 127 ] ; xx [ 904 ] = xx [ 135
] ; pm_math_Vector3_cross_ra ( xx + 1546 , xx + 902 , xx + 1555 ) ; xx [ 99 ]
= xx [ 1552 ] + xx [ 131 ] * inputDot [ 54 ] - xx [ 1555 ] + xx [ 1543 ] *
inputDdot [ 52 ] + xx [ 11 ] * xx [ 110 ] * inputDdot [ 53 ] ; xx [ 110 ] =
xx [ 1553 ] - ( xx [ 1556 ] + xx [ 108 ] * inputDot [ 54 ] ) + xx [ 1544 ] *
inputDdot [ 52 ] + xx [ 128 ] * inputDdot [ 53 ] ; xx [ 108 ] = xx [ 1554 ] -
xx [ 1557 ] + xx [ 1545 ] * inputDdot [ 52 ] + inputDdot [ 54 ] ; xx [ 902 ]
= xx [ 99 ] ; xx [ 903 ] = xx [ 110 ] ; xx [ 904 ] = xx [ 108 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 153 , xx + 902 , xx + 1543 ) ;
pm_math_Vector3_cross_ra ( xx + 916 , xx + 166 , xx + 153 ) ;
pm_math_Vector3_cross_ra ( xx + 916 , xx + 153 , xx + 156 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 1536 , xx + 156 , xx + 153 ) ; xx [
156 ] = xx [ 1549 ] + xx [ 1543 ] + xx [ 155 ] * xx [ 140 ] - xx [ 154 ] * xx
[ 162 ] ; xx [ 157 ] = xx [ 1550 ] + xx [ 1544 ] + xx [ 153 ] * xx [ 162 ] -
xx [ 155 ] * xx [ 164 ] ; xx [ 158 ] = xx [ 1551 ] + xx [ 1545 ] + xx [ 154 ]
* xx [ 164 ] - xx [ 153 ] * xx [ 140 ] ; pm_math_Quaternion_xform_ra ( xx +
1536 , xx + 156 , xx + 159 ) ; xx [ 156 ] = xx [ 163 ] ; xx [ 157 ] = xx [
132 ] ; xx [ 158 ] = xx [ 152 ] ; pm_math_Vector3_cross_ra ( xx + 1540 , xx +
156 , xx + 902 ) ; pm_math_Vector3_cross_ra ( xx + 1540 , xx + 902 , xx + 156
) ; xx [ 902 ] = xx [ 156 ] * xx [ 165 ] + xx [ 110 ] * xx [ 162 ] - xx [ 108
] * xx [ 140 ] + xx [ 153 ] * xx [ 165 ] ; xx [ 903 ] = xx [ 165 ] * xx [ 157
] + xx [ 108 ] * xx [ 164 ] - xx [ 99 ] * xx [ 162 ] + xx [ 165 ] * xx [ 154
] ; xx [ 904 ] = xx [ 165 ] * xx [ 158 ] + xx [ 99 ] * xx [ 140 ] - xx [ 110
] * xx [ 164 ] + xx [ 165 ] * xx [ 155 ] ; pm_math_Quaternion_xform_ra ( xx +
1536 , xx + 902 , xx + 152 ) ; pm_math_Vector3_cross_ra ( xx + 166 , xx + 152
, xx + 155 ) ; xx [ 162 ] = xx [ 106 ] ; xx [ 163 ] = xx [ 821 ] ; xx [ 164 ]
= xx [ 913 ] ; pm_math_Vector3_cross_ra ( xx + 833 , xx + 162 , xx + 165 ) ;
xx [ 902 ] = xx [ 109 ] ; xx [ 903 ] = xx [ 237 ] ; xx [ 904 ] = xx [ 914 ] ;
pm_math_Vector3_cross_ra ( xx + 162 , xx + 902 , xx + 108 ) ; xx [ 902 ] = xx
[ 105 ] ; xx [ 903 ] = - xx [ 239 ] ; xx [ 904 ] = xx [ 912 ] ; xx [ 912 ] =
xx [ 104 ] ; xx [ 913 ] = xx [ 238 ] ; xx [ 914 ] = xx [ 911 ] ;
pm_math_Vector3_cross_ra ( xx + 902 , xx + 912 , xx + 104 ) ; xx [ 99 ] = xx
[ 108 ] + xx [ 104 ] ; xx [ 112 ] = xx [ 165 ] - xx [ 99 ] ; xx [ 127 ] = xx
[ 109 ] + xx [ 105 ] ; xx [ 128 ] = xx [ 166 ] - xx [ 127 ] ; xx [ 104 ] = xx
[ 110 ] + xx [ 106 ] ; xx [ 105 ] = xx [ 167 ] - xx [ 104 ] ; xx [ 108 ] = xx
[ 112 ] ; xx [ 109 ] = xx [ 128 ] ; xx [ 110 ] = xx [ 105 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 184 , xx + 108 , xx + 165 ) ; xx [ 184 ] =
xx [ 833 ] + xx [ 107 ] ; xx [ 185 ] = xx [ 834 ] + xx [ 822 ] ; xx [ 186 ] =
xx [ 835 ] + xx [ 915 ] ; pm_math_Vector3_cross_ra ( xx + 200 , xx + 162 , xx
+ 187 ) ; pm_math_Vector3_cross_ra ( xx + 184 , xx + 187 , xx + 162 ) ;
pm_math_Vector3_cross_ra ( xx + 847 , xx + 141 , xx + 184 ) ;
pm_math_Vector3_cross_ra ( xx + 847 , xx + 184 , xx + 187 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 187 , xx + 184 ) ; xx [
187 ] = - xx [ 99 ] ; xx [ 188 ] = - xx [ 127 ] ; xx [ 189 ] = - xx [ 104 ] ;
pm_math_Vector3_cross_ra ( xx + 200 , xx + 187 , xx + 190 ) ; xx [ 187 ] = xx
[ 162 ] + xx [ 184 ] + xx [ 190 ] ; xx [ 188 ] = xx [ 163 ] + xx [ 185 ] + xx
[ 191 ] ; xx [ 189 ] = xx [ 164 ] + xx [ 186 ] + xx [ 192 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 173 , xx + 187 , xx + 162 ) ; xx [ 99 ] =
xx [ 922 ] - xx [ 932 ] - xx [ 938 ] - xx [ 944 ] - xx [ 953 ] - xx [ 959 ] -
xx [ 965 ] - xx [ 971 ] - xx [ 977 ] - xx [ 983 ] - xx [ 989 ] - xx [ 995 ] -
xx [ 1001 ] - xx [ 1007 ] - xx [ 1013 ] - xx [ 1019 ] - xx [ 1025 ] - xx [
1031 ] - xx [ 1037 ] - xx [ 1043 ] - xx [ 1049 ] - xx [ 1055 ] - xx [ 1061 ]
- xx [ 1067 ] - xx [ 1073 ] - xx [ 1079 ] - xx [ 1085 ] - xx [ 1091 ] - xx [
1097 ] - xx [ 1103 ] - xx [ 1109 ] - xx [ 1115 ] - xx [ 1121 ] - xx [ 1127 ]
- xx [ 1133 ] - xx [ 1139 ] - xx [ 1145 ] - xx [ 1151 ] - xx [ 1157 ] - xx [
1163 ] - xx [ 1169 ] - xx [ 1175 ] - xx [ 1181 ] - xx [ 1187 ] - xx [ 1193 ]
- xx [ 1199 ] - xx [ 1205 ] - xx [ 1211 ] - xx [ 1217 ] - xx [ 1223 ] - xx [
1229 ] - xx [ 1235 ] - xx [ 1241 ] - xx [ 1247 ] - xx [ 1253 ] - xx [ 1259 ]
- xx [ 1265 ] - xx [ 1271 ] - xx [ 1277 ] - xx [ 1283 ] - xx [ 1289 ] - xx [
1295 ] - xx [ 1301 ] - xx [ 1307 ] - xx [ 1313 ] - xx [ 1319 ] - xx [ 1325 ]
- xx [ 1331 ] - xx [ 1337 ] - xx [ 1343 ] - xx [ 1349 ] - xx [ 1355 ] - xx [
1361 ] - xx [ 1367 ] - xx [ 1373 ] - xx [ 1379 ] - xx [ 1385 ] - xx [ 1391 ]
- xx [ 1397 ] - xx [ 1403 ] - xx [ 1409 ] - xx [ 1415 ] - xx [ 1421 ] - xx [
1427 ] - xx [ 1433 ] - xx [ 1439 ] - xx [ 1445 ] - xx [ 1451 ] - xx [ 1457 ]
- xx [ 1463 ] - xx [ 1469 ] - xx [ 919 ] - xx [ 864 ] - xx [ 876 ] - xx [
1478 ] - xx [ 1484 ] - xx [ 1494 ] - xx [ 1500 ] - xx [ 1508 ] - xx [ 1514 ]
- xx [ 1524 ] - xx [ 1530 ] - xx [ 11 ] * ( xx [ 1493 ] * xx [ 649 ] - xx [
1490 ] * xx [ 889 ] ) - ( input [ 173 ] - ( xx [ 1492 ] * xx [ 890 ] + xx [
1493 ] * xx [ 1436 ] ) * xx [ 11 ] ) - ( xx [ 1490 ] * xx [ 1454 ] + xx [
1492 ] * xx [ 1506 ] ) * xx [ 11 ] - xx [ 1521 ] + xx [ 159 ] + xx [ 155 ] +
xx [ 165 ] + xx [ 162 ] ; xx [ 104 ] = state [ 24 ] + xx [ 42 ] ; if ( xx [
137 ] < xx [ 104 ] ) xx [ 104 ] = xx [ 137 ] ; xx [ 106 ] = - ( xx [ 104 ] /
xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 106 ] ) xx [ 106 ] = xx [ 0 ] ; xx [ 107 ]
= xx [ 66 ] * state [ 27 ] ; xx [ 127 ] = xx [ 106 ] * xx [ 106 ] * ( xx [ 55
] - xx [ 11 ] * xx [ 106 ] ) * ( ( - xx [ 104 ] == xx [ 137 ] ? xx [ 137 ] :
- xx [ 107 ] ) - xx [ 103 ] * xx [ 104 ] ) ; if ( xx [ 137 ] > xx [ 127 ] )
xx [ 127 ] = xx [ 137 ] ; xx [ 104 ] = state [ 24 ] - xx [ 42 ] ; if ( xx [
137 ] > xx [ 104 ] ) xx [ 104 ] = xx [ 137 ] ; xx [ 106 ] = xx [ 104 ] / xx [
45 ] ; if ( xx [ 0 ] < xx [ 106 ] ) xx [ 106 ] = xx [ 0 ] ; xx [ 131 ] = ( xx
[ 103 ] * xx [ 104 ] + ( xx [ 104 ] == xx [ 137 ] ? xx [ 137 ] : xx [ 107 ] )
) * xx [ 106 ] * xx [ 106 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 106 ] ) ; if (
xx [ 137 ] > xx [ 131 ] ) xx [ 131 ] = xx [ 137 ] ; xx [ 104 ] = xx [ 923 ] -
xx [ 933 ] - xx [ 939 ] - xx [ 945 ] - xx [ 954 ] - xx [ 960 ] - xx [ 966 ] -
xx [ 972 ] - xx [ 978 ] - xx [ 984 ] - xx [ 990 ] - xx [ 996 ] - xx [ 1002 ]
- xx [ 1008 ] - xx [ 1014 ] - xx [ 1020 ] - xx [ 1026 ] - xx [ 1032 ] - xx [
1038 ] - xx [ 1044 ] - xx [ 1050 ] - xx [ 1056 ] - xx [ 1062 ] - xx [ 1068 ]
- xx [ 1074 ] - xx [ 1080 ] - xx [ 1086 ] - xx [ 1092 ] - xx [ 1098 ] - xx [
1104 ] - xx [ 1110 ] - xx [ 1116 ] - xx [ 1122 ] - xx [ 1128 ] - xx [ 1134 ]
- xx [ 1140 ] - xx [ 1146 ] - xx [ 1152 ] - xx [ 1158 ] - xx [ 1164 ] - xx [
1170 ] - xx [ 1176 ] - xx [ 1182 ] - xx [ 1188 ] - xx [ 1194 ] - xx [ 1200 ]
- xx [ 1206 ] - xx [ 1212 ] - xx [ 1218 ] - xx [ 1224 ] - xx [ 1230 ] - xx [
1236 ] - xx [ 1242 ] - xx [ 1248 ] - xx [ 1254 ] - xx [ 1260 ] - xx [ 1266 ]
- xx [ 1272 ] - xx [ 1278 ] - xx [ 1284 ] - xx [ 1290 ] - xx [ 1296 ] - xx [
1302 ] - xx [ 1308 ] - xx [ 1314 ] - xx [ 1320 ] - xx [ 1326 ] - xx [ 1332 ]
- xx [ 1338 ] - xx [ 1344 ] - xx [ 1350 ] - xx [ 1356 ] - xx [ 1362 ] - xx [
1368 ] - xx [ 1374 ] - xx [ 1380 ] - xx [ 1386 ] - xx [ 1392 ] - xx [ 1398 ]
- xx [ 1404 ] - xx [ 1410 ] - xx [ 1416 ] - xx [ 1422 ] - xx [ 1428 ] - xx [
1434 ] - xx [ 1440 ] - xx [ 1446 ] - xx [ 1452 ] - xx [ 1458 ] - xx [ 1464 ]
- xx [ 1470 ] - xx [ 920 ] - xx [ 865 ] - xx [ 877 ] - xx [ 1479 ] - xx [
1485 ] - xx [ 1495 ] - xx [ 1501 ] - xx [ 1509 ] - xx [ 1515 ] - xx [ 1525 ]
- xx [ 1531 ] - ( xx [ 1490 ] * xx [ 649 ] + xx [ 1493 ] * xx [ 889 ] ) * xx
[ 11 ] - xx [ 11 ] * ( xx [ 1491 ] * xx [ 890 ] - xx [ 1490 ] * xx [ 1436 ] )
- ( input [ 174 ] - ( xx [ 1493 ] * xx [ 1454 ] + xx [ 1491 ] * xx [ 1506 ] )
* xx [ 11 ] ) - xx [ 1522 ] + xx [ 160 ] + xx [ 156 ] + xx [ 166 ] + xx [ 163
] ; xx [ 106 ] = xx [ 924 ] - xx [ 934 ] - xx [ 940 ] - xx [ 946 ] - xx [ 955
] - xx [ 961 ] - xx [ 967 ] - xx [ 973 ] - xx [ 979 ] - xx [ 985 ] - xx [ 991
] - xx [ 997 ] - xx [ 1003 ] - xx [ 1009 ] - xx [ 1015 ] - xx [ 1021 ] - xx [
1027 ] - xx [ 1033 ] - xx [ 1039 ] - xx [ 1045 ] - xx [ 1051 ] - xx [ 1057 ]
- xx [ 1063 ] - xx [ 1069 ] - xx [ 1075 ] - xx [ 1081 ] - xx [ 1087 ] - xx [
1093 ] - xx [ 1099 ] - xx [ 1105 ] - xx [ 1111 ] - xx [ 1117 ] - xx [ 1123 ]
- xx [ 1129 ] - xx [ 1135 ] - xx [ 1141 ] - xx [ 1147 ] - xx [ 1153 ] - xx [
1159 ] - xx [ 1165 ] - xx [ 1171 ] - xx [ 1177 ] - xx [ 1183 ] - xx [ 1189 ]
- xx [ 1195 ] - xx [ 1201 ] - xx [ 1207 ] - xx [ 1213 ] - xx [ 1219 ] - xx [
1225 ] - xx [ 1231 ] - xx [ 1237 ] - xx [ 1243 ] - xx [ 1249 ] - xx [ 1255 ]
- xx [ 1261 ] - xx [ 1267 ] - xx [ 1273 ] - xx [ 1279 ] - xx [ 1285 ] - xx [
1291 ] - xx [ 1297 ] - xx [ 1303 ] - xx [ 1309 ] - xx [ 1315 ] - xx [ 1321 ]
- xx [ 1327 ] - xx [ 1333 ] - xx [ 1339 ] - xx [ 1345 ] - xx [ 1351 ] - xx [
1357 ] - xx [ 1363 ] - xx [ 1369 ] - xx [ 1375 ] - xx [ 1381 ] - xx [ 1387 ]
- xx [ 1393 ] - xx [ 1399 ] - xx [ 1405 ] - xx [ 1411 ] - xx [ 1417 ] - xx [
1423 ] - xx [ 1429 ] - xx [ 1435 ] - xx [ 1441 ] - xx [ 1447 ] - xx [ 1453 ]
- xx [ 1459 ] - xx [ 1465 ] - xx [ 1471 ] - xx [ 921 ] - xx [ 866 ] - xx [
878 ] - xx [ 1480 ] - xx [ 1486 ] - xx [ 1496 ] - xx [ 1502 ] - xx [ 1510 ] -
xx [ 1516 ] - xx [ 1526 ] - xx [ 1532 ] - ( input [ 172 ] - ( xx [ 1491 ] *
xx [ 649 ] + xx [ 1492 ] * xx [ 889 ] ) * xx [ 11 ] ) - ( xx [ 1490 ] * xx [
890 ] + xx [ 1491 ] * xx [ 1436 ] ) * xx [ 11 ] - xx [ 11 ] * ( xx [ 1492 ] *
xx [ 1454 ] - xx [ 1490 ] * xx [ 1506 ] ) - xx [ 1523 ] + xx [ 161 ] + xx [
157 ] + xx [ 167 ] + xx [ 164 ] ; xx [ 155 ] = xx [ 99 ] ; xx [ 156 ] = xx [
104 ] ; xx [ 157 ] = xx [ 106 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx +
173 , xx + 108 , xx + 158 ) ; pm_math_Matrix3x3_xform_ra ( xx + 220 , xx +
187 , xx + 107 ) ; xx [ 110 ] = xx [ 152 ] - ( xx [ 948 ] - ( xx [ 926 ] + xx
[ 936 ] + xx [ 942 ] ) + xx [ 951 ] + xx [ 957 ] - xx [ 963 ] + xx [ 969 ] +
xx [ 975 ] + xx [ 981 ] + xx [ 987 ] + xx [ 993 ] + xx [ 999 ] - xx [ 1005 ]
+ xx [ 1011 ] + xx [ 1017 ] + xx [ 1023 ] + xx [ 1029 ] + xx [ 1035 ] + xx [
1041 ] + xx [ 1047 ] + xx [ 1053 ] + xx [ 1059 ] + xx [ 1065 ] - xx [ 1071 ]
+ xx [ 1077 ] + xx [ 1083 ] + xx [ 1089 ] + xx [ 1095 ] + xx [ 1101 ] + xx [
1107 ] + xx [ 1113 ] + xx [ 1119 ] + xx [ 1125 ] + xx [ 1131 ] + xx [ 1137 ]
+ xx [ 1143 ] + xx [ 1149 ] + xx [ 1155 ] + xx [ 1161 ] + xx [ 1167 ] + xx [
1173 ] + xx [ 1179 ] + xx [ 1185 ] + xx [ 1191 ] - xx [ 1197 ] - xx [ 1203 ]
+ xx [ 1209 ] + xx [ 1215 ] - xx [ 1221 ] + xx [ 1227 ] - xx [ 1233 ] - xx [
1239 ] - xx [ 1245 ] - xx [ 1251 ] + xx [ 1257 ] - xx [ 1263 ] - xx [ 1269 ]
+ xx [ 1275 ] - xx [ 1281 ] - xx [ 1287 ] - xx [ 1293 ] - xx [ 1299 ] - xx [
1305 ] + xx [ 1311 ] - xx [ 1317 ] - xx [ 1323 ] - xx [ 1329 ] + xx [ 1335 ]
- xx [ 1341 ] - xx [ 1347 ] - xx [ 1353 ] - xx [ 1359 ] - xx [ 1365 ] - xx [
1371 ] - xx [ 1377 ] - xx [ 1383 ] - xx [ 1389 ] - xx [ 1395 ] + xx [ 1401 ]
- xx [ 1407 ] - xx [ 1413 ] - xx [ 1419 ] - xx [ 1425 ] - xx [ 1431 ] - xx [
1437 ] - xx [ 1443 ] - xx [ 1449 ] + xx [ 1455 ] + xx [ 1461 ] + xx [ 1466 ]
+ xx [ 1472 ] + xx [ 1475 ] + xx [ 1481 ] + xx [ 1487 ] + xx [ 1497 ] + xx [
1503 ] + xx [ 1511 ] + xx [ 1518 ] + xx [ 1527 ] + xx [ 645 ] + xx [ 1533 ] )
+ xx [ 158 ] + xx [ 107 ] ; xx [ 132 ] = xx [ 153 ] - ( xx [ 927 ] + xx [ 937
] + xx [ 943 ] + xx [ 949 ] + xx [ 952 ] + xx [ 958 ] + xx [ 964 ] + xx [ 970
] + xx [ 976 ] + xx [ 982 ] + xx [ 988 ] + xx [ 994 ] + xx [ 1000 ] + xx [
1006 ] + xx [ 1012 ] + xx [ 1018 ] + xx [ 1024 ] + xx [ 1030 ] + xx [ 1036 ]
+ xx [ 1042 ] + xx [ 1048 ] + xx [ 1054 ] + xx [ 1060 ] + xx [ 1066 ] + xx [
1072 ] + xx [ 1078 ] + xx [ 1084 ] + xx [ 1090 ] + xx [ 1096 ] + xx [ 1102 ]
+ xx [ 1108 ] + xx [ 1114 ] + xx [ 1120 ] + xx [ 1126 ] + xx [ 1132 ] + xx [
1138 ] + xx [ 1144 ] + xx [ 1150 ] + xx [ 1156 ] - xx [ 1162 ] - xx [ 1168 ]
+ xx [ 1174 ] + xx [ 1180 ] + xx [ 1186 ] + xx [ 1192 ] + xx [ 1198 ] + xx [
1204 ] + xx [ 1210 ] + xx [ 1216 ] + xx [ 1222 ] - xx [ 1228 ] + xx [ 1234 ]
+ xx [ 1240 ] + xx [ 1246 ] + xx [ 1252 ] + xx [ 1258 ] + xx [ 1264 ] + xx [
1270 ] - xx [ 1276 ] + xx [ 1282 ] + xx [ 1288 ] + xx [ 1294 ] + xx [ 1300 ]
+ xx [ 1306 ] - xx [ 1312 ] + xx [ 1318 ] + xx [ 1324 ] + xx [ 1330 ] + xx [
1336 ] + xx [ 1342 ] + xx [ 1348 ] + xx [ 1354 ] + xx [ 1360 ] + xx [ 1366 ]
+ xx [ 1372 ] + xx [ 1378 ] + xx [ 1384 ] + xx [ 1390 ] + xx [ 1396 ] + xx [
1402 ] + xx [ 1408 ] + xx [ 1414 ] + xx [ 1420 ] + xx [ 1426 ] + xx [ 1432 ]
+ xx [ 1438 ] + xx [ 1444 ] + xx [ 1450 ] + xx [ 1456 ] - xx [ 1462 ] + xx [
1467 ] + xx [ 1473 ] + xx [ 1476 ] + xx [ 1482 ] + xx [ 1488 ] + xx [ 1498 ]
+ xx [ 1504 ] + xx [ 1512 ] + xx [ 1519 ] + xx [ 1528 ] + xx [ 646 ] + xx [
1534 ] ) + xx [ 159 ] + xx [ 108 ] ; xx [ 107 ] = xx [ 154 ] - ( xx [ 928 ] +
xx [ 138 ] + xx [ 925 ] + xx [ 929 ] + xx [ 930 ] + xx [ 931 ] + xx [ 935 ] +
xx [ 941 ] + xx [ 947 ] + xx [ 950 ] + xx [ 956 ] + xx [ 962 ] + xx [ 968 ] +
xx [ 974 ] + xx [ 980 ] + xx [ 986 ] + xx [ 992 ] + xx [ 998 ] + xx [ 1004 ]
+ xx [ 1010 ] + xx [ 1016 ] + xx [ 1022 ] + xx [ 1028 ] + xx [ 1034 ] + xx [
1040 ] + xx [ 1046 ] + xx [ 1052 ] + xx [ 1058 ] + xx [ 1064 ] + xx [ 1070 ]
+ xx [ 1076 ] + xx [ 1082 ] + xx [ 1088 ] + xx [ 1094 ] + xx [ 1100 ] + xx [
1106 ] + xx [ 1112 ] + xx [ 1118 ] + xx [ 1124 ] + xx [ 1130 ] + xx [ 1136 ]
+ xx [ 1142 ] + xx [ 1148 ] + xx [ 1154 ] + xx [ 1160 ] + xx [ 1166 ] + xx [
1172 ] + xx [ 1178 ] + xx [ 1184 ] + xx [ 1190 ] + xx [ 1196 ] + xx [ 1202 ]
+ xx [ 1208 ] + xx [ 1214 ] + xx [ 1220 ] + xx [ 1226 ] + xx [ 1232 ] + xx [
1238 ] + xx [ 1244 ] + xx [ 1250 ] + xx [ 1256 ] + xx [ 1262 ] + xx [ 1268 ]
+ xx [ 1274 ] + xx [ 1280 ] + xx [ 1286 ] + xx [ 1292 ] + xx [ 1298 ] + xx [
1304 ] + xx [ 1310 ] + xx [ 1316 ] + xx [ 1322 ] + xx [ 1328 ] + xx [ 1334 ]
+ xx [ 1340 ] + xx [ 1346 ] + xx [ 1352 ] + xx [ 1358 ] + xx [ 1364 ] + xx [
1370 ] + xx [ 1376 ] + xx [ 1382 ] + xx [ 1388 ] + xx [ 1394 ] + xx [ 1400 ]
+ xx [ 1406 ] + xx [ 1412 ] + xx [ 1418 ] + xx [ 1424 ] + xx [ 1430 ] + xx [
1468 ] + xx [ 1474 ] + xx [ 1477 ] + xx [ 1483 ] + xx [ 1489 ] + xx [ 1499 ]
+ xx [ 1505 ] + xx [ 1513 ] + xx [ 1520 ] + xx [ 1529 ] + xx [ 647 ] + xx [
1535 ] ) + xx [ 160 ] + xx [ 109 ] ; xx [ 152 ] = xx [ 110 ] ; xx [ 153 ] =
xx [ 132 ] ; xx [ 154 ] = xx [ 107 ] ; xx [ 108 ] = state [ 25 ] + xx [ 42 ]
; if ( xx [ 137 ] < xx [ 108 ] ) xx [ 108 ] = xx [ 137 ] ; xx [ 109 ] = - (
xx [ 108 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 109 ] ) xx [ 109 ] = xx [ 0 ]
; xx [ 134 ] = xx [ 66 ] * state [ 28 ] ; xx [ 135 ] = xx [ 109 ] * xx [ 109
] * ( xx [ 55 ] - xx [ 11 ] * xx [ 109 ] ) * ( ( - xx [ 108 ] == xx [ 137 ] ?
xx [ 137 ] : - xx [ 134 ] ) - xx [ 103 ] * xx [ 108 ] ) ; if ( xx [ 137 ] >
xx [ 135 ] ) xx [ 135 ] = xx [ 137 ] ; xx [ 108 ] = state [ 25 ] - xx [ 42 ]
; if ( xx [ 137 ] > xx [ 108 ] ) xx [ 108 ] = xx [ 137 ] ; xx [ 109 ] = xx [
108 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 109 ] ) xx [ 109 ] = xx [ 0 ] ; xx [
138 ] = ( xx [ 103 ] * xx [ 108 ] + ( xx [ 108 ] == xx [ 137 ] ? xx [ 137 ] :
xx [ 134 ] ) ) * xx [ 109 ] * xx [ 109 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 109
] ) ; if ( xx [ 137 ] > xx [ 138 ] ) xx [ 138 ] = xx [ 137 ] ; xx [ 108 ] =
state [ 26 ] + xx [ 42 ] ; if ( xx [ 137 ] < xx [ 108 ] ) xx [ 108 ] = xx [
137 ] ; xx [ 109 ] = - ( xx [ 108 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 109
] ) xx [ 109 ] = xx [ 0 ] ; xx [ 134 ] = xx [ 66 ] * state [ 29 ] ; xx [ 140
] = xx [ 109 ] * xx [ 109 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 109 ] ) * ( ( -
xx [ 108 ] == xx [ 137 ] ? xx [ 137 ] : - xx [ 134 ] ) - xx [ 103 ] * xx [
108 ] ) ; if ( xx [ 137 ] > xx [ 140 ] ) xx [ 140 ] = xx [ 137 ] ; xx [ 108 ]
= state [ 26 ] - xx [ 42 ] ; if ( xx [ 137 ] > xx [ 108 ] ) xx [ 108 ] = xx [
137 ] ; xx [ 109 ] = xx [ 108 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 109 ] ) xx
[ 109 ] = xx [ 0 ] ; xx [ 158 ] = ( xx [ 103 ] * xx [ 108 ] + ( xx [ 108 ] ==
xx [ 137 ] ? xx [ 137 ] : xx [ 134 ] ) ) * xx [ 109 ] * xx [ 109 ] * ( xx [
55 ] - xx [ 11 ] * xx [ 109 ] ) ; if ( xx [ 137 ] > xx [ 158 ] ) xx [ 158 ] =
xx [ 137 ] ; xx [ 159 ] = input [ 10 ] - xx [ 40 ] * state [ 27 ] + xx [ 127
] - xx [ 131 ] - ( pm_math_Vector3_dot_ra ( xx + 194 , xx + 155 ) +
pm_math_Vector3_dot_ra ( xx + 203 , xx + 152 ) ) ; xx [ 160 ] = input [ 11 ]
- xx [ 40 ] * state [ 28 ] + xx [ 135 ] - xx [ 138 ] - (
pm_math_Vector3_dot_ra ( xx + 240 , xx + 155 ) + pm_math_Vector3_dot_ra ( xx
+ 243 , xx + 152 ) ) ; xx [ 161 ] = input [ 12 ] - xx [ 40 ] * state [ 29 ] +
xx [ 140 ] - xx [ 158 ] - ( pm_math_Vector3_dot_ra ( xx + 249 , xx + 155 ) +
pm_math_Vector3_dot_ra ( xx + 255 , xx + 152 ) ) ; solveSymmetricPosDef ( xx
+ 266 , xx + 159 , 3 , 1 , xx + 152 , xx + 155 ) ; xx [ 155 ] = xx [ 99 ] +
xx [ 149 ] * xx [ 152 ] + xx [ 71 ] * xx [ 153 ] + xx [ 207 ] * xx [ 154 ] ;
xx [ 156 ] = xx [ 104 ] + xx [ 182 ] * xx [ 152 ] + xx [ 78 ] * xx [ 153 ] +
xx [ 208 ] * xx [ 154 ] ; xx [ 157 ] = xx [ 106 ] + xx [ 183 ] * xx [ 152 ] +
xx [ 82 ] * xx [ 153 ] + xx [ 236 ] * xx [ 154 ] ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 155 , xx + 158 ) ; xx [ 155 ] =
xx [ 110 ] + xx [ 210 ] * xx [ 152 ] + xx [ 83 ] * xx [ 153 ] + xx [ 264 ] *
xx [ 154 ] ; xx [ 156 ] = xx [ 132 ] + xx [ 232 ] * xx [ 152 ] + xx [ 97 ] *
xx [ 153 ] + xx [ 265 ] * xx [ 154 ] ; xx [ 157 ] = xx [ 107 ] + xx [ 206 ] *
xx [ 152 ] + xx [ 101 ] * xx [ 153 ] + xx [ 258 ] * xx [ 154 ] ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 155 , xx + 106 ) ;
pm_math_Vector3_cross_ra ( xx + 141 , xx + 106 , xx + 155 ) ; xx [ 161 ] = xx
[ 76 ] ; xx [ 162 ] = xx [ 755 ] ; xx [ 163 ] = xx [ 844 ] ;
pm_math_Vector3_cross_ra ( xx + 767 , xx + 161 , xx + 164 ) ; xx [ 173 ] = xx
[ 121 ] ; xx [ 174 ] = xx [ 329 ] ; xx [ 175 ] = xx [ 845 ] ;
pm_math_Vector3_cross_ra ( xx + 161 , xx + 173 , xx + 176 ) ; xx [ 173 ] = xx
[ 75 ] ; xx [ 174 ] = xx [ 331 ] ; xx [ 175 ] = xx [ 843 ] ; xx [ 179 ] = xx
[ 74 ] ; xx [ 180 ] = xx [ 330 ] ; xx [ 181 ] = xx [ 842 ] ;
pm_math_Vector3_cross_ra ( xx + 173 , xx + 179 , xx + 74 ) ; xx [ 71 ] = xx [
176 ] + xx [ 74 ] ; xx [ 78 ] = xx [ 164 ] - xx [ 71 ] ; xx [ 82 ] = xx [ 177
] + xx [ 75 ] ; xx [ 83 ] = xx [ 165 ] - xx [ 82 ] ; xx [ 74 ] = xx [ 178 ] +
xx [ 76 ] ; xx [ 75 ] = xx [ 166 ] - xx [ 74 ] ; xx [ 164 ] = xx [ 78 ] ; xx
[ 165 ] = xx [ 83 ] ; xx [ 166 ] = xx [ 75 ] ; pm_math_Matrix3x3_xform_ra (
xx + 211 , xx + 164 , xx + 173 ) ; xx [ 176 ] = xx [ 767 ] + xx [ 77 ] ; xx [
177 ] = xx [ 768 ] + xx [ 756 ] ; xx [ 178 ] = xx [ 769 ] + xx [ 846 ] ;
pm_math_Vector3_cross_ra ( xx + 246 , xx + 161 , xx + 179 ) ;
pm_math_Vector3_cross_ra ( xx + 176 , xx + 179 , xx + 161 ) ;
pm_math_Vector3_cross_ra ( xx + 778 , xx + 122 , xx + 176 ) ;
pm_math_Vector3_cross_ra ( xx + 778 , xx + 176 , xx + 179 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 179 , xx + 176 ) ; xx [
179 ] = - xx [ 71 ] ; xx [ 180 ] = - xx [ 82 ] ; xx [ 181 ] = - xx [ 74 ] ;
pm_math_Vector3_cross_ra ( xx + 246 , xx + 179 , xx + 182 ) ; xx [ 71 ] = xx
[ 161 ] + xx [ 176 ] + xx [ 182 ] ; xx [ 74 ] = xx [ 162 ] + xx [ 177 ] + xx
[ 183 ] ; xx [ 76 ] = xx [ 163 ] + xx [ 178 ] + xx [ 184 ] ; xx [ 161 ] = xx
[ 71 ] ; xx [ 162 ] = xx [ 74 ] ; xx [ 163 ] = xx [ 76 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 275 , xx + 161 , xx + 176 ) ; xx [ 77 ] =
xx [ 853 ] - xx [ 861 ] - xx [ 870 ] - xx [ 856 ] - xx [ 883 ] - xx [ 873 ] -
xx [ 896 ] - xx [ 886 ] - xx [ 908 ] - xx [ 899 ] + xx [ 158 ] + xx [ 155 ] +
xx [ 173 ] + xx [ 176 ] ; xx [ 82 ] = state [ 18 ] + xx [ 42 ] ; if ( xx [
137 ] < xx [ 82 ] ) xx [ 82 ] = xx [ 137 ] ; xx [ 97 ] = - ( xx [ 82 ] / xx [
45 ] ) ; if ( xx [ 0 ] < xx [ 97 ] ) xx [ 97 ] = xx [ 0 ] ; xx [ 99 ] = xx [
66 ] * state [ 21 ] ; xx [ 101 ] = xx [ 97 ] * xx [ 97 ] * ( xx [ 55 ] - xx [
11 ] * xx [ 97 ] ) * ( ( - xx [ 82 ] == xx [ 137 ] ? xx [ 137 ] : - xx [ 99 ]
) - xx [ 103 ] * xx [ 82 ] ) ; if ( xx [ 137 ] > xx [ 101 ] ) xx [ 101 ] = xx
[ 137 ] ; xx [ 82 ] = state [ 18 ] - xx [ 42 ] ; if ( xx [ 137 ] > xx [ 82 ]
) xx [ 82 ] = xx [ 137 ] ; xx [ 97 ] = xx [ 82 ] / xx [ 45 ] ; if ( xx [ 0 ]
< xx [ 97 ] ) xx [ 97 ] = xx [ 0 ] ; xx [ 104 ] = ( xx [ 103 ] * xx [ 82 ] +
( xx [ 82 ] == xx [ 137 ] ? xx [ 137 ] : xx [ 99 ] ) ) * xx [ 97 ] * xx [ 97
] * ( xx [ 55 ] - xx [ 11 ] * xx [ 97 ] ) ; if ( xx [ 137 ] > xx [ 104 ] ) xx
[ 104 ] = xx [ 137 ] ; xx [ 82 ] = xx [ 854 ] - xx [ 862 ] - xx [ 871 ] - xx
[ 857 ] - xx [ 884 ] - xx [ 874 ] - xx [ 897 ] - xx [ 887 ] - xx [ 909 ] - xx
[ 900 ] + xx [ 159 ] + xx [ 156 ] + xx [ 174 ] + xx [ 177 ] ; xx [ 97 ] = xx
[ 855 ] - xx [ 863 ] - xx [ 872 ] - xx [ 858 ] - xx [ 885 ] - xx [ 875 ] - xx
[ 898 ] - xx [ 888 ] - xx [ 910 ] - xx [ 901 ] + xx [ 160 ] + xx [ 157 ] + xx
[ 175 ] + xx [ 178 ] ; xx [ 155 ] = xx [ 77 ] ; xx [ 156 ] = xx [ 82 ] ; xx [
157 ] = xx [ 97 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 275 , xx + 164
, xx + 158 ) ; pm_math_Matrix3x3_xform_ra ( xx + 284 , xx + 161 , xx + 164 )
; xx [ 99 ] = xx [ 852 ] + xx [ 859 ] - xx [ 867 ] + xx [ 879 ] - xx [ 880 ]
+ xx [ 892 ] - xx [ 893 ] + xx [ 807 ] - xx [ 905 ] + xx [ 106 ] + xx [ 158 ]
+ xx [ 164 ] ; xx [ 106 ] = xx [ 851 ] - xx [ 860 ] - xx [ 868 ] + xx [ 796 ]
- xx [ 881 ] + xx [ 809 ] - xx [ 894 ] + xx [ 820 ] - xx [ 906 ] + xx [ 107 ]
+ xx [ 159 ] + xx [ 165 ] ; xx [ 107 ] = xx [ 146 ] - xx [ 136 ] - xx [ 869 ]
+ xx [ 169 ] - xx [ 882 ] + xx [ 794 ] - xx [ 895 ] + xx [ 81 ] - xx [ 907 ]
+ xx [ 108 ] + xx [ 160 ] + xx [ 166 ] ; xx [ 108 ] = xx [ 99 ] ; xx [ 109 ]
= xx [ 106 ] ; xx [ 110 ] = xx [ 107 ] ; xx [ 81 ] = state [ 19 ] + xx [ 42 ]
; if ( xx [ 137 ] < xx [ 81 ] ) xx [ 81 ] = xx [ 137 ] ; xx [ 121 ] = - ( xx
[ 81 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 121 ] ) xx [ 121 ] = xx [ 0 ] ;
xx [ 127 ] = xx [ 66 ] * state [ 22 ] ; xx [ 131 ] = xx [ 121 ] * xx [ 121 ]
* ( xx [ 55 ] - xx [ 11 ] * xx [ 121 ] ) * ( ( - xx [ 81 ] == xx [ 137 ] ? xx
[ 137 ] : - xx [ 127 ] ) - xx [ 103 ] * xx [ 81 ] ) ; if ( xx [ 137 ] > xx [
131 ] ) xx [ 131 ] = xx [ 137 ] ; xx [ 81 ] = state [ 19 ] - xx [ 42 ] ; if (
xx [ 137 ] > xx [ 81 ] ) xx [ 81 ] = xx [ 137 ] ; xx [ 121 ] = xx [ 81 ] / xx
[ 45 ] ; if ( xx [ 0 ] < xx [ 121 ] ) xx [ 121 ] = xx [ 0 ] ; xx [ 132 ] = (
xx [ 103 ] * xx [ 81 ] + ( xx [ 81 ] == xx [ 137 ] ? xx [ 137 ] : xx [ 127 ]
) ) * xx [ 121 ] * xx [ 121 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 121 ] ) ; if (
xx [ 137 ] > xx [ 132 ] ) xx [ 132 ] = xx [ 137 ] ; xx [ 81 ] = state [ 20 ]
+ xx [ 42 ] ; if ( xx [ 137 ] < xx [ 81 ] ) xx [ 81 ] = xx [ 137 ] ; xx [ 121
] = - ( xx [ 81 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 121 ] ) xx [ 121 ] =
xx [ 0 ] ; xx [ 127 ] = xx [ 66 ] * state [ 23 ] ; xx [ 134 ] = xx [ 121 ] *
xx [ 121 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 121 ] ) * ( ( - xx [ 81 ] == xx [
137 ] ? xx [ 137 ] : - xx [ 127 ] ) - xx [ 103 ] * xx [ 81 ] ) ; if ( xx [
137 ] > xx [ 134 ] ) xx [ 134 ] = xx [ 137 ] ; xx [ 81 ] = state [ 20 ] - xx
[ 42 ] ; if ( xx [ 137 ] > xx [ 81 ] ) xx [ 81 ] = xx [ 137 ] ; xx [ 121 ] =
xx [ 81 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 121 ] ) xx [ 121 ] = xx [ 0 ] ;
xx [ 135 ] = ( xx [ 103 ] * xx [ 81 ] + ( xx [ 81 ] == xx [ 137 ] ? xx [ 137
] : xx [ 127 ] ) ) * xx [ 121 ] * xx [ 121 ] * ( xx [ 55 ] - xx [ 11 ] * xx [
121 ] ) ; if ( xx [ 137 ] > xx [ 135 ] ) xx [ 135 ] = xx [ 137 ] ; xx [ 158 ]
= input [ 13 ] - xx [ 40 ] * state [ 21 ] + xx [ 101 ] - xx [ 104 ] - (
pm_math_Vector3_dot_ra ( xx + 229 , xx + 155 ) + pm_math_Vector3_dot_ra ( xx
+ 252 , xx + 108 ) ) ; xx [ 159 ] = input [ 14 ] - xx [ 40 ] * state [ 22 ] +
xx [ 131 ] - xx [ 132 ] - ( pm_math_Vector3_dot_ra ( xx + 332 , xx + 155 ) +
pm_math_Vector3_dot_ra ( xx + 335 , xx + 108 ) ) ; xx [ 160 ] = input [ 15 ]
- xx [ 40 ] * state [ 23 ] + xx [ 134 ] - xx [ 135 ] - (
pm_math_Vector3_dot_ra ( xx + 341 , xx + 155 ) + pm_math_Vector3_dot_ra ( xx
+ 348 , xx + 108 ) ) ; solveSymmetricPosDef ( xx + 362 , xx + 158 , 3 , 1 ,
xx + 108 , xx + 134 ) ; xx [ 134 ] = xx [ 77 ] + xx [ 126 ] * xx [ 108 ] + xx
[ 51 ] * xx [ 109 ] + xx [ 354 ] * xx [ 110 ] ; xx [ 135 ] = xx [ 82 ] + xx [
198 ] * xx [ 108 ] + xx [ 54 ] * xx [ 109 ] + xx [ 355 ] * xx [ 110 ] ; xx [
136 ] = xx [ 97 ] + xx [ 209 ] * xx [ 108 ] + xx [ 57 ] * xx [ 109 ] + xx [
344 ] * xx [ 110 ] ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 134 , xx +
155 ) ; xx [ 134 ] = xx [ 99 ] + xx [ 263 ] * xx [ 108 ] + xx [ 72 ] * xx [
109 ] + xx [ 345 ] * xx [ 110 ] ; xx [ 135 ] = xx [ 106 ] + xx [ 314 ] * xx [
108 ] + xx [ 73 ] * xx [ 109 ] + xx [ 346 ] * xx [ 110 ] ; xx [ 136 ] = xx [
107 ] + xx [ 259 ] * xx [ 108 ] + xx [ 260 ] * xx [ 109 ] + xx [ 356 ] * xx [
110 ] ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 134 , xx + 158 ) ;
pm_math_Vector3_cross_ra ( xx + 122 , xx + 158 , xx + 134 ) ; xx [ 161 ] = xx
[ 29 ] ; xx [ 162 ] = xx [ 415 ] ; xx [ 163 ] = xx [ 425 ] ;
pm_math_Vector3_cross_ra ( xx + 683 , xx + 161 , xx + 164 ) ; xx [ 167 ] = xx
[ 658 ] ; xx [ 168 ] = xx [ 359 ] ; xx [ 169 ] = xx [ 776 ] ;
pm_math_Vector3_cross_ra ( xx + 161 , xx + 167 , xx + 173 ) ; xx [ 29 ] = xx
[ 173 ] + xx [ 777 ] * xx [ 37 ] - xx [ 413 ] * xx [ 26 ] ; xx [ 51 ] = xx [
164 ] - xx [ 29 ] ; xx [ 54 ] = xx [ 174 ] + xx [ 26 ] * xx [ 358 ] ; xx [ 26
] = xx [ 165 ] - xx [ 54 ] ; xx [ 57 ] = xx [ 37 ] * xx [ 358 ] - xx [ 175 ]
; xx [ 37 ] = xx [ 166 ] + xx [ 57 ] ; xx [ 164 ] = xx [ 51 ] ; xx [ 165 ] =
xx [ 26 ] ; xx [ 166 ] = xx [ 37 ] ; pm_math_Matrix3x3_xform_ra ( xx + 320 ,
xx + 164 , xx + 167 ) ; xx [ 173 ] = xx [ 683 ] + xx [ 36 ] ; xx [ 174 ] = xx
[ 684 ] + xx [ 688 ] ; xx [ 175 ] = xx [ 685 ] + xx [ 687 ] ;
pm_math_Vector3_cross_ra ( xx + 338 , xx + 161 , xx + 176 ) ;
pm_math_Vector3_cross_ra ( xx + 173 , xx + 176 , xx + 161 ) ;
pm_math_Vector3_cross_ra ( xx + 712 , xx + 92 , xx + 173 ) ;
pm_math_Vector3_cross_ra ( xx + 712 , xx + 173 , xx + 176 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 176 , xx + 173 ) ; xx [
176 ] = - xx [ 29 ] ; xx [ 177 ] = - xx [ 54 ] ; xx [ 178 ] = xx [ 57 ] ;
pm_math_Vector3_cross_ra ( xx + 338 , xx + 176 , xx + 179 ) ; xx [ 29 ] = xx
[ 161 ] + xx [ 173 ] + xx [ 179 ] ; xx [ 36 ] = xx [ 162 ] + xx [ 174 ] + xx
[ 180 ] ; xx [ 54 ] = xx [ 163 ] + xx [ 175 ] + xx [ 181 ] ; xx [ 161 ] = xx
[ 29 ] ; xx [ 162 ] = xx [ 36 ] ; xx [ 163 ] = xx [ 54 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 371 , xx + 161 , xx + 173 ) ; xx [ 57 ] =
xx [ 784 ] - xx [ 791 ] - xx [ 801 ] - xx [ 788 ] - xx [ 814 ] - xx [ 804 ] -
xx [ 827 ] - xx [ 817 ] - xx [ 839 ] - xx [ 830 ] + xx [ 155 ] + xx [ 134 ] +
xx [ 167 ] + xx [ 173 ] ; xx [ 72 ] = state [ 12 ] + xx [ 42 ] ; if ( xx [
137 ] < xx [ 72 ] ) xx [ 72 ] = xx [ 137 ] ; xx [ 73 ] = - ( xx [ 72 ] / xx [
45 ] ) ; if ( xx [ 0 ] < xx [ 73 ] ) xx [ 73 ] = xx [ 0 ] ; xx [ 77 ] = xx [
66 ] * state [ 15 ] ; xx [ 81 ] = xx [ 73 ] * xx [ 73 ] * ( xx [ 55 ] - xx [
11 ] * xx [ 73 ] ) * ( ( - xx [ 72 ] == xx [ 137 ] ? xx [ 137 ] : - xx [ 77 ]
) - xx [ 103 ] * xx [ 72 ] ) ; if ( xx [ 137 ] > xx [ 81 ] ) xx [ 81 ] = xx [
137 ] ; xx [ 72 ] = state [ 12 ] - xx [ 42 ] ; if ( xx [ 137 ] > xx [ 72 ] )
xx [ 72 ] = xx [ 137 ] ; xx [ 73 ] = xx [ 72 ] / xx [ 45 ] ; if ( xx [ 0 ] <
xx [ 73 ] ) xx [ 73 ] = xx [ 0 ] ; xx [ 82 ] = ( xx [ 103 ] * xx [ 72 ] + (
xx [ 72 ] == xx [ 137 ] ? xx [ 137 ] : xx [ 77 ] ) ) * xx [ 73 ] * xx [ 73 ]
* ( xx [ 55 ] - xx [ 11 ] * xx [ 73 ] ) ; if ( xx [ 137 ] > xx [ 82 ] ) xx [
82 ] = xx [ 137 ] ; xx [ 72 ] = xx [ 785 ] - xx [ 792 ] - xx [ 802 ] - xx [
789 ] - xx [ 815 ] - xx [ 805 ] - xx [ 828 ] - xx [ 818 ] - xx [ 840 ] - xx [
831 ] + xx [ 156 ] + xx [ 135 ] + xx [ 168 ] + xx [ 174 ] ; xx [ 73 ] = xx [
786 ] - xx [ 793 ] - xx [ 803 ] - xx [ 790 ] - xx [ 816 ] - xx [ 806 ] - xx [
829 ] - xx [ 819 ] - xx [ 841 ] - xx [ 832 ] + xx [ 157 ] + xx [ 136 ] + xx [
169 ] + xx [ 175 ] ; xx [ 134 ] = xx [ 57 ] ; xx [ 135 ] = xx [ 72 ] ; xx [
136 ] = xx [ 73 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 371 , xx + 164
, xx + 155 ) ; pm_math_Matrix3x3_xform_ra ( xx + 380 , xx + 161 , xx + 164 )
; xx [ 77 ] = xx [ 797 ] - xx [ 144 ] - xx [ 798 ] + xx [ 810 ] - xx [ 811 ]
+ xx [ 823 ] - xx [ 824 ] + xx [ 742 ] - xx [ 836 ] + xx [ 158 ] + xx [ 155 ]
+ xx [ 164 ] ; xx [ 97 ] = xx [ 151 ] + xx [ 783 ] - xx [ 799 ] + xx [ 781 ]
- xx [ 812 ] + xx [ 744 ] - xx [ 825 ] + xx [ 754 ] - xx [ 837 ] + xx [ 159 ]
+ xx [ 156 ] + xx [ 165 ] ; xx [ 99 ] = xx [ 120 ] - xx [ 787 ] - xx [ 800 ]
+ xx [ 730 ] - xx [ 813 ] + xx [ 731 ] - xx [ 826 ] + xx [ 79 ] - xx [ 838 ]
+ xx [ 160 ] + xx [ 157 ] + xx [ 166 ] ; xx [ 155 ] = xx [ 77 ] ; xx [ 156 ]
= xx [ 97 ] ; xx [ 157 ] = xx [ 99 ] ; xx [ 79 ] = state [ 13 ] + xx [ 42 ] ;
if ( xx [ 137 ] < xx [ 79 ] ) xx [ 79 ] = xx [ 137 ] ; xx [ 101 ] = - ( xx [
79 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 101 ] ) xx [ 101 ] = xx [ 0 ] ; xx
[ 104 ] = xx [ 66 ] * state [ 16 ] ; xx [ 106 ] = xx [ 101 ] * xx [ 101 ] * (
xx [ 55 ] - xx [ 11 ] * xx [ 101 ] ) * ( ( - xx [ 79 ] == xx [ 137 ] ? xx [
137 ] : - xx [ 104 ] ) - xx [ 103 ] * xx [ 79 ] ) ; if ( xx [ 137 ] > xx [
106 ] ) xx [ 106 ] = xx [ 137 ] ; xx [ 79 ] = state [ 13 ] - xx [ 42 ] ; if (
xx [ 137 ] > xx [ 79 ] ) xx [ 79 ] = xx [ 137 ] ; xx [ 101 ] = xx [ 79 ] / xx
[ 45 ] ; if ( xx [ 0 ] < xx [ 101 ] ) xx [ 101 ] = xx [ 0 ] ; xx [ 107 ] = (
xx [ 103 ] * xx [ 79 ] + ( xx [ 79 ] == xx [ 137 ] ? xx [ 137 ] : xx [ 104 ]
) ) * xx [ 101 ] * xx [ 101 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 101 ] ) ; if (
xx [ 137 ] > xx [ 107 ] ) xx [ 107 ] = xx [ 137 ] ; xx [ 79 ] = state [ 14 ]
+ xx [ 42 ] ; if ( xx [ 137 ] < xx [ 79 ] ) xx [ 79 ] = xx [ 137 ] ; xx [ 101
] = - ( xx [ 79 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 101 ] ) xx [ 101 ] =
xx [ 0 ] ; xx [ 104 ] = xx [ 66 ] * state [ 17 ] ; xx [ 120 ] = xx [ 101 ] *
xx [ 101 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 101 ] ) * ( ( - xx [ 79 ] == xx [
137 ] ? xx [ 137 ] : - xx [ 104 ] ) - xx [ 103 ] * xx [ 79 ] ) ; if ( xx [
137 ] > xx [ 120 ] ) xx [ 120 ] = xx [ 137 ] ; xx [ 79 ] = state [ 14 ] - xx
[ 42 ] ; if ( xx [ 137 ] > xx [ 79 ] ) xx [ 79 ] = xx [ 137 ] ; xx [ 101 ] =
xx [ 79 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [ 101 ] ) xx [ 101 ] = xx [ 0 ] ;
xx [ 121 ] = ( xx [ 103 ] * xx [ 79 ] + ( xx [ 79 ] == xx [ 137 ] ? xx [ 137
] : xx [ 104 ] ) ) * xx [ 101 ] * xx [ 101 ] * ( xx [ 55 ] - xx [ 11 ] * xx [
101 ] ) ; if ( xx [ 137 ] > xx [ 121 ] ) xx [ 121 ] = xx [ 137 ] ; xx [ 158 ]
= input [ 16 ] - xx [ 40 ] * state [ 15 ] + xx [ 81 ] - xx [ 82 ] - (
pm_math_Vector3_dot_ra ( xx + 311 , xx + 134 ) + pm_math_Vector3_dot_ra ( xx
+ 351 , xx + 155 ) ) ; xx [ 159 ] = input [ 17 ] - xx [ 40 ] * state [ 16 ] +
xx [ 106 ] - xx [ 107 ] - ( pm_math_Vector3_dot_ra ( xx + 426 , xx + 134 ) +
pm_math_Vector3_dot_ra ( xx + 432 , xx + 155 ) ) ; xx [ 160 ] = input [ 18 ]
- xx [ 40 ] * state [ 17 ] + xx [ 120 ] - xx [ 121 ] - ( xx [ 72 ] * xx [ 49
] + xx [ 73 ] * xx [ 48 ] + pm_math_Vector3_dot_ra ( xx + 447 , xx + 155 ) )
; solveSymmetricPosDef ( xx + 464 , xx + 158 , 3 , 1 , xx + 134 , xx + 155 )
; xx [ 155 ] = xx [ 57 ] + xx [ 96 ] * xx [ 134 ] + xx [ 410 ] * xx [ 135 ] +
xx [ 453 ] * xx [ 136 ] ; xx [ 156 ] = xx [ 72 ] + xx [ 235 ] * xx [ 134 ] +
xx [ 438 ] * xx [ 135 ] + xx [ 454 ] * xx [ 136 ] ; xx [ 157 ] = xx [ 73 ] +
xx [ 261 ] * xx [ 134 ] + xx [ 429 ] * xx [ 135 ] + xx [ 450 ] * xx [ 136 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 155 , xx + 158 ) ; xx [ 155 ] =
xx [ 77 ] + xx [ 360 ] * xx [ 134 ] + xx [ 430 ] * xx [ 135 ] + xx [ 451 ] *
xx [ 136 ] ; xx [ 156 ] = xx [ 97 ] + xx [ 361 ] * xx [ 134 ] + xx [ 431 ] *
xx [ 135 ] + xx [ 452 ] * xx [ 136 ] ; xx [ 157 ] = xx [ 99 ] + xx [ 357 ] *
xx [ 134 ] + xx [ 439 ] * xx [ 135 ] + xx [ 458 ] * xx [ 136 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 155 , xx + 161 ) ;
pm_math_Vector3_cross_ra ( xx + 92 , xx + 161 , xx + 155 ) ; xx [ 164 ] = xx
[ 20 ] ; xx [ 165 ] = xx [ 514 ] ; xx [ 166 ] = xx [ 515 ] ;
pm_math_Vector3_cross_ra ( xx + 698 , xx + 164 , xx + 167 ) ; xx [ 173 ] = xx
[ 440 ] ; xx [ 174 ] = xx [ 463 ] ; xx [ 175 ] = xx [ 707 ] ;
pm_math_Vector3_cross_ra ( xx + 164 , xx + 173 , xx + 176 ) ; xx [ 20 ] = xx
[ 176 ] + xx [ 711 ] * xx [ 23 ] - xx [ 512 ] * xx [ 19 ] ; xx [ 57 ] = xx [
167 ] - xx [ 20 ] ; xx [ 72 ] = xx [ 177 ] + xx [ 19 ] * xx [ 462 ] ; xx [ 19
] = xx [ 168 ] - xx [ 72 ] ; xx [ 73 ] = xx [ 23 ] * xx [ 462 ] - xx [ 178 ]
; xx [ 23 ] = xx [ 169 ] + xx [ 73 ] ; xx [ 167 ] = xx [ 57 ] ; xx [ 168 ] =
xx [ 19 ] ; xx [ 169 ] = xx [ 23 ] ; pm_math_Matrix3x3_xform_ra ( xx + 416 ,
xx + 167 , xx + 173 ) ; xx [ 176 ] = xx [ 698 ] + xx [ 22 ] ; xx [ 177 ] = xx
[ 699 ] + xx [ 706 ] ; xx [ 178 ] = xx [ 700 ] + xx [ 701 ] ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 164 , xx + 179 ) ;
pm_math_Vector3_cross_ra ( xx + 176 , xx + 179 , xx + 164 ) ;
pm_math_Vector3_cross_ra ( xx + 611 , xx + 459 , xx + 176 ) ;
pm_math_Vector3_cross_ra ( xx + 611 , xx + 176 , xx + 179 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 179 , xx + 176 ) ; xx [
179 ] = - xx [ 20 ] ; xx [ 180 ] = - xx [ 72 ] ; xx [ 181 ] = xx [ 73 ] ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 179 , xx + 182 ) ; xx [ 20 ] = xx [
164 ] + xx [ 176 ] + xx [ 182 ] ; xx [ 22 ] = xx [ 165 ] + xx [ 177 ] + xx [
183 ] ; xx [ 67 ] = xx [ 166 ] + xx [ 178 ] + xx [ 184 ] ; xx [ 164 ] = xx [
20 ] ; xx [ 165 ] = xx [ 22 ] ; xx [ 166 ] = xx [ 67 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 473 , xx + 164 , xx + 176 ) ; xx [ 68 ] =
xx [ 718 ] - xx [ 727 ] - xx [ 736 ] - xx [ 724 ] - xx [ 748 ] - xx [ 739 ] -
xx [ 761 ] - xx [ 751 ] - xx [ 773 ] - xx [ 764 ] + xx [ 158 ] + xx [ 155 ] +
xx [ 173 ] + xx [ 176 ] ; xx [ 69 ] = state [ 6 ] + xx [ 42 ] ; if ( xx [ 137
] < xx [ 69 ] ) xx [ 69 ] = xx [ 137 ] ; xx [ 72 ] = - ( xx [ 69 ] / xx [ 45
] ) ; if ( xx [ 0 ] < xx [ 72 ] ) xx [ 72 ] = xx [ 0 ] ; xx [ 73 ] = xx [ 66
] * state [ 9 ] ; xx [ 77 ] = xx [ 72 ] * xx [ 72 ] * ( xx [ 55 ] - xx [ 11 ]
* xx [ 72 ] ) * ( ( - xx [ 69 ] == xx [ 137 ] ? xx [ 137 ] : - xx [ 73 ] ) -
xx [ 103 ] * xx [ 69 ] ) ; if ( xx [ 137 ] > xx [ 77 ] ) xx [ 77 ] = xx [ 137
] ; xx [ 69 ] = state [ 6 ] - xx [ 42 ] ; if ( xx [ 137 ] > xx [ 69 ] ) xx [
69 ] = xx [ 137 ] ; xx [ 72 ] = xx [ 69 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [
72 ] ) xx [ 72 ] = xx [ 0 ] ; xx [ 79 ] = ( xx [ 103 ] * xx [ 69 ] + ( xx [
69 ] == xx [ 137 ] ? xx [ 137 ] : xx [ 73 ] ) ) * xx [ 72 ] * xx [ 72 ] * (
xx [ 55 ] - xx [ 11 ] * xx [ 72 ] ) ; if ( xx [ 137 ] > xx [ 79 ] ) xx [ 79 ]
= xx [ 137 ] ; xx [ 69 ] = xx [ 719 ] - xx [ 728 ] - xx [ 737 ] - xx [ 725 ]
- xx [ 749 ] - xx [ 740 ] - xx [ 762 ] - xx [ 752 ] - xx [ 774 ] - xx [ 765 ]
+ xx [ 159 ] + xx [ 156 ] + xx [ 174 ] + xx [ 177 ] ; xx [ 72 ] = xx [ 720 ]
- xx [ 729 ] - xx [ 738 ] - xx [ 726 ] - xx [ 750 ] - xx [ 741 ] - xx [ 763 ]
- xx [ 753 ] - xx [ 775 ] - xx [ 766 ] + xx [ 160 ] + xx [ 157 ] + xx [ 175 ]
+ xx [ 178 ] ; xx [ 155 ] = xx [ 68 ] ; xx [ 156 ] = xx [ 69 ] ; xx [ 157 ] =
xx [ 72 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 473 , xx + 167 , xx +
158 ) ; pm_math_Matrix3x3_xform_ra ( xx + 482 , xx + 164 , xx + 167 ) ; xx [
73 ] = xx [ 721 ] + xx [ 723 ] - xx [ 733 ] + xx [ 722 ] - xx [ 745 ] + xx [
757 ] - xx [ 758 ] + xx [ 663 ] - xx [ 770 ] + xx [ 161 ] + xx [ 158 ] + xx [
167 ] ; xx [ 81 ] = xx [ 717 ] - xx [ 133 ] - xx [ 734 ] + xx [ 617 ] - xx [
746 ] + xx [ 665 ] - xx [ 759 ] + xx [ 686 ] - xx [ 771 ] + xx [ 162 ] + xx [
159 ] + xx [ 168 ] ; xx [ 82 ] = xx [ 150 ] - xx [ 56 ] - xx [ 735 ] + xx [
526 ] - xx [ 747 ] + xx [ 615 ] - xx [ 760 ] + xx [ 31 ] - xx [ 772 ] + xx [
163 ] + xx [ 160 ] + xx [ 169 ] ; xx [ 131 ] = xx [ 73 ] ; xx [ 132 ] = xx [
81 ] ; xx [ 133 ] = xx [ 82 ] ; xx [ 31 ] = state [ 7 ] + xx [ 42 ] ; if ( xx
[ 137 ] < xx [ 31 ] ) xx [ 31 ] = xx [ 137 ] ; xx [ 56 ] = - ( xx [ 31 ] / xx
[ 45 ] ) ; if ( xx [ 0 ] < xx [ 56 ] ) xx [ 56 ] = xx [ 0 ] ; xx [ 96 ] = xx
[ 66 ] * state [ 10 ] ; xx [ 97 ] = xx [ 56 ] * xx [ 56 ] * ( xx [ 55 ] - xx
[ 11 ] * xx [ 56 ] ) * ( ( - xx [ 31 ] == xx [ 137 ] ? xx [ 137 ] : - xx [ 96
] ) - xx [ 103 ] * xx [ 31 ] ) ; if ( xx [ 137 ] > xx [ 97 ] ) xx [ 97 ] = xx
[ 137 ] ; xx [ 31 ] = state [ 7 ] - xx [ 42 ] ; if ( xx [ 137 ] > xx [ 31 ] )
xx [ 31 ] = xx [ 137 ] ; xx [ 56 ] = xx [ 31 ] / xx [ 45 ] ; if ( xx [ 0 ] <
xx [ 56 ] ) xx [ 56 ] = xx [ 0 ] ; xx [ 99 ] = ( xx [ 103 ] * xx [ 31 ] + (
xx [ 31 ] == xx [ 137 ] ? xx [ 137 ] : xx [ 96 ] ) ) * xx [ 56 ] * xx [ 56 ]
* ( xx [ 55 ] - xx [ 11 ] * xx [ 56 ] ) ; if ( xx [ 137 ] > xx [ 99 ] ) xx [
99 ] = xx [ 137 ] ; xx [ 31 ] = state [ 8 ] + xx [ 42 ] ; if ( xx [ 137 ] <
xx [ 31 ] ) xx [ 31 ] = xx [ 137 ] ; xx [ 56 ] = - ( xx [ 31 ] / xx [ 45 ] )
; if ( xx [ 0 ] < xx [ 56 ] ) xx [ 56 ] = xx [ 0 ] ; xx [ 96 ] = xx [ 66 ] *
state [ 11 ] ; xx [ 101 ] = xx [ 56 ] * xx [ 56 ] * ( xx [ 55 ] - xx [ 11 ] *
xx [ 56 ] ) * ( ( - xx [ 31 ] == xx [ 137 ] ? xx [ 137 ] : - xx [ 96 ] ) - xx
[ 103 ] * xx [ 31 ] ) ; if ( xx [ 137 ] > xx [ 101 ] ) xx [ 101 ] = xx [ 137
] ; xx [ 31 ] = state [ 8 ] - xx [ 42 ] ; if ( xx [ 137 ] > xx [ 31 ] ) xx [
31 ] = xx [ 137 ] ; xx [ 56 ] = xx [ 31 ] / xx [ 45 ] ; if ( xx [ 0 ] < xx [
56 ] ) xx [ 56 ] = xx [ 0 ] ; xx [ 104 ] = ( xx [ 103 ] * xx [ 31 ] + ( xx [
31 ] == xx [ 137 ] ? xx [ 137 ] : xx [ 96 ] ) ) * xx [ 56 ] * xx [ 56 ] * (
xx [ 55 ] - xx [ 11 ] * xx [ 56 ] ) ; if ( xx [ 137 ] > xx [ 104 ] ) xx [ 104
] = xx [ 137 ] ; xx [ 149 ] = input [ 19 ] - xx [ 40 ] * state [ 9 ] + xx [
77 ] - xx [ 79 ] - ( pm_math_Vector3_dot_ra ( xx + 315 , xx + 155 ) +
pm_math_Vector3_dot_ra ( xx + 435 , xx + 131 ) ) ; xx [ 150 ] = input [ 20 ]
- xx [ 40 ] * state [ 10 ] + xx [ 97 ] - xx [ 99 ] - ( pm_math_Vector3_dot_ra
( xx + 527 , xx + 155 ) + pm_math_Vector3_dot_ra ( xx + 533 , xx + 131 ) ) ;
xx [ 151 ] = input [ 21 ] - xx [ 40 ] * state [ 11 ] + xx [ 101 ] - xx [ 104
] - ( xx [ 69 ] * xx [ 25 ] + xx [ 72 ] * xx [ 24 ] + pm_math_Vector3_dot_ra
( xx + 546 , xx + 131 ) ) ; solveSymmetricPosDef ( xx + 563 , xx + 149 , 3 ,
1 , xx + 131 , xx + 155 ) ; xx [ 149 ] = xx [ 68 ] + xx [ 443 ] * xx [ 131 ]
+ xx [ 509 ] * xx [ 132 ] + xx [ 552 ] * xx [ 133 ] ; xx [ 150 ] = xx [ 69 ]
+ xx [ 455 ] * xx [ 131 ] + xx [ 516 ] * xx [ 132 ] + xx [ 553 ] * xx [ 133 ]
; xx [ 151 ] = xx [ 72 ] + xx [ 407 ] * xx [ 131 ] + xx [ 517 ] * xx [ 132 ]
+ xx [ 549 ] * xx [ 133 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 149
, xx + 155 ) ; xx [ 149 ] = xx [ 73 ] + xx [ 409 ] * xx [ 131 ] + xx [ 542 ]
* xx [ 132 ] + xx [ 550 ] * xx [ 133 ] ; xx [ 150 ] = xx [ 81 ] + xx [ 456 ]
* xx [ 131 ] + xx [ 543 ] * xx [ 132 ] + xx [ 551 ] * xx [ 133 ] ; xx [ 151 ]
= xx [ 82 ] + xx [ 457 ] * xx [ 131 ] + xx [ 536 ] * xx [ 132 ] + xx [ 557 ]
* xx [ 133 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 149 , xx + 158 )
; pm_math_Vector3_cross_ra ( xx + 459 , xx + 158 , xx + 149 ) ; xx [ 161 ] =
xx [ 43 ] ; xx [ 162 ] = xx [ 442 ] ; xx [ 163 ] = xx [ 524 ] ;
pm_math_Vector3_cross_ra ( xx + 611 , xx + 161 , xx + 164 ) ; xx [ 31 ] = xx
[ 164 ] + xx [ 7 ] * xx [ 525 ] - xx [ 519 ] * xx [ 2 ] ; xx [ 43 ] = xx [ 2
] * xx [ 95 ] + xx [ 165 ] ; xx [ 2 ] = xx [ 166 ] - xx [ 7 ] * xx [ 95 ] ;
xx [ 95 ] = - xx [ 31 ] ; xx [ 96 ] = - xx [ 43 ] ; xx [ 97 ] = - xx [ 2 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 626 , xx + 95 , xx + 161 ) ; xx [ 164 ] =
xx [ 47 ] * xx [ 41 ] + xx [ 520 ] * xx [ 44 ] ; xx [ 165 ] = - ( xx [ 44 ] *
xx [ 3 ] ) ; xx [ 166 ] = - ( xx [ 41 ] * xx [ 3 ] ) ;
pm_math_Vector3_cross_ra ( xx + 611 , xx + 164 , xx + 167 ) ; xx [ 3 ] = xx [
167 ] - ( xx [ 2 ] * xx [ 41 ] + xx [ 44 ] * xx [ 43 ] ) ; xx [ 7 ] = xx [
168 ] + xx [ 31 ] * xx [ 44 ] ; xx [ 44 ] = xx [ 169 ] + xx [ 31 ] * xx [ 41
] ; xx [ 164 ] = xx [ 3 ] ; xx [ 165 ] = xx [ 7 ] ; xx [ 166 ] = xx [ 44 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 572 , xx + 164 , xx + 167 ) ; xx [ 41 ] =
xx [ 623 ] - xx [ 618 ] * xx [ 715 ] + xx [ 530 ] * xx [ 660 ] - xx [ 672 ] -
xx [ 677 ] - xx [ 693 ] - xx [ 690 ] - xx [ 21 ] * xx [ 52 ] - xx [ 704 ] +
xx [ 156 ] + xx [ 150 ] + xx [ 162 ] + xx [ 168 ] ; xx [ 47 ] = xx [ 624 ] +
xx [ 18 ] * xx [ 715 ] - xx [ 652 ] * xx [ 660 ] - xx [ 673 ] - xx [ 678 ] -
xx [ 694 ] - xx [ 691 ] + xx [ 653 ] * xx [ 52 ] - xx [ 705 ] + xx [ 157 ] +
xx [ 151 ] + xx [ 163 ] + xx [ 169 ] ; xx [ 173 ] = xx [ 622 ] - (
0.02933876077043094 * xx [ 33 ] - 2.074016415803327e-3 * xx [ 65 ] ) - ( xx [
18 ] * xx [ 644 ] - xx [ 618 ] * xx [ 620 ] ) - ( xx [ 530 ] * xx [ 661 ] -
xx [ 652 ] * xx [ 662 ] ) - xx [ 671 ] - xx [ 676 ] - xx [ 692 ] - xx [ 689 ]
- ( xx [ 653 ] * xx [ 679 ] - xx [ 21 ] * xx [ 675 ] ) - xx [ 703 ] + xx [
155 ] + xx [ 149 ] + xx [ 161 ] + xx [ 167 ] ; xx [ 174 ] = xx [ 41 ] ; xx [
175 ] = xx [ 47 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 572 , xx + 95
, xx + 149 ) ; pm_math_Matrix3x3_xform_ra ( xx + 581 , xx + 164 , xx + 95 ) ;
xx [ 18 ] = xx [ 715 ] - xx [ 660 ] + xx [ 666 ] - xx [ 680 ] + xx [ 674 ] -
xx [ 695 ] + xx [ 52 ] - xx [ 708 ] + xx [ 158 ] + xx [ 149 ] + xx [ 95 ] ;
xx [ 155 ] = xx [ 18 ] ; xx [ 156 ] = xx [ 65 ] + xx [ 620 ] - xx [ 661 ] +
xx [ 667 ] - xx [ 681 ] + xx [ 669 ] - xx [ 696 ] + xx [ 675 ] - xx [ 709 ] +
xx [ 159 ] + xx [ 150 ] + xx [ 96 ] ; xx [ 157 ] = xx [ 644 ] - xx [ 33 ] -
xx [ 662 ] + xx [ 650 ] - xx [ 682 ] + xx [ 657 ] - xx [ 697 ] + xx [ 679 ] -
xx [ 710 ] + xx [ 160 ] + xx [ 151 ] + xx [ 97 ] ; xx [ 21 ] = state [ 1 ] +
xx [ 42 ] ; if ( xx [ 137 ] < xx [ 21 ] ) xx [ 21 ] = xx [ 137 ] ; xx [ 33 ]
= - ( xx [ 21 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 33 ] ) xx [ 33 ] = xx [
0 ] ; xx [ 52 ] = xx [ 66 ] * state [ 4 ] ; xx [ 56 ] = xx [ 33 ] * xx [ 33 ]
* ( xx [ 55 ] - xx [ 11 ] * xx [ 33 ] ) * ( ( - xx [ 21 ] == xx [ 137 ] ? xx
[ 137 ] : - xx [ 52 ] ) - xx [ 103 ] * xx [ 21 ] ) ; if ( xx [ 137 ] > xx [
56 ] ) xx [ 56 ] = xx [ 137 ] ; xx [ 21 ] = state [ 1 ] - xx [ 42 ] ; if ( xx
[ 137 ] > xx [ 21 ] ) xx [ 21 ] = xx [ 137 ] ; xx [ 33 ] = xx [ 21 ] / xx [
45 ] ; if ( xx [ 0 ] < xx [ 33 ] ) xx [ 33 ] = xx [ 0 ] ; xx [ 65 ] = ( xx [
103 ] * xx [ 21 ] + ( xx [ 21 ] == xx [ 137 ] ? xx [ 137 ] : xx [ 52 ] ) ) *
xx [ 33 ] * xx [ 33 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 33 ] ) ; if ( xx [ 137
] > xx [ 65 ] ) xx [ 65 ] = xx [ 137 ] ; xx [ 21 ] = state [ 2 ] + xx [ 42 ]
; if ( xx [ 137 ] < xx [ 21 ] ) xx [ 21 ] = xx [ 137 ] ; xx [ 33 ] = - ( xx [
21 ] / xx [ 45 ] ) ; if ( xx [ 0 ] < xx [ 33 ] ) xx [ 33 ] = xx [ 0 ] ; xx [
52 ] = xx [ 66 ] * state [ 5 ] ; xx [ 66 ] = xx [ 33 ] * xx [ 33 ] * ( xx [
55 ] - xx [ 11 ] * xx [ 33 ] ) * ( ( - xx [ 21 ] == xx [ 137 ] ? xx [ 137 ] :
- xx [ 52 ] ) - xx [ 103 ] * xx [ 21 ] ) ; if ( xx [ 137 ] > xx [ 66 ] ) xx [
66 ] = xx [ 137 ] ; xx [ 21 ] = state [ 2 ] - xx [ 42 ] ; if ( xx [ 137 ] >
xx [ 21 ] ) xx [ 21 ] = xx [ 137 ] ; xx [ 33 ] = xx [ 21 ] / xx [ 45 ] ; if (
xx [ 0 ] < xx [ 33 ] ) xx [ 33 ] = xx [ 0 ] ; xx [ 42 ] = ( xx [ 103 ] * xx [
21 ] + ( xx [ 21 ] == xx [ 137 ] ? xx [ 137 ] : xx [ 52 ] ) ) * xx [ 33 ] *
xx [ 33 ] * ( xx [ 55 ] - xx [ 11 ] * xx [ 33 ] ) ; if ( xx [ 137 ] > xx [ 42
] ) xx [ 42 ] = xx [ 137 ] ; xx [ 95 ] = input [ 22 ] - xx [ 40 ] * state [ 3
] + xx [ 171 ] - xx [ 518 ] - ( pm_math_Vector3_dot_ra ( xx + 15 , xx + 173 )
+ pm_math_Vector3_dot_ra ( xx + 521 , xx + 155 ) ) ; xx [ 96 ] = input [ 23 ]
- xx [ 40 ] * state [ 4 ] + xx [ 56 ] - xx [ 65 ] - ( pm_math_Vector3_dot_ra
( xx + 554 , xx + 173 ) + pm_math_Vector3_dot_ra ( xx + 608 , xx + 155 ) ) ;
xx [ 97 ] = input [ 24 ] - xx [ 40 ] * state [ 5 ] + xx [ 66 ] - xx [ 42 ] -
( xx [ 41 ] * xx [ 9 ] + xx [ 47 ] * xx [ 13 ] + xx [ 18 ] * xx [ 619 ] ) ;
solveSymmetricPosDef ( xx + 635 , xx + 95 , 3 , 1 , xx + 15 , xx + 40 ) ; xx
[ 173 ] = xx [ 139 ] ; xx [ 174 ] = xx [ 561 ] ; xx [ 175 ] = xx [ 621 ] ; xx
[ 176 ] = xx [ 145 ] ; xx [ 177 ] = xx [ 562 ] ; xx [ 178 ] = xx [ 28 ] ; xx
[ 179 ] = xx [ 147 ] ; xx [ 180 ] = xx [ 558 ] ; xx [ 181 ] = xx [ 30 ] ; xx
[ 182 ] = xx [ 148 ] ; xx [ 183 ] = xx [ 559 ] ; xx [ 184 ] = xx [ 34 ] ; xx
[ 185 ] = xx [ 408 ] ; xx [ 186 ] = xx [ 560 ] ; xx [ 187 ] = xx [ 38 ] ; xx
[ 188 ] = xx [ 441 ] ; xx [ 189 ] = xx [ 614 ] ; xx [ 190 ] = xx [ 39 ] ;
solveSymmetricPosDef ( xx + 635 , xx + 173 , 3 , 6 , xx + 200 , xx + 38 ) ;
xx [ 38 ] = xx [ 209 ] ; xx [ 39 ] = xx [ 212 ] ; xx [ 40 ] = xx [ 215 ] ; xx
[ 18 ] = 9.806649999999999 ; xx [ 21 ] = xx [ 18 ] * xx [ 14 ] ; xx [ 28 ] =
xx [ 18 ] * xx [ 6 ] ; xx [ 30 ] = xx [ 11 ] * ( xx [ 5 ] * xx [ 21 ] + xx [
28 ] * xx [ 10 ] ) ; xx [ 33 ] = ( xx [ 5 ] * xx [ 28 ] - xx [ 21 ] * xx [ 10
] ) * xx [ 11 ] ; xx [ 5 ] = ( xx [ 21 ] * xx [ 14 ] + xx [ 28 ] * xx [ 6 ] )
* xx [ 11 ] ; xx [ 95 ] = xx [ 30 ] ; xx [ 96 ] = xx [ 33 ] ; xx [ 97 ] = xx
[ 18 ] - xx [ 5 ] ; xx [ 6 ] = xx [ 15 ] - pm_math_Vector3_dot_ra ( xx + 38 ,
xx + 95 ) ; xx [ 38 ] = xx [ 210 ] ; xx [ 39 ] = xx [ 213 ] ; xx [ 40 ] = xx
[ 216 ] ; xx [ 10 ] = xx [ 16 ] - pm_math_Vector3_dot_ra ( xx + 38 , xx + 95
) ; xx [ 14 ] = xx [ 211 ] ; xx [ 15 ] = xx [ 214 ] ; xx [ 16 ] = xx [ 217 ]
; xx [ 21 ] = xx [ 17 ] - pm_math_Vector3_dot_ra ( xx + 14 , xx + 95 ) ; xx [
14 ] = xx [ 590 ] ; xx [ 15 ] = xx [ 593 ] ; xx [ 16 ] = xx [ 596 ] ; xx [ 38
] = xx [ 12 ] * xx [ 6 ] + xx [ 532 ] * xx [ 10 ] - xx [ 31 ] ; xx [ 39 ] =
xx [ 4 ] * xx [ 6 ] + xx [ 537 ] * xx [ 10 ] + xx [ 9 ] * xx [ 21 ] - xx [ 43
] ; xx [ 40 ] = xx [ 8 ] * xx [ 6 ] + xx [ 10 ] * xx [ 538 ] + xx [ 13 ] * xx
[ 21 ] - xx [ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 38 ,
xx + 41 ) ; xx [ 95 ] = xx [ 599 ] ; xx [ 96 ] = xx [ 602 ] ; xx [ 97 ] = xx
[ 605 ] ; pm_math_Vector3_cross_ra ( xx + 38 , xx + 459 , xx + 137 ) ; xx [
38 ] = xx [ 30 ] + xx [ 6 ] * xx [ 46 ] + xx [ 10 ] * xx [ 531 ] + xx [ 619 ]
* xx [ 21 ] + xx [ 3 ] + xx [ 137 ] ; xx [ 39 ] = xx [ 33 ] - xx [ 119 ] * xx
[ 6 ] - xx [ 539 ] * xx [ 10 ] + xx [ 7 ] + xx [ 138 ] ; xx [ 40 ] = xx [ 44
] - ( xx [ 5 ] + xx [ 125 ] * xx [ 6 ] + xx [ 540 ] * xx [ 10 ] ) + xx [ 139
] + xx [ 18 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 38 , xx +
2 ) ; xx [ 5 ] = xx [ 131 ] - ( pm_math_Vector3_dot_ra ( xx + 14 , xx + 41 )
+ pm_math_Vector3_dot_ra ( xx + 95 , xx + 2 ) ) ; xx [ 7 ] = xx [ 591 ] ; xx
[ 8 ] = xx [ 594 ] ; xx [ 9 ] = xx [ 597 ] ; xx [ 12 ] = xx [ 600 ] ; xx [ 13
] = xx [ 603 ] ; xx [ 14 ] = xx [ 606 ] ; xx [ 15 ] = xx [ 132 ] - (
pm_math_Vector3_dot_ra ( xx + 7 , xx + 41 ) + pm_math_Vector3_dot_ra ( xx +
12 , xx + 2 ) ) ; xx [ 7 ] = xx [ 592 ] ; xx [ 8 ] = xx [ 595 ] ; xx [ 9 ] =
xx [ 598 ] ; xx [ 12 ] = xx [ 601 ] ; xx [ 13 ] = xx [ 604 ] ; xx [ 14 ] = xx
[ 607 ] ; xx [ 16 ] = xx [ 133 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx +
41 ) + pm_math_Vector3_dot_ra ( xx + 12 , xx + 2 ) ) ; xx [ 7 ] = xx [ 491 ]
; xx [ 8 ] = xx [ 494 ] ; xx [ 9 ] = xx [ 497 ] ; xx [ 12 ] = xx [ 41 ] + xx
[ 262 ] * xx [ 5 ] + xx [ 513 ] * xx [ 15 ] + xx [ 57 ] ; xx [ 13 ] = xx [ 42
] + xx [ 32 ] * xx [ 5 ] + xx [ 511 ] * xx [ 15 ] + xx [ 25 ] * xx [ 16 ] +
xx [ 19 ] ; xx [ 14 ] = xx [ 43 ] + xx [ 35 ] * xx [ 5 ] + xx [ 15 ] * xx [
510 ] + xx [ 24 ] * xx [ 16 ] + xx [ 23 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 12 , xx + 17 ) ; xx [ 23
] = xx [ 500 ] ; xx [ 24 ] = xx [ 503 ] ; xx [ 25 ] = xx [ 506 ] ;
pm_math_Vector3_cross_ra ( xx + 12 , xx + 92 , xx + 30 ) ; xx [ 12 ] = xx [ 2
] + xx [ 435 ] * xx [ 5 ] + xx [ 533 ] * xx [ 15 ] + xx [ 541 ] * xx [ 16 ] +
xx [ 20 ] + xx [ 30 ] ; xx [ 13 ] = xx [ 3 ] + xx [ 436 ] * xx [ 5 ] + xx [
534 ] * xx [ 15 ] - xx [ 544 ] * xx [ 16 ] + xx [ 22 ] + xx [ 31 ] ; xx [ 14
] = xx [ 4 ] + xx [ 437 ] * xx [ 5 ] + xx [ 535 ] * xx [ 15 ] + xx [ 545 ] *
xx [ 16 ] + xx [ 67 ] + xx [ 32 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
88 , xx + 12 , xx + 2 ) ; xx [ 12 ] = xx [ 134 ] - ( pm_math_Vector3_dot_ra (
xx + 7 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx + 23 , xx + 2 ) ) ; xx [ 7 ]
= xx [ 492 ] ; xx [ 8 ] = xx [ 495 ] ; xx [ 9 ] = xx [ 498 ] ; xx [ 22 ] = xx
[ 501 ] ; xx [ 23 ] = xx [ 504 ] ; xx [ 24 ] = xx [ 507 ] ; xx [ 13 ] = xx [
135 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) +
pm_math_Vector3_dot_ra ( xx + 22 , xx + 2 ) ) ; xx [ 7 ] = xx [ 493 ] ; xx [
8 ] = xx [ 496 ] ; xx [ 9 ] = xx [ 499 ] ; xx [ 22 ] = xx [ 502 ] ; xx [ 23 ]
= xx [ 505 ] ; xx [ 24 ] = xx [ 508 ] ; xx [ 14 ] = xx [ 136 ] - (
pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx +
22 , xx + 2 ) ) ; xx [ 7 ] = xx [ 389 ] ; xx [ 8 ] = xx [ 392 ] ; xx [ 9 ] =
xx [ 395 ] ; xx [ 22 ] = xx [ 17 ] + xx [ 233 ] * xx [ 12 ] + xx [ 414 ] * xx
[ 13 ] + xx [ 51 ] ; xx [ 23 ] = xx [ 18 ] + xx [ 234 ] * xx [ 12 ] + xx [
412 ] * xx [ 13 ] + xx [ 49 ] * xx [ 14 ] + xx [ 26 ] ; xx [ 24 ] = xx [ 19 ]
+ xx [ 50 ] * xx [ 12 ] - xx [ 13 ] * xx [ 411 ] + xx [ 48 ] * xx [ 14 ] + xx
[ 37 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 22 , xx + 17 ) ;
xx [ 30 ] = xx [ 398 ] ; xx [ 31 ] = xx [ 401 ] ; xx [ 32 ] = xx [ 404 ] ;
pm_math_Vector3_cross_ra ( xx + 22 , xx + 122 , xx + 33 ) ; xx [ 22 ] = xx [
2 ] + xx [ 351 ] * xx [ 12 ] + xx [ 432 ] * xx [ 13 ] + xx [ 444 ] * xx [ 14
] + xx [ 29 ] + xx [ 33 ] ; xx [ 23 ] = xx [ 3 ] + xx [ 352 ] * xx [ 12 ] +
xx [ 433 ] * xx [ 13 ] + xx [ 445 ] * xx [ 14 ] + xx [ 36 ] + xx [ 34 ] ; xx
[ 24 ] = xx [ 4 ] + xx [ 353 ] * xx [ 12 ] + xx [ 434 ] * xx [ 13 ] - xx [
446 ] * xx [ 14 ] + xx [ 54 ] + xx [ 35 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 22 , xx + 2 ) ; xx [ 20 ]
= xx [ 108 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) +
pm_math_Vector3_dot_ra ( xx + 30 , xx + 2 ) ) ; xx [ 7 ] = xx [ 390 ] ; xx [
8 ] = xx [ 393 ] ; xx [ 9 ] = xx [ 396 ] ; xx [ 22 ] = xx [ 399 ] ; xx [ 23 ]
= xx [ 402 ] ; xx [ 24 ] = xx [ 405 ] ; xx [ 25 ] = xx [ 109 ] - (
pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx +
22 , xx + 2 ) ) ; xx [ 7 ] = xx [ 391 ] ; xx [ 8 ] = xx [ 394 ] ; xx [ 9 ] =
xx [ 397 ] ; xx [ 22 ] = xx [ 400 ] ; xx [ 23 ] = xx [ 403 ] ; xx [ 24 ] = xx
[ 406 ] ; xx [ 26 ] = xx [ 110 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx +
17 ) + pm_math_Vector3_dot_ra ( xx + 22 , xx + 2 ) ) ; xx [ 7 ] = xx [ 293 ]
; xx [ 8 ] = xx [ 296 ] ; xx [ 9 ] = xx [ 299 ] ; xx [ 22 ] = xx [ 17 ] + xx
[ 199 ] * xx [ 20 ] + xx [ 332 ] * xx [ 25 ] + xx [ 70 ] * xx [ 26 ] + xx [
78 ] ; xx [ 23 ] = xx [ 18 ] + xx [ 197 ] * xx [ 20 ] + xx [ 333 ] * xx [ 25
] + xx [ 60 ] * xx [ 26 ] + xx [ 83 ] ; xx [ 24 ] = xx [ 19 ] + xx [ 59 ] *
xx [ 20 ] + xx [ 334 ] * xx [ 25 ] + xx [ 58 ] * xx [ 26 ] + xx [ 75 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 22 , xx + 17 ) ; xx [ 28
] = xx [ 302 ] ; xx [ 29 ] = xx [ 305 ] ; xx [ 30 ] = xx [ 308 ] ;
pm_math_Vector3_cross_ra ( xx + 22 , xx + 141 , xx + 31 ) ; xx [ 22 ] = xx [
2 ] + xx [ 252 ] * xx [ 20 ] + xx [ 335 ] * xx [ 25 ] + xx [ 318 ] * xx [ 26
] + xx [ 71 ] + xx [ 31 ] ; xx [ 23 ] = xx [ 3 ] + xx [ 253 ] * xx [ 20 ] +
xx [ 336 ] * xx [ 25 ] - xx [ 319 ] * xx [ 26 ] + xx [ 74 ] + xx [ 32 ] ; xx
[ 24 ] = xx [ 4 ] + xx [ 254 ] * xx [ 20 ] + xx [ 337 ] * xx [ 25 ] - xx [
347 ] * xx [ 26 ] + xx [ 76 ] + xx [ 33 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 22 , xx + 2 ) ; xx [ 22
] = xx [ 152 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) +
pm_math_Vector3_dot_ra ( xx + 28 , xx + 2 ) ) ; xx [ 7 ] = xx [ 294 ] ; xx [
8 ] = xx [ 297 ] ; xx [ 9 ] = xx [ 300 ] ; xx [ 28 ] = xx [ 303 ] ; xx [ 29 ]
= xx [ 306 ] ; xx [ 30 ] = xx [ 309 ] ; xx [ 23 ] = xx [ 153 ] - (
pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx +
28 , xx + 2 ) ) ; xx [ 7 ] = xx [ 295 ] ; xx [ 8 ] = xx [ 298 ] ; xx [ 9 ] =
xx [ 301 ] ; xx [ 28 ] = xx [ 304 ] ; xx [ 29 ] = xx [ 307 ] ; xx [ 30 ] = xx
[ 310 ] ; xx [ 24 ] = xx [ 154 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx +
17 ) + pm_math_Vector3_dot_ra ( xx + 28 , xx + 2 ) ) ; xx [ 2 ] = xx [ 17 ] +
xx [ 193 ] * xx [ 22 ] + xx [ 240 ] * xx [ 23 ] + xx [ 98 ] * xx [ 24 ] + xx
[ 112 ] ; xx [ 3 ] = xx [ 0 ] - ( xx [ 1492 ] * xx [ 1492 ] + xx [ 1493 ] *
xx [ 1493 ] ) * xx [ 11 ] ; xx [ 4 ] = xx [ 11 ] * ( xx [ 1491 ] * xx [ 1492
] - xx [ 1490 ] * xx [ 1493 ] ) ; xx [ 7 ] = ( xx [ 1490 ] * xx [ 1492 ] + xx
[ 1491 ] * xx [ 1493 ] ) * xx [ 11 ] ; xx [ 28 ] = xx [ 3 ] ; xx [ 29 ] = xx
[ 4 ] ; xx [ 30 ] = xx [ 7 ] ; xx [ 8 ] = pm_math_Vector3_dot_ra ( xx + 916 ,
xx + 28 ) ; xx [ 9 ] = 0.01085440859974902 ; xx [ 17 ] = 0.07228022064246183
; xx [ 31 ] = 0.997325298745513 ; xx [ 32 ] = xx [ 9 ] ; xx [ 33 ] = - xx [
17 ] ; xx [ 34 ] = xx [ 31 ] ; xx [ 35 ] = pm_math_Vector3_dot_ra ( xx + 28 ,
xx + 32 ) ; xx [ 36 ] = xx [ 0 ] - xx [ 35 ] * xx [ 35 ] ; xx [ 37 ] = xx [
36 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 916 , xx + 32 ) - xx [ 8
] * xx [ 35 ] ) / xx [ 36 ] ; xx [ 38 ] = xx [ 8 ] - xx [ 35 ] * xx [ 37 ] ;
xx [ 39 ] = xx [ 38 ] * xx [ 3 ] ; xx [ 40 ] = xx [ 4 ] * xx [ 38 ] ; xx [ 41
] = xx [ 7 ] * xx [ 38 ] ; pm_math_Vector3_cross_ra ( xx + 916 , xx + 39 , xx
+ 42 ) ; xx [ 38 ] = xx [ 9 ] * xx [ 37 ] ; xx [ 39 ] = - ( xx [ 17 ] * xx [
37 ] ) ; xx [ 40 ] = xx [ 31 ] * xx [ 37 ] ; xx [ 45 ] = - xx [ 1490 ] ; xx [
46 ] = - xx [ 1491 ] ; xx [ 47 ] = - xx [ 1492 ] ; xx [ 48 ] = - xx [ 1493 ]
; xx [ 49 ] = 0.9993181225840584 ; xx [ 50 ] = 0.03619150900402053 ; xx [ 51
] = 5.246456256884902e-3 ; xx [ 52 ] = 5.093058789132701e-3 ;
pm_math_Quaternion_compose_ra ( xx + 45 , xx + 49 , xx + 54 ) ; xx [ 37 ] = (
xx [ 55 ] * xx [ 57 ] + xx [ 54 ] * xx [ 56 ] ) * xx [ 11 ] ; xx [ 41 ] =
0.99999999999999 ; bb [ 0 ] = fabs ( xx [ 37 ] ) > xx [ 41 ] ; if ( xx [ 37 ]
< 0.0 ) xx [ 49 ] = - 1.0 ; else if ( xx [ 37 ] > 0.0 ) xx [ 49 ] = + 1.0 ;
else xx [ 49 ] = 0.0 ; xx [ 37 ] = xx [ 56 ] * xx [ 57 ] ; xx [ 50 ] = xx [
54 ] * xx [ 55 ] ; xx [ 51 ] = xx [ 54 ] * xx [ 54 ] ; xx [ 52 ] = ( xx [ 51
] + xx [ 56 ] * xx [ 56 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 58 ] = ( xx [ 37 ]
+ xx [ 50 ] ) * xx [ 11 ] ; xx [ 52 ] = ( xx [ 58 ] == 0.0 && xx [ 52 ] ==
0.0 ) ? 0.0 : atan2 ( xx [ 58 ] , xx [ 52 ] ) ; xx [ 58 ] = ( xx [ 51 ] + xx
[ 57 ] * xx [ 57 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 59 ] = - ( xx [ 11 ] * (
xx [ 37 ] - xx [ 50 ] ) ) ; xx [ 58 ] = ( xx [ 59 ] == 0.0 && xx [ 58 ] ==
0.0 ) ? 0.0 : atan2 ( xx [ 59 ] , xx [ 58 ] ) ; xx [ 37 ] = ( xx [ 51 ] + xx
[ 55 ] * xx [ 55 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 50 ] = - ( xx [ 11 ] * (
xx [ 55 ] * xx [ 56 ] - xx [ 54 ] * xx [ 57 ] ) ) ; xx [ 37 ] = ( xx [ 50 ]
== 0.0 && xx [ 37 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 50 ] , xx [ 37 ] ) ; xx [
50 ] = bb [ 0 ] ? xx [ 49 ] * ( bb [ 0 ] ? xx [ 1 ] * xx [ 52 ] : xx [ 58 ] )
: xx [ 37 ] ; xx [ 37 ] = 1.570796326794897 ; xx [ 49 ] = xx [ 1 ] * ( xx [
50 ] - xx [ 37 ] * ( xx [ 50 ] < 0.0 ? - 1.0 : + 1.0 ) * ( xx [ 0 ] - ( ( cos
( state [ 31 ] ) ) < 0.0 ? - 1.0 : + 1.0 ) ) ) ; xx [ 50 ] = sin ( xx [ 49 ]
) ; xx [ 54 ] = cos ( xx [ 49 ] ) ; xx [ 55 ] = xx [ 9 ] * xx [ 50 ] ; xx [
56 ] = - ( xx [ 17 ] * xx [ 50 ] ) ; xx [ 57 ] = xx [ 31 ] * xx [ 50 ] ; xx [
49 ] = - 9.799417557012156e-3 ; xx [ 50 ] = 0.9973284708563647 ; xx [ 51 ] =
0.07238710268306554 ; pm_math_Quaternion_inverseXform_ra ( xx + 54 , xx + 49
, xx + 58 ) ; xx [ 9 ] = pm_math_Vector3_dot_ra ( xx + 916 , xx + 58 ) ; xx [
49 ] = xx [ 9 ] * xx [ 58 ] ; xx [ 50 ] = xx [ 9 ] * xx [ 59 ] ; xx [ 51 ] =
xx [ 9 ] * xx [ 60 ] ; pm_math_Vector3_cross_ra ( xx + 38 , xx + 49 , xx + 54
) ; xx [ 9 ] = xx [ 18 ] + xx [ 172 ] * xx [ 22 ] + xx [ 241 ] * xx [ 23 ] -
xx [ 100 ] * xx [ 24 ] + xx [ 128 ] ; xx [ 17 ] = xx [ 19 ] + xx [ 80 ] * xx
[ 22 ] + xx [ 242 ] * xx [ 23 ] + xx [ 102 ] * xx [ 24 ] + xx [ 105 ] ; xx [
38 ] = xx [ 2 ] + xx [ 42 ] + xx [ 54 ] ; xx [ 39 ] = xx [ 9 ] + xx [ 43 ] +
xx [ 55 ] ; xx [ 40 ] = xx [ 17 ] + xx [ 44 ] + xx [ 56 ] ; xx [ 18 ] =
pm_math_Vector3_dot_ra ( xx + 38 , xx + 28 ) ; xx [ 19 ] = xx [ 36 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 38 , xx + 32 ) - xx [ 18 ] * xx [ 35 ]
) / xx [ 36 ] ; xx [ 31 ] = 8.043376237938261e-3 ; xx [ 32 ] =
0.1806770170184598 ; xx [ 33 ] = 0.9835095930493033 ; xx [ 34 ] =
pm_math_Vector3_dot_ra ( xx + 28 , xx + 31 ) ; xx [ 36 ] = xx [ 0 ] - xx [ 34
] * xx [ 34 ] ; xx [ 42 ] = xx [ 36 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra
( xx + 916 , xx + 31 ) - xx [ 8 ] * xx [ 34 ] ) / xx [ 36 ] ; xx [ 43 ] = xx
[ 8 ] - xx [ 34 ] * xx [ 42 ] ; xx [ 49 ] = xx [ 43 ] * xx [ 3 ] ; xx [ 50 ]
= xx [ 4 ] * xx [ 43 ] ; xx [ 51 ] = xx [ 7 ] * xx [ 43 ] ;
pm_math_Vector3_cross_ra ( xx + 916 , xx + 49 , xx + 54 ) ; xx [ 49 ] = xx [
31 ] * xx [ 42 ] ; xx [ 50 ] = xx [ 32 ] * xx [ 42 ] ; xx [ 51 ] = xx [ 33 ]
* xx [ 42 ] ; xx [ 61 ] = xx [ 111 ] ; xx [ 62 ] = - xx [ 117 ] ; xx [ 63 ] =
xx [ 129 ] ; xx [ 64 ] = xx [ 170 ] ; pm_math_Quaternion_compose_ra ( xx + 45
, xx + 61 , xx + 65 ) ; xx [ 3 ] = ( xx [ 66 ] * xx [ 68 ] + xx [ 65 ] * xx [
67 ] ) * xx [ 11 ] ; bb [ 1 ] = fabs ( xx [ 3 ] ) > xx [ 41 ] ; if ( xx [ 3 ]
< 0.0 ) xx [ 4 ] = - 1.0 ; else if ( xx [ 3 ] > 0.0 ) xx [ 4 ] = + 1.0 ; else
xx [ 4 ] = 0.0 ; xx [ 3 ] = xx [ 67 ] * xx [ 68 ] ; xx [ 7 ] = xx [ 65 ] * xx
[ 66 ] ; xx [ 8 ] = xx [ 65 ] * xx [ 65 ] ; xx [ 41 ] = ( xx [ 8 ] + xx [ 67
] * xx [ 67 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 42 ] = ( xx [ 3 ] + xx [ 7 ] )
* xx [ 11 ] ; xx [ 41 ] = ( xx [ 42 ] == 0.0 && xx [ 41 ] == 0.0 ) ? 0.0 :
atan2 ( xx [ 42 ] , xx [ 41 ] ) ; xx [ 42 ] = ( xx [ 8 ] + xx [ 68 ] * xx [
68 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 43 ] = - ( xx [ 11 ] * ( xx [ 3 ] - xx [
7 ] ) ) ; xx [ 42 ] = ( xx [ 43 ] == 0.0 && xx [ 42 ] == 0.0 ) ? 0.0 : atan2
( xx [ 43 ] , xx [ 42 ] ) ; xx [ 3 ] = ( xx [ 8 ] + xx [ 66 ] * xx [ 66 ] ) *
xx [ 11 ] - xx [ 0 ] ; xx [ 7 ] = - ( xx [ 11 ] * ( xx [ 66 ] * xx [ 67 ] -
xx [ 65 ] * xx [ 68 ] ) ) ; xx [ 3 ] = ( xx [ 7 ] == 0.0 && xx [ 3 ] == 0.0 )
? 0.0 : atan2 ( xx [ 7 ] , xx [ 3 ] ) ; xx [ 7 ] = bb [ 1 ] ? xx [ 4 ] * ( bb
[ 1 ] ? xx [ 1 ] * xx [ 41 ] : xx [ 42 ] ) : xx [ 3 ] ; xx [ 3 ] = xx [ 1 ] *
( xx [ 7 ] - xx [ 37 ] * ( xx [ 7 ] < 0.0 ? - 1.0 : + 1.0 ) * ( xx [ 0 ] - (
( cos ( state [ 37 ] ) ) < 0.0 ? - 1.0 : + 1.0 ) ) ) ; xx [ 0 ] = sin ( xx [
3 ] ) ; xx [ 41 ] = cos ( xx [ 3 ] ) ; xx [ 42 ] = xx [ 31 ] * xx [ 0 ] ; xx
[ 43 ] = xx [ 32 ] * xx [ 0 ] ; xx [ 44 ] = xx [ 33 ] * xx [ 0 ] ; xx [ 45 ]
= - 0.0122127338954861 ; xx [ 46 ] = 0.9834858029469102 ; xx [ 47 ] = -
0.180572767970891 ; pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 45 ,
xx + 61 ) ; xx [ 0 ] = pm_math_Vector3_dot_ra ( xx + 916 , xx + 61 ) ; xx [
41 ] = xx [ 0 ] * xx [ 61 ] ; xx [ 42 ] = xx [ 0 ] * xx [ 62 ] ; xx [ 43 ] =
xx [ 0 ] * xx [ 63 ] ; pm_math_Vector3_cross_ra ( xx + 49 , xx + 41 , xx + 44
) ; xx [ 41 ] = xx [ 2 ] + xx [ 54 ] + xx [ 44 ] ; xx [ 42 ] = xx [ 9 ] + xx
[ 55 ] + xx [ 45 ] ; xx [ 43 ] = xx [ 17 ] + xx [ 56 ] + xx [ 46 ] ; xx [ 0 ]
= pm_math_Vector3_dot_ra ( xx + 41 , xx + 28 ) ; xx [ 1 ] = xx [ 36 ] == 0.0
? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 41 , xx + 31 ) - xx [ 0 ] * xx [ 34 ]
) / xx [ 36 ] ; deriv [ 0 ] = state [ 3 ] ; deriv [ 1 ] = state [ 4 ] ; deriv
[ 2 ] = state [ 5 ] ; deriv [ 3 ] = xx [ 6 ] ; deriv [ 4 ] = xx [ 10 ] ;
deriv [ 5 ] = xx [ 21 ] ; deriv [ 6 ] = state [ 9 ] ; deriv [ 7 ] = state [
10 ] ; deriv [ 8 ] = state [ 11 ] ; deriv [ 9 ] = xx [ 5 ] ; deriv [ 10 ] =
xx [ 15 ] ; deriv [ 11 ] = xx [ 16 ] ; deriv [ 12 ] = state [ 15 ] ; deriv [
13 ] = state [ 16 ] ; deriv [ 14 ] = state [ 17 ] ; deriv [ 15 ] = xx [ 12 ]
; deriv [ 16 ] = xx [ 13 ] ; deriv [ 17 ] = xx [ 14 ] ; deriv [ 18 ] = state
[ 21 ] ; deriv [ 19 ] = state [ 22 ] ; deriv [ 20 ] = state [ 23 ] ; deriv [
21 ] = xx [ 20 ] ; deriv [ 22 ] = xx [ 25 ] ; deriv [ 23 ] = xx [ 26 ] ;
deriv [ 24 ] = state [ 27 ] ; deriv [ 25 ] = state [ 28 ] ; deriv [ 26 ] =
state [ 29 ] ; deriv [ 27 ] = xx [ 22 ] ; deriv [ 28 ] = xx [ 23 ] ; deriv [
29 ] = xx [ 24 ] ; deriv [ 30 ] = state [ 33 ] ; deriv [ 31 ] = state [ 34 ]
; deriv [ 32 ] = state [ 35 ] ; deriv [ 33 ] = xx [ 18 ] - xx [ 35 ] * xx [
19 ] ; deriv [ 34 ] = pm_math_Vector3_dot_ra ( xx + 38 , xx + 58 ) ; deriv [
35 ] = xx [ 19 ] ; deriv [ 36 ] = state [ 39 ] ; deriv [ 37 ] = state [ 40 ]
; deriv [ 38 ] = state [ 41 ] ; deriv [ 39 ] = xx [ 0 ] - xx [ 34 ] * xx [ 1
] ; deriv [ 40 ] = pm_math_Vector3_dot_ra ( xx + 41 , xx + 61 ) ; deriv [ 41
] = xx [ 1 ] ; ii [ 0 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L1-S1 Bushing Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } ii [ 1 ] = bb [ 1 ] ? 1 : 0 ; if ( bb [ 1 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/T1-S1 Bushing Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } errorResult [ 0 ] = xx [ 850 ] + xx [ 782 ] + xx [ 716 ] +
xx [ 625 ] + xx [ 655 ] + xx [ 795 ] + xx [ 732 ] + xx [ 616 ] + xx [ 656 ] +
xx [ 670 ] + xx [ 808 ] + xx [ 743 ] + xx [ 664 ] + xx [ 659 ] + xx [ 668 ] +
xx [ 1448 ] + xx [ 651 ] + xx [ 1460 ] + xx [ 654 ] + xx [ 1507 ] + xx [ 891
] + xx [ 1442 ] + xx [ 648 ] + xx [ 130 ] + xx [ 118 ] + xx [ 53 ] + xx [ 27
] + xx [ 702 ] + ( double ) ( ii [ 0 ] + ii [ 1 ] ) ; return NULL ; }
PmfMessageId draft7_a151ee3d_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 1 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0e-8 ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [
0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx [ 0 ] ; bounds [ 4 ] = xx [
0 ] ; bounds [ 5 ] = xx [ 0 ] ; bounds [ 6 ] = xx [ 0 ] ; bounds [ 7 ] = xx [
0 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx [ 0 ] ; bounds [ 10 ] = xx
[ 0 ] ; bounds [ 11 ] = xx [ 0 ] ; bounds [ 12 ] = xx [ 0 ] ; bounds [ 13 ] =
xx [ 0 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15 ] = xx [ 0 ] ; bounds [ 16
] = xx [ 0 ] ; bounds [ 17 ] = xx [ 0 ] ; bounds [ 18 ] = xx [ 0 ] ; bounds [
19 ] = xx [ 0 ] ; bounds [ 20 ] = xx [ 0 ] ; bounds [ 21 ] = xx [ 0 ] ;
bounds [ 22 ] = xx [ 0 ] ; bounds [ 23 ] = xx [ 0 ] ; bounds [ 24 ] = xx [ 0
] ; bounds [ 25 ] = xx [ 0 ] ; bounds [ 26 ] = xx [ 0 ] ; bounds [ 27 ] = xx
[ 0 ] ; bounds [ 28 ] = xx [ 0 ] ; bounds [ 29 ] = xx [ 0 ] ; bounds [ 30 ] =
xx [ 0 ] ; bounds [ 31 ] = xx [ 0 ] ; bounds [ 32 ] = xx [ 0 ] ; bounds [ 33
] = xx [ 0 ] ; bounds [ 34 ] = xx [ 0 ] ; bounds [ 35 ] = xx [ 0 ] ; bounds [
36 ] = xx [ 0 ] ; bounds [ 37 ] = xx [ 0 ] ; bounds [ 38 ] = xx [ 0 ] ;
bounds [ 39 ] = xx [ 0 ] ; bounds [ 40 ] = xx [ 0 ] ; bounds [ 41 ] = xx [ 0
] ; errorResult [ 0 ] = 0.0 ; return NULL ; } PmfMessageId
draft7_a151ee3d_1_numJacPerturbHiBounds ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * bounds , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 2 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ;
( void ) state ; ( void ) modeVector ; ( void ) input ; ( void ) inputDot ; (
void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
1.0 ; xx [ 1 ] = + pmf_get_inf ( ) ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] =
xx [ 0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx [ 1 ] ; bounds [ 4 ] =
xx [ 1 ] ; bounds [ 5 ] = xx [ 1 ] ; bounds [ 6 ] = xx [ 0 ] ; bounds [ 7 ] =
xx [ 0 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx [ 1 ] ; bounds [ 10 ]
= xx [ 1 ] ; bounds [ 11 ] = xx [ 1 ] ; bounds [ 12 ] = xx [ 0 ] ; bounds [
13 ] = xx [ 0 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15 ] = xx [ 1 ] ;
bounds [ 16 ] = xx [ 1 ] ; bounds [ 17 ] = xx [ 1 ] ; bounds [ 18 ] = xx [ 0
] ; bounds [ 19 ] = xx [ 0 ] ; bounds [ 20 ] = xx [ 0 ] ; bounds [ 21 ] = xx
[ 1 ] ; bounds [ 22 ] = xx [ 1 ] ; bounds [ 23 ] = xx [ 1 ] ; bounds [ 24 ] =
xx [ 0 ] ; bounds [ 25 ] = xx [ 0 ] ; bounds [ 26 ] = xx [ 0 ] ; bounds [ 27
] = xx [ 1 ] ; bounds [ 28 ] = xx [ 1 ] ; bounds [ 29 ] = xx [ 1 ] ; bounds [
30 ] = xx [ 0 ] ; bounds [ 31 ] = xx [ 0 ] ; bounds [ 32 ] = xx [ 0 ] ;
bounds [ 33 ] = xx [ 1 ] ; bounds [ 34 ] = xx [ 1 ] ; bounds [ 35 ] = xx [ 1
] ; bounds [ 36 ] = xx [ 0 ] ; bounds [ 37 ] = xx [ 0 ] ; bounds [ 38 ] = xx
[ 0 ] ; bounds [ 39 ] = xx [ 1 ] ; bounds [ 40 ] = xx [ 1 ] ; bounds [ 41 ] =
xx [ 1 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; }
