#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "draft7_a151ee3d_1_geometries.h"
PmfMessageId draft7_a151ee3d_1_recordLog ( const RuntimeDerivedValuesBundle *
rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , double * logVector , double * errorResult , NeuDiagnosticManager
* neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; boolean_T bb [ 1 ] ; int ii [ 2 ] ;
double xx [ 1568 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) modeVector ; ( void ) inputDot ; ( void ) neDiagMgr
; xx [ 0 ] = 57.29577951308232 ; xx [ 1 ] = 1.0 ; xx [ 2 ] = 0.5 ; xx [ 3 ] =
xx [ 2 ] * state [ 2 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 5 ] =
0.1535761481414752 ; xx [ 6 ] = xx [ 2 ] * state [ 0 ] ; xx [ 7 ] = cos ( xx
[ 6 ] ) ; xx [ 8 ] = 0.9881368157912284 ; xx [ 9 ] = sin ( xx [ 6 ] ) ; xx [
6 ] = xx [ 5 ] * xx [ 7 ] - xx [ 8 ] * xx [ 9 ] ; xx [ 10 ] =
0.258564134865625 ; xx [ 11 ] = xx [ 2 ] * state [ 1 ] ; xx [ 12 ] = sin ( xx
[ 11 ] ) ; xx [ 13 ] = xx [ 10 ] * xx [ 12 ] ; xx [ 14 ] = 0.9659940932330751
; xx [ 15 ] = xx [ 14 ] * xx [ 12 ] ; xx [ 12 ] = xx [ 8 ] * xx [ 7 ] + xx [
5 ] * xx [ 9 ] ; xx [ 5 ] = xx [ 6 ] * xx [ 13 ] - xx [ 15 ] * xx [ 12 ] ; xx
[ 7 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 10 ] * xx [ 7 ] ; xx [ 8 ] = cos (
xx [ 11 ] ) ; xx [ 9 ] = xx [ 8 ] * xx [ 12 ] ; xx [ 11 ] = xx [ 6 ] * xx [ 8
] ; xx [ 8 ] = xx [ 14 ] * xx [ 7 ] ; xx [ 7 ] = xx [ 4 ] * xx [ 5 ] - xx [ 3
] * xx [ 9 ] - xx [ 11 ] * xx [ 8 ] ; xx [ 16 ] = xx [ 13 ] * xx [ 12 ] + xx
[ 6 ] * xx [ 15 ] ; xx [ 6 ] = xx [ 16 ] * xx [ 4 ] - xx [ 8 ] * xx [ 9 ] +
xx [ 11 ] * xx [ 3 ] ; xx [ 12 ] = 2.0 ; xx [ 13 ] = xx [ 1 ] - ( xx [ 7 ] *
xx [ 7 ] + xx [ 6 ] * xx [ 6 ] ) * xx [ 12 ] ; xx [ 15 ] = xx [ 4 ] * xx [ 11
] + xx [ 8 ] * xx [ 5 ] - xx [ 16 ] * xx [ 3 ] ; xx [ 11 ] = xx [ 4 ] * xx [
9 ] + xx [ 3 ] * xx [ 5 ] + xx [ 16 ] * xx [ 8 ] ; xx [ 5 ] = xx [ 12 ] * (
xx [ 15 ] * xx [ 7 ] + xx [ 6 ] * xx [ 11 ] ) ; xx [ 9 ] = ( xx [ 6 ] * xx [
15 ] - xx [ 7 ] * xx [ 11 ] ) * xx [ 12 ] ; xx [ 16 ] = xx [ 13 ] ; xx [ 17 ]
= xx [ 5 ] ; xx [ 18 ] = xx [ 9 ] ; xx [ 19 ] = 2.799562800393933e-6 ; xx [
20 ] = xx [ 2 ] * state [ 8 ] ; xx [ 21 ] = cos ( xx [ 20 ] ) ; xx [ 22 ] =
0.08149234695961537 ; xx [ 23 ] = xx [ 2 ] * state [ 6 ] ; xx [ 24 ] = sin (
xx [ 23 ] ) ; xx [ 25 ] = 0.9966739674472358 ; xx [ 26 ] = cos ( xx [ 23 ] )
; xx [ 23 ] = 3.301712910522993e-12 ; xx [ 27 ] = xx [ 22 ] * xx [ 24 ] - xx
[ 25 ] * xx [ 26 ] ; xx [ 28 ] = - ( xx [ 22 ] * xx [ 26 ] + xx [ 25 ] * xx [
24 ] ) ; xx [ 29 ] = xx [ 23 ] * xx [ 24 ] ; xx [ 30 ] = - ( xx [ 23 ] * xx [
26 ] ) ; xx [ 22 ] = xx [ 2 ] * state [ 7 ] ; xx [ 23 ] =
6.558709267800361e-12 ; xx [ 24 ] = sin ( xx [ 22 ] ) ; xx [ 25 ] =
0.9694837936076719 ; xx [ 26 ] = 0.2451554077153451 ; xx [ 31 ] = cos ( xx [
22 ] ) ; xx [ 32 ] = xx [ 23 ] * xx [ 24 ] ; xx [ 33 ] = xx [ 25 ] * xx [ 24
] ; xx [ 34 ] = - ( xx [ 26 ] * xx [ 24 ] ) ; pm_math_Quaternion_compose_ra (
xx + 27 , xx + 31 , xx + 35 ) ; xx [ 22 ] = sin ( xx [ 20 ] ) ; xx [ 20 ] =
xx [ 26 ] * xx [ 22 ] ; xx [ 24 ] = xx [ 25 ] * xx [ 22 ] ; xx [ 22 ] = xx [
21 ] * xx [ 35 ] - ( xx [ 37 ] * xx [ 20 ] + xx [ 38 ] * xx [ 24 ] ) ; xx [
27 ] = xx [ 22 ] * xx [ 22 ] ; xx [ 28 ] = xx [ 21 ] * xx [ 36 ] + xx [ 37 ]
* xx [ 24 ] - xx [ 38 ] * xx [ 20 ] ; xx [ 29 ] = xx [ 35 ] * xx [ 20 ] + xx
[ 21 ] * xx [ 37 ] - xx [ 36 ] * xx [ 24 ] ; xx [ 30 ] = xx [ 28 ] * xx [ 29
] ; xx [ 31 ] = xx [ 35 ] * xx [ 24 ] + xx [ 21 ] * xx [ 38 ] + xx [ 36 ] *
xx [ 20 ] ; xx [ 32 ] = xx [ 31 ] * xx [ 22 ] ; xx [ 33 ] = xx [ 12 ] * ( xx
[ 30 ] - xx [ 32 ] ) ; xx [ 34 ] = xx [ 31 ] * xx [ 28 ] ; xx [ 35 ] = xx [
29 ] * xx [ 22 ] ; xx [ 36 ] = xx [ 29 ] * xx [ 29 ] ; xx [ 37 ] = xx [ 31 ]
* xx [ 29 ] ; xx [ 38 ] = xx [ 28 ] * xx [ 22 ] ; xx [ 39 ] = xx [ 31 ] * xx
[ 31 ] ; xx [ 40 ] = ( xx [ 27 ] + xx [ 28 ] * xx [ 28 ] ) * xx [ 12 ] - xx [
1 ] ; xx [ 41 ] = xx [ 33 ] ; xx [ 42 ] = ( xx [ 34 ] + xx [ 35 ] ) * xx [ 12
] ; xx [ 43 ] = ( xx [ 30 ] + xx [ 32 ] ) * xx [ 12 ] ; xx [ 44 ] = ( xx [ 27
] + xx [ 36 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 45 ] = xx [ 12 ] * ( xx [ 37 ]
- xx [ 38 ] ) ; xx [ 46 ] = xx [ 12 ] * ( xx [ 34 ] - xx [ 35 ] ) ; xx [ 47 ]
= ( xx [ 37 ] + xx [ 38 ] ) * xx [ 12 ] ; xx [ 48 ] = ( xx [ 27 ] + xx [ 39 ]
) * xx [ 12 ] - xx [ 1 ] ; xx [ 27 ] = xx [ 2 ] * state [ 14 ] ; xx [ 30 ] =
cos ( xx [ 27 ] ) ; xx [ 32 ] = 0.1159778701879254 ; xx [ 37 ] = xx [ 2 ] *
state [ 12 ] ; xx [ 38 ] = sin ( xx [ 37 ] ) ; xx [ 49 ] = 0.9932517976961697
; xx [ 50 ] = cos ( xx [ 37 ] ) ; xx [ 37 ] = 4.654509323289534e-12 ; xx [ 51
] = 6.655858618855781e-12 ; xx [ 52 ] = xx [ 51 ] * xx [ 38 ] ; xx [ 53 ] =
xx [ 32 ] * xx [ 38 ] - xx [ 49 ] * xx [ 50 ] ; xx [ 54 ] = - ( xx [ 32 ] *
xx [ 50 ] + xx [ 49 ] * xx [ 38 ] + xx [ 37 ] * xx [ 52 ] ) ; xx [ 55 ] = xx
[ 49 ] * xx [ 52 ] - xx [ 37 ] * xx [ 38 ] ; xx [ 56 ] = xx [ 37 ] * xx [ 50
] - xx [ 32 ] * xx [ 52 ] ; xx [ 32 ] = xx [ 2 ] * state [ 13 ] ; xx [ 37 ] =
2.702350965790575e-12 ; xx [ 38 ] = sin ( xx [ 32 ] ) ; xx [ 49 ] =
0.9452391332067189 ; xx [ 50 ] = 0.3263785854718576 ; xx [ 57 ] = cos ( xx [
32 ] ) ; xx [ 58 ] = - ( xx [ 37 ] * xx [ 38 ] ) ; xx [ 59 ] = xx [ 49 ] * xx
[ 38 ] ; xx [ 60 ] = - ( xx [ 50 ] * xx [ 38 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 53 , xx + 57 , xx + 61 ) ; xx [ 32 ] =
sin ( xx [ 27 ] ) ; xx [ 27 ] = xx [ 50 ] * xx [ 32 ] ; xx [ 38 ] = xx [ 49 ]
* xx [ 32 ] ; xx [ 32 ] = xx [ 30 ] * xx [ 61 ] - ( xx [ 63 ] * xx [ 27 ] +
xx [ 64 ] * xx [ 38 ] ) ; xx [ 52 ] = xx [ 32 ] * xx [ 32 ] ; xx [ 53 ] = xx
[ 30 ] * xx [ 62 ] + xx [ 63 ] * xx [ 38 ] - xx [ 64 ] * xx [ 27 ] ; xx [ 54
] = xx [ 61 ] * xx [ 27 ] + xx [ 30 ] * xx [ 63 ] - xx [ 62 ] * xx [ 38 ] ;
xx [ 55 ] = xx [ 53 ] * xx [ 54 ] ; xx [ 56 ] = xx [ 61 ] * xx [ 38 ] + xx [
30 ] * xx [ 64 ] + xx [ 62 ] * xx [ 27 ] ; xx [ 57 ] = xx [ 56 ] * xx [ 32 ]
; xx [ 58 ] = xx [ 56 ] * xx [ 53 ] ; xx [ 59 ] = xx [ 54 ] * xx [ 32 ] ; xx
[ 60 ] = xx [ 56 ] * xx [ 54 ] ; xx [ 61 ] = xx [ 53 ] * xx [ 32 ] ; xx [ 62
] = ( xx [ 52 ] + xx [ 53 ] * xx [ 53 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 63 ]
= xx [ 12 ] * ( xx [ 55 ] - xx [ 57 ] ) ; xx [ 64 ] = ( xx [ 58 ] + xx [ 59 ]
) * xx [ 12 ] ; xx [ 65 ] = ( xx [ 55 ] + xx [ 57 ] ) * xx [ 12 ] ; xx [ 66 ]
= ( xx [ 52 ] + xx [ 54 ] * xx [ 54 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 67 ] =
xx [ 12 ] * ( xx [ 60 ] - xx [ 61 ] ) ; xx [ 68 ] = xx [ 12 ] * ( xx [ 58 ] -
xx [ 59 ] ) ; xx [ 69 ] = ( xx [ 60 ] + xx [ 61 ] ) * xx [ 12 ] ; xx [ 70 ] =
( xx [ 52 ] + xx [ 56 ] * xx [ 56 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 52 ] =
0.9961405467325101 ; xx [ 55 ] = xx [ 2 ] * state [ 18 ] ; xx [ 58 ] = cos (
xx [ 55 ] ) ; xx [ 59 ] = 3.201611086326645e-12 ; xx [ 60 ] =
2.826845832587476e-12 ; xx [ 61 ] = sin ( xx [ 55 ] ) ; xx [ 55 ] = xx [ 60 ]
* xx [ 61 ] ; xx [ 71 ] = 0.08777249657755079 ; xx [ 72 ] =
1.028498847019974e-11 ; xx [ 73 ] = - ( xx [ 52 ] * xx [ 58 ] + xx [ 59 ] *
xx [ 55 ] - xx [ 71 ] * xx [ 61 ] ) ; xx [ 74 ] = - ( xx [ 71 ] * xx [ 58 ] +
xx [ 52 ] * xx [ 61 ] + xx [ 72 ] * xx [ 55 ] ) ; xx [ 75 ] = xx [ 59 ] * xx
[ 58 ] - xx [ 52 ] * xx [ 55 ] + xx [ 72 ] * xx [ 61 ] ; xx [ 76 ] = xx [ 59
] * xx [ 61 ] - xx [ 72 ] * xx [ 58 ] + xx [ 71 ] * xx [ 55 ] ; xx [ 52 ] =
xx [ 2 ] * state [ 19 ] ; xx [ 55 ] = 1.596819818085218e-11 ; xx [ 58 ] = sin
( xx [ 52 ] ) ; xx [ 59 ] = 0.9562867924269723 ; xx [ 61 ] =
0.2924304543472392 ; xx [ 77 ] = cos ( xx [ 52 ] ) ; xx [ 78 ] = xx [ 55 ] *
xx [ 58 ] ; xx [ 79 ] = xx [ 59 ] * xx [ 58 ] ; xx [ 80 ] = - ( xx [ 61 ] *
xx [ 58 ] ) ; pm_math_Quaternion_compose_ra ( xx + 73 , xx + 77 , xx + 81 ) ;
xx [ 52 ] = xx [ 2 ] * state [ 20 ] ; xx [ 58 ] = cos ( xx [ 52 ] ) ; xx [ 71
] = 1.035832709073648e-11 ; xx [ 72 ] = sin ( xx [ 52 ] ) ; xx [ 52 ] = xx [
71 ] * xx [ 72 ] ; xx [ 73 ] = xx [ 61 ] * xx [ 72 ] ; xx [ 74 ] = xx [ 59 ]
* xx [ 72 ] ; xx [ 75 ] = xx [ 58 ] ; xx [ 76 ] = xx [ 52 ] ; xx [ 77 ] = xx
[ 73 ] ; xx [ 78 ] = xx [ 74 ] ; pm_math_Quaternion_compose_ra ( xx + 81 , xx
+ 75 , xx + 85 ) ; xx [ 72 ] = xx [ 85 ] * xx [ 85 ] ; xx [ 79 ] = xx [ 86 ]
* xx [ 87 ] ; xx [ 80 ] = xx [ 85 ] * xx [ 88 ] ; xx [ 81 ] = xx [ 86 ] * xx
[ 88 ] ; xx [ 82 ] = xx [ 85 ] * xx [ 87 ] ; xx [ 83 ] = xx [ 87 ] * xx [ 88
] ; xx [ 84 ] = xx [ 85 ] * xx [ 86 ] ; xx [ 89 ] = ( xx [ 72 ] + xx [ 86 ] *
xx [ 86 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 90 ] = xx [ 12 ] * ( xx [ 79 ] - xx
[ 80 ] ) ; xx [ 91 ] = ( xx [ 81 ] + xx [ 82 ] ) * xx [ 12 ] ; xx [ 92 ] = (
xx [ 79 ] + xx [ 80 ] ) * xx [ 12 ] ; xx [ 93 ] = ( xx [ 72 ] + xx [ 87 ] *
xx [ 87 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 94 ] = xx [ 12 ] * ( xx [ 83 ] - xx
[ 84 ] ) ; xx [ 95 ] = xx [ 12 ] * ( xx [ 81 ] - xx [ 82 ] ) ; xx [ 96 ] = (
xx [ 83 ] + xx [ 84 ] ) * xx [ 12 ] ; xx [ 97 ] = ( xx [ 72 ] + xx [ 88 ] *
xx [ 88 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 72 ] = xx [ 2 ] * state [ 24 ] ; xx
[ 79 ] = sin ( xx [ 72 ] ) ; xx [ 81 ] = 1.82992095932877e-11 ; xx [ 82 ] =
5.235917730680519e-12 ; xx [ 98 ] = cos ( xx [ 72 ] ) ; xx [ 99 ] = xx [ 79 ]
; xx [ 100 ] = - ( xx [ 81 ] * xx [ 79 ] ) ; xx [ 101 ] = - ( xx [ 82 ] * xx
[ 79 ] ) ; xx [ 102 ] = 0.9991449255755711 ; xx [ 103 ] = -
0.04069340420070983 ; xx [ 104 ] = - 5.269348941183292e-3 ; xx [ 105 ] = -
5.069370067487187e-3 ; pm_math_Quaternion_compose_ra ( xx + 98 , xx + 102 ,
xx + 106 ) ; xx [ 72 ] = xx [ 2 ] * state [ 25 ] ; xx [ 79 ] =
0.01017403174547095 ; xx [ 83 ] = sin ( xx [ 72 ] ) ; xx [ 84 ] =
0.9992497622599684 ; xx [ 98 ] = 0.03736845864413881 ; xx [ 99 ] = cos ( xx [
72 ] ) ; xx [ 100 ] = - ( xx [ 79 ] * xx [ 83 ] ) ; xx [ 101 ] = xx [ 84 ] *
xx [ 83 ] ; xx [ 102 ] = xx [ 98 ] * xx [ 83 ] ;
pm_math_Quaternion_compose_ra ( xx + 106 , xx + 99 , xx + 110 ) ; xx [ 72 ] =
xx [ 2 ] * state [ 26 ] ; xx [ 83 ] = cos ( xx [ 72 ] ) ; xx [ 99 ] =
0.01050408723065136 ; xx [ 100 ] = sin ( xx [ 72 ] ) ; xx [ 72 ] = xx [ 99 ]
* xx [ 100 ] ; xx [ 101 ] = 0.03726153110399754 ; xx [ 102 ] = xx [ 101 ] *
xx [ 100 ] ; xx [ 103 ] = 0.9992503402307336 ; xx [ 104 ] = xx [ 103 ] * xx [
100 ] ; xx [ 105 ] = xx [ 83 ] ; xx [ 106 ] = xx [ 72 ] ; xx [ 107 ] = - xx [
102 ] ; xx [ 108 ] = xx [ 104 ] ; pm_math_Quaternion_compose_ra ( xx + 110 ,
xx + 105 , xx + 114 ) ; xx [ 100 ] = xx [ 114 ] * xx [ 114 ] ; xx [ 109 ] =
xx [ 115 ] * xx [ 116 ] ; xx [ 110 ] = xx [ 114 ] * xx [ 117 ] ; xx [ 111 ] =
xx [ 115 ] * xx [ 117 ] ; xx [ 112 ] = xx [ 114 ] * xx [ 116 ] ; xx [ 113 ] =
xx [ 116 ] * xx [ 117 ] ; xx [ 118 ] = xx [ 114 ] * xx [ 115 ] ; xx [ 119 ] =
( xx [ 100 ] + xx [ 115 ] * xx [ 115 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 120 ]
= xx [ 12 ] * ( xx [ 109 ] - xx [ 110 ] ) ; xx [ 121 ] = ( xx [ 111 ] + xx [
112 ] ) * xx [ 12 ] ; xx [ 122 ] = ( xx [ 109 ] + xx [ 110 ] ) * xx [ 12 ] ;
xx [ 123 ] = ( xx [ 100 ] + xx [ 116 ] * xx [ 116 ] ) * xx [ 12 ] - xx [ 1 ]
; xx [ 124 ] = xx [ 12 ] * ( xx [ 113 ] - xx [ 118 ] ) ; xx [ 125 ] = xx [ 12
] * ( xx [ 111 ] - xx [ 112 ] ) ; xx [ 126 ] = ( xx [ 113 ] + xx [ 118 ] ) *
xx [ 12 ] ; xx [ 127 ] = ( xx [ 100 ] + xx [ 117 ] * xx [ 117 ] ) * xx [ 12 ]
- xx [ 1 ] ; xx [ 100 ] = xx [ 2 ] * state [ 32 ] ; xx [ 109 ] = cos ( xx [
100 ] ) ; xx [ 110 ] = xx [ 2 ] * state [ 31 ] ; xx [ 111 ] = cos ( xx [ 110
] ) ; xx [ 112 ] = xx [ 2 ] * state [ 30 ] ; xx [ 113 ] = 0.9998930708978301
; xx [ 118 ] = sin ( xx [ 112 ] ) ; xx [ 128 ] = 0.01055892623245314 ; xx [
129 ] = 0.01011710666764959 ; xx [ 130 ] = cos ( xx [ 112 ] ) ; xx [ 131 ] =
xx [ 113 ] * xx [ 118 ] ; xx [ 132 ] = xx [ 128 ] * xx [ 118 ] ; xx [ 133 ] =
- ( xx [ 129 ] * xx [ 118 ] ) ; xx [ 112 ] = 0.9958524573065585 ; xx [ 118 ]
= 0.09068858100887965 ; xx [ 134 ] = - xx [ 112 ] ; xx [ 135 ] = xx [ 118 ] ;
xx [ 136 ] = - 4.559029495871781e-3 ; xx [ 137 ] = - 5.716624978144057e-3 ;
pm_math_Quaternion_compose_ra ( xx + 130 , xx + 134 , xx + 138 ) ; xx [ 130 ]
= sin ( xx [ 110 ] ) ; xx [ 110 ] = xx [ 111 ] * xx [ 138 ] - xx [ 140 ] * xx
[ 130 ] ; xx [ 131 ] = xx [ 111 ] * xx [ 141 ] + xx [ 139 ] * xx [ 130 ] ; xx
[ 132 ] = sin ( xx [ 100 ] ) ; xx [ 100 ] = xx [ 109 ] * xx [ 110 ] - xx [
131 ] * xx [ 132 ] ; xx [ 133 ] = xx [ 100 ] * xx [ 100 ] ; xx [ 134 ] = xx [
111 ] * xx [ 139 ] - xx [ 141 ] * xx [ 130 ] ; xx [ 135 ] = xx [ 138 ] * xx [
130 ] + xx [ 111 ] * xx [ 140 ] ; xx [ 111 ] = xx [ 109 ] * xx [ 134 ] + xx [
135 ] * xx [ 132 ] ; xx [ 130 ] = ( xx [ 133 ] + xx [ 111 ] * xx [ 111 ] ) *
xx [ 12 ] - xx [ 1 ] ; xx [ 136 ] = xx [ 135 ] * xx [ 109 ] - xx [ 132 ] * xx
[ 134 ] ; xx [ 134 ] = xx [ 111 ] * xx [ 136 ] ; xx [ 135 ] = xx [ 132 ] * xx
[ 110 ] + xx [ 131 ] * xx [ 109 ] ; xx [ 110 ] = xx [ 135 ] * xx [ 100 ] ; xx
[ 131 ] = xx [ 12 ] * ( xx [ 134 ] - xx [ 110 ] ) ; xx [ 137 ] = xx [ 111 ] *
xx [ 135 ] ; xx [ 138 ] = xx [ 136 ] * xx [ 100 ] ; xx [ 139 ] = ( xx [ 137 ]
+ xx [ 138 ] ) * xx [ 12 ] ; xx [ 140 ] = ( xx [ 134 ] + xx [ 110 ] ) * xx [
12 ] ; xx [ 110 ] = ( xx [ 133 ] + xx [ 136 ] * xx [ 136 ] ) * xx [ 12 ] - xx
[ 1 ] ; xx [ 134 ] = xx [ 135 ] * xx [ 136 ] ; xx [ 141 ] = xx [ 111 ] * xx [
100 ] ; xx [ 142 ] = xx [ 12 ] * ( xx [ 134 ] - xx [ 141 ] ) ; xx [ 143 ] =
xx [ 12 ] * ( xx [ 137 ] - xx [ 138 ] ) ; xx [ 137 ] = ( xx [ 134 ] + xx [
141 ] ) * xx [ 12 ] ; xx [ 134 ] = ( xx [ 133 ] + xx [ 135 ] * xx [ 135 ] ) *
xx [ 12 ] - xx [ 1 ] ; xx [ 144 ] = xx [ 130 ] ; xx [ 145 ] = xx [ 131 ] ; xx
[ 146 ] = xx [ 139 ] ; xx [ 147 ] = xx [ 140 ] ; xx [ 148 ] = xx [ 110 ] ; xx
[ 149 ] = xx [ 142 ] ; xx [ 150 ] = xx [ 143 ] ; xx [ 151 ] = xx [ 137 ] ; xx
[ 152 ] = xx [ 134 ] ; xx [ 133 ] = input [ 8 ] ; xx [ 138 ] = 0.0 ; if (
input [ 8 ] < xx [ 138 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:system:variableCylindricalSolidBlock:negativeLength"
,
 "The Length parameter of 'draft7/Muscle Forces/WrapedMuscle/Variable Cylindrical Solid1' is negative. Solid dimensions cannot be negative. Set this parameter to a positive number."
, neDiagMgr ) ; } xx [ 141 ] = 0.1 * fabs ( 9.0e-6 * xx [ 133 ] ) *
3.141592653589793 ; xx [ 153 ] = xx [ 2 ] * xx [ 133 ] ; xx [ 154 ] = (
2.7e-5 + xx [ 133 ] * xx [ 133 ] ) * xx [ 141 ] / 12.0 ; xx [ 155 ] = xx [
141 ] ; xx [ 156 ] = xx [ 138 ] ; xx [ 157 ] = xx [ 138 ] ; xx [ 158 ] = xx [
153 ] ; xx [ 159 ] = xx [ 154 ] ; xx [ 160 ] = xx [ 154 ] ; xx [ 161 ] =
4.5e-6 * xx [ 141 ] ; xx [ 162 ] = xx [ 138 ] ; xx [ 163 ] = xx [ 138 ] ; xx
[ 164 ] = xx [ 138 ] ; if ( ! ( xx [ 141 ] != xx [ 138 ] || xx [ 153 ] == xx
[ 138 ] ) ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:system:variableInertia:invalidZeroMass" ,
 "'draft7/Muscle Forces/WrapedMuscle/Variable Cylindrical Solid1' has zero mass but nonzero center of mass, which is invalid."
, neDiagMgr ) ; } xx [ 133 ] = xx [ 155 ] * xx [ 156 ] ; xx [ 141 ] = xx [
155 ] * xx [ 157 ] ; xx [ 153 ] = xx [ 155 ] * xx [ 158 ] ; xx [ 154 ] = xx [
155 ] * xx [ 157 ] * xx [ 158 ] - xx [ 162 ] ; xx [ 165 ] = xx [ 155 ] * xx [
156 ] * xx [ 158 ] - xx [ 163 ] ; xx [ 162 ] = xx [ 155 ] * xx [ 156 ] * xx [
157 ] - xx [ 164 ] ; xx [ 166 ] = xx [ 155 ] ; xx [ 167 ] = xx [ 133 ] ; xx [
168 ] = xx [ 141 ] ; xx [ 169 ] = xx [ 153 ] ; xx [ 170 ] = xx [ 2 ] * ( xx [
160 ] + xx [ 161 ] - xx [ 159 ] ) + xx [ 155 ] * xx [ 156 ] * xx [ 156 ] ; xx
[ 171 ] = xx [ 2 ] * ( xx [ 161 ] + xx [ 159 ] - xx [ 160 ] ) + xx [ 155 ] *
xx [ 157 ] * xx [ 157 ] ; xx [ 172 ] = xx [ 2 ] * ( xx [ 159 ] + xx [ 160 ] -
xx [ 161 ] ) + xx [ 155 ] * xx [ 158 ] * xx [ 158 ] ; xx [ 173 ] = ( xx [ 154
] + xx [ 154 ] ) * xx [ 2 ] ; xx [ 174 ] = ( xx [ 165 ] + xx [ 165 ] ) * xx [
2 ] ; xx [ 175 ] = ( xx [ 162 ] + xx [ 162 ] ) * xx [ 2 ] ; if ( ! ( xx [ 155
] != xx [ 138 ] || ( xx [ 133 ] == xx [ 138 ] && xx [ 141 ] == xx [ 138 ] &&
xx [ 153 ] == xx [ 138 ] ) ) ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:body:bodyInertia:invalidMassDistribution" ,
 "The rigid component containing 'draft7/Muscle Forces/WrapedMuscle/Variable Cylindrical Solid1' has an invalid mass distribution. It has zero total mass and nonzero first moment of mass."
, neDiagMgr ) ; } xx [ 133 ] = - xx [ 175 ] ; xx [ 141 ] = - xx [ 174 ] ; xx
[ 153 ] = - xx [ 173 ] ; xx [ 154 ] = xx [ 171 ] + xx [ 172 ] ; xx [ 155 ] =
xx [ 133 ] ; xx [ 156 ] = xx [ 141 ] ; xx [ 157 ] = xx [ 133 ] ; xx [ 158 ] =
xx [ 172 ] + xx [ 170 ] ; xx [ 159 ] = xx [ 153 ] ; xx [ 160 ] = xx [ 141 ] ;
xx [ 161 ] = xx [ 153 ] ; xx [ 162 ] = xx [ 170 ] + xx [ 171 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 154 , xx + 144 , xx + 176 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 144 , xx + 176 , xx + 185 ) ; xx [ 133 ]
= xx [ 166 ] == 0.0 ? 0.0 : xx [ 168 ] / xx [ 166 ] ; xx [ 141 ] = xx [ 166 ]
* xx [ 133 ] ; xx [ 153 ] = xx [ 166 ] == 0.0 ? 0.0 : xx [ 169 ] / xx [ 166 ]
; xx [ 163 ] = xx [ 166 ] * xx [ 153 ] ; xx [ 164 ] = xx [ 166 ] == 0.0 ? 0.0
: xx [ 167 ] / xx [ 166 ] ; xx [ 165 ] = xx [ 166 ] * xx [ 164 ] ; xx [ 167 ]
= xx [ 139 ] * xx [ 141 ] - xx [ 131 ] * xx [ 163 ] ; xx [ 168 ] = xx [ 142 ]
* xx [ 141 ] - xx [ 163 ] * xx [ 110 ] ; xx [ 169 ] = xx [ 141 ] * xx [ 134 ]
- xx [ 137 ] * xx [ 163 ] ; xx [ 170 ] = xx [ 163 ] * xx [ 130 ] - xx [ 139 ]
* xx [ 165 ] ; xx [ 171 ] = xx [ 140 ] * xx [ 163 ] - xx [ 142 ] * xx [ 165 ]
; xx [ 172 ] = xx [ 143 ] * xx [ 163 ] - xx [ 165 ] * xx [ 134 ] ; xx [ 173 ]
= xx [ 131 ] * xx [ 165 ] - xx [ 141 ] * xx [ 130 ] ; xx [ 174 ] = xx [ 165 ]
* xx [ 110 ] - xx [ 140 ] * xx [ 141 ] ; xx [ 175 ] = xx [ 137 ] * xx [ 165 ]
- xx [ 143 ] * xx [ 141 ] ; pm_math_Matrix3x3_compose_ra ( xx + 144 , xx +
167 , xx + 176 ) ; xx [ 167 ] = 0.09519527419625862 ; xx [ 168 ] = -
0.07787409280153862 ; xx [ 169 ] = - 0.0859897565171039 ;
pm_math_Matrix3x3_postCross_ra ( xx + 176 , xx + 167 , xx + 194 ) ; xx [ 203
] = xx [ 166 ] * xx [ 130 ] ; xx [ 204 ] = xx [ 166 ] * xx [ 140 ] ; xx [ 205
] = xx [ 166 ] * xx [ 143 ] ; xx [ 206 ] = xx [ 166 ] * xx [ 131 ] ; xx [ 207
] = xx [ 166 ] * xx [ 110 ] ; xx [ 208 ] = xx [ 166 ] * xx [ 137 ] ; xx [ 209
] = xx [ 166 ] * xx [ 139 ] ; xx [ 210 ] = xx [ 166 ] * xx [ 142 ] ; xx [ 211
] = xx [ 166 ] * xx [ 134 ] ; pm_math_Matrix3x3_compose_ra ( xx + 144 , xx +
203 , xx + 212 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 212 , xx + 167 , xx
+ 142 ) ; pm_math_Matrix3x3_preCross_ra ( xx + 142 , xx + 167 , xx + 203 ) ;
xx [ 110 ] = xx [ 185 ] - xx [ 194 ] - xx [ 194 ] - xx [ 203 ] ; xx [ 130 ] =
2.481544599738585e-3 ; xx [ 131 ] = xx [ 186 ] - xx [ 195 ] - xx [ 197 ] - xx
[ 204 ] ; xx [ 134 ] = xx [ 187 ] - xx [ 196 ] - xx [ 200 ] - xx [ 205 ] ; xx
[ 137 ] = xx [ 188 ] - xx [ 197 ] - xx [ 195 ] - xx [ 206 ] ; xx [ 139 ] =
2.854853249907261e-3 ; xx [ 140 ] = xx [ 189 ] - xx [ 198 ] - xx [ 198 ] - xx
[ 207 ] ; xx [ 151 ] = xx [ 190 ] - xx [ 199 ] - xx [ 201 ] - xx [ 208 ] ; xx
[ 152 ] = xx [ 191 ] - xx [ 200 ] - xx [ 196 ] - xx [ 209 ] ; xx [ 170 ] = xx
[ 192 ] - xx [ 201 ] - xx [ 199 ] - xx [ 210 ] ; xx [ 171 ] =
2.06157032619784e-3 ; xx [ 172 ] = xx [ 193 ] - xx [ 202 ] - xx [ 202 ] - xx
[ 211 ] ; xx [ 185 ] = xx [ 130 ] + xx [ 110 ] ; xx [ 186 ] = xx [ 131 ] ; xx
[ 187 ] = xx [ 134 ] ; xx [ 188 ] = xx [ 137 ] ; xx [ 189 ] = xx [ 139 ] + xx
[ 140 ] ; xx [ 190 ] = xx [ 151 ] ; xx [ 191 ] = xx [ 152 ] ; xx [ 192 ] = xx
[ 170 ] ; xx [ 193 ] = xx [ 171 ] + xx [ 172 ] ; xx [ 173 ] = xx [ 81 ] * xx
[ 117 ] - xx [ 82 ] * xx [ 116 ] ; xx [ 174 ] = xx [ 117 ] + xx [ 82 ] * xx [
115 ] ; xx [ 175 ] = xx [ 81 ] * xx [ 115 ] + xx [ 116 ] ; xx [ 194 ] = xx [
173 ] ; xx [ 195 ] = xx [ 174 ] ; xx [ 196 ] = - xx [ 175 ] ;
pm_math_Vector3_cross_ra ( xx + 115 , xx + 194 , xx + 197 ) ; xx [ 194 ] = xx
[ 1 ] + xx [ 12 ] * ( xx [ 197 ] - xx [ 114 ] * xx [ 173 ] ) ; xx [ 173 ] =
xx [ 12 ] * ( xx [ 198 ] - xx [ 114 ] * xx [ 174 ] ) - xx [ 81 ] ; xx [ 81 ]
= xx [ 12 ] * ( xx [ 199 ] + xx [ 114 ] * xx [ 175 ] ) - xx [ 82 ] ; xx [ 195
] = xx [ 194 ] ; xx [ 196 ] = xx [ 173 ] ; xx [ 197 ] = xx [ 81 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 185 , xx + 195 , xx + 198 ) ; xx [ 82 ] =
xx [ 176 ] - xx [ 142 ] ; xx [ 142 ] = xx [ 177 ] - xx [ 145 ] ; xx [ 145 ] =
xx [ 178 ] - xx [ 148 ] ; xx [ 148 ] = xx [ 179 ] - xx [ 143 ] ; xx [ 143 ] =
xx [ 180 ] - xx [ 146 ] ; xx [ 146 ] = xx [ 181 ] - xx [ 149 ] ; xx [ 149 ] =
xx [ 182 ] - xx [ 144 ] ; xx [ 144 ] = xx [ 183 ] - xx [ 147 ] ; xx [ 147 ] =
xx [ 184 ] - xx [ 150 ] ; xx [ 174 ] = xx [ 82 ] ; xx [ 175 ] = xx [ 142 ] ;
xx [ 176 ] = xx [ 145 ] ; xx [ 177 ] = xx [ 148 ] ; xx [ 178 ] = xx [ 143 ] ;
xx [ 179 ] = xx [ 146 ] ; xx [ 180 ] = xx [ 149 ] ; xx [ 181 ] = xx [ 144 ] ;
xx [ 182 ] = xx [ 147 ] ; xx [ 201 ] = - 1.160451719412536e-3 ; xx [ 202 ] =
- 0.02864342077244468 ; xx [ 203 ] = - 0.1242034406115433 ;
pm_math_Vector3_cross_ra ( xx + 201 , xx + 195 , xx + 204 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 174 , xx + 204 , xx + 207 ) ; xx [ 150 ] =
xx [ 198 ] + xx [ 207 ] ; xx [ 183 ] = xx [ 199 ] + xx [ 208 ] ; xx [ 184 ] =
xx [ 200 ] + xx [ 209 ] ; xx [ 198 ] = xx [ 150 ] ; xx [ 199 ] = xx [ 183 ] ;
xx [ 200 ] = xx [ 184 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 174 , xx
+ 195 , xx + 207 ) ; xx [ 210 ] = 0.2423553879524476 ; xx [ 221 ] = xx [ 210
] + xx [ 212 ] ; xx [ 222 ] = xx [ 213 ] ; xx [ 223 ] = xx [ 214 ] ; xx [ 224
] = xx [ 215 ] ; xx [ 225 ] = xx [ 210 ] + xx [ 216 ] ; xx [ 226 ] = xx [ 217
] ; xx [ 227 ] = xx [ 218 ] ; xx [ 228 ] = xx [ 219 ] ; xx [ 229 ] = xx [ 210
] + xx [ 220 ] ; pm_math_Matrix3x3_xform_ra ( xx + 221 , xx + 204 , xx + 230
) ; xx [ 211 ] = xx [ 207 ] + xx [ 230 ] ; xx [ 233 ] = xx [ 208 ] + xx [ 231
] ; xx [ 207 ] = xx [ 209 ] + xx [ 232 ] ; xx [ 230 ] = xx [ 211 ] ; xx [ 231
] = xx [ 233 ] ; xx [ 232 ] = xx [ 207 ] ; xx [ 234 ] = xx [ 83 ] ; xx [ 235
] = - xx [ 72 ] ; xx [ 236 ] = xx [ 102 ] ; xx [ 237 ] = - xx [ 104 ] ; xx [
238 ] = - xx [ 79 ] ; xx [ 239 ] = xx [ 84 ] ; xx [ 240 ] = xx [ 98 ] ;
pm_math_Quaternion_xform_ra ( xx + 234 , xx + 238 , xx + 241 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 185 , xx + 241 , xx + 234 ) ;
pm_math_Vector3_cross_ra ( xx + 201 , xx + 241 , xx + 244 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 174 , xx + 244 , xx + 247 ) ; xx [ 72 ] =
xx [ 234 ] + xx [ 247 ] ; xx [ 79 ] = xx [ 235 ] + xx [ 248 ] ; xx [ 83 ] =
xx [ 236 ] + xx [ 249 ] ; xx [ 234 ] = xx [ 72 ] ; xx [ 235 ] = xx [ 79 ] ;
xx [ 236 ] = xx [ 83 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 174 , xx
+ 241 , xx + 247 ) ; pm_math_Matrix3x3_xform_ra ( xx + 221 , xx + 244 , xx +
250 ) ; xx [ 84 ] = xx [ 247 ] + xx [ 250 ] ; xx [ 98 ] = xx [ 248 ] + xx [
251 ] ; xx [ 102 ] = xx [ 249 ] + xx [ 252 ] ; xx [ 247 ] = xx [ 84 ] ; xx [
248 ] = xx [ 98 ] ; xx [ 249 ] = xx [ 102 ] ; xx [ 104 ] =
pm_math_Vector3_dot_ra ( xx + 195 , xx + 234 ) + pm_math_Vector3_dot_ra ( xx
+ 204 , xx + 247 ) ; xx [ 250 ] = xx [ 99 ] ; xx [ 251 ] = - xx [ 101 ] ; xx
[ 252 ] = xx [ 103 ] ; pm_math_Matrix3x3_xform_ra ( xx + 185 , xx + 250 , xx
+ 253 ) ; xx [ 208 ] = 0.03324995831780794 ; xx [ 209 ] =
1.450619990863594e-4 ; xx [ 237 ] = 3.441131982155878e-4 ; xx [ 256 ] = - xx
[ 208 ] ; xx [ 257 ] = - xx [ 209 ] ; xx [ 258 ] = xx [ 237 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 174 , xx + 256 , xx + 259 ) ; xx [ 262 ] =
xx [ 253 ] + xx [ 259 ] ; xx [ 263 ] = xx [ 254 ] + xx [ 260 ] ; xx [ 253 ] =
xx [ 255 ] + xx [ 261 ] ; xx [ 259 ] = xx [ 262 ] ; xx [ 260 ] = xx [ 263 ] ;
xx [ 261 ] = xx [ 253 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 174 , xx
+ 250 , xx + 264 ) ; pm_math_Matrix3x3_xform_ra ( xx + 221 , xx + 256 , xx +
267 ) ; xx [ 254 ] = xx [ 264 ] + xx [ 267 ] ; xx [ 255 ] = xx [ 265 ] + xx [
268 ] ; xx [ 264 ] = xx [ 266 ] + xx [ 269 ] ; xx [ 265 ] = xx [ 254 ] ; xx [
266 ] = xx [ 255 ] ; xx [ 267 ] = xx [ 264 ] ; xx [ 268 ] =
pm_math_Vector3_dot_ra ( xx + 195 , xx + 259 ) + pm_math_Vector3_dot_ra ( xx
+ 204 , xx + 265 ) ; xx [ 269 ] = pm_math_Vector3_dot_ra ( xx + 241 , xx +
259 ) + pm_math_Vector3_dot_ra ( xx + 244 , xx + 265 ) ; xx [ 270 ] =
pm_math_Vector3_dot_ra ( xx + 195 , xx + 198 ) + pm_math_Vector3_dot_ra ( xx
+ 204 , xx + 230 ) ; xx [ 271 ] = xx [ 104 ] ; xx [ 272 ] = xx [ 268 ] ; xx [
273 ] = xx [ 104 ] ; xx [ 274 ] = pm_math_Vector3_dot_ra ( xx + 241 , xx +
234 ) + pm_math_Vector3_dot_ra ( xx + 244 , xx + 247 ) ; xx [ 275 ] = xx [
269 ] ; xx [ 276 ] = xx [ 268 ] ; xx [ 277 ] = xx [ 269 ] ; xx [ 278 ] =
pm_math_Vector3_dot_ra ( xx + 250 , xx + 259 ) + pm_math_Vector3_dot_ra ( xx
+ 256 , xx + 265 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 270 , 3 , xx +
198 ) ; xx [ 104 ] = 0.999999 ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin (
state [ 25 ] ) ) > xx [ 104 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] )
{ return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L1/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L1/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 279 ] = xx [ 150 ] ; xx [ 280 ] = xx [ 72 ] ; xx [ 281
] = xx [ 262 ] ; xx [ 282 ] = xx [ 183 ] ; xx [ 283 ] = xx [ 79 ] ; xx [ 284
] = xx [ 263 ] ; xx [ 285 ] = xx [ 184 ] ; xx [ 286 ] = xx [ 83 ] ; xx [ 287
] = xx [ 253 ] ; xx [ 288 ] = xx [ 211 ] ; xx [ 289 ] = xx [ 84 ] ; xx [ 290
] = xx [ 254 ] ; xx [ 291 ] = xx [ 233 ] ; xx [ 292 ] = xx [ 98 ] ; xx [ 293
] = xx [ 255 ] ; xx [ 294 ] = xx [ 207 ] ; xx [ 295 ] = xx [ 102 ] ; xx [ 296
] = xx [ 264 ] ; solveSymmetricPosDef ( xx + 270 , xx + 279 , 3 , 6 , xx +
297 , xx + 198 ) ; xx [ 198 ] = xx [ 183 ] * xx [ 297 ] + xx [ 79 ] * xx [
298 ] + xx [ 263 ] * xx [ 299 ] ; xx [ 199 ] = xx [ 184 ] * xx [ 297 ] + xx [
83 ] * xx [ 298 ] + xx [ 253 ] * xx [ 299 ] ; xx [ 200 ] = xx [ 184 ] * xx [
300 ] + xx [ 83 ] * xx [ 301 ] + xx [ 253 ] * xx [ 302 ] ; xx [ 279 ] = xx [
110 ] - ( xx [ 150 ] * xx [ 297 ] + xx [ 72 ] * xx [ 298 ] + xx [ 262 ] * xx
[ 299 ] ) + xx [ 130 ] ; xx [ 280 ] = xx [ 131 ] - xx [ 198 ] ; xx [ 281 ] =
xx [ 134 ] - xx [ 199 ] ; xx [ 282 ] = xx [ 137 ] - xx [ 198 ] ; xx [ 283 ] =
xx [ 140 ] - ( xx [ 183 ] * xx [ 300 ] + xx [ 79 ] * xx [ 301 ] + xx [ 263 ]
* xx [ 302 ] ) + xx [ 139 ] ; xx [ 284 ] = xx [ 151 ] - xx [ 200 ] ; xx [ 285
] = xx [ 152 ] - xx [ 199 ] ; xx [ 286 ] = xx [ 170 ] - xx [ 200 ] ; xx [ 287
] = xx [ 172 ] - ( xx [ 184 ] * xx [ 303 ] + xx [ 83 ] * xx [ 304 ] + xx [
253 ] * xx [ 305 ] ) + xx [ 171 ] ; pm_math_Matrix3x3_composeTranspose_ra (
xx + 279 , xx + 119 , xx + 288 ) ; pm_math_Matrix3x3_compose_ra ( xx + 119 ,
xx + 288 , xx + 279 ) ; xx [ 288 ] = xx [ 82 ] - ( xx [ 150 ] * xx [ 306 ] +
xx [ 72 ] * xx [ 307 ] + xx [ 262 ] * xx [ 308 ] ) ; xx [ 289 ] = xx [ 142 ]
- ( xx [ 150 ] * xx [ 309 ] + xx [ 72 ] * xx [ 310 ] + xx [ 262 ] * xx [ 311
] ) ; xx [ 290 ] = xx [ 145 ] - ( xx [ 150 ] * xx [ 312 ] + xx [ 72 ] * xx [
313 ] + xx [ 262 ] * xx [ 314 ] ) ; xx [ 291 ] = xx [ 148 ] - ( xx [ 183 ] *
xx [ 306 ] + xx [ 79 ] * xx [ 307 ] + xx [ 263 ] * xx [ 308 ] ) ; xx [ 292 ]
= xx [ 143 ] - ( xx [ 183 ] * xx [ 309 ] + xx [ 79 ] * xx [ 310 ] + xx [ 263
] * xx [ 311 ] ) ; xx [ 293 ] = xx [ 146 ] - ( xx [ 183 ] * xx [ 312 ] + xx [
79 ] * xx [ 313 ] + xx [ 263 ] * xx [ 314 ] ) ; xx [ 294 ] = xx [ 149 ] - (
xx [ 184 ] * xx [ 306 ] + xx [ 83 ] * xx [ 307 ] + xx [ 253 ] * xx [ 308 ] )
; xx [ 295 ] = xx [ 144 ] - ( xx [ 184 ] * xx [ 309 ] + xx [ 83 ] * xx [ 310
] + xx [ 253 ] * xx [ 311 ] ) ; xx [ 296 ] = xx [ 147 ] - ( xx [ 184 ] * xx [
312 ] + xx [ 83 ] * xx [ 313 ] + xx [ 253 ] * xx [ 314 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 288 , xx + 119 , xx + 315 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 119 , xx + 315 , xx + 288 ) ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 201 , xx + 142 ) ; xx [ 82 ] =
4.855313199912053e-13 - xx [ 142 ] ; xx [ 110 ] = 0.01419776350117569 - xx [
143 ] ; xx [ 131 ] = 0.0153662351784256 - xx [ 144 ] ; xx [ 142 ] = xx [ 82 ]
; xx [ 143 ] = xx [ 110 ] ; xx [ 144 ] = xx [ 131 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 288 , xx + 142 , xx + 315 ) ; xx [ 134
] = xx [ 233 ] * xx [ 306 ] + xx [ 98 ] * xx [ 307 ] + xx [ 255 ] * xx [ 308
] ; xx [ 137 ] = xx [ 207 ] * xx [ 306 ] + xx [ 102 ] * xx [ 307 ] + xx [ 264
] * xx [ 308 ] ; xx [ 140 ] = xx [ 207 ] * xx [ 309 ] + xx [ 102 ] * xx [ 310
] + xx [ 264 ] * xx [ 311 ] ; xx [ 324 ] = xx [ 212 ] - ( xx [ 211 ] * xx [
306 ] + xx [ 84 ] * xx [ 307 ] + xx [ 254 ] * xx [ 308 ] ) + xx [ 210 ] ; xx
[ 325 ] = xx [ 213 ] - xx [ 134 ] ; xx [ 326 ] = xx [ 214 ] - xx [ 137 ] ; xx
[ 327 ] = xx [ 215 ] - xx [ 134 ] ; xx [ 328 ] = xx [ 216 ] - ( xx [ 233 ] *
xx [ 309 ] + xx [ 98 ] * xx [ 310 ] + xx [ 255 ] * xx [ 311 ] ) + xx [ 210 ]
; xx [ 329 ] = xx [ 217 ] - xx [ 140 ] ; xx [ 330 ] = xx [ 218 ] - xx [ 137 ]
; xx [ 331 ] = xx [ 219 ] - xx [ 140 ] ; xx [ 332 ] = xx [ 220 ] - ( xx [ 207
] * xx [ 312 ] + xx [ 102 ] * xx [ 313 ] + xx [ 264 ] * xx [ 314 ] ) + xx [
210 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 324 , xx + 119 , xx +
212 ) ; pm_math_Matrix3x3_compose_ra ( xx + 119 , xx + 212 , xx + 324 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 324 , xx + 142 , xx + 119 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 119 , xx + 142 , xx + 212 ) ; xx [ 134 ]
= xx [ 279 ] - xx [ 315 ] - xx [ 315 ] - xx [ 212 ] ; xx [ 137 ] =
3.133881653570001e-6 ; xx [ 140 ] = xx [ 280 ] - xx [ 316 ] - xx [ 318 ] - xx
[ 213 ] ; xx [ 145 ] = xx [ 281 ] - xx [ 317 ] - xx [ 321 ] - xx [ 214 ] ; xx
[ 146 ] = xx [ 282 ] - xx [ 318 ] - xx [ 316 ] - xx [ 215 ] ; xx [ 147 ] =
1.518811043244711e-6 ; xx [ 148 ] = xx [ 283 ] - xx [ 319 ] - xx [ 319 ] - xx
[ 216 ] ; xx [ 149 ] = xx [ 284 ] - xx [ 320 ] - xx [ 322 ] - xx [ 217 ] ; xx
[ 151 ] = xx [ 285 ] - xx [ 321 ] - xx [ 317 ] - xx [ 218 ] ; xx [ 152 ] = xx
[ 286 ] - xx [ 322 ] - xx [ 320 ] - xx [ 219 ] ; xx [ 170 ] =
3.515161026289992e-6 ; xx [ 172 ] = xx [ 287 ] - xx [ 323 ] - xx [ 323 ] - xx
[ 220 ] ; xx [ 212 ] = xx [ 137 ] + xx [ 134 ] ; xx [ 213 ] = xx [ 140 ] ; xx
[ 214 ] = xx [ 145 ] ; xx [ 215 ] = xx [ 146 ] ; xx [ 216 ] = xx [ 147 ] + xx
[ 148 ] ; xx [ 217 ] = xx [ 149 ] ; xx [ 218 ] = xx [ 151 ] ; xx [ 219 ] = xx
[ 152 ] ; xx [ 220 ] = xx [ 170 ] + xx [ 172 ] ; xx [ 198 ] = xx [ 60 ] * xx
[ 88 ] ; xx [ 199 ] = xx [ 60 ] * xx [ 86 ] - xx [ 87 ] ; xx [ 230 ] = - xx [
198 ] ; xx [ 231 ] = xx [ 88 ] ; xx [ 232 ] = xx [ 199 ] ;
pm_math_Vector3_cross_ra ( xx + 86 , xx + 230 , xx + 234 ) ; xx [ 200 ] = xx
[ 1 ] + ( xx [ 85 ] * xx [ 198 ] + xx [ 234 ] ) * xx [ 12 ] ; xx [ 198 ] = xx
[ 60 ] + xx [ 12 ] * ( xx [ 235 ] - xx [ 80 ] ) ; xx [ 60 ] = xx [ 12 ] * (
xx [ 236 ] - xx [ 85 ] * xx [ 199 ] ) ; xx [ 230 ] = xx [ 200 ] ; xx [ 231 ]
= xx [ 198 ] ; xx [ 232 ] = xx [ 60 ] ; pm_math_Matrix3x3_xform_ra ( xx + 212
, xx + 230 , xx + 234 ) ; xx [ 80 ] = xx [ 288 ] - xx [ 119 ] ; xx [ 119 ] =
xx [ 289 ] - xx [ 122 ] ; xx [ 122 ] = xx [ 290 ] - xx [ 125 ] ; xx [ 125 ] =
xx [ 291 ] - xx [ 120 ] ; xx [ 120 ] = xx [ 292 ] - xx [ 123 ] ; xx [ 123 ] =
xx [ 293 ] - xx [ 126 ] ; xx [ 126 ] = xx [ 294 ] - xx [ 121 ] ; xx [ 121 ] =
xx [ 295 ] - xx [ 124 ] ; xx [ 124 ] = xx [ 296 ] - xx [ 127 ] ; xx [ 279 ] =
xx [ 80 ] ; xx [ 280 ] = xx [ 119 ] ; xx [ 281 ] = xx [ 122 ] ; xx [ 282 ] =
xx [ 125 ] ; xx [ 283 ] = xx [ 120 ] ; xx [ 284 ] = xx [ 123 ] ; xx [ 285 ] =
xx [ 126 ] ; xx [ 286 ] = xx [ 121 ] ; xx [ 287 ] = xx [ 124 ] ; xx [ 247 ] =
2.484784205278315e-13 ; xx [ 248 ] = 0.01055813361575447 ; xx [ 249 ] = -
0.01718904409441589 ; pm_math_Vector3_cross_ra ( xx + 247 , xx + 230 , xx +
259 ) ; pm_math_Matrix3x3_xform_ra ( xx + 279 , xx + 259 , xx + 265 ) ; xx [
127 ] = xx [ 234 ] + xx [ 265 ] ; xx [ 199 ] = xx [ 235 ] + xx [ 266 ] ; xx [
210 ] = xx [ 236 ] + xx [ 267 ] ; xx [ 234 ] = xx [ 127 ] ; xx [ 235 ] = xx [
199 ] ; xx [ 236 ] = xx [ 210 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx +
279 , xx + 230 , xx + 265 ) ; xx [ 268 ] = 7.704043062217087e-3 ; xx [ 288 ]
= xx [ 268 ] + xx [ 324 ] ; xx [ 289 ] = xx [ 325 ] ; xx [ 290 ] = xx [ 326 ]
; xx [ 291 ] = xx [ 327 ] ; xx [ 292 ] = xx [ 268 ] + xx [ 328 ] ; xx [ 293 ]
= xx [ 329 ] ; xx [ 294 ] = xx [ 330 ] ; xx [ 295 ] = xx [ 331 ] ; xx [ 296 ]
= xx [ 268 ] + xx [ 332 ] ; pm_math_Matrix3x3_xform_ra ( xx + 288 , xx + 259
, xx + 315 ) ; xx [ 269 ] = xx [ 265 ] + xx [ 315 ] ; xx [ 318 ] = xx [ 266 ]
+ xx [ 316 ] ; xx [ 265 ] = xx [ 267 ] + xx [ 317 ] ; xx [ 315 ] = xx [ 269 ]
; xx [ 316 ] = xx [ 318 ] ; xx [ 317 ] = xx [ 265 ] ; xx [ 319 ] = xx [ 58 ]
; xx [ 320 ] = - xx [ 52 ] ; xx [ 321 ] = - xx [ 73 ] ; xx [ 322 ] = - xx [
74 ] ; xx [ 333 ] = xx [ 55 ] ; xx [ 334 ] = xx [ 59 ] ; xx [ 335 ] = - xx [
61 ] ; pm_math_Quaternion_xform_ra ( xx + 319 , xx + 333 , xx + 336 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 212 , xx + 336 , xx + 319 ) ;
pm_math_Vector3_cross_ra ( xx + 247 , xx + 336 , xx + 339 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 279 , xx + 339 , xx + 342 ) ; xx [ 52 ] =
xx [ 319 ] + xx [ 342 ] ; xx [ 55 ] = xx [ 320 ] + xx [ 343 ] ; xx [ 58 ] =
xx [ 321 ] + xx [ 344 ] ; xx [ 319 ] = xx [ 52 ] ; xx [ 320 ] = xx [ 55 ] ;
xx [ 321 ] = xx [ 58 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 279 , xx
+ 336 , xx + 342 ) ; pm_math_Matrix3x3_xform_ra ( xx + 288 , xx + 339 , xx +
345 ) ; xx [ 73 ] = xx [ 342 ] + xx [ 345 ] ; xx [ 74 ] = xx [ 343 ] + xx [
346 ] ; xx [ 266 ] = xx [ 344 ] + xx [ 347 ] ; xx [ 342 ] = xx [ 73 ] ; xx [
343 ] = xx [ 74 ] ; xx [ 344 ] = xx [ 266 ] ; xx [ 267 ] =
pm_math_Vector3_dot_ra ( xx + 230 , xx + 319 ) + pm_math_Vector3_dot_ra ( xx
+ 259 , xx + 342 ) ; xx [ 345 ] = xx [ 71 ] ; xx [ 346 ] = xx [ 61 ] ; xx [
347 ] = xx [ 59 ] ; pm_math_Matrix3x3_xform_ra ( xx + 212 , xx + 345 , xx +
348 ) ; xx [ 322 ] = 0.01512320370375 ; xx [ 323 ] = 4.156663728609323e-13 ;
xx [ 351 ] = 3.670194404924682e-14 ; xx [ 352 ] = xx [ 322 ] ; xx [ 353 ] = -
xx [ 323 ] ; xx [ 354 ] = - xx [ 351 ] ; pm_math_Matrix3x3_xform_ra ( xx +
279 , xx + 352 , xx + 355 ) ; xx [ 358 ] = xx [ 348 ] + xx [ 355 ] ; xx [ 359
] = xx [ 349 ] + xx [ 356 ] ; xx [ 348 ] = xx [ 350 ] + xx [ 357 ] ; xx [ 355
] = xx [ 358 ] ; xx [ 356 ] = xx [ 359 ] ; xx [ 357 ] = xx [ 348 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 279 , xx + 345 , xx + 360 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 288 , xx + 352 , xx + 363 ) ; xx [ 349 ] =
xx [ 360 ] + xx [ 363 ] ; xx [ 350 ] = xx [ 361 ] + xx [ 364 ] ; xx [ 360 ] =
xx [ 362 ] + xx [ 365 ] ; xx [ 361 ] = xx [ 349 ] ; xx [ 362 ] = xx [ 350 ] ;
xx [ 363 ] = xx [ 360 ] ; xx [ 364 ] = pm_math_Vector3_dot_ra ( xx + 230 , xx
+ 355 ) + pm_math_Vector3_dot_ra ( xx + 259 , xx + 361 ) ; xx [ 365 ] =
pm_math_Vector3_dot_ra ( xx + 336 , xx + 355 ) + pm_math_Vector3_dot_ra ( xx
+ 339 , xx + 361 ) ; xx [ 366 ] = pm_math_Vector3_dot_ra ( xx + 230 , xx +
234 ) + pm_math_Vector3_dot_ra ( xx + 259 , xx + 315 ) ; xx [ 367 ] = xx [
267 ] ; xx [ 368 ] = xx [ 364 ] ; xx [ 369 ] = xx [ 267 ] ; xx [ 370 ] =
pm_math_Vector3_dot_ra ( xx + 336 , xx + 319 ) + pm_math_Vector3_dot_ra ( xx
+ 339 , xx + 342 ) ; xx [ 371 ] = xx [ 365 ] ; xx [ 372 ] = xx [ 364 ] ; xx [
373 ] = xx [ 365 ] ; xx [ 374 ] = pm_math_Vector3_dot_ra ( xx + 345 , xx +
355 ) + pm_math_Vector3_dot_ra ( xx + 352 , xx + 361 ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 366 , 3 , xx + 234 ) ; bb [ 0 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 19 ] ) ) > xx [ 104 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ;
if ( bb [ 0 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L2/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L2/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 375 ] = xx [ 127 ] ; xx [ 376 ] = xx [ 52 ] ; xx [ 377
] = xx [ 358 ] ; xx [ 378 ] = xx [ 199 ] ; xx [ 379 ] = xx [ 55 ] ; xx [ 380
] = xx [ 359 ] ; xx [ 381 ] = xx [ 210 ] ; xx [ 382 ] = xx [ 58 ] ; xx [ 383
] = xx [ 348 ] ; xx [ 384 ] = xx [ 269 ] ; xx [ 385 ] = xx [ 73 ] ; xx [ 386
] = xx [ 349 ] ; xx [ 387 ] = xx [ 318 ] ; xx [ 388 ] = xx [ 74 ] ; xx [ 389
] = xx [ 350 ] ; xx [ 390 ] = xx [ 265 ] ; xx [ 391 ] = xx [ 266 ] ; xx [ 392
] = xx [ 360 ] ; solveSymmetricPosDef ( xx + 366 , xx + 375 , 3 , 6 , xx +
393 , xx + 234 ) ; xx [ 234 ] = xx [ 199 ] * xx [ 393 ] + xx [ 55 ] * xx [
394 ] + xx [ 359 ] * xx [ 395 ] ; xx [ 235 ] = xx [ 210 ] * xx [ 393 ] + xx [
58 ] * xx [ 394 ] + xx [ 348 ] * xx [ 395 ] ; xx [ 236 ] = xx [ 210 ] * xx [
396 ] + xx [ 58 ] * xx [ 397 ] + xx [ 348 ] * xx [ 398 ] ; xx [ 375 ] = xx [
134 ] - ( xx [ 127 ] * xx [ 393 ] + xx [ 52 ] * xx [ 394 ] + xx [ 358 ] * xx
[ 395 ] ) + xx [ 137 ] ; xx [ 376 ] = xx [ 140 ] - xx [ 234 ] ; xx [ 377 ] =
xx [ 145 ] - xx [ 235 ] ; xx [ 378 ] = xx [ 146 ] - xx [ 234 ] ; xx [ 379 ] =
xx [ 148 ] - ( xx [ 199 ] * xx [ 396 ] + xx [ 55 ] * xx [ 397 ] + xx [ 359 ]
* xx [ 398 ] ) + xx [ 147 ] ; xx [ 380 ] = xx [ 149 ] - xx [ 236 ] ; xx [ 381
] = xx [ 151 ] - xx [ 235 ] ; xx [ 382 ] = xx [ 152 ] - xx [ 236 ] ; xx [ 383
] = xx [ 172 ] - ( xx [ 210 ] * xx [ 399 ] + xx [ 58 ] * xx [ 400 ] + xx [
348 ] * xx [ 401 ] ) + xx [ 170 ] ; pm_math_Matrix3x3_composeTranspose_ra (
xx + 375 , xx + 89 , xx + 384 ) ; pm_math_Matrix3x3_compose_ra ( xx + 89 , xx
+ 384 , xx + 375 ) ; xx [ 384 ] = xx [ 80 ] - ( xx [ 127 ] * xx [ 402 ] + xx
[ 52 ] * xx [ 403 ] + xx [ 358 ] * xx [ 404 ] ) ; xx [ 385 ] = xx [ 119 ] - (
xx [ 127 ] * xx [ 405 ] + xx [ 52 ] * xx [ 406 ] + xx [ 358 ] * xx [ 407 ] )
; xx [ 386 ] = xx [ 122 ] - ( xx [ 127 ] * xx [ 408 ] + xx [ 52 ] * xx [ 409
] + xx [ 358 ] * xx [ 410 ] ) ; xx [ 387 ] = xx [ 125 ] - ( xx [ 199 ] * xx [
402 ] + xx [ 55 ] * xx [ 403 ] + xx [ 359 ] * xx [ 404 ] ) ; xx [ 388 ] = xx
[ 120 ] - ( xx [ 199 ] * xx [ 405 ] + xx [ 55 ] * xx [ 406 ] + xx [ 359 ] *
xx [ 407 ] ) ; xx [ 389 ] = xx [ 123 ] - ( xx [ 199 ] * xx [ 408 ] + xx [ 55
] * xx [ 409 ] + xx [ 359 ] * xx [ 410 ] ) ; xx [ 390 ] = xx [ 126 ] - ( xx [
210 ] * xx [ 402 ] + xx [ 58 ] * xx [ 403 ] + xx [ 348 ] * xx [ 404 ] ) ; xx
[ 391 ] = xx [ 121 ] - ( xx [ 210 ] * xx [ 405 ] + xx [ 58 ] * xx [ 406 ] +
xx [ 348 ] * xx [ 407 ] ) ; xx [ 392 ] = xx [ 124 ] - ( xx [ 210 ] * xx [ 408
] + xx [ 58 ] * xx [ 409 ] + xx [ 348 ] * xx [ 410 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 384 , xx + 89 , xx + 411 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 89 , xx + 411 , xx + 384 ) ;
pm_math_Quaternion_xform_ra ( xx + 85 , xx + 247 , xx + 119 ) ; xx [ 80 ] =
7.111565911668068e-14 + xx [ 119 ] ; xx [ 122 ] = 0.01482354797278426 - xx [
120 ] ; xx [ 119 ] = 0.01597192626903846 - xx [ 121 ] ; xx [ 123 ] = - xx [
80 ] ; xx [ 124 ] = xx [ 122 ] ; xx [ 125 ] = xx [ 119 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 384 , xx + 123 , xx + 411 ) ; xx [ 120
] = xx [ 318 ] * xx [ 402 ] + xx [ 74 ] * xx [ 403 ] + xx [ 350 ] * xx [ 404
] ; xx [ 121 ] = xx [ 265 ] * xx [ 402 ] + xx [ 266 ] * xx [ 403 ] + xx [ 360
] * xx [ 404 ] ; xx [ 126 ] = xx [ 265 ] * xx [ 405 ] + xx [ 266 ] * xx [ 406
] + xx [ 360 ] * xx [ 407 ] ; xx [ 420 ] = xx [ 324 ] - ( xx [ 269 ] * xx [
402 ] + xx [ 73 ] * xx [ 403 ] + xx [ 349 ] * xx [ 404 ] ) + xx [ 268 ] ; xx
[ 421 ] = xx [ 325 ] - xx [ 120 ] ; xx [ 422 ] = xx [ 326 ] - xx [ 121 ] ; xx
[ 423 ] = xx [ 327 ] - xx [ 120 ] ; xx [ 424 ] = xx [ 328 ] - ( xx [ 318 ] *
xx [ 405 ] + xx [ 74 ] * xx [ 406 ] + xx [ 350 ] * xx [ 407 ] ) + xx [ 268 ]
; xx [ 425 ] = xx [ 329 ] - xx [ 126 ] ; xx [ 426 ] = xx [ 330 ] - xx [ 121 ]
; xx [ 427 ] = xx [ 331 ] - xx [ 126 ] ; xx [ 428 ] = xx [ 332 ] - ( xx [ 265
] * xx [ 408 ] + xx [ 266 ] * xx [ 409 ] + xx [ 360 ] * xx [ 410 ] ) + xx [
268 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 420 , xx + 89 , xx + 324
) ; pm_math_Matrix3x3_compose_ra ( xx + 89 , xx + 324 , xx + 420 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 420 , xx + 123 , xx + 89 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 89 , xx + 123 , xx + 324 ) ; xx [ 120 ]
= xx [ 375 ] - xx [ 411 ] - xx [ 411 ] - xx [ 324 ] ; xx [ 121 ] =
3.395310932053464e-6 ; xx [ 126 ] = xx [ 376 ] - xx [ 412 ] - xx [ 414 ] - xx
[ 325 ] ; xx [ 134 ] = xx [ 377 ] - xx [ 413 ] - xx [ 417 ] - xx [ 326 ] ; xx
[ 140 ] = xx [ 378 ] - xx [ 414 ] - xx [ 412 ] - xx [ 327 ] ; xx [ 145 ] =
1.744065755080617e-6 ; xx [ 146 ] = xx [ 145 ] + xx [ 379 ] - xx [ 415 ] - xx
[ 415 ] - xx [ 328 ] ; xx [ 148 ] = xx [ 380 ] - xx [ 416 ] - xx [ 418 ] - xx
[ 329 ] ; xx [ 149 ] = xx [ 381 ] - xx [ 417 ] - xx [ 413 ] - xx [ 330 ] ; xx
[ 151 ] = xx [ 382 ] - xx [ 418 ] - xx [ 416 ] - xx [ 331 ] ; xx [ 152 ] =
3.911790730232107e-6 ; xx [ 172 ] = xx [ 152 ] + xx [ 383 ] - xx [ 419 ] - xx
[ 419 ] - xx [ 332 ] ; xx [ 324 ] = xx [ 121 ] + xx [ 120 ] ; xx [ 325 ] = xx
[ 126 ] ; xx [ 326 ] = xx [ 134 ] ; xx [ 327 ] = xx [ 140 ] ; xx [ 328 ] = xx
[ 146 ] ; xx [ 329 ] = xx [ 148 ] ; xx [ 330 ] = xx [ 149 ] ; xx [ 331 ] = xx
[ 151 ] ; xx [ 332 ] = xx [ 172 ] ; xx [ 234 ] = xx [ 53 ] ; xx [ 235 ] = xx
[ 54 ] ; xx [ 236 ] = xx [ 56 ] ; xx [ 267 ] = xx [ 56 ] * xx [ 51 ] ; xx [
268 ] = xx [ 51 ] * xx [ 53 ] + xx [ 54 ] ; xx [ 315 ] = xx [ 267 ] ; xx [
316 ] = xx [ 56 ] ; xx [ 317 ] = - xx [ 268 ] ; pm_math_Vector3_cross_ra ( xx
+ 234 , xx + 315 , xx + 319 ) ; xx [ 234 ] = xx [ 1 ] + ( xx [ 319 ] - xx [
267 ] * xx [ 32 ] ) * xx [ 12 ] ; xx [ 235 ] = xx [ 12 ] * ( xx [ 320 ] - xx
[ 57 ] ) - xx [ 51 ] ; xx [ 51 ] = xx [ 12 ] * ( xx [ 321 ] + xx [ 32 ] * xx
[ 268 ] ) ; xx [ 315 ] = xx [ 234 ] ; xx [ 316 ] = xx [ 235 ] ; xx [ 317 ] =
xx [ 51 ] ; pm_math_Matrix3x3_xform_ra ( xx + 324 , xx + 315 , xx + 319 ) ;
xx [ 57 ] = xx [ 384 ] - xx [ 89 ] ; xx [ 89 ] = xx [ 385 ] - xx [ 92 ] ; xx
[ 92 ] = xx [ 386 ] - xx [ 95 ] ; xx [ 95 ] = xx [ 387 ] - xx [ 90 ] ; xx [
90 ] = xx [ 388 ] - xx [ 93 ] ; xx [ 93 ] = xx [ 389 ] - xx [ 96 ] ; xx [ 96
] = xx [ 390 ] - xx [ 91 ] ; xx [ 91 ] = xx [ 391 ] - xx [ 94 ] ; xx [ 94 ] =
xx [ 392 ] - xx [ 97 ] ; xx [ 375 ] = xx [ 57 ] ; xx [ 376 ] = xx [ 89 ] ; xx
[ 377 ] = xx [ 92 ] ; xx [ 378 ] = xx [ 95 ] ; xx [ 379 ] = xx [ 90 ] ; xx [
380 ] = xx [ 93 ] ; xx [ 381 ] = xx [ 96 ] ; xx [ 382 ] = xx [ 91 ] ; xx [
383 ] = xx [ 94 ] ; xx [ 342 ] = - 3.478043091554657e-14 ; xx [ 343 ] =
8.616599387917045e-3 ; xx [ 344 ] = - 0.01781379291801384 ;
pm_math_Vector3_cross_ra ( xx + 342 , xx + 315 , xx + 355 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 375 , xx + 355 , xx + 361 ) ; xx [ 97 ] =
xx [ 319 ] + xx [ 361 ] ; xx [ 236 ] = xx [ 320 ] + xx [ 362 ] ; xx [ 267 ] =
xx [ 321 ] + xx [ 363 ] ; xx [ 319 ] = xx [ 97 ] ; xx [ 320 ] = xx [ 236 ] ;
xx [ 321 ] = xx [ 267 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 375 , xx
+ 315 , xx + 361 ) ; xx [ 268 ] = 8.355848350904705e-3 ; xx [ 384 ] = xx [
268 ] + xx [ 420 ] ; xx [ 385 ] = xx [ 421 ] ; xx [ 386 ] = xx [ 422 ] ; xx [
387 ] = xx [ 423 ] ; xx [ 388 ] = xx [ 268 ] + xx [ 424 ] ; xx [ 389 ] = xx [
425 ] ; xx [ 390 ] = xx [ 426 ] ; xx [ 391 ] = xx [ 427 ] ; xx [ 392 ] = xx [
268 ] + xx [ 428 ] ; pm_math_Matrix3x3_xform_ra ( xx + 384 , xx + 355 , xx +
411 ) ; xx [ 364 ] = xx [ 361 ] + xx [ 411 ] ; xx [ 365 ] = xx [ 362 ] + xx [
412 ] ; xx [ 361 ] = xx [ 363 ] + xx [ 413 ] ; xx [ 411 ] = xx [ 364 ] ; xx [
412 ] = xx [ 365 ] ; xx [ 413 ] = xx [ 361 ] ; xx [ 362 ] = xx [ 50 ] * xx [
27 ] ; xx [ 363 ] = xx [ 49 ] * xx [ 38 ] ; xx [ 414 ] = xx [ 362 ] + xx [
363 ] ; xx [ 415 ] = xx [ 37 ] * xx [ 27 ] ; xx [ 416 ] = xx [ 37 ] * xx [ 38
] ; xx [ 417 ] = xx [ 415 ] * xx [ 27 ] + xx [ 416 ] * xx [ 38 ] ; xx [ 418 ]
= xx [ 12 ] * ( xx [ 30 ] * xx [ 414 ] + xx [ 417 ] ) - xx [ 37 ] ; xx [ 419
] = xx [ 30 ] * xx [ 416 ] ; xx [ 416 ] = xx [ 49 ] + ( xx [ 419 ] - xx [ 38
] * xx [ 414 ] ) * xx [ 12 ] ; xx [ 429 ] = xx [ 30 ] * xx [ 415 ] ; xx [ 415
] = xx [ 50 ] + ( xx [ 429 ] - xx [ 27 ] * xx [ 414 ] ) * xx [ 12 ] ; xx [
430 ] = xx [ 418 ] ; xx [ 431 ] = xx [ 416 ] ; xx [ 432 ] = - xx [ 415 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 324 , xx + 430 , xx + 433 ) ;
pm_math_Vector3_cross_ra ( xx + 342 , xx + 430 , xx + 436 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 375 , xx + 436 , xx + 439 ) ; xx [ 414 ] =
xx [ 433 ] + xx [ 439 ] ; xx [ 442 ] = xx [ 434 ] + xx [ 440 ] ; xx [ 433 ] =
xx [ 435 ] + xx [ 441 ] ; xx [ 439 ] = xx [ 414 ] ; xx [ 440 ] = xx [ 442 ] ;
xx [ 441 ] = xx [ 433 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 375 , xx
+ 430 , xx + 443 ) ; pm_math_Matrix3x3_xform_ra ( xx + 384 , xx + 436 , xx +
446 ) ; xx [ 434 ] = xx [ 443 ] + xx [ 446 ] ; xx [ 435 ] = xx [ 444 ] + xx [
447 ] ; xx [ 443 ] = xx [ 445 ] + xx [ 448 ] ; xx [ 444 ] = xx [ 434 ] ; xx [
445 ] = xx [ 435 ] ; xx [ 446 ] = xx [ 443 ] ; xx [ 447 ] =
pm_math_Vector3_dot_ra ( xx + 315 , xx + 439 ) + pm_math_Vector3_dot_ra ( xx
+ 355 , xx + 444 ) ; xx [ 448 ] = 0.0139587874710942 ; xx [ 449 ] =
3.287582437116741e-14 ; xx [ 450 ] = 1.135158784431775e-14 ; xx [ 451 ] = xx
[ 448 ] ; xx [ 452 ] = xx [ 449 ] ; xx [ 453 ] = - xx [ 450 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 375 , xx + 451 , xx + 454 ) ; xx [ 457 ] =
xx [ 50 ] * xx [ 126 ] + xx [ 49 ] * xx [ 134 ] + xx [ 454 ] ; xx [ 458 ] =
xx [ 146 ] * xx [ 50 ] + xx [ 49 ] * xx [ 148 ] + xx [ 455 ] ; xx [ 454 ] =
xx [ 50 ] * xx [ 151 ] + xx [ 172 ] * xx [ 49 ] + xx [ 456 ] ; xx [ 459 ] =
xx [ 457 ] ; xx [ 460 ] = xx [ 458 ] ; xx [ 461 ] = xx [ 454 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 384 , xx + 451 , xx + 462 ) ; xx [ 455 ] =
xx [ 50 ] * xx [ 95 ] + xx [ 49 ] * xx [ 96 ] + xx [ 462 ] ; xx [ 456 ] = xx
[ 50 ] * xx [ 90 ] + xx [ 49 ] * xx [ 91 ] + xx [ 463 ] ; xx [ 462 ] = xx [
50 ] * xx [ 93 ] + xx [ 49 ] * xx [ 94 ] + xx [ 464 ] ; xx [ 463 ] = xx [ 455
] ; xx [ 464 ] = xx [ 456 ] ; xx [ 465 ] = xx [ 462 ] ; xx [ 466 ] =
pm_math_Vector3_dot_ra ( xx + 315 , xx + 459 ) + pm_math_Vector3_dot_ra ( xx
+ 355 , xx + 463 ) ; xx [ 467 ] = pm_math_Vector3_dot_ra ( xx + 430 , xx +
459 ) + pm_math_Vector3_dot_ra ( xx + 436 , xx + 463 ) ; xx [ 468 ] =
pm_math_Vector3_dot_ra ( xx + 315 , xx + 319 ) + pm_math_Vector3_dot_ra ( xx
+ 355 , xx + 411 ) ; xx [ 469 ] = xx [ 447 ] ; xx [ 470 ] = xx [ 466 ] ; xx [
471 ] = xx [ 447 ] ; xx [ 472 ] = pm_math_Vector3_dot_ra ( xx + 430 , xx +
439 ) + pm_math_Vector3_dot_ra ( xx + 436 , xx + 444 ) ; xx [ 473 ] = xx [
467 ] ; xx [ 474 ] = xx [ 466 ] ; xx [ 475 ] = xx [ 467 ] ; xx [ 476 ] = xx [
458 ] * xx [ 50 ] + xx [ 454 ] * xx [ 49 ] + pm_math_Vector3_dot_ra ( xx +
451 , xx + 463 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 468 , 3 , xx + 319
) ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 13 ] ) ) > xx [ 104 ] ;
ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L3/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L3/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 477 ] = xx [ 97 ] ; xx [ 478 ] = xx [ 414 ] ; xx [ 479
] = xx [ 457 ] ; xx [ 480 ] = xx [ 236 ] ; xx [ 481 ] = xx [ 442 ] ; xx [ 482
] = xx [ 458 ] ; xx [ 483 ] = xx [ 267 ] ; xx [ 484 ] = xx [ 433 ] ; xx [ 485
] = xx [ 454 ] ; xx [ 486 ] = xx [ 364 ] ; xx [ 487 ] = xx [ 434 ] ; xx [ 488
] = xx [ 455 ] ; xx [ 489 ] = xx [ 365 ] ; xx [ 490 ] = xx [ 435 ] ; xx [ 491
] = xx [ 456 ] ; xx [ 492 ] = xx [ 361 ] ; xx [ 493 ] = xx [ 443 ] ; xx [ 494
] = xx [ 462 ] ; solveSymmetricPosDef ( xx + 468 , xx + 477 , 3 , 6 , xx +
495 , xx + 319 ) ; xx [ 319 ] = xx [ 236 ] * xx [ 495 ] + xx [ 442 ] * xx [
496 ] + xx [ 458 ] * xx [ 497 ] ; xx [ 320 ] = xx [ 267 ] * xx [ 495 ] + xx [
433 ] * xx [ 496 ] + xx [ 454 ] * xx [ 497 ] ; xx [ 321 ] = xx [ 267 ] * xx [
498 ] + xx [ 433 ] * xx [ 499 ] + xx [ 454 ] * xx [ 500 ] ; xx [ 477 ] = xx [
120 ] - ( xx [ 97 ] * xx [ 495 ] + xx [ 414 ] * xx [ 496 ] + xx [ 457 ] * xx
[ 497 ] ) + xx [ 121 ] ; xx [ 478 ] = xx [ 126 ] - xx [ 319 ] ; xx [ 479 ] =
xx [ 134 ] - xx [ 320 ] ; xx [ 480 ] = xx [ 140 ] - xx [ 319 ] ; xx [ 481 ] =
xx [ 146 ] - ( xx [ 236 ] * xx [ 498 ] + xx [ 442 ] * xx [ 499 ] + xx [ 458 ]
* xx [ 500 ] ) ; xx [ 482 ] = xx [ 148 ] - xx [ 321 ] ; xx [ 483 ] = xx [ 149
] - xx [ 320 ] ; xx [ 484 ] = xx [ 151 ] - xx [ 321 ] ; xx [ 485 ] = xx [ 172
] - ( xx [ 267 ] * xx [ 501 ] + xx [ 433 ] * xx [ 502 ] + xx [ 454 ] * xx [
503 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 477 , xx + 62 , xx +
486 ) ; pm_math_Matrix3x3_compose_ra ( xx + 62 , xx + 486 , xx + 477 ) ; xx [
486 ] = xx [ 57 ] - ( xx [ 97 ] * xx [ 504 ] + xx [ 414 ] * xx [ 505 ] + xx [
457 ] * xx [ 506 ] ) ; xx [ 487 ] = xx [ 89 ] - ( xx [ 97 ] * xx [ 507 ] + xx
[ 414 ] * xx [ 508 ] + xx [ 457 ] * xx [ 509 ] ) ; xx [ 488 ] = xx [ 92 ] - (
xx [ 97 ] * xx [ 510 ] + xx [ 414 ] * xx [ 511 ] + xx [ 457 ] * xx [ 512 ] )
; xx [ 489 ] = xx [ 95 ] - ( xx [ 236 ] * xx [ 504 ] + xx [ 442 ] * xx [ 505
] + xx [ 458 ] * xx [ 506 ] ) ; xx [ 490 ] = xx [ 90 ] - ( xx [ 236 ] * xx [
507 ] + xx [ 442 ] * xx [ 508 ] + xx [ 458 ] * xx [ 509 ] ) ; xx [ 491 ] = xx
[ 93 ] - ( xx [ 236 ] * xx [ 510 ] + xx [ 442 ] * xx [ 511 ] + xx [ 458 ] *
xx [ 512 ] ) ; xx [ 492 ] = xx [ 96 ] - ( xx [ 267 ] * xx [ 504 ] + xx [ 433
] * xx [ 505 ] + xx [ 454 ] * xx [ 506 ] ) ; xx [ 493 ] = xx [ 91 ] - ( xx [
267 ] * xx [ 507 ] + xx [ 433 ] * xx [ 508 ] + xx [ 454 ] * xx [ 509 ] ) ; xx
[ 494 ] = xx [ 94 ] - ( xx [ 267 ] * xx [ 510 ] + xx [ 433 ] * xx [ 511 ] +
xx [ 454 ] * xx [ 512 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 486
, xx + 62 , xx + 513 ) ; pm_math_Matrix3x3_compose_ra ( xx + 62 , xx + 513 ,
xx + 486 ) ; xx [ 89 ] = xx [ 32 ] ; xx [ 90 ] = xx [ 53 ] ; xx [ 91 ] = xx [
54 ] ; xx [ 92 ] = xx [ 56 ] ; pm_math_Quaternion_xform_ra ( xx + 89 , xx +
342 , xx + 93 ) ; xx [ 32 ] = 1.222885353421585e-13 - xx [ 93 ] ; xx [ 53 ] =
0.01371330802384472 - xx [ 94 ] ; xx [ 54 ] = 0.01482112808326479 - xx [ 95 ]
; xx [ 93 ] = xx [ 32 ] ; xx [ 94 ] = xx [ 53 ] ; xx [ 95 ] = xx [ 54 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 486 , xx + 93 , xx + 513 ) ; xx [ 56 ]
= xx [ 365 ] * xx [ 504 ] + xx [ 435 ] * xx [ 505 ] + xx [ 456 ] * xx [ 506 ]
; xx [ 57 ] = xx [ 361 ] * xx [ 504 ] + xx [ 443 ] * xx [ 505 ] + xx [ 462 ]
* xx [ 506 ] ; xx [ 96 ] = xx [ 361 ] * xx [ 507 ] + xx [ 443 ] * xx [ 508 ]
+ xx [ 462 ] * xx [ 509 ] ; xx [ 522 ] = xx [ 420 ] - ( xx [ 364 ] * xx [ 504
] + xx [ 434 ] * xx [ 505 ] + xx [ 455 ] * xx [ 506 ] ) + xx [ 268 ] ; xx [
523 ] = xx [ 421 ] - xx [ 56 ] ; xx [ 524 ] = xx [ 422 ] - xx [ 57 ] ; xx [
525 ] = xx [ 423 ] - xx [ 56 ] ; xx [ 526 ] = xx [ 424 ] - ( xx [ 365 ] * xx
[ 507 ] + xx [ 435 ] * xx [ 508 ] + xx [ 456 ] * xx [ 509 ] ) + xx [ 268 ] ;
xx [ 527 ] = xx [ 425 ] - xx [ 96 ] ; xx [ 528 ] = xx [ 426 ] - xx [ 57 ] ;
xx [ 529 ] = xx [ 427 ] - xx [ 96 ] ; xx [ 530 ] = xx [ 428 ] - ( xx [ 361 ]
* xx [ 510 ] + xx [ 443 ] * xx [ 511 ] + xx [ 462 ] * xx [ 512 ] ) + xx [ 268
] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 522 , xx + 62 , xx + 420 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 62 , xx + 420 , xx + 522 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 522 , xx + 93 , xx + 62 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 62 , xx + 93 , xx + 420 ) ; xx [ 56 ] =
xx [ 477 ] - xx [ 513 ] - xx [ 513 ] - xx [ 420 ] ; xx [ 57 ] =
2.872594976382685e-6 ; xx [ 96 ] = xx [ 478 ] - xx [ 514 ] - xx [ 516 ] - xx
[ 421 ] ; xx [ 120 ] = xx [ 479 ] - xx [ 515 ] - xx [ 519 ] - xx [ 422 ] ; xx
[ 126 ] = xx [ 480 ] - xx [ 516 ] - xx [ 514 ] - xx [ 423 ] ; xx [ 134 ] =
1.933045481959352e-6 ; xx [ 140 ] = xx [ 134 ] + xx [ 481 ] - xx [ 517 ] - xx
[ 517 ] - xx [ 424 ] ; xx [ 146 ] = xx [ 482 ] - xx [ 518 ] - xx [ 520 ] - xx
[ 425 ] ; xx [ 148 ] = xx [ 483 ] - xx [ 519 ] - xx [ 515 ] - xx [ 426 ] ; xx
[ 149 ] = xx [ 484 ] - xx [ 520 ] - xx [ 518 ] - xx [ 427 ] ; xx [ 151 ] =
3.740002603775385e-6 ; xx [ 172 ] = xx [ 151 ] + xx [ 485 ] - xx [ 521 ] - xx
[ 521 ] - xx [ 428 ] ; xx [ 420 ] = xx [ 57 ] + xx [ 56 ] ; xx [ 421 ] = xx [
96 ] ; xx [ 422 ] = xx [ 120 ] ; xx [ 423 ] = xx [ 126 ] ; xx [ 424 ] = xx [
140 ] ; xx [ 425 ] = xx [ 146 ] ; xx [ 426 ] = xx [ 148 ] ; xx [ 427 ] = xx [
149 ] ; xx [ 428 ] = xx [ 172 ] ; xx [ 268 ] = xx [ 1 ] - ( xx [ 36 ] + xx [
39 ] ) * xx [ 12 ] ; xx [ 36 ] = ( xx [ 35 ] + xx [ 34 ] ) * xx [ 12 ] ; xx [
319 ] = xx [ 268 ] ; xx [ 320 ] = xx [ 33 ] ; xx [ 321 ] = xx [ 36 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 420 , xx + 319 , xx + 411 ) ; xx [ 34 ] =
xx [ 486 ] - xx [ 62 ] ; xx [ 35 ] = xx [ 487 ] - xx [ 65 ] ; xx [ 39 ] = xx
[ 488 ] - xx [ 68 ] ; xx [ 62 ] = xx [ 489 ] - xx [ 63 ] ; xx [ 63 ] = xx [
490 ] - xx [ 66 ] ; xx [ 65 ] = xx [ 491 ] - xx [ 69 ] ; xx [ 66 ] = xx [ 492
] - xx [ 64 ] ; xx [ 64 ] = xx [ 493 ] - xx [ 67 ] ; xx [ 67 ] = xx [ 494 ] -
xx [ 70 ] ; xx [ 477 ] = xx [ 34 ] ; xx [ 478 ] = xx [ 35 ] ; xx [ 479 ] = xx
[ 39 ] ; xx [ 480 ] = xx [ 62 ] ; xx [ 481 ] = xx [ 63 ] ; xx [ 482 ] = xx [
65 ] ; xx [ 483 ] = xx [ 66 ] ; xx [ 484 ] = xx [ 64 ] ; xx [ 485 ] = xx [ 67
] ; xx [ 68 ] = 6.664202092713185e-14 ; xx [ 69 ] = 6.161981679940124e-3 ; xx
[ 70 ] = - 0.01687376340899878 ; pm_math_Vector3_cross_ra ( xx + 68 , xx +
319 , xx + 439 ) ; pm_math_Matrix3x3_xform_ra ( xx + 477 , xx + 439 , xx +
444 ) ; xx [ 447 ] = xx [ 411 ] + xx [ 444 ] ; xx [ 459 ] = xx [ 412 ] + xx [
445 ] ; xx [ 411 ] = xx [ 413 ] + xx [ 446 ] ; xx [ 444 ] = xx [ 447 ] ; xx [
445 ] = xx [ 459 ] ; xx [ 446 ] = xx [ 411 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 477 , xx + 319 , xx + 463 ) ; xx [
412 ] = 8.201635464916061e-3 ; xx [ 486 ] = xx [ 412 ] + xx [ 522 ] ; xx [
487 ] = xx [ 523 ] ; xx [ 488 ] = xx [ 524 ] ; xx [ 489 ] = xx [ 525 ] ; xx [
490 ] = xx [ 412 ] + xx [ 526 ] ; xx [ 491 ] = xx [ 527 ] ; xx [ 492 ] = xx [
528 ] ; xx [ 493 ] = xx [ 529 ] ; xx [ 494 ] = xx [ 412 ] + xx [ 530 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 486 , xx + 439 , xx + 513 ) ; xx [ 413 ] =
xx [ 463 ] + xx [ 513 ] ; xx [ 460 ] = xx [ 464 ] + xx [ 514 ] ; xx [ 461 ] =
xx [ 465 ] + xx [ 515 ] ; xx [ 463 ] = xx [ 413 ] ; xx [ 464 ] = xx [ 460 ] ;
xx [ 465 ] = xx [ 461 ] ; xx [ 466 ] = xx [ 26 ] * xx [ 20 ] ; xx [ 467 ] =
xx [ 25 ] * xx [ 24 ] ; xx [ 513 ] = xx [ 466 ] + xx [ 467 ] ; xx [ 514 ] =
xx [ 23 ] * xx [ 20 ] ; xx [ 515 ] = xx [ 23 ] * xx [ 24 ] ; xx [ 516 ] = xx
[ 514 ] * xx [ 20 ] + xx [ 515 ] * xx [ 24 ] ; xx [ 517 ] = xx [ 23 ] + xx [
12 ] * ( xx [ 21 ] * xx [ 513 ] - xx [ 516 ] ) ; xx [ 518 ] = xx [ 21 ] * xx
[ 515 ] ; xx [ 515 ] = xx [ 25 ] - ( xx [ 518 ] + xx [ 24 ] * xx [ 513 ] ) *
xx [ 12 ] ; xx [ 519 ] = xx [ 21 ] * xx [ 514 ] ; xx [ 514 ] = ( xx [ 519 ] +
xx [ 20 ] * xx [ 513 ] ) * xx [ 12 ] - xx [ 26 ] ; xx [ 531 ] = xx [ 517 ] ;
xx [ 532 ] = xx [ 515 ] ; xx [ 533 ] = xx [ 514 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 420 , xx + 531 , xx + 534 ) ;
pm_math_Vector3_cross_ra ( xx + 68 , xx + 531 , xx + 537 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 477 , xx + 537 , xx + 540 ) ; xx [ 513 ] =
xx [ 534 ] + xx [ 540 ] ; xx [ 520 ] = xx [ 535 ] + xx [ 541 ] ; xx [ 521 ] =
xx [ 536 ] + xx [ 542 ] ; xx [ 534 ] = xx [ 513 ] ; xx [ 535 ] = xx [ 520 ] ;
xx [ 536 ] = xx [ 521 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 477 , xx
+ 531 , xx + 540 ) ; pm_math_Matrix3x3_xform_ra ( xx + 486 , xx + 537 , xx +
543 ) ; xx [ 546 ] = xx [ 540 ] + xx [ 543 ] ; xx [ 547 ] = xx [ 541 ] + xx [
544 ] ; xx [ 540 ] = xx [ 542 ] + xx [ 545 ] ; xx [ 541 ] = xx [ 546 ] ; xx [
542 ] = xx [ 547 ] ; xx [ 543 ] = xx [ 540 ] ; xx [ 544 ] =
pm_math_Vector3_dot_ra ( xx + 319 , xx + 534 ) + pm_math_Vector3_dot_ra ( xx
+ 439 , xx + 541 ) ; xx [ 545 ] = 0.01011063572343469 ; xx [ 548 ] =
6.460835926211764e-14 ; xx [ 549 ] = 1.633765181136557e-14 ; xx [ 550 ] = xx
[ 545 ] ; xx [ 551 ] = - xx [ 548 ] ; xx [ 552 ] = xx [ 549 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 477 , xx + 550 , xx + 553 ) ; xx [ 556 ] =
xx [ 26 ] * xx [ 96 ] + xx [ 25 ] * xx [ 120 ] + xx [ 553 ] ; xx [ 557 ] = xx
[ 140 ] * xx [ 26 ] + xx [ 25 ] * xx [ 146 ] + xx [ 554 ] ; xx [ 553 ] = xx [
26 ] * xx [ 149 ] + xx [ 172 ] * xx [ 25 ] + xx [ 555 ] ; xx [ 558 ] = xx [
556 ] ; xx [ 559 ] = xx [ 557 ] ; xx [ 560 ] = xx [ 553 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 486 , xx + 550 , xx + 561 ) ; xx [ 554 ] =
xx [ 26 ] * xx [ 62 ] + xx [ 25 ] * xx [ 66 ] + xx [ 561 ] ; xx [ 555 ] = xx
[ 26 ] * xx [ 63 ] + xx [ 25 ] * xx [ 64 ] + xx [ 562 ] ; xx [ 561 ] = xx [
26 ] * xx [ 65 ] + xx [ 25 ] * xx [ 67 ] + xx [ 563 ] ; xx [ 562 ] = xx [ 554
] ; xx [ 563 ] = xx [ 555 ] ; xx [ 564 ] = xx [ 561 ] ; xx [ 565 ] =
pm_math_Vector3_dot_ra ( xx + 319 , xx + 558 ) + pm_math_Vector3_dot_ra ( xx
+ 439 , xx + 562 ) ; xx [ 566 ] = pm_math_Vector3_dot_ra ( xx + 531 , xx +
558 ) + pm_math_Vector3_dot_ra ( xx + 537 , xx + 562 ) ; xx [ 567 ] =
pm_math_Vector3_dot_ra ( xx + 319 , xx + 444 ) + pm_math_Vector3_dot_ra ( xx
+ 439 , xx + 463 ) ; xx [ 568 ] = xx [ 544 ] ; xx [ 569 ] = xx [ 565 ] ; xx [
570 ] = xx [ 544 ] ; xx [ 571 ] = pm_math_Vector3_dot_ra ( xx + 531 , xx +
534 ) + pm_math_Vector3_dot_ra ( xx + 537 , xx + 541 ) ; xx [ 572 ] = xx [
566 ] ; xx [ 573 ] = xx [ 565 ] ; xx [ 574 ] = xx [ 566 ] ; xx [ 575 ] = xx [
557 ] * xx [ 26 ] + xx [ 553 ] * xx [ 25 ] + pm_math_Vector3_dot_ra ( xx +
550 , xx + 562 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 567 , 3 , xx + 444
) ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 7 ] ) ) > xx [ 104 ] ;
ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L4/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L4/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 576 ] = xx [ 447 ] ; xx [ 577 ] = xx [ 513 ] ; xx [
578 ] = xx [ 556 ] ; xx [ 579 ] = xx [ 459 ] ; xx [ 580 ] = xx [ 520 ] ; xx [
581 ] = xx [ 557 ] ; xx [ 582 ] = xx [ 411 ] ; xx [ 583 ] = xx [ 521 ] ; xx [
584 ] = xx [ 553 ] ; xx [ 585 ] = xx [ 413 ] ; xx [ 586 ] = xx [ 546 ] ; xx [
587 ] = xx [ 554 ] ; xx [ 588 ] = xx [ 460 ] ; xx [ 589 ] = xx [ 547 ] ; xx [
590 ] = xx [ 555 ] ; xx [ 591 ] = xx [ 461 ] ; xx [ 592 ] = xx [ 540 ] ; xx [
593 ] = xx [ 561 ] ; solveSymmetricPosDef ( xx + 567 , xx + 576 , 3 , 6 , xx
+ 594 , xx + 444 ) ; xx [ 444 ] = xx [ 459 ] * xx [ 594 ] + xx [ 520 ] * xx [
595 ] + xx [ 557 ] * xx [ 596 ] ; xx [ 445 ] = xx [ 411 ] * xx [ 594 ] + xx [
521 ] * xx [ 595 ] + xx [ 553 ] * xx [ 596 ] ; xx [ 446 ] = xx [ 411 ] * xx [
597 ] + xx [ 521 ] * xx [ 598 ] + xx [ 553 ] * xx [ 599 ] ; xx [ 576 ] = xx [
56 ] - ( xx [ 447 ] * xx [ 594 ] + xx [ 513 ] * xx [ 595 ] + xx [ 556 ] * xx
[ 596 ] ) + xx [ 57 ] ; xx [ 577 ] = xx [ 96 ] - xx [ 444 ] ; xx [ 578 ] = xx
[ 120 ] - xx [ 445 ] ; xx [ 579 ] = xx [ 126 ] - xx [ 444 ] ; xx [ 580 ] = xx
[ 140 ] - ( xx [ 459 ] * xx [ 597 ] + xx [ 520 ] * xx [ 598 ] + xx [ 557 ] *
xx [ 599 ] ) ; xx [ 581 ] = xx [ 146 ] - xx [ 446 ] ; xx [ 582 ] = xx [ 148 ]
- xx [ 445 ] ; xx [ 583 ] = xx [ 149 ] - xx [ 446 ] ; xx [ 584 ] = xx [ 172 ]
- ( xx [ 411 ] * xx [ 600 ] + xx [ 521 ] * xx [ 601 ] + xx [ 553 ] * xx [ 602
] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 576 , xx + 40 , xx + 585 )
; pm_math_Matrix3x3_compose_ra ( xx + 40 , xx + 585 , xx + 576 ) ; xx [ 585 ]
= xx [ 34 ] - ( xx [ 447 ] * xx [ 603 ] + xx [ 513 ] * xx [ 604 ] + xx [ 556
] * xx [ 605 ] ) ; xx [ 586 ] = xx [ 35 ] - ( xx [ 447 ] * xx [ 606 ] + xx [
513 ] * xx [ 607 ] + xx [ 556 ] * xx [ 608 ] ) ; xx [ 587 ] = xx [ 39 ] - (
xx [ 447 ] * xx [ 609 ] + xx [ 513 ] * xx [ 610 ] + xx [ 556 ] * xx [ 611 ] )
; xx [ 588 ] = xx [ 62 ] - ( xx [ 459 ] * xx [ 603 ] + xx [ 520 ] * xx [ 604
] + xx [ 557 ] * xx [ 605 ] ) ; xx [ 589 ] = xx [ 63 ] - ( xx [ 459 ] * xx [
606 ] + xx [ 520 ] * xx [ 607 ] + xx [ 557 ] * xx [ 608 ] ) ; xx [ 590 ] = xx
[ 65 ] - ( xx [ 459 ] * xx [ 609 ] + xx [ 520 ] * xx [ 610 ] + xx [ 557 ] *
xx [ 611 ] ) ; xx [ 591 ] = xx [ 66 ] - ( xx [ 411 ] * xx [ 603 ] + xx [ 521
] * xx [ 604 ] + xx [ 553 ] * xx [ 605 ] ) ; xx [ 592 ] = xx [ 64 ] - ( xx [
411 ] * xx [ 606 ] + xx [ 521 ] * xx [ 607 ] + xx [ 553 ] * xx [ 608 ] ) ; xx
[ 593 ] = xx [ 67 ] - ( xx [ 411 ] * xx [ 609 ] + xx [ 521 ] * xx [ 610 ] +
xx [ 553 ] * xx [ 611 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 585
, xx + 40 , xx + 612 ) ; pm_math_Matrix3x3_compose_ra ( xx + 40 , xx + 612 ,
xx + 585 ) ; xx [ 62 ] = xx [ 22 ] ; xx [ 63 ] = xx [ 28 ] ; xx [ 64 ] = xx [
29 ] ; xx [ 65 ] = xx [ 31 ] ; pm_math_Quaternion_xform_ra ( xx + 62 , xx +
68 , xx + 444 ) ; xx [ 22 ] = 0.01018286292250497 - xx [ 445 ] ; xx [ 28 ] =
0.01643121746247235 - xx [ 446 ] ; xx [ 463 ] = - xx [ 444 ] ; xx [ 464 ] =
xx [ 22 ] ; xx [ 465 ] = xx [ 28 ] ; pm_math_Matrix3x3_postCross_ra ( xx +
585 , xx + 463 , xx + 612 ) ; xx [ 29 ] = xx [ 460 ] * xx [ 603 ] + xx [ 547
] * xx [ 604 ] + xx [ 555 ] * xx [ 605 ] ; xx [ 31 ] = xx [ 461 ] * xx [ 603
] + xx [ 540 ] * xx [ 604 ] + xx [ 561 ] * xx [ 605 ] ; xx [ 34 ] = xx [ 461
] * xx [ 606 ] + xx [ 540 ] * xx [ 607 ] + xx [ 561 ] * xx [ 608 ] ; xx [ 621
] = xx [ 522 ] - ( xx [ 413 ] * xx [ 603 ] + xx [ 546 ] * xx [ 604 ] + xx [
554 ] * xx [ 605 ] ) + xx [ 412 ] ; xx [ 622 ] = xx [ 523 ] - xx [ 29 ] ; xx
[ 623 ] = xx [ 524 ] - xx [ 31 ] ; xx [ 624 ] = xx [ 525 ] - xx [ 29 ] ; xx [
625 ] = xx [ 526 ] - ( xx [ 460 ] * xx [ 606 ] + xx [ 547 ] * xx [ 607 ] + xx
[ 555 ] * xx [ 608 ] ) + xx [ 412 ] ; xx [ 626 ] = xx [ 527 ] - xx [ 34 ] ;
xx [ 627 ] = xx [ 528 ] - xx [ 31 ] ; xx [ 628 ] = xx [ 529 ] - xx [ 34 ] ;
xx [ 629 ] = xx [ 530 ] - ( xx [ 461 ] * xx [ 609 ] + xx [ 540 ] * xx [ 610 ]
+ xx [ 561 ] * xx [ 611 ] ) + xx [ 412 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 621 , xx + 40 , xx + 522 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 40 , xx + 522 , xx + 621 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 621 , xx + 463 , xx + 39 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 39 , xx + 463 , xx + 522 ) ; xx [ 29 ] =
xx [ 577 ] - xx [ 613 ] - xx [ 615 ] - xx [ 523 ] ; xx [ 31 ] = xx [ 578 ] -
xx [ 614 ] - xx [ 618 ] - xx [ 524 ] ; xx [ 34 ] = 3.490126909650324e-6 ; xx
[ 35 ] = xx [ 34 ] + xx [ 580 ] - xx [ 616 ] - xx [ 616 ] - xx [ 526 ] ; xx [
48 ] = xx [ 581 ] - xx [ 617 ] - xx [ 619 ] - xx [ 527 ] ; xx [ 56 ] = xx [
583 ] - xx [ 619 ] - xx [ 617 ] - xx [ 529 ] ; xx [ 66 ] =
5.069554565459512e-6 ; xx [ 67 ] = xx [ 66 ] + xx [ 584 ] - xx [ 620 ] - xx [
620 ] - xx [ 530 ] ; xx [ 630 ] = xx [ 19 ] + xx [ 576 ] - xx [ 612 ] - xx [
612 ] - xx [ 522 ] ; xx [ 631 ] = xx [ 29 ] ; xx [ 632 ] = xx [ 31 ] ; xx [
633 ] = xx [ 579 ] - xx [ 615 ] - xx [ 613 ] - xx [ 525 ] ; xx [ 634 ] = xx [
35 ] ; xx [ 635 ] = xx [ 48 ] ; xx [ 636 ] = xx [ 582 ] - xx [ 618 ] - xx [
614 ] - xx [ 528 ] ; xx [ 637 ] = xx [ 56 ] ; xx [ 638 ] = xx [ 67 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 630 , xx + 16 , xx + 522 ) ; xx [ 96 ] = xx
[ 585 ] - xx [ 39 ] ; xx [ 39 ] = xx [ 588 ] - xx [ 40 ] ; xx [ 40 ] = xx [
589 ] - xx [ 43 ] ; xx [ 43 ] = xx [ 590 ] - xx [ 46 ] ; xx [ 46 ] = xx [ 591
] - xx [ 41 ] ; xx [ 41 ] = xx [ 592 ] - xx [ 44 ] ; xx [ 44 ] = xx [ 593 ] -
xx [ 47 ] ; xx [ 576 ] = xx [ 96 ] ; xx [ 577 ] = xx [ 586 ] - xx [ 42 ] ; xx
[ 578 ] = xx [ 587 ] - xx [ 45 ] ; xx [ 579 ] = xx [ 39 ] ; xx [ 580 ] = xx [
40 ] ; xx [ 581 ] = xx [ 43 ] ; xx [ 582 ] = xx [ 46 ] ; xx [ 583 ] = xx [ 41
] ; xx [ 584 ] = xx [ 44 ] ; xx [ 42 ] = 8.538390167322628e-3 ; xx [ 45 ] =
0.0187094325596859 ; xx [ 47 ] = xx [ 42 ] * xx [ 9 ] + xx [ 45 ] * xx [ 5 ]
; xx [ 120 ] = xx [ 45 ] * xx [ 13 ] ; xx [ 126 ] = xx [ 42 ] * xx [ 13 ] ;
xx [ 525 ] = xx [ 47 ] ; xx [ 526 ] = - xx [ 120 ] ; xx [ 527 ] = - xx [ 126
] ; pm_math_Matrix3x3_xform_ra ( xx + 576 , xx + 525 , xx + 528 ) ; xx [ 140
] = xx [ 522 ] + xx [ 528 ] ; xx [ 146 ] = xx [ 523 ] + xx [ 529 ] ; xx [ 148
] = xx [ 524 ] + xx [ 530 ] ; xx [ 522 ] = xx [ 140 ] ; xx [ 523 ] = xx [ 146
] ; xx [ 524 ] = xx [ 148 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 576
, xx + 16 , xx + 528 ) ; xx [ 149 ] = 9.266435618121707e-3 ; xx [ 172 ] = xx
[ 149 ] + xx [ 621 ] ; xx [ 585 ] = xx [ 172 ] ; xx [ 586 ] = xx [ 622 ] ; xx
[ 587 ] = xx [ 623 ] ; xx [ 588 ] = xx [ 624 ] ; xx [ 589 ] = xx [ 149 ] + xx
[ 625 ] ; xx [ 590 ] = xx [ 626 ] ; xx [ 591 ] = xx [ 627 ] ; xx [ 592 ] = xx
[ 628 ] ; xx [ 593 ] = xx [ 149 ] + xx [ 629 ] ; pm_math_Matrix3x3_xform_ra (
xx + 585 , xx + 525 , xx + 534 ) ; xx [ 149 ] = xx [ 528 ] + xx [ 534 ] ; xx
[ 412 ] = xx [ 529 ] + xx [ 535 ] ; xx [ 445 ] = xx [ 530 ] + xx [ 536 ] ; xx
[ 528 ] = xx [ 149 ] ; xx [ 529 ] = xx [ 412 ] ; xx [ 530 ] = xx [ 445 ] ; xx
[ 446 ] = xx [ 10 ] * xx [ 3 ] ; xx [ 534 ] = xx [ 14 ] * xx [ 8 ] ; xx [ 535
] = xx [ 446 ] + xx [ 534 ] ; xx [ 536 ] = xx [ 12 ] * xx [ 4 ] * xx [ 535 ]
; xx [ 541 ] = xx [ 14 ] - xx [ 12 ] * xx [ 8 ] * xx [ 535 ] ; xx [ 542 ] =
xx [ 12 ] * xx [ 3 ] * xx [ 535 ] - xx [ 10 ] ; xx [ 558 ] = xx [ 536 ] ; xx
[ 559 ] = xx [ 541 ] ; xx [ 560 ] = xx [ 542 ] ; pm_math_Matrix3x3_xform_ra (
xx + 630 , xx + 558 , xx + 562 ) ; xx [ 535 ] = xx [ 42 ] * xx [ 542 ] + xx [
541 ] * xx [ 45 ] ; xx [ 543 ] = xx [ 45 ] * xx [ 536 ] ; xx [ 544 ] = xx [
42 ] * xx [ 536 ] ; xx [ 612 ] = xx [ 535 ] ; xx [ 613 ] = - xx [ 543 ] ; xx
[ 614 ] = - xx [ 544 ] ; pm_math_Matrix3x3_xform_ra ( xx + 576 , xx + 612 ,
xx + 615 ) ; xx [ 565 ] = xx [ 562 ] + xx [ 615 ] ; xx [ 566 ] = xx [ 563 ] +
xx [ 616 ] ; xx [ 562 ] = xx [ 564 ] + xx [ 617 ] ; xx [ 615 ] = xx [ 565 ] ;
xx [ 616 ] = xx [ 566 ] ; xx [ 617 ] = xx [ 562 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 576 , xx + 558 , xx + 618 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 585 , xx + 612 , xx + 621 ) ; xx [ 563 ] =
xx [ 618 ] + xx [ 621 ] ; xx [ 564 ] = xx [ 619 ] + xx [ 622 ] ; xx [ 618 ] =
xx [ 620 ] + xx [ 623 ] ; xx [ 619 ] = xx [ 563 ] ; xx [ 620 ] = xx [ 564 ] ;
xx [ 621 ] = xx [ 618 ] ; xx [ 622 ] = pm_math_Vector3_dot_ra ( xx + 16 , xx
+ 615 ) + pm_math_Vector3_dot_ra ( xx + 525 , xx + 619 ) ; xx [ 623 ] =
0.01308562271097496 ; xx [ 625 ] = xx [ 10 ] * xx [ 29 ] + xx [ 14 ] * xx [
31 ] + xx [ 623 ] * xx [ 96 ] ; xx [ 29 ] = xx [ 35 ] * xx [ 10 ] + xx [ 14 ]
* xx [ 48 ] + xx [ 623 ] * xx [ 39 ] ; xx [ 31 ] = xx [ 10 ] * xx [ 56 ] + xx
[ 67 ] * xx [ 14 ] + xx [ 623 ] * xx [ 46 ] ; xx [ 639 ] = xx [ 625 ] ; xx [
640 ] = xx [ 29 ] ; xx [ 641 ] = xx [ 31 ] ; xx [ 35 ] = xx [ 10 ] * xx [ 39
] + xx [ 14 ] * xx [ 46 ] + xx [ 172 ] * xx [ 623 ] ; xx [ 39 ] = xx [ 10 ] *
xx [ 40 ] + xx [ 14 ] * xx [ 41 ] + xx [ 623 ] * xx [ 624 ] ; xx [ 40 ] = xx
[ 10 ] * xx [ 43 ] + xx [ 14 ] * xx [ 44 ] + xx [ 623 ] * xx [ 627 ] ; xx [
626 ] = xx [ 35 ] ; xx [ 627 ] = xx [ 39 ] ; xx [ 628 ] = xx [ 40 ] ; xx [ 41
] = pm_math_Vector3_dot_ra ( xx + 16 , xx + 639 ) + pm_math_Vector3_dot_ra (
xx + 525 , xx + 626 ) ; xx [ 43 ] = pm_math_Vector3_dot_ra ( xx + 558 , xx +
639 ) + pm_math_Vector3_dot_ra ( xx + 612 , xx + 626 ) ; xx [ 639 ] =
pm_math_Vector3_dot_ra ( xx + 16 , xx + 522 ) + pm_math_Vector3_dot_ra ( xx +
525 , xx + 528 ) ; xx [ 640 ] = xx [ 622 ] ; xx [ 641 ] = xx [ 41 ] ; xx [
642 ] = xx [ 622 ] ; xx [ 643 ] = pm_math_Vector3_dot_ra ( xx + 558 , xx +
615 ) + pm_math_Vector3_dot_ra ( xx + 612 , xx + 619 ) ; xx [ 644 ] = xx [ 43
] ; xx [ 645 ] = xx [ 41 ] ; xx [ 646 ] = xx [ 43 ] ; xx [ 647 ] = xx [ 29 ]
* xx [ 10 ] + xx [ 31 ] * xx [ 14 ] + xx [ 35 ] * xx [ 623 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 639 , 3 , xx + 522 ) ; bb [ 0 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 1 ] ) ) > xx [ 104 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ;
if ( bb [ 0 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L5/Gimbal Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L5/Gimbal Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 41 ] = 5.729577951308232 ; xx [ 43 ] =
0.5235987755982988 ; xx [ 44 ] = state [ 0 ] + xx [ 43 ] ; if ( xx [ 138 ] <
xx [ 44 ] ) xx [ 44 ] = xx [ 138 ] ; xx [ 46 ] = 1.74532925199433e-3 ; xx [
48 ] = - ( xx [ 44 ] / xx [ 46 ] ) ; if ( xx [ 1 ] < xx [ 48 ] ) xx [ 48 ] =
xx [ 1 ] ; xx [ 56 ] = 3.0 ; xx [ 67 ] = 5729.577951308232 ; xx [ 96 ] = xx [
67 ] * state [ 3 ] ; xx [ 104 ] = 5.729577951308232e5 ; xx [ 172 ] = xx [ 48
] * xx [ 48 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 48 ] ) * ( ( - xx [ 44 ] == xx
[ 138 ] ? xx [ 138 ] : - xx [ 96 ] ) - xx [ 104 ] * xx [ 44 ] ) ; if ( xx [
138 ] > xx [ 172 ] ) xx [ 172 ] = xx [ 138 ] ; xx [ 44 ] = state [ 0 ] - xx [
43 ] ; if ( xx [ 138 ] > xx [ 44 ] ) xx [ 44 ] = xx [ 138 ] ; xx [ 48 ] = xx
[ 44 ] / xx [ 46 ] ; if ( xx [ 1 ] < xx [ 48 ] ) xx [ 48 ] = xx [ 1 ] ; xx [
522 ] = ( xx [ 104 ] * xx [ 44 ] + ( xx [ 44 ] == xx [ 138 ] ? xx [ 138 ] :
xx [ 96 ] ) ) * xx [ 48 ] * xx [ 48 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 48 ] )
; if ( xx [ 138 ] > xx [ 522 ] ) xx [ 522 ] = xx [ 138 ] ; xx [ 44 ] = xx [
13 ] * state [ 3 ] ; xx [ 48 ] = xx [ 446 ] + xx [ 534 ] ; xx [ 96 ] = xx [
12 ] * xx [ 4 ] * xx [ 48 ] * state [ 4 ] ; xx [ 4 ] = xx [ 44 ] + xx [ 96 ]
; xx [ 446 ] = xx [ 5 ] * state [ 3 ] ; xx [ 523 ] = ( xx [ 14 ] - xx [ 12 ]
* xx [ 8 ] * xx [ 48 ] ) * state [ 4 ] ; xx [ 8 ] = xx [ 10 ] * state [ 5 ] ;
xx [ 524 ] = xx [ 446 ] + xx [ 523 ] + xx [ 8 ] ; xx [ 528 ] = xx [ 9 ] *
state [ 3 ] ; xx [ 529 ] = ( xx [ 12 ] * xx [ 3 ] * xx [ 48 ] - xx [ 10 ] ) *
state [ 4 ] ; xx [ 3 ] = xx [ 14 ] * state [ 5 ] ; xx [ 48 ] = xx [ 528 ] +
xx [ 529 ] + xx [ 3 ] ; xx [ 615 ] = xx [ 4 ] ; xx [ 616 ] = xx [ 524 ] ; xx
[ 617 ] = xx [ 48 ] ; xx [ 619 ] = xx [ 19 ] * xx [ 4 ] ; xx [ 620 ] = xx [
524 ] * xx [ 34 ] ; xx [ 621 ] = xx [ 48 ] * xx [ 66 ] ;
pm_math_Vector3_cross_ra ( xx + 615 , xx + 619 , xx + 626 ) ; xx [ 19 ] =
0.6903818921736785 * input [ 143 ] ; xx [ 34 ] = input [ 143 ] -
1.380763784347357 * xx [ 19 ] ; xx [ 66 ] = 1.446890241806463 * xx [ 19 ] ;
xx [ 19 ] = 0.0375915374507293 ; xx [ 619 ] = - 2.405769667632971e-13 ; xx [
620 ] = - 0.03983410794452454 ; xx [ 621 ] = - 0.01645986959431302 ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 619 , xx + 648 ) ; xx [ 530 ] =
xx [ 648 ] - xx [ 444 ] ; xx [ 534 ] = xx [ 649 ] + xx [ 22 ] + xx [ 19 ] ;
xx [ 622 ] = 1.590244414800102e-3 ; xx [ 624 ] = xx [ 650 ] + xx [ 28 ] + xx
[ 622 ] ; xx [ 629 ] = sqrt ( xx [ 530 ] * xx [ 530 ] + xx [ 534 ] * xx [ 534
] + xx [ 624 ] * xx [ 624 ] ) ; if ( xx [ 629 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L4-L5 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 629 ] = input [ 152 ] / xx [ 629 ] ; xx [ 648 ] = xx [
629 ] * xx [ 624 ] ; xx [ 624 ] = xx [ 629 ] * xx [ 534 ] ; xx [ 534 ] =
0.01759714945393536 ; xx [ 649 ] = - xx [ 11 ] ; xx [ 650 ] = xx [ 15 ] ; xx
[ 651 ] = xx [ 7 ] ; xx [ 652 ] = xx [ 6 ] ; xx [ 653 ] = xx [ 15 ] ; xx [
654 ] = xx [ 7 ] ; xx [ 655 ] = xx [ 6 ] ; xx [ 656 ] = 0.03563872347849285 ;
xx [ 657 ] = xx [ 6 ] * xx [ 656 ] - xx [ 534 ] * xx [ 7 ] ; xx [ 658 ] = xx
[ 534 ] * xx [ 15 ] ; xx [ 659 ] = xx [ 656 ] * xx [ 15 ] ; xx [ 660 ] = xx [
657 ] ; xx [ 661 ] = xx [ 658 ] ; xx [ 662 ] = - xx [ 659 ] ;
pm_math_Vector3_cross_ra ( xx + 653 , xx + 660 , xx + 663 ) ; xx [ 660 ] = xx
[ 45 ] * xx [ 7 ] + xx [ 6 ] * xx [ 42 ] ; xx [ 661 ] = xx [ 45 ] * xx [ 15 ]
; xx [ 662 ] = xx [ 42 ] * xx [ 15 ] ; xx [ 666 ] = - xx [ 660 ] ; xx [ 667 ]
= xx [ 661 ] ; xx [ 668 ] = xx [ 662 ] ; pm_math_Vector3_cross_ra ( xx + 653
, xx + 666 , xx + 669 ) ; xx [ 653 ] = ( xx [ 11 ] * xx [ 660 ] + xx [ 669 ]
) * xx [ 12 ] ; xx [ 654 ] = ( xx [ 663 ] - xx [ 11 ] * xx [ 657 ] ) * xx [
12 ] - xx [ 653 ] ; xx [ 655 ] = 0.06197538565817786 - xx [ 12 ] * ( xx [ 670
] - xx [ 661 ] * xx [ 11 ] ) ; xx [ 657 ] = xx [ 12 ] * ( xx [ 664 ] - xx [
658 ] * xx [ 11 ] ) - xx [ 656 ] + xx [ 655 ] - 0.0257594283537832 ; xx [ 658
] = 0.9283707866246274 - ( xx [ 671 ] - xx [ 662 ] * xx [ 11 ] ) * xx [ 12 ]
; xx [ 660 ] = ( xx [ 659 ] * xx [ 11 ] + xx [ 665 ] ) * xx [ 12 ] - xx [ 534
] + xx [ 658 ] - 0.906781702449562 ; xx [ 659 ] = sqrt ( xx [ 654 ] * xx [
654 ] + xx [ 657 ] * xx [ 657 ] + xx [ 660 ] * xx [ 660 ] ) ; if ( xx [ 659 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L5-S1 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 659 ] = input [ 153 ] / xx [ 659 ] ; xx [ 661 ] = xx [
659 ] * xx [ 654 ] ; xx [ 662 ] = xx [ 659 ] * xx [ 657 ] ; xx [ 663 ] = xx [
659 ] * xx [ 660 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 649 , xx + 661
, xx + 664 ) ; xx [ 654 ] = 0.04055699920652953 ; xx [ 657 ] =
0.01302079271818882 ; xx [ 660 ] = 0.0135421645305857 ; xx [ 661 ] = - xx [
654 ] ; xx [ 662 ] = - xx [ 657 ] ; xx [ 663 ] = xx [ 660 ] ; xx [ 667 ] = -
0.03653985023506644 ; xx [ 668 ] = - 0.01645220048935106 ; xx [ 669 ] =
3.239433747529818e-3 ; pm_math_Quaternion_xform_ra ( xx + 62 , xx + 667 , xx
+ 670 ) ; xx [ 673 ] = xx [ 670 ] - xx [ 444 ] + xx [ 654 ] ; xx [ 654 ] = xx
[ 671 ] + xx [ 22 ] + xx [ 657 ] ; xx [ 657 ] = xx [ 672 ] + xx [ 28 ] - xx [
660 ] ; xx [ 660 ] = sqrt ( xx [ 673 ] * xx [ 673 ] + xx [ 654 ] * xx [ 654 ]
+ xx [ 657 ] * xx [ 657 ] ) ; if ( xx [ 660 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 660 ] = input [ 157 ] / xx [ 660 ] ; xx [ 670 ] = xx [
660 ] * xx [ 673 ] ; xx [ 671 ] = xx [ 660 ] * xx [ 654 ] ; xx [ 654 ] = xx [
660 ] * xx [ 657 ] ; xx [ 672 ] = - xx [ 670 ] ; xx [ 673 ] = - xx [ 671 ] ;
xx [ 674 ] = - xx [ 654 ] ; pm_math_Vector3_cross_ra ( xx + 661 , xx + 672 ,
xx + 675 ) ; xx [ 661 ] = - 0.04008119964598488 ; xx [ 662 ] = -
0.01084940380361654 ; xx [ 663 ] = - 9.8613284252828e-4 ;
pm_math_Quaternion_xform_ra ( xx + 649 , xx + 661 , xx + 672 ) ; xx [ 657 ] =
0.044078899383545 ; xx [ 678 ] = xx [ 672 ] - xx [ 653 ] + xx [ 657 ] ; xx [
679 ] = 0.0499199981689453 ; xx [ 680 ] = xx [ 673 ] + xx [ 655 ] - xx [ 679
] ; xx [ 672 ] = 0.919140991210938 ; xx [ 673 ] = xx [ 674 ] + xx [ 658 ] -
xx [ 672 ] ; xx [ 674 ] = sqrt ( xx [ 678 ] * xx [ 678 ] + xx [ 680 ] * xx [
680 ] + xx [ 673 ] * xx [ 673 ] ) ; if ( xx [ 674 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 674 ] = input [ 158 ] / xx [ 674 ] ; xx [ 681 ] = xx [
674 ] * xx [ 678 ] ; xx [ 682 ] = xx [ 674 ] * xx [ 680 ] ; xx [ 683 ] = xx [
674 ] * xx [ 673 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 649 , xx + 681
, xx + 684 ) ; pm_math_Vector3_cross_ra ( xx + 661 , xx + 684 , xx + 680 ) ;
xx [ 661 ] = 0.04055699920655626 ; xx [ 662 ] = 0.0130207927181218 ; xx [ 663
] = 0.01354216453058323 ; xx [ 687 ] = xx [ 661 ] ; xx [ 688 ] = - xx [ 662 ]
; xx [ 689 ] = xx [ 663 ] ; xx [ 690 ] = 0.03653985023490417 ; xx [ 691 ] = -
0.01645220048983929 ; xx [ 692 ] = 3.239433747517833e-3 ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 690 , xx + 693 ) ; xx [ 673 ] =
xx [ 693 ] - xx [ 444 ] - xx [ 661 ] ; xx [ 661 ] = xx [ 694 ] + xx [ 22 ] +
xx [ 662 ] ; xx [ 662 ] = xx [ 695 ] + xx [ 28 ] - xx [ 663 ] ; xx [ 663 ] =
sqrt ( xx [ 673 ] * xx [ 673 ] + xx [ 661 ] * xx [ 661 ] + xx [ 662 ] * xx [
662 ] ) ; if ( xx [ 663 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 663 ] = input [ 162 ] / xx [ 663 ] ; xx [ 678 ] = xx [
663 ] * xx [ 673 ] ; xx [ 673 ] = xx [ 663 ] * xx [ 661 ] ; xx [ 661 ] = xx [
663 ] * xx [ 662 ] ; xx [ 693 ] = - xx [ 678 ] ; xx [ 694 ] = - xx [ 673 ] ;
xx [ 695 ] = - xx [ 661 ] ; pm_math_Vector3_cross_ra ( xx + 687 , xx + 693 ,
xx + 696 ) ; xx [ 687 ] = 0.04008119964600713 ; xx [ 688 ] = -
0.01084940380355031 ; xx [ 689 ] = - 9.861328425307225e-4 ;
pm_math_Quaternion_xform_ra ( xx + 649 , xx + 687 , xx + 693 ) ; xx [ 662 ] =
xx [ 693 ] - xx [ 653 ] - xx [ 657 ] ; xx [ 657 ] = xx [ 694 ] + xx [ 655 ] -
xx [ 679 ] ; xx [ 679 ] = xx [ 695 ] + xx [ 658 ] - xx [ 672 ] ; xx [ 672 ] =
sqrt ( xx [ 662 ] * xx [ 662 ] + xx [ 657 ] * xx [ 657 ] + xx [ 679 ] * xx [
679 ] ) ; if ( xx [ 672 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 672 ] = input [ 163 ] / xx [ 672 ] ; xx [ 693 ] = xx [
672 ] * xx [ 662 ] ; xx [ 694 ] = xx [ 672 ] * xx [ 657 ] ; xx [ 695 ] = xx [
672 ] * xx [ 679 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 649 , xx + 693
, xx + 699 ) ; pm_math_Vector3_cross_ra ( xx + 687 , xx + 699 , xx + 693 ) ;
xx [ 657 ] = 0.04705808460307085 ; xx [ 687 ] = - 3.166185351073283e-13 ; xx
[ 688 ] = - 0.0513211464694144 ; xx [ 689 ] = - 0.01219126570664875 ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 687 , xx + 702 ) ; xx [ 662 ] =
xx [ 702 ] - xx [ 444 ] ; xx [ 444 ] = xx [ 703 ] + xx [ 22 ] + xx [ 657 ] ;
xx [ 22 ] = 9.875319015864496e-3 ; xx [ 679 ] = xx [ 704 ] + xx [ 28 ] + xx [
22 ] ; xx [ 28 ] = sqrt ( xx [ 662 ] * xx [ 662 ] + xx [ 444 ] * xx [ 444 ] +
xx [ 679 ] * xx [ 679 ] ) ; if ( xx [ 28 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L4-L5 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 28 ] = input [ 178 ] / xx [ 28 ] ; xx [ 683 ] = xx [
28 ] * xx [ 679 ] ; xx [ 679 ] = xx [ 28 ] * xx [ 444 ] ; xx [ 702 ] = -
3.88840995326696e-5 ; xx [ 703 ] = - 0.04658678468440397 ; xx [ 704 ] = -
0.0171197768192325 ; pm_math_Quaternion_xform_ra ( xx + 649 , xx + 702 , xx +
705 ) ; xx [ 444 ] = xx [ 705 ] - xx [ 653 ] ; xx [ 708 ] = xx [ 706 ] + xx [
655 ] - 0.019933675415717 ; xx [ 705 ] = xx [ 707 ] + xx [ 658 ] -
0.904526583782246 ; xx [ 706 ] = sqrt ( xx [ 444 ] * xx [ 444 ] + xx [ 708 ]
* xx [ 708 ] + xx [ 705 ] * xx [ 705 ] ) ; if ( xx [ 706 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L5-S1 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 706 ] = input [ 179 ] / xx [ 706 ] ; xx [ 709 ] = xx [
706 ] * xx [ 444 ] ; xx [ 710 ] = xx [ 706 ] * xx [ 708 ] ; xx [ 711 ] = xx [
706 ] * xx [ 705 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 649 , xx + 709
, xx + 712 ) ; pm_math_Vector3_cross_ra ( xx + 702 , xx + 712 , xx + 707 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 615 , xx + 702 ) ; xx [
444 ] = xx [ 268 ] * state [ 9 ] ; xx [ 705 ] = xx [ 466 ] + xx [ 467 ] ; xx
[ 466 ] = ( xx [ 23 ] - ( xx [ 516 ] - xx [ 21 ] * xx [ 705 ] ) * xx [ 12 ] )
* state [ 10 ] ; xx [ 21 ] = xx [ 444 ] + xx [ 466 ] ; xx [ 23 ] = xx [ 702 ]
+ xx [ 21 ] ; xx [ 467 ] = xx [ 33 ] * state [ 9 ] ; xx [ 516 ] = ( xx [ 25 ]
- xx [ 12 ] * ( xx [ 24 ] * xx [ 705 ] + xx [ 518 ] ) ) * state [ 10 ] ; xx [
24 ] = xx [ 26 ] * state [ 11 ] ; xx [ 518 ] = xx [ 467 ] + xx [ 516 ] + xx [
24 ] ; xx [ 710 ] = xx [ 703 ] + xx [ 518 ] ; xx [ 711 ] = xx [ 36 ] * state
[ 9 ] ; xx [ 715 ] = ( xx [ 12 ] * ( xx [ 519 ] + xx [ 20 ] * xx [ 705 ] ) -
xx [ 26 ] ) * state [ 10 ] ; xx [ 20 ] = xx [ 25 ] * state [ 11 ] ; xx [ 519
] = xx [ 711 ] + xx [ 715 ] + xx [ 20 ] ; xx [ 705 ] = xx [ 704 ] + xx [ 519
] ; xx [ 716 ] = xx [ 23 ] ; xx [ 717 ] = xx [ 710 ] ; xx [ 718 ] = xx [ 705
] ; xx [ 719 ] = xx [ 23 ] * xx [ 57 ] ; xx [ 720 ] = xx [ 710 ] * xx [ 134 ]
; xx [ 721 ] = xx [ 705 ] * xx [ 151 ] ; pm_math_Vector3_cross_ra ( xx + 716
, xx + 719 , xx + 722 ) ; xx [ 719 ] = 2.234568172515435e-13 ; xx [ 720 ] =
0.02939308698039612 ; xx [ 721 ] = - 5.661597909317728e-3 ; xx [ 57 ] =
0.7847814363844873 ; xx [ 134 ] = 2.339080312536016e-12 ; xx [ 151 ] = xx [
134 ] * input [ 144 ] ; xx [ 725 ] = 0.619772617260799 ; xx [ 726 ] = xx [
725 ] * input [ 144 ] ; xx [ 727 ] = ( xx [ 57 ] * xx [ 151 ] + xx [ 134 ] *
xx [ 726 ] ) * xx [ 12 ] ; xx [ 728 ] = xx [ 134 ] * xx [ 151 ] ; xx [ 134 ]
= xx [ 12 ] * ( xx [ 728 ] - xx [ 57 ] * xx [ 726 ] ) ; xx [ 57 ] = input [
144 ] - ( xx [ 725 ] * xx [ 726 ] + xx [ 728 ] ) * xx [ 12 ] ; xx [ 728 ] = -
xx [ 727 ] ; xx [ 729 ] = xx [ 134 ] ; xx [ 730 ] = xx [ 57 ] ;
pm_math_Vector3_cross_ra ( xx + 719 , xx + 728 , xx + 731 ) ; xx [ 151 ] =
2.408429233865428e-13 ; xx [ 719 ] = 0.04027776673008778 ; xx [ 720 ] =
9.50951981748549e-6 ; xx [ 728 ] = - xx [ 151 ] ; xx [ 729 ] = - xx [ 719 ] ;
xx [ 730 ] = - xx [ 720 ] ; xx [ 734 ] = 1.167567527306757e-13 ; xx [ 735 ] =
- 0.04472798265803164 ; xx [ 736 ] = - 0.01492244588929304 ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 734 , xx + 737 ) ; xx [ 721 ] =
xx [ 737 ] + xx [ 32 ] + xx [ 151 ] ; xx [ 151 ] = xx [ 738 ] + xx [ 53 ] +
xx [ 719 ] ; xx [ 719 ] = xx [ 739 ] + xx [ 54 ] + xx [ 720 ] ; xx [ 720 ] =
sqrt ( xx [ 721 ] * xx [ 721 ] + xx [ 151 ] * xx [ 151 ] + xx [ 719 ] * xx [
719 ] ) ; if ( xx [ 720 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L3-L4 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 720 ] = input [ 151 ] / xx [ 720 ] ; xx [ 725 ] = xx [
720 ] * xx [ 721 ] ; xx [ 721 ] = xx [ 720 ] * xx [ 151 ] ; xx [ 151 ] = xx [
720 ] * xx [ 719 ] ; xx [ 737 ] = - xx [ 725 ] ; xx [ 738 ] = - xx [ 721 ] ;
xx [ 739 ] = - xx [ 151 ] ; pm_math_Vector3_cross_ra ( xx + 728 , xx + 737 ,
xx + 740 ) ; xx [ 719 ] = xx [ 629 ] * xx [ 530 ] ; xx [ 728 ] = xx [ 719 ] ;
xx [ 729 ] = xx [ 624 ] ; xx [ 730 ] = xx [ 648 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 728 , xx + 737 ) ;
pm_math_Vector3_cross_ra ( xx + 619 , xx + 737 , xx + 728 ) ; xx [ 530 ] =
0.03492720031745133 ; xx [ 619 ] = 0.01477959769994918 ; xx [ 620 ] =
0.01134881117700549 ; xx [ 743 ] = - xx [ 530 ] ; xx [ 744 ] = - xx [ 619 ] ;
xx [ 745 ] = xx [ 620 ] ; xx [ 746 ] = - 0.03087794971463731 ; xx [ 747 ] = -
0.01577384625407678 ; xx [ 748 ] = 4.057911382721502e-3 ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 746 , xx + 749 ) ; xx [ 621 ] =
xx [ 749 ] + xx [ 32 ] + xx [ 530 ] ; xx [ 530 ] = xx [ 750 ] + xx [ 53 ] +
xx [ 619 ] ; xx [ 619 ] = xx [ 751 ] + xx [ 54 ] - xx [ 620 ] ; xx [ 620 ] =
sqrt ( xx [ 621 ] * xx [ 621 ] + xx [ 530 ] * xx [ 530 ] + xx [ 619 ] * xx [
619 ] ) ; if ( xx [ 620 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 620 ] = input [ 156 ] / xx [ 620 ] ; xx [ 726 ] = xx [
620 ] * xx [ 621 ] ; xx [ 621 ] = xx [ 620 ] * xx [ 530 ] ; xx [ 530 ] = xx [
620 ] * xx [ 619 ] ; xx [ 749 ] = - xx [ 726 ] ; xx [ 750 ] = - xx [ 621 ] ;
xx [ 751 ] = - xx [ 530 ] ; pm_math_Vector3_cross_ra ( xx + 743 , xx + 749 ,
xx + 752 ) ; xx [ 743 ] = xx [ 670 ] ; xx [ 744 ] = xx [ 671 ] ; xx [ 745 ] =
xx [ 654 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 743 , xx +
749 ) ; pm_math_Vector3_cross_ra ( xx + 667 , xx + 749 , xx + 743 ) ; xx [
619 ] = 0.03492470169060014 ; xx [ 667 ] = 0.01552496039123881 ; xx [ 668 ] =
0.01167234256981233 ; xx [ 755 ] = xx [ 619 ] ; xx [ 756 ] = - xx [ 667 ] ;
xx [ 757 ] = xx [ 668 ] ; xx [ 758 ] = 0.03087794971468379 ; xx [ 759 ] = -
0.01577384625389952 ; xx [ 760 ] = 4.057911382755352e-3 ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 758 , xx + 761 ) ; xx [ 669 ] =
xx [ 761 ] + xx [ 32 ] - xx [ 619 ] ; xx [ 619 ] = xx [ 762 ] + xx [ 53 ] +
xx [ 667 ] ; xx [ 667 ] = xx [ 763 ] + xx [ 54 ] - xx [ 668 ] ; xx [ 668 ] =
sqrt ( xx [ 669 ] * xx [ 669 ] + xx [ 619 ] * xx [ 619 ] + xx [ 667 ] * xx [
667 ] ) ; if ( xx [ 668 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 668 ] = input [ 161 ] / xx [ 668 ] ; xx [ 761 ] = xx [
668 ] * xx [ 669 ] ; xx [ 669 ] = xx [ 668 ] * xx [ 619 ] ; xx [ 619 ] = xx [
668 ] * xx [ 667 ] ; xx [ 762 ] = - xx [ 761 ] ; xx [ 763 ] = - xx [ 669 ] ;
xx [ 764 ] = - xx [ 619 ] ; pm_math_Vector3_cross_ra ( xx + 755 , xx + 762 ,
xx + 765 ) ; xx [ 755 ] = xx [ 678 ] ; xx [ 756 ] = xx [ 673 ] ; xx [ 757 ] =
xx [ 661 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 755 , xx +
762 ) ; pm_math_Vector3_cross_ra ( xx + 690 , xx + 762 , xx + 755 ) ; xx [
667 ] = 3.146640243071065e-13 ; xx [ 690 ] = 0.05113078984265527 ; xx [ 691 ]
= 8.028332428854309e-3 ; xx [ 768 ] = - xx [ 667 ] ; xx [ 769 ] = - xx [ 690
] ; xx [ 770 ] = - xx [ 691 ] ; xx [ 771 ] = 1.4285959311088e-13 ; xx [ 772 ]
= - 0.05524484988788111 ; xx [ 773 ] = - 7.469488033553544e-3 ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 771 , xx + 774 ) ; xx [ 692 ] =
xx [ 774 ] + xx [ 32 ] + xx [ 667 ] ; xx [ 32 ] = xx [ 775 ] + xx [ 53 ] + xx
[ 690 ] ; xx [ 53 ] = xx [ 776 ] + xx [ 54 ] + xx [ 691 ] ; xx [ 54 ] = sqrt
( xx [ 692 ] * xx [ 692 ] + xx [ 32 ] * xx [ 32 ] + xx [ 53 ] * xx [ 53 ] ) ;
if ( xx [ 54 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L3-L4 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 54 ] = input [ 177 ] / xx [ 54 ] ; xx [ 667 ] = xx [
54 ] * xx [ 692 ] ; xx [ 690 ] = xx [ 54 ] * xx [ 32 ] ; xx [ 32 ] = xx [ 54
] * xx [ 53 ] ; xx [ 774 ] = - xx [ 667 ] ; xx [ 775 ] = - xx [ 690 ] ; xx [
776 ] = - xx [ 32 ] ; pm_math_Vector3_cross_ra ( xx + 768 , xx + 774 , xx +
777 ) ; xx [ 53 ] = xx [ 28 ] * xx [ 662 ] ; xx [ 768 ] = xx [ 53 ] ; xx [
769 ] = xx [ 679 ] ; xx [ 770 ] = xx [ 683 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 768 , xx + 774 ) ;
pm_math_Vector3_cross_ra ( xx + 687 , xx + 774 , xx + 768 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 716 , xx + 687 ) ; xx [
662 ] = xx [ 234 ] * state [ 15 ] ; xx [ 691 ] = xx [ 362 ] + xx [ 363 ] ; xx
[ 362 ] = ( ( xx [ 30 ] * xx [ 691 ] + xx [ 417 ] ) * xx [ 12 ] - xx [ 37 ] )
* state [ 16 ] ; xx [ 30 ] = xx [ 662 ] + xx [ 362 ] ; xx [ 37 ] = xx [ 687 ]
+ xx [ 30 ] ; xx [ 363 ] = xx [ 235 ] * state [ 15 ] ; xx [ 417 ] = ( xx [ 49
] + xx [ 12 ] * ( xx [ 419 ] - xx [ 38 ] * xx [ 691 ] ) ) * state [ 16 ] ; xx
[ 38 ] = xx [ 50 ] * state [ 17 ] ; xx [ 419 ] = xx [ 363 ] + xx [ 417 ] + xx
[ 38 ] ; xx [ 692 ] = xx [ 688 ] + xx [ 419 ] ; xx [ 780 ] = xx [ 51 ] *
state [ 15 ] ; xx [ 781 ] = ( xx [ 12 ] * ( xx [ 27 ] * xx [ 691 ] - xx [ 429
] ) - xx [ 50 ] ) * state [ 16 ] ; xx [ 27 ] = xx [ 49 ] * state [ 17 ] ; xx
[ 429 ] = xx [ 780 ] + xx [ 781 ] + xx [ 27 ] ; xx [ 691 ] = xx [ 689 ] + xx
[ 429 ] ; xx [ 782 ] = xx [ 37 ] ; xx [ 783 ] = xx [ 692 ] ; xx [ 784 ] = xx
[ 691 ] ; xx [ 785 ] = xx [ 37 ] * xx [ 121 ] ; xx [ 786 ] = xx [ 692 ] * xx
[ 145 ] ; xx [ 787 ] = xx [ 691 ] * xx [ 152 ] ; pm_math_Vector3_cross_ra (
xx + 782 , xx + 785 , xx + 788 ) ; xx [ 785 ] = - 1.076648921049358e-13 ; xx
[ 786 ] = 0.03139087037316381 ; xx [ 787 ] = - 4.53476976212614e-3 ; xx [ 121
] = 0.64004249649544 * input [ 146 ] ; xx [ 145 ] = xx [ 12 ] *
1.278175242626048e-12 * xx [ 121 ] ; xx [ 152 ] = xx [ 12 ] *
0.7683395100343888 * xx [ 121 ] ; xx [ 791 ] = input [ 146 ] -
1.28008499299088 * xx [ 121 ] ; xx [ 792 ] = xx [ 145 ] ; xx [ 793 ] = - xx [
152 ] ; xx [ 794 ] = xx [ 791 ] ; pm_math_Vector3_cross_ra ( xx + 785 , xx +
792 , xx + 795 ) ; xx [ 121 ] = 8.947197148478258e-14 ; xx [ 785 ] =
0.0386335011732275 ; xx [ 786 ] = 2.940430357145393e-3 ; xx [ 792 ] = xx [
121 ] ; xx [ 793 ] = - xx [ 785 ] ; xx [ 794 ] = xx [ 786 ] ; xx [ 798 ] = -
6.841875673243218e-13 ; xx [ 799 ] = - 0.04146091222789498 ; xx [ 800 ] = -
0.01351410150666451 ; pm_math_Quaternion_xform_ra ( xx + 85 , xx + 798 , xx +
801 ) ; xx [ 787 ] = xx [ 801 ] - xx [ 80 ] - xx [ 121 ] ; xx [ 121 ] = xx [
802 ] + xx [ 122 ] + xx [ 785 ] ; xx [ 785 ] = xx [ 803 ] + xx [ 119 ] - xx [
786 ] ; xx [ 786 ] = sqrt ( xx [ 787 ] * xx [ 787 ] + xx [ 121 ] * xx [ 121 ]
+ xx [ 785 ] * xx [ 785 ] ) ; if ( xx [ 786 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L2-L3 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 786 ] = input [ 150 ] / xx [ 786 ] ; xx [ 801 ] = xx [
786 ] * xx [ 787 ] ; xx [ 787 ] = xx [ 786 ] * xx [ 121 ] ; xx [ 121 ] = xx [
786 ] * xx [ 785 ] ; xx [ 802 ] = - xx [ 801 ] ; xx [ 803 ] = - xx [ 787 ] ;
xx [ 804 ] = - xx [ 121 ] ; pm_math_Vector3_cross_ra ( xx + 792 , xx + 802 ,
xx + 805 ) ; xx [ 792 ] = xx [ 725 ] ; xx [ 793 ] = xx [ 721 ] ; xx [ 794 ] =
xx [ 151 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 792 , xx +
802 ) ; pm_math_Vector3_cross_ra ( xx + 734 , xx + 802 , xx + 792 ) ; xx [
734 ] = 0.03295989990232563 ; xx [ 735 ] = 0.01601356214963441 ; xx [ 736 ] =
0.01475302284708025 ; xx [ 808 ] = - xx [ 734 ] ; xx [ 809 ] = - xx [ 735 ] ;
xx [ 810 ] = xx [ 736 ] ; xx [ 811 ] = - 0.03226754951497003 ; xx [ 812 ] = -
0.02045999852626687 ; xx [ 813 ] = 5.644585224138508e-3 ;
pm_math_Quaternion_xform_ra ( xx + 85 , xx + 811 , xx + 814 ) ; xx [ 785 ] =
xx [ 814 ] - xx [ 80 ] + xx [ 734 ] ; xx [ 734 ] = xx [ 815 ] + xx [ 122 ] +
xx [ 735 ] ; xx [ 735 ] = xx [ 816 ] + xx [ 119 ] - xx [ 736 ] ; xx [ 736 ] =
sqrt ( xx [ 785 ] * xx [ 785 ] + xx [ 734 ] * xx [ 734 ] + xx [ 735 ] * xx [
735 ] ) ; if ( xx [ 736 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 736 ] = input [ 155 ] / xx [ 736 ] ; xx [ 814 ] = xx [
736 ] * xx [ 785 ] ; xx [ 785 ] = xx [ 736 ] * xx [ 734 ] ; xx [ 734 ] = xx [
736 ] * xx [ 735 ] ; xx [ 815 ] = - xx [ 814 ] ; xx [ 816 ] = - xx [ 785 ] ;
xx [ 817 ] = - xx [ 734 ] ; pm_math_Vector3_cross_ra ( xx + 808 , xx + 815 ,
xx + 818 ) ; xx [ 808 ] = xx [ 726 ] ; xx [ 809 ] = xx [ 621 ] ; xx [ 810 ] =
xx [ 530 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 808 , xx +
815 ) ; pm_math_Vector3_cross_ra ( xx + 746 , xx + 815 , xx + 808 ) ; xx [
735 ] = 0.03295989990236177 ; xx [ 746 ] = 0.01601356214944519 ; xx [ 747 ] =
0.01475302284711638 ; xx [ 821 ] = xx [ 735 ] ; xx [ 822 ] = - xx [ 746 ] ;
xx [ 823 ] = xx [ 747 ] ; xx [ 824 ] = 0.03226754951457088 ; xx [ 825 ] = -
0.02045999852744781 ; xx [ 826 ] = 5.644585223800618e-3 ;
pm_math_Quaternion_xform_ra ( xx + 85 , xx + 824 , xx + 827 ) ; xx [ 748 ] =
xx [ 827 ] - xx [ 80 ] - xx [ 735 ] ; xx [ 735 ] = xx [ 828 ] + xx [ 122 ] +
xx [ 746 ] ; xx [ 746 ] = xx [ 829 ] + xx [ 119 ] - xx [ 747 ] ; xx [ 747 ] =
sqrt ( xx [ 748 ] * xx [ 748 ] + xx [ 735 ] * xx [ 735 ] + xx [ 746 ] * xx [
746 ] ) ; if ( xx [ 747 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 747 ] = input [ 160 ] / xx [ 747 ] ; xx [ 827 ] = xx [
747 ] * xx [ 748 ] ; xx [ 748 ] = xx [ 747 ] * xx [ 735 ] ; xx [ 735 ] = xx [
747 ] * xx [ 746 ] ; xx [ 828 ] = - xx [ 827 ] ; xx [ 829 ] = - xx [ 748 ] ;
xx [ 830 ] = - xx [ 735 ] ; pm_math_Vector3_cross_ra ( xx + 821 , xx + 828 ,
xx + 831 ) ; xx [ 821 ] = xx [ 761 ] ; xx [ 822 ] = xx [ 669 ] ; xx [ 823 ] =
xx [ 619 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 821 , xx +
828 ) ; pm_math_Vector3_cross_ra ( xx + 758 , xx + 828 , xx + 821 ) ; xx [
746 ] = 1.392865120001009e-13 ; xx [ 758 ] = 0.05459122458051579 ; xx [ 759 ]
= 4.374450014251545e-3 ; xx [ 834 ] = xx [ 746 ] ; xx [ 835 ] = - xx [ 758 ]
; xx [ 836 ] = - xx [ 759 ] ; xx [ 837 ] = - 8.371860108687535e-13 ; xx [ 838
] = - 0.05202883057027102 ; xx [ 839 ] = - 5.800535526395379e-3 ;
pm_math_Quaternion_xform_ra ( xx + 85 , xx + 837 , xx + 840 ) ; xx [ 760 ] =
xx [ 840 ] - xx [ 80 ] - xx [ 746 ] ; xx [ 80 ] = xx [ 841 ] + xx [ 122 ] +
xx [ 758 ] ; xx [ 122 ] = xx [ 842 ] + xx [ 119 ] + xx [ 759 ] ; xx [ 119 ] =
sqrt ( xx [ 760 ] * xx [ 760 ] + xx [ 80 ] * xx [ 80 ] + xx [ 122 ] * xx [
122 ] ) ; if ( xx [ 119 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L2-L3 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 119 ] = input [ 176 ] / xx [ 119 ] ; xx [ 746 ] = xx [
119 ] * xx [ 760 ] ; xx [ 758 ] = xx [ 119 ] * xx [ 80 ] ; xx [ 80 ] = xx [
119 ] * xx [ 122 ] ; xx [ 840 ] = - xx [ 746 ] ; xx [ 841 ] = - xx [ 758 ] ;
xx [ 842 ] = - xx [ 80 ] ; pm_math_Vector3_cross_ra ( xx + 834 , xx + 840 ,
xx + 843 ) ; xx [ 834 ] = xx [ 667 ] ; xx [ 835 ] = xx [ 690 ] ; xx [ 836 ] =
xx [ 32 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 834 , xx +
840 ) ; pm_math_Vector3_cross_ra ( xx + 771 , xx + 840 , xx + 834 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 782 , xx + 771 ) ; xx [
122 ] = xx [ 200 ] * state [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
75 , xx + 333 , xx + 846 ) ; xx [ 75 ] = xx [ 846 ] * state [ 22 ] ; xx [ 76
] = xx [ 71 ] * state [ 23 ] ; xx [ 77 ] = xx [ 122 ] + xx [ 75 ] + xx [ 76 ]
; xx [ 78 ] = xx [ 771 ] + xx [ 77 ] ; xx [ 333 ] = xx [ 198 ] * state [ 21 ]
; xx [ 334 ] = xx [ 847 ] * state [ 22 ] ; xx [ 335 ] = xx [ 61 ] * state [
23 ] ; xx [ 759 ] = xx [ 333 ] + xx [ 334 ] + xx [ 335 ] ; xx [ 760 ] = xx [
772 ] + xx [ 759 ] ; xx [ 849 ] = xx [ 60 ] * state [ 21 ] ; xx [ 846 ] = xx
[ 848 ] * state [ 22 ] ; xx [ 847 ] = xx [ 59 ] * state [ 23 ] ; xx [ 848 ] =
xx [ 849 ] + xx [ 846 ] + xx [ 847 ] ; xx [ 850 ] = xx [ 773 ] + xx [ 848 ] ;
xx [ 851 ] = xx [ 78 ] ; xx [ 852 ] = xx [ 760 ] ; xx [ 853 ] = xx [ 850 ] ;
xx [ 854 ] = xx [ 78 ] * xx [ 137 ] ; xx [ 855 ] = xx [ 760 ] * xx [ 147 ] ;
xx [ 856 ] = xx [ 850 ] * xx [ 170 ] ; pm_math_Vector3_cross_ra ( xx + 851 ,
xx + 854 , xx + 857 ) ; xx [ 854 ] = 7.188464506654162e-13 ; xx [ 855 ] =
0.03225412823629766 ; xx [ 856 ] = - 3.133507134471407e-3 ; xx [ 137 ] =
0.7453544942628708 ; xx [ 147 ] = 4.148454829529507e-12 ; xx [ 170 ] = xx [
147 ] * input [ 147 ] ; xx [ 860 ] = 8.56489137069967e-12 ; xx [ 861 ] =
0.6666683417428341 ; xx [ 862 ] = xx [ 861 ] * input [ 147 ] ; xx [ 863 ] = (
xx [ 137 ] * xx [ 170 ] + xx [ 860 ] * xx [ 862 ] ) * xx [ 12 ] ; xx [ 864 ]
= xx [ 12 ] * ( xx [ 860 ] * xx [ 170 ] - xx [ 137 ] * xx [ 862 ] ) ; xx [
137 ] = input [ 147 ] - ( xx [ 861 ] * xx [ 862 ] + xx [ 147 ] * xx [ 170 ] )
* xx [ 12 ] ; xx [ 860 ] = - xx [ 863 ] ; xx [ 861 ] = xx [ 864 ] ; xx [ 862
] = xx [ 137 ] ; pm_math_Vector3_cross_ra ( xx + 854 , xx + 860 , xx + 865 )
; xx [ 147 ] = 5.287708455224579e-13 ; xx [ 170 ] = 0.03767096436270765 ; xx
[ 854 ] = 2.923671226993926e-3 ; xx [ 860 ] = - xx [ 147 ] ; xx [ 861 ] = -
xx [ 170 ] ; xx [ 862 ] = xx [ 854 ] ; xx [ 868 ] = - 6.605394032297572e-4 ;
xx [ 869 ] = - 0.08234236971698156 ; xx [ 870 ] = - 0.130840158189375 ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 868 , xx + 871 ) ; xx [ 855 ] =
xx [ 871 ] + xx [ 82 ] + xx [ 147 ] ; xx [ 147 ] = xx [ 872 ] + xx [ 110 ] +
xx [ 170 ] ; xx [ 170 ] = xx [ 873 ] + xx [ 131 ] - xx [ 854 ] ; xx [ 854 ] =
sqrt ( xx [ 855 ] * xx [ 855 ] + xx [ 147 ] * xx [ 147 ] + xx [ 170 ] * xx [
170 ] ) ; if ( xx [ 854 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L1-L2 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 854 ] = input [ 149 ] / xx [ 854 ] ; xx [ 856 ] = xx [
854 ] * xx [ 855 ] ; xx [ 855 ] = xx [ 854 ] * xx [ 147 ] ; xx [ 147 ] = xx [
854 ] * xx [ 170 ] ; xx [ 871 ] = - xx [ 856 ] ; xx [ 872 ] = - xx [ 855 ] ;
xx [ 873 ] = - xx [ 147 ] ; pm_math_Vector3_cross_ra ( xx + 860 , xx + 871 ,
xx + 874 ) ; xx [ 860 ] = xx [ 801 ] ; xx [ 861 ] = xx [ 787 ] ; xx [ 862 ] =
xx [ 121 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 860 , xx +
871 ) ; pm_math_Vector3_cross_ra ( xx + 798 , xx + 871 , xx + 860 ) ; xx [
170 ] = 0.03234149932875941 ; xx [ 798 ] = 0.02029712378537596 ; xx [ 799 ] =
0.01526834402904475 ; xx [ 877 ] = - xx [ 170 ] ; xx [ 878 ] = - xx [ 798 ] ;
xx [ 879 ] = xx [ 799 ] ; xx [ 880 ] = - 0.02855975561335375 ; xx [ 881 ] = -
0.06190209972411849 ; xx [ 882 ] = - 0.1103901590767691 ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 880 , xx + 883 ) ; xx [ 800 ] =
xx [ 883 ] + xx [ 82 ] + xx [ 170 ] ; xx [ 170 ] = xx [ 884 ] + xx [ 110 ] +
xx [ 798 ] ; xx [ 798 ] = xx [ 885 ] + xx [ 131 ] - xx [ 799 ] ; xx [ 799 ] =
sqrt ( xx [ 800 ] * xx [ 800 ] + xx [ 170 ] * xx [ 170 ] + xx [ 798 ] * xx [
798 ] ) ; if ( xx [ 799 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 799 ] = input [ 154 ] / xx [ 799 ] ; xx [ 883 ] = xx [
799 ] * xx [ 800 ] ; xx [ 800 ] = xx [ 799 ] * xx [ 170 ] ; xx [ 170 ] = xx [
799 ] * xx [ 798 ] ; xx [ 884 ] = - xx [ 883 ] ; xx [ 885 ] = - xx [ 800 ] ;
xx [ 886 ] = - xx [ 170 ] ; pm_math_Vector3_cross_ra ( xx + 877 , xx + 884 ,
xx + 887 ) ; xx [ 877 ] = xx [ 814 ] ; xx [ 878 ] = xx [ 785 ] ; xx [ 879 ] =
xx [ 734 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 877 , xx +
884 ) ; pm_math_Vector3_cross_ra ( xx + 811 , xx + 884 , xx + 877 ) ; xx [
798 ] = 0.03234149932846699 ; xx [ 811 ] = 0.02029712378655961 ; xx [ 812 ] =
0.01526834402870608 ; xx [ 890 ] = xx [ 798 ] ; xx [ 891 ] = - xx [ 811 ] ;
xx [ 892 ] = xx [ 812 ] ; xx [ 893 ] = 0.02720888144130509 ; xx [ 894 ] = -
0.06131317982669802 ; xx [ 895 ] = - 0.1109544366642564 ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 893 , xx + 896 ) ; xx [ 813 ] =
xx [ 896 ] + xx [ 82 ] - xx [ 798 ] ; xx [ 798 ] = xx [ 897 ] + xx [ 110 ] +
xx [ 811 ] ; xx [ 811 ] = xx [ 898 ] + xx [ 131 ] - xx [ 812 ] ; xx [ 812 ] =
sqrt ( xx [ 813 ] * xx [ 813 ] + xx [ 798 ] * xx [ 798 ] + xx [ 811 ] * xx [
811 ] ) ; if ( xx [ 812 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 812 ] = input [ 159 ] / xx [ 812 ] ; xx [ 896 ] = xx [
812 ] * xx [ 813 ] ; xx [ 813 ] = xx [ 812 ] * xx [ 798 ] ; xx [ 798 ] = xx [
812 ] * xx [ 811 ] ; xx [ 897 ] = - xx [ 896 ] ; xx [ 898 ] = - xx [ 813 ] ;
xx [ 899 ] = - xx [ 798 ] ; pm_math_Vector3_cross_ra ( xx + 890 , xx + 897 ,
xx + 900 ) ; xx [ 890 ] = xx [ 827 ] ; xx [ 891 ] = xx [ 748 ] ; xx [ 892 ] =
xx [ 735 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 890 , xx +
897 ) ; pm_math_Vector3_cross_ra ( xx + 824 , xx + 897 , xx + 890 ) ; xx [
811 ] = 7.867570466502235e-13 ; xx [ 824 ] = 0.05039051001790674 ; xx [ 825 ]
= 1.894890190564144e-3 ; xx [ 903 ] = - xx [ 811 ] ; xx [ 904 ] = - xx [ 824
] ; xx [ 905 ] = - xx [ 825 ] ; xx [ 906 ] = - 5.113793264997846e-4 ; xx [
907 ] = - 0.09338152545463696 ; xx [ 908 ] = - 0.1276196231940676 ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 906 , xx + 909 ) ; xx [ 826 ] =
xx [ 909 ] + xx [ 82 ] + xx [ 811 ] ; xx [ 82 ] = xx [ 910 ] + xx [ 110 ] +
xx [ 824 ] ; xx [ 110 ] = xx [ 911 ] + xx [ 131 ] + xx [ 825 ] ; xx [ 131 ] =
sqrt ( xx [ 826 ] * xx [ 826 ] + xx [ 82 ] * xx [ 82 ] + xx [ 110 ] * xx [
110 ] ) ; if ( xx [ 131 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L1-L2 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 131 ] = input [ 175 ] / xx [ 131 ] ; xx [ 811 ] = xx [
131 ] * xx [ 826 ] ; xx [ 824 ] = xx [ 131 ] * xx [ 82 ] ; xx [ 82 ] = xx [
131 ] * xx [ 110 ] ; xx [ 909 ] = - xx [ 811 ] ; xx [ 910 ] = - xx [ 824 ] ;
xx [ 911 ] = - xx [ 82 ] ; pm_math_Vector3_cross_ra ( xx + 903 , xx + 909 ,
xx + 912 ) ; xx [ 903 ] = xx [ 746 ] ; xx [ 904 ] = xx [ 758 ] ; xx [ 905 ] =
xx [ 80 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 903 , xx +
909 ) ; pm_math_Vector3_cross_ra ( xx + 837 , xx + 909 , xx + 903 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 851 , xx + 837 ) ; xx [
110 ] = xx [ 194 ] * state [ 27 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
105 , xx + 238 , xx + 915 ) ; xx [ 105 ] = xx [ 915 ] * state [ 28 ] ; xx [
106 ] = xx [ 99 ] * state [ 29 ] ; xx [ 107 ] = xx [ 110 ] + xx [ 105 ] + xx
[ 106 ] ; xx [ 108 ] = xx [ 837 ] + xx [ 107 ] ; xx [ 238 ] = xx [ 173 ] *
state [ 27 ] ; xx [ 239 ] = xx [ 916 ] * state [ 28 ] ; xx [ 240 ] = xx [ 101
] * state [ 29 ] ; xx [ 825 ] = xx [ 238 ] + xx [ 239 ] - xx [ 240 ] ; xx [
826 ] = xx [ 838 ] + xx [ 825 ] ; xx [ 918 ] = xx [ 81 ] * state [ 27 ] ; xx
[ 915 ] = xx [ 917 ] * state [ 28 ] ; xx [ 916 ] = xx [ 103 ] * state [ 29 ]
; xx [ 917 ] = xx [ 918 ] + xx [ 915 ] + xx [ 916 ] ; xx [ 919 ] = xx [ 839 ]
+ xx [ 917 ] ; xx [ 920 ] = xx [ 108 ] ; xx [ 921 ] = xx [ 826 ] ; xx [ 922 ]
= xx [ 919 ] ; xx [ 923 ] = xx [ 108 ] * xx [ 130 ] ; xx [ 924 ] = xx [ 826 ]
* xx [ 139 ] ; xx [ 925 ] = xx [ 919 ] * xx [ 171 ] ;
pm_math_Vector3_cross_ra ( xx + 920 , xx + 923 , xx + 926 ) ; xx [ 923 ] =
1.621693191737018e-3 ; xx [ 924 ] = 0.01603935194780268 ; xx [ 925 ] =
0.1973953748196041 ; xx [ 130 ] = 4.55902949587172e-3 ; xx [ 139 ] = xx [ 118
] * input [ 55 ] ; xx [ 171 ] = 5.716624978144062e-3 ; xx [ 929 ] = xx [ 171
] * input [ 55 ] ; xx [ 930 ] = xx [ 12 ] * ( xx [ 130 ] * xx [ 139 ] + xx [
112 ] * xx [ 929 ] ) ; xx [ 931 ] = input [ 55 ] - ( xx [ 171 ] * xx [ 929 ]
+ xx [ 118 ] * xx [ 139 ] ) * xx [ 12 ] ; xx [ 932 ] = ( xx [ 130 ] * xx [
929 ] - xx [ 112 ] * xx [ 139 ] ) * xx [ 12 ] ; xx [ 933 ] = - xx [ 930 ] ;
xx [ 934 ] = xx [ 931 ] ; xx [ 935 ] = xx [ 932 ] ; pm_math_Vector3_cross_ra
( xx + 923 , xx + 933 , xx + 936 ) ; xx [ 933 ] = - 0.018100209446297 ; xx [
934 ] = - 0.01269442968022964 ; xx [ 935 ] = - 0.05133171280667402 ; xx [ 139
] = 0.6266170963976704 ; xx [ 929 ] = 0.2657482314476699 ; xx [ 939 ] = xx [
929 ] * input [ 56 ] ; xx [ 940 ] = 0.2923293170648436 ; xx [ 941 ] =
0.6717681611754092 ; xx [ 942 ] = xx [ 941 ] * input [ 56 ] ; xx [ 943 ] = (
xx [ 139 ] * xx [ 939 ] + xx [ 940 ] * xx [ 942 ] ) * xx [ 12 ] ; xx [ 944 ]
= xx [ 12 ] * ( xx [ 139 ] * xx [ 942 ] - xx [ 940 ] * xx [ 939 ] ) ; xx [
139 ] = input [ 56 ] - ( xx [ 941 ] * xx [ 942 ] + xx [ 929 ] * xx [ 939 ] )
* xx [ 12 ] ; xx [ 939 ] = - xx [ 943 ] ; xx [ 940 ] = xx [ 944 ] ; xx [ 941
] = xx [ 139 ] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 939 , xx + 945 )
; xx [ 933 ] = - 0.04099705783254853 ; xx [ 934 ] = - 0.05961213993006317 ;
xx [ 935 ] = - 0.05881187309141439 ; xx [ 929 ] = 0.605680446748911 ; xx [
939 ] = 0.4004339489383053 ; xx [ 940 ] = xx [ 939 ] * input [ 57 ] ; xx [
941 ] = 0.3853263772121769 ; xx [ 942 ] = 0.5694975258842251 ; xx [ 948 ] =
xx [ 942 ] * input [ 57 ] ; xx [ 949 ] = ( xx [ 929 ] * xx [ 940 ] + xx [ 941
] * xx [ 948 ] ) * xx [ 12 ] ; xx [ 950 ] = xx [ 12 ] * ( xx [ 929 ] * xx [
948 ] - xx [ 941 ] * xx [ 940 ] ) ; xx [ 929 ] = input [ 57 ] - ( xx [ 942 ]
* xx [ 948 ] + xx [ 939 ] * xx [ 940 ] ) * xx [ 12 ] ; xx [ 939 ] = - xx [
949 ] ; xx [ 940 ] = xx [ 950 ] ; xx [ 941 ] = xx [ 929 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 939 , xx + 951 ) ; xx [ 933 ] = -
0.01743287306265905 ; xx [ 934 ] = 0.08947660920120139 ; xx [ 935 ] = -
0.01663697113988645 ; xx [ 939 ] = 0.3708578463113209 ; xx [ 940 ] =
0.05876643406157585 ; xx [ 941 ] = xx [ 940 ] * input [ 58 ] ; xx [ 942 ] =
0.1257915591767713 ; xx [ 948 ] = 0.9182523877980892 ; xx [ 954 ] = xx [ 948
] * input [ 58 ] ; xx [ 955 ] = ( xx [ 939 ] * xx [ 941 ] + xx [ 942 ] * xx [
954 ] ) * xx [ 12 ] ; xx [ 956 ] = xx [ 12 ] * ( xx [ 942 ] * xx [ 941 ] - xx
[ 939 ] * xx [ 954 ] ) ; xx [ 939 ] = input [ 58 ] - ( xx [ 948 ] * xx [ 954
] + xx [ 940 ] * xx [ 941 ] ) * xx [ 12 ] ; xx [ 940 ] = xx [ 955 ] ; xx [
941 ] = xx [ 956 ] ; xx [ 942 ] = xx [ 939 ] ; pm_math_Vector3_cross_ra ( xx
+ 933 , xx + 940 , xx + 957 ) ; xx [ 933 ] = - 0.07836549010517251 ; xx [ 934
] = - 0.07517998721125167 ; xx [ 935 ] = - 0.07998584424533033 ; xx [ 940 ] =
0.6735319025732429 ; xx [ 941 ] = 0.2035426274293738 ; xx [ 942 ] = xx [ 941
] * input [ 59 ] ; xx [ 948 ] = 0.1987359770566641 ; xx [ 954 ] =
0.6822237070481707 ; xx [ 960 ] = xx [ 954 ] * input [ 59 ] ; xx [ 961 ] = (
xx [ 940 ] * xx [ 942 ] + xx [ 948 ] * xx [ 960 ] ) * xx [ 12 ] ; xx [ 962 ]
= xx [ 12 ] * ( xx [ 940 ] * xx [ 960 ] - xx [ 948 ] * xx [ 942 ] ) ; xx [
940 ] = input [ 59 ] - ( xx [ 954 ] * xx [ 960 ] + xx [ 941 ] * xx [ 942 ] )
* xx [ 12 ] ; xx [ 963 ] = xx [ 961 ] ; xx [ 964 ] = xx [ 962 ] ; xx [ 965 ]
= xx [ 940 ] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 963 , xx + 966 ) ;
xx [ 933 ] = - 0.06532404920399051 ; xx [ 934 ] = - 0.06376972582252889 ; xx
[ 935 ] = - 0.03607869452634164 ; xx [ 941 ] = 0.3977366413461614 ; xx [ 942
] = 0.06756736113505621 ; xx [ 948 ] = xx [ 942 ] * input [ 60 ] ; xx [ 954 ]
= 0.1528209788093872 ; xx [ 960 ] = 0.9021562859480953 ; xx [ 963 ] = xx [
960 ] * input [ 60 ] ; xx [ 964 ] = ( xx [ 941 ] * xx [ 948 ] + xx [ 954 ] *
xx [ 963 ] ) * xx [ 12 ] ; xx [ 965 ] = xx [ 12 ] * ( xx [ 941 ] * xx [ 963 ]
- xx [ 954 ] * xx [ 948 ] ) ; xx [ 941 ] = input [ 60 ] - ( xx [ 960 ] * xx [
963 ] + xx [ 942 ] * xx [ 948 ] ) * xx [ 12 ] ; xx [ 969 ] = xx [ 964 ] ; xx
[ 970 ] = xx [ 965 ] ; xx [ 971 ] = xx [ 941 ] ; pm_math_Vector3_cross_ra (
xx + 933 , xx + 969 , xx + 972 ) ; xx [ 933 ] = - 0.05345440800790809 ; xx [
934 ] = - 0.02948419519477849 ; xx [ 935 ] = - 0.01170478395315091 ; xx [ 942
] = 0.1836791436760975 ; xx [ 948 ] = 0.01030834667839922 ; xx [ 954 ] = xx [
948 ] * input [ 61 ] ; xx [ 960 ] = 0.03828129250334947 ; xx [ 963 ] =
0.982186465398219 ; xx [ 969 ] = xx [ 963 ] * input [ 61 ] ; xx [ 970 ] = (
xx [ 942 ] * xx [ 954 ] + xx [ 960 ] * xx [ 969 ] ) * xx [ 12 ] ; xx [ 971 ]
= xx [ 12 ] * ( xx [ 942 ] * xx [ 969 ] - xx [ 960 ] * xx [ 954 ] ) ; xx [
942 ] = input [ 61 ] - ( xx [ 963 ] * xx [ 969 ] + xx [ 948 ] * xx [ 954 ] )
* xx [ 12 ] ; xx [ 975 ] = - xx [ 970 ] ; xx [ 976 ] = xx [ 971 ] ; xx [ 977
] = xx [ 942 ] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 975 , xx + 978 )
; xx [ 933 ] = - 0.04199285130556987 ; xx [ 934 ] = 2.315642183133806e-3 ; xx
[ 935 ] = - 1.535421406011225e-3 ; xx [ 948 ] = 5.7833158625729e-3 ; xx [ 954
] = 0.9927480738095794 ; xx [ 960 ] = xx [ 954 ] * input [ 62 ] ; xx [ 963 ]
= 0.1200301699424373 ; xx [ 969 ] = 3.251693188713919e-3 ; xx [ 975 ] = xx [
969 ] * input [ 62 ] ; xx [ 976 ] = ( xx [ 948 ] * xx [ 960 ] - xx [ 963 ] *
xx [ 975 ] ) * xx [ 12 ] ; xx [ 977 ] = xx [ 12 ] * ( xx [ 948 ] * xx [ 975 ]
+ xx [ 963 ] * xx [ 960 ] ) ; xx [ 948 ] = input [ 62 ] - ( xx [ 954 ] * xx [
960 ] + xx [ 969 ] * xx [ 975 ] ) * xx [ 12 ] ; xx [ 981 ] = xx [ 976 ] ; xx
[ 982 ] = xx [ 977 ] ; xx [ 983 ] = xx [ 948 ] ; pm_math_Vector3_cross_ra (
xx + 933 , xx + 981 , xx + 984 ) ; xx [ 933 ] = - 0.03043206748930935 ; xx [
934 ] = 0.03373335873633954 ; xx [ 935 ] = 3.745598028823231e-4 ; xx [ 954 ]
= 0.05258429504046449 ; xx [ 960 ] = 0.01039385327931081 ; xx [ 963 ] = xx [
960 ] * input [ 63 ] ; xx [ 969 ] = 0.08656117151675111 ; xx [ 975 ] =
0.994803509902711 ; xx [ 981 ] = xx [ 975 ] * input [ 63 ] ; xx [ 982 ] = (
xx [ 954 ] * xx [ 963 ] + xx [ 969 ] * xx [ 981 ] ) * xx [ 12 ] ; xx [ 983 ]
= xx [ 12 ] * ( xx [ 969 ] * xx [ 963 ] - xx [ 954 ] * xx [ 981 ] ) ; xx [
954 ] = input [ 63 ] - ( xx [ 975 ] * xx [ 981 ] + xx [ 960 ] * xx [ 963 ] )
* xx [ 12 ] ; xx [ 987 ] = xx [ 982 ] ; xx [ 988 ] = xx [ 983 ] ; xx [ 989 ]
= xx [ 954 ] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 987 , xx + 990 ) ;
xx [ 933 ] = - 0.03085448323118554 ; xx [ 934 ] = 0.0757435853054349 ; xx [
935 ] = - 9.984752429257794e-3 ; xx [ 960 ] = 0.2319036612108555 ; xx [ 963 ]
= 0.03039616387005119 ; xx [ 969 ] = xx [ 963 ] * input [ 64 ] ; xx [ 975 ] =
0.09661200488939115 ; xx [ 981 ] = 0.967451748486837 ; xx [ 987 ] = xx [ 981
] * input [ 64 ] ; xx [ 988 ] = ( xx [ 960 ] * xx [ 969 ] + xx [ 975 ] * xx [
987 ] ) * xx [ 12 ] ; xx [ 989 ] = xx [ 12 ] * ( xx [ 975 ] * xx [ 969 ] - xx
[ 960 ] * xx [ 987 ] ) ; xx [ 960 ] = input [ 64 ] - ( xx [ 981 ] * xx [ 987
] + xx [ 963 ] * xx [ 969 ] ) * xx [ 12 ] ; xx [ 993 ] = xx [ 988 ] ; xx [
994 ] = xx [ 989 ] ; xx [ 995 ] = xx [ 960 ] ; pm_math_Vector3_cross_ra ( xx
+ 933 , xx + 993 , xx + 996 ) ; xx [ 933 ] = - 0.09031673281473247 ; xx [ 934
] = - 0.06318390459877354 ; xx [ 935 ] = - 0.1149965835010578 ; xx [ 963 ] =
0.7051604877432256 ; xx [ 969 ] = 0.2882213429642925 ; xx [ 975 ] = xx [ 969
] * input [ 65 ] ; xx [ 981 ] = 0.2379882103024527 ; xx [ 987 ] =
0.6025269751161617 ; xx [ 993 ] = xx [ 987 ] * input [ 65 ] ; xx [ 994 ] = (
xx [ 963 ] * xx [ 975 ] + xx [ 981 ] * xx [ 993 ] ) * xx [ 12 ] ; xx [ 995 ]
= xx [ 12 ] * ( xx [ 963 ] * xx [ 993 ] - xx [ 981 ] * xx [ 975 ] ) ; xx [
963 ] = input [ 65 ] - ( xx [ 987 ] * xx [ 993 ] + xx [ 969 ] * xx [ 975 ] )
* xx [ 12 ] ; xx [ 999 ] = xx [ 994 ] ; xx [ 1000 ] = xx [ 995 ] ; xx [ 1001
] = xx [ 963 ] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 999 , xx + 1002 )
; xx [ 933 ] = - 0.08905003310803741 ; xx [ 934 ] = - 0.06352724945861782 ;
xx [ 935 ] = - 0.05308632888278775 ; xx [ 969 ] = 0.562721235256249 ; xx [
975 ] = 0.2322640742938012 ; xx [ 981 ] = xx [ 975 ] * input [ 66 ] ; xx [
987 ] = 0.2973320519379396 ; xx [ 993 ] = 0.7355214898794594 ; xx [ 999 ] =
xx [ 993 ] * input [ 66 ] ; xx [ 1000 ] = ( xx [ 969 ] * xx [ 981 ] + xx [
987 ] * xx [ 999 ] ) * xx [ 12 ] ; xx [ 1001 ] = xx [ 12 ] * ( xx [ 969 ] *
xx [ 999 ] - xx [ 987 ] * xx [ 981 ] ) ; xx [ 969 ] = input [ 66 ] - ( xx [
993 ] * xx [ 999 ] + xx [ 975 ] * xx [ 981 ] ) * xx [ 12 ] ; xx [ 1005 ] = xx
[ 1000 ] ; xx [ 1006 ] = xx [ 1001 ] ; xx [ 1007 ] = xx [ 969 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1005 , xx + 1008 ) ; xx [ 933 ] =
- 0.07771895238882454 ; xx [ 934 ] = - 0.04411342736155736 ; xx [ 935 ] = -
0.02357135213144143 ; xx [ 975 ] = 0.2775968795533705 ; xx [ 981 ] =
0.03501379881749344 ; xx [ 987 ] = xx [ 981 ] * input [ 67 ] ; xx [ 993 ] =
0.1262932992895385 ; xx [ 999 ] = 0.9517163489765023 ; xx [ 1005 ] = xx [ 999
] * input [ 67 ] ; xx [ 1006 ] = ( xx [ 975 ] * xx [ 987 ] + xx [ 993 ] * xx
[ 1005 ] ) * xx [ 12 ] ; xx [ 1007 ] = xx [ 12 ] * ( xx [ 975 ] * xx [ 1005 ]
- xx [ 993 ] * xx [ 987 ] ) ; xx [ 975 ] = input [ 67 ] - ( xx [ 999 ] * xx [
1005 ] + xx [ 981 ] * xx [ 987 ] ) * xx [ 12 ] ; xx [ 1011 ] = xx [ 1006 ] ;
xx [ 1012 ] = xx [ 1007 ] ; xx [ 1013 ] = xx [ 975 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1011 , xx + 1014 ) ; xx [ 933 ] =
- 0.03058273761503733 ; xx [ 934 ] = - 0.03212652624056211 ; xx [ 935 ] = -
0.03502163932209757 ; xx [ 981 ] = 0.4899239161389347 ; xx [ 987 ] =
0.3424918976734947 ; xx [ 993 ] = xx [ 987 ] * input [ 68 ] ; xx [ 999 ] =
0.4638887284690384 ; xx [ 1005 ] = 0.6538203912562512 ; xx [ 1011 ] = xx [
1005 ] * input [ 68 ] ; xx [ 1012 ] = ( xx [ 981 ] * xx [ 993 ] + xx [ 999 ]
* xx [ 1011 ] ) * xx [ 12 ] ; xx [ 1013 ] = xx [ 12 ] * ( xx [ 981 ] * xx [
1011 ] - xx [ 999 ] * xx [ 993 ] ) ; xx [ 981 ] = input [ 68 ] - ( xx [ 1005
] * xx [ 1011 ] + xx [ 987 ] * xx [ 993 ] ) * xx [ 12 ] ; xx [ 1017 ] = - xx
[ 1012 ] ; xx [ 1018 ] = xx [ 1013 ] ; xx [ 1019 ] = xx [ 981 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1017 , xx + 1020 ) ; xx [ 933 ] =
- 0.06569296216337495 ; xx [ 934 ] = - 5.789251234493722e-3 ; xx [ 935 ] = -
6.04185571885384e-3 ; xx [ 987 ] = 0.08624836612663388 ; xx [ 993 ] =
8.910936692993903e-3 ; xx [ 999 ] = xx [ 993 ] * input [ 69 ] ; xx [ 1005 ] =
0.1519018818697432 ; xx [ 1011 ] = 0.98458500538662 ; xx [ 1017 ] = xx [ 1011
] * input [ 69 ] ; xx [ 1018 ] = ( xx [ 987 ] * xx [ 999 ] + xx [ 1005 ] * xx
[ 1017 ] ) * xx [ 12 ] ; xx [ 1019 ] = xx [ 12 ] * ( xx [ 987 ] * xx [ 1017 ]
- xx [ 1005 ] * xx [ 999 ] ) ; xx [ 987 ] = input [ 69 ] - ( xx [ 1011 ] * xx
[ 1017 ] + xx [ 993 ] * xx [ 999 ] ) * xx [ 12 ] ; xx [ 1023 ] = xx [ 1018 ]
; xx [ 1024 ] = xx [ 1019 ] ; xx [ 1025 ] = xx [ 987 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1023 , xx + 1026 ) ; xx [ 933 ] =
- 0.05394756191514125 ; xx [ 934 ] = 0.02771789746310824 ; xx [ 935 ] = -
2.47730874572253e-3 ; xx [ 993 ] = 0.0566209977693985 ; xx [ 999 ] =
9.460058942232674e-3 ; xx [ 1005 ] = xx [ 999 ] * input [ 70 ] ; xx [ 1011 ]
= 0.06363610745357245 ; xx [ 1017 ] = 0.9963207393829382 ; xx [ 1023 ] = xx [
1017 ] * input [ 70 ] ; xx [ 1024 ] = ( xx [ 993 ] * xx [ 1005 ] + xx [ 1011
] * xx [ 1023 ] ) * xx [ 12 ] ; xx [ 1025 ] = xx [ 12 ] * ( xx [ 1011 ] * xx
[ 1005 ] - xx [ 993 ] * xx [ 1023 ] ) ; xx [ 993 ] = input [ 70 ] - ( xx [
1017 ] * xx [ 1023 ] + xx [ 999 ] * xx [ 1005 ] ) * xx [ 12 ] ; xx [ 1029 ] =
xx [ 1024 ] ; xx [ 1030 ] = xx [ 1025 ] ; xx [ 1031 ] = xx [ 993 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1029 , xx + 1032 ) ; xx [ 933 ] =
- 0.04249591255465229 ; xx [ 934 ] = 0.05268462409333922 ; xx [ 935 ] = -
4.606763623076205e-3 ; xx [ 999 ] = 0.09354188588086317 ; xx [ 1005 ] =
0.01447175992546536 ; xx [ 1011 ] = xx [ 1005 ] * input [ 71 ] ; xx [ 1017 ]
= 0.0878088631658558 ; xx [ 1023 ] = 0.9916300153283136 ; xx [ 1029 ] = xx [
1023 ] * input [ 71 ] ; xx [ 1030 ] = ( xx [ 999 ] * xx [ 1011 ] + xx [ 1017
] * xx [ 1029 ] ) * xx [ 12 ] ; xx [ 1031 ] = xx [ 12 ] * ( xx [ 1017 ] * xx
[ 1011 ] - xx [ 999 ] * xx [ 1029 ] ) ; xx [ 999 ] = input [ 71 ] - ( xx [
1023 ] * xx [ 1029 ] + xx [ 1005 ] * xx [ 1011 ] ) * xx [ 12 ] ; xx [ 1035 ]
= xx [ 1030 ] ; xx [ 1036 ] = xx [ 1031 ] ; xx [ 1037 ] = xx [ 999 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1035 , xx + 1038 ) ; xx [ 933 ] =
- 0.1013294628621652 ; xx [ 934 ] = - 0.05440669426042376 ; xx [ 935 ] = -
0.08521685899457788 ; xx [ 1005 ] = 0.6624965949287286 ; xx [ 1011 ] =
0.3067121827978402 ; xx [ 1017 ] = xx [ 1011 ] * input [ 72 ] ; xx [ 1023 ] =
0.2803859780123734 ; xx [ 1029 ] = 0.6232251615309427 ; xx [ 1035 ] = xx [
1029 ] * input [ 72 ] ; xx [ 1036 ] = ( xx [ 1005 ] * xx [ 1017 ] + xx [ 1023
] * xx [ 1035 ] ) * xx [ 12 ] ; xx [ 1037 ] = xx [ 12 ] * ( xx [ 1005 ] * xx
[ 1035 ] - xx [ 1023 ] * xx [ 1017 ] ) ; xx [ 1005 ] = input [ 72 ] - ( xx [
1029 ] * xx [ 1035 ] + xx [ 1011 ] * xx [ 1017 ] ) * xx [ 12 ] ; xx [ 1041 ]
= xx [ 1036 ] ; xx [ 1042 ] = xx [ 1037 ] ; xx [ 1043 ] = xx [ 1005 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1041 , xx + 1044 ) ; xx [ 933 ] =
- 0.1006488674172343 ; xx [ 934 ] = - 0.03655403301522824 ; xx [ 935 ] = -
0.03482102239186442 ; xx [ 1011 ] = 0.2665968614874874 ; xx [ 1017 ] =
0.1292083701120501 ; xx [ 1023 ] = xx [ 1017 ] * input [ 73 ] ; xx [ 1029 ] =
0.4210766355824749 ; xx [ 1035 ] = 0.8572781214428331 ; xx [ 1041 ] = xx [
1035 ] * input [ 73 ] ; xx [ 1042 ] = ( xx [ 1011 ] * xx [ 1023 ] + xx [ 1029
] * xx [ 1041 ] ) * xx [ 12 ] ; xx [ 1043 ] = xx [ 12 ] * ( xx [ 1011 ] * xx
[ 1041 ] - xx [ 1029 ] * xx [ 1023 ] ) ; xx [ 1011 ] = input [ 73 ] - ( xx [
1035 ] * xx [ 1041 ] + xx [ 1017 ] * xx [ 1023 ] ) * xx [ 12 ] ; xx [ 1047 ]
= xx [ 1042 ] ; xx [ 1048 ] = xx [ 1043 ] ; xx [ 1049 ] = xx [ 1011 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1047 , xx + 1050 ) ; xx [ 933 ] =
- 0.08940329708669266 ; xx [ 934 ] = - 0.0107182514182957 ; xx [ 935 ] = -
0.01663531123898001 ; xx [ 1017 ] = 0.06643271209133222 ; xx [ 1023 ] =
0.01652383313092456 ; xx [ 1029 ] = xx [ 1023 ] * input [ 74 ] ; xx [ 1035 ]
= 0.3046495507201246 ; xx [ 1041 ] = 0.9500012152354745 ; xx [ 1047 ] = xx [
1041 ] * input [ 74 ] ; xx [ 1048 ] = ( xx [ 1017 ] * xx [ 1029 ] + xx [ 1035
] * xx [ 1047 ] ) * xx [ 12 ] ; xx [ 1049 ] = xx [ 12 ] * ( xx [ 1017 ] * xx
[ 1047 ] - xx [ 1035 ] * xx [ 1029 ] ) ; xx [ 1017 ] = input [ 74 ] - ( xx [
1041 ] * xx [ 1047 ] + xx [ 1023 ] * xx [ 1029 ] ) * xx [ 12 ] ; xx [ 1053 ]
= xx [ 1048 ] ; xx [ 1054 ] = xx [ 1049 ] ; xx [ 1055 ] = xx [ 1017 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1053 , xx + 1056 ) ; xx [ 933 ] =
- 0.07827353512039555 ; xx [ 934 ] = 0.0286709022067658 ; xx [ 935 ] = -
0.01159036647949716 ; xx [ 1023 ] = 0.1089834380549926 ; xx [ 1029 ] =
0.03500768667018416 ; xx [ 1035 ] = xx [ 1029 ] * input [ 75 ] ; xx [ 1041 ]
= 0.2510328511948578 ; xx [ 1047 ] = 0.9611865478275778 ; xx [ 1053 ] = xx [
1047 ] * input [ 75 ] ; xx [ 1054 ] = ( xx [ 1023 ] * xx [ 1035 ] + xx [ 1041
] * xx [ 1053 ] ) * xx [ 12 ] ; xx [ 1055 ] = xx [ 12 ] * ( xx [ 1041 ] * xx
[ 1035 ] - xx [ 1023 ] * xx [ 1053 ] ) ; xx [ 1023 ] = input [ 75 ] - ( xx [
1047 ] * xx [ 1053 ] + xx [ 1029 ] * xx [ 1035 ] ) * xx [ 12 ] ; xx [ 1059 ]
= xx [ 1054 ] ; xx [ 1060 ] = xx [ 1055 ] ; xx [ 1061 ] = xx [ 1023 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1059 , xx + 1062 ) ; xx [ 933 ] =
- 0.0660648177255008 ; xx [ 934 ] = 0.05628905449019814 ; xx [ 935 ] = -
0.01644484058504699 ; xx [ 1029 ] = 0.2585782393790033 ; xx [ 1035 ] =
0.0810078467025219 ; xx [ 1041 ] = xx [ 1035 ] * input [ 76 ] ; xx [ 1047 ] =
0.2625074170017326 ; xx [ 1053 ] = 0.9261019808376152 ; xx [ 1059 ] = xx [
1053 ] * input [ 76 ] ; xx [ 1060 ] = ( xx [ 1029 ] * xx [ 1041 ] + xx [ 1047
] * xx [ 1059 ] ) * xx [ 12 ] ; xx [ 1061 ] = xx [ 12 ] * ( xx [ 1047 ] * xx
[ 1041 ] - xx [ 1029 ] * xx [ 1059 ] ) ; xx [ 1029 ] = input [ 76 ] - ( xx [
1053 ] * xx [ 1059 ] + xx [ 1035 ] * xx [ 1041 ] ) * xx [ 12 ] ; xx [ 1065 ]
= xx [ 1060 ] ; xx [ 1066 ] = xx [ 1061 ] ; xx [ 1067 ] = xx [ 1029 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1065 , xx + 1068 ) ; xx [ 933 ] =
- 0.05402727094602115 ; xx [ 934 ] = 0.07479484954550918 ; xx [ 935 ] = -
0.0245122227950146 ; xx [ 1035 ] = 0.4178606219087699 ; xx [ 1041 ] =
0.1414118805700174 ; xx [ 1047 ] = xx [ 1041 ] * input [ 77 ] ; xx [ 1053 ] =
0.2721100286937727 ; xx [ 1059 ] = 0.8551908050113386 ; xx [ 1065 ] = xx [
1059 ] * input [ 77 ] ; xx [ 1066 ] = ( xx [ 1035 ] * xx [ 1047 ] + xx [ 1053
] * xx [ 1065 ] ) * xx [ 12 ] ; xx [ 1067 ] = xx [ 12 ] * ( xx [ 1053 ] * xx
[ 1047 ] - xx [ 1035 ] * xx [ 1065 ] ) ; xx [ 1035 ] = input [ 77 ] - ( xx [
1059 ] * xx [ 1065 ] + xx [ 1041 ] * xx [ 1047 ] ) * xx [ 12 ] ; xx [ 1071 ]
= xx [ 1066 ] ; xx [ 1072 ] = xx [ 1067 ] ; xx [ 1073 ] = xx [ 1035 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1071 , xx + 1074 ) ; xx [ 933 ] =
- 0.04293946919453471 ; xx [ 934 ] = 0.08811005315728188 ; xx [ 935 ] = -
0.03293948695364328 ; xx [ 1041 ] = 0.5381403936204883 ; xx [ 1047 ] =
0.172882008059172 ; xx [ 1053 ] = xx [ 1047 ] * input [ 78 ] ; xx [ 1059 ] =
0.2411337866914131 ; xx [ 1065 ] = 0.788905079815864 ; xx [ 1071 ] = xx [
1065 ] * input [ 78 ] ; xx [ 1072 ] = ( xx [ 1041 ] * xx [ 1053 ] + xx [ 1059
] * xx [ 1071 ] ) * xx [ 12 ] ; xx [ 1073 ] = xx [ 12 ] * ( xx [ 1059 ] * xx
[ 1053 ] - xx [ 1041 ] * xx [ 1071 ] ) ; xx [ 1041 ] = input [ 78 ] - ( xx [
1065 ] * xx [ 1071 ] + xx [ 1047 ] * xx [ 1053 ] ) * xx [ 12 ] ; xx [ 1077 ]
= xx [ 1072 ] ; xx [ 1078 ] = xx [ 1073 ] ; xx [ 1079 ] = xx [ 1041 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1077 , xx + 1080 ) ; xx [ 933 ] =
- 0.01753054762004361 ; xx [ 934 ] = - 7.241709836714854e-3 ; xx [ 935 ] = -
0.01455634065671041 ; xx [ 1047 ] = 0.6646547705646365 ; xx [ 1053 ] =
0.1739273614473019 ; xx [ 1059 ] = xx [ 1053 ] * input [ 79 ] ; xx [ 1065 ] =
0.1906376598594076 ; xx [ 1071 ] = 0.7011708718629001 ; xx [ 1077 ] = xx [
1071 ] * input [ 79 ] ; xx [ 1078 ] = ( xx [ 1047 ] * xx [ 1059 ] + xx [ 1065
] * xx [ 1077 ] ) * xx [ 12 ] ; xx [ 1079 ] = xx [ 12 ] * ( xx [ 1047 ] * xx
[ 1077 ] - xx [ 1065 ] * xx [ 1059 ] ) ; xx [ 1047 ] = input [ 79 ] - ( xx [
1071 ] * xx [ 1077 ] + xx [ 1053 ] * xx [ 1059 ] ) * xx [ 12 ] ; xx [ 1083 ]
= - xx [ 1078 ] ; xx [ 1084 ] = xx [ 1079 ] ; xx [ 1085 ] = xx [ 1047 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1083 , xx + 1086 ) ; xx [ 933 ] =
- 0.1098093924233946 ; xx [ 934 ] = - 0.03718968283129956 ; xx [ 935 ] = -
0.1153002663316233 ; xx [ 1053 ] = 0.6782479603435443 ; xx [ 1059 ] =
0.4285522328871861 ; xx [ 1065 ] = xx [ 1059 ] * input [ 80 ] ; xx [ 1071 ] =
0.3121212591158557 ; xx [ 1077 ] = 0.5088251247581651 ; xx [ 1083 ] = xx [
1077 ] * input [ 80 ] ; xx [ 1084 ] = ( xx [ 1053 ] * xx [ 1065 ] + xx [ 1071
] * xx [ 1083 ] ) * xx [ 12 ] ; xx [ 1085 ] = xx [ 12 ] * ( xx [ 1053 ] * xx
[ 1083 ] - xx [ 1071 ] * xx [ 1065 ] ) ; xx [ 1053 ] = input [ 80 ] - ( xx [
1077 ] * xx [ 1083 ] + xx [ 1059 ] * xx [ 1065 ] ) * xx [ 12 ] ; xx [ 1089 ]
= xx [ 1084 ] ; xx [ 1090 ] = xx [ 1085 ] ; xx [ 1091 ] = xx [ 1053 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1089 , xx + 1092 ) ; xx [ 933 ] =
- 0.1094970351153031 ; xx [ 934 ] = - 0.04003782354650123 ; xx [ 935 ] = -
0.06694069005340339 ; xx [ 1059 ] = 0.5215775193693708 ; xx [ 1065 ] =
0.3656035624705763 ; xx [ 1071 ] = xx [ 1065 ] * input [ 81 ] ; xx [ 1077 ] =
0.4373677010243754 ; xx [ 1083 ] = 0.6348231411172484 ; xx [ 1089 ] = xx [
1083 ] * input [ 81 ] ; xx [ 1090 ] = ( xx [ 1059 ] * xx [ 1071 ] + xx [ 1077
] * xx [ 1089 ] ) * xx [ 12 ] ; xx [ 1091 ] = xx [ 12 ] * ( xx [ 1059 ] * xx
[ 1089 ] - xx [ 1077 ] * xx [ 1071 ] ) ; xx [ 1059 ] = input [ 81 ] - ( xx [
1083 ] * xx [ 1089 ] + xx [ 1065 ] * xx [ 1071 ] ) * xx [ 12 ] ; xx [ 1095 ]
= xx [ 1090 ] ; xx [ 1096 ] = xx [ 1091 ] ; xx [ 1097 ] = xx [ 1059 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1095 , xx + 1098 ) ; xx [ 933 ] =
- 0.1090634608935626 ; xx [ 934 ] = - 9.049355481174783e-3 ; xx [ 935 ] = -
0.03708031420471432 ; xx [ 1065 ] = 0.03036498074447355 ; xx [ 1071 ] =
0.01445744959734118 ; xx [ 1077 ] = xx [ 1071 ] * input [ 82 ] ; xx [ 1083 ]
= 0.5573897988713492 ; xx [ 1089 ] = 0.8295695041463889 ; xx [ 1095 ] = xx [
1089 ] * input [ 82 ] ; xx [ 1096 ] = ( xx [ 1065 ] * xx [ 1077 ] + xx [ 1083
] * xx [ 1095 ] ) * xx [ 12 ] ; xx [ 1097 ] = xx [ 12 ] * ( xx [ 1065 ] * xx
[ 1095 ] - xx [ 1083 ] * xx [ 1077 ] ) ; xx [ 1065 ] = input [ 82 ] - ( xx [
1089 ] * xx [ 1095 ] + xx [ 1071 ] * xx [ 1077 ] ) * xx [ 12 ] ; xx [ 1101 ]
= xx [ 1096 ] ; xx [ 1102 ] = xx [ 1097 ] ; xx [ 1103 ] = xx [ 1065 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1101 , xx + 1104 ) ; xx [ 933 ] =
- 0.1010291140985155 ; xx [ 934 ] = 0.02076290141192311 ; xx [ 935 ] = -
0.03004226911671877 ; xx [ 1071 ] = 0.1888417575813727 ; xx [ 1077 ] =
0.1104877504971639 ; xx [ 1083 ] = xx [ 1077 ] * input [ 83 ] ; xx [ 1089 ] =
0.4651486145686861 ; xx [ 1095 ] = 0.8577692078575021 ; xx [ 1101 ] = xx [
1095 ] * input [ 83 ] ; xx [ 1102 ] = ( xx [ 1071 ] * xx [ 1083 ] + xx [ 1089
] * xx [ 1101 ] ) * xx [ 12 ] ; xx [ 1103 ] = xx [ 12 ] * ( xx [ 1089 ] * xx
[ 1083 ] - xx [ 1071 ] * xx [ 1101 ] ) ; xx [ 1071 ] = input [ 83 ] - ( xx [
1095 ] * xx [ 1101 ] + xx [ 1077 ] * xx [ 1083 ] ) * xx [ 12 ] ; xx [ 1107 ]
= xx [ 1102 ] ; xx [ 1108 ] = xx [ 1103 ] ; xx [ 1109 ] = xx [ 1071 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1107 , xx + 1110 ) ; xx [ 933 ] =
- 0.08939423168309392 ; xx [ 934 ] = 0.05026664692245522 ; xx [ 935 ] = -
0.03891143517008596 ; xx [ 1077 ] = 0.4278049820722936 ; xx [ 1083 ] =
0.2441495186273143 ; xx [ 1089 ] = xx [ 1083 ] * input [ 84 ] ; xx [ 1095 ] =
0.4188650043300141 ; xx [ 1101 ] = 0.7628407553453034 ; xx [ 1107 ] = xx [
1101 ] * input [ 84 ] ; xx [ 1108 ] = ( xx [ 1077 ] * xx [ 1089 ] + xx [ 1095
] * xx [ 1107 ] ) * xx [ 12 ] ; xx [ 1109 ] = xx [ 12 ] * ( xx [ 1095 ] * xx
[ 1089 ] - xx [ 1077 ] * xx [ 1107 ] ) ; xx [ 1077 ] = input [ 84 ] - ( xx [
1101 ] * xx [ 1107 ] + xx [ 1083 ] * xx [ 1089 ] ) * xx [ 12 ] ; xx [ 1113 ]
= xx [ 1108 ] ; xx [ 1114 ] = xx [ 1109 ] ; xx [ 1115 ] = xx [ 1077 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1113 , xx + 1116 ) ; xx [ 933 ] =
- 0.07930235604146559 ; xx [ 934 ] = 0.06880633825740713 ; xx [ 935 ] = -
0.05707472804904289 ; xx [ 1083 ] = 0.6353262039713063 ; xx [ 1089 ] =
0.2580041401126371 ; xx [ 1095 ] = xx [ 1089 ] * input [ 85 ] ; xx [ 1101 ] =
0.2666009172613014 ; xx [ 1107 ] = 0.6772875527776824 ; xx [ 1113 ] = xx [
1107 ] * input [ 85 ] ; xx [ 1114 ] = ( xx [ 1083 ] * xx [ 1095 ] + xx [ 1101
] * xx [ 1113 ] ) * xx [ 12 ] ; xx [ 1115 ] = xx [ 12 ] * ( xx [ 1101 ] * xx
[ 1095 ] - xx [ 1083 ] * xx [ 1113 ] ) ; xx [ 1083 ] = input [ 85 ] - ( xx [
1107 ] * xx [ 1113 ] + xx [ 1089 ] * xx [ 1095 ] ) * xx [ 12 ] ; xx [ 1119 ]
= xx [ 1114 ] ; xx [ 1120 ] = xx [ 1115 ] ; xx [ 1121 ] = xx [ 1083 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1119 , xx + 1122 ) ; xx [ 933 ] =
- 0.06202638499895177 ; xx [ 934 ] = 0.08188678856755247 ; xx [ 935 ] = -
0.07370522850419119 ; xx [ 1089 ] = 0.6905341524779978 ; xx [ 1095 ] =
0.2119602768658031 ; xx [ 1101 ] = xx [ 1095 ] * input [ 86 ] ; xx [ 1107 ] =
0.1965320352559405 ; xx [ 1113 ] = 0.6630313600506564 ; xx [ 1119 ] = xx [
1113 ] * input [ 86 ] ; xx [ 1120 ] = ( xx [ 1089 ] * xx [ 1101 ] + xx [ 1107
] * xx [ 1119 ] ) * xx [ 12 ] ; xx [ 1121 ] = xx [ 12 ] * ( xx [ 1107 ] * xx
[ 1101 ] - xx [ 1089 ] * xx [ 1119 ] ) ; xx [ 1089 ] = input [ 86 ] - ( xx [
1113 ] * xx [ 1119 ] + xx [ 1095 ] * xx [ 1101 ] ) * xx [ 12 ] ; xx [ 1125 ]
= xx [ 1120 ] ; xx [ 1126 ] = xx [ 1121 ] ; xx [ 1127 ] = xx [ 1089 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1125 , xx + 1128 ) ; xx [ 933 ] =
- 0.1157391105586126 ; xx [ 934 ] = - 0.01123924367117589 ; xx [ 935 ] = -
0.1226951432359581 ; xx [ 1095 ] = 0.6368743135753699 ; xx [ 1101 ] =
0.6329088978278039 ; xx [ 1107 ] = xx [ 1101 ] * input [ 87 ] ; xx [ 1113 ] =
0.3136082738905876 ; xx [ 1119 ] = 0.3089778087592412 ; xx [ 1125 ] = xx [
1119 ] * input [ 87 ] ; xx [ 1126 ] = ( xx [ 1095 ] * xx [ 1107 ] + xx [ 1113
] * xx [ 1125 ] ) * xx [ 12 ] ; xx [ 1127 ] = xx [ 12 ] * ( xx [ 1095 ] * xx
[ 1125 ] - xx [ 1113 ] * xx [ 1107 ] ) ; xx [ 1095 ] = input [ 87 ] - ( xx [
1119 ] * xx [ 1125 ] + xx [ 1101 ] * xx [ 1107 ] ) * xx [ 12 ] ; xx [ 1131 ]
= xx [ 1126 ] ; xx [ 1132 ] = xx [ 1127 ] ; xx [ 1133 ] = xx [ 1095 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1131 , xx + 1134 ) ; xx [ 933 ] =
- 0.1160516677561728 ; xx [ 934 ] = - 0.01143333175071017 ; xx [ 935 ] = -
0.08330636306873912 ; xx [ 1101 ] = 0.4679958309924982 ; xx [ 1107 ] =
0.4909291307552261 ; xx [ 1113 ] = xx [ 1107 ] * input [ 88 ] ; xx [ 1119 ] =
0.5033127474527106 ; xx [ 1125 ] = 0.535392163746504 ; xx [ 1131 ] = xx [
1125 ] * input [ 88 ] ; xx [ 1132 ] = ( xx [ 1101 ] * xx [ 1113 ] + xx [ 1119
] * xx [ 1131 ] ) * xx [ 12 ] ; xx [ 1133 ] = xx [ 12 ] * ( xx [ 1101 ] * xx
[ 1131 ] - xx [ 1119 ] * xx [ 1113 ] ) ; xx [ 1101 ] = input [ 88 ] - ( xx [
1125 ] * xx [ 1131 ] + xx [ 1107 ] * xx [ 1113 ] ) * xx [ 12 ] ; xx [ 1137 ]
= xx [ 1132 ] ; xx [ 1138 ] = xx [ 1133 ] ; xx [ 1139 ] = xx [ 1101 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1137 , xx + 1140 ) ; xx [ 933 ] =
- 0.110067209631064 ; xx [ 934 ] = 0.02453955199399803 ; xx [ 935 ] = -
0.06642056429716578 ; xx [ 1107 ] = 0.509216299963611 ; xx [ 1113 ] =
0.4048061395453557 ; xx [ 1119 ] = xx [ 1113 ] * input [ 89 ] ; xx [ 1125 ] =
0.4655982493493923 ; xx [ 1131 ] = 0.6000408481433056 ; xx [ 1137 ] = xx [
1131 ] * input [ 89 ] ; xx [ 1138 ] = ( xx [ 1107 ] * xx [ 1119 ] + xx [ 1125
] * xx [ 1137 ] ) * xx [ 12 ] ; xx [ 1139 ] = xx [ 12 ] * ( xx [ 1125 ] * xx
[ 1119 ] - xx [ 1107 ] * xx [ 1137 ] ) ; xx [ 1107 ] = input [ 89 ] - ( xx [
1131 ] * xx [ 1137 ] + xx [ 1113 ] * xx [ 1119 ] ) * xx [ 12 ] ; xx [ 1143 ]
= xx [ 1138 ] ; xx [ 1144 ] = xx [ 1139 ] ; xx [ 1145 ] = xx [ 1107 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1143 , xx + 1146 ) ; xx [ 933 ] =
- 0.06617416083067242 ; xx [ 934 ] = - 0.07971661038129915 ; xx [ 935 ] = -
0.09073845952707212 ; xx [ 1113 ] = 0.7235179426369552 ; xx [ 1119 ] =
0.0538590446688918 ; xx [ 1125 ] = xx [ 1119 ] * input [ 90 ] ; xx [ 1131 ] =
0.04375915444765855 ; xx [ 1137 ] = 0.6868086534048389 ; xx [ 1143 ] = xx [
1137 ] * input [ 90 ] ; xx [ 1144 ] = ( xx [ 1113 ] * xx [ 1125 ] + xx [ 1131
] * xx [ 1143 ] ) * xx [ 12 ] ; xx [ 1145 ] = xx [ 12 ] * ( xx [ 1113 ] * xx
[ 1143 ] - xx [ 1131 ] * xx [ 1125 ] ) ; xx [ 1113 ] = input [ 90 ] - ( xx [
1137 ] * xx [ 1143 ] + xx [ 1119 ] * xx [ 1125 ] ) * xx [ 12 ] ; xx [ 1149 ]
= xx [ 1144 ] ; xx [ 1150 ] = xx [ 1145 ] ; xx [ 1151 ] = xx [ 1113 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1149 , xx + 1152 ) ; xx [ 933 ] =
- 0.1106485750497238 ; xx [ 934 ] = 0.01773417046405806 ; xx [ 935 ] = -
0.1225258118199228 ; xx [ 1119 ] = 0.6625935915012544 ; xx [ 1125 ] =
0.4596611201296349 ; xx [ 1131 ] = xx [ 1125 ] * input [ 91 ] ; xx [ 1137 ] =
0.3337564398799193 ; xx [ 1143 ] = 0.4881475452988784 ; xx [ 1149 ] = xx [
1143 ] * input [ 91 ] ; xx [ 1150 ] = ( xx [ 1119 ] * xx [ 1131 ] + xx [ 1137
] * xx [ 1149 ] ) * xx [ 12 ] ; xx [ 1151 ] = xx [ 12 ] * ( xx [ 1137 ] * xx
[ 1131 ] - xx [ 1119 ] * xx [ 1149 ] ) ; xx [ 1119 ] = input [ 91 ] - ( xx [
1143 ] * xx [ 1149 ] + xx [ 1125 ] * xx [ 1131 ] ) * xx [ 12 ] ; xx [ 1155 ]
= xx [ 1150 ] ; xx [ 1156 ] = xx [ 1151 ] ; xx [ 1157 ] = xx [ 1119 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1155 , xx + 1158 ) ; xx [ 933 ] =
- 0.1024629917770516 ; xx [ 934 ] = 0.04231214030604319 ; xx [ 935 ] = -
0.08534356053751085 ; xx [ 1125 ] = 0.6724916232356 ; xx [ 1131 ] =
0.3694040981744918 ; xx [ 1137 ] = xx [ 1131 ] * input [ 92 ] ; xx [ 1143 ] =
0.3041388260371736 ; xx [ 1149 ] = 0.564619520940047 ; xx [ 1155 ] = xx [
1149 ] * input [ 92 ] ; xx [ 1156 ] = ( xx [ 1125 ] * xx [ 1137 ] + xx [ 1143
] * xx [ 1155 ] ) * xx [ 12 ] ; xx [ 1157 ] = xx [ 12 ] * ( xx [ 1143 ] * xx
[ 1137 ] - xx [ 1125 ] * xx [ 1155 ] ) ; xx [ 1125 ] = input [ 92 ] - ( xx [
1149 ] * xx [ 1155 ] + xx [ 1131 ] * xx [ 1137 ] ) * xx [ 12 ] ; xx [ 1161 ]
= xx [ 1156 ] ; xx [ 1162 ] = xx [ 1157 ] ; xx [ 1163 ] = xx [ 1125 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1161 , xx + 1164 ) ; xx [ 933 ] =
- 0.08565381476365412 ; xx [ 934 ] = 0.0586459764374675 ; xx [ 935 ] = -
0.1158007647153833 ; xx [ 1131 ] = 0.7024913686853388 ; xx [ 1137 ] =
0.3180142807071604 ; xx [ 1143 ] = xx [ 1137 ] * input [ 93 ] ; xx [ 1149 ] =
0.2578772449452105 ; xx [ 1155 ] = 0.5821272375764381 ; xx [ 1161 ] = xx [
1155 ] * input [ 93 ] ; xx [ 1162 ] = ( xx [ 1131 ] * xx [ 1143 ] + xx [ 1149
] * xx [ 1161 ] ) * xx [ 12 ] ; xx [ 1163 ] = xx [ 12 ] * ( xx [ 1149 ] * xx
[ 1143 ] - xx [ 1131 ] * xx [ 1161 ] ) ; xx [ 1131 ] = input [ 93 ] - ( xx [
1155 ] * xx [ 1161 ] + xx [ 1137 ] * xx [ 1143 ] ) * xx [ 12 ] ; xx [ 1167 ]
= xx [ 1162 ] ; xx [ 1168 ] = xx [ 1163 ] ; xx [ 1169 ] = xx [ 1131 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1167 , xx + 1170 ) ; xx [ 933 ] =
- 1.255454561475579e-3 ; xx [ 934 ] = 0.08936900436542543 ; xx [ 935 ] = -
0.01042666174946011 ; xx [ 1137 ] = 0.1771377441620736 ; xx [ 1143 ] =
6.092217096126821e-3 ; xx [ 1149 ] = xx [ 1143 ] * input [ 94 ] ; xx [ 1155 ]
= 4.043444316251642e-3 ; xx [ 1161 ] = 0.9841589074138826 ; xx [ 1167 ] = xx
[ 1161 ] * input [ 94 ] ; xx [ 1168 ] = ( xx [ 1137 ] * xx [ 1149 ] - xx [
1155 ] * xx [ 1167 ] ) * xx [ 12 ] ; xx [ 1169 ] = xx [ 12 ] * ( xx [ 1155 ]
* xx [ 1149 ] + xx [ 1137 ] * xx [ 1167 ] ) ; xx [ 1137 ] = input [ 94 ] - (
xx [ 1161 ] * xx [ 1167 ] + xx [ 1143 ] * xx [ 1149 ] ) * xx [ 12 ] ; xx [
1173 ] = xx [ 1168 ] ; xx [ 1174 ] = - xx [ 1169 ] ; xx [ 1175 ] = xx [ 1137
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1173 , xx + 1176 ) ; xx [ 933
] = - 5.788798232309321e-4 ; xx [ 934 ] = 0.03934347898355355 ; xx [ 935 ] =
4.230350906401621e-3 ; xx [ 1143 ] = 0.09068858100887967 ; xx [ 1149 ] =
5.716624978144043e-3 ; xx [ 1155 ] = xx [ 1149 ] * input [ 95 ] ; xx [ 1161 ]
= 4.559029495871598e-3 ; xx [ 1167 ] = 0.9958524573065587 ; xx [ 1173 ] = xx
[ 1167 ] * input [ 95 ] ; xx [ 1174 ] = ( xx [ 1143 ] * xx [ 1155 ] - xx [
1161 ] * xx [ 1173 ] ) * xx [ 12 ] ; xx [ 1175 ] = xx [ 12 ] * ( xx [ 1161 ]
* xx [ 1155 ] + xx [ 1143 ] * xx [ 1173 ] ) ; xx [ 1143 ] = input [ 95 ] - (
xx [ 1167 ] * xx [ 1173 ] + xx [ 1149 ] * xx [ 1155 ] ) * xx [ 12 ] ; xx [
1179 ] = xx [ 1174 ] ; xx [ 1180 ] = - xx [ 1175 ] ; xx [ 1181 ] = xx [ 1143
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1179 , xx + 1182 ) ; xx [ 933
] = 0.01690963297561175 ; xx [ 934 ] = - 0.01232472380436953 ; xx [ 935 ] = -
0.05168594899503165 ; xx [ 1149 ] = 0.6269481732843243 ; xx [ 1155 ] =
0.2649662167727434 ; xx [ 1161 ] = xx [ 1155 ] * input [ 96 ] ; xx [ 1167 ] =
0.2788853047140321 ; xx [ 1173 ] = 0.6774598724641557 ; xx [ 1179 ] = xx [
1173 ] * input [ 96 ] ; xx [ 1180 ] = ( xx [ 1149 ] * xx [ 1161 ] + xx [ 1167
] * xx [ 1179 ] ) * xx [ 12 ] ; xx [ 1181 ] = xx [ 12 ] * ( xx [ 1149 ] * xx
[ 1179 ] - xx [ 1167 ] * xx [ 1161 ] ) ; xx [ 1149 ] = input [ 96 ] - ( xx [
1173 ] * xx [ 1179 ] + xx [ 1155 ] * xx [ 1161 ] ) * xx [ 12 ] ; xx [ 1185 ]
= xx [ 1180 ] ; xx [ 1186 ] = xx [ 1181 ] ; xx [ 1187 ] = xx [ 1149 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1185 , xx + 1188 ) ; xx [ 933 ] =
0.04063604489054208 ; xx [ 934 ] = - 0.05875008984204186 ; xx [ 935 ] = -
0.05963785222048177 ; xx [ 1155 ] = 0.6056330817001833 ; xx [ 1161 ] =
0.4005055822165586 ; xx [ 1167 ] = xx [ 1161 ] * input [ 97 ] ; xx [ 1173 ] =
0.373128172234625 ; xx [ 1179 ] = 0.5775631706130187 ; xx [ 1185 ] = xx [
1179 ] * input [ 97 ] ; xx [ 1186 ] = ( xx [ 1155 ] * xx [ 1167 ] + xx [ 1173
] * xx [ 1185 ] ) * xx [ 12 ] ; xx [ 1187 ] = xx [ 12 ] * ( xx [ 1155 ] * xx
[ 1185 ] - xx [ 1173 ] * xx [ 1167 ] ) ; xx [ 1155 ] = input [ 97 ] - ( xx [
1179 ] * xx [ 1185 ] + xx [ 1161 ] * xx [ 1167 ] ) * xx [ 12 ] ; xx [ 1191 ]
= xx [ 1186 ] ; xx [ 1192 ] = xx [ 1187 ] ; xx [ 1193 ] = xx [ 1155 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1191 , xx + 1194 ) ; xx [ 933 ] =
0.03012712893355168 ; xx [ 934 ] = - 0.03148542668589369 ; xx [ 935 ] = -
0.03563591320150283 ; xx [ 1161 ] = 0.4913046688168534 ; xx [ 1167 ] =
0.3405082465604375 ; xx [ 1173 ] = xx [ 1167 ] * input [ 98 ] ; xx [ 1179 ] =
0.4520512841339471 ; xx [ 1185 ] = 0.662060037259423 ; xx [ 1191 ] = xx [
1185 ] * input [ 98 ] ; xx [ 1192 ] = ( xx [ 1161 ] * xx [ 1173 ] + xx [ 1179
] * xx [ 1191 ] ) * xx [ 12 ] ; xx [ 1193 ] = xx [ 12 ] * ( xx [ 1161 ] * xx
[ 1191 ] - xx [ 1179 ] * xx [ 1173 ] ) ; xx [ 1161 ] = input [ 98 ] - ( xx [
1185 ] * xx [ 1191 ] + xx [ 1167 ] * xx [ 1173 ] ) * xx [ 12 ] ; xx [ 1197 ]
= xx [ 1192 ] ; xx [ 1198 ] = xx [ 1193 ] ; xx [ 1199 ] = xx [ 1161 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1197 , xx + 1200 ) ; xx [ 933 ] =
0.01696911852711806 ; xx [ 934 ] = - 6.87739145058478e-3 ; xx [ 935 ] = -
0.01490541478530271 ; xx [ 1167 ] = 0.6648369869461649 ; xx [ 1173 ] =
0.1732295352493182 ; xx [ 1179 ] = xx [ 1173 ] * input [ 99 ] ; xx [ 1185 ] =
0.1765054139502728 ; xx [ 1191 ] = 0.7048610840101003 ; xx [ 1197 ] = xx [
1191 ] * input [ 99 ] ; xx [ 1198 ] = ( xx [ 1167 ] * xx [ 1179 ] + xx [ 1185
] * xx [ 1197 ] ) * xx [ 12 ] ; xx [ 1199 ] = xx [ 12 ] * ( xx [ 1167 ] * xx
[ 1197 ] - xx [ 1185 ] * xx [ 1179 ] ) ; xx [ 1167 ] = input [ 99 ] - ( xx [
1191 ] * xx [ 1197 ] + xx [ 1173 ] * xx [ 1179 ] ) * xx [ 12 ] ; xx [ 1203 ]
= xx [ 1198 ] ; xx [ 1204 ] = xx [ 1199 ] ; xx [ 1205 ] = xx [ 1167 ] ;
pm_math_Vector3_cross_ra ( xx + 933 , xx + 1203 , xx + 1206 ) ; xx [ 933 ] =
0.06558095736323434 ; xx [ 934 ] = - 0.07832526903266032 ; xx [ 935 ] = -
0.09207158266150849 ; xx [ 1173 ] = 0.7235234255290708 ; xx [ 1179 ] =
0.05378533927509797 ; xx [ 1185 ] = xx [ 1179 ] * input [ 100 ] ; xx [ 1191 ]
= 0.05834256431148328 ; xx [ 1197 ] = 0.6857238038593254 ; xx [ 1203 ] = xx [
1197 ] * input [ 100 ] ; xx [ 1204 ] = ( xx [ 1173 ] * xx [ 1185 ] + xx [
1191 ] * xx [ 1203 ] ) * xx [ 12 ] ; xx [ 1205 ] = xx [ 12 ] * ( xx [ 1173 ]
* xx [ 1203 ] - xx [ 1191 ] * xx [ 1185 ] ) ; xx [ 1173 ] = input [ 100 ] - (
xx [ 1197 ] * xx [ 1203 ] + xx [ 1179 ] * xx [ 1185 ] ) * xx [ 12 ] ; xx [
1209 ] = - xx [ 1204 ] ; xx [ 1210 ] = xx [ 1205 ] ; xx [ 1211 ] = xx [ 1173
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1209 , xx + 1212 ) ; xx [ 933
] = - 0.0536213526876241 ; xx [ 934 ] = - 0.07182367668605528 ; xx [ 935 ] =
- 0.04789507325013141 ; xx [ 1179 ] = 0.5422753696281843 ; xx [ 1185 ] =
0.03929410677551657 ; xx [ 1191 ] = xx [ 1185 ] * input [ 101 ] ; xx [ 1197 ]
= 0.06516590223105889 ; xx [ 1203 ] = 0.8367477528226429 ; xx [ 1209 ] = xx [
1203 ] * input [ 101 ] ; xx [ 1210 ] = ( xx [ 1179 ] * xx [ 1191 ] + xx [
1197 ] * xx [ 1209 ] ) * xx [ 12 ] ; xx [ 1211 ] = xx [ 12 ] * ( xx [ 1179 ]
* xx [ 1209 ] - xx [ 1197 ] * xx [ 1191 ] ) ; xx [ 1179 ] = input [ 101 ] - (
xx [ 1203 ] * xx [ 1209 ] + xx [ 1185 ] * xx [ 1191 ] ) * xx [ 12 ] ; xx [
1215 ] = - xx [ 1210 ] ; xx [ 1216 ] = xx [ 1211 ] ; xx [ 1217 ] = xx [ 1179
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1215 , xx + 1218 ) ; xx [ 933
] = 0.05373366350985357 ; xx [ 934 ] = - 0.070690001766501 ; xx [ 935 ] = -
0.04898131155079476 ; xx [ 1185 ] = 0.5425079238946524 ; xx [ 1191 ] =
0.03594100505250031 ; xx [ 1197 ] = xx [ 1191 ] * input [ 102 ] ; xx [ 1203 ]
= 0.05096762220483811 ; xx [ 1209 ] = 0.8377324740954689 ; xx [ 1215 ] = xx [
1209 ] * input [ 102 ] ; xx [ 1216 ] = ( xx [ 1185 ] * xx [ 1197 ] + xx [
1203 ] * xx [ 1215 ] ) * xx [ 12 ] ; xx [ 1217 ] = xx [ 12 ] * ( xx [ 1185 ]
* xx [ 1215 ] - xx [ 1203 ] * xx [ 1197 ] ) ; xx [ 1185 ] = input [ 102 ] - (
xx [ 1209 ] * xx [ 1215 ] + xx [ 1191 ] * xx [ 1197 ] ) * xx [ 12 ] ; xx [
1221 ] = xx [ 1216 ] ; xx [ 1222 ] = xx [ 1217 ] ; xx [ 1223 ] = xx [ 1185 ]
; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1221 , xx + 1224 ) ; xx [ 933 ]
= 0.04170815708087641 ; xx [ 934 ] = - 0.04084259670838948 ; xx [ 935 ] = -
0.02190882443878382 ; xx [ 1191 ] = 0.2362168935499534 ; xx [ 1197 ] =
0.05791248022737374 ; xx [ 1203 ] = xx [ 1197 ] * input [ 103 ] ; xx [ 1209 ]
= 0.2400132836924455 ; xx [ 1215 ] = 0.9398092080239978 ; xx [ 1221 ] = xx [
1215 ] * input [ 103 ] ; xx [ 1222 ] = ( xx [ 1191 ] * xx [ 1203 ] + xx [
1209 ] * xx [ 1221 ] ) * xx [ 12 ] ; xx [ 1223 ] = xx [ 12 ] * ( xx [ 1191 ]
* xx [ 1221 ] - xx [ 1209 ] * xx [ 1203 ] ) ; xx [ 1191 ] = input [ 103 ] - (
xx [ 1215 ] * xx [ 1221 ] + xx [ 1197 ] * xx [ 1203 ] ) * xx [ 12 ] ; xx [
1227 ] = xx [ 1222 ] ; xx [ 1228 ] = xx [ 1223 ] ; xx [ 1229 ] = xx [ 1191 ]
; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1227 , xx + 1230 ) ; xx [ 933 ]
= 0.02962397495869174 ; xx [ 934 ] = - 5.97858076193959e-3 ; xx [ 935 ] = -
5.42483109988175e-3 ; xx [ 1197 ] = 0.2660160875688612 ; xx [ 1203 ] =
0.01261015473456296 ; xx [ 1209 ] = xx [ 1203 ] * input [ 104 ] ; xx [ 1215 ]
= 0.0383859347047175 ; xx [ 1221 ] = 0.9631214591986682 ; xx [ 1227 ] = xx [
1221 ] * input [ 104 ] ; xx [ 1228 ] = ( xx [ 1197 ] * xx [ 1209 ] + xx [
1215 ] * xx [ 1227 ] ) * xx [ 12 ] ; xx [ 1229 ] = xx [ 12 ] * ( xx [ 1197 ]
* xx [ 1227 ] - xx [ 1215 ] * xx [ 1209 ] ) ; xx [ 1197 ] = input [ 104 ] - (
xx [ 1221 ] * xx [ 1227 ] + xx [ 1203 ] * xx [ 1209 ] ) * xx [ 12 ] ; xx [
1233 ] = - xx [ 1228 ] ; xx [ 1234 ] = xx [ 1229 ] ; xx [ 1235 ] = xx [ 1197
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1233 , xx + 1236 ) ; xx [ 933
] = 0.01582278174737271 ; xx [ 934 ] = 0.02097147799811188 ; xx [ 935 ] =
3.386960009426072e-3 ; xx [ 1203 ] = 0.02559897076770395 ; xx [ 1209 ] =
2.341435664389156e-3 ; xx [ 1215 ] = xx [ 1209 ] * input [ 105 ] ; xx [ 1221
] = 0.125190184679472 ; xx [ 1227 ] = 0.9917996914874414 ; xx [ 1233 ] = xx [
1227 ] * input [ 105 ] ; xx [ 1234 ] = ( xx [ 1203 ] * xx [ 1215 ] - xx [
1221 ] * xx [ 1233 ] ) * xx [ 12 ] ; xx [ 1235 ] = xx [ 12 ] * ( xx [ 1221 ]
* xx [ 1215 ] + xx [ 1203 ] * xx [ 1233 ] ) ; xx [ 1203 ] = input [ 105 ] - (
xx [ 1227 ] * xx [ 1233 ] + xx [ 1209 ] * xx [ 1215 ] ) * xx [ 12 ] ; xx [
1239 ] = xx [ 1234 ] ; xx [ 1240 ] = - xx [ 1235 ] ; xx [ 1241 ] = xx [ 1203
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1239 , xx + 1242 ) ; xx [ 933
] = 0.01545051058463876 ; xx [ 934 ] = 0.05912544116052309 ; xx [ 935 ] = -
1.949201488789741e-3 ; xx [ 1209 ] = 0.1183223592497275 ; xx [ 1215 ] =
2.272610491874502e-3 ; xx [ 1221 ] = xx [ 1215 ] * input [ 106 ] ; xx [ 1227
] = 0.07242969728623251 ; xx [ 1233 ] = 0.9903275182959201 ; xx [ 1239 ] = xx
[ 1233 ] * input [ 106 ] ; xx [ 1240 ] = ( xx [ 1209 ] * xx [ 1221 ] + xx [
1227 ] * xx [ 1239 ] ) * xx [ 12 ] ; xx [ 1241 ] = xx [ 12 ] * ( xx [ 1227 ]
* xx [ 1221 ] - xx [ 1209 ] * xx [ 1239 ] ) ; xx [ 1209 ] = input [ 106 ] - (
xx [ 1233 ] * xx [ 1239 ] + xx [ 1215 ] * xx [ 1221 ] ) * xx [ 12 ] ; xx [
1245 ] = - xx [ 1240 ] ; xx [ 1246 ] = xx [ 1241 ] ; xx [ 1247 ] = xx [ 1209
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1245 , xx + 1248 ) ; xx [ 933
] = 0.01478712197719425 ; xx [ 934 ] = 0.08981685465000155 ; xx [ 935 ] = -
0.01696297820252731 ; xx [ 1215 ] = 0.3727409608906735 ; xx [ 1221 ] =
0.04531238260434349 ; xx [ 1227 ] = xx [ 1221 ] * input [ 107 ] ; xx [ 1233 ]
= 0.1311523051115367 ; xx [ 1239 ] = 0.9175020637148159 ; xx [ 1245 ] = xx [
1239 ] * input [ 107 ] ; xx [ 1246 ] = ( xx [ 1215 ] * xx [ 1227 ] + xx [
1233 ] * xx [ 1245 ] ) * xx [ 12 ] ; xx [ 1247 ] = xx [ 12 ] * ( xx [ 1233 ]
* xx [ 1227 ] - xx [ 1215 ] * xx [ 1245 ] ) ; xx [ 1215 ] = input [ 107 ] - (
xx [ 1239 ] * xx [ 1245 ] + xx [ 1221 ] * xx [ 1227 ] ) * xx [ 12 ] ; xx [
1251 ] = - xx [ 1246 ] ; xx [ 1252 ] = xx [ 1247 ] ; xx [ 1253 ] = xx [ 1215
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1251 , xx + 1254 ) ; xx [ 933
] = 0.0778888264372435 ; xx [ 934 ] = - 0.07352993297055943 ; xx [ 935 ] = -
0.08156685488911927 ; xx [ 1221 ] = 0.6734207063632587 ; xx [ 1227 ] =
0.2039102184933242 ; xx [ 1233 ] = xx [ 1227 ] * input [ 108 ] ; xx [ 1239 ]
= 0.2127286300869492 ; xx [ 1245 ] = 0.6779909328129283 ; xx [ 1251 ] = xx [
1245 ] * input [ 108 ] ; xx [ 1252 ] = ( xx [ 1221 ] * xx [ 1233 ] + xx [
1239 ] * xx [ 1251 ] ) * xx [ 12 ] ; xx [ 1253 ] = xx [ 12 ] * ( xx [ 1221 ]
* xx [ 1251 ] - xx [ 1239 ] * xx [ 1233 ] ) ; xx [ 1221 ] = input [ 108 ] - (
xx [ 1245 ] * xx [ 1251 ] + xx [ 1227 ] * xx [ 1233 ] ) * xx [ 12 ] ; xx [
1257 ] = - xx [ 1252 ] ; xx [ 1258 ] = xx [ 1253 ] ; xx [ 1259 ] = xx [ 1221
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1257 , xx + 1260 ) ; xx [ 933
] = 0.06550036046086356 ; xx [ 934 ] = - 0.06238821280752714 ; xx [ 935 ] = -
0.0374024005763527 ; xx [ 1227 ] = 0.3967640724820374 ; xx [ 1233 ] =
0.07306199386513242 ; xx [ 1239 ] = xx [ 1233 ] * input [ 109 ] ; xx [ 1245 ]
= 0.1661315210310757 ; xx [ 1251 ] = 0.8998002742608058 ; xx [ 1257 ] = xx [
1251 ] * input [ 109 ] ; xx [ 1258 ] = ( xx [ 1227 ] * xx [ 1239 ] + xx [
1245 ] * xx [ 1257 ] ) * xx [ 12 ] ; xx [ 1259 ] = xx [ 12 ] * ( xx [ 1227 ]
* xx [ 1257 ] - xx [ 1245 ] * xx [ 1239 ] ) ; xx [ 1227 ] = input [ 109 ] - (
xx [ 1251 ] * xx [ 1257 ] + xx [ 1233 ] * xx [ 1239 ] ) * xx [ 12 ] ; xx [
1263 ] = - xx [ 1258 ] ; xx [ 1264 ] = xx [ 1259 ] ; xx [ 1265 ] = xx [ 1227
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1263 , xx + 1266 ) ; xx [ 933
] = 0.05340497064709989 ; xx [ 934 ] = - 0.02835575423513582 ; xx [ 935 ] = -
0.01278600729968406 ; xx [ 1233 ] = 0.1839594217308902 ; xx [ 1239 ] =
1.794711470683825e-3 ; xx [ 1245 ] = xx [ 1239 ] * input [ 110 ] ; xx [ 1251
] = 0.02640085935264057 ; xx [ 1257 ] = 0.9825775820730981 ; xx [ 1263 ] = xx
[ 1257 ] * input [ 110 ] ; xx [ 1264 ] = ( xx [ 1233 ] * xx [ 1245 ] + xx [
1251 ] * xx [ 1263 ] ) * xx [ 12 ] ; xx [ 1265 ] = xx [ 12 ] * ( xx [ 1233 ]
* xx [ 1263 ] - xx [ 1251 ] * xx [ 1245 ] ) ; xx [ 1233 ] = input [ 110 ] - (
xx [ 1257 ] * xx [ 1263 ] + xx [ 1239 ] * xx [ 1245 ] ) * xx [ 12 ] ; xx [
1269 ] = xx [ 1264 ] ; xx [ 1270 ] = xx [ 1265 ] ; xx [ 1271 ] = xx [ 1233 ]
; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1269 , xx + 1272 ) ; xx [ 933 ]
= 0.04148258714802073 ; xx [ 934 ] = 3.197150119698775e-3 ; xx [ 935 ] = -
2.380040901917324e-3 ; xx [ 1239 ] = 0.1199233718917195 ; xx [ 1245 ] =
6.016650158040916e-3 ; xx [ 1251 ] = xx [ 1245 ] * input [ 111 ] ; xx [ 1257
] = 0.01709382532472628 ; xx [ 1263 ] = 0.9926177441144018 ; xx [ 1269 ] = xx
[ 1263 ] * input [ 111 ] ; xx [ 1270 ] = ( xx [ 1239 ] * xx [ 1251 ] + xx [
1257 ] * xx [ 1269 ] ) * xx [ 12 ] ; xx [ 1271 ] = xx [ 12 ] * ( xx [ 1239 ]
* xx [ 1269 ] - xx [ 1257 ] * xx [ 1251 ] ) ; xx [ 1239 ] = input [ 111 ] - (
xx [ 1263 ] * xx [ 1269 ] + xx [ 1245 ] * xx [ 1251 ] ) * xx [ 12 ] ; xx [
1275 ] = - xx [ 1270 ] ; xx [ 1276 ] = xx [ 1271 ] ; xx [ 1277 ] = xx [ 1239
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1275 , xx + 1278 ) ; xx [ 933
] = - 0.04168350328274069 ; xx [ 934 ] = - 0.04172321726253591 ; xx [ 935 ] =
- 0.02106505189185183 ; xx [ 1245 ] = 0.2342432592721393 ; xx [ 1251 ] =
0.06543983228921862 ; xx [ 1257 ] = xx [ 1251 ] * input [ 112 ] ; xx [ 1263 ]
= 0.251989966046183 ; xx [ 1269 ] = 0.9366689814697439 ; xx [ 1275 ] = xx [
1269 ] * input [ 112 ] ; xx [ 1276 ] = ( xx [ 1245 ] * xx [ 1257 ] + xx [
1263 ] * xx [ 1275 ] ) * xx [ 12 ] ; xx [ 1277 ] = xx [ 12 ] * ( xx [ 1245 ]
* xx [ 1275 ] - xx [ 1263 ] * xx [ 1257 ] ) ; xx [ 1245 ] = input [ 112 ] - (
xx [ 1269 ] * xx [ 1275 ] + xx [ 1251 ] * xx [ 1257 ] ) * xx [ 12 ] ; xx [
1281 ] = - xx [ 1276 ] ; xx [ 1282 ] = xx [ 1277 ] ; xx [ 1283 ] = xx [ 1245
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1281 , xx + 1284 ) ; xx [ 933
] = 0.02930199029343554 ; xx [ 934 ] = 0.03436415369637134 ; xx [ 935 ] = -
2.298406593960215e-4 ; xx [ 1251 ] = 0.0535978209959625 ; xx [ 1257 ] =
6.433159249041309e-4 ; xx [ 1263 ] = xx [ 1257 ] * input [ 113 ] ; xx [ 1269
] = 0.09606121513911781 ; xx [ 1275 ] = 0.9939311357810972 ; xx [ 1281 ] = xx
[ 1275 ] * input [ 113 ] ; xx [ 1282 ] = ( xx [ 1251 ] * xx [ 1263 ] - xx [
1269 ] * xx [ 1281 ] ) * xx [ 12 ] ; xx [ 1283 ] = xx [ 12 ] * ( xx [ 1269 ]
* xx [ 1263 ] + xx [ 1251 ] * xx [ 1281 ] ) ; xx [ 1251 ] = input [ 113 ] - (
xx [ 1275 ] * xx [ 1281 ] + xx [ 1257 ] * xx [ 1263 ] ) * xx [ 12 ] ; xx [
1287 ] = xx [ 1282 ] ; xx [ 1288 ] = - xx [ 1283 ] ; xx [ 1289 ] = xx [ 1251
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1287 , xx + 1290 ) ; xx [ 933
] = 0.02862756968731633 ; xx [ 934 ] = 0.07637171918724878 ; xx [ 935 ] = -
0.01058660435553563 ; xx [ 1257 ] = 0.2332065042255295 ; xx [ 1263 ] =
0.01783146791272022 ; xx [ 1269 ] = xx [ 1263 ] * input [ 114 ] ; xx [ 1275 ]
= 0.1039408331379334 ; xx [ 1281 ] = 0.9666918166331906 ; xx [ 1287 ] = xx [
1281 ] * input [ 114 ] ; xx [ 1288 ] = ( xx [ 1257 ] * xx [ 1269 ] + xx [
1275 ] * xx [ 1287 ] ) * xx [ 12 ] ; xx [ 1289 ] = xx [ 12 ] * ( xx [ 1275 ]
* xx [ 1269 ] - xx [ 1257 ] * xx [ 1287 ] ) ; xx [ 1257 ] = input [ 114 ] - (
xx [ 1281 ] * xx [ 1287 ] + xx [ 1263 ] * xx [ 1269 ] ) * xx [ 12 ] ; xx [
1293 ] = - xx [ 1288 ] ; xx [ 1294 ] = xx [ 1289 ] ; xx [ 1295 ] = xx [ 1257
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1293 , xx + 1296 ) ; xx [ 933
] = 0.08887331662514102 ; xx [ 934 ] = - 0.0612916453118936 ; xx [ 935 ] = -
0.1168096624912623 ; xx [ 1263 ] = 0.7054881516792711 ; xx [ 1269 ] =
0.2874183777258685 ; xx [ 1275 ] = xx [ 1269 ] * input [ 115 ] ; xx [ 1281 ]
= 0.251504329686306 ; xx [ 1287 ] = 0.5970114874394273 ; xx [ 1293 ] = xx [
1287 ] * input [ 115 ] ; xx [ 1294 ] = ( xx [ 1263 ] * xx [ 1275 ] + xx [
1281 ] * xx [ 1293 ] ) * xx [ 12 ] ; xx [ 1295 ] = xx [ 12 ] * ( xx [ 1263 ]
* xx [ 1293 ] - xx [ 1281 ] * xx [ 1275 ] ) ; xx [ 1263 ] = input [ 115 ] - (
xx [ 1287 ] * xx [ 1293 ] + xx [ 1269 ] * xx [ 1275 ] ) * xx [ 12 ] ; xx [
1299 ] = - xx [ 1294 ] ; xx [ 1300 ] = xx [ 1295 ] ; xx [ 1301 ] = xx [ 1263
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1299 , xx + 1302 ) ; xx [ 933
] = 0.08886697790382755 ; xx [ 934 ] = - 0.06164843565869298 ; xx [ 935 ] = -
0.05488652689462781 ; xx [ 1269 ] = 0.5618713971915271 ; xx [ 1275 ] =
0.2343124448976534 ; xx [ 1281 ] = xx [ 1275 ] * input [ 116 ] ; xx [ 1287 ]
= 0.3106833398705445 ; xx [ 1293 ] = 0.7299822419148356 ; xx [ 1299 ] = xx [
1293 ] * input [ 116 ] ; xx [ 1300 ] = ( xx [ 1269 ] * xx [ 1281 ] + xx [
1287 ] * xx [ 1299 ] ) * xx [ 12 ] ; xx [ 1301 ] = xx [ 12 ] * ( xx [ 1269 ]
* xx [ 1299 ] - xx [ 1287 ] * xx [ 1281 ] ) ; xx [ 1269 ] = input [ 116 ] - (
xx [ 1293 ] * xx [ 1299 ] + xx [ 1275 ] * xx [ 1281 ] ) * xx [ 12 ] ; xx [
1305 ] = - xx [ 1300 ] ; xx [ 1306 ] = xx [ 1301 ] ; xx [ 1307 ] = xx [ 1269
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1305 , xx + 1308 ) ; xx [ 933
] = 0.07772795717396366 ; xx [ 934 ] = - 0.04247189938330817 ; xx [ 935 ] = -
0.0251441932791364 ; xx [ 1275 ] = 0.276587913074899 ; xx [ 1281 ] =
0.0422506803054369 ; xx [ 1287 ] = xx [ 1281 ] * input [ 117 ] ; xx [ 1293 ]
= 0.1388395356539401 ; xx [ 1299 ] = 0.9499671519026319 ; xx [ 1305 ] = xx [
1299 ] * input [ 117 ] ; xx [ 1306 ] = ( xx [ 1275 ] * xx [ 1287 ] + xx [
1293 ] * xx [ 1305 ] ) * xx [ 12 ] ; xx [ 1307 ] = xx [ 12 ] * ( xx [ 1275 ]
* xx [ 1305 ] - xx [ 1293 ] * xx [ 1287 ] ) ; xx [ 1275 ] = input [ 117 ] - (
xx [ 1299 ] * xx [ 1305 ] + xx [ 1281 ] * xx [ 1287 ] ) * xx [ 12 ] ; xx [
1311 ] = - xx [ 1306 ] ; xx [ 1312 ] = xx [ 1307 ] ; xx [ 1313 ] = xx [ 1275
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1311 , xx + 1314 ) ; xx [ 933
] = 0.06525253027268166 ; xx [ 934 ] = - 4.406459578718907e-3 ; xx [ 935 ] =
- 7.366786907179716e-3 ; xx [ 1281 ] = 0.08472537579807812 ; xx [ 1287 ] =
0.01843356037597695 ; xx [ 1293 ] = xx [ 1287 ] * input [ 118 ] ; xx [ 1299 ]
= 0.1627574807963621 ; xx [ 1305 ] = 0.9828488271308878 ; xx [ 1311 ] = xx [
1305 ] * input [ 118 ] ; xx [ 1312 ] = ( xx [ 1281 ] * xx [ 1293 ] + xx [
1299 ] * xx [ 1311 ] ) * xx [ 12 ] ; xx [ 1313 ] = xx [ 12 ] * ( xx [ 1281 ]
* xx [ 1311 ] - xx [ 1299 ] * xx [ 1293 ] ) ; xx [ 1281 ] = input [ 118 ] - (
xx [ 1305 ] * xx [ 1311 ] + xx [ 1287 ] * xx [ 1293 ] ) * xx [ 12 ] ; xx [
1317 ] = - xx [ 1312 ] ; xx [ 1318 ] = xx [ 1313 ] ; xx [ 1319 ] = xx [ 1281
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1317 , xx + 1320 ) ; xx [ 933
] = 0.0528767481880339 ; xx [ 934 ] = 0.02884596809690045 ; xx [ 935 ] = -
3.558177262034436e-3 ; xx [ 1287 ] = 0.05738258072666671 ; xx [ 1293 ] =
1.633870478445837e-3 ; xx [ 1299 ] = xx [ 1293 ] * input [ 119 ] ; xx [ 1305
] = 0.07311132915861022 ; xx [ 1311 ] = 0.9956702784783066 ; xx [ 1317 ] = xx
[ 1311 ] * input [ 119 ] ; xx [ 1318 ] = ( xx [ 1287 ] * xx [ 1299 ] - xx [
1305 ] * xx [ 1317 ] ) * xx [ 12 ] ; xx [ 1319 ] = xx [ 12 ] * ( xx [ 1305 ]
* xx [ 1299 ] + xx [ 1287 ] * xx [ 1317 ] ) ; xx [ 1287 ] = input [ 119 ] - (
xx [ 1311 ] * xx [ 1317 ] + xx [ 1293 ] * xx [ 1299 ] ) * xx [ 12 ] ; xx [
1323 ] = xx [ 1318 ] ; xx [ 1324 ] = - xx [ 1319 ] ; xx [ 1325 ] = xx [ 1287
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1323 , xx + 1326 ) ; xx [ 933
] = 0.04085972611525981 ; xx [ 934 ] = 0.05356486425640417 ; xx [ 935 ] = -
5.450171695717721e-3 ; xx [ 1293 ] = 0.09460546317854919 ; xx [ 1299 ] =
3.053291054081917e-3 ; xx [ 1305 ] = xx [ 1299 ] * input [ 120 ] ; xx [ 1311
] = 0.09684419861021348 ; xx [ 1317 ] = 0.9907884158315826 ; xx [ 1323 ] = xx
[ 1317 ] * input [ 120 ] ; xx [ 1324 ] = ( xx [ 1293 ] * xx [ 1305 ] + xx [
1311 ] * xx [ 1323 ] ) * xx [ 12 ] ; xx [ 1325 ] = xx [ 12 ] * ( xx [ 1311 ]
* xx [ 1305 ] - xx [ 1293 ] * xx [ 1323 ] ) ; xx [ 1293 ] = input [ 120 ] - (
xx [ 1317 ] * xx [ 1323 ] + xx [ 1299 ] * xx [ 1305 ] ) * xx [ 12 ] ; xx [
1329 ] = - xx [ 1324 ] ; xx [ 1330 ] = xx [ 1325 ] ; xx [ 1331 ] = xx [ 1293
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1329 , xx + 1332 ) ; xx [ 933
] = 0.1002985030736737 ; xx [ 934 ] = - 0.05227749176799683 ; xx [ 935 ] = -
0.08725696878023967 ; xx [ 1299 ] = 0.6625682197738285 ; xx [ 1305 ] =
0.3065574261284753 ; xx [ 1311 ] = xx [ 1305 ] * input [ 121 ] ; xx [ 1317 ]
= 0.2936564847037592 ; xx [ 1323 ] = 0.6170832744635487 ; xx [ 1329 ] = xx [
1323 ] * input [ 121 ] ; xx [ 1330 ] = ( xx [ 1299 ] * xx [ 1311 ] + xx [
1317 ] * xx [ 1329 ] ) * xx [ 12 ] ; xx [ 1331 ] = xx [ 12 ] * ( xx [ 1299 ]
* xx [ 1329 ] - xx [ 1317 ] * xx [ 1311 ] ) ; xx [ 1299 ] = input [ 121 ] - (
xx [ 1323 ] * xx [ 1329 ] + xx [ 1305 ] * xx [ 1311 ] ) * xx [ 12 ] ; xx [
1335 ] = - xx [ 1330 ] ; xx [ 1336 ] = xx [ 1331 ] ; xx [ 1337 ] = xx [ 1299
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1335 , xx + 1338 ) ; xx [ 933
] = 0.1002608402311033 ; xx [ 934 ] = - 0.03443241537289735 ; xx [ 935 ] = -
0.03685386470256991 ; xx [ 1305 ] = 0.2634294522538985 ; xx [ 1311 ] =
0.1355493015371225 ; xx [ 1317 ] = xx [ 1311 ] * input [ 122 ] ; xx [ 1323 ]
= 0.432519761028617 ; xx [ 1329 ] = 0.8515620745769256 ; xx [ 1335 ] = xx [
1329 ] * input [ 122 ] ; xx [ 1336 ] = ( xx [ 1305 ] * xx [ 1317 ] + xx [
1323 ] * xx [ 1335 ] ) * xx [ 12 ] ; xx [ 1337 ] = xx [ 12 ] * ( xx [ 1305 ]
* xx [ 1335 ] - xx [ 1323 ] * xx [ 1317 ] ) ; xx [ 1305 ] = input [ 122 ] - (
xx [ 1329 ] * xx [ 1335 ] + xx [ 1311 ] * xx [ 1317 ] ) * xx [ 12 ] ; xx [
1341 ] = - xx [ 1336 ] ; xx [ 1342 ] = xx [ 1337 ] ; xx [ 1343 ] = xx [ 1305
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1341 , xx + 1344 ) ; xx [ 933
] = - 0.03000715893276557 ; xx [ 934 ] = - 6.608288839976439e-3 ; xx [ 935 ]
= - 4.82147204094653e-3 ; xx [ 1311 ] = 0.2662653786798204 ; xx [ 1317 ] =
5.130591034712339e-3 ; xx [ 1323 ] = xx [ 1317 ] * input [ 123 ] ; xx [ 1329
] = 0.02582898334928278 ; xx [ 1335 ] = 0.9635399777753225 ; xx [ 1341 ] = xx
[ 1335 ] * input [ 123 ] ; xx [ 1342 ] = ( xx [ 1311 ] * xx [ 1323 ] + xx [
1329 ] * xx [ 1341 ] ) * xx [ 12 ] ; xx [ 1343 ] = xx [ 12 ] * ( xx [ 1311 ]
* xx [ 1341 ] - xx [ 1329 ] * xx [ 1323 ] ) ; xx [ 1311 ] = input [ 123 ] - (
xx [ 1335 ] * xx [ 1341 ] + xx [ 1317 ] * xx [ 1323 ] ) * xx [ 12 ] ; xx [
1347 ] = xx [ 1342 ] ; xx [ 1348 ] = xx [ 1343 ] ; xx [ 1349 ] = xx [ 1311 ]
; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1347 , xx + 1350 ) ; xx [ 933 ]
= 0.08884247588866538 ; xx [ 934 ] = - 8.835966179131649e-3 ; xx [ 935 ] = -
0.01843883558646855 ; xx [ 1317 ] = 0.06337600975061324 ; xx [ 1323 ] =
0.02588095217024628 ; xx [ 1329 ] = xx [ 1323 ] * input [ 124 ] ; xx [ 1335 ]
= 0.3149296965525175 ; xx [ 1341 ] = 0.9466429865224752 ; xx [ 1347 ] = xx [
1341 ] * input [ 124 ] ; xx [ 1348 ] = ( xx [ 1317 ] * xx [ 1329 ] + xx [
1335 ] * xx [ 1347 ] ) * xx [ 12 ] ; xx [ 1349 ] = xx [ 12 ] * ( xx [ 1317 ]
* xx [ 1347 ] - xx [ 1335 ] * xx [ 1329 ] ) ; xx [ 1317 ] = input [ 124 ] - (
xx [ 1341 ] * xx [ 1347 ] + xx [ 1323 ] * xx [ 1329 ] ) * xx [ 12 ] ; xx [
1353 ] = - xx [ 1348 ] ; xx [ 1354 ] = xx [ 1349 ] ; xx [ 1355 ] = xx [ 1317
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1353 , xx + 1356 ) ; xx [ 933
] = 0.07698781823301588 ; xx [ 934 ] = 0.03031047070116234 ; xx [ 935 ] = -
0.0131613301344704 ; xx [ 1323 ] = 0.1119765984117292 ; xx [ 1329 ] =
0.02375224840773239 ; xx [ 1335 ] = xx [ 1329 ] * input [ 125 ] ; xx [ 1341 ]
= 0.2595796872263635 ; xx [ 1347 ] = 0.9589136864614975 ; xx [ 1353 ] = xx [
1347 ] * input [ 125 ] ; xx [ 1354 ] = ( xx [ 1323 ] * xx [ 1335 ] + xx [
1341 ] * xx [ 1353 ] ) * xx [ 12 ] ; xx [ 1355 ] = xx [ 12 ] * ( xx [ 1341 ]
* xx [ 1335 ] - xx [ 1323 ] * xx [ 1353 ] ) ; xx [ 1323 ] = input [ 125 ] - (
xx [ 1347 ] * xx [ 1353 ] + xx [ 1329 ] * xx [ 1335 ] ) * xx [ 12 ] ; xx [
1359 ] = - xx [ 1354 ] ; xx [ 1360 ] = xx [ 1355 ] ; xx [ 1361 ] = xx [ 1323
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1359 , xx + 1362 ) ; xx [ 933
] = 0.06410293276591428 ; xx [ 934 ] = 0.05766363314794307 ; xx [ 935 ] = -
0.01776190243369759 ; xx [ 1329 ] = 0.2621419513176254 ; xx [ 1335 ] =
0.06860447847708197 ; xx [ 1341 ] = xx [ 1335 ] * input [ 126 ] ; xx [ 1347 ]
= 0.2691185112896542 ; xx [ 1353 ] = 0.9242024939230125 ; xx [ 1359 ] = xx [
1353 ] * input [ 126 ] ; xx [ 1360 ] = ( xx [ 1329 ] * xx [ 1341 ] + xx [
1347 ] * xx [ 1359 ] ) * xx [ 12 ] ; xx [ 1361 ] = xx [ 12 ] * ( xx [ 1347 ]
* xx [ 1341 ] - xx [ 1329 ] * xx [ 1359 ] ) ; xx [ 1329 ] = input [ 126 ] - (
xx [ 1353 ] * xx [ 1359 ] + xx [ 1335 ] * xx [ 1341 ] ) * xx [ 12 ] ; xx [
1365 ] = - xx [ 1360 ] ; xx [ 1366 ] = xx [ 1361 ] ; xx [ 1367 ] = xx [ 1329
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1365 , xx + 1368 ) ; xx [ 933
] = 0.05151655382800063 ; xx [ 934 ] = 0.07590939818327416 ; xx [ 935 ] = -
0.02558013511927111 ; xx [ 1335 ] = 0.4221198092475255 ; xx [ 1341 ] =
0.1281393224157436 ; xx [ 1347 ] = xx [ 1341 ] * input [ 127 ] ; xx [ 1353 ]
= 0.2763208293260235 ; xx [ 1359 ] = 0.8538395516560742 ; xx [ 1365 ] = xx [
1359 ] * input [ 127 ] ; xx [ 1366 ] = ( xx [ 1335 ] * xx [ 1347 ] + xx [
1353 ] * xx [ 1365 ] ) * xx [ 12 ] ; xx [ 1367 ] = xx [ 12 ] * ( xx [ 1353 ]
* xx [ 1347 ] - xx [ 1335 ] * xx [ 1365 ] ) ; xx [ 1335 ] = input [ 127 ] - (
xx [ 1359 ] * xx [ 1365 ] + xx [ 1341 ] * xx [ 1347 ] ) * xx [ 12 ] ; xx [
1371 ] = - xx [ 1366 ] ; xx [ 1372 ] = xx [ 1367 ] ; xx [ 1373 ] = xx [ 1335
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1371 , xx + 1374 ) ; xx [ 933
] = 0.03998183499215965 ; xx [ 934 ] = 0.08898570672413771 ; xx [ 935 ] = -
0.03377850034806965 ; xx [ 1341 ] = 0.5423780303336361 ; xx [ 1347 ] =
0.1590891076346561 ; xx [ 1353 ] = xx [ 1347 ] * input [ 128 ] ; xx [ 1359 ]
= 0.2434072545963042 ; xx [ 1365 ] = 0.7882065950328658 ; xx [ 1371 ] = xx [
1365 ] * input [ 128 ] ; xx [ 1372 ] = ( xx [ 1341 ] * xx [ 1353 ] + xx [
1359 ] * xx [ 1371 ] ) * xx [ 12 ] ; xx [ 1373 ] = xx [ 12 ] * ( xx [ 1359 ]
* xx [ 1353 ] - xx [ 1341 ] * xx [ 1371 ] ) ; xx [ 1341 ] = input [ 128 ] - (
xx [ 1365 ] * xx [ 1371 ] + xx [ 1347 ] * xx [ 1353 ] ) * xx [ 12 ] ; xx [
1377 ] = - xx [ 1372 ] ; xx [ 1378 ] = xx [ 1373 ] ; xx [ 1379 ] = xx [ 1341
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1377 , xx + 1380 ) ; xx [ 933
] = 0.1078026094018518 ; xx [ 934 ] = - 0.03489168803420988 ; xx [ 935 ] = -
0.1175021056069469 ; xx [ 1347 ] = 0.6792154792002904 ; xx [ 1353 ] =
0.4270171481773202 ; xx [ 1359 ] = xx [ 1353 ] * input [ 129 ] ; xx [ 1365 ]
= 0.3243972925127879 ; xx [ 1371 ] = 0.5010879010588875 ; xx [ 1377 ] = xx [
1371 ] * input [ 129 ] ; xx [ 1378 ] = ( xx [ 1347 ] * xx [ 1359 ] + xx [
1365 ] * xx [ 1377 ] ) * xx [ 12 ] ; xx [ 1379 ] = xx [ 12 ] * ( xx [ 1347 ]
* xx [ 1377 ] - xx [ 1365 ] * xx [ 1359 ] ) ; xx [ 1347 ] = input [ 129 ] - (
xx [ 1371 ] * xx [ 1377 ] + xx [ 1353 ] * xx [ 1359 ] ) * xx [ 12 ] ; xx [
1383 ] = - xx [ 1378 ] ; xx [ 1384 ] = xx [ 1379 ] ; xx [ 1385 ] = xx [ 1347
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1383 , xx + 1386 ) ; xx [ 933
] = 0.1085289392221315 ; xx [ 934 ] = - 0.03773545717674479 ; xx [ 935 ] = -
0.06914671798067905 ; xx [ 1353 ] = 0.5206024645015256 ; xx [ 1359 ] =
0.3669906641286951 ; xx [ 1365 ] = xx [ 1359 ] * input [ 130 ] ; xx [ 1371 ]
= 0.4492508056740898 ; xx [ 1377 ] = 0.6264699833180344 ; xx [ 1383 ] = xx [
1377 ] * input [ 130 ] ; xx [ 1384 ] = ( xx [ 1353 ] * xx [ 1365 ] + xx [
1371 ] * xx [ 1383 ] ) * xx [ 12 ] ; xx [ 1385 ] = xx [ 12 ] * ( xx [ 1353 ]
* xx [ 1383 ] - xx [ 1371 ] * xx [ 1365 ] ) ; xx [ 1353 ] = input [ 130 ] - (
xx [ 1377 ] * xx [ 1383 ] + xx [ 1359 ] * xx [ 1365 ] ) * xx [ 12 ] ; xx [
1389 ] = - xx [ 1384 ] ; xx [ 1390 ] = xx [ 1385 ] ; xx [ 1391 ] = xx [ 1353
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1389 , xx + 1392 ) ; xx [ 933
] = 0.108045347124532 ; xx [ 934 ] = - 6.756674438570453e-3 ; xx [ 935 ] = -
0.03927706207019656 ; xx [ 1359 ] = 0.0246225636350577 ; xx [ 1365 ] =
0.0229080611250566 ; xx [ 1371 ] = xx [ 1365 ] * input [ 131 ] ; xx [ 1377 ]
= 0.5660436624340061 ; xx [ 1383 ] = 0.8236889718296739 ; xx [ 1389 ] = xx [
1383 ] * input [ 131 ] ; xx [ 1390 ] = ( xx [ 1359 ] * xx [ 1371 ] + xx [
1377 ] * xx [ 1389 ] ) * xx [ 12 ] ; xx [ 1391 ] = xx [ 12 ] * ( xx [ 1359 ]
* xx [ 1389 ] - xx [ 1377 ] * xx [ 1371 ] ) ; xx [ 1359 ] = input [ 131 ] - (
xx [ 1383 ] * xx [ 1389 ] + xx [ 1365 ] * xx [ 1371 ] ) * xx [ 12 ] ; xx [
1395 ] = - xx [ 1390 ] ; xx [ 1396 ] = xx [ 1391 ] ; xx [ 1397 ] = xx [ 1359
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1395 , xx + 1398 ) ; xx [ 933
] = 0.09952732681281544 ; xx [ 934 ] = 0.0228807887491343 ; xx [ 935 ] = -
0.03207153656907608 ; xx [ 1365 ] = 0.1948508511673901 ; xx [ 1371 ] =
0.09950828214620858 ; xx [ 1377 ] = xx [ 1371 ] * input [ 132 ] ; xx [ 1383 ]
= 0.4717830530291653 ; xx [ 1389 ] = 0.8541381612234252 ; xx [ 1395 ] = xx [
1389 ] * input [ 132 ] ; xx [ 1396 ] = ( xx [ 1365 ] * xx [ 1377 ] + xx [
1383 ] * xx [ 1395 ] ) * xx [ 12 ] ; xx [ 1397 ] = xx [ 12 ] * ( xx [ 1383 ]
* xx [ 1377 ] - xx [ 1365 ] * xx [ 1395 ] ) ; xx [ 1365 ] = input [ 132 ] - (
xx [ 1389 ] * xx [ 1395 ] + xx [ 1371 ] * xx [ 1377 ] ) * xx [ 12 ] ; xx [
1401 ] = - xx [ 1396 ] ; xx [ 1402 ] = xx [ 1397 ] ; xx [ 1403 ] = xx [ 1365
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1401 , xx + 1404 ) ; xx [ 933
] = 0.08709499034352691 ; xx [ 934 ] = 0.05213038288345741 ; xx [ 935 ] = -
0.04069718640773098 ; xx [ 1371 ] = 0.434652088674542 ; xx [ 1377 ] =
0.2317404840391152 ; xx [ 1383 ] = xx [ 1377 ] * input [ 133 ] ; xx [ 1389 ]
= 0.4220207955158514 ; xx [ 1395 ] = 0.761099440296958 ; xx [ 1401 ] = xx [
1395 ] * input [ 133 ] ; xx [ 1402 ] = ( xx [ 1371 ] * xx [ 1383 ] + xx [
1389 ] * xx [ 1401 ] ) * xx [ 12 ] ; xx [ 1403 ] = xx [ 12 ] * ( xx [ 1389 ]
* xx [ 1383 ] - xx [ 1371 ] * xx [ 1401 ] ) ; xx [ 1371 ] = input [ 133 ] - (
xx [ 1395 ] * xx [ 1401 ] + xx [ 1377 ] * xx [ 1383 ] ) * xx [ 12 ] ; xx [
1407 ] = - xx [ 1402 ] ; xx [ 1408 ] = xx [ 1403 ] ; xx [ 1409 ] = xx [ 1371
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1407 , xx + 1410 ) ; xx [ 933
] = - 0.01660265431542934 ; xx [ 934 ] = 0.0206290635966051 ; xx [ 935 ] =
3.715046686832338e-3 ; xx [ 1377 ] = 0.0242980481220576 ; xx [ 1383 ] =
8.390142000848796e-3 ; xx [ 1389 ] = xx [ 1383 ] * input [ 134 ] ; xx [ 1395
] = 0.1154129525776666 ; xx [ 1401 ] = 0.9929849247355014 ; xx [ 1407 ] = xx
[ 1401 ] * input [ 134 ] ; xx [ 1408 ] = ( xx [ 1377 ] * xx [ 1389 ] + xx [
1395 ] * xx [ 1407 ] ) * xx [ 12 ] ; xx [ 1409 ] = xx [ 12 ] * ( xx [ 1395 ]
* xx [ 1389 ] - xx [ 1377 ] * xx [ 1407 ] ) ; xx [ 1377 ] = input [ 134 ] - (
xx [ 1401 ] * xx [ 1407 ] + xx [ 1383 ] * xx [ 1389 ] ) * xx [ 12 ] ; xx [
1413 ] = xx [ 1408 ] ; xx [ 1414 ] = xx [ 1409 ] ; xx [ 1415 ] = xx [ 1377 ]
; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1413 , xx + 1416 ) ; xx [ 933 ]
= 0.0762484734824999 ; xx [ 934 ] = 0.07044896380206572 ; xx [ 935 ] = -
0.05864862028843598 ; xx [ 1383 ] = 0.6406835439358122 ; xx [ 1389 ] =
0.2443974596793096 ; xx [ 1395 ] = xx [ 1389 ] * input [ 135 ] ; xx [ 1401 ]
= 0.2667162377594259 ; xx [ 1407 ] = 0.677242147793244 ; xx [ 1413 ] = xx [
1407 ] * input [ 135 ] ; xx [ 1414 ] = ( xx [ 1383 ] * xx [ 1395 ] + xx [
1401 ] * xx [ 1413 ] ) * xx [ 12 ] ; xx [ 1415 ] = xx [ 12 ] * ( xx [ 1401 ]
* xx [ 1395 ] - xx [ 1383 ] * xx [ 1413 ] ) ; xx [ 1383 ] = input [ 135 ] - (
xx [ 1407 ] * xx [ 1413 ] + xx [ 1389 ] * xx [ 1395 ] ) * xx [ 12 ] ; xx [
1419 ] = - xx [ 1414 ] ; xx [ 1420 ] = xx [ 1415 ] ; xx [ 1421 ] = xx [ 1383
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1419 , xx + 1422 ) ; xx [ 933
] = 0.05836722086711408 ; xx [ 934 ] = 0.08315815171647134 ; xx [ 935 ] = -
0.07492339371415332 ; xx [ 1389 ] = 0.6946799062739931 ; xx [ 1395 ] =
0.1979505052448488 ; xx [ 1401 ] = xx [ 1395 ] * input [ 136 ] ; xx [ 1407 ]
= 0.1959276800784864 ; xx [ 1413 ] = 0.6632102000659578 ; xx [ 1419 ] = xx [
1413 ] * input [ 136 ] ; xx [ 1420 ] = ( xx [ 1389 ] * xx [ 1401 ] + xx [
1407 ] * xx [ 1419 ] ) * xx [ 12 ] ; xx [ 1421 ] = xx [ 12 ] * ( xx [ 1407 ]
* xx [ 1401 ] - xx [ 1389 ] * xx [ 1419 ] ) ; xx [ 1389 ] = input [ 136 ] - (
xx [ 1413 ] * xx [ 1419 ] + xx [ 1395 ] * xx [ 1401 ] ) * xx [ 12 ] ; xx [
1425 ] = - xx [ 1420 ] ; xx [ 1426 ] = xx [ 1421 ] ; xx [ 1427 ] = xx [ 1389
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1425 , xx + 1428 ) ; xx [ 933
] = 0.1130322189712437 ; xx [ 934 ] = - 8.823405755190483e-3 ; xx [ 935 ] = -
0.1250098946936068 ; xx [ 1395 ] = 0.6398980533771547 ; xx [ 1401 ] =
0.6296603699734298 ; xx [ 1407 ] = xx [ 1401 ] * input [ 137 ] ; xx [ 1413 ]
= 0.3234254103849678 ; xx [ 1419 ] = 0.2990891233167245 ; xx [ 1425 ] = xx [
1419 ] * input [ 137 ] ; xx [ 1426 ] = ( xx [ 1395 ] * xx [ 1407 ] + xx [
1413 ] * xx [ 1425 ] ) * xx [ 12 ] ; xx [ 1427 ] = xx [ 12 ] * ( xx [ 1395 ]
* xx [ 1425 ] - xx [ 1413 ] * xx [ 1407 ] ) ; xx [ 1395 ] = input [ 137 ] - (
xx [ 1419 ] * xx [ 1425 ] + xx [ 1401 ] * xx [ 1407 ] ) * xx [ 12 ] ; xx [
1431 ] = - xx [ 1426 ] ; xx [ 1432 ] = xx [ 1427 ] ; xx [ 1433 ] = xx [ 1395
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1431 , xx + 1434 ) ; xx [ 933
] = 0.1141456565335867 ; xx [ 934 ] = - 9.002435251046298e-3 ; xx [ 935 ] = -
0.08563554301030606 ; xx [ 1401 ] = 0.4675981288283714 ; xx [ 1407 ] =
0.4917950387643119 ; xx [ 1413 ] = xx [ 1407 ] * input [ 138 ] ; xx [ 1419 ]
= 0.5136170817587071 ; xx [ 1425 ] = 0.5250591615129523 ; xx [ 1431 ] = xx [
1425 ] * input [ 138 ] ; xx [ 1432 ] = ( xx [ 1401 ] * xx [ 1413 ] + xx [
1419 ] * xx [ 1431 ] ) * xx [ 12 ] ; xx [ 1433 ] = xx [ 12 ] * ( xx [ 1401 ]
* xx [ 1431 ] - xx [ 1419 ] * xx [ 1413 ] ) ; xx [ 1401 ] = input [ 138 ] - (
xx [ 1425 ] * xx [ 1431 ] + xx [ 1407 ] * xx [ 1413 ] ) * xx [ 12 ] ; xx [
1437 ] = - xx [ 1432 ] ; xx [ 1438 ] = xx [ 1433 ] ; xx [ 1439 ] = xx [ 1401
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1437 , xx + 1440 ) ; xx [ 933
] = 0.1077458034218663 ; xx [ 934 ] = 0.02683966948079 ; xx [ 935 ] = -
0.06862443744200107 ; xx [ 1407 ] = 0.5181735343841858 ; xx [ 1413 ] =
0.3932752713126598 ; xx [ 1419 ] = xx [ 1413 ] * input [ 139 ] ; xx [ 1425 ]
= 0.4662423632645503 ; xx [ 1431 ] = 0.599540497327113 ; xx [ 1437 ] = xx [
1431 ] * input [ 139 ] ; xx [ 1438 ] = ( xx [ 1407 ] * xx [ 1419 ] + xx [
1425 ] * xx [ 1437 ] ) * xx [ 12 ] ; xx [ 1439 ] = xx [ 12 ] * ( xx [ 1425 ]
* xx [ 1419 ] - xx [ 1407 ] * xx [ 1437 ] ) ; xx [ 1407 ] = input [ 139 ] - (
xx [ 1431 ] * xx [ 1437 ] + xx [ 1413 ] * xx [ 1419 ] ) * xx [ 12 ] ; xx [
1443 ] = - xx [ 1438 ] ; xx [ 1444 ] = xx [ 1439 ] ; xx [ 1445 ] = xx [ 1407
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1443 , xx + 1446 ) ; xx [ 933
] = 0.1073354957132696 ; xx [ 934 ] = 0.02003609432974655 ; xx [ 935 ] = -
0.1247314157589293 ; xx [ 1413 ] = 0.6706972911750326 ; xx [ 1419 ] =
0.4477541250148736 ; xx [ 1425 ] = xx [ 1419 ] * input [ 140 ] ; xx [ 1431 ]
= 0.3316631155340412 ; xx [ 1437 ] = 0.4895722264762288 ; xx [ 1443 ] = xx [
1437 ] * input [ 140 ] ; xx [ 1444 ] = ( xx [ 1413 ] * xx [ 1425 ] + xx [
1431 ] * xx [ 1443 ] ) * xx [ 12 ] ; xx [ 1445 ] = xx [ 12 ] * ( xx [ 1431 ]
* xx [ 1425 ] - xx [ 1413 ] * xx [ 1443 ] ) ; xx [ 1413 ] = input [ 140 ] - (
xx [ 1437 ] * xx [ 1443 ] + xx [ 1419 ] * xx [ 1425 ] ) * xx [ 12 ] ; xx [
1449 ] = - xx [ 1444 ] ; xx [ 1450 ] = xx [ 1445 ] ; xx [ 1451 ] = xx [ 1413
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1449 , xx + 1452 ) ; xx [ 933
] = 0.09938670807675551 ; xx [ 934 ] = 0.0444436843209301 ; xx [ 935 ] = -
0.08738591386877287 ; xx [ 1419 ] = 0.6793683944033605 ; xx [ 1425 ] =
0.3565991527695513 ; xx [ 1431 ] = xx [ 1425 ] * input [ 141 ] ; xx [ 1437 ]
= 0.3027178312238702 ; xx [ 1443 ] = 0.5653826523594042 ; xx [ 1449 ] = xx [
1443 ] * input [ 141 ] ; xx [ 1450 ] = ( xx [ 1419 ] * xx [ 1431 ] + xx [
1437 ] * xx [ 1449 ] ) * xx [ 12 ] ; xx [ 1451 ] = xx [ 12 ] * ( xx [ 1437 ]
* xx [ 1431 ] - xx [ 1419 ] * xx [ 1449 ] ) ; xx [ 1419 ] = input [ 141 ] - (
xx [ 1443 ] * xx [ 1449 ] + xx [ 1425 ] * xx [ 1431 ] ) * xx [ 12 ] ; xx [
1455 ] = - xx [ 1450 ] ; xx [ 1456 ] = xx [ 1451 ] ; xx [ 1457 ] = xx [ 1419
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1455 , xx + 1458 ) ; xx [ 933
] = 0.08162360991290972 ; xx [ 934 ] = 0.06041243531084342 ; xx [ 935 ] = -
0.1174933092461929 ; xx [ 1425 ] = 0.7083565431201579 ; xx [ 1431 ] =
0.3047264570560833 ; xx [ 1437 ] = xx [ 1431 ] * input [ 142 ] ; xx [ 1443 ]
= 0.2563215591787598 ; xx [ 1449 ] = 0.5828139089701587 ; xx [ 1455 ] = xx [
1449 ] * input [ 142 ] ; xx [ 1456 ] = ( xx [ 1425 ] * xx [ 1437 ] + xx [
1443 ] * xx [ 1455 ] ) * xx [ 12 ] ; xx [ 1457 ] = xx [ 12 ] * ( xx [ 1443 ]
* xx [ 1437 ] - xx [ 1425 ] * xx [ 1455 ] ) ; xx [ 1425 ] = input [ 142 ] - (
xx [ 1449 ] * xx [ 1455 ] + xx [ 1431 ] * xx [ 1437 ] ) * xx [ 12 ] ; xx [
1461 ] = - xx [ 1456 ] ; xx [ 1462 ] = xx [ 1457 ] ; xx [ 1463 ] = xx [ 1425
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1461 , xx + 1464 ) ; xx [ 933
] = - 0.0171442268584411 ; xx [ 934 ] = 0.05878123656883572 ; xx [ 935 ] = -
1.619412475548285e-3 ; xx [ 1431 ] = 0.1175219350726416 ; xx [ 1437 ] =
0.01392624262502743 ; xx [ 1443 ] = xx [ 1437 ] * input [ 145 ] ; xx [ 1449 ]
= 0.06365206036819079 ; xx [ 1455 ] = 0.990930406110346 ; xx [ 1461 ] = xx [
1455 ] * input [ 145 ] ; xx [ 1462 ] = ( xx [ 1431 ] * xx [ 1443 ] + xx [
1449 ] * xx [ 1461 ] ) * xx [ 12 ] ; xx [ 1463 ] = xx [ 12 ] * ( xx [ 1449 ]
* xx [ 1443 ] - xx [ 1431 ] * xx [ 1461 ] ) ; xx [ 1431 ] = input [ 145 ] - (
xx [ 1455 ] * xx [ 1461 ] + xx [ 1437 ] * xx [ 1443 ] ) * xx [ 12 ] ; xx [
1467 ] = xx [ 1462 ] ; xx [ 1468 ] = xx [ 1463 ] ; xx [ 1469 ] = xx [ 1431 ]
; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1467 , xx + 1470 ) ; xx [ 933 ]
= - 1.174202054215593e-3 ; xx [ 934 ] = - 0.01034665570639538 ; xx [ 935 ] =
- 0.1064666178194215 ; xx [ 1437 ] = 0.670304392204657 ; xx [ 1443 ] =
7.308788146271698e-3 ; xx [ 1449 ] = xx [ 1443 ] * input [ 148 ] ; xx [ 1455
] = 2.148648828607749e-4 ; xx [ 1461 ] = 0.7420502390270221 ; xx [ 1467 ] =
xx [ 1461 ] * input [ 148 ] ; xx [ 1468 ] = ( xx [ 1437 ] * xx [ 1449 ] - xx
[ 1455 ] * xx [ 1467 ] ) * xx [ 12 ] ; xx [ 1469 ] = xx [ 12 ] * ( xx [ 1455
] * xx [ 1449 ] + xx [ 1437 ] * xx [ 1467 ] ) ; xx [ 1437 ] = input [ 148 ] -
( xx [ 1461 ] * xx [ 1467 ] + xx [ 1443 ] * xx [ 1449 ] ) * xx [ 12 ] ; xx [
1473 ] = xx [ 1468 ] ; xx [ 1474 ] = - xx [ 1469 ] ; xx [ 1475 ] = xx [ 1437
] ; pm_math_Vector3_cross_ra ( xx + 933 , xx + 1473 , xx + 1476 ) ; xx [ 933
] = xx [ 856 ] ; xx [ 934 ] = xx [ 855 ] ; xx [ 935 ] = xx [ 147 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 933 , xx + 1473 ) ;
pm_math_Vector3_cross_ra ( xx + 868 , xx + 1473 , xx + 933 ) ; xx [ 868 ] =
xx [ 883 ] ; xx [ 869 ] = xx [ 800 ] ; xx [ 870 ] = xx [ 170 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 868 , xx + 1479 ) ;
pm_math_Vector3_cross_ra ( xx + 880 , xx + 1479 , xx + 868 ) ; xx [ 880 ] =
xx [ 896 ] ; xx [ 881 ] = xx [ 813 ] ; xx [ 882 ] = xx [ 798 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 880 , xx + 1482 ) ;
pm_math_Vector3_cross_ra ( xx + 893 , xx + 1482 , xx + 880 ) ; xx [ 893 ] =
0.01519594655146509 ; xx [ 894 ] = 0.1066526728995764 ; xx [ 895 ] = -
0.03585936688742598 ; pm_math_Quaternion_compose_ra ( xx + 649 , xx + 62 , xx
+ 1485 ) ; pm_math_Quaternion_compose_ra ( xx + 1485 , xx + 89 , xx + 1489 )
; pm_math_Quaternion_compose_ra ( xx + 1489 , xx + 85 , xx + 1493 ) ;
pm_math_Quaternion_compose_ra ( xx + 1493 , xx + 114 , xx + 1497 ) ;
pm_math_Quaternion_xform_ra ( xx + 1497 , xx + 893 , xx + 1501 ) ;
pm_math_Quaternion_xform_ra ( xx + 1493 , xx + 142 , xx + 1504 ) ;
pm_math_Quaternion_xform_ra ( xx + 1489 , xx + 123 , xx + 1493 ) ;
pm_math_Quaternion_xform_ra ( xx + 1485 , xx + 93 , xx + 1489 ) ;
pm_math_Quaternion_xform_ra ( xx + 649 , xx + 463 , xx + 1485 ) ; xx [ 649 ]
= xx [ 1504 ] + xx [ 1493 ] + xx [ 1489 ] + xx [ 1485 ] - xx [ 653 ] ; xx [
650 ] = 0.01688944435119629 ; xx [ 651 ] = xx [ 1501 ] + xx [ 649 ] - xx [
650 ] ; xx [ 652 ] = xx [ 1505 ] + xx [ 1494 ] + xx [ 1490 ] + xx [ 1486 ] +
xx [ 655 ] ; xx [ 653 ] = 0.1319682159423828 ; xx [ 655 ] = xx [ 1502 ] + xx
[ 652 ] - xx [ 653 ] ; xx [ 1443 ] = xx [ 1506 ] + xx [ 1495 ] + xx [ 1491 ]
+ xx [ 1487 ] + xx [ 658 ] ; xx [ 658 ] = 0.8089576416015625 ; xx [ 1449 ] =
xx [ 1503 ] + xx [ 1443 ] - xx [ 658 ] ; xx [ 1455 ] = sqrt ( xx [ 651 ] * xx
[ 651 ] + xx [ 655 ] * xx [ 655 ] + xx [ 1449 ] * xx [ 1449 ] ) ; if ( xx [
1455 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1455 ] = input [ 164 ] / xx [ 1455 ] ; xx [ 1485 ] =
xx [ 1455 ] * xx [ 651 ] ; xx [ 1486 ] = xx [ 1455 ] * xx [ 655 ] ; xx [ 1487
] = xx [ 1455 ] * xx [ 1449 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1497 , xx + 1485 , xx + 1488 ) ; pm_math_Vector3_cross_ra ( xx + 893 , xx +
1488 , xx + 1485 ) ; xx [ 893 ] = - 0.01857933020468612 ; xx [ 894 ] =
0.1062960041055536 ; xx [ 895 ] = - 0.03551762226730922 ;
pm_math_Quaternion_xform_ra ( xx + 1497 , xx + 893 , xx + 1491 ) ; xx [ 651 ]
= xx [ 1491 ] + xx [ 649 ] + xx [ 650 ] ; xx [ 650 ] = xx [ 1492 ] + xx [ 652
] - xx [ 653 ] ; xx [ 653 ] = xx [ 1493 ] + xx [ 1443 ] - xx [ 658 ] ; xx [
655 ] = sqrt ( xx [ 651 ] * xx [ 651 ] + xx [ 650 ] * xx [ 650 ] + xx [ 653 ]
* xx [ 653 ] ) ; if ( xx [ 655 ] == 0.0 ) { return sm_ssci_recordRunTimeError
( "physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force1' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 655 ] = input [ 165 ] / xx [ 655 ] ; xx [ 1491 ] = xx
[ 655 ] * xx [ 651 ] ; xx [ 1492 ] = xx [ 655 ] * xx [ 650 ] ; xx [ 1493 ] =
xx [ 655 ] * xx [ 653 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1497 , xx
+ 1491 , xx + 1494 ) ; pm_math_Vector3_cross_ra ( xx + 893 , xx + 1494 , xx +
1491 ) ; xx [ 893 ] = 0.01045379203557594 ; xx [ 894 ] = -
0.08550357325700537 ; xx [ 895 ] = 4.618692289715317e-3 ;
pm_math_Quaternion_xform_ra ( xx + 1497 , xx + 893 , xx + 1501 ) ; xx [ 650 ]
= 9.709312438964843e-3 ; xx [ 651 ] = xx [ 1501 ] + xx [ 649 ] - xx [ 650 ] ;
xx [ 653 ] = 2.232642650604248e-3 ; xx [ 658 ] = xx [ 1502 ] + xx [ 652 ] +
xx [ 653 ] ; xx [ 1449 ] = 0.8689576416015625 ; xx [ 1461 ] = xx [ 1503 ] +
xx [ 1443 ] - xx [ 1449 ] ; xx [ 1467 ] = sqrt ( xx [ 651 ] * xx [ 651 ] + xx
[ 658 ] * xx [ 658 ] + xx [ 1461 ] * xx [ 1461 ] ) ; if ( xx [ 1467 ] == 0.0
) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force2' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1467 ] = input [ 166 ] / xx [ 1467 ] ; xx [ 1501 ] =
xx [ 1467 ] * xx [ 651 ] ; xx [ 1502 ] = xx [ 1467 ] * xx [ 658 ] ; xx [ 1503
] = xx [ 1467 ] * xx [ 1461 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1497 , xx + 1501 , xx + 1504 ) ; pm_math_Vector3_cross_ra ( xx + 893 , xx +
1504 , xx + 1501 ) ; xx [ 893 ] = - 8.962756426230073e-3 ; xx [ 894 ] = -
0.08570861308462711 ; xx [ 895 ] = 4.815152588944403e-3 ;
pm_math_Quaternion_xform_ra ( xx + 1497 , xx + 893 , xx + 1507 ) ; xx [ 651 ]
= xx [ 1507 ] + xx [ 649 ] + xx [ 650 ] ; xx [ 650 ] = xx [ 1508 ] + xx [ 652
] + xx [ 653 ] ; xx [ 653 ] = xx [ 1509 ] + xx [ 1443 ] - xx [ 1449 ] ; xx [
658 ] = sqrt ( xx [ 651 ] * xx [ 651 ] + xx [ 650 ] * xx [ 650 ] + xx [ 653 ]
* xx [ 653 ] ) ; if ( xx [ 658 ] == 0.0 ) { return sm_ssci_recordRunTimeError
( "physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force3' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 658 ] = input [ 167 ] / xx [ 658 ] ; xx [ 1507 ] = xx
[ 658 ] * xx [ 651 ] ; xx [ 1508 ] = xx [ 658 ] * xx [ 650 ] ; xx [ 1509 ] =
xx [ 658 ] * xx [ 653 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1497 , xx
+ 1507 , xx + 1510 ) ; pm_math_Vector3_cross_ra ( xx + 893 , xx + 1510 , xx +
1507 ) ; xx [ 893 ] = 0.1049001030020798 ; xx [ 894 ] = 0.02043269096374428 ;
xx [ 895 ] = - 0.1631011914932122 ; pm_math_Quaternion_xform_ra ( xx + 1497 ,
xx + 893 , xx + 1513 ) ; xx [ 650 ] = 0.06488653564453126 ; xx [ 651 ] = xx [
1513 ] + xx [ 649 ] - xx [ 650 ] ; xx [ 653 ] = 0.03644176864624023 ; xx [
1449 ] = xx [ 1514 ] + xx [ 652 ] - xx [ 653 ] ; xx [ 1461 ] =
0.9499576416015625 ; xx [ 1513 ] = xx [ 1515 ] + xx [ 1443 ] - xx [ 1461 ] ;
xx [ 1514 ] = sqrt ( xx [ 651 ] * xx [ 651 ] + xx [ 1449 ] * xx [ 1449 ] + xx
[ 1513 ] * xx [ 1513 ] ) ; if ( xx [ 1514 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force4' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1514 ] = input [ 168 ] / xx [ 1514 ] ; xx [ 1515 ] =
xx [ 1514 ] * xx [ 651 ] ; xx [ 1516 ] = xx [ 1514 ] * xx [ 1449 ] ; xx [
1517 ] = xx [ 1514 ] * xx [ 1513 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 1497 , xx + 1515 , xx + 1518 ) ; pm_math_Vector3_cross_ra ( xx + 893 , xx +
1518 , xx + 1515 ) ; pm_math_Quaternion_xform_ra ( xx + 1497 , xx + 167 , xx
+ 893 ) ; xx [ 651 ] = 0.1324676666259766 ; xx [ 1449 ] = xx [ 893 ] + xx [
649 ] - xx [ 651 ] ; xx [ 1513 ] = 0.1263068237304688 ; xx [ 1521 ] = xx [
894 ] + xx [ 652 ] - xx [ 1513 ] ; xx [ 893 ] = 0.9199576416015626 ; xx [ 894
] = xx [ 895 ] + xx [ 1443 ] - xx [ 893 ] ; xx [ 895 ] = sqrt ( xx [ 1449 ] *
xx [ 1449 ] + xx [ 1521 ] * xx [ 1521 ] + xx [ 894 ] * xx [ 894 ] ) ; if ( xx
[ 895 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force5' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 895 ] = input [ 169 ] / xx [ 895 ] ; xx [ 1522 ] = xx
[ 895 ] * xx [ 1449 ] ; xx [ 1523 ] = xx [ 895 ] * xx [ 1521 ] ; xx [ 1524 ]
= xx [ 895 ] * xx [ 894 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1497 ,
xx + 1522 , xx + 1525 ) ; pm_math_Vector3_cross_ra ( xx + 167 , xx + 1525 ,
xx + 1521 ) ; xx [ 1528 ] = - 0.1089988975238918 ; xx [ 1529 ] =
0.01817390566611121 ; xx [ 1530 ] = - 0.1609369210652937 ;
pm_math_Quaternion_xform_ra ( xx + 1497 , xx + 1528 , xx + 1531 ) ; xx [ 894
] = xx [ 1531 ] + xx [ 649 ] + xx [ 650 ] ; xx [ 650 ] = xx [ 1532 ] + xx [
652 ] - xx [ 653 ] ; xx [ 653 ] = xx [ 1533 ] + xx [ 1443 ] - xx [ 1461 ] ;
xx [ 1449 ] = sqrt ( xx [ 894 ] * xx [ 894 ] + xx [ 650 ] * xx [ 650 ] + xx [
653 ] * xx [ 653 ] ) ; if ( xx [ 1449 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force6' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1449 ] = input [ 170 ] / xx [ 1449 ] ; xx [ 1531 ] =
xx [ 1449 ] * xx [ 894 ] ; xx [ 1532 ] = xx [ 1449 ] * xx [ 650 ] ; xx [ 1533
] = xx [ 1449 ] * xx [ 653 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1497
, xx + 1531 , xx + 1534 ) ; pm_math_Vector3_cross_ra ( xx + 1528 , xx + 1534
, xx + 1531 ) ; xx [ 1528 ] = - 0.09566229085706808 ; xx [ 1529 ] = -
0.0798895592638616 ; xx [ 1530 ] = - 0.08405862367883098 ;
pm_math_Quaternion_xform_ra ( xx + 1497 , xx + 1528 , xx + 1537 ) ; xx [ 650
] = xx [ 1537 ] + xx [ 649 ] + xx [ 651 ] ; xx [ 651 ] = xx [ 1538 ] + xx [
652 ] - xx [ 1513 ] ; xx [ 653 ] = xx [ 1539 ] + xx [ 1443 ] - xx [ 893 ] ;
xx [ 893 ] = sqrt ( xx [ 650 ] * xx [ 650 ] + xx [ 651 ] * xx [ 651 ] + xx [
653 ] * xx [ 653 ] ) ; if ( xx [ 893 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force7' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 893 ] = input [ 171 ] / xx [ 893 ] ; xx [ 1537 ] = xx
[ 893 ] * xx [ 650 ] ; xx [ 1538 ] = xx [ 893 ] * xx [ 651 ] ; xx [ 1539 ] =
xx [ 893 ] * xx [ 653 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1497 , xx
+ 1537 , xx + 1540 ) ; pm_math_Vector3_cross_ra ( xx + 1528 , xx + 1540 , xx
+ 1537 ) ; xx [ 650 ] = xx [ 1498 ] * input [ 172 ] ; xx [ 651 ] = xx [ 1499
] * input [ 172 ] ; xx [ 653 ] = xx [ 1499 ] * input [ 173 ] ; xx [ 894 ] =
xx [ 1500 ] * input [ 173 ] ; xx [ 1461 ] = xx [ 1500 ] * input [ 174 ] ; xx
[ 1513 ] = xx [ 1498 ] * input [ 174 ] ; xx [ 1528 ] = xx [ 811 ] ; xx [ 1529
] = xx [ 824 ] ; xx [ 1530 ] = xx [ 82 ] ; pm_math_Quaternion_inverseXform_ra
( xx + 114 , xx + 1528 , xx + 1543 ) ; pm_math_Vector3_cross_ra ( xx + 906 ,
xx + 1543 , xx + 1528 ) ; xx [ 1546 ] = xx [ 100 ] ; xx [ 1547 ] = xx [ 111 ]
; xx [ 1548 ] = xx [ 136 ] ; xx [ 1549 ] = xx [ 135 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1546 , xx + 920 , xx + 906 ) ; xx [
1550 ] = xx [ 113 ] ; xx [ 1551 ] = xx [ 128 ] ; xx [ 1552 ] = - xx [ 129 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1546 , xx + 1550 , xx + 1553 ) ; xx
[ 100 ] = xx [ 1553 ] * state [ 33 ] ; xx [ 111 ] = xx [ 109 ] * xx [ 132 ] ;
xx [ 109 ] = xx [ 12 ] * xx [ 111 ] * state [ 34 ] ; xx [ 113 ] = xx [ 100 ]
+ xx [ 109 ] ; xx [ 128 ] = xx [ 1554 ] * state [ 33 ] ; xx [ 129 ] = xx [ 1
] - xx [ 12 ] * xx [ 132 ] * xx [ 132 ] ; xx [ 132 ] = xx [ 129 ] * state [
34 ] ; xx [ 135 ] = xx [ 128 ] + xx [ 132 ] ; xx [ 136 ] = xx [ 1555 ] *
state [ 33 ] ; xx [ 1524 ] = xx [ 136 ] + state [ 35 ] ; xx [ 1550 ] = xx [
906 ] + xx [ 113 ] ; xx [ 1551 ] = xx [ 907 ] + xx [ 135 ] ; xx [ 1552 ] = xx
[ 908 ] + xx [ 1524 ] ; pm_math_Matrix3x3_xform_ra ( xx + 154 , xx + 1550 ,
xx + 1556 ) ; pm_math_Vector3_cross_ra ( xx + 1550 , xx + 1556 , xx + 1559 )
; xx [ 1556 ] = xx [ 113 ] ; xx [ 1557 ] = xx [ 135 ] ; xx [ 1558 ] = xx [
1524 ] ; pm_math_Vector3_cross_ra ( xx + 906 , xx + 1556 , xx + 1562 ) ; xx [
906 ] = xx [ 100 ] ; xx [ 907 ] = xx [ 128 ] ; xx [ 908 ] = xx [ 136 ] ;
pm_math_Vector3_cross_ra ( xx + 1556 , xx + 906 , xx + 1565 ) ; xx [ 100 ] =
xx [ 1562 ] + xx [ 132 ] * state [ 35 ] - xx [ 1565 ] + xx [ 1553 ] *
inputDdot [ 52 ] + xx [ 12 ] * xx [ 111 ] * inputDdot [ 53 ] ; xx [ 111 ] =
xx [ 1563 ] - ( xx [ 1566 ] + xx [ 109 ] * state [ 35 ] ) + xx [ 1554 ] *
inputDdot [ 52 ] + xx [ 129 ] * inputDdot [ 53 ] ; xx [ 109 ] = xx [ 1564 ] -
xx [ 1567 ] + xx [ 1555 ] * inputDdot [ 52 ] + inputDdot [ 54 ] ; xx [ 906 ]
= xx [ 100 ] ; xx [ 907 ] = xx [ 111 ] ; xx [ 908 ] = xx [ 109 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 154 , xx + 906 , xx + 1553 ) ;
pm_math_Vector3_cross_ra ( xx + 920 , xx + 167 , xx + 154 ) ;
pm_math_Vector3_cross_ra ( xx + 920 , xx + 154 , xx + 157 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 1546 , xx + 157 , xx + 154 ) ; xx [
157 ] = xx [ 1559 ] + xx [ 1553 ] + xx [ 156 ] * xx [ 141 ] - xx [ 155 ] * xx
[ 163 ] ; xx [ 158 ] = xx [ 1560 ] + xx [ 1554 ] + xx [ 154 ] * xx [ 163 ] -
xx [ 156 ] * xx [ 165 ] ; xx [ 159 ] = xx [ 1561 ] + xx [ 1555 ] + xx [ 155 ]
* xx [ 165 ] - xx [ 154 ] * xx [ 141 ] ; pm_math_Quaternion_xform_ra ( xx +
1546 , xx + 157 , xx + 160 ) ; xx [ 157 ] = xx [ 164 ] ; xx [ 158 ] = xx [
133 ] ; xx [ 159 ] = xx [ 153 ] ; pm_math_Vector3_cross_ra ( xx + 1550 , xx +
157 , xx + 906 ) ; pm_math_Vector3_cross_ra ( xx + 1550 , xx + 906 , xx + 157
) ; xx [ 906 ] = xx [ 157 ] * xx [ 166 ] + xx [ 111 ] * xx [ 163 ] - xx [ 109
] * xx [ 141 ] + xx [ 154 ] * xx [ 166 ] ; xx [ 907 ] = xx [ 166 ] * xx [ 158
] + xx [ 109 ] * xx [ 165 ] - xx [ 100 ] * xx [ 163 ] + xx [ 166 ] * xx [ 155
] ; xx [ 908 ] = xx [ 166 ] * xx [ 159 ] + xx [ 100 ] * xx [ 141 ] - xx [ 111
] * xx [ 165 ] + xx [ 166 ] * xx [ 156 ] ; pm_math_Quaternion_xform_ra ( xx +
1546 , xx + 906 , xx + 153 ) ; pm_math_Vector3_cross_ra ( xx + 167 , xx + 153
, xx + 156 ) ; xx [ 163 ] = xx [ 107 ] ; xx [ 164 ] = xx [ 825 ] ; xx [ 165 ]
= xx [ 917 ] ; pm_math_Vector3_cross_ra ( xx + 837 , xx + 163 , xx + 166 ) ;
xx [ 906 ] = xx [ 110 ] ; xx [ 907 ] = xx [ 238 ] ; xx [ 908 ] = xx [ 918 ] ;
pm_math_Vector3_cross_ra ( xx + 163 , xx + 906 , xx + 109 ) ; xx [ 906 ] = xx
[ 106 ] ; xx [ 907 ] = - xx [ 240 ] ; xx [ 908 ] = xx [ 916 ] ; xx [ 916 ] =
xx [ 105 ] ; xx [ 917 ] = xx [ 239 ] ; xx [ 918 ] = xx [ 915 ] ;
pm_math_Vector3_cross_ra ( xx + 906 , xx + 916 , xx + 105 ) ; xx [ 100 ] = xx
[ 109 ] + xx [ 105 ] ; xx [ 113 ] = xx [ 166 ] - xx [ 100 ] ; xx [ 128 ] = xx
[ 110 ] + xx [ 106 ] ; xx [ 129 ] = xx [ 167 ] - xx [ 128 ] ; xx [ 105 ] = xx
[ 111 ] + xx [ 107 ] ; xx [ 106 ] = xx [ 168 ] - xx [ 105 ] ; xx [ 109 ] = xx
[ 113 ] ; xx [ 110 ] = xx [ 129 ] ; xx [ 111 ] = xx [ 106 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 185 , xx + 109 , xx + 166 ) ; xx [ 185 ] =
xx [ 837 ] + xx [ 108 ] ; xx [ 186 ] = xx [ 838 ] + xx [ 826 ] ; xx [ 187 ] =
xx [ 839 ] + xx [ 919 ] ; pm_math_Vector3_cross_ra ( xx + 201 , xx + 163 , xx
+ 188 ) ; pm_math_Vector3_cross_ra ( xx + 185 , xx + 188 , xx + 163 ) ;
pm_math_Vector3_cross_ra ( xx + 851 , xx + 142 , xx + 185 ) ;
pm_math_Vector3_cross_ra ( xx + 851 , xx + 185 , xx + 191 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 191 , xx + 238 ) ; xx [
191 ] = - xx [ 100 ] ; xx [ 192 ] = - xx [ 128 ] ; xx [ 193 ] = - xx [ 105 ]
; pm_math_Vector3_cross_ra ( xx + 201 , xx + 191 , xx + 837 ) ; xx [ 100 ] =
xx [ 163 ] + xx [ 238 ] + xx [ 837 ] ; xx [ 105 ] = xx [ 164 ] + xx [ 239 ] +
xx [ 838 ] ; xx [ 107 ] = xx [ 165 ] + xx [ 240 ] + xx [ 839 ] ; xx [ 163 ] =
xx [ 100 ] ; xx [ 164 ] = xx [ 105 ] ; xx [ 165 ] = xx [ 107 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 174 , xx + 163 , xx + 191 ) ; xx [ 108 ] =
xx [ 926 ] - xx [ 936 ] - xx [ 945 ] - xx [ 951 ] - xx [ 957 ] - xx [ 966 ] -
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
- xx [ 1470 ] - xx [ 1476 ] - xx [ 933 ] - xx [ 868 ] - xx [ 880 ] - xx [
1485 ] - xx [ 1491 ] - xx [ 1501 ] - xx [ 1507 ] - xx [ 1515 ] - xx [ 1521 ]
- xx [ 1531 ] - xx [ 1537 ] - xx [ 12 ] * ( xx [ 1500 ] * xx [ 650 ] - xx [
1497 ] * xx [ 651 ] ) - ( input [ 173 ] - ( xx [ 1499 ] * xx [ 653 ] + xx [
1500 ] * xx [ 894 ] ) * xx [ 12 ] ) - ( xx [ 1497 ] * xx [ 1461 ] + xx [ 1499
] * xx [ 1513 ] ) * xx [ 12 ] - xx [ 1528 ] + xx [ 160 ] + xx [ 156 ] + xx [
166 ] + xx [ 191 ] ; xx [ 128 ] = state [ 24 ] + xx [ 43 ] ; if ( xx [ 138 ]
< xx [ 128 ] ) xx [ 128 ] = xx [ 138 ] ; xx [ 132 ] = - ( xx [ 128 ] / xx [
46 ] ) ; if ( xx [ 1 ] < xx [ 132 ] ) xx [ 132 ] = xx [ 1 ] ; xx [ 133 ] = xx
[ 67 ] * state [ 27 ] ; xx [ 135 ] = xx [ 132 ] * xx [ 132 ] * ( xx [ 56 ] -
xx [ 12 ] * xx [ 132 ] ) * ( ( - xx [ 128 ] == xx [ 138 ] ? xx [ 138 ] : - xx
[ 133 ] ) - xx [ 104 ] * xx [ 128 ] ) ; if ( xx [ 138 ] > xx [ 135 ] ) xx [
135 ] = xx [ 138 ] ; xx [ 128 ] = state [ 24 ] - xx [ 43 ] ; if ( xx [ 138 ]
> xx [ 128 ] ) xx [ 128 ] = xx [ 138 ] ; xx [ 132 ] = xx [ 128 ] / xx [ 46 ]
; if ( xx [ 1 ] < xx [ 132 ] ) xx [ 132 ] = xx [ 1 ] ; xx [ 136 ] = ( xx [
104 ] * xx [ 128 ] + ( xx [ 128 ] == xx [ 138 ] ? xx [ 138 ] : xx [ 133 ] ) )
* xx [ 132 ] * xx [ 132 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 132 ] ) ; if ( xx
[ 138 ] > xx [ 136 ] ) xx [ 136 ] = xx [ 138 ] ; xx [ 128 ] = xx [ 927 ] - xx
[ 937 ] - xx [ 946 ] - xx [ 952 ] - xx [ 958 ] - xx [ 967 ] - xx [ 973 ] - xx
[ 979 ] - xx [ 985 ] - xx [ 991 ] - xx [ 997 ] - xx [ 1003 ] - xx [ 1009 ] -
xx [ 1015 ] - xx [ 1021 ] - xx [ 1027 ] - xx [ 1033 ] - xx [ 1039 ] - xx [
1045 ] - xx [ 1051 ] - xx [ 1057 ] - xx [ 1063 ] - xx [ 1069 ] - xx [ 1075 ]
- xx [ 1081 ] - xx [ 1087 ] - xx [ 1093 ] - xx [ 1099 ] - xx [ 1105 ] - xx [
1111 ] - xx [ 1117 ] - xx [ 1123 ] - xx [ 1129 ] - xx [ 1135 ] - xx [ 1141 ]
- xx [ 1147 ] - xx [ 1153 ] - xx [ 1159 ] - xx [ 1165 ] - xx [ 1171 ] - xx [
1177 ] - xx [ 1183 ] - xx [ 1189 ] - xx [ 1195 ] - xx [ 1201 ] - xx [ 1207 ]
- xx [ 1213 ] - xx [ 1219 ] - xx [ 1225 ] - xx [ 1231 ] - xx [ 1237 ] - xx [
1243 ] - xx [ 1249 ] - xx [ 1255 ] - xx [ 1261 ] - xx [ 1267 ] - xx [ 1273 ]
- xx [ 1279 ] - xx [ 1285 ] - xx [ 1291 ] - xx [ 1297 ] - xx [ 1303 ] - xx [
1309 ] - xx [ 1315 ] - xx [ 1321 ] - xx [ 1327 ] - xx [ 1333 ] - xx [ 1339 ]
- xx [ 1345 ] - xx [ 1351 ] - xx [ 1357 ] - xx [ 1363 ] - xx [ 1369 ] - xx [
1375 ] - xx [ 1381 ] - xx [ 1387 ] - xx [ 1393 ] - xx [ 1399 ] - xx [ 1405 ]
- xx [ 1411 ] - xx [ 1417 ] - xx [ 1423 ] - xx [ 1429 ] - xx [ 1435 ] - xx [
1441 ] - xx [ 1447 ] - xx [ 1453 ] - xx [ 1459 ] - xx [ 1465 ] - xx [ 1471 ]
- xx [ 1477 ] - xx [ 934 ] - xx [ 869 ] - xx [ 881 ] - xx [ 1486 ] - xx [
1492 ] - xx [ 1502 ] - xx [ 1508 ] - xx [ 1516 ] - xx [ 1522 ] - xx [ 1532 ]
- xx [ 1538 ] - ( xx [ 1497 ] * xx [ 650 ] + xx [ 1500 ] * xx [ 651 ] ) * xx
[ 12 ] - xx [ 12 ] * ( xx [ 1498 ] * xx [ 653 ] - xx [ 1497 ] * xx [ 894 ] )
- ( input [ 174 ] - ( xx [ 1500 ] * xx [ 1461 ] + xx [ 1498 ] * xx [ 1513 ] )
* xx [ 12 ] ) - xx [ 1529 ] + xx [ 161 ] + xx [ 157 ] + xx [ 167 ] + xx [ 192
] ; xx [ 132 ] = xx [ 928 ] - xx [ 938 ] - xx [ 947 ] - xx [ 953 ] - xx [ 959
] - xx [ 968 ] - xx [ 974 ] - xx [ 980 ] - xx [ 986 ] - xx [ 992 ] - xx [ 998
] - xx [ 1004 ] - xx [ 1010 ] - xx [ 1016 ] - xx [ 1022 ] - xx [ 1028 ] - xx
[ 1034 ] - xx [ 1040 ] - xx [ 1046 ] - xx [ 1052 ] - xx [ 1058 ] - xx [ 1064
] - xx [ 1070 ] - xx [ 1076 ] - xx [ 1082 ] - xx [ 1088 ] - xx [ 1094 ] - xx
[ 1100 ] - xx [ 1106 ] - xx [ 1112 ] - xx [ 1118 ] - xx [ 1124 ] - xx [ 1130
] - xx [ 1136 ] - xx [ 1142 ] - xx [ 1148 ] - xx [ 1154 ] - xx [ 1160 ] - xx
[ 1166 ] - xx [ 1172 ] - xx [ 1178 ] - xx [ 1184 ] - xx [ 1190 ] - xx [ 1196
] - xx [ 1202 ] - xx [ 1208 ] - xx [ 1214 ] - xx [ 1220 ] - xx [ 1226 ] - xx
[ 1232 ] - xx [ 1238 ] - xx [ 1244 ] - xx [ 1250 ] - xx [ 1256 ] - xx [ 1262
] - xx [ 1268 ] - xx [ 1274 ] - xx [ 1280 ] - xx [ 1286 ] - xx [ 1292 ] - xx
[ 1298 ] - xx [ 1304 ] - xx [ 1310 ] - xx [ 1316 ] - xx [ 1322 ] - xx [ 1328
] - xx [ 1334 ] - xx [ 1340 ] - xx [ 1346 ] - xx [ 1352 ] - xx [ 1358 ] - xx
[ 1364 ] - xx [ 1370 ] - xx [ 1376 ] - xx [ 1382 ] - xx [ 1388 ] - xx [ 1394
] - xx [ 1400 ] - xx [ 1406 ] - xx [ 1412 ] - xx [ 1418 ] - xx [ 1424 ] - xx
[ 1430 ] - xx [ 1436 ] - xx [ 1442 ] - xx [ 1448 ] - xx [ 1454 ] - xx [ 1460
] - xx [ 1466 ] - xx [ 1472 ] - xx [ 1478 ] - xx [ 935 ] - xx [ 870 ] - xx [
882 ] - xx [ 1487 ] - xx [ 1493 ] - xx [ 1503 ] - xx [ 1509 ] - xx [ 1517 ] -
xx [ 1523 ] - xx [ 1533 ] - xx [ 1539 ] - ( input [ 172 ] - ( xx [ 1498 ] *
xx [ 650 ] + xx [ 1499 ] * xx [ 651 ] ) * xx [ 12 ] ) - ( xx [ 1497 ] * xx [
653 ] + xx [ 1498 ] * xx [ 894 ] ) * xx [ 12 ] - xx [ 12 ] * ( xx [ 1499 ] *
xx [ 1461 ] - xx [ 1497 ] * xx [ 1513 ] ) - xx [ 1530 ] + xx [ 162 ] + xx [
158 ] + xx [ 168 ] + xx [ 193 ] ; xx [ 156 ] = xx [ 108 ] ; xx [ 157 ] = xx [
128 ] ; xx [ 158 ] = xx [ 132 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx +
174 , xx + 109 , xx + 159 ) ; pm_math_Matrix3x3_xform_ra ( xx + 221 , xx +
163 , xx + 109 ) ; xx [ 133 ] = xx [ 153 ] - ( xx [ 955 ] - ( xx [ 930 ] + xx
[ 943 ] + xx [ 949 ] ) + xx [ 961 ] + xx [ 964 ] - xx [ 970 ] + xx [ 976 ] +
xx [ 982 ] + xx [ 988 ] + xx [ 994 ] + xx [ 1000 ] + xx [ 1006 ] - xx [ 1012
] + xx [ 1018 ] + xx [ 1024 ] + xx [ 1030 ] + xx [ 1036 ] + xx [ 1042 ] + xx
[ 1048 ] + xx [ 1054 ] + xx [ 1060 ] + xx [ 1066 ] + xx [ 1072 ] - xx [ 1078
] + xx [ 1084 ] + xx [ 1090 ] + xx [ 1096 ] + xx [ 1102 ] + xx [ 1108 ] + xx
[ 1114 ] + xx [ 1120 ] + xx [ 1126 ] + xx [ 1132 ] + xx [ 1138 ] + xx [ 1144
] + xx [ 1150 ] + xx [ 1156 ] + xx [ 1162 ] + xx [ 1168 ] + xx [ 1174 ] + xx
[ 1180 ] + xx [ 1186 ] + xx [ 1192 ] + xx [ 1198 ] - xx [ 1204 ] - xx [ 1210
] + xx [ 1216 ] + xx [ 1222 ] - xx [ 1228 ] + xx [ 1234 ] - xx [ 1240 ] - xx
[ 1246 ] - xx [ 1252 ] - xx [ 1258 ] + xx [ 1264 ] - xx [ 1270 ] - xx [ 1276
] + xx [ 1282 ] - xx [ 1288 ] - xx [ 1294 ] - xx [ 1300 ] - xx [ 1306 ] - xx
[ 1312 ] + xx [ 1318 ] - xx [ 1324 ] - xx [ 1330 ] - xx [ 1336 ] + xx [ 1342
] - xx [ 1348 ] - xx [ 1354 ] - xx [ 1360 ] - xx [ 1366 ] - xx [ 1372 ] - xx
[ 1378 ] - xx [ 1384 ] - xx [ 1390 ] - xx [ 1396 ] - xx [ 1402 ] + xx [ 1408
] - xx [ 1414 ] - xx [ 1420 ] - xx [ 1426 ] - xx [ 1432 ] - xx [ 1438 ] - xx
[ 1444 ] - xx [ 1450 ] - xx [ 1456 ] + xx [ 1462 ] + xx [ 1468 ] + xx [ 1473
] + xx [ 1479 ] + xx [ 1482 ] + xx [ 1488 ] + xx [ 1494 ] + xx [ 1504 ] + xx
[ 1510 ] + xx [ 1518 ] + xx [ 1525 ] + xx [ 1534 ] + xx [ 1540 ] + xx [ 1543
] ) + xx [ 159 ] + xx [ 109 ] ; xx [ 141 ] = xx [ 154 ] - ( xx [ 931 ] + xx [
944 ] + xx [ 950 ] + xx [ 956 ] + xx [ 962 ] + xx [ 965 ] + xx [ 971 ] + xx [
977 ] + xx [ 983 ] + xx [ 989 ] + xx [ 995 ] + xx [ 1001 ] + xx [ 1007 ] + xx
[ 1013 ] + xx [ 1019 ] + xx [ 1025 ] + xx [ 1031 ] + xx [ 1037 ] + xx [ 1043
] + xx [ 1049 ] + xx [ 1055 ] + xx [ 1061 ] + xx [ 1067 ] + xx [ 1073 ] + xx
[ 1079 ] + xx [ 1085 ] + xx [ 1091 ] + xx [ 1097 ] + xx [ 1103 ] + xx [ 1109
] + xx [ 1115 ] + xx [ 1121 ] + xx [ 1127 ] + xx [ 1133 ] + xx [ 1139 ] + xx
[ 1145 ] + xx [ 1151 ] + xx [ 1157 ] + xx [ 1163 ] - xx [ 1169 ] - xx [ 1175
] + xx [ 1181 ] + xx [ 1187 ] + xx [ 1193 ] + xx [ 1199 ] + xx [ 1205 ] + xx
[ 1211 ] + xx [ 1217 ] + xx [ 1223 ] + xx [ 1229 ] - xx [ 1235 ] + xx [ 1241
] + xx [ 1247 ] + xx [ 1253 ] + xx [ 1259 ] + xx [ 1265 ] + xx [ 1271 ] + xx
[ 1277 ] - xx [ 1283 ] + xx [ 1289 ] + xx [ 1295 ] + xx [ 1301 ] + xx [ 1307
] + xx [ 1313 ] - xx [ 1319 ] + xx [ 1325 ] + xx [ 1331 ] + xx [ 1337 ] + xx
[ 1343 ] + xx [ 1349 ] + xx [ 1355 ] + xx [ 1361 ] + xx [ 1367 ] + xx [ 1373
] + xx [ 1379 ] + xx [ 1385 ] + xx [ 1391 ] + xx [ 1397 ] + xx [ 1403 ] + xx
[ 1409 ] + xx [ 1415 ] + xx [ 1421 ] + xx [ 1427 ] + xx [ 1433 ] + xx [ 1439
] + xx [ 1445 ] + xx [ 1451 ] + xx [ 1457 ] + xx [ 1463 ] - xx [ 1469 ] + xx
[ 1474 ] + xx [ 1480 ] + xx [ 1483 ] + xx [ 1489 ] + xx [ 1495 ] + xx [ 1505
] + xx [ 1511 ] + xx [ 1519 ] + xx [ 1526 ] + xx [ 1535 ] + xx [ 1541 ] + xx
[ 1544 ] ) + xx [ 160 ] + xx [ 110 ] ; xx [ 109 ] = xx [ 155 ] - ( xx [ 932 ]
+ xx [ 139 ] + xx [ 929 ] + xx [ 939 ] + xx [ 940 ] + xx [ 941 ] + xx [ 942 ]
+ xx [ 948 ] + xx [ 954 ] + xx [ 960 ] + xx [ 963 ] + xx [ 969 ] + xx [ 975 ]
+ xx [ 981 ] + xx [ 987 ] + xx [ 993 ] + xx [ 999 ] + xx [ 1005 ] + xx [ 1011
] + xx [ 1017 ] + xx [ 1023 ] + xx [ 1029 ] + xx [ 1035 ] + xx [ 1041 ] + xx
[ 1047 ] + xx [ 1053 ] + xx [ 1059 ] + xx [ 1065 ] + xx [ 1071 ] + xx [ 1077
] + xx [ 1083 ] + xx [ 1089 ] + xx [ 1095 ] + xx [ 1101 ] + xx [ 1107 ] + xx
[ 1113 ] + xx [ 1119 ] + xx [ 1125 ] + xx [ 1131 ] + xx [ 1137 ] + xx [ 1143
] + xx [ 1149 ] + xx [ 1155 ] + xx [ 1161 ] + xx [ 1167 ] + xx [ 1173 ] + xx
[ 1179 ] + xx [ 1185 ] + xx [ 1191 ] + xx [ 1197 ] + xx [ 1203 ] + xx [ 1209
] + xx [ 1215 ] + xx [ 1221 ] + xx [ 1227 ] + xx [ 1233 ] + xx [ 1239 ] + xx
[ 1245 ] + xx [ 1251 ] + xx [ 1257 ] + xx [ 1263 ] + xx [ 1269 ] + xx [ 1275
] + xx [ 1281 ] + xx [ 1287 ] + xx [ 1293 ] + xx [ 1299 ] + xx [ 1305 ] + xx
[ 1311 ] + xx [ 1317 ] + xx [ 1323 ] + xx [ 1329 ] + xx [ 1335 ] + xx [ 1341
] + xx [ 1347 ] + xx [ 1353 ] + xx [ 1359 ] + xx [ 1365 ] + xx [ 1371 ] + xx
[ 1377 ] + xx [ 1383 ] + xx [ 1389 ] + xx [ 1395 ] + xx [ 1401 ] + xx [ 1407
] + xx [ 1413 ] + xx [ 1419 ] + xx [ 1425 ] + xx [ 1431 ] + xx [ 1437 ] + xx
[ 1475 ] + xx [ 1481 ] + xx [ 1484 ] + xx [ 1490 ] + xx [ 1496 ] + xx [ 1506
] + xx [ 1512 ] + xx [ 1520 ] + xx [ 1527 ] + xx [ 1536 ] + xx [ 1542 ] + xx
[ 1545 ] ) + xx [ 161 ] + xx [ 111 ] ; xx [ 153 ] = xx [ 133 ] ; xx [ 154 ] =
xx [ 141 ] ; xx [ 155 ] = xx [ 109 ] ; xx [ 110 ] = state [ 25 ] + xx [ 43 ]
; if ( xx [ 138 ] < xx [ 110 ] ) xx [ 110 ] = xx [ 138 ] ; xx [ 111 ] = - (
xx [ 110 ] / xx [ 46 ] ) ; if ( xx [ 1 ] < xx [ 111 ] ) xx [ 111 ] = xx [ 1 ]
; xx [ 139 ] = xx [ 67 ] * state [ 28 ] ; xx [ 159 ] = xx [ 111 ] * xx [ 111
] * ( xx [ 56 ] - xx [ 12 ] * xx [ 111 ] ) * ( ( - xx [ 110 ] == xx [ 138 ] ?
xx [ 138 ] : - xx [ 139 ] ) - xx [ 104 ] * xx [ 110 ] ) ; if ( xx [ 138 ] >
xx [ 159 ] ) xx [ 159 ] = xx [ 138 ] ; xx [ 110 ] = state [ 25 ] - xx [ 43 ]
; if ( xx [ 138 ] > xx [ 110 ] ) xx [ 110 ] = xx [ 138 ] ; xx [ 111 ] = xx [
110 ] / xx [ 46 ] ; if ( xx [ 1 ] < xx [ 111 ] ) xx [ 111 ] = xx [ 1 ] ; xx [
160 ] = ( xx [ 104 ] * xx [ 110 ] + ( xx [ 110 ] == xx [ 138 ] ? xx [ 138 ] :
xx [ 139 ] ) ) * xx [ 111 ] * xx [ 111 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 111
] ) ; if ( xx [ 138 ] > xx [ 160 ] ) xx [ 160 ] = xx [ 138 ] ; xx [ 110 ] =
state [ 26 ] + xx [ 43 ] ; if ( xx [ 138 ] < xx [ 110 ] ) xx [ 110 ] = xx [
138 ] ; xx [ 111 ] = - ( xx [ 110 ] / xx [ 46 ] ) ; if ( xx [ 1 ] < xx [ 111
] ) xx [ 111 ] = xx [ 1 ] ; xx [ 139 ] = xx [ 67 ] * state [ 29 ] ; xx [ 161
] = xx [ 111 ] * xx [ 111 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 111 ] ) * ( ( -
xx [ 110 ] == xx [ 138 ] ? xx [ 138 ] : - xx [ 139 ] ) - xx [ 104 ] * xx [
110 ] ) ; if ( xx [ 138 ] > xx [ 161 ] ) xx [ 161 ] = xx [ 138 ] ; xx [ 110 ]
= state [ 26 ] - xx [ 43 ] ; if ( xx [ 138 ] > xx [ 110 ] ) xx [ 110 ] = xx [
138 ] ; xx [ 111 ] = xx [ 110 ] / xx [ 46 ] ; if ( xx [ 1 ] < xx [ 111 ] ) xx
[ 111 ] = xx [ 1 ] ; xx [ 162 ] = ( xx [ 104 ] * xx [ 110 ] + ( xx [ 110 ] ==
xx [ 138 ] ? xx [ 138 ] : xx [ 139 ] ) ) * xx [ 111 ] * xx [ 111 ] * ( xx [
56 ] - xx [ 12 ] * xx [ 111 ] ) ; if ( xx [ 138 ] > xx [ 162 ] ) xx [ 162 ] =
xx [ 138 ] ; xx [ 163 ] = input [ 10 ] - xx [ 41 ] * state [ 27 ] + xx [ 135
] - xx [ 136 ] - ( pm_math_Vector3_dot_ra ( xx + 195 , xx + 156 ) +
pm_math_Vector3_dot_ra ( xx + 204 , xx + 153 ) ) ; xx [ 164 ] = input [ 11 ]
- xx [ 41 ] * state [ 28 ] + xx [ 159 ] - xx [ 160 ] - (
pm_math_Vector3_dot_ra ( xx + 241 , xx + 156 ) + pm_math_Vector3_dot_ra ( xx
+ 244 , xx + 153 ) ) ; xx [ 165 ] = input [ 12 ] - xx [ 41 ] * state [ 29 ] +
xx [ 161 ] - xx [ 162 ] - ( pm_math_Vector3_dot_ra ( xx + 250 , xx + 156 ) +
pm_math_Vector3_dot_ra ( xx + 256 , xx + 153 ) ) ; solveSymmetricPosDef ( xx
+ 270 , xx + 163 , 3 , 1 , xx + 153 , xx + 156 ) ; xx [ 156 ] = xx [ 108 ] +
xx [ 150 ] * xx [ 153 ] + xx [ 72 ] * xx [ 154 ] + xx [ 262 ] * xx [ 155 ] ;
xx [ 157 ] = xx [ 128 ] + xx [ 183 ] * xx [ 153 ] + xx [ 79 ] * xx [ 154 ] +
xx [ 263 ] * xx [ 155 ] ; xx [ 158 ] = xx [ 132 ] + xx [ 184 ] * xx [ 153 ] +
xx [ 83 ] * xx [ 154 ] + xx [ 253 ] * xx [ 155 ] ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 156 , xx + 159 ) ; xx [ 156 ] =
xx [ 133 ] + xx [ 211 ] * xx [ 153 ] + xx [ 84 ] * xx [ 154 ] + xx [ 254 ] *
xx [ 155 ] ; xx [ 157 ] = xx [ 141 ] + xx [ 233 ] * xx [ 153 ] + xx [ 98 ] *
xx [ 154 ] + xx [ 255 ] * xx [ 155 ] ; xx [ 158 ] = xx [ 109 ] + xx [ 207 ] *
xx [ 153 ] + xx [ 102 ] * xx [ 154 ] + xx [ 264 ] * xx [ 155 ] ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 156 , xx + 108 ) ;
pm_math_Vector3_cross_ra ( xx + 142 , xx + 108 , xx + 156 ) ; xx [ 162 ] = xx
[ 77 ] ; xx [ 163 ] = xx [ 759 ] ; xx [ 164 ] = xx [ 848 ] ;
pm_math_Vector3_cross_ra ( xx + 771 , xx + 162 , xx + 165 ) ; xx [ 174 ] = xx
[ 122 ] ; xx [ 175 ] = xx [ 333 ] ; xx [ 176 ] = xx [ 849 ] ;
pm_math_Vector3_cross_ra ( xx + 162 , xx + 174 , xx + 177 ) ; xx [ 174 ] = xx
[ 76 ] ; xx [ 175 ] = xx [ 335 ] ; xx [ 176 ] = xx [ 847 ] ; xx [ 180 ] = xx
[ 75 ] ; xx [ 181 ] = xx [ 334 ] ; xx [ 182 ] = xx [ 846 ] ;
pm_math_Vector3_cross_ra ( xx + 174 , xx + 180 , xx + 75 ) ; xx [ 72 ] = xx [
177 ] + xx [ 75 ] ; xx [ 79 ] = xx [ 165 ] - xx [ 72 ] ; xx [ 83 ] = xx [ 178
] + xx [ 76 ] ; xx [ 84 ] = xx [ 166 ] - xx [ 83 ] ; xx [ 75 ] = xx [ 179 ] +
xx [ 77 ] ; xx [ 76 ] = xx [ 167 ] - xx [ 75 ] ; xx [ 165 ] = xx [ 79 ] ; xx
[ 166 ] = xx [ 84 ] ; xx [ 167 ] = xx [ 76 ] ; pm_math_Matrix3x3_xform_ra (
xx + 212 , xx + 165 , xx + 174 ) ; xx [ 177 ] = xx [ 771 ] + xx [ 78 ] ; xx [
178 ] = xx [ 772 ] + xx [ 760 ] ; xx [ 179 ] = xx [ 773 ] + xx [ 850 ] ;
pm_math_Vector3_cross_ra ( xx + 247 , xx + 162 , xx + 180 ) ;
pm_math_Vector3_cross_ra ( xx + 177 , xx + 180 , xx + 162 ) ;
pm_math_Vector3_cross_ra ( xx + 782 , xx + 123 , xx + 177 ) ;
pm_math_Vector3_cross_ra ( xx + 782 , xx + 177 , xx + 191 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 191 , xx + 195 ) ; xx [
191 ] = - xx [ 72 ] ; xx [ 192 ] = - xx [ 83 ] ; xx [ 193 ] = - xx [ 75 ] ;
pm_math_Vector3_cross_ra ( xx + 247 , xx + 191 , xx + 201 ) ; xx [ 72 ] = xx
[ 162 ] + xx [ 195 ] + xx [ 201 ] ; xx [ 75 ] = xx [ 163 ] + xx [ 196 ] + xx
[ 202 ] ; xx [ 77 ] = xx [ 164 ] + xx [ 197 ] + xx [ 203 ] ; xx [ 162 ] = xx
[ 72 ] ; xx [ 163 ] = xx [ 75 ] ; xx [ 164 ] = xx [ 77 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 279 , xx + 162 , xx + 191 ) ; xx [ 78 ] =
xx [ 857 ] - xx [ 865 ] - xx [ 874 ] - xx [ 860 ] - xx [ 887 ] - xx [ 877 ] -
xx [ 900 ] - xx [ 890 ] - xx [ 912 ] - xx [ 903 ] + xx [ 159 ] + xx [ 156 ] +
xx [ 174 ] + xx [ 191 ] ; xx [ 83 ] = state [ 18 ] + xx [ 43 ] ; if ( xx [
138 ] < xx [ 83 ] ) xx [ 83 ] = xx [ 138 ] ; xx [ 98 ] = - ( xx [ 83 ] / xx [
46 ] ) ; if ( xx [ 1 ] < xx [ 98 ] ) xx [ 98 ] = xx [ 1 ] ; xx [ 102 ] = xx [
67 ] * state [ 21 ] ; xx [ 111 ] = xx [ 98 ] * xx [ 98 ] * ( xx [ 56 ] - xx [
12 ] * xx [ 98 ] ) * ( ( - xx [ 83 ] == xx [ 138 ] ? xx [ 138 ] : - xx [ 102
] ) - xx [ 104 ] * xx [ 83 ] ) ; if ( xx [ 138 ] > xx [ 111 ] ) xx [ 111 ] =
xx [ 138 ] ; xx [ 83 ] = state [ 18 ] - xx [ 43 ] ; if ( xx [ 138 ] > xx [ 83
] ) xx [ 83 ] = xx [ 138 ] ; xx [ 98 ] = xx [ 83 ] / xx [ 46 ] ; if ( xx [ 1
] < xx [ 98 ] ) xx [ 98 ] = xx [ 1 ] ; xx [ 122 ] = ( xx [ 104 ] * xx [ 83 ]
+ ( xx [ 83 ] == xx [ 138 ] ? xx [ 138 ] : xx [ 102 ] ) ) * xx [ 98 ] * xx [
98 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 98 ] ) ; if ( xx [ 138 ] > xx [ 122 ] )
xx [ 122 ] = xx [ 138 ] ; xx [ 83 ] = xx [ 858 ] - xx [ 866 ] - xx [ 875 ] -
xx [ 861 ] - xx [ 888 ] - xx [ 878 ] - xx [ 901 ] - xx [ 891 ] - xx [ 913 ] -
xx [ 904 ] + xx [ 160 ] + xx [ 157 ] + xx [ 175 ] + xx [ 192 ] ; xx [ 98 ] =
xx [ 859 ] - xx [ 867 ] - xx [ 876 ] - xx [ 862 ] - xx [ 889 ] - xx [ 879 ] -
xx [ 902 ] - xx [ 892 ] - xx [ 914 ] - xx [ 905 ] + xx [ 161 ] + xx [ 158 ] +
xx [ 176 ] + xx [ 193 ] ; xx [ 156 ] = xx [ 78 ] ; xx [ 157 ] = xx [ 83 ] ;
xx [ 158 ] = xx [ 98 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 279 , xx
+ 165 , xx + 159 ) ; pm_math_Matrix3x3_xform_ra ( xx + 288 , xx + 162 , xx +
165 ) ; xx [ 102 ] = xx [ 856 ] + xx [ 863 ] - xx [ 871 ] + xx [ 883 ] - xx [
884 ] + xx [ 896 ] - xx [ 897 ] + xx [ 811 ] - xx [ 909 ] + xx [ 108 ] + xx [
159 ] + xx [ 165 ] ; xx [ 108 ] = xx [ 855 ] - xx [ 864 ] - xx [ 872 ] + xx [
800 ] - xx [ 885 ] + xx [ 813 ] - xx [ 898 ] + xx [ 824 ] - xx [ 910 ] + xx [
109 ] + xx [ 160 ] + xx [ 166 ] ; xx [ 109 ] = xx [ 147 ] - xx [ 137 ] - xx [
873 ] + xx [ 170 ] - xx [ 886 ] + xx [ 798 ] - xx [ 899 ] + xx [ 82 ] - xx [
911 ] + xx [ 110 ] + xx [ 161 ] + xx [ 167 ] ; xx [ 135 ] = xx [ 102 ] ; xx [
136 ] = xx [ 108 ] ; xx [ 137 ] = xx [ 109 ] ; xx [ 82 ] = state [ 19 ] + xx
[ 43 ] ; if ( xx [ 138 ] < xx [ 82 ] ) xx [ 82 ] = xx [ 138 ] ; xx [ 110 ] =
- ( xx [ 82 ] / xx [ 46 ] ) ; if ( xx [ 1 ] < xx [ 110 ] ) xx [ 110 ] = xx [
1 ] ; xx [ 128 ] = xx [ 67 ] * state [ 22 ] ; xx [ 132 ] = xx [ 110 ] * xx [
110 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 110 ] ) * ( ( - xx [ 82 ] == xx [ 138
] ? xx [ 138 ] : - xx [ 128 ] ) - xx [ 104 ] * xx [ 82 ] ) ; if ( xx [ 138 ]
> xx [ 132 ] ) xx [ 132 ] = xx [ 138 ] ; xx [ 82 ] = state [ 19 ] - xx [ 43 ]
; if ( xx [ 138 ] > xx [ 82 ] ) xx [ 82 ] = xx [ 138 ] ; xx [ 110 ] = xx [ 82
] / xx [ 46 ] ; if ( xx [ 1 ] < xx [ 110 ] ) xx [ 110 ] = xx [ 1 ] ; xx [ 133
] = ( xx [ 104 ] * xx [ 82 ] + ( xx [ 82 ] == xx [ 138 ] ? xx [ 138 ] : xx [
128 ] ) ) * xx [ 110 ] * xx [ 110 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 110 ] )
; if ( xx [ 138 ] > xx [ 133 ] ) xx [ 133 ] = xx [ 138 ] ; xx [ 82 ] = state
[ 20 ] + xx [ 43 ] ; if ( xx [ 138 ] < xx [ 82 ] ) xx [ 82 ] = xx [ 138 ] ;
xx [ 110 ] = - ( xx [ 82 ] / xx [ 46 ] ) ; if ( xx [ 1 ] < xx [ 110 ] ) xx [
110 ] = xx [ 1 ] ; xx [ 128 ] = xx [ 67 ] * state [ 23 ] ; xx [ 139 ] = xx [
110 ] * xx [ 110 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 110 ] ) * ( ( - xx [ 82 ]
== xx [ 138 ] ? xx [ 138 ] : - xx [ 128 ] ) - xx [ 104 ] * xx [ 82 ] ) ; if (
xx [ 138 ] > xx [ 139 ] ) xx [ 139 ] = xx [ 138 ] ; xx [ 82 ] = state [ 20 ]
- xx [ 43 ] ; if ( xx [ 138 ] > xx [ 82 ] ) xx [ 82 ] = xx [ 138 ] ; xx [ 110
] = xx [ 82 ] / xx [ 46 ] ; if ( xx [ 1 ] < xx [ 110 ] ) xx [ 110 ] = xx [ 1
] ; xx [ 141 ] = ( xx [ 104 ] * xx [ 82 ] + ( xx [ 82 ] == xx [ 138 ] ? xx [
138 ] : xx [ 128 ] ) ) * xx [ 110 ] * xx [ 110 ] * ( xx [ 56 ] - xx [ 12 ] *
xx [ 110 ] ) ; if ( xx [ 138 ] > xx [ 141 ] ) xx [ 141 ] = xx [ 138 ] ; xx [
159 ] = input [ 13 ] - xx [ 41 ] * state [ 21 ] + xx [ 111 ] - xx [ 122 ] - (
pm_math_Vector3_dot_ra ( xx + 230 , xx + 156 ) + pm_math_Vector3_dot_ra ( xx
+ 259 , xx + 135 ) ) ; xx [ 160 ] = input [ 14 ] - xx [ 41 ] * state [ 22 ] +
xx [ 132 ] - xx [ 133 ] - ( pm_math_Vector3_dot_ra ( xx + 336 , xx + 156 ) +
pm_math_Vector3_dot_ra ( xx + 339 , xx + 135 ) ) ; xx [ 161 ] = input [ 15 ]
- xx [ 41 ] * state [ 23 ] + xx [ 139 ] - xx [ 141 ] - (
pm_math_Vector3_dot_ra ( xx + 345 , xx + 156 ) + pm_math_Vector3_dot_ra ( xx
+ 352 , xx + 135 ) ) ; solveSymmetricPosDef ( xx + 366 , xx + 159 , 3 , 1 ,
xx + 135 , xx + 156 ) ; xx [ 156 ] = xx [ 78 ] + xx [ 127 ] * xx [ 135 ] + xx
[ 52 ] * xx [ 136 ] + xx [ 358 ] * xx [ 137 ] ; xx [ 157 ] = xx [ 83 ] + xx [
199 ] * xx [ 135 ] + xx [ 55 ] * xx [ 136 ] + xx [ 359 ] * xx [ 137 ] ; xx [
158 ] = xx [ 98 ] + xx [ 210 ] * xx [ 135 ] + xx [ 58 ] * xx [ 136 ] + xx [
348 ] * xx [ 137 ] ; pm_math_Quaternion_xform_ra ( xx + 85 , xx + 156 , xx +
159 ) ; xx [ 156 ] = xx [ 102 ] + xx [ 269 ] * xx [ 135 ] + xx [ 73 ] * xx [
136 ] + xx [ 349 ] * xx [ 137 ] ; xx [ 157 ] = xx [ 108 ] + xx [ 318 ] * xx [
135 ] + xx [ 74 ] * xx [ 136 ] + xx [ 350 ] * xx [ 137 ] ; xx [ 158 ] = xx [
109 ] + xx [ 265 ] * xx [ 135 ] + xx [ 266 ] * xx [ 136 ] + xx [ 360 ] * xx [
137 ] ; pm_math_Quaternion_xform_ra ( xx + 85 , xx + 156 , xx + 108 ) ;
pm_math_Vector3_cross_ra ( xx + 123 , xx + 108 , xx + 156 ) ; xx [ 162 ] = xx
[ 30 ] ; xx [ 163 ] = xx [ 419 ] ; xx [ 164 ] = xx [ 429 ] ;
pm_math_Vector3_cross_ra ( xx + 687 , xx + 162 , xx + 165 ) ; xx [ 168 ] = xx
[ 662 ] ; xx [ 169 ] = xx [ 363 ] ; xx [ 170 ] = xx [ 780 ] ;
pm_math_Vector3_cross_ra ( xx + 162 , xx + 168 , xx + 174 ) ; xx [ 30 ] = xx
[ 174 ] + xx [ 781 ] * xx [ 38 ] - xx [ 417 ] * xx [ 27 ] ; xx [ 52 ] = xx [
165 ] - xx [ 30 ] ; xx [ 55 ] = xx [ 175 ] + xx [ 27 ] * xx [ 362 ] ; xx [ 27
] = xx [ 166 ] - xx [ 55 ] ; xx [ 58 ] = xx [ 38 ] * xx [ 362 ] - xx [ 176 ]
; xx [ 38 ] = xx [ 167 ] + xx [ 58 ] ; xx [ 165 ] = xx [ 52 ] ; xx [ 166 ] =
xx [ 27 ] ; xx [ 167 ] = xx [ 38 ] ; pm_math_Matrix3x3_xform_ra ( xx + 324 ,
xx + 165 , xx + 168 ) ; xx [ 174 ] = xx [ 687 ] + xx [ 37 ] ; xx [ 175 ] = xx
[ 688 ] + xx [ 692 ] ; xx [ 176 ] = xx [ 689 ] + xx [ 691 ] ;
pm_math_Vector3_cross_ra ( xx + 342 , xx + 162 , xx + 191 ) ;
pm_math_Vector3_cross_ra ( xx + 174 , xx + 191 , xx + 162 ) ;
pm_math_Vector3_cross_ra ( xx + 716 , xx + 93 , xx + 174 ) ;
pm_math_Vector3_cross_ra ( xx + 716 , xx + 174 , xx + 195 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 195 , xx + 201 ) ; xx [
195 ] = - xx [ 30 ] ; xx [ 196 ] = - xx [ 55 ] ; xx [ 197 ] = xx [ 58 ] ;
pm_math_Vector3_cross_ra ( xx + 342 , xx + 195 , xx + 210 ) ; xx [ 30 ] = xx
[ 162 ] + xx [ 201 ] + xx [ 210 ] ; xx [ 37 ] = xx [ 163 ] + xx [ 202 ] + xx
[ 211 ] ; xx [ 55 ] = xx [ 164 ] + xx [ 203 ] + xx [ 212 ] ; xx [ 162 ] = xx
[ 30 ] ; xx [ 163 ] = xx [ 37 ] ; xx [ 164 ] = xx [ 55 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 375 , xx + 162 , xx + 195 ) ; xx [ 58 ] =
xx [ 788 ] - xx [ 795 ] - xx [ 805 ] - xx [ 792 ] - xx [ 818 ] - xx [ 808 ] -
xx [ 831 ] - xx [ 821 ] - xx [ 843 ] - xx [ 834 ] + xx [ 159 ] + xx [ 156 ] +
xx [ 168 ] + xx [ 195 ] ; xx [ 73 ] = state [ 12 ] + xx [ 43 ] ; if ( xx [
138 ] < xx [ 73 ] ) xx [ 73 ] = xx [ 138 ] ; xx [ 74 ] = - ( xx [ 73 ] / xx [
46 ] ) ; if ( xx [ 1 ] < xx [ 74 ] ) xx [ 74 ] = xx [ 1 ] ; xx [ 78 ] = xx [
67 ] * state [ 15 ] ; xx [ 82 ] = xx [ 74 ] * xx [ 74 ] * ( xx [ 56 ] - xx [
12 ] * xx [ 74 ] ) * ( ( - xx [ 73 ] == xx [ 138 ] ? xx [ 138 ] : - xx [ 78 ]
) - xx [ 104 ] * xx [ 73 ] ) ; if ( xx [ 138 ] > xx [ 82 ] ) xx [ 82 ] = xx [
138 ] ; xx [ 73 ] = state [ 12 ] - xx [ 43 ] ; if ( xx [ 138 ] > xx [ 73 ] )
xx [ 73 ] = xx [ 138 ] ; xx [ 74 ] = xx [ 73 ] / xx [ 46 ] ; if ( xx [ 1 ] <
xx [ 74 ] ) xx [ 74 ] = xx [ 1 ] ; xx [ 83 ] = ( xx [ 104 ] * xx [ 73 ] + (
xx [ 73 ] == xx [ 138 ] ? xx [ 138 ] : xx [ 78 ] ) ) * xx [ 74 ] * xx [ 74 ]
* ( xx [ 56 ] - xx [ 12 ] * xx [ 74 ] ) ; if ( xx [ 138 ] > xx [ 83 ] ) xx [
83 ] = xx [ 138 ] ; xx [ 73 ] = xx [ 789 ] - xx [ 796 ] - xx [ 806 ] - xx [
793 ] - xx [ 819 ] - xx [ 809 ] - xx [ 832 ] - xx [ 822 ] - xx [ 844 ] - xx [
835 ] + xx [ 160 ] + xx [ 157 ] + xx [ 169 ] + xx [ 196 ] ; xx [ 74 ] = xx [
790 ] - xx [ 797 ] - xx [ 807 ] - xx [ 794 ] - xx [ 820 ] - xx [ 810 ] - xx [
833 ] - xx [ 823 ] - xx [ 845 ] - xx [ 836 ] + xx [ 161 ] + xx [ 158 ] + xx [
170 ] + xx [ 197 ] ; xx [ 156 ] = xx [ 58 ] ; xx [ 157 ] = xx [ 73 ] ; xx [
158 ] = xx [ 74 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 375 , xx + 165
, xx + 159 ) ; pm_math_Matrix3x3_xform_ra ( xx + 384 , xx + 162 , xx + 165 )
; xx [ 78 ] = xx [ 801 ] - xx [ 145 ] - xx [ 802 ] + xx [ 814 ] - xx [ 815 ]
+ xx [ 827 ] - xx [ 828 ] + xx [ 746 ] - xx [ 840 ] + xx [ 108 ] + xx [ 159 ]
+ xx [ 165 ] ; xx [ 98 ] = xx [ 152 ] + xx [ 787 ] - xx [ 803 ] + xx [ 785 ]
- xx [ 816 ] + xx [ 748 ] - xx [ 829 ] + xx [ 758 ] - xx [ 841 ] + xx [ 109 ]
+ xx [ 160 ] + xx [ 166 ] ; xx [ 102 ] = xx [ 121 ] - xx [ 791 ] - xx [ 804 ]
+ xx [ 734 ] - xx [ 817 ] + xx [ 735 ] - xx [ 830 ] + xx [ 80 ] - xx [ 842 ]
+ xx [ 110 ] + xx [ 161 ] + xx [ 167 ] ; xx [ 108 ] = xx [ 78 ] ; xx [ 109 ]
= xx [ 98 ] ; xx [ 110 ] = xx [ 102 ] ; xx [ 80 ] = state [ 13 ] + xx [ 43 ]
; if ( xx [ 138 ] < xx [ 80 ] ) xx [ 80 ] = xx [ 138 ] ; xx [ 111 ] = - ( xx
[ 80 ] / xx [ 46 ] ) ; if ( xx [ 1 ] < xx [ 111 ] ) xx [ 111 ] = xx [ 1 ] ;
xx [ 121 ] = xx [ 67 ] * state [ 16 ] ; xx [ 122 ] = xx [ 111 ] * xx [ 111 ]
* ( xx [ 56 ] - xx [ 12 ] * xx [ 111 ] ) * ( ( - xx [ 80 ] == xx [ 138 ] ? xx
[ 138 ] : - xx [ 121 ] ) - xx [ 104 ] * xx [ 80 ] ) ; if ( xx [ 138 ] > xx [
122 ] ) xx [ 122 ] = xx [ 138 ] ; xx [ 80 ] = state [ 13 ] - xx [ 43 ] ; if (
xx [ 138 ] > xx [ 80 ] ) xx [ 80 ] = xx [ 138 ] ; xx [ 111 ] = xx [ 80 ] / xx
[ 46 ] ; if ( xx [ 1 ] < xx [ 111 ] ) xx [ 111 ] = xx [ 1 ] ; xx [ 127 ] = (
xx [ 104 ] * xx [ 80 ] + ( xx [ 80 ] == xx [ 138 ] ? xx [ 138 ] : xx [ 121 ]
) ) * xx [ 111 ] * xx [ 111 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 111 ] ) ; if (
xx [ 138 ] > xx [ 127 ] ) xx [ 127 ] = xx [ 138 ] ; xx [ 80 ] = state [ 14 ]
+ xx [ 43 ] ; if ( xx [ 138 ] < xx [ 80 ] ) xx [ 80 ] = xx [ 138 ] ; xx [ 111
] = - ( xx [ 80 ] / xx [ 46 ] ) ; if ( xx [ 1 ] < xx [ 111 ] ) xx [ 111 ] =
xx [ 1 ] ; xx [ 121 ] = xx [ 67 ] * state [ 17 ] ; xx [ 128 ] = xx [ 111 ] *
xx [ 111 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 111 ] ) * ( ( - xx [ 80 ] == xx [
138 ] ? xx [ 138 ] : - xx [ 121 ] ) - xx [ 104 ] * xx [ 80 ] ) ; if ( xx [
138 ] > xx [ 128 ] ) xx [ 128 ] = xx [ 138 ] ; xx [ 80 ] = state [ 14 ] - xx
[ 43 ] ; if ( xx [ 138 ] > xx [ 80 ] ) xx [ 80 ] = xx [ 138 ] ; xx [ 111 ] =
xx [ 80 ] / xx [ 46 ] ; if ( xx [ 1 ] < xx [ 111 ] ) xx [ 111 ] = xx [ 1 ] ;
xx [ 132 ] = ( xx [ 104 ] * xx [ 80 ] + ( xx [ 80 ] == xx [ 138 ] ? xx [ 138
] : xx [ 121 ] ) ) * xx [ 111 ] * xx [ 111 ] * ( xx [ 56 ] - xx [ 12 ] * xx [
111 ] ) ; if ( xx [ 138 ] > xx [ 132 ] ) xx [ 132 ] = xx [ 138 ] ; xx [ 159 ]
= input [ 16 ] - xx [ 41 ] * state [ 15 ] + xx [ 82 ] - xx [ 83 ] - (
pm_math_Vector3_dot_ra ( xx + 315 , xx + 156 ) + pm_math_Vector3_dot_ra ( xx
+ 355 , xx + 108 ) ) ; xx [ 160 ] = input [ 17 ] - xx [ 41 ] * state [ 16 ] +
xx [ 122 ] - xx [ 127 ] - ( pm_math_Vector3_dot_ra ( xx + 430 , xx + 156 ) +
pm_math_Vector3_dot_ra ( xx + 436 , xx + 108 ) ) ; xx [ 161 ] = input [ 18 ]
- xx [ 41 ] * state [ 17 ] + xx [ 128 ] - xx [ 132 ] - ( xx [ 73 ] * xx [ 50
] + xx [ 74 ] * xx [ 49 ] + pm_math_Vector3_dot_ra ( xx + 451 , xx + 108 ) )
; solveSymmetricPosDef ( xx + 468 , xx + 159 , 3 , 1 , xx + 108 , xx + 156 )
; xx [ 156 ] = xx [ 58 ] + xx [ 97 ] * xx [ 108 ] + xx [ 414 ] * xx [ 109 ] +
xx [ 457 ] * xx [ 110 ] ; xx [ 157 ] = xx [ 73 ] + xx [ 236 ] * xx [ 108 ] +
xx [ 442 ] * xx [ 109 ] + xx [ 458 ] * xx [ 110 ] ; xx [ 158 ] = xx [ 74 ] +
xx [ 267 ] * xx [ 108 ] + xx [ 433 ] * xx [ 109 ] + xx [ 454 ] * xx [ 110 ] ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 156 , xx + 159 ) ; xx [ 156 ] =
xx [ 78 ] + xx [ 364 ] * xx [ 108 ] + xx [ 434 ] * xx [ 109 ] + xx [ 455 ] *
xx [ 110 ] ; xx [ 157 ] = xx [ 98 ] + xx [ 365 ] * xx [ 108 ] + xx [ 435 ] *
xx [ 109 ] + xx [ 456 ] * xx [ 110 ] ; xx [ 158 ] = xx [ 102 ] + xx [ 361 ] *
xx [ 108 ] + xx [ 443 ] * xx [ 109 ] + xx [ 462 ] * xx [ 110 ] ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 156 , xx + 162 ) ;
pm_math_Vector3_cross_ra ( xx + 93 , xx + 162 , xx + 156 ) ; xx [ 165 ] = xx
[ 21 ] ; xx [ 166 ] = xx [ 518 ] ; xx [ 167 ] = xx [ 519 ] ;
pm_math_Vector3_cross_ra ( xx + 702 , xx + 165 , xx + 168 ) ; xx [ 195 ] = xx
[ 444 ] ; xx [ 196 ] = xx [ 467 ] ; xx [ 197 ] = xx [ 711 ] ;
pm_math_Vector3_cross_ra ( xx + 165 , xx + 195 , xx + 201 ) ; xx [ 21 ] = xx
[ 201 ] + xx [ 715 ] * xx [ 24 ] - xx [ 516 ] * xx [ 20 ] ; xx [ 58 ] = xx [
168 ] - xx [ 21 ] ; xx [ 73 ] = xx [ 202 ] + xx [ 20 ] * xx [ 466 ] ; xx [ 20
] = xx [ 169 ] - xx [ 73 ] ; xx [ 74 ] = xx [ 24 ] * xx [ 466 ] - xx [ 203 ]
; xx [ 24 ] = xx [ 170 ] + xx [ 74 ] ; xx [ 168 ] = xx [ 58 ] ; xx [ 169 ] =
xx [ 20 ] ; xx [ 170 ] = xx [ 24 ] ; pm_math_Matrix3x3_xform_ra ( xx + 420 ,
xx + 168 , xx + 195 ) ; xx [ 201 ] = xx [ 702 ] + xx [ 23 ] ; xx [ 202 ] = xx
[ 703 ] + xx [ 710 ] ; xx [ 203 ] = xx [ 704 ] + xx [ 705 ] ;
pm_math_Vector3_cross_ra ( xx + 68 , xx + 165 , xx + 210 ) ;
pm_math_Vector3_cross_ra ( xx + 201 , xx + 210 , xx + 165 ) ;
pm_math_Vector3_cross_ra ( xx + 615 , xx + 463 , xx + 201 ) ;
pm_math_Vector3_cross_ra ( xx + 615 , xx + 201 , xx + 213 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 213 , xx + 216 ) ; xx [
213 ] = - xx [ 21 ] ; xx [ 214 ] = - xx [ 73 ] ; xx [ 215 ] = xx [ 74 ] ;
pm_math_Vector3_cross_ra ( xx + 68 , xx + 213 , xx + 219 ) ; xx [ 21 ] = xx [
165 ] + xx [ 216 ] + xx [ 219 ] ; xx [ 23 ] = xx [ 166 ] + xx [ 217 ] + xx [
220 ] ; xx [ 68 ] = xx [ 167 ] + xx [ 218 ] + xx [ 221 ] ; xx [ 165 ] = xx [
21 ] ; xx [ 166 ] = xx [ 23 ] ; xx [ 167 ] = xx [ 68 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 477 , xx + 165 , xx + 213 ) ; xx [ 69 ] =
xx [ 722 ] - xx [ 731 ] - xx [ 740 ] - xx [ 728 ] - xx [ 752 ] - xx [ 743 ] -
xx [ 765 ] - xx [ 755 ] - xx [ 777 ] - xx [ 768 ] + xx [ 159 ] + xx [ 156 ] +
xx [ 195 ] + xx [ 213 ] ; xx [ 70 ] = state [ 6 ] + xx [ 43 ] ; if ( xx [ 138
] < xx [ 70 ] ) xx [ 70 ] = xx [ 138 ] ; xx [ 73 ] = - ( xx [ 70 ] / xx [ 46
] ) ; if ( xx [ 1 ] < xx [ 73 ] ) xx [ 73 ] = xx [ 1 ] ; xx [ 74 ] = xx [ 67
] * state [ 9 ] ; xx [ 78 ] = xx [ 73 ] * xx [ 73 ] * ( xx [ 56 ] - xx [ 12 ]
* xx [ 73 ] ) * ( ( - xx [ 70 ] == xx [ 138 ] ? xx [ 138 ] : - xx [ 74 ] ) -
xx [ 104 ] * xx [ 70 ] ) ; if ( xx [ 138 ] > xx [ 78 ] ) xx [ 78 ] = xx [ 138
] ; xx [ 70 ] = state [ 6 ] - xx [ 43 ] ; if ( xx [ 138 ] > xx [ 70 ] ) xx [
70 ] = xx [ 138 ] ; xx [ 73 ] = xx [ 70 ] / xx [ 46 ] ; if ( xx [ 1 ] < xx [
73 ] ) xx [ 73 ] = xx [ 1 ] ; xx [ 80 ] = ( xx [ 104 ] * xx [ 70 ] + ( xx [
70 ] == xx [ 138 ] ? xx [ 138 ] : xx [ 74 ] ) ) * xx [ 73 ] * xx [ 73 ] * (
xx [ 56 ] - xx [ 12 ] * xx [ 73 ] ) ; if ( xx [ 138 ] > xx [ 80 ] ) xx [ 80 ]
= xx [ 138 ] ; xx [ 70 ] = xx [ 723 ] - xx [ 732 ] - xx [ 741 ] - xx [ 729 ]
- xx [ 753 ] - xx [ 744 ] - xx [ 766 ] - xx [ 756 ] - xx [ 778 ] - xx [ 769 ]
+ xx [ 160 ] + xx [ 157 ] + xx [ 196 ] + xx [ 214 ] ; xx [ 73 ] = xx [ 724 ]
- xx [ 733 ] - xx [ 742 ] - xx [ 730 ] - xx [ 754 ] - xx [ 745 ] - xx [ 767 ]
- xx [ 757 ] - xx [ 779 ] - xx [ 770 ] + xx [ 161 ] + xx [ 158 ] + xx [ 197 ]
+ xx [ 215 ] ; xx [ 156 ] = xx [ 69 ] ; xx [ 157 ] = xx [ 70 ] ; xx [ 158 ] =
xx [ 73 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 477 , xx + 168 , xx +
159 ) ; pm_math_Matrix3x3_xform_ra ( xx + 486 , xx + 165 , xx + 168 ) ; xx [
74 ] = xx [ 725 ] + xx [ 727 ] - xx [ 737 ] + xx [ 726 ] - xx [ 749 ] + xx [
761 ] - xx [ 762 ] + xx [ 667 ] - xx [ 774 ] + xx [ 162 ] + xx [ 159 ] + xx [
168 ] ; xx [ 82 ] = xx [ 721 ] - xx [ 134 ] - xx [ 738 ] + xx [ 621 ] - xx [
750 ] + xx [ 669 ] - xx [ 763 ] + xx [ 690 ] - xx [ 775 ] + xx [ 163 ] + xx [
160 ] + xx [ 169 ] ; xx [ 83 ] = xx [ 151 ] - xx [ 57 ] - xx [ 739 ] + xx [
530 ] - xx [ 751 ] + xx [ 619 ] - xx [ 764 ] + xx [ 32 ] - xx [ 776 ] + xx [
164 ] + xx [ 161 ] + xx [ 170 ] ; xx [ 132 ] = xx [ 74 ] ; xx [ 133 ] = xx [
82 ] ; xx [ 134 ] = xx [ 83 ] ; xx [ 32 ] = state [ 7 ] + xx [ 43 ] ; if ( xx
[ 138 ] < xx [ 32 ] ) xx [ 32 ] = xx [ 138 ] ; xx [ 57 ] = - ( xx [ 32 ] / xx
[ 46 ] ) ; if ( xx [ 1 ] < xx [ 57 ] ) xx [ 57 ] = xx [ 1 ] ; xx [ 97 ] = xx
[ 67 ] * state [ 10 ] ; xx [ 98 ] = xx [ 57 ] * xx [ 57 ] * ( xx [ 56 ] - xx
[ 12 ] * xx [ 57 ] ) * ( ( - xx [ 32 ] == xx [ 138 ] ? xx [ 138 ] : - xx [ 97
] ) - xx [ 104 ] * xx [ 32 ] ) ; if ( xx [ 138 ] > xx [ 98 ] ) xx [ 98 ] = xx
[ 138 ] ; xx [ 32 ] = state [ 7 ] - xx [ 43 ] ; if ( xx [ 138 ] > xx [ 32 ] )
xx [ 32 ] = xx [ 138 ] ; xx [ 57 ] = xx [ 32 ] / xx [ 46 ] ; if ( xx [ 1 ] <
xx [ 57 ] ) xx [ 57 ] = xx [ 1 ] ; xx [ 102 ] = ( xx [ 104 ] * xx [ 32 ] + (
xx [ 32 ] == xx [ 138 ] ? xx [ 138 ] : xx [ 97 ] ) ) * xx [ 57 ] * xx [ 57 ]
* ( xx [ 56 ] - xx [ 12 ] * xx [ 57 ] ) ; if ( xx [ 138 ] > xx [ 102 ] ) xx [
102 ] = xx [ 138 ] ; xx [ 32 ] = state [ 8 ] + xx [ 43 ] ; if ( xx [ 138 ] <
xx [ 32 ] ) xx [ 32 ] = xx [ 138 ] ; xx [ 57 ] = - ( xx [ 32 ] / xx [ 46 ] )
; if ( xx [ 1 ] < xx [ 57 ] ) xx [ 57 ] = xx [ 1 ] ; xx [ 97 ] = xx [ 67 ] *
state [ 11 ] ; xx [ 111 ] = xx [ 57 ] * xx [ 57 ] * ( xx [ 56 ] - xx [ 12 ] *
xx [ 57 ] ) * ( ( - xx [ 32 ] == xx [ 138 ] ? xx [ 138 ] : - xx [ 97 ] ) - xx
[ 104 ] * xx [ 32 ] ) ; if ( xx [ 138 ] > xx [ 111 ] ) xx [ 111 ] = xx [ 138
] ; xx [ 32 ] = state [ 8 ] - xx [ 43 ] ; if ( xx [ 138 ] > xx [ 32 ] ) xx [
32 ] = xx [ 138 ] ; xx [ 57 ] = xx [ 32 ] / xx [ 46 ] ; if ( xx [ 1 ] < xx [
57 ] ) xx [ 57 ] = xx [ 1 ] ; xx [ 121 ] = ( xx [ 104 ] * xx [ 32 ] + ( xx [
32 ] == xx [ 138 ] ? xx [ 138 ] : xx [ 97 ] ) ) * xx [ 57 ] * xx [ 57 ] * (
xx [ 56 ] - xx [ 12 ] * xx [ 57 ] ) ; if ( xx [ 138 ] > xx [ 121 ] ) xx [ 121
] = xx [ 138 ] ; xx [ 150 ] = input [ 19 ] - xx [ 41 ] * state [ 9 ] + xx [
78 ] - xx [ 80 ] - ( pm_math_Vector3_dot_ra ( xx + 319 , xx + 156 ) +
pm_math_Vector3_dot_ra ( xx + 439 , xx + 132 ) ) ; xx [ 151 ] = input [ 20 ]
- xx [ 41 ] * state [ 10 ] + xx [ 98 ] - xx [ 102 ] - (
pm_math_Vector3_dot_ra ( xx + 531 , xx + 156 ) + pm_math_Vector3_dot_ra ( xx
+ 537 , xx + 132 ) ) ; xx [ 152 ] = input [ 21 ] - xx [ 41 ] * state [ 11 ] +
xx [ 111 ] - xx [ 121 ] - ( xx [ 70 ] * xx [ 26 ] + xx [ 73 ] * xx [ 25 ] +
pm_math_Vector3_dot_ra ( xx + 550 , xx + 132 ) ) ; solveSymmetricPosDef ( xx
+ 567 , xx + 150 , 3 , 1 , xx + 132 , xx + 156 ) ; xx [ 150 ] = xx [ 69 ] +
xx [ 447 ] * xx [ 132 ] + xx [ 513 ] * xx [ 133 ] + xx [ 556 ] * xx [ 134 ] ;
xx [ 151 ] = xx [ 70 ] + xx [ 459 ] * xx [ 132 ] + xx [ 520 ] * xx [ 133 ] +
xx [ 557 ] * xx [ 134 ] ; xx [ 152 ] = xx [ 73 ] + xx [ 411 ] * xx [ 132 ] +
xx [ 521 ] * xx [ 133 ] + xx [ 553 ] * xx [ 134 ] ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 150 , xx + 156 ) ; xx [ 150 ] =
xx [ 74 ] + xx [ 413 ] * xx [ 132 ] + xx [ 546 ] * xx [ 133 ] + xx [ 554 ] *
xx [ 134 ] ; xx [ 151 ] = xx [ 82 ] + xx [ 460 ] * xx [ 132 ] + xx [ 547 ] *
xx [ 133 ] + xx [ 555 ] * xx [ 134 ] ; xx [ 152 ] = xx [ 83 ] + xx [ 461 ] *
xx [ 132 ] + xx [ 540 ] * xx [ 133 ] + xx [ 561 ] * xx [ 134 ] ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 150 , xx + 159 ) ;
pm_math_Vector3_cross_ra ( xx + 463 , xx + 159 , xx + 150 ) ; xx [ 162 ] = xx
[ 44 ] ; xx [ 163 ] = xx [ 446 ] ; xx [ 164 ] = xx [ 528 ] ;
pm_math_Vector3_cross_ra ( xx + 615 , xx + 162 , xx + 165 ) ; xx [ 32 ] = xx
[ 165 ] + xx [ 8 ] * xx [ 529 ] - xx [ 523 ] * xx [ 3 ] ; xx [ 44 ] = xx [ 3
] * xx [ 96 ] + xx [ 166 ] ; xx [ 3 ] = xx [ 167 ] - xx [ 8 ] * xx [ 96 ] ;
xx [ 96 ] = - xx [ 32 ] ; xx [ 97 ] = - xx [ 44 ] ; xx [ 98 ] = - xx [ 3 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 630 , xx + 96 , xx + 162 ) ; xx [ 8 ] = xx
[ 48 ] * xx [ 42 ] + xx [ 524 ] * xx [ 45 ] ; xx [ 48 ] = xx [ 45 ] * xx [ 4
] ; xx [ 57 ] = xx [ 42 ] * xx [ 4 ] ; xx [ 165 ] = xx [ 8 ] ; xx [ 166 ] = -
xx [ 48 ] ; xx [ 167 ] = - xx [ 57 ] ; pm_math_Vector3_cross_ra ( xx + 615 ,
xx + 165 , xx + 168 ) ; xx [ 4 ] = xx [ 168 ] - ( xx [ 3 ] * xx [ 42 ] + xx [
45 ] * xx [ 44 ] ) ; xx [ 69 ] = xx [ 169 ] + xx [ 32 ] * xx [ 45 ] ; xx [ 45
] = xx [ 170 ] + xx [ 32 ] * xx [ 42 ] ; xx [ 165 ] = xx [ 4 ] ; xx [ 166 ] =
xx [ 69 ] ; xx [ 167 ] = xx [ 45 ] ; pm_math_Matrix3x3_xform_ra ( xx + 576 ,
xx + 165 , xx + 168 ) ; xx [ 42 ] = xx [ 627 ] - xx [ 622 ] * xx [ 719 ] + xx
[ 534 ] * xx [ 664 ] - xx [ 676 ] - xx [ 681 ] - xx [ 697 ] - xx [ 694 ] - xx
[ 22 ] * xx [ 53 ] - xx [ 708 ] + xx [ 157 ] + xx [ 151 ] + xx [ 163 ] + xx [
169 ] ; xx [ 70 ] = xx [ 628 ] + xx [ 19 ] * xx [ 719 ] - xx [ 656 ] * xx [
664 ] - xx [ 677 ] - xx [ 682 ] - xx [ 698 ] - xx [ 695 ] + xx [ 657 ] * xx [
53 ] - xx [ 709 ] + xx [ 158 ] + xx [ 152 ] + xx [ 164 ] + xx [ 170 ] ; xx [
195 ] = xx [ 626 ] - ( 0.02933876077043094 * xx [ 34 ] - 2.074016415803327e-3
* xx [ 66 ] ) - ( xx [ 19 ] * xx [ 648 ] - xx [ 622 ] * xx [ 624 ] ) - ( xx [
534 ] * xx [ 665 ] - xx [ 656 ] * xx [ 666 ] ) - xx [ 675 ] - xx [ 680 ] - xx
[ 696 ] - xx [ 693 ] - ( xx [ 657 ] * xx [ 683 ] - xx [ 22 ] * xx [ 679 ] ) -
xx [ 707 ] + xx [ 156 ] + xx [ 150 ] + xx [ 162 ] + xx [ 168 ] ; xx [ 196 ] =
xx [ 42 ] ; xx [ 197 ] = xx [ 70 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx
+ 576 , xx + 96 , xx + 150 ) ; pm_math_Matrix3x3_xform_ra ( xx + 585 , xx +
165 , xx + 96 ) ; xx [ 19 ] = xx [ 719 ] - xx [ 664 ] + xx [ 670 ] - xx [ 684
] + xx [ 678 ] - xx [ 699 ] + xx [ 53 ] - xx [ 712 ] + xx [ 159 ] + xx [ 150
] + xx [ 96 ] ; xx [ 156 ] = xx [ 19 ] ; xx [ 157 ] = xx [ 66 ] + xx [ 624 ]
- xx [ 665 ] + xx [ 671 ] - xx [ 685 ] + xx [ 673 ] - xx [ 700 ] + xx [ 679 ]
- xx [ 713 ] + xx [ 160 ] + xx [ 151 ] + xx [ 97 ] ; xx [ 158 ] = xx [ 648 ]
- xx [ 34 ] - xx [ 666 ] + xx [ 654 ] - xx [ 686 ] + xx [ 661 ] - xx [ 701 ]
+ xx [ 683 ] - xx [ 714 ] + xx [ 161 ] + xx [ 152 ] + xx [ 98 ] ; xx [ 22 ] =
state [ 1 ] + xx [ 43 ] ; if ( xx [ 138 ] < xx [ 22 ] ) xx [ 22 ] = xx [ 138
] ; xx [ 34 ] = - ( xx [ 22 ] / xx [ 46 ] ) ; if ( xx [ 1 ] < xx [ 34 ] ) xx
[ 34 ] = xx [ 1 ] ; xx [ 53 ] = xx [ 67 ] * state [ 4 ] ; xx [ 66 ] = xx [ 34
] * xx [ 34 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 34 ] ) * ( ( - xx [ 22 ] == xx
[ 138 ] ? xx [ 138 ] : - xx [ 53 ] ) - xx [ 104 ] * xx [ 22 ] ) ; if ( xx [
138 ] > xx [ 66 ] ) xx [ 66 ] = xx [ 138 ] ; xx [ 22 ] = state [ 1 ] - xx [
43 ] ; if ( xx [ 138 ] > xx [ 22 ] ) xx [ 22 ] = xx [ 138 ] ; xx [ 34 ] = xx
[ 22 ] / xx [ 46 ] ; if ( xx [ 1 ] < xx [ 34 ] ) xx [ 34 ] = xx [ 1 ] ; xx [
73 ] = ( xx [ 104 ] * xx [ 22 ] + ( xx [ 22 ] == xx [ 138 ] ? xx [ 138 ] : xx
[ 53 ] ) ) * xx [ 34 ] * xx [ 34 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 34 ] ) ;
if ( xx [ 138 ] > xx [ 73 ] ) xx [ 73 ] = xx [ 138 ] ; xx [ 22 ] = state [ 2
] + xx [ 43 ] ; if ( xx [ 138 ] < xx [ 22 ] ) xx [ 22 ] = xx [ 138 ] ; xx [
34 ] = - ( xx [ 22 ] / xx [ 46 ] ) ; if ( xx [ 1 ] < xx [ 34 ] ) xx [ 34 ] =
xx [ 1 ] ; xx [ 53 ] = xx [ 67 ] * state [ 5 ] ; xx [ 67 ] = xx [ 34 ] * xx [
34 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 34 ] ) * ( ( - xx [ 22 ] == xx [ 138 ]
? xx [ 138 ] : - xx [ 53 ] ) - xx [ 104 ] * xx [ 22 ] ) ; if ( xx [ 138 ] >
xx [ 67 ] ) xx [ 67 ] = xx [ 138 ] ; xx [ 22 ] = state [ 2 ] - xx [ 43 ] ; if
( xx [ 138 ] > xx [ 22 ] ) xx [ 22 ] = xx [ 138 ] ; xx [ 34 ] = xx [ 22 ] /
xx [ 46 ] ; if ( xx [ 1 ] < xx [ 34 ] ) xx [ 34 ] = xx [ 1 ] ; xx [ 43 ] = (
xx [ 104 ] * xx [ 22 ] + ( xx [ 22 ] == xx [ 138 ] ? xx [ 138 ] : xx [ 53 ] )
) * xx [ 34 ] * xx [ 34 ] * ( xx [ 56 ] - xx [ 12 ] * xx [ 34 ] ) ; if ( xx [
138 ] > xx [ 43 ] ) xx [ 43 ] = xx [ 138 ] ; xx [ 96 ] = input [ 22 ] - xx [
41 ] * state [ 3 ] + xx [ 172 ] - xx [ 522 ] - ( pm_math_Vector3_dot_ra ( xx
+ 16 , xx + 195 ) + pm_math_Vector3_dot_ra ( xx + 525 , xx + 156 ) ) ; xx [
97 ] = input [ 23 ] - xx [ 41 ] * state [ 4 ] + xx [ 66 ] - xx [ 73 ] - (
pm_math_Vector3_dot_ra ( xx + 558 , xx + 195 ) + pm_math_Vector3_dot_ra ( xx
+ 612 , xx + 156 ) ) ; xx [ 98 ] = input [ 24 ] - xx [ 41 ] * state [ 5 ] +
xx [ 67 ] - xx [ 43 ] - ( xx [ 42 ] * xx [ 10 ] + xx [ 70 ] * xx [ 14 ] + xx
[ 19 ] * xx [ 623 ] ) ; solveSymmetricPosDef ( xx + 639 , xx + 96 , 3 , 1 ,
xx + 16 , xx + 41 ) ; xx [ 213 ] = xx [ 140 ] ; xx [ 214 ] = xx [ 565 ] ; xx
[ 215 ] = xx [ 625 ] ; xx [ 216 ] = xx [ 146 ] ; xx [ 217 ] = xx [ 566 ] ; xx
[ 218 ] = xx [ 29 ] ; xx [ 219 ] = xx [ 148 ] ; xx [ 220 ] = xx [ 562 ] ; xx
[ 221 ] = xx [ 31 ] ; xx [ 222 ] = xx [ 149 ] ; xx [ 223 ] = xx [ 563 ] ; xx
[ 224 ] = xx [ 35 ] ; xx [ 225 ] = xx [ 412 ] ; xx [ 226 ] = xx [ 564 ] ; xx
[ 227 ] = xx [ 39 ] ; xx [ 228 ] = xx [ 445 ] ; xx [ 229 ] = xx [ 618 ] ; xx
[ 230 ] = xx [ 40 ] ; solveSymmetricPosDef ( xx + 639 , xx + 213 , 3 , 6 , xx
+ 269 , xx + 39 ) ; xx [ 39 ] = xx [ 278 ] ; xx [ 40 ] = xx [ 281 ] ; xx [ 41
] = xx [ 284 ] ; xx [ 19 ] = 9.806649999999999 ; xx [ 22 ] = xx [ 19 ] * xx [
15 ] ; xx [ 29 ] = xx [ 19 ] * xx [ 7 ] ; xx [ 31 ] = xx [ 12 ] * ( xx [ 6 ]
* xx [ 22 ] + xx [ 29 ] * xx [ 11 ] ) ; xx [ 34 ] = ( xx [ 6 ] * xx [ 29 ] -
xx [ 22 ] * xx [ 11 ] ) * xx [ 12 ] ; xx [ 6 ] = ( xx [ 22 ] * xx [ 15 ] + xx
[ 29 ] * xx [ 7 ] ) * xx [ 12 ] ; xx [ 96 ] = xx [ 31 ] ; xx [ 97 ] = xx [ 34
] ; xx [ 98 ] = xx [ 19 ] - xx [ 6 ] ; xx [ 7 ] = xx [ 16 ] -
pm_math_Vector3_dot_ra ( xx + 39 , xx + 96 ) ; xx [ 39 ] = xx [ 279 ] ; xx [
40 ] = xx [ 282 ] ; xx [ 41 ] = xx [ 285 ] ; xx [ 11 ] = xx [ 17 ] -
pm_math_Vector3_dot_ra ( xx + 39 , xx + 96 ) ; xx [ 15 ] = xx [ 280 ] ; xx [
16 ] = xx [ 283 ] ; xx [ 17 ] = xx [ 286 ] ; xx [ 22 ] = xx [ 18 ] -
pm_math_Vector3_dot_ra ( xx + 15 , xx + 96 ) ; xx [ 15 ] = xx [ 594 ] ; xx [
16 ] = xx [ 597 ] ; xx [ 17 ] = xx [ 600 ] ; xx [ 39 ] = xx [ 13 ] * xx [ 7 ]
+ xx [ 536 ] * xx [ 11 ] - xx [ 32 ] ; xx [ 40 ] = xx [ 5 ] * xx [ 7 ] + xx [
541 ] * xx [ 11 ] + xx [ 10 ] * xx [ 22 ] - xx [ 44 ] ; xx [ 41 ] = xx [ 9 ]
* xx [ 7 ] + xx [ 11 ] * xx [ 542 ] + xx [ 14 ] * xx [ 22 ] - xx [ 3 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 39 , xx + 42 ) ; xx [ 96
] = xx [ 603 ] ; xx [ 97 ] = xx [ 606 ] ; xx [ 98 ] = xx [ 609 ] ;
pm_math_Vector3_cross_ra ( xx + 39 , xx + 463 , xx + 138 ) ; xx [ 39 ] = xx [
31 ] + xx [ 7 ] * xx [ 47 ] + xx [ 11 ] * xx [ 535 ] + xx [ 623 ] * xx [ 22 ]
+ xx [ 4 ] + xx [ 138 ] ; xx [ 40 ] = xx [ 34 ] - xx [ 120 ] * xx [ 7 ] - xx
[ 543 ] * xx [ 11 ] + xx [ 69 ] + xx [ 139 ] ; xx [ 41 ] = xx [ 45 ] - ( xx [
6 ] + xx [ 126 ] * xx [ 7 ] + xx [ 544 ] * xx [ 11 ] ) + xx [ 140 ] + xx [ 19
] ; pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 39 , xx + 3 ) ; xx [
6 ] = xx [ 132 ] - ( pm_math_Vector3_dot_ra ( xx + 15 , xx + 42 ) +
pm_math_Vector3_dot_ra ( xx + 96 , xx + 3 ) ) ; xx [ 13 ] = xx [ 595 ] ; xx [
14 ] = xx [ 598 ] ; xx [ 15 ] = xx [ 601 ] ; xx [ 16 ] = xx [ 604 ] ; xx [ 17
] = xx [ 607 ] ; xx [ 18 ] = xx [ 610 ] ; xx [ 9 ] = xx [ 133 ] - (
pm_math_Vector3_dot_ra ( xx + 13 , xx + 42 ) + pm_math_Vector3_dot_ra ( xx +
16 , xx + 3 ) ) ; xx [ 13 ] = xx [ 596 ] ; xx [ 14 ] = xx [ 599 ] ; xx [ 15 ]
= xx [ 602 ] ; xx [ 16 ] = xx [ 605 ] ; xx [ 17 ] = xx [ 608 ] ; xx [ 18 ] =
xx [ 611 ] ; xx [ 10 ] = xx [ 134 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx
+ 42 ) + pm_math_Vector3_dot_ra ( xx + 16 , xx + 3 ) ) ; xx [ 13 ] = xx [ 495
] ; xx [ 14 ] = xx [ 498 ] ; xx [ 15 ] = xx [ 501 ] ; xx [ 16 ] = xx [ 42 ] +
xx [ 268 ] * xx [ 6 ] + xx [ 517 ] * xx [ 9 ] + xx [ 58 ] ; xx [ 17 ] = xx [
43 ] + xx [ 33 ] * xx [ 6 ] + xx [ 515 ] * xx [ 9 ] + xx [ 26 ] * xx [ 10 ] +
xx [ 20 ] ; xx [ 18 ] = xx [ 44 ] + xx [ 36 ] * xx [ 6 ] + xx [ 9 ] * xx [
514 ] + xx [ 25 ] * xx [ 10 ] + xx [ 24 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 16 , xx + 24 ) ; xx [ 31
] = xx [ 504 ] ; xx [ 32 ] = xx [ 507 ] ; xx [ 33 ] = xx [ 510 ] ;
pm_math_Vector3_cross_ra ( xx + 16 , xx + 93 , xx + 34 ) ; xx [ 16 ] = xx [ 3
] + xx [ 439 ] * xx [ 6 ] + xx [ 537 ] * xx [ 9 ] + xx [ 545 ] * xx [ 10 ] +
xx [ 21 ] + xx [ 34 ] ; xx [ 17 ] = xx [ 4 ] + xx [ 440 ] * xx [ 6 ] + xx [
538 ] * xx [ 9 ] - xx [ 548 ] * xx [ 10 ] + xx [ 23 ] + xx [ 35 ] ; xx [ 18 ]
= xx [ 5 ] + xx [ 441 ] * xx [ 6 ] + xx [ 539 ] * xx [ 9 ] + xx [ 549 ] * xx
[ 10 ] + xx [ 68 ] + xx [ 36 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 89
, xx + 16 , xx + 3 ) ; xx [ 16 ] = xx [ 108 ] - ( pm_math_Vector3_dot_ra ( xx
+ 13 , xx + 24 ) + pm_math_Vector3_dot_ra ( xx + 31 , xx + 3 ) ) ; xx [ 13 ]
= xx [ 496 ] ; xx [ 14 ] = xx [ 499 ] ; xx [ 15 ] = xx [ 502 ] ; xx [ 31 ] =
xx [ 505 ] ; xx [ 32 ] = xx [ 508 ] ; xx [ 33 ] = xx [ 511 ] ; xx [ 17 ] = xx
[ 109 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx + 24 ) +
pm_math_Vector3_dot_ra ( xx + 31 , xx + 3 ) ) ; xx [ 13 ] = xx [ 497 ] ; xx [
14 ] = xx [ 500 ] ; xx [ 15 ] = xx [ 503 ] ; xx [ 31 ] = xx [ 506 ] ; xx [ 32
] = xx [ 509 ] ; xx [ 33 ] = xx [ 512 ] ; xx [ 18 ] = xx [ 110 ] - (
pm_math_Vector3_dot_ra ( xx + 13 , xx + 24 ) + pm_math_Vector3_dot_ra ( xx +
31 , xx + 3 ) ) ; xx [ 13 ] = xx [ 393 ] ; xx [ 14 ] = xx [ 396 ] ; xx [ 15 ]
= xx [ 399 ] ; xx [ 31 ] = xx [ 24 ] + xx [ 234 ] * xx [ 16 ] + xx [ 418 ] *
xx [ 17 ] + xx [ 52 ] ; xx [ 32 ] = xx [ 25 ] + xx [ 235 ] * xx [ 16 ] + xx [
416 ] * xx [ 17 ] + xx [ 50 ] * xx [ 18 ] + xx [ 27 ] ; xx [ 33 ] = xx [ 26 ]
+ xx [ 51 ] * xx [ 16 ] - xx [ 17 ] * xx [ 415 ] + xx [ 49 ] * xx [ 18 ] + xx
[ 38 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 31 , xx + 23 ) ;
xx [ 34 ] = xx [ 402 ] ; xx [ 35 ] = xx [ 405 ] ; xx [ 36 ] = xx [ 408 ] ;
pm_math_Vector3_cross_ra ( xx + 31 , xx + 123 , xx + 38 ) ; xx [ 31 ] = xx [
3 ] + xx [ 355 ] * xx [ 16 ] + xx [ 436 ] * xx [ 17 ] + xx [ 448 ] * xx [ 18
] + xx [ 30 ] + xx [ 38 ] ; xx [ 32 ] = xx [ 4 ] + xx [ 356 ] * xx [ 16 ] +
xx [ 437 ] * xx [ 17 ] + xx [ 449 ] * xx [ 18 ] + xx [ 37 ] + xx [ 39 ] ; xx
[ 33 ] = xx [ 5 ] + xx [ 357 ] * xx [ 16 ] + xx [ 438 ] * xx [ 17 ] - xx [
450 ] * xx [ 18 ] + xx [ 55 ] + xx [ 40 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 31 , xx + 3 ) ; xx [ 20 ]
= xx [ 135 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx + 23 ) +
pm_math_Vector3_dot_ra ( xx + 34 , xx + 3 ) ) ; xx [ 13 ] = xx [ 394 ] ; xx [
14 ] = xx [ 397 ] ; xx [ 15 ] = xx [ 400 ] ; xx [ 29 ] = xx [ 403 ] ; xx [ 30
] = xx [ 406 ] ; xx [ 31 ] = xx [ 409 ] ; xx [ 21 ] = xx [ 136 ] - (
pm_math_Vector3_dot_ra ( xx + 13 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
29 , xx + 3 ) ) ; xx [ 13 ] = xx [ 395 ] ; xx [ 14 ] = xx [ 398 ] ; xx [ 15 ]
= xx [ 401 ] ; xx [ 29 ] = xx [ 404 ] ; xx [ 30 ] = xx [ 407 ] ; xx [ 31 ] =
xx [ 410 ] ; xx [ 26 ] = xx [ 137 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx
+ 23 ) + pm_math_Vector3_dot_ra ( xx + 29 , xx + 3 ) ) ; xx [ 13 ] = xx [ 297
] ; xx [ 14 ] = xx [ 300 ] ; xx [ 15 ] = xx [ 303 ] ; xx [ 29 ] = xx [ 23 ] +
xx [ 200 ] * xx [ 20 ] + xx [ 336 ] * xx [ 21 ] + xx [ 71 ] * xx [ 26 ] + xx
[ 79 ] ; xx [ 30 ] = xx [ 24 ] + xx [ 198 ] * xx [ 20 ] + xx [ 337 ] * xx [
21 ] + xx [ 61 ] * xx [ 26 ] + xx [ 84 ] ; xx [ 31 ] = xx [ 25 ] + xx [ 60 ]
* xx [ 20 ] + xx [ 338 ] * xx [ 21 ] + xx [ 59 ] * xx [ 26 ] + xx [ 76 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 29 , xx + 23 ) ; xx [ 32
] = xx [ 306 ] ; xx [ 33 ] = xx [ 309 ] ; xx [ 34 ] = xx [ 312 ] ;
pm_math_Vector3_cross_ra ( xx + 29 , xx + 142 , xx + 35 ) ; xx [ 29 ] = xx [
3 ] + xx [ 259 ] * xx [ 20 ] + xx [ 339 ] * xx [ 21 ] + xx [ 322 ] * xx [ 26
] + xx [ 72 ] + xx [ 35 ] ; xx [ 30 ] = xx [ 4 ] + xx [ 260 ] * xx [ 20 ] +
xx [ 340 ] * xx [ 21 ] - xx [ 323 ] * xx [ 26 ] + xx [ 75 ] + xx [ 36 ] ; xx
[ 31 ] = xx [ 5 ] + xx [ 261 ] * xx [ 20 ] + xx [ 341 ] * xx [ 21 ] - xx [
351 ] * xx [ 26 ] + xx [ 77 ] + xx [ 37 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 29 , xx + 3 ) ; xx [ 27
] = xx [ 153 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx + 23 ) +
pm_math_Vector3_dot_ra ( xx + 32 , xx + 3 ) ) ; xx [ 13 ] = xx [ 298 ] ; xx [
14 ] = xx [ 301 ] ; xx [ 15 ] = xx [ 304 ] ; xx [ 29 ] = xx [ 307 ] ; xx [ 30
] = xx [ 310 ] ; xx [ 31 ] = xx [ 313 ] ; xx [ 32 ] = xx [ 154 ] - (
pm_math_Vector3_dot_ra ( xx + 13 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
29 , xx + 3 ) ) ; xx [ 13 ] = xx [ 299 ] ; xx [ 14 ] = xx [ 302 ] ; xx [ 15 ]
= xx [ 305 ] ; xx [ 29 ] = xx [ 308 ] ; xx [ 30 ] = xx [ 311 ] ; xx [ 31 ] =
xx [ 314 ] ; xx [ 33 ] = xx [ 155 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx
+ 23 ) + pm_math_Vector3_dot_ra ( xx + 29 , xx + 3 ) ) ; xx [ 34 ] = - xx [
1497 ] ; xx [ 35 ] = - xx [ 1498 ] ; xx [ 36 ] = - xx [ 1499 ] ; xx [ 37 ] =
- xx [ 1500 ] ; xx [ 13 ] = - 8.087791491864314e-4 ; xx [ 14 ] = -
0.03184199395310722 ; xx [ 15 ] = - 0.09278522210579221 ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 13 , xx + 29 ) ; xx [ 38 ] =
0.079 ; xx [ 39 ] = 0.8864576416015625 ; xx [ 40 ] = 0.9993181225840584 ; xx
[ 41 ] = 0.03619150900402053 ; xx [ 42 ] = 5.246456256884902e-3 ; xx [ 43 ] =
5.093058789132701e-3 ; pm_math_Quaternion_compose_ra ( xx + 34 , xx + 40 , xx
+ 44 ) ; xx [ 40 ] = ( xx [ 45 ] * xx [ 47 ] + xx [ 44 ] * xx [ 46 ] ) * xx [
12 ] ; xx [ 41 ] = 0.99999999999999 ; bb [ 0 ] = fabs ( xx [ 40 ] ) > xx [ 41
] ; xx [ 42 ] = xx [ 46 ] * xx [ 47 ] ; xx [ 43 ] = xx [ 44 ] * xx [ 45 ] ;
xx [ 49 ] = xx [ 44 ] * xx [ 44 ] ; xx [ 50 ] = ( xx [ 49 ] + xx [ 46 ] * xx
[ 46 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 51 ] = ( xx [ 42 ] + xx [ 43 ] ) * xx
[ 12 ] ; xx [ 50 ] = ( xx [ 51 ] == 0.0 && xx [ 50 ] == 0.0 ) ? 0.0 : atan2 (
xx [ 51 ] , xx [ 50 ] ) ; xx [ 51 ] = ( xx [ 49 ] + xx [ 47 ] * xx [ 47 ] ) *
xx [ 12 ] - xx [ 1 ] ; xx [ 52 ] = - ( xx [ 12 ] * ( xx [ 42 ] - xx [ 43 ] )
) ; xx [ 51 ] = ( xx [ 52 ] == 0.0 && xx [ 51 ] == 0.0 ) ? 0.0 : atan2 ( xx [
52 ] , xx [ 51 ] ) ; xx [ 42 ] = bb [ 0 ] ? xx [ 2 ] * xx [ 50 ] : xx [ 51 ]
; xx [ 43 ] = 1.570796326794897 ; xx [ 50 ] = ( ( cos ( state [ 91 ] ) ) <
0.0 ? - 1.0 : + 1.0 ) ; xx [ 51 ] = xx [ 43 ] * ( xx [ 1 ] - xx [ 50 ] ) ; if
( xx [ 40 ] < 0.0 ) xx [ 52 ] = - 1.0 ; else if ( xx [ 40 ] > 0.0 ) xx [ 52 ]
= + 1.0 ; else xx [ 52 ] = 0.0 ; xx [ 53 ] = fabs ( xx [ 40 ] ) > 1.0 ? atan2
( xx [ 40 ] , 0.0 ) : asin ( xx [ 40 ] ) ; xx [ 40 ] = bb [ 0 ] ? xx [ 43 ] *
xx [ 52 ] : xx [ 53 ] ; xx [ 53 ] = ( xx [ 49 ] + xx [ 45 ] * xx [ 45 ] ) *
xx [ 12 ] - xx [ 1 ] ; xx [ 55 ] = - ( xx [ 12 ] * ( xx [ 45 ] * xx [ 46 ] -
xx [ 44 ] * xx [ 47 ] ) ) ; xx [ 53 ] = ( xx [ 55 ] == 0.0 && xx [ 53 ] ==
0.0 ) ? 0.0 : atan2 ( xx [ 55 ] , xx [ 53 ] ) ; xx [ 44 ] = bb [ 0 ] ? xx [
52 ] * xx [ 42 ] : xx [ 53 ] ; xx [ 45 ] = xx [ 44 ] - ( xx [ 44 ] < 0.0 ? -
1.0 : + 1.0 ) * xx [ 51 ] ; xx [ 58 ] = xx [ 201 ] + xx [ 8 ] ; xx [ 59 ] =
xx [ 202 ] - xx [ 48 ] ; xx [ 60 ] = xx [ 203 ] - xx [ 57 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 58 , xx + 46 ) ; xx [ 55
] = xx [ 174 ] + xx [ 46 ] + xx [ 210 ] ; xx [ 56 ] = xx [ 175 ] + xx [ 47 ]
+ xx [ 211 ] ; xx [ 57 ] = xx [ 176 ] + xx [ 48 ] + xx [ 212 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 55 , xx + 46 ) ; xx [ 55
] = xx [ 177 ] + xx [ 46 ] + xx [ 191 ] ; xx [ 56 ] = xx [ 178 ] + xx [ 47 ]
+ xx [ 192 ] ; xx [ 57 ] = xx [ 179 ] + xx [ 48 ] + xx [ 193 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 55 , xx + 46 ) ; xx [ 55
] = xx [ 185 ] + xx [ 46 ] + xx [ 180 ] ; xx [ 56 ] = xx [ 186 ] + xx [ 47 ]
+ xx [ 181 ] ; xx [ 57 ] = xx [ 187 ] + xx [ 48 ] + xx [ 182 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 55 , xx + 46 ) ; xx [ 8
] = xx [ 46 ] + xx [ 188 ] ; pm_math_Vector3_cross_ra ( xx + 13 , xx + 920 ,
xx + 55 ) ; xx [ 44 ] = xx [ 47 ] + xx [ 189 ] ; xx [ 46 ] = xx [ 48 ] + xx [
190 ] ; xx [ 47 ] = xx [ 8 ] - xx [ 55 ] ; xx [ 48 ] = xx [ 44 ] - xx [ 56 ]
; xx [ 49 ] = xx [ 46 ] - xx [ 57 ] ; pm_math_Quaternion_xform_ra ( xx + 34 ,
xx + 47 , xx + 55 ) ; xx [ 47 ] = xx [ 1499 ] * xx [ 1499 ] ; xx [ 48 ] = xx
[ 1500 ] * xx [ 1500 ] ; xx [ 49 ] = xx [ 1 ] - ( xx [ 47 ] + xx [ 48 ] ) *
xx [ 12 ] ; xx [ 52 ] = xx [ 1498 ] * xx [ 1499 ] ; xx [ 53 ] = xx [ 1497 ] *
xx [ 1500 ] ; xx [ 58 ] = xx [ 52 ] - xx [ 53 ] ; xx [ 59 ] = xx [ 12 ] * xx
[ 58 ] ; xx [ 60 ] = xx [ 1497 ] * xx [ 1499 ] ; xx [ 61 ] = xx [ 1498 ] * xx
[ 1500 ] ; xx [ 62 ] = xx [ 60 ] + xx [ 61 ] ; xx [ 63 ] = xx [ 62 ] * xx [
12 ] ; xx [ 64 ] = xx [ 49 ] ; xx [ 65 ] = xx [ 59 ] ; xx [ 66 ] = xx [ 63 ]
; xx [ 67 ] = pm_math_Vector3_dot_ra ( xx + 920 , xx + 64 ) ; xx [ 68 ] =
0.01085440859974902 ; xx [ 69 ] = 0.07228022064246183 ; xx [ 70 ] =
0.997325298745513 ; xx [ 71 ] = xx [ 68 ] ; xx [ 72 ] = - xx [ 69 ] ; xx [ 73
] = xx [ 70 ] ; xx [ 74 ] = pm_math_Vector3_dot_ra ( xx + 64 , xx + 71 ) ; xx
[ 75 ] = xx [ 1 ] - xx [ 74 ] * xx [ 74 ] ; xx [ 76 ] = xx [ 75 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 920 , xx + 71 ) - xx [ 67 ] * xx [ 74 ]
) / xx [ 75 ] ; xx [ 77 ] = xx [ 67 ] - xx [ 74 ] * xx [ 76 ] ; xx [ 78 ] =
xx [ 2 ] * xx [ 45 ] ; xx [ 79 ] = sin ( xx [ 78 ] ) ; xx [ 82 ] = cos ( xx [
78 ] ) ; xx [ 83 ] = xx [ 68 ] * xx [ 79 ] ; xx [ 84 ] = - ( xx [ 69 ] * xx [
79 ] ) ; xx [ 85 ] = xx [ 70 ] * xx [ 79 ] ; xx [ 78 ] = -
9.799417557012156e-3 ; xx [ 79 ] = 0.9973284708563647 ; xx [ 80 ] =
0.07238710268306554 ; pm_math_Quaternion_inverseXform_ra ( xx + 82 , xx + 78
, xx + 86 ) ; xx [ 78 ] = pm_math_Vector3_dot_ra ( xx + 920 , xx + 86 ) ; xx
[ 79 ] = xx [ 3 ] + xx [ 204 ] * xx [ 27 ] + xx [ 244 ] * xx [ 32 ] - xx [
208 ] * xx [ 33 ] + xx [ 100 ] ; xx [ 3 ] = xx [ 19 ] * xx [ 1498 ] ; xx [ 80
] = xx [ 19 ] * xx [ 1499 ] ; xx [ 82 ] = xx [ 12 ] * ( xx [ 1500 ] * xx [ 3
] - xx [ 1497 ] * xx [ 80 ] ) ; xx [ 83 ] = xx [ 8 ] ; xx [ 84 ] = xx [ 44 ]
; xx [ 85 ] = xx [ 46 ] ; pm_math_Vector3_cross_ra ( xx + 920 , xx + 83 , xx
+ 89 ) ; xx [ 83 ] = xx [ 77 ] * xx [ 49 ] ; xx [ 84 ] = xx [ 59 ] * xx [ 77
] ; xx [ 85 ] = xx [ 63 ] * xx [ 77 ] ; pm_math_Vector3_cross_ra ( xx + 920 ,
xx + 83 , xx + 92 ) ; xx [ 83 ] = xx [ 68 ] * xx [ 76 ] ; xx [ 84 ] = - ( xx
[ 69 ] * xx [ 76 ] ) ; xx [ 85 ] = xx [ 70 ] * xx [ 76 ] ; xx [ 68 ] = xx [
78 ] * xx [ 86 ] ; xx [ 69 ] = xx [ 78 ] * xx [ 87 ] ; xx [ 70 ] = xx [ 78 ]
* xx [ 88 ] ; pm_math_Vector3_cross_ra ( xx + 83 , xx + 68 , xx + 95 ) ; xx [
68 ] = xx [ 92 ] + xx [ 95 ] ; xx [ 69 ] = xx [ 93 ] + xx [ 96 ] ; xx [ 70 ]
= xx [ 94 ] + xx [ 97 ] ; xx [ 83 ] = - xx [ 68 ] ; xx [ 84 ] = - xx [ 69 ] ;
xx [ 85 ] = - xx [ 70 ] ; pm_math_Vector3_cross_ra ( xx + 13 , xx + 83 , xx +
92 ) ; xx [ 83 ] = xx [ 53 ] + xx [ 52 ] ; xx [ 52 ] = xx [ 61 ] - xx [ 60 ]
; xx [ 53 ] = xx [ 1498 ] * xx [ 1498 ] ; xx [ 60 ] = xx [ 1 ] - ( xx [ 48 ]
+ xx [ 53 ] ) * xx [ 12 ] ; xx [ 48 ] = xx [ 1497 ] * xx [ 1498 ] ; xx [ 61 ]
= xx [ 1499 ] * xx [ 1500 ] ; xx [ 84 ] = xx [ 48 ] + xx [ 61 ] ; xx [ 85 ] =
xx [ 61 ] - xx [ 48 ] ; xx [ 48 ] = xx [ 1 ] - ( xx [ 53 ] + xx [ 47 ] ) * xx
[ 12 ] ; xx [ 95 ] = xx [ 55 ] * xx [ 49 ] + xx [ 12 ] * xx [ 83 ] * xx [ 56
] + xx [ 12 ] * xx [ 57 ] * xx [ 52 ] ; xx [ 96 ] = xx [ 12 ] * xx [ 55 ] *
xx [ 58 ] + xx [ 56 ] * xx [ 60 ] + xx [ 12 ] * xx [ 84 ] * xx [ 57 ] ; xx [
97 ] = xx [ 12 ] * xx [ 62 ] * xx [ 55 ] + xx [ 12 ] * xx [ 56 ] * xx [ 85 ]
+ xx [ 57 ] * xx [ 48 ] ; pm_math_Vector3_cross_ra ( xx + 920 , xx + 95 , xx
+ 108 ) ; xx [ 47 ] = xx [ 23 ] + xx [ 194 ] * xx [ 27 ] + xx [ 241 ] * xx [
32 ] + xx [ 99 ] * xx [ 33 ] + xx [ 113 ] ; xx [ 23 ] = xx [ 24 ] + xx [ 173
] * xx [ 27 ] + xx [ 242 ] * xx [ 32 ] - xx [ 101 ] * xx [ 33 ] + xx [ 129 ]
; xx [ 24 ] = xx [ 25 ] + xx [ 81 ] * xx [ 27 ] + xx [ 243 ] * xx [ 32 ] + xx
[ 103 ] * xx [ 33 ] + xx [ 106 ] ; xx [ 95 ] = xx [ 47 ] + xx [ 68 ] ; xx [
96 ] = xx [ 23 ] + xx [ 69 ] ; xx [ 97 ] = xx [ 24 ] + xx [ 70 ] ;
pm_math_Vector3_cross_ra ( xx + 13 , xx + 95 , xx + 68 ) ; xx [ 13 ] = xx [ 4
] + xx [ 205 ] * xx [ 27 ] + xx [ 245 ] * xx [ 32 ] - xx [ 209 ] * xx [ 33 ]
+ xx [ 105 ] ; xx [ 4 ] = ( xx [ 1497 ] * xx [ 3 ] + xx [ 1500 ] * xx [ 80 ]
) * xx [ 12 ] ; xx [ 14 ] = xx [ 5 ] + xx [ 206 ] * xx [ 27 ] + xx [ 246 ] *
xx [ 32 ] + xx [ 237 ] * xx [ 33 ] + xx [ 107 ] ; xx [ 5 ] = ( xx [ 1498 ] *
xx [ 3 ] + xx [ 1499 ] * xx [ 80 ] ) * xx [ 12 ] ; xx [ 98 ] = xx [ 79 ] - (
xx [ 82 ] + xx [ 89 ] + xx [ 92 ] - xx [ 108 ] ) - xx [ 68 ] ; xx [ 99 ] = xx
[ 13 ] - ( xx [ 4 ] + xx [ 90 ] + xx [ 93 ] - xx [ 109 ] ) - xx [ 69 ] ; xx [
100 ] = xx [ 14 ] - ( xx [ 91 ] + xx [ 94 ] - xx [ 110 ] - xx [ 5 ] + xx [ 19
] ) - xx [ 70 ] ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 98 , xx + 68 )
; xx [ 3 ] = pm_math_Vector3_dot_ra ( xx + 95 , xx + 64 ) ; xx [ 15 ] = xx [
75 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 95 , xx + 71 ) - xx [ 3 ]
* xx [ 74 ] ) / xx [ 75 ] ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 923
, xx + 71 ) ; xx [ 98 ] = xx [ 112 ] ; xx [ 99 ] = - xx [ 118 ] ; xx [ 100 ]
= xx [ 130 ] ; xx [ 101 ] = xx [ 171 ] ; pm_math_Quaternion_compose_ra ( xx +
34 , xx + 98 , xx + 102 ) ; xx [ 25 ] = ( xx [ 103 ] * xx [ 105 ] + xx [ 102
] * xx [ 104 ] ) * xx [ 12 ] ; bb [ 0 ] = fabs ( xx [ 25 ] ) > xx [ 41 ] ; xx
[ 41 ] = xx [ 104 ] * xx [ 105 ] ; xx [ 53 ] = xx [ 102 ] * xx [ 103 ] ; xx [
61 ] = xx [ 102 ] * xx [ 102 ] ; xx [ 75 ] = ( xx [ 61 ] + xx [ 104 ] * xx [
104 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 80 ] = ( xx [ 41 ] + xx [ 53 ] ) * xx [
12 ] ; xx [ 75 ] = ( xx [ 80 ] == 0.0 && xx [ 75 ] == 0.0 ) ? 0.0 : atan2 (
xx [ 80 ] , xx [ 75 ] ) ; xx [ 80 ] = ( xx [ 61 ] + xx [ 105 ] * xx [ 105 ] )
* xx [ 12 ] - xx [ 1 ] ; xx [ 81 ] = - ( xx [ 12 ] * ( xx [ 41 ] - xx [ 53 ]
) ) ; xx [ 80 ] = ( xx [ 81 ] == 0.0 && xx [ 80 ] == 0.0 ) ? 0.0 : atan2 ( xx
[ 81 ] , xx [ 80 ] ) ; xx [ 41 ] = bb [ 0 ] ? xx [ 2 ] * xx [ 75 ] : xx [ 80
] ; xx [ 53 ] = ( ( cos ( state [ 97 ] ) ) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 75
] = xx [ 43 ] * ( xx [ 1 ] - xx [ 53 ] ) ; if ( xx [ 25 ] < 0.0 ) xx [ 80 ] =
- 1.0 ; else if ( xx [ 25 ] > 0.0 ) xx [ 80 ] = + 1.0 ; else xx [ 80 ] = 0.0
; xx [ 81 ] = fabs ( xx [ 25 ] ) > 1.0 ? atan2 ( xx [ 25 ] , 0.0 ) : asin (
xx [ 25 ] ) ; xx [ 25 ] = bb [ 0 ] ? xx [ 43 ] * xx [ 80 ] : xx [ 81 ] ; xx [
43 ] = ( xx [ 61 ] + xx [ 103 ] * xx [ 103 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [
81 ] = - ( xx [ 12 ] * ( xx [ 103 ] * xx [ 104 ] - xx [ 102 ] * xx [ 105 ] )
) ; xx [ 43 ] = ( xx [ 81 ] == 0.0 && xx [ 43 ] == 0.0 ) ? 0.0 : atan2 ( xx [
81 ] , xx [ 43 ] ) ; xx [ 61 ] = bb [ 0 ] ? xx [ 80 ] * xx [ 41 ] : xx [ 43 ]
; xx [ 43 ] = xx [ 61 ] - ( xx [ 61 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 75 ] ;
pm_math_Vector3_cross_ra ( xx + 923 , xx + 920 , xx + 92 ) ; xx [ 98 ] = xx [
8 ] - xx [ 92 ] ; xx [ 99 ] = xx [ 44 ] - xx [ 93 ] ; xx [ 100 ] = xx [ 46 ]
- xx [ 94 ] ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 98 , xx + 92 ) ;
xx [ 8 ] = 8.043376237938261e-3 ; xx [ 44 ] = 0.1806770170184598 ; xx [ 46 ]
= 0.9835095930493033 ; xx [ 98 ] = xx [ 8 ] ; xx [ 99 ] = xx [ 44 ] ; xx [
100 ] = xx [ 46 ] ; xx [ 61 ] = pm_math_Vector3_dot_ra ( xx + 64 , xx + 98 )
; xx [ 80 ] = xx [ 1 ] - xx [ 61 ] * xx [ 61 ] ; xx [ 1 ] = xx [ 80 ] == 0.0
? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 920 , xx + 98 ) - xx [ 67 ] * xx [ 61
] ) / xx [ 80 ] ; xx [ 81 ] = xx [ 67 ] - xx [ 61 ] * xx [ 1 ] ; xx [ 67 ] =
xx [ 2 ] * xx [ 43 ] ; xx [ 2 ] = sin ( xx [ 67 ] ) ; xx [ 101 ] = cos ( xx [
67 ] ) ; xx [ 102 ] = xx [ 8 ] * xx [ 2 ] ; xx [ 103 ] = xx [ 44 ] * xx [ 2 ]
; xx [ 104 ] = xx [ 46 ] * xx [ 2 ] ; xx [ 105 ] = - 0.0122127338954861 ; xx
[ 106 ] = 0.9834858029469102 ; xx [ 107 ] = - 0.180572767970891 ;
pm_math_Quaternion_inverseXform_ra ( xx + 101 , xx + 105 , xx + 108 ) ; xx [
2 ] = pm_math_Vector3_dot_ra ( xx + 920 , xx + 108 ) ; xx [ 101 ] = xx [ 81 ]
* xx [ 49 ] ; xx [ 102 ] = xx [ 59 ] * xx [ 81 ] ; xx [ 103 ] = xx [ 63 ] *
xx [ 81 ] ; pm_math_Vector3_cross_ra ( xx + 920 , xx + 101 , xx + 104 ) ; xx
[ 101 ] = xx [ 8 ] * xx [ 1 ] ; xx [ 102 ] = xx [ 44 ] * xx [ 1 ] ; xx [ 103
] = xx [ 46 ] * xx [ 1 ] ; xx [ 111 ] = xx [ 2 ] * xx [ 108 ] ; xx [ 112 ] =
xx [ 2 ] * xx [ 109 ] ; xx [ 113 ] = xx [ 2 ] * xx [ 110 ] ;
pm_math_Vector3_cross_ra ( xx + 101 , xx + 111 , xx + 114 ) ; xx [ 8 ] = xx [
104 ] + xx [ 114 ] ; xx [ 44 ] = xx [ 105 ] + xx [ 115 ] ; xx [ 46 ] = xx [
106 ] + xx [ 116 ] ; xx [ 101 ] = - xx [ 8 ] ; xx [ 102 ] = - xx [ 44 ] ; xx
[ 103 ] = - xx [ 46 ] ; pm_math_Vector3_cross_ra ( xx + 923 , xx + 101 , xx +
104 ) ; xx [ 101 ] = xx [ 92 ] * xx [ 49 ] + xx [ 12 ] * xx [ 83 ] * xx [ 93
] + xx [ 12 ] * xx [ 94 ] * xx [ 52 ] ; xx [ 102 ] = xx [ 12 ] * xx [ 92 ] *
xx [ 58 ] + xx [ 93 ] * xx [ 60 ] + xx [ 12 ] * xx [ 84 ] * xx [ 94 ] ; xx [
103 ] = xx [ 12 ] * xx [ 62 ] * xx [ 92 ] + xx [ 12 ] * xx [ 93 ] * xx [ 85 ]
+ xx [ 94 ] * xx [ 48 ] ; pm_math_Vector3_cross_ra ( xx + 920 , xx + 101 , xx
+ 58 ) ; xx [ 83 ] = xx [ 47 ] + xx [ 8 ] ; xx [ 84 ] = xx [ 23 ] + xx [ 44 ]
; xx [ 85 ] = xx [ 24 ] + xx [ 46 ] ; pm_math_Vector3_cross_ra ( xx + 923 ,
xx + 83 , xx + 46 ) ; xx [ 101 ] = xx [ 79 ] - ( xx [ 82 ] + xx [ 89 ] + xx [
104 ] - xx [ 58 ] ) - xx [ 46 ] ; xx [ 102 ] = xx [ 13 ] - ( xx [ 4 ] + xx [
90 ] + xx [ 105 ] - xx [ 59 ] ) - xx [ 47 ] ; xx [ 103 ] = xx [ 14 ] - ( xx [
91 ] + xx [ 106 ] - xx [ 60 ] - xx [ 5 ] + xx [ 19 ] ) - xx [ 48 ] ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 101 , xx + 12 ) ; xx [ 4 ] =
pm_math_Vector3_dot_ra ( xx + 83 , xx + 64 ) ; xx [ 5 ] = xx [ 80 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 83 , xx + 98 ) - xx [ 4 ] * xx [ 61 ] )
/ xx [ 80 ] ; logVector [ 0 ] = xx [ 0 ] * state [ 0 ] ; logVector [ 1 ] = xx
[ 0 ] * state [ 1 ] ; logVector [ 2 ] = xx [ 0 ] * state [ 2 ] ; logVector [
3 ] = xx [ 0 ] * state [ 3 ] ; logVector [ 4 ] = xx [ 0 ] * state [ 4 ] ;
logVector [ 5 ] = xx [ 0 ] * state [ 5 ] ; logVector [ 6 ] = xx [ 0 ] * state
[ 6 ] ; logVector [ 7 ] = xx [ 0 ] * state [ 7 ] ; logVector [ 8 ] = xx [ 0 ]
* state [ 8 ] ; logVector [ 9 ] = xx [ 0 ] * state [ 9 ] ; logVector [ 10 ] =
xx [ 0 ] * state [ 10 ] ; logVector [ 11 ] = xx [ 0 ] * state [ 11 ] ;
logVector [ 12 ] = xx [ 0 ] * state [ 12 ] ; logVector [ 13 ] = xx [ 0 ] *
state [ 13 ] ; logVector [ 14 ] = xx [ 0 ] * state [ 14 ] ; logVector [ 15 ]
= xx [ 0 ] * state [ 15 ] ; logVector [ 16 ] = xx [ 0 ] * state [ 16 ] ;
logVector [ 17 ] = xx [ 0 ] * state [ 17 ] ; logVector [ 18 ] = xx [ 0 ] *
state [ 18 ] ; logVector [ 19 ] = xx [ 0 ] * state [ 19 ] ; logVector [ 20 ]
= xx [ 0 ] * state [ 20 ] ; logVector [ 21 ] = xx [ 0 ] * state [ 21 ] ;
logVector [ 22 ] = xx [ 0 ] * state [ 22 ] ; logVector [ 23 ] = xx [ 0 ] *
state [ 23 ] ; logVector [ 24 ] = xx [ 0 ] * state [ 24 ] ; logVector [ 25 ]
= xx [ 0 ] * state [ 25 ] ; logVector [ 26 ] = xx [ 0 ] * state [ 26 ] ;
logVector [ 27 ] = xx [ 0 ] * state [ 27 ] ; logVector [ 28 ] = xx [ 0 ] *
state [ 28 ] ; logVector [ 29 ] = xx [ 0 ] * state [ 29 ] ; logVector [ 30 ]
= xx [ 0 ] * state [ 30 ] ; logVector [ 31 ] = xx [ 0 ] * state [ 31 ] ;
logVector [ 32 ] = xx [ 0 ] * state [ 32 ] ; logVector [ 33 ] = xx [ 0 ] *
state [ 33 ] ; logVector [ 34 ] = xx [ 0 ] * state [ 34 ] ; logVector [ 35 ]
= xx [ 0 ] * state [ 35 ] ; logVector [ 36 ] = xx [ 0 ] * state [ 36 ] ;
logVector [ 37 ] = xx [ 0 ] * state [ 37 ] ; logVector [ 38 ] = xx [ 0 ] *
state [ 38 ] ; logVector [ 39 ] = xx [ 0 ] * state [ 39 ] ; logVector [ 40 ]
= xx [ 0 ] * state [ 40 ] ; logVector [ 41 ] = xx [ 0 ] * state [ 41 ] ;
logVector [ 42 ] = xx [ 0 ] * state [ 42 ] ; logVector [ 43 ] = xx [ 0 ] *
state [ 43 ] ; logVector [ 44 ] = xx [ 0 ] * state [ 44 ] ; logVector [ 45 ]
= xx [ 0 ] * state [ 45 ] ; logVector [ 46 ] = xx [ 0 ] * state [ 46 ] ;
logVector [ 47 ] = xx [ 0 ] * state [ 47 ] ; logVector [ 48 ] = xx [ 0 ] *
state [ 48 ] ; logVector [ 49 ] = xx [ 0 ] * state [ 49 ] ; logVector [ 50 ]
= xx [ 0 ] * state [ 50 ] ; logVector [ 51 ] = xx [ 0 ] * state [ 51 ] ;
logVector [ 52 ] = xx [ 0 ] * state [ 52 ] ; logVector [ 53 ] = xx [ 0 ] *
state [ 53 ] ; logVector [ 54 ] = xx [ 0 ] * state [ 54 ] ; logVector [ 55 ]
= xx [ 0 ] * state [ 55 ] ; logVector [ 56 ] = xx [ 0 ] * state [ 56 ] ;
logVector [ 57 ] = xx [ 0 ] * state [ 57 ] ; logVector [ 58 ] = xx [ 0 ] *
state [ 58 ] ; logVector [ 59 ] = xx [ 0 ] * state [ 59 ] ; logVector [ 60 ]
= xx [ 0 ] * state [ 60 ] ; logVector [ 61 ] = xx [ 0 ] * state [ 61 ] ;
logVector [ 62 ] = xx [ 0 ] * state [ 62 ] ; logVector [ 63 ] = xx [ 0 ] *
state [ 63 ] ; logVector [ 64 ] = xx [ 0 ] * state [ 64 ] ; logVector [ 65 ]
= xx [ 0 ] * state [ 65 ] ; logVector [ 66 ] = xx [ 0 ] * state [ 66 ] ;
logVector [ 67 ] = xx [ 0 ] * state [ 67 ] ; logVector [ 68 ] = xx [ 0 ] *
state [ 68 ] ; logVector [ 69 ] = xx [ 0 ] * state [ 69 ] ; logVector [ 70 ]
= xx [ 0 ] * state [ 70 ] ; logVector [ 71 ] = xx [ 0 ] * state [ 71 ] ;
logVector [ 72 ] = xx [ 0 ] * state [ 72 ] ; logVector [ 73 ] = xx [ 0 ] *
state [ 73 ] ; logVector [ 74 ] = xx [ 0 ] * state [ 74 ] ; logVector [ 75 ]
= xx [ 0 ] * state [ 75 ] ; logVector [ 76 ] = xx [ 0 ] * state [ 76 ] ;
logVector [ 77 ] = xx [ 0 ] * state [ 77 ] ; logVector [ 78 ] = xx [ 0 ] *
state [ 78 ] ; logVector [ 79 ] = xx [ 0 ] * state [ 79 ] ; logVector [ 80 ]
= xx [ 0 ] * state [ 80 ] ; logVector [ 81 ] = xx [ 0 ] * state [ 81 ] ;
logVector [ 82 ] = xx [ 0 ] * state [ 82 ] ; logVector [ 83 ] = xx [ 0 ] *
state [ 83 ] ; logVector [ 84 ] = xx [ 0 ] * state [ 84 ] ; logVector [ 85 ]
= xx [ 0 ] * state [ 85 ] ; logVector [ 86 ] = xx [ 0 ] * state [ 86 ] ;
logVector [ 87 ] = xx [ 0 ] * state [ 87 ] ; logVector [ 88 ] = xx [ 0 ] *
state [ 88 ] ; logVector [ 89 ] = xx [ 0 ] * state [ 89 ] ; logVector [ 90 ]
= xx [ 0 ] * xx [ 7 ] ; logVector [ 91 ] = xx [ 0 ] * xx [ 11 ] ; logVector [
92 ] = xx [ 0 ] * xx [ 22 ] ; logVector [ 93 ] = xx [ 0 ] * xx [ 6 ] ;
logVector [ 94 ] = xx [ 0 ] * xx [ 9 ] ; logVector [ 95 ] = xx [ 0 ] * xx [
10 ] ; logVector [ 96 ] = xx [ 0 ] * xx [ 16 ] ; logVector [ 97 ] = xx [ 0 ]
* xx [ 17 ] ; logVector [ 98 ] = xx [ 0 ] * xx [ 18 ] ; logVector [ 99 ] = xx
[ 0 ] * xx [ 20 ] ; logVector [ 100 ] = xx [ 0 ] * xx [ 21 ] ; logVector [
101 ] = xx [ 0 ] * xx [ 26 ] ; logVector [ 102 ] = xx [ 0 ] * xx [ 27 ] ;
logVector [ 103 ] = xx [ 0 ] * xx [ 32 ] ; logVector [ 104 ] = xx [ 0 ] * xx
[ 33 ] ; logVector [ 105 ] = xx [ 0 ] * inputDdot [ 52 ] ; logVector [ 106 ]
= xx [ 0 ] * inputDdot [ 53 ] ; logVector [ 107 ] = xx [ 0 ] * inputDdot [ 54
] ; logVector [ 108 ] = xx [ 0 ] * inputDdot [ 25 ] ; logVector [ 109 ] = xx
[ 0 ] * inputDdot [ 26 ] ; logVector [ 110 ] = xx [ 0 ] * inputDdot [ 27 ] ;
logVector [ 111 ] = xx [ 0 ] * inputDdot [ 28 ] ; logVector [ 112 ] = xx [ 0
] * inputDdot [ 29 ] ; logVector [ 113 ] = xx [ 0 ] * inputDdot [ 30 ] ;
logVector [ 114 ] = xx [ 0 ] * inputDdot [ 31 ] ; logVector [ 115 ] = xx [ 0
] * inputDdot [ 32 ] ; logVector [ 116 ] = xx [ 0 ] * inputDdot [ 33 ] ;
logVector [ 117 ] = xx [ 0 ] * inputDdot [ 34 ] ; logVector [ 118 ] = xx [ 0
] * inputDdot [ 35 ] ; logVector [ 119 ] = xx [ 0 ] * inputDdot [ 36 ] ;
logVector [ 120 ] = xx [ 0 ] * inputDdot [ 37 ] ; logVector [ 121 ] = xx [ 0
] * inputDdot [ 38 ] ; logVector [ 122 ] = xx [ 0 ] * inputDdot [ 39 ] ;
logVector [ 123 ] = xx [ 0 ] * inputDdot [ 40 ] ; logVector [ 124 ] = xx [ 0
] * inputDdot [ 41 ] ; logVector [ 125 ] = xx [ 0 ] * inputDdot [ 42 ] ;
logVector [ 126 ] = xx [ 0 ] * inputDdot [ 43 ] ; logVector [ 127 ] = xx [ 0
] * inputDdot [ 44 ] ; logVector [ 128 ] = xx [ 0 ] * inputDdot [ 45 ] ;
logVector [ 129 ] = xx [ 0 ] * inputDdot [ 46 ] ; logVector [ 130 ] = xx [ 0
] * inputDdot [ 47 ] ; logVector [ 131 ] = xx [ 0 ] * inputDdot [ 48 ] ;
logVector [ 132 ] = xx [ 0 ] * inputDdot [ 49 ] ; logVector [ 133 ] = xx [ 0
] * inputDdot [ 50 ] ; logVector [ 134 ] = xx [ 0 ] * inputDdot [ 51 ] ;
logVector [ 135 ] = xx [ 649 ] + xx [ 29 ] ; logVector [ 136 ] = xx [ 652 ] +
xx [ 30 ] - xx [ 38 ] ; logVector [ 137 ] = xx [ 1443 ] + xx [ 31 ] - xx [ 39
] ; logVector [ 138 ] = ( state [ 90 ] + pm_math_canonicalAngle ( xx [ 42 ] -
( xx [ 42 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 51 ] - state [ 90 ] ) ) * xx [ 0 ]
; logVector [ 139 ] = ( state [ 91 ] + pm_math_canonicalAngle ( xx [ 50 ] *
xx [ 40 ] + ( xx [ 40 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 51 ] - state [ 91 ] )
) * xx [ 0 ] ; logVector [ 140 ] = ( state [ 92 ] + pm_math_canonicalAngle (
xx [ 45 ] - state [ 92 ] ) ) * xx [ 0 ] ; logVector [ 141 ] = xx [ 55 ] ;
logVector [ 142 ] = xx [ 56 ] ; logVector [ 143 ] = xx [ 57 ] ; logVector [
144 ] = xx [ 0 ] * xx [ 77 ] ; logVector [ 145 ] = xx [ 78 ] * xx [ 0 ] ;
logVector [ 146 ] = xx [ 0 ] * xx [ 76 ] ; logVector [ 147 ] = xx [ 68 ] ;
logVector [ 148 ] = xx [ 69 ] ; logVector [ 149 ] = xx [ 70 ] ; logVector [
150 ] = xx [ 0 ] * ( xx [ 3 ] - xx [ 74 ] * xx [ 15 ] ) ; logVector [ 151 ] =
pm_math_Vector3_dot_ra ( xx + 95 , xx + 86 ) * xx [ 0 ] ; logVector [ 152 ] =
xx [ 0 ] * xx [ 15 ] ; logVector [ 153 ] = xx [ 649 ] + xx [ 71 ] ; logVector
[ 154 ] = xx [ 652 ] + xx [ 72 ] - xx [ 38 ] ; logVector [ 155 ] = xx [ 1443
] + xx [ 73 ] - xx [ 39 ] ; logVector [ 156 ] = ( state [ 96 ] +
pm_math_canonicalAngle ( xx [ 41 ] - ( xx [ 41 ] < 0.0 ? - 1.0 : + 1.0 ) * xx
[ 75 ] - state [ 96 ] ) ) * xx [ 0 ] ; logVector [ 157 ] = ( state [ 97 ] +
pm_math_canonicalAngle ( xx [ 53 ] * xx [ 25 ] + ( xx [ 25 ] < 0.0 ? - 1.0 :
+ 1.0 ) * xx [ 75 ] - state [ 97 ] ) ) * xx [ 0 ] ; logVector [ 158 ] = (
state [ 98 ] + pm_math_canonicalAngle ( xx [ 43 ] - state [ 98 ] ) ) * xx [ 0
] ; logVector [ 159 ] = xx [ 92 ] ; logVector [ 160 ] = xx [ 93 ] ; logVector
[ 161 ] = xx [ 94 ] ; logVector [ 162 ] = xx [ 0 ] * xx [ 81 ] ; logVector [
163 ] = xx [ 2 ] * xx [ 0 ] ; logVector [ 164 ] = xx [ 0 ] * xx [ 1 ] ;
logVector [ 165 ] = xx [ 12 ] ; logVector [ 166 ] = xx [ 13 ] ; logVector [
167 ] = xx [ 14 ] ; logVector [ 168 ] = xx [ 0 ] * ( xx [ 4 ] - xx [ 61 ] *
xx [ 5 ] ) ; logVector [ 169 ] = pm_math_Vector3_dot_ra ( xx + 83 , xx + 108
) * xx [ 0 ] ; logVector [ 170 ] = xx [ 0 ] * xx [ 5 ] ; errorResult [ 0 ] =
xx [ 854 ] + xx [ 786 ] + xx [ 720 ] + xx [ 629 ] + xx [ 659 ] + xx [ 799 ] +
xx [ 736 ] + xx [ 620 ] + xx [ 660 ] + xx [ 674 ] + xx [ 812 ] + xx [ 747 ] +
xx [ 668 ] + xx [ 663 ] + xx [ 672 ] + xx [ 1455 ] + xx [ 655 ] + xx [ 1467 ]
+ xx [ 658 ] + xx [ 1514 ] + xx [ 895 ] + xx [ 1449 ] + xx [ 893 ] + xx [ 131
] + xx [ 119 ] + xx [ 54 ] + xx [ 28 ] + xx [ 706 ] ; return NULL ; }
