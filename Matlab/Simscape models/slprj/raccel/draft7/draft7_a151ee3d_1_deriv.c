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
boolean_T bb [ 2 ] ; int ii [ 2 ] ; double xx [ 1491 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void )
inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ;
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
1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) { return sm_ssci_recordRunTimeError
( "physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L1/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L1/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 186 ] = xx [ 81 ] ; xx [ 187 ] = xx [ 71 ] ; xx [ 188
] = xx [ 159 ] ; xx [ 189 ] = xx [ 108 ] ; xx [ 190 ] = xx [ 78 ] ; xx [ 191
] = xx [ 161 ] ; xx [ 192 ] = xx [ 127 ] ; xx [ 193 ] = xx [ 82 ] ; xx [ 194
] = xx [ 162 ] ; xx [ 195 ] = xx [ 138 ] ; xx [ 196 ] = xx [ 100 ] ; xx [ 197
] = xx [ 167 ] ; xx [ 198 ] = xx [ 139 ] ; xx [ 199 ] = xx [ 101 ] ; xx [ 200
] = xx [ 169 ] ; xx [ 201 ] = xx [ 140 ] ; xx [ 202 ] = xx [ 144 ] ; xx [ 203
] = xx [ 171 ] ; solveSymmetricPosDef ( xx + 177 , xx + 186 , 3 , 6 , xx +
204 , xx + 141 ) ; xx [ 129 ] = - ( xx [ 204 ] * xx [ 108 ] + xx [ 205 ] * xx
[ 78 ] - xx [ 160 ] * xx [ 206 ] ) ; xx [ 130 ] = - ( xx [ 204 ] * xx [ 127 ]
+ xx [ 205 ] * xx [ 82 ] + xx [ 162 ] * xx [ 206 ] ) ; xx [ 141 ] = - ( xx [
207 ] * xx [ 127 ] + xx [ 208 ] * xx [ 82 ] + xx [ 162 ] * xx [ 209 ] ) ; xx
[ 186 ] = xx [ 99 ] - ( xx [ 204 ] * xx [ 81 ] + xx [ 205 ] * xx [ 71 ] - xx
[ 158 ] * xx [ 206 ] ) ; xx [ 187 ] = xx [ 129 ] ; xx [ 188 ] = xx [ 130 ] ;
xx [ 189 ] = xx [ 129 ] ; xx [ 190 ] = xx [ 107 ] - ( xx [ 207 ] * xx [ 108 ]
+ xx [ 208 ] * xx [ 78 ] - xx [ 160 ] * xx [ 209 ] ) ; xx [ 191 ] = xx [ 141
] ; xx [ 192 ] = xx [ 130 ] ; xx [ 193 ] = xx [ 141 ] ; xx [ 194 ] = xx [ 126
] - ( xx [ 210 ] * xx [ 127 ] + xx [ 211 ] * xx [ 82 ] + xx [ 162 ] * xx [
212 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 186 , xx + 117 , xx +
195 ) ; pm_math_Matrix3x3_compose_ra ( xx + 117 , xx + 195 , xx + 186 ) ; xx
[ 195 ] = - ( xx [ 213 ] * xx [ 81 ] + xx [ 214 ] * xx [ 71 ] - xx [ 158 ] *
xx [ 215 ] ) ; xx [ 196 ] = - ( xx [ 216 ] * xx [ 81 ] + xx [ 217 ] * xx [ 71
] - xx [ 158 ] * xx [ 218 ] ) ; xx [ 197 ] = - ( xx [ 219 ] * xx [ 81 ] + xx
[ 220 ] * xx [ 71 ] - xx [ 158 ] * xx [ 221 ] ) ; xx [ 198 ] = - ( xx [ 213 ]
* xx [ 108 ] + xx [ 214 ] * xx [ 78 ] - xx [ 160 ] * xx [ 215 ] ) ; xx [ 199
] = - ( xx [ 216 ] * xx [ 108 ] + xx [ 217 ] * xx [ 78 ] - xx [ 160 ] * xx [
218 ] ) ; xx [ 200 ] = - ( xx [ 219 ] * xx [ 108 ] + xx [ 220 ] * xx [ 78 ] -
xx [ 160 ] * xx [ 221 ] ) ; xx [ 201 ] = - ( xx [ 213 ] * xx [ 127 ] + xx [
214 ] * xx [ 82 ] + xx [ 162 ] * xx [ 215 ] ) ; xx [ 202 ] = - ( xx [ 216 ] *
xx [ 127 ] + xx [ 217 ] * xx [ 82 ] + xx [ 162 ] * xx [ 218 ] ) ; xx [ 203 ]
= - ( xx [ 219 ] * xx [ 127 ] + xx [ 220 ] * xx [ 82 ] + xx [ 162 ] * xx [
221 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 195 , xx + 117 , xx +
222 ) ; pm_math_Matrix3x3_compose_ra ( xx + 117 , xx + 222 , xx + 195 ) ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 131 , xx + 141 ) ; xx [ 129 ] =
4.855313199912053e-13 - xx [ 141 ] ; xx [ 130 ] = 0.01419776350117569 - xx [
142 ] ; xx [ 141 ] = 0.0153662351784256 - xx [ 143 ] ; xx [ 154 ] = xx [ 129
] ; xx [ 155 ] = xx [ 130 ] ; xx [ 156 ] = xx [ 141 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 195 , xx + 154 , xx + 222 ) ; xx [ 142
] = - ( xx [ 213 ] * xx [ 139 ] + xx [ 214 ] * xx [ 101 ] - xx [ 168 ] * xx [
215 ] ) ; xx [ 143 ] = - ( xx [ 213 ] * xx [ 140 ] + xx [ 214 ] * xx [ 144 ]
- xx [ 170 ] * xx [ 215 ] ) ; xx [ 157 ] = - ( xx [ 216 ] * xx [ 140 ] + xx [
217 ] * xx [ 144 ] - xx [ 170 ] * xx [ 218 ] ) ; xx [ 231 ] = xx [ 137 ] - (
xx [ 213 ] * xx [ 138 ] + xx [ 214 ] * xx [ 100 ] - xx [ 166 ] * xx [ 215 ] )
; xx [ 232 ] = xx [ 142 ] ; xx [ 233 ] = xx [ 143 ] ; xx [ 234 ] = xx [ 142 ]
; xx [ 235 ] = xx [ 137 ] - ( xx [ 216 ] * xx [ 139 ] + xx [ 217 ] * xx [ 101
] - xx [ 168 ] * xx [ 218 ] ) ; xx [ 236 ] = xx [ 157 ] ; xx [ 237 ] = xx [
143 ] ; xx [ 238 ] = xx [ 157 ] ; xx [ 239 ] = xx [ 137 ] - ( xx [ 219 ] * xx
[ 140 ] + xx [ 220 ] * xx [ 144 ] - xx [ 170 ] * xx [ 221 ] ) ;
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
if ( bb [ 0 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L2/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L2/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 308 ] = xx [ 125 ] ; xx [ 309 ] = xx [ 51 ] ; xx [ 310
] = xx [ 291 ] ; xx [ 311 ] = xx [ 174 ] ; xx [ 312 ] = xx [ 54 ] ; xx [ 313
] = xx [ 292 ] ; xx [ 314 ] = xx [ 176 ] ; xx [ 315 ] = xx [ 57 ] ; xx [ 316
] = xx [ 280 ] ; xx [ 317 ] = xx [ 259 ] ; xx [ 318 ] = xx [ 72 ] ; xx [ 319
] = xx [ 281 ] ; xx [ 320 ] = xx [ 260 ] ; xx [ 321 ] = xx [ 73 ] ; xx [ 322
] = xx [ 282 ] ; xx [ 323 ] = xx [ 243 ] ; xx [ 324 ] = xx [ 244 ] ; xx [ 325
] = xx [ 293 ] ; solveSymmetricPosDef ( xx + 299 , xx + 308 , 3 , 6 , xx +
326 , xx + 225 ) ; xx [ 225 ] = xx [ 174 ] * xx [ 326 ] + xx [ 54 ] * xx [
327 ] + xx [ 292 ] * xx [ 328 ] ; xx [ 226 ] = xx [ 176 ] * xx [ 326 ] + xx [
57 ] * xx [ 327 ] + xx [ 280 ] * xx [ 328 ] ; xx [ 227 ] = xx [ 176 ] * xx [
329 ] + xx [ 57 ] * xx [ 330 ] + xx [ 280 ] * xx [ 331 ] ; xx [ 308 ] = xx [
142 ] - ( xx [ 125 ] * xx [ 326 ] + xx [ 51 ] * xx [ 327 ] + xx [ 291 ] * xx
[ 328 ] ) + xx [ 143 ] ; xx [ 309 ] = xx [ 157 ] - xx [ 225 ] ; xx [ 310 ] =
xx [ 159 ] - xx [ 226 ] ; xx [ 311 ] = xx [ 161 ] - xx [ 225 ] ; xx [ 312 ] =
xx [ 164 ] - ( xx [ 174 ] * xx [ 329 ] + xx [ 54 ] * xx [ 330 ] + xx [ 292 ]
* xx [ 331 ] ) + xx [ 163 ] ; xx [ 313 ] = xx [ 165 ] - xx [ 227 ] ; xx [ 314
] = xx [ 167 ] - xx [ 226 ] ; xx [ 315 ] = xx [ 169 ] - xx [ 227 ] ; xx [ 316
] = xx [ 172 ] - ( xx [ 176 ] * xx [ 332 ] + xx [ 57 ] * xx [ 333 ] + xx [
280 ] * xx [ 334 ] ) + xx [ 171 ] ; pm_math_Matrix3x3_composeTranspose_ra (
xx + 308 , xx + 88 , xx + 317 ) ; pm_math_Matrix3x3_compose_ra ( xx + 88 , xx
+ 317 , xx + 308 ) ; xx [ 317 ] = xx [ 79 ] - ( xx [ 125 ] * xx [ 335 ] + xx
[ 51 ] * xx [ 336 ] + xx [ 291 ] * xx [ 337 ] ) ; xx [ 318 ] = xx [ 117 ] - (
xx [ 125 ] * xx [ 338 ] + xx [ 51 ] * xx [ 339 ] + xx [ 291 ] * xx [ 340 ] )
; xx [ 319 ] = xx [ 120 ] - ( xx [ 125 ] * xx [ 341 ] + xx [ 51 ] * xx [ 342
] + xx [ 291 ] * xx [ 343 ] ) ; xx [ 320 ] = xx [ 123 ] - ( xx [ 174 ] * xx [
335 ] + xx [ 54 ] * xx [ 336 ] + xx [ 292 ] * xx [ 337 ] ) ; xx [ 321 ] = xx
[ 118 ] - ( xx [ 174 ] * xx [ 338 ] + xx [ 54 ] * xx [ 339 ] + xx [ 292 ] *
xx [ 340 ] ) ; xx [ 322 ] = xx [ 121 ] - ( xx [ 174 ] * xx [ 341 ] + xx [ 54
] * xx [ 342 ] + xx [ 292 ] * xx [ 343 ] ) ; xx [ 323 ] = xx [ 124 ] - ( xx [
176 ] * xx [ 335 ] + xx [ 57 ] * xx [ 336 ] + xx [ 280 ] * xx [ 337 ] ) ; xx
[ 324 ] = xx [ 119 ] - ( xx [ 176 ] * xx [ 338 ] + xx [ 57 ] * xx [ 339 ] +
xx [ 280 ] * xx [ 340 ] ) ; xx [ 325 ] = xx [ 122 ] - ( xx [ 176 ] * xx [ 341
] + xx [ 57 ] * xx [ 342 ] + xx [ 280 ] * xx [ 343 ] ) ;
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
246 ] = xx [ 50 ] * xx [ 52 ] + xx [ 53 ] ; xx [ 256 ] = xx [ 245 ] ; xx [
257 ] = xx [ 55 ] ; xx [ 258 ] = - xx [ 246 ] ; pm_math_Vector3_cross_ra ( xx
+ 225 , xx + 256 , xx + 261 ) ; xx [ 225 ] = xx [ 0 ] + ( xx [ 261 ] - xx [
245 ] * xx [ 31 ] ) * xx [ 11 ] ; xx [ 226 ] = xx [ 11 ] * ( xx [ 262 ] - xx
[ 56 ] ) - xx [ 50 ] ; xx [ 50 ] = xx [ 11 ] * ( xx [ 263 ] + xx [ 31 ] * xx
[ 246 ] ) ; xx [ 256 ] = xx [ 225 ] ; xx [ 257 ] = xx [ 226 ] ; xx [ 258 ] =
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
+ 256 , xx + 294 ) ; xx [ 246 ] = 8.355848350904705e-3 ; xx [ 317 ] = xx [
246 ] + xx [ 353 ] ; xx [ 318 ] = xx [ 354 ] ; xx [ 319 ] = xx [ 355 ] ; xx [
320 ] = xx [ 356 ] ; xx [ 321 ] = xx [ 246 ] + xx [ 357 ] ; xx [ 322 ] = xx [
358 ] ; xx [ 323 ] = xx [ 359 ] ; xx [ 324 ] = xx [ 360 ] ; xx [ 325 ] = xx [
246 ] + xx [ 361 ] ; pm_math_Matrix3x3_xform_ra ( xx + 317 , xx + 288 , xx +
344 ) ; xx [ 297 ] = xx [ 294 ] + xx [ 344 ] ; xx [ 298 ] = xx [ 295 ] + xx [
345 ] ; xx [ 294 ] = xx [ 296 ] + xx [ 346 ] ; xx [ 344 ] = xx [ 297 ] ; xx [
345 ] = xx [ 298 ] ; xx [ 346 ] = xx [ 294 ] ; xx [ 295 ] = xx [ 49 ] * xx [
26 ] ; xx [ 296 ] = xx [ 48 ] * xx [ 37 ] ; xx [ 347 ] = xx [ 295 ] + xx [
296 ] ; xx [ 348 ] = xx [ 36 ] * xx [ 26 ] ; xx [ 349 ] = xx [ 36 ] * xx [ 37
] ; xx [ 350 ] = xx [ 348 ] * xx [ 26 ] + xx [ 349 ] * xx [ 37 ] ; xx [ 351 ]
= xx [ 11 ] * ( xx [ 29 ] * xx [ 347 ] + xx [ 350 ] ) - xx [ 36 ] ; xx [ 352
] = xx [ 29 ] * xx [ 349 ] ; xx [ 349 ] = xx [ 48 ] + ( xx [ 352 ] - xx [ 37
] * xx [ 347 ] ) * xx [ 11 ] ; xx [ 362 ] = xx [ 29 ] * xx [ 348 ] ; xx [ 348
] = xx [ 49 ] + ( xx [ 362 ] - xx [ 26 ] * xx [ 347 ] ) * xx [ 11 ] ; xx [
363 ] = xx [ 351 ] ; xx [ 364 ] = xx [ 349 ] ; xx [ 365 ] = - xx [ 348 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 231 , xx + 363 , xx + 366 ) ;
pm_math_Vector3_cross_ra ( xx + 274 , xx + 363 , xx + 369 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 308 , xx + 369 , xx + 372 ) ; xx [ 347 ] =
xx [ 366 ] + xx [ 372 ] ; xx [ 375 ] = xx [ 367 ] + xx [ 373 ] ; xx [ 366 ] =
xx [ 368 ] + xx [ 374 ] ; xx [ 372 ] = xx [ 347 ] ; xx [ 373 ] = xx [ 375 ] ;
xx [ 374 ] = xx [ 366 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 308 , xx
+ 363 , xx + 376 ) ; pm_math_Matrix3x3_xform_ra ( xx + 317 , xx + 369 , xx +
379 ) ; xx [ 367 ] = xx [ 376 ] + xx [ 379 ] ; xx [ 368 ] = xx [ 377 ] + xx [
380 ] ; xx [ 376 ] = xx [ 378 ] + xx [ 381 ] ; xx [ 377 ] = xx [ 367 ] ; xx [
378 ] = xx [ 368 ] ; xx [ 379 ] = xx [ 376 ] ; xx [ 380 ] =
pm_math_Vector3_dot_ra ( xx + 256 , xx + 372 ) + pm_math_Vector3_dot_ra ( xx
+ 288 , xx + 377 ) ; xx [ 381 ] = 0.0139587874710942 ; xx [ 382 ] =
3.287582437116741e-14 ; xx [ 383 ] = 1.135158784431775e-14 ; xx [ 384 ] = xx
[ 381 ] ; xx [ 385 ] = xx [ 382 ] ; xx [ 386 ] = - xx [ 383 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 308 , xx + 384 , xx + 387 ) ; xx [ 390 ] =
xx [ 49 ] * xx [ 124 ] + xx [ 48 ] * xx [ 142 ] + xx [ 387 ] ; xx [ 391 ] =
xx [ 161 ] * xx [ 49 ] + xx [ 48 ] * xx [ 164 ] + xx [ 388 ] ; xx [ 387 ] =
xx [ 49 ] * xx [ 167 ] + xx [ 172 ] * xx [ 48 ] + xx [ 389 ] ; xx [ 392 ] =
xx [ 390 ] ; xx [ 393 ] = xx [ 391 ] ; xx [ 394 ] = xx [ 387 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 317 , xx + 384 , xx + 395 ) ; xx [ 388 ] =
xx [ 49 ] * xx [ 94 ] + xx [ 48 ] * xx [ 95 ] + xx [ 395 ] ; xx [ 389 ] = xx
[ 49 ] * xx [ 89 ] + xx [ 48 ] * xx [ 90 ] + xx [ 396 ] ; xx [ 395 ] = xx [
49 ] * xx [ 92 ] + xx [ 48 ] * xx [ 93 ] + xx [ 397 ] ; xx [ 396 ] = xx [ 388
] ; xx [ 397 ] = xx [ 389 ] ; xx [ 398 ] = xx [ 395 ] ; xx [ 399 ] =
pm_math_Vector3_dot_ra ( xx + 256 , xx + 392 ) + pm_math_Vector3_dot_ra ( xx
+ 288 , xx + 396 ) ; xx [ 400 ] = pm_math_Vector3_dot_ra ( xx + 363 , xx +
392 ) + pm_math_Vector3_dot_ra ( xx + 369 , xx + 396 ) ; xx [ 401 ] =
pm_math_Vector3_dot_ra ( xx + 256 , xx + 261 ) + pm_math_Vector3_dot_ra ( xx
+ 288 , xx + 344 ) ; xx [ 402 ] = xx [ 380 ] ; xx [ 403 ] = xx [ 399 ] ; xx [
404 ] = xx [ 380 ] ; xx [ 405 ] = pm_math_Vector3_dot_ra ( xx + 363 , xx +
372 ) + pm_math_Vector3_dot_ra ( xx + 369 , xx + 377 ) ; xx [ 406 ] = xx [
400 ] ; xx [ 407 ] = xx [ 399 ] ; xx [ 408 ] = xx [ 400 ] ; xx [ 409 ] = xx [
391 ] * xx [ 49 ] + xx [ 387 ] * xx [ 48 ] + pm_math_Vector3_dot_ra ( xx +
384 , xx + 396 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 401 , 3 , xx + 261
) ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 13 ] ) ) > xx [ 128 ] ;
ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L3/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L3/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 410 ] = xx [ 96 ] ; xx [ 411 ] = xx [ 347 ] ; xx [ 412
] = xx [ 390 ] ; xx [ 413 ] = xx [ 227 ] ; xx [ 414 ] = xx [ 375 ] ; xx [ 415
] = xx [ 391 ] ; xx [ 416 ] = xx [ 245 ] ; xx [ 417 ] = xx [ 366 ] ; xx [ 418
] = xx [ 387 ] ; xx [ 419 ] = xx [ 297 ] ; xx [ 420 ] = xx [ 367 ] ; xx [ 421
] = xx [ 388 ] ; xx [ 422 ] = xx [ 298 ] ; xx [ 423 ] = xx [ 368 ] ; xx [ 424
] = xx [ 389 ] ; xx [ 425 ] = xx [ 294 ] ; xx [ 426 ] = xx [ 376 ] ; xx [ 427
] = xx [ 395 ] ; solveSymmetricPosDef ( xx + 401 , xx + 410 , 3 , 6 , xx +
428 , xx + 261 ) ; xx [ 261 ] = xx [ 227 ] * xx [ 428 ] + xx [ 375 ] * xx [
429 ] + xx [ 391 ] * xx [ 430 ] ; xx [ 262 ] = xx [ 245 ] * xx [ 428 ] + xx [
366 ] * xx [ 429 ] + xx [ 387 ] * xx [ 430 ] ; xx [ 263 ] = xx [ 245 ] * xx [
431 ] + xx [ 366 ] * xx [ 432 ] + xx [ 387 ] * xx [ 433 ] ; xx [ 410 ] = xx [
118 ] - ( xx [ 96 ] * xx [ 428 ] + xx [ 347 ] * xx [ 429 ] + xx [ 390 ] * xx
[ 430 ] ) + xx [ 119 ] ; xx [ 411 ] = xx [ 124 ] - xx [ 261 ] ; xx [ 412 ] =
xx [ 142 ] - xx [ 262 ] ; xx [ 413 ] = xx [ 157 ] - xx [ 261 ] ; xx [ 414 ] =
xx [ 161 ] - ( xx [ 227 ] * xx [ 431 ] + xx [ 375 ] * xx [ 432 ] + xx [ 391 ]
* xx [ 433 ] ) ; xx [ 415 ] = xx [ 164 ] - xx [ 263 ] ; xx [ 416 ] = xx [ 165
] - xx [ 262 ] ; xx [ 417 ] = xx [ 167 ] - xx [ 263 ] ; xx [ 418 ] = xx [ 172
] - ( xx [ 245 ] * xx [ 434 ] + xx [ 366 ] * xx [ 435 ] + xx [ 387 ] * xx [
436 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 410 , xx + 61 , xx +
419 ) ; pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 419 , xx + 410 ) ; xx [
419 ] = xx [ 56 ] - ( xx [ 96 ] * xx [ 437 ] + xx [ 347 ] * xx [ 438 ] + xx [
390 ] * xx [ 439 ] ) ; xx [ 420 ] = xx [ 88 ] - ( xx [ 96 ] * xx [ 440 ] + xx
[ 347 ] * xx [ 441 ] + xx [ 390 ] * xx [ 442 ] ) ; xx [ 421 ] = xx [ 91 ] - (
xx [ 96 ] * xx [ 443 ] + xx [ 347 ] * xx [ 444 ] + xx [ 390 ] * xx [ 445 ] )
; xx [ 422 ] = xx [ 94 ] - ( xx [ 227 ] * xx [ 437 ] + xx [ 375 ] * xx [ 438
] + xx [ 391 ] * xx [ 439 ] ) ; xx [ 423 ] = xx [ 89 ] - ( xx [ 227 ] * xx [
440 ] + xx [ 375 ] * xx [ 441 ] + xx [ 391 ] * xx [ 442 ] ) ; xx [ 424 ] = xx
[ 92 ] - ( xx [ 227 ] * xx [ 443 ] + xx [ 375 ] * xx [ 444 ] + xx [ 391 ] *
xx [ 445 ] ) ; xx [ 425 ] = xx [ 95 ] - ( xx [ 245 ] * xx [ 437 ] + xx [ 366
] * xx [ 438 ] + xx [ 387 ] * xx [ 439 ] ) ; xx [ 426 ] = xx [ 90 ] - ( xx [
245 ] * xx [ 440 ] + xx [ 366 ] * xx [ 441 ] + xx [ 387 ] * xx [ 442 ] ) ; xx
[ 427 ] = xx [ 93 ] - ( xx [ 245 ] * xx [ 443 ] + xx [ 366 ] * xx [ 444 ] +
xx [ 387 ] * xx [ 445 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 419
, xx + 61 , xx + 446 ) ; pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 446 ,
xx + 419 ) ; xx [ 88 ] = xx [ 31 ] ; xx [ 89 ] = xx [ 52 ] ; xx [ 90 ] = xx [
53 ] ; xx [ 91 ] = xx [ 55 ] ; pm_math_Quaternion_xform_ra ( xx + 88 , xx +
274 , xx + 92 ) ; xx [ 31 ] = 1.222885353421585e-13 - xx [ 92 ] ; xx [ 52 ] =
0.01371330802384472 - xx [ 93 ] ; xx [ 53 ] = 0.01482112808326479 - xx [ 94 ]
; xx [ 92 ] = xx [ 31 ] ; xx [ 93 ] = xx [ 52 ] ; xx [ 94 ] = xx [ 53 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 419 , xx + 92 , xx + 446 ) ; xx [ 55 ]
= xx [ 298 ] * xx [ 437 ] + xx [ 368 ] * xx [ 438 ] + xx [ 389 ] * xx [ 439 ]
; xx [ 56 ] = xx [ 294 ] * xx [ 437 ] + xx [ 376 ] * xx [ 438 ] + xx [ 395 ]
* xx [ 439 ] ; xx [ 95 ] = xx [ 294 ] * xx [ 440 ] + xx [ 376 ] * xx [ 441 ]
+ xx [ 395 ] * xx [ 442 ] ; xx [ 455 ] = xx [ 353 ] - ( xx [ 297 ] * xx [ 437
] + xx [ 367 ] * xx [ 438 ] + xx [ 388 ] * xx [ 439 ] ) + xx [ 246 ] ; xx [
456 ] = xx [ 354 ] - xx [ 55 ] ; xx [ 457 ] = xx [ 355 ] - xx [ 56 ] ; xx [
458 ] = xx [ 356 ] - xx [ 55 ] ; xx [ 459 ] = xx [ 357 ] - ( xx [ 298 ] * xx
[ 440 ] + xx [ 368 ] * xx [ 441 ] + xx [ 389 ] * xx [ 442 ] ) + xx [ 246 ] ;
xx [ 460 ] = xx [ 358 ] - xx [ 95 ] ; xx [ 461 ] = xx [ 359 ] - xx [ 56 ] ;
xx [ 462 ] = xx [ 360 ] - xx [ 95 ] ; xx [ 463 ] = xx [ 361 ] - ( xx [ 294 ]
* xx [ 443 ] + xx [ 376 ] * xx [ 444 ] + xx [ 395 ] * xx [ 445 ] ) + xx [ 246
] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 455 , xx + 61 , xx + 353 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 61 , xx + 353 , xx + 455 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 455 , xx + 92 , xx + 61 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 61 , xx + 92 , xx + 353 ) ; xx [ 55 ] =
xx [ 410 ] - xx [ 446 ] - xx [ 446 ] - xx [ 353 ] ; xx [ 56 ] =
2.872594976382685e-6 ; xx [ 95 ] = xx [ 411 ] - xx [ 447 ] - xx [ 449 ] - xx
[ 354 ] ; xx [ 118 ] = xx [ 412 ] - xx [ 448 ] - xx [ 452 ] - xx [ 355 ] ; xx
[ 124 ] = xx [ 413 ] - xx [ 449 ] - xx [ 447 ] - xx [ 356 ] ; xx [ 142 ] =
1.933045481959352e-6 ; xx [ 157 ] = xx [ 142 ] + xx [ 414 ] - xx [ 450 ] - xx
[ 450 ] - xx [ 357 ] ; xx [ 161 ] = xx [ 415 ] - xx [ 451 ] - xx [ 453 ] - xx
[ 358 ] ; xx [ 164 ] = xx [ 416 ] - xx [ 452 ] - xx [ 448 ] - xx [ 359 ] ; xx
[ 165 ] = xx [ 417 ] - xx [ 453 ] - xx [ 451 ] - xx [ 360 ] ; xx [ 167 ] =
3.740002603775385e-6 ; xx [ 172 ] = xx [ 167 ] + xx [ 418 ] - xx [ 454 ] - xx
[ 454 ] - xx [ 361 ] ; xx [ 353 ] = xx [ 56 ] + xx [ 55 ] ; xx [ 354 ] = xx [
95 ] ; xx [ 355 ] = xx [ 118 ] ; xx [ 356 ] = xx [ 124 ] ; xx [ 357 ] = xx [
157 ] ; xx [ 358 ] = xx [ 161 ] ; xx [ 359 ] = xx [ 164 ] ; xx [ 360 ] = xx [
165 ] ; xx [ 361 ] = xx [ 172 ] ; xx [ 246 ] = xx [ 0 ] - ( xx [ 35 ] + xx [
38 ] ) * xx [ 11 ] ; xx [ 35 ] = ( xx [ 34 ] + xx [ 33 ] ) * xx [ 11 ] ; xx [
261 ] = xx [ 246 ] ; xx [ 262 ] = xx [ 32 ] ; xx [ 263 ] = xx [ 35 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 353 , xx + 261 , xx + 344 ) ; xx [ 33 ] =
xx [ 419 ] - xx [ 61 ] ; xx [ 34 ] = xx [ 420 ] - xx [ 64 ] ; xx [ 38 ] = xx
[ 421 ] - xx [ 67 ] ; xx [ 61 ] = xx [ 422 ] - xx [ 62 ] ; xx [ 62 ] = xx [
423 ] - xx [ 65 ] ; xx [ 64 ] = xx [ 424 ] - xx [ 68 ] ; xx [ 65 ] = xx [ 425
] - xx [ 63 ] ; xx [ 63 ] = xx [ 426 ] - xx [ 66 ] ; xx [ 66 ] = xx [ 427 ] -
xx [ 69 ] ; xx [ 410 ] = xx [ 33 ] ; xx [ 411 ] = xx [ 34 ] ; xx [ 412 ] = xx
[ 38 ] ; xx [ 413 ] = xx [ 61 ] ; xx [ 414 ] = xx [ 62 ] ; xx [ 415 ] = xx [
64 ] ; xx [ 416 ] = xx [ 65 ] ; xx [ 417 ] = xx [ 63 ] ; xx [ 418 ] = xx [ 66
] ; xx [ 67 ] = 6.664202092713185e-14 ; xx [ 68 ] = 6.161981679940124e-3 ; xx
[ 69 ] = - 0.01687376340899878 ; pm_math_Vector3_cross_ra ( xx + 67 , xx +
261 , xx + 372 ) ; pm_math_Matrix3x3_xform_ra ( xx + 410 , xx + 372 , xx +
377 ) ; xx [ 380 ] = xx [ 344 ] + xx [ 377 ] ; xx [ 392 ] = xx [ 345 ] + xx [
378 ] ; xx [ 344 ] = xx [ 346 ] + xx [ 379 ] ; xx [ 377 ] = xx [ 380 ] ; xx [
378 ] = xx [ 392 ] ; xx [ 379 ] = xx [ 344 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 410 , xx + 261 , xx + 396 ) ; xx [
345 ] = 8.201635464916061e-3 ; xx [ 419 ] = xx [ 345 ] + xx [ 455 ] ; xx [
420 ] = xx [ 456 ] ; xx [ 421 ] = xx [ 457 ] ; xx [ 422 ] = xx [ 458 ] ; xx [
423 ] = xx [ 345 ] + xx [ 459 ] ; xx [ 424 ] = xx [ 460 ] ; xx [ 425 ] = xx [
461 ] ; xx [ 426 ] = xx [ 462 ] ; xx [ 427 ] = xx [ 345 ] + xx [ 463 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 419 , xx + 372 , xx + 446 ) ; xx [ 346 ] =
xx [ 396 ] + xx [ 446 ] ; xx [ 393 ] = xx [ 397 ] + xx [ 447 ] ; xx [ 394 ] =
xx [ 398 ] + xx [ 448 ] ; xx [ 396 ] = xx [ 346 ] ; xx [ 397 ] = xx [ 393 ] ;
xx [ 398 ] = xx [ 394 ] ; xx [ 399 ] = xx [ 25 ] * xx [ 19 ] ; xx [ 400 ] =
xx [ 24 ] * xx [ 23 ] ; xx [ 446 ] = xx [ 399 ] + xx [ 400 ] ; xx [ 447 ] =
xx [ 22 ] * xx [ 19 ] ; xx [ 448 ] = xx [ 22 ] * xx [ 23 ] ; xx [ 449 ] = xx
[ 447 ] * xx [ 19 ] + xx [ 448 ] * xx [ 23 ] ; xx [ 450 ] = xx [ 22 ] + xx [
11 ] * ( xx [ 20 ] * xx [ 446 ] - xx [ 449 ] ) ; xx [ 451 ] = xx [ 20 ] * xx
[ 448 ] ; xx [ 448 ] = xx [ 24 ] - ( xx [ 451 ] + xx [ 23 ] * xx [ 446 ] ) *
xx [ 11 ] ; xx [ 452 ] = xx [ 20 ] * xx [ 447 ] ; xx [ 447 ] = ( xx [ 452 ] +
xx [ 19 ] * xx [ 446 ] ) * xx [ 11 ] - xx [ 25 ] ; xx [ 464 ] = xx [ 450 ] ;
xx [ 465 ] = xx [ 448 ] ; xx [ 466 ] = xx [ 447 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 353 , xx + 464 , xx + 467 ) ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 464 , xx + 470 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 410 , xx + 470 , xx + 473 ) ; xx [ 446 ] =
xx [ 467 ] + xx [ 473 ] ; xx [ 453 ] = xx [ 468 ] + xx [ 474 ] ; xx [ 454 ] =
xx [ 469 ] + xx [ 475 ] ; xx [ 467 ] = xx [ 446 ] ; xx [ 468 ] = xx [ 453 ] ;
xx [ 469 ] = xx [ 454 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 410 , xx
+ 464 , xx + 473 ) ; pm_math_Matrix3x3_xform_ra ( xx + 419 , xx + 470 , xx +
476 ) ; xx [ 479 ] = xx [ 473 ] + xx [ 476 ] ; xx [ 480 ] = xx [ 474 ] + xx [
477 ] ; xx [ 473 ] = xx [ 475 ] + xx [ 478 ] ; xx [ 474 ] = xx [ 479 ] ; xx [
475 ] = xx [ 480 ] ; xx [ 476 ] = xx [ 473 ] ; xx [ 477 ] =
pm_math_Vector3_dot_ra ( xx + 261 , xx + 467 ) + pm_math_Vector3_dot_ra ( xx
+ 372 , xx + 474 ) ; xx [ 478 ] = 0.01011063572343469 ; xx [ 481 ] =
6.460835926211764e-14 ; xx [ 482 ] = 1.633765181136557e-14 ; xx [ 483 ] = xx
[ 478 ] ; xx [ 484 ] = - xx [ 481 ] ; xx [ 485 ] = xx [ 482 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 410 , xx + 483 , xx + 486 ) ; xx [ 489 ] =
xx [ 25 ] * xx [ 95 ] + xx [ 24 ] * xx [ 118 ] + xx [ 486 ] ; xx [ 490 ] = xx
[ 157 ] * xx [ 25 ] + xx [ 24 ] * xx [ 161 ] + xx [ 487 ] ; xx [ 486 ] = xx [
25 ] * xx [ 165 ] + xx [ 172 ] * xx [ 24 ] + xx [ 488 ] ; xx [ 491 ] = xx [
489 ] ; xx [ 492 ] = xx [ 490 ] ; xx [ 493 ] = xx [ 486 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 419 , xx + 483 , xx + 494 ) ; xx [ 487 ] =
xx [ 25 ] * xx [ 61 ] + xx [ 24 ] * xx [ 65 ] + xx [ 494 ] ; xx [ 488 ] = xx
[ 25 ] * xx [ 62 ] + xx [ 24 ] * xx [ 63 ] + xx [ 495 ] ; xx [ 494 ] = xx [
25 ] * xx [ 64 ] + xx [ 24 ] * xx [ 66 ] + xx [ 496 ] ; xx [ 495 ] = xx [ 487
] ; xx [ 496 ] = xx [ 488 ] ; xx [ 497 ] = xx [ 494 ] ; xx [ 498 ] =
pm_math_Vector3_dot_ra ( xx + 261 , xx + 491 ) + pm_math_Vector3_dot_ra ( xx
+ 372 , xx + 495 ) ; xx [ 499 ] = pm_math_Vector3_dot_ra ( xx + 464 , xx +
491 ) + pm_math_Vector3_dot_ra ( xx + 470 , xx + 495 ) ; xx [ 500 ] =
pm_math_Vector3_dot_ra ( xx + 261 , xx + 377 ) + pm_math_Vector3_dot_ra ( xx
+ 372 , xx + 396 ) ; xx [ 501 ] = xx [ 477 ] ; xx [ 502 ] = xx [ 498 ] ; xx [
503 ] = xx [ 477 ] ; xx [ 504 ] = pm_math_Vector3_dot_ra ( xx + 464 , xx +
467 ) + pm_math_Vector3_dot_ra ( xx + 470 , xx + 474 ) ; xx [ 505 ] = xx [
499 ] ; xx [ 506 ] = xx [ 498 ] ; xx [ 507 ] = xx [ 499 ] ; xx [ 508 ] = xx [
490 ] * xx [ 25 ] + xx [ 486 ] * xx [ 24 ] + pm_math_Vector3_dot_ra ( xx +
483 , xx + 495 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 500 , 3 , xx + 377
) ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 7 ] ) ) > xx [ 128 ] ;
ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L4/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L4/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 509 ] = xx [ 380 ] ; xx [ 510 ] = xx [ 446 ] ; xx [
511 ] = xx [ 489 ] ; xx [ 512 ] = xx [ 392 ] ; xx [ 513 ] = xx [ 453 ] ; xx [
514 ] = xx [ 490 ] ; xx [ 515 ] = xx [ 344 ] ; xx [ 516 ] = xx [ 454 ] ; xx [
517 ] = xx [ 486 ] ; xx [ 518 ] = xx [ 346 ] ; xx [ 519 ] = xx [ 479 ] ; xx [
520 ] = xx [ 487 ] ; xx [ 521 ] = xx [ 393 ] ; xx [ 522 ] = xx [ 480 ] ; xx [
523 ] = xx [ 488 ] ; xx [ 524 ] = xx [ 394 ] ; xx [ 525 ] = xx [ 473 ] ; xx [
526 ] = xx [ 494 ] ; solveSymmetricPosDef ( xx + 500 , xx + 509 , 3 , 6 , xx
+ 527 , xx + 377 ) ; xx [ 377 ] = xx [ 392 ] * xx [ 527 ] + xx [ 453 ] * xx [
528 ] + xx [ 490 ] * xx [ 529 ] ; xx [ 378 ] = xx [ 344 ] * xx [ 527 ] + xx [
454 ] * xx [ 528 ] + xx [ 486 ] * xx [ 529 ] ; xx [ 379 ] = xx [ 344 ] * xx [
530 ] + xx [ 454 ] * xx [ 531 ] + xx [ 486 ] * xx [ 532 ] ; xx [ 509 ] = xx [
55 ] - ( xx [ 380 ] * xx [ 527 ] + xx [ 446 ] * xx [ 528 ] + xx [ 489 ] * xx
[ 529 ] ) + xx [ 56 ] ; xx [ 510 ] = xx [ 95 ] - xx [ 377 ] ; xx [ 511 ] = xx
[ 118 ] - xx [ 378 ] ; xx [ 512 ] = xx [ 124 ] - xx [ 377 ] ; xx [ 513 ] = xx
[ 157 ] - ( xx [ 392 ] * xx [ 530 ] + xx [ 453 ] * xx [ 531 ] + xx [ 490 ] *
xx [ 532 ] ) ; xx [ 514 ] = xx [ 161 ] - xx [ 379 ] ; xx [ 515 ] = xx [ 164 ]
- xx [ 378 ] ; xx [ 516 ] = xx [ 165 ] - xx [ 379 ] ; xx [ 517 ] = xx [ 172 ]
- ( xx [ 344 ] * xx [ 533 ] + xx [ 454 ] * xx [ 534 ] + xx [ 486 ] * xx [ 535
] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 509 , xx + 39 , xx + 518 )
; pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 518 , xx + 509 ) ; xx [ 518 ]
= xx [ 33 ] - ( xx [ 380 ] * xx [ 536 ] + xx [ 446 ] * xx [ 537 ] + xx [ 489
] * xx [ 538 ] ) ; xx [ 519 ] = xx [ 34 ] - ( xx [ 380 ] * xx [ 539 ] + xx [
446 ] * xx [ 540 ] + xx [ 489 ] * xx [ 541 ] ) ; xx [ 520 ] = xx [ 38 ] - (
xx [ 380 ] * xx [ 542 ] + xx [ 446 ] * xx [ 543 ] + xx [ 489 ] * xx [ 544 ] )
; xx [ 521 ] = xx [ 61 ] - ( xx [ 392 ] * xx [ 536 ] + xx [ 453 ] * xx [ 537
] + xx [ 490 ] * xx [ 538 ] ) ; xx [ 522 ] = xx [ 62 ] - ( xx [ 392 ] * xx [
539 ] + xx [ 453 ] * xx [ 540 ] + xx [ 490 ] * xx [ 541 ] ) ; xx [ 523 ] = xx
[ 64 ] - ( xx [ 392 ] * xx [ 542 ] + xx [ 453 ] * xx [ 543 ] + xx [ 490 ] *
xx [ 544 ] ) ; xx [ 524 ] = xx [ 65 ] - ( xx [ 344 ] * xx [ 536 ] + xx [ 454
] * xx [ 537 ] + xx [ 486 ] * xx [ 538 ] ) ; xx [ 525 ] = xx [ 63 ] - ( xx [
344 ] * xx [ 539 ] + xx [ 454 ] * xx [ 540 ] + xx [ 486 ] * xx [ 541 ] ) ; xx
[ 526 ] = xx [ 66 ] - ( xx [ 344 ] * xx [ 542 ] + xx [ 454 ] * xx [ 543 ] +
xx [ 486 ] * xx [ 544 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 518
, xx + 39 , xx + 545 ) ; pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 545 ,
xx + 518 ) ; xx [ 61 ] = xx [ 21 ] ; xx [ 62 ] = xx [ 27 ] ; xx [ 63 ] = xx [
28 ] ; xx [ 64 ] = xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 61 , xx +
67 , xx + 377 ) ; xx [ 21 ] = 0.01018286292250497 - xx [ 378 ] ; xx [ 27 ] =
0.01643121746247235 - xx [ 379 ] ; xx [ 396 ] = - xx [ 377 ] ; xx [ 397 ] =
xx [ 21 ] ; xx [ 398 ] = xx [ 27 ] ; pm_math_Matrix3x3_postCross_ra ( xx +
518 , xx + 396 , xx + 545 ) ; xx [ 28 ] = xx [ 393 ] * xx [ 536 ] + xx [ 480
] * xx [ 537 ] + xx [ 488 ] * xx [ 538 ] ; xx [ 30 ] = xx [ 394 ] * xx [ 536
] + xx [ 473 ] * xx [ 537 ] + xx [ 494 ] * xx [ 538 ] ; xx [ 33 ] = xx [ 394
] * xx [ 539 ] + xx [ 473 ] * xx [ 540 ] + xx [ 494 ] * xx [ 541 ] ; xx [ 554
] = xx [ 455 ] - ( xx [ 346 ] * xx [ 536 ] + xx [ 479 ] * xx [ 537 ] + xx [
487 ] * xx [ 538 ] ) + xx [ 345 ] ; xx [ 555 ] = xx [ 456 ] - xx [ 28 ] ; xx
[ 556 ] = xx [ 457 ] - xx [ 30 ] ; xx [ 557 ] = xx [ 458 ] - xx [ 28 ] ; xx [
558 ] = xx [ 459 ] - ( xx [ 393 ] * xx [ 539 ] + xx [ 480 ] * xx [ 540 ] + xx
[ 488 ] * xx [ 541 ] ) + xx [ 345 ] ; xx [ 559 ] = xx [ 460 ] - xx [ 33 ] ;
xx [ 560 ] = xx [ 461 ] - xx [ 30 ] ; xx [ 561 ] = xx [ 462 ] - xx [ 33 ] ;
xx [ 562 ] = xx [ 463 ] - ( xx [ 394 ] * xx [ 542 ] + xx [ 473 ] * xx [ 543 ]
+ xx [ 494 ] * xx [ 544 ] ) + xx [ 345 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 554 , xx + 39 , xx + 455 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 39 , xx + 455 , xx + 554 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 554 , xx + 396 , xx + 38 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 38 , xx + 396 , xx + 455 ) ; xx [ 28 ] =
xx [ 510 ] - xx [ 546 ] - xx [ 548 ] - xx [ 456 ] ; xx [ 30 ] = xx [ 511 ] -
xx [ 547 ] - xx [ 551 ] - xx [ 457 ] ; xx [ 33 ] = 3.490126909650324e-6 ; xx
[ 34 ] = xx [ 33 ] + xx [ 513 ] - xx [ 549 ] - xx [ 549 ] - xx [ 459 ] ; xx [
47 ] = xx [ 514 ] - xx [ 550 ] - xx [ 552 ] - xx [ 460 ] ; xx [ 55 ] = xx [
516 ] - xx [ 552 ] - xx [ 550 ] - xx [ 462 ] ; xx [ 65 ] =
5.069554565459512e-6 ; xx [ 66 ] = xx [ 65 ] + xx [ 517 ] - xx [ 553 ] - xx [
553 ] - xx [ 463 ] ; xx [ 563 ] = xx [ 18 ] + xx [ 509 ] - xx [ 545 ] - xx [
545 ] - xx [ 455 ] ; xx [ 564 ] = xx [ 28 ] ; xx [ 565 ] = xx [ 30 ] ; xx [
566 ] = xx [ 512 ] - xx [ 548 ] - xx [ 546 ] - xx [ 458 ] ; xx [ 567 ] = xx [
34 ] ; xx [ 568 ] = xx [ 47 ] ; xx [ 569 ] = xx [ 515 ] - xx [ 551 ] - xx [
547 ] - xx [ 461 ] ; xx [ 570 ] = xx [ 55 ] ; xx [ 571 ] = xx [ 66 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 563 , xx + 15 , xx + 455 ) ; xx [ 95 ] = xx
[ 518 ] - xx [ 38 ] ; xx [ 38 ] = xx [ 521 ] - xx [ 39 ] ; xx [ 39 ] = xx [
522 ] - xx [ 42 ] ; xx [ 42 ] = xx [ 523 ] - xx [ 45 ] ; xx [ 45 ] = xx [ 524
] - xx [ 40 ] ; xx [ 40 ] = xx [ 525 ] - xx [ 43 ] ; xx [ 43 ] = xx [ 526 ] -
xx [ 46 ] ; xx [ 509 ] = xx [ 95 ] ; xx [ 510 ] = xx [ 519 ] - xx [ 41 ] ; xx
[ 511 ] = xx [ 520 ] - xx [ 44 ] ; xx [ 512 ] = xx [ 38 ] ; xx [ 513 ] = xx [
39 ] ; xx [ 514 ] = xx [ 42 ] ; xx [ 515 ] = xx [ 45 ] ; xx [ 516 ] = xx [ 40
] ; xx [ 517 ] = xx [ 43 ] ; xx [ 41 ] = 8.538390167322628e-3 ; xx [ 44 ] =
0.0187094325596859 ; xx [ 46 ] = xx [ 41 ] * xx [ 8 ] + xx [ 44 ] * xx [ 4 ]
; xx [ 118 ] = xx [ 44 ] * xx [ 12 ] ; xx [ 124 ] = xx [ 41 ] * xx [ 12 ] ;
xx [ 458 ] = xx [ 46 ] ; xx [ 459 ] = - xx [ 118 ] ; xx [ 460 ] = - xx [ 124
] ; pm_math_Matrix3x3_xform_ra ( xx + 509 , xx + 458 , xx + 461 ) ; xx [ 157
] = xx [ 455 ] + xx [ 461 ] ; xx [ 161 ] = xx [ 456 ] + xx [ 462 ] ; xx [ 164
] = xx [ 457 ] + xx [ 463 ] ; xx [ 455 ] = xx [ 157 ] ; xx [ 456 ] = xx [ 161
] ; xx [ 457 ] = xx [ 164 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 509
, xx + 15 , xx + 461 ) ; xx [ 165 ] = 9.266435618121707e-3 ; xx [ 172 ] = xx
[ 165 ] + xx [ 554 ] ; xx [ 518 ] = xx [ 172 ] ; xx [ 519 ] = xx [ 555 ] ; xx
[ 520 ] = xx [ 556 ] ; xx [ 521 ] = xx [ 557 ] ; xx [ 522 ] = xx [ 165 ] + xx
[ 558 ] ; xx [ 523 ] = xx [ 559 ] ; xx [ 524 ] = xx [ 560 ] ; xx [ 525 ] = xx
[ 561 ] ; xx [ 526 ] = xx [ 165 ] + xx [ 562 ] ; pm_math_Matrix3x3_xform_ra (
xx + 518 , xx + 458 , xx + 467 ) ; xx [ 165 ] = xx [ 461 ] + xx [ 467 ] ; xx
[ 345 ] = xx [ 462 ] + xx [ 468 ] ; xx [ 378 ] = xx [ 463 ] + xx [ 469 ] ; xx
[ 461 ] = xx [ 165 ] ; xx [ 462 ] = xx [ 345 ] ; xx [ 463 ] = xx [ 378 ] ; xx
[ 379 ] = xx [ 9 ] * xx [ 2 ] ; xx [ 467 ] = xx [ 13 ] * xx [ 7 ] ; xx [ 468
] = xx [ 379 ] + xx [ 467 ] ; xx [ 469 ] = xx [ 11 ] * xx [ 3 ] * xx [ 468 ]
; xx [ 474 ] = xx [ 13 ] - xx [ 11 ] * xx [ 7 ] * xx [ 468 ] ; xx [ 475 ] =
xx [ 11 ] * xx [ 2 ] * xx [ 468 ] - xx [ 9 ] ; xx [ 491 ] = xx [ 469 ] ; xx [
492 ] = xx [ 474 ] ; xx [ 493 ] = xx [ 475 ] ; pm_math_Matrix3x3_xform_ra (
xx + 563 , xx + 491 , xx + 495 ) ; xx [ 468 ] = xx [ 41 ] * xx [ 475 ] + xx [
474 ] * xx [ 44 ] ; xx [ 476 ] = xx [ 44 ] * xx [ 469 ] ; xx [ 477 ] = xx [
41 ] * xx [ 469 ] ; xx [ 545 ] = xx [ 468 ] ; xx [ 546 ] = - xx [ 476 ] ; xx
[ 547 ] = - xx [ 477 ] ; pm_math_Matrix3x3_xform_ra ( xx + 509 , xx + 545 ,
xx + 548 ) ; xx [ 498 ] = xx [ 495 ] + xx [ 548 ] ; xx [ 499 ] = xx [ 496 ] +
xx [ 549 ] ; xx [ 495 ] = xx [ 497 ] + xx [ 550 ] ; xx [ 548 ] = xx [ 498 ] ;
xx [ 549 ] = xx [ 499 ] ; xx [ 550 ] = xx [ 495 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 509 , xx + 491 , xx + 551 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 518 , xx + 545 , xx + 554 ) ; xx [ 496 ] =
xx [ 551 ] + xx [ 554 ] ; xx [ 497 ] = xx [ 552 ] + xx [ 555 ] ; xx [ 551 ] =
xx [ 553 ] + xx [ 556 ] ; xx [ 552 ] = xx [ 496 ] ; xx [ 553 ] = xx [ 497 ] ;
xx [ 554 ] = xx [ 551 ] ; xx [ 555 ] = pm_math_Vector3_dot_ra ( xx + 15 , xx
+ 548 ) + pm_math_Vector3_dot_ra ( xx + 458 , xx + 552 ) ; xx [ 556 ] =
0.01308562271097496 ; xx [ 558 ] = xx [ 9 ] * xx [ 28 ] + xx [ 13 ] * xx [ 30
] + xx [ 556 ] * xx [ 95 ] ; xx [ 28 ] = xx [ 34 ] * xx [ 9 ] + xx [ 13 ] *
xx [ 47 ] + xx [ 556 ] * xx [ 38 ] ; xx [ 30 ] = xx [ 9 ] * xx [ 55 ] + xx [
66 ] * xx [ 13 ] + xx [ 556 ] * xx [ 45 ] ; xx [ 572 ] = xx [ 558 ] ; xx [
573 ] = xx [ 28 ] ; xx [ 574 ] = xx [ 30 ] ; xx [ 34 ] = xx [ 9 ] * xx [ 38 ]
+ xx [ 13 ] * xx [ 45 ] + xx [ 172 ] * xx [ 556 ] ; xx [ 38 ] = xx [ 9 ] * xx
[ 39 ] + xx [ 13 ] * xx [ 40 ] + xx [ 556 ] * xx [ 557 ] ; xx [ 39 ] = xx [ 9
] * xx [ 42 ] + xx [ 13 ] * xx [ 43 ] + xx [ 556 ] * xx [ 560 ] ; xx [ 559 ]
= xx [ 34 ] ; xx [ 560 ] = xx [ 38 ] ; xx [ 561 ] = xx [ 39 ] ; xx [ 40 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 572 ) + pm_math_Vector3_dot_ra ( xx +
458 , xx + 559 ) ; xx [ 42 ] = pm_math_Vector3_dot_ra ( xx + 491 , xx + 572 )
+ pm_math_Vector3_dot_ra ( xx + 545 , xx + 559 ) ; xx [ 572 ] =
pm_math_Vector3_dot_ra ( xx + 15 , xx + 455 ) + pm_math_Vector3_dot_ra ( xx +
458 , xx + 461 ) ; xx [ 573 ] = xx [ 555 ] ; xx [ 574 ] = xx [ 40 ] ; xx [
575 ] = xx [ 555 ] ; xx [ 576 ] = pm_math_Vector3_dot_ra ( xx + 491 , xx +
548 ) + pm_math_Vector3_dot_ra ( xx + 545 , xx + 552 ) ; xx [ 577 ] = xx [ 42
] ; xx [ 578 ] = xx [ 40 ] ; xx [ 579 ] = xx [ 42 ] ; xx [ 580 ] = xx [ 28 ]
* xx [ 9 ] + xx [ 30 ] * xx [ 13 ] + xx [ 34 ] * xx [ 556 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 572 , 3 , xx + 455 ) ; bb [ 0 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 1 ] ) ) > xx [ 128 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ;
if ( bb [ 0 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L5/Gimbal Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L5/Gimbal Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 40 ] = 5.729577951308232 ; xx [ 42 ] =
0.5235987755982988 ; xx [ 43 ] = 0.0 ; xx [ 45 ] = state [ 0 ] + xx [ 42 ] ;
if ( xx [ 43 ] < xx [ 45 ] ) xx [ 45 ] = xx [ 43 ] ; xx [ 47 ] =
1.74532925199433e-3 ; xx [ 55 ] = - ( xx [ 45 ] / xx [ 47 ] ) ; if ( xx [ 0 ]
< xx [ 55 ] ) xx [ 55 ] = xx [ 0 ] ; xx [ 66 ] = 3.0 ; xx [ 95 ] =
5729.577951308232 ; xx [ 128 ] = xx [ 95 ] * state [ 3 ] ; xx [ 172 ] =
5.729577951308232e5 ; xx [ 455 ] = xx [ 55 ] * xx [ 55 ] * ( xx [ 66 ] - xx [
11 ] * xx [ 55 ] ) * ( ( - xx [ 45 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 128 ]
) - xx [ 172 ] * xx [ 45 ] ) ; if ( xx [ 43 ] > xx [ 455 ] ) xx [ 455 ] = xx
[ 43 ] ; xx [ 45 ] = state [ 0 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 45 ] )
xx [ 45 ] = xx [ 43 ] ; xx [ 55 ] = xx [ 45 ] / xx [ 47 ] ; if ( xx [ 0 ] <
xx [ 55 ] ) xx [ 55 ] = xx [ 0 ] ; xx [ 456 ] = ( xx [ 172 ] * xx [ 45 ] + (
xx [ 45 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 128 ] ) ) * xx [ 55 ] * xx [ 55 ] *
( xx [ 66 ] - xx [ 11 ] * xx [ 55 ] ) ; if ( xx [ 43 ] > xx [ 456 ] ) xx [
456 ] = xx [ 43 ] ; xx [ 45 ] = xx [ 12 ] * state [ 3 ] ; xx [ 55 ] = xx [
379 ] + xx [ 467 ] ; xx [ 128 ] = xx [ 11 ] * xx [ 3 ] * xx [ 55 ] * state [
4 ] ; xx [ 3 ] = xx [ 45 ] + xx [ 128 ] ; xx [ 379 ] = xx [ 4 ] * state [ 3 ]
; xx [ 457 ] = ( xx [ 13 ] - xx [ 11 ] * xx [ 7 ] * xx [ 55 ] ) * state [ 4 ]
; xx [ 7 ] = xx [ 9 ] * state [ 5 ] ; xx [ 461 ] = xx [ 379 ] + xx [ 457 ] +
xx [ 7 ] ; xx [ 462 ] = xx [ 8 ] * state [ 3 ] ; xx [ 463 ] = ( xx [ 11 ] *
xx [ 2 ] * xx [ 55 ] - xx [ 9 ] ) * state [ 4 ] ; xx [ 2 ] = xx [ 13 ] *
state [ 5 ] ; xx [ 55 ] = xx [ 462 ] + xx [ 463 ] + xx [ 2 ] ; xx [ 548 ] =
xx [ 3 ] ; xx [ 549 ] = xx [ 461 ] ; xx [ 550 ] = xx [ 55 ] ; xx [ 552 ] = xx
[ 18 ] * xx [ 3 ] ; xx [ 553 ] = xx [ 461 ] * xx [ 33 ] ; xx [ 554 ] = xx [
55 ] * xx [ 65 ] ; pm_math_Vector3_cross_ra ( xx + 548 , xx + 552 , xx + 559
) ; xx [ 18 ] = 0.6903818921736785 * input [ 103 ] ; xx [ 33 ] = input [ 103
] - 1.380763784347357 * xx [ 18 ] ; xx [ 65 ] = 1.446890241806463 * xx [ 18 ]
; xx [ 18 ] = 0.0375915374507293 ; xx [ 552 ] = - 2.405769667632971e-13 ; xx
[ 553 ] = - 0.03983410794452454 ; xx [ 554 ] = - 0.01645986959431302 ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 552 , xx + 581 ) ; xx [ 467 ] =
xx [ 581 ] - xx [ 377 ] ; xx [ 555 ] = xx [ 582 ] + xx [ 21 ] + xx [ 18 ] ;
xx [ 557 ] = 1.590244414800102e-3 ; xx [ 562 ] = xx [ 583 ] + xx [ 27 ] + xx
[ 557 ] ; xx [ 581 ] = sqrt ( xx [ 467 ] * xx [ 467 ] + xx [ 555 ] * xx [ 555
] + xx [ 562 ] * xx [ 562 ] ) ; if ( xx [ 581 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L4-L5 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 581 ] = input [ 112 ] / xx [ 581 ] ; xx [ 582 ] = xx [
581 ] * xx [ 562 ] ; xx [ 562 ] = xx [ 581 ] * xx [ 555 ] ; xx [ 555 ] =
0.01759714945393536 ; xx [ 583 ] = - xx [ 10 ] ; xx [ 584 ] = xx [ 14 ] ; xx
[ 585 ] = xx [ 6 ] ; xx [ 586 ] = xx [ 5 ] ; xx [ 587 ] = xx [ 14 ] ; xx [
588 ] = xx [ 6 ] ; xx [ 589 ] = xx [ 5 ] ; xx [ 590 ] = 0.03563872347849285 ;
xx [ 591 ] = xx [ 5 ] * xx [ 590 ] - xx [ 555 ] * xx [ 6 ] ; xx [ 592 ] = xx
[ 555 ] * xx [ 14 ] ; xx [ 593 ] = xx [ 590 ] * xx [ 14 ] ; xx [ 594 ] = xx [
591 ] ; xx [ 595 ] = xx [ 592 ] ; xx [ 596 ] = - xx [ 593 ] ;
pm_math_Vector3_cross_ra ( xx + 587 , xx + 594 , xx + 597 ) ; xx [ 594 ] = xx
[ 44 ] * xx [ 6 ] + xx [ 5 ] * xx [ 41 ] ; xx [ 595 ] = xx [ 44 ] * xx [ 14 ]
; xx [ 596 ] = xx [ 41 ] * xx [ 14 ] ; xx [ 600 ] = - xx [ 594 ] ; xx [ 601 ]
= xx [ 595 ] ; xx [ 602 ] = xx [ 596 ] ; pm_math_Vector3_cross_ra ( xx + 587
, xx + 600 , xx + 603 ) ; xx [ 587 ] = ( xx [ 10 ] * xx [ 594 ] + xx [ 603 ]
) * xx [ 11 ] ; xx [ 588 ] = ( xx [ 597 ] - xx [ 10 ] * xx [ 591 ] ) * xx [
11 ] - xx [ 587 ] ; xx [ 589 ] = 0.06197538565817786 - xx [ 11 ] * ( xx [ 604
] - xx [ 595 ] * xx [ 10 ] ) ; xx [ 591 ] = xx [ 11 ] * ( xx [ 598 ] - xx [
592 ] * xx [ 10 ] ) - xx [ 590 ] + xx [ 589 ] - 0.0257594283537832 ; xx [ 592
] = 0.9283707866246274 - ( xx [ 605 ] - xx [ 596 ] * xx [ 10 ] ) * xx [ 11 ]
; xx [ 594 ] = ( xx [ 593 ] * xx [ 10 ] + xx [ 599 ] ) * xx [ 11 ] - xx [ 555
] + xx [ 592 ] - 0.906781702449562 ; xx [ 593 ] = sqrt ( xx [ 588 ] * xx [
588 ] + xx [ 591 ] * xx [ 591 ] + xx [ 594 ] * xx [ 594 ] ) ; if ( xx [ 593 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L5-S1 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 593 ] = input [ 113 ] / xx [ 593 ] ; xx [ 595 ] = xx [
593 ] * xx [ 588 ] ; xx [ 596 ] = xx [ 593 ] * xx [ 591 ] ; xx [ 597 ] = xx [
593 ] * xx [ 594 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 583 , xx + 595
, xx + 598 ) ; xx [ 588 ] = 0.04055699920652953 ; xx [ 591 ] =
0.01302079271818882 ; xx [ 594 ] = 0.0135421645305857 ; xx [ 595 ] = - xx [
588 ] ; xx [ 596 ] = - xx [ 591 ] ; xx [ 597 ] = xx [ 594 ] ; xx [ 601 ] = -
0.03653985023506644 ; xx [ 602 ] = - 0.01645220048935106 ; xx [ 603 ] =
3.239433747529818e-3 ; pm_math_Quaternion_xform_ra ( xx + 61 , xx + 601 , xx
+ 604 ) ; xx [ 607 ] = xx [ 604 ] - xx [ 377 ] + xx [ 588 ] ; xx [ 588 ] = xx
[ 605 ] + xx [ 21 ] + xx [ 591 ] ; xx [ 591 ] = xx [ 606 ] + xx [ 27 ] - xx [
594 ] ; xx [ 594 ] = sqrt ( xx [ 607 ] * xx [ 607 ] + xx [ 588 ] * xx [ 588 ]
+ xx [ 591 ] * xx [ 591 ] ) ; if ( xx [ 594 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 594 ] = input [ 117 ] / xx [ 594 ] ; xx [ 604 ] = xx [
594 ] * xx [ 607 ] ; xx [ 605 ] = xx [ 594 ] * xx [ 588 ] ; xx [ 588 ] = xx [
594 ] * xx [ 591 ] ; xx [ 606 ] = - xx [ 604 ] ; xx [ 607 ] = - xx [ 605 ] ;
xx [ 608 ] = - xx [ 588 ] ; pm_math_Vector3_cross_ra ( xx + 595 , xx + 606 ,
xx + 609 ) ; xx [ 595 ] = - 0.04008119964598488 ; xx [ 596 ] = -
0.01084940380361654 ; xx [ 597 ] = - 9.8613284252828e-4 ;
pm_math_Quaternion_xform_ra ( xx + 583 , xx + 595 , xx + 606 ) ; xx [ 591 ] =
0.044078899383545 ; xx [ 612 ] = xx [ 606 ] - xx [ 587 ] + xx [ 591 ] ; xx [
613 ] = 0.0499199981689453 ; xx [ 614 ] = xx [ 607 ] + xx [ 589 ] - xx [ 613
] ; xx [ 606 ] = 0.919140991210938 ; xx [ 607 ] = xx [ 608 ] + xx [ 592 ] -
xx [ 606 ] ; xx [ 608 ] = sqrt ( xx [ 612 ] * xx [ 612 ] + xx [ 614 ] * xx [
614 ] + xx [ 607 ] * xx [ 607 ] ) ; if ( xx [ 608 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 608 ] = input [ 118 ] / xx [ 608 ] ; xx [ 615 ] = xx [
608 ] * xx [ 612 ] ; xx [ 616 ] = xx [ 608 ] * xx [ 614 ] ; xx [ 617 ] = xx [
608 ] * xx [ 607 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 583 , xx + 615
, xx + 618 ) ; pm_math_Vector3_cross_ra ( xx + 595 , xx + 618 , xx + 614 ) ;
xx [ 595 ] = 0.04055699920655626 ; xx [ 596 ] = 0.0130207927181218 ; xx [ 597
] = 0.01354216453058323 ; xx [ 621 ] = xx [ 595 ] ; xx [ 622 ] = - xx [ 596 ]
; xx [ 623 ] = xx [ 597 ] ; xx [ 624 ] = 0.03653985023490417 ; xx [ 625 ] = -
0.01645220048983929 ; xx [ 626 ] = 3.239433747517833e-3 ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 624 , xx + 627 ) ; xx [ 607 ] =
xx [ 627 ] - xx [ 377 ] - xx [ 595 ] ; xx [ 595 ] = xx [ 628 ] + xx [ 21 ] +
xx [ 596 ] ; xx [ 596 ] = xx [ 629 ] + xx [ 27 ] - xx [ 597 ] ; xx [ 597 ] =
sqrt ( xx [ 607 ] * xx [ 607 ] + xx [ 595 ] * xx [ 595 ] + xx [ 596 ] * xx [
596 ] ) ; if ( xx [ 597 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 597 ] = input [ 122 ] / xx [ 597 ] ; xx [ 612 ] = xx [
597 ] * xx [ 607 ] ; xx [ 607 ] = xx [ 597 ] * xx [ 595 ] ; xx [ 595 ] = xx [
597 ] * xx [ 596 ] ; xx [ 627 ] = - xx [ 612 ] ; xx [ 628 ] = - xx [ 607 ] ;
xx [ 629 ] = - xx [ 595 ] ; pm_math_Vector3_cross_ra ( xx + 621 , xx + 627 ,
xx + 630 ) ; xx [ 621 ] = 0.04008119964600713 ; xx [ 622 ] = -
0.01084940380355031 ; xx [ 623 ] = - 9.861328425307225e-4 ;
pm_math_Quaternion_xform_ra ( xx + 583 , xx + 621 , xx + 627 ) ; xx [ 596 ] =
xx [ 627 ] - xx [ 587 ] - xx [ 591 ] ; xx [ 591 ] = xx [ 628 ] + xx [ 589 ] -
xx [ 613 ] ; xx [ 613 ] = xx [ 629 ] + xx [ 592 ] - xx [ 606 ] ; xx [ 606 ] =
sqrt ( xx [ 596 ] * xx [ 596 ] + xx [ 591 ] * xx [ 591 ] + xx [ 613 ] * xx [
613 ] ) ; if ( xx [ 606 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 606 ] = input [ 123 ] / xx [ 606 ] ; xx [ 627 ] = xx [
606 ] * xx [ 596 ] ; xx [ 628 ] = xx [ 606 ] * xx [ 591 ] ; xx [ 629 ] = xx [
606 ] * xx [ 613 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 583 , xx + 627
, xx + 633 ) ; pm_math_Vector3_cross_ra ( xx + 621 , xx + 633 , xx + 627 ) ;
xx [ 591 ] = 0.04705808460307085 ; xx [ 621 ] = - 3.166185351073283e-13 ; xx
[ 622 ] = - 0.0513211464694144 ; xx [ 623 ] = - 0.01219126570664875 ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 621 , xx + 636 ) ; xx [ 596 ] =
xx [ 636 ] - xx [ 377 ] ; xx [ 377 ] = xx [ 637 ] + xx [ 21 ] + xx [ 591 ] ;
xx [ 21 ] = 9.875319015864496e-3 ; xx [ 613 ] = xx [ 638 ] + xx [ 27 ] + xx [
21 ] ; xx [ 27 ] = sqrt ( xx [ 596 ] * xx [ 596 ] + xx [ 377 ] * xx [ 377 ] +
xx [ 613 ] * xx [ 613 ] ) ; if ( xx [ 27 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L4-L5 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 27 ] = input [ 138 ] / xx [ 27 ] ; xx [ 617 ] = xx [
27 ] * xx [ 613 ] ; xx [ 613 ] = xx [ 27 ] * xx [ 377 ] ; xx [ 636 ] = -
3.88840995326696e-5 ; xx [ 637 ] = - 0.04658678468440397 ; xx [ 638 ] = -
0.0171197768192325 ; pm_math_Quaternion_xform_ra ( xx + 583 , xx + 636 , xx +
639 ) ; xx [ 377 ] = xx [ 639 ] - xx [ 587 ] ; xx [ 642 ] = xx [ 640 ] + xx [
589 ] - 0.019933675415717 ; xx [ 639 ] = xx [ 641 ] + xx [ 592 ] -
0.904526583782246 ; xx [ 640 ] = sqrt ( xx [ 377 ] * xx [ 377 ] + xx [ 642 ]
* xx [ 642 ] + xx [ 639 ] * xx [ 639 ] ) ; if ( xx [ 640 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L5-S1 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 640 ] = input [ 139 ] / xx [ 640 ] ; xx [ 643 ] = xx [
640 ] * xx [ 377 ] ; xx [ 644 ] = xx [ 640 ] * xx [ 642 ] ; xx [ 645 ] = xx [
640 ] * xx [ 639 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 583 , xx + 643
, xx + 646 ) ; pm_math_Vector3_cross_ra ( xx + 636 , xx + 646 , xx + 641 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 548 , xx + 636 ) ; xx [
377 ] = xx [ 246 ] * state [ 9 ] ; xx [ 639 ] = xx [ 399 ] + xx [ 400 ] ; xx
[ 399 ] = ( xx [ 22 ] - ( xx [ 449 ] - xx [ 20 ] * xx [ 639 ] ) * xx [ 11 ] )
* state [ 10 ] ; xx [ 20 ] = xx [ 377 ] + xx [ 399 ] ; xx [ 22 ] = xx [ 636 ]
+ xx [ 20 ] ; xx [ 400 ] = xx [ 32 ] * state [ 9 ] ; xx [ 449 ] = ( xx [ 24 ]
- xx [ 11 ] * ( xx [ 23 ] * xx [ 639 ] + xx [ 451 ] ) ) * state [ 10 ] ; xx [
23 ] = xx [ 25 ] * state [ 11 ] ; xx [ 451 ] = xx [ 400 ] + xx [ 449 ] + xx [
23 ] ; xx [ 644 ] = xx [ 637 ] + xx [ 451 ] ; xx [ 645 ] = xx [ 35 ] * state
[ 9 ] ; xx [ 649 ] = ( xx [ 11 ] * ( xx [ 452 ] + xx [ 19 ] * xx [ 639 ] ) -
xx [ 25 ] ) * state [ 10 ] ; xx [ 19 ] = xx [ 24 ] * state [ 11 ] ; xx [ 452
] = xx [ 645 ] + xx [ 649 ] + xx [ 19 ] ; xx [ 639 ] = xx [ 638 ] + xx [ 452
] ; xx [ 650 ] = xx [ 22 ] ; xx [ 651 ] = xx [ 644 ] ; xx [ 652 ] = xx [ 639
] ; xx [ 653 ] = xx [ 22 ] * xx [ 56 ] ; xx [ 654 ] = xx [ 644 ] * xx [ 142 ]
; xx [ 655 ] = xx [ 639 ] * xx [ 167 ] ; pm_math_Vector3_cross_ra ( xx + 650
, xx + 653 , xx + 656 ) ; xx [ 653 ] = 2.234568172515435e-13 ; xx [ 654 ] =
0.02939308698039612 ; xx [ 655 ] = - 5.661597909317728e-3 ; xx [ 56 ] =
0.7847814363844873 ; xx [ 142 ] = 2.339080312536016e-12 ; xx [ 167 ] = xx [
142 ] * input [ 104 ] ; xx [ 659 ] = 0.619772617260799 ; xx [ 660 ] = xx [
659 ] * input [ 104 ] ; xx [ 661 ] = ( xx [ 56 ] * xx [ 167 ] + xx [ 142 ] *
xx [ 660 ] ) * xx [ 11 ] ; xx [ 662 ] = xx [ 142 ] * xx [ 167 ] ; xx [ 142 ]
= xx [ 11 ] * ( xx [ 662 ] - xx [ 56 ] * xx [ 660 ] ) ; xx [ 56 ] = input [
104 ] - ( xx [ 659 ] * xx [ 660 ] + xx [ 662 ] ) * xx [ 11 ] ; xx [ 662 ] = -
xx [ 661 ] ; xx [ 663 ] = xx [ 142 ] ; xx [ 664 ] = xx [ 56 ] ;
pm_math_Vector3_cross_ra ( xx + 653 , xx + 662 , xx + 665 ) ; xx [ 167 ] =
2.408429233865428e-13 ; xx [ 653 ] = 0.04027776673008778 ; xx [ 654 ] =
9.50951981748549e-6 ; xx [ 662 ] = - xx [ 167 ] ; xx [ 663 ] = - xx [ 653 ] ;
xx [ 664 ] = - xx [ 654 ] ; xx [ 668 ] = 1.167567527306757e-13 ; xx [ 669 ] =
- 0.04472798265803164 ; xx [ 670 ] = - 0.01492244588929304 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 668 , xx + 671 ) ; xx [ 655 ] =
xx [ 671 ] + xx [ 31 ] + xx [ 167 ] ; xx [ 167 ] = xx [ 672 ] + xx [ 52 ] +
xx [ 653 ] ; xx [ 653 ] = xx [ 673 ] + xx [ 53 ] + xx [ 654 ] ; xx [ 654 ] =
sqrt ( xx [ 655 ] * xx [ 655 ] + xx [ 167 ] * xx [ 167 ] + xx [ 653 ] * xx [
653 ] ) ; if ( xx [ 654 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L3-L4 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 654 ] = input [ 111 ] / xx [ 654 ] ; xx [ 659 ] = xx [
654 ] * xx [ 655 ] ; xx [ 655 ] = xx [ 654 ] * xx [ 167 ] ; xx [ 167 ] = xx [
654 ] * xx [ 653 ] ; xx [ 671 ] = - xx [ 659 ] ; xx [ 672 ] = - xx [ 655 ] ;
xx [ 673 ] = - xx [ 167 ] ; pm_math_Vector3_cross_ra ( xx + 662 , xx + 671 ,
xx + 674 ) ; xx [ 653 ] = xx [ 581 ] * xx [ 467 ] ; xx [ 662 ] = xx [ 653 ] ;
xx [ 663 ] = xx [ 562 ] ; xx [ 664 ] = xx [ 582 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 662 , xx + 671 ) ;
pm_math_Vector3_cross_ra ( xx + 552 , xx + 671 , xx + 662 ) ; xx [ 467 ] =
0.03492720031745133 ; xx [ 552 ] = 0.01477959769994918 ; xx [ 553 ] =
0.01134881117700549 ; xx [ 677 ] = - xx [ 467 ] ; xx [ 678 ] = - xx [ 552 ] ;
xx [ 679 ] = xx [ 553 ] ; xx [ 680 ] = - 0.03087794971463731 ; xx [ 681 ] = -
0.01577384625407678 ; xx [ 682 ] = 4.057911382721502e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 680 , xx + 683 ) ; xx [ 554 ] =
xx [ 683 ] + xx [ 31 ] + xx [ 467 ] ; xx [ 467 ] = xx [ 684 ] + xx [ 52 ] +
xx [ 552 ] ; xx [ 552 ] = xx [ 685 ] + xx [ 53 ] - xx [ 553 ] ; xx [ 553 ] =
sqrt ( xx [ 554 ] * xx [ 554 ] + xx [ 467 ] * xx [ 467 ] + xx [ 552 ] * xx [
552 ] ) ; if ( xx [ 553 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 553 ] = input [ 116 ] / xx [ 553 ] ; xx [ 660 ] = xx [
553 ] * xx [ 554 ] ; xx [ 554 ] = xx [ 553 ] * xx [ 467 ] ; xx [ 467 ] = xx [
553 ] * xx [ 552 ] ; xx [ 683 ] = - xx [ 660 ] ; xx [ 684 ] = - xx [ 554 ] ;
xx [ 685 ] = - xx [ 467 ] ; pm_math_Vector3_cross_ra ( xx + 677 , xx + 683 ,
xx + 686 ) ; xx [ 677 ] = xx [ 604 ] ; xx [ 678 ] = xx [ 605 ] ; xx [ 679 ] =
xx [ 588 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 677 , xx +
683 ) ; pm_math_Vector3_cross_ra ( xx + 601 , xx + 683 , xx + 677 ) ; xx [
552 ] = 0.03492470169060014 ; xx [ 601 ] = 0.01552496039123881 ; xx [ 602 ] =
0.01167234256981233 ; xx [ 689 ] = xx [ 552 ] ; xx [ 690 ] = - xx [ 601 ] ;
xx [ 691 ] = xx [ 602 ] ; xx [ 692 ] = 0.03087794971468379 ; xx [ 693 ] = -
0.01577384625389952 ; xx [ 694 ] = 4.057911382755352e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 692 , xx + 695 ) ; xx [ 603 ] =
xx [ 695 ] + xx [ 31 ] - xx [ 552 ] ; xx [ 552 ] = xx [ 696 ] + xx [ 52 ] +
xx [ 601 ] ; xx [ 601 ] = xx [ 697 ] + xx [ 53 ] - xx [ 602 ] ; xx [ 602 ] =
sqrt ( xx [ 603 ] * xx [ 603 ] + xx [ 552 ] * xx [ 552 ] + xx [ 601 ] * xx [
601 ] ) ; if ( xx [ 602 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 602 ] = input [ 121 ] / xx [ 602 ] ; xx [ 695 ] = xx [
602 ] * xx [ 603 ] ; xx [ 603 ] = xx [ 602 ] * xx [ 552 ] ; xx [ 552 ] = xx [
602 ] * xx [ 601 ] ; xx [ 696 ] = - xx [ 695 ] ; xx [ 697 ] = - xx [ 603 ] ;
xx [ 698 ] = - xx [ 552 ] ; pm_math_Vector3_cross_ra ( xx + 689 , xx + 696 ,
xx + 699 ) ; xx [ 689 ] = xx [ 612 ] ; xx [ 690 ] = xx [ 607 ] ; xx [ 691 ] =
xx [ 595 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 689 , xx +
696 ) ; pm_math_Vector3_cross_ra ( xx + 624 , xx + 696 , xx + 689 ) ; xx [
601 ] = 3.146640243071065e-13 ; xx [ 624 ] = 0.05113078984265527 ; xx [ 625 ]
= 8.028332428854309e-3 ; xx [ 702 ] = - xx [ 601 ] ; xx [ 703 ] = - xx [ 624
] ; xx [ 704 ] = - xx [ 625 ] ; xx [ 705 ] = 1.4285959311088e-13 ; xx [ 706 ]
= - 0.05524484988788111 ; xx [ 707 ] = - 7.469488033553544e-3 ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 705 , xx + 708 ) ; xx [ 626 ] =
xx [ 708 ] + xx [ 31 ] + xx [ 601 ] ; xx [ 31 ] = xx [ 709 ] + xx [ 52 ] + xx
[ 624 ] ; xx [ 52 ] = xx [ 710 ] + xx [ 53 ] + xx [ 625 ] ; xx [ 53 ] = sqrt
( xx [ 626 ] * xx [ 626 ] + xx [ 31 ] * xx [ 31 ] + xx [ 52 ] * xx [ 52 ] ) ;
if ( xx [ 53 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L3-L4 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 53 ] = input [ 137 ] / xx [ 53 ] ; xx [ 601 ] = xx [
53 ] * xx [ 626 ] ; xx [ 624 ] = xx [ 53 ] * xx [ 31 ] ; xx [ 31 ] = xx [ 53
] * xx [ 52 ] ; xx [ 708 ] = - xx [ 601 ] ; xx [ 709 ] = - xx [ 624 ] ; xx [
710 ] = - xx [ 31 ] ; pm_math_Vector3_cross_ra ( xx + 702 , xx + 708 , xx +
711 ) ; xx [ 52 ] = xx [ 27 ] * xx [ 596 ] ; xx [ 702 ] = xx [ 52 ] ; xx [
703 ] = xx [ 613 ] ; xx [ 704 ] = xx [ 617 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 702 , xx + 708 ) ;
pm_math_Vector3_cross_ra ( xx + 621 , xx + 708 , xx + 702 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 650 , xx + 621 ) ; xx [
596 ] = xx [ 225 ] * state [ 15 ] ; xx [ 625 ] = xx [ 295 ] + xx [ 296 ] ; xx
[ 295 ] = ( ( xx [ 29 ] * xx [ 625 ] + xx [ 350 ] ) * xx [ 11 ] - xx [ 36 ] )
* state [ 16 ] ; xx [ 29 ] = xx [ 596 ] + xx [ 295 ] ; xx [ 36 ] = xx [ 621 ]
+ xx [ 29 ] ; xx [ 296 ] = xx [ 226 ] * state [ 15 ] ; xx [ 350 ] = ( xx [ 48
] + xx [ 11 ] * ( xx [ 352 ] - xx [ 37 ] * xx [ 625 ] ) ) * state [ 16 ] ; xx
[ 37 ] = xx [ 49 ] * state [ 17 ] ; xx [ 352 ] = xx [ 296 ] + xx [ 350 ] + xx
[ 37 ] ; xx [ 626 ] = xx [ 622 ] + xx [ 352 ] ; xx [ 714 ] = xx [ 50 ] *
state [ 15 ] ; xx [ 715 ] = ( xx [ 11 ] * ( xx [ 26 ] * xx [ 625 ] - xx [ 362
] ) - xx [ 49 ] ) * state [ 16 ] ; xx [ 26 ] = xx [ 48 ] * state [ 17 ] ; xx
[ 362 ] = xx [ 714 ] + xx [ 715 ] + xx [ 26 ] ; xx [ 625 ] = xx [ 623 ] + xx
[ 362 ] ; xx [ 716 ] = xx [ 36 ] ; xx [ 717 ] = xx [ 626 ] ; xx [ 718 ] = xx
[ 625 ] ; xx [ 719 ] = xx [ 36 ] * xx [ 119 ] ; xx [ 720 ] = xx [ 626 ] * xx
[ 159 ] ; xx [ 721 ] = xx [ 625 ] * xx [ 169 ] ; pm_math_Vector3_cross_ra (
xx + 716 , xx + 719 , xx + 722 ) ; xx [ 719 ] = - 1.076648921049358e-13 ; xx
[ 720 ] = 0.03139087037316381 ; xx [ 721 ] = - 4.53476976212614e-3 ; xx [ 119
] = 0.64004249649544 * input [ 106 ] ; xx [ 159 ] = xx [ 11 ] *
1.278175242626048e-12 * xx [ 119 ] ; xx [ 169 ] = xx [ 11 ] *
0.7683395100343888 * xx [ 119 ] ; xx [ 725 ] = input [ 106 ] -
1.28008499299088 * xx [ 119 ] ; xx [ 726 ] = xx [ 159 ] ; xx [ 727 ] = - xx [
169 ] ; xx [ 728 ] = xx [ 725 ] ; pm_math_Vector3_cross_ra ( xx + 719 , xx +
726 , xx + 729 ) ; xx [ 119 ] = 8.947197148478258e-14 ; xx [ 719 ] =
0.0386335011732275 ; xx [ 720 ] = 2.940430357145393e-3 ; xx [ 726 ] = xx [
119 ] ; xx [ 727 ] = - xx [ 719 ] ; xx [ 728 ] = xx [ 720 ] ; xx [ 732 ] = -
6.841875673243218e-13 ; xx [ 733 ] = - 0.04146091222789498 ; xx [ 734 ] = -
0.01351410150666451 ; pm_math_Quaternion_xform_ra ( xx + 84 , xx + 732 , xx +
735 ) ; xx [ 721 ] = xx [ 735 ] - xx [ 79 ] - xx [ 119 ] ; xx [ 119 ] = xx [
736 ] + xx [ 120 ] + xx [ 719 ] ; xx [ 719 ] = xx [ 737 ] + xx [ 117 ] - xx [
720 ] ; xx [ 720 ] = sqrt ( xx [ 721 ] * xx [ 721 ] + xx [ 119 ] * xx [ 119 ]
+ xx [ 719 ] * xx [ 719 ] ) ; if ( xx [ 720 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L2-L3 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 720 ] = input [ 110 ] / xx [ 720 ] ; xx [ 735 ] = xx [
720 ] * xx [ 721 ] ; xx [ 721 ] = xx [ 720 ] * xx [ 119 ] ; xx [ 119 ] = xx [
720 ] * xx [ 719 ] ; xx [ 736 ] = - xx [ 735 ] ; xx [ 737 ] = - xx [ 721 ] ;
xx [ 738 ] = - xx [ 119 ] ; pm_math_Vector3_cross_ra ( xx + 726 , xx + 736 ,
xx + 739 ) ; xx [ 726 ] = xx [ 659 ] ; xx [ 727 ] = xx [ 655 ] ; xx [ 728 ] =
xx [ 167 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 726 , xx +
736 ) ; pm_math_Vector3_cross_ra ( xx + 668 , xx + 736 , xx + 726 ) ; xx [
668 ] = 0.03295989990232563 ; xx [ 669 ] = 0.01601356214963441 ; xx [ 670 ] =
0.01475302284708025 ; xx [ 742 ] = - xx [ 668 ] ; xx [ 743 ] = - xx [ 669 ] ;
xx [ 744 ] = xx [ 670 ] ; xx [ 745 ] = - 0.03226754951497003 ; xx [ 746 ] = -
0.02045999852626687 ; xx [ 747 ] = 5.644585224138508e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 745 , xx + 748 ) ; xx [ 719 ] =
xx [ 748 ] - xx [ 79 ] + xx [ 668 ] ; xx [ 668 ] = xx [ 749 ] + xx [ 120 ] +
xx [ 669 ] ; xx [ 669 ] = xx [ 750 ] + xx [ 117 ] - xx [ 670 ] ; xx [ 670 ] =
sqrt ( xx [ 719 ] * xx [ 719 ] + xx [ 668 ] * xx [ 668 ] + xx [ 669 ] * xx [
669 ] ) ; if ( xx [ 670 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 670 ] = input [ 115 ] / xx [ 670 ] ; xx [ 748 ] = xx [
670 ] * xx [ 719 ] ; xx [ 719 ] = xx [ 670 ] * xx [ 668 ] ; xx [ 668 ] = xx [
670 ] * xx [ 669 ] ; xx [ 749 ] = - xx [ 748 ] ; xx [ 750 ] = - xx [ 719 ] ;
xx [ 751 ] = - xx [ 668 ] ; pm_math_Vector3_cross_ra ( xx + 742 , xx + 749 ,
xx + 752 ) ; xx [ 742 ] = xx [ 660 ] ; xx [ 743 ] = xx [ 554 ] ; xx [ 744 ] =
xx [ 467 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 742 , xx +
749 ) ; pm_math_Vector3_cross_ra ( xx + 680 , xx + 749 , xx + 742 ) ; xx [
669 ] = 0.03295989990236177 ; xx [ 680 ] = 0.01601356214944519 ; xx [ 681 ] =
0.01475302284711638 ; xx [ 755 ] = xx [ 669 ] ; xx [ 756 ] = - xx [ 680 ] ;
xx [ 757 ] = xx [ 681 ] ; xx [ 758 ] = 0.03226754951457088 ; xx [ 759 ] = -
0.02045999852744781 ; xx [ 760 ] = 5.644585223800618e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 758 , xx + 761 ) ; xx [ 682 ] =
xx [ 761 ] - xx [ 79 ] - xx [ 669 ] ; xx [ 669 ] = xx [ 762 ] + xx [ 120 ] +
xx [ 680 ] ; xx [ 680 ] = xx [ 763 ] + xx [ 117 ] - xx [ 681 ] ; xx [ 681 ] =
sqrt ( xx [ 682 ] * xx [ 682 ] + xx [ 669 ] * xx [ 669 ] + xx [ 680 ] * xx [
680 ] ) ; if ( xx [ 681 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 681 ] = input [ 120 ] / xx [ 681 ] ; xx [ 761 ] = xx [
681 ] * xx [ 682 ] ; xx [ 682 ] = xx [ 681 ] * xx [ 669 ] ; xx [ 669 ] = xx [
681 ] * xx [ 680 ] ; xx [ 762 ] = - xx [ 761 ] ; xx [ 763 ] = - xx [ 682 ] ;
xx [ 764 ] = - xx [ 669 ] ; pm_math_Vector3_cross_ra ( xx + 755 , xx + 762 ,
xx + 765 ) ; xx [ 755 ] = xx [ 695 ] ; xx [ 756 ] = xx [ 603 ] ; xx [ 757 ] =
xx [ 552 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 755 , xx +
762 ) ; pm_math_Vector3_cross_ra ( xx + 692 , xx + 762 , xx + 755 ) ; xx [
680 ] = 1.392865120001009e-13 ; xx [ 692 ] = 0.05459122458051579 ; xx [ 693 ]
= 4.374450014251545e-3 ; xx [ 768 ] = xx [ 680 ] ; xx [ 769 ] = - xx [ 692 ]
; xx [ 770 ] = - xx [ 693 ] ; xx [ 771 ] = - 8.371860108687535e-13 ; xx [ 772
] = - 0.05202883057027102 ; xx [ 773 ] = - 5.800535526395379e-3 ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 771 , xx + 774 ) ; xx [ 694 ] =
xx [ 774 ] - xx [ 79 ] - xx [ 680 ] ; xx [ 79 ] = xx [ 775 ] + xx [ 120 ] +
xx [ 692 ] ; xx [ 120 ] = xx [ 776 ] + xx [ 117 ] + xx [ 693 ] ; xx [ 117 ] =
sqrt ( xx [ 694 ] * xx [ 694 ] + xx [ 79 ] * xx [ 79 ] + xx [ 120 ] * xx [
120 ] ) ; if ( xx [ 117 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L2-L3 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 117 ] = input [ 136 ] / xx [ 117 ] ; xx [ 680 ] = xx [
117 ] * xx [ 694 ] ; xx [ 692 ] = xx [ 117 ] * xx [ 79 ] ; xx [ 79 ] = xx [
117 ] * xx [ 120 ] ; xx [ 774 ] = - xx [ 680 ] ; xx [ 775 ] = - xx [ 692 ] ;
xx [ 776 ] = - xx [ 79 ] ; pm_math_Vector3_cross_ra ( xx + 768 , xx + 774 ,
xx + 777 ) ; xx [ 768 ] = xx [ 601 ] ; xx [ 769 ] = xx [ 624 ] ; xx [ 770 ] =
xx [ 31 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 768 , xx +
774 ) ; pm_math_Vector3_cross_ra ( xx + 705 , xx + 774 , xx + 768 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 716 , xx + 705 ) ; xx [
120 ] = xx [ 175 ] * state [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
74 , xx + 265 , xx + 780 ) ; xx [ 74 ] = xx [ 780 ] * state [ 22 ] ; xx [ 75
] = xx [ 70 ] * state [ 23 ] ; xx [ 76 ] = xx [ 120 ] + xx [ 74 ] + xx [ 75 ]
; xx [ 77 ] = xx [ 705 ] + xx [ 76 ] ; xx [ 265 ] = xx [ 173 ] * state [ 21 ]
; xx [ 266 ] = xx [ 781 ] * state [ 22 ] ; xx [ 267 ] = xx [ 60 ] * state [
23 ] ; xx [ 693 ] = xx [ 265 ] + xx [ 266 ] + xx [ 267 ] ; xx [ 694 ] = xx [
706 ] + xx [ 693 ] ; xx [ 783 ] = xx [ 59 ] * state [ 21 ] ; xx [ 780 ] = xx
[ 782 ] * state [ 22 ] ; xx [ 781 ] = xx [ 58 ] * state [ 23 ] ; xx [ 782 ] =
xx [ 783 ] + xx [ 780 ] + xx [ 781 ] ; xx [ 784 ] = xx [ 707 ] + xx [ 782 ] ;
xx [ 785 ] = xx [ 77 ] ; xx [ 786 ] = xx [ 694 ] ; xx [ 787 ] = xx [ 784 ] ;
xx [ 788 ] = xx [ 77 ] * xx [ 143 ] ; xx [ 789 ] = xx [ 694 ] * xx [ 163 ] ;
xx [ 790 ] = xx [ 784 ] * xx [ 171 ] ; pm_math_Vector3_cross_ra ( xx + 785 ,
xx + 788 , xx + 791 ) ; xx [ 788 ] = 7.188464506654162e-13 ; xx [ 789 ] =
0.03225412823629766 ; xx [ 790 ] = - 3.133507134471407e-3 ; xx [ 143 ] =
0.7453544942628708 ; xx [ 163 ] = 4.148454829529507e-12 ; xx [ 171 ] = xx [
163 ] * input [ 107 ] ; xx [ 794 ] = 8.56489137069967e-12 ; xx [ 795 ] =
0.6666683417428341 ; xx [ 796 ] = xx [ 795 ] * input [ 107 ] ; xx [ 797 ] = (
xx [ 143 ] * xx [ 171 ] + xx [ 794 ] * xx [ 796 ] ) * xx [ 11 ] ; xx [ 798 ]
= xx [ 11 ] * ( xx [ 794 ] * xx [ 171 ] - xx [ 143 ] * xx [ 796 ] ) ; xx [
143 ] = input [ 107 ] - ( xx [ 795 ] * xx [ 796 ] + xx [ 163 ] * xx [ 171 ] )
* xx [ 11 ] ; xx [ 794 ] = - xx [ 797 ] ; xx [ 795 ] = xx [ 798 ] ; xx [ 796
] = xx [ 143 ] ; pm_math_Vector3_cross_ra ( xx + 788 , xx + 794 , xx + 799 )
; xx [ 163 ] = 5.287708455224579e-13 ; xx [ 171 ] = 0.03767096436270765 ; xx
[ 788 ] = 2.923671226993926e-3 ; xx [ 794 ] = - xx [ 163 ] ; xx [ 795 ] = -
xx [ 171 ] ; xx [ 796 ] = xx [ 788 ] ; xx [ 802 ] = 8.599010959602973e-12 ;
xx [ 803 ] = - 0.08308907864317851 ; xx [ 804 ] = - 0.1306612955003031 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 802 , xx + 805 ) ; xx [ 789 ] =
xx [ 805 ] + xx [ 129 ] + xx [ 163 ] ; xx [ 163 ] = xx [ 806 ] + xx [ 130 ] +
xx [ 171 ] ; xx [ 171 ] = xx [ 807 ] + xx [ 141 ] - xx [ 788 ] ; xx [ 788 ] =
sqrt ( xx [ 789 ] * xx [ 789 ] + xx [ 163 ] * xx [ 163 ] + xx [ 171 ] * xx [
171 ] ) ; if ( xx [ 788 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L1-L2 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 788 ] = input [ 109 ] / xx [ 788 ] ; xx [ 790 ] = xx [
788 ] * xx [ 789 ] ; xx [ 789 ] = xx [ 788 ] * xx [ 163 ] ; xx [ 163 ] = xx [
788 ] * xx [ 171 ] ; xx [ 805 ] = - xx [ 790 ] ; xx [ 806 ] = - xx [ 789 ] ;
xx [ 807 ] = - xx [ 163 ] ; pm_math_Vector3_cross_ra ( xx + 794 , xx + 805 ,
xx + 808 ) ; xx [ 794 ] = xx [ 735 ] ; xx [ 795 ] = xx [ 721 ] ; xx [ 796 ] =
xx [ 119 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 794 , xx +
805 ) ; pm_math_Vector3_cross_ra ( xx + 732 , xx + 805 , xx + 794 ) ; xx [
171 ] = 0.03234149932875941 ; xx [ 732 ] = 0.02029712378537596 ; xx [ 733 ] =
0.01526834402904475 ; xx [ 811 ] = - xx [ 171 ] ; xx [ 812 ] = - xx [ 732 ] ;
xx [ 813 ] = xx [ 733 ] ; xx [ 814 ] = - 0.02788730047518068 ; xx [ 815 ] = -
0.06226499915804137 ; xx [ 816 ] = - 0.1105856995801309 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 814 , xx + 817 ) ; xx [ 734 ] =
xx [ 817 ] + xx [ 129 ] + xx [ 171 ] ; xx [ 171 ] = xx [ 818 ] + xx [ 130 ] +
xx [ 732 ] ; xx [ 732 ] = xx [ 819 ] + xx [ 141 ] - xx [ 733 ] ; xx [ 733 ] =
sqrt ( xx [ 734 ] * xx [ 734 ] + xx [ 171 ] * xx [ 171 ] + xx [ 732 ] * xx [
732 ] ) ; if ( xx [ 733 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 733 ] = input [ 114 ] / xx [ 733 ] ; xx [ 817 ] = xx [
733 ] * xx [ 734 ] ; xx [ 734 ] = xx [ 733 ] * xx [ 171 ] ; xx [ 171 ] = xx [
733 ] * xx [ 732 ] ; xx [ 818 ] = - xx [ 817 ] ; xx [ 819 ] = - xx [ 734 ] ;
xx [ 820 ] = - xx [ 171 ] ; pm_math_Vector3_cross_ra ( xx + 811 , xx + 818 ,
xx + 821 ) ; xx [ 811 ] = xx [ 748 ] ; xx [ 812 ] = xx [ 719 ] ; xx [ 813 ] =
xx [ 668 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 811 , xx +
818 ) ; pm_math_Vector3_cross_ra ( xx + 745 , xx + 818 , xx + 811 ) ; xx [
732 ] = 0.03234149932846699 ; xx [ 745 ] = 0.02029712378655961 ; xx [ 746 ] =
0.01526834402870608 ; xx [ 824 ] = xx [ 732 ] ; xx [ 825 ] = - xx [ 745 ] ;
xx [ 826 ] = xx [ 746 ] ; xx [ 827 ] = 0.02788730050748512 ; xx [ 828 ] = -
0.06226499918103524 ; xx [ 829 ] = - 0.1105856995772642 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 827 , xx + 830 ) ; xx [ 747 ] =
xx [ 830 ] + xx [ 129 ] - xx [ 732 ] ; xx [ 732 ] = xx [ 831 ] + xx [ 130 ] +
xx [ 745 ] ; xx [ 745 ] = xx [ 832 ] + xx [ 141 ] - xx [ 746 ] ; xx [ 746 ] =
sqrt ( xx [ 747 ] * xx [ 747 ] + xx [ 732 ] * xx [ 732 ] + xx [ 745 ] * xx [
745 ] ) ; if ( xx [ 746 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 746 ] = input [ 119 ] / xx [ 746 ] ; xx [ 830 ] = xx [
746 ] * xx [ 747 ] ; xx [ 747 ] = xx [ 746 ] * xx [ 732 ] ; xx [ 732 ] = xx [
746 ] * xx [ 745 ] ; xx [ 831 ] = - xx [ 830 ] ; xx [ 832 ] = - xx [ 747 ] ;
xx [ 833 ] = - xx [ 732 ] ; pm_math_Vector3_cross_ra ( xx + 824 , xx + 831 ,
xx + 834 ) ; xx [ 824 ] = xx [ 761 ] ; xx [ 825 ] = xx [ 682 ] ; xx [ 826 ] =
xx [ 669 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 824 , xx +
831 ) ; pm_math_Vector3_cross_ra ( xx + 758 , xx + 831 , xx + 824 ) ; xx [
745 ] = 7.867570466502235e-13 ; xx [ 758 ] = 0.05039051001790674 ; xx [ 759 ]
= 1.894890190564144e-3 ; xx [ 837 ] = - xx [ 745 ] ; xx [ 838 ] = - xx [ 758
] ; xx [ 839 ] = - xx [ 759 ] ; xx [ 840 ] = 3.885494606759522e-12 ; xx [ 841
] = - 0.09411462191877414 ; xx [ 842 ] = - 0.1273910586185666 ;
pm_math_Quaternion_xform_ra ( xx + 113 , xx + 840 , xx + 843 ) ; xx [ 760 ] =
xx [ 843 ] + xx [ 129 ] + xx [ 745 ] ; xx [ 129 ] = xx [ 844 ] + xx [ 130 ] +
xx [ 758 ] ; xx [ 130 ] = xx [ 845 ] + xx [ 141 ] + xx [ 759 ] ; xx [ 141 ] =
sqrt ( xx [ 760 ] * xx [ 760 ] + xx [ 129 ] * xx [ 129 ] + xx [ 130 ] * xx [
130 ] ) ; if ( xx [ 141 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L1-L2 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 141 ] = input [ 135 ] / xx [ 141 ] ; xx [ 745 ] = xx [
141 ] * xx [ 760 ] ; xx [ 758 ] = xx [ 141 ] * xx [ 129 ] ; xx [ 129 ] = xx [
141 ] * xx [ 130 ] ; xx [ 843 ] = - xx [ 745 ] ; xx [ 844 ] = - xx [ 758 ] ;
xx [ 845 ] = - xx [ 129 ] ; pm_math_Vector3_cross_ra ( xx + 837 , xx + 843 ,
xx + 846 ) ; xx [ 837 ] = xx [ 680 ] ; xx [ 838 ] = xx [ 692 ] ; xx [ 839 ] =
xx [ 79 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 837 , xx +
843 ) ; pm_math_Vector3_cross_ra ( xx + 771 , xx + 843 , xx + 837 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 785 , xx + 771 ) ; xx [
130 ] = xx [ 109 ] * state [ 27 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
102 , xx + 145 , xx + 849 ) ; xx [ 102 ] = xx [ 849 ] * state [ 28 ] ; xx [
103 ] = xx [ 98 ] * state [ 29 ] ; xx [ 104 ] = xx [ 130 ] + xx [ 102 ] - xx
[ 103 ] ; xx [ 105 ] = xx [ 771 ] + xx [ 104 ] ; xx [ 145 ] = xx [ 106 ] *
state [ 27 ] ; xx [ 146 ] = xx [ 850 ] * state [ 28 ] ; xx [ 147 ] = xx [ 97
] * state [ 29 ] ; xx [ 759 ] = xx [ 145 ] + xx [ 146 ] - xx [ 147 ] ; xx [
760 ] = xx [ 772 ] + xx [ 759 ] ; xx [ 852 ] = xx [ 80 ] * state [ 27 ] ; xx
[ 849 ] = xx [ 851 ] * state [ 28 ] ; xx [ 850 ] = xx [ 83 ] * state [ 29 ] ;
xx [ 851 ] = xx [ 852 ] + xx [ 849 ] + xx [ 850 ] ; xx [ 853 ] = xx [ 773 ] +
xx [ 851 ] ; xx [ 854 ] = xx [ 105 ] ; xx [ 855 ] = xx [ 760 ] ; xx [ 856 ] =
xx [ 853 ] ; xx [ 857 ] = xx [ 105 ] * xx [ 99 ] ; xx [ 858 ] = xx [ 760 ] *
xx [ 107 ] ; xx [ 859 ] = xx [ 853 ] * xx [ 126 ] ; pm_math_Vector3_cross_ra
( xx + 854 , xx + 857 , xx + 860 ) ; xx [ 857 ] = 3.290524933036545e-11 ; xx
[ 858 ] = 0.01673590256851844 ; xx [ 859 ] = 0.1971461327241312 ; xx [ 863 ]
= 6.437320495472446e-12 ; xx [ 864 ] = 0.09289991027792205 ; xx [ 865 ] = xx
[ 864 ] * input [ 15 ] ; xx [ 866 ] = 0.9956754524795487 ; xx [ 867 ] =
2.076280636928651e-10 ; xx [ 868 ] = xx [ 867 ] * input [ 15 ] ; xx [ 869 ] =
xx [ 11 ] * ( xx [ 863 ] * xx [ 865 ] + xx [ 866 ] * xx [ 868 ] ) ; xx [ 870
] = input [ 15 ] - ( xx [ 867 ] * xx [ 868 ] + xx [ 864 ] * xx [ 865 ] ) * xx
[ 11 ] ; xx [ 871 ] = ( xx [ 863 ] * xx [ 868 ] - xx [ 866 ] * xx [ 865 ] ) *
xx [ 11 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 869 , xx + 872 ) ; xx
[ 857 ] = - 0.01750679316316092 ; xx [ 858 ] = - 0.01290536032774895 ; xx [
859 ] = - 0.05164023244740774 ; xx [ 865 ] = 0.6253013331666792 ; xx [ 868 ]
= 0.2647300941138785 ; xx [ 875 ] = xx [ 868 ] * input [ 16 ] ; xx [ 876 ] =
0.2862028927871909 ; xx [ 877 ] = 0.6760208015813378 ; xx [ 878 ] = xx [ 877
] * input [ 16 ] ; xx [ 879 ] = ( xx [ 865 ] * xx [ 875 ] + xx [ 876 ] * xx [
878 ] ) * xx [ 11 ] ; xx [ 880 ] = xx [ 11 ] * ( xx [ 865 ] * xx [ 878 ] - xx
[ 876 ] * xx [ 875 ] ) ; xx [ 865 ] = input [ 16 ] - ( xx [ 877 ] * xx [ 878
] + xx [ 868 ] * xx [ 875 ] ) * xx [ 11 ] ; xx [ 875 ] = - xx [ 879 ] ; xx [
876 ] = xx [ 880 ] ; xx [ 877 ] = xx [ 865 ] ; pm_math_Vector3_cross_ra ( xx
+ 857 , xx + 875 , xx + 881 ) ; xx [ 857 ] = - 0.04082091629087376 ; xx [ 858
] = - 0.05961285214677275 ; xx [ 859 ] = - 0.05914702069254961 ; xx [ 868 ] =
0.6043991865730609 ; xx [ 875 ] = 0.3996382353334624 ; xx [ 876 ] = xx [ 875
] * input [ 17 ] ; xx [ 877 ] = 0.3801248530735284 ; xx [ 878 ] =
0.5748878153215694 ; xx [ 884 ] = xx [ 878 ] * input [ 17 ] ; xx [ 885 ] = (
xx [ 868 ] * xx [ 876 ] + xx [ 877 ] * xx [ 884 ] ) * xx [ 11 ] ; xx [ 886 ]
= xx [ 11 ] * ( xx [ 868 ] * xx [ 884 ] - xx [ 877 ] * xx [ 876 ] ) ; xx [
868 ] = input [ 17 ] - ( xx [ 878 ] * xx [ 884 ] + xx [ 875 ] * xx [ 876 ] )
* xx [ 11 ] ; xx [ 875 ] = - xx [ 885 ] ; xx [ 876 ] = xx [ 886 ] ; xx [ 877
] = xx [ 868 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 875 , xx + 887 )
; xx [ 857 ] = - 0.01611172203639097 ; xx [ 858 ] = 0.08940775463405408 ; xx
[ 859 ] = - 0.01738863530728779 ; xx [ 875 ] = 0.3738445815915403 ; xx [ 876
] = 0.05232566424469441 ; xx [ 877 ] = xx [ 876 ] * input [ 18 ] ; xx [ 878 ]
= 0.1283596099714154 ; xx [ 884 ] = 0.9170747320714838 ; xx [ 890 ] = xx [
884 ] * input [ 18 ] ; xx [ 891 ] = ( xx [ 875 ] * xx [ 877 ] + xx [ 878 ] *
xx [ 890 ] ) * xx [ 11 ] ; xx [ 892 ] = xx [ 11 ] * ( xx [ 878 ] * xx [ 877 ]
- xx [ 875 ] * xx [ 890 ] ) ; xx [ 875 ] = input [ 18 ] - ( xx [ 884 ] * xx [
890 ] + xx [ 876 ] * xx [ 877 ] ) * xx [ 11 ] ; xx [ 876 ] = xx [ 891 ] ; xx
[ 877 ] = xx [ 892 ] ; xx [ 878 ] = xx [ 875 ] ; pm_math_Vector3_cross_ra (
xx + 857 , xx + 876 , xx + 893 ) ; xx [ 857 ] = - 0.07813551322207424 ; xx [
858 ] = - 0.07488185776988014 ; xx [ 859 ] = - 0.08063127020363367 ; xx [ 876
] = 0.6719839501447126 ; xx [ 877 ] = 0.2032749862656283 ; xx [ 878 ] = xx [
877 ] * input [ 19 ] ; xx [ 884 ] = 0.2061892296031095 ; xx [ 890 ] =
0.6816178198244918 ; xx [ 896 ] = xx [ 890 ] * input [ 19 ] ; xx [ 897 ] = (
xx [ 876 ] * xx [ 878 ] + xx [ 884 ] * xx [ 896 ] ) * xx [ 11 ] ; xx [ 898 ]
= xx [ 11 ] * ( xx [ 876 ] * xx [ 896 ] - xx [ 884 ] * xx [ 878 ] ) ; xx [
876 ] = input [ 19 ] - ( xx [ 890 ] * xx [ 896 ] + xx [ 877 ] * xx [ 878 ] )
* xx [ 11 ] ; xx [ 899 ] = xx [ 897 ] ; xx [ 900 ] = xx [ 898 ] ; xx [ 901 ]
= xx [ 876 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 899 , xx + 902 ) ;
xx [ 857 ] = - 0.06541920003687404 ; xx [ 858 ] = - 0.06341232834231626 ; xx
[ 859 ] = - 0.03664426853416502 ; xx [ 877 ] = 0.3952613334176077 ; xx [ 878
] = 0.06996261369131997 ; xx [ 884 ] = xx [ 878 ] * input [ 20 ] ; xx [ 890 ]
= 0.15963610203949 ; xx [ 896 ] = 0.9018813812891651 ; xx [ 899 ] = xx [ 896
] * input [ 20 ] ; xx [ 900 ] = ( xx [ 877 ] * xx [ 884 ] + xx [ 890 ] * xx [
899 ] ) * xx [ 11 ] ; xx [ 901 ] = xx [ 11 ] * ( xx [ 877 ] * xx [ 899 ] - xx
[ 890 ] * xx [ 884 ] ) ; xx [ 877 ] = input [ 20 ] - ( xx [ 896 ] * xx [ 899
] + xx [ 878 ] * xx [ 884 ] ) * xx [ 11 ] ; xx [ 905 ] = xx [ 900 ] ; xx [
906 ] = xx [ 901 ] ; xx [ 907 ] = xx [ 877 ] ; pm_math_Vector3_cross_ra ( xx
+ 857 , xx + 905 , xx + 908 ) ; xx [ 857 ] = - 0.05343540310242927 ; xx [ 858
] = - 0.02914440309254185 ; xx [ 859 ] = - 0.01230147865112343 ; xx [ 878 ] =
0.1816444983963195 ; xx [ 884 ] = 5.97993263104886e-3 ; xx [ 890 ] = xx [ 884
] * input [ 21 ] ; xx [ 896 ] = 0.03235528515767411 ; xx [ 899 ] =
0.9828136405903428 ; xx [ 905 ] = xx [ 899 ] * input [ 21 ] ; xx [ 906 ] = (
xx [ 878 ] * xx [ 890 ] + xx [ 896 ] * xx [ 905 ] ) * xx [ 11 ] ; xx [ 907 ]
= xx [ 11 ] * ( xx [ 878 ] * xx [ 905 ] - xx [ 896 ] * xx [ 890 ] ) ; xx [
878 ] = input [ 21 ] - ( xx [ 899 ] * xx [ 905 ] + xx [ 884 ] * xx [ 890 ] )
* xx [ 11 ] ; xx [ 911 ] = - xx [ 906 ] ; xx [ 912 ] = xx [ 907 ] ; xx [ 913
] = xx [ 878 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 911 , xx + 914 )
; xx [ 857 ] = - 0.04174218435005596 ; xx [ 858 ] = 2.578507543879904e-3 ; xx
[ 859 ] = - 2.155619895922155e-3 ; xx [ 884 ] = 0.1177775862085695 ; xx [ 890
] = 1.357137734760766e-3 ; xx [ 896 ] = xx [ 890 ] * input [ 22 ] ; xx [ 899
] = 0.01144191508251483 ; xx [ 905 ] = 0.992973152176481 ; xx [ 911 ] = xx [
905 ] * input [ 22 ] ; xx [ 912 ] = ( xx [ 884 ] * xx [ 896 ] + xx [ 899 ] *
xx [ 911 ] ) * xx [ 11 ] ; xx [ 913 ] = xx [ 11 ] * ( xx [ 884 ] * xx [ 911 ]
- xx [ 899 ] * xx [ 896 ] ) ; xx [ 884 ] = input [ 22 ] - ( xx [ 905 ] * xx [
911 ] + xx [ 890 ] * xx [ 896 ] ) * xx [ 11 ] ; xx [ 917 ] = xx [ 912 ] ; xx
[ 918 ] = xx [ 913 ] ; xx [ 919 ] = xx [ 884 ] ; pm_math_Vector3_cross_ra (
xx + 857 , xx + 917 , xx + 920 ) ; xx [ 857 ] = - 0.0298702228373676 ; xx [
858 ] = 0.03388119678505078 ; xx [ 859 ] = - 2.6595320728453e-4 ; xx [ 890 ]
= 0.05529818018829774 ; xx [ 896 ] = 5.077945039952384e-3 ; xx [ 899 ] = xx [
896 ] * input [ 23 ] ; xx [ 905 ] = 0.09130259478335537 ; xx [ 911 ] =
0.9942736856257739 ; xx [ 917 ] = xx [ 911 ] * input [ 23 ] ; xx [ 918 ] = (
xx [ 890 ] * xx [ 899 ] + xx [ 905 ] * xx [ 917 ] ) * xx [ 11 ] ; xx [ 919 ]
= xx [ 11 ] * ( xx [ 905 ] * xx [ 899 ] - xx [ 890 ] * xx [ 917 ] ) ; xx [
890 ] = input [ 23 ] - ( xx [ 911 ] * xx [ 917 ] + xx [ 896 ] * xx [ 899 ] )
* xx [ 11 ] ; xx [ 923 ] = xx [ 918 ] ; xx [ 924 ] = xx [ 919 ] ; xx [ 925 ]
= xx [ 890 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 923 , xx + 926 ) ;
xx [ 857 ] = - 0.02974420424265709 ; xx [ 858 ] = 0.07584660877144452 ; xx [
859 ] = - 0.01081304937138132 ; xx [ 896 ] = 0.2347060105286138 ; xx [ 899 ]
= 0.02433684704752729 ; xx [ 905 ] = xx [ 899 ] * input [ 24 ] ; xx [ 911 ] =
0.1002253606239855 ; xx [ 917 ] = 0.9665793726256111 ; xx [ 923 ] = xx [ 917
] * input [ 24 ] ; xx [ 924 ] = ( xx [ 896 ] * xx [ 905 ] + xx [ 911 ] * xx [
923 ] ) * xx [ 11 ] ; xx [ 925 ] = xx [ 11 ] * ( xx [ 911 ] * xx [ 905 ] - xx
[ 896 ] * xx [ 923 ] ) ; xx [ 896 ] = input [ 24 ] - ( xx [ 917 ] * xx [ 923
] + xx [ 899 ] * xx [ 905 ] ) * xx [ 11 ] ; xx [ 929 ] = xx [ 924 ] ; xx [
930 ] = xx [ 925 ] ; xx [ 931 ] = xx [ 896 ] ; pm_math_Vector3_cross_ra ( xx
+ 857 , xx + 929 , xx + 932 ) ; xx [ 857 ] = - 0.08960460485429393 ; xx [ 858
] = - 0.06291809277694642 ; xx [ 859 ] = - 0.1158139126272258 ; xx [ 899 ] =
0.7040109547062257 ; xx [ 905 ] = 0.2872839190275042 ; xx [ 911 ] = xx [ 905
] * input [ 25 ] ; xx [ 917 ] = 0.2453906898907255 ; xx [ 923 ] =
0.6013484304766922 ; xx [ 929 ] = xx [ 923 ] * input [ 25 ] ; xx [ 930 ] = (
xx [ 899 ] * xx [ 911 ] + xx [ 917 ] * xx [ 929 ] ) * xx [ 11 ] ; xx [ 931 ]
= xx [ 11 ] * ( xx [ 899 ] * xx [ 929 ] - xx [ 917 ] * xx [ 911 ] ) ; xx [
899 ] = input [ 25 ] - ( xx [ 923 ] * xx [ 929 ] + xx [ 905 ] * xx [ 911 ] )
* xx [ 11 ] ; xx [ 935 ] = xx [ 930 ] ; xx [ 936 ] = xx [ 931 ] ; xx [ 937 ]
= xx [ 899 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 935 , xx + 938 ) ;
xx [ 857 ] = - 0.08896801860071794 ; xx [ 858 ] = - 0.06299677374886863 ; xx
[ 859 ] = - 0.05389307116019502 ; xx [ 905 ] = 0.5606844803157269 ; xx [ 911
] = 0.2326195333517636 ; xx [ 917 ] = xx [ 911 ] * input [ 26 ] ; xx [ 923 ]
= 0.3045325852124455 ; xx [ 929 ] = 0.7340170098711037 ; xx [ 935 ] = xx [
929 ] * input [ 26 ] ; xx [ 936 ] = ( xx [ 905 ] * xx [ 917 ] + xx [ 923 ] *
xx [ 935 ] ) * xx [ 11 ] ; xx [ 937 ] = xx [ 11 ] * ( xx [ 905 ] * xx [ 935 ]
- xx [ 923 ] * xx [ 917 ] ) ; xx [ 905 ] = input [ 26 ] - ( xx [ 929 ] * xx [
935 ] + xx [ 911 ] * xx [ 917 ] ) * xx [ 11 ] ; xx [ 941 ] = xx [ 936 ] ; xx
[ 942 ] = xx [ 937 ] ; xx [ 943 ] = xx [ 905 ] ; pm_math_Vector3_cross_ra (
xx + 857 , xx + 941 , xx + 944 ) ; xx [ 857 ] = - 0.07773176654997652 ; xx [
858 ] = - 0.04357084081088054 ; xx [ 859 ] = - 0.02434982318954793 ; xx [ 911
] = 0.2749898426753138 ; xx [ 917 ] = 0.03833910159182111 ; xx [ 923 ] = xx [
917 ] * input [ 27 ] ; xx [ 929 ] = 0.1326553343289313 ; xx [ 935 ] =
0.9514795121223674 ; xx [ 941 ] = xx [ 935 ] * input [ 27 ] ; xx [ 942 ] = (
xx [ 911 ] * xx [ 923 ] + xx [ 929 ] * xx [ 941 ] ) * xx [ 11 ] ; xx [ 943 ]
= xx [ 11 ] * ( xx [ 911 ] * xx [ 941 ] - xx [ 929 ] * xx [ 923 ] ) ; xx [
911 ] = input [ 27 ] - ( xx [ 935 ] * xx [ 941 ] + xx [ 917 ] * xx [ 923 ] )
* xx [ 11 ] ; xx [ 947 ] = xx [ 942 ] ; xx [ 948 ] = xx [ 943 ] ; xx [ 949 ]
= xx [ 911 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 947 , xx + 950 ) ;
xx [ 857 ] = - 0.03035817942245689 ; xx [ 858 ] = - 0.03213171883326053 ; xx
[ 859 ] = - 0.03537286040648836 ; xx [ 917 ] = 0.4891666736071779 ; xx [ 923
] = 0.3404924332321762 ; xx [ 929 ] = xx [ 923 ] * input [ 28 ] ; xx [ 935 ]
= 0.4587386818313518 ; xx [ 941 ] = 0.6590445281886155 ; xx [ 947 ] = xx [
941 ] * input [ 28 ] ; xx [ 948 ] = ( xx [ 917 ] * xx [ 929 ] + xx [ 935 ] *
xx [ 947 ] ) * xx [ 11 ] ; xx [ 949 ] = xx [ 11 ] * ( xx [ 917 ] * xx [ 947 ]
- xx [ 935 ] * xx [ 929 ] ) ; xx [ 917 ] = input [ 28 ] - ( xx [ 941 ] * xx [
947 ] + xx [ 923 ] * xx [ 929 ] ) * xx [ 11 ] ; xx [ 953 ] = - xx [ 948 ] ;
xx [ 954 ] = xx [ 949 ] ; xx [ 955 ] = xx [ 917 ] ; pm_math_Vector3_cross_ra
( xx + 857 , xx + 953 , xx + 956 ) ; xx [ 857 ] = - 0.06547974787437513 ; xx
[ 858 ] = - 5.296907315530508e-3 ; xx [ 859 ] = - 6.867139918208744e-3 ; xx [
923 ] = 0.08330673857160131 ; xx [ 929 ] = 0.01332357166802973 ; xx [ 935 ] =
xx [ 929 ] * input [ 29 ] ; xx [ 941 ] = 0.1573638297661972 ; xx [ 947 ] =
0.9839304319045555 ; xx [ 953 ] = xx [ 947 ] * input [ 29 ] ; xx [ 954 ] = (
xx [ 923 ] * xx [ 935 ] + xx [ 941 ] * xx [ 953 ] ) * xx [ 11 ] ; xx [ 955 ]
= xx [ 11 ] * ( xx [ 923 ] * xx [ 953 ] - xx [ 941 ] * xx [ 935 ] ) ; xx [
923 ] = input [ 29 ] - ( xx [ 947 ] * xx [ 953 ] + xx [ 929 ] * xx [ 935 ] )
* xx [ 11 ] ; xx [ 959 ] = xx [ 954 ] ; xx [ 960 ] = xx [ 955 ] ; xx [ 961 ]
= xx [ 923 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 959 , xx + 962 ) ;
xx [ 857 ] = - 0.05341786692824899 ; xx [ 858 ] = 0.02810056500516415 ; xx [
859 ] = - 3.330290106866822e-3 ; xx [ 929 ] = 0.05921261819000172 ; xx [ 935
] = 4.064864382457281e-3 ; xx [ 941 ] = xx [ 935 ] * input [ 30 ] ; xx [ 947
] = 0.06836669742036049 ; xx [ 953 ] = 0.9958932359487489 ; xx [ 959 ] = xx [
953 ] * input [ 30 ] ; xx [ 960 ] = ( xx [ 929 ] * xx [ 941 ] + xx [ 947 ] *
xx [ 959 ] ) * xx [ 11 ] ; xx [ 961 ] = xx [ 11 ] * ( xx [ 947 ] * xx [ 941 ]
- xx [ 929 ] * xx [ 959 ] ) ; xx [ 929 ] = input [ 30 ] - ( xx [ 953 ] * xx [
959 ] + xx [ 935 ] * xx [ 941 ] ) * xx [ 11 ] ; xx [ 965 ] = xx [ 960 ] ; xx
[ 966 ] = xx [ 961 ] ; xx [ 967 ] = xx [ 929 ] ; pm_math_Vector3_cross_ra (
xx + 857 , xx + 965 , xx + 968 ) ; xx [ 857 ] = - 0.04168227632510423 ; xx [
858 ] = 0.05293569742340269 ; xx [ 859 ] = - 5.452647462001437e-3 ; xx [ 935
] = 0.09627478574816675 ; xx [ 941 ] = 8.967548559563873e-3 ; xx [ 947 ] = xx
[ 941 ] * input [ 31 ] ; xx [ 953 ] = 0.09230933376714978 ; xx [ 959 ] =
0.9910245887975947 ; xx [ 965 ] = xx [ 959 ] * input [ 31 ] ; xx [ 966 ] = (
xx [ 935 ] * xx [ 947 ] + xx [ 953 ] * xx [ 965 ] ) * xx [ 11 ] ; xx [ 967 ]
= xx [ 11 ] * ( xx [ 953 ] * xx [ 947 ] - xx [ 935 ] * xx [ 965 ] ) ; xx [
935 ] = input [ 31 ] - ( xx [ 959 ] * xx [ 965 ] + xx [ 941 ] * xx [ 947 ] )
* xx [ 11 ] ; xx [ 971 ] = xx [ 966 ] ; xx [ 972 ] = xx [ 967 ] ; xx [ 973 ]
= xx [ 935 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 971 , xx + 974 ) ;
xx [ 857 ] = - 0.1008247640510678 ; xx [ 858 ] = - 0.05389196638887112 ; xx [
859 ] = - 0.08618641347308455 ; xx [ 941 ] = 0.661172783054223 ; xx [ 947 ] =
0.3060055400884168 ; xx [ 953 ] = xx [ 947 ] * input [ 32 ] ; xx [ 959 ] =
0.2877084151115709 ; xx [ 965 ] = 0.6216389854710833 ; xx [ 971 ] = xx [ 965
] * input [ 32 ] ; xx [ 972 ] = ( xx [ 941 ] * xx [ 953 ] + xx [ 959 ] * xx [
971 ] ) * xx [ 11 ] ; xx [ 973 ] = xx [ 11 ] * ( xx [ 941 ] * xx [ 971 ] - xx
[ 959 ] * xx [ 953 ] ) ; xx [ 941 ] = input [ 32 ] - ( xx [ 965 ] * xx [ 971
] + xx [ 947 ] * xx [ 953 ] ) * xx [ 11 ] ; xx [ 977 ] = xx [ 972 ] ; xx [
978 ] = xx [ 973 ] ; xx [ 979 ] = xx [ 941 ] ; pm_math_Vector3_cross_ra ( xx
+ 857 , xx + 977 , xx + 980 ) ; xx [ 857 ] = - 0.1004655964981073 ; xx [ 858
] = - 0.03582136460888253 ; xx [ 859 ] = - 0.03586499238265095 ; xx [ 947 ] =
0.2631242048848931 ; xx [ 953 ] = 0.1314352705630057 ; xx [ 959 ] = xx [ 953
] * input [ 33 ] ; xx [ 965 ] = 0.4271022177782172 ; xx [ 971 ] =
0.8550287235085443 ; xx [ 977 ] = xx [ 971 ] * input [ 33 ] ; xx [ 978 ] = (
xx [ 947 ] * xx [ 959 ] + xx [ 965 ] * xx [ 977 ] ) * xx [ 11 ] ; xx [ 979 ]
= xx [ 11 ] * ( xx [ 947 ] * xx [ 977 ] - xx [ 965 ] * xx [ 959 ] ) ; xx [
947 ] = input [ 33 ] - ( xx [ 971 ] * xx [ 977 ] + xx [ 953 ] * xx [ 959 ] )
* xx [ 11 ] ; xx [ 983 ] = xx [ 978 ] ; xx [ 984 ] = xx [ 979 ] ; xx [ 985 ]
= xx [ 947 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 983 , xx + 986 ) ;
xx [ 857 ] = - 0.08913241730412479 ; xx [ 858 ] = - 0.01002385799363545 ; xx
[ 859 ] = - 0.01767933169316634 ; xx [ 953 ] = 0.06280224623279192 ; xx [ 959
] = 0.02051569230480004 ; xx [ 965 ] = xx [ 959 ] * input [ 34 ] ; xx [ 971 ]
= 0.3098441770463061 ; xx [ 977 ] = 0.9484890986130882 ; xx [ 983 ] = xx [
977 ] * input [ 34 ] ; xx [ 984 ] = ( xx [ 953 ] * xx [ 965 ] + xx [ 971 ] *
xx [ 983 ] ) * xx [ 11 ] ; xx [ 985 ] = xx [ 11 ] * ( xx [ 953 ] * xx [ 983 ]
- xx [ 971 ] * xx [ 965 ] ) ; xx [ 953 ] = input [ 34 ] - ( xx [ 977 ] * xx [
983 ] + xx [ 959 ] * xx [ 965 ] ) * xx [ 11 ] ; xx [ 989 ] = xx [ 984 ] ; xx
[ 990 ] = xx [ 985 ] ; xx [ 991 ] = xx [ 953 ] ; pm_math_Vector3_cross_ra (
xx + 857 , xx + 989 , xx + 992 ) ; xx [ 857 ] = - 0.07763897849411783 ; xx [
858 ] = 0.02926835419972364 ; xx [ 859 ] = - 0.01269421207333463 ; xx [ 959 ]
= 0.1126124065964388 ; xx [ 965 ] = 0.02994703367582809 ; xx [ 971 ] = xx [
965 ] * input [ 35 ] ; xx [ 977 ] = 0.255247291818142 ; xx [ 983 ] =
0.9598283393784962 ; xx [ 989 ] = xx [ 983 ] * input [ 35 ] ; xx [ 990 ] = (
xx [ 959 ] * xx [ 971 ] + xx [ 977 ] * xx [ 989 ] ) * xx [ 11 ] ; xx [ 991 ]
= xx [ 11 ] * ( xx [ 977 ] * xx [ 971 ] - xx [ 959 ] * xx [ 989 ] ) ; xx [
959 ] = input [ 35 ] - ( xx [ 983 ] * xx [ 989 ] + xx [ 965 ] * xx [ 971 ] )
* xx [ 11 ] ; xx [ 995 ] = xx [ 990 ] ; xx [ 996 ] = xx [ 991 ] ; xx [ 997 ]
= xx [ 959 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 995 , xx + 998 ) ;
xx [ 857 ] = - 0.0650908352898615 ; xx [ 858 ] = 0.05673454466592224 ; xx [
859 ] = - 0.01754534783938935 ; xx [ 965 ] = 0.2624187067767951 ; xx [ 971 ]
= 0.07539763865837239 ; xx [ 977 ] = xx [ 971 ] * input [ 36 ] ; xx [ 983 ] =
0.2656534715216997 ; xx [ 989 ] = 0.9245971292875649 ; xx [ 995 ] = xx [ 989
] * input [ 36 ] ; xx [ 996 ] = ( xx [ 965 ] * xx [ 977 ] + xx [ 983 ] * xx [
995 ] ) * xx [ 11 ] ; xx [ 997 ] = xx [ 11 ] * ( xx [ 983 ] * xx [ 977 ] - xx
[ 965 ] * xx [ 995 ] ) ; xx [ 965 ] = input [ 36 ] - ( xx [ 989 ] * xx [ 995
] + xx [ 971 ] * xx [ 977 ] ) * xx [ 11 ] ; xx [ 1001 ] = xx [ 996 ] ; xx [
1002 ] = xx [ 997 ] ; xx [ 1003 ] = xx [ 965 ] ; pm_math_Vector3_cross_ra (
xx + 857 , xx + 1001 , xx + 1004 ) ; xx [ 857 ] = - 0.05277755577526828 ; xx
[ 858 ] = 0.07507634805077533 ; xx [ 859 ] = - 0.02557099641168105 ; xx [ 971
] = 0.4218960054902527 ; xx [ 977 ] = 0.1353871726335023 ; xx [ 983 ] = xx [
977 ] * input [ 37 ] ; xx [ 989 ] = 0.2739231083818127 ; xx [ 995 ] =
0.8536042436235428 ; xx [ 1001 ] = xx [ 995 ] * input [ 37 ] ; xx [ 1002 ] =
( xx [ 971 ] * xx [ 983 ] + xx [ 989 ] * xx [ 1001 ] ) * xx [ 11 ] ; xx [
1003 ] = xx [ 11 ] * ( xx [ 989 ] * xx [ 983 ] - xx [ 971 ] * xx [ 1001 ] ) ;
xx [ 971 ] = input [ 37 ] - ( xx [ 995 ] * xx [ 1001 ] + xx [ 977 ] * xx [
983 ] ) * xx [ 11 ] ; xx [ 1007 ] = xx [ 1002 ] ; xx [ 1008 ] = xx [ 1003 ] ;
xx [ 1009 ] = xx [ 971 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 1007 ,
xx + 1010 ) ; xx [ 857 ] = - 0.04146508584349638 ; xx [ 858 ] =
0.08823626900202458 ; xx [ 859 ] = - 0.03394340829250521 ; xx [ 977 ] =
0.5420216016703115 ; xx [ 983 ] = 0.1665270222508411 ; xx [ 989 ] = xx [ 983
] * input [ 38 ] ; xx [ 995 ] = 0.2419081906541831 ; xx [ 1001 ] =
0.7873765055406705 ; xx [ 1007 ] = xx [ 1001 ] * input [ 38 ] ; xx [ 1008 ] =
( xx [ 977 ] * xx [ 989 ] + xx [ 995 ] * xx [ 1007 ] ) * xx [ 11 ] ; xx [
1009 ] = xx [ 11 ] * ( xx [ 995 ] * xx [ 989 ] - xx [ 977 ] * xx [ 1007 ] ) ;
xx [ 977 ] = input [ 38 ] - ( xx [ 1001 ] * xx [ 1007 ] + xx [ 983 ] * xx [
989 ] ) * xx [ 11 ] ; xx [ 1013 ] = xx [ 1008 ] ; xx [ 1014 ] = xx [ 1009 ] ;
xx [ 1015 ] = xx [ 977 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 1013 ,
xx + 1016 ) ; xx [ 857 ] = - 0.01725167774610059 ; xx [ 858 ] = -
7.293875250063496e-3 ; xx [ 859 ] = - 0.0148852216814814 ; xx [ 983 ] =
0.6632024936583343 ; xx [ 989 ] = 0.1731754394844267 ; xx [ 995 ] = xx [ 989
] * input [ 39 ] ; xx [ 1001 ] = 0.1839610466043279 ; xx [ 1007 ] =
0.7045076670249825 ; xx [ 1013 ] = xx [ 1007 ] * input [ 39 ] ; xx [ 1014 ] =
( xx [ 983 ] * xx [ 995 ] + xx [ 1001 ] * xx [ 1013 ] ) * xx [ 11 ] ; xx [
1015 ] = xx [ 11 ] * ( xx [ 983 ] * xx [ 1013 ] - xx [ 1001 ] * xx [ 995 ] )
; xx [ 983 ] = input [ 39 ] - ( xx [ 1007 ] * xx [ 1013 ] + xx [ 989 ] * xx [
995 ] ) * xx [ 11 ] ; xx [ 1019 ] = - xx [ 1014 ] ; xx [ 1020 ] = xx [ 1015 ]
; xx [ 1021 ] = xx [ 983 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 1019
, xx + 1022 ) ; xx [ 857 ] = - 0.1088176366578311 ; xx [ 858 ] = -
0.03672198862995138 ; xx [ 859 ] = - 0.1164296265327258 ; xx [ 989 ] =
0.6776280350405145 ; xx [ 995 ] = 0.427089070547183 ; xx [ 1001 ] = xx [ 995
] * input [ 40 ] ; xx [ 1007 ] = 0.3192159680645557 ; xx [ 1013 ] =
0.5064744195701136 ; xx [ 1019 ] = xx [ 1013 ] * input [ 40 ] ; xx [ 1020 ] =
( xx [ 989 ] * xx [ 1001 ] + xx [ 1007 ] * xx [ 1019 ] ) * xx [ 11 ] ; xx [
1021 ] = xx [ 11 ] * ( xx [ 989 ] * xx [ 1019 ] - xx [ 1007 ] * xx [ 1001 ] )
; xx [ 989 ] = input [ 40 ] - ( xx [ 1013 ] * xx [ 1019 ] + xx [ 995 ] * xx [
1001 ] ) * xx [ 11 ] ; xx [ 1025 ] = xx [ 1020 ] ; xx [ 1026 ] = xx [ 1021 ]
; xx [ 1027 ] = xx [ 989 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx + 1025
, xx + 1028 ) ; xx [ 857 ] = - 0.1090246450527187 ; xx [ 858 ] = -
0.0393561065615584 ; xx [ 859 ] = - 0.06805735492308039 ; xx [ 995 ] =
0.5197036589200118 ; xx [ 1001 ] = 0.3653225989192338 ; xx [ 1007 ] = xx [
1001 ] * input [ 41 ] ; xx [ 1013 ] = 0.4441325812467261 ; xx [ 1019 ] =
0.6318178185989765 ; xx [ 1025 ] = xx [ 1019 ] * input [ 41 ] ; xx [ 1026 ] =
( xx [ 995 ] * xx [ 1007 ] + xx [ 1013 ] * xx [ 1025 ] ) * xx [ 11 ] ; xx [
1027 ] = xx [ 11 ] * ( xx [ 995 ] * xx [ 1025 ] - xx [ 1013 ] * xx [ 1007 ] )
; xx [ 995 ] = input [ 41 ] - ( xx [ 1019 ] * xx [ 1025 ] + xx [ 1001 ] * xx
[ 1007 ] ) * xx [ 11 ] ; xx [ 1031 ] = xx [ 1026 ] ; xx [ 1032 ] = xx [ 1027
] ; xx [ 1033 ] = xx [ 995 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx +
1031 , xx + 1034 ) ; xx [ 857 ] = - 0.1085660128406191 ; xx [ 858 ] = -
8.240157635229641e-3 ; xx [ 859 ] = - 0.0383302197705869 ; xx [ 1001 ] =
0.02566070414415076 ; xx [ 1007 ] = 0.01743713672443727 ; xx [ 1013 ] = xx [
1007 ] * input [ 42 ] ; xx [ 1019 ] = 0.5617718096747571 ; xx [ 1025 ] =
0.8267102928961441 ; xx [ 1031 ] = xx [ 1025 ] * input [ 42 ] ; xx [ 1032 ] =
( xx [ 1001 ] * xx [ 1013 ] + xx [ 1019 ] * xx [ 1031 ] ) * xx [ 11 ] ; xx [
1033 ] = xx [ 11 ] * ( xx [ 1001 ] * xx [ 1031 ] - xx [ 1019 ] * xx [ 1013 ]
) ; xx [ 1001 ] = input [ 42 ] - ( xx [ 1025 ] * xx [ 1031 ] + xx [ 1007 ] *
xx [ 1013 ] ) * xx [ 11 ] ; xx [ 1037 ] = xx [ 1032 ] ; xx [ 1038 ] = xx [
1033 ] ; xx [ 1039 ] = xx [ 1001 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1037 , xx + 1040 ) ; xx [ 857 ] = - 0.1002889443706825 ; xx [ 858 ] =
0.0215172771559628 ; xx [ 859 ] = - 0.03134160901195143 ; xx [ 1007 ] =
0.1937497476864955 ; xx [ 1013 ] = 0.1060397759083277 ; xx [ 1019 ] = xx [
1013 ] * input [ 43 ] ; xx [ 1025 ] = 0.4682442847113035 ; xx [ 1031 ] =
0.8555488829002882 ; xx [ 1037 ] = xx [ 1031 ] * input [ 43 ] ; xx [ 1038 ] =
( xx [ 1007 ] * xx [ 1019 ] + xx [ 1025 ] * xx [ 1037 ] ) * xx [ 11 ] ; xx [
1039 ] = xx [ 11 ] * ( xx [ 1025 ] * xx [ 1019 ] - xx [ 1007 ] * xx [ 1037 ]
) ; xx [ 1007 ] = input [ 43 ] - ( xx [ 1031 ] * xx [ 1037 ] + xx [ 1013 ] *
xx [ 1019 ] ) * xx [ 11 ] ; xx [ 1043 ] = xx [ 1038 ] ; xx [ 1044 ] = xx [
1039 ] ; xx [ 1045 ] = xx [ 1007 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1043 , xx + 1046 ) ; xx [ 857 ] = - 0.08825404787879754 ; xx [ 858 ] =
0.05085694606056507 ; xx [ 859 ] = - 0.04022128746621207 ; xx [ 1013 ] =
0.4329293027057527 ; xx [ 1019 ] = 0.2388834572967249 ; xx [ 1025 ] = xx [
1019 ] * input [ 44 ] ; xx [ 1031 ] = 0.4199252650269746 ; xx [ 1037 ] =
0.7610319865029983 ; xx [ 1043 ] = xx [ 1037 ] * input [ 44 ] ; xx [ 1044 ] =
( xx [ 1013 ] * xx [ 1025 ] + xx [ 1031 ] * xx [ 1043 ] ) * xx [ 11 ] ; xx [
1045 ] = xx [ 11 ] * ( xx [ 1031 ] * xx [ 1025 ] - xx [ 1013 ] * xx [ 1043 ]
) ; xx [ 1013 ] = input [ 44 ] - ( xx [ 1037 ] * xx [ 1043 ] + xx [ 1019 ] *
xx [ 1025 ] ) * xx [ 11 ] ; xx [ 1049 ] = xx [ 1044 ] ; xx [ 1050 ] = xx [
1045 ] ; xx [ 1051 ] = xx [ 1013 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1049 , xx + 1052 ) ; xx [ 857 ] = - 0.07778373213920264 ; xx [ 858 ] =
0.06920777240521035 ; xx [ 859 ] = - 0.05836215232293852 ; xx [ 1019 ] =
0.6395227562463073 ; xx [ 1025 ] = 0.2517984334672473 ; xx [ 1031 ] = xx [
1025 ] * input [ 45 ] ; xx [ 1037 ] = 0.2661078040580403 ; xx [ 1043 ] =
0.6758659850635882 ; xx [ 1049 ] = xx [ 1043 ] * input [ 45 ] ; xx [ 1050 ] =
( xx [ 1019 ] * xx [ 1031 ] + xx [ 1037 ] * xx [ 1049 ] ) * xx [ 11 ] ; xx [
1051 ] = xx [ 11 ] * ( xx [ 1037 ] * xx [ 1031 ] - xx [ 1019 ] * xx [ 1049 ]
) ; xx [ 1019 ] = input [ 45 ] - ( xx [ 1043 ] * xx [ 1049 ] + xx [ 1025 ] *
xx [ 1031 ] ) * xx [ 11 ] ; xx [ 1055 ] = xx [ 1050 ] ; xx [ 1056 ] = xx [
1051 ] ; xx [ 1057 ] = xx [ 1019 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1055 , xx + 1058 ) ; xx [ 857 ] = - 0.0602032403376731 ; xx [ 858 ] =
0.08203106316879522 ; xx [ 859 ] = - 0.0748733734520845 ; xx [ 1025 ] =
0.6940948608111935 ; xx [ 1031 ] = 0.2053956680732152 ; xx [ 1037 ] = xx [
1031 ] * input [ 46 ] ; xx [ 1043 ] = 0.1957799622059196 ; xx [ 1049 ] =
0.6616004459875284 ; xx [ 1055 ] = xx [ 1049 ] * input [ 46 ] ; xx [ 1056 ] =
( xx [ 1025 ] * xx [ 1037 ] + xx [ 1043 ] * xx [ 1055 ] ) * xx [ 11 ] ; xx [
1057 ] = xx [ 11 ] * ( xx [ 1043 ] * xx [ 1037 ] - xx [ 1025 ] * xx [ 1055 ]
) ; xx [ 1025 ] = input [ 46 ] - ( xx [ 1049 ] * xx [ 1055 ] + xx [ 1031 ] *
xx [ 1037 ] ) * xx [ 11 ] ; xx [ 1061 ] = xx [ 1056 ] ; xx [ 1062 ] = xx [
1057 ] ; xx [ 1063 ] = xx [ 1025 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1061 , xx + 1064 ) ; xx [ 857 ] = - 0.1143978971912872 ; xx [ 858 ] = -
0.01074410159992742 ; xx [ 859 ] = - 0.1239980564908309 ; xx [ 1031 ] =
0.6377272327882759 ; xx [ 1037 ] = 0.6305933820461086 ; xx [ 1043 ] = xx [
1037 ] * input [ 47 ] ; xx [ 1049 ] = 0.3199249703720028 ; xx [ 1055 ] =
0.3054569960114387 ; xx [ 1061 ] = xx [ 1055 ] * input [ 47 ] ; xx [ 1062 ] =
( xx [ 1031 ] * xx [ 1043 ] + xx [ 1049 ] * xx [ 1061 ] ) * xx [ 11 ] ; xx [
1063 ] = xx [ 11 ] * ( xx [ 1031 ] * xx [ 1061 ] - xx [ 1049 ] * xx [ 1043 ]
) ; xx [ 1031 ] = input [ 47 ] - ( xx [ 1055 ] * xx [ 1061 ] + xx [ 1037 ] *
xx [ 1043 ] ) * xx [ 11 ] ; xx [ 1067 ] = xx [ 1062 ] ; xx [ 1068 ] = xx [
1063 ] ; xx [ 1069 ] = xx [ 1031 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1067 , xx + 1070 ) ; xx [ 857 ] = - 0.1151109708215916 ; xx [ 858 ] = -
0.01075804635765636 ; xx [ 859 ] = - 0.08461401534740115 ; xx [ 1037 ] =
0.4666321198618352 ; xx [ 1043 ] = 0.4902460693848289 ; xx [ 1049 ] = xx [
1043 ] * input [ 48 ] ; xx [ 1055 ] = 0.5095672592114674 ; xx [ 1061 ] =
0.53127626006221 ; xx [ 1067 ] = xx [ 1061 ] * input [ 48 ] ; xx [ 1068 ] = (
xx [ 1037 ] * xx [ 1049 ] + xx [ 1055 ] * xx [ 1067 ] ) * xx [ 11 ] ; xx [
1069 ] = xx [ 11 ] * ( xx [ 1037 ] * xx [ 1067 ] - xx [ 1055 ] * xx [ 1049 ]
) ; xx [ 1037 ] = input [ 48 ] - ( xx [ 1061 ] * xx [ 1067 ] + xx [ 1043 ] *
xx [ 1049 ] ) * xx [ 11 ] ; xx [ 1073 ] = xx [ 1068 ] ; xx [ 1074 ] = xx [
1069 ] ; xx [ 1075 ] = xx [ 1037 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1073 , xx + 1076 ) ; xx [ 857 ] = - 0.1089181529967568 ; xx [ 858 ] =
0.02522537869168801 ; xx [ 859 ] = - 0.06782609012651207 ; xx [ 1043 ] =
0.5150379189616971 ; xx [ 1049 ] = 0.4000839555183756 ; xx [ 1055 ] = xx [
1049 ] * input [ 49 ] ; xx [ 1061 ] = 0.4650464120507912 ; xx [ 1067 ] =
0.598665687347338 ; xx [ 1073 ] = xx [ 1067 ] * input [ 49 ] ; xx [ 1074 ] =
( xx [ 1043 ] * xx [ 1055 ] + xx [ 1061 ] * xx [ 1073 ] ) * xx [ 11 ] ; xx [
1075 ] = xx [ 11 ] * ( xx [ 1061 ] * xx [ 1055 ] - xx [ 1043 ] * xx [ 1073 ]
) ; xx [ 1043 ] = input [ 49 ] - ( xx [ 1067 ] * xx [ 1073 ] + xx [ 1049 ] *
xx [ 1055 ] ) * xx [ 11 ] ; xx [ 1079 ] = xx [ 1074 ] ; xx [ 1080 ] = xx [
1075 ] ; xx [ 1081 ] = xx [ 1043 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1079 , xx + 1082 ) ; xx [ 857 ] = - 0.06588460407050081 ; xx [ 858 ] = -
0.07959463952718712 ; xx [ 859 ] = - 0.09123943252004506 ; xx [ 1049 ] =
0.7220158820274279 ; xx [ 1055 ] = 0.05371025093528867 ; xx [ 1061 ] = xx [
1055 ] * input [ 50 ] ; xx [ 1067 ] = 0.05117149400750862 ; xx [ 1073 ] =
0.6878878929343526 ; xx [ 1079 ] = xx [ 1073 ] * input [ 50 ] ; xx [ 1080 ] =
( xx [ 1049 ] * xx [ 1061 ] + xx [ 1067 ] * xx [ 1079 ] ) * xx [ 11 ] ; xx [
1081 ] = xx [ 11 ] * ( xx [ 1049 ] * xx [ 1079 ] - xx [ 1067 ] * xx [ 1061 ]
) ; xx [ 1049 ] = input [ 50 ] - ( xx [ 1073 ] * xx [ 1079 ] + xx [ 1055 ] *
xx [ 1061 ] ) * xx [ 11 ] ; xx [ 1085 ] = xx [ 1080 ] ; xx [ 1086 ] = xx [
1081 ] ; xx [ 1087 ] = xx [ 1049 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1085 , xx + 1088 ) ; xx [ 857 ] = - 0.1090036909983146 ; xx [ 858 ] =
0.01817465773016072 ; xx [ 859 ] = - 0.1239039825644493 ; xx [ 1055 ] =
0.6677460747179526 ; xx [ 1061 ] = 0.4544566948802226 ; xx [ 1067 ] = xx [
1061 ] * input [ 51 ] ; xx [ 1073 ] = 0.3317113808219959 ; xx [ 1079 ] =
0.4873929133773655 ; xx [ 1085 ] = xx [ 1079 ] * input [ 51 ] ; xx [ 1086 ] =
( xx [ 1055 ] * xx [ 1067 ] + xx [ 1073 ] * xx [ 1085 ] ) * xx [ 11 ] ; xx [
1087 ] = xx [ 11 ] * ( xx [ 1073 ] * xx [ 1067 ] - xx [ 1055 ] * xx [ 1085 ]
) ; xx [ 1055 ] = input [ 51 ] - ( xx [ 1079 ] * xx [ 1085 ] + xx [ 1061 ] *
xx [ 1067 ] ) * xx [ 11 ] ; xx [ 1091 ] = xx [ 1086 ] ; xx [ 1092 ] = xx [
1087 ] ; xx [ 1093 ] = xx [ 1055 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1091 , xx + 1094 ) ; xx [ 857 ] = - 0.1009356428263194 ; xx [ 858 ] =
0.04283189637270055 ; xx [ 859 ] = - 0.08674853388306464 ; xx [ 1061 ] =
0.6771997737581915 ; xx [ 1067 ] = 0.3636835401886195 ; xx [ 1073 ] = xx [
1067 ] * input [ 52 ] ; xx [ 1079 ] = 0.3026304367073079 ; xx [ 1085 ] =
0.5635153660691705 ; xx [ 1091 ] = xx [ 1085 ] * input [ 52 ] ; xx [ 1092 ] =
( xx [ 1061 ] * xx [ 1073 ] + xx [ 1079 ] * xx [ 1091 ] ) * xx [ 11 ] ; xx [
1093 ] = xx [ 11 ] * ( xx [ 1079 ] * xx [ 1073 ] - xx [ 1061 ] * xx [ 1091 ]
) ; xx [ 1061 ] = input [ 52 ] - ( xx [ 1085 ] * xx [ 1091 ] + xx [ 1067 ] *
xx [ 1073 ] ) * xx [ 11 ] ; xx [ 1097 ] = xx [ 1092 ] ; xx [ 1098 ] = xx [
1093 ] ; xx [ 1099 ] = xx [ 1061 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1097 , xx + 1100 ) ; xx [ 857 ] = - 0.08364765664069315 ; xx [ 858 ] =
0.05885119021368576 ; xx [ 859 ] = - 0.1171046153075557 ; xx [ 1067 ] =
0.7067331897966952 ; xx [ 1073 ] = 0.3119482575694982 ; xx [ 1079 ] = xx [
1073 ] * input [ 53 ] ; xx [ 1085 ] = 0.2564149206882397 ; xx [ 1091 ] =
0.580919849452217 ; xx [ 1097 ] = xx [ 1091 ] * input [ 53 ] ; xx [ 1098 ] =
( xx [ 1067 ] * xx [ 1079 ] + xx [ 1085 ] * xx [ 1097 ] ) * xx [ 11 ] ; xx [
1099 ] = xx [ 11 ] * ( xx [ 1085 ] * xx [ 1079 ] - xx [ 1067 ] * xx [ 1097 ]
) ; xx [ 1067 ] = input [ 53 ] - ( xx [ 1091 ] * xx [ 1097 ] + xx [ 1073 ] *
xx [ 1079 ] ) * xx [ 11 ] ; xx [ 1103 ] = xx [ 1098 ] ; xx [ 1104 ] = xx [
1099 ] ; xx [ 1105 ] = xx [ 1067 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1103 , xx + 1106 ) ; xx [ 857 ] = 7.346085301000095e-11 ; xx [ 858 ] =
0.08915795098142906 ; xx [ 859 ] = - 0.01101380984473742 ; xx [ 1073 ] =
0.1793252316684608 ; xx [ 1079 ] = 2.073990563595057e-10 ; xx [ 1085 ] = xx [
1079 ] * input [ 54 ] ; xx [ 1091 ] = 1.168303251267773e-11 ; xx [ 1097 ] =
0.9837898460987758 ; xx [ 1103 ] = xx [ 1097 ] * input [ 54 ] ; xx [ 1104 ] =
( xx [ 1073 ] * xx [ 1085 ] + xx [ 1091 ] * xx [ 1103 ] ) * xx [ 11 ] ; xx [
1105 ] = xx [ 11 ] * ( xx [ 1091 ] * xx [ 1085 ] - xx [ 1073 ] * xx [ 1103 ]
) ; xx [ 1073 ] = input [ 54 ] - ( xx [ 1097 ] * xx [ 1103 ] + xx [ 1079 ] *
xx [ 1085 ] ) * xx [ 11 ] ; xx [ 1109 ] = - xx [ 1104 ] ; xx [ 1110 ] = xx [
1105 ] ; xx [ 1111 ] = xx [ 1073 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1109 , xx + 1112 ) ; xx [ 857 ] = 5.209776461554911e-11 ; xx [ 858 ] =
0.03919438724272629 ; xx [ 859 ] = 3.868436680280641e-3 ; xx [ 1079 ] =
6.43744375539838e-12 ; xx [ 1085 ] = xx [ 866 ] * input [ 55 ] ; xx [ 1091 ]
= 2.076280837107586e-10 ; xx [ 1097 ] = xx [ 1091 ] * input [ 55 ] ; xx [
1103 ] = ( xx [ 1079 ] * xx [ 1085 ] - xx [ 864 ] * xx [ 1097 ] ) * xx [ 11 ]
; xx [ 1109 ] = xx [ 11 ] * ( xx [ 1079 ] * xx [ 1097 ] + xx [ 864 ] * xx [
1085 ] ) ; xx [ 1079 ] = input [ 55 ] - ( xx [ 866 ] * xx [ 1085 ] + xx [
1091 ] * xx [ 1097 ] ) * xx [ 11 ] ; xx [ 1115 ] = xx [ 1103 ] ; xx [ 1116 ]
= - xx [ 1109 ] ; xx [ 1117 ] = xx [ 1079 ] ; pm_math_Vector3_cross_ra ( xx +
857 , xx + 1115 , xx + 1118 ) ; xx [ 857 ] = 0.01750679323010461 ; xx [ 858 ]
= - 0.0129053603421838 ; xx [ 859 ] = - 0.05164023244560817 ; xx [ 1085 ] =
0.6253013330622943 ; xx [ 1091 ] = 0.2647300943604388 ; xx [ 1097 ] = xx [
1091 ] * input [ 56 ] ; xx [ 1110 ] = 0.2862028930797249 ; xx [ 1111 ] =
0.6760208014574897 ; xx [ 1115 ] = xx [ 1111 ] * input [ 56 ] ; xx [ 1116 ] =
( xx [ 1085 ] * xx [ 1097 ] + xx [ 1110 ] * xx [ 1115 ] ) * xx [ 11 ] ; xx [
1117 ] = xx [ 11 ] * ( xx [ 1085 ] * xx [ 1115 ] - xx [ 1110 ] * xx [ 1097 ]
) ; xx [ 1085 ] = input [ 56 ] - ( xx [ 1111 ] * xx [ 1115 ] + xx [ 1091 ] *
xx [ 1097 ] ) * xx [ 11 ] ; xx [ 1121 ] = xx [ 1116 ] ; xx [ 1122 ] = xx [
1117 ] ; xx [ 1123 ] = xx [ 1085 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1121 , xx + 1124 ) ; xx [ 857 ] = 0.04082091632007744 ; xx [ 858 ] = -
0.05961285218043077 ; xx [ 859 ] = - 0.05914702068835351 ; xx [ 1091 ] =
0.6043991864368889 ; xx [ 1097 ] = 0.3996382355394038 ; xx [ 1110 ] = xx [
1097 ] * input [ 57 ] ; xx [ 1111 ] = 0.3801248533522478 ; xx [ 1115 ] =
0.574887815137276 ; xx [ 1121 ] = xx [ 1115 ] * input [ 57 ] ; xx [ 1122 ] =
( xx [ 1091 ] * xx [ 1110 ] + xx [ 1111 ] * xx [ 1121 ] ) * xx [ 11 ] ; xx [
1123 ] = xx [ 11 ] * ( xx [ 1091 ] * xx [ 1121 ] - xx [ 1111 ] * xx [ 1110 ]
) ; xx [ 1091 ] = input [ 57 ] - ( xx [ 1115 ] * xx [ 1121 ] + xx [ 1097 ] *
xx [ 1110 ] ) * xx [ 11 ] ; xx [ 1127 ] = xx [ 1122 ] ; xx [ 1128 ] = xx [
1123 ] ; xx [ 1129 ] = xx [ 1091 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1127 , xx + 1130 ) ; xx [ 857 ] = 0.03035817947187572 ; xx [ 858 ] = -
0.0321317188582917 ; xx [ 859 ] = - 0.03537286040336775 ; xx [ 1097 ] =
0.4891666734355569 ; xx [ 1110 ] = 0.3404924334787352 ; xx [ 1111 ] = xx [
1110 ] * input [ 58 ] ; xx [ 1115 ] = 0.45873868206689 ; xx [ 1121 ] =
0.6590445280246652 ; xx [ 1127 ] = xx [ 1121 ] * input [ 58 ] ; xx [ 1128 ] =
( xx [ 1097 ] * xx [ 1111 ] + xx [ 1115 ] * xx [ 1127 ] ) * xx [ 11 ] ; xx [
1129 ] = xx [ 11 ] * ( xx [ 1097 ] * xx [ 1127 ] - xx [ 1115 ] * xx [ 1111 ]
) ; xx [ 1097 ] = input [ 58 ] - ( xx [ 1121 ] * xx [ 1127 ] + xx [ 1110 ] *
xx [ 1111 ] ) * xx [ 11 ] ; xx [ 1133 ] = xx [ 1128 ] ; xx [ 1134 ] = xx [
1129 ] ; xx [ 1135 ] = xx [ 1097 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1133 , xx + 1136 ) ; xx [ 857 ] = 0.01725167781389296 ; xx [ 858 ] = -
7.293875264287998e-3 ; xx [ 859 ] = - 0.01488522167970806 ; xx [ 1110 ] =
0.6632024935913943 ; xx [ 1111 ] = 0.1731754397407833 ; xx [ 1115 ] = xx [
1111 ] * input [ 59 ] ; xx [ 1121 ] = 0.1839610469139512 ; xx [ 1127 ] =
0.7045076669441338 ; xx [ 1133 ] = xx [ 1127 ] * input [ 59 ] ; xx [ 1134 ] =
( xx [ 1110 ] * xx [ 1115 ] + xx [ 1121 ] * xx [ 1133 ] ) * xx [ 11 ] ; xx [
1135 ] = xx [ 11 ] * ( xx [ 1110 ] * xx [ 1133 ] - xx [ 1121 ] * xx [ 1115 ]
) ; xx [ 1110 ] = input [ 59 ] - ( xx [ 1127 ] * xx [ 1133 ] + xx [ 1111 ] *
xx [ 1115 ] ) * xx [ 11 ] ; xx [ 1139 ] = xx [ 1134 ] ; xx [ 1140 ] = xx [
1135 ] ; xx [ 1141 ] = xx [ 1110 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1139 , xx + 1142 ) ; xx [ 857 ] = 0.06588460408652783 ; xx [ 858 ] = -
0.07959463958151086 ; xx [ 859 ] = - 0.09123943251327259 ; xx [ 1111 ] =
0.7220158820457636 ; xx [ 1115 ] = 0.05371025068880647 ; xx [ 1121 ] = xx [
1115 ] * input [ 60 ] ; xx [ 1127 ] = 0.0511714936744926 ; xx [ 1133 ] =
0.6878878929591253 ; xx [ 1139 ] = xx [ 1133 ] * input [ 60 ] ; xx [ 1140 ] =
( xx [ 1111 ] * xx [ 1121 ] + xx [ 1127 ] * xx [ 1139 ] ) * xx [ 11 ] ; xx [
1141 ] = xx [ 11 ] * ( xx [ 1111 ] * xx [ 1139 ] - xx [ 1127 ] * xx [ 1121 ]
) ; xx [ 1111 ] = input [ 60 ] - ( xx [ 1133 ] * xx [ 1139 ] + xx [ 1115 ] *
xx [ 1121 ] ) * xx [ 11 ] ; xx [ 1145 ] = - xx [ 1140 ] ; xx [ 1146 ] = xx [
1141 ] ; xx [ 1147 ] = xx [ 1111 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1145 , xx + 1148 ) ; xx [ 857 ] = - 0.05368324839120633 ; xx [ 858 ] = -
0.07164184646856597 ; xx [ 859 ] = - 0.04830567954615582 ; xx [ 1115 ] =
0.5405475385081842 ; xx [ 1121 ] = 0.03748965768333729 ; xx [ 1127 ] = xx [
1121 ] * input [ 61 ] ; xx [ 1133 ] = 0.05815161963514951 ; xx [ 1139 ] =
0.8384636386351757 ; xx [ 1145 ] = xx [ 1139 ] * input [ 61 ] ; xx [ 1146 ] =
( xx [ 1115 ] * xx [ 1127 ] + xx [ 1133 ] * xx [ 1145 ] ) * xx [ 11 ] ; xx [
1147 ] = xx [ 11 ] * ( xx [ 1115 ] * xx [ 1145 ] - xx [ 1133 ] * xx [ 1127 ]
) ; xx [ 1115 ] = input [ 61 ] - ( xx [ 1139 ] * xx [ 1145 ] + xx [ 1121 ] *
xx [ 1127 ] ) * xx [ 11 ] ; xx [ 1151 ] = - xx [ 1146 ] ; xx [ 1152 ] = xx [
1147 ] ; xx [ 1153 ] = xx [ 1115 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1151 , xx + 1154 ) ; xx [ 857 ] = 0.05368324840937735 ; xx [ 858 ] = -
0.07164184651282934 ; xx [ 859 ] = - 0.04830567954063756 ; xx [ 1121 ] =
0.5405475384861372 ; xx [ 1127 ] = 0.03748965800122345 ; xx [ 1133 ] = xx [
1127 ] * input [ 62 ] ; xx [ 1139 ] = 0.05815161990109163 ; xx [ 1145 ] =
0.8384636386167313 ; xx [ 1151 ] = xx [ 1145 ] * input [ 62 ] ; xx [ 1152 ] =
( xx [ 1121 ] * xx [ 1133 ] + xx [ 1139 ] * xx [ 1151 ] ) * xx [ 11 ] ; xx [
1153 ] = xx [ 11 ] * ( xx [ 1121 ] * xx [ 1151 ] - xx [ 1139 ] * xx [ 1133 ]
) ; xx [ 1121 ] = input [ 62 ] - ( xx [ 1145 ] * xx [ 1151 ] + xx [ 1127 ] *
xx [ 1133 ] ) * xx [ 11 ] ; xx [ 1157 ] = xx [ 1152 ] ; xx [ 1158 ] = xx [
1153 ] ; xx [ 1159 ] = xx [ 1121 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1157 , xx + 1160 ) ; xx [ 857 ] = 0.04170028917640188 ; xx [ 858 ] = -
0.04154840885049218 ; xx [ 859 ] = - 0.02148789347075055 ; xx [ 1127 ] =
0.2331544634603246 ; xx [ 1133 ] = 0.06113194106485485 ; xx [ 1139 ] = xx [
1133 ] * input [ 63 ] ; xx [ 1145 ] = 0.2461444141007786 ; xx [ 1151 ] =
0.9387836861370974 ; xx [ 1157 ] = xx [ 1151 ] * input [ 63 ] ; xx [ 1158 ] =
( xx [ 1127 ] * xx [ 1139 ] + xx [ 1145 ] * xx [ 1157 ] ) * xx [ 11 ] ; xx [
1159 ] = xx [ 11 ] * ( xx [ 1127 ] * xx [ 1157 ] - xx [ 1145 ] * xx [ 1139 ]
) ; xx [ 1127 ] = input [ 63 ] - ( xx [ 1151 ] * xx [ 1157 ] + xx [ 1133 ] *
xx [ 1139 ] ) * xx [ 11 ] ; xx [ 1163 ] = xx [ 1158 ] ; xx [ 1164 ] = xx [
1159 ] ; xx [ 1165 ] = xx [ 1127 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1163 , xx + 1166 ) ; xx [ 857 ] = 0.02981875547221127 ; xx [ 858 ] = -
6.485610562903104e-3 ; xx [ 859 ] = - 5.280536037984701e-3 ; xx [ 1133 ] =
0.2640102090543709 ; xx [ 1139 ] = 8.799363107773798e-3 ; xx [ 1145 ] = xx [
1139 ] * input [ 64 ] ; xx [ 1151 ] = 0.0321279156914788 ; xx [ 1157 ] =
0.9639444889397347 ; xx [ 1163 ] = xx [ 1157 ] * input [ 64 ] ; xx [ 1164 ] =
( xx [ 1133 ] * xx [ 1145 ] + xx [ 1151 ] * xx [ 1163 ] ) * xx [ 11 ] ; xx [
1165 ] = xx [ 11 ] * ( xx [ 1133 ] * xx [ 1163 ] - xx [ 1151 ] * xx [ 1145 ]
) ; xx [ 1133 ] = input [ 64 ] - ( xx [ 1157 ] * xx [ 1163 ] + xx [ 1139 ] *
xx [ 1145 ] ) * xx [ 11 ] ; xx [ 1169 ] = - xx [ 1164 ] ; xx [ 1170 ] = xx [
1165 ] ; xx [ 1171 ] = xx [ 1133 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1169 , xx + 1172 ) ; xx [ 857 ] = 0.01621445187265931 ; xx [ 858 ] =
0.02064735427402701 ; xx [ 859 ] = 3.272323513626888e-3 ; xx [ 1139 ] =
0.02715056723764842 ; xx [ 1145 ] = 3.291295194283892e-3 ; xx [ 1151 ] = xx [
1145 ] * input [ 65 ] ; xx [ 1157 ] = 0.1202977796697935 ; xx [ 1163 ] =
0.992361052380199 ; xx [ 1169 ] = xx [ 1163 ] * input [ 65 ] ; xx [ 1170 ] =
( xx [ 1139 ] * xx [ 1151 ] + xx [ 1157 ] * xx [ 1169 ] ) * xx [ 11 ] ; xx [
1171 ] = xx [ 11 ] * ( xx [ 1157 ] * xx [ 1151 ] - xx [ 1139 ] * xx [ 1169 ]
) ; xx [ 1139 ] = input [ 65 ] - ( xx [ 1163 ] * xx [ 1169 ] + xx [ 1145 ] *
xx [ 1151 ] ) * xx [ 11 ] ; xx [ 1175 ] = - xx [ 1170 ] ; xx [ 1176 ] = xx [
1171 ] ; xx [ 1177 ] = xx [ 1139 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1175 , xx + 1178 ) ; xx [ 857 ] = 0.01629907193013071 ; xx [ 858 ] =
0.05877878017211896 ; xx [ 859 ] = - 2.234518483059734e-3 ; xx [ 1145 ] =
0.1201225500255419 ; xx [ 1151 ] = 8.250560390230657e-3 ; xx [ 1157 ] = xx [
1151 ] * input [ 66 ] ; xx [ 1163 ] = 0.06802456318766753 ; xx [ 1169 ] =
0.9903914175878825 ; xx [ 1175 ] = xx [ 1169 ] * input [ 66 ] ; xx [ 1176 ] =
( xx [ 1145 ] * xx [ 1157 ] + xx [ 1163 ] * xx [ 1175 ] ) * xx [ 11 ] ; xx [
1177 ] = xx [ 11 ] * ( xx [ 1163 ] * xx [ 1157 ] - xx [ 1145 ] * xx [ 1175 ]
) ; xx [ 1145 ] = input [ 66 ] - ( xx [ 1169 ] * xx [ 1175 ] + xx [ 1151 ] *
xx [ 1157 ] ) * xx [ 11 ] ; xx [ 1181 ] = - xx [ 1176 ] ; xx [ 1182 ] = xx [
1177 ] ; xx [ 1183 ] = xx [ 1145 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1181 , xx + 1184 ) ; xx [ 857 ] = 0.01611171862314275 ; xx [ 858 ] =
0.08940775514076232 ; xx [ 859 ] = - 0.01738863438419946 ; xx [ 1151 ] =
0.3738445815359331 ; xx [ 1157 ] = 0.05232566464198572 ; xx [ 1163 ] = xx [
1157 ] * input [ 67 ] ; xx [ 1169 ] = 0.1283596100784034 ; xx [ 1175 ] =
0.9170747320565092 ; xx [ 1181 ] = xx [ 1175 ] * input [ 67 ] ; xx [ 1182 ] =
( xx [ 1151 ] * xx [ 1163 ] + xx [ 1169 ] * xx [ 1181 ] ) * xx [ 11 ] ; xx [
1183 ] = xx [ 11 ] * ( xx [ 1169 ] * xx [ 1163 ] - xx [ 1151 ] * xx [ 1181 ]
) ; xx [ 1151 ] = input [ 67 ] - ( xx [ 1175 ] * xx [ 1181 ] + xx [ 1157 ] *
xx [ 1163 ] ) * xx [ 11 ] ; xx [ 1187 ] = - xx [ 1182 ] ; xx [ 1188 ] = xx [
1183 ] ; xx [ 1189 ] = xx [ 1151 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1187 , xx + 1190 ) ; xx [ 857 ] = 0.07813551324089663 ; xx [ 858 ] = -
0.07488185783430511 ; xx [ 859 ] = - 0.0806312701956019 ; xx [ 1157 ] =
0.6719839502192693 ; xx [ 1163 ] = 0.2032749860191597 ; xx [ 1169 ] = xx [
1163 ] * input [ 68 ] ; xx [ 1175 ] = 0.2061892292910423 ; xx [ 1181 ] =
0.6816178199188923 ; xx [ 1187 ] = xx [ 1181 ] * input [ 68 ] ; xx [ 1188 ] =
( xx [ 1157 ] * xx [ 1169 ] + xx [ 1175 ] * xx [ 1187 ] ) * xx [ 11 ] ; xx [
1189 ] = xx [ 11 ] * ( xx [ 1157 ] * xx [ 1187 ] - xx [ 1175 ] * xx [ 1169 ]
) ; xx [ 1157 ] = input [ 68 ] - ( xx [ 1181 ] * xx [ 1187 ] + xx [ 1163 ] *
xx [ 1169 ] ) * xx [ 11 ] ; xx [ 1193 ] = - xx [ 1188 ] ; xx [ 1194 ] = xx [
1189 ] ; xx [ 1195 ] = xx [ 1157 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1193 , xx + 1196 ) ; xx [ 857 ] = 0.06541920006063182 ; xx [ 858 ] = -
0.06341232839625627 ; xx [ 859 ] = - 0.03664426852744039 ; xx [ 1163 ] =
0.3952613334798241 ; xx [ 1169 ] = 0.06996261333982168 ; xx [ 1175 ] = xx [
1169 ] * input [ 69 ] ; xx [ 1181 ] = 0.1596361018301848 ; xx [ 1187 ] =
0.9018813813262124 ; xx [ 1193 ] = xx [ 1187 ] * input [ 69 ] ; xx [ 1194 ] =
( xx [ 1163 ] * xx [ 1175 ] + xx [ 1181 ] * xx [ 1193 ] ) * xx [ 11 ] ; xx [
1195 ] = xx [ 11 ] * ( xx [ 1163 ] * xx [ 1193 ] - xx [ 1181 ] * xx [ 1175 ]
) ; xx [ 1163 ] = input [ 69 ] - ( xx [ 1187 ] * xx [ 1193 ] + xx [ 1169 ] *
xx [ 1175 ] ) * xx [ 11 ] ; xx [ 1199 ] = - xx [ 1194 ] ; xx [ 1200 ] = xx [
1195 ] ; xx [ 1201 ] = xx [ 1163 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1199 , xx + 1202 ) ; xx [ 857 ] = 0.05343540315193968 ; xx [ 858 ] = -
0.02914440313660086 ; xx [ 859 ] = - 0.01230147864563064 ; xx [ 1169 ] =
0.1816444983832879 ; xx [ 1175 ] = 5.979933026891875e-3 ; xx [ 1181 ] = xx [
1175 ] * input [ 70 ] ; xx [ 1187 ] = 0.03235528528307241 ; xx [ 1193 ] =
0.9828136405862146 ; xx [ 1199 ] = xx [ 1193 ] * input [ 70 ] ; xx [ 1200 ] =
( xx [ 1169 ] * xx [ 1181 ] + xx [ 1187 ] * xx [ 1199 ] ) * xx [ 11 ] ; xx [
1201 ] = xx [ 11 ] * ( xx [ 1169 ] * xx [ 1199 ] - xx [ 1187 ] * xx [ 1181 ]
) ; xx [ 1169 ] = input [ 70 ] - ( xx [ 1193 ] * xx [ 1199 ] + xx [ 1175 ] *
xx [ 1181 ] ) * xx [ 11 ] ; xx [ 1205 ] = xx [ 1200 ] ; xx [ 1206 ] = xx [
1201 ] ; xx [ 1207 ] = xx [ 1169 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1205 , xx + 1208 ) ; xx [ 857 ] = 0.04174218103265672 ; xx [ 858 ] =
2.57851019372676e-3 ; xx [ 859 ] = - 2.155619169886894e-3 ; xx [ 1175 ] =
0.1177775862132168 ; xx [ 1181 ] = 1.357137331446776e-3 ; xx [ 1187 ] = xx [
1181 ] * input [ 71 ] ; xx [ 1193 ] = 0.01144191498292432 ; xx [ 1199 ] =
0.9929731521776285 ; xx [ 1205 ] = xx [ 1199 ] * input [ 71 ] ; xx [ 1206 ] =
( xx [ 1175 ] * xx [ 1187 ] + xx [ 1193 ] * xx [ 1205 ] ) * xx [ 11 ] ; xx [
1207 ] = xx [ 11 ] * ( xx [ 1175 ] * xx [ 1205 ] - xx [ 1193 ] * xx [ 1187 ]
) ; xx [ 1175 ] = input [ 71 ] - ( xx [ 1199 ] * xx [ 1205 ] + xx [ 1181 ] *
xx [ 1187 ] ) * xx [ 11 ] ; xx [ 1211 ] = - xx [ 1206 ] ; xx [ 1212 ] = xx [
1207 ] ; xx [ 1213 ] = xx [ 1175 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1211 , xx + 1214 ) ; xx [ 857 ] = - 0.04170028913617464 ; xx [ 858 ] = -
0.04154840881610911 ; xx [ 859 ] = - 0.02148789347503706 ; xx [ 1181 ] =
0.2331544635586586 ; xx [ 1187 ] = 0.0611319406898112 ; xx [ 1193 ] = xx [
1187 ] * input [ 72 ] ; xx [ 1199 ] = 0.2461444139564077 ; xx [ 1205 ] =
0.9387836861749506 ; xx [ 1211 ] = xx [ 1205 ] * input [ 72 ] ; xx [ 1212 ] =
( xx [ 1181 ] * xx [ 1193 ] + xx [ 1199 ] * xx [ 1211 ] ) * xx [ 11 ] ; xx [
1213 ] = xx [ 11 ] * ( xx [ 1181 ] * xx [ 1211 ] - xx [ 1199 ] * xx [ 1193 ]
) ; xx [ 1181 ] = input [ 72 ] - ( xx [ 1205 ] * xx [ 1211 ] + xx [ 1187 ] *
xx [ 1193 ] ) * xx [ 11 ] ; xx [ 1217 ] = - xx [ 1212 ] ; xx [ 1218 ] = xx [
1213 ] ; xx [ 1219 ] = xx [ 1181 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1217 , xx + 1220 ) ; xx [ 857 ] = 0.02987022293760724 ; xx [ 858 ] =
0.03388119676042192 ; xx [ 859 ] = - 2.659532042140794e-4 ; xx [ 1187 ] =
0.05529818015039611 ; xx [ 1193 ] = 5.07794545269807e-3 ; xx [ 1199 ] = xx [
1193 ] * input [ 73 ] ; xx [ 1205 ] = 0.09130259475505068 ; xx [ 1211 ] =
0.9942736856283731 ; xx [ 1217 ] = xx [ 1211 ] * input [ 73 ] ; xx [ 1218 ] =
( xx [ 1187 ] * xx [ 1199 ] + xx [ 1205 ] * xx [ 1217 ] ) * xx [ 11 ] ; xx [
1219 ] = xx [ 11 ] * ( xx [ 1205 ] * xx [ 1199 ] - xx [ 1187 ] * xx [ 1217 ]
) ; xx [ 1187 ] = input [ 73 ] - ( xx [ 1211 ] * xx [ 1217 ] + xx [ 1193 ] *
xx [ 1199 ] ) * xx [ 11 ] ; xx [ 1223 ] = - xx [ 1218 ] ; xx [ 1224 ] = xx [
1219 ] ; xx [ 1225 ] = xx [ 1187 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1223 , xx + 1226 ) ; xx [ 857 ] = 0.02974420973278944 ; xx [ 858 ] =
0.07584660884820256 ; xx [ 859 ] = - 0.01081305066545697 ; xx [ 1193 ] =
0.2347060104860436 ; xx [ 1199 ] = 0.02433684745807652 ; xx [ 1205 ] = xx [
1199 ] * input [ 74 ] ; xx [ 1211 ] = 0.1002253606710676 ; xx [ 1217 ] =
0.966579372620729 ; xx [ 1223 ] = xx [ 1217 ] * input [ 74 ] ; xx [ 1224 ] =
( xx [ 1193 ] * xx [ 1205 ] + xx [ 1211 ] * xx [ 1223 ] ) * xx [ 11 ] ; xx [
1225 ] = xx [ 11 ] * ( xx [ 1211 ] * xx [ 1205 ] - xx [ 1193 ] * xx [ 1223 ]
) ; xx [ 1193 ] = input [ 74 ] - ( xx [ 1217 ] * xx [ 1223 ] + xx [ 1199 ] *
xx [ 1205 ] ) * xx [ 11 ] ; xx [ 1229 ] = - xx [ 1224 ] ; xx [ 1230 ] = xx [
1225 ] ; xx [ 1231 ] = xx [ 1193 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1229 , xx + 1232 ) ; xx [ 857 ] = 0.08960460729423878 ; xx [ 858 ] = -
0.0629180904162949 ; xx [ 859 ] = - 0.1158139129040354 ; xx [ 1199 ] =
0.704010954792626 ; xx [ 1205 ] = 0.287283918815774 ; xx [ 1211 ] = xx [ 1205
] * input [ 75 ] ; xx [ 1217 ] = 0.2453906895695802 ; xx [ 1223 ] =
0.6013484306077408 ; xx [ 1229 ] = xx [ 1223 ] * input [ 75 ] ; xx [ 1230 ] =
( xx [ 1199 ] * xx [ 1211 ] + xx [ 1217 ] * xx [ 1229 ] ) * xx [ 11 ] ; xx [
1231 ] = xx [ 11 ] * ( xx [ 1199 ] * xx [ 1229 ] - xx [ 1217 ] * xx [ 1211 ]
) ; xx [ 1199 ] = input [ 75 ] - ( xx [ 1223 ] * xx [ 1229 ] + xx [ 1205 ] *
xx [ 1211 ] ) * xx [ 11 ] ; xx [ 1235 ] = - xx [ 1230 ] ; xx [ 1236 ] = xx [
1231 ] ; xx [ 1237 ] = xx [ 1199 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1235 , xx + 1238 ) ; xx [ 857 ] = 0.08896801895652537 ; xx [ 858 ] = -
0.0629967735175615 ; xx [ 859 ] = - 0.0538930712922808 ; xx [ 1205 ] =
0.5606844804293186 ; xx [ 1211 ] = 0.2326195330779721 ; xx [ 1217 ] = xx [
1211 ] * input [ 76 ] ; xx [ 1223 ] = 0.3045325849435699 ; xx [ 1229 ] =
0.7340170099826563 ; xx [ 1235 ] = xx [ 1229 ] * input [ 76 ] ; xx [ 1236 ] =
( xx [ 1205 ] * xx [ 1217 ] + xx [ 1223 ] * xx [ 1235 ] ) * xx [ 11 ] ; xx [
1237 ] = xx [ 11 ] * ( xx [ 1205 ] * xx [ 1235 ] - xx [ 1223 ] * xx [ 1217 ]
) ; xx [ 1205 ] = input [ 76 ] - ( xx [ 1229 ] * xx [ 1235 ] + xx [ 1211 ] *
xx [ 1217 ] ) * xx [ 11 ] ; xx [ 1241 ] = - xx [ 1236 ] ; xx [ 1242 ] = xx [
1237 ] ; xx [ 1243 ] = xx [ 1205 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1241 , xx + 1244 ) ; xx [ 857 ] = 0.07773176658883038 ; xx [ 858 ] = -
0.04357084087497261 ; xx [ 859 ] = - 0.02434982318155766 ; xx [ 1211 ] =
0.2749898427280319 ; xx [ 1217 ] = 0.03833910121369367 ; xx [ 1223 ] = xx [
1217 ] * input [ 77 ] ; xx [ 1229 ] = 0.1326553341666606 ; xx [ 1235 ] =
0.9514795121449912 ; xx [ 1241 ] = xx [ 1235 ] * input [ 77 ] ; xx [ 1242 ] =
( xx [ 1211 ] * xx [ 1223 ] + xx [ 1229 ] * xx [ 1241 ] ) * xx [ 11 ] ; xx [
1243 ] = xx [ 11 ] * ( xx [ 1211 ] * xx [ 1241 ] - xx [ 1229 ] * xx [ 1223 ]
) ; xx [ 1211 ] = input [ 77 ] - ( xx [ 1235 ] * xx [ 1241 ] + xx [ 1217 ] *
xx [ 1223 ] ) * xx [ 11 ] ; xx [ 1247 ] = - xx [ 1242 ] ; xx [ 1248 ] = xx [
1243 ] ; xx [ 1249 ] = xx [ 1211 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1247 , xx + 1250 ) ; xx [ 857 ] = 0.06547974794298986 ; xx [ 858 ] = -
5.296907369520426e-3 ; xx [ 859 ] = - 6.867139911477884e-3 ; xx [ 1217 ] =
0.08330673863579158 ; xx [ 1223 ] = 0.01332357126667194 ; xx [ 1229 ] = xx [
1223 ] * input [ 78 ] ; xx [ 1235 ] = 0.1573638296812823 ; xx [ 1241 ] =
0.9839304319181364 ; xx [ 1247 ] = xx [ 1241 ] * input [ 78 ] ; xx [ 1248 ] =
( xx [ 1217 ] * xx [ 1229 ] + xx [ 1235 ] * xx [ 1247 ] ) * xx [ 11 ] ; xx [
1249 ] = xx [ 11 ] * ( xx [ 1217 ] * xx [ 1247 ] - xx [ 1235 ] * xx [ 1229 ]
) ; xx [ 1217 ] = input [ 78 ] - ( xx [ 1241 ] * xx [ 1247 ] + xx [ 1223 ] *
xx [ 1229 ] ) * xx [ 11 ] ; xx [ 1253 ] = - xx [ 1248 ] ; xx [ 1254 ] = xx [
1249 ] ; xx [ 1255 ] = xx [ 1217 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1253 , xx + 1256 ) ; xx [ 857 ] = 0.05341786702403734 ; xx [ 858 ] =
0.02810056496111961 ; xx [ 859 ] = - 3.330290101375847e-3 ; xx [ 1223 ] =
0.05921261816160776 ; xx [ 1229 ] = 4.064864796071833e-3 ; xx [ 1235 ] = xx [
1229 ] * input [ 79 ] ; xx [ 1241 ] = 0.06836669739358632 ; xx [ 1247 ] =
0.9958932359505869 ; xx [ 1253 ] = xx [ 1247 ] * input [ 79 ] ; xx [ 1254 ] =
( xx [ 1223 ] * xx [ 1235 ] + xx [ 1241 ] * xx [ 1253 ] ) * xx [ 11 ] ; xx [
1255 ] = xx [ 11 ] * ( xx [ 1241 ] * xx [ 1235 ] - xx [ 1223 ] * xx [ 1253 ]
) ; xx [ 1223 ] = input [ 79 ] - ( xx [ 1247 ] * xx [ 1253 ] + xx [ 1229 ] *
xx [ 1235 ] ) * xx [ 11 ] ; xx [ 1259 ] = - xx [ 1254 ] ; xx [ 1260 ] = xx [
1255 ] ; xx [ 1261 ] = xx [ 1223 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1259 , xx + 1262 ) ; xx [ 857 ] = 0.04168227644158801 ; xx [ 858 ] =
0.05293569738903448 ; xx [ 859 ] = - 5.452647457716795e-3 ; xx [ 1229 ] =
0.09627478570965015 ; xx [ 1235 ] = 8.967548973076127e-3 ; xx [ 1241 ] = xx [
1235 ] * input [ 80 ] ; xx [ 1247 ] = 0.09230933375590525 ; xx [ 1253 ] =
0.9910245887986421 ; xx [ 1259 ] = xx [ 1253 ] * input [ 80 ] ; xx [ 1260 ] =
( xx [ 1229 ] * xx [ 1241 ] + xx [ 1247 ] * xx [ 1259 ] ) * xx [ 11 ] ; xx [
1261 ] = xx [ 11 ] * ( xx [ 1247 ] * xx [ 1241 ] - xx [ 1229 ] * xx [ 1259 ]
) ; xx [ 1229 ] = input [ 80 ] - ( xx [ 1253 ] * xx [ 1259 ] + xx [ 1235 ] *
xx [ 1241 ] ) * xx [ 11 ] ; xx [ 1265 ] = - xx [ 1260 ] ; xx [ 1266 ] = xx [
1261 ] ; xx [ 1267 ] = xx [ 1229 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1265 , xx + 1268 ) ; xx [ 857 ] = 0.100824764087768 ; xx [ 858 ] = -
0.05389196647200403 ; xx [ 859 ] = - 0.08618641346272046 ; xx [ 1235 ] =
0.6611727831571071 ; xx [ 1241 ] = 0.3060055398661197 ; xx [ 1247 ] = xx [
1241 ] * input [ 81 ] ; xx [ 1253 ] = 0.2877084148070432 ; xx [ 1259 ] =
0.6216389856120255 ; xx [ 1265 ] = xx [ 1259 ] * input [ 81 ] ; xx [ 1266 ] =
( xx [ 1235 ] * xx [ 1247 ] + xx [ 1253 ] * xx [ 1265 ] ) * xx [ 11 ] ; xx [
1267 ] = xx [ 11 ] * ( xx [ 1235 ] * xx [ 1265 ] - xx [ 1253 ] * xx [ 1247 ]
) ; xx [ 1235 ] = input [ 81 ] - ( xx [ 1259 ] * xx [ 1265 ] + xx [ 1241 ] *
xx [ 1247 ] ) * xx [ 11 ] ; xx [ 1271 ] = - xx [ 1266 ] ; xx [ 1272 ] = xx [
1267 ] ; xx [ 1273 ] = xx [ 1235 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1271 , xx + 1274 ) ; xx [ 857 ] = 0.100465596542249 ; xx [ 858 ] = -
0.03582136469449106 ; xx [ 859 ] = - 0.03586499237016935 ; xx [ 1241 ] =
0.2631242050542163 ; xx [ 1247 ] = 0.1314352702240315 ; xx [ 1253 ] = xx [
1247 ] * input [ 82 ] ; xx [ 1259 ] = 0.4271022176257958 ; xx [ 1265 ] =
0.8550287235846818 ; xx [ 1271 ] = xx [ 1265 ] * input [ 82 ] ; xx [ 1272 ] =
( xx [ 1241 ] * xx [ 1253 ] + xx [ 1259 ] * xx [ 1271 ] ) * xx [ 11 ] ; xx [
1273 ] = xx [ 11 ] * ( xx [ 1241 ] * xx [ 1271 ] - xx [ 1259 ] * xx [ 1253 ]
) ; xx [ 1241 ] = input [ 82 ] - ( xx [ 1265 ] * xx [ 1271 ] + xx [ 1247 ] *
xx [ 1253 ] ) * xx [ 11 ] ; xx [ 1277 ] = - xx [ 1272 ] ; xx [ 1278 ] = xx [
1273 ] ; xx [ 1279 ] = xx [ 1241 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1277 , xx + 1280 ) ; xx [ 857 ] = - 0.02981875540473976 ; xx [ 858 ] = -
6.485610538316687e-3 ; xx [ 859 ] = - 5.280536041049861e-3 ; xx [ 1247 ] =
0.264010209041578 ; xx [ 1253 ] = 8.799363491604362e-3 ; xx [ 1259 ] = xx [
1253 ] * input [ 83 ] ; xx [ 1265 ] = 0.03212791584986363 ; xx [ 1271 ] =
0.9639444889344556 ; xx [ 1277 ] = xx [ 1271 ] * input [ 83 ] ; xx [ 1278 ] =
( xx [ 1247 ] * xx [ 1259 ] + xx [ 1265 ] * xx [ 1277 ] ) * xx [ 11 ] ; xx [
1279 ] = xx [ 11 ] * ( xx [ 1247 ] * xx [ 1277 ] - xx [ 1265 ] * xx [ 1259 ]
) ; xx [ 1247 ] = input [ 83 ] - ( xx [ 1271 ] * xx [ 1277 ] + xx [ 1253 ] *
xx [ 1259 ] ) * xx [ 11 ] ; xx [ 1283 ] = xx [ 1278 ] ; xx [ 1284 ] = xx [
1279 ] ; xx [ 1285 ] = xx [ 1247 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1283 , xx + 1286 ) ; xx [ 857 ] = 0.08913241736995343 ; xx [ 858 ] = -
0.01002385806712768 ; xx [ 859 ] = - 0.01767933168400414 ; xx [ 1253 ] =
0.06280224635947465 ; xx [ 1259 ] = 0.02051569191699949 ; xx [ 1265 ] = xx [
1259 ] * input [ 84 ] ; xx [ 1271 ] = 0.3098441769716661 ; xx [ 1277 ] =
0.9484890986374709 ; xx [ 1283 ] = xx [ 1277 ] * input [ 84 ] ; xx [ 1284 ] =
( xx [ 1253 ] * xx [ 1265 ] + xx [ 1271 ] * xx [ 1283 ] ) * xx [ 11 ] ; xx [
1285 ] = xx [ 11 ] * ( xx [ 1253 ] * xx [ 1283 ] - xx [ 1271 ] * xx [ 1265 ]
) ; xx [ 1253 ] = input [ 84 ] - ( xx [ 1277 ] * xx [ 1283 ] + xx [ 1259 ] *
xx [ 1265 ] ) * xx [ 11 ] ; xx [ 1289 ] = - xx [ 1284 ] ; xx [ 1290 ] = xx [
1285 ] ; xx [ 1291 ] = xx [ 1253 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1289 , xx + 1292 ) ; xx [ 857 ] = 0.07763897859183158 ; xx [ 858 ] =
0.02926835413570807 ; xx [ 859 ] = - 0.01269421206535389 ; xx [ 1259 ] =
0.1126124064896707 ; xx [ 1265 ] = 0.02994703407731902 ; xx [ 1271 ] = xx [
1265 ] * input [ 85 ] ; xx [ 1277 ] = 0.2552472918152362 ; xx [ 1283 ] =
0.9598283393792688 ; xx [ 1289 ] = xx [ 1283 ] * input [ 85 ] ; xx [ 1290 ] =
( xx [ 1259 ] * xx [ 1271 ] + xx [ 1277 ] * xx [ 1289 ] ) * xx [ 11 ] ; xx [
1291 ] = xx [ 11 ] * ( xx [ 1277 ] * xx [ 1271 ] - xx [ 1259 ] * xx [ 1289 ]
) ; xx [ 1259 ] = input [ 85 ] - ( xx [ 1283 ] * xx [ 1289 ] + xx [ 1265 ] *
xx [ 1271 ] ) * xx [ 11 ] ; xx [ 1295 ] = - xx [ 1290 ] ; xx [ 1296 ] = xx [
1291 ] ; xx [ 1297 ] = xx [ 1259 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1295 , xx + 1298 ) ; xx [ 857 ] = 0.06509083541072057 ; xx [ 858 ] =
0.05673454461225298 ; xx [ 859 ] = - 0.01754534783269847 ; xx [ 1265 ] =
0.2624187066634011 ; xx [ 1271 ] = 0.07539763905303828 ; xx [ 1277 ] = xx [
1271 ] * input [ 86 ] ; xx [ 1283 ] = 0.2656534715823643 ; xx [ 1289 ] =
0.9245971292701344 ; xx [ 1295 ] = xx [ 1289 ] * input [ 86 ] ; xx [ 1296 ] =
( xx [ 1265 ] * xx [ 1277 ] + xx [ 1283 ] * xx [ 1295 ] ) * xx [ 11 ] ; xx [
1297 ] = xx [ 11 ] * ( xx [ 1283 ] * xx [ 1277 ] - xx [ 1265 ] * xx [ 1295 ]
) ; xx [ 1265 ] = input [ 86 ] - ( xx [ 1289 ] * xx [ 1295 ] + xx [ 1271 ] *
xx [ 1277 ] ) * xx [ 11 ] ; xx [ 1301 ] = - xx [ 1296 ] ; xx [ 1302 ] = xx [
1297 ] ; xx [ 1303 ] = xx [ 1265 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1301 , xx + 1304 ) ; xx [ 857 ] = 0.05277755591207568 ; xx [ 858 ] =
0.07507634800725872 ; xx [ 859 ] = - 0.0255709964062559 ; xx [ 1271 ] =
0.421896005370366 ; xx [ 1277 ] = 0.1353871730070967 ; xx [ 1283 ] = xx [
1277 ] * input [ 87 ] ; xx [ 1289 ] = 0.2739231085118727 ; xx [ 1295 ] =
0.8536042435818063 ; xx [ 1301 ] = xx [ 1295 ] * input [ 87 ] ; xx [ 1302 ] =
( xx [ 1271 ] * xx [ 1283 ] + xx [ 1289 ] * xx [ 1301 ] ) * xx [ 11 ] ; xx [
1303 ] = xx [ 11 ] * ( xx [ 1289 ] * xx [ 1283 ] - xx [ 1271 ] * xx [ 1301 ]
) ; xx [ 1271 ] = input [ 87 ] - ( xx [ 1295 ] * xx [ 1301 ] + xx [ 1277 ] *
xx [ 1283 ] ) * xx [ 11 ] ; xx [ 1307 ] = - xx [ 1302 ] ; xx [ 1308 ] = xx [
1303 ] ; xx [ 1309 ] = xx [ 1271 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1307 , xx + 1310 ) ; xx [ 857 ] = 0.04146508599201515 ; xx [ 858 ] =
0.08823626896783543 ; xx [ 859 ] = - 0.03394340828824289 ; xx [ 1277 ] =
0.5420216015620228 ; xx [ 1283 ] = 0.166527022603306 ; xx [ 1289 ] = xx [
1283 ] * input [ 88 ] ; xx [ 1295 ] = 0.2419081908371703 ; xx [ 1301 ] =
0.7873765054844507 ; xx [ 1307 ] = xx [ 1301 ] * input [ 88 ] ; xx [ 1308 ] =
( xx [ 1277 ] * xx [ 1289 ] + xx [ 1295 ] * xx [ 1307 ] ) * xx [ 11 ] ; xx [
1309 ] = xx [ 11 ] * ( xx [ 1295 ] * xx [ 1289 ] - xx [ 1277 ] * xx [ 1307 ]
) ; xx [ 1277 ] = input [ 88 ] - ( xx [ 1301 ] * xx [ 1307 ] + xx [ 1283 ] *
xx [ 1289 ] ) * xx [ 11 ] ; xx [ 1313 ] = - xx [ 1308 ] ; xx [ 1314 ] = xx [
1309 ] ; xx [ 1315 ] = xx [ 1277 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1313 , xx + 1316 ) ; xx [ 857 ] = 0.1088176367117972 ; xx [ 858 ] = -
0.03672198871967463 ; xx [ 859 ] = - 0.1164296265215401 ; xx [ 1283 ] =
0.677628035150165 ; xx [ 1289 ] = 0.4270890703732098 ; xx [ 1295 ] = xx [
1289 ] * input [ 89 ] ; xx [ 1301 ] = 0.319215967759163 ; xx [ 1307 ] =
0.506474419762593 ; xx [ 1313 ] = xx [ 1307 ] * input [ 89 ] ; xx [ 1314 ] =
( xx [ 1283 ] * xx [ 1295 ] + xx [ 1301 ] * xx [ 1313 ] ) * xx [ 11 ] ; xx [
1315 ] = xx [ 11 ] * ( xx [ 1283 ] * xx [ 1313 ] - xx [ 1301 ] * xx [ 1295 ]
) ; xx [ 1283 ] = input [ 89 ] - ( xx [ 1307 ] * xx [ 1313 ] + xx [ 1289 ] *
xx [ 1295 ] ) * xx [ 11 ] ; xx [ 1319 ] = - xx [ 1314 ] ; xx [ 1320 ] = xx [
1315 ] ; xx [ 1321 ] = xx [ 1283 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1319 , xx + 1322 ) ; xx [ 857 ] = 0.1090246450995406 ; xx [ 858 ] = -
0.03935610665145234 ; xx [ 859 ] = - 0.06805735491187342 ; xx [ 1289 ] =
0.519703659084335 ; xx [ 1295 ] = 0.3653225986854693 ; xx [ 1301 ] = xx [
1295 ] * input [ 90 ] ; xx [ 1307 ] = 0.4441325809999982 ; xx [ 1313 ] =
0.6318178187724124 ; xx [ 1319 ] = xx [ 1313 ] * input [ 90 ] ; xx [ 1320 ] =
( xx [ 1289 ] * xx [ 1301 ] + xx [ 1307 ] * xx [ 1319 ] ) * xx [ 11 ] ; xx [
1321 ] = xx [ 11 ] * ( xx [ 1289 ] * xx [ 1319 ] - xx [ 1307 ] * xx [ 1301 ]
) ; xx [ 1289 ] = input [ 90 ] - ( xx [ 1313 ] * xx [ 1319 ] + xx [ 1295 ] *
xx [ 1301 ] ) * xx [ 11 ] ; xx [ 1325 ] = - xx [ 1320 ] ; xx [ 1326 ] = xx [
1321 ] ; xx [ 1327 ] = xx [ 1289 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1325 , xx + 1328 ) ; xx [ 857 ] = 0.1085660129100413 ; xx [ 858 ] = -
8.240157724745425e-3 ; xx [ 859 ] = - 0.03833021975942708 ; xx [ 1295 ] =
0.02566070437485158 ; xx [ 1301 ] = 0.01743713638493203 ; xx [ 1307 ] = xx [
1301 ] * input [ 91 ] ; xx [ 1313 ] = 0.5617718096216883 ; xx [ 1319 ] =
0.8267102929322058 ; xx [ 1325 ] = xx [ 1319 ] * input [ 91 ] ; xx [ 1326 ] =
( xx [ 1295 ] * xx [ 1307 ] + xx [ 1313 ] * xx [ 1325 ] ) * xx [ 11 ] ; xx [
1327 ] = xx [ 11 ] * ( xx [ 1295 ] * xx [ 1325 ] - xx [ 1313 ] * xx [ 1307 ]
) ; xx [ 1295 ] = input [ 91 ] - ( xx [ 1319 ] * xx [ 1325 ] + xx [ 1301 ] *
xx [ 1307 ] ) * xx [ 11 ] ; xx [ 1331 ] = - xx [ 1326 ] ; xx [ 1332 ] = xx [
1327 ] ; xx [ 1333 ] = xx [ 1295 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1331 , xx + 1334 ) ; xx [ 857 ] = 0.1002889441519224 ; xx [ 858 ] =
0.02151727728365404 ; xx [ 859 ] = - 0.03134160856156223 ; xx [ 1301 ] =
0.1937497474880058 ; xx [ 1307 ] = 0.1060397762709983 ; xx [ 1313 ] = xx [
1307 ] * input [ 92 ] ; xx [ 1319 ] = 0.4682442847472073 ; xx [ 1325 ] =
0.8555488828806376 ; xx [ 1331 ] = xx [ 1325 ] * input [ 92 ] ; xx [ 1332 ] =
( xx [ 1301 ] * xx [ 1313 ] + xx [ 1319 ] * xx [ 1331 ] ) * xx [ 11 ] ; xx [
1333 ] = xx [ 11 ] * ( xx [ 1319 ] * xx [ 1313 ] - xx [ 1301 ] * xx [ 1331 ]
) ; xx [ 1301 ] = input [ 92 ] - ( xx [ 1325 ] * xx [ 1331 ] + xx [ 1307 ] *
xx [ 1313 ] ) * xx [ 11 ] ; xx [ 1337 ] = - xx [ 1332 ] ; xx [ 1338 ] = xx [
1333 ] ; xx [ 1339 ] = xx [ 1301 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1337 , xx + 1340 ) ; xx [ 857 ] = 0.08825404800005146 ; xx [ 858 ] =
0.05085694598496637 ; xx [ 859 ] = - 0.04022128746106271 ; xx [ 1307 ] =
0.4329293025203554 ; xx [ 1313 ] = 0.2388834576327223 ; xx [ 1319 ] = xx [
1313 ] * input [ 93 ] ; xx [ 1325 ] = 0.4199252651663411 ; xx [ 1331 ] =
0.7610319864260977 ; xx [ 1337 ] = xx [ 1331 ] * input [ 93 ] ; xx [ 1338 ] =
( xx [ 1307 ] * xx [ 1319 ] + xx [ 1325 ] * xx [ 1337 ] ) * xx [ 11 ] ; xx [
1339 ] = xx [ 11 ] * ( xx [ 1325 ] * xx [ 1319 ] - xx [ 1307 ] * xx [ 1337 ]
) ; xx [ 1307 ] = input [ 93 ] - ( xx [ 1331 ] * xx [ 1337 ] + xx [ 1313 ] *
xx [ 1319 ] ) * xx [ 11 ] ; xx [ 1343 ] = - xx [ 1338 ] ; xx [ 1344 ] = xx [
1339 ] ; xx [ 1345 ] = xx [ 1307 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1343 , xx + 1346 ) ; xx [ 857 ] = - 0.01621445178369506 ; xx [ 858 ] =
0.02064735428739629 ; xx [ 859 ] = 3.272323511960149e-3 ; xx [ 1313 ] =
0.02715056728741203 ; xx [ 1319 ] = 3.291294783773412e-3 ; xx [ 1325 ] = xx [
1319 ] * input [ 94 ] ; xx [ 1331 ] = 0.1202977797096041 ; xx [ 1337 ] =
0.9923610523753731 ; xx [ 1343 ] = xx [ 1337 ] * input [ 94 ] ; xx [ 1344 ] =
( xx [ 1313 ] * xx [ 1325 ] + xx [ 1331 ] * xx [ 1343 ] ) * xx [ 11 ] ; xx [
1345 ] = xx [ 11 ] * ( xx [ 1331 ] * xx [ 1325 ] - xx [ 1313 ] * xx [ 1343 ]
) ; xx [ 1313 ] = input [ 94 ] - ( xx [ 1337 ] * xx [ 1343 ] + xx [ 1319 ] *
xx [ 1325 ] ) * xx [ 11 ] ; xx [ 1349 ] = xx [ 1344 ] ; xx [ 1350 ] = xx [
1345 ] ; xx [ 1351 ] = xx [ 1313 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1349 , xx + 1352 ) ; xx [ 857 ] = 0.07778373207184298 ; xx [ 858 ] =
0.06920777250867712 ; xx [ 859 ] = - 0.05836215192562574 ; xx [ 1319 ] =
0.6395227561236595 ; xx [ 1325 ] = 0.2517984337787514 ; xx [ 1331 ] = xx [
1325 ] * input [ 95 ] ; xx [ 1337 ] = 0.266107804286955 ; xx [ 1343 ] =
0.6758659849734575 ; xx [ 1349 ] = xx [ 1343 ] * input [ 95 ] ; xx [ 1350 ] =
( xx [ 1319 ] * xx [ 1331 ] + xx [ 1337 ] * xx [ 1349 ] ) * xx [ 11 ] ; xx [
1351 ] = xx [ 11 ] * ( xx [ 1337 ] * xx [ 1331 ] - xx [ 1319 ] * xx [ 1349 ]
) ; xx [ 1319 ] = input [ 95 ] - ( xx [ 1343 ] * xx [ 1349 ] + xx [ 1325 ] *
xx [ 1331 ] ) * xx [ 11 ] ; xx [ 1355 ] = - xx [ 1350 ] ; xx [ 1356 ] = xx [
1351 ] ; xx [ 1357 ] = xx [ 1319 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1355 , xx + 1358 ) ; xx [ 857 ] = 0.0602032404852826 ; xx [ 858 ] =
0.08203106311915592 ; xx [ 859 ] = - 0.07487337344589605 ; xx [ 1325 ] =
0.6940948607199241 ; xx [ 1331 ] = 0.2053956683816426 ; xx [ 1337 ] = xx [
1331 ] * input [ 96 ] ; xx [ 1343 ] = 0.1957799624580653 ; xx [ 1349 ] =
0.6616004459129137 ; xx [ 1355 ] = xx [ 1349 ] * input [ 96 ] ; xx [ 1356 ] =
( xx [ 1325 ] * xx [ 1337 ] + xx [ 1343 ] * xx [ 1355 ] ) * xx [ 11 ] ; xx [
1357 ] = xx [ 11 ] * ( xx [ 1343 ] * xx [ 1337 ] - xx [ 1325 ] * xx [ 1355 ]
) ; xx [ 1325 ] = input [ 96 ] - ( xx [ 1349 ] * xx [ 1355 ] + xx [ 1331 ] *
xx [ 1337 ] ) * xx [ 11 ] ; xx [ 1361 ] = - xx [ 1356 ] ; xx [ 1362 ] = xx [
1357 ] ; xx [ 1363 ] = xx [ 1325 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1361 , xx + 1364 ) ; xx [ 857 ] = 0.1143978972674508 ; xx [ 858 ] = -
0.01074410169425164 ; xx [ 859 ] = - 0.1239980564790716 ; xx [ 1331 ] =
0.6377272328877593 ; xx [ 1337 ] = 0.6305933819529564 ; xx [ 1343 ] = xx [
1337 ] * input [ 97 ] ; xx [ 1349 ] = 0.3199249700933913 ; xx [ 1355 ] =
0.3054569962878528 ; xx [ 1361 ] = xx [ 1355 ] * input [ 97 ] ; xx [ 1362 ] =
( xx [ 1331 ] * xx [ 1343 ] + xx [ 1349 ] * xx [ 1361 ] ) * xx [ 11 ] ; xx [
1363 ] = xx [ 11 ] * ( xx [ 1331 ] * xx [ 1361 ] - xx [ 1349 ] * xx [ 1343 ]
) ; xx [ 1331 ] = input [ 97 ] - ( xx [ 1355 ] * xx [ 1361 ] + xx [ 1337 ] *
xx [ 1343 ] ) * xx [ 11 ] ; xx [ 1367 ] = - xx [ 1362 ] ; xx [ 1368 ] = xx [
1363 ] ; xx [ 1369 ] = xx [ 1331 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1367 , xx + 1370 ) ; xx [ 857 ] = 0.1151109708936954 ; xx [ 858 ] = -
0.0107580464525686 ; xx [ 859 ] = - 0.08461401533556856 ; xx [ 1337 ] =
0.4666321200467146 ; xx [ 1343 ] = 0.4902460691897858 ; xx [ 1349 ] = xx [
1343 ] * input [ 98 ] ; xx [ 1355 ] = 0.509567258991786 ; xx [ 1361 ] =
0.5312762602905107 ; xx [ 1367 ] = xx [ 1361 ] * input [ 98 ] ; xx [ 1368 ] =
( xx [ 1337 ] * xx [ 1349 ] + xx [ 1355 ] * xx [ 1367 ] ) * xx [ 11 ] ; xx [
1369 ] = xx [ 11 ] * ( xx [ 1337 ] * xx [ 1367 ] - xx [ 1355 ] * xx [ 1349 ]
) ; xx [ 1337 ] = input [ 98 ] - ( xx [ 1361 ] * xx [ 1367 ] + xx [ 1343 ] *
xx [ 1349 ] ) * xx [ 11 ] ; xx [ 1373 ] = - xx [ 1368 ] ; xx [ 1374 ] = xx [
1369 ] ; xx [ 1375 ] = xx [ 1337 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1373 , xx + 1376 ) ; xx [ 857 ] = 0.1089181530968041 ; xx [ 858 ] =
0.02522537860188187 ; xx [ 859 ] = - 0.06782609011531604 ; xx [ 1343 ] =
0.5150379187494134 ; xx [ 1349 ] = 0.4000839557916553 ; xx [ 1355 ] = xx [
1349 ] * input [ 99 ] ; xx [ 1361 ] = 0.4650464122323525 ; xx [ 1367 ] =
0.598665687206299 ; xx [ 1373 ] = xx [ 1367 ] * input [ 99 ] ; xx [ 1374 ] =
( xx [ 1343 ] * xx [ 1355 ] + xx [ 1361 ] * xx [ 1373 ] ) * xx [ 11 ] ; xx [
1375 ] = xx [ 11 ] * ( xx [ 1361 ] * xx [ 1355 ] - xx [ 1343 ] * xx [ 1373 ]
) ; xx [ 1343 ] = input [ 99 ] - ( xx [ 1367 ] * xx [ 1373 ] + xx [ 1349 ] *
xx [ 1355 ] ) * xx [ 11 ] ; xx [ 1379 ] = - xx [ 1374 ] ; xx [ 1380 ] = xx [
1375 ] ; xx [ 1381 ] = xx [ 1343 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1379 , xx + 1382 ) ; xx [ 857 ] = 0.1090036910983129 ; xx [ 858 ] =
0.01817465764028406 ; xx [ 859 ] = - 0.1239039825532445 ; xx [ 1349 ] =
0.6677460745578425 ; xx [ 1355 ] = 0.4544566951154766 ; xx [ 1361 ] = xx [
1355 ] * input [ 100 ] ; xx [ 1367 ] = 0.3317113810722333 ; xx [ 1373 ] =
0.4873929132070582 ; xx [ 1379 ] = xx [ 1373 ] * input [ 100 ] ; xx [ 1380 ]
= ( xx [ 1349 ] * xx [ 1361 ] + xx [ 1367 ] * xx [ 1379 ] ) * xx [ 11 ] ; xx
[ 1381 ] = xx [ 11 ] * ( xx [ 1367 ] * xx [ 1361 ] - xx [ 1349 ] * xx [ 1379
] ) ; xx [ 1349 ] = input [ 100 ] - ( xx [ 1373 ] * xx [ 1379 ] + xx [ 1355 ]
* xx [ 1361 ] ) * xx [ 11 ] ; xx [ 1385 ] = - xx [ 1380 ] ; xx [ 1386 ] = xx
[ 1381 ] ; xx [ 1387 ] = xx [ 1349 ] ; pm_math_Vector3_cross_ra ( xx + 857 ,
xx + 1385 , xx + 1388 ) ; xx [ 857 ] = 0.1009356429428289 ; xx [ 858 ] =
0.04283189628947623 ; xx [ 859 ] = - 0.08674853387268916 ; xx [ 1355 ] =
0.677199773614736 ; xx [ 1361 ] = 0.363683540455742 ; xx [ 1367 ] = xx [ 1361
] * input [ 101 ] ; xx [ 1373 ] = 0.3026304369575301 ; xx [ 1379 ] =
0.5635153659347912 ; xx [ 1385 ] = xx [ 1379 ] * input [ 101 ] ; xx [ 1386 ]
= ( xx [ 1355 ] * xx [ 1367 ] + xx [ 1373 ] * xx [ 1385 ] ) * xx [ 11 ] ; xx
[ 1387 ] = xx [ 11 ] * ( xx [ 1373 ] * xx [ 1367 ] - xx [ 1355 ] * xx [ 1385
] ) ; xx [ 1355 ] = input [ 101 ] - ( xx [ 1379 ] * xx [ 1385 ] + xx [ 1361 ]
* xx [ 1367 ] ) * xx [ 11 ] ; xx [ 1391 ] = - xx [ 1386 ] ; xx [ 1392 ] = xx
[ 1387 ] ; xx [ 1393 ] = xx [ 1355 ] ; pm_math_Vector3_cross_ra ( xx + 857 ,
xx + 1391 , xx + 1394 ) ; xx [ 857 ] = 0.08364765677353131 ; xx [ 858 ] =
0.05885119014471588 ; xx [ 859 ] = - 0.1171046152989574 ; xx [ 1361 ] =
0.7067331896749514 ; xx [ 1367 ] = 0.3119482578453143 ; xx [ 1373 ] = xx [
1367 ] * input [ 102 ] ; xx [ 1379 ] = 0.2564149209497433 ; xx [ 1385 ] =
0.5809198493367906 ; xx [ 1391 ] = xx [ 1385 ] * input [ 102 ] ; xx [ 1392 ]
= ( xx [ 1361 ] * xx [ 1373 ] + xx [ 1379 ] * xx [ 1391 ] ) * xx [ 11 ] ; xx
[ 1393 ] = xx [ 11 ] * ( xx [ 1379 ] * xx [ 1373 ] - xx [ 1361 ] * xx [ 1391
] ) ; xx [ 1361 ] = input [ 102 ] - ( xx [ 1385 ] * xx [ 1391 ] + xx [ 1367 ]
* xx [ 1373 ] ) * xx [ 11 ] ; xx [ 1397 ] = - xx [ 1392 ] ; xx [ 1398 ] = xx
[ 1393 ] ; xx [ 1399 ] = xx [ 1361 ] ; pm_math_Vector3_cross_ra ( xx + 857 ,
xx + 1397 , xx + 1400 ) ; xx [ 857 ] = - 0.01629915112845618 ; xx [ 858 ] =
0.05877877777950456 ; xx [ 859 ] = - 2.234529161204791e-3 ; xx [ 1367 ] =
0.12012255005401 ; xx [ 1373 ] = 8.250559975753753e-3 ; xx [ 1379 ] = xx [
1373 ] * input [ 105 ] ; xx [ 1385 ] = 0.06802456318904793 ; xx [ 1391 ] =
0.9903914175877879 ; xx [ 1397 ] = xx [ 1391 ] * input [ 105 ] ; xx [ 1398 ]
= ( xx [ 1367 ] * xx [ 1379 ] + xx [ 1385 ] * xx [ 1397 ] ) * xx [ 11 ] ; xx
[ 1399 ] = xx [ 11 ] * ( xx [ 1385 ] * xx [ 1379 ] - xx [ 1367 ] * xx [ 1397
] ) ; xx [ 1367 ] = input [ 105 ] - ( xx [ 1391 ] * xx [ 1397 ] + xx [ 1373 ]
* xx [ 1379 ] ) * xx [ 11 ] ; xx [ 1403 ] = xx [ 1398 ] ; xx [ 1404 ] = xx [
1399 ] ; xx [ 1405 ] = xx [ 1367 ] ; pm_math_Vector3_cross_ra ( xx + 857 , xx
+ 1403 , xx + 1406 ) ; xx [ 857 ] = 3.708927448715881e-11 ; xx [ 858 ] = -
0.01098323883424421 ; xx [ 859 ] = - 0.106610016515035 ; xx [ 1373 ] =
0.6719667737207162 ; xx [ 1379 ] = 1.699259131240703e-10 ; xx [ 1385 ] = xx [
1379 ] * input [ 108 ] ; xx [ 1391 ] = 1.194822558890025e-10 ; xx [ 1397 ] =
0.7405812953453335 ; xx [ 1403 ] = xx [ 1397 ] * input [ 108 ] ; xx [ 1404 ]
= ( xx [ 1373 ] * xx [ 1385 ] + xx [ 1391 ] * xx [ 1403 ] ) * xx [ 11 ] ; xx
[ 1405 ] = xx [ 11 ] * ( xx [ 1391 ] * xx [ 1385 ] - xx [ 1373 ] * xx [ 1403
] ) ; xx [ 1373 ] = input [ 108 ] - ( xx [ 1397 ] * xx [ 1403 ] + xx [ 1379 ]
* xx [ 1385 ] ) * xx [ 11 ] ; xx [ 1409 ] = - xx [ 1404 ] ; xx [ 1410 ] = xx
[ 1405 ] ; xx [ 1411 ] = xx [ 1373 ] ; pm_math_Vector3_cross_ra ( xx + 857 ,
xx + 1409 , xx + 1412 ) ; xx [ 857 ] = xx [ 790 ] ; xx [ 858 ] = xx [ 789 ] ;
xx [ 859 ] = xx [ 163 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx
+ 857 , xx + 1409 ) ; pm_math_Vector3_cross_ra ( xx + 802 , xx + 1409 , xx +
857 ) ; xx [ 802 ] = xx [ 817 ] ; xx [ 803 ] = xx [ 734 ] ; xx [ 804 ] = xx [
171 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 802 , xx + 1415
) ; pm_math_Vector3_cross_ra ( xx + 814 , xx + 1415 , xx + 802 ) ; xx [ 814 ]
= xx [ 830 ] ; xx [ 815 ] = xx [ 747 ] ; xx [ 816 ] = xx [ 732 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 814 , xx + 1418 ) ;
pm_math_Vector3_cross_ra ( xx + 827 , xx + 1418 , xx + 814 ) ; xx [ 827 ] =
0.01688944443296599 ; xx [ 828 ] = 0.1061533353579484 ; xx [ 829 ] = -
0.0363534993916424 ; pm_math_Quaternion_compose_ra ( xx + 583 , xx + 61 , xx
+ 1421 ) ; pm_math_Quaternion_compose_ra ( xx + 1421 , xx + 88 , xx + 1425 )
; pm_math_Quaternion_compose_ra ( xx + 1425 , xx + 84 , xx + 1429 ) ;
pm_math_Quaternion_compose_ra ( xx + 1429 , xx + 113 , xx + 1433 ) ;
pm_math_Quaternion_xform_ra ( xx + 1433 , xx + 827 , xx + 1437 ) ;
pm_math_Quaternion_xform_ra ( xx + 1429 , xx + 154 , xx + 1440 ) ;
pm_math_Quaternion_xform_ra ( xx + 1425 , xx + 121 , xx + 1429 ) ;
pm_math_Quaternion_xform_ra ( xx + 1421 , xx + 92 , xx + 1425 ) ;
pm_math_Quaternion_xform_ra ( xx + 583 , xx + 396 , xx + 1421 ) ; xx [ 583 ]
= xx [ 1440 ] + xx [ 1429 ] + xx [ 1425 ] + xx [ 1421 ] - xx [ 587 ] ; xx [
584 ] = 0.01688944435119629 ; xx [ 585 ] = xx [ 1437 ] + xx [ 583 ] - xx [
584 ] ; xx [ 586 ] = xx [ 1441 ] + xx [ 1430 ] + xx [ 1426 ] + xx [ 1422 ] +
xx [ 589 ] ; xx [ 587 ] = 0.1319682159423828 ; xx [ 589 ] = xx [ 1438 ] + xx
[ 586 ] - xx [ 587 ] ; xx [ 1379 ] = xx [ 1442 ] + xx [ 1431 ] + xx [ 1427 ]
+ xx [ 1423 ] + xx [ 592 ] ; xx [ 592 ] = 0.8089576416015625 ; xx [ 1385 ] =
xx [ 1439 ] + xx [ 1379 ] - xx [ 592 ] ; xx [ 1391 ] = sqrt ( xx [ 585 ] * xx
[ 585 ] + xx [ 589 ] * xx [ 589 ] + xx [ 1385 ] * xx [ 1385 ] ) ; if ( xx [
1391 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1391 ] = input [ 124 ] / xx [ 1391 ] ; xx [ 1421 ] =
xx [ 1391 ] * xx [ 585 ] ; xx [ 1422 ] = xx [ 1391 ] * xx [ 589 ] ; xx [ 1423
] = xx [ 1391 ] * xx [ 1385 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1433 , xx + 1421 , xx + 1424 ) ; pm_math_Vector3_cross_ra ( xx + 827 , xx +
1424 , xx + 1421 ) ; xx [ 827 ] = - 0.01688944426942647 ; xx [ 828 ] =
0.1061533353718742 ; xx [ 829 ] = - 0.03635349939337851 ;
pm_math_Quaternion_xform_ra ( xx + 1433 , xx + 827 , xx + 1427 ) ; xx [ 585 ]
= xx [ 1427 ] + xx [ 583 ] + xx [ 584 ] ; xx [ 584 ] = xx [ 1428 ] + xx [ 586
] - xx [ 587 ] ; xx [ 587 ] = xx [ 1429 ] + xx [ 1379 ] - xx [ 592 ] ; xx [
589 ] = sqrt ( xx [ 585 ] * xx [ 585 ] + xx [ 584 ] * xx [ 584 ] + xx [ 587 ]
* xx [ 587 ] ) ; if ( xx [ 589 ] == 0.0 ) { return sm_ssci_recordRunTimeError
( "physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force1' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 589 ] = input [ 125 ] / xx [ 589 ] ; xx [ 1427 ] = xx
[ 589 ] * xx [ 585 ] ; xx [ 1428 ] = xx [ 589 ] * xx [ 584 ] ; xx [ 1429 ] =
xx [ 589 ] * xx [ 587 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1433 , xx
+ 1427 , xx + 1430 ) ; pm_math_Vector3_cross_ra ( xx + 827 , xx + 1430 , xx +
1427 ) ; xx [ 827 ] = 9.709312439494935e-3 ; xx [ 828 ] = -
0.08575875923336911 ; xx [ 829 ] = 4.916076512637418e-3 ;
pm_math_Quaternion_xform_ra ( xx + 1433 , xx + 827 , xx + 1437 ) ; xx [ 584 ]
= 9.709312438964843e-3 ; xx [ 585 ] = xx [ 1437 ] + xx [ 583 ] - xx [ 584 ] ;
xx [ 587 ] = 2.232642650604248e-3 ; xx [ 592 ] = xx [ 1438 ] + xx [ 586 ] +
xx [ 587 ] ; xx [ 1385 ] = 0.8689576416015625 ; xx [ 1397 ] = xx [ 1439 ] +
xx [ 1379 ] - xx [ 1385 ] ; xx [ 1403 ] = sqrt ( xx [ 585 ] * xx [ 585 ] + xx
[ 592 ] * xx [ 592 ] + xx [ 1397 ] * xx [ 1397 ] ) ; if ( xx [ 1403 ] == 0.0
) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force2' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1403 ] = input [ 126 ] / xx [ 1403 ] ; xx [ 1437 ] =
xx [ 1403 ] * xx [ 585 ] ; xx [ 1438 ] = xx [ 1403 ] * xx [ 592 ] ; xx [ 1439
] = xx [ 1403 ] * xx [ 1397 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1433 , xx + 1437 , xx + 1440 ) ; pm_math_Vector3_cross_ra ( xx + 827 , xx +
1440 , xx + 1437 ) ; xx [ 827 ] = - 9.709312438434646e-3 ; xx [ 828 ] = -
0.0857587592253635 ; xx [ 829 ] = 4.916076511639372e-3 ;
pm_math_Quaternion_xform_ra ( xx + 1433 , xx + 827 , xx + 1443 ) ; xx [ 585 ]
= xx [ 1443 ] + xx [ 583 ] + xx [ 584 ] ; xx [ 584 ] = xx [ 1444 ] + xx [ 586
] + xx [ 587 ] ; xx [ 587 ] = xx [ 1445 ] + xx [ 1379 ] - xx [ 1385 ] ; xx [
592 ] = sqrt ( xx [ 585 ] * xx [ 585 ] + xx [ 584 ] * xx [ 584 ] + xx [ 587 ]
* xx [ 587 ] ) ; if ( xx [ 592 ] == 0.0 ) { return sm_ssci_recordRunTimeError
( "physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force3' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 592 ] = input [ 127 ] / xx [ 592 ] ; xx [ 1443 ] = xx
[ 592 ] * xx [ 585 ] ; xx [ 1444 ] = xx [ 592 ] * xx [ 584 ] ; xx [ 1445 ] =
xx [ 592 ] * xx [ 587 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1433 , xx
+ 1443 , xx + 1446 ) ; pm_math_Vector3_cross_ra ( xx + 827 , xx + 1446 , xx +
1443 ) ; xx [ 827 ] = 0.1069609375520753 ; xx [ 828 ] = 0.01842456453313058 ;
xx [ 829 ] = - 0.1622978990106889 ; pm_math_Quaternion_xform_ra ( xx + 1433 ,
xx + 827 , xx + 1449 ) ; xx [ 584 ] = 0.06488653564453126 ; xx [ 585 ] = xx [
1449 ] + xx [ 583 ] - xx [ 584 ] ; xx [ 587 ] = 0.03644176864624023 ; xx [
1385 ] = xx [ 1450 ] + xx [ 586 ] - xx [ 587 ] ; xx [ 1397 ] =
0.9499576416015625 ; xx [ 1449 ] = xx [ 1451 ] + xx [ 1379 ] - xx [ 1397 ] ;
xx [ 1450 ] = sqrt ( xx [ 585 ] * xx [ 585 ] + xx [ 1385 ] * xx [ 1385 ] + xx
[ 1449 ] * xx [ 1449 ] ) ; if ( xx [ 1450 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force4' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1450 ] = input [ 128 ] / xx [ 1450 ] ; xx [ 1451 ] =
xx [ 1450 ] * xx [ 585 ] ; xx [ 1452 ] = xx [ 1450 ] * xx [ 1385 ] ; xx [
1453 ] = xx [ 1450 ] * xx [ 1449 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 1433 , xx + 1451 , xx + 1454 ) ; pm_math_Vector3_cross_ra ( xx + 827 , xx +
1454 , xx + 1451 ) ; xx [ 827 ] = 0.09543898773968792 ; xx [ 828 ] = -
0.07942755025287042 ; xx [ 829 ] = - 0.08485896084049524 ;
pm_math_Quaternion_xform_ra ( xx + 1433 , xx + 827 , xx + 1457 ) ; xx [ 585 ]
= 0.1324676666259766 ; xx [ 1385 ] = xx [ 1457 ] + xx [ 583 ] - xx [ 585 ] ;
xx [ 1449 ] = 0.1263068237304688 ; xx [ 1460 ] = xx [ 1458 ] + xx [ 586 ] -
xx [ 1449 ] ; xx [ 1457 ] = 0.9199576416015626 ; xx [ 1458 ] = xx [ 1459 ] +
xx [ 1379 ] - xx [ 1457 ] ; xx [ 1459 ] = sqrt ( xx [ 1385 ] * xx [ 1385 ] +
xx [ 1460 ] * xx [ 1460 ] + xx [ 1458 ] * xx [ 1458 ] ) ; if ( xx [ 1459 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force5' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1459 ] = input [ 129 ] / xx [ 1459 ] ; xx [ 1461 ] =
xx [ 1459 ] * xx [ 1385 ] ; xx [ 1462 ] = xx [ 1459 ] * xx [ 1460 ] ; xx [
1463 ] = xx [ 1459 ] * xx [ 1458 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 1433 , xx + 1461 , xx + 1464 ) ; pm_math_Vector3_cross_ra ( xx + 827 , xx +
1464 , xx + 1460 ) ; xx [ 827 ] = - 0.1069609374479245 ; xx [ 828 ] =
0.01842456462132292 ; xx [ 829 ] = - 0.1622978990216837 ;
pm_math_Quaternion_xform_ra ( xx + 1433 , xx + 827 , xx + 1467 ) ; xx [ 1385
] = xx [ 1467 ] + xx [ 583 ] + xx [ 584 ] ; xx [ 584 ] = xx [ 1468 ] + xx [
586 ] - xx [ 587 ] ; xx [ 587 ] = xx [ 1469 ] + xx [ 1379 ] - xx [ 1397 ] ;
xx [ 1397 ] = sqrt ( xx [ 1385 ] * xx [ 1385 ] + xx [ 584 ] * xx [ 584 ] + xx
[ 587 ] * xx [ 587 ] ) ; if ( xx [ 1397 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force6' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1397 ] = input [ 130 ] / xx [ 1397 ] ; xx [ 1467 ] =
xx [ 1397 ] * xx [ 1385 ] ; xx [ 1468 ] = xx [ 1397 ] * xx [ 584 ] ; xx [
1469 ] = xx [ 1397 ] * xx [ 587 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1433 , xx + 1467 , xx + 1470 ) ; pm_math_Vector3_cross_ra ( xx + 827 , xx +
1470 , xx + 1467 ) ; xx [ 827 ] = - 0.09543898772417915 ; xx [ 828 ] = -
0.07942755017417825 ; xx [ 829 ] = - 0.08485896085030567 ;
pm_math_Quaternion_xform_ra ( xx + 1433 , xx + 827 , xx + 1473 ) ; xx [ 584 ]
= xx [ 1473 ] + xx [ 583 ] + xx [ 585 ] ; xx [ 583 ] = xx [ 1474 ] + xx [ 586
] - xx [ 1449 ] ; xx [ 585 ] = xx [ 1475 ] + xx [ 1379 ] - xx [ 1457 ] ; xx [
586 ] = sqrt ( xx [ 584 ] * xx [ 584 ] + xx [ 583 ] * xx [ 583 ] + xx [ 585 ]
* xx [ 585 ] ) ; if ( xx [ 586 ] == 0.0 ) { return sm_ssci_recordRunTimeError
( "physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force7' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 586 ] = input [ 131 ] / xx [ 586 ] ; xx [ 1473 ] = xx
[ 586 ] * xx [ 584 ] ; xx [ 1474 ] = xx [ 586 ] * xx [ 583 ] ; xx [ 1475 ] =
xx [ 586 ] * xx [ 585 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1433 , xx
+ 1473 , xx + 583 ) ; pm_math_Vector3_cross_ra ( xx + 827 , xx + 583 , xx +
1473 ) ; xx [ 587 ] = xx [ 1434 ] * input [ 132 ] ; xx [ 827 ] = xx [ 1435 ]
* input [ 132 ] ; xx [ 828 ] = xx [ 1435 ] * input [ 133 ] ; xx [ 829 ] = xx
[ 1436 ] * input [ 133 ] ; xx [ 1379 ] = xx [ 1436 ] * input [ 134 ] ; xx [
1385 ] = xx [ 1434 ] * input [ 134 ] ; xx [ 1476 ] = xx [ 745 ] ; xx [ 1477 ]
= xx [ 758 ] ; xx [ 1478 ] = xx [ 129 ] ; pm_math_Quaternion_inverseXform_ra
( xx + 113 , xx + 1476 , xx + 1479 ) ; pm_math_Vector3_cross_ra ( xx + 840 ,
xx + 1479 , xx + 1476 ) ; xx [ 840 ] = xx [ 104 ] ; xx [ 841 ] = xx [ 759 ] ;
xx [ 842 ] = xx [ 851 ] ; pm_math_Vector3_cross_ra ( xx + 771 , xx + 840 , xx
+ 1482 ) ; xx [ 1485 ] = xx [ 130 ] ; xx [ 1486 ] = xx [ 145 ] ; xx [ 1487 ]
= xx [ 852 ] ; pm_math_Vector3_cross_ra ( xx + 840 , xx + 1485 , xx + 1488 )
; xx [ 1485 ] = - xx [ 103 ] ; xx [ 1486 ] = - xx [ 147 ] ; xx [ 1487 ] = xx
[ 850 ] ; xx [ 850 ] = xx [ 102 ] ; xx [ 851 ] = xx [ 146 ] ; xx [ 852 ] = xx
[ 849 ] ; pm_math_Vector3_cross_ra ( xx + 1485 , xx + 850 , xx + 102 ) ; xx [
130 ] = xx [ 1488 ] + xx [ 102 ] ; xx [ 145 ] = xx [ 1482 ] - xx [ 130 ] ; xx
[ 146 ] = xx [ 860 ] - xx [ 872 ] - xx [ 881 ] - xx [ 887 ] - xx [ 893 ] - xx
[ 902 ] - xx [ 908 ] - xx [ 914 ] - xx [ 920 ] - xx [ 926 ] - xx [ 932 ] - xx
[ 938 ] - xx [ 944 ] - xx [ 950 ] - xx [ 956 ] - xx [ 962 ] - xx [ 968 ] - xx
[ 974 ] - xx [ 980 ] - xx [ 986 ] - xx [ 992 ] - xx [ 998 ] - xx [ 1004 ] -
xx [ 1010 ] - xx [ 1016 ] - xx [ 1022 ] - xx [ 1028 ] - xx [ 1034 ] - xx [
1040 ] - xx [ 1046 ] - xx [ 1052 ] - xx [ 1058 ] - xx [ 1064 ] - xx [ 1070 ]
- xx [ 1076 ] - xx [ 1082 ] - xx [ 1088 ] - xx [ 1094 ] - xx [ 1100 ] - xx [
1106 ] - xx [ 1112 ] - xx [ 1118 ] - xx [ 1124 ] - xx [ 1130 ] - xx [ 1136 ]
- xx [ 1142 ] - xx [ 1148 ] - xx [ 1154 ] - xx [ 1160 ] - xx [ 1166 ] - xx [
1172 ] - xx [ 1178 ] - xx [ 1184 ] - xx [ 1190 ] - xx [ 1196 ] - xx [ 1202 ]
- xx [ 1208 ] - xx [ 1214 ] - xx [ 1220 ] - xx [ 1226 ] - xx [ 1232 ] - xx [
1238 ] - xx [ 1244 ] - xx [ 1250 ] - xx [ 1256 ] - xx [ 1262 ] - xx [ 1268 ]
- xx [ 1274 ] - xx [ 1280 ] - xx [ 1286 ] - xx [ 1292 ] - xx [ 1298 ] - xx [
1304 ] - xx [ 1310 ] - xx [ 1316 ] - xx [ 1322 ] - xx [ 1328 ] - xx [ 1334 ]
- xx [ 1340 ] - xx [ 1346 ] - xx [ 1352 ] - xx [ 1358 ] - xx [ 1364 ] - xx [
1370 ] - xx [ 1376 ] - xx [ 1382 ] - xx [ 1388 ] - xx [ 1394 ] - xx [ 1400 ]
- xx [ 1406 ] - xx [ 1412 ] - xx [ 857 ] - xx [ 802 ] - xx [ 814 ] - xx [
1421 ] - xx [ 1427 ] - xx [ 1437 ] - xx [ 1443 ] - xx [ 1451 ] - xx [ 1460 ]
- xx [ 1467 ] - xx [ 1473 ] - xx [ 11 ] * ( xx [ 1436 ] * xx [ 587 ] - xx [
1433 ] * xx [ 827 ] ) - ( input [ 133 ] - ( xx [ 1435 ] * xx [ 828 ] + xx [
1436 ] * xx [ 829 ] ) * xx [ 11 ] ) - ( xx [ 1433 ] * xx [ 1379 ] + xx [ 1435
] * xx [ 1385 ] ) * xx [ 11 ] - xx [ 1476 ] + xx [ 99 ] * xx [ 145 ] ; xx [
99 ] = state [ 24 ] + xx [ 42 ] ; if ( xx [ 43 ] < xx [ 99 ] ) xx [ 99 ] = xx
[ 43 ] ; xx [ 147 ] = - ( xx [ 99 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 147
] ) xx [ 147 ] = xx [ 0 ] ; xx [ 759 ] = xx [ 95 ] * state [ 27 ] ; xx [ 849
] = xx [ 147 ] * xx [ 147 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 147 ] ) * ( ( -
xx [ 99 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 759 ] ) - xx [ 172 ] * xx [ 99 ]
) ; if ( xx [ 43 ] > xx [ 849 ] ) xx [ 849 ] = xx [ 43 ] ; xx [ 99 ] = state
[ 24 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 99 ] ) xx [ 99 ] = xx [ 43 ] ; xx
[ 147 ] = xx [ 99 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 147 ] ) xx [ 147 ] =
xx [ 0 ] ; xx [ 850 ] = ( xx [ 172 ] * xx [ 99 ] + ( xx [ 99 ] == xx [ 43 ] ?
xx [ 43 ] : xx [ 759 ] ) ) * xx [ 147 ] * xx [ 147 ] * ( xx [ 66 ] - xx [ 11
] * xx [ 147 ] ) ; if ( xx [ 43 ] > xx [ 850 ] ) xx [ 850 ] = xx [ 43 ] ; xx
[ 99 ] = xx [ 1489 ] + xx [ 103 ] ; xx [ 147 ] = xx [ 1483 ] - xx [ 99 ] ; xx
[ 759 ] = xx [ 861 ] - xx [ 873 ] - xx [ 882 ] - xx [ 888 ] - xx [ 894 ] - xx
[ 903 ] - xx [ 909 ] - xx [ 915 ] - xx [ 921 ] - xx [ 927 ] - xx [ 933 ] - xx
[ 939 ] - xx [ 945 ] - xx [ 951 ] - xx [ 957 ] - xx [ 963 ] - xx [ 969 ] - xx
[ 975 ] - xx [ 981 ] - xx [ 987 ] - xx [ 993 ] - xx [ 999 ] - xx [ 1005 ] -
xx [ 1011 ] - xx [ 1017 ] - xx [ 1023 ] - xx [ 1029 ] - xx [ 1035 ] - xx [
1041 ] - xx [ 1047 ] - xx [ 1053 ] - xx [ 1059 ] - xx [ 1065 ] - xx [ 1071 ]
- xx [ 1077 ] - xx [ 1083 ] - xx [ 1089 ] - xx [ 1095 ] - xx [ 1101 ] - xx [
1107 ] - xx [ 1113 ] - xx [ 1119 ] - xx [ 1125 ] - xx [ 1131 ] - xx [ 1137 ]
- xx [ 1143 ] - xx [ 1149 ] - xx [ 1155 ] - xx [ 1161 ] - xx [ 1167 ] - xx [
1173 ] - xx [ 1179 ] - xx [ 1185 ] - xx [ 1191 ] - xx [ 1197 ] - xx [ 1203 ]
- xx [ 1209 ] - xx [ 1215 ] - xx [ 1221 ] - xx [ 1227 ] - xx [ 1233 ] - xx [
1239 ] - xx [ 1245 ] - xx [ 1251 ] - xx [ 1257 ] - xx [ 1263 ] - xx [ 1269 ]
- xx [ 1275 ] - xx [ 1281 ] - xx [ 1287 ] - xx [ 1293 ] - xx [ 1299 ] - xx [
1305 ] - xx [ 1311 ] - xx [ 1317 ] - xx [ 1323 ] - xx [ 1329 ] - xx [ 1335 ]
- xx [ 1341 ] - xx [ 1347 ] - xx [ 1353 ] - xx [ 1359 ] - xx [ 1365 ] - xx [
1371 ] - xx [ 1377 ] - xx [ 1383 ] - xx [ 1389 ] - xx [ 1395 ] - xx [ 1401 ]
- xx [ 1407 ] - xx [ 1413 ] - xx [ 858 ] - xx [ 803 ] - xx [ 815 ] - xx [
1422 ] - xx [ 1428 ] - xx [ 1438 ] - xx [ 1444 ] - xx [ 1452 ] - xx [ 1461 ]
- xx [ 1468 ] - xx [ 1474 ] - ( xx [ 1433 ] * xx [ 587 ] + xx [ 1436 ] * xx [
827 ] ) * xx [ 11 ] - xx [ 11 ] * ( xx [ 1434 ] * xx [ 828 ] - xx [ 1433 ] *
xx [ 829 ] ) - ( input [ 134 ] - ( xx [ 1436 ] * xx [ 1379 ] + xx [ 1434 ] *
xx [ 1385 ] ) * xx [ 11 ] ) - xx [ 1477 ] + xx [ 107 ] * xx [ 147 ] ; xx [
102 ] = xx [ 1490 ] + xx [ 104 ] ; xx [ 103 ] = xx [ 1484 ] - xx [ 102 ] ; xx
[ 104 ] = xx [ 862 ] - xx [ 874 ] - xx [ 883 ] - xx [ 889 ] - xx [ 895 ] - xx
[ 904 ] - xx [ 910 ] - xx [ 916 ] - xx [ 922 ] - xx [ 928 ] - xx [ 934 ] - xx
[ 940 ] - xx [ 946 ] - xx [ 952 ] - xx [ 958 ] - xx [ 964 ] - xx [ 970 ] - xx
[ 976 ] - xx [ 982 ] - xx [ 988 ] - xx [ 994 ] - xx [ 1000 ] - xx [ 1006 ] -
xx [ 1012 ] - xx [ 1018 ] - xx [ 1024 ] - xx [ 1030 ] - xx [ 1036 ] - xx [
1042 ] - xx [ 1048 ] - xx [ 1054 ] - xx [ 1060 ] - xx [ 1066 ] - xx [ 1072 ]
- xx [ 1078 ] - xx [ 1084 ] - xx [ 1090 ] - xx [ 1096 ] - xx [ 1102 ] - xx [
1108 ] - xx [ 1114 ] - xx [ 1120 ] - xx [ 1126 ] - xx [ 1132 ] - xx [ 1138 ]
- xx [ 1144 ] - xx [ 1150 ] - xx [ 1156 ] - xx [ 1162 ] - xx [ 1168 ] - xx [
1174 ] - xx [ 1180 ] - xx [ 1186 ] - xx [ 1192 ] - xx [ 1198 ] - xx [ 1204 ]
- xx [ 1210 ] - xx [ 1216 ] - xx [ 1222 ] - xx [ 1228 ] - xx [ 1234 ] - xx [
1240 ] - xx [ 1246 ] - xx [ 1252 ] - xx [ 1258 ] - xx [ 1264 ] - xx [ 1270 ]
- xx [ 1276 ] - xx [ 1282 ] - xx [ 1288 ] - xx [ 1294 ] - xx [ 1300 ] - xx [
1306 ] - xx [ 1312 ] - xx [ 1318 ] - xx [ 1324 ] - xx [ 1330 ] - xx [ 1336 ]
- xx [ 1342 ] - xx [ 1348 ] - xx [ 1354 ] - xx [ 1360 ] - xx [ 1366 ] - xx [
1372 ] - xx [ 1378 ] - xx [ 1384 ] - xx [ 1390 ] - xx [ 1396 ] - xx [ 1402 ]
- xx [ 1408 ] - xx [ 1414 ] - xx [ 859 ] - xx [ 804 ] - xx [ 816 ] - xx [
1423 ] - xx [ 1429 ] - xx [ 1439 ] - xx [ 1445 ] - xx [ 1453 ] - xx [ 1462 ]
- xx [ 1469 ] - xx [ 1475 ] - ( input [ 132 ] - ( xx [ 1434 ] * xx [ 587 ] +
xx [ 1435 ] * xx [ 827 ] ) * xx [ 11 ] ) - ( xx [ 1433 ] * xx [ 828 ] + xx [
1434 ] * xx [ 829 ] ) * xx [ 11 ] - xx [ 11 ] * ( xx [ 1435 ] * xx [ 1379 ] -
xx [ 1433 ] * xx [ 1385 ] ) - xx [ 1478 ] + xx [ 126 ] * xx [ 103 ] ; xx [
802 ] = xx [ 146 ] ; xx [ 803 ] = xx [ 759 ] ; xx [ 804 ] = xx [ 104 ] ; xx [
814 ] = xx [ 771 ] + xx [ 105 ] ; xx [ 815 ] = xx [ 772 ] + xx [ 760 ] ; xx [
816 ] = xx [ 773 ] + xx [ 853 ] ; pm_math_Vector3_cross_ra ( xx + 131 , xx +
840 , xx + 771 ) ; pm_math_Vector3_cross_ra ( xx + 814 , xx + 771 , xx + 827
) ; pm_math_Vector3_cross_ra ( xx + 785 , xx + 154 , xx + 771 ) ;
pm_math_Vector3_cross_ra ( xx + 785 , xx + 771 , xx + 814 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 814 , xx + 771 ) ; xx [
785 ] = - xx [ 130 ] ; xx [ 786 ] = - xx [ 99 ] ; xx [ 787 ] = - xx [ 102 ] ;
pm_math_Vector3_cross_ra ( xx + 131 , xx + 785 , xx + 814 ) ; xx [ 99 ] = (
xx [ 827 ] + xx [ 771 ] + xx [ 814 ] ) * xx [ 137 ] - ( xx [ 869 ] - xx [ 879
] - xx [ 885 ] + xx [ 891 ] + xx [ 897 ] + xx [ 900 ] - xx [ 906 ] + xx [ 912
] + xx [ 918 ] + xx [ 924 ] + xx [ 930 ] + xx [ 936 ] + xx [ 942 ] - xx [ 948
] + xx [ 954 ] + xx [ 960 ] + xx [ 966 ] + xx [ 972 ] + xx [ 978 ] + xx [ 984
] + xx [ 990 ] + xx [ 996 ] + xx [ 1002 ] + xx [ 1008 ] - xx [ 1014 ] + xx [
1020 ] + xx [ 1026 ] + xx [ 1032 ] + xx [ 1038 ] + xx [ 1044 ] + xx [ 1050 ]
+ xx [ 1056 ] + xx [ 1062 ] + xx [ 1068 ] + xx [ 1074 ] + xx [ 1080 ] + xx [
1086 ] + xx [ 1092 ] + xx [ 1098 ] - xx [ 1104 ] + xx [ 1103 ] + xx [ 1116 ]
+ xx [ 1122 ] + xx [ 1128 ] + xx [ 1134 ] - xx [ 1140 ] - xx [ 1146 ] + xx [
1152 ] + xx [ 1158 ] - xx [ 1164 ] - xx [ 1170 ] - xx [ 1176 ] - xx [ 1182 ]
- xx [ 1188 ] - xx [ 1194 ] + xx [ 1200 ] - xx [ 1206 ] - xx [ 1212 ] - xx [
1218 ] - xx [ 1224 ] - xx [ 1230 ] - xx [ 1236 ] - xx [ 1242 ] - xx [ 1248 ]
- xx [ 1254 ] - xx [ 1260 ] - xx [ 1266 ] - xx [ 1272 ] + xx [ 1278 ] - xx [
1284 ] - xx [ 1290 ] - xx [ 1296 ] - xx [ 1302 ] - xx [ 1308 ] - xx [ 1314 ]
- xx [ 1320 ] - xx [ 1326 ] - xx [ 1332 ] - xx [ 1338 ] + xx [ 1344 ] - xx [
1350 ] - xx [ 1356 ] - xx [ 1362 ] - xx [ 1368 ] - xx [ 1374 ] - xx [ 1380 ]
- xx [ 1386 ] - xx [ 1392 ] + xx [ 1398 ] - xx [ 1404 ] + xx [ 1409 ] + xx [
1415 ] + xx [ 1418 ] + xx [ 1424 ] + xx [ 1430 ] + xx [ 1440 ] + xx [ 1446 ]
+ xx [ 1454 ] + xx [ 1464 ] + xx [ 1470 ] + xx [ 583 ] + xx [ 1479 ] ) ; xx [
102 ] = ( xx [ 828 ] + xx [ 772 ] + xx [ 815 ] ) * xx [ 137 ] - ( xx [ 870 ]
+ xx [ 880 ] + xx [ 886 ] + xx [ 892 ] + xx [ 898 ] + xx [ 901 ] + xx [ 907 ]
+ xx [ 913 ] + xx [ 919 ] + xx [ 925 ] + xx [ 931 ] + xx [ 937 ] + xx [ 943 ]
+ xx [ 949 ] + xx [ 955 ] + xx [ 961 ] + xx [ 967 ] + xx [ 973 ] + xx [ 979 ]
+ xx [ 985 ] + xx [ 991 ] + xx [ 997 ] + xx [ 1003 ] + xx [ 1009 ] + xx [
1015 ] + xx [ 1021 ] + xx [ 1027 ] + xx [ 1033 ] + xx [ 1039 ] + xx [ 1045 ]
+ xx [ 1051 ] + xx [ 1057 ] + xx [ 1063 ] + xx [ 1069 ] + xx [ 1075 ] + xx [
1081 ] + xx [ 1087 ] + xx [ 1093 ] + xx [ 1099 ] + xx [ 1105 ] - xx [ 1109 ]
+ xx [ 1117 ] + xx [ 1123 ] + xx [ 1129 ] + xx [ 1135 ] + xx [ 1141 ] + xx [
1147 ] + xx [ 1153 ] + xx [ 1159 ] + xx [ 1165 ] + xx [ 1171 ] + xx [ 1177 ]
+ xx [ 1183 ] + xx [ 1189 ] + xx [ 1195 ] + xx [ 1201 ] + xx [ 1207 ] + xx [
1213 ] + xx [ 1219 ] + xx [ 1225 ] + xx [ 1231 ] + xx [ 1237 ] + xx [ 1243 ]
+ xx [ 1249 ] + xx [ 1255 ] + xx [ 1261 ] + xx [ 1267 ] + xx [ 1273 ] + xx [
1279 ] + xx [ 1285 ] + xx [ 1291 ] + xx [ 1297 ] + xx [ 1303 ] + xx [ 1309 ]
+ xx [ 1315 ] + xx [ 1321 ] + xx [ 1327 ] + xx [ 1333 ] + xx [ 1339 ] + xx [
1345 ] + xx [ 1351 ] + xx [ 1357 ] + xx [ 1363 ] + xx [ 1369 ] + xx [ 1375 ]
+ xx [ 1381 ] + xx [ 1387 ] + xx [ 1393 ] + xx [ 1399 ] + xx [ 1405 ] + xx [
1410 ] + xx [ 1416 ] + xx [ 1419 ] + xx [ 1425 ] + xx [ 1431 ] + xx [ 1441 ]
+ xx [ 1447 ] + xx [ 1455 ] + xx [ 1465 ] + xx [ 1471 ] + xx [ 584 ] + xx [
1480 ] ) ; xx [ 105 ] = ( xx [ 829 ] + xx [ 773 ] + xx [ 816 ] ) * xx [ 137 ]
- ( xx [ 871 ] + xx [ 865 ] + xx [ 868 ] + xx [ 875 ] + xx [ 876 ] + xx [ 877
] + xx [ 878 ] + xx [ 884 ] + xx [ 890 ] + xx [ 896 ] + xx [ 899 ] + xx [ 905
] + xx [ 911 ] + xx [ 917 ] + xx [ 923 ] + xx [ 929 ] + xx [ 935 ] + xx [ 941
] + xx [ 947 ] + xx [ 953 ] + xx [ 959 ] + xx [ 965 ] + xx [ 971 ] + xx [ 977
] + xx [ 983 ] + xx [ 989 ] + xx [ 995 ] + xx [ 1001 ] + xx [ 1007 ] + xx [
1013 ] + xx [ 1019 ] + xx [ 1025 ] + xx [ 1031 ] + xx [ 1037 ] + xx [ 1043 ]
+ xx [ 1049 ] + xx [ 1055 ] + xx [ 1061 ] + xx [ 1067 ] + xx [ 1073 ] + xx [
1079 ] + xx [ 1085 ] + xx [ 1091 ] + xx [ 1097 ] + xx [ 1110 ] + xx [ 1111 ]
+ xx [ 1115 ] + xx [ 1121 ] + xx [ 1127 ] + xx [ 1133 ] + xx [ 1139 ] + xx [
1145 ] + xx [ 1151 ] + xx [ 1157 ] + xx [ 1163 ] + xx [ 1169 ] + xx [ 1175 ]
+ xx [ 1181 ] + xx [ 1187 ] + xx [ 1193 ] + xx [ 1199 ] + xx [ 1205 ] + xx [
1211 ] + xx [ 1217 ] + xx [ 1223 ] + xx [ 1229 ] + xx [ 1235 ] + xx [ 1241 ]
+ xx [ 1247 ] + xx [ 1253 ] + xx [ 1259 ] + xx [ 1265 ] + xx [ 1271 ] + xx [
1277 ] + xx [ 1283 ] + xx [ 1289 ] + xx [ 1295 ] + xx [ 1301 ] + xx [ 1307 ]
+ xx [ 1313 ] + xx [ 1319 ] + xx [ 1325 ] + xx [ 1331 ] + xx [ 1337 ] + xx [
1343 ] + xx [ 1349 ] + xx [ 1355 ] + xx [ 1361 ] + xx [ 1367 ] + xx [ 1373 ]
+ xx [ 1411 ] + xx [ 1417 ] + xx [ 1420 ] + xx [ 1426 ] + xx [ 1432 ] + xx [
1442 ] + xx [ 1448 ] + xx [ 1456 ] + xx [ 1466 ] + xx [ 1472 ] + xx [ 585 ] +
xx [ 1481 ] ) ; xx [ 130 ] = xx [ 99 ] ; xx [ 131 ] = xx [ 102 ] ; xx [ 132 ]
= xx [ 105 ] ; xx [ 107 ] = state [ 25 ] + xx [ 42 ] ; if ( xx [ 43 ] < xx [
107 ] ) xx [ 107 ] = xx [ 43 ] ; xx [ 126 ] = - ( xx [ 107 ] / xx [ 47 ] ) ;
if ( xx [ 0 ] < xx [ 126 ] ) xx [ 126 ] = xx [ 0 ] ; xx [ 133 ] = xx [ 95 ] *
state [ 28 ] ; xx [ 137 ] = xx [ 126 ] * xx [ 126 ] * ( xx [ 66 ] - xx [ 11 ]
* xx [ 126 ] ) * ( ( - xx [ 107 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 133 ] ) -
xx [ 172 ] * xx [ 107 ] ) ; if ( xx [ 43 ] > xx [ 137 ] ) xx [ 137 ] = xx [
43 ] ; xx [ 107 ] = state [ 25 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 107 ] )
xx [ 107 ] = xx [ 43 ] ; xx [ 126 ] = xx [ 107 ] / xx [ 47 ] ; if ( xx [ 0 ]
< xx [ 126 ] ) xx [ 126 ] = xx [ 0 ] ; xx [ 583 ] = ( xx [ 172 ] * xx [ 107 ]
+ ( xx [ 107 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 133 ] ) ) * xx [ 126 ] * xx [
126 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 126 ] ) ; if ( xx [ 43 ] > xx [ 583 ]
) xx [ 583 ] = xx [ 43 ] ; xx [ 107 ] = state [ 26 ] + xx [ 42 ] ; if ( xx [
43 ] < xx [ 107 ] ) xx [ 107 ] = xx [ 43 ] ; xx [ 126 ] = - ( xx [ 107 ] / xx
[ 47 ] ) ; if ( xx [ 0 ] < xx [ 126 ] ) xx [ 126 ] = xx [ 0 ] ; xx [ 133 ] =
xx [ 95 ] * state [ 29 ] ; xx [ 584 ] = xx [ 126 ] * xx [ 126 ] * ( xx [ 66 ]
- xx [ 11 ] * xx [ 126 ] ) * ( ( - xx [ 107 ] == xx [ 43 ] ? xx [ 43 ] : - xx
[ 133 ] ) - xx [ 172 ] * xx [ 107 ] ) ; if ( xx [ 43 ] > xx [ 584 ] ) xx [
584 ] = xx [ 43 ] ; xx [ 107 ] = state [ 26 ] - xx [ 42 ] ; if ( xx [ 43 ] >
xx [ 107 ] ) xx [ 107 ] = xx [ 43 ] ; xx [ 126 ] = xx [ 107 ] / xx [ 47 ] ;
if ( xx [ 0 ] < xx [ 126 ] ) xx [ 126 ] = xx [ 0 ] ; xx [ 585 ] = ( xx [ 172
] * xx [ 107 ] + ( xx [ 107 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 133 ] ) ) * xx
[ 126 ] * xx [ 126 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 126 ] ) ; if ( xx [ 43
] > xx [ 585 ] ) xx [ 585 ] = xx [ 43 ] ; xx [ 771 ] = - xx [ 98 ] ; xx [ 772
] = - xx [ 97 ] ; xx [ 773 ] = xx [ 83 ] ; xx [ 785 ] = - 0.03342895180409124
; xx [ 786 ] = - 2.233705901158266e-11 ; xx [ 787 ] = - 2.906461761334121e-12
; xx [ 814 ] = input [ 0 ] - xx [ 40 ] * state [ 27 ] + xx [ 849 ] - xx [ 850
] - ( pm_math_Vector3_dot_ra ( xx + 110 , xx + 802 ) + pm_math_Vector3_dot_ra
( xx + 134 , xx + 130 ) ) ; xx [ 815 ] = input [ 1 ] - xx [ 40 ] * state [ 28
] + xx [ 137 ] - xx [ 583 ] - ( pm_math_Vector3_dot_ra ( xx + 148 , xx + 802
) + pm_math_Vector3_dot_ra ( xx + 151 , xx + 130 ) ) ; xx [ 816 ] = input [ 2
] - xx [ 40 ] * state [ 29 ] + xx [ 584 ] - xx [ 585 ] - (
pm_math_Vector3_dot_ra ( xx + 771 , xx + 802 ) + pm_math_Vector3_dot_ra ( xx
+ 785 , xx + 130 ) ) ; solveSymmetricPosDef ( xx + 177 , xx + 814 , 3 , 1 ,
xx + 110 , xx + 130 ) ; xx [ 130 ] = xx [ 146 ] + xx [ 110 ] * xx [ 81 ] + xx
[ 111 ] * xx [ 71 ] - xx [ 158 ] * xx [ 112 ] ; xx [ 131 ] = xx [ 759 ] + xx
[ 110 ] * xx [ 108 ] + xx [ 111 ] * xx [ 78 ] - xx [ 160 ] * xx [ 112 ] ; xx
[ 132 ] = xx [ 104 ] + xx [ 110 ] * xx [ 127 ] + xx [ 111 ] * xx [ 82 ] + xx
[ 162 ] * xx [ 112 ] ; pm_math_Quaternion_xform_ra ( xx + 113 , xx + 130 , xx
+ 133 ) ; xx [ 130 ] = xx [ 99 ] + xx [ 110 ] * xx [ 138 ] + xx [ 111 ] * xx
[ 100 ] - xx [ 166 ] * xx [ 112 ] ; xx [ 131 ] = xx [ 102 ] + xx [ 110 ] * xx
[ 139 ] + xx [ 111 ] * xx [ 101 ] - xx [ 168 ] * xx [ 112 ] ; xx [ 132 ] = xx
[ 105 ] + xx [ 110 ] * xx [ 140 ] + xx [ 111 ] * xx [ 144 ] - xx [ 170 ] * xx
[ 112 ] ; pm_math_Quaternion_xform_ra ( xx + 113 , xx + 130 , xx + 99 ) ;
pm_math_Vector3_cross_ra ( xx + 154 , xx + 99 , xx + 130 ) ; xx [ 136 ] = xx
[ 76 ] ; xx [ 137 ] = xx [ 693 ] ; xx [ 138 ] = xx [ 782 ] ;
pm_math_Vector3_cross_ra ( xx + 705 , xx + 136 , xx + 151 ) ; xx [ 177 ] = xx
[ 120 ] ; xx [ 178 ] = xx [ 265 ] ; xx [ 179 ] = xx [ 783 ] ;
pm_math_Vector3_cross_ra ( xx + 136 , xx + 177 , xx + 180 ) ; xx [ 177 ] = xx
[ 75 ] ; xx [ 178 ] = xx [ 267 ] ; xx [ 179 ] = xx [ 781 ] ; xx [ 183 ] = xx
[ 74 ] ; xx [ 184 ] = xx [ 266 ] ; xx [ 185 ] = xx [ 780 ] ;
pm_math_Vector3_cross_ra ( xx + 177 , xx + 183 , xx + 74 ) ; xx [ 71 ] = xx [
180 ] + xx [ 74 ] ; xx [ 78 ] = xx [ 151 ] - xx [ 71 ] ; xx [ 81 ] = xx [ 181
] + xx [ 75 ] ; xx [ 82 ] = xx [ 152 ] - xx [ 81 ] ; xx [ 74 ] = xx [ 182 ] +
xx [ 76 ] ; xx [ 75 ] = xx [ 153 ] - xx [ 74 ] ; xx [ 151 ] = xx [ 78 ] ; xx
[ 152 ] = xx [ 82 ] ; xx [ 153 ] = xx [ 75 ] ; pm_math_Matrix3x3_xform_ra (
xx + 186 , xx + 151 , xx + 177 ) ; xx [ 180 ] = xx [ 705 ] + xx [ 77 ] ; xx [
181 ] = xx [ 706 ] + xx [ 694 ] ; xx [ 182 ] = xx [ 707 ] + xx [ 784 ] ;
pm_math_Vector3_cross_ra ( xx + 228 , xx + 136 , xx + 183 ) ;
pm_math_Vector3_cross_ra ( xx + 180 , xx + 183 , xx + 136 ) ;
pm_math_Vector3_cross_ra ( xx + 716 , xx + 121 , xx + 180 ) ;
pm_math_Vector3_cross_ra ( xx + 716 , xx + 180 , xx + 183 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 183 , xx + 180 ) ; xx [
183 ] = - xx [ 71 ] ; xx [ 184 ] = - xx [ 81 ] ; xx [ 185 ] = - xx [ 74 ] ;
pm_math_Vector3_cross_ra ( xx + 228 , xx + 183 , xx + 186 ) ; xx [ 71 ] = xx
[ 136 ] + xx [ 180 ] + xx [ 186 ] ; xx [ 74 ] = xx [ 137 ] + xx [ 181 ] + xx
[ 187 ] ; xx [ 76 ] = xx [ 138 ] + xx [ 182 ] + xx [ 188 ] ; xx [ 136 ] = xx
[ 71 ] ; xx [ 137 ] = xx [ 74 ] ; xx [ 138 ] = xx [ 76 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 195 , xx + 136 , xx + 180 ) ; xx [ 77 ] =
xx [ 791 ] - xx [ 799 ] - xx [ 808 ] - xx [ 794 ] - xx [ 821 ] - xx [ 811 ] -
xx [ 834 ] - xx [ 824 ] - xx [ 846 ] - xx [ 837 ] + xx [ 133 ] + xx [ 130 ] +
xx [ 177 ] + xx [ 180 ] ; xx [ 81 ] = state [ 18 ] + xx [ 42 ] ; if ( xx [ 43
] < xx [ 81 ] ) xx [ 81 ] = xx [ 43 ] ; xx [ 102 ] = - ( xx [ 81 ] / xx [ 47
] ) ; if ( xx [ 0 ] < xx [ 102 ] ) xx [ 102 ] = xx [ 0 ] ; xx [ 104 ] = xx [
95 ] * state [ 21 ] ; xx [ 105 ] = xx [ 102 ] * xx [ 102 ] * ( xx [ 66 ] - xx
[ 11 ] * xx [ 102 ] ) * ( ( - xx [ 81 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 104
] ) - xx [ 172 ] * xx [ 81 ] ) ; if ( xx [ 43 ] > xx [ 105 ] ) xx [ 105 ] =
xx [ 43 ] ; xx [ 81 ] = state [ 18 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 81 ]
) xx [ 81 ] = xx [ 43 ] ; xx [ 102 ] = xx [ 81 ] / xx [ 47 ] ; if ( xx [ 0 ]
< xx [ 102 ] ) xx [ 102 ] = xx [ 0 ] ; xx [ 107 ] = ( xx [ 172 ] * xx [ 81 ]
+ ( xx [ 81 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 104 ] ) ) * xx [ 102 ] * xx [
102 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 102 ] ) ; if ( xx [ 43 ] > xx [ 107 ]
) xx [ 107 ] = xx [ 43 ] ; xx [ 81 ] = xx [ 792 ] - xx [ 800 ] - xx [ 809 ] -
xx [ 795 ] - xx [ 822 ] - xx [ 812 ] - xx [ 835 ] - xx [ 825 ] - xx [ 847 ] -
xx [ 838 ] + xx [ 134 ] + xx [ 131 ] + xx [ 178 ] + xx [ 181 ] ; xx [ 102 ] =
xx [ 793 ] - xx [ 801 ] - xx [ 810 ] - xx [ 796 ] - xx [ 823 ] - xx [ 813 ] -
xx [ 836 ] - xx [ 826 ] - xx [ 848 ] - xx [ 839 ] + xx [ 135 ] + xx [ 132 ] +
xx [ 179 ] + xx [ 182 ] ; xx [ 130 ] = xx [ 77 ] ; xx [ 131 ] = xx [ 81 ] ;
xx [ 132 ] = xx [ 102 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 195 , xx
+ 151 , xx + 133 ) ; pm_math_Matrix3x3_xform_ra ( xx + 247 , xx + 136 , xx +
151 ) ; xx [ 104 ] = xx [ 790 ] + xx [ 797 ] - xx [ 805 ] + xx [ 817 ] - xx [
818 ] + xx [ 830 ] - xx [ 831 ] + xx [ 745 ] - xx [ 843 ] + xx [ 99 ] + xx [
133 ] + xx [ 151 ] ; xx [ 99 ] = xx [ 789 ] - xx [ 798 ] - xx [ 806 ] + xx [
734 ] - xx [ 819 ] + xx [ 747 ] - xx [ 832 ] + xx [ 758 ] - xx [ 844 ] + xx [
100 ] + xx [ 134 ] + xx [ 152 ] ; xx [ 100 ] = xx [ 163 ] - xx [ 143 ] - xx [
807 ] + xx [ 171 ] - xx [ 820 ] + xx [ 732 ] - xx [ 833 ] + xx [ 129 ] - xx [
845 ] + xx [ 101 ] + xx [ 135 ] + xx [ 153 ] ; xx [ 133 ] = xx [ 104 ] ; xx [
134 ] = xx [ 99 ] ; xx [ 135 ] = xx [ 100 ] ; xx [ 101 ] = state [ 19 ] + xx
[ 42 ] ; if ( xx [ 43 ] < xx [ 101 ] ) xx [ 101 ] = xx [ 43 ] ; xx [ 108 ] =
- ( xx [ 101 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 108 ] ) xx [ 108 ] = xx [
0 ] ; xx [ 120 ] = xx [ 95 ] * state [ 22 ] ; xx [ 126 ] = xx [ 108 ] * xx [
108 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 108 ] ) * ( ( - xx [ 101 ] == xx [ 43
] ? xx [ 43 ] : - xx [ 120 ] ) - xx [ 172 ] * xx [ 101 ] ) ; if ( xx [ 43 ] >
xx [ 126 ] ) xx [ 126 ] = xx [ 43 ] ; xx [ 101 ] = state [ 19 ] - xx [ 42 ] ;
if ( xx [ 43 ] > xx [ 101 ] ) xx [ 101 ] = xx [ 43 ] ; xx [ 108 ] = xx [ 101
] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 108 ] ) xx [ 108 ] = xx [ 0 ] ; xx [ 127
] = ( xx [ 172 ] * xx [ 101 ] + ( xx [ 101 ] == xx [ 43 ] ? xx [ 43 ] : xx [
120 ] ) ) * xx [ 108 ] * xx [ 108 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 108 ] )
; if ( xx [ 43 ] > xx [ 127 ] ) xx [ 127 ] = xx [ 43 ] ; xx [ 101 ] = state [
20 ] + xx [ 42 ] ; if ( xx [ 43 ] < xx [ 101 ] ) xx [ 101 ] = xx [ 43 ] ; xx
[ 108 ] = - ( xx [ 101 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 108 ] ) xx [
108 ] = xx [ 0 ] ; xx [ 120 ] = xx [ 95 ] * state [ 23 ] ; xx [ 129 ] = xx [
108 ] * xx [ 108 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 108 ] ) * ( ( - xx [ 101
] == xx [ 43 ] ? xx [ 43 ] : - xx [ 120 ] ) - xx [ 172 ] * xx [ 101 ] ) ; if
( xx [ 43 ] > xx [ 129 ] ) xx [ 129 ] = xx [ 43 ] ; xx [ 101 ] = state [ 20 ]
- xx [ 42 ] ; if ( xx [ 43 ] > xx [ 101 ] ) xx [ 101 ] = xx [ 43 ] ; xx [ 108
] = xx [ 101 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 108 ] ) xx [ 108 ] = xx [ 0
] ; xx [ 136 ] = ( xx [ 172 ] * xx [ 101 ] + ( xx [ 101 ] == xx [ 43 ] ? xx [
43 ] : xx [ 120 ] ) ) * xx [ 108 ] * xx [ 108 ] * ( xx [ 66 ] - xx [ 11 ] *
xx [ 108 ] ) ; if ( xx [ 43 ] > xx [ 136 ] ) xx [ 136 ] = xx [ 43 ] ; xx [
137 ] = input [ 3 ] - xx [ 40 ] * state [ 21 ] + xx [ 105 ] - xx [ 107 ] - (
pm_math_Vector3_dot_ra ( xx + 222 , xx + 130 ) + pm_math_Vector3_dot_ra ( xx
+ 240 , xx + 133 ) ) ; xx [ 138 ] = input [ 4 ] - xx [ 40 ] * state [ 22 ] +
xx [ 126 ] - xx [ 127 ] - ( pm_math_Vector3_dot_ra ( xx + 268 , xx + 130 ) +
pm_math_Vector3_dot_ra ( xx + 271 , xx + 133 ) ) ; xx [ 139 ] = input [ 5 ] -
xx [ 40 ] * state [ 23 ] + xx [ 129 ] - xx [ 136 ] - ( pm_math_Vector3_dot_ra
( xx + 277 , xx + 130 ) + pm_math_Vector3_dot_ra ( xx + 285 , xx + 133 ) ) ;
solveSymmetricPosDef ( xx + 299 , xx + 137 , 3 , 1 , xx + 129 , xx + 132 ) ;
xx [ 132 ] = xx [ 77 ] + xx [ 125 ] * xx [ 129 ] + xx [ 51 ] * xx [ 130 ] +
xx [ 291 ] * xx [ 131 ] ; xx [ 133 ] = xx [ 81 ] + xx [ 174 ] * xx [ 129 ] +
xx [ 54 ] * xx [ 130 ] + xx [ 292 ] * xx [ 131 ] ; xx [ 134 ] = xx [ 102 ] +
xx [ 176 ] * xx [ 129 ] + xx [ 57 ] * xx [ 130 ] + xx [ 280 ] * xx [ 131 ] ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 132 , xx + 125 ) ; xx [ 132 ] =
xx [ 104 ] + xx [ 259 ] * xx [ 129 ] + xx [ 72 ] * xx [ 130 ] + xx [ 281 ] *
xx [ 131 ] ; xx [ 133 ] = xx [ 99 ] + xx [ 260 ] * xx [ 129 ] + xx [ 73 ] *
xx [ 130 ] + xx [ 282 ] * xx [ 131 ] ; xx [ 134 ] = xx [ 100 ] + xx [ 243 ] *
xx [ 129 ] + xx [ 244 ] * xx [ 130 ] + xx [ 293 ] * xx [ 131 ] ;
pm_math_Quaternion_xform_ra ( xx + 84 , xx + 132 , xx + 99 ) ;
pm_math_Vector3_cross_ra ( xx + 121 , xx + 99 , xx + 132 ) ; xx [ 135 ] = xx
[ 29 ] ; xx [ 136 ] = xx [ 352 ] ; xx [ 137 ] = xx [ 362 ] ;
pm_math_Vector3_cross_ra ( xx + 621 , xx + 135 , xx + 138 ) ; xx [ 151 ] = xx
[ 596 ] ; xx [ 152 ] = xx [ 296 ] ; xx [ 153 ] = xx [ 714 ] ;
pm_math_Vector3_cross_ra ( xx + 135 , xx + 151 , xx + 176 ) ; xx [ 29 ] = xx
[ 176 ] + xx [ 715 ] * xx [ 37 ] - xx [ 350 ] * xx [ 26 ] ; xx [ 51 ] = xx [
138 ] - xx [ 29 ] ; xx [ 54 ] = xx [ 177 ] + xx [ 26 ] * xx [ 295 ] ; xx [ 26
] = xx [ 139 ] - xx [ 54 ] ; xx [ 57 ] = xx [ 37 ] * xx [ 295 ] - xx [ 178 ]
; xx [ 37 ] = xx [ 140 ] + xx [ 57 ] ; xx [ 138 ] = xx [ 51 ] ; xx [ 139 ] =
xx [ 26 ] ; xx [ 140 ] = xx [ 37 ] ; pm_math_Matrix3x3_xform_ra ( xx + 231 ,
xx + 138 , xx + 151 ) ; xx [ 176 ] = xx [ 621 ] + xx [ 36 ] ; xx [ 177 ] = xx
[ 622 ] + xx [ 626 ] ; xx [ 178 ] = xx [ 623 ] + xx [ 625 ] ;
pm_math_Vector3_cross_ra ( xx + 274 , xx + 135 , xx + 179 ) ;
pm_math_Vector3_cross_ra ( xx + 176 , xx + 179 , xx + 135 ) ;
pm_math_Vector3_cross_ra ( xx + 650 , xx + 92 , xx + 176 ) ;
pm_math_Vector3_cross_ra ( xx + 650 , xx + 176 , xx + 179 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 179 , xx + 176 ) ; xx [
179 ] = - xx [ 29 ] ; xx [ 180 ] = - xx [ 54 ] ; xx [ 181 ] = xx [ 57 ] ;
pm_math_Vector3_cross_ra ( xx + 274 , xx + 179 , xx + 182 ) ; xx [ 29 ] = xx
[ 135 ] + xx [ 176 ] + xx [ 182 ] ; xx [ 36 ] = xx [ 136 ] + xx [ 177 ] + xx
[ 183 ] ; xx [ 54 ] = xx [ 137 ] + xx [ 178 ] + xx [ 184 ] ; xx [ 135 ] = xx
[ 29 ] ; xx [ 136 ] = xx [ 36 ] ; xx [ 137 ] = xx [ 54 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 308 , xx + 135 , xx + 176 ) ; xx [ 57 ] =
xx [ 722 ] - xx [ 729 ] - xx [ 739 ] - xx [ 726 ] - xx [ 752 ] - xx [ 742 ] -
xx [ 765 ] - xx [ 755 ] - xx [ 777 ] - xx [ 768 ] + xx [ 125 ] + xx [ 132 ] +
xx [ 151 ] + xx [ 176 ] ; xx [ 72 ] = state [ 12 ] + xx [ 42 ] ; if ( xx [ 43
] < xx [ 72 ] ) xx [ 72 ] = xx [ 43 ] ; xx [ 73 ] = - ( xx [ 72 ] / xx [ 47 ]
) ; if ( xx [ 0 ] < xx [ 73 ] ) xx [ 73 ] = xx [ 0 ] ; xx [ 77 ] = xx [ 95 ]
* state [ 15 ] ; xx [ 81 ] = xx [ 73 ] * xx [ 73 ] * ( xx [ 66 ] - xx [ 11 ]
* xx [ 73 ] ) * ( ( - xx [ 72 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 77 ] ) - xx
[ 172 ] * xx [ 72 ] ) ; if ( xx [ 43 ] > xx [ 81 ] ) xx [ 81 ] = xx [ 43 ] ;
xx [ 72 ] = state [ 12 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 72 ] ) xx [ 72 ]
= xx [ 43 ] ; xx [ 73 ] = xx [ 72 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 73 ] )
xx [ 73 ] = xx [ 0 ] ; xx [ 102 ] = ( xx [ 172 ] * xx [ 72 ] + ( xx [ 72 ] ==
xx [ 43 ] ? xx [ 43 ] : xx [ 77 ] ) ) * xx [ 73 ] * xx [ 73 ] * ( xx [ 66 ] -
xx [ 11 ] * xx [ 73 ] ) ; if ( xx [ 43 ] > xx [ 102 ] ) xx [ 102 ] = xx [ 43
] ; xx [ 72 ] = xx [ 723 ] - xx [ 730 ] - xx [ 740 ] - xx [ 727 ] - xx [ 753
] - xx [ 743 ] - xx [ 766 ] - xx [ 756 ] - xx [ 778 ] - xx [ 769 ] + xx [ 126
] + xx [ 133 ] + xx [ 152 ] + xx [ 177 ] ; xx [ 73 ] = xx [ 724 ] - xx [ 731
] - xx [ 741 ] - xx [ 728 ] - xx [ 754 ] - xx [ 744 ] - xx [ 767 ] - xx [ 757
] - xx [ 779 ] - xx [ 770 ] + xx [ 127 ] + xx [ 134 ] + xx [ 153 ] + xx [ 178
] ; xx [ 125 ] = xx [ 57 ] ; xx [ 126 ] = xx [ 72 ] ; xx [ 127 ] = xx [ 73 ]
; pm_math_Matrix3x3_transposeXform_ra ( xx + 308 , xx + 138 , xx + 132 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 317 , xx + 135 , xx + 138 ) ; xx [ 77 ] =
xx [ 735 ] - xx [ 159 ] - xx [ 736 ] + xx [ 748 ] - xx [ 749 ] + xx [ 761 ] -
xx [ 762 ] + xx [ 680 ] - xx [ 774 ] + xx [ 99 ] + xx [ 132 ] + xx [ 138 ] ;
xx [ 99 ] = xx [ 169 ] + xx [ 721 ] - xx [ 737 ] + xx [ 719 ] - xx [ 750 ] +
xx [ 682 ] - xx [ 763 ] + xx [ 692 ] - xx [ 775 ] + xx [ 100 ] + xx [ 133 ] +
xx [ 139 ] ; xx [ 100 ] = xx [ 119 ] - xx [ 725 ] - xx [ 738 ] + xx [ 668 ] -
xx [ 751 ] + xx [ 669 ] - xx [ 764 ] + xx [ 79 ] - xx [ 776 ] + xx [ 101 ] +
xx [ 134 ] + xx [ 140 ] ; xx [ 132 ] = xx [ 77 ] ; xx [ 133 ] = xx [ 99 ] ;
xx [ 134 ] = xx [ 100 ] ; xx [ 79 ] = state [ 13 ] + xx [ 42 ] ; if ( xx [ 43
] < xx [ 79 ] ) xx [ 79 ] = xx [ 43 ] ; xx [ 101 ] = - ( xx [ 79 ] / xx [ 47
] ) ; if ( xx [ 0 ] < xx [ 101 ] ) xx [ 101 ] = xx [ 0 ] ; xx [ 104 ] = xx [
95 ] * state [ 16 ] ; xx [ 105 ] = xx [ 101 ] * xx [ 101 ] * ( xx [ 66 ] - xx
[ 11 ] * xx [ 101 ] ) * ( ( - xx [ 79 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 104
] ) - xx [ 172 ] * xx [ 79 ] ) ; if ( xx [ 43 ] > xx [ 105 ] ) xx [ 105 ] =
xx [ 43 ] ; xx [ 79 ] = state [ 13 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 79 ]
) xx [ 79 ] = xx [ 43 ] ; xx [ 101 ] = xx [ 79 ] / xx [ 47 ] ; if ( xx [ 0 ]
< xx [ 101 ] ) xx [ 101 ] = xx [ 0 ] ; xx [ 107 ] = ( xx [ 172 ] * xx [ 79 ]
+ ( xx [ 79 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 104 ] ) ) * xx [ 101 ] * xx [
101 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 101 ] ) ; if ( xx [ 43 ] > xx [ 107 ]
) xx [ 107 ] = xx [ 43 ] ; xx [ 79 ] = state [ 14 ] + xx [ 42 ] ; if ( xx [
43 ] < xx [ 79 ] ) xx [ 79 ] = xx [ 43 ] ; xx [ 101 ] = - ( xx [ 79 ] / xx [
47 ] ) ; if ( xx [ 0 ] < xx [ 101 ] ) xx [ 101 ] = xx [ 0 ] ; xx [ 104 ] = xx
[ 95 ] * state [ 17 ] ; xx [ 108 ] = xx [ 101 ] * xx [ 101 ] * ( xx [ 66 ] -
xx [ 11 ] * xx [ 101 ] ) * ( ( - xx [ 79 ] == xx [ 43 ] ? xx [ 43 ] : - xx [
104 ] ) - xx [ 172 ] * xx [ 79 ] ) ; if ( xx [ 43 ] > xx [ 108 ] ) xx [ 108 ]
= xx [ 43 ] ; xx [ 79 ] = state [ 14 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 79
] ) xx [ 79 ] = xx [ 43 ] ; xx [ 101 ] = xx [ 79 ] / xx [ 47 ] ; if ( xx [ 0
] < xx [ 101 ] ) xx [ 101 ] = xx [ 0 ] ; xx [ 119 ] = ( xx [ 172 ] * xx [ 79
] + ( xx [ 79 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 104 ] ) ) * xx [ 101 ] * xx [
101 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 101 ] ) ; if ( xx [ 43 ] > xx [ 119 ]
) xx [ 119 ] = xx [ 43 ] ; xx [ 135 ] = input [ 6 ] - xx [ 40 ] * state [ 15
] + xx [ 81 ] - xx [ 102 ] - ( pm_math_Vector3_dot_ra ( xx + 256 , xx + 125 )
+ pm_math_Vector3_dot_ra ( xx + 288 , xx + 132 ) ) ; xx [ 136 ] = input [ 7 ]
- xx [ 40 ] * state [ 16 ] + xx [ 105 ] - xx [ 107 ] - (
pm_math_Vector3_dot_ra ( xx + 363 , xx + 125 ) + pm_math_Vector3_dot_ra ( xx
+ 369 , xx + 132 ) ) ; xx [ 137 ] = input [ 8 ] - xx [ 40 ] * state [ 17 ] +
xx [ 108 ] - xx [ 119 ] - ( xx [ 72 ] * xx [ 49 ] + xx [ 73 ] * xx [ 48 ] +
pm_math_Vector3_dot_ra ( xx + 384 , xx + 132 ) ) ; solveSymmetricPosDef ( xx
+ 401 , xx + 135 , 3 , 1 , xx + 125 , xx + 132 ) ; xx [ 132 ] = xx [ 57 ] +
xx [ 96 ] * xx [ 125 ] + xx [ 347 ] * xx [ 126 ] + xx [ 390 ] * xx [ 127 ] ;
xx [ 133 ] = xx [ 72 ] + xx [ 227 ] * xx [ 125 ] + xx [ 375 ] * xx [ 126 ] +
xx [ 391 ] * xx [ 127 ] ; xx [ 134 ] = xx [ 73 ] + xx [ 245 ] * xx [ 125 ] +
xx [ 366 ] * xx [ 126 ] + xx [ 387 ] * xx [ 127 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 132 , xx + 135 ) ; xx [ 132 ] =
xx [ 77 ] + xx [ 297 ] * xx [ 125 ] + xx [ 367 ] * xx [ 126 ] + xx [ 388 ] *
xx [ 127 ] ; xx [ 133 ] = xx [ 99 ] + xx [ 298 ] * xx [ 125 ] + xx [ 368 ] *
xx [ 126 ] + xx [ 389 ] * xx [ 127 ] ; xx [ 134 ] = xx [ 100 ] + xx [ 294 ] *
xx [ 125 ] + xx [ 376 ] * xx [ 126 ] + xx [ 395 ] * xx [ 127 ] ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 132 , xx + 99 ) ;
pm_math_Vector3_cross_ra ( xx + 92 , xx + 99 , xx + 132 ) ; xx [ 138 ] = xx [
20 ] ; xx [ 139 ] = xx [ 451 ] ; xx [ 140 ] = xx [ 452 ] ;
pm_math_Vector3_cross_ra ( xx + 636 , xx + 138 , xx + 151 ) ; xx [ 158 ] = xx
[ 377 ] ; xx [ 159 ] = xx [ 400 ] ; xx [ 160 ] = xx [ 645 ] ;
pm_math_Vector3_cross_ra ( xx + 138 , xx + 158 , xx + 168 ) ; xx [ 20 ] = xx
[ 168 ] + xx [ 649 ] * xx [ 23 ] - xx [ 449 ] * xx [ 19 ] ; xx [ 57 ] = xx [
151 ] - xx [ 20 ] ; xx [ 72 ] = xx [ 169 ] + xx [ 19 ] * xx [ 399 ] ; xx [ 19
] = xx [ 152 ] - xx [ 72 ] ; xx [ 73 ] = xx [ 23 ] * xx [ 399 ] - xx [ 170 ]
; xx [ 23 ] = xx [ 153 ] + xx [ 73 ] ; xx [ 151 ] = xx [ 57 ] ; xx [ 152 ] =
xx [ 19 ] ; xx [ 153 ] = xx [ 23 ] ; pm_math_Matrix3x3_xform_ra ( xx + 353 ,
xx + 151 , xx + 158 ) ; xx [ 168 ] = xx [ 636 ] + xx [ 22 ] ; xx [ 169 ] = xx
[ 637 ] + xx [ 644 ] ; xx [ 170 ] = xx [ 638 ] + xx [ 639 ] ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 138 , xx + 176 ) ;
pm_math_Vector3_cross_ra ( xx + 168 , xx + 176 , xx + 138 ) ;
pm_math_Vector3_cross_ra ( xx + 548 , xx + 396 , xx + 168 ) ;
pm_math_Vector3_cross_ra ( xx + 548 , xx + 168 , xx + 176 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 176 , xx + 168 ) ; xx [
176 ] = - xx [ 20 ] ; xx [ 177 ] = - xx [ 72 ] ; xx [ 178 ] = xx [ 73 ] ;
pm_math_Vector3_cross_ra ( xx + 67 , xx + 176 , xx + 179 ) ; xx [ 20 ] = xx [
138 ] + xx [ 168 ] + xx [ 179 ] ; xx [ 22 ] = xx [ 139 ] + xx [ 169 ] + xx [
180 ] ; xx [ 67 ] = xx [ 140 ] + xx [ 170 ] + xx [ 181 ] ; xx [ 138 ] = xx [
20 ] ; xx [ 139 ] = xx [ 22 ] ; xx [ 140 ] = xx [ 67 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 410 , xx + 138 , xx + 168 ) ; xx [ 68 ] =
xx [ 656 ] - xx [ 665 ] - xx [ 674 ] - xx [ 662 ] - xx [ 686 ] - xx [ 677 ] -
xx [ 699 ] - xx [ 689 ] - xx [ 711 ] - xx [ 702 ] + xx [ 135 ] + xx [ 132 ] +
xx [ 158 ] + xx [ 168 ] ; xx [ 69 ] = state [ 6 ] + xx [ 42 ] ; if ( xx [ 43
] < xx [ 69 ] ) xx [ 69 ] = xx [ 43 ] ; xx [ 72 ] = - ( xx [ 69 ] / xx [ 47 ]
) ; if ( xx [ 0 ] < xx [ 72 ] ) xx [ 72 ] = xx [ 0 ] ; xx [ 73 ] = xx [ 95 ]
* state [ 9 ] ; xx [ 77 ] = xx [ 72 ] * xx [ 72 ] * ( xx [ 66 ] - xx [ 11 ] *
xx [ 72 ] ) * ( ( - xx [ 69 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 73 ] ) - xx [
172 ] * xx [ 69 ] ) ; if ( xx [ 43 ] > xx [ 77 ] ) xx [ 77 ] = xx [ 43 ] ; xx
[ 69 ] = state [ 6 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 69 ] ) xx [ 69 ] =
xx [ 43 ] ; xx [ 72 ] = xx [ 69 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 72 ] )
xx [ 72 ] = xx [ 0 ] ; xx [ 79 ] = ( xx [ 172 ] * xx [ 69 ] + ( xx [ 69 ] ==
xx [ 43 ] ? xx [ 43 ] : xx [ 73 ] ) ) * xx [ 72 ] * xx [ 72 ] * ( xx [ 66 ] -
xx [ 11 ] * xx [ 72 ] ) ; if ( xx [ 43 ] > xx [ 79 ] ) xx [ 79 ] = xx [ 43 ]
; xx [ 69 ] = xx [ 657 ] - xx [ 666 ] - xx [ 675 ] - xx [ 663 ] - xx [ 687 ]
- xx [ 678 ] - xx [ 700 ] - xx [ 690 ] - xx [ 712 ] - xx [ 703 ] + xx [ 136 ]
+ xx [ 133 ] + xx [ 159 ] + xx [ 169 ] ; xx [ 72 ] = xx [ 658 ] - xx [ 667 ]
- xx [ 676 ] - xx [ 664 ] - xx [ 688 ] - xx [ 679 ] - xx [ 701 ] - xx [ 691 ]
- xx [ 713 ] - xx [ 704 ] + xx [ 137 ] + xx [ 134 ] + xx [ 160 ] + xx [ 170 ]
; xx [ 132 ] = xx [ 68 ] ; xx [ 133 ] = xx [ 69 ] ; xx [ 134 ] = xx [ 72 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 410 , xx + 151 , xx + 135 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 419 , xx + 138 , xx + 151 ) ; xx [ 73 ] =
xx [ 659 ] + xx [ 661 ] - xx [ 671 ] + xx [ 660 ] - xx [ 683 ] + xx [ 695 ] -
xx [ 696 ] + xx [ 601 ] - xx [ 708 ] + xx [ 99 ] + xx [ 135 ] + xx [ 151 ] ;
xx [ 81 ] = xx [ 655 ] - xx [ 142 ] - xx [ 672 ] + xx [ 554 ] - xx [ 684 ] +
xx [ 603 ] - xx [ 697 ] + xx [ 624 ] - xx [ 709 ] + xx [ 100 ] + xx [ 136 ] +
xx [ 152 ] ; xx [ 96 ] = xx [ 167 ] - xx [ 56 ] - xx [ 673 ] + xx [ 467 ] -
xx [ 685 ] + xx [ 552 ] - xx [ 698 ] + xx [ 31 ] - xx [ 710 ] + xx [ 101 ] +
xx [ 137 ] + xx [ 153 ] ; xx [ 99 ] = xx [ 73 ] ; xx [ 100 ] = xx [ 81 ] ; xx
[ 101 ] = xx [ 96 ] ; xx [ 31 ] = state [ 7 ] + xx [ 42 ] ; if ( xx [ 43 ] <
xx [ 31 ] ) xx [ 31 ] = xx [ 43 ] ; xx [ 56 ] = - ( xx [ 31 ] / xx [ 47 ] ) ;
if ( xx [ 0 ] < xx [ 56 ] ) xx [ 56 ] = xx [ 0 ] ; xx [ 102 ] = xx [ 95 ] *
state [ 10 ] ; xx [ 104 ] = xx [ 56 ] * xx [ 56 ] * ( xx [ 66 ] - xx [ 11 ] *
xx [ 56 ] ) * ( ( - xx [ 31 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 102 ] ) - xx
[ 172 ] * xx [ 31 ] ) ; if ( xx [ 43 ] > xx [ 104 ] ) xx [ 104 ] = xx [ 43 ]
; xx [ 31 ] = state [ 7 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 31 ] ) xx [ 31
] = xx [ 43 ] ; xx [ 56 ] = xx [ 31 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 56 ]
) xx [ 56 ] = xx [ 0 ] ; xx [ 105 ] = ( xx [ 172 ] * xx [ 31 ] + ( xx [ 31 ]
== xx [ 43 ] ? xx [ 43 ] : xx [ 102 ] ) ) * xx [ 56 ] * xx [ 56 ] * ( xx [ 66
] - xx [ 11 ] * xx [ 56 ] ) ; if ( xx [ 43 ] > xx [ 105 ] ) xx [ 105 ] = xx [
43 ] ; xx [ 31 ] = state [ 8 ] + xx [ 42 ] ; if ( xx [ 43 ] < xx [ 31 ] ) xx
[ 31 ] = xx [ 43 ] ; xx [ 56 ] = - ( xx [ 31 ] / xx [ 47 ] ) ; if ( xx [ 0 ]
< xx [ 56 ] ) xx [ 56 ] = xx [ 0 ] ; xx [ 102 ] = xx [ 95 ] * state [ 11 ] ;
xx [ 107 ] = xx [ 56 ] * xx [ 56 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 56 ] ) *
( ( - xx [ 31 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 102 ] ) - xx [ 172 ] * xx [
31 ] ) ; if ( xx [ 43 ] > xx [ 107 ] ) xx [ 107 ] = xx [ 43 ] ; xx [ 31 ] =
state [ 8 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 31 ] ) xx [ 31 ] = xx [ 43 ]
; xx [ 56 ] = xx [ 31 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [ 56 ] ) xx [ 56 ] =
xx [ 0 ] ; xx [ 108 ] = ( xx [ 172 ] * xx [ 31 ] + ( xx [ 31 ] == xx [ 43 ] ?
xx [ 43 ] : xx [ 102 ] ) ) * xx [ 56 ] * xx [ 56 ] * ( xx [ 66 ] - xx [ 11 ]
* xx [ 56 ] ) ; if ( xx [ 43 ] > xx [ 108 ] ) xx [ 108 ] = xx [ 43 ] ; xx [
135 ] = input [ 9 ] - xx [ 40 ] * state [ 9 ] + xx [ 77 ] - xx [ 79 ] - (
pm_math_Vector3_dot_ra ( xx + 261 , xx + 132 ) + pm_math_Vector3_dot_ra ( xx
+ 372 , xx + 99 ) ) ; xx [ 136 ] = input [ 10 ] - xx [ 40 ] * state [ 10 ] +
xx [ 104 ] - xx [ 105 ] - ( pm_math_Vector3_dot_ra ( xx + 464 , xx + 132 ) +
pm_math_Vector3_dot_ra ( xx + 470 , xx + 99 ) ) ; xx [ 137 ] = input [ 11 ] -
xx [ 40 ] * state [ 11 ] + xx [ 107 ] - xx [ 108 ] - ( xx [ 69 ] * xx [ 25 ]
+ xx [ 72 ] * xx [ 24 ] + pm_math_Vector3_dot_ra ( xx + 483 , xx + 99 ) ) ;
solveSymmetricPosDef ( xx + 500 , xx + 135 , 3 , 1 , xx + 99 , xx + 132 ) ;
xx [ 132 ] = xx [ 68 ] + xx [ 380 ] * xx [ 99 ] + xx [ 446 ] * xx [ 100 ] +
xx [ 489 ] * xx [ 101 ] ; xx [ 133 ] = xx [ 69 ] + xx [ 392 ] * xx [ 99 ] +
xx [ 453 ] * xx [ 100 ] + xx [ 490 ] * xx [ 101 ] ; xx [ 134 ] = xx [ 72 ] +
xx [ 344 ] * xx [ 99 ] + xx [ 454 ] * xx [ 100 ] + xx [ 486 ] * xx [ 101 ] ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 132 , xx + 135 ) ; xx [ 132 ] =
xx [ 73 ] + xx [ 346 ] * xx [ 99 ] + xx [ 479 ] * xx [ 100 ] + xx [ 487 ] *
xx [ 101 ] ; xx [ 133 ] = xx [ 81 ] + xx [ 393 ] * xx [ 99 ] + xx [ 480 ] *
xx [ 100 ] + xx [ 488 ] * xx [ 101 ] ; xx [ 134 ] = xx [ 96 ] + xx [ 394 ] *
xx [ 99 ] + xx [ 473 ] * xx [ 100 ] + xx [ 494 ] * xx [ 101 ] ;
pm_math_Quaternion_xform_ra ( xx + 61 , xx + 132 , xx + 138 ) ;
pm_math_Vector3_cross_ra ( xx + 396 , xx + 138 , xx + 132 ) ; xx [ 142 ] = xx
[ 45 ] ; xx [ 143 ] = xx [ 379 ] ; xx [ 144 ] = xx [ 462 ] ;
pm_math_Vector3_cross_ra ( xx + 548 , xx + 142 , xx + 151 ) ; xx [ 31 ] = xx
[ 151 ] + xx [ 7 ] * xx [ 463 ] - xx [ 457 ] * xx [ 2 ] ; xx [ 45 ] = xx [ 2
] * xx [ 128 ] + xx [ 152 ] ; xx [ 2 ] = xx [ 153 ] - xx [ 7 ] * xx [ 128 ] ;
xx [ 142 ] = - xx [ 31 ] ; xx [ 143 ] = - xx [ 45 ] ; xx [ 144 ] = - xx [ 2 ]
; pm_math_Matrix3x3_xform_ra ( xx + 563 , xx + 142 , xx + 151 ) ; xx [ 158 ]
= xx [ 55 ] * xx [ 41 ] + xx [ 461 ] * xx [ 44 ] ; xx [ 159 ] = - ( xx [ 44 ]
* xx [ 3 ] ) ; xx [ 160 ] = - ( xx [ 41 ] * xx [ 3 ] ) ;
pm_math_Vector3_cross_ra ( xx + 548 , xx + 158 , xx + 166 ) ; xx [ 3 ] = xx [
166 ] - ( xx [ 2 ] * xx [ 41 ] + xx [ 44 ] * xx [ 45 ] ) ; xx [ 7 ] = xx [
167 ] + xx [ 31 ] * xx [ 44 ] ; xx [ 44 ] = xx [ 168 ] + xx [ 31 ] * xx [ 41
] ; xx [ 158 ] = xx [ 3 ] ; xx [ 159 ] = xx [ 7 ] ; xx [ 160 ] = xx [ 44 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 509 , xx + 158 , xx + 166 ) ; xx [ 41 ] =
xx [ 560 ] - xx [ 557 ] * xx [ 653 ] + xx [ 555 ] * xx [ 598 ] - xx [ 610 ] -
xx [ 615 ] - xx [ 631 ] - xx [ 628 ] - xx [ 21 ] * xx [ 52 ] - xx [ 642 ] +
xx [ 136 ] + xx [ 133 ] + xx [ 152 ] + xx [ 167 ] ; xx [ 55 ] = xx [ 561 ] +
xx [ 18 ] * xx [ 653 ] - xx [ 590 ] * xx [ 598 ] - xx [ 611 ] - xx [ 616 ] -
xx [ 632 ] - xx [ 629 ] + xx [ 591 ] * xx [ 52 ] - xx [ 643 ] + xx [ 137 ] +
xx [ 134 ] + xx [ 153 ] + xx [ 168 ] ; xx [ 167 ] = xx [ 559 ] - (
0.02933876077043094 * xx [ 33 ] - 2.074016415803327e-3 * xx [ 65 ] ) - ( xx [
18 ] * xx [ 582 ] - xx [ 557 ] * xx [ 562 ] ) - ( xx [ 555 ] * xx [ 599 ] -
xx [ 590 ] * xx [ 600 ] ) - xx [ 609 ] - xx [ 614 ] - xx [ 630 ] - xx [ 627 ]
- ( xx [ 591 ] * xx [ 617 ] - xx [ 21 ] * xx [ 613 ] ) - xx [ 641 ] + xx [
135 ] + xx [ 132 ] + xx [ 151 ] + xx [ 166 ] ; xx [ 168 ] = xx [ 41 ] ; xx [
169 ] = xx [ 55 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 509 , xx + 142
, xx + 132 ) ; pm_math_Matrix3x3_xform_ra ( xx + 518 , xx + 158 , xx + 135 )
; xx [ 18 ] = xx [ 653 ] - xx [ 598 ] + xx [ 604 ] - xx [ 618 ] + xx [ 612 ]
- xx [ 633 ] + xx [ 52 ] - xx [ 646 ] + xx [ 138 ] + xx [ 132 ] + xx [ 135 ]
; xx [ 142 ] = xx [ 18 ] ; xx [ 143 ] = xx [ 65 ] + xx [ 562 ] - xx [ 599 ] +
xx [ 605 ] - xx [ 619 ] + xx [ 607 ] - xx [ 634 ] + xx [ 613 ] - xx [ 647 ] +
xx [ 139 ] + xx [ 133 ] + xx [ 136 ] ; xx [ 144 ] = xx [ 582 ] - xx [ 33 ] -
xx [ 600 ] + xx [ 588 ] - xx [ 620 ] + xx [ 595 ] - xx [ 635 ] + xx [ 617 ] -
xx [ 648 ] + xx [ 140 ] + xx [ 134 ] + xx [ 137 ] ; xx [ 21 ] = state [ 1 ] +
xx [ 42 ] ; if ( xx [ 43 ] < xx [ 21 ] ) xx [ 21 ] = xx [ 43 ] ; xx [ 33 ] =
- ( xx [ 21 ] / xx [ 47 ] ) ; if ( xx [ 0 ] < xx [ 33 ] ) xx [ 33 ] = xx [ 0
] ; xx [ 52 ] = xx [ 95 ] * state [ 4 ] ; xx [ 56 ] = xx [ 33 ] * xx [ 33 ] *
( xx [ 66 ] - xx [ 11 ] * xx [ 33 ] ) * ( ( - xx [ 21 ] == xx [ 43 ] ? xx [
43 ] : - xx [ 52 ] ) - xx [ 172 ] * xx [ 21 ] ) ; if ( xx [ 43 ] > xx [ 56 ]
) xx [ 56 ] = xx [ 43 ] ; xx [ 21 ] = state [ 1 ] - xx [ 42 ] ; if ( xx [ 43
] > xx [ 21 ] ) xx [ 21 ] = xx [ 43 ] ; xx [ 33 ] = xx [ 21 ] / xx [ 47 ] ;
if ( xx [ 0 ] < xx [ 33 ] ) xx [ 33 ] = xx [ 0 ] ; xx [ 65 ] = ( xx [ 172 ] *
xx [ 21 ] + ( xx [ 21 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 52 ] ) ) * xx [ 33 ]
* xx [ 33 ] * ( xx [ 66 ] - xx [ 11 ] * xx [ 33 ] ) ; if ( xx [ 43 ] > xx [
65 ] ) xx [ 65 ] = xx [ 43 ] ; xx [ 21 ] = state [ 2 ] + xx [ 42 ] ; if ( xx
[ 43 ] < xx [ 21 ] ) xx [ 21 ] = xx [ 43 ] ; xx [ 33 ] = - ( xx [ 21 ] / xx [
47 ] ) ; if ( xx [ 0 ] < xx [ 33 ] ) xx [ 33 ] = xx [ 0 ] ; xx [ 52 ] = xx [
95 ] * state [ 5 ] ; xx [ 68 ] = xx [ 33 ] * xx [ 33 ] * ( xx [ 66 ] - xx [
11 ] * xx [ 33 ] ) * ( ( - xx [ 21 ] == xx [ 43 ] ? xx [ 43 ] : - xx [ 52 ] )
- xx [ 172 ] * xx [ 21 ] ) ; if ( xx [ 43 ] > xx [ 68 ] ) xx [ 68 ] = xx [ 43
] ; xx [ 21 ] = state [ 2 ] - xx [ 42 ] ; if ( xx [ 43 ] > xx [ 21 ] ) xx [
21 ] = xx [ 43 ] ; xx [ 33 ] = xx [ 21 ] / xx [ 47 ] ; if ( xx [ 0 ] < xx [
33 ] ) xx [ 33 ] = xx [ 0 ] ; xx [ 42 ] = ( xx [ 172 ] * xx [ 21 ] + ( xx [
21 ] == xx [ 43 ] ? xx [ 43 ] : xx [ 52 ] ) ) * xx [ 33 ] * xx [ 33 ] * ( xx
[ 66 ] - xx [ 11 ] * xx [ 33 ] ) ; if ( xx [ 43 ] > xx [ 42 ] ) xx [ 42 ] =
xx [ 43 ] ; xx [ 132 ] = input [ 12 ] - xx [ 40 ] * state [ 3 ] + xx [ 455 ]
- xx [ 456 ] - ( pm_math_Vector3_dot_ra ( xx + 15 , xx + 167 ) +
pm_math_Vector3_dot_ra ( xx + 458 , xx + 142 ) ) ; xx [ 133 ] = input [ 13 ]
- xx [ 40 ] * state [ 4 ] + xx [ 56 ] - xx [ 65 ] - ( pm_math_Vector3_dot_ra
( xx + 491 , xx + 167 ) + pm_math_Vector3_dot_ra ( xx + 545 , xx + 142 ) ) ;
xx [ 134 ] = input [ 14 ] - xx [ 40 ] * state [ 5 ] + xx [ 68 ] - xx [ 42 ] -
( xx [ 41 ] * xx [ 9 ] + xx [ 55 ] * xx [ 13 ] + xx [ 18 ] * xx [ 556 ] ) ;
solveSymmetricPosDef ( xx + 572 , xx + 132 , 3 , 1 , xx + 15 , xx + 40 ) ; xx
[ 176 ] = xx [ 157 ] ; xx [ 177 ] = xx [ 498 ] ; xx [ 178 ] = xx [ 558 ] ; xx
[ 179 ] = xx [ 161 ] ; xx [ 180 ] = xx [ 499 ] ; xx [ 181 ] = xx [ 28 ] ; xx
[ 182 ] = xx [ 164 ] ; xx [ 183 ] = xx [ 495 ] ; xx [ 184 ] = xx [ 30 ] ; xx
[ 185 ] = xx [ 165 ] ; xx [ 186 ] = xx [ 496 ] ; xx [ 187 ] = xx [ 34 ] ; xx
[ 188 ] = xx [ 345 ] ; xx [ 189 ] = xx [ 497 ] ; xx [ 190 ] = xx [ 38 ] ; xx
[ 191 ] = xx [ 378 ] ; xx [ 192 ] = xx [ 551 ] ; xx [ 193 ] = xx [ 39 ] ;
solveSymmetricPosDef ( xx + 572 , xx + 176 , 3 , 6 , xx + 291 , xx + 38 ) ;
xx [ 38 ] = xx [ 300 ] ; xx [ 39 ] = xx [ 303 ] ; xx [ 40 ] = xx [ 306 ] ; xx
[ 18 ] = 9.806649999999999 ; xx [ 21 ] = xx [ 18 ] * xx [ 14 ] ; xx [ 28 ] =
xx [ 18 ] * xx [ 6 ] ; xx [ 30 ] = xx [ 11 ] * ( xx [ 5 ] * xx [ 21 ] + xx [
28 ] * xx [ 10 ] ) ; xx [ 33 ] = ( xx [ 5 ] * xx [ 28 ] - xx [ 21 ] * xx [ 10
] ) * xx [ 11 ] ; xx [ 5 ] = ( xx [ 21 ] * xx [ 14 ] + xx [ 28 ] * xx [ 6 ] )
* xx [ 11 ] ; xx [ 41 ] = xx [ 30 ] ; xx [ 42 ] = xx [ 33 ] ; xx [ 43 ] = xx
[ 18 ] - xx [ 5 ] ; xx [ 6 ] = xx [ 15 ] - pm_math_Vector3_dot_ra ( xx + 38 ,
xx + 41 ) ; xx [ 38 ] = xx [ 301 ] ; xx [ 39 ] = xx [ 304 ] ; xx [ 40 ] = xx
[ 307 ] ; xx [ 10 ] = xx [ 16 ] - pm_math_Vector3_dot_ra ( xx + 38 , xx + 41
) ; xx [ 14 ] = xx [ 302 ] ; xx [ 15 ] = xx [ 305 ] ; xx [ 16 ] = xx [ 308 ]
; xx [ 21 ] = xx [ 17 ] - pm_math_Vector3_dot_ra ( xx + 14 , xx + 41 ) ; xx [
14 ] = xx [ 527 ] ; xx [ 15 ] = xx [ 530 ] ; xx [ 16 ] = xx [ 533 ] ; xx [ 38
] = xx [ 12 ] * xx [ 6 ] + xx [ 469 ] * xx [ 10 ] - xx [ 31 ] ; xx [ 39 ] =
xx [ 4 ] * xx [ 6 ] + xx [ 474 ] * xx [ 10 ] + xx [ 9 ] * xx [ 21 ] - xx [ 45
] ; xx [ 40 ] = xx [ 8 ] * xx [ 6 ] + xx [ 10 ] * xx [ 475 ] + xx [ 13 ] * xx
[ 21 ] - xx [ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 38 ,
xx + 41 ) ; xx [ 132 ] = xx [ 536 ] ; xx [ 133 ] = xx [ 539 ] ; xx [ 134 ] =
xx [ 542 ] ; pm_math_Vector3_cross_ra ( xx + 38 , xx + 396 , xx + 135 ) ; xx
[ 38 ] = xx [ 30 ] + xx [ 6 ] * xx [ 46 ] + xx [ 10 ] * xx [ 468 ] + xx [ 556
] * xx [ 21 ] + xx [ 3 ] + xx [ 135 ] ; xx [ 39 ] = xx [ 33 ] - xx [ 118 ] *
xx [ 6 ] - xx [ 476 ] * xx [ 10 ] + xx [ 7 ] + xx [ 136 ] ; xx [ 40 ] = xx [
44 ] - ( xx [ 5 ] + xx [ 124 ] * xx [ 6 ] + xx [ 477 ] * xx [ 10 ] ) + xx [
137 ] + xx [ 18 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 61 , xx + 38 ,
xx + 2 ) ; xx [ 5 ] = xx [ 99 ] - ( pm_math_Vector3_dot_ra ( xx + 14 , xx +
41 ) + pm_math_Vector3_dot_ra ( xx + 132 , xx + 2 ) ) ; xx [ 7 ] = xx [ 528 ]
; xx [ 8 ] = xx [ 531 ] ; xx [ 9 ] = xx [ 534 ] ; xx [ 12 ] = xx [ 537 ] ; xx
[ 13 ] = xx [ 540 ] ; xx [ 14 ] = xx [ 543 ] ; xx [ 15 ] = xx [ 100 ] - (
pm_math_Vector3_dot_ra ( xx + 7 , xx + 41 ) + pm_math_Vector3_dot_ra ( xx +
12 , xx + 2 ) ) ; xx [ 7 ] = xx [ 529 ] ; xx [ 8 ] = xx [ 532 ] ; xx [ 9 ] =
xx [ 535 ] ; xx [ 12 ] = xx [ 538 ] ; xx [ 13 ] = xx [ 541 ] ; xx [ 14 ] = xx
[ 544 ] ; xx [ 16 ] = xx [ 101 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx +
41 ) + pm_math_Vector3_dot_ra ( xx + 12 , xx + 2 ) ) ; xx [ 7 ] = xx [ 428 ]
; xx [ 8 ] = xx [ 431 ] ; xx [ 9 ] = xx [ 434 ] ; xx [ 12 ] = xx [ 41 ] + xx
[ 246 ] * xx [ 5 ] + xx [ 450 ] * xx [ 15 ] + xx [ 57 ] ; xx [ 13 ] = xx [ 42
] + xx [ 32 ] * xx [ 5 ] + xx [ 448 ] * xx [ 15 ] + xx [ 25 ] * xx [ 16 ] +
xx [ 19 ] ; xx [ 14 ] = xx [ 43 ] + xx [ 35 ] * xx [ 5 ] + xx [ 15 ] * xx [
447 ] + xx [ 24 ] * xx [ 16 ] + xx [ 23 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 88 , xx + 12 , xx + 17 ) ; xx [ 23
] = xx [ 437 ] ; xx [ 24 ] = xx [ 440 ] ; xx [ 25 ] = xx [ 443 ] ;
pm_math_Vector3_cross_ra ( xx + 12 , xx + 92 , xx + 30 ) ; xx [ 12 ] = xx [ 2
] + xx [ 372 ] * xx [ 5 ] + xx [ 470 ] * xx [ 15 ] + xx [ 478 ] * xx [ 16 ] +
xx [ 20 ] + xx [ 30 ] ; xx [ 13 ] = xx [ 3 ] + xx [ 373 ] * xx [ 5 ] + xx [
471 ] * xx [ 15 ] - xx [ 481 ] * xx [ 16 ] + xx [ 22 ] + xx [ 31 ] ; xx [ 14
] = xx [ 4 ] + xx [ 374 ] * xx [ 5 ] + xx [ 472 ] * xx [ 15 ] + xx [ 482 ] *
xx [ 16 ] + xx [ 67 ] + xx [ 32 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
88 , xx + 12 , xx + 2 ) ; xx [ 12 ] = xx [ 125 ] - ( pm_math_Vector3_dot_ra (
xx + 7 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx + 23 , xx + 2 ) ) ; xx [ 7 ]
= xx [ 429 ] ; xx [ 8 ] = xx [ 432 ] ; xx [ 9 ] = xx [ 435 ] ; xx [ 22 ] = xx
[ 438 ] ; xx [ 23 ] = xx [ 441 ] ; xx [ 24 ] = xx [ 444 ] ; xx [ 13 ] = xx [
126 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) +
pm_math_Vector3_dot_ra ( xx + 22 , xx + 2 ) ) ; xx [ 7 ] = xx [ 430 ] ; xx [
8 ] = xx [ 433 ] ; xx [ 9 ] = xx [ 436 ] ; xx [ 22 ] = xx [ 439 ] ; xx [ 23 ]
= xx [ 442 ] ; xx [ 24 ] = xx [ 445 ] ; xx [ 14 ] = xx [ 127 ] - (
pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx +
22 , xx + 2 ) ) ; xx [ 7 ] = xx [ 326 ] ; xx [ 8 ] = xx [ 329 ] ; xx [ 9 ] =
xx [ 332 ] ; xx [ 22 ] = xx [ 17 ] + xx [ 225 ] * xx [ 12 ] + xx [ 351 ] * xx
[ 13 ] + xx [ 51 ] ; xx [ 23 ] = xx [ 18 ] + xx [ 226 ] * xx [ 12 ] + xx [
349 ] * xx [ 13 ] + xx [ 49 ] * xx [ 14 ] + xx [ 26 ] ; xx [ 24 ] = xx [ 19 ]
+ xx [ 50 ] * xx [ 12 ] - xx [ 13 ] * xx [ 348 ] + xx [ 48 ] * xx [ 14 ] + xx
[ 37 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 22 , xx + 17 ) ;
xx [ 30 ] = xx [ 335 ] ; xx [ 31 ] = xx [ 338 ] ; xx [ 32 ] = xx [ 341 ] ;
pm_math_Vector3_cross_ra ( xx + 22 , xx + 121 , xx + 33 ) ; xx [ 22 ] = xx [
2 ] + xx [ 288 ] * xx [ 12 ] + xx [ 369 ] * xx [ 13 ] + xx [ 381 ] * xx [ 14
] + xx [ 29 ] + xx [ 33 ] ; xx [ 23 ] = xx [ 3 ] + xx [ 289 ] * xx [ 12 ] +
xx [ 370 ] * xx [ 13 ] + xx [ 382 ] * xx [ 14 ] + xx [ 36 ] + xx [ 34 ] ; xx
[ 24 ] = xx [ 4 ] + xx [ 290 ] * xx [ 12 ] + xx [ 371 ] * xx [ 13 ] - xx [
383 ] * xx [ 14 ] + xx [ 54 ] + xx [ 35 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 22 , xx + 2 ) ; xx [ 20 ]
= xx [ 129 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) +
pm_math_Vector3_dot_ra ( xx + 30 , xx + 2 ) ) ; xx [ 7 ] = xx [ 327 ] ; xx [
8 ] = xx [ 330 ] ; xx [ 9 ] = xx [ 333 ] ; xx [ 22 ] = xx [ 336 ] ; xx [ 23 ]
= xx [ 339 ] ; xx [ 24 ] = xx [ 342 ] ; xx [ 25 ] = xx [ 130 ] - (
pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx +
22 , xx + 2 ) ) ; xx [ 7 ] = xx [ 328 ] ; xx [ 8 ] = xx [ 331 ] ; xx [ 9 ] =
xx [ 334 ] ; xx [ 22 ] = xx [ 337 ] ; xx [ 23 ] = xx [ 340 ] ; xx [ 24 ] = xx
[ 343 ] ; xx [ 26 ] = xx [ 131 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx +
17 ) + pm_math_Vector3_dot_ra ( xx + 22 , xx + 2 ) ) ; xx [ 7 ] = xx [ 204 ]
; xx [ 8 ] = xx [ 207 ] ; xx [ 9 ] = xx [ 210 ] ; xx [ 22 ] = xx [ 17 ] + xx
[ 175 ] * xx [ 20 ] + xx [ 268 ] * xx [ 25 ] + xx [ 70 ] * xx [ 26 ] + xx [
78 ] ; xx [ 23 ] = xx [ 18 ] + xx [ 173 ] * xx [ 20 ] + xx [ 269 ] * xx [ 25
] + xx [ 60 ] * xx [ 26 ] + xx [ 82 ] ; xx [ 24 ] = xx [ 19 ] + xx [ 59 ] *
xx [ 20 ] + xx [ 270 ] * xx [ 25 ] + xx [ 58 ] * xx [ 26 ] + xx [ 75 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 22 , xx + 17 ) ; xx [ 28
] = xx [ 213 ] ; xx [ 29 ] = xx [ 216 ] ; xx [ 30 ] = xx [ 219 ] ;
pm_math_Vector3_cross_ra ( xx + 22 , xx + 154 , xx + 31 ) ; xx [ 22 ] = xx [
2 ] + xx [ 240 ] * xx [ 20 ] + xx [ 271 ] * xx [ 25 ] + xx [ 264 ] * xx [ 26
] + xx [ 71 ] + xx [ 31 ] ; xx [ 23 ] = xx [ 3 ] + xx [ 241 ] * xx [ 20 ] +
xx [ 272 ] * xx [ 25 ] - xx [ 283 ] * xx [ 26 ] + xx [ 74 ] + xx [ 32 ] ; xx
[ 24 ] = xx [ 4 ] + xx [ 242 ] * xx [ 20 ] + xx [ 273 ] * xx [ 25 ] - xx [
284 ] * xx [ 26 ] + xx [ 76 ] + xx [ 33 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 113 , xx + 22 , xx + 2 ) ; xx [ 22
] = xx [ 110 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) +
pm_math_Vector3_dot_ra ( xx + 28 , xx + 2 ) ) ; xx [ 7 ] = xx [ 205 ] ; xx [
8 ] = xx [ 208 ] ; xx [ 9 ] = xx [ 211 ] ; xx [ 28 ] = xx [ 214 ] ; xx [ 29 ]
= xx [ 217 ] ; xx [ 30 ] = xx [ 220 ] ; xx [ 23 ] = xx [ 111 ] - (
pm_math_Vector3_dot_ra ( xx + 7 , xx + 17 ) + pm_math_Vector3_dot_ra ( xx +
28 , xx + 2 ) ) ; xx [ 7 ] = xx [ 206 ] ; xx [ 8 ] = xx [ 209 ] ; xx [ 9 ] =
xx [ 212 ] ; xx [ 28 ] = xx [ 215 ] ; xx [ 29 ] = xx [ 218 ] ; xx [ 30 ] = xx
[ 221 ] ; xx [ 24 ] = xx [ 112 ] - ( pm_math_Vector3_dot_ra ( xx + 7 , xx +
17 ) + pm_math_Vector3_dot_ra ( xx + 28 , xx + 2 ) ) ; xx [ 2 ] = xx [ 17 ] +
xx [ 109 ] * xx [ 22 ] + xx [ 148 ] * xx [ 23 ] - xx [ 98 ] * xx [ 24 ] + xx
[ 145 ] ; xx [ 3 ] = xx [ 0 ] - ( xx [ 1435 ] * xx [ 1435 ] + xx [ 1436 ] *
xx [ 1436 ] ) * xx [ 11 ] ; xx [ 4 ] = xx [ 11 ] * ( xx [ 1434 ] * xx [ 1435
] - xx [ 1433 ] * xx [ 1436 ] ) ; xx [ 7 ] = ( xx [ 1433 ] * xx [ 1435 ] + xx
[ 1434 ] * xx [ 1436 ] ) * xx [ 11 ] ; xx [ 28 ] = xx [ 3 ] ; xx [ 29 ] = xx
[ 4 ] ; xx [ 30 ] = xx [ 7 ] ; xx [ 8 ] = pm_math_Vector3_dot_ra ( xx + 854 ,
xx + 28 ) ; xx [ 9 ] = 7.927528481685209e-11 ; xx [ 17 ] =
0.06791191233403736 ; xx [ 31 ] = 0.9976913210823947 ; xx [ 32 ] = - xx [ 9 ]
; xx [ 33 ] = - xx [ 17 ] ; xx [ 34 ] = xx [ 31 ] ; xx [ 35 ] =
pm_math_Vector3_dot_ra ( xx + 28 , xx + 32 ) ; xx [ 36 ] = xx [ 0 ] - xx [ 35
] * xx [ 35 ] ; xx [ 37 ] = xx [ 36 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra
( xx + 854 , xx + 32 ) - xx [ 8 ] * xx [ 35 ] ) / xx [ 36 ] ; xx [ 38 ] = xx
[ 8 ] - xx [ 35 ] * xx [ 37 ] ; xx [ 39 ] = xx [ 38 ] * xx [ 3 ] ; xx [ 40 ]
= xx [ 4 ] * xx [ 38 ] ; xx [ 41 ] = xx [ 7 ] * xx [ 38 ] ;
pm_math_Vector3_cross_ra ( xx + 854 , xx + 39 , xx + 42 ) ; xx [ 38 ] = - (
xx [ 9 ] * xx [ 37 ] ) ; xx [ 39 ] = - ( xx [ 17 ] * xx [ 37 ] ) ; xx [ 40 ]
= xx [ 31 ] * xx [ 37 ] ; xx [ 45 ] = - xx [ 1433 ] ; xx [ 46 ] = - xx [ 1434
] ; xx [ 47 ] = - xx [ 1435 ] ; xx [ 48 ] = - xx [ 1436 ] ; xx [ 49 ] =
0.9994226636119462 ; xx [ 50 ] = 0.03397557150075099 ; xx [ 51 ] = -
3.268676406922499e-11 ; xx [ 52 ] = - 2.051400253076505e-10 ;
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
) ; xx [ 54 ] = cos ( xx [ 49 ] ) ; xx [ 55 ] = - ( xx [ 9 ] * xx [ 50 ] ) ;
xx [ 56 ] = - ( xx [ 17 ] * xx [ 50 ] ) ; xx [ 57 ] = xx [ 31 ] * xx [ 50 ] ;
xx [ 49 ] = 4.07822078033264e-10 ; xx [ 50 ] = xx [ 31 ] ; xx [ 51 ] = xx [
17 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 54 , xx + 49 , xx + 58 ) ;
xx [ 9 ] = pm_math_Vector3_dot_ra ( xx + 854 , xx + 58 ) ; xx [ 49 ] = xx [ 9
] * xx [ 58 ] ; xx [ 50 ] = xx [ 9 ] * xx [ 59 ] ; xx [ 51 ] = xx [ 9 ] * xx
[ 60 ] ; pm_math_Vector3_cross_ra ( xx + 38 , xx + 49 , xx + 54 ) ; xx [ 9 ]
= xx [ 18 ] + xx [ 106 ] * xx [ 22 ] + xx [ 149 ] * xx [ 23 ] - xx [ 97 ] *
xx [ 24 ] + xx [ 147 ] ; xx [ 17 ] = xx [ 19 ] + xx [ 80 ] * xx [ 22 ] + xx [
150 ] * xx [ 23 ] + xx [ 83 ] * xx [ 24 ] + xx [ 103 ] ; xx [ 38 ] = xx [ 2 ]
+ xx [ 42 ] + xx [ 54 ] ; xx [ 39 ] = xx [ 9 ] + xx [ 43 ] + xx [ 55 ] ; xx [
40 ] = xx [ 17 ] + xx [ 44 ] + xx [ 56 ] ; xx [ 18 ] = pm_math_Vector3_dot_ra
( xx + 38 , xx + 28 ) ; xx [ 19 ] = xx [ 36 ] == 0.0 ? 0.0 : (
pm_math_Vector3_dot_ra ( xx + 38 , xx + 32 ) - xx [ 18 ] * xx [ 35 ] ) / xx [
36 ] ; xx [ 31 ] = 2.57582929823209e-11 ; xx [ 32 ] = 0.184996320402559 ; xx
[ 33 ] = 0.982739213340708 ; xx [ 34 ] = pm_math_Vector3_dot_ra ( xx + 28 ,
xx + 31 ) ; xx [ 36 ] = xx [ 0 ] - xx [ 34 ] * xx [ 34 ] ; xx [ 42 ] = xx [
36 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 854 , xx + 31 ) - xx [ 8
] * xx [ 34 ] ) / xx [ 36 ] ; xx [ 43 ] = xx [ 8 ] - xx [ 34 ] * xx [ 42 ] ;
xx [ 49 ] = xx [ 43 ] * xx [ 3 ] ; xx [ 50 ] = xx [ 4 ] * xx [ 43 ] ; xx [ 51
] = xx [ 7 ] * xx [ 43 ] ; pm_math_Vector3_cross_ra ( xx + 854 , xx + 49 , xx
+ 54 ) ; xx [ 49 ] = xx [ 31 ] * xx [ 42 ] ; xx [ 50 ] = xx [ 32 ] * xx [ 42
] ; xx [ 51 ] = xx [ 33 ] * xx [ 42 ] ; xx [ 61 ] = - xx [ 866 ] ; xx [ 62 ]
= xx [ 864 ] ; xx [ 63 ] = xx [ 863 ] ; xx [ 64 ] = xx [ 867 ] ;
pm_math_Quaternion_compose_ra ( xx + 45 , xx + 61 , xx + 65 ) ; xx [ 3 ] = (
xx [ 66 ] * xx [ 68 ] + xx [ 65 ] * xx [ 67 ] ) * xx [ 11 ] ; bb [ 1 ] = fabs
( xx [ 3 ] ) > xx [ 41 ] ; if ( xx [ 3 ] < 0.0 ) xx [ 4 ] = - 1.0 ; else if (
xx [ 3 ] > 0.0 ) xx [ 4 ] = + 1.0 ; else xx [ 4 ] = 0.0 ; xx [ 3 ] = xx [ 67
] * xx [ 68 ] ; xx [ 7 ] = xx [ 65 ] * xx [ 66 ] ; xx [ 8 ] = xx [ 65 ] * xx
[ 65 ] ; xx [ 41 ] = ( xx [ 8 ] + xx [ 67 ] * xx [ 67 ] ) * xx [ 11 ] - xx [
0 ] ; xx [ 42 ] = ( xx [ 3 ] + xx [ 7 ] ) * xx [ 11 ] ; xx [ 41 ] = ( xx [ 42
] == 0.0 && xx [ 41 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 42 ] , xx [ 41 ] ) ; xx [
42 ] = ( xx [ 8 ] + xx [ 68 ] * xx [ 68 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 43
] = - ( xx [ 11 ] * ( xx [ 3 ] - xx [ 7 ] ) ) ; xx [ 42 ] = ( xx [ 43 ] ==
0.0 && xx [ 42 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 43 ] , xx [ 42 ] ) ; xx [ 3 ]
= ( xx [ 8 ] + xx [ 66 ] * xx [ 66 ] ) * xx [ 11 ] - xx [ 0 ] ; xx [ 7 ] = -
( xx [ 11 ] * ( xx [ 66 ] * xx [ 67 ] - xx [ 65 ] * xx [ 68 ] ) ) ; xx [ 3 ]
= ( xx [ 7 ] == 0.0 && xx [ 3 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 7 ] , xx [ 3 ]
) ; xx [ 7 ] = bb [ 1 ] ? xx [ 4 ] * ( bb [ 1 ] ? xx [ 1 ] * xx [ 41 ] : xx [
42 ] ) : xx [ 3 ] ; xx [ 3 ] = xx [ 1 ] * ( xx [ 7 ] - xx [ 37 ] * ( xx [ 7 ]
< 0.0 ? - 1.0 : + 1.0 ) * ( xx [ 0 ] - ( ( cos ( state [ 37 ] ) ) < 0.0 ? -
1.0 : + 1.0 ) ) ) ; xx [ 0 ] = sin ( xx [ 3 ] ) ; xx [ 41 ] = cos ( xx [ 3 ]
) ; xx [ 42 ] = xx [ 31 ] * xx [ 0 ] ; xx [ 43 ] = xx [ 32 ] * xx [ 0 ] ; xx
[ 44 ] = xx [ 33 ] * xx [ 0 ] ; xx [ 45 ] = 4.146563855226113e-10 ; xx [ 46 ]
= xx [ 33 ] ; xx [ 47 ] = - xx [ 32 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 41 , xx + 45 , xx + 61 ) ; xx [ 0 ] = pm_math_Vector3_dot_ra ( xx + 854
, xx + 61 ) ; xx [ 41 ] = xx [ 0 ] * xx [ 61 ] ; xx [ 42 ] = xx [ 0 ] * xx [
62 ] ; xx [ 43 ] = xx [ 0 ] * xx [ 63 ] ; pm_math_Vector3_cross_ra ( xx + 49
, xx + 41 , xx + 44 ) ; xx [ 41 ] = xx [ 2 ] + xx [ 54 ] + xx [ 44 ] ; xx [
42 ] = xx [ 9 ] + xx [ 55 ] + xx [ 45 ] ; xx [ 43 ] = xx [ 17 ] + xx [ 56 ] +
xx [ 46 ] ; xx [ 0 ] = pm_math_Vector3_dot_ra ( xx + 41 , xx + 28 ) ; xx [ 1
] = xx [ 36 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 41 , xx + 31 ) -
xx [ 0 ] * xx [ 34 ] ) / xx [ 36 ] ; deriv [ 0 ] = state [ 3 ] ; deriv [ 1 ]
= state [ 4 ] ; deriv [ 2 ] = state [ 5 ] ; deriv [ 3 ] = xx [ 6 ] ; deriv [
4 ] = xx [ 10 ] ; deriv [ 5 ] = xx [ 21 ] ; deriv [ 6 ] = state [ 9 ] ; deriv
[ 7 ] = state [ 10 ] ; deriv [ 8 ] = state [ 11 ] ; deriv [ 9 ] = xx [ 5 ] ;
deriv [ 10 ] = xx [ 15 ] ; deriv [ 11 ] = xx [ 16 ] ; deriv [ 12 ] = state [
15 ] ; deriv [ 13 ] = state [ 16 ] ; deriv [ 14 ] = state [ 17 ] ; deriv [ 15
] = xx [ 12 ] ; deriv [ 16 ] = xx [ 13 ] ; deriv [ 17 ] = xx [ 14 ] ; deriv [
18 ] = state [ 21 ] ; deriv [ 19 ] = state [ 22 ] ; deriv [ 20 ] = state [ 23
] ; deriv [ 21 ] = xx [ 20 ] ; deriv [ 22 ] = xx [ 25 ] ; deriv [ 23 ] = xx [
26 ] ; deriv [ 24 ] = state [ 27 ] ; deriv [ 25 ] = state [ 28 ] ; deriv [ 26
] = state [ 29 ] ; deriv [ 27 ] = xx [ 22 ] ; deriv [ 28 ] = xx [ 23 ] ;
deriv [ 29 ] = xx [ 24 ] ; deriv [ 30 ] = state [ 33 ] ; deriv [ 31 ] = state
[ 34 ] ; deriv [ 32 ] = state [ 35 ] ; deriv [ 33 ] = xx [ 18 ] - xx [ 35 ] *
xx [ 19 ] ; deriv [ 34 ] = pm_math_Vector3_dot_ra ( xx + 38 , xx + 58 ) ;
deriv [ 35 ] = xx [ 19 ] ; deriv [ 36 ] = state [ 39 ] ; deriv [ 37 ] = state
[ 40 ] ; deriv [ 38 ] = state [ 41 ] ; deriv [ 39 ] = xx [ 0 ] - xx [ 34 ] *
xx [ 1 ] ; deriv [ 40 ] = pm_math_Vector3_dot_ra ( xx + 41 , xx + 61 ) ;
deriv [ 41 ] = xx [ 1 ] ; ii [ 0 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L1-S1 Bushing Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } ii [ 1 ] = bb [ 1 ] ? 1 : 0 ; if ( bb [ 1 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/T1-S1 Bushing Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } errorResult [ 0 ] = xx [ 788 ] + xx [ 720 ] + xx [ 654 ] +
xx [ 581 ] + xx [ 593 ] + xx [ 733 ] + xx [ 670 ] + xx [ 553 ] + xx [ 594 ] +
xx [ 608 ] + xx [ 746 ] + xx [ 681 ] + xx [ 602 ] + xx [ 597 ] + xx [ 606 ] +
xx [ 1391 ] + xx [ 589 ] + xx [ 1403 ] + xx [ 592 ] + xx [ 1450 ] + xx [ 1459
] + xx [ 1397 ] + xx [ 586 ] + xx [ 141 ] + xx [ 117 ] + xx [ 53 ] + xx [ 27
] + xx [ 640 ] + ( double ) ( ii [ 0 ] + ii [ 1 ] ) ; return NULL ; }
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
