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
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; boolean_T bb [ 2 ]
; int ii [ 2 ] ; double xx [ 1608 ] ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) eqnEnableFlags ; ( void ) modeVector ; ( void ) inputDot ; ( void )
inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; ( void ) derivErr ;
xx [ 0 ] = 1.0 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 2 ] ; xx [ 3
] = cos ( xx [ 2 ] ) ; xx [ 4 ] = 0.1535761481414752 ; xx [ 5 ] = xx [ 1 ] *
state [ 0 ] ; xx [ 6 ] = cos ( xx [ 5 ] ) ; xx [ 7 ] = 0.9881368157912284 ;
xx [ 8 ] = sin ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 4 ] * xx [ 6 ] - xx [ 7 ] * xx
[ 8 ] ; xx [ 9 ] = 0.258564134865625 ; xx [ 10 ] = xx [ 1 ] * state [ 1 ] ;
xx [ 11 ] = sin ( xx [ 10 ] ) ; xx [ 12 ] = xx [ 9 ] * xx [ 11 ] ; xx [ 13 ]
= 0.9659940932330751 ; xx [ 14 ] = xx [ 13 ] * xx [ 11 ] ; xx [ 11 ] = xx [ 7
] * xx [ 6 ] + xx [ 4 ] * xx [ 8 ] ; xx [ 4 ] = xx [ 5 ] * xx [ 12 ] - xx [
14 ] * xx [ 11 ] ; xx [ 6 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 9 ] * xx [ 6
] ; xx [ 7 ] = cos ( xx [ 10 ] ) ; xx [ 8 ] = xx [ 7 ] * xx [ 11 ] ; xx [ 10
] = xx [ 5 ] * xx [ 7 ] ; xx [ 7 ] = xx [ 13 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 3
] * xx [ 4 ] - xx [ 2 ] * xx [ 8 ] - xx [ 10 ] * xx [ 7 ] ; xx [ 15 ] = xx [
12 ] * xx [ 11 ] + xx [ 5 ] * xx [ 14 ] ; xx [ 5 ] = xx [ 15 ] * xx [ 3 ] -
xx [ 7 ] * xx [ 8 ] + xx [ 10 ] * xx [ 2 ] ; xx [ 11 ] = 2.0 ; xx [ 12 ] = xx
[ 0 ] - ( xx [ 6 ] * xx [ 6 ] + xx [ 5 ] * xx [ 5 ] ) * xx [ 11 ] ; xx [ 14 ]
= xx [ 3 ] * xx [ 10 ] + xx [ 7 ] * xx [ 4 ] - xx [ 15 ] * xx [ 2 ] ; xx [ 10
] = xx [ 3 ] * xx [ 8 ] + xx [ 2 ] * xx [ 4 ] + xx [ 15 ] * xx [ 7 ] ; xx [ 4
] = xx [ 11 ] * ( xx [ 14 ] * xx [ 6 ] + xx [ 5 ] * xx [ 10 ] ) ; xx [ 8 ] =
( xx [ 5 ] * xx [ 14 ] - xx [ 6 ] * xx [ 10 ] ) * xx [ 11 ] ; xx [ 15 ] = xx
[ 12 ] ; xx [ 16 ] = xx [ 4 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] =
2.799562800393933e-6 ; xx [ 19 ] = xx [ 1 ] * state [ 8 ] ; xx [ 20 ] = cos (
xx [ 19 ] ) ; xx [ 21 ] = 0.08149234695961537 ; xx [ 22 ] = xx [ 1 ] * state
[ 6 ] ; xx [ 23 ] = sin ( xx [ 22 ] ) ; xx [ 24 ] = 0.9966739674472358 ; xx [
25 ] = cos ( xx [ 22 ] ) ; xx [ 22 ] = 3.301712910522993e-12 ; xx [ 26 ] = xx
[ 21 ] * xx [ 23 ] - xx [ 24 ] * xx [ 25 ] ; xx [ 27 ] = - ( xx [ 21 ] * xx [
25 ] + xx [ 24 ] * xx [ 23 ] ) ; xx [ 28 ] = xx [ 22 ] * xx [ 23 ] ; xx [ 29
] = - ( xx [ 22 ] * xx [ 25 ] ) ; xx [ 21 ] = xx [ 1 ] * state [ 7 ] ; xx [
22 ] = 6.558709267800361e-12 ; xx [ 23 ] = sin ( xx [ 21 ] ) ; xx [ 24 ] =
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
78 ] ) ; xx [ 101 ] = 0.9992594490823861 ; xx [ 102 ] = - 0.03847796017939601
; xx [ 103 ] = 3.657873200514057e-11 ; xx [ 104 ] = 1.959485864323585e-10 ;
pm_math_Quaternion_compose_ra ( xx + 97 , xx + 101 , xx + 105 ) ; xx [ 71 ] =
xx [ 1 ] * state [ 25 ] ; xx [ 78 ] = 4.103512650758317e-10 ; xx [ 82 ] = sin
( xx [ 71 ] ) ; xx [ 83 ] = 0.9994592018341244 ; xx [ 97 ] =
0.03288318520300273 ; xx [ 98 ] = cos ( xx [ 71 ] ) ; xx [ 99 ] = xx [ 78 ] *
xx [ 82 ] ; xx [ 100 ] = xx [ 83 ] * xx [ 82 ] ; xx [ 101 ] = xx [ 97 ] * xx
[ 82 ] ; pm_math_Quaternion_compose_ra ( xx + 105 , xx + 98 , xx + 109 ) ; xx
[ 71 ] = xx [ 1 ] * state [ 26 ] ; xx [ 82 ] = cos ( xx [ 71 ] ) ; xx [ 98 ]
= 6.492504809889092e-11 ; xx [ 99 ] = sin ( xx [ 71 ] ) ; xx [ 71 ] = xx [ 98
] * xx [ 99 ] ; xx [ 100 ] = xx [ 97 ] * xx [ 99 ] ; xx [ 101 ] = xx [ 83 ] *
xx [ 99 ] ; xx [ 102 ] = xx [ 82 ] ; xx [ 103 ] = - xx [ 71 ] ; xx [ 104 ] =
- xx [ 100 ] ; xx [ 105 ] = xx [ 101 ] ; pm_math_Quaternion_compose_ra ( xx +
109 , xx + 102 , xx + 113 ) ; xx [ 99 ] = xx [ 113 ] * xx [ 113 ] ; xx [ 106
] = xx [ 114 ] * xx [ 115 ] ; xx [ 107 ] = xx [ 113 ] * xx [ 116 ] ; xx [ 108
] = xx [ 114 ] * xx [ 116 ] ; xx [ 109 ] = xx [ 113 ] * xx [ 115 ] ; xx [ 110
] = xx [ 115 ] * xx [ 116 ] ; xx [ 111 ] = xx [ 113 ] * xx [ 114 ] ; xx [ 117
] = ( xx [ 99 ] + xx [ 114 ] * xx [ 114 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 118
] = xx [ 11 ] * ( xx [ 106 ] - xx [ 107 ] ) ; xx [ 119 ] = ( xx [ 108 ] + xx
[ 109 ] ) * xx [ 11 ] ; xx [ 120 ] = ( xx [ 106 ] + xx [ 107 ] ) * xx [ 11 ]
; xx [ 121 ] = ( xx [ 99 ] + xx [ 115 ] * xx [ 115 ] ) * xx [ 11 ] - xx [ 0 ]
; xx [ 122 ] = xx [ 11 ] * ( xx [ 110 ] - xx [ 111 ] ) ; xx [ 123 ] = xx [ 11
] * ( xx [ 108 ] - xx [ 109 ] ) ; xx [ 124 ] = ( xx [ 110 ] + xx [ 111 ] ) *
xx [ 11 ] ; xx [ 125 ] = ( xx [ 99 ] + xx [ 116 ] * xx [ 116 ] ) * xx [ 11 ]
- xx [ 0 ] ; xx [ 99 ] = 2.474479576171505e-3 ; xx [ 106 ] = xx [ 80 ] * xx [
116 ] - xx [ 81 ] * xx [ 115 ] ; xx [ 107 ] = xx [ 116 ] + xx [ 81 ] * xx [
114 ] ; xx [ 108 ] = xx [ 80 ] * xx [ 114 ] + xx [ 115 ] ; xx [ 109 ] = xx [
106 ] ; xx [ 110 ] = xx [ 107 ] ; xx [ 111 ] = - xx [ 108 ] ;
pm_math_Vector3_cross_ra ( xx + 114 , xx + 109 , xx + 126 ) ; xx [ 109 ] = xx
[ 0 ] + xx [ 11 ] * ( xx [ 126 ] - xx [ 113 ] * xx [ 106 ] ) ; xx [ 106 ] =
xx [ 11 ] * ( xx [ 127 ] - xx [ 113 ] * xx [ 107 ] ) - xx [ 80 ] ; xx [ 80 ]
= xx [ 11 ] * ( xx [ 128 ] + xx [ 113 ] * xx [ 108 ] ) - xx [ 81 ] ; xx [ 110
] = xx [ 109 ] ; xx [ 111 ] = xx [ 106 ] ; xx [ 112 ] = xx [ 80 ] ; xx [ 81 ]
= xx [ 109 ] * xx [ 99 ] ; xx [ 107 ] = 2.846269496924213e-3 ; xx [ 108 ] =
xx [ 106 ] * xx [ 107 ] ; xx [ 126 ] = 2.053568655742747e-3 ; xx [ 127 ] = xx
[ 80 ] * xx [ 126 ] ; xx [ 128 ] = xx [ 81 ] ; xx [ 129 ] = xx [ 108 ] ; xx [
130 ] = xx [ 127 ] ; xx [ 131 ] = 3.04214492957313e-11 ; xx [ 132 ] = -
0.02935858602823881 ; xx [ 133 ] = - 0.1242654207645331 ;
pm_math_Vector3_cross_ra ( xx + 131 , xx + 110 , xx + 134 ) ; xx [ 137 ] =
0.2418317891768493 ; xx [ 138 ] = xx [ 137 ] * xx [ 134 ] ; xx [ 139 ] = xx [
137 ] * xx [ 135 ] ; xx [ 140 ] = xx [ 137 ] * xx [ 136 ] ; xx [ 141 ] = xx [
82 ] ; xx [ 142 ] = xx [ 71 ] ; xx [ 143 ] = xx [ 100 ] ; xx [ 144 ] = - xx [
101 ] ; xx [ 145 ] = xx [ 78 ] ; xx [ 146 ] = xx [ 83 ] ; xx [ 147 ] = xx [
97 ] ; pm_math_Quaternion_xform_ra ( xx + 141 , xx + 145 , xx + 148 ) ; xx [
71 ] = xx [ 99 ] * xx [ 148 ] ; xx [ 78 ] = xx [ 107 ] * xx [ 149 ] ; xx [ 82
] = xx [ 126 ] * xx [ 150 ] ; xx [ 141 ] = xx [ 71 ] ; xx [ 142 ] = xx [ 78 ]
; xx [ 143 ] = xx [ 82 ] ; pm_math_Vector3_cross_ra ( xx + 131 , xx + 148 ,
xx + 151 ) ; xx [ 100 ] = xx [ 137 ] * xx [ 151 ] ; xx [ 101 ] = xx [ 137 ] *
xx [ 152 ] ; xx [ 144 ] = xx [ 137 ] * xx [ 153 ] ; xx [ 154 ] = xx [ 100 ] ;
xx [ 155 ] = xx [ 101 ] ; xx [ 156 ] = xx [ 144 ] ; xx [ 157 ] =
pm_math_Vector3_dot_ra ( xx + 110 , xx + 141 ) + pm_math_Vector3_dot_ra ( xx
+ 134 , xx + 154 ) ; xx [ 158 ] = 1.606557055026581e-13 ; xx [ 159 ] = - xx [
158 ] ; xx [ 160 ] = 9.35944070050163e-5 ; xx [ 161 ] = - xx [ 160 ] ; xx [
162 ] = 2.052458089580222e-3 ; xx [ 163 ] = xx [ 159 ] ; xx [ 164 ] = xx [
161 ] ; xx [ 165 ] = xx [ 162 ] ; xx [ 166 ] = 8.084183225090049e-3 ; xx [
167 ] = - xx [ 166 ] ; xx [ 168 ] = 5.4018109457199e-12 ; xx [ 169 ] = - xx [
168 ] ; xx [ 170 ] = 7.028748479175273e-13 ; xx [ 171 ] = - xx [ 170 ] ; xx [
172 ] = xx [ 167 ] ; xx [ 173 ] = xx [ 169 ] ; xx [ 174 ] = xx [ 171 ] ; xx [
175 ] = pm_math_Vector3_dot_ra ( xx + 110 , xx + 163 ) +
pm_math_Vector3_dot_ra ( xx + 134 , xx + 172 ) ; xx [ 176 ] =
pm_math_Vector3_dot_ra ( xx + 148 , xx + 163 ) + pm_math_Vector3_dot_ra ( xx
+ 151 , xx + 172 ) ; xx [ 177 ] = pm_math_Vector3_dot_ra ( xx + 110 , xx +
128 ) + pm_math_Vector3_dot_ra ( xx + 134 , xx + 138 ) ; xx [ 178 ] = xx [
157 ] ; xx [ 179 ] = xx [ 175 ] ; xx [ 180 ] = xx [ 157 ] ; xx [ 181 ] =
pm_math_Vector3_dot_ra ( xx + 148 , xx + 141 ) + pm_math_Vector3_dot_ra ( xx
+ 151 , xx + 154 ) ; xx [ 182 ] = xx [ 176 ] ; xx [ 183 ] = xx [ 175 ] ; xx [
184 ] = xx [ 176 ] ; xx [ 185 ] = 2.32467157763633e-3 ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 177 , 3 , xx + 128 ) ; xx [ 128 ] = 0.999999 ;
bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 25 ] ) ) > xx [ 128 ] ; ii [
1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) * derivErr = 1 ; if ( ii [ 0 ] + ii
[ 1 ] != 0 ) * derivErr = 1 ; xx [ 186 ] = xx [ 81 ] ; xx [ 187 ] = xx [ 71 ]
; xx [ 188 ] = xx [ 159 ] ; xx [ 189 ] = xx [ 108 ] ; xx [ 190 ] = xx [ 78 ]
; xx [ 191 ] = xx [ 161 ] ; xx [ 192 ] = xx [ 127 ] ; xx [ 193 ] = xx [ 82 ]
; xx [ 194 ] = xx [ 162 ] ; xx [ 195 ] = xx [ 138 ] ; xx [ 196 ] = xx [ 100 ]
; xx [ 197 ] = xx [ 167 ] ; xx [ 198 ] = xx [ 139 ] ; xx [ 199 ] = xx [ 101 ]
; xx [ 200 ] = xx [ 169 ] ; xx [ 201 ] = xx [ 140 ] ; xx [ 202 ] = xx [ 144 ]
; xx [ 203 ] = xx [ 171 ] ; solveSymmetricPosDef ( xx + 177 , xx + 186 , 3 ,
6 , xx + 204 , xx + 141 ) ; xx [ 129 ] = - ( xx [ 204 ] * xx [ 108 ] + xx [
205 ] * xx [ 78 ] - xx [ 160 ] * xx [ 206 ] ) ; xx [ 130 ] = - ( xx [ 204 ] *
xx [ 127 ] + xx [ 205 ] * xx [ 82 ] + xx [ 162 ] * xx [ 206 ] ) ; xx [ 141 ]
= - ( xx [ 207 ] * xx [ 127 ] + xx [ 208 ] * xx [ 82 ] + xx [ 162 ] * xx [
209 ] ) ; xx [ 186 ] = xx [ 99 ] - ( xx [ 204 ] * xx [ 81 ] + xx [ 205 ] * xx
[ 71 ] - xx [ 158 ] * xx [ 206 ] ) ; xx [ 187 ] = xx [ 129 ] ; xx [ 188 ] =
xx [ 130 ] ; xx [ 189 ] = xx [ 129 ] ; xx [ 190 ] = xx [ 107 ] - ( xx [ 207 ]
* xx [ 108 ] + xx [ 208 ] * xx [ 78 ] - xx [ 160 ] * xx [ 209 ] ) ; xx [ 191
] = xx [ 141 ] ; xx [ 192 ] = xx [ 130 ] ; xx [ 193 ] = xx [ 141 ] ; xx [ 194
] = xx [ 126 ] - ( xx [ 210 ] * xx [ 127 ] + xx [ 211 ] * xx [ 82 ] + xx [
162 ] * xx [ 212 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 186 , xx
+ 117 , xx + 195 ) ; pm_math_Matrix3x3_compose_ra ( xx + 117 , xx + 195 , xx
+ 186 ) ; xx [ 195 ] = - ( xx [ 213 ] * xx [ 81 ] + xx [ 214 ] * xx [ 71 ] -
xx [ 158 ] * xx [ 215 ] ) ; xx [ 196 ] = - ( xx [ 216 ] * xx [ 81 ] + xx [
217 ] * xx [ 71 ] - xx [ 158 ] * xx [ 218 ] ) ; xx [ 197 ] = - ( xx [ 219 ] *
xx [ 81 ] + xx [ 220 ] * xx [ 71 ] - xx [ 158 ] * xx [ 221 ] ) ; xx [ 198 ] =
- ( xx [ 213 ] * xx [ 108 ] + xx [ 214 ] * xx [ 78 ] - xx [ 160 ] * xx [ 215
] ) ; xx [ 199 ] = - ( xx [ 216 ] * xx [ 108 ] + xx [ 217 ] * xx [ 78 ] - xx
[ 160 ] * xx [ 218 ] ) ; xx [ 200 ] = - ( xx [ 219 ] * xx [ 108 ] + xx [ 220
] * xx [ 78 ] - xx [ 160 ] * xx [ 221 ] ) ; xx [ 201 ] = - ( xx [ 213 ] * xx
[ 127 ] + xx [ 214 ] * xx [ 82 ] + xx [ 162 ] * xx [ 215 ] ) ; xx [ 202 ] = -
( xx [ 216 ] * xx [ 127 ] + xx [ 217 ] * xx [ 82 ] + xx [ 162 ] * xx [ 218 ]
) ; xx [ 203 ] = - ( xx [ 219 ] * xx [ 127 ] + xx [ 220 ] * xx [ 82 ] + xx [
162 ] * xx [ 221 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 195 , xx
+ 117 , xx + 222 ) ; pm_math_Matrix3x3_compose_ra ( xx + 117 , xx + 222 , xx
+ 195 ) ; pm_math_Quaternion_xform_ra ( xx + 113 , xx + 131 , xx + 141 ) ; xx
[ 129 ] = 4.855313199912053e-13 - xx [ 141 ] ; xx [ 130 ] =
0.01419776350117569 - xx [ 142 ] ; xx [ 141 ] = 0.0153662351784256 - xx [ 143
] ; xx [ 154 ] = xx [ 129 ] ; xx [ 155 ] = xx [ 130 ] ; xx [ 156 ] = xx [ 141
] ; pm_math_Matrix3x3_postCross_ra ( xx + 195 , xx + 154 , xx + 222 ) ; xx [
142 ] = - ( xx [ 213 ] * xx [ 139 ] + xx [ 214 ] * xx [ 101 ] - xx [ 168 ] *
xx [ 215 ] ) ; xx [ 143 ] = - ( xx [ 213 ] * xx [ 140 ] + xx [ 214 ] * xx [
144 ] - xx [ 170 ] * xx [ 215 ] ) ; xx [ 157 ] = - ( xx [ 216 ] * xx [ 140 ]
+ xx [ 217 ] * xx [ 144 ] - xx [ 170 ] * xx [ 218 ] ) ; xx [ 231 ] = xx [ 137
] - ( xx [ 213 ] * xx [ 138 ] + xx [ 214 ] * xx [ 100 ] - xx [ 166 ] * xx [
215 ] ) ; xx [ 232 ] = xx [ 142 ] ; xx [ 233 ] = xx [ 143 ] ; xx [ 234 ] = xx
[ 142 ] ; xx [ 235 ] = xx [ 137 ] - ( xx [ 216 ] * xx [ 139 ] + xx [ 217 ] *
xx [ 101 ] - xx [ 168 ] * xx [ 218 ] ) ; xx [ 236 ] = xx [ 157 ] ; xx [ 237 ]
= xx [ 143 ] ; xx [ 238 ] = xx [ 157 ] ; xx [ 239 ] = xx [ 137 ] - ( xx [ 219
] * xx [ 140 ] + xx [ 220 ] * xx [ 144 ] - xx [ 170 ] * xx [ 221 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 231 , xx + 117 , xx + 240 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 117 , xx + 240 , xx + 231 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 231 , xx + 154 , xx + 117 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 117 , xx + 154 , xx + 240 ) ; xx [ 142 ]
= xx [ 186 ] - xx [ 222 ] - xx [ 222 ] - xx [ 240 ] ; xx [ 143 ] =
3.133881653570001e-6 ; xx [ 157 ] = xx [ 187 ] - xx [ 223 ] - xx [ 225 ] - xx
[ 241 ] ; xx [ 159 ] = xx [ 188 ] - xx [ 224 ] - xx [ 228 ] - xx [ 242 ] ; xx
[ 161 ] = xx [ 189 ] - xx [ 225 ] - xx [ 223 ] - xx [ 243 ] ; xx [ 163 ] =
1.518811043244711e-6 ; xx [ 164 ] = xx [ 190 ] - xx [ 226 ] - xx [ 226 ] - xx
[ 244 ] ; xx [ 165 ] = xx [ 191 ] - xx [ 227 ] - xx [ 229 ] - xx [ 245 ] ; xx
[ 167 ] = xx [ 192 ] - xx [ 228 ] - xx [ 224 ] - xx [ 246 ] ; xx [ 169 ] = xx
[ 193 ] - xx [ 229 ] - xx [ 227 ] - xx [ 247 ] ; xx [ 171 ] =
3.515161026289992e-6 ; xx [ 172 ] = xx [ 194 ] - xx [ 230 ] - xx [ 230 ] - xx
[ 248 ] ; xx [ 186 ] = xx [ 143 ] + xx [ 142 ] ; xx [ 187 ] = xx [ 157 ] ; xx
[ 188 ] = xx [ 159 ] ; xx [ 189 ] = xx [ 161 ] ; xx [ 190 ] = xx [ 163 ] + xx
[ 164 ] ; xx [ 191 ] = xx [ 165 ] ; xx [ 192 ] = xx [ 167 ] ; xx [ 193 ] = xx
[ 169 ] ; xx [ 194 ] = xx [ 171 ] + xx [ 172 ] ; xx [ 173 ] = xx [ 59 ] * xx
[ 87 ] ; xx [ 174 ] = xx [ 59 ] * xx [ 85 ] - xx [ 86 ] ; xx [ 222 ] = - xx [
173 ] ; xx [ 223 ] = xx [ 87 ] ; xx [ 224 ] = xx [ 174 ] ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 222 , xx + 225 ) ; xx [ 175 ] = xx
[ 0 ] + ( xx [ 84 ] * xx [ 173 ] + xx [ 225 ] ) * xx [ 11 ] ; xx [ 173 ] = xx
[ 59 ] + xx [ 11 ] * ( xx [ 226 ] - xx [ 79 ] ) ; xx [ 59 ] = xx [ 11 ] * (
xx [ 227 ] - xx [ 84 ] * xx [ 174 ] ) ; xx [ 222 ] = xx [ 175 ] ; xx [ 223 ]
= xx [ 173 ] ; xx [ 224 ] = xx [ 59 ] ; pm_math_Matrix3x3_xform_ra ( xx + 186
, xx + 222 , xx + 225 ) ; xx [ 79 ] = xx [ 195 ] - xx [ 117 ] ; xx [ 117 ] =
xx [ 196 ] - xx [ 120 ] ; xx [ 120 ] = xx [ 197 ] - xx [ 123 ] ; xx [ 123 ] =
xx [ 198 ] - xx [ 118 ] ; xx [ 118 ] = xx [ 199 ] - xx [ 121 ] ; xx [ 121 ] =
xx [ 200 ] - xx [ 124 ] ; xx [ 124 ] = xx [ 201 ] - xx [ 119 ] ; xx [ 119 ] =
xx [ 202 ] - xx [ 122 ] ; xx [ 122 ] = xx [ 203 ] - xx [ 125 ] ; xx [ 195 ] =
xx [ 79 ] ; xx [ 196 ] = xx [ 117 ] ; xx [ 197 ] = xx [ 120 ] ; xx [ 198 ] =
xx [ 123 ] ; xx [ 199 ] = xx [ 118 ] ; xx [ 200 ] = xx [ 121 ] ; xx [ 201 ] =
xx [ 124 ] ; xx [ 202 ] = xx [ 119 ] ; xx [ 203 ] = xx [ 122 ] ; xx [ 228 ] =
2.484784205278315e-13 ; xx [ 229 ] = 0.01055813361575447 ; xx [ 230 ] = -
0.01718904409441589 ; pm_math_Vector3_cross_ra ( xx + 228 , xx + 222 , xx +
240 ) ; pm_math_Matrix3x3_xform_ra ( xx + 195 , xx + 240 , xx + 243 ) ; xx [
125 ] = xx [ 225 ] + xx [ 243 ] ; xx [ 174 ] = xx [ 226 ] + xx [ 244 ] ; xx [
176 ] = xx [ 227 ] + xx [ 245 ] ; xx [ 225 ] = xx [ 125 ] ; xx [ 226 ] = xx [
174 ] ; xx [ 227 ] = xx [ 176 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx +
195 , xx + 222 , xx + 243 ) ; xx [ 246 ] = 7.704043062217087e-3 ; xx [ 247 ]
= xx [ 246 ] + xx [ 231 ] ; xx [ 248 ] = xx [ 232 ] ; xx [ 249 ] = xx [ 233 ]
; xx [ 250 ] = xx [ 234 ] ; xx [ 251 ] = xx [ 246 ] + xx [ 235 ] ; xx [ 252 ]
= xx [ 236 ] ; xx [ 253 ] = xx [ 237 ] ; xx [ 254 ] = xx [ 238 ] ; xx [ 255 ]
= xx [ 246 ] + xx [ 239 ] ; pm_math_Matrix3x3_xform_ra ( xx + 247 , xx + 240
, xx + 256 ) ; xx [ 259 ] = xx [ 243 ] + xx [ 256 ] ; xx [ 260 ] = xx [ 244 ]
+ xx [ 257 ] ; xx [ 243 ] = xx [ 245 ] + xx [ 258 ] ; xx [ 256 ] = xx [ 259 ]
; xx [ 257 ] = xx [ 260 ] ; xx [ 258 ] = xx [ 243 ] ; xx [ 261 ] = xx [ 57 ]
; xx [ 262 ] = - xx [ 51 ] ; xx [ 263 ] = - xx [ 72 ] ; xx [ 264 ] = - xx [
73 ] ; xx [ 265 ] = xx [ 54 ] ; xx [ 266 ] = xx [ 58 ] ; xx [ 267 ] = - xx [
60 ] ; pm_math_Quaternion_xform_ra ( xx + 261 , xx + 265 , xx + 268 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 186 , xx + 268 , xx + 261 ) ;
pm_math_Vector3_cross_ra ( xx + 228 , xx + 268 , xx + 271 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 195 , xx + 271 , xx + 274 ) ; xx [ 51 ] =
xx [ 261 ] + xx [ 274 ] ; xx [ 54 ] = xx [ 262 ] + xx [ 275 ] ; xx [ 57 ] =
xx [ 263 ] + xx [ 276 ] ; xx [ 261 ] = xx [ 51 ] ; xx [ 262 ] = xx [ 54 ] ;
xx [ 263 ] = xx [ 57 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 195 , xx
+ 268 , xx + 274 ) ; pm_math_Matrix3x3_xform_ra ( xx + 247 , xx + 271 , xx +
277 ) ; xx [ 72 ] = xx [ 274 ] + xx [ 277 ] ; xx [ 73 ] = xx [ 275 ] + xx [
278 ] ; xx [ 244 ] = xx [ 276 ] + xx [ 279 ] ; xx [ 274 ] = xx [ 72 ] ; xx [
275 ] = xx [ 73 ] ; xx [ 276 ] = xx [ 244 ] ; xx [ 245 ] =
pm_math_Vector3_dot_ra ( xx + 222 , xx + 261 ) + pm_math_Vector3_dot_ra ( xx
+ 240 , xx + 274 ) ; xx [ 277 ] = xx [ 70 ] ; xx [ 278 ] = xx [ 60 ] ; xx [
279 ] = xx [ 58 ] ; pm_math_Matrix3x3_xform_ra ( xx + 186 , xx + 277 , xx +
280 ) ; xx [ 264 ] = 0.01512320370375 ; xx [ 283 ] = 4.156663728609323e-13 ;
xx [ 284 ] = 3.670194404924682e-14 ; xx [ 285 ] = xx [ 264 ] ; xx [ 286 ] = -
xx [ 283 ] ; xx [ 287 ] = - xx [ 284 ] ; pm_math_Matrix3x3_xform_ra ( xx +
195 , xx + 285 , xx + 288 ) ; xx [ 291 ] = xx [ 280 ] + xx [ 288 ] ; xx [ 292
] = xx [ 281 ] + xx [ 289 ] ; xx [ 280 ] = xx [ 282 ] + xx [ 290 ] ; xx [ 288
] = xx [ 291 ] ; xx [ 289 ] = xx [ 292 ] ; xx [ 290 ] = xx [ 280 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 195 , xx + 277 , xx + 293 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 247 , xx + 285 , xx + 296 ) ; xx [ 281 ] =
xx [ 293 ] + xx [ 296 ] ; xx [ 282 ] = xx [ 294 ] + xx [ 297 ] ; xx [ 293 ] =
xx [ 295 ] + xx [ 298 ] ; xx [ 294 ] = xx [ 281 ] ; xx [ 295 ] = xx [ 282 ] ;
xx [ 296 ] = xx [ 293 ] ; xx [ 297 ] = pm_math_Vector3_dot_ra ( xx + 222 , xx
+ 288 ) + pm_math_Vector3_dot_ra ( xx + 240 , xx + 294 ) ; xx [ 298 ] =
pm_math_Vector3_dot_ra ( xx + 268 , xx + 288 ) + pm_math_Vector3_dot_ra ( xx
+ 271 , xx + 294 ) ; xx [ 299 ] = pm_math_Vector3_dot_ra ( xx + 222 , xx +
225 ) + pm_math_Vector3_dot_ra ( xx + 240 , xx + 256 ) ; xx [ 300 ] = xx [
245 ] ; xx [ 301 ] = xx [ 297 ] ; xx [ 302 ] = xx [ 245 ] ; xx [ 303 ] =
pm_math_Vector3_dot_ra ( xx + 268 , xx + 261 ) + pm_math_Vector3_dot_ra ( xx
+ 271 , xx + 274 ) ; xx [ 304 ] = xx [ 298 ] ; xx [ 305 ] = xx [ 297 ] ; xx [
306 ] = xx [ 298 ] ; xx [ 307 ] = pm_math_Vector3_dot_ra ( xx + 277 , xx +
288 ) + pm_math_Vector3_dot_ra ( xx + 285 , xx + 294 ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 299 , 3 , xx + 225 ) ; bb [ 0 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 19 ] ) ) > xx [ 128 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ;
if ( bb [ 0 ] ) * derivErr = 1 ; if ( ii [ 0 ] + ii [ 1 ] != 0 ) * derivErr =
1 ; xx [ 308 ] = xx [ 125 ] ; xx [ 309 ] = xx [ 51 ] ; xx [ 310 ] = xx [ 291
] ; xx [ 311 ] = xx [ 174 ] ; xx [ 312 ] = xx [ 54 ] ; xx [ 313 ] = xx [ 292
] ; xx [ 314 ] = xx [ 176 ] ; xx [ 315 ] = xx [ 57 ] ; xx [ 316 ] = xx [ 280
] ; xx [ 317 ] = xx [ 259 ] ; xx [ 318 ] = xx [ 72 ] ; xx [ 319 ] = xx [ 281
] ; xx [ 320 ] = xx [ 260 ] ; xx [ 321 ] = xx [ 73 ] ; xx [ 322 ] = xx [ 282
] ; xx [ 323 ] = xx [ 243 ] ; xx [ 324 ] = xx [ 244 ] ; xx [ 325 ] = xx [ 293
] ; solveSymmetricPosDef ( xx + 299 , xx + 308 , 3 , 6 , xx + 326 , xx + 225
) ; xx [ 225 ] = xx [ 174 ] * xx [ 326 ] + xx [ 54 ] * xx [ 327 ] + xx [ 292
] * xx [ 328 ] ; xx [ 226 ] = xx [ 176 ] * xx [ 326 ] + xx [ 57 ] * xx [ 327
] + xx [ 280 ] * xx [ 328 ] ; xx [ 227 ] = xx [ 176 ] * xx [ 329 ] + xx [ 57
] * xx [ 330 ] + xx [ 280 ] * xx [ 331 ] ; xx [ 308 ] = xx [ 142 ] - ( xx [
125 ] * xx [ 326 ] + xx [ 51 ] * xx [ 327 ] + xx [ 291 ] * xx [ 328 ] ) + xx
[ 143 ] ; xx [ 309 ] = xx [ 157 ] - xx [ 225 ] ; xx [ 310 ] = xx [ 159 ] - xx
[ 226 ] ; xx [ 311 ] = xx [ 161 ] - xx [ 225 ] ; xx [ 312 ] = xx [ 164 ] - (
xx [ 174 ] * xx [ 329 ] + xx [ 54 ] * xx [ 330 ] + xx [ 292 ] * xx [ 331 ] )
+ xx [ 163 ] ; xx [ 313 ] = xx [ 165 ] - xx [ 227 ] ; xx [ 314 ] = xx [ 167 ]
- xx [ 226 ] ; xx [ 315 ] = xx [ 169 ] - xx [ 227 ] ; xx [ 316 ] = xx [ 172 ]
- ( xx [ 176 ] * xx [ 332 ] + xx [ 57 ] * xx [ 333 ] + xx [ 280 ] * xx [ 334
] ) + xx [ 171 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 308 , xx + 88
, xx + 317 ) ; pm_math_Matrix3x3_compose_ra ( xx + 88 , xx + 317 , xx + 308 )
; xx [ 317 ] = xx [ 79 ] - ( xx [ 125 ] * xx [ 335 ] + xx [ 51 ] * xx [ 336 ]
+ xx [ 291 ] * xx [ 337 ] ) ; xx [ 318 ] = xx [ 117 ] - ( xx [ 125 ] * xx [
338 ] + xx [ 51 ] * xx [ 339 ] + xx [ 291 ] * xx [ 340 ] ) ; xx [ 319 ] = xx
[ 120 ] - ( xx [ 125 ] * xx [ 341 ] + xx [ 51 ] * xx [ 342 ] + xx [ 291 ] *
xx [ 343 ] ) ; xx [ 320 ] = xx [ 123 ] - ( xx [ 174 ] * xx [ 335 ] + xx [ 54
] * xx [ 336 ] + xx [ 292 ] * xx [ 337 ] ) ; xx [ 321 ] = xx [ 118 ] - ( xx [
174 ] * xx [ 338 ] + xx [ 54 ] * xx [ 339 ] + xx [ 292 ] * xx [ 340 ] ) ; xx
[ 322 ] = xx [ 121 ] - ( xx [ 174 ] * xx [ 341 ] + xx [ 54 ] * xx [ 342 ] +
xx [ 292 ] * xx [ 343 ] ) ; xx [ 323 ] = xx [ 124 ] - ( xx [ 176 ] * xx [ 335
] + xx [ 57 ] * xx [ 336 ] + xx [ 280 ] * xx [ 337 ] ) ; xx [ 324 ] = xx [
119 ] - ( xx [ 176 ] * xx [ 338 ] + xx [ 57 ] * xx [ 339 ] + xx [ 280 ] * xx
[ 340 ] ) ; xx [ 325 ] = xx [ 122 ] - ( xx [ 176 ] * xx [ 341 ] + xx [ 57 ] *
xx [ 342 ] + xx [ 280 ] * xx [ 343 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 317 , xx + 88 , xx + 344 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 88 , xx + 344 , xx + 317 ) ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 228 , xx + 117 ) ; xx [ 79 ] =
7.111565911668068e-14 + xx [ 117 ] ; xx [ 120 ] = 0.01482354797278426 - xx [
118 ] ; xx [ 117 ] = 0.01597192626903846 - xx [ 119 ] ; xx [ 121 ] = - xx [
79 ] ; xx [ 122 ] = xx [ 120 ] ; xx [ 123 ] = xx [ 117 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 317 , xx + 121 , xx + 344 ) ; xx [ 118
] = xx [ 260 ] * xx [ 335 ] + xx [ 73 ] * xx [ 336 ] + xx [ 282 ] * xx [ 337
] ; xx [ 119 ] = xx [ 243 ] * xx [ 335 ] + xx [ 244 ] * xx [ 336 ] + xx [ 293
] * xx [ 337 ] ; xx [ 124 ] = xx [ 243 ] * xx [ 338 ] + xx [ 244 ] * xx [ 339
] + xx [ 293 ] * xx [ 340 ] ; xx [ 353 ] = xx [ 231 ] - ( xx [ 259 ] * xx [
335 ] + xx [ 72 ] * xx [ 336 ] + xx [ 281 ] * xx [ 337 ] ) + xx [ 246 ] ; xx
[ 354 ] = xx [ 232 ] - xx [ 118 ] ; xx [ 355 ] = xx [ 233 ] - xx [ 119 ] ; xx
[ 356 ] = xx [ 234 ] - xx [ 118 ] ; xx [ 357 ] = xx [ 235 ] - ( xx [ 260 ] *
xx [ 338 ] + xx [ 73 ] * xx [ 339 ] + xx [ 282 ] * xx [ 340 ] ) + xx [ 246 ]
; xx [ 358 ] = xx [ 236 ] - xx [ 124 ] ; xx [ 359 ] = xx [ 237 ] - xx [ 119 ]
; xx [ 360 ] = xx [ 238 ] - xx [ 124 ] ; xx [ 361 ] = xx [ 239 ] - ( xx [ 243
] * xx [ 341 ] + xx [ 244 ] * xx [ 342 ] + xx [ 293 ] * xx [ 343 ] ) + xx [
246 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 353 , xx + 88 , xx + 231
) ; pm_math_Matrix3x3_compose_ra ( xx + 88 , xx + 231 , xx + 353 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 353 , xx + 121 , xx + 88 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 88 , xx + 121 , xx + 231 ) ; xx [ 118 ]
= xx [ 308 ] - xx [ 344 ] - xx [ 344 ] - xx [ 231 ] ; xx [ 119 ] =
3.395310932053464e-6 ; xx [ 124 ] = xx [ 309 ] - xx [ 345 ] - xx [ 347 ] - xx
[ 232 ] ; xx [ 142 ] = xx [ 310 ] - xx [ 346 ] - xx [ 350 ] - xx [ 233 ] ; xx
[ 157 ] = xx [ 311 ] - xx [ 347 ] - xx [ 345 ] - xx [ 234 ] ; xx [ 159 ] =
1.744065755080617e-6 ; xx [ 161 ] = xx [ 159 ] + xx [ 312 ] - xx [ 348 ] - xx
[ 348 ] - xx [ 235 ] ; xx [ 164 ] = xx [ 313 ] - xx [ 349 ] - xx [ 351 ] - xx
[ 236 ] ; xx [ 165 ] = xx [ 314 ] - xx [ 350 ] - xx [ 346 ] - xx [ 237 ] ; xx
[ 167 ] = xx [ 315 ] - xx [ 351 ] - xx [ 349 ] - xx [ 238 ] ; xx [ 169 ] =
3.911790730232107e-6 ; xx [ 172 ] = xx [ 169 ] + xx [ 316 ] - xx [ 352 ] - xx
[ 352 ] - xx [ 239 ] ; xx [ 231 ] = xx [ 119 ] + xx [ 118 ] ; xx [ 232 ] = xx
[ 124 ] ; xx [ 233 ] = xx [ 142 ] ; xx [ 234 ] = xx [ 157 ] ; xx [ 235 ] = xx
[ 161 ] ; xx [ 236 ] = xx [ 164 ] ; xx [ 237 ] = xx [ 165 ] ; xx [ 238 ] = xx
[ 167 ] ; xx [ 239 ] = xx [ 172 ] ; xx [ 225 ] = xx [ 52 ] ; xx [ 226 ] = xx
[ 53 ] ; xx [ 227 ] = xx [ 55 ] ; xx [ 245 ] = xx [ 55 ] * xx [ 50 ] ; xx [
256 ] = xx [ 50 ] * xx [ 52 ] + xx [ 53 ] ; xx [ 261 ] = xx [ 245 ] ; xx [
262 ] = xx [ 55 ] ; xx [ 263 ] = - xx [ 256 ] ; pm_math_Vector3_cross_ra ( xx
+ 225 , xx + 261 , xx + 274 ) ; xx [ 225 ] = xx [ 0 ] + ( xx [ 274 ] - xx [
245 ] * xx [ 31 ] ) * xx [ 11 ] ; xx [ 226 ] = xx [ 11 ] * ( xx [ 275 ] - xx
[ 56 ] ) - xx [ 50 ] ; xx [ 50 ] = xx [ 11 ] * ( xx [ 276 ] + xx [ 31 ] * xx
[ 256 ] ) ; xx [ 256 ] = xx [ 225 ] ; xx [ 257 ] = xx [ 226 ] ; xx [ 258 ] =
xx [ 50 ] ; pm_math_Matrix3x3_xform_ra ( xx + 231 , xx + 256 , xx + 261 ) ;
xx [ 56 ] = xx [ 317 ] - xx [ 88 ] ; xx [ 88 ] = xx [ 318 ] - xx [ 91 ] ; xx
[ 91 ] = xx [ 319 ] - xx [ 94 ] ; xx [ 94 ] = xx [ 320 ] - xx [ 89 ] ; xx [
89 ] = xx [ 321 ] - xx [ 92 ] ; xx [ 92 ] = xx [ 322 ] - xx [ 95 ] ; xx [ 95
] = xx [ 323 ] - xx [ 90 ] ; xx [ 90 ] = xx [ 324 ] - xx [ 93 ] ; xx [ 93 ] =
xx [ 325 ] - xx [ 96 ] ; xx [ 308 ] = xx [ 56 ] ; xx [ 309 ] = xx [ 88 ] ; xx
[ 310 ] = xx [ 91 ] ; xx [ 311 ] = xx [ 94 ] ; xx [ 312 ] = xx [ 89 ] ; xx [
313 ] = xx [ 92 ] ; xx [ 314 ] = xx [ 95 ] ; xx [ 315 ] = xx [ 90 ] ; xx [
316 ] = xx [ 93 ] ; xx [ 274 ] = - 3.478043091554657e-14 ; xx [ 275 ] =
8.616599387917045e-3 ; xx [ 276 ] = - 0.01781379291801384 ;
pm_math_Vector3_cross_ra ( xx + 274 , xx + 256 , xx + 288 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 308 , xx + 288 , xx + 294 ) ; xx [ 96 ] =
xx [ 261 ] + xx [ 294 ] ; xx [ 227 ] = xx [ 262 ] + xx [ 295 ] ; xx [ 245 ] =
xx [ 263 ] + xx [ 296 ] ; xx [ 261 ] = xx [ 96 ] ; xx [ 262 ] = xx [ 227 ] ;
xx [ 263 ] = xx [ 245 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 308 , xx
+ 256 , xx + 294 ) ; xx [ 297 ] = 8.355848350904705e-3 ; xx [ 317 ] = xx [
297 ] + xx [ 353 ] ; xx [ 318 ] = xx [ 354 ] ; xx [ 319 ] = xx [ 355 ] ; xx [
320 ] = xx [ 356 ] ; xx [ 321 ] = xx [ 297 ] + xx [ 357 ] ; xx [ 322 ] = xx [
358 ] ; xx [ 323 ] = xx [ 359 ] ; xx [ 324 ] = xx [ 360 ] ; xx [ 325 ] = xx [
297 ] + xx [ 361 ] ; pm_math_Matrix3x3_xform_ra ( xx + 317 , xx + 288 , xx +
344 ) ; xx [ 298 ] = xx [ 294 ] + xx [ 344 ] ; xx [ 347 ] = xx [ 295 ] + xx [
345 ] ; xx [ 294 ] = xx [ 296 ] + xx [ 346 ] ; xx [ 344 ] = xx [ 298 ] ; xx [
345 ] = xx [ 347 ] ; xx [ 346 ] = xx [ 294 ] ; xx [ 295 ] = xx [ 49 ] * xx [
26 ] ; xx [ 296 ] = xx [ 48 ] * xx [ 37 ] ; xx [ 348 ] = xx [ 295 ] + xx [
296 ] ; xx [ 349 ] = xx [ 36 ] * xx [ 26 ] ; xx [ 350 ] = xx [ 36 ] * xx [ 37
] ; xx [ 351 ] = xx [ 349 ] * xx [ 26 ] + xx [ 350 ] * xx [ 37 ] ; xx [ 352 ]
= xx [ 11 ] * ( xx [ 29 ] * xx [ 348 ] + xx [ 351 ] ) - xx [ 36 ] ; xx [ 362
] = xx [ 29 ] * xx [ 350 ] ; xx [ 350 ] = xx [ 48 ] + ( xx [ 362 ] - xx [ 37
] * xx [ 348 ] ) * xx [ 11 ] ; xx [ 363 ] = xx [ 29 ] * xx [ 349 ] ; xx [ 349
] = xx [ 49 ] + ( xx [ 363 ] - xx [ 26 ] * xx [ 348 ] ) * xx [ 11 ] ; xx [
364 ] = xx [ 352 ] ; xx [ 365 ] = xx [ 350 ] ; xx [ 366 ] = - xx [ 349 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 231 , xx + 364 , xx + 367 ) ;
pm_math_Vector3_cross_ra ( xx + 274 , xx + 364 , xx + 370 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 308 , xx + 370 , xx + 373 ) ; xx [ 348 ] =
xx [ 367 ] + xx [ 373 ] ; xx [ 376 ] = xx [ 368 ] + xx [ 374 ] ; xx [ 367 ] =
xx [ 369 ] + xx [ 375 ] ; xx [ 373 ] = xx [ 348 ] ; xx [ 374 ] = xx [ 376 ] ;
xx [ 375 ] = xx [ 367 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 308 , xx
+ 364 , xx + 377 ) ; pm_math_Matrix3x3_xform_ra ( xx + 317 , xx + 370 , xx +
380 ) ; xx [ 368 ] = xx [ 377 ] + xx [ 380 ] ; xx [ 369 ] = xx [ 378 ] + xx [
381 ] ; xx [ 377 ] = xx [ 379 ] + xx [ 382 ] ; xx [ 378 ] = xx [ 368 ] ; xx [
379 ] = xx [ 369 ] ; xx [ 380 ] = xx [ 377 ] ; xx [ 381 ] =
pm_math_Vector3_dot_ra ( xx + 256 , xx + 373 ) + pm_math_Vector3_dot_ra ( xx
+ 288 , xx + 378 ) ; xx [ 382 ] = 0.0139587874710942 ; xx [ 383 ] =
3.287582437116741e-14 ; xx [ 384 ] = 1.135158784431775e-14 ; xx [ 385 ] = xx
[ 382 ] ; xx [ 386 ] = xx [ 383 ] ; xx [ 387 ] = - xx [ 384 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 308 , xx + 385 , xx + 388 ) ; xx [ 391 ] =
xx [ 49 ] * xx [ 124 ] + xx [ 48 ] * xx [ 142 ] + xx [ 388 ] ; xx [ 392 ] =
xx [ 161 ] * xx [ 49 ] + xx [ 48 ] * xx [ 164 ] + xx [ 389 ] ; xx [ 388 ] =
xx [ 49 ] * xx [ 167 ] + xx [ 172 ] * xx [ 48 ] + xx [ 390 ] ; xx [ 393 ] =
xx [ 391 ] ; xx [ 394 ] = xx [ 392 ] ; xx [ 395 ] = xx [ 388 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 317 , xx + 385 , xx + 396 ) ; xx [ 389 ] =
xx [ 49 ] * xx [ 94 ] + xx [ 48 ] * xx [ 95 ] + xx [ 396 ] ; xx [ 390 ] = xx
[ 49 ] * xx [ 89 ] + xx [ 48 ] * xx [ 90 ] + xx [ 397 ] ; xx [ 396 ] = xx [
49 ] * xx [ 92 ] + xx [ 48 ] * xx [ 93 ] + xx [ 398 ] ; xx [ 397 ] = xx [ 389
] ; xx [ 398 ] = xx [ 390 ] ; xx [ 399 ] = xx [ 396 ] ; xx [ 400 ] =
pm_math_Vector3_dot_ra ( xx + 256 , xx + 393 ) + pm_math_Vector3_dot_ra ( xx
+ 288 , xx + 397 ) ; xx [ 401 ] = pm_math_Vector3_dot_ra ( xx + 364 , xx +
393 ) + pm_math_Vector3_dot_ra ( xx + 370 , xx + 397 ) ; xx [ 402 ] =
pm_math_Vector3_dot_ra ( xx + 256 , xx + 261 ) + pm_math_Vector3_dot_ra ( xx
+ 288 , xx + 344 ) ; xx [ 403 ] = xx [ 381 ] ; xx [ 404 ] = xx [ 400 ] ; xx [
405 ] = xx [ 381 ] ; xx [ 406 ] = pm_math_Vector3_dot_ra ( xx + 364 , xx +
373 ) + pm_math_Vector3_dot_ra ( xx + 370 , xx + 378 ) ; xx [ 407 ] = xx [
401 ] ; xx [ 408 ] = xx [ 400 ] ; xx [ 409 ] = xx [ 401 ] ; xx [ 410 ] = xx [
392 ] * xx [ 49 ] + xx [ 388 ] * xx [ 48 ] + pm_math_Vector3_dot_ra ( xx +
385 , xx + 397 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 402 , 3 , xx + 261
) ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 13 ] ) ) > xx [ 128 ] ;
ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) * derivErr = 1 ; if ( ii [ 0 ]
+ ii [ 1 ] != 0 ) * derivErr = 1 ; xx [ 411 ] = xx [ 96 ] ; xx [ 412 ] = xx [
348 ] ; xx [ 413 ] = xx [ 391 ] ; xx [ 414 ] = xx [ 227 ] ; xx [ 415 ] = xx [
376 ] ; xx [ 416 ] = xx [ 392 ] ; xx [ 417 ] = xx [ 245 ] ; xx [ 418 ] = xx [
367 ] ; xx [ 419 ] = xx [ 388 ] ; xx [ 420 ] = xx [ 298 ] ; xx [ 421 ] = xx [
368 ] ; xx [ 422 ] = xx [ 389 ] ; xx [ 423 ] = xx [ 347 ] ; xx [ 424 ] = xx [
369 ] ; xx [ 425 ] = xx [ 390 ] ; xx [ 426 ] = xx [ 294 ] ; xx [ 427 ] = xx [
377 ] ; xx [ 428 ] = xx [ 396 ] ; solveSymmetricPosDef ( xx + 402 , xx + 411
, 3 , 6 , xx + 429 , xx + 261 ) ; xx [ 261 ] = xx [ 227 ] * xx [ 429 ] + xx [
376 ] * xx [ 430 ] + xx [ 392 ] * xx [ 431 ] ; xx [ 262 ] = xx [ 245 ] * xx [
429 ] + xx [ 367 ] * xx [ 430 ] + xx [ 388 ] * xx [ 431 ] ; xx [ 263 ] = xx [
245 ] * xx [ 432 ] + xx [ 367 ] * xx [ 433 ] + xx [ 388 ] * xx [ 434 ] ; xx [
411 ] = xx [ 118 ] - ( xx [ 96 ] * xx [ 429 ] + xx [ 348 ] * xx [ 430 ] + xx
[ 391 ] * xx [ 431 ] ) + xx [ 119 ] ; xx [ 412 ] = xx [ 124 ] - xx [ 261 ] ;
xx [ 413 ] = xx [ 142 ] - xx [ 262 ] ; xx [ 414 ] = xx [ 157 ] - xx [ 261 ] ;
xx [ 415 ] = xx [ 161 ] - ( xx [ 227 ] * xx [ 432 ] + xx [ 376 ] * xx [ 433 ]
+ xx [ 392 ] * xx [ 434 ] ) ; xx [ 416 ] = xx [ 164 ] - xx [ 263 ] ; xx [ 417
] = xx [ 165 ] - xx [ 262 ] ; xx [ 418 ] = xx [ 167 ] - xx [ 263 ] ; xx [ 419
] = xx [ 172 ] - ( xx [ 245 ] * xx [ 435 ] + xx [ 367 ] * xx [ 436 ] + xx [
388 ] * xx [ 437 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 411 , xx
+ 61 , xx + 420 ) ; pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 420 , xx +
411 ) ; xx [ 420 ] = xx [ 56 ] - ( xx [ 96 ] * xx [ 438 ] + xx [ 348 ] * xx [
439 ] + xx [ 391 ] * xx [ 440 ] ) ; xx [ 421 ] = xx [ 88 ] - ( xx [ 96 ] * xx
[ 441 ] + xx [ 348 ] * xx [ 442 ] + xx [ 391 ] * xx [ 443 ] ) ; xx [ 422 ] =
xx [ 91 ] - ( xx [ 96 ] * xx [ 444 ] + xx [ 348 ] * xx [ 445 ] + xx [ 391 ] *
xx [ 446 ] ) ; xx [ 423 ] = xx [ 94 ] - ( xx [ 227 ] * xx [ 438 ] + xx [ 376
] * xx [ 439 ] + xx [ 392 ] * xx [ 440 ] ) ; xx [ 424 ] = xx [ 89 ] - ( xx [
227 ] * xx [ 441 ] + xx [ 376 ] * xx [ 442 ] + xx [ 392 ] * xx [ 443 ] ) ; xx
[ 425 ] = xx [ 92 ] - ( xx [ 227 ] * xx [ 444 ] + xx [ 376 ] * xx [ 445 ] +
xx [ 392 ] * xx [ 446 ] ) ; xx [ 426 ] = xx [ 95 ] - ( xx [ 245 ] * xx [ 438
] + xx [ 367 ] * xx [ 439 ] + xx [ 388 ] * xx [ 440 ] ) ; xx [ 427 ] = xx [
90 ] - ( xx [ 245 ] * xx [ 441 ] + xx [ 367 ] * xx [ 442 ] + xx [ 388 ] * xx
[ 443 ] ) ; xx [ 428 ] = xx [ 93 ] - ( xx [ 245 ] * xx [ 444 ] + xx [ 367 ] *
xx [ 445 ] + xx [ 388 ] * xx [ 446 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 420 , xx + 61 , xx + 447 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 447 , xx + 420 ) ; xx [ 88 ] =
xx [ 31 ] ; xx [ 89 ] = xx [ 52 ] ; xx [ 90 ] = xx [ 53 ] ; xx [ 91 ] = xx [
55 ] ; pm_math_Quaternion_xform_ra ( xx + 88 , xx + 274 , xx + 92 ) ; xx [ 31
] = 1.222885353421585e-13 - xx [ 92 ] ; xx [ 52 ] = 0.01371330802384472 - xx
[ 93 ] ; xx [ 53 ] = 0.01482112808326479 - xx [ 94 ] ; xx [ 92 ] = xx [ 31 ]
; xx [ 93 ] = xx [ 52 ] ; xx [ 94 ] = xx [ 53 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 420 , xx + 92 , xx + 447 ) ; xx [ 55 ]
= xx [ 347 ] * xx [ 438 ] + xx [ 369 ] * xx [ 439 ] + xx [ 390 ] * xx [ 440 ]
; xx [ 56 ] = xx [ 294 ] * xx [ 438 ] + xx [ 377 ] * xx [ 439 ] + xx [ 396 ]
* xx [ 440 ] ; xx [ 95 ] = xx [ 294 ] * xx [ 441 ] + xx [ 377 ] * xx [ 442 ]
+ xx [ 396 ] * xx [ 443 ] ; xx [ 456 ] = xx [ 353 ] - ( xx [ 298 ] * xx [ 438
] + xx [ 368 ] * xx [ 439 ] + xx [ 389 ] * xx [ 440 ] ) + xx [ 297 ] ; xx [
457 ] = xx [ 354 ] - xx [ 55 ] ; xx [ 458 ] = xx [ 355 ] - xx [ 56 ] ; xx [
459 ] = xx [ 356 ] - xx [ 55 ] ; xx [ 460 ] = xx [ 357 ] - ( xx [ 347 ] * xx
[ 441 ] + xx [ 369 ] * xx [ 442 ] + xx [ 390 ] * xx [ 443 ] ) + xx [ 297 ] ;
xx [ 461 ] = xx [ 358 ] - xx [ 95 ] ; xx [ 462 ] = xx [ 359 ] - xx [ 56 ] ;
xx [ 463 ] = xx [ 360 ] - xx [ 95 ] ; xx [ 464 ] = xx [ 361 ] - ( xx [ 294 ]
* xx [ 444 ] + xx [ 377 ] * xx [ 445 ] + xx [ 396 ] * xx [ 446 ] ) + xx [ 297
] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 456 , xx + 61 , xx + 353 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 353 , xx + 456 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 456 , xx + 92 , xx + 61 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 61 , xx + 92 , xx + 353 ) ; xx [ 55 ] =
xx [ 411 ] - xx [ 447 ] - xx [ 447 ] - xx [ 353 ] ; xx [ 56 ] =
2.872594976382685e-6 ; xx [ 95 ] = xx [ 412 ] - xx [ 448 ] - xx [ 450 ] - xx
[ 354 ] ; xx [ 118 ] = xx [ 413 ] - xx [ 449 ] - xx [ 453 ] - xx [ 355 ] ; xx
[ 124 ] = xx [ 414 ] - xx [ 450 ] - xx [ 448 ] - xx [ 356 ] ; xx [ 142 ] =
1.933045481959352e-6 ; xx [ 157 ] = xx [ 142 ] + xx [ 415 ] - xx [ 451 ] - xx
[ 451 ] - xx [ 357 ] ; xx [ 161 ] = xx [ 416 ] - xx [ 452 ] - xx [ 454 ] - xx
[ 358 ] ; xx [ 164 ] = xx [ 417 ] - xx [ 453 ] - xx [ 449 ] - xx [ 359 ] ; xx
[ 165 ] = xx [ 418 ] - xx [ 454 ] - xx [ 452 ] - xx [ 360 ] ; xx [ 167 ] =
3.740002603775385e-6 ; xx [ 172 ] = xx [ 167 ] + xx [ 419 ] - xx [ 455 ] - xx
[ 455 ] - xx [ 361 ] ; xx [ 353 ] = xx [ 56 ] + xx [ 55 ] ; xx [ 354 ] = xx [
95 ] ; xx [ 355 ] = xx [ 118 ] ; xx [ 356 ] = xx [ 124 ] ; xx [ 357 ] = xx [
157 ] ; xx [ 358 ] = xx [ 161 ] ; xx [ 359 ] = xx [ 164 ] ; xx [ 360 ] = xx [
165 ] ; xx [ 361 ] = xx [ 172 ] ; xx [ 261 ] = xx [ 0 ] - ( xx [ 35 ] + xx [
38 ] ) * xx [ 11 ] ; xx [ 35 ] = ( xx [ 34 ] + xx [ 33 ] ) * xx [ 11 ] ; xx [
344 ] = xx [ 261 ] ; xx [ 345 ] = xx [ 32 ] ; xx [ 346 ] = xx [ 35 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 353 , xx + 344 , xx + 373 ) ; xx [ 33 ] =
xx [ 420 ] - xx [ 61 ] ; xx [ 34 ] = xx [ 421 ] - xx [ 64 ] ; xx [ 38 ] = xx
[ 422 ] - xx [ 67 ] ; xx [ 61 ] = xx [ 423 ] - xx [ 62 ] ; xx [ 62 ] = xx [
424 ] - xx [ 65 ] ; xx [ 64 ] = xx [ 425 ] - xx [ 68 ] ; xx [ 65 ] = xx [ 426
] - xx [ 63 ] ; xx [ 63 ] = xx [ 427 ] - xx [ 66 ] ; xx [ 66 ] = xx [ 428 ] -
xx [ 69 ] ; xx [ 411 ] = xx [ 33 ] ; xx [ 412 ] = xx [ 34 ] ; xx [ 413 ] = xx
[ 38 ] ; xx [ 414 ] = xx [ 61 ] ; xx [ 415 ] = xx [ 62 ] ; xx [ 416 ] = xx [
64 ] ; xx [ 417 ] = xx [ 65 ] ; xx [ 418 ] = xx [ 63 ] ; xx [ 419 ] = xx [ 66
] ; xx [ 67 ] = 6.664202092713185e-14 ; xx [ 68 ] = 6.161981679940124e-3 ; xx
[ 69 ] = - 0.01687376340899878 ; pm_math_Vector3_cross_ra ( xx + 67 , xx +
344 , xx + 378 ) ; pm_math_Matrix3x3_xform_ra ( xx + 411 , xx + 378 , xx +
393 ) ; xx [ 262 ] = xx [ 373 ] + xx [ 393 ] ; xx [ 263 ] = xx [ 374 ] + xx [
394 ] ; xx [ 373 ] = xx [ 375 ] + xx [ 395 ] ; xx [ 393 ] = xx [ 262 ] ; xx [
394 ] = xx [ 263 ] ; xx [ 395 ] = xx [ 373 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 411 , xx + 344 , xx + 397 ) ; xx [
374 ] = 8.201635464916061e-3 ; xx [ 420 ] = xx [ 374 ] + xx [ 456 ] ; xx [
421 ] = xx [ 457 ] ; xx [ 422 ] = xx [ 458 ] ; xx [ 423 ] = xx [ 459 ] ; xx [
424 ] = xx [ 374 ] + xx [ 460 ] ; xx [ 425 ] = xx [ 461 ] ; xx [ 426 ] = xx [
462 ] ; xx [ 427 ] = xx [ 463 ] ; xx [ 428 ] = xx [ 374 ] + xx [ 464 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 420 , xx + 378 , xx + 447 ) ; xx [ 375 ] =
xx [ 397 ] + xx [ 447 ] ; xx [ 381 ] = xx [ 398 ] + xx [ 448 ] ; xx [ 397 ] =
xx [ 399 ] + xx [ 449 ] ; xx [ 398 ] = xx [ 375 ] ; xx [ 399 ] = xx [ 381 ] ;
xx [ 400 ] = xx [ 397 ] ; xx [ 401 ] = xx [ 25 ] * xx [ 19 ] ; xx [ 447 ] =
xx [ 24 ] * xx [ 23 ] ; xx [ 448 ] = xx [ 401 ] + xx [ 447 ] ; xx [ 449 ] =
xx [ 22 ] * xx [ 19 ] ; xx [ 450 ] = xx [ 22 ] * xx [ 23 ] ; xx [ 451 ] = xx
[ 449 ] * xx [ 19 ] + xx [ 450 ] * xx [ 23 ] ; xx [ 452 ] = xx [ 22 ] + xx [
11 ] * ( xx [ 20 ] * xx [ 448 ] - xx [ 451 ] ) ; xx [ 453 ] = xx [ 20 ] * xx
[ 450 ] ; xx [ 450 ] = xx [ 24 ] - ( xx [ 453 ] + xx [ 23 ] * xx [ 448 ] ) *
xx [ 11 ] ; xx [ 454 ] = xx [ 20 ] * xx [ 449 ] ; xx [ 449 ] = ( xx [ 454 ] +
xx [ 19 ] * xx [ 448 ] ) * xx [ 11 ] - xx [ 25 ] ; xx [ 465 ] = xx [ 452 ] ;
xx [ 466 ] = xx [ 450 ] ; xx [ 467 ] = xx [ 449 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 353 , xx + 465 , xx + 468 ) ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 465 , xx + 471 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 411 , xx + 471 , xx + 474 ) ; xx [ 448 ] =
xx [ 468 ] + xx [ 474 ] ; xx [ 455 ] = xx [ 469 ] + xx [ 475 ] ; xx [ 468 ] =
xx [ 470 ] + xx [ 476 ] ; xx [ 474 ] = xx [ 448 ] ; xx [ 475 ] = xx [ 455 ] ;
xx [ 476 ] = xx [ 468 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 411 , xx
+ 465 , xx + 477 ) ; pm_math_Matrix3x3_xform_ra ( xx + 420 , xx + 471 , xx +
480 ) ; xx [ 469 ] = xx [ 477 ] + xx [ 480 ] ; xx [ 470 ] = xx [ 478 ] + xx [
481 ] ; xx [ 477 ] = xx [ 479 ] + xx [ 482 ] ; xx [ 478 ] = xx [ 469 ] ; xx [
479 ] = xx [ 470 ] ; xx [ 480 ] = xx [ 477 ] ; xx [ 481 ] =
pm_math_Vector3_dot_ra ( xx + 344 , xx + 474 ) + pm_math_Vector3_dot_ra ( xx
+ 378 , xx + 478 ) ; xx [ 482 ] = 0.01011063572343469 ; xx [ 483 ] =
6.460835926211764e-14 ; xx [ 484 ] = 1.633765181136557e-14 ; xx [ 485 ] = xx
[ 482 ] ; xx [ 486 ] = - xx [ 483 ] ; xx [ 487 ] = xx [ 484 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 411 , xx + 485 , xx + 488 ) ; xx [ 491 ] =
xx [ 25 ] * xx [ 95 ] + xx [ 24 ] * xx [ 118 ] + xx [ 488 ] ; xx [ 492 ] = xx
[ 157 ] * xx [ 25 ] + xx [ 24 ] * xx [ 161 ] + xx [ 489 ] ; xx [ 488 ] = xx [
25 ] * xx [ 165 ] + xx [ 172 ] * xx [ 24 ] + xx [ 490 ] ; xx [ 493 ] = xx [
491 ] ; xx [ 494 ] = xx [ 492 ] ; xx [ 495 ] = xx [ 488 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 420 , xx + 485 , xx + 496 ) ; xx [ 489 ] =
xx [ 25 ] * xx [ 61 ] + xx [ 24 ] * xx [ 65 ] + xx [ 496 ] ; xx [ 490 ] = xx
[ 25 ] * xx [ 62 ] + xx [ 24 ] * xx [ 63 ] + xx [ 497 ] ; xx [ 496 ] = xx [
25 ] * xx [ 64 ] + xx [ 24 ] * xx [ 66 ] + xx [ 498 ] ; xx [ 497 ] = xx [ 489
] ; xx [ 498 ] = xx [ 490 ] ; xx [ 499 ] = xx [ 496 ] ; xx [ 500 ] =
pm_math_Vector3_dot_ra ( xx + 344 , xx + 493 ) + pm_math_Vector3_dot_ra ( xx
+ 378 , xx + 497 ) ; xx [ 501 ] = pm_math_Vector3_dot_ra ( xx + 465 , xx +
493 ) + pm_math_Vector3_dot_ra ( xx + 471 , xx + 497 ) ; xx [ 502 ] =
pm_math_Vector3_dot_ra ( xx + 344 , xx + 393 ) + pm_math_Vector3_dot_ra ( xx
+ 378 , xx + 398 ) ; xx [ 503 ] = xx [ 481 ] ; xx [ 504 ] = xx [ 500 ] ; xx [
505 ] = xx [ 481 ] ; xx [ 506 ] = pm_math_Vector3_dot_ra ( xx + 465 , xx +
474 ) + pm_math_Vector3_dot_ra ( xx + 471 , xx + 478 ) ; xx [ 507 ] = xx [
501 ] ; xx [ 508 ] = xx [ 500 ] ; xx [ 509 ] = xx [ 501 ] ; xx [ 510 ] = xx [
492 ] * xx [ 25 ] + xx [ 488 ] * xx [ 24 ] + pm_math_Vector3_dot_ra ( xx +
485 , xx + 497 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 502 , 3 , xx + 393
) ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 7 ] ) ) > xx [ 128 ] ;
ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) * derivErr = 1 ; if ( ii [ 0 ]
+ ii [ 1 ] != 0 ) * derivErr = 1 ; xx [ 511 ] = xx [ 262 ] ; xx [ 512 ] = xx
[ 448 ] ; xx [ 513 ] = xx [ 491 ] ; xx [ 514 ] = xx [ 263 ] ; xx [ 515 ] = xx
[ 455 ] ; xx [ 516 ] = xx [ 492 ] ; xx [ 517 ] = xx [ 373 ] ; xx [ 518 ] = xx
[ 468 ] ; xx [ 519 ] = xx [ 488 ] ; xx [ 520 ] = xx [ 375 ] ; xx [ 521 ] = xx
[ 469 ] ; xx [ 522 ] = xx [ 489 ] ; xx [ 523 ] = xx [ 381 ] ; xx [ 524 ] = xx
[ 470 ] ; xx [ 525 ] = xx [ 490 ] ; xx [ 526 ] = xx [ 397 ] ; xx [ 527 ] = xx
[ 477 ] ; xx [ 528 ] = xx [ 496 ] ; solveSymmetricPosDef ( xx + 502 , xx +
511 , 3 , 6 , xx + 529 , xx + 393 ) ; xx [ 393 ] = xx [ 263 ] * xx [ 529 ] +
xx [ 455 ] * xx [ 530 ] + xx [ 492 ] * xx [ 531 ] ; xx [ 394 ] = xx [ 373 ] *
xx [ 529 ] + xx [ 468 ] * xx [ 530 ] + xx [ 488 ] * xx [ 531 ] ; xx [ 395 ] =
xx [ 373 ] * xx [ 532 ] + xx [ 468 ] * xx [ 533 ] + xx [ 488 ] * xx [ 534 ] ;
xx [ 511 ] = xx [ 55 ] - ( xx [ 262 ] * xx [ 529 ] + xx [ 448 ] * xx [ 530 ]
+ xx [ 491 ] * xx [ 531 ] ) + xx [ 56 ] ; xx [ 512 ] = xx [ 95 ] - xx [ 393 ]
; xx [ 513 ] = xx [ 118 ] - xx [ 394 ] ; xx [ 514 ] = xx [ 124 ] - xx [ 393 ]
; xx [ 515 ] = xx [ 157 ] - ( xx [ 263 ] * xx [ 532 ] + xx [ 455 ] * xx [ 533
] + xx [ 492 ] * xx [ 534 ] ) ; xx [ 516 ] = xx [ 161 ] - xx [ 395 ] ; xx [
517 ] = xx [ 164 ] - xx [ 394 ] ; xx [ 518 ] = xx [ 165 ] - xx [ 395 ] ; xx [
519 ] = xx [ 172 ] - ( xx [ 373 ] * xx [ 535 ] + xx [ 468 ] * xx [ 536 ] + xx
[ 488 ] * xx [ 537 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 511 ,
xx + 39 , xx + 520 ) ; pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 520 , xx
+ 511 ) ; xx [ 520 ] = xx [ 33 ] - ( xx [ 262 ] * xx [ 538 ] + xx [ 448 ] *
xx [ 539 ] + xx [ 491 ] * xx [ 540 ] ) ; xx [ 521 ] = xx [ 34 ] - ( xx [ 262
] * xx [ 541 ] + xx [ 448 ] * xx [ 542 ] + xx [ 491 ] * xx [ 543 ] ) ; xx [
522 ] = xx [ 38 ] - ( xx [ 262 ] * xx [ 544 ] + xx [ 448 ] * xx [ 545 ] + xx
[ 491 ] * xx [ 546 ] ) ; xx [ 523 ] = xx [ 61 ] - ( xx [ 263 ] * xx [ 538 ] +
xx [ 455 ] * xx [ 539 ] + xx [ 492 ] * xx [ 540 ] ) ; xx [ 524 ] = xx [ 62 ]
- ( xx [ 263 ] * xx [ 541 ] + xx [ 455 ] * xx [ 542 ] + xx [ 492 ] * xx [ 543
] ) ; xx [ 525 ] = xx [ 64 ] - ( xx [ 263 ] * xx [ 544 ] + xx [ 455 ] * xx [
545 ] + xx [ 492 ] * xx [ 546 ] ) ; xx [ 526 ] = xx [ 65 ] - ( xx [ 373 ] *
xx [ 538 ] + xx [ 468 ] * xx [ 539 ] + xx [ 488 ] * xx [ 540 ] ) ; xx [ 527 ]
= xx [ 63 ] - ( xx [ 373 ] * xx [ 541 ] + xx [ 468 ] * xx [ 542 ] + xx [ 488
] * xx [ 543 ] ) ; xx [ 528 ] = xx [ 66 ] - ( xx [ 373 ] * xx [ 544 ] + xx [
468 ] * xx [ 545 ] + xx [ 488 ] * xx [ 546 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 520 , xx + 39 , xx + 547 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 547 , xx + 520 ) ; xx [ 61 ] =
xx [ 21 ] ; xx [ 62 ] = xx [ 27 ] ; xx [ 63 ] = xx [ 28 ] ; xx [ 64 ] = xx [
30 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 67 , xx + 393 ) ; xx [ 21
] = 0.01018286292250497 - xx [ 394 ] ; xx [ 27 ] = 0.01643121746247235 - xx [
395 ] ; xx [ 398 ] = - xx [ 393 ] ; xx [ 399 ] = xx [ 21 ] ; xx [ 400 ] = xx
[ 27 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 520 , xx + 398 , xx + 547 ) ;
xx [ 28 ] = xx [ 381 ] * xx [ 538 ] + xx [ 470 ] * xx [ 539 ] + xx [ 490 ] *
xx [ 540 ] ; xx [ 30 ] = xx [ 397 ] * xx [ 538 ] + xx [ 477 ] * xx [ 539 ] +
xx [ 496 ] * xx [ 540 ] ; xx [ 33 ] = xx [ 397 ] * xx [ 541 ] + xx [ 477 ] *
xx [ 542 ] + xx [ 496 ] * xx [ 543 ] ; xx [ 556 ] = xx [ 456 ] - ( xx [ 375 ]
* xx [ 538 ] + xx [ 469 ] * xx [ 539 ] + xx [ 489 ] * xx [ 540 ] ) + xx [ 374
] ; xx [ 557 ] = xx [ 457 ] - xx [ 28 ] ; xx [ 558 ] = xx [ 458 ] - xx [ 30 ]
; xx [ 559 ] = xx [ 459 ] - xx [ 28 ] ; xx [ 560 ] = xx [ 460 ] - ( xx [ 381
] * xx [ 541 ] + xx [ 470 ] * xx [ 542 ] + xx [ 490 ] * xx [ 543 ] ) + xx [
374 ] ; xx [ 561 ] = xx [ 461 ] - xx [ 33 ] ; xx [ 562 ] = xx [ 462 ] - xx [
30 ] ; xx [ 563 ] = xx [ 463 ] - xx [ 33 ] ; xx [ 564 ] = xx [ 464 ] - ( xx [
397 ] * xx [ 544 ] + xx [ 477 ] * xx [ 545 ] + xx [ 496 ] * xx [ 546 ] ) + xx
[ 374 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 556 , xx + 39 , xx +
456 ) ; pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 456 , xx + 556 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 556 , xx + 398 , xx + 38 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 38 , xx + 398 , xx + 456 ) ; xx [ 28 ] =
xx [ 512 ] - xx [ 548 ] - xx [ 550 ] - xx [ 457 ] ; xx [ 30 ] = xx [ 513 ] -
xx [ 549 ] - xx [ 553 ] - xx [ 458 ] ; xx [ 33 ] = 3.490126909650324e-6 ; xx
[ 34 ] = xx [ 33 ] + xx [ 515 ] - xx [ 551 ] - xx [ 551 ] - xx [ 460 ] ; xx [
47 ] = xx [ 516 ] - xx [ 552 ] - xx [ 554 ] - xx [ 461 ] ; xx [ 55 ] = xx [
518 ] - xx [ 554 ] - xx [ 552 ] - xx [ 463 ] ; xx [ 65 ] =
5.069554565459512e-6 ; xx [ 66 ] = xx [ 65 ] + xx [ 519 ] - xx [ 555 ] - xx [
555 ] - xx [ 464 ] ; xx [ 565 ] = xx [ 18 ] + xx [ 511 ] - xx [ 547 ] - xx [
547 ] - xx [ 456 ] ; xx [ 566 ] = xx [ 28 ] ; xx [ 567 ] = xx [ 30 ] ; xx [
568 ] = xx [ 514 ] - xx [ 550 ] - xx [ 548 ] - xx [ 459 ] ; xx [ 569 ] = xx [
34 ] ; xx [ 570 ] = xx [ 47 ] ; xx [ 571 ] = xx [ 517 ] - xx [ 553 ] - xx [
549 ] - xx [ 462 ] ; xx [ 572 ] = xx [ 55 ] ; xx [ 573 ] = xx [ 66 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 565 , xx + 15 , xx + 456 ) ; xx [ 95 ] = xx
[ 520 ] - xx [ 38 ] ; xx [ 38 ] = xx [ 523 ] - xx [ 39 ] ; xx [ 39 ] = xx [
524 ] - xx [ 42 ] ; xx [ 42 ] = xx [ 525 ] - xx [ 45 ] ; xx [ 45 ] = xx [ 526
] - xx [ 40 ] ; xx [ 40 ] = xx [ 527 ] - xx [ 43 ] ; xx [ 43 ] = xx [ 528 ] -
xx [ 46 ] ; xx [ 511 ] = xx [ 95 ] ; xx [ 512 ] = xx [ 521 ] - xx [ 41 ] ; xx
[ 513 ] = xx [ 522 ] - xx [ 44 ] ; xx [ 514 ] = xx [ 38 ] ; xx [ 515 ] = xx [
39 ] ; xx [ 516 ] = xx [ 42 ] ; xx [ 517 ] = xx [ 45 ] ; xx [ 518 ] = xx [ 40
] ; xx [ 519 ] = xx [ 43 ] ; xx [ 41 ] = 8.538390167322628e-3 ; xx [ 44 ] =
0.0187094325596859 ; xx [ 46 ] = xx [ 41 ] * xx [ 8 ] + xx [ 44 ] * xx [ 4 ]
; xx [ 118 ] = xx [ 44 ] * xx [ 12 ] ; xx [ 124 ] = xx [ 41 ] * xx [ 12 ] ;
xx [ 459 ] = xx [ 46 ] ; xx [ 460 ] = - xx [ 118 ] ; xx [ 461 ] = - xx [ 124
] ; pm_math_Matrix3x3_xform_ra ( xx + 511 , xx + 459 , xx + 462 ) ; xx [ 157
] = xx [ 456 ] + xx [ 462 ] ; xx [ 161 ] = xx [ 457 ] + xx [ 463 ] ; xx [ 164
] = xx [ 458 ] + xx [ 464 ] ; xx [ 456 ] = xx [ 157 ] ; xx [ 457 ] = xx [ 161
] ; xx [ 458 ] = xx [ 164 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 511
, xx + 15 , xx + 462 ) ; xx [ 165 ] = 9.266435618121707e-3 ; xx [ 172 ] = xx
[ 165 ] + xx [ 556 ] ; xx [ 520 ] = xx [ 172 ] ; xx [ 521 ] = xx [ 557 ] ; xx
[ 522 ] = xx [ 558 ] ; xx [ 523 ] = xx [ 559 ] ; xx [ 524 ] = xx [ 165 ] + xx
[ 560 ] ; xx [ 525 ] = xx [ 561 ] ; xx [ 526 ] = xx [ 562 ] ; xx [ 527 ] = xx
[ 563 ] ; xx [ 528 ] = xx [ 165 ] + xx [ 564 ] ; pm_math_Matrix3x3_xform_ra (
xx + 520 , xx + 459 , xx + 474 ) ; xx [ 394 ] = xx [ 462 ] + xx [ 474 ] ; xx
[ 395 ] = xx [ 463 ] + xx [ 475 ] ; xx [ 462 ] = xx [ 464 ] + xx [ 476 ] ; xx
[ 474 ] = xx [ 394 ] ; xx [ 475 ] = xx [ 395 ] ; xx [ 476 ] = xx [ 462 ] ; xx
[ 463 ] = xx [ 9 ] * xx [ 2 ] ; xx [ 464 ] = xx [ 13 ] * xx [ 7 ] ; xx [ 478
] = xx [ 463 ] + xx [ 464 ] ; xx [ 479 ] = xx [ 11 ] * xx [ 3 ] * xx [ 478 ]
; xx [ 480 ] = xx [ 13 ] - xx [ 11 ] * xx [ 7 ] * xx [ 478 ] ; xx [ 481 ] =
xx [ 11 ] * xx [ 2 ] * xx [ 478 ] - xx [ 9 ] ; pm_math_Matrix3x3_xform_ra (
xx + 565 , xx + 479 , xx + 493 ) ; xx [ 478 ] = xx [ 41 ] * xx [ 481 ] + xx [
480 ] * xx [ 44 ] ; xx [ 497 ] = xx [ 44 ] * xx [ 479 ] ; xx [ 498 ] = xx [
41 ] * xx [ 479 ] ; xx [ 499 ] = xx [ 478 ] ; xx [ 500 ] = - xx [ 497 ] ; xx
[ 501 ] = - xx [ 498 ] ; pm_math_Matrix3x3_xform_ra ( xx + 511 , xx + 499 ,
xx + 547 ) ; xx [ 550 ] = xx [ 493 ] + xx [ 547 ] ; xx [ 551 ] = xx [ 494 ] +
xx [ 548 ] ; xx [ 493 ] = xx [ 495 ] + xx [ 549 ] ; xx [ 547 ] = xx [ 550 ] ;
xx [ 548 ] = xx [ 551 ] ; xx [ 549 ] = xx [ 493 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 511 , xx + 479 , xx + 552 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 520 , xx + 499 , xx + 555 ) ; xx [ 494 ] =
xx [ 552 ] + xx [ 555 ] ; xx [ 495 ] = xx [ 553 ] + xx [ 556 ] ; xx [ 552 ] =
xx [ 554 ] + xx [ 557 ] ; xx [ 553 ] = xx [ 494 ] ; xx [ 554 ] = xx [ 495 ] ;
xx [ 555 ] = xx [ 552 ] ; xx [ 556 ] = pm_math_Vector3_dot_ra ( xx + 15 , xx
+ 547 ) + pm_math_Vector3_dot_ra ( xx + 459 , xx + 553 ) ; xx [ 557 ] =
0.01308562271097496 ; xx [ 558 ] = xx [ 9 ] * xx [ 28 ] + xx [ 13 ] * xx [ 30
] + xx [ 557 ] * xx [ 95 ] ; xx [ 28 ] = xx [ 34 ] * xx [ 9 ] + xx [ 13 ] *
xx [ 47 ] + xx [ 557 ] * xx [ 38 ] ; xx [ 30 ] = xx [ 9 ] * xx [ 55 ] + xx [
66 ] * xx [ 13 ] + xx [ 557 ] * xx [ 45 ] ; xx [ 574 ] = xx [ 558 ] ; xx [
575 ] = xx [ 28 ] ; xx [ 576 ] = xx [ 30 ] ; xx [ 34 ] = xx [ 9 ] * xx [ 38 ]
+ xx [ 13 ] * xx [ 45 ] + xx [ 172 ] * xx [ 557 ] ; xx [ 38 ] = xx [ 9 ] * xx
[ 39 ] + xx [ 13 ] * xx [ 40 ] + xx [ 557 ] * xx [ 559 ] ; xx [ 39 ] = xx [ 9
] * xx [ 42 ] + xx [ 13 ] * xx [ 43 ] + xx [ 557 ] * xx [ 562 ] ; xx [ 559 ]
= xx [ 34 ] ; xx [ 560 ] = xx [ 38 ] ; xx [ 561 ] = xx [ 39 ] ; xx [ 40 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 574 ) + pm_math_Vector3_dot_ra ( xx +
459 , xx + 559 ) ; xx [ 42 ] = pm_math_Vector3_dot_ra ( xx + 479 , xx + 574 )
+ pm_math_Vector3_dot_ra ( xx + 499 , xx + 559 ) ; xx [ 574 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 456 ) + pm_math_Vector3_dot_ra ( xx +
459 , xx + 474 ) ; xx [ 575 ] = xx [ 556 ] ; xx [ 576 ] = xx [ 40 ] ; xx [
577 ] = xx [ 556 ] ; xx [ 578 ] = pm_math_Vector3_dot_ra ( xx + 479 , xx +
547 ) + pm_math_Vector3_dot_ra ( xx + 499 , xx + 553 ) ; xx [ 579 ] = xx [ 42
] ; xx [ 580 ] = xx [ 40 ] ; xx [ 581 ] = xx [ 42 ] ; xx [ 582 ] = xx [ 28 ]
* xx [ 9 ] + xx [ 30 ] * xx [ 13 ] + xx [ 34 ] * xx [ 557 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 574 , 3 , xx + 456 ) ; bb [ 0 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 1 ] ) ) > xx [ 128 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ;
if ( bb [ 0 ] ) * derivErr = 1 ; if ( ii [ 0 ] + ii [ 1 ] != 0 ) * derivErr =
1 ; xx [ 40 ] = 5.729577951308232 ; xx [ 42 ] = 0.5235987755982988 ; xx [ 43
] = 0.0 ; xx [ 45 ] = state [ 0 ] + xx [ 42 ] ; if ( xx [ 43 ] < xx [ 45 ] )
xx [ 45 ] = xx [ 43 ] ; xx [ 47 ] = 1.74532925199433e-3 ; xx [ 55 ] = - ( xx
[ 45 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 55 ] ) xx [ 55 ] = xx [ 0 ] ; xx
[ 66 ] = 3.0 ; xx [ 95 ] = 5729.577951308232 ; xx [ 128 ] = xx [ 95 ] * state
[ 3 ] ; xx [ 172 ] = 5.729577951308232e5 ; xx [ 456 ] = xx [ 55 ] * xx [ 55 ]
* ( xx [ 66 ] - xx [ 11 ] * xx [ 55 ] ) * ( ( - xx [ 45 ] == xx [ 43 ] ? xx [
43 ] : - xx [ 128 ] ) - xx [ 172 ] * xx [ 45 ] ) ; if ( xx [ 43 ] > xx [ 456
] ) xx [ 456 ] = xx [ 43 ] ; xx [ 45 ] = state [ 0 ] - xx [ 42 ] ; if ( xx [
43 ] > xx [ 45 ] ) xx [ 45 ] = xx [ 43 ] ; xx [ 55 ] = xx [ 45 ] / xx [ 47 ]
; if ( xx [ 0 ] < xx [ 55 ] ) xx [ 55 ] = xx [ 0 ] ; xx [ 457 ] = ( xx [ 172
] * xx [ 45 ] + ( xx [ 45 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 128 ] ) ) * xx [
55 ] * xx [ 55 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 55 ] ) ; if ( xx [ 43 ] >
xx [ 457 ] ) xx [ 457 ] = xx [ 43 ] ; xx [ 45 ] = xx [ 12 ] * state [ 3 ] ;
xx [ 55 ] = xx [ 463 ] + xx [ 464 ] ; xx [ 128 ] = xx [ 11 ] * xx [ 3 ] * xx
[ 55 ] * state [ 4 ] ; xx [ 3 ] = xx [ 45 ] + xx [ 128 ] ; xx [ 458 ] = xx [
4 ] * state [ 3 ] ; xx [ 463 ] = ( xx [ 13 ] - xx [ 11 ] * xx [ 7 ] * xx [ 55
] ) * state [ 4 ] ; xx [ 7 ] = xx [ 9 ] * state [ 5 ] ; xx [ 464 ] = xx [ 458
] + xx [ 463 ] + xx [ 7 ] ; xx [ 474 ] = xx [ 8 ] * state [ 3 ] ; xx [ 475 ]
= ( xx [ 11 ] * xx [ 2 ] * xx [ 55 ] - xx [ 9 ] ) * state [ 4 ] ; xx [ 2 ] =
xx [ 13 ] * state [ 5 ] ; xx [ 55 ] = xx [ 474 ] + xx [ 475 ] + xx [ 2 ] ; xx
[ 547 ] = xx [ 3 ] ; xx [ 548 ] = xx [ 464 ] ; xx [ 549 ] = xx [ 55 ] ; xx [
553 ] = xx [ 18 ] * xx [ 3 ] ; xx [ 554 ] = xx [ 464 ] * xx [ 33 ] ; xx [ 555
] = xx [ 55 ] * xx [ 65 ] ; pm_math_Vector3_cross_ra ( xx + 547 , xx + 553 ,
xx + 559 ) ; xx [ 18 ] = 0.6903818921736785 * input [ 103 ] ; xx [ 33 ] =
input [ 103 ] - 1.380763784347357 * xx [ 18 ] ; xx [ 65 ] = 1.446890241806463
* xx [ 18 ] ; xx [ 18 ] = 0.0375915374507293 ; xx [ 553 ] = -
2.405769667632971e-13 ; xx [ 554 ] = - 0.03983410794452454 ; xx [ 555 ] = -
0.01645986959431302 ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 553 , xx +
562 ) ; xx [ 476 ] = xx [ 562 ] - xx [ 393 ] ; xx [ 556 ] = xx [ 563 ] + xx [
21 ] + xx [ 18 ] ; xx [ 562 ] = 1.590244414800102e-3 ; xx [ 563 ] = xx [ 564
] + xx [ 27 ] + xx [ 562 ] ; xx [ 564 ] = sqrt ( xx [ 476 ] * xx [ 476 ] + xx
[ 556 ] * xx [ 556 ] + xx [ 563 ] * xx [ 563 ] ) ; if ( xx [ 564 ] == 0.0 ) *
derivErr = 1 ; xx [ 583 ] = input [ 112 ] / xx [ 564 ] ; xx [ 584 ] = xx [
583 ] * xx [ 563 ] ; xx [ 585 ] = xx [ 583 ] * xx [ 556 ] ; xx [ 586 ] =
0.01759714945393536 ; xx [ 587 ] = - xx [ 10 ] ; xx [ 588 ] = xx [ 14 ] ; xx
[ 589 ] = xx [ 6 ] ; xx [ 590 ] = xx [ 5 ] ; xx [ 591 ] = xx [ 14 ] ; xx [
592 ] = xx [ 6 ] ; xx [ 593 ] = xx [ 5 ] ; xx [ 594 ] = 0.03563872347849285 ;
xx [ 595 ] = xx [ 5 ] * xx [ 594 ] - xx [ 586 ] * xx [ 6 ] ; xx [ 596 ] = xx
[ 586 ] * xx [ 14 ] ; xx [ 597 ] = xx [ 594 ] * xx [ 14 ] ; xx [ 598 ] = xx [
595 ] ; xx [ 599 ] = xx [ 596 ] ; xx [ 600 ] = - xx [ 597 ] ;
pm_math_Vector3_cross_ra ( xx + 591 , xx + 598 , xx + 601 ) ; xx [ 598 ] = xx
[ 44 ] * xx [ 6 ] + xx [ 5 ] * xx [ 41 ] ; xx [ 599 ] = xx [ 44 ] * xx [ 14 ]
; xx [ 600 ] = xx [ 41 ] * xx [ 14 ] ; xx [ 604 ] = - xx [ 598 ] ; xx [ 605 ]
= xx [ 599 ] ; xx [ 606 ] = xx [ 600 ] ; pm_math_Vector3_cross_ra ( xx + 591
, xx + 604 , xx + 607 ) ; xx [ 591 ] = ( xx [ 10 ] * xx [ 598 ] + xx [ 607 ]
) * xx [ 11 ] ; xx [ 592 ] = ( xx [ 601 ] - xx [ 10 ] * xx [ 595 ] ) * xx [
11 ] - xx [ 591 ] ; xx [ 593 ] = 0.06197538565817786 - xx [ 11 ] * ( xx [ 608
] - xx [ 599 ] * xx [ 10 ] ) ; xx [ 595 ] = xx [ 11 ] * ( xx [ 602 ] - xx [
596 ] * xx [ 10 ] ) - xx [ 594 ] + xx [ 593 ] - 0.0257594283537832 ; xx [ 596
] = 0.9283707866246274 - ( xx [ 609 ] - xx [ 600 ] * xx [ 10 ] ) * xx [ 11 ]
; xx [ 598 ] = ( xx [ 597 ] * xx [ 10 ] + xx [ 603 ] ) * xx [ 11 ] - xx [ 586
] + xx [ 596 ] - 0.906781702449562 ; xx [ 597 ] = sqrt ( xx [ 592 ] * xx [
592 ] + xx [ 595 ] * xx [ 595 ] + xx [ 598 ] * xx [ 598 ] ) ; if ( xx [ 597 ]
== 0.0 ) * derivErr = 1 ; xx [ 599 ] = input [ 113 ] / xx [ 597 ] ; xx [ 600
] = xx [ 599 ] * xx [ 592 ] ; xx [ 601 ] = xx [ 599 ] * xx [ 595 ] ; xx [ 602
] = xx [ 599 ] * xx [ 598 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 587 ,
xx + 600 , xx + 603 ) ; xx [ 600 ] = 0.04055699920652953 ; xx [ 601 ] =
0.01302079271818882 ; xx [ 602 ] = 0.0135421645305857 ; xx [ 606 ] = - xx [
600 ] ; xx [ 607 ] = - xx [ 601 ] ; xx [ 608 ] = xx [ 602 ] ; xx [ 609 ] = -
0.03653985023506644 ; xx [ 610 ] = - 0.01645220048935106 ; xx [ 611 ] =
3.239433747529818e-3 ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 609 , xx
+ 612 ) ; xx [ 615 ] = xx [ 612 ] - xx [ 393 ] + xx [ 600 ] ; xx [ 600 ] = xx
[ 613 ] + xx [ 21 ] + xx [ 601 ] ; xx [ 601 ] = xx [ 614 ] + xx [ 27 ] - xx [
602 ] ; xx [ 602 ] = sqrt ( xx [ 615 ] * xx [ 615 ] + xx [ 600 ] * xx [ 600 ]
+ xx [ 601 ] * xx [ 601 ] ) ; if ( xx [ 602 ] == 0.0 ) * derivErr = 1 ; xx [
612 ] = input [ 117 ] / xx [ 602 ] ; xx [ 613 ] = xx [ 612 ] * xx [ 615 ] ;
xx [ 614 ] = xx [ 612 ] * xx [ 600 ] ; xx [ 616 ] = xx [ 612 ] * xx [ 601 ] ;
xx [ 617 ] = - xx [ 613 ] ; xx [ 618 ] = - xx [ 614 ] ; xx [ 619 ] = - xx [
616 ] ; pm_math_Vector3_cross_ra ( xx + 606 , xx + 617 , xx + 620 ) ; xx [
606 ] = - 0.04008119964598488 ; xx [ 607 ] = - 0.01084940380361654 ; xx [ 608
] = - 9.8613284252828e-4 ; pm_math_Quaternion_xform_ra ( xx + 587 , xx + 606
, xx + 617 ) ; xx [ 623 ] = 0.044078899383545 ; xx [ 624 ] = xx [ 617 ] - xx
[ 591 ] + xx [ 623 ] ; xx [ 625 ] = 0.0499199981689453 ; xx [ 626 ] = xx [
618 ] + xx [ 593 ] - xx [ 625 ] ; xx [ 617 ] = 0.919140991210938 ; xx [ 618 ]
= xx [ 619 ] + xx [ 596 ] - xx [ 617 ] ; xx [ 619 ] = sqrt ( xx [ 624 ] * xx
[ 624 ] + xx [ 626 ] * xx [ 626 ] + xx [ 618 ] * xx [ 618 ] ) ; if ( xx [ 619
] == 0.0 ) * derivErr = 1 ; xx [ 627 ] = input [ 118 ] / xx [ 619 ] ; xx [
628 ] = xx [ 627 ] * xx [ 624 ] ; xx [ 629 ] = xx [ 627 ] * xx [ 626 ] ; xx [
630 ] = xx [ 627 ] * xx [ 618 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
587 , xx + 628 , xx + 631 ) ; pm_math_Vector3_cross_ra ( xx + 606 , xx + 631
, xx + 628 ) ; xx [ 606 ] = 0.04055699920655626 ; xx [ 607 ] =
0.0130207927181218 ; xx [ 608 ] = 0.01354216453058323 ; xx [ 634 ] = xx [ 606
] ; xx [ 635 ] = - xx [ 607 ] ; xx [ 636 ] = xx [ 608 ] ; xx [ 637 ] =
0.03653985023490417 ; xx [ 638 ] = - 0.01645220048983929 ; xx [ 639 ] =
3.239433747517833e-3 ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 637 , xx
+ 640 ) ; xx [ 643 ] = xx [ 640 ] - xx [ 393 ] - xx [ 606 ] ; xx [ 606 ] = xx
[ 641 ] + xx [ 21 ] + xx [ 607 ] ; xx [ 607 ] = xx [ 642 ] + xx [ 27 ] - xx [
608 ] ; xx [ 608 ] = sqrt ( xx [ 643 ] * xx [ 643 ] + xx [ 606 ] * xx [ 606 ]
+ xx [ 607 ] * xx [ 607 ] ) ; if ( xx [ 608 ] == 0.0 ) * derivErr = 1 ; xx [
640 ] = input [ 122 ] / xx [ 608 ] ; xx [ 641 ] = xx [ 640 ] * xx [ 643 ] ;
xx [ 642 ] = xx [ 640 ] * xx [ 606 ] ; xx [ 644 ] = xx [ 640 ] * xx [ 607 ] ;
xx [ 645 ] = - xx [ 641 ] ; xx [ 646 ] = - xx [ 642 ] ; xx [ 647 ] = - xx [
644 ] ; pm_math_Vector3_cross_ra ( xx + 634 , xx + 645 , xx + 648 ) ; xx [
634 ] = 0.04008119964600713 ; xx [ 635 ] = - 0.01084940380355031 ; xx [ 636 ]
= - 9.861328425307225e-4 ; pm_math_Quaternion_xform_ra ( xx + 587 , xx + 634
, xx + 645 ) ; xx [ 651 ] = xx [ 645 ] - xx [ 591 ] - xx [ 623 ] ; xx [ 623 ]
= xx [ 646 ] + xx [ 593 ] - xx [ 625 ] ; xx [ 625 ] = xx [ 647 ] + xx [ 596 ]
- xx [ 617 ] ; xx [ 617 ] = sqrt ( xx [ 651 ] * xx [ 651 ] + xx [ 623 ] * xx
[ 623 ] + xx [ 625 ] * xx [ 625 ] ) ; if ( xx [ 617 ] == 0.0 ) * derivErr = 1
; xx [ 645 ] = input [ 123 ] / xx [ 617 ] ; xx [ 652 ] = xx [ 645 ] * xx [
651 ] ; xx [ 653 ] = xx [ 645 ] * xx [ 623 ] ; xx [ 654 ] = xx [ 645 ] * xx [
625 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 587 , xx + 652 , xx + 655 )
; pm_math_Vector3_cross_ra ( xx + 634 , xx + 655 , xx + 652 ) ; xx [ 634 ] =
0.04705808460307085 ; xx [ 658 ] = - 3.166185351073283e-13 ; xx [ 659 ] = -
0.0513211464694144 ; xx [ 660 ] = - 0.01219126570664875 ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 658 , xx + 661 ) ; xx [ 635 ] =
xx [ 661 ] - xx [ 393 ] ; xx [ 393 ] = xx [ 662 ] + xx [ 21 ] + xx [ 634 ] ;
xx [ 21 ] = 9.875319015864496e-3 ; xx [ 636 ] = xx [ 663 ] + xx [ 27 ] + xx [
21 ] ; xx [ 27 ] = sqrt ( xx [ 635 ] * xx [ 635 ] + xx [ 393 ] * xx [ 393 ] +
xx [ 636 ] * xx [ 636 ] ) ; if ( xx [ 27 ] == 0.0 ) * derivErr = 1 ; xx [ 646
] = input [ 138 ] / xx [ 27 ] ; xx [ 647 ] = xx [ 646 ] * xx [ 636 ] ; xx [
661 ] = xx [ 646 ] * xx [ 393 ] ; xx [ 662 ] = - 3.88840995326696e-5 ; xx [
663 ] = - 0.04658678468440397 ; xx [ 664 ] = - 0.0171197768192325 ;
pm_math_Quaternion_xform_ra ( xx + 587 , xx + 662 , xx + 665 ) ; xx [ 668 ] =
xx [ 665 ] - xx [ 591 ] ; xx [ 669 ] = xx [ 666 ] + xx [ 593 ] -
0.019933675415717 ; xx [ 665 ] = xx [ 667 ] + xx [ 596 ] - 0.904526583782246
; xx [ 666 ] = sqrt ( xx [ 668 ] * xx [ 668 ] + xx [ 669 ] * xx [ 669 ] + xx
[ 665 ] * xx [ 665 ] ) ; if ( xx [ 666 ] == 0.0 ) * derivErr = 1 ; xx [ 667 ]
= input [ 139 ] / xx [ 666 ] ; xx [ 670 ] = xx [ 667 ] * xx [ 668 ] ; xx [
671 ] = xx [ 667 ] * xx [ 669 ] ; xx [ 672 ] = xx [ 667 ] * xx [ 665 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 587 , xx + 670 , xx + 673 ) ;
pm_math_Vector3_cross_ra ( xx + 662 , xx + 673 , xx + 670 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 547 , xx + 662 ) ; xx [
676 ] = xx [ 261 ] * state [ 9 ] ; xx [ 677 ] = xx [ 401 ] + xx [ 447 ] ; xx
[ 401 ] = ( xx [ 22 ] - ( xx [ 451 ] - xx [ 20 ] * xx [ 677 ] ) * xx [ 11 ] )
* state [ 10 ] ; xx [ 20 ] = xx [ 676 ] + xx [ 401 ] ; xx [ 22 ] = xx [ 662 ]
+ xx [ 20 ] ; xx [ 447 ] = xx [ 32 ] * state [ 9 ] ; xx [ 451 ] = ( xx [ 24 ]
- xx [ 11 ] * ( xx [ 23 ] * xx [ 677 ] + xx [ 453 ] ) ) * state [ 10 ] ; xx [
23 ] = xx [ 25 ] * state [ 11 ] ; xx [ 453 ] = xx [ 447 ] + xx [ 451 ] + xx [
23 ] ; xx [ 678 ] = xx [ 663 ] + xx [ 453 ] ; xx [ 679 ] = xx [ 35 ] * state
[ 9 ] ; xx [ 680 ] = ( xx [ 11 ] * ( xx [ 454 ] + xx [ 19 ] * xx [ 677 ] ) -
xx [ 25 ] ) * state [ 10 ] ; xx [ 19 ] = xx [ 24 ] * state [ 11 ] ; xx [ 454
] = xx [ 679 ] + xx [ 680 ] + xx [ 19 ] ; xx [ 677 ] = xx [ 664 ] + xx [ 454
] ; xx [ 681 ] = xx [ 22 ] ; xx [ 682 ] = xx [ 678 ] ; xx [ 683 ] = xx [ 677
] ; xx [ 684 ] = xx [ 22 ] * xx [ 56 ] ; xx [ 685 ] = xx [ 678 ] * xx [ 142 ]
; xx [ 686 ] = xx [ 677 ] * xx [ 167 ] ; pm_math_Vector3_cross_ra ( xx + 681
, xx + 684 , xx + 687 ) ; xx [ 684 ] = 2.234568172515435e-13 ; xx [ 685 ] =
0.02939308698039612 ; xx [ 686 ] = - 5.661597909317728e-3 ; xx [ 56 ] =
0.7847814363844873 ; xx [ 142 ] = 2.339080312536016e-12 ; xx [ 167 ] = xx [
142 ] * input [ 104 ] ; xx [ 690 ] = 0.619772617260799 ; xx [ 691 ] = xx [
690 ] * input [ 104 ] ; xx [ 692 ] = ( xx [ 56 ] * xx [ 167 ] + xx [ 142 ] *
xx [ 691 ] ) * xx [ 11 ] ; xx [ 693 ] = xx [ 142 ] * xx [ 167 ] ; xx [ 142 ]
= xx [ 11 ] * ( xx [ 693 ] - xx [ 56 ] * xx [ 691 ] ) ; xx [ 56 ] = input [
104 ] - ( xx [ 690 ] * xx [ 691 ] + xx [ 693 ] ) * xx [ 11 ] ; xx [ 693 ] = -
xx [ 692 ] ; xx [ 694 ] = xx [ 142 ] ; xx [ 695 ] = xx [ 56 ] ;
pm_math_Vector3_cross_ra ( xx + 684 , xx + 693 , xx + 696 ) ; xx [ 167 ] =
2.408429233865428e-13 ; xx [ 684 ] = 0.04027776673008778 ; xx [ 685 ] =
9.50951981748549e-6 ; xx [ 693 ] = - xx [ 167 ] ; xx [ 694 ] = - xx [ 684 ] ;
xx [ 695 ] = - xx [ 685 ] ; xx [ 699 ] = 1.167567527306757e-13 ; xx [ 700 ] =
- 0.04472798265803164 ; xx [ 701 ] = - 0.01492244588929304 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 699 , xx + 702 ) ; xx [ 686 ] =
xx [ 702 ] + xx [ 31 ] + xx [ 167 ] ; xx [ 167 ] = xx [ 703 ] + xx [ 52 ] +
xx [ 684 ] ; xx [ 684 ] = xx [ 704 ] + xx [ 53 ] + xx [ 685 ] ; xx [ 685 ] =
sqrt ( xx [ 686 ] * xx [ 686 ] + xx [ 167 ] * xx [ 167 ] + xx [ 684 ] * xx [
684 ] ) ; if ( xx [ 685 ] == 0.0 ) * derivErr = 1 ; xx [ 690 ] = input [ 111
] / xx [ 685 ] ; xx [ 691 ] = xx [ 690 ] * xx [ 686 ] ; xx [ 702 ] = xx [ 690
] * xx [ 167 ] ; xx [ 703 ] = xx [ 690 ] * xx [ 684 ] ; xx [ 704 ] = - xx [
691 ] ; xx [ 705 ] = - xx [ 702 ] ; xx [ 706 ] = - xx [ 703 ] ;
pm_math_Vector3_cross_ra ( xx + 693 , xx + 704 , xx + 707 ) ; xx [ 693 ] = xx
[ 583 ] * xx [ 476 ] ; xx [ 704 ] = xx [ 693 ] ; xx [ 705 ] = xx [ 585 ] ; xx
[ 706 ] = xx [ 584 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx +
704 , xx + 710 ) ; pm_math_Vector3_cross_ra ( xx + 553 , xx + 710 , xx + 704
) ; xx [ 553 ] = 0.03492720031745133 ; xx [ 554 ] = 0.01477959769994918 ; xx
[ 555 ] = 0.01134881117700549 ; xx [ 713 ] = - xx [ 553 ] ; xx [ 714 ] = - xx
[ 554 ] ; xx [ 715 ] = xx [ 555 ] ; xx [ 716 ] = - 0.03087794971463731 ; xx [
717 ] = - 0.01577384625407678 ; xx [ 718 ] = 4.057911382721502e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 716 , xx + 719 ) ; xx [ 694 ] =
xx [ 719 ] + xx [ 31 ] + xx [ 553 ] ; xx [ 553 ] = xx [ 720 ] + xx [ 52 ] +
xx [ 554 ] ; xx [ 554 ] = xx [ 721 ] + xx [ 53 ] - xx [ 555 ] ; xx [ 555 ] =
sqrt ( xx [ 694 ] * xx [ 694 ] + xx [ 553 ] * xx [ 553 ] + xx [ 554 ] * xx [
554 ] ) ; if ( xx [ 555 ] == 0.0 ) * derivErr = 1 ; xx [ 695 ] = input [ 116
] / xx [ 555 ] ; xx [ 719 ] = xx [ 695 ] * xx [ 694 ] ; xx [ 720 ] = xx [ 695
] * xx [ 553 ] ; xx [ 721 ] = xx [ 695 ] * xx [ 554 ] ; xx [ 722 ] = - xx [
719 ] ; xx [ 723 ] = - xx [ 720 ] ; xx [ 724 ] = - xx [ 721 ] ;
pm_math_Vector3_cross_ra ( xx + 713 , xx + 722 , xx + 725 ) ; xx [ 713 ] = xx
[ 613 ] ; xx [ 714 ] = xx [ 614 ] ; xx [ 715 ] = xx [ 616 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 713 , xx + 722 ) ;
pm_math_Vector3_cross_ra ( xx + 609 , xx + 722 , xx + 713 ) ; xx [ 609 ] =
0.03492470169060014 ; xx [ 610 ] = 0.01552496039123881 ; xx [ 611 ] =
0.01167234256981233 ; xx [ 728 ] = xx [ 609 ] ; xx [ 729 ] = - xx [ 610 ] ;
xx [ 730 ] = xx [ 611 ] ; xx [ 731 ] = 0.03087794971468379 ; xx [ 732 ] = -
0.01577384625389952 ; xx [ 733 ] = 4.057911382755352e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 731 , xx + 734 ) ; xx [ 737 ] =
xx [ 734 ] + xx [ 31 ] - xx [ 609 ] ; xx [ 609 ] = xx [ 735 ] + xx [ 52 ] +
xx [ 610 ] ; xx [ 610 ] = xx [ 736 ] + xx [ 53 ] - xx [ 611 ] ; xx [ 611 ] =
sqrt ( xx [ 737 ] * xx [ 737 ] + xx [ 609 ] * xx [ 609 ] + xx [ 610 ] * xx [
610 ] ) ; if ( xx [ 611 ] == 0.0 ) * derivErr = 1 ; xx [ 734 ] = input [ 121
] / xx [ 611 ] ; xx [ 735 ] = xx [ 734 ] * xx [ 737 ] ; xx [ 736 ] = xx [ 734
] * xx [ 609 ] ; xx [ 738 ] = xx [ 734 ] * xx [ 610 ] ; xx [ 739 ] = - xx [
735 ] ; xx [ 740 ] = - xx [ 736 ] ; xx [ 741 ] = - xx [ 738 ] ;
pm_math_Vector3_cross_ra ( xx + 728 , xx + 739 , xx + 742 ) ; xx [ 728 ] = xx
[ 641 ] ; xx [ 729 ] = xx [ 642 ] ; xx [ 730 ] = xx [ 644 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 728 , xx + 739 ) ;
pm_math_Vector3_cross_ra ( xx + 637 , xx + 739 , xx + 728 ) ; xx [ 637 ] =
3.146640243071065e-13 ; xx [ 638 ] = 0.05113078984265527 ; xx [ 639 ] =
8.028332428854309e-3 ; xx [ 745 ] = - xx [ 637 ] ; xx [ 746 ] = - xx [ 638 ]
; xx [ 747 ] = - xx [ 639 ] ; xx [ 748 ] = 1.4285959311088e-13 ; xx [ 749 ] =
- 0.05524484988788111 ; xx [ 750 ] = - 7.469488033553544e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 748 , xx + 751 ) ; xx [ 754 ] =
xx [ 751 ] + xx [ 31 ] + xx [ 637 ] ; xx [ 31 ] = xx [ 752 ] + xx [ 52 ] + xx
[ 638 ] ; xx [ 52 ] = xx [ 753 ] + xx [ 53 ] + xx [ 639 ] ; xx [ 53 ] = sqrt
( xx [ 754 ] * xx [ 754 ] + xx [ 31 ] * xx [ 31 ] + xx [ 52 ] * xx [ 52 ] ) ;
if ( xx [ 53 ] == 0.0 ) * derivErr = 1 ; xx [ 637 ] = input [ 137 ] / xx [ 53
] ; xx [ 638 ] = xx [ 637 ] * xx [ 754 ] ; xx [ 639 ] = xx [ 637 ] * xx [ 31
] ; xx [ 751 ] = xx [ 637 ] * xx [ 52 ] ; xx [ 755 ] = - xx [ 638 ] ; xx [
756 ] = - xx [ 639 ] ; xx [ 757 ] = - xx [ 751 ] ; pm_math_Vector3_cross_ra (
xx + 745 , xx + 755 , xx + 758 ) ; xx [ 745 ] = xx [ 646 ] * xx [ 635 ] ; xx
[ 755 ] = xx [ 745 ] ; xx [ 756 ] = xx [ 661 ] ; xx [ 757 ] = xx [ 647 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 755 , xx + 761 ) ;
pm_math_Vector3_cross_ra ( xx + 658 , xx + 761 , xx + 755 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 681 , xx + 658 ) ; xx [
746 ] = xx [ 225 ] * state [ 15 ] ; xx [ 747 ] = xx [ 295 ] + xx [ 296 ] ; xx
[ 295 ] = ( ( xx [ 29 ] * xx [ 747 ] + xx [ 351 ] ) * xx [ 11 ] - xx [ 36 ] )
* state [ 16 ] ; xx [ 29 ] = xx [ 746 ] + xx [ 295 ] ; xx [ 36 ] = xx [ 658 ]
+ xx [ 29 ] ; xx [ 296 ] = xx [ 226 ] * state [ 15 ] ; xx [ 351 ] = ( xx [ 48
] + xx [ 11 ] * ( xx [ 362 ] - xx [ 37 ] * xx [ 747 ] ) ) * state [ 16 ] ; xx
[ 37 ] = xx [ 49 ] * state [ 17 ] ; xx [ 362 ] = xx [ 296 ] + xx [ 351 ] + xx
[ 37 ] ; xx [ 752 ] = xx [ 659 ] + xx [ 362 ] ; xx [ 753 ] = xx [ 50 ] *
state [ 15 ] ; xx [ 764 ] = ( xx [ 11 ] * ( xx [ 26 ] * xx [ 747 ] - xx [ 363
] ) - xx [ 49 ] ) * state [ 16 ] ; xx [ 26 ] = xx [ 48 ] * state [ 17 ] ; xx
[ 363 ] = xx [ 753 ] + xx [ 764 ] + xx [ 26 ] ; xx [ 747 ] = xx [ 660 ] + xx
[ 363 ] ; xx [ 765 ] = xx [ 36 ] ; xx [ 766 ] = xx [ 752 ] ; xx [ 767 ] = xx
[ 747 ] ; xx [ 768 ] = xx [ 36 ] * xx [ 119 ] ; xx [ 769 ] = xx [ 752 ] * xx
[ 159 ] ; xx [ 770 ] = xx [ 747 ] * xx [ 169 ] ; pm_math_Vector3_cross_ra (
xx + 765 , xx + 768 , xx + 771 ) ; xx [ 768 ] = - 1.076648921049358e-13 ; xx
[ 769 ] = 0.03139087037316381 ; xx [ 770 ] = - 4.53476976212614e-3 ; xx [ 119
] = 0.64004249649544 * input [ 106 ] ; xx [ 159 ] = xx [ 11 ] *
1.278175242626048e-12 * xx [ 119 ] ; xx [ 169 ] = xx [ 11 ] *
0.7683395100343888 * xx [ 119 ] ; xx [ 774 ] = input [ 106 ] -
1.28008499299088 * xx [ 119 ] ; xx [ 775 ] = xx [ 159 ] ; xx [ 776 ] = - xx [
169 ] ; xx [ 777 ] = xx [ 774 ] ; pm_math_Vector3_cross_ra ( xx + 768 , xx +
775 , xx + 778 ) ; xx [ 768 ] = 8.947197148478258e-14 ; xx [ 769 ] =
0.0386335011732275 ; xx [ 770 ] = 2.940430357145393e-3 ; xx [ 775 ] = xx [
768 ] ; xx [ 776 ] = - xx [ 769 ] ; xx [ 777 ] = xx [ 770 ] ; xx [ 781 ] = -
6.841875673243218e-13 ; xx [ 782 ] = - 0.04146091222789498 ; xx [ 783 ] = -
0.01351410150666451 ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 781 , xx +
784 ) ; xx [ 787 ] = xx [ 784 ] - xx [ 79 ] - xx [ 768 ] ; xx [ 768 ] = xx [
785 ] + xx [ 120 ] + xx [ 769 ] ; xx [ 769 ] = xx [ 786 ] + xx [ 117 ] - xx [
770 ] ; xx [ 770 ] = sqrt ( xx [ 787 ] * xx [ 787 ] + xx [ 768 ] * xx [ 768 ]
+ xx [ 769 ] * xx [ 769 ] ) ; if ( xx [ 770 ] == 0.0 ) * derivErr = 1 ; xx [
784 ] = input [ 110 ] / xx [ 770 ] ; xx [ 785 ] = xx [ 784 ] * xx [ 787 ] ;
xx [ 786 ] = xx [ 784 ] * xx [ 768 ] ; xx [ 788 ] = xx [ 784 ] * xx [ 769 ] ;
xx [ 789 ] = - xx [ 785 ] ; xx [ 790 ] = - xx [ 786 ] ; xx [ 791 ] = - xx [
788 ] ; pm_math_Vector3_cross_ra ( xx + 775 , xx + 789 , xx + 792 ) ; xx [
775 ] = xx [ 691 ] ; xx [ 776 ] = xx [ 702 ] ; xx [ 777 ] = xx [ 703 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 775 , xx + 789 ) ;
pm_math_Vector3_cross_ra ( xx + 699 , xx + 789 , xx + 775 ) ; xx [ 699 ] =
0.03295989990232563 ; xx [ 700 ] = 0.01601356214963441 ; xx [ 701 ] =
0.01475302284708025 ; xx [ 795 ] = - xx [ 699 ] ; xx [ 796 ] = - xx [ 700 ] ;
xx [ 797 ] = xx [ 701 ] ; xx [ 798 ] = - 0.03226754951497003 ; xx [ 799 ] = -
0.02045999852626687 ; xx [ 800 ] = 5.644585224138508e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 798 , xx + 801 ) ; xx [ 804 ] =
xx [ 801 ] - xx [ 79 ] + xx [ 699 ] ; xx [ 699 ] = xx [ 802 ] + xx [ 120 ] +
xx [ 700 ] ; xx [ 700 ] = xx [ 803 ] + xx [ 117 ] - xx [ 701 ] ; xx [ 701 ] =
sqrt ( xx [ 804 ] * xx [ 804 ] + xx [ 699 ] * xx [ 699 ] + xx [ 700 ] * xx [
700 ] ) ; if ( xx [ 701 ] == 0.0 ) * derivErr = 1 ; xx [ 801 ] = input [ 115
] / xx [ 701 ] ; xx [ 802 ] = xx [ 801 ] * xx [ 804 ] ; xx [ 803 ] = xx [ 801
] * xx [ 699 ] ; xx [ 805 ] = xx [ 801 ] * xx [ 700 ] ; xx [ 806 ] = - xx [
802 ] ; xx [ 807 ] = - xx [ 803 ] ; xx [ 808 ] = - xx [ 805 ] ;
pm_math_Vector3_cross_ra ( xx + 795 , xx + 806 , xx + 809 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 719 , xx + 795 ) ;
pm_math_Vector3_cross_ra ( xx + 716 , xx + 795 , xx + 806 ) ; xx [ 716 ] =
0.03295989990236177 ; xx [ 717 ] = 0.01601356214944519 ; xx [ 718 ] =
0.01475302284711638 ; xx [ 812 ] = xx [ 716 ] ; xx [ 813 ] = - xx [ 717 ] ;
xx [ 814 ] = xx [ 718 ] ; xx [ 815 ] = 0.03226754951457088 ; xx [ 816 ] = -
0.02045999852744781 ; xx [ 817 ] = 5.644585223800618e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 815 , xx + 818 ) ; xx [ 821 ] =
xx [ 818 ] - xx [ 79 ] - xx [ 716 ] ; xx [ 716 ] = xx [ 819 ] + xx [ 120 ] +
xx [ 717 ] ; xx [ 717 ] = xx [ 820 ] + xx [ 117 ] - xx [ 718 ] ; xx [ 718 ] =
sqrt ( xx [ 821 ] * xx [ 821 ] + xx [ 716 ] * xx [ 716 ] + xx [ 717 ] * xx [
717 ] ) ; if ( xx [ 718 ] == 0.0 ) * derivErr = 1 ; xx [ 818 ] = input [ 120
] / xx [ 718 ] ; xx [ 819 ] = xx [ 818 ] * xx [ 821 ] ; xx [ 820 ] = xx [ 818
] * xx [ 716 ] ; xx [ 822 ] = xx [ 818 ] * xx [ 717 ] ; xx [ 823 ] = - xx [
819 ] ; xx [ 824 ] = - xx [ 820 ] ; xx [ 825 ] = - xx [ 822 ] ;
pm_math_Vector3_cross_ra ( xx + 812 , xx + 823 , xx + 826 ) ; xx [ 812 ] = xx
[ 735 ] ; xx [ 813 ] = xx [ 736 ] ; xx [ 814 ] = xx [ 738 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 812 , xx + 823 ) ;
pm_math_Vector3_cross_ra ( xx + 731 , xx + 823 , xx + 812 ) ; xx [ 731 ] =
1.392865120001009e-13 ; xx [ 732 ] = 0.05459122458051579 ; xx [ 733 ] =
4.374450014251545e-3 ; xx [ 829 ] = xx [ 731 ] ; xx [ 830 ] = - xx [ 732 ] ;
xx [ 831 ] = - xx [ 733 ] ; xx [ 832 ] = - 8.371860108687535e-13 ; xx [ 833 ]
= - 0.05202883057027102 ; xx [ 834 ] = - 5.800535526395379e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 832 , xx + 835 ) ; xx [ 838 ] =
xx [ 835 ] - xx [ 79 ] - xx [ 731 ] ; xx [ 79 ] = xx [ 836 ] + xx [ 120 ] +
xx [ 732 ] ; xx [ 120 ] = xx [ 837 ] + xx [ 117 ] + xx [ 733 ] ; xx [ 117 ] =
sqrt ( xx [ 838 ] * xx [ 838 ] + xx [ 79 ] * xx [ 79 ] + xx [ 120 ] * xx [
120 ] ) ; if ( xx [ 117 ] == 0.0 ) * derivErr = 1 ; xx [ 731 ] = input [ 136
] / xx [ 117 ] ; xx [ 732 ] = xx [ 731 ] * xx [ 838 ] ; xx [ 733 ] = xx [ 731
] * xx [ 79 ] ; xx [ 835 ] = xx [ 731 ] * xx [ 120 ] ; xx [ 839 ] = - xx [
732 ] ; xx [ 840 ] = - xx [ 733 ] ; xx [ 841 ] = - xx [ 835 ] ;
pm_math_Vector3_cross_ra ( xx + 829 , xx + 839 , xx + 842 ) ; xx [ 829 ] = xx
[ 638 ] ; xx [ 830 ] = xx [ 639 ] ; xx [ 831 ] = xx [ 751 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 829 , xx + 839 ) ;
pm_math_Vector3_cross_ra ( xx + 748 , xx + 839 , xx + 829 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 765 , xx + 748 ) ; xx [
836 ] = xx [ 175 ] * state [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
74 , xx + 265 , xx + 845 ) ; xx [ 74 ] = xx [ 845 ] * state [ 22 ] ; xx [ 75
] = xx [ 70 ] * state [ 23 ] ; xx [ 76 ] = xx [ 836 ] + xx [ 74 ] + xx [ 75 ]
; xx [ 77 ] = xx [ 748 ] + xx [ 76 ] ; xx [ 265 ] = xx [ 173 ] * state [ 21 ]
; xx [ 266 ] = xx [ 846 ] * state [ 22 ] ; xx [ 267 ] = xx [ 60 ] * state [
23 ] ; xx [ 837 ] = xx [ 265 ] + xx [ 266 ] + xx [ 267 ] ; xx [ 848 ] = xx [
749 ] + xx [ 837 ] ; xx [ 849 ] = xx [ 59 ] * state [ 21 ] ; xx [ 845 ] = xx
[ 847 ] * state [ 22 ] ; xx [ 846 ] = xx [ 58 ] * state [ 23 ] ; xx [ 847 ] =
xx [ 849 ] + xx [ 845 ] + xx [ 846 ] ; xx [ 850 ] = xx [ 750 ] + xx [ 847 ] ;
xx [ 851 ] = xx [ 77 ] ; xx [ 852 ] = xx [ 848 ] ; xx [ 853 ] = xx [ 850 ] ;
xx [ 854 ] = xx [ 77 ] * xx [ 143 ] ; xx [ 855 ] = xx [ 848 ] * xx [ 163 ] ;
xx [ 856 ] = xx [ 850 ] * xx [ 171 ] ; pm_math_Vector3_cross_ra ( xx + 851 ,
xx + 854 , xx + 857 ) ; xx [ 854 ] = 7.188464506654162e-13 ; xx [ 855 ] =
0.03225412823629766 ; xx [ 856 ] = - 3.133507134471407e-3 ; xx [ 143 ] =
0.7453544942628708 ; xx [ 163 ] = 4.148454829529507e-12 ; xx [ 171 ] = xx [
163 ] * input [ 107 ] ; xx [ 860 ] = 8.56489137069967e-12 ; xx [ 861 ] =
0.6666683417428341 ; xx [ 862 ] = xx [ 861 ] * input [ 107 ] ; xx [ 863 ] = (
xx [ 143 ] * xx [ 171 ] + xx [ 860 ] * xx [ 862 ] ) * xx [ 11 ] ; xx [ 864 ]
= xx [ 11 ] * ( xx [ 860 ] * xx [ 171 ] - xx [ 143 ] * xx [ 862 ] ) ; xx [
143 ] = input [ 107 ] - ( xx [ 861 ] * xx [ 862 ] + xx [ 163 ] * xx [ 171 ] )
* xx [ 11 ] ; xx [ 860 ] = - xx [ 863 ] ; xx [ 861 ] = xx [ 864 ] ; xx [ 862
] = xx [ 143 ] ; pm_math_Vector3_cross_ra ( xx + 854 , xx + 860 , xx + 865 )
; xx [ 163 ] = 5.287708455224579e-13 ; xx [ 171 ] = 0.03767096436270765 ; xx
[ 854 ] = 2.923671226993926e-3 ; xx [ 860 ] = - xx [ 163 ] ; xx [ 861 ] = -
xx [ 171 ] ; xx [ 862 ] = xx [ 854 ] ; xx [ 868 ] = 8.599010959602973e-12 ;
xx [ 869 ] = - 0.08308907864317851 ; xx [ 870 ] = - 0.1306612955003031 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 868 , xx + 871 ) ; xx [ 855 ] =
xx [ 871 ] + xx [ 129 ] + xx [ 163 ] ; xx [ 163 ] = xx [ 872 ] + xx [ 130 ] +
xx [ 171 ] ; xx [ 171 ] = xx [ 873 ] + xx [ 141 ] - xx [ 854 ] ; xx [ 854 ] =
sqrt ( xx [ 855 ] * xx [ 855 ] + xx [ 163 ] * xx [ 163 ] + xx [ 171 ] * xx [
171 ] ) ; if ( xx [ 854 ] == 0.0 ) * derivErr = 1 ; xx [ 856 ] = input [ 109
] / xx [ 854 ] ; xx [ 871 ] = xx [ 856 ] * xx [ 855 ] ; xx [ 872 ] = xx [ 856
] * xx [ 163 ] ; xx [ 873 ] = xx [ 856 ] * xx [ 171 ] ; xx [ 874 ] = - xx [
871 ] ; xx [ 875 ] = - xx [ 872 ] ; xx [ 876 ] = - xx [ 873 ] ;
pm_math_Vector3_cross_ra ( xx + 860 , xx + 874 , xx + 877 ) ; xx [ 860 ] = xx
[ 785 ] ; xx [ 861 ] = xx [ 786 ] ; xx [ 862 ] = xx [ 788 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 860 , xx + 874 ) ;
pm_math_Vector3_cross_ra ( xx + 781 , xx + 874 , xx + 860 ) ; xx [ 781 ] =
0.03234149932875941 ; xx [ 782 ] = 0.02029712378537596 ; xx [ 783 ] =
0.01526834402904475 ; xx [ 880 ] = - xx [ 781 ] ; xx [ 881 ] = - xx [ 782 ] ;
xx [ 882 ] = xx [ 783 ] ; xx [ 883 ] = - 0.02788730047518068 ; xx [ 884 ] = -
0.06226499915804137 ; xx [ 885 ] = - 0.1105856995801309 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 883 , xx + 886 ) ; xx [ 889 ] =
xx [ 886 ] + xx [ 129 ] + xx [ 781 ] ; xx [ 781 ] = xx [ 887 ] + xx [ 130 ] +
xx [ 782 ] ; xx [ 782 ] = xx [ 888 ] + xx [ 141 ] - xx [ 783 ] ; xx [ 783 ] =
sqrt ( xx [ 889 ] * xx [ 889 ] + xx [ 781 ] * xx [ 781 ] + xx [ 782 ] * xx [
782 ] ) ; if ( xx [ 783 ] == 0.0 ) * derivErr = 1 ; xx [ 886 ] = input [ 114
] / xx [ 783 ] ; xx [ 887 ] = xx [ 886 ] * xx [ 889 ] ; xx [ 888 ] = xx [ 886
] * xx [ 781 ] ; xx [ 890 ] = xx [ 886 ] * xx [ 782 ] ; xx [ 891 ] = - xx [
887 ] ; xx [ 892 ] = - xx [ 888 ] ; xx [ 893 ] = - xx [ 890 ] ;
pm_math_Vector3_cross_ra ( xx + 880 , xx + 891 , xx + 894 ) ; xx [ 880 ] = xx
[ 802 ] ; xx [ 881 ] = xx [ 803 ] ; xx [ 882 ] = xx [ 805 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 880 , xx + 891 ) ;
pm_math_Vector3_cross_ra ( xx + 798 , xx + 891 , xx + 880 ) ; xx [ 798 ] =
0.03234149932846699 ; xx [ 799 ] = 0.02029712378655961 ; xx [ 800 ] =
0.01526834402870608 ; xx [ 897 ] = xx [ 798 ] ; xx [ 898 ] = - xx [ 799 ] ;
xx [ 899 ] = xx [ 800 ] ; xx [ 900 ] = 0.02788730050748512 ; xx [ 901 ] = -
0.06226499918103524 ; xx [ 902 ] = - 0.1105856995772642 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 900 , xx + 903 ) ; xx [ 906 ] =
xx [ 903 ] + xx [ 129 ] - xx [ 798 ] ; xx [ 798 ] = xx [ 904 ] + xx [ 130 ] +
xx [ 799 ] ; xx [ 799 ] = xx [ 905 ] + xx [ 141 ] - xx [ 800 ] ; xx [ 800 ] =
sqrt ( xx [ 906 ] * xx [ 906 ] + xx [ 798 ] * xx [ 798 ] + xx [ 799 ] * xx [
799 ] ) ; if ( xx [ 800 ] == 0.0 ) * derivErr = 1 ; xx [ 903 ] = input [ 119
] / xx [ 800 ] ; xx [ 904 ] = xx [ 903 ] * xx [ 906 ] ; xx [ 905 ] = xx [ 903
] * xx [ 798 ] ; xx [ 907 ] = xx [ 903 ] * xx [ 799 ] ; xx [ 908 ] = - xx [
904 ] ; xx [ 909 ] = - xx [ 905 ] ; xx [ 910 ] = - xx [ 907 ] ;
pm_math_Vector3_cross_ra ( xx + 897 , xx + 908 , xx + 911 ) ; xx [ 897 ] = xx
[ 819 ] ; xx [ 898 ] = xx [ 820 ] ; xx [ 899 ] = xx [ 822 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 897 , xx + 908 ) ;
pm_math_Vector3_cross_ra ( xx + 815 , xx + 908 , xx + 897 ) ; xx [ 815 ] =
7.867570466502235e-13 ; xx [ 816 ] = 0.05039051001790674 ; xx [ 817 ] =
1.894890190564144e-3 ; xx [ 914 ] = - xx [ 815 ] ; xx [ 915 ] = - xx [ 816 ]
; xx [ 916 ] = - xx [ 817 ] ; xx [ 917 ] = 3.885494606759522e-12 ; xx [ 918 ]
= - 0.09411462191877414 ; xx [ 919 ] = - 0.1273910586185666 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 917 , xx + 920 ) ; xx [ 923 ] =
xx [ 920 ] + xx [ 129 ] + xx [ 815 ] ; xx [ 129 ] = xx [ 921 ] + xx [ 130 ] +
xx [ 816 ] ; xx [ 130 ] = xx [ 922 ] + xx [ 141 ] + xx [ 817 ] ; xx [ 141 ] =
sqrt ( xx [ 923 ] * xx [ 923 ] + xx [ 129 ] * xx [ 129 ] + xx [ 130 ] * xx [
130 ] ) ; if ( xx [ 141 ] == 0.0 ) * derivErr = 1 ; xx [ 815 ] = input [ 135
] / xx [ 141 ] ; xx [ 816 ] = xx [ 815 ] * xx [ 923 ] ; xx [ 817 ] = xx [ 815
] * xx [ 129 ] ; xx [ 920 ] = xx [ 815 ] * xx [ 130 ] ; xx [ 924 ] = - xx [
816 ] ; xx [ 925 ] = - xx [ 817 ] ; xx [ 926 ] = - xx [ 920 ] ;
pm_math_Vector3_cross_ra ( xx + 914 , xx + 924 , xx + 927 ) ; xx [ 914 ] = xx
[ 732 ] ; xx [ 915 ] = xx [ 733 ] ; xx [ 916 ] = xx [ 835 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 914 , xx + 924 ) ;
pm_math_Vector3_cross_ra ( xx + 832 , xx + 924 , xx + 914 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 851 , xx + 832 ) ; xx [
921 ] = xx [ 109 ] * state [ 27 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
102 , xx + 145 , xx + 930 ) ; xx [ 102 ] = xx [ 930 ] * state [ 28 ] ; xx [
103 ] = xx [ 98 ] * state [ 29 ] ; xx [ 104 ] = xx [ 921 ] + xx [ 102 ] - xx
[ 103 ] ; xx [ 105 ] = xx [ 832 ] + xx [ 104 ] ; xx [ 145 ] = xx [ 106 ] *
state [ 27 ] ; xx [ 146 ] = xx [ 931 ] * state [ 28 ] ; xx [ 147 ] = xx [ 97
] * state [ 29 ] ; xx [ 922 ] = xx [ 145 ] + xx [ 146 ] - xx [ 147 ] ; xx [
933 ] = xx [ 833 ] + xx [ 922 ] ; xx [ 934 ] = xx [ 80 ] * state [ 27 ] ; xx
[ 930 ] = xx [ 932 ] * state [ 28 ] ; xx [ 931 ] = xx [ 83 ] * state [ 29 ] ;
xx [ 932 ] = xx [ 934 ] + xx [ 930 ] + xx [ 931 ] ; xx [ 935 ] = xx [ 834 ] +
xx [ 932 ] ; xx [ 936 ] = xx [ 105 ] ; xx [ 937 ] = xx [ 933 ] ; xx [ 938 ] =
xx [ 935 ] ; xx [ 939 ] = xx [ 105 ] * xx [ 99 ] ; xx [ 940 ] = xx [ 933 ] *
xx [ 107 ] ; xx [ 941 ] = xx [ 935 ] * xx [ 126 ] ; pm_math_Vector3_cross_ra
( xx + 936 , xx + 939 , xx + 942 ) ; xx [ 939 ] = 3.290524933036545e-11 ; xx
[ 940 ] = 0.01673590256851844 ; xx [ 941 ] = 0.1971461327241312 ; xx [ 945 ]
= 6.437320495472446e-12 ; xx [ 946 ] = 0.09289991027792205 ; xx [ 947 ] = xx
[ 946 ] * input [ 15 ] ; xx [ 948 ] = 0.9956754524795487 ; xx [ 949 ] =
2.076280636928651e-10 ; xx [ 950 ] = xx [ 949 ] * input [ 15 ] ; xx [ 951 ] =
xx [ 11 ] * ( xx [ 945 ] * xx [ 947 ] + xx [ 948 ] * xx [ 950 ] ) ; xx [ 952
] = input [ 15 ] - ( xx [ 949 ] * xx [ 950 ] + xx [ 946 ] * xx [ 947 ] ) * xx
[ 11 ] ; xx [ 953 ] = ( xx [ 945 ] * xx [ 950 ] - xx [ 948 ] * xx [ 947 ] ) *
xx [ 11 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx + 951 , xx + 954 ) ; xx
[ 939 ] = - 0.01750679316316092 ; xx [ 940 ] = - 0.01290536032774895 ; xx [
941 ] = - 0.05164023244740774 ; xx [ 947 ] = 0.6253013331666792 ; xx [ 950 ]
= 0.2647300941138785 ; xx [ 957 ] = xx [ 950 ] * input [ 16 ] ; xx [ 958 ] =
0.2862028927871909 ; xx [ 959 ] = 0.6760208015813378 ; xx [ 960 ] = xx [ 959
] * input [ 16 ] ; xx [ 961 ] = ( xx [ 947 ] * xx [ 957 ] + xx [ 958 ] * xx [
960 ] ) * xx [ 11 ] ; xx [ 962 ] = xx [ 11 ] * ( xx [ 947 ] * xx [ 960 ] - xx
[ 958 ] * xx [ 957 ] ) ; xx [ 947 ] = input [ 16 ] - ( xx [ 959 ] * xx [ 960
] + xx [ 950 ] * xx [ 957 ] ) * xx [ 11 ] ; xx [ 957 ] = - xx [ 961 ] ; xx [
958 ] = xx [ 962 ] ; xx [ 959 ] = xx [ 947 ] ; pm_math_Vector3_cross_ra ( xx
+ 939 , xx + 957 , xx + 963 ) ; xx [ 939 ] = - 0.04082091629087376 ; xx [ 940
] = - 0.05961285214677275 ; xx [ 941 ] = - 0.05914702069254961 ; xx [ 950 ] =
0.6043991865730609 ; xx [ 957 ] = 0.3996382353334624 ; xx [ 958 ] = xx [ 957
] * input [ 17 ] ; xx [ 959 ] = 0.3801248530735284 ; xx [ 960 ] =
0.5748878153215694 ; xx [ 966 ] = xx [ 960 ] * input [ 17 ] ; xx [ 967 ] = (
xx [ 950 ] * xx [ 958 ] + xx [ 959 ] * xx [ 966 ] ) * xx [ 11 ] ; xx [ 968 ]
= xx [ 11 ] * ( xx [ 950 ] * xx [ 966 ] - xx [ 959 ] * xx [ 958 ] ) ; xx [
950 ] = input [ 17 ] - ( xx [ 960 ] * xx [ 966 ] + xx [ 957 ] * xx [ 958 ] )
* xx [ 11 ] ; xx [ 957 ] = - xx [ 967 ] ; xx [ 958 ] = xx [ 968 ] ; xx [ 959
] = xx [ 950 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx + 957 , xx + 969 )
; xx [ 939 ] = - 0.01611172203639097 ; xx [ 940 ] = 0.08940775463405408 ; xx
[ 941 ] = - 0.01738863530728779 ; xx [ 957 ] = 0.3738445815915403 ; xx [ 958
] = 0.05232566424469441 ; xx [ 959 ] = xx [ 958 ] * input [ 18 ] ; xx [ 960 ]
= 0.1283596099714154 ; xx [ 966 ] = 0.9170747320714838 ; xx [ 972 ] = xx [
966 ] * input [ 18 ] ; xx [ 973 ] = ( xx [ 957 ] * xx [ 959 ] + xx [ 960 ] *
xx [ 972 ] ) * xx [ 11 ] ; xx [ 974 ] = xx [ 11 ] * ( xx [ 960 ] * xx [ 959 ]
- xx [ 957 ] * xx [ 972 ] ) ; xx [ 957 ] = input [ 18 ] - ( xx [ 966 ] * xx [
972 ] + xx [ 958 ] * xx [ 959 ] ) * xx [ 11 ] ; xx [ 958 ] = xx [ 973 ] ; xx
[ 959 ] = xx [ 974 ] ; xx [ 960 ] = xx [ 957 ] ; pm_math_Vector3_cross_ra (
xx + 939 , xx + 958 , xx + 975 ) ; xx [ 939 ] = - 0.07813551322207424 ; xx [
940 ] = - 0.07488185776988014 ; xx [ 941 ] = - 0.08063127020363367 ; xx [ 958
] = 0.6719839501447126 ; xx [ 959 ] = 0.2032749862656283 ; xx [ 960 ] = xx [
959 ] * input [ 19 ] ; xx [ 966 ] = 0.2061892296031095 ; xx [ 972 ] =
0.6816178198244918 ; xx [ 978 ] = xx [ 972 ] * input [ 19 ] ; xx [ 979 ] = (
xx [ 958 ] * xx [ 960 ] + xx [ 966 ] * xx [ 978 ] ) * xx [ 11 ] ; xx [ 980 ]
= xx [ 11 ] * ( xx [ 958 ] * xx [ 978 ] - xx [ 966 ] * xx [ 960 ] ) ; xx [
958 ] = input [ 19 ] - ( xx [ 972 ] * xx [ 978 ] + xx [ 959 ] * xx [ 960 ] )
* xx [ 11 ] ; xx [ 981 ] = xx [ 979 ] ; xx [ 982 ] = xx [ 980 ] ; xx [ 983 ]
= xx [ 958 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx + 981 , xx + 984 ) ;
xx [ 939 ] = - 0.06541920003687404 ; xx [ 940 ] = - 0.06341232834231626 ; xx
[ 941 ] = - 0.03664426853416502 ; xx [ 959 ] = 0.3952613334176077 ; xx [ 960
] = 0.06996261369131997 ; xx [ 966 ] = xx [ 960 ] * input [ 20 ] ; xx [ 972 ]
= 0.15963610203949 ; xx [ 978 ] = 0.9018813812891651 ; xx [ 981 ] = xx [ 978
] * input [ 20 ] ; xx [ 982 ] = ( xx [ 959 ] * xx [ 966 ] + xx [ 972 ] * xx [
981 ] ) * xx [ 11 ] ; xx [ 983 ] = xx [ 11 ] * ( xx [ 959 ] * xx [ 981 ] - xx
[ 972 ] * xx [ 966 ] ) ; xx [ 959 ] = input [ 20 ] - ( xx [ 978 ] * xx [ 981
] + xx [ 960 ] * xx [ 966 ] ) * xx [ 11 ] ; xx [ 987 ] = xx [ 982 ] ; xx [
988 ] = xx [ 983 ] ; xx [ 989 ] = xx [ 959 ] ; pm_math_Vector3_cross_ra ( xx
+ 939 , xx + 987 , xx + 990 ) ; xx [ 939 ] = - 0.05343540310242927 ; xx [ 940
] = - 0.02914440309254185 ; xx [ 941 ] = - 0.01230147865112343 ; xx [ 960 ] =
0.1816444983963195 ; xx [ 966 ] = 5.97993263104886e-3 ; xx [ 972 ] = xx [ 966
] * input [ 21 ] ; xx [ 978 ] = 0.03235528515767411 ; xx [ 981 ] =
0.9828136405903428 ; xx [ 987 ] = xx [ 981 ] * input [ 21 ] ; xx [ 988 ] = (
xx [ 960 ] * xx [ 972 ] + xx [ 978 ] * xx [ 987 ] ) * xx [ 11 ] ; xx [ 989 ]
= xx [ 11 ] * ( xx [ 960 ] * xx [ 987 ] - xx [ 978 ] * xx [ 972 ] ) ; xx [
960 ] = input [ 21 ] - ( xx [ 981 ] * xx [ 987 ] + xx [ 966 ] * xx [ 972 ] )
* xx [ 11 ] ; xx [ 993 ] = - xx [ 988 ] ; xx [ 994 ] = xx [ 989 ] ; xx [ 995
] = xx [ 960 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx + 993 , xx + 996 )
; xx [ 939 ] = - 0.04174218435005596 ; xx [ 940 ] = 2.578507543879904e-3 ; xx
[ 941 ] = - 2.155619895922155e-3 ; xx [ 966 ] = 0.1177775862085695 ; xx [ 972
] = 1.357137734760766e-3 ; xx [ 978 ] = xx [ 972 ] * input [ 22 ] ; xx [ 981
] = 0.01144191508251483 ; xx [ 987 ] = 0.992973152176481 ; xx [ 993 ] = xx [
987 ] * input [ 22 ] ; xx [ 994 ] = ( xx [ 966 ] * xx [ 978 ] + xx [ 981 ] *
xx [ 993 ] ) * xx [ 11 ] ; xx [ 995 ] = xx [ 11 ] * ( xx [ 966 ] * xx [ 993 ]
- xx [ 981 ] * xx [ 978 ] ) ; xx [ 966 ] = input [ 22 ] - ( xx [ 987 ] * xx [
993 ] + xx [ 972 ] * xx [ 978 ] ) * xx [ 11 ] ; xx [ 999 ] = xx [ 994 ] ; xx
[ 1000 ] = xx [ 995 ] ; xx [ 1001 ] = xx [ 966 ] ; pm_math_Vector3_cross_ra (
xx + 939 , xx + 999 , xx + 1002 ) ; xx [ 939 ] = - 0.0298702228373676 ; xx [
940 ] = 0.03388119678505078 ; xx [ 941 ] = - 2.6595320728453e-4 ; xx [ 972 ]
= 0.05529818018829774 ; xx [ 978 ] = 5.077945039952384e-3 ; xx [ 981 ] = xx [
978 ] * input [ 23 ] ; xx [ 987 ] = 0.09130259478335537 ; xx [ 993 ] =
0.9942736856257739 ; xx [ 999 ] = xx [ 993 ] * input [ 23 ] ; xx [ 1000 ] = (
xx [ 972 ] * xx [ 981 ] + xx [ 987 ] * xx [ 999 ] ) * xx [ 11 ] ; xx [ 1001 ]
= xx [ 11 ] * ( xx [ 987 ] * xx [ 981 ] - xx [ 972 ] * xx [ 999 ] ) ; xx [
972 ] = input [ 23 ] - ( xx [ 993 ] * xx [ 999 ] + xx [ 978 ] * xx [ 981 ] )
* xx [ 11 ] ; xx [ 1005 ] = xx [ 1000 ] ; xx [ 1006 ] = xx [ 1001 ] ; xx [
1007 ] = xx [ 972 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx + 1005 , xx +
1008 ) ; xx [ 939 ] = - 0.02974420424265709 ; xx [ 940 ] =
0.07584660877144452 ; xx [ 941 ] = - 0.01081304937138132 ; xx [ 978 ] =
0.2347060105286138 ; xx [ 981 ] = 0.02433684704752729 ; xx [ 987 ] = xx [ 981
] * input [ 24 ] ; xx [ 993 ] = 0.1002253606239855 ; xx [ 999 ] =
0.9665793726256111 ; xx [ 1005 ] = xx [ 999 ] * input [ 24 ] ; xx [ 1006 ] =
( xx [ 978 ] * xx [ 987 ] + xx [ 993 ] * xx [ 1005 ] ) * xx [ 11 ] ; xx [
1007 ] = xx [ 11 ] * ( xx [ 993 ] * xx [ 987 ] - xx [ 978 ] * xx [ 1005 ] ) ;
xx [ 978 ] = input [ 24 ] - ( xx [ 999 ] * xx [ 1005 ] + xx [ 981 ] * xx [
987 ] ) * xx [ 11 ] ; xx [ 1011 ] = xx [ 1006 ] ; xx [ 1012 ] = xx [ 1007 ] ;
xx [ 1013 ] = xx [ 978 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx + 1011 ,
xx + 1014 ) ; xx [ 939 ] = - 0.08960460485429393 ; xx [ 940 ] = -
0.06291809277694642 ; xx [ 941 ] = - 0.1158139126272258 ; xx [ 981 ] =
0.7040109547062257 ; xx [ 987 ] = 0.2872839190275042 ; xx [ 993 ] = xx [ 987
] * input [ 25 ] ; xx [ 999 ] = 0.2453906898907255 ; xx [ 1005 ] =
0.6013484304766922 ; xx [ 1011 ] = xx [ 1005 ] * input [ 25 ] ; xx [ 1012 ] =
( xx [ 981 ] * xx [ 993 ] + xx [ 999 ] * xx [ 1011 ] ) * xx [ 11 ] ; xx [
1013 ] = xx [ 11 ] * ( xx [ 981 ] * xx [ 1011 ] - xx [ 999 ] * xx [ 993 ] ) ;
xx [ 981 ] = input [ 25 ] - ( xx [ 1005 ] * xx [ 1011 ] + xx [ 987 ] * xx [
993 ] ) * xx [ 11 ] ; xx [ 1017 ] = xx [ 1012 ] ; xx [ 1018 ] = xx [ 1013 ] ;
xx [ 1019 ] = xx [ 981 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx + 1017 ,
xx + 1020 ) ; xx [ 939 ] = - 0.08896801860071794 ; xx [ 940 ] = -
0.06299677374886863 ; xx [ 941 ] = - 0.05389307116019502 ; xx [ 987 ] =
0.5606844803157269 ; xx [ 993 ] = 0.2326195333517636 ; xx [ 999 ] = xx [ 993
] * input [ 26 ] ; xx [ 1005 ] = 0.3045325852124455 ; xx [ 1011 ] =
0.7340170098711037 ; xx [ 1017 ] = xx [ 1011 ] * input [ 26 ] ; xx [ 1018 ] =
( xx [ 987 ] * xx [ 999 ] + xx [ 1005 ] * xx [ 1017 ] ) * xx [ 11 ] ; xx [
1019 ] = xx [ 11 ] * ( xx [ 987 ] * xx [ 1017 ] - xx [ 1005 ] * xx [ 999 ] )
; xx [ 987 ] = input [ 26 ] - ( xx [ 1011 ] * xx [ 1017 ] + xx [ 993 ] * xx [
999 ] ) * xx [ 11 ] ; xx [ 1023 ] = xx [ 1018 ] ; xx [ 1024 ] = xx [ 1019 ] ;
xx [ 1025 ] = xx [ 987 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx + 1023 ,
xx + 1026 ) ; xx [ 939 ] = - 0.07773176654997652 ; xx [ 940 ] = -
0.04357084081088054 ; xx [ 941 ] = - 0.02434982318954793 ; xx [ 993 ] =
0.2749898426753138 ; xx [ 999 ] = 0.03833910159182111 ; xx [ 1005 ] = xx [
999 ] * input [ 27 ] ; xx [ 1011 ] = 0.1326553343289313 ; xx [ 1017 ] =
0.9514795121223674 ; xx [ 1023 ] = xx [ 1017 ] * input [ 27 ] ; xx [ 1024 ] =
( xx [ 993 ] * xx [ 1005 ] + xx [ 1011 ] * xx [ 1023 ] ) * xx [ 11 ] ; xx [
1025 ] = xx [ 11 ] * ( xx [ 993 ] * xx [ 1023 ] - xx [ 1011 ] * xx [ 1005 ] )
; xx [ 993 ] = input [ 27 ] - ( xx [ 1017 ] * xx [ 1023 ] + xx [ 999 ] * xx [
1005 ] ) * xx [ 11 ] ; xx [ 1029 ] = xx [ 1024 ] ; xx [ 1030 ] = xx [ 1025 ]
; xx [ 1031 ] = xx [ 993 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx + 1029
, xx + 1032 ) ; xx [ 939 ] = - 0.03035817942245689 ; xx [ 940 ] = -
0.03213171883326053 ; xx [ 941 ] = - 0.03537286040648836 ; xx [ 999 ] =
0.4891666736071779 ; xx [ 1005 ] = 0.3404924332321762 ; xx [ 1011 ] = xx [
1005 ] * input [ 28 ] ; xx [ 1017 ] = 0.4587386818313518 ; xx [ 1023 ] =
0.6590445281886155 ; xx [ 1029 ] = xx [ 1023 ] * input [ 28 ] ; xx [ 1030 ] =
( xx [ 999 ] * xx [ 1011 ] + xx [ 1017 ] * xx [ 1029 ] ) * xx [ 11 ] ; xx [
1031 ] = xx [ 11 ] * ( xx [ 999 ] * xx [ 1029 ] - xx [ 1017 ] * xx [ 1011 ] )
; xx [ 999 ] = input [ 28 ] - ( xx [ 1023 ] * xx [ 1029 ] + xx [ 1005 ] * xx
[ 1011 ] ) * xx [ 11 ] ; xx [ 1035 ] = - xx [ 1030 ] ; xx [ 1036 ] = xx [
1031 ] ; xx [ 1037 ] = xx [ 999 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1035 , xx + 1038 ) ; xx [ 939 ] = - 0.06547974787437513 ; xx [ 940 ] = -
5.296907315530508e-3 ; xx [ 941 ] = - 6.867139918208744e-3 ; xx [ 1005 ] =
0.08330673857160131 ; xx [ 1011 ] = 0.01332357166802973 ; xx [ 1017 ] = xx [
1011 ] * input [ 29 ] ; xx [ 1023 ] = 0.1573638297661972 ; xx [ 1029 ] =
0.9839304319045555 ; xx [ 1035 ] = xx [ 1029 ] * input [ 29 ] ; xx [ 1036 ] =
( xx [ 1005 ] * xx [ 1017 ] + xx [ 1023 ] * xx [ 1035 ] ) * xx [ 11 ] ; xx [
1037 ] = xx [ 11 ] * ( xx [ 1005 ] * xx [ 1035 ] - xx [ 1023 ] * xx [ 1017 ]
) ; xx [ 1005 ] = input [ 29 ] - ( xx [ 1029 ] * xx [ 1035 ] + xx [ 1011 ] *
xx [ 1017 ] ) * xx [ 11 ] ; xx [ 1041 ] = xx [ 1036 ] ; xx [ 1042 ] = xx [
1037 ] ; xx [ 1043 ] = xx [ 1005 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1041 , xx + 1044 ) ; xx [ 939 ] = - 0.05341786692824899 ; xx [ 940 ] =
0.02810056500516415 ; xx [ 941 ] = - 3.330290106866822e-3 ; xx [ 1011 ] =
0.05921261819000172 ; xx [ 1017 ] = 4.064864382457281e-3 ; xx [ 1023 ] = xx [
1017 ] * input [ 30 ] ; xx [ 1029 ] = 0.06836669742036049 ; xx [ 1035 ] =
0.9958932359487489 ; xx [ 1041 ] = xx [ 1035 ] * input [ 30 ] ; xx [ 1042 ] =
( xx [ 1011 ] * xx [ 1023 ] + xx [ 1029 ] * xx [ 1041 ] ) * xx [ 11 ] ; xx [
1043 ] = xx [ 11 ] * ( xx [ 1029 ] * xx [ 1023 ] - xx [ 1011 ] * xx [ 1041 ]
) ; xx [ 1011 ] = input [ 30 ] - ( xx [ 1035 ] * xx [ 1041 ] + xx [ 1017 ] *
xx [ 1023 ] ) * xx [ 11 ] ; xx [ 1047 ] = xx [ 1042 ] ; xx [ 1048 ] = xx [
1043 ] ; xx [ 1049 ] = xx [ 1011 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1047 , xx + 1050 ) ; xx [ 939 ] = - 0.04168227632510423 ; xx [ 940 ] =
0.05293569742340269 ; xx [ 941 ] = - 5.452647462001437e-3 ; xx [ 1017 ] =
0.09627478574816675 ; xx [ 1023 ] = 8.967548559563873e-3 ; xx [ 1029 ] = xx [
1023 ] * input [ 31 ] ; xx [ 1035 ] = 0.09230933376714978 ; xx [ 1041 ] =
0.9910245887975947 ; xx [ 1047 ] = xx [ 1041 ] * input [ 31 ] ; xx [ 1048 ] =
( xx [ 1017 ] * xx [ 1029 ] + xx [ 1035 ] * xx [ 1047 ] ) * xx [ 11 ] ; xx [
1049 ] = xx [ 11 ] * ( xx [ 1035 ] * xx [ 1029 ] - xx [ 1017 ] * xx [ 1047 ]
) ; xx [ 1017 ] = input [ 31 ] - ( xx [ 1041 ] * xx [ 1047 ] + xx [ 1023 ] *
xx [ 1029 ] ) * xx [ 11 ] ; xx [ 1053 ] = xx [ 1048 ] ; xx [ 1054 ] = xx [
1049 ] ; xx [ 1055 ] = xx [ 1017 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1053 , xx + 1056 ) ; xx [ 939 ] = - 0.1008247640510678 ; xx [ 940 ] = -
0.05389196638887112 ; xx [ 941 ] = - 0.08618641347308455 ; xx [ 1023 ] =
0.661172783054223 ; xx [ 1029 ] = 0.3060055400884168 ; xx [ 1035 ] = xx [
1029 ] * input [ 32 ] ; xx [ 1041 ] = 0.2877084151115709 ; xx [ 1047 ] =
0.6216389854710833 ; xx [ 1053 ] = xx [ 1047 ] * input [ 32 ] ; xx [ 1054 ] =
( xx [ 1023 ] * xx [ 1035 ] + xx [ 1041 ] * xx [ 1053 ] ) * xx [ 11 ] ; xx [
1055 ] = xx [ 11 ] * ( xx [ 1023 ] * xx [ 1053 ] - xx [ 1041 ] * xx [ 1035 ]
) ; xx [ 1023 ] = input [ 32 ] - ( xx [ 1047 ] * xx [ 1053 ] + xx [ 1029 ] *
xx [ 1035 ] ) * xx [ 11 ] ; xx [ 1059 ] = xx [ 1054 ] ; xx [ 1060 ] = xx [
1055 ] ; xx [ 1061 ] = xx [ 1023 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1059 , xx + 1062 ) ; xx [ 939 ] = - 0.1004655964981073 ; xx [ 940 ] = -
0.03582136460888253 ; xx [ 941 ] = - 0.03586499238265095 ; xx [ 1029 ] =
0.2631242048848931 ; xx [ 1035 ] = 0.1314352705630057 ; xx [ 1041 ] = xx [
1035 ] * input [ 33 ] ; xx [ 1047 ] = 0.4271022177782172 ; xx [ 1053 ] =
0.8550287235085443 ; xx [ 1059 ] = xx [ 1053 ] * input [ 33 ] ; xx [ 1060 ] =
( xx [ 1029 ] * xx [ 1041 ] + xx [ 1047 ] * xx [ 1059 ] ) * xx [ 11 ] ; xx [
1061 ] = xx [ 11 ] * ( xx [ 1029 ] * xx [ 1059 ] - xx [ 1047 ] * xx [ 1041 ]
) ; xx [ 1029 ] = input [ 33 ] - ( xx [ 1053 ] * xx [ 1059 ] + xx [ 1035 ] *
xx [ 1041 ] ) * xx [ 11 ] ; xx [ 1065 ] = xx [ 1060 ] ; xx [ 1066 ] = xx [
1061 ] ; xx [ 1067 ] = xx [ 1029 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1065 , xx + 1068 ) ; xx [ 939 ] = - 0.08913241730412479 ; xx [ 940 ] = -
0.01002385799363545 ; xx [ 941 ] = - 0.01767933169316634 ; xx [ 1035 ] =
0.06280224623279192 ; xx [ 1041 ] = 0.02051569230480004 ; xx [ 1047 ] = xx [
1041 ] * input [ 34 ] ; xx [ 1053 ] = 0.3098441770463061 ; xx [ 1059 ] =
0.9484890986130882 ; xx [ 1065 ] = xx [ 1059 ] * input [ 34 ] ; xx [ 1066 ] =
( xx [ 1035 ] * xx [ 1047 ] + xx [ 1053 ] * xx [ 1065 ] ) * xx [ 11 ] ; xx [
1067 ] = xx [ 11 ] * ( xx [ 1035 ] * xx [ 1065 ] - xx [ 1053 ] * xx [ 1047 ]
) ; xx [ 1035 ] = input [ 34 ] - ( xx [ 1059 ] * xx [ 1065 ] + xx [ 1041 ] *
xx [ 1047 ] ) * xx [ 11 ] ; xx [ 1071 ] = xx [ 1066 ] ; xx [ 1072 ] = xx [
1067 ] ; xx [ 1073 ] = xx [ 1035 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1071 , xx + 1074 ) ; xx [ 939 ] = - 0.07763897849411783 ; xx [ 940 ] =
0.02926835419972364 ; xx [ 941 ] = - 0.01269421207333463 ; xx [ 1041 ] =
0.1126124065964388 ; xx [ 1047 ] = 0.02994703367582809 ; xx [ 1053 ] = xx [
1047 ] * input [ 35 ] ; xx [ 1059 ] = 0.255247291818142 ; xx [ 1065 ] =
0.9598283393784962 ; xx [ 1071 ] = xx [ 1065 ] * input [ 35 ] ; xx [ 1072 ] =
( xx [ 1041 ] * xx [ 1053 ] + xx [ 1059 ] * xx [ 1071 ] ) * xx [ 11 ] ; xx [
1073 ] = xx [ 11 ] * ( xx [ 1059 ] * xx [ 1053 ] - xx [ 1041 ] * xx [ 1071 ]
) ; xx [ 1041 ] = input [ 35 ] - ( xx [ 1065 ] * xx [ 1071 ] + xx [ 1047 ] *
xx [ 1053 ] ) * xx [ 11 ] ; xx [ 1077 ] = xx [ 1072 ] ; xx [ 1078 ] = xx [
1073 ] ; xx [ 1079 ] = xx [ 1041 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1077 , xx + 1080 ) ; xx [ 939 ] = - 0.0650908352898615 ; xx [ 940 ] =
0.05673454466592224 ; xx [ 941 ] = - 0.01754534783938935 ; xx [ 1047 ] =
0.2624187067767951 ; xx [ 1053 ] = 0.07539763865837239 ; xx [ 1059 ] = xx [
1053 ] * input [ 36 ] ; xx [ 1065 ] = 0.2656534715216997 ; xx [ 1071 ] =
0.9245971292875649 ; xx [ 1077 ] = xx [ 1071 ] * input [ 36 ] ; xx [ 1078 ] =
( xx [ 1047 ] * xx [ 1059 ] + xx [ 1065 ] * xx [ 1077 ] ) * xx [ 11 ] ; xx [
1079 ] = xx [ 11 ] * ( xx [ 1065 ] * xx [ 1059 ] - xx [ 1047 ] * xx [ 1077 ]
) ; xx [ 1047 ] = input [ 36 ] - ( xx [ 1071 ] * xx [ 1077 ] + xx [ 1053 ] *
xx [ 1059 ] ) * xx [ 11 ] ; xx [ 1083 ] = xx [ 1078 ] ; xx [ 1084 ] = xx [
1079 ] ; xx [ 1085 ] = xx [ 1047 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1083 , xx + 1086 ) ; xx [ 939 ] = - 0.05277755577526828 ; xx [ 940 ] =
0.07507634805077533 ; xx [ 941 ] = - 0.02557099641168105 ; xx [ 1053 ] =
0.4218960054902527 ; xx [ 1059 ] = 0.1353871726335023 ; xx [ 1065 ] = xx [
1059 ] * input [ 37 ] ; xx [ 1071 ] = 0.2739231083818127 ; xx [ 1077 ] =
0.8536042436235428 ; xx [ 1083 ] = xx [ 1077 ] * input [ 37 ] ; xx [ 1084 ] =
( xx [ 1053 ] * xx [ 1065 ] + xx [ 1071 ] * xx [ 1083 ] ) * xx [ 11 ] ; xx [
1085 ] = xx [ 11 ] * ( xx [ 1071 ] * xx [ 1065 ] - xx [ 1053 ] * xx [ 1083 ]
) ; xx [ 1053 ] = input [ 37 ] - ( xx [ 1077 ] * xx [ 1083 ] + xx [ 1059 ] *
xx [ 1065 ] ) * xx [ 11 ] ; xx [ 1089 ] = xx [ 1084 ] ; xx [ 1090 ] = xx [
1085 ] ; xx [ 1091 ] = xx [ 1053 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1089 , xx + 1092 ) ; xx [ 939 ] = - 0.04146508584349638 ; xx [ 940 ] =
0.08823626900202458 ; xx [ 941 ] = - 0.03394340829250521 ; xx [ 1059 ] =
0.5420216016703115 ; xx [ 1065 ] = 0.1665270222508411 ; xx [ 1071 ] = xx [
1065 ] * input [ 38 ] ; xx [ 1077 ] = 0.2419081906541831 ; xx [ 1083 ] =
0.7873765055406705 ; xx [ 1089 ] = xx [ 1083 ] * input [ 38 ] ; xx [ 1090 ] =
( xx [ 1059 ] * xx [ 1071 ] + xx [ 1077 ] * xx [ 1089 ] ) * xx [ 11 ] ; xx [
1091 ] = xx [ 11 ] * ( xx [ 1077 ] * xx [ 1071 ] - xx [ 1059 ] * xx [ 1089 ]
) ; xx [ 1059 ] = input [ 38 ] - ( xx [ 1083 ] * xx [ 1089 ] + xx [ 1065 ] *
xx [ 1071 ] ) * xx [ 11 ] ; xx [ 1095 ] = xx [ 1090 ] ; xx [ 1096 ] = xx [
1091 ] ; xx [ 1097 ] = xx [ 1059 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1095 , xx + 1098 ) ; xx [ 939 ] = - 0.01725167774610059 ; xx [ 940 ] = -
7.293875250063496e-3 ; xx [ 941 ] = - 0.0148852216814814 ; xx [ 1065 ] =
0.6632024936583343 ; xx [ 1071 ] = 0.1731754394844267 ; xx [ 1077 ] = xx [
1071 ] * input [ 39 ] ; xx [ 1083 ] = 0.1839610466043279 ; xx [ 1089 ] =
0.7045076670249825 ; xx [ 1095 ] = xx [ 1089 ] * input [ 39 ] ; xx [ 1096 ] =
( xx [ 1065 ] * xx [ 1077 ] + xx [ 1083 ] * xx [ 1095 ] ) * xx [ 11 ] ; xx [
1097 ] = xx [ 11 ] * ( xx [ 1065 ] * xx [ 1095 ] - xx [ 1083 ] * xx [ 1077 ]
) ; xx [ 1065 ] = input [ 39 ] - ( xx [ 1089 ] * xx [ 1095 ] + xx [ 1071 ] *
xx [ 1077 ] ) * xx [ 11 ] ; xx [ 1101 ] = - xx [ 1096 ] ; xx [ 1102 ] = xx [
1097 ] ; xx [ 1103 ] = xx [ 1065 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1101 , xx + 1104 ) ; xx [ 939 ] = - 0.1088176366578311 ; xx [ 940 ] = -
0.03672198862995138 ; xx [ 941 ] = - 0.1164296265327258 ; xx [ 1071 ] =
0.6776280350405145 ; xx [ 1077 ] = 0.427089070547183 ; xx [ 1083 ] = xx [
1077 ] * input [ 40 ] ; xx [ 1089 ] = 0.3192159680645557 ; xx [ 1095 ] =
0.5064744195701136 ; xx [ 1101 ] = xx [ 1095 ] * input [ 40 ] ; xx [ 1102 ] =
( xx [ 1071 ] * xx [ 1083 ] + xx [ 1089 ] * xx [ 1101 ] ) * xx [ 11 ] ; xx [
1103 ] = xx [ 11 ] * ( xx [ 1071 ] * xx [ 1101 ] - xx [ 1089 ] * xx [ 1083 ]
) ; xx [ 1071 ] = input [ 40 ] - ( xx [ 1095 ] * xx [ 1101 ] + xx [ 1077 ] *
xx [ 1083 ] ) * xx [ 11 ] ; xx [ 1107 ] = xx [ 1102 ] ; xx [ 1108 ] = xx [
1103 ] ; xx [ 1109 ] = xx [ 1071 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1107 , xx + 1110 ) ; xx [ 939 ] = - 0.1090246450527187 ; xx [ 940 ] = -
0.0393561065615584 ; xx [ 941 ] = - 0.06805735492308039 ; xx [ 1077 ] =
0.5197036589200118 ; xx [ 1083 ] = 0.3653225989192338 ; xx [ 1089 ] = xx [
1083 ] * input [ 41 ] ; xx [ 1095 ] = 0.4441325812467261 ; xx [ 1101 ] =
0.6318178185989765 ; xx [ 1107 ] = xx [ 1101 ] * input [ 41 ] ; xx [ 1108 ] =
( xx [ 1077 ] * xx [ 1089 ] + xx [ 1095 ] * xx [ 1107 ] ) * xx [ 11 ] ; xx [
1109 ] = xx [ 11 ] * ( xx [ 1077 ] * xx [ 1107 ] - xx [ 1095 ] * xx [ 1089 ]
) ; xx [ 1077 ] = input [ 41 ] - ( xx [ 1101 ] * xx [ 1107 ] + xx [ 1083 ] *
xx [ 1089 ] ) * xx [ 11 ] ; xx [ 1113 ] = xx [ 1108 ] ; xx [ 1114 ] = xx [
1109 ] ; xx [ 1115 ] = xx [ 1077 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1113 , xx + 1116 ) ; xx [ 939 ] = - 0.1085660128406191 ; xx [ 940 ] = -
8.240157635229641e-3 ; xx [ 941 ] = - 0.0383302197705869 ; xx [ 1083 ] =
0.02566070414415076 ; xx [ 1089 ] = 0.01743713672443727 ; xx [ 1095 ] = xx [
1089 ] * input [ 42 ] ; xx [ 1101 ] = 0.5617718096747571 ; xx [ 1107 ] =
0.8267102928961441 ; xx [ 1113 ] = xx [ 1107 ] * input [ 42 ] ; xx [ 1114 ] =
( xx [ 1083 ] * xx [ 1095 ] + xx [ 1101 ] * xx [ 1113 ] ) * xx [ 11 ] ; xx [
1115 ] = xx [ 11 ] * ( xx [ 1083 ] * xx [ 1113 ] - xx [ 1101 ] * xx [ 1095 ]
) ; xx [ 1083 ] = input [ 42 ] - ( xx [ 1107 ] * xx [ 1113 ] + xx [ 1089 ] *
xx [ 1095 ] ) * xx [ 11 ] ; xx [ 1119 ] = xx [ 1114 ] ; xx [ 1120 ] = xx [
1115 ] ; xx [ 1121 ] = xx [ 1083 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1119 , xx + 1122 ) ; xx [ 939 ] = - 0.1002889443706825 ; xx [ 940 ] =
0.0215172771559628 ; xx [ 941 ] = - 0.03134160901195143 ; xx [ 1089 ] =
0.1937497476864955 ; xx [ 1095 ] = 0.1060397759083277 ; xx [ 1101 ] = xx [
1095 ] * input [ 43 ] ; xx [ 1107 ] = 0.4682442847113035 ; xx [ 1113 ] =
0.8555488829002882 ; xx [ 1119 ] = xx [ 1113 ] * input [ 43 ] ; xx [ 1120 ] =
( xx [ 1089 ] * xx [ 1101 ] + xx [ 1107 ] * xx [ 1119 ] ) * xx [ 11 ] ; xx [
1121 ] = xx [ 11 ] * ( xx [ 1107 ] * xx [ 1101 ] - xx [ 1089 ] * xx [ 1119 ]
) ; xx [ 1089 ] = input [ 43 ] - ( xx [ 1113 ] * xx [ 1119 ] + xx [ 1095 ] *
xx [ 1101 ] ) * xx [ 11 ] ; xx [ 1125 ] = xx [ 1120 ] ; xx [ 1126 ] = xx [
1121 ] ; xx [ 1127 ] = xx [ 1089 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1125 , xx + 1128 ) ; xx [ 939 ] = - 0.08825404787879754 ; xx [ 940 ] =
0.05085694606056507 ; xx [ 941 ] = - 0.04022128746621207 ; xx [ 1095 ] =
0.4329293027057527 ; xx [ 1101 ] = 0.2388834572967249 ; xx [ 1107 ] = xx [
1101 ] * input [ 44 ] ; xx [ 1113 ] = 0.4199252650269746 ; xx [ 1119 ] =
0.7610319865029983 ; xx [ 1125 ] = xx [ 1119 ] * input [ 44 ] ; xx [ 1126 ] =
( xx [ 1095 ] * xx [ 1107 ] + xx [ 1113 ] * xx [ 1125 ] ) * xx [ 11 ] ; xx [
1127 ] = xx [ 11 ] * ( xx [ 1113 ] * xx [ 1107 ] - xx [ 1095 ] * xx [ 1125 ]
) ; xx [ 1095 ] = input [ 44 ] - ( xx [ 1119 ] * xx [ 1125 ] + xx [ 1101 ] *
xx [ 1107 ] ) * xx [ 11 ] ; xx [ 1131 ] = xx [ 1126 ] ; xx [ 1132 ] = xx [
1127 ] ; xx [ 1133 ] = xx [ 1095 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1131 , xx + 1134 ) ; xx [ 939 ] = - 0.07778373213920264 ; xx [ 940 ] =
0.06920777240521035 ; xx [ 941 ] = - 0.05836215232293852 ; xx [ 1101 ] =
0.6395227562463073 ; xx [ 1107 ] = 0.2517984334672473 ; xx [ 1113 ] = xx [
1107 ] * input [ 45 ] ; xx [ 1119 ] = 0.2661078040580403 ; xx [ 1125 ] =
0.6758659850635882 ; xx [ 1131 ] = xx [ 1125 ] * input [ 45 ] ; xx [ 1132 ] =
( xx [ 1101 ] * xx [ 1113 ] + xx [ 1119 ] * xx [ 1131 ] ) * xx [ 11 ] ; xx [
1133 ] = xx [ 11 ] * ( xx [ 1119 ] * xx [ 1113 ] - xx [ 1101 ] * xx [ 1131 ]
) ; xx [ 1101 ] = input [ 45 ] - ( xx [ 1125 ] * xx [ 1131 ] + xx [ 1107 ] *
xx [ 1113 ] ) * xx [ 11 ] ; xx [ 1137 ] = xx [ 1132 ] ; xx [ 1138 ] = xx [
1133 ] ; xx [ 1139 ] = xx [ 1101 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1137 , xx + 1140 ) ; xx [ 939 ] = - 0.0602032403376731 ; xx [ 940 ] =
0.08203106316879522 ; xx [ 941 ] = - 0.0748733734520845 ; xx [ 1107 ] =
0.6940948608111935 ; xx [ 1113 ] = 0.2053956680732152 ; xx [ 1119 ] = xx [
1113 ] * input [ 46 ] ; xx [ 1125 ] = 0.1957799622059196 ; xx [ 1131 ] =
0.6616004459875284 ; xx [ 1137 ] = xx [ 1131 ] * input [ 46 ] ; xx [ 1138 ] =
( xx [ 1107 ] * xx [ 1119 ] + xx [ 1125 ] * xx [ 1137 ] ) * xx [ 11 ] ; xx [
1139 ] = xx [ 11 ] * ( xx [ 1125 ] * xx [ 1119 ] - xx [ 1107 ] * xx [ 1137 ]
) ; xx [ 1107 ] = input [ 46 ] - ( xx [ 1131 ] * xx [ 1137 ] + xx [ 1113 ] *
xx [ 1119 ] ) * xx [ 11 ] ; xx [ 1143 ] = xx [ 1138 ] ; xx [ 1144 ] = xx [
1139 ] ; xx [ 1145 ] = xx [ 1107 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1143 , xx + 1146 ) ; xx [ 939 ] = - 0.1143978971912872 ; xx [ 940 ] = -
0.01074410159992742 ; xx [ 941 ] = - 0.1239980564908309 ; xx [ 1113 ] =
0.6377272327882759 ; xx [ 1119 ] = 0.6305933820461086 ; xx [ 1125 ] = xx [
1119 ] * input [ 47 ] ; xx [ 1131 ] = 0.3199249703720028 ; xx [ 1137 ] =
0.3054569960114387 ; xx [ 1143 ] = xx [ 1137 ] * input [ 47 ] ; xx [ 1144 ] =
( xx [ 1113 ] * xx [ 1125 ] + xx [ 1131 ] * xx [ 1143 ] ) * xx [ 11 ] ; xx [
1145 ] = xx [ 11 ] * ( xx [ 1113 ] * xx [ 1143 ] - xx [ 1131 ] * xx [ 1125 ]
) ; xx [ 1113 ] = input [ 47 ] - ( xx [ 1137 ] * xx [ 1143 ] + xx [ 1119 ] *
xx [ 1125 ] ) * xx [ 11 ] ; xx [ 1149 ] = xx [ 1144 ] ; xx [ 1150 ] = xx [
1145 ] ; xx [ 1151 ] = xx [ 1113 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1149 , xx + 1152 ) ; xx [ 939 ] = - 0.1151109708215916 ; xx [ 940 ] = -
0.01075804635765636 ; xx [ 941 ] = - 0.08461401534740115 ; xx [ 1119 ] =
0.4666321198618352 ; xx [ 1125 ] = 0.4902460693848289 ; xx [ 1131 ] = xx [
1125 ] * input [ 48 ] ; xx [ 1137 ] = 0.5095672592114674 ; xx [ 1143 ] =
0.53127626006221 ; xx [ 1149 ] = xx [ 1143 ] * input [ 48 ] ; xx [ 1150 ] = (
xx [ 1119 ] * xx [ 1131 ] + xx [ 1137 ] * xx [ 1149 ] ) * xx [ 11 ] ; xx [
1151 ] = xx [ 11 ] * ( xx [ 1119 ] * xx [ 1149 ] - xx [ 1137 ] * xx [ 1131 ]
) ; xx [ 1119 ] = input [ 48 ] - ( xx [ 1143 ] * xx [ 1149 ] + xx [ 1125 ] *
xx [ 1131 ] ) * xx [ 11 ] ; xx [ 1155 ] = xx [ 1150 ] ; xx [ 1156 ] = xx [
1151 ] ; xx [ 1157 ] = xx [ 1119 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1155 , xx + 1158 ) ; xx [ 939 ] = - 0.1089181529967568 ; xx [ 940 ] =
0.02522537869168801 ; xx [ 941 ] = - 0.06782609012651207 ; xx [ 1125 ] =
0.5150379189616971 ; xx [ 1131 ] = 0.4000839555183756 ; xx [ 1137 ] = xx [
1131 ] * input [ 49 ] ; xx [ 1143 ] = 0.4650464120507912 ; xx [ 1149 ] =
0.598665687347338 ; xx [ 1155 ] = xx [ 1149 ] * input [ 49 ] ; xx [ 1156 ] =
( xx [ 1125 ] * xx [ 1137 ] + xx [ 1143 ] * xx [ 1155 ] ) * xx [ 11 ] ; xx [
1157 ] = xx [ 11 ] * ( xx [ 1143 ] * xx [ 1137 ] - xx [ 1125 ] * xx [ 1155 ]
) ; xx [ 1125 ] = input [ 49 ] - ( xx [ 1149 ] * xx [ 1155 ] + xx [ 1131 ] *
xx [ 1137 ] ) * xx [ 11 ] ; xx [ 1161 ] = xx [ 1156 ] ; xx [ 1162 ] = xx [
1157 ] ; xx [ 1163 ] = xx [ 1125 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1161 , xx + 1164 ) ; xx [ 939 ] = - 0.06588460407050081 ; xx [ 940 ] = -
0.07959463952718712 ; xx [ 941 ] = - 0.09123943252004506 ; xx [ 1131 ] =
0.7220158820274279 ; xx [ 1137 ] = 0.05371025093528867 ; xx [ 1143 ] = xx [
1137 ] * input [ 50 ] ; xx [ 1149 ] = 0.05117149400750862 ; xx [ 1155 ] =
0.6878878929343526 ; xx [ 1161 ] = xx [ 1155 ] * input [ 50 ] ; xx [ 1162 ] =
( xx [ 1131 ] * xx [ 1143 ] + xx [ 1149 ] * xx [ 1161 ] ) * xx [ 11 ] ; xx [
1163 ] = xx [ 11 ] * ( xx [ 1131 ] * xx [ 1161 ] - xx [ 1149 ] * xx [ 1143 ]
) ; xx [ 1131 ] = input [ 50 ] - ( xx [ 1155 ] * xx [ 1161 ] + xx [ 1137 ] *
xx [ 1143 ] ) * xx [ 11 ] ; xx [ 1167 ] = xx [ 1162 ] ; xx [ 1168 ] = xx [
1163 ] ; xx [ 1169 ] = xx [ 1131 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1167 , xx + 1170 ) ; xx [ 939 ] = - 0.1090036909983146 ; xx [ 940 ] =
0.01817465773016072 ; xx [ 941 ] = - 0.1239039825644493 ; xx [ 1137 ] =
0.6677460747179526 ; xx [ 1143 ] = 0.4544566948802226 ; xx [ 1149 ] = xx [
1143 ] * input [ 51 ] ; xx [ 1155 ] = 0.3317113808219959 ; xx [ 1161 ] =
0.4873929133773655 ; xx [ 1167 ] = xx [ 1161 ] * input [ 51 ] ; xx [ 1168 ] =
( xx [ 1137 ] * xx [ 1149 ] + xx [ 1155 ] * xx [ 1167 ] ) * xx [ 11 ] ; xx [
1169 ] = xx [ 11 ] * ( xx [ 1155 ] * xx [ 1149 ] - xx [ 1137 ] * xx [ 1167 ]
) ; xx [ 1137 ] = input [ 51 ] - ( xx [ 1161 ] * xx [ 1167 ] + xx [ 1143 ] *
xx [ 1149 ] ) * xx [ 11 ] ; xx [ 1173 ] = xx [ 1168 ] ; xx [ 1174 ] = xx [
1169 ] ; xx [ 1175 ] = xx [ 1137 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1173 , xx + 1176 ) ; xx [ 939 ] = - 0.1009356428263194 ; xx [ 940 ] =
0.04283189637270055 ; xx [ 941 ] = - 0.08674853388306464 ; xx [ 1143 ] =
0.6771997737581915 ; xx [ 1149 ] = 0.3636835401886195 ; xx [ 1155 ] = xx [
1149 ] * input [ 52 ] ; xx [ 1161 ] = 0.3026304367073079 ; xx [ 1167 ] =
0.5635153660691705 ; xx [ 1173 ] = xx [ 1167 ] * input [ 52 ] ; xx [ 1174 ] =
( xx [ 1143 ] * xx [ 1155 ] + xx [ 1161 ] * xx [ 1173 ] ) * xx [ 11 ] ; xx [
1175 ] = xx [ 11 ] * ( xx [ 1161 ] * xx [ 1155 ] - xx [ 1143 ] * xx [ 1173 ]
) ; xx [ 1143 ] = input [ 52 ] - ( xx [ 1167 ] * xx [ 1173 ] + xx [ 1149 ] *
xx [ 1155 ] ) * xx [ 11 ] ; xx [ 1179 ] = xx [ 1174 ] ; xx [ 1180 ] = xx [
1175 ] ; xx [ 1181 ] = xx [ 1143 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1179 , xx + 1182 ) ; xx [ 939 ] = - 0.08364765664069315 ; xx [ 940 ] =
0.05885119021368576 ; xx [ 941 ] = - 0.1171046153075557 ; xx [ 1149 ] =
0.7067331897966952 ; xx [ 1155 ] = 0.3119482575694982 ; xx [ 1161 ] = xx [
1155 ] * input [ 53 ] ; xx [ 1167 ] = 0.2564149206882397 ; xx [ 1173 ] =
0.580919849452217 ; xx [ 1179 ] = xx [ 1173 ] * input [ 53 ] ; xx [ 1180 ] =
( xx [ 1149 ] * xx [ 1161 ] + xx [ 1167 ] * xx [ 1179 ] ) * xx [ 11 ] ; xx [
1181 ] = xx [ 11 ] * ( xx [ 1167 ] * xx [ 1161 ] - xx [ 1149 ] * xx [ 1179 ]
) ; xx [ 1149 ] = input [ 53 ] - ( xx [ 1173 ] * xx [ 1179 ] + xx [ 1155 ] *
xx [ 1161 ] ) * xx [ 11 ] ; xx [ 1185 ] = xx [ 1180 ] ; xx [ 1186 ] = xx [
1181 ] ; xx [ 1187 ] = xx [ 1149 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1185 , xx + 1188 ) ; xx [ 939 ] = 7.346085301000095e-11 ; xx [ 940 ] =
0.08915795098142906 ; xx [ 941 ] = - 0.01101380984473742 ; xx [ 1155 ] =
0.1793252316684608 ; xx [ 1161 ] = 2.073990563595057e-10 ; xx [ 1167 ] = xx [
1161 ] * input [ 54 ] ; xx [ 1173 ] = 1.168303251267773e-11 ; xx [ 1179 ] =
0.9837898460987758 ; xx [ 1185 ] = xx [ 1179 ] * input [ 54 ] ; xx [ 1186 ] =
( xx [ 1155 ] * xx [ 1167 ] + xx [ 1173 ] * xx [ 1185 ] ) * xx [ 11 ] ; xx [
1187 ] = xx [ 11 ] * ( xx [ 1173 ] * xx [ 1167 ] - xx [ 1155 ] * xx [ 1185 ]
) ; xx [ 1155 ] = input [ 54 ] - ( xx [ 1179 ] * xx [ 1185 ] + xx [ 1161 ] *
xx [ 1167 ] ) * xx [ 11 ] ; xx [ 1191 ] = - xx [ 1186 ] ; xx [ 1192 ] = xx [
1187 ] ; xx [ 1193 ] = xx [ 1155 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1191 , xx + 1194 ) ; xx [ 939 ] = 5.209776461554911e-11 ; xx [ 940 ] =
0.03919438724272629 ; xx [ 941 ] = 3.868436680280641e-3 ; xx [ 1161 ] =
6.43744375539838e-12 ; xx [ 1167 ] = xx [ 948 ] * input [ 55 ] ; xx [ 1173 ]
= 2.076280837107586e-10 ; xx [ 1179 ] = xx [ 1173 ] * input [ 55 ] ; xx [
1185 ] = ( xx [ 1161 ] * xx [ 1167 ] - xx [ 946 ] * xx [ 1179 ] ) * xx [ 11 ]
; xx [ 1191 ] = xx [ 11 ] * ( xx [ 1161 ] * xx [ 1179 ] + xx [ 946 ] * xx [
1167 ] ) ; xx [ 1161 ] = input [ 55 ] - ( xx [ 948 ] * xx [ 1167 ] + xx [
1173 ] * xx [ 1179 ] ) * xx [ 11 ] ; xx [ 1197 ] = xx [ 1185 ] ; xx [ 1198 ]
= - xx [ 1191 ] ; xx [ 1199 ] = xx [ 1161 ] ; pm_math_Vector3_cross_ra ( xx +
939 , xx + 1197 , xx + 1200 ) ; xx [ 939 ] = 0.01750679323010461 ; xx [ 940 ]
= - 0.0129053603421838 ; xx [ 941 ] = - 0.05164023244560817 ; xx [ 1167 ] =
0.6253013330622943 ; xx [ 1173 ] = 0.2647300943604388 ; xx [ 1179 ] = xx [
1173 ] * input [ 56 ] ; xx [ 1192 ] = 0.2862028930797249 ; xx [ 1193 ] =
0.6760208014574897 ; xx [ 1197 ] = xx [ 1193 ] * input [ 56 ] ; xx [ 1198 ] =
( xx [ 1167 ] * xx [ 1179 ] + xx [ 1192 ] * xx [ 1197 ] ) * xx [ 11 ] ; xx [
1199 ] = xx [ 11 ] * ( xx [ 1167 ] * xx [ 1197 ] - xx [ 1192 ] * xx [ 1179 ]
) ; xx [ 1167 ] = input [ 56 ] - ( xx [ 1193 ] * xx [ 1197 ] + xx [ 1173 ] *
xx [ 1179 ] ) * xx [ 11 ] ; xx [ 1203 ] = xx [ 1198 ] ; xx [ 1204 ] = xx [
1199 ] ; xx [ 1205 ] = xx [ 1167 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1203 , xx + 1206 ) ; xx [ 939 ] = 0.04082091632007744 ; xx [ 940 ] = -
0.05961285218043077 ; xx [ 941 ] = - 0.05914702068835351 ; xx [ 1173 ] =
0.6043991864368889 ; xx [ 1179 ] = 0.3996382355394038 ; xx [ 1192 ] = xx [
1179 ] * input [ 57 ] ; xx [ 1193 ] = 0.3801248533522478 ; xx [ 1197 ] =
0.574887815137276 ; xx [ 1203 ] = xx [ 1197 ] * input [ 57 ] ; xx [ 1204 ] =
( xx [ 1173 ] * xx [ 1192 ] + xx [ 1193 ] * xx [ 1203 ] ) * xx [ 11 ] ; xx [
1205 ] = xx [ 11 ] * ( xx [ 1173 ] * xx [ 1203 ] - xx [ 1193 ] * xx [ 1192 ]
) ; xx [ 1173 ] = input [ 57 ] - ( xx [ 1197 ] * xx [ 1203 ] + xx [ 1179 ] *
xx [ 1192 ] ) * xx [ 11 ] ; xx [ 1209 ] = xx [ 1204 ] ; xx [ 1210 ] = xx [
1205 ] ; xx [ 1211 ] = xx [ 1173 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1209 , xx + 1212 ) ; xx [ 939 ] = 0.03035817947187572 ; xx [ 940 ] = -
0.0321317188582917 ; xx [ 941 ] = - 0.03537286040336775 ; xx [ 1179 ] =
0.4891666734355569 ; xx [ 1192 ] = 0.3404924334787352 ; xx [ 1193 ] = xx [
1192 ] * input [ 58 ] ; xx [ 1197 ] = 0.45873868206689 ; xx [ 1203 ] =
0.6590445280246652 ; xx [ 1209 ] = xx [ 1203 ] * input [ 58 ] ; xx [ 1210 ] =
( xx [ 1179 ] * xx [ 1193 ] + xx [ 1197 ] * xx [ 1209 ] ) * xx [ 11 ] ; xx [
1211 ] = xx [ 11 ] * ( xx [ 1179 ] * xx [ 1209 ] - xx [ 1197 ] * xx [ 1193 ]
) ; xx [ 1179 ] = input [ 58 ] - ( xx [ 1203 ] * xx [ 1209 ] + xx [ 1192 ] *
xx [ 1193 ] ) * xx [ 11 ] ; xx [ 1215 ] = xx [ 1210 ] ; xx [ 1216 ] = xx [
1211 ] ; xx [ 1217 ] = xx [ 1179 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1215 , xx + 1218 ) ; xx [ 939 ] = 0.01725167781389296 ; xx [ 940 ] = -
7.293875264287998e-3 ; xx [ 941 ] = - 0.01488522167970806 ; xx [ 1192 ] =
0.6632024935913943 ; xx [ 1193 ] = 0.1731754397407833 ; xx [ 1197 ] = xx [
1193 ] * input [ 59 ] ; xx [ 1203 ] = 0.1839610469139512 ; xx [ 1209 ] =
0.7045076669441338 ; xx [ 1215 ] = xx [ 1209 ] * input [ 59 ] ; xx [ 1216 ] =
( xx [ 1192 ] * xx [ 1197 ] + xx [ 1203 ] * xx [ 1215 ] ) * xx [ 11 ] ; xx [
1217 ] = xx [ 11 ] * ( xx [ 1192 ] * xx [ 1215 ] - xx [ 1203 ] * xx [ 1197 ]
) ; xx [ 1192 ] = input [ 59 ] - ( xx [ 1209 ] * xx [ 1215 ] + xx [ 1193 ] *
xx [ 1197 ] ) * xx [ 11 ] ; xx [ 1221 ] = xx [ 1216 ] ; xx [ 1222 ] = xx [
1217 ] ; xx [ 1223 ] = xx [ 1192 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1221 , xx + 1224 ) ; xx [ 939 ] = 0.06588460408652783 ; xx [ 940 ] = -
0.07959463958151086 ; xx [ 941 ] = - 0.09123943251327259 ; xx [ 1193 ] =
0.7220158820457636 ; xx [ 1197 ] = 0.05371025068880647 ; xx [ 1203 ] = xx [
1197 ] * input [ 60 ] ; xx [ 1209 ] = 0.0511714936744926 ; xx [ 1215 ] =
0.6878878929591253 ; xx [ 1221 ] = xx [ 1215 ] * input [ 60 ] ; xx [ 1222 ] =
( xx [ 1193 ] * xx [ 1203 ] + xx [ 1209 ] * xx [ 1221 ] ) * xx [ 11 ] ; xx [
1223 ] = xx [ 11 ] * ( xx [ 1193 ] * xx [ 1221 ] - xx [ 1209 ] * xx [ 1203 ]
) ; xx [ 1193 ] = input [ 60 ] - ( xx [ 1215 ] * xx [ 1221 ] + xx [ 1197 ] *
xx [ 1203 ] ) * xx [ 11 ] ; xx [ 1227 ] = - xx [ 1222 ] ; xx [ 1228 ] = xx [
1223 ] ; xx [ 1229 ] = xx [ 1193 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1227 , xx + 1230 ) ; xx [ 939 ] = - 0.05368324839120633 ; xx [ 940 ] = -
0.07164184646856597 ; xx [ 941 ] = - 0.04830567954615582 ; xx [ 1197 ] =
0.5405475385081842 ; xx [ 1203 ] = 0.03748965768333729 ; xx [ 1209 ] = xx [
1203 ] * input [ 61 ] ; xx [ 1215 ] = 0.05815161963514951 ; xx [ 1221 ] =
0.8384636386351757 ; xx [ 1227 ] = xx [ 1221 ] * input [ 61 ] ; xx [ 1228 ] =
( xx [ 1197 ] * xx [ 1209 ] + xx [ 1215 ] * xx [ 1227 ] ) * xx [ 11 ] ; xx [
1229 ] = xx [ 11 ] * ( xx [ 1197 ] * xx [ 1227 ] - xx [ 1215 ] * xx [ 1209 ]
) ; xx [ 1197 ] = input [ 61 ] - ( xx [ 1221 ] * xx [ 1227 ] + xx [ 1203 ] *
xx [ 1209 ] ) * xx [ 11 ] ; xx [ 1233 ] = - xx [ 1228 ] ; xx [ 1234 ] = xx [
1229 ] ; xx [ 1235 ] = xx [ 1197 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1233 , xx + 1236 ) ; xx [ 939 ] = 0.05368324840937735 ; xx [ 940 ] = -
0.07164184651282934 ; xx [ 941 ] = - 0.04830567954063756 ; xx [ 1203 ] =
0.5405475384861372 ; xx [ 1209 ] = 0.03748965800122345 ; xx [ 1215 ] = xx [
1209 ] * input [ 62 ] ; xx [ 1221 ] = 0.05815161990109163 ; xx [ 1227 ] =
0.8384636386167313 ; xx [ 1233 ] = xx [ 1227 ] * input [ 62 ] ; xx [ 1234 ] =
( xx [ 1203 ] * xx [ 1215 ] + xx [ 1221 ] * xx [ 1233 ] ) * xx [ 11 ] ; xx [
1235 ] = xx [ 11 ] * ( xx [ 1203 ] * xx [ 1233 ] - xx [ 1221 ] * xx [ 1215 ]
) ; xx [ 1203 ] = input [ 62 ] - ( xx [ 1227 ] * xx [ 1233 ] + xx [ 1209 ] *
xx [ 1215 ] ) * xx [ 11 ] ; xx [ 1239 ] = xx [ 1234 ] ; xx [ 1240 ] = xx [
1235 ] ; xx [ 1241 ] = xx [ 1203 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1239 , xx + 1242 ) ; xx [ 939 ] = 0.04170028917640188 ; xx [ 940 ] = -
0.04154840885049218 ; xx [ 941 ] = - 0.02148789347075055 ; xx [ 1209 ] =
0.2331544634603246 ; xx [ 1215 ] = 0.06113194106485485 ; xx [ 1221 ] = xx [
1215 ] * input [ 63 ] ; xx [ 1227 ] = 0.2461444141007786 ; xx [ 1233 ] =
0.9387836861370974 ; xx [ 1239 ] = xx [ 1233 ] * input [ 63 ] ; xx [ 1240 ] =
( xx [ 1209 ] * xx [ 1221 ] + xx [ 1227 ] * xx [ 1239 ] ) * xx [ 11 ] ; xx [
1241 ] = xx [ 11 ] * ( xx [ 1209 ] * xx [ 1239 ] - xx [ 1227 ] * xx [ 1221 ]
) ; xx [ 1209 ] = input [ 63 ] - ( xx [ 1233 ] * xx [ 1239 ] + xx [ 1215 ] *
xx [ 1221 ] ) * xx [ 11 ] ; xx [ 1245 ] = xx [ 1240 ] ; xx [ 1246 ] = xx [
1241 ] ; xx [ 1247 ] = xx [ 1209 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1245 , xx + 1248 ) ; xx [ 939 ] = 0.02981875547221127 ; xx [ 940 ] = -
6.485610562903104e-3 ; xx [ 941 ] = - 5.280536037984701e-3 ; xx [ 1215 ] =
0.2640102090543709 ; xx [ 1221 ] = 8.799363107773798e-3 ; xx [ 1227 ] = xx [
1221 ] * input [ 64 ] ; xx [ 1233 ] = 0.0321279156914788 ; xx [ 1239 ] =
0.9639444889397347 ; xx [ 1245 ] = xx [ 1239 ] * input [ 64 ] ; xx [ 1246 ] =
( xx [ 1215 ] * xx [ 1227 ] + xx [ 1233 ] * xx [ 1245 ] ) * xx [ 11 ] ; xx [
1247 ] = xx [ 11 ] * ( xx [ 1215 ] * xx [ 1245 ] - xx [ 1233 ] * xx [ 1227 ]
) ; xx [ 1215 ] = input [ 64 ] - ( xx [ 1239 ] * xx [ 1245 ] + xx [ 1221 ] *
xx [ 1227 ] ) * xx [ 11 ] ; xx [ 1251 ] = - xx [ 1246 ] ; xx [ 1252 ] = xx [
1247 ] ; xx [ 1253 ] = xx [ 1215 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1251 , xx + 1254 ) ; xx [ 939 ] = 0.01621445187265931 ; xx [ 940 ] =
0.02064735427402701 ; xx [ 941 ] = 3.272323513626888e-3 ; xx [ 1221 ] =
0.02715056723764842 ; xx [ 1227 ] = 3.291295194283892e-3 ; xx [ 1233 ] = xx [
1227 ] * input [ 65 ] ; xx [ 1239 ] = 0.1202977796697935 ; xx [ 1245 ] =
0.992361052380199 ; xx [ 1251 ] = xx [ 1245 ] * input [ 65 ] ; xx [ 1252 ] =
( xx [ 1221 ] * xx [ 1233 ] + xx [ 1239 ] * xx [ 1251 ] ) * xx [ 11 ] ; xx [
1253 ] = xx [ 11 ] * ( xx [ 1239 ] * xx [ 1233 ] - xx [ 1221 ] * xx [ 1251 ]
) ; xx [ 1221 ] = input [ 65 ] - ( xx [ 1245 ] * xx [ 1251 ] + xx [ 1227 ] *
xx [ 1233 ] ) * xx [ 11 ] ; xx [ 1257 ] = - xx [ 1252 ] ; xx [ 1258 ] = xx [
1253 ] ; xx [ 1259 ] = xx [ 1221 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1257 , xx + 1260 ) ; xx [ 939 ] = 0.01629907193013071 ; xx [ 940 ] =
0.05877878017211896 ; xx [ 941 ] = - 2.234518483059734e-3 ; xx [ 1227 ] =
0.1201225500255419 ; xx [ 1233 ] = 8.250560390230657e-3 ; xx [ 1239 ] = xx [
1233 ] * input [ 66 ] ; xx [ 1245 ] = 0.06802456318766753 ; xx [ 1251 ] =
0.9903914175878825 ; xx [ 1257 ] = xx [ 1251 ] * input [ 66 ] ; xx [ 1258 ] =
( xx [ 1227 ] * xx [ 1239 ] + xx [ 1245 ] * xx [ 1257 ] ) * xx [ 11 ] ; xx [
1259 ] = xx [ 11 ] * ( xx [ 1245 ] * xx [ 1239 ] - xx [ 1227 ] * xx [ 1257 ]
) ; xx [ 1227 ] = input [ 66 ] - ( xx [ 1251 ] * xx [ 1257 ] + xx [ 1233 ] *
xx [ 1239 ] ) * xx [ 11 ] ; xx [ 1263 ] = - xx [ 1258 ] ; xx [ 1264 ] = xx [
1259 ] ; xx [ 1265 ] = xx [ 1227 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1263 , xx + 1266 ) ; xx [ 939 ] = 0.01611171862314275 ; xx [ 940 ] =
0.08940775514076232 ; xx [ 941 ] = - 0.01738863438419946 ; xx [ 1233 ] =
0.3738445815359331 ; xx [ 1239 ] = 0.05232566464198572 ; xx [ 1245 ] = xx [
1239 ] * input [ 67 ] ; xx [ 1251 ] = 0.1283596100784034 ; xx [ 1257 ] =
0.9170747320565092 ; xx [ 1263 ] = xx [ 1257 ] * input [ 67 ] ; xx [ 1264 ] =
( xx [ 1233 ] * xx [ 1245 ] + xx [ 1251 ] * xx [ 1263 ] ) * xx [ 11 ] ; xx [
1265 ] = xx [ 11 ] * ( xx [ 1251 ] * xx [ 1245 ] - xx [ 1233 ] * xx [ 1263 ]
) ; xx [ 1233 ] = input [ 67 ] - ( xx [ 1257 ] * xx [ 1263 ] + xx [ 1239 ] *
xx [ 1245 ] ) * xx [ 11 ] ; xx [ 1269 ] = - xx [ 1264 ] ; xx [ 1270 ] = xx [
1265 ] ; xx [ 1271 ] = xx [ 1233 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1269 , xx + 1272 ) ; xx [ 939 ] = 0.07813551324089663 ; xx [ 940 ] = -
0.07488185783430511 ; xx [ 941 ] = - 0.0806312701956019 ; xx [ 1239 ] =
0.6719839502192693 ; xx [ 1245 ] = 0.2032749860191597 ; xx [ 1251 ] = xx [
1245 ] * input [ 68 ] ; xx [ 1257 ] = 0.2061892292910423 ; xx [ 1263 ] =
0.6816178199188923 ; xx [ 1269 ] = xx [ 1263 ] * input [ 68 ] ; xx [ 1270 ] =
( xx [ 1239 ] * xx [ 1251 ] + xx [ 1257 ] * xx [ 1269 ] ) * xx [ 11 ] ; xx [
1271 ] = xx [ 11 ] * ( xx [ 1239 ] * xx [ 1269 ] - xx [ 1257 ] * xx [ 1251 ]
) ; xx [ 1239 ] = input [ 68 ] - ( xx [ 1263 ] * xx [ 1269 ] + xx [ 1245 ] *
xx [ 1251 ] ) * xx [ 11 ] ; xx [ 1275 ] = - xx [ 1270 ] ; xx [ 1276 ] = xx [
1271 ] ; xx [ 1277 ] = xx [ 1239 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1275 , xx + 1278 ) ; xx [ 939 ] = 0.06541920006063182 ; xx [ 940 ] = -
0.06341232839625627 ; xx [ 941 ] = - 0.03664426852744039 ; xx [ 1245 ] =
0.3952613334798241 ; xx [ 1251 ] = 0.06996261333982168 ; xx [ 1257 ] = xx [
1251 ] * input [ 69 ] ; xx [ 1263 ] = 0.1596361018301848 ; xx [ 1269 ] =
0.9018813813262124 ; xx [ 1275 ] = xx [ 1269 ] * input [ 69 ] ; xx [ 1276 ] =
( xx [ 1245 ] * xx [ 1257 ] + xx [ 1263 ] * xx [ 1275 ] ) * xx [ 11 ] ; xx [
1277 ] = xx [ 11 ] * ( xx [ 1245 ] * xx [ 1275 ] - xx [ 1263 ] * xx [ 1257 ]
) ; xx [ 1245 ] = input [ 69 ] - ( xx [ 1269 ] * xx [ 1275 ] + xx [ 1251 ] *
xx [ 1257 ] ) * xx [ 11 ] ; xx [ 1281 ] = - xx [ 1276 ] ; xx [ 1282 ] = xx [
1277 ] ; xx [ 1283 ] = xx [ 1245 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1281 , xx + 1284 ) ; xx [ 939 ] = 0.05343540315193968 ; xx [ 940 ] = -
0.02914440313660086 ; xx [ 941 ] = - 0.01230147864563064 ; xx [ 1251 ] =
0.1816444983832879 ; xx [ 1257 ] = 5.979933026891875e-3 ; xx [ 1263 ] = xx [
1257 ] * input [ 70 ] ; xx [ 1269 ] = 0.03235528528307241 ; xx [ 1275 ] =
0.9828136405862146 ; xx [ 1281 ] = xx [ 1275 ] * input [ 70 ] ; xx [ 1282 ] =
( xx [ 1251 ] * xx [ 1263 ] + xx [ 1269 ] * xx [ 1281 ] ) * xx [ 11 ] ; xx [
1283 ] = xx [ 11 ] * ( xx [ 1251 ] * xx [ 1281 ] - xx [ 1269 ] * xx [ 1263 ]
) ; xx [ 1251 ] = input [ 70 ] - ( xx [ 1275 ] * xx [ 1281 ] + xx [ 1257 ] *
xx [ 1263 ] ) * xx [ 11 ] ; xx [ 1287 ] = xx [ 1282 ] ; xx [ 1288 ] = xx [
1283 ] ; xx [ 1289 ] = xx [ 1251 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1287 , xx + 1290 ) ; xx [ 939 ] = 0.04174218103265672 ; xx [ 940 ] =
2.57851019372676e-3 ; xx [ 941 ] = - 2.155619169886894e-3 ; xx [ 1257 ] =
0.1177775862132168 ; xx [ 1263 ] = 1.357137331446776e-3 ; xx [ 1269 ] = xx [
1263 ] * input [ 71 ] ; xx [ 1275 ] = 0.01144191498292432 ; xx [ 1281 ] =
0.9929731521776285 ; xx [ 1287 ] = xx [ 1281 ] * input [ 71 ] ; xx [ 1288 ] =
( xx [ 1257 ] * xx [ 1269 ] + xx [ 1275 ] * xx [ 1287 ] ) * xx [ 11 ] ; xx [
1289 ] = xx [ 11 ] * ( xx [ 1257 ] * xx [ 1287 ] - xx [ 1275 ] * xx [ 1269 ]
) ; xx [ 1257 ] = input [ 71 ] - ( xx [ 1281 ] * xx [ 1287 ] + xx [ 1263 ] *
xx [ 1269 ] ) * xx [ 11 ] ; xx [ 1293 ] = - xx [ 1288 ] ; xx [ 1294 ] = xx [
1289 ] ; xx [ 1295 ] = xx [ 1257 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1293 , xx + 1296 ) ; xx [ 939 ] = - 0.04170028913617464 ; xx [ 940 ] = -
0.04154840881610911 ; xx [ 941 ] = - 0.02148789347503706 ; xx [ 1263 ] =
0.2331544635586586 ; xx [ 1269 ] = 0.0611319406898112 ; xx [ 1275 ] = xx [
1269 ] * input [ 72 ] ; xx [ 1281 ] = 0.2461444139564077 ; xx [ 1287 ] =
0.9387836861749506 ; xx [ 1293 ] = xx [ 1287 ] * input [ 72 ] ; xx [ 1294 ] =
( xx [ 1263 ] * xx [ 1275 ] + xx [ 1281 ] * xx [ 1293 ] ) * xx [ 11 ] ; xx [
1295 ] = xx [ 11 ] * ( xx [ 1263 ] * xx [ 1293 ] - xx [ 1281 ] * xx [ 1275 ]
) ; xx [ 1263 ] = input [ 72 ] - ( xx [ 1287 ] * xx [ 1293 ] + xx [ 1269 ] *
xx [ 1275 ] ) * xx [ 11 ] ; xx [ 1299 ] = - xx [ 1294 ] ; xx [ 1300 ] = xx [
1295 ] ; xx [ 1301 ] = xx [ 1263 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1299 , xx + 1302 ) ; xx [ 939 ] = 0.02987022293760724 ; xx [ 940 ] =
0.03388119676042192 ; xx [ 941 ] = - 2.659532042140794e-4 ; xx [ 1269 ] =
0.05529818015039611 ; xx [ 1275 ] = 5.07794545269807e-3 ; xx [ 1281 ] = xx [
1275 ] * input [ 73 ] ; xx [ 1287 ] = 0.09130259475505068 ; xx [ 1293 ] =
0.9942736856283731 ; xx [ 1299 ] = xx [ 1293 ] * input [ 73 ] ; xx [ 1300 ] =
( xx [ 1269 ] * xx [ 1281 ] + xx [ 1287 ] * xx [ 1299 ] ) * xx [ 11 ] ; xx [
1301 ] = xx [ 11 ] * ( xx [ 1287 ] * xx [ 1281 ] - xx [ 1269 ] * xx [ 1299 ]
) ; xx [ 1269 ] = input [ 73 ] - ( xx [ 1293 ] * xx [ 1299 ] + xx [ 1275 ] *
xx [ 1281 ] ) * xx [ 11 ] ; xx [ 1305 ] = - xx [ 1300 ] ; xx [ 1306 ] = xx [
1301 ] ; xx [ 1307 ] = xx [ 1269 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1305 , xx + 1308 ) ; xx [ 939 ] = 0.02974420973278944 ; xx [ 940 ] =
0.07584660884820256 ; xx [ 941 ] = - 0.01081305066545697 ; xx [ 1275 ] =
0.2347060104860436 ; xx [ 1281 ] = 0.02433684745807652 ; xx [ 1287 ] = xx [
1281 ] * input [ 74 ] ; xx [ 1293 ] = 0.1002253606710676 ; xx [ 1299 ] =
0.966579372620729 ; xx [ 1305 ] = xx [ 1299 ] * input [ 74 ] ; xx [ 1306 ] =
( xx [ 1275 ] * xx [ 1287 ] + xx [ 1293 ] * xx [ 1305 ] ) * xx [ 11 ] ; xx [
1307 ] = xx [ 11 ] * ( xx [ 1293 ] * xx [ 1287 ] - xx [ 1275 ] * xx [ 1305 ]
) ; xx [ 1275 ] = input [ 74 ] - ( xx [ 1299 ] * xx [ 1305 ] + xx [ 1281 ] *
xx [ 1287 ] ) * xx [ 11 ] ; xx [ 1311 ] = - xx [ 1306 ] ; xx [ 1312 ] = xx [
1307 ] ; xx [ 1313 ] = xx [ 1275 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1311 , xx + 1314 ) ; xx [ 939 ] = 0.08960460729423878 ; xx [ 940 ] = -
0.0629180904162949 ; xx [ 941 ] = - 0.1158139129040354 ; xx [ 1281 ] =
0.704010954792626 ; xx [ 1287 ] = 0.287283918815774 ; xx [ 1293 ] = xx [ 1287
] * input [ 75 ] ; xx [ 1299 ] = 0.2453906895695802 ; xx [ 1305 ] =
0.6013484306077408 ; xx [ 1311 ] = xx [ 1305 ] * input [ 75 ] ; xx [ 1312 ] =
( xx [ 1281 ] * xx [ 1293 ] + xx [ 1299 ] * xx [ 1311 ] ) * xx [ 11 ] ; xx [
1313 ] = xx [ 11 ] * ( xx [ 1281 ] * xx [ 1311 ] - xx [ 1299 ] * xx [ 1293 ]
) ; xx [ 1281 ] = input [ 75 ] - ( xx [ 1305 ] * xx [ 1311 ] + xx [ 1287 ] *
xx [ 1293 ] ) * xx [ 11 ] ; xx [ 1317 ] = - xx [ 1312 ] ; xx [ 1318 ] = xx [
1313 ] ; xx [ 1319 ] = xx [ 1281 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1317 , xx + 1320 ) ; xx [ 939 ] = 0.08896801895652537 ; xx [ 940 ] = -
0.0629967735175615 ; xx [ 941 ] = - 0.0538930712922808 ; xx [ 1287 ] =
0.5606844804293186 ; xx [ 1293 ] = 0.2326195330779721 ; xx [ 1299 ] = xx [
1293 ] * input [ 76 ] ; xx [ 1305 ] = 0.3045325849435699 ; xx [ 1311 ] =
0.7340170099826563 ; xx [ 1317 ] = xx [ 1311 ] * input [ 76 ] ; xx [ 1318 ] =
( xx [ 1287 ] * xx [ 1299 ] + xx [ 1305 ] * xx [ 1317 ] ) * xx [ 11 ] ; xx [
1319 ] = xx [ 11 ] * ( xx [ 1287 ] * xx [ 1317 ] - xx [ 1305 ] * xx [ 1299 ]
) ; xx [ 1287 ] = input [ 76 ] - ( xx [ 1311 ] * xx [ 1317 ] + xx [ 1293 ] *
xx [ 1299 ] ) * xx [ 11 ] ; xx [ 1323 ] = - xx [ 1318 ] ; xx [ 1324 ] = xx [
1319 ] ; xx [ 1325 ] = xx [ 1287 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1323 , xx + 1326 ) ; xx [ 939 ] = 0.07773176658883038 ; xx [ 940 ] = -
0.04357084087497261 ; xx [ 941 ] = - 0.02434982318155766 ; xx [ 1293 ] =
0.2749898427280319 ; xx [ 1299 ] = 0.03833910121369367 ; xx [ 1305 ] = xx [
1299 ] * input [ 77 ] ; xx [ 1311 ] = 0.1326553341666606 ; xx [ 1317 ] =
0.9514795121449912 ; xx [ 1323 ] = xx [ 1317 ] * input [ 77 ] ; xx [ 1324 ] =
( xx [ 1293 ] * xx [ 1305 ] + xx [ 1311 ] * xx [ 1323 ] ) * xx [ 11 ] ; xx [
1325 ] = xx [ 11 ] * ( xx [ 1293 ] * xx [ 1323 ] - xx [ 1311 ] * xx [ 1305 ]
) ; xx [ 1293 ] = input [ 77 ] - ( xx [ 1317 ] * xx [ 1323 ] + xx [ 1299 ] *
xx [ 1305 ] ) * xx [ 11 ] ; xx [ 1329 ] = - xx [ 1324 ] ; xx [ 1330 ] = xx [
1325 ] ; xx [ 1331 ] = xx [ 1293 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1329 , xx + 1332 ) ; xx [ 939 ] = 0.06547974794298986 ; xx [ 940 ] = -
5.296907369520426e-3 ; xx [ 941 ] = - 6.867139911477884e-3 ; xx [ 1299 ] =
0.08330673863579158 ; xx [ 1305 ] = 0.01332357126667194 ; xx [ 1311 ] = xx [
1305 ] * input [ 78 ] ; xx [ 1317 ] = 0.1573638296812823 ; xx [ 1323 ] =
0.9839304319181364 ; xx [ 1329 ] = xx [ 1323 ] * input [ 78 ] ; xx [ 1330 ] =
( xx [ 1299 ] * xx [ 1311 ] + xx [ 1317 ] * xx [ 1329 ] ) * xx [ 11 ] ; xx [
1331 ] = xx [ 11 ] * ( xx [ 1299 ] * xx [ 1329 ] - xx [ 1317 ] * xx [ 1311 ]
) ; xx [ 1299 ] = input [ 78 ] - ( xx [ 1323 ] * xx [ 1329 ] + xx [ 1305 ] *
xx [ 1311 ] ) * xx [ 11 ] ; xx [ 1335 ] = - xx [ 1330 ] ; xx [ 1336 ] = xx [
1331 ] ; xx [ 1337 ] = xx [ 1299 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1335 , xx + 1338 ) ; xx [ 939 ] = 0.05341786702403734 ; xx [ 940 ] =
0.02810056496111961 ; xx [ 941 ] = - 3.330290101375847e-3 ; xx [ 1305 ] =
0.05921261816160776 ; xx [ 1311 ] = 4.064864796071833e-3 ; xx [ 1317 ] = xx [
1311 ] * input [ 79 ] ; xx [ 1323 ] = 0.06836669739358632 ; xx [ 1329 ] =
0.9958932359505869 ; xx [ 1335 ] = xx [ 1329 ] * input [ 79 ] ; xx [ 1336 ] =
( xx [ 1305 ] * xx [ 1317 ] + xx [ 1323 ] * xx [ 1335 ] ) * xx [ 11 ] ; xx [
1337 ] = xx [ 11 ] * ( xx [ 1323 ] * xx [ 1317 ] - xx [ 1305 ] * xx [ 1335 ]
) ; xx [ 1305 ] = input [ 79 ] - ( xx [ 1329 ] * xx [ 1335 ] + xx [ 1311 ] *
xx [ 1317 ] ) * xx [ 11 ] ; xx [ 1341 ] = - xx [ 1336 ] ; xx [ 1342 ] = xx [
1337 ] ; xx [ 1343 ] = xx [ 1305 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1341 , xx + 1344 ) ; xx [ 939 ] = 0.04168227644158801 ; xx [ 940 ] =
0.05293569738903448 ; xx [ 941 ] = - 5.452647457716795e-3 ; xx [ 1311 ] =
0.09627478570965015 ; xx [ 1317 ] = 8.967548973076127e-3 ; xx [ 1323 ] = xx [
1317 ] * input [ 80 ] ; xx [ 1329 ] = 0.09230933375590525 ; xx [ 1335 ] =
0.9910245887986421 ; xx [ 1341 ] = xx [ 1335 ] * input [ 80 ] ; xx [ 1342 ] =
( xx [ 1311 ] * xx [ 1323 ] + xx [ 1329 ] * xx [ 1341 ] ) * xx [ 11 ] ; xx [
1343 ] = xx [ 11 ] * ( xx [ 1329 ] * xx [ 1323 ] - xx [ 1311 ] * xx [ 1341 ]
) ; xx [ 1311 ] = input [ 80 ] - ( xx [ 1335 ] * xx [ 1341 ] + xx [ 1317 ] *
xx [ 1323 ] ) * xx [ 11 ] ; xx [ 1347 ] = - xx [ 1342 ] ; xx [ 1348 ] = xx [
1343 ] ; xx [ 1349 ] = xx [ 1311 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1347 , xx + 1350 ) ; xx [ 939 ] = 0.100824764087768 ; xx [ 940 ] = -
0.05389196647200403 ; xx [ 941 ] = - 0.08618641346272046 ; xx [ 1317 ] =
0.6611727831571071 ; xx [ 1323 ] = 0.3060055398661197 ; xx [ 1329 ] = xx [
1323 ] * input [ 81 ] ; xx [ 1335 ] = 0.2877084148070432 ; xx [ 1341 ] =
0.6216389856120255 ; xx [ 1347 ] = xx [ 1341 ] * input [ 81 ] ; xx [ 1348 ] =
( xx [ 1317 ] * xx [ 1329 ] + xx [ 1335 ] * xx [ 1347 ] ) * xx [ 11 ] ; xx [
1349 ] = xx [ 11 ] * ( xx [ 1317 ] * xx [ 1347 ] - xx [ 1335 ] * xx [ 1329 ]
) ; xx [ 1317 ] = input [ 81 ] - ( xx [ 1341 ] * xx [ 1347 ] + xx [ 1323 ] *
xx [ 1329 ] ) * xx [ 11 ] ; xx [ 1353 ] = - xx [ 1348 ] ; xx [ 1354 ] = xx [
1349 ] ; xx [ 1355 ] = xx [ 1317 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1353 , xx + 1356 ) ; xx [ 939 ] = 0.100465596542249 ; xx [ 940 ] = -
0.03582136469449106 ; xx [ 941 ] = - 0.03586499237016935 ; xx [ 1323 ] =
0.2631242050542163 ; xx [ 1329 ] = 0.1314352702240315 ; xx [ 1335 ] = xx [
1329 ] * input [ 82 ] ; xx [ 1341 ] = 0.4271022176257958 ; xx [ 1347 ] =
0.8550287235846818 ; xx [ 1353 ] = xx [ 1347 ] * input [ 82 ] ; xx [ 1354 ] =
( xx [ 1323 ] * xx [ 1335 ] + xx [ 1341 ] * xx [ 1353 ] ) * xx [ 11 ] ; xx [
1355 ] = xx [ 11 ] * ( xx [ 1323 ] * xx [ 1353 ] - xx [ 1341 ] * xx [ 1335 ]
) ; xx [ 1323 ] = input [ 82 ] - ( xx [ 1347 ] * xx [ 1353 ] + xx [ 1329 ] *
xx [ 1335 ] ) * xx [ 11 ] ; xx [ 1359 ] = - xx [ 1354 ] ; xx [ 1360 ] = xx [
1355 ] ; xx [ 1361 ] = xx [ 1323 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1359 , xx + 1362 ) ; xx [ 939 ] = - 0.02981875540473976 ; xx [ 940 ] = -
6.485610538316687e-3 ; xx [ 941 ] = - 5.280536041049861e-3 ; xx [ 1329 ] =
0.264010209041578 ; xx [ 1335 ] = 8.799363491604362e-3 ; xx [ 1341 ] = xx [
1335 ] * input [ 83 ] ; xx [ 1347 ] = 0.03212791584986363 ; xx [ 1353 ] =
0.9639444889344556 ; xx [ 1359 ] = xx [ 1353 ] * input [ 83 ] ; xx [ 1360 ] =
( xx [ 1329 ] * xx [ 1341 ] + xx [ 1347 ] * xx [ 1359 ] ) * xx [ 11 ] ; xx [
1361 ] = xx [ 11 ] * ( xx [ 1329 ] * xx [ 1359 ] - xx [ 1347 ] * xx [ 1341 ]
) ; xx [ 1329 ] = input [ 83 ] - ( xx [ 1353 ] * xx [ 1359 ] + xx [ 1335 ] *
xx [ 1341 ] ) * xx [ 11 ] ; xx [ 1365 ] = xx [ 1360 ] ; xx [ 1366 ] = xx [
1361 ] ; xx [ 1367 ] = xx [ 1329 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1365 , xx + 1368 ) ; xx [ 939 ] = 0.08913241736995343 ; xx [ 940 ] = -
0.01002385806712768 ; xx [ 941 ] = - 0.01767933168400414 ; xx [ 1335 ] =
0.06280224635947465 ; xx [ 1341 ] = 0.02051569191699949 ; xx [ 1347 ] = xx [
1341 ] * input [ 84 ] ; xx [ 1353 ] = 0.3098441769716661 ; xx [ 1359 ] =
0.9484890986374709 ; xx [ 1365 ] = xx [ 1359 ] * input [ 84 ] ; xx [ 1366 ] =
( xx [ 1335 ] * xx [ 1347 ] + xx [ 1353 ] * xx [ 1365 ] ) * xx [ 11 ] ; xx [
1367 ] = xx [ 11 ] * ( xx [ 1335 ] * xx [ 1365 ] - xx [ 1353 ] * xx [ 1347 ]
) ; xx [ 1335 ] = input [ 84 ] - ( xx [ 1359 ] * xx [ 1365 ] + xx [ 1341 ] *
xx [ 1347 ] ) * xx [ 11 ] ; xx [ 1371 ] = - xx [ 1366 ] ; xx [ 1372 ] = xx [
1367 ] ; xx [ 1373 ] = xx [ 1335 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1371 , xx + 1374 ) ; xx [ 939 ] = 0.07763897859183158 ; xx [ 940 ] =
0.02926835413570807 ; xx [ 941 ] = - 0.01269421206535389 ; xx [ 1341 ] =
0.1126124064896707 ; xx [ 1347 ] = 0.02994703407731902 ; xx [ 1353 ] = xx [
1347 ] * input [ 85 ] ; xx [ 1359 ] = 0.2552472918152362 ; xx [ 1365 ] =
0.9598283393792688 ; xx [ 1371 ] = xx [ 1365 ] * input [ 85 ] ; xx [ 1372 ] =
( xx [ 1341 ] * xx [ 1353 ] + xx [ 1359 ] * xx [ 1371 ] ) * xx [ 11 ] ; xx [
1373 ] = xx [ 11 ] * ( xx [ 1359 ] * xx [ 1353 ] - xx [ 1341 ] * xx [ 1371 ]
) ; xx [ 1341 ] = input [ 85 ] - ( xx [ 1365 ] * xx [ 1371 ] + xx [ 1347 ] *
xx [ 1353 ] ) * xx [ 11 ] ; xx [ 1377 ] = - xx [ 1372 ] ; xx [ 1378 ] = xx [
1373 ] ; xx [ 1379 ] = xx [ 1341 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1377 , xx + 1380 ) ; xx [ 939 ] = 0.06509083541072057 ; xx [ 940 ] =
0.05673454461225298 ; xx [ 941 ] = - 0.01754534783269847 ; xx [ 1347 ] =
0.2624187066634011 ; xx [ 1353 ] = 0.07539763905303828 ; xx [ 1359 ] = xx [
1353 ] * input [ 86 ] ; xx [ 1365 ] = 0.2656534715823643 ; xx [ 1371 ] =
0.9245971292701344 ; xx [ 1377 ] = xx [ 1371 ] * input [ 86 ] ; xx [ 1378 ] =
( xx [ 1347 ] * xx [ 1359 ] + xx [ 1365 ] * xx [ 1377 ] ) * xx [ 11 ] ; xx [
1379 ] = xx [ 11 ] * ( xx [ 1365 ] * xx [ 1359 ] - xx [ 1347 ] * xx [ 1377 ]
) ; xx [ 1347 ] = input [ 86 ] - ( xx [ 1371 ] * xx [ 1377 ] + xx [ 1353 ] *
xx [ 1359 ] ) * xx [ 11 ] ; xx [ 1383 ] = - xx [ 1378 ] ; xx [ 1384 ] = xx [
1379 ] ; xx [ 1385 ] = xx [ 1347 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1383 , xx + 1386 ) ; xx [ 939 ] = 0.05277755591207568 ; xx [ 940 ] =
0.07507634800725872 ; xx [ 941 ] = - 0.0255709964062559 ; xx [ 1353 ] =
0.421896005370366 ; xx [ 1359 ] = 0.1353871730070967 ; xx [ 1365 ] = xx [
1359 ] * input [ 87 ] ; xx [ 1371 ] = 0.2739231085118727 ; xx [ 1377 ] =
0.8536042435818063 ; xx [ 1383 ] = xx [ 1377 ] * input [ 87 ] ; xx [ 1384 ] =
( xx [ 1353 ] * xx [ 1365 ] + xx [ 1371 ] * xx [ 1383 ] ) * xx [ 11 ] ; xx [
1385 ] = xx [ 11 ] * ( xx [ 1371 ] * xx [ 1365 ] - xx [ 1353 ] * xx [ 1383 ]
) ; xx [ 1353 ] = input [ 87 ] - ( xx [ 1377 ] * xx [ 1383 ] + xx [ 1359 ] *
xx [ 1365 ] ) * xx [ 11 ] ; xx [ 1389 ] = - xx [ 1384 ] ; xx [ 1390 ] = xx [
1385 ] ; xx [ 1391 ] = xx [ 1353 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1389 , xx + 1392 ) ; xx [ 939 ] = 0.04146508599201515 ; xx [ 940 ] =
0.08823626896783543 ; xx [ 941 ] = - 0.03394340828824289 ; xx [ 1359 ] =
0.5420216015620228 ; xx [ 1365 ] = 0.166527022603306 ; xx [ 1371 ] = xx [
1365 ] * input [ 88 ] ; xx [ 1377 ] = 0.2419081908371703 ; xx [ 1383 ] =
0.7873765054844507 ; xx [ 1389 ] = xx [ 1383 ] * input [ 88 ] ; xx [ 1390 ] =
( xx [ 1359 ] * xx [ 1371 ] + xx [ 1377 ] * xx [ 1389 ] ) * xx [ 11 ] ; xx [
1391 ] = xx [ 11 ] * ( xx [ 1377 ] * xx [ 1371 ] - xx [ 1359 ] * xx [ 1389 ]
) ; xx [ 1359 ] = input [ 88 ] - ( xx [ 1383 ] * xx [ 1389 ] + xx [ 1365 ] *
xx [ 1371 ] ) * xx [ 11 ] ; xx [ 1395 ] = - xx [ 1390 ] ; xx [ 1396 ] = xx [
1391 ] ; xx [ 1397 ] = xx [ 1359 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1395 , xx + 1398 ) ; xx [ 939 ] = 0.1088176367117972 ; xx [ 940 ] = -
0.03672198871967463 ; xx [ 941 ] = - 0.1164296265215401 ; xx [ 1365 ] =
0.677628035150165 ; xx [ 1371 ] = 0.4270890703732098 ; xx [ 1377 ] = xx [
1371 ] * input [ 89 ] ; xx [ 1383 ] = 0.319215967759163 ; xx [ 1389 ] =
0.506474419762593 ; xx [ 1395 ] = xx [ 1389 ] * input [ 89 ] ; xx [ 1396 ] =
( xx [ 1365 ] * xx [ 1377 ] + xx [ 1383 ] * xx [ 1395 ] ) * xx [ 11 ] ; xx [
1397 ] = xx [ 11 ] * ( xx [ 1365 ] * xx [ 1395 ] - xx [ 1383 ] * xx [ 1377 ]
) ; xx [ 1365 ] = input [ 89 ] - ( xx [ 1389 ] * xx [ 1395 ] + xx [ 1371 ] *
xx [ 1377 ] ) * xx [ 11 ] ; xx [ 1401 ] = - xx [ 1396 ] ; xx [ 1402 ] = xx [
1397 ] ; xx [ 1403 ] = xx [ 1365 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1401 , xx + 1404 ) ; xx [ 939 ] = 0.1090246450995406 ; xx [ 940 ] = -
0.03935610665145234 ; xx [ 941 ] = - 0.06805735491187342 ; xx [ 1371 ] =
0.519703659084335 ; xx [ 1377 ] = 0.3653225986854693 ; xx [ 1383 ] = xx [
1377 ] * input [ 90 ] ; xx [ 1389 ] = 0.4441325809999982 ; xx [ 1395 ] =
0.6318178187724124 ; xx [ 1401 ] = xx [ 1395 ] * input [ 90 ] ; xx [ 1402 ] =
( xx [ 1371 ] * xx [ 1383 ] + xx [ 1389 ] * xx [ 1401 ] ) * xx [ 11 ] ; xx [
1403 ] = xx [ 11 ] * ( xx [ 1371 ] * xx [ 1401 ] - xx [ 1389 ] * xx [ 1383 ]
) ; xx [ 1371 ] = input [ 90 ] - ( xx [ 1395 ] * xx [ 1401 ] + xx [ 1377 ] *
xx [ 1383 ] ) * xx [ 11 ] ; xx [ 1407 ] = - xx [ 1402 ] ; xx [ 1408 ] = xx [
1403 ] ; xx [ 1409 ] = xx [ 1371 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1407 , xx + 1410 ) ; xx [ 939 ] = 0.1085660129100413 ; xx [ 940 ] = -
8.240157724745425e-3 ; xx [ 941 ] = - 0.03833021975942708 ; xx [ 1377 ] =
0.02566070437485158 ; xx [ 1383 ] = 0.01743713638493203 ; xx [ 1389 ] = xx [
1383 ] * input [ 91 ] ; xx [ 1395 ] = 0.5617718096216883 ; xx [ 1401 ] =
0.8267102929322058 ; xx [ 1407 ] = xx [ 1401 ] * input [ 91 ] ; xx [ 1408 ] =
( xx [ 1377 ] * xx [ 1389 ] + xx [ 1395 ] * xx [ 1407 ] ) * xx [ 11 ] ; xx [
1409 ] = xx [ 11 ] * ( xx [ 1377 ] * xx [ 1407 ] - xx [ 1395 ] * xx [ 1389 ]
) ; xx [ 1377 ] = input [ 91 ] - ( xx [ 1401 ] * xx [ 1407 ] + xx [ 1383 ] *
xx [ 1389 ] ) * xx [ 11 ] ; xx [ 1413 ] = - xx [ 1408 ] ; xx [ 1414 ] = xx [
1409 ] ; xx [ 1415 ] = xx [ 1377 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1413 , xx + 1416 ) ; xx [ 939 ] = 0.1002889441519224 ; xx [ 940 ] =
0.02151727728365404 ; xx [ 941 ] = - 0.03134160856156223 ; xx [ 1383 ] =
0.1937497474880058 ; xx [ 1389 ] = 0.1060397762709983 ; xx [ 1395 ] = xx [
1389 ] * input [ 92 ] ; xx [ 1401 ] = 0.4682442847472073 ; xx [ 1407 ] =
0.8555488828806376 ; xx [ 1413 ] = xx [ 1407 ] * input [ 92 ] ; xx [ 1414 ] =
( xx [ 1383 ] * xx [ 1395 ] + xx [ 1401 ] * xx [ 1413 ] ) * xx [ 11 ] ; xx [
1415 ] = xx [ 11 ] * ( xx [ 1401 ] * xx [ 1395 ] - xx [ 1383 ] * xx [ 1413 ]
) ; xx [ 1383 ] = input [ 92 ] - ( xx [ 1407 ] * xx [ 1413 ] + xx [ 1389 ] *
xx [ 1395 ] ) * xx [ 11 ] ; xx [ 1419 ] = - xx [ 1414 ] ; xx [ 1420 ] = xx [
1415 ] ; xx [ 1421 ] = xx [ 1383 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1419 , xx + 1422 ) ; xx [ 939 ] = 0.08825404800005146 ; xx [ 940 ] =
0.05085694598496637 ; xx [ 941 ] = - 0.04022128746106271 ; xx [ 1389 ] =
0.4329293025203554 ; xx [ 1395 ] = 0.2388834576327223 ; xx [ 1401 ] = xx [
1395 ] * input [ 93 ] ; xx [ 1407 ] = 0.4199252651663411 ; xx [ 1413 ] =
0.7610319864260977 ; xx [ 1419 ] = xx [ 1413 ] * input [ 93 ] ; xx [ 1420 ] =
( xx [ 1389 ] * xx [ 1401 ] + xx [ 1407 ] * xx [ 1419 ] ) * xx [ 11 ] ; xx [
1421 ] = xx [ 11 ] * ( xx [ 1407 ] * xx [ 1401 ] - xx [ 1389 ] * xx [ 1419 ]
) ; xx [ 1389 ] = input [ 93 ] - ( xx [ 1413 ] * xx [ 1419 ] + xx [ 1395 ] *
xx [ 1401 ] ) * xx [ 11 ] ; xx [ 1425 ] = - xx [ 1420 ] ; xx [ 1426 ] = xx [
1421 ] ; xx [ 1427 ] = xx [ 1389 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1425 , xx + 1428 ) ; xx [ 939 ] = - 0.01621445178369506 ; xx [ 940 ] =
0.02064735428739629 ; xx [ 941 ] = 3.272323511960149e-3 ; xx [ 1395 ] =
0.02715056728741203 ; xx [ 1401 ] = 3.291294783773412e-3 ; xx [ 1407 ] = xx [
1401 ] * input [ 94 ] ; xx [ 1413 ] = 0.1202977797096041 ; xx [ 1419 ] =
0.9923610523753731 ; xx [ 1425 ] = xx [ 1419 ] * input [ 94 ] ; xx [ 1426 ] =
( xx [ 1395 ] * xx [ 1407 ] + xx [ 1413 ] * xx [ 1425 ] ) * xx [ 11 ] ; xx [
1427 ] = xx [ 11 ] * ( xx [ 1413 ] * xx [ 1407 ] - xx [ 1395 ] * xx [ 1425 ]
) ; xx [ 1395 ] = input [ 94 ] - ( xx [ 1419 ] * xx [ 1425 ] + xx [ 1401 ] *
xx [ 1407 ] ) * xx [ 11 ] ; xx [ 1431 ] = xx [ 1426 ] ; xx [ 1432 ] = xx [
1427 ] ; xx [ 1433 ] = xx [ 1395 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1431 , xx + 1434 ) ; xx [ 939 ] = 0.07778373207184298 ; xx [ 940 ] =
0.06920777250867712 ; xx [ 941 ] = - 0.05836215192562574 ; xx [ 1401 ] =
0.6395227561236595 ; xx [ 1407 ] = 0.2517984337787514 ; xx [ 1413 ] = xx [
1407 ] * input [ 95 ] ; xx [ 1419 ] = 0.266107804286955 ; xx [ 1425 ] =
0.6758659849734575 ; xx [ 1431 ] = xx [ 1425 ] * input [ 95 ] ; xx [ 1432 ] =
( xx [ 1401 ] * xx [ 1413 ] + xx [ 1419 ] * xx [ 1431 ] ) * xx [ 11 ] ; xx [
1433 ] = xx [ 11 ] * ( xx [ 1419 ] * xx [ 1413 ] - xx [ 1401 ] * xx [ 1431 ]
) ; xx [ 1401 ] = input [ 95 ] - ( xx [ 1425 ] * xx [ 1431 ] + xx [ 1407 ] *
xx [ 1413 ] ) * xx [ 11 ] ; xx [ 1437 ] = - xx [ 1432 ] ; xx [ 1438 ] = xx [
1433 ] ; xx [ 1439 ] = xx [ 1401 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1437 , xx + 1440 ) ; xx [ 939 ] = 0.0602032404852826 ; xx [ 940 ] =
0.08203106311915592 ; xx [ 941 ] = - 0.07487337344589605 ; xx [ 1407 ] =
0.6940948607199241 ; xx [ 1413 ] = 0.2053956683816426 ; xx [ 1419 ] = xx [
1413 ] * input [ 96 ] ; xx [ 1425 ] = 0.1957799624580653 ; xx [ 1431 ] =
0.6616004459129137 ; xx [ 1437 ] = xx [ 1431 ] * input [ 96 ] ; xx [ 1438 ] =
( xx [ 1407 ] * xx [ 1419 ] + xx [ 1425 ] * xx [ 1437 ] ) * xx [ 11 ] ; xx [
1439 ] = xx [ 11 ] * ( xx [ 1425 ] * xx [ 1419 ] - xx [ 1407 ] * xx [ 1437 ]
) ; xx [ 1407 ] = input [ 96 ] - ( xx [ 1431 ] * xx [ 1437 ] + xx [ 1413 ] *
xx [ 1419 ] ) * xx [ 11 ] ; xx [ 1443 ] = - xx [ 1438 ] ; xx [ 1444 ] = xx [
1439 ] ; xx [ 1445 ] = xx [ 1407 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1443 , xx + 1446 ) ; xx [ 939 ] = 0.1143978972674508 ; xx [ 940 ] = -
0.01074410169425164 ; xx [ 941 ] = - 0.1239980564790716 ; xx [ 1413 ] =
0.6377272328877593 ; xx [ 1419 ] = 0.6305933819529564 ; xx [ 1425 ] = xx [
1419 ] * input [ 97 ] ; xx [ 1431 ] = 0.3199249700933913 ; xx [ 1437 ] =
0.3054569962878528 ; xx [ 1443 ] = xx [ 1437 ] * input [ 97 ] ; xx [ 1444 ] =
( xx [ 1413 ] * xx [ 1425 ] + xx [ 1431 ] * xx [ 1443 ] ) * xx [ 11 ] ; xx [
1445 ] = xx [ 11 ] * ( xx [ 1413 ] * xx [ 1443 ] - xx [ 1431 ] * xx [ 1425 ]
) ; xx [ 1413 ] = input [ 97 ] - ( xx [ 1437 ] * xx [ 1443 ] + xx [ 1419 ] *
xx [ 1425 ] ) * xx [ 11 ] ; xx [ 1449 ] = - xx [ 1444 ] ; xx [ 1450 ] = xx [
1445 ] ; xx [ 1451 ] = xx [ 1413 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1449 , xx + 1452 ) ; xx [ 939 ] = 0.1151109708936954 ; xx [ 940 ] = -
0.0107580464525686 ; xx [ 941 ] = - 0.08461401533556856 ; xx [ 1419 ] =
0.4666321200467146 ; xx [ 1425 ] = 0.4902460691897858 ; xx [ 1431 ] = xx [
1425 ] * input [ 98 ] ; xx [ 1437 ] = 0.509567258991786 ; xx [ 1443 ] =
0.5312762602905107 ; xx [ 1449 ] = xx [ 1443 ] * input [ 98 ] ; xx [ 1450 ] =
( xx [ 1419 ] * xx [ 1431 ] + xx [ 1437 ] * xx [ 1449 ] ) * xx [ 11 ] ; xx [
1451 ] = xx [ 11 ] * ( xx [ 1419 ] * xx [ 1449 ] - xx [ 1437 ] * xx [ 1431 ]
) ; xx [ 1419 ] = input [ 98 ] - ( xx [ 1443 ] * xx [ 1449 ] + xx [ 1425 ] *
xx [ 1431 ] ) * xx [ 11 ] ; xx [ 1455 ] = - xx [ 1450 ] ; xx [ 1456 ] = xx [
1451 ] ; xx [ 1457 ] = xx [ 1419 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1455 , xx + 1458 ) ; xx [ 939 ] = 0.1089181530968041 ; xx [ 940 ] =
0.02522537860188187 ; xx [ 941 ] = - 0.06782609011531604 ; xx [ 1425 ] =
0.5150379187494134 ; xx [ 1431 ] = 0.4000839557916553 ; xx [ 1437 ] = xx [
1431 ] * input [ 99 ] ; xx [ 1443 ] = 0.4650464122323525 ; xx [ 1449 ] =
0.598665687206299 ; xx [ 1455 ] = xx [ 1449 ] * input [ 99 ] ; xx [ 1456 ] =
( xx [ 1425 ] * xx [ 1437 ] + xx [ 1443 ] * xx [ 1455 ] ) * xx [ 11 ] ; xx [
1457 ] = xx [ 11 ] * ( xx [ 1443 ] * xx [ 1437 ] - xx [ 1425 ] * xx [ 1455 ]
) ; xx [ 1425 ] = input [ 99 ] - ( xx [ 1449 ] * xx [ 1455 ] + xx [ 1431 ] *
xx [ 1437 ] ) * xx [ 11 ] ; xx [ 1461 ] = - xx [ 1456 ] ; xx [ 1462 ] = xx [
1457 ] ; xx [ 1463 ] = xx [ 1425 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1461 , xx + 1464 ) ; xx [ 939 ] = 0.1090036910983129 ; xx [ 940 ] =
0.01817465764028406 ; xx [ 941 ] = - 0.1239039825532445 ; xx [ 1431 ] =
0.6677460745578425 ; xx [ 1437 ] = 0.4544566951154766 ; xx [ 1443 ] = xx [
1437 ] * input [ 100 ] ; xx [ 1449 ] = 0.3317113810722333 ; xx [ 1455 ] =
0.4873929132070582 ; xx [ 1461 ] = xx [ 1455 ] * input [ 100 ] ; xx [ 1462 ]
= ( xx [ 1431 ] * xx [ 1443 ] + xx [ 1449 ] * xx [ 1461 ] ) * xx [ 11 ] ; xx
[ 1463 ] = xx [ 11 ] * ( xx [ 1449 ] * xx [ 1443 ] - xx [ 1431 ] * xx [ 1461
] ) ; xx [ 1431 ] = input [ 100 ] - ( xx [ 1455 ] * xx [ 1461 ] + xx [ 1437 ]
* xx [ 1443 ] ) * xx [ 11 ] ; xx [ 1467 ] = - xx [ 1462 ] ; xx [ 1468 ] = xx
[ 1463 ] ; xx [ 1469 ] = xx [ 1431 ] ; pm_math_Vector3_cross_ra ( xx + 939 ,
xx + 1467 , xx + 1470 ) ; xx [ 939 ] = 0.1009356429428289 ; xx [ 940 ] =
0.04283189628947623 ; xx [ 941 ] = - 0.08674853387268916 ; xx [ 1437 ] =
0.677199773614736 ; xx [ 1443 ] = 0.363683540455742 ; xx [ 1449 ] = xx [ 1443
] * input [ 101 ] ; xx [ 1455 ] = 0.3026304369575301 ; xx [ 1461 ] =
0.5635153659347912 ; xx [ 1467 ] = xx [ 1461 ] * input [ 101 ] ; xx [ 1468 ]
= ( xx [ 1437 ] * xx [ 1449 ] + xx [ 1455 ] * xx [ 1467 ] ) * xx [ 11 ] ; xx
[ 1469 ] = xx [ 11 ] * ( xx [ 1455 ] * xx [ 1449 ] - xx [ 1437 ] * xx [ 1467
] ) ; xx [ 1437 ] = input [ 101 ] - ( xx [ 1461 ] * xx [ 1467 ] + xx [ 1443 ]
* xx [ 1449 ] ) * xx [ 11 ] ; xx [ 1473 ] = - xx [ 1468 ] ; xx [ 1474 ] = xx
[ 1469 ] ; xx [ 1475 ] = xx [ 1437 ] ; pm_math_Vector3_cross_ra ( xx + 939 ,
xx + 1473 , xx + 1476 ) ; xx [ 939 ] = 0.08364765677353131 ; xx [ 940 ] =
0.05885119014471588 ; xx [ 941 ] = - 0.1171046152989574 ; xx [ 1443 ] =
0.7067331896749514 ; xx [ 1449 ] = 0.3119482578453143 ; xx [ 1455 ] = xx [
1449 ] * input [ 102 ] ; xx [ 1461 ] = 0.2564149209497433 ; xx [ 1467 ] =
0.5809198493367906 ; xx [ 1473 ] = xx [ 1467 ] * input [ 102 ] ; xx [ 1474 ]
= ( xx [ 1443 ] * xx [ 1455 ] + xx [ 1461 ] * xx [ 1473 ] ) * xx [ 11 ] ; xx
[ 1475 ] = xx [ 11 ] * ( xx [ 1461 ] * xx [ 1455 ] - xx [ 1443 ] * xx [ 1473
] ) ; xx [ 1443 ] = input [ 102 ] - ( xx [ 1467 ] * xx [ 1473 ] + xx [ 1449 ]
* xx [ 1455 ] ) * xx [ 11 ] ; xx [ 1479 ] = - xx [ 1474 ] ; xx [ 1480 ] = xx
[ 1475 ] ; xx [ 1481 ] = xx [ 1443 ] ; pm_math_Vector3_cross_ra ( xx + 939 ,
xx + 1479 , xx + 1482 ) ; xx [ 939 ] = - 0.01629915112845618 ; xx [ 940 ] =
0.05877877777950456 ; xx [ 941 ] = - 2.234529161204791e-3 ; xx [ 1449 ] =
0.12012255005401 ; xx [ 1455 ] = 8.250559975753753e-3 ; xx [ 1461 ] = xx [
1455 ] * input [ 105 ] ; xx [ 1467 ] = 0.06802456318904793 ; xx [ 1473 ] =
0.9903914175877879 ; xx [ 1479 ] = xx [ 1473 ] * input [ 105 ] ; xx [ 1480 ]
= ( xx [ 1449 ] * xx [ 1461 ] + xx [ 1467 ] * xx [ 1479 ] ) * xx [ 11 ] ; xx
[ 1481 ] = xx [ 11 ] * ( xx [ 1467 ] * xx [ 1461 ] - xx [ 1449 ] * xx [ 1479
] ) ; xx [ 1449 ] = input [ 105 ] - ( xx [ 1473 ] * xx [ 1479 ] + xx [ 1455 ]
* xx [ 1461 ] ) * xx [ 11 ] ; xx [ 1485 ] = xx [ 1480 ] ; xx [ 1486 ] = xx [
1481 ] ; xx [ 1487 ] = xx [ 1449 ] ; pm_math_Vector3_cross_ra ( xx + 939 , xx
+ 1485 , xx + 1488 ) ; xx [ 939 ] = 3.708927448715881e-11 ; xx [ 940 ] = -
0.01098323883424421 ; xx [ 941 ] = - 0.106610016515035 ; xx [ 1455 ] =
0.6719667737207162 ; xx [ 1461 ] = 1.699259131240703e-10 ; xx [ 1467 ] = xx [
1461 ] * input [ 108 ] ; xx [ 1473 ] = 1.194822558890025e-10 ; xx [ 1479 ] =
0.7405812953453335 ; xx [ 1485 ] = xx [ 1479 ] * input [ 108 ] ; xx [ 1486 ]
= ( xx [ 1455 ] * xx [ 1467 ] + xx [ 1473 ] * xx [ 1485 ] ) * xx [ 11 ] ; xx
[ 1487 ] = xx [ 11 ] * ( xx [ 1473 ] * xx [ 1467 ] - xx [ 1455 ] * xx [ 1485
] ) ; xx [ 1455 ] = input [ 108 ] - ( xx [ 1479 ] * xx [ 1485 ] + xx [ 1461 ]
* xx [ 1467 ] ) * xx [ 11 ] ; xx [ 1491 ] = - xx [ 1486 ] ; xx [ 1492 ] = xx
[ 1487 ] ; xx [ 1493 ] = xx [ 1455 ] ; pm_math_Vector3_cross_ra ( xx + 939 ,
xx + 1491 , xx + 1494 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx
+ 871 , xx + 939 ) ; pm_math_Vector3_cross_ra ( xx + 868 , xx + 939 , xx +
1491 ) ; xx [ 868 ] = xx [ 887 ] ; xx [ 869 ] = xx [ 888 ] ; xx [ 870 ] = xx
[ 890 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 868 , xx +
1497 ) ; pm_math_Vector3_cross_ra ( xx + 883 , xx + 1497 , xx + 868 ) ; xx [
883 ] = xx [ 904 ] ; xx [ 884 ] = xx [ 905 ] ; xx [ 885 ] = xx [ 907 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 883 , xx + 1500 ) ;
pm_math_Vector3_cross_ra ( xx + 900 , xx + 1500 , xx + 883 ) ; xx [ 900 ] =
0.01688944443296599 ; xx [ 901 ] = 0.1061533353579484 ; xx [ 902 ] = -
0.0363534993916424 ; pm_math_Quaternion_compose_ra ( xx + 587 , xx + 61 , xx
+ 1503 ) ; pm_math_Quaternion_compose_ra ( xx + 1503 , xx + 88 , xx + 1507 )
; pm_math_Quaternion_compose_ra ( xx + 1507 , xx + 84 , xx + 1511 ) ;
pm_math_Quaternion_compose_ra ( xx + 1511 , xx + 113 , xx + 1515 ) ;
pm_math_Quaternion_xform_ra ( xx + 1515 , xx + 900 , xx + 1519 ) ;
pm_math_Quaternion_xform_ra ( xx + 1511 , xx + 154 , xx + 1522 ) ;
pm_math_Quaternion_xform_ra ( xx + 1507 , xx + 121 , xx + 1511 ) ;
pm_math_Quaternion_xform_ra ( xx + 1503 , xx + 92 , xx + 1507 ) ;
pm_math_Quaternion_xform_ra ( xx + 587 , xx + 398 , xx + 1503 ) ; xx [ 1461 ]
= xx [ 1522 ] + xx [ 1511 ] + xx [ 1507 ] + xx [ 1503 ] - xx [ 591 ] ; xx [
591 ] = 0.01688944435119629 ; xx [ 1467 ] = xx [ 1519 ] + xx [ 1461 ] - xx [
591 ] ; xx [ 1473 ] = xx [ 1523 ] + xx [ 1512 ] + xx [ 1508 ] + xx [ 1504 ] +
xx [ 593 ] ; xx [ 593 ] = 0.1319682159423828 ; xx [ 1479 ] = xx [ 1520 ] + xx
[ 1473 ] - xx [ 593 ] ; xx [ 1485 ] = xx [ 1524 ] + xx [ 1513 ] + xx [ 1509 ]
+ xx [ 1505 ] + xx [ 596 ] ; xx [ 596 ] = 0.8089576416015625 ; xx [ 1503 ] =
xx [ 1521 ] + xx [ 1485 ] - xx [ 596 ] ; xx [ 1504 ] = sqrt ( xx [ 1467 ] *
xx [ 1467 ] + xx [ 1479 ] * xx [ 1479 ] + xx [ 1503 ] * xx [ 1503 ] ) ; if (
xx [ 1504 ] == 0.0 ) * derivErr = 1 ; xx [ 1505 ] = input [ 124 ] / xx [ 1504
] ; xx [ 1506 ] = xx [ 1505 ] * xx [ 1467 ] ; xx [ 1507 ] = xx [ 1505 ] * xx
[ 1479 ] ; xx [ 1508 ] = xx [ 1505 ] * xx [ 1503 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1515 , xx + 1506 , xx + 1509 ) ;
pm_math_Vector3_cross_ra ( xx + 900 , xx + 1509 , xx + 1506 ) ; xx [ 900 ] =
- 0.01688944426942647 ; xx [ 901 ] = 0.1061533353718742 ; xx [ 902 ] = -
0.03635349939337851 ; pm_math_Quaternion_xform_ra ( xx + 1515 , xx + 900 , xx
+ 1512 ) ; xx [ 1519 ] = xx [ 1512 ] + xx [ 1461 ] + xx [ 591 ] ; xx [ 591 ]
= xx [ 1513 ] + xx [ 1473 ] - xx [ 593 ] ; xx [ 593 ] = xx [ 1514 ] + xx [
1485 ] - xx [ 596 ] ; xx [ 596 ] = sqrt ( xx [ 1519 ] * xx [ 1519 ] + xx [
591 ] * xx [ 591 ] + xx [ 593 ] * xx [ 593 ] ) ; if ( xx [ 596 ] == 0.0 ) *
derivErr = 1 ; xx [ 1512 ] = input [ 125 ] / xx [ 596 ] ; xx [ 1520 ] = xx [
1512 ] * xx [ 1519 ] ; xx [ 1521 ] = xx [ 1512 ] * xx [ 591 ] ; xx [ 1522 ] =
xx [ 1512 ] * xx [ 593 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1515 ,
xx + 1520 , xx + 1523 ) ; pm_math_Vector3_cross_ra ( xx + 900 , xx + 1523 ,
xx + 1520 ) ; xx [ 900 ] = 9.709312439494935e-3 ; xx [ 901 ] = -
0.08575875923336911 ; xx [ 902 ] = 4.916076512637418e-3 ;
pm_math_Quaternion_xform_ra ( xx + 1515 , xx + 900 , xx + 1526 ) ; xx [ 1513
] = 9.709312438964843e-3 ; xx [ 1514 ] = xx [ 1526 ] + xx [ 1461 ] - xx [
1513 ] ; xx [ 1529 ] = 2.232642650604248e-3 ; xx [ 1530 ] = xx [ 1527 ] + xx
[ 1473 ] + xx [ 1529 ] ; xx [ 1526 ] = 0.8689576416015625 ; xx [ 1527 ] = xx
[ 1528 ] + xx [ 1485 ] - xx [ 1526 ] ; xx [ 1528 ] = sqrt ( xx [ 1514 ] * xx
[ 1514 ] + xx [ 1530 ] * xx [ 1530 ] + xx [ 1527 ] * xx [ 1527 ] ) ; if ( xx
[ 1528 ] == 0.0 ) * derivErr = 1 ; xx [ 1531 ] = input [ 126 ] / xx [ 1528 ]
; xx [ 1532 ] = xx [ 1531 ] * xx [ 1514 ] ; xx [ 1533 ] = xx [ 1531 ] * xx [
1530 ] ; xx [ 1534 ] = xx [ 1531 ] * xx [ 1527 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1515 , xx + 1532 , xx + 1535 ) ;
pm_math_Vector3_cross_ra ( xx + 900 , xx + 1535 , xx + 1532 ) ; xx [ 900 ] =
- 9.709312438434646e-3 ; xx [ 901 ] = - 0.0857587592253635 ; xx [ 902 ] =
4.916076511639372e-3 ; pm_math_Quaternion_xform_ra ( xx + 1515 , xx + 900 ,
xx + 1538 ) ; xx [ 1541 ] = xx [ 1538 ] + xx [ 1461 ] + xx [ 1513 ] ; xx [
1513 ] = xx [ 1539 ] + xx [ 1473 ] + xx [ 1529 ] ; xx [ 1529 ] = xx [ 1540 ]
+ xx [ 1485 ] - xx [ 1526 ] ; xx [ 1526 ] = sqrt ( xx [ 1541 ] * xx [ 1541 ]
+ xx [ 1513 ] * xx [ 1513 ] + xx [ 1529 ] * xx [ 1529 ] ) ; if ( xx [ 1526 ]
== 0.0 ) * derivErr = 1 ; xx [ 1538 ] = input [ 127 ] / xx [ 1526 ] ; xx [
1542 ] = xx [ 1538 ] * xx [ 1541 ] ; xx [ 1543 ] = xx [ 1538 ] * xx [ 1513 ]
; xx [ 1544 ] = xx [ 1538 ] * xx [ 1529 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1515 , xx + 1542 , xx + 1545 ) ;
pm_math_Vector3_cross_ra ( xx + 900 , xx + 1545 , xx + 1542 ) ; xx [ 900 ] =
0.1069609375520753 ; xx [ 901 ] = 0.01842456453313058 ; xx [ 902 ] = -
0.1622978990106889 ; pm_math_Quaternion_xform_ra ( xx + 1515 , xx + 900 , xx
+ 1548 ) ; xx [ 1539 ] = 0.06488653564453126 ; xx [ 1540 ] = xx [ 1548 ] + xx
[ 1461 ] - xx [ 1539 ] ; xx [ 1551 ] = 0.03644176864624023 ; xx [ 1552 ] = xx
[ 1549 ] + xx [ 1473 ] - xx [ 1551 ] ; xx [ 1548 ] = 0.9499576416015625 ; xx
[ 1549 ] = xx [ 1550 ] + xx [ 1485 ] - xx [ 1548 ] ; xx [ 1550 ] = sqrt ( xx
[ 1540 ] * xx [ 1540 ] + xx [ 1552 ] * xx [ 1552 ] + xx [ 1549 ] * xx [ 1549
] ) ; if ( xx [ 1550 ] == 0.0 ) * derivErr = 1 ; xx [ 1553 ] = input [ 128 ]
/ xx [ 1550 ] ; xx [ 1554 ] = xx [ 1553 ] * xx [ 1540 ] ; xx [ 1555 ] = xx [
1553 ] * xx [ 1552 ] ; xx [ 1556 ] = xx [ 1553 ] * xx [ 1549 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1515 , xx + 1554 , xx + 1557 ) ;
pm_math_Vector3_cross_ra ( xx + 900 , xx + 1557 , xx + 1554 ) ; xx [ 900 ] =
0.09543898773968792 ; xx [ 901 ] = - 0.07942755025287042 ; xx [ 902 ] = -
0.08485896084049524 ; pm_math_Quaternion_xform_ra ( xx + 1515 , xx + 900 , xx
+ 1560 ) ; xx [ 1563 ] = 0.1324676666259766 ; xx [ 1564 ] = xx [ 1560 ] + xx
[ 1461 ] - xx [ 1563 ] ; xx [ 1565 ] = 0.1263068237304688 ; xx [ 1566 ] = xx
[ 1561 ] + xx [ 1473 ] - xx [ 1565 ] ; xx [ 1560 ] = 0.9199576416015626 ; xx
[ 1561 ] = xx [ 1562 ] + xx [ 1485 ] - xx [ 1560 ] ; xx [ 1562 ] = sqrt ( xx
[ 1564 ] * xx [ 1564 ] + xx [ 1566 ] * xx [ 1566 ] + xx [ 1561 ] * xx [ 1561
] ) ; if ( xx [ 1562 ] == 0.0 ) * derivErr = 1 ; xx [ 1567 ] = input [ 129 ]
/ xx [ 1562 ] ; xx [ 1568 ] = xx [ 1567 ] * xx [ 1564 ] ; xx [ 1569 ] = xx [
1567 ] * xx [ 1566 ] ; xx [ 1570 ] = xx [ 1567 ] * xx [ 1561 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1515 , xx + 1568 , xx + 1571 ) ;
pm_math_Vector3_cross_ra ( xx + 900 , xx + 1571 , xx + 1568 ) ; xx [ 900 ] =
- 0.1069609374479245 ; xx [ 901 ] = 0.01842456462132292 ; xx [ 902 ] = -
0.1622978990216837 ; pm_math_Quaternion_xform_ra ( xx + 1515 , xx + 900 , xx
+ 1574 ) ; xx [ 1577 ] = xx [ 1574 ] + xx [ 1461 ] + xx [ 1539 ] ; xx [ 1539
] = xx [ 1575 ] + xx [ 1473 ] - xx [ 1551 ] ; xx [ 1551 ] = xx [ 1576 ] + xx
[ 1485 ] - xx [ 1548 ] ; xx [ 1548 ] = sqrt ( xx [ 1577 ] * xx [ 1577 ] + xx
[ 1539 ] * xx [ 1539 ] + xx [ 1551 ] * xx [ 1551 ] ) ; if ( xx [ 1548 ] ==
0.0 ) * derivErr = 1 ; xx [ 1574 ] = input [ 130 ] / xx [ 1548 ] ; xx [ 1578
] = xx [ 1574 ] * xx [ 1577 ] ; xx [ 1579 ] = xx [ 1574 ] * xx [ 1539 ] ; xx
[ 1580 ] = xx [ 1574 ] * xx [ 1551 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 1515 , xx + 1578 , xx + 1581 ) ; pm_math_Vector3_cross_ra ( xx + 900 ,
xx + 1581 , xx + 1578 ) ; xx [ 900 ] = - 0.09543898772417915 ; xx [ 901 ] = -
0.07942755017417825 ; xx [ 902 ] = - 0.08485896085030567 ;
pm_math_Quaternion_xform_ra ( xx + 1515 , xx + 900 , xx + 1584 ) ; xx [ 1575
] = xx [ 1584 ] + xx [ 1461 ] + xx [ 1563 ] ; xx [ 1461 ] = xx [ 1585 ] + xx
[ 1473 ] - xx [ 1565 ] ; xx [ 1473 ] = xx [ 1586 ] + xx [ 1485 ] - xx [ 1560
] ; xx [ 1485 ] = sqrt ( xx [ 1575 ] * xx [ 1575 ] + xx [ 1461 ] * xx [ 1461
] + xx [ 1473 ] * xx [ 1473 ] ) ; if ( xx [ 1485 ] == 0.0 ) * derivErr = 1 ;
xx [ 1560 ] = input [ 131 ] / xx [ 1485 ] ; xx [ 1584 ] = xx [ 1560 ] * xx [
1575 ] ; xx [ 1585 ] = xx [ 1560 ] * xx [ 1461 ] ; xx [ 1586 ] = xx [ 1560 ]
* xx [ 1473 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1515 , xx + 1584 ,
xx + 1587 ) ; pm_math_Vector3_cross_ra ( xx + 900 , xx + 1587 , xx + 1584 ) ;
xx [ 900 ] = xx [ 1516 ] * input [ 132 ] ; xx [ 901 ] = xx [ 1517 ] * input [
132 ] ; xx [ 902 ] = xx [ 1517 ] * input [ 133 ] ; xx [ 1563 ] = xx [ 1518 ]
* input [ 133 ] ; xx [ 1565 ] = xx [ 1518 ] * input [ 134 ] ; xx [ 1576 ] =
xx [ 1516 ] * input [ 134 ] ; xx [ 1590 ] = xx [ 816 ] ; xx [ 1591 ] = xx [
817 ] ; xx [ 1592 ] = xx [ 920 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
113 , xx + 1590 , xx + 1593 ) ; pm_math_Vector3_cross_ra ( xx + 917 , xx +
1593 , xx + 1590 ) ; xx [ 917 ] = xx [ 104 ] ; xx [ 918 ] = xx [ 922 ] ; xx [
919 ] = xx [ 932 ] ; pm_math_Vector3_cross_ra ( xx + 832 , xx + 917 , xx +
1596 ) ; xx [ 1599 ] = xx [ 921 ] ; xx [ 1600 ] = xx [ 145 ] ; xx [ 1601 ] =
xx [ 934 ] ; pm_math_Vector3_cross_ra ( xx + 917 , xx + 1599 , xx + 1602 ) ;
xx [ 1599 ] = - xx [ 103 ] ; xx [ 1600 ] = - xx [ 147 ] ; xx [ 1601 ] = xx [
931 ] ; xx [ 1605 ] = xx [ 102 ] ; xx [ 1606 ] = xx [ 146 ] ; xx [ 1607 ] =
xx [ 930 ] ; pm_math_Vector3_cross_ra ( xx + 1599 , xx + 1605 , xx + 102 ) ;
xx [ 145 ] = xx [ 1602 ] + xx [ 102 ] ; xx [ 146 ] = xx [ 1596 ] - xx [ 145 ]
; xx [ 147 ] = xx [ 942 ] - xx [ 954 ] - xx [ 963 ] - xx [ 969 ] - xx [ 975 ]
- xx [ 984 ] - xx [ 990 ] - xx [ 996 ] - xx [ 1002 ] - xx [ 1008 ] - xx [
1014 ] - xx [ 1020 ] - xx [ 1026 ] - xx [ 1032 ] - xx [ 1038 ] - xx [ 1044 ]
- xx [ 1050 ] - xx [ 1056 ] - xx [ 1062 ] - xx [ 1068 ] - xx [ 1074 ] - xx [
1080 ] - xx [ 1086 ] - xx [ 1092 ] - xx [ 1098 ] - xx [ 1104 ] - xx [ 1110 ]
- xx [ 1116 ] - xx [ 1122 ] - xx [ 1128 ] - xx [ 1134 ] - xx [ 1140 ] - xx [
1146 ] - xx [ 1152 ] - xx [ 1158 ] - xx [ 1164 ] - xx [ 1170 ] - xx [ 1176 ]
- xx [ 1182 ] - xx [ 1188 ] - xx [ 1194 ] - xx [ 1200 ] - xx [ 1206 ] - xx [
1212 ] - xx [ 1218 ] - xx [ 1224 ] - xx [ 1230 ] - xx [ 1236 ] - xx [ 1242 ]
- xx [ 1248 ] - xx [ 1254 ] - xx [ 1260 ] - xx [ 1266 ] - xx [ 1272 ] - xx [
1278 ] - xx [ 1284 ] - xx [ 1290 ] - xx [ 1296 ] - xx [ 1302 ] - xx [ 1308 ]
- xx [ 1314 ] - xx [ 1320 ] - xx [ 1326 ] - xx [ 1332 ] - xx [ 1338 ] - xx [
1344 ] - xx [ 1350 ] - xx [ 1356 ] - xx [ 1362 ] - xx [ 1368 ] - xx [ 1374 ]
- xx [ 1380 ] - xx [ 1386 ] - xx [ 1392 ] - xx [ 1398 ] - xx [ 1404 ] - xx [
1410 ] - xx [ 1416 ] - xx [ 1422 ] - xx [ 1428 ] - xx [ 1434 ] - xx [ 1440 ]
- xx [ 1446 ] - xx [ 1452 ] - xx [ 1458 ] - xx [ 1464 ] - xx [ 1470 ] - xx [
1476 ] - xx [ 1482 ] - xx [ 1488 ] - xx [ 1494 ] - xx [ 1491 ] - xx [ 868 ] -
xx [ 883 ] - xx [ 1506 ] - xx [ 1520 ] - xx [ 1532 ] - xx [ 1542 ] - xx [
1554 ] - xx [ 1568 ] - xx [ 1578 ] - xx [ 1584 ] - xx [ 11 ] * ( xx [ 1518 ]
* xx [ 900 ] - xx [ 1515 ] * xx [ 901 ] ) - ( input [ 133 ] - ( xx [ 1517 ] *
xx [ 902 ] + xx [ 1518 ] * xx [ 1563 ] ) * xx [ 11 ] ) - ( xx [ 1515 ] * xx [
1565 ] + xx [ 1517 ] * xx [ 1576 ] ) * xx [ 11 ] - xx [ 1590 ] + xx [ 99 ] *
xx [ 146 ] ; xx [ 99 ] = state [ 24 ] + xx [ 42 ] ; if ( xx [ 43 ] < xx [ 99
] ) xx [ 99 ] = xx [ 43 ] ; xx [ 921 ] = - ( xx [ 99 ] / xx [ 47 ] ) ; if (
xx [ 0 ] < xx [ 921 ] ) xx [ 921 ] = xx [ 0 ] ; xx [ 922 ] = xx [ 95 ] *
state [ 27 ] ; xx [ 930 ] = xx [ 921 ] * xx [ 921 ] * ( xx [ 66 ] - xx [ 11 ]
* xx [ 921 ] ) * ( ( - xx [ 99 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 922 ] ) -
xx [ 172 ] * xx [ 99 ] ) ; if ( xx [ 43 ] > xx [ 930 ] ) xx [ 930 ] = xx [ 43
] ; xx [ 99 ] = state [ 24 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 99 ] ) xx [
99 ] = xx [ 43 ] ; xx [ 921 ] = xx [ 99 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [
921 ] ) xx [ 921 ] = xx [ 0 ] ; xx [ 931 ] = ( xx [ 172 ] * xx [ 99 ] + ( xx
[ 99 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 922 ] ) ) * xx [ 921 ] * xx [ 921 ] *
( xx [ 66 ] - xx [ 11 ] * xx [ 921 ] ) ; if ( xx [ 43 ] > xx [ 931 ] ) xx [
931 ] = xx [ 43 ] ; xx [ 99 ] = xx [ 1603 ] + xx [ 103 ] ; xx [ 921 ] = xx [
1597 ] - xx [ 99 ] ; xx [ 922 ] = xx [ 943 ] - xx [ 955 ] - xx [ 964 ] - xx [
970 ] - xx [ 976 ] - xx [ 985 ] - xx [ 991 ] - xx [ 997 ] - xx [ 1003 ] - xx
[ 1009 ] - xx [ 1015 ] - xx [ 1021 ] - xx [ 1027 ] - xx [ 1033 ] - xx [ 1039
] - xx [ 1045 ] - xx [ 1051 ] - xx [ 1057 ] - xx [ 1063 ] - xx [ 1069 ] - xx
[ 1075 ] - xx [ 1081 ] - xx [ 1087 ] - xx [ 1093 ] - xx [ 1099 ] - xx [ 1105
] - xx [ 1111 ] - xx [ 1117 ] - xx [ 1123 ] - xx [ 1129 ] - xx [ 1135 ] - xx
[ 1141 ] - xx [ 1147 ] - xx [ 1153 ] - xx [ 1159 ] - xx [ 1165 ] - xx [ 1171
] - xx [ 1177 ] - xx [ 1183 ] - xx [ 1189 ] - xx [ 1195 ] - xx [ 1201 ] - xx
[ 1207 ] - xx [ 1213 ] - xx [ 1219 ] - xx [ 1225 ] - xx [ 1231 ] - xx [ 1237
] - xx [ 1243 ] - xx [ 1249 ] - xx [ 1255 ] - xx [ 1261 ] - xx [ 1267 ] - xx
[ 1273 ] - xx [ 1279 ] - xx [ 1285 ] - xx [ 1291 ] - xx [ 1297 ] - xx [ 1303
] - xx [ 1309 ] - xx [ 1315 ] - xx [ 1321 ] - xx [ 1327 ] - xx [ 1333 ] - xx
[ 1339 ] - xx [ 1345 ] - xx [ 1351 ] - xx [ 1357 ] - xx [ 1363 ] - xx [ 1369
] - xx [ 1375 ] - xx [ 1381 ] - xx [ 1387 ] - xx [ 1393 ] - xx [ 1399 ] - xx
[ 1405 ] - xx [ 1411 ] - xx [ 1417 ] - xx [ 1423 ] - xx [ 1429 ] - xx [ 1435
] - xx [ 1441 ] - xx [ 1447 ] - xx [ 1453 ] - xx [ 1459 ] - xx [ 1465 ] - xx
[ 1471 ] - xx [ 1477 ] - xx [ 1483 ] - xx [ 1489 ] - xx [ 1495 ] - xx [ 1492
] - xx [ 869 ] - xx [ 884 ] - xx [ 1507 ] - xx [ 1521 ] - xx [ 1533 ] - xx [
1543 ] - xx [ 1555 ] - xx [ 1569 ] - xx [ 1579 ] - xx [ 1585 ] - ( xx [ 1515
] * xx [ 900 ] + xx [ 1518 ] * xx [ 901 ] ) * xx [ 11 ] - xx [ 11 ] * ( xx [
1516 ] * xx [ 902 ] - xx [ 1515 ] * xx [ 1563 ] ) - ( input [ 134 ] - ( xx [
1518 ] * xx [ 1565 ] + xx [ 1516 ] * xx [ 1576 ] ) * xx [ 11 ] ) - xx [ 1591
] + xx [ 107 ] * xx [ 921 ] ; xx [ 102 ] = xx [ 1604 ] + xx [ 104 ] ; xx [
103 ] = xx [ 1598 ] - xx [ 102 ] ; xx [ 104 ] = xx [ 944 ] - xx [ 956 ] - xx
[ 965 ] - xx [ 971 ] - xx [ 977 ] - xx [ 986 ] - xx [ 992 ] - xx [ 998 ] - xx
[ 1004 ] - xx [ 1010 ] - xx [ 1016 ] - xx [ 1022 ] - xx [ 1028 ] - xx [ 1034
] - xx [ 1040 ] - xx [ 1046 ] - xx [ 1052 ] - xx [ 1058 ] - xx [ 1064 ] - xx
[ 1070 ] - xx [ 1076 ] - xx [ 1082 ] - xx [ 1088 ] - xx [ 1094 ] - xx [ 1100
] - xx [ 1106 ] - xx [ 1112 ] - xx [ 1118 ] - xx [ 1124 ] - xx [ 1130 ] - xx
[ 1136 ] - xx [ 1142 ] - xx [ 1148 ] - xx [ 1154 ] - xx [ 1160 ] - xx [ 1166
] - xx [ 1172 ] - xx [ 1178 ] - xx [ 1184 ] - xx [ 1190 ] - xx [ 1196 ] - xx
[ 1202 ] - xx [ 1208 ] - xx [ 1214 ] - xx [ 1220 ] - xx [ 1226 ] - xx [ 1232
] - xx [ 1238 ] - xx [ 1244 ] - xx [ 1250 ] - xx [ 1256 ] - xx [ 1262 ] - xx
[ 1268 ] - xx [ 1274 ] - xx [ 1280 ] - xx [ 1286 ] - xx [ 1292 ] - xx [ 1298
] - xx [ 1304 ] - xx [ 1310 ] - xx [ 1316 ] - xx [ 1322 ] - xx [ 1328 ] - xx
[ 1334 ] - xx [ 1340 ] - xx [ 1346 ] - xx [ 1352 ] - xx [ 1358 ] - xx [ 1364
] - xx [ 1370 ] - xx [ 1376 ] - xx [ 1382 ] - xx [ 1388 ] - xx [ 1394 ] - xx
[ 1400 ] - xx [ 1406 ] - xx [ 1412 ] - xx [ 1418 ] - xx [ 1424 ] - xx [ 1430
] - xx [ 1436 ] - xx [ 1442 ] - xx [ 1448 ] - xx [ 1454 ] - xx [ 1460 ] - xx
[ 1466 ] - xx [ 1472 ] - xx [ 1478 ] - xx [ 1484 ] - xx [ 1490 ] - xx [ 1496
] - xx [ 1493 ] - xx [ 870 ] - xx [ 885 ] - xx [ 1508 ] - xx [ 1522 ] - xx [
1534 ] - xx [ 1544 ] - xx [ 1556 ] - xx [ 1570 ] - xx [ 1580 ] - xx [ 1586 ]
- ( input [ 132 ] - ( xx [ 1516 ] * xx [ 900 ] + xx [ 1517 ] * xx [ 901 ] ) *
xx [ 11 ] ) - ( xx [ 1515 ] * xx [ 902 ] + xx [ 1516 ] * xx [ 1563 ] ) * xx [
11 ] - xx [ 11 ] * ( xx [ 1517 ] * xx [ 1565 ] - xx [ 1515 ] * xx [ 1576 ] )
- xx [ 1592 ] + xx [ 126 ] * xx [ 103 ] ; xx [ 868 ] = xx [ 147 ] ; xx [ 869
] = xx [ 922 ] ; xx [ 870 ] = xx [ 104 ] ; xx [ 883 ] = xx [ 832 ] + xx [ 105
] ; xx [ 884 ] = xx [ 833 ] + xx [ 933 ] ; xx [ 885 ] = xx [ 834 ] + xx [ 935
] ; pm_math_Vector3_cross_ra ( xx + 131 , xx + 917 , xx + 832 ) ;
pm_math_Vector3_cross_ra ( xx + 883 , xx + 832 , xx + 900 ) ;
pm_math_Vector3_cross_ra ( xx + 851 , xx + 154 , xx + 832 ) ;
pm_math_Vector3_cross_ra ( xx + 851 , xx + 832 , xx + 883 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 883 , xx + 832 ) ; xx [
851 ] = - xx [ 145 ] ; xx [ 852 ] = - xx [ 99 ] ; xx [ 853 ] = - xx [ 102 ] ;
pm_math_Vector3_cross_ra ( xx + 131 , xx + 851 , xx + 883 ) ; xx [ 99 ] = xx
[ 900 ] + xx [ 832 ] + xx [ 883 ] ; xx [ 102 ] = xx [ 951 ] - xx [ 961 ] - xx
[ 967 ] + xx [ 973 ] + xx [ 979 ] + xx [ 982 ] - xx [ 988 ] + xx [ 994 ] + xx
[ 1000 ] + xx [ 1006 ] + xx [ 1012 ] + xx [ 1018 ] + xx [ 1024 ] - xx [ 1030
] + xx [ 1036 ] + xx [ 1042 ] + xx [ 1048 ] + xx [ 1054 ] + xx [ 1060 ] + xx
[ 1066 ] + xx [ 1072 ] + xx [ 1078 ] + xx [ 1084 ] + xx [ 1090 ] - xx [ 1096
] + xx [ 1102 ] + xx [ 1108 ] + xx [ 1114 ] + xx [ 1120 ] + xx [ 1126 ] + xx
[ 1132 ] + xx [ 1138 ] + xx [ 1144 ] + xx [ 1150 ] + xx [ 1156 ] + xx [ 1162
] + xx [ 1168 ] + xx [ 1174 ] + xx [ 1180 ] - xx [ 1186 ] + xx [ 1185 ] + xx
[ 1198 ] + xx [ 1204 ] + xx [ 1210 ] + xx [ 1216 ] - xx [ 1222 ] - xx [ 1228
] + xx [ 1234 ] + xx [ 1240 ] - xx [ 1246 ] - xx [ 1252 ] - xx [ 1258 ] - xx
[ 1264 ] - xx [ 1270 ] - xx [ 1276 ] + xx [ 1282 ] - xx [ 1288 ] - xx [ 1294
] - xx [ 1300 ] - xx [ 1306 ] - xx [ 1312 ] - xx [ 1318 ] - xx [ 1324 ] - xx
[ 1330 ] - xx [ 1336 ] - xx [ 1342 ] - xx [ 1348 ] - xx [ 1354 ] + xx [ 1360
] - xx [ 1366 ] - xx [ 1372 ] - xx [ 1378 ] - xx [ 1384 ] - xx [ 1390 ] - xx
[ 1396 ] - xx [ 1402 ] - xx [ 1408 ] - xx [ 1414 ] - xx [ 1420 ] + xx [ 1426
] - xx [ 1432 ] - xx [ 1438 ] - xx [ 1444 ] - xx [ 1450 ] - xx [ 1456 ] - xx
[ 1462 ] - xx [ 1468 ] - xx [ 1474 ] + xx [ 1480 ] - xx [ 1486 ] ; xx [ 105 ]
= xx [ 99 ] * xx [ 137 ] - ( xx [ 102 ] + xx [ 939 ] + xx [ 1497 ] + xx [
1500 ] + xx [ 1509 ] + xx [ 1523 ] + xx [ 1535 ] + xx [ 1545 ] + xx [ 1557 ]
+ xx [ 1571 ] + xx [ 1581 ] + xx [ 1587 ] + xx [ 1593 ] ) ; xx [ 107 ] = xx [
901 ] + xx [ 833 ] + xx [ 884 ] ; xx [ 126 ] = xx [ 952 ] + xx [ 962 ] + xx [
968 ] + xx [ 974 ] + xx [ 980 ] + xx [ 983 ] + xx [ 989 ] + xx [ 995 ] + xx [
1001 ] + xx [ 1007 ] + xx [ 1013 ] + xx [ 1019 ] + xx [ 1025 ] + xx [ 1031 ]
+ xx [ 1037 ] + xx [ 1043 ] + xx [ 1049 ] + xx [ 1055 ] + xx [ 1061 ] + xx [
1067 ] + xx [ 1073 ] + xx [ 1079 ] + xx [ 1085 ] + xx [ 1091 ] + xx [ 1097 ]
+ xx [ 1103 ] + xx [ 1109 ] + xx [ 1115 ] + xx [ 1121 ] + xx [ 1127 ] + xx [
1133 ] + xx [ 1139 ] + xx [ 1145 ] + xx [ 1151 ] + xx [ 1157 ] + xx [ 1163 ]
+ xx [ 1169 ] + xx [ 1175 ] + xx [ 1181 ] + xx [ 1187 ] - xx [ 1191 ] + xx [
1199 ] + xx [ 1205 ] + xx [ 1211 ] + xx [ 1217 ] + xx [ 1223 ] + xx [ 1229 ]
+ xx [ 1235 ] + xx [ 1241 ] + xx [ 1247 ] + xx [ 1253 ] + xx [ 1259 ] + xx [
1265 ] + xx [ 1271 ] + xx [ 1277 ] + xx [ 1283 ] + xx [ 1289 ] + xx [ 1295 ]
+ xx [ 1301 ] + xx [ 1307 ] + xx [ 1313 ] + xx [ 1319 ] + xx [ 1325 ] + xx [
1331 ] + xx [ 1337 ] + xx [ 1343 ] + xx [ 1349 ] + xx [ 1355 ] + xx [ 1361 ]
+ xx [ 1367 ] + xx [ 1373 ] + xx [ 1379 ] + xx [ 1385 ] + xx [ 1391 ] + xx [
1397 ] + xx [ 1403 ] + xx [ 1409 ] + xx [ 1415 ] + xx [ 1421 ] + xx [ 1427 ]
+ xx [ 1433 ] + xx [ 1439 ] + xx [ 1445 ] + xx [ 1451 ] + xx [ 1457 ] + xx [
1463 ] + xx [ 1469 ] + xx [ 1475 ] + xx [ 1481 ] + xx [ 1487 ] ; xx [ 131 ] =
xx [ 107 ] * xx [ 137 ] - ( xx [ 126 ] + xx [ 940 ] + xx [ 1498 ] + xx [ 1501
] + xx [ 1510 ] + xx [ 1524 ] + xx [ 1536 ] + xx [ 1546 ] + xx [ 1558 ] + xx
[ 1572 ] + xx [ 1582 ] + xx [ 1588 ] + xx [ 1594 ] ) ; xx [ 132 ] = xx [ 902
] + xx [ 834 ] + xx [ 885 ] ; xx [ 133 ] = xx [ 953 ] + xx [ 947 ] + xx [ 950
] + xx [ 957 ] + xx [ 958 ] + xx [ 959 ] + xx [ 960 ] + xx [ 966 ] + xx [ 972
] + xx [ 978 ] + xx [ 981 ] + xx [ 987 ] + xx [ 993 ] + xx [ 999 ] + xx [
1005 ] + xx [ 1011 ] + xx [ 1017 ] + xx [ 1023 ] + xx [ 1029 ] + xx [ 1035 ]
+ xx [ 1041 ] + xx [ 1047 ] + xx [ 1053 ] + xx [ 1059 ] + xx [ 1065 ] + xx [
1071 ] + xx [ 1077 ] + xx [ 1083 ] + xx [ 1089 ] + xx [ 1095 ] + xx [ 1101 ]
+ xx [ 1107 ] + xx [ 1113 ] + xx [ 1119 ] + xx [ 1125 ] + xx [ 1131 ] + xx [
1137 ] + xx [ 1143 ] + xx [ 1149 ] + xx [ 1155 ] + xx [ 1161 ] + xx [ 1167 ]
+ xx [ 1173 ] + xx [ 1179 ] + xx [ 1192 ] + xx [ 1193 ] + xx [ 1197 ] + xx [
1203 ] + xx [ 1209 ] + xx [ 1215 ] + xx [ 1221 ] + xx [ 1227 ] + xx [ 1233 ]
+ xx [ 1239 ] + xx [ 1245 ] + xx [ 1251 ] + xx [ 1257 ] + xx [ 1263 ] + xx [
1269 ] + xx [ 1275 ] + xx [ 1281 ] + xx [ 1287 ] + xx [ 1293 ] + xx [ 1299 ]
+ xx [ 1305 ] + xx [ 1311 ] + xx [ 1317 ] + xx [ 1323 ] + xx [ 1329 ] + xx [
1335 ] + xx [ 1341 ] + xx [ 1347 ] + xx [ 1353 ] + xx [ 1359 ] + xx [ 1365 ]
+ xx [ 1371 ] + xx [ 1377 ] + xx [ 1383 ] + xx [ 1389 ] + xx [ 1395 ] + xx [
1401 ] + xx [ 1407 ] + xx [ 1413 ] + xx [ 1419 ] + xx [ 1425 ] + xx [ 1431 ]
+ xx [ 1437 ] + xx [ 1443 ] + xx [ 1449 ] + xx [ 1455 ] ; xx [ 145 ] = xx [
132 ] * xx [ 137 ] - ( xx [ 133 ] + xx [ 941 ] + xx [ 1499 ] + xx [ 1502 ] +
xx [ 1511 ] + xx [ 1525 ] + xx [ 1537 ] + xx [ 1547 ] + xx [ 1559 ] + xx [
1573 ] + xx [ 1583 ] + xx [ 1589 ] + xx [ 1595 ] ) ; xx [ 832 ] = xx [ 105 ]
; xx [ 833 ] = xx [ 131 ] ; xx [ 834 ] = xx [ 145 ] ; xx [ 851 ] = state [ 25
] + xx [ 42 ] ; if ( xx [ 43 ] < xx [ 851 ] ) xx [ 851 ] = xx [ 43 ] ; xx [
852 ] = - ( xx [ 851 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 852 ] ) xx [ 852
] = xx [ 0 ] ; xx [ 853 ] = xx [ 95 ] * state [ 28 ] ; xx [ 883 ] = xx [ 852
] * xx [ 852 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 852 ] ) * ( ( - xx [ 851 ] ==
xx [ 43 ] ? xx [ 43 ] : - xx [ 853 ] ) - xx [ 172 ] * xx [ 851 ] ) ; if ( xx
[ 43 ] > xx [ 883 ] ) xx [ 883 ] = xx [ 43 ] ; xx [ 851 ] = state [ 25 ] - xx
[ 42 ] ; if ( xx [ 43 ] > xx [ 851 ] ) xx [ 851 ] = xx [ 43 ] ; xx [ 852 ] =
xx [ 851 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 852 ] ) xx [ 852 ] = xx [ 0 ] ;
xx [ 884 ] = ( xx [ 172 ] * xx [ 851 ] + ( xx [ 851 ] == xx [ 43 ] ? xx [ 43
] : xx [ 853 ] ) ) * xx [ 852 ] * xx [ 852 ] * ( xx [ 66 ] - xx [ 11 ] * xx [
852 ] ) ; if ( xx [ 43 ] > xx [ 884 ] ) xx [ 884 ] = xx [ 43 ] ; xx [ 851 ] =
state [ 26 ] + xx [ 42 ] ; if ( xx [ 43 ] < xx [ 851 ] ) xx [ 851 ] = xx [ 43
] ; xx [ 852 ] = - ( xx [ 851 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 852 ] )
xx [ 852 ] = xx [ 0 ] ; xx [ 853 ] = xx [ 95 ] * state [ 29 ] ; xx [ 885 ] =
xx [ 852 ] * xx [ 852 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 852 ] ) * ( ( - xx [
851 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 853 ] ) - xx [ 172 ] * xx [ 851 ] ) ;
if ( xx [ 43 ] > xx [ 885 ] ) xx [ 885 ] = xx [ 43 ] ; xx [ 851 ] = state [
26 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 851 ] ) xx [ 851 ] = xx [ 43 ] ; xx
[ 852 ] = xx [ 851 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 852 ] ) xx [ 852 ] =
xx [ 0 ] ; xx [ 900 ] = ( xx [ 172 ] * xx [ 851 ] + ( xx [ 851 ] == xx [ 43 ]
? xx [ 43 ] : xx [ 853 ] ) ) * xx [ 852 ] * xx [ 852 ] * ( xx [ 66 ] - xx [
11 ] * xx [ 852 ] ) ; if ( xx [ 43 ] > xx [ 900 ] ) xx [ 900 ] = xx [ 43 ] ;
xx [ 851 ] = - xx [ 98 ] ; xx [ 852 ] = - xx [ 97 ] ; xx [ 853 ] = xx [ 83 ]
; xx [ 901 ] = 0.03342895180409124 ; xx [ 902 ] = 2.233705901158266e-11 ; xx
[ 917 ] = 2.906461761334121e-12 ; xx [ 932 ] = - xx [ 901 ] ; xx [ 933 ] = -
xx [ 902 ] ; xx [ 934 ] = - xx [ 917 ] ; xx [ 939 ] = input [ 0 ] - xx [ 40 ]
* state [ 27 ] + xx [ 930 ] - xx [ 931 ] - ( pm_math_Vector3_dot_ra ( xx +
110 , xx + 868 ) + pm_math_Vector3_dot_ra ( xx + 134 , xx + 832 ) ) ; xx [
940 ] = input [ 1 ] - xx [ 40 ] * state [ 28 ] + xx [ 883 ] - xx [ 884 ] - (
pm_math_Vector3_dot_ra ( xx + 148 , xx + 868 ) + pm_math_Vector3_dot_ra ( xx
+ 151 , xx + 832 ) ) ; xx [ 941 ] = input [ 2 ] - xx [ 40 ] * state [ 29 ] +
xx [ 885 ] - xx [ 900 ] - ( pm_math_Vector3_dot_ra ( xx + 851 , xx + 868 ) +
pm_math_Vector3_dot_ra ( xx + 932 , xx + 832 ) ) ; solveSymmetricPosDef ( xx
+ 177 , xx + 939 , 3 , 1 , xx + 110 , xx + 832 ) ; xx [ 177 ] = xx [ 147 ] +
xx [ 110 ] * xx [ 81 ] + xx [ 111 ] * xx [ 71 ] - xx [ 158 ] * xx [ 112 ] ;
xx [ 178 ] = xx [ 922 ] + xx [ 110 ] * xx [ 108 ] + xx [ 111 ] * xx [ 78 ] -
xx [ 160 ] * xx [ 112 ] ; xx [ 179 ] = xx [ 104 ] + xx [ 110 ] * xx [ 127 ] +
xx [ 111 ] * xx [ 82 ] + xx [ 162 ] * xx [ 112 ] ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 177 , xx + 180 ) ; xx [ 177 ] =
xx [ 105 ] + xx [ 110 ] * xx [ 138 ] + xx [ 111 ] * xx [ 100 ] - xx [ 166 ] *
xx [ 112 ] ; xx [ 178 ] = xx [ 131 ] + xx [ 110 ] * xx [ 139 ] + xx [ 111 ] *
xx [ 101 ] - xx [ 168 ] * xx [ 112 ] ; xx [ 179 ] = xx [ 145 ] + xx [ 110 ] *
xx [ 140 ] + xx [ 111 ] * xx [ 144 ] - xx [ 170 ] * xx [ 112 ] ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 177 , xx + 138 ) ;
pm_math_Vector3_cross_ra ( xx + 154 , xx + 138 , xx + 177 ) ; xx [ 183 ] = xx
[ 76 ] ; xx [ 184 ] = xx [ 837 ] ; xx [ 185 ] = xx [ 847 ] ;
pm_math_Vector3_cross_ra ( xx + 748 , xx + 183 , xx + 832 ) ; xx [ 851 ] = xx
[ 836 ] ; xx [ 852 ] = xx [ 265 ] ; xx [ 853 ] = xx [ 849 ] ;
pm_math_Vector3_cross_ra ( xx + 183 , xx + 851 , xx + 868 ) ; xx [ 851 ] = xx
[ 75 ] ; xx [ 852 ] = xx [ 267 ] ; xx [ 853 ] = xx [ 846 ] ; xx [ 883 ] = xx
[ 74 ] ; xx [ 884 ] = xx [ 266 ] ; xx [ 885 ] = xx [ 845 ] ;
pm_math_Vector3_cross_ra ( xx + 851 , xx + 883 , xx + 74 ) ; xx [ 71 ] = xx [
868 ] + xx [ 74 ] ; xx [ 78 ] = xx [ 832 ] - xx [ 71 ] ; xx [ 81 ] = xx [ 869
] + xx [ 75 ] ; xx [ 82 ] = xx [ 833 ] - xx [ 81 ] ; xx [ 74 ] = xx [ 870 ] +
xx [ 76 ] ; xx [ 75 ] = xx [ 834 ] - xx [ 74 ] ; xx [ 265 ] = xx [ 78 ] ; xx
[ 266 ] = xx [ 82 ] ; xx [ 267 ] = xx [ 75 ] ; pm_math_Matrix3x3_xform_ra (
xx + 186 , xx + 265 , xx + 832 ) ; xx [ 186 ] = xx [ 748 ] + xx [ 77 ] ; xx [
187 ] = xx [ 749 ] + xx [ 848 ] ; xx [ 188 ] = xx [ 750 ] + xx [ 850 ] ;
pm_math_Vector3_cross_ra ( xx + 228 , xx + 183 , xx + 189 ) ;
pm_math_Vector3_cross_ra ( xx + 186 , xx + 189 , xx + 183 ) ;
pm_math_Vector3_cross_ra ( xx + 765 , xx + 121 , xx + 186 ) ;
pm_math_Vector3_cross_ra ( xx + 765 , xx + 186 , xx + 189 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 189 , xx + 186 ) ; xx [
189 ] = - xx [ 71 ] ; xx [ 190 ] = - xx [ 81 ] ; xx [ 191 ] = - xx [ 74 ] ;
pm_math_Vector3_cross_ra ( xx + 228 , xx + 189 , xx + 192 ) ; xx [ 71 ] = xx
[ 183 ] + xx [ 186 ] + xx [ 192 ] ; xx [ 74 ] = xx [ 184 ] + xx [ 187 ] + xx
[ 193 ] ; xx [ 76 ] = xx [ 185 ] + xx [ 188 ] + xx [ 194 ] ; xx [ 183 ] = xx
[ 71 ] ; xx [ 184 ] = xx [ 74 ] ; xx [ 185 ] = xx [ 76 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 195 , xx + 183 , xx + 186 ) ; xx [ 77 ] =
xx [ 857 ] - xx [ 865 ] - xx [ 877 ] - xx [ 860 ] - xx [ 894 ] - xx [ 880 ] -
xx [ 911 ] - xx [ 897 ] - xx [ 927 ] - xx [ 914 ] + xx [ 180 ] + xx [ 177 ] +
xx [ 832 ] + xx [ 186 ] ; xx [ 81 ] = state [ 18 ] + xx [ 42 ] ; if ( xx [ 43
] < xx [ 81 ] ) xx [ 81 ] = xx [ 43 ] ; xx [ 100 ] = - ( xx [ 81 ] / xx [ 47
] ) ; if ( xx [ 0 ] < xx [ 100 ] ) xx [ 100 ] = xx [ 0 ] ; xx [ 101 ] = xx [
95 ] * state [ 21 ] ; xx [ 104 ] = xx [ 100 ] * xx [ 100 ] * ( xx [ 66 ] - xx
[ 11 ] * xx [ 100 ] ) * ( ( - xx [ 81 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 101
] ) - xx [ 172 ] * xx [ 81 ] ) ; if ( xx [ 43 ] > xx [ 104 ] ) xx [ 104 ] =
xx [ 43 ] ; xx [ 81 ] = state [ 18 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 81 ]
) xx [ 81 ] = xx [ 43 ] ; xx [ 100 ] = xx [ 81 ] / xx [ 47 ] ; if ( xx [ 0 ]
< xx [ 100 ] ) xx [ 100 ] = xx [ 0 ] ; xx [ 105 ] = ( xx [ 172 ] * xx [ 81 ]
+ ( xx [ 81 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 101 ] ) ) * xx [ 100 ] * xx [
100 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 100 ] ) ; if ( xx [ 43 ] > xx [ 105 ]
) xx [ 105 ] = xx [ 43 ] ; xx [ 81 ] = xx [ 858 ] - xx [ 866 ] - xx [ 878 ] -
xx [ 861 ] - xx [ 895 ] - xx [ 881 ] - xx [ 912 ] - xx [ 898 ] - xx [ 928 ] -
xx [ 915 ] + xx [ 181 ] + xx [ 178 ] + xx [ 833 ] + xx [ 187 ] ; xx [ 100 ] =
xx [ 859 ] - xx [ 867 ] - xx [ 879 ] - xx [ 862 ] - xx [ 896 ] - xx [ 882 ] -
xx [ 913 ] - xx [ 899 ] - xx [ 929 ] - xx [ 916 ] + xx [ 182 ] + xx [ 179 ] +
xx [ 834 ] + xx [ 188 ] ; xx [ 177 ] = xx [ 77 ] ; xx [ 178 ] = xx [ 81 ] ;
xx [ 179 ] = xx [ 100 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 195 , xx
+ 265 , xx + 180 ) ; pm_math_Matrix3x3_xform_ra ( xx + 247 , xx + 183 , xx +
186 ) ; xx [ 101 ] = xx [ 871 ] + xx [ 863 ] - xx [ 874 ] + xx [ 887 ] - xx [
891 ] + xx [ 904 ] - xx [ 908 ] + xx [ 816 ] - xx [ 924 ] + xx [ 138 ] + xx [
180 ] + xx [ 186 ] ; xx [ 108 ] = xx [ 872 ] - xx [ 864 ] - xx [ 875 ] + xx [
888 ] - xx [ 892 ] + xx [ 905 ] - xx [ 909 ] + xx [ 817 ] - xx [ 925 ] + xx [
139 ] + xx [ 181 ] + xx [ 187 ] ; xx [ 127 ] = xx [ 873 ] - xx [ 143 ] - xx [
876 ] + xx [ 890 ] - xx [ 893 ] + xx [ 907 ] - xx [ 910 ] + xx [ 920 ] - xx [
926 ] + xx [ 140 ] + xx [ 182 ] + xx [ 188 ] ; xx [ 138 ] = xx [ 101 ] ; xx [
139 ] = xx [ 108 ] ; xx [ 140 ] = xx [ 127 ] ; xx [ 131 ] = state [ 19 ] + xx
[ 42 ] ; if ( xx [ 43 ] < xx [ 131 ] ) xx [ 131 ] = xx [ 43 ] ; xx [ 144 ] =
- ( xx [ 131 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 144 ] ) xx [ 144 ] = xx [
0 ] ; xx [ 145 ] = xx [ 95 ] * state [ 22 ] ; xx [ 147 ] = xx [ 144 ] * xx [
144 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 144 ] ) * ( ( - xx [ 131 ] == xx [ 43
] ? xx [ 43 ] : - xx [ 145 ] ) - xx [ 172 ] * xx [ 131 ] ) ; if ( xx [ 43 ] >
xx [ 147 ] ) xx [ 147 ] = xx [ 43 ] ; xx [ 131 ] = state [ 19 ] - xx [ 42 ] ;
if ( xx [ 43 ] > xx [ 131 ] ) xx [ 131 ] = xx [ 43 ] ; xx [ 144 ] = xx [ 131
] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 144 ] ) xx [ 144 ] = xx [ 0 ] ; xx [ 158
] = ( xx [ 172 ] * xx [ 131 ] + ( xx [ 131 ] == xx [ 43 ] ? xx [ 43 ] : xx [
145 ] ) ) * xx [ 144 ] * xx [ 144 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 144 ] )
; if ( xx [ 43 ] > xx [ 158 ] ) xx [ 158 ] = xx [ 43 ] ; xx [ 131 ] = state [
20 ] + xx [ 42 ] ; if ( xx [ 43 ] < xx [ 131 ] ) xx [ 131 ] = xx [ 43 ] ; xx
[ 144 ] = - ( xx [ 131 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 144 ] ) xx [
144 ] = xx [ 0 ] ; xx [ 145 ] = xx [ 95 ] * state [ 23 ] ; xx [ 160 ] = xx [
144 ] * xx [ 144 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 144 ] ) * ( ( - xx [ 131
] == xx [ 43 ] ? xx [ 43 ] : - xx [ 145 ] ) - xx [ 172 ] * xx [ 131 ] ) ; if
( xx [ 43 ] > xx [ 160 ] ) xx [ 160 ] = xx [ 43 ] ; xx [ 131 ] = state [ 20 ]
- xx [ 42 ] ; if ( xx [ 43 ] > xx [ 131 ] ) xx [ 131 ] = xx [ 43 ] ; xx [ 144
] = xx [ 131 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 144 ] ) xx [ 144 ] = xx [ 0
] ; xx [ 162 ] = ( xx [ 172 ] * xx [ 131 ] + ( xx [ 131 ] == xx [ 43 ] ? xx [
43 ] : xx [ 145 ] ) ) * xx [ 144 ] * xx [ 144 ] * ( xx [ 66 ] - xx [ 11 ] *
xx [ 144 ] ) ; if ( xx [ 43 ] > xx [ 162 ] ) xx [ 162 ] = xx [ 43 ] ; xx [
180 ] = input [ 3 ] - xx [ 40 ] * state [ 21 ] + xx [ 104 ] - xx [ 105 ] - (
pm_math_Vector3_dot_ra ( xx + 222 , xx + 177 ) + pm_math_Vector3_dot_ra ( xx
+ 240 , xx + 138 ) ) ; xx [ 181 ] = input [ 4 ] - xx [ 40 ] * state [ 22 ] +
xx [ 147 ] - xx [ 158 ] - ( pm_math_Vector3_dot_ra ( xx + 268 , xx + 177 ) +
pm_math_Vector3_dot_ra ( xx + 271 , xx + 138 ) ) ; xx [ 182 ] = input [ 5 ] -
xx [ 40 ] * state [ 23 ] + xx [ 160 ] - xx [ 162 ] - ( pm_math_Vector3_dot_ra
( xx + 277 , xx + 177 ) + pm_math_Vector3_dot_ra ( xx + 285 , xx + 138 ) ) ;
solveSymmetricPosDef ( xx + 299 , xx + 180 , 3 , 1 , xx + 138 , xx + 177 ) ;
xx [ 177 ] = xx [ 77 ] + xx [ 125 ] * xx [ 138 ] + xx [ 51 ] * xx [ 139 ] +
xx [ 291 ] * xx [ 140 ] ; xx [ 178 ] = xx [ 81 ] + xx [ 174 ] * xx [ 138 ] +
xx [ 54 ] * xx [ 139 ] + xx [ 292 ] * xx [ 140 ] ; xx [ 179 ] = xx [ 100 ] +
xx [ 176 ] * xx [ 138 ] + xx [ 57 ] * xx [ 139 ] + xx [ 280 ] * xx [ 140 ] ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 177 , xx + 180 ) ; xx [ 176 ] =
xx [ 101 ] + xx [ 259 ] * xx [ 138 ] + xx [ 72 ] * xx [ 139 ] + xx [ 281 ] *
xx [ 140 ] ; xx [ 177 ] = xx [ 108 ] + xx [ 260 ] * xx [ 138 ] + xx [ 73 ] *
xx [ 139 ] + xx [ 282 ] * xx [ 140 ] ; xx [ 178 ] = xx [ 127 ] + xx [ 243 ] *
xx [ 138 ] + xx [ 244 ] * xx [ 139 ] + xx [ 293 ] * xx [ 140 ] ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 176 , xx + 183 ) ;
pm_math_Vector3_cross_ra ( xx + 121 , xx + 183 , xx + 176 ) ; xx [ 186 ] = xx
[ 29 ] ; xx [ 187 ] = xx [ 362 ] ; xx [ 188 ] = xx [ 363 ] ;
pm_math_Vector3_cross_ra ( xx + 658 , xx + 186 , xx + 189 ) ; xx [ 192 ] = xx
[ 746 ] ; xx [ 193 ] = xx [ 296 ] ; xx [ 194 ] = xx [ 753 ] ;
pm_math_Vector3_cross_ra ( xx + 186 , xx + 192 , xx + 195 ) ; xx [ 29 ] = xx
[ 195 ] + xx [ 764 ] * xx [ 37 ] - xx [ 351 ] * xx [ 26 ] ; xx [ 51 ] = xx [
189 ] - xx [ 29 ] ; xx [ 54 ] = xx [ 196 ] + xx [ 26 ] * xx [ 295 ] ; xx [ 26
] = xx [ 190 ] - xx [ 54 ] ; xx [ 57 ] = xx [ 37 ] * xx [ 295 ] - xx [ 197 ]
; xx [ 37 ] = xx [ 191 ] + xx [ 57 ] ; xx [ 189 ] = xx [ 51 ] ; xx [ 190 ] =
xx [ 26 ] ; xx [ 191 ] = xx [ 37 ] ; pm_math_Matrix3x3_xform_ra ( xx + 231 ,
xx + 189 , xx + 192 ) ; xx [ 195 ] = xx [ 658 ] + xx [ 36 ] ; xx [ 196 ] = xx
[ 659 ] + xx [ 752 ] ; xx [ 197 ] = xx [ 660 ] + xx [ 747 ] ;
pm_math_Vector3_cross_ra ( xx + 274 , xx + 186 , xx + 198 ) ;
pm_math_Vector3_cross_ra ( xx + 195 , xx + 198 , xx + 186 ) ;
pm_math_Vector3_cross_ra ( xx + 681 , xx + 92 , xx + 195 ) ;
pm_math_Vector3_cross_ra ( xx + 681 , xx + 195 , xx + 198 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 198 , xx + 195 ) ; xx [
198 ] = - xx [ 29 ] ; xx [ 199 ] = - xx [ 54 ] ; xx [ 200 ] = xx [ 57 ] ;
pm_math_Vector3_cross_ra ( xx + 274 , xx + 198 , xx + 201 ) ; xx [ 29 ] = xx
[ 186 ] + xx [ 195 ] + xx [ 201 ] ; xx [ 36 ] = xx [ 187 ] + xx [ 196 ] + xx
[ 202 ] ; xx [ 54 ] = xx [ 188 ] + xx [ 197 ] + xx [ 203 ] ; xx [ 186 ] = xx
[ 29 ] ; xx [ 187 ] = xx [ 36 ] ; xx [ 188 ] = xx [ 54 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 308 , xx + 186 , xx + 195 ) ; xx [ 57 ] =
xx [ 771 ] - xx [ 778 ] - xx [ 792 ] - xx [ 775 ] - xx [ 809 ] - xx [ 806 ] -
xx [ 826 ] - xx [ 812 ] - xx [ 842 ] - xx [ 829 ] + xx [ 180 ] + xx [ 176 ] +
xx [ 192 ] + xx [ 195 ] ; xx [ 72 ] = state [ 12 ] + xx [ 42 ] ; if ( xx [ 43
] < xx [ 72 ] ) xx [ 72 ] = xx [ 43 ] ; xx [ 73 ] = - ( xx [ 72 ] / xx [ 47 ]
) ; if ( xx [ 0 ] < xx [ 73 ] ) xx [ 73 ] = xx [ 0 ] ; xx [ 77 ] = xx [ 95 ]
* state [ 15 ] ; xx [ 81 ] = xx [ 73 ] * xx [ 73 ] * ( xx [ 66 ] - xx [ 11 ]
* xx [ 73 ] ) * ( ( - xx [ 72 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 77 ] ) - xx
[ 172 ] * xx [ 72 ] ) ; if ( xx [ 43 ] > xx [ 81 ] ) xx [ 81 ] = xx [ 43 ] ;
xx [ 72 ] = state [ 12 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 72 ] ) xx [ 72 ]
= xx [ 43 ] ; xx [ 73 ] = xx [ 72 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 73 ] )
xx [ 73 ] = xx [ 0 ] ; xx [ 100 ] = ( xx [ 172 ] * xx [ 72 ] + ( xx [ 72 ] ==
xx [ 43 ] ? xx [ 43 ] : xx [ 77 ] ) ) * xx [ 73 ] * xx [ 73 ] * ( xx [ 66 ] -
xx [ 11 ] * xx [ 73 ] ) ; if ( xx [ 43 ] > xx [ 100 ] ) xx [ 100 ] = xx [ 43
] ; xx [ 72 ] = xx [ 772 ] - xx [ 779 ] - xx [ 793 ] - xx [ 776 ] - xx [ 810
] - xx [ 807 ] - xx [ 827 ] - xx [ 813 ] - xx [ 843 ] - xx [ 830 ] + xx [ 181
] + xx [ 177 ] + xx [ 193 ] + xx [ 196 ] ; xx [ 73 ] = xx [ 773 ] - xx [ 780
] - xx [ 794 ] - xx [ 777 ] - xx [ 811 ] - xx [ 808 ] - xx [ 828 ] - xx [ 814
] - xx [ 844 ] - xx [ 831 ] + xx [ 182 ] + xx [ 178 ] + xx [ 194 ] + xx [ 197
] ; xx [ 176 ] = xx [ 57 ] ; xx [ 177 ] = xx [ 72 ] ; xx [ 178 ] = xx [ 73 ]
; pm_math_Matrix3x3_transposeXform_ra ( xx + 308 , xx + 189 , xx + 179 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 317 , xx + 186 , xx + 189 ) ; xx [ 77 ] =
xx [ 785 ] - xx [ 159 ] - xx [ 789 ] + xx [ 802 ] - xx [ 795 ] + xx [ 819 ] -
xx [ 823 ] + xx [ 732 ] - xx [ 839 ] + xx [ 183 ] + xx [ 179 ] + xx [ 189 ] ;
xx [ 101 ] = xx [ 169 ] + xx [ 786 ] - xx [ 790 ] + xx [ 803 ] - xx [ 796 ] +
xx [ 820 ] - xx [ 824 ] + xx [ 733 ] - xx [ 840 ] + xx [ 184 ] + xx [ 180 ] +
xx [ 190 ] ; xx [ 104 ] = xx [ 788 ] - xx [ 774 ] - xx [ 791 ] + xx [ 805 ] -
xx [ 797 ] + xx [ 822 ] - xx [ 825 ] + xx [ 835 ] - xx [ 841 ] + xx [ 185 ] +
xx [ 181 ] + xx [ 191 ] ; xx [ 158 ] = xx [ 77 ] ; xx [ 159 ] = xx [ 101 ] ;
xx [ 160 ] = xx [ 104 ] ; xx [ 105 ] = state [ 13 ] + xx [ 42 ] ; if ( xx [
43 ] < xx [ 105 ] ) xx [ 105 ] = xx [ 43 ] ; xx [ 108 ] = - ( xx [ 105 ] / xx
[ 47 ] ) ; if ( xx [ 0 ] < xx [ 108 ] ) xx [ 108 ] = xx [ 0 ] ; xx [ 125 ] =
xx [ 95 ] * state [ 16 ] ; xx [ 127 ] = xx [ 108 ] * xx [ 108 ] * ( xx [ 66 ]
- xx [ 11 ] * xx [ 108 ] ) * ( ( - xx [ 105 ] == xx [ 43 ] ? xx [ 43 ] : - xx
[ 125 ] ) - xx [ 172 ] * xx [ 105 ] ) ; if ( xx [ 43 ] > xx [ 127 ] ) xx [
127 ] = xx [ 43 ] ; xx [ 105 ] = state [ 13 ] - xx [ 42 ] ; if ( xx [ 43 ] >
xx [ 105 ] ) xx [ 105 ] = xx [ 43 ] ; xx [ 108 ] = xx [ 105 ] / xx [ 47 ] ;
if ( xx [ 0 ] < xx [ 108 ] ) xx [ 108 ] = xx [ 0 ] ; xx [ 131 ] = ( xx [ 172
] * xx [ 105 ] + ( xx [ 105 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 125 ] ) ) * xx
[ 108 ] * xx [ 108 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 108 ] ) ; if ( xx [ 43
] > xx [ 131 ] ) xx [ 131 ] = xx [ 43 ] ; xx [ 105 ] = state [ 14 ] + xx [ 42
] ; if ( xx [ 43 ] < xx [ 105 ] ) xx [ 105 ] = xx [ 43 ] ; xx [ 108 ] = - (
xx [ 105 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 108 ] ) xx [ 108 ] = xx [ 0 ]
; xx [ 125 ] = xx [ 95 ] * state [ 17 ] ; xx [ 144 ] = xx [ 108 ] * xx [ 108
] * ( xx [ 66 ] - xx [ 11 ] * xx [ 108 ] ) * ( ( - xx [ 105 ] == xx [ 43 ] ?
xx [ 43 ] : - xx [ 125 ] ) - xx [ 172 ] * xx [ 105 ] ) ; if ( xx [ 43 ] > xx
[ 144 ] ) xx [ 144 ] = xx [ 43 ] ; xx [ 105 ] = state [ 14 ] - xx [ 42 ] ; if
( xx [ 43 ] > xx [ 105 ] ) xx [ 105 ] = xx [ 43 ] ; xx [ 108 ] = xx [ 105 ] /
xx [ 47 ] ; if ( xx [ 0 ] < xx [ 108 ] ) xx [ 108 ] = xx [ 0 ] ; xx [ 145 ] =
( xx [ 172 ] * xx [ 105 ] + ( xx [ 105 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 125
] ) ) * xx [ 108 ] * xx [ 108 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 108 ] ) ; if
( xx [ 43 ] > xx [ 145 ] ) xx [ 145 ] = xx [ 43 ] ; xx [ 168 ] = input [ 6 ]
- xx [ 40 ] * state [ 15 ] + xx [ 81 ] - xx [ 100 ] - (
pm_math_Vector3_dot_ra ( xx + 256 , xx + 176 ) + pm_math_Vector3_dot_ra ( xx
+ 288 , xx + 158 ) ) ; xx [ 169 ] = input [ 7 ] - xx [ 40 ] * state [ 16 ] +
xx [ 127 ] - xx [ 131 ] - ( pm_math_Vector3_dot_ra ( xx + 364 , xx + 176 ) +
pm_math_Vector3_dot_ra ( xx + 370 , xx + 158 ) ) ; xx [ 170 ] = input [ 8 ] -
xx [ 40 ] * state [ 17 ] + xx [ 144 ] - xx [ 145 ] - ( xx [ 72 ] * xx [ 49 ]
+ xx [ 73 ] * xx [ 48 ] + pm_math_Vector3_dot_ra ( xx + 385 , xx + 158 ) ) ;
solveSymmetricPosDef ( xx + 402 , xx + 168 , 3 , 1 , xx + 158 , xx + 176 ) ;
xx [ 168 ] = xx [ 57 ] + xx [ 96 ] * xx [ 158 ] + xx [ 348 ] * xx [ 159 ] +
xx [ 391 ] * xx [ 160 ] ; xx [ 169 ] = xx [ 72 ] + xx [ 227 ] * xx [ 158 ] +
xx [ 376 ] * xx [ 159 ] + xx [ 392 ] * xx [ 160 ] ; xx [ 170 ] = xx [ 73 ] +
xx [ 245 ] * xx [ 158 ] + xx [ 367 ] * xx [ 159 ] + xx [ 388 ] * xx [ 160 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 168 , xx + 176 ) ; xx [ 168 ] =
xx [ 77 ] + xx [ 298 ] * xx [ 158 ] + xx [ 368 ] * xx [ 159 ] + xx [ 389 ] *
xx [ 160 ] ; xx [ 169 ] = xx [ 101 ] + xx [ 347 ] * xx [ 158 ] + xx [ 369 ] *
xx [ 159 ] + xx [ 390 ] * xx [ 160 ] ; xx [ 170 ] = xx [ 104 ] + xx [ 294 ] *
xx [ 158 ] + xx [ 377 ] * xx [ 159 ] + xx [ 396 ] * xx [ 160 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 168 , xx + 179 ) ;
pm_math_Vector3_cross_ra ( xx + 92 , xx + 179 , xx + 168 ) ; xx [ 182 ] = xx
[ 20 ] ; xx [ 183 ] = xx [ 453 ] ; xx [ 184 ] = xx [ 454 ] ;
pm_math_Vector3_cross_ra ( xx + 662 , xx + 182 , xx + 185 ) ; xx [ 188 ] = xx
[ 676 ] ; xx [ 189 ] = xx [ 447 ] ; xx [ 190 ] = xx [ 679 ] ;
pm_math_Vector3_cross_ra ( xx + 182 , xx + 188 , xx + 191 ) ; xx [ 20 ] = xx
[ 191 ] + xx [ 680 ] * xx [ 23 ] - xx [ 451 ] * xx [ 19 ] ; xx [ 57 ] = xx [
185 ] - xx [ 20 ] ; xx [ 72 ] = xx [ 192 ] + xx [ 19 ] * xx [ 401 ] ; xx [ 19
] = xx [ 186 ] - xx [ 72 ] ; xx [ 73 ] = xx [ 23 ] * xx [ 401 ] - xx [ 193 ]
; xx [ 23 ] = xx [ 187 ] + xx [ 73 ] ; xx [ 185 ] = xx [ 57 ] ; xx [ 186 ] =
xx [ 19 ] ; xx [ 187 ] = xx [ 23 ] ; pm_math_Matrix3x3_xform_ra ( xx + 353 ,
xx + 185 , xx + 188 ) ; xx [ 191 ] = xx [ 662 ] + xx [ 22 ] ; xx [ 192 ] = xx
[ 663 ] + xx [ 678 ] ; xx [ 193 ] = xx [ 664 ] + xx [ 677 ] ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 182 , xx + 194 ) ;
pm_math_Vector3_cross_ra ( xx + 191 , xx + 194 , xx + 182 ) ;
pm_math_Vector3_cross_ra ( xx + 547 , xx + 398 , xx + 191 ) ;
pm_math_Vector3_cross_ra ( xx + 547 , xx + 191 , xx + 194 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 194 , xx + 191 ) ; xx [
194 ] = - xx [ 20 ] ; xx [ 195 ] = - xx [ 72 ] ; xx [ 196 ] = xx [ 73 ] ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 194 , xx + 197 ) ; xx [ 20 ] = xx [
182 ] + xx [ 191 ] + xx [ 197 ] ; xx [ 22 ] = xx [ 183 ] + xx [ 192 ] + xx [
198 ] ; xx [ 67 ] = xx [ 184 ] + xx [ 193 ] + xx [ 199 ] ; xx [ 182 ] = xx [
20 ] ; xx [ 183 ] = xx [ 22 ] ; xx [ 184 ] = xx [ 67 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 411 , xx + 182 , xx + 191 ) ; xx [ 68 ] =
xx [ 687 ] - xx [ 696 ] - xx [ 707 ] - xx [ 704 ] - xx [ 725 ] - xx [ 713 ] -
xx [ 742 ] - xx [ 728 ] - xx [ 758 ] - xx [ 755 ] + xx [ 176 ] + xx [ 168 ] +
xx [ 188 ] + xx [ 191 ] ; xx [ 69 ] = state [ 6 ] + xx [ 42 ] ; if ( xx [ 43
] < xx [ 69 ] ) xx [ 69 ] = xx [ 43 ] ; xx [ 72 ] = - ( xx [ 69 ] / xx [ 47 ]
) ; if ( xx [ 0 ] < xx [ 72 ] ) xx [ 72 ] = xx [ 0 ] ; xx [ 73 ] = xx [ 95 ]
* state [ 9 ] ; xx [ 77 ] = xx [ 72 ] * xx [ 72 ] * ( xx [ 66 ] - xx [ 11 ] *
xx [ 72 ] ) * ( ( - xx [ 69 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 73 ] ) - xx [
172 ] * xx [ 69 ] ) ; if ( xx [ 43 ] > xx [ 77 ] ) xx [ 77 ] = xx [ 43 ] ; xx
[ 69 ] = state [ 6 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 69 ] ) xx [ 69 ] =
xx [ 43 ] ; xx [ 72 ] = xx [ 69 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 72 ] )
xx [ 72 ] = xx [ 0 ] ; xx [ 81 ] = ( xx [ 172 ] * xx [ 69 ] + ( xx [ 69 ] ==
xx [ 43 ] ? xx [ 43 ] : xx [ 73 ] ) ) * xx [ 72 ] * xx [ 72 ] * ( xx [ 66 ] -
xx [ 11 ] * xx [ 72 ] ) ; if ( xx [ 43 ] > xx [ 81 ] ) xx [ 81 ] = xx [ 43 ]
; xx [ 69 ] = xx [ 688 ] - xx [ 697 ] - xx [ 708 ] - xx [ 705 ] - xx [ 726 ]
- xx [ 714 ] - xx [ 743 ] - xx [ 729 ] - xx [ 759 ] - xx [ 756 ] + xx [ 177 ]
+ xx [ 169 ] + xx [ 189 ] + xx [ 192 ] ; xx [ 72 ] = xx [ 689 ] - xx [ 698 ]
- xx [ 709 ] - xx [ 706 ] - xx [ 727 ] - xx [ 715 ] - xx [ 744 ] - xx [ 730 ]
- xx [ 760 ] - xx [ 757 ] + xx [ 178 ] + xx [ 170 ] + xx [ 190 ] + xx [ 193 ]
; xx [ 168 ] = xx [ 68 ] ; xx [ 169 ] = xx [ 69 ] ; xx [ 170 ] = xx [ 72 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 411 , xx + 185 , xx + 176 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 420 , xx + 182 , xx + 185 ) ; xx [ 73 ] =
xx [ 691 ] + xx [ 692 ] - xx [ 710 ] + xx [ 719 ] - xx [ 722 ] + xx [ 735 ] -
xx [ 739 ] + xx [ 638 ] - xx [ 761 ] + xx [ 179 ] + xx [ 176 ] + xx [ 185 ] ;
xx [ 96 ] = xx [ 702 ] - xx [ 142 ] - xx [ 711 ] + xx [ 720 ] - xx [ 723 ] +
xx [ 736 ] - xx [ 740 ] + xx [ 639 ] - xx [ 762 ] + xx [ 180 ] + xx [ 177 ] +
xx [ 186 ] ; xx [ 100 ] = xx [ 703 ] - xx [ 56 ] - xx [ 712 ] + xx [ 721 ] -
xx [ 724 ] + xx [ 738 ] - xx [ 741 ] + xx [ 751 ] - xx [ 763 ] + xx [ 181 ] +
xx [ 178 ] + xx [ 187 ] ; xx [ 176 ] = xx [ 73 ] ; xx [ 177 ] = xx [ 96 ] ;
xx [ 178 ] = xx [ 100 ] ; xx [ 101 ] = state [ 7 ] + xx [ 42 ] ; if ( xx [ 43
] < xx [ 101 ] ) xx [ 101 ] = xx [ 43 ] ; xx [ 104 ] = - ( xx [ 101 ] / xx [
47 ] ) ; if ( xx [ 0 ] < xx [ 104 ] ) xx [ 104 ] = xx [ 0 ] ; xx [ 105 ] = xx
[ 95 ] * state [ 10 ] ; xx [ 108 ] = xx [ 104 ] * xx [ 104 ] * ( xx [ 66 ] -
xx [ 11 ] * xx [ 104 ] ) * ( ( - xx [ 101 ] == xx [ 43 ] ? xx [ 43 ] : - xx [
105 ] ) - xx [ 172 ] * xx [ 101 ] ) ; if ( xx [ 43 ] > xx [ 108 ] ) xx [ 108
] = xx [ 43 ] ; xx [ 101 ] = state [ 7 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [
101 ] ) xx [ 101 ] = xx [ 43 ] ; xx [ 104 ] = xx [ 101 ] / xx [ 47 ] ; if (
xx [ 0 ] < xx [ 104 ] ) xx [ 104 ] = xx [ 0 ] ; xx [ 125 ] = ( xx [ 172 ] *
xx [ 101 ] + ( xx [ 101 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 105 ] ) ) * xx [
104 ] * xx [ 104 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 104 ] ) ; if ( xx [ 43 ]
> xx [ 125 ] ) xx [ 125 ] = xx [ 43 ] ; xx [ 101 ] = state [ 8 ] + xx [ 42 ]
; if ( xx [ 43 ] < xx [ 101 ] ) xx [ 101 ] = xx [ 43 ] ; xx [ 104 ] = - ( xx
[ 101 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 104 ] ) xx [ 104 ] = xx [ 0 ] ;
xx [ 105 ] = xx [ 95 ] * state [ 11 ] ; xx [ 127 ] = xx [ 104 ] * xx [ 104 ]
* ( xx [ 66 ] - xx [ 11 ] * xx [ 104 ] ) * ( ( - xx [ 101 ] == xx [ 43 ] ? xx
[ 43 ] : - xx [ 105 ] ) - xx [ 172 ] * xx [ 101 ] ) ; if ( xx [ 43 ] > xx [
127 ] ) xx [ 127 ] = xx [ 43 ] ; xx [ 101 ] = state [ 8 ] - xx [ 42 ] ; if (
xx [ 43 ] > xx [ 101 ] ) xx [ 101 ] = xx [ 43 ] ; xx [ 104 ] = xx [ 101 ] /
xx [ 47 ] ; if ( xx [ 0 ] < xx [ 104 ] ) xx [ 104 ] = xx [ 0 ] ; xx [ 131 ] =
( xx [ 172 ] * xx [ 101 ] + ( xx [ 101 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 105
] ) ) * xx [ 104 ] * xx [ 104 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 104 ] ) ; if
( xx [ 43 ] > xx [ 131 ] ) xx [ 131 ] = xx [ 43 ] ; xx [ 179 ] = input [ 9 ]
- xx [ 40 ] * state [ 9 ] + xx [ 77 ] - xx [ 81 ] - ( pm_math_Vector3_dot_ra
( xx + 344 , xx + 168 ) + pm_math_Vector3_dot_ra ( xx + 378 , xx + 176 ) ) ;
xx [ 180 ] = input [ 10 ] - xx [ 40 ] * state [ 10 ] + xx [ 108 ] - xx [ 125
] - ( pm_math_Vector3_dot_ra ( xx + 465 , xx + 168 ) + pm_math_Vector3_dot_ra
( xx + 471 , xx + 176 ) ) ; xx [ 181 ] = input [ 11 ] - xx [ 40 ] * state [
11 ] + xx [ 127 ] - xx [ 131 ] - ( xx [ 69 ] * xx [ 25 ] + xx [ 72 ] * xx [
24 ] + pm_math_Vector3_dot_ra ( xx + 485 , xx + 176 ) ) ;
solveSymmetricPosDef ( xx + 502 , xx + 179 , 3 , 1 , xx + 168 , xx + 176 ) ;
xx [ 176 ] = xx [ 68 ] + xx [ 262 ] * xx [ 168 ] + xx [ 448 ] * xx [ 169 ] +
xx [ 491 ] * xx [ 170 ] ; xx [ 177 ] = xx [ 69 ] + xx [ 263 ] * xx [ 168 ] +
xx [ 455 ] * xx [ 169 ] + xx [ 492 ] * xx [ 170 ] ; xx [ 178 ] = xx [ 72 ] +
xx [ 373 ] * xx [ 168 ] + xx [ 468 ] * xx [ 169 ] + xx [ 488 ] * xx [ 170 ] ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 176 , xx + 179 ) ; xx [ 176 ] =
xx [ 73 ] + xx [ 375 ] * xx [ 168 ] + xx [ 469 ] * xx [ 169 ] + xx [ 489 ] *
xx [ 170 ] ; xx [ 177 ] = xx [ 96 ] + xx [ 381 ] * xx [ 168 ] + xx [ 470 ] *
xx [ 169 ] + xx [ 490 ] * xx [ 170 ] ; xx [ 178 ] = xx [ 100 ] + xx [ 397 ] *
xx [ 168 ] + xx [ 477 ] * xx [ 169 ] + xx [ 496 ] * xx [ 170 ] ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 176 , xx + 182 ) ;
pm_math_Vector3_cross_ra ( xx + 398 , xx + 182 , xx + 176 ) ; xx [ 185 ] = xx
[ 45 ] ; xx [ 186 ] = xx [ 458 ] ; xx [ 187 ] = xx [ 474 ] ;
pm_math_Vector3_cross_ra ( xx + 547 , xx + 185 , xx + 188 ) ; xx [ 45 ] = xx
[ 188 ] + xx [ 7 ] * xx [ 475 ] - xx [ 463 ] * xx [ 2 ] ; xx [ 68 ] = xx [ 2
] * xx [ 128 ] + xx [ 189 ] ; xx [ 2 ] = xx [ 190 ] - xx [ 7 ] * xx [ 128 ] ;
xx [ 185 ] = - xx [ 45 ] ; xx [ 186 ] = - xx [ 68 ] ; xx [ 187 ] = - xx [ 2 ]
; pm_math_Matrix3x3_xform_ra ( xx + 565 , xx + 185 , xx + 188 ) ; xx [ 191 ]
= xx [ 55 ] * xx [ 41 ] + xx [ 464 ] * xx [ 44 ] ; xx [ 192 ] = - ( xx [ 44 ]
* xx [ 3 ] ) ; xx [ 193 ] = - ( xx [ 41 ] * xx [ 3 ] ) ;
pm_math_Vector3_cross_ra ( xx + 547 , xx + 191 , xx + 194 ) ; xx [ 3 ] = xx [
194 ] - ( xx [ 2 ] * xx [ 41 ] + xx [ 44 ] * xx [ 68 ] ) ; xx [ 7 ] = xx [
195 ] + xx [ 45 ] * xx [ 44 ] ; xx [ 44 ] = xx [ 196 ] + xx [ 45 ] * xx [ 41
] ; xx [ 191 ] = xx [ 3 ] ; xx [ 192 ] = xx [ 7 ] ; xx [ 193 ] = xx [ 44 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 511 , xx + 191 , xx + 194 ) ; xx [ 41 ] =
xx [ 560 ] - xx [ 562 ] * xx [ 693 ] + xx [ 586 ] * xx [ 603 ] - xx [ 621 ] -
xx [ 629 ] - xx [ 649 ] - xx [ 653 ] - xx [ 21 ] * xx [ 745 ] - xx [ 671 ] +
xx [ 180 ] + xx [ 177 ] + xx [ 189 ] + xx [ 195 ] ; xx [ 55 ] = xx [ 561 ] +
xx [ 18 ] * xx [ 693 ] - xx [ 594 ] * xx [ 603 ] - xx [ 622 ] - xx [ 630 ] -
xx [ 650 ] - xx [ 654 ] + xx [ 634 ] * xx [ 745 ] - xx [ 672 ] + xx [ 181 ] +
xx [ 178 ] + xx [ 190 ] + xx [ 196 ] ; xx [ 195 ] = xx [ 559 ] - (
0.02933876077043094 * xx [ 33 ] - 2.074016415803327e-3 * xx [ 65 ] ) - ( xx [
18 ] * xx [ 584 ] - xx [ 562 ] * xx [ 585 ] ) - ( xx [ 586 ] * xx [ 604 ] -
xx [ 594 ] * xx [ 605 ] ) - xx [ 620 ] - xx [ 628 ] - xx [ 648 ] - xx [ 652 ]
- ( xx [ 634 ] * xx [ 647 ] - xx [ 21 ] * xx [ 661 ] ) - xx [ 670 ] + xx [
179 ] + xx [ 176 ] + xx [ 188 ] + xx [ 194 ] ; xx [ 196 ] = xx [ 41 ] ; xx [
197 ] = xx [ 55 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 511 , xx + 185
, xx + 176 ) ; pm_math_Matrix3x3_xform_ra ( xx + 520 , xx + 191 , xx + 179 )
; xx [ 18 ] = xx [ 693 ] - xx [ 603 ] + xx [ 613 ] - xx [ 631 ] + xx [ 641 ]
- xx [ 655 ] + xx [ 745 ] - xx [ 673 ] + xx [ 182 ] + xx [ 176 ] + xx [ 179 ]
; xx [ 185 ] = xx [ 18 ] ; xx [ 186 ] = xx [ 65 ] + xx [ 585 ] - xx [ 604 ] +
xx [ 614 ] - xx [ 632 ] + xx [ 642 ] - xx [ 656 ] + xx [ 661 ] - xx [ 674 ] +
xx [ 183 ] + xx [ 177 ] + xx [ 180 ] ; xx [ 187 ] = xx [ 584 ] - xx [ 33 ] -
xx [ 605 ] + xx [ 616 ] - xx [ 633 ] + xx [ 644 ] - xx [ 657 ] + xx [ 647 ] -
xx [ 675 ] + xx [ 184 ] + xx [ 178 ] + xx [ 181 ] ; xx [ 21 ] = state [ 1 ] +
xx [ 42 ] ; if ( xx [ 43 ] < xx [ 21 ] ) xx [ 21 ] = xx [ 43 ] ; xx [ 69 ] =
- ( xx [ 21 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 69 ] ) xx [ 69 ] = xx [ 0
] ; xx [ 72 ] = xx [ 95 ] * state [ 4 ] ; xx [ 73 ] = xx [ 69 ] * xx [ 69 ] *
( xx [ 66 ] - xx [ 11 ] * xx [ 69 ] ) * ( ( - xx [ 21 ] == xx [ 43 ] ? xx [
43 ] : - xx [ 72 ] ) - xx [ 172 ] * xx [ 21 ] ) ; if ( xx [ 43 ] > xx [ 73 ]
) xx [ 73 ] = xx [ 43 ] ; xx [ 21 ] = state [ 1 ] - xx [ 42 ] ; if ( xx [ 43
] > xx [ 21 ] ) xx [ 21 ] = xx [ 43 ] ; xx [ 69 ] = xx [ 21 ] / xx [ 47 ] ;
if ( xx [ 0 ] < xx [ 69 ] ) xx [ 69 ] = xx [ 0 ] ; xx [ 77 ] = ( xx [ 172 ] *
xx [ 21 ] + ( xx [ 21 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 72 ] ) ) * xx [ 69 ]
* xx [ 69 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 69 ] ) ; if ( xx [ 43 ] > xx [
77 ] ) xx [ 77 ] = xx [ 43 ] ; xx [ 21 ] = state [ 2 ] + xx [ 42 ] ; if ( xx
[ 43 ] < xx [ 21 ] ) xx [ 21 ] = xx [ 43 ] ; xx [ 69 ] = - ( xx [ 21 ] / xx [
47 ] ) ; if ( xx [ 0 ] < xx [ 69 ] ) xx [ 69 ] = xx [ 0 ] ; xx [ 72 ] = xx [
95 ] * state [ 5 ] ; xx [ 81 ] = xx [ 69 ] * xx [ 69 ] * ( xx [ 66 ] - xx [
11 ] * xx [ 69 ] ) * ( ( - xx [ 21 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 72 ] )
- xx [ 172 ] * xx [ 21 ] ) ; if ( xx [ 43 ] > xx [ 81 ] ) xx [ 81 ] = xx [ 43
] ; xx [ 21 ] = state [ 2 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 21 ] ) xx [
21 ] = xx [ 43 ] ; xx [ 42 ] = xx [ 21 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [
42 ] ) xx [ 42 ] = xx [ 0 ] ; xx [ 47 ] = ( xx [ 172 ] * xx [ 21 ] + ( xx [
21 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 72 ] ) ) * xx [ 42 ] * xx [ 42 ] * ( xx
[ 66 ] - xx [ 11 ] * xx [ 42 ] ) ; if ( xx [ 43 ] > xx [ 47 ] ) xx [ 47 ] =
xx [ 43 ] ; xx [ 176 ] = input [ 12 ] - xx [ 40 ] * state [ 3 ] + xx [ 456 ]
- xx [ 457 ] - ( pm_math_Vector3_dot_ra ( xx + 15 , xx + 195 ) +
pm_math_Vector3_dot_ra ( xx + 459 , xx + 185 ) ) ; xx [ 177 ] = input [ 13 ]
- xx [ 40 ] * state [ 4 ] + xx [ 73 ] - xx [ 77 ] - ( pm_math_Vector3_dot_ra
( xx + 479 , xx + 195 ) + pm_math_Vector3_dot_ra ( xx + 499 , xx + 185 ) ) ;
xx [ 178 ] = input [ 14 ] - xx [ 40 ] * state [ 5 ] + xx [ 81 ] - xx [ 47 ] -
( xx [ 41 ] * xx [ 9 ] + xx [ 55 ] * xx [ 13 ] + xx [ 18 ] * xx [ 557 ] ) ;
solveSymmetricPosDef ( xx + 574 , xx + 176 , 3 , 1 , xx + 15 , xx + 40 ) ; xx
[ 176 ] = xx [ 157 ] ; xx [ 177 ] = xx [ 550 ] ; xx [ 178 ] = xx [ 558 ] ; xx
[ 179 ] = xx [ 161 ] ; xx [ 180 ] = xx [ 551 ] ; xx [ 181 ] = xx [ 28 ] ; xx
[ 182 ] = xx [ 164 ] ; xx [ 183 ] = xx [ 493 ] ; xx [ 184 ] = xx [ 30 ] ; xx
[ 185 ] = xx [ 394 ] ; xx [ 186 ] = xx [ 494 ] ; xx [ 187 ] = xx [ 34 ] ; xx
[ 188 ] = xx [ 395 ] ; xx [ 189 ] = xx [ 495 ] ; xx [ 190 ] = xx [ 38 ] ; xx
[ 191 ] = xx [ 462 ] ; xx [ 192 ] = xx [ 552 ] ; xx [ 193 ] = xx [ 39 ] ;
solveSymmetricPosDef ( xx + 574 , xx + 176 , 3 , 6 , xx + 298 , xx + 38 ) ;
xx [ 38 ] = xx [ 307 ] ; xx [ 39 ] = xx [ 310 ] ; xx [ 40 ] = xx [ 313 ] ; xx
[ 18 ] = 9.806649999999999 ; xx [ 21 ] = xx [ 18 ] * xx [ 14 ] ; xx [ 28 ] =
xx [ 18 ] * xx [ 6 ] ; xx [ 30 ] = xx [ 11 ] * ( xx [ 5 ] * xx [ 21 ] + xx [
28 ] * xx [ 10 ] ) ; xx [ 34 ] = ( xx [ 5 ] * xx [ 28 ] - xx [ 21 ] * xx [ 10
] ) * xx [ 11 ] ; xx [ 41 ] = ( xx [ 21 ] * xx [ 14 ] + xx [ 28 ] * xx [ 6 ]
) * xx [ 11 ] ; xx [ 176 ] = xx [ 30 ] ; xx [ 177 ] = xx [ 34 ] ; xx [ 178 ]
= xx [ 18 ] - xx [ 41 ] ; xx [ 21 ] = xx [ 15 ] - pm_math_Vector3_dot_ra ( xx
+ 38 , xx + 176 ) ; xx [ 38 ] = xx [ 308 ] ; xx [ 39 ] = xx [ 311 ] ; xx [ 40
] = xx [ 314 ] ; xx [ 28 ] = xx [ 16 ] - pm_math_Vector3_dot_ra ( xx + 38 ,
xx + 176 ) ; xx [ 38 ] = xx [ 309 ] ; xx [ 39 ] = xx [ 312 ] ; xx [ 40 ] = xx
[ 315 ] ; xx [ 15 ] = xx [ 17 ] - pm_math_Vector3_dot_ra ( xx + 38 , xx + 176
) ; xx [ 38 ] = xx [ 529 ] ; xx [ 39 ] = xx [ 532 ] ; xx [ 40 ] = xx [ 535 ]
; xx [ 176 ] = xx [ 12 ] * xx [ 21 ] + xx [ 479 ] * xx [ 28 ] - xx [ 45 ] ;
xx [ 177 ] = xx [ 4 ] * xx [ 21 ] + xx [ 480 ] * xx [ 28 ] + xx [ 9 ] * xx [
15 ] - xx [ 68 ] ; xx [ 178 ] = xx [ 8 ] * xx [ 21 ] + xx [ 28 ] * xx [ 481 ]
+ xx [ 13 ] * xx [ 15 ] - xx [ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 61 , xx + 176 , xx + 179 ) ; xx [ 182 ] = xx [ 538 ] ; xx [ 183 ] = xx [
541 ] ; xx [ 184 ] = xx [ 544 ] ; xx [ 2 ] = xx [ 30 ] + xx [ 21 ] * xx [ 46
] + xx [ 28 ] * xx [ 478 ] + xx [ 557 ] * xx [ 15 ] + xx [ 3 ] ;
pm_math_Vector3_cross_ra ( xx + 176 , xx + 398 , xx + 45 ) ; xx [ 3 ] = xx [
34 ] - xx [ 118 ] * xx [ 21 ] - xx [ 497 ] * xx [ 28 ] + xx [ 7 ] ; xx [ 4 ]
= xx [ 44 ] - ( xx [ 41 ] + xx [ 124 ] * xx [ 21 ] + xx [ 498 ] * xx [ 28 ] )
+ xx [ 18 ] ; xx [ 7 ] = xx [ 2 ] + xx [ 45 ] ; xx [ 8 ] = xx [ 3 ] + xx [ 46
] ; xx [ 9 ] = xx [ 4 ] + xx [ 47 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 61 , xx + 7 , xx + 16 ) ; xx [ 7 ] = xx [ 168 ] - ( pm_math_Vector3_dot_ra
( xx + 38 , xx + 179 ) + pm_math_Vector3_dot_ra ( xx + 182 , xx + 16 ) ) ; xx
[ 38 ] = xx [ 530 ] ; xx [ 39 ] = xx [ 533 ] ; xx [ 40 ] = xx [ 536 ] ; xx [
41 ] = xx [ 539 ] ; xx [ 42 ] = xx [ 542 ] ; xx [ 43 ] = xx [ 545 ] ; xx [ 8
] = xx [ 169 ] - ( pm_math_Vector3_dot_ra ( xx + 38 , xx + 179 ) +
pm_math_Vector3_dot_ra ( xx + 41 , xx + 16 ) ) ; xx [ 38 ] = xx [ 531 ] ; xx
[ 39 ] = xx [ 534 ] ; xx [ 40 ] = xx [ 537 ] ; xx [ 41 ] = xx [ 540 ] ; xx [
42 ] = xx [ 543 ] ; xx [ 43 ] = xx [ 546 ] ; xx [ 9 ] = xx [ 170 ] - (
pm_math_Vector3_dot_ra ( xx + 38 , xx + 179 ) + pm_math_Vector3_dot_ra ( xx +
41 , xx + 16 ) ) ; xx [ 38 ] = xx [ 429 ] ; xx [ 39 ] = xx [ 432 ] ; xx [ 40
] = xx [ 435 ] ; xx [ 41 ] = xx [ 179 ] + xx [ 261 ] * xx [ 7 ] + xx [ 452 ]
* xx [ 8 ] + xx [ 57 ] ; xx [ 42 ] = xx [ 180 ] + xx [ 32 ] * xx [ 7 ] + xx [
450 ] * xx [ 8 ] + xx [ 25 ] * xx [ 9 ] + xx [ 19 ] ; xx [ 43 ] = xx [ 181 ]
+ xx [ 35 ] * xx [ 7 ] + xx [ 8 ] * xx [ 449 ] + xx [ 24 ] * xx [ 9 ] + xx [
23 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 41 , xx + 23 ) ;
xx [ 44 ] = xx [ 438 ] ; xx [ 45 ] = xx [ 441 ] ; xx [ 46 ] = xx [ 444 ] ; xx
[ 12 ] = xx [ 16 ] + xx [ 378 ] * xx [ 7 ] + xx [ 471 ] * xx [ 8 ] + xx [ 482
] * xx [ 9 ] + xx [ 20 ] ; pm_math_Vector3_cross_ra ( xx + 41 , xx + 92 , xx
+ 168 ) ; xx [ 13 ] = xx [ 17 ] + xx [ 379 ] * xx [ 7 ] + xx [ 472 ] * xx [ 8
] - xx [ 483 ] * xx [ 9 ] + xx [ 22 ] ; xx [ 16 ] = xx [ 18 ] + xx [ 380 ] *
xx [ 7 ] + xx [ 473 ] * xx [ 8 ] + xx [ 484 ] * xx [ 9 ] + xx [ 67 ] ; xx [
17 ] = xx [ 12 ] + xx [ 168 ] ; xx [ 18 ] = xx [ 13 ] + xx [ 169 ] ; xx [ 19
] = xx [ 16 ] + xx [ 170 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 ,
xx + 17 , xx + 41 ) ; xx [ 17 ] = xx [ 158 ] - ( pm_math_Vector3_dot_ra ( xx
+ 38 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx + 44 , xx + 41 ) ) ; xx [ 18 ]
= xx [ 430 ] ; xx [ 19 ] = xx [ 433 ] ; xx [ 20 ] = xx [ 436 ] ; xx [ 38 ] =
xx [ 439 ] ; xx [ 39 ] = xx [ 442 ] ; xx [ 40 ] = xx [ 445 ] ; xx [ 22 ] = xx
[ 159 ] - ( pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) +
pm_math_Vector3_dot_ra ( xx + 38 , xx + 41 ) ) ; xx [ 18 ] = xx [ 431 ] ; xx
[ 19 ] = xx [ 434 ] ; xx [ 20 ] = xx [ 437 ] ; xx [ 38 ] = xx [ 440 ] ; xx [
39 ] = xx [ 443 ] ; xx [ 40 ] = xx [ 446 ] ; xx [ 30 ] = xx [ 160 ] - (
pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
38 , xx + 41 ) ) ; xx [ 18 ] = xx [ 326 ] ; xx [ 19 ] = xx [ 329 ] ; xx [ 20
] = xx [ 332 ] ; xx [ 38 ] = xx [ 23 ] + xx [ 225 ] * xx [ 17 ] + xx [ 352 ]
* xx [ 22 ] + xx [ 51 ] ; xx [ 39 ] = xx [ 24 ] + xx [ 226 ] * xx [ 17 ] + xx
[ 350 ] * xx [ 22 ] + xx [ 49 ] * xx [ 30 ] + xx [ 26 ] ; xx [ 40 ] = xx [ 25
] + xx [ 50 ] * xx [ 17 ] - xx [ 22 ] * xx [ 349 ] + xx [ 48 ] * xx [ 30 ] +
xx [ 37 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 38 , xx + 23
) ; xx [ 44 ] = xx [ 335 ] ; xx [ 45 ] = xx [ 338 ] ; xx [ 46 ] = xx [ 341 ]
; xx [ 26 ] = xx [ 41 ] + xx [ 288 ] * xx [ 17 ] + xx [ 370 ] * xx [ 22 ] +
xx [ 382 ] * xx [ 30 ] + xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 38 , xx
+ 121 , xx + 47 ) ; xx [ 29 ] = xx [ 42 ] + xx [ 289 ] * xx [ 17 ] + xx [ 371
] * xx [ 22 ] + xx [ 383 ] * xx [ 30 ] + xx [ 36 ] ; xx [ 32 ] = xx [ 43 ] +
xx [ 290 ] * xx [ 17 ] + xx [ 372 ] * xx [ 22 ] - xx [ 384 ] * xx [ 30 ] + xx
[ 54 ] ; xx [ 34 ] = xx [ 26 ] + xx [ 47 ] ; xx [ 35 ] = xx [ 29 ] + xx [ 48
] ; xx [ 36 ] = xx [ 32 ] + xx [ 49 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 84 , xx + 34 , xx + 37 ) ; xx [ 34 ] = xx [ 138 ] - (
pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
44 , xx + 37 ) ) ; xx [ 18 ] = xx [ 327 ] ; xx [ 19 ] = xx [ 330 ] ; xx [ 20
] = xx [ 333 ] ; xx [ 40 ] = xx [ 336 ] ; xx [ 41 ] = xx [ 339 ] ; xx [ 42 ]
= xx [ 342 ] ; xx [ 35 ] = xx [ 139 ] - ( pm_math_Vector3_dot_ra ( xx + 18 ,
xx + 23 ) + pm_math_Vector3_dot_ra ( xx + 40 , xx + 37 ) ) ; xx [ 18 ] = xx [
328 ] ; xx [ 19 ] = xx [ 331 ] ; xx [ 20 ] = xx [ 334 ] ; xx [ 40 ] = xx [
337 ] ; xx [ 41 ] = xx [ 340 ] ; xx [ 42 ] = xx [ 343 ] ; xx [ 36 ] = xx [
140 ] - ( pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) +
pm_math_Vector3_dot_ra ( xx + 40 , xx + 37 ) ) ; xx [ 18 ] = xx [ 204 ] ; xx
[ 19 ] = xx [ 207 ] ; xx [ 20 ] = xx [ 210 ] ; xx [ 40 ] = xx [ 23 ] + xx [
175 ] * xx [ 34 ] + xx [ 268 ] * xx [ 35 ] + xx [ 70 ] * xx [ 36 ] + xx [ 78
] ; xx [ 41 ] = xx [ 24 ] + xx [ 173 ] * xx [ 34 ] + xx [ 269 ] * xx [ 35 ] +
xx [ 60 ] * xx [ 36 ] + xx [ 82 ] ; xx [ 42 ] = xx [ 25 ] + xx [ 59 ] * xx [
34 ] + xx [ 270 ] * xx [ 35 ] + xx [ 58 ] * xx [ 36 ] + xx [ 75 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 40 , xx + 23 ) ; xx [ 43
] = xx [ 213 ] ; xx [ 44 ] = xx [ 216 ] ; xx [ 45 ] = xx [ 219 ] ; xx [ 46 ]
= xx [ 37 ] + xx [ 240 ] * xx [ 34 ] + xx [ 271 ] * xx [ 35 ] + xx [ 264 ] *
xx [ 36 ] + xx [ 71 ] ; pm_math_Vector3_cross_ra ( xx + 40 , xx + 154 , xx +
47 ) ; xx [ 37 ] = xx [ 38 ] + xx [ 241 ] * xx [ 34 ] + xx [ 272 ] * xx [ 35
] - xx [ 283 ] * xx [ 36 ] + xx [ 74 ] ; xx [ 38 ] = xx [ 39 ] + xx [ 242 ] *
xx [ 34 ] + xx [ 273 ] * xx [ 35 ] - xx [ 284 ] * xx [ 36 ] + xx [ 76 ] ; xx
[ 39 ] = xx [ 46 ] + xx [ 47 ] ; xx [ 40 ] = xx [ 37 ] + xx [ 48 ] ; xx [ 41
] = xx [ 38 ] + xx [ 49 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 ,
xx + 39 , xx + 47 ) ; xx [ 39 ] = xx [ 110 ] - ( pm_math_Vector3_dot_ra ( xx
+ 18 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx + 43 , xx + 47 ) ) ; xx [ 18 ]
= xx [ 205 ] ; xx [ 19 ] = xx [ 208 ] ; xx [ 20 ] = xx [ 211 ] ; xx [ 40 ] =
xx [ 214 ] ; xx [ 41 ] = xx [ 217 ] ; xx [ 42 ] = xx [ 220 ] ; xx [ 43 ] = xx
[ 111 ] - ( pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) +
pm_math_Vector3_dot_ra ( xx + 40 , xx + 47 ) ) ; xx [ 18 ] = xx [ 206 ] ; xx
[ 19 ] = xx [ 209 ] ; xx [ 20 ] = xx [ 212 ] ; xx [ 40 ] = xx [ 215 ] ; xx [
41 ] = xx [ 218 ] ; xx [ 42 ] = xx [ 221 ] ; xx [ 44 ] = xx [ 112 ] - (
pm_math_Vector3_dot_ra ( xx + 18 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
40 , xx + 47 ) ) ; xx [ 18 ] = xx [ 23 ] + xx [ 109 ] * xx [ 39 ] + xx [ 148
] * xx [ 43 ] - xx [ 98 ] * xx [ 44 ] + xx [ 146 ] ; xx [ 19 ] = xx [ 0 ] - (
xx [ 1517 ] * xx [ 1517 ] + xx [ 1518 ] * xx [ 1518 ] ) * xx [ 11 ] ; xx [ 20
] = xx [ 11 ] * ( xx [ 1516 ] * xx [ 1517 ] - xx [ 1515 ] * xx [ 1518 ] ) ;
xx [ 23 ] = ( xx [ 1515 ] * xx [ 1517 ] + xx [ 1516 ] * xx [ 1518 ] ) * xx [
11 ] ; xx [ 40 ] = xx [ 19 ] ; xx [ 41 ] = xx [ 20 ] ; xx [ 42 ] = xx [ 23 ]
; xx [ 45 ] = pm_math_Vector3_dot_ra ( xx + 936 , xx + 40 ) ; xx [ 50 ] =
7.927528481685209e-11 ; xx [ 51 ] = 0.06791191233403736 ; xx [ 54 ] =
0.9976913210823947 ; xx [ 57 ] = - xx [ 50 ] ; xx [ 58 ] = - xx [ 51 ] ; xx [
59 ] = xx [ 54 ] ; xx [ 55 ] = pm_math_Vector3_dot_ra ( xx + 40 , xx + 57 ) ;
xx [ 60 ] = xx [ 0 ] - xx [ 55 ] * xx [ 55 ] ; xx [ 66 ] = xx [ 60 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 936 , xx + 57 ) - xx [ 45 ] * xx [ 55 ]
) / xx [ 60 ] ; xx [ 67 ] = xx [ 45 ] - xx [ 55 ] * xx [ 66 ] ; xx [ 68 ] =
xx [ 67 ] * xx [ 19 ] ; xx [ 69 ] = xx [ 20 ] * xx [ 67 ] ; xx [ 70 ] = xx [
23 ] * xx [ 67 ] ; pm_math_Vector3_cross_ra ( xx + 936 , xx + 68 , xx + 71 )
; xx [ 67 ] = - ( xx [ 50 ] * xx [ 66 ] ) ; xx [ 68 ] = - ( xx [ 51 ] * xx [
66 ] ) ; xx [ 69 ] = xx [ 54 ] * xx [ 66 ] ; xx [ 74 ] = - xx [ 1515 ] ; xx [
75 ] = - xx [ 1516 ] ; xx [ 76 ] = - xx [ 1517 ] ; xx [ 77 ] = - xx [ 1518 ]
; xx [ 92 ] = 0.9994226636119462 ; xx [ 93 ] = 0.03397557150075099 ; xx [ 94
] = - 3.268676406922499e-11 ; xx [ 95 ] = - 2.051400253076505e-10 ;
pm_math_Quaternion_compose_ra ( xx + 74 , xx + 92 , xx + 108 ) ; xx [ 66 ] =
( xx [ 109 ] * xx [ 111 ] + xx [ 108 ] * xx [ 110 ] ) * xx [ 11 ] ; xx [ 70 ]
= 0.99999999999999 ; bb [ 0 ] = fabs ( xx [ 66 ] ) > xx [ 70 ] ; if ( xx [ 66
] < 0.0 ) xx [ 78 ] = - 1.0 ; else if ( xx [ 66 ] > 0.0 ) xx [ 78 ] = + 1.0 ;
else xx [ 78 ] = 0.0 ; xx [ 81 ] = xx [ 110 ] * xx [ 111 ] ; xx [ 82 ] = xx [
108 ] * xx [ 109 ] ; xx [ 92 ] = xx [ 108 ] * xx [ 108 ] ; xx [ 93 ] = ( xx [
92 ] + xx [ 110 ] * xx [ 110 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 94 ] = ( xx [
81 ] + xx [ 82 ] ) * xx [ 11 ] ; xx [ 93 ] = ( xx [ 94 ] == 0.0 && xx [ 93 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 94 ] , xx [ 93 ] ) ; xx [ 94 ] = ( xx [ 92 ] +
xx [ 111 ] * xx [ 111 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 95 ] = - ( xx [ 11 ]
* ( xx [ 81 ] - xx [ 82 ] ) ) ; xx [ 94 ] = ( xx [ 95 ] == 0.0 && xx [ 94 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 95 ] , xx [ 94 ] ) ; xx [ 81 ] = ( xx [ 92 ] +
xx [ 109 ] * xx [ 109 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 82 ] = - ( xx [ 11 ]
* ( xx [ 109 ] * xx [ 110 ] - xx [ 108 ] * xx [ 111 ] ) ) ; xx [ 81 ] = ( xx
[ 82 ] == 0.0 && xx [ 81 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 82 ] , xx [ 81 ] ) ;
xx [ 82 ] = bb [ 0 ] ? xx [ 78 ] * ( bb [ 0 ] ? xx [ 1 ] * xx [ 93 ] : xx [
94 ] ) : xx [ 81 ] ; xx [ 81 ] = 1.570796326794897 ; xx [ 92 ] = ( ( cos (
state [ 31 ] ) ) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 93 ] = xx [ 0 ] - xx [ 92 ] ;
xx [ 94 ] = xx [ 1 ] * ( xx [ 82 ] - xx [ 81 ] * ( xx [ 82 ] < 0.0 ? - 1.0 :
+ 1.0 ) * xx [ 93 ] ) ; xx [ 82 ] = sin ( xx [ 94 ] ) ; xx [ 108 ] = cos ( xx
[ 94 ] ) ; xx [ 109 ] = - ( xx [ 50 ] * xx [ 82 ] ) ; xx [ 110 ] = - ( xx [
51 ] * xx [ 82 ] ) ; xx [ 111 ] = xx [ 54 ] * xx [ 82 ] ; xx [ 94 ] =
4.07822078033264e-10 ; xx [ 95 ] = xx [ 54 ] ; xx [ 96 ] = xx [ 51 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 108 , xx + 94 , xx + 121 ) ; xx [
50 ] = pm_math_Vector3_dot_ra ( xx + 936 , xx + 121 ) ; xx [ 94 ] = xx [ 50 ]
* xx [ 121 ] ; xx [ 95 ] = xx [ 50 ] * xx [ 122 ] ; xx [ 96 ] = xx [ 50 ] *
xx [ 123 ] ; pm_math_Vector3_cross_ra ( xx + 67 , xx + 94 , xx + 108 ) ; xx [
50 ] = xx [ 24 ] + xx [ 106 ] * xx [ 39 ] + xx [ 149 ] * xx [ 43 ] - xx [ 97
] * xx [ 44 ] + xx [ 921 ] ; xx [ 24 ] = xx [ 25 ] + xx [ 80 ] * xx [ 39 ] +
xx [ 150 ] * xx [ 43 ] + xx [ 83 ] * xx [ 44 ] + xx [ 103 ] ; xx [ 67 ] = xx
[ 18 ] + xx [ 71 ] + xx [ 108 ] ; xx [ 68 ] = xx [ 50 ] + xx [ 72 ] + xx [
109 ] ; xx [ 69 ] = xx [ 24 ] + xx [ 73 ] + xx [ 110 ] ; xx [ 25 ] =
pm_math_Vector3_dot_ra ( xx + 67 , xx + 40 ) ; xx [ 51 ] = xx [ 60 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 67 , xx + 57 ) - xx [ 25 ] * xx [ 55 ]
) / xx [ 60 ] ; xx [ 54 ] = 2.57582929823209e-11 ; xx [ 57 ] =
0.184996320402559 ; xx [ 58 ] = 0.982739213340708 ; xx [ 71 ] = xx [ 54 ] ;
xx [ 72 ] = xx [ 57 ] ; xx [ 73 ] = xx [ 58 ] ; xx [ 59 ] =
pm_math_Vector3_dot_ra ( xx + 40 , xx + 71 ) ; xx [ 60 ] = xx [ 0 ] - xx [ 59
] * xx [ 59 ] ; xx [ 80 ] = xx [ 60 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra
( xx + 936 , xx + 71 ) - xx [ 45 ] * xx [ 59 ] ) / xx [ 60 ] ; xx [ 82 ] = xx
[ 45 ] - xx [ 59 ] * xx [ 80 ] ; xx [ 94 ] = xx [ 82 ] * xx [ 19 ] ; xx [ 95
] = xx [ 20 ] * xx [ 82 ] ; xx [ 96 ] = xx [ 23 ] * xx [ 82 ] ;
pm_math_Vector3_cross_ra ( xx + 936 , xx + 94 , xx + 103 ) ; xx [ 94 ] = xx [
54 ] * xx [ 80 ] ; xx [ 95 ] = xx [ 57 ] * xx [ 80 ] ; xx [ 96 ] = xx [ 58 ]
* xx [ 80 ] ; xx [ 108 ] = - xx [ 948 ] ; xx [ 109 ] = xx [ 946 ] ; xx [ 110
] = xx [ 945 ] ; xx [ 111 ] = xx [ 949 ] ; pm_math_Quaternion_compose_ra ( xx
+ 74 , xx + 108 , xx + 144 ) ; xx [ 19 ] = ( xx [ 145 ] * xx [ 147 ] + xx [
144 ] * xx [ 146 ] ) * xx [ 11 ] ; bb [ 1 ] = fabs ( xx [ 19 ] ) > xx [ 70 ]
; if ( xx [ 19 ] < 0.0 ) xx [ 20 ] = - 1.0 ; else if ( xx [ 19 ] > 0.0 ) xx [
20 ] = + 1.0 ; else xx [ 20 ] = 0.0 ; xx [ 23 ] = xx [ 146 ] * xx [ 147 ] ;
xx [ 45 ] = xx [ 144 ] * xx [ 145 ] ; xx [ 70 ] = xx [ 144 ] * xx [ 144 ] ;
xx [ 74 ] = ( xx [ 70 ] + xx [ 146 ] * xx [ 146 ] ) * xx [ 11 ] - xx [ 0 ] ;
xx [ 75 ] = ( xx [ 23 ] + xx [ 45 ] ) * xx [ 11 ] ; xx [ 74 ] = ( xx [ 75 ]
== 0.0 && xx [ 74 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 75 ] , xx [ 74 ] ) ; xx [
75 ] = ( xx [ 70 ] + xx [ 147 ] * xx [ 147 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [
76 ] = - ( xx [ 11 ] * ( xx [ 23 ] - xx [ 45 ] ) ) ; xx [ 75 ] = ( xx [ 76 ]
== 0.0 && xx [ 75 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 76 ] , xx [ 75 ] ) ; xx [
23 ] = ( xx [ 70 ] + xx [ 145 ] * xx [ 145 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [
45 ] = - ( xx [ 11 ] * ( xx [ 145 ] * xx [ 146 ] - xx [ 144 ] * xx [ 147 ] )
) ; xx [ 23 ] = ( xx [ 45 ] == 0.0 && xx [ 23 ] == 0.0 ) ? 0.0 : atan2 ( xx [
45 ] , xx [ 23 ] ) ; xx [ 11 ] = bb [ 1 ] ? xx [ 20 ] * ( bb [ 1 ] ? xx [ 1 ]
* xx [ 74 ] : xx [ 75 ] ) : xx [ 23 ] ; xx [ 23 ] = ( ( cos ( state [ 37 ] )
) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 45 ] = xx [ 0 ] - xx [ 23 ] ; xx [ 0 ] = xx
[ 1 ] * ( xx [ 11 ] - xx [ 81 ] * ( xx [ 11 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [
45 ] ) ; xx [ 1 ] = sin ( xx [ 0 ] ) ; xx [ 74 ] = cos ( xx [ 0 ] ) ; xx [ 75
] = xx [ 54 ] * xx [ 1 ] ; xx [ 76 ] = xx [ 57 ] * xx [ 1 ] ; xx [ 77 ] = xx
[ 58 ] * xx [ 1 ] ; xx [ 108 ] = 4.146563855226113e-10 ; xx [ 109 ] = xx [ 58
] ; xx [ 110 ] = - xx [ 57 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 74 ,
xx + 108 , xx + 138 ) ; xx [ 0 ] = pm_math_Vector3_dot_ra ( xx + 936 , xx +
138 ) ; xx [ 74 ] = xx [ 0 ] * xx [ 138 ] ; xx [ 75 ] = xx [ 0 ] * xx [ 139 ]
; xx [ 76 ] = xx [ 0 ] * xx [ 140 ] ; pm_math_Vector3_cross_ra ( xx + 94 , xx
+ 74 , xx + 108 ) ; xx [ 74 ] = xx [ 18 ] + xx [ 103 ] + xx [ 108 ] ; xx [ 75
] = xx [ 50 ] + xx [ 104 ] + xx [ 109 ] ; xx [ 76 ] = xx [ 24 ] + xx [ 105 ]
+ xx [ 110 ] ; xx [ 0 ] = pm_math_Vector3_dot_ra ( xx + 74 , xx + 40 ) ; xx [
1 ] = xx [ 60 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 74 , xx + 71 )
- xx [ 0 ] * xx [ 59 ] ) / xx [ 60 ] ; deriv [ 0 ] = state [ 3 ] ; deriv [ 1
] = state [ 4 ] ; deriv [ 2 ] = state [ 5 ] ; deriv [ 3 ] = xx [ 21 ] ; deriv
[ 4 ] = xx [ 28 ] ; deriv [ 5 ] = xx [ 15 ] ; deriv [ 6 ] = state [ 9 ] ;
deriv [ 7 ] = state [ 10 ] ; deriv [ 8 ] = state [ 11 ] ; deriv [ 9 ] = xx [
7 ] ; deriv [ 10 ] = xx [ 8 ] ; deriv [ 11 ] = xx [ 9 ] ; deriv [ 12 ] =
state [ 15 ] ; deriv [ 13 ] = state [ 16 ] ; deriv [ 14 ] = state [ 17 ] ;
deriv [ 15 ] = xx [ 17 ] ; deriv [ 16 ] = xx [ 22 ] ; deriv [ 17 ] = xx [ 30
] ; deriv [ 18 ] = state [ 21 ] ; deriv [ 19 ] = state [ 22 ] ; deriv [ 20 ]
= state [ 23 ] ; deriv [ 21 ] = xx [ 34 ] ; deriv [ 22 ] = xx [ 35 ] ; deriv
[ 23 ] = xx [ 36 ] ; deriv [ 24 ] = state [ 27 ] ; deriv [ 25 ] = state [ 28
] ; deriv [ 26 ] = state [ 29 ] ; deriv [ 27 ] = xx [ 39 ] ; deriv [ 28 ] =
xx [ 43 ] ; deriv [ 29 ] = xx [ 44 ] ; deriv [ 30 ] = state [ 33 ] ; deriv [
31 ] = state [ 34 ] ; deriv [ 32 ] = state [ 35 ] ; deriv [ 33 ] = xx [ 25 ]
- xx [ 55 ] * xx [ 51 ] ; deriv [ 34 ] = pm_math_Vector3_dot_ra ( xx + 67 ,
xx + 121 ) ; deriv [ 35 ] = xx [ 51 ] ; deriv [ 36 ] = state [ 39 ] ; deriv [
37 ] = state [ 40 ] ; deriv [ 38 ] = state [ 41 ] ; deriv [ 39 ] = xx [ 0 ] -
xx [ 59 ] * xx [ 1 ] ; deriv [ 40 ] = pm_math_Vector3_dot_ra ( xx + 74 , xx +
138 ) ; deriv [ 41 ] = xx [ 1 ] ; if ( xx [ 854 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L1-L2 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 0 ] = input [ 109 ] / xx [ 854 ] ; if ( xx [ 770 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L2-L3 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1 ] = input [ 110 ] / xx [ 770 ] ; if ( xx [ 685 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L3-L4 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 7 ] = input [ 111 ] / xx [ 685 ] ; if ( xx [ 564 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L4-L5 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 8 ] = input [ 112 ] / xx [ 564 ] ; if ( xx [ 597 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L5-S1 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 9 ] = input [ 113 ] / xx [ 597 ] ; if ( xx [ 783 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 11 ] = input [ 114 ] / xx [ 783 ] ; if ( xx [ 701 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 15 ] = input [ 115 ] / xx [ 701 ] ; if ( xx [ 555 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 17 ] = input [ 116 ] / xx [ 555 ] ; if ( xx [ 602 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 18 ] = input [ 117 ] / xx [ 602 ] ; if ( xx [ 619 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 21 ] = input [ 118 ] / xx [ 619 ] ; if ( xx [ 800 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 22 ] = input [ 119 ] / xx [ 800 ] ; if ( xx [ 718 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 24 ] = input [ 120 ] / xx [ 718 ] ; if ( xx [ 611 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 25 ] = input [ 121 ] / xx [ 611 ] ; if ( xx [ 608 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 28 ] = input [ 122 ] / xx [ 608 ] ; if ( xx [ 617 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 30 ] = input [ 123 ] / xx [ 617 ] ; if ( xx [ 1504 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 34 ] = input [ 124 ] / xx [ 1504 ] ; if ( xx [ 596 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force1' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 35 ] = input [ 125 ] / xx [ 596 ] ; if ( xx [ 1528 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force2' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 36 ] = input [ 126 ] / xx [ 1528 ] ; if ( xx [ 1526 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force3' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 40 ] = input [ 127 ] / xx [ 1526 ] ; if ( xx [ 1550 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force4' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 41 ] = input [ 128 ] / xx [ 1550 ] ; if ( xx [ 1562 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force5' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 42 ] = input [ 129 ] / xx [ 1562 ] ; if ( xx [ 1548 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force6' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 50 ] = input [ 130 ] / xx [ 1548 ] ; if ( xx [ 1485 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force7' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 51 ] = input [ 131 ] / xx [ 1485 ] ; if ( xx [ 141 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L1-L2 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 54 ] = input [ 135 ] / xx [ 141 ] ; if ( xx [ 117 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L2-L3 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 55 ] = input [ 136 ] / xx [ 117 ] ; if ( xx [ 53 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L3-L4 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 57 ] = input [ 137 ] / xx [ 53 ] ; if ( xx [ 27 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L4-L5 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 53 ] = input [ 138 ] / xx [ 27 ] ; if ( xx [ 666 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L5-S1 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 27 ] = input [ 139 ] / xx [ 666 ] ; xx [ 58 ] = fabs (
xx [ 66 ] ) > 1.0 ? atan2 ( xx [ 66 ] , 0.0 ) : asin ( xx [ 66 ] ) ; xx [ 59
] = bb [ 0 ] ? xx [ 81 ] * xx [ 78 ] : xx [ 58 ] ; xx [ 58 ] = state [ 31 ] +
pm_math_canonicalAngle ( xx [ 92 ] * xx [ 59 ] + xx [ 81 ] * ( xx [ 59 ] <
0.0 ? - 1.0 : + 1.0 ) * xx [ 93 ] - state [ 31 ] ) ; xx [ 59 ] = cos ( xx [
58 ] ) ; if ( xx [ 59 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L1-S1 Bushing Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } xx [ 59 ] = sin ( xx [ 58 ] ) / xx [ 59 ] ; xx [ 58 ] =
fabs ( xx [ 19 ] ) > 1.0 ? atan2 ( xx [ 19 ] , 0.0 ) : asin ( xx [ 19 ] ) ;
xx [ 19 ] = bb [ 1 ] ? xx [ 81 ] * xx [ 20 ] : xx [ 58 ] ; xx [ 20 ] = state
[ 37 ] + pm_math_canonicalAngle ( xx [ 23 ] * xx [ 19 ] + xx [ 81 ] * ( xx [
19 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 45 ] - state [ 37 ] ) ; xx [ 19 ] = cos (
xx [ 20 ] ) ; if ( xx [ 19 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/T1-S1 Bushing Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } xx [ 19 ] = sin ( xx [ 20 ] ) / xx [ 19 ] ; ii [ 0 ] = bb [
0 ] ? 1 : 0 ; if ( bb [ 0 ] ) * derivErr = 1 ; ii [ 1 ] = bb [ 1 ] ? 1 : 0 ;
if ( bb [ 1 ] ) * derivErr = 1 ; errorResult [ 0 ] = xx [ 856 ] + xx [ 784 ]
+ xx [ 690 ] + xx [ 583 ] + xx [ 599 ] + xx [ 886 ] + xx [ 801 ] + xx [ 695 ]
+ xx [ 612 ] + xx [ 627 ] + xx [ 903 ] + xx [ 818 ] + xx [ 734 ] + xx [ 640 ]
+ xx [ 645 ] + xx [ 1505 ] + xx [ 1512 ] + xx [ 1531 ] + xx [ 1538 ] + xx [
1553 ] + xx [ 1567 ] + xx [ 1574 ] + xx [ 1560 ] + xx [ 815 ] + xx [ 731 ] +
xx [ 637 ] + xx [ 646 ] + xx [ 667 ] + xx [ 0 ] + xx [ 1 ] + xx [ 7 ] + xx [
8 ] + xx [ 9 ] + xx [ 11 ] + xx [ 15 ] + xx [ 17 ] + xx [ 18 ] + xx [ 21 ] +
xx [ 22 ] + xx [ 24 ] + xx [ 25 ] + xx [ 28 ] + xx [ 30 ] + xx [ 34 ] + xx [
35 ] + xx [ 36 ] + xx [ 40 ] + xx [ 41 ] + xx [ 42 ] + xx [ 50 ] + xx [ 51 ]
+ xx [ 54 ] + xx [ 55 ] + xx [ 57 ] + xx [ 53 ] + xx [ 27 ] + xx [ 59 ] + xx
[ 19 ] + ( double ) ( ii [ 0 ] + ii [ 1 ] ) ; xx [ 19 ] = 9.87654321 ; xx [
20 ] = 0.9596745588240466 ; xx [ 23 ] = 0.2811133955290491 ; xx [ 66 ] = xx [
20 ] * xx [ 10 ] + xx [ 23 ] * xx [ 14 ] ; xx [ 67 ] = xx [ 20 ] * xx [ 14 ]
- xx [ 23 ] * xx [ 10 ] ; xx [ 68 ] = xx [ 20 ] * xx [ 6 ] - xx [ 5 ] * xx [
23 ] ; xx [ 69 ] = xx [ 5 ] * xx [ 20 ] + xx [ 23 ] * xx [ 6 ] ; xx [ 5 ] =
xx [ 8 ] * xx [ 476 ] ; xx [ 58 ] = xx [ 9 ] * xx [ 592 ] ; xx [ 59 ] = xx [
9 ] * xx [ 595 ] ; xx [ 60 ] = xx [ 9 ] * xx [ 598 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 587 , xx + 58 , xx + 70 ) ; xx [ 6
] = xx [ 18 ] * xx [ 615 ] ; xx [ 58 ] = xx [ 21 ] * xx [ 624 ] ; xx [ 59 ] =
xx [ 21 ] * xx [ 626 ] ; xx [ 60 ] = xx [ 21 ] * xx [ 618 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 587 , xx + 58 , xx + 73 ) ; xx [ 9
] = xx [ 28 ] * xx [ 643 ] ; xx [ 58 ] = xx [ 30 ] * xx [ 651 ] ; xx [ 59 ] =
xx [ 30 ] * xx [ 623 ] ; xx [ 60 ] = xx [ 30 ] * xx [ 625 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 587 , xx + 58 , xx + 76 ) ; xx [ 10
] = xx [ 53 ] * xx [ 635 ] ; xx [ 58 ] = xx [ 27 ] * xx [ 668 ] ; xx [ 59 ] =
xx [ 27 ] * xx [ 669 ] ; xx [ 60 ] = xx [ 27 ] * xx [ 665 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 587 , xx + 58 , xx + 80 ) ; xx [ 14
] = xx [ 7 ] * xx [ 686 ] ; xx [ 20 ] = xx [ 8 ] * xx [ 556 ] ; xx [ 21 ] =
xx [ 8 ] * xx [ 563 ] ; xx [ 58 ] = xx [ 5 ] ; xx [ 59 ] = xx [ 20 ] ; xx [
60 ] = xx [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 58 ,
xx + 92 ) ; xx [ 8 ] = xx [ 17 ] * xx [ 694 ] ; xx [ 23 ] = xx [ 18 ] * xx [
600 ] ; xx [ 27 ] = xx [ 18 ] * xx [ 601 ] ; xx [ 58 ] = xx [ 6 ] ; xx [ 59 ]
= xx [ 23 ] ; xx [ 60 ] = xx [ 27 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 61 , xx + 58 , xx + 95 ) ; xx [ 18 ] = xx [ 25 ] * xx [ 737 ] ; xx [ 30 ] =
xx [ 28 ] * xx [ 606 ] ; xx [ 45 ] = xx [ 28 ] * xx [ 607 ] ; xx [ 58 ] = xx
[ 9 ] ; xx [ 59 ] = xx [ 30 ] ; xx [ 60 ] = xx [ 45 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 58 , xx + 103 ) ; xx [ 28
] = xx [ 57 ] * xx [ 754 ] ; xx [ 58 ] = xx [ 53 ] * xx [ 393 ] ; xx [ 59 ] =
xx [ 53 ] * xx [ 636 ] ; xx [ 108 ] = xx [ 10 ] ; xx [ 109 ] = xx [ 58 ] ; xx
[ 110 ] = xx [ 59 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 108
, xx + 121 ) ; xx [ 53 ] = xx [ 1 ] * xx [ 787 ] ; xx [ 60 ] = xx [ 7 ] * xx
[ 167 ] ; xx [ 83 ] = xx [ 7 ] * xx [ 684 ] ; xx [ 108 ] = xx [ 14 ] ; xx [
109 ] = xx [ 60 ] ; xx [ 110 ] = xx [ 83 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 108 , xx + 138 ) ; xx [ 7
] = xx [ 15 ] * xx [ 804 ] ; xx [ 98 ] = xx [ 17 ] * xx [ 553 ] ; xx [ 100 ]
= xx [ 17 ] * xx [ 554 ] ; xx [ 108 ] = xx [ 8 ] ; xx [ 109 ] = xx [ 98 ] ;
xx [ 110 ] = xx [ 100 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx +
108 , xx + 144 ) ; xx [ 17 ] = xx [ 24 ] * xx [ 821 ] ; xx [ 101 ] = xx [ 25
] * xx [ 609 ] ; xx [ 106 ] = xx [ 25 ] * xx [ 610 ] ; xx [ 108 ] = xx [ 18 ]
; xx [ 109 ] = xx [ 101 ] ; xx [ 110 ] = xx [ 106 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 108 , xx + 147 ) ; xx [
25 ] = xx [ 55 ] * xx [ 838 ] ; xx [ 108 ] = xx [ 57 ] * xx [ 31 ] ; xx [ 31
] = xx [ 57 ] * xx [ 52 ] ; xx [ 109 ] = xx [ 28 ] ; xx [ 110 ] = xx [ 108 ]
; xx [ 111 ] = xx [ 31 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx
+ 109 , xx + 154 ) ; xx [ 52 ] = xx [ 0 ] * xx [ 855 ] ; xx [ 57 ] = xx [ 1 ]
* xx [ 768 ] ; xx [ 109 ] = xx [ 1 ] * xx [ 769 ] ; xx [ 110 ] = xx [ 53 ] ;
xx [ 111 ] = xx [ 57 ] ; xx [ 112 ] = xx [ 109 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 110 , xx + 157 ) ; xx [ 1
] = xx [ 11 ] * xx [ 889 ] ; xx [ 110 ] = xx [ 15 ] * xx [ 699 ] ; xx [ 111 ]
= xx [ 15 ] * xx [ 700 ] ; xx [ 160 ] = xx [ 7 ] ; xx [ 161 ] = xx [ 110 ] ;
xx [ 162 ] = xx [ 111 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx +
160 , xx + 166 ) ; xx [ 15 ] = xx [ 22 ] * xx [ 906 ] ; xx [ 112 ] = xx [ 24
] * xx [ 716 ] ; xx [ 117 ] = xx [ 24 ] * xx [ 717 ] ; xx [ 160 ] = xx [ 17 ]
; xx [ 161 ] = xx [ 112 ] ; xx [ 162 ] = xx [ 117 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 160 , xx + 172 ) ; xx [
24 ] = xx [ 54 ] * xx [ 923 ] ; xx [ 118 ] = xx [ 55 ] * xx [ 79 ] ; xx [ 79
] = xx [ 55 ] * xx [ 120 ] ; xx [ 160 ] = xx [ 25 ] ; xx [ 161 ] = xx [ 118 ]
; xx [ 162 ] = xx [ 79 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx
+ 160 , xx + 175 ) ; xx [ 55 ] = xx [ 0 ] * xx [ 163 ] ; xx [ 120 ] = xx [ 0
] * xx [ 171 ] ; xx [ 160 ] = xx [ 52 ] ; xx [ 161 ] = xx [ 55 ] ; xx [ 162 ]
= xx [ 120 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 160 , xx
+ 169 ) ; xx [ 0 ] = xx [ 11 ] * xx [ 781 ] ; xx [ 124 ] = xx [ 11 ] * xx [
782 ] ; xx [ 160 ] = xx [ 1 ] ; xx [ 161 ] = xx [ 0 ] ; xx [ 162 ] = xx [ 124
] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 160 , xx + 178 ) ;
xx [ 11 ] = xx [ 22 ] * xx [ 798 ] ; xx [ 125 ] = xx [ 22 ] * xx [ 799 ] ; xx
[ 160 ] = xx [ 15 ] ; xx [ 161 ] = xx [ 11 ] ; xx [ 162 ] = xx [ 125 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 160 , xx + 181 ) ; xx [
160 ] = xx [ 34 ] * xx [ 1467 ] ; xx [ 161 ] = xx [ 34 ] * xx [ 1479 ] ; xx [
162 ] = xx [ 34 ] * xx [ 1503 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1515 , xx + 160 , xx + 184 ) ; xx [ 160 ] = xx [ 35 ] * xx [ 1519 ] ; xx [
161 ] = xx [ 35 ] * xx [ 591 ] ; xx [ 162 ] = xx [ 35 ] * xx [ 593 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1515 , xx + 160 , xx + 187 ) ; xx [
160 ] = xx [ 36 ] * xx [ 1514 ] ; xx [ 161 ] = xx [ 36 ] * xx [ 1530 ] ; xx [
162 ] = xx [ 36 ] * xx [ 1527 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1515 , xx + 160 , xx + 34 ) ; xx [ 160 ] = xx [ 40 ] * xx [ 1541 ] ; xx [ 161
] = xx [ 40 ] * xx [ 1513 ] ; xx [ 162 ] = xx [ 40 ] * xx [ 1529 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1515 , xx + 160 , xx + 190 ) ; xx [
160 ] = xx [ 41 ] * xx [ 1540 ] ; xx [ 161 ] = xx [ 41 ] * xx [ 1552 ] ; xx [
162 ] = xx [ 41 ] * xx [ 1549 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1515 , xx + 160 , xx + 193 ) ; xx [ 160 ] = xx [ 42 ] * xx [ 1564 ] ; xx [
161 ] = xx [ 42 ] * xx [ 1566 ] ; xx [ 162 ] = xx [ 42 ] * xx [ 1561 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1515 , xx + 160 , xx + 40 ) ; xx [
160 ] = xx [ 50 ] * xx [ 1577 ] ; xx [ 161 ] = xx [ 50 ] * xx [ 1539 ] ; xx [
162 ] = xx [ 50 ] * xx [ 1551 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1515 , xx + 160 , xx + 196 ) ; xx [ 160 ] = xx [ 51 ] * xx [ 1575 ] ; xx [
161 ] = xx [ 51 ] * xx [ 1461 ] ; xx [ 162 ] = xx [ 51 ] * xx [ 1473 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1515 , xx + 160 , xx + 199 ) ; xx [
22 ] = xx [ 54 ] * xx [ 129 ] ; xx [ 50 ] = xx [ 54 ] * xx [ 130 ] ; xx [ 127
] = xx [ 24 ] ; xx [ 128 ] = xx [ 22 ] ; xx [ 129 ] = xx [ 50 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 127 , xx + 160 ) ; xx [
127 ] = ( xx [ 47 ] + xx [ 134 ] * xx [ 39 ] + xx [ 151 ] * xx [ 43 ] - xx [
901 ] * xx [ 44 ] + xx [ 99 ] ) * xx [ 137 ] - ( xx [ 102 ] + xx [ 169 ] + xx
[ 178 ] + xx [ 181 ] + xx [ 184 ] + xx [ 187 ] + xx [ 34 ] + xx [ 190 ] + xx
[ 193 ] + xx [ 40 ] + xx [ 196 ] + xx [ 199 ] + xx [ 160 ] ) ; xx [ 128 ] = (
xx [ 48 ] + xx [ 135 ] * xx [ 39 ] + xx [ 152 ] * xx [ 43 ] - xx [ 902 ] * xx
[ 44 ] + xx [ 107 ] ) * xx [ 137 ] - ( xx [ 126 ] + xx [ 170 ] + xx [ 179 ] +
xx [ 182 ] + xx [ 185 ] + xx [ 188 ] + xx [ 35 ] + xx [ 191 ] + xx [ 194 ] +
xx [ 41 ] + xx [ 197 ] + xx [ 200 ] + xx [ 161 ] ) ; xx [ 129 ] = ( xx [ 49 ]
+ xx [ 136 ] * xx [ 39 ] + xx [ 153 ] * xx [ 43 ] - xx [ 917 ] * xx [ 44 ] +
xx [ 132 ] ) * xx [ 137 ] - ( xx [ 133 ] + xx [ 171 ] + xx [ 180 ] + xx [ 183
] + xx [ 186 ] + xx [ 189 ] + xx [ 36 ] + xx [ 192 ] + xx [ 195 ] + xx [ 42 ]
+ xx [ 198 ] + xx [ 201 ] + xx [ 162 ] ) ; pm_math_Quaternion_xform_ra ( xx +
113 , xx + 127 , xx + 34 ) ; xx [ 39 ] = xx [ 52 ] + xx [ 863 ] - xx [ 157 ]
+ xx [ 1 ] - xx [ 166 ] + xx [ 15 ] - xx [ 172 ] + xx [ 24 ] - xx [ 175 ] +
xx [ 46 ] * xx [ 246 ] + xx [ 34 ] ; xx [ 40 ] = xx [ 55 ] - xx [ 864 ] - xx
[ 158 ] + xx [ 0 ] - xx [ 167 ] + xx [ 11 ] - xx [ 173 ] + xx [ 22 ] - xx [
176 ] + xx [ 37 ] * xx [ 246 ] + xx [ 35 ] ; xx [ 41 ] = xx [ 120 ] - xx [
143 ] - xx [ 159 ] + xx [ 124 ] - xx [ 168 ] + xx [ 125 ] - xx [ 174 ] + xx [
50 ] - xx [ 177 ] + xx [ 38 ] * xx [ 246 ] + xx [ 36 ] ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 39 , xx + 34 ) ; xx [ 37 ] = xx
[ 53 ] - 2.556350485252097e-12 * xx [ 119 ] - xx [ 138 ] + xx [ 7 ] - xx [
144 ] + xx [ 17 ] - xx [ 147 ] + xx [ 25 ] - xx [ 154 ] + xx [ 26 ] * xx [
297 ] + xx [ 34 ] ; xx [ 38 ] = 1.536679020068778 * xx [ 119 ] + xx [ 57 ] -
xx [ 139 ] + xx [ 110 ] - xx [ 145 ] + xx [ 112 ] - xx [ 148 ] + xx [ 118 ] -
xx [ 155 ] + xx [ 29 ] * xx [ 297 ] + xx [ 35 ] ; xx [ 39 ] = xx [ 109 ] - xx
[ 774 ] - xx [ 140 ] + xx [ 111 ] - xx [ 146 ] + xx [ 117 ] - xx [ 149 ] + xx
[ 79 ] - xx [ 156 ] + xx [ 32 ] * xx [ 297 ] + xx [ 36 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 37 , xx + 24 ) ; xx [ 34 ] = xx
[ 14 ] + xx [ 692 ] - xx [ 92 ] + xx [ 8 ] - xx [ 95 ] + xx [ 18 ] - xx [ 103
] + xx [ 28 ] - xx [ 121 ] + xx [ 12 ] * xx [ 374 ] + xx [ 24 ] ; xx [ 35 ] =
xx [ 60 ] - xx [ 142 ] - xx [ 93 ] + xx [ 98 ] - xx [ 96 ] + xx [ 101 ] - xx
[ 104 ] + xx [ 108 ] - xx [ 122 ] + xx [ 13 ] * xx [ 374 ] + xx [ 25 ] ; xx [
36 ] = xx [ 83 ] - xx [ 56 ] - xx [ 94 ] + xx [ 100 ] - xx [ 97 ] + xx [ 106
] - xx [ 105 ] + xx [ 31 ] - xx [ 123 ] + xx [ 16 ] * xx [ 374 ] + xx [ 26 ]
; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 34 , xx + 11 ) ; xx [ 14 ] = -
( xx [ 5 ] - xx [ 70 ] + xx [ 6 ] - xx [ 73 ] + xx [ 9 ] - xx [ 76 ] + xx [
10 ] - xx [ 80 ] + xx [ 2 ] * xx [ 165 ] + xx [ 11 ] ) ; xx [ 15 ] = - ( xx [
65 ] + xx [ 20 ] - xx [ 71 ] + xx [ 23 ] - xx [ 74 ] + xx [ 30 ] - xx [ 77 ]
+ xx [ 58 ] - xx [ 81 ] + xx [ 3 ] * xx [ 165 ] + xx [ 12 ] ) ; xx [ 16 ] = -
( xx [ 21 ] - xx [ 33 ] - xx [ 72 ] + xx [ 27 ] - xx [ 75 ] + xx [ 45 ] - xx
[ 78 ] + xx [ 59 ] - xx [ 82 ] + xx [ 4 ] * xx [ 165 ] + xx [ 13 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 66 , xx + 14 , xx + 0 ) ; output [
1 ] = input [ 0 ] ; output [ 3 ] = input [ 1 ] ; output [ 5 ] = input [ 2 ] ;
output [ 10 ] = input [ 3 ] ; output [ 12 ] = input [ 4 ] ; output [ 14 ] =
input [ 5 ] ; output [ 16 ] = input [ 6 ] ; output [ 18 ] = input [ 7 ] ;
output [ 20 ] = input [ 8 ] ; output [ 22 ] = input [ 9 ] ; output [ 24 ] =
input [ 10 ] ; output [ 26 ] = input [ 11 ] ; output [ 28 ] = input [ 12 ] ;
output [ 30 ] = input [ 13 ] ; output [ 32 ] = input [ 14 ] ; output [ 33 ] =
xx [ 0 ] ; output [ 34 ] = xx [ 1 ] ; output [ 35 ] = xx [ 2 ] ; output [ 36
] = xx [ 0 ] ; output [ 37 ] = xx [ 1 ] ; output [ 38 ] = xx [ 2 ] ; return
NULL ; }
