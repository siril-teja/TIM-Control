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
double xx [ 1498 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) modeVector ; ( void ) inputDot ; ( void ) inputDdot
; ( void ) neDiagMgr ; xx [ 0 ] = 57.29577951308232 ; xx [ 1 ] = 1.0 ; xx [ 2
] = 0.5 ; xx [ 3 ] = xx [ 2 ] * state [ 2 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ;
xx [ 5 ] = 0.1535761481414752 ; xx [ 6 ] = xx [ 2 ] * state [ 0 ] ; xx [ 7 ]
= cos ( xx [ 6 ] ) ; xx [ 8 ] = 0.9881368157912284 ; xx [ 9 ] = sin ( xx [ 6
] ) ; xx [ 6 ] = xx [ 5 ] * xx [ 7 ] - xx [ 8 ] * xx [ 9 ] ; xx [ 10 ] =
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
[ 79 ] ) ; xx [ 102 ] = 0.9992594490823861 ; xx [ 103 ] = -
0.03847796017939601 ; xx [ 104 ] = 3.657873200514057e-11 ; xx [ 105 ] =
1.959485864323585e-10 ; pm_math_Quaternion_compose_ra ( xx + 98 , xx + 102 ,
xx + 106 ) ; xx [ 72 ] = xx [ 2 ] * state [ 25 ] ; xx [ 79 ] =
4.103512650758317e-10 ; xx [ 83 ] = sin ( xx [ 72 ] ) ; xx [ 84 ] =
0.9994592018341244 ; xx [ 98 ] = 0.03288318520300273 ; xx [ 99 ] = cos ( xx [
72 ] ) ; xx [ 100 ] = xx [ 79 ] * xx [ 83 ] ; xx [ 101 ] = xx [ 84 ] * xx [
83 ] ; xx [ 102 ] = xx [ 98 ] * xx [ 83 ] ; pm_math_Quaternion_compose_ra (
xx + 106 , xx + 99 , xx + 110 ) ; xx [ 72 ] = xx [ 2 ] * state [ 26 ] ; xx [
83 ] = cos ( xx [ 72 ] ) ; xx [ 99 ] = 6.492504809889092e-11 ; xx [ 100 ] =
sin ( xx [ 72 ] ) ; xx [ 72 ] = xx [ 99 ] * xx [ 100 ] ; xx [ 101 ] = xx [ 98
] * xx [ 100 ] ; xx [ 102 ] = xx [ 84 ] * xx [ 100 ] ; xx [ 103 ] = xx [ 83 ]
; xx [ 104 ] = - xx [ 72 ] ; xx [ 105 ] = - xx [ 101 ] ; xx [ 106 ] = xx [
102 ] ; pm_math_Quaternion_compose_ra ( xx + 110 , xx + 103 , xx + 114 ) ; xx
[ 100 ] = xx [ 114 ] * xx [ 114 ] ; xx [ 107 ] = xx [ 115 ] * xx [ 116 ] ; xx
[ 108 ] = xx [ 114 ] * xx [ 117 ] ; xx [ 109 ] = xx [ 115 ] * xx [ 117 ] ; xx
[ 110 ] = xx [ 114 ] * xx [ 116 ] ; xx [ 111 ] = xx [ 116 ] * xx [ 117 ] ; xx
[ 112 ] = xx [ 114 ] * xx [ 115 ] ; xx [ 118 ] = ( xx [ 100 ] + xx [ 115 ] *
xx [ 115 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 119 ] = xx [ 12 ] * ( xx [ 107 ] -
xx [ 108 ] ) ; xx [ 120 ] = ( xx [ 109 ] + xx [ 110 ] ) * xx [ 12 ] ; xx [
121 ] = ( xx [ 107 ] + xx [ 108 ] ) * xx [ 12 ] ; xx [ 122 ] = ( xx [ 100 ] +
xx [ 116 ] * xx [ 116 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 123 ] = xx [ 12 ] * (
xx [ 111 ] - xx [ 112 ] ) ; xx [ 124 ] = xx [ 12 ] * ( xx [ 109 ] - xx [ 110
] ) ; xx [ 125 ] = ( xx [ 111 ] + xx [ 112 ] ) * xx [ 12 ] ; xx [ 126 ] = (
xx [ 100 ] + xx [ 117 ] * xx [ 117 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 100 ] =
2.474479576171505e-3 ; xx [ 107 ] = xx [ 81 ] * xx [ 117 ] - xx [ 82 ] * xx [
116 ] ; xx [ 108 ] = xx [ 117 ] + xx [ 82 ] * xx [ 115 ] ; xx [ 109 ] = xx [
81 ] * xx [ 115 ] + xx [ 116 ] ; xx [ 110 ] = xx [ 107 ] ; xx [ 111 ] = xx [
108 ] ; xx [ 112 ] = - xx [ 109 ] ; pm_math_Vector3_cross_ra ( xx + 115 , xx
+ 110 , xx + 127 ) ; xx [ 110 ] = xx [ 1 ] + xx [ 12 ] * ( xx [ 127 ] - xx [
114 ] * xx [ 107 ] ) ; xx [ 107 ] = xx [ 12 ] * ( xx [ 128 ] - xx [ 114 ] *
xx [ 108 ] ) - xx [ 81 ] ; xx [ 81 ] = xx [ 12 ] * ( xx [ 129 ] + xx [ 114 ]
* xx [ 109 ] ) - xx [ 82 ] ; xx [ 111 ] = xx [ 110 ] ; xx [ 112 ] = xx [ 107
] ; xx [ 113 ] = xx [ 81 ] ; xx [ 82 ] = xx [ 110 ] * xx [ 100 ] ; xx [ 108 ]
= 2.846269496924213e-3 ; xx [ 109 ] = xx [ 107 ] * xx [ 108 ] ; xx [ 127 ] =
2.053568655742747e-3 ; xx [ 128 ] = xx [ 81 ] * xx [ 127 ] ; xx [ 129 ] = xx
[ 82 ] ; xx [ 130 ] = xx [ 109 ] ; xx [ 131 ] = xx [ 128 ] ; xx [ 132 ] =
3.04214492957313e-11 ; xx [ 133 ] = - 0.02935858602823881 ; xx [ 134 ] = -
0.1242654207645331 ; pm_math_Vector3_cross_ra ( xx + 132 , xx + 111 , xx +
135 ) ; xx [ 138 ] = 0.2418317891768493 ; xx [ 139 ] = xx [ 138 ] * xx [ 135
] ; xx [ 140 ] = xx [ 138 ] * xx [ 136 ] ; xx [ 141 ] = xx [ 138 ] * xx [ 137
] ; xx [ 142 ] = xx [ 83 ] ; xx [ 143 ] = xx [ 72 ] ; xx [ 144 ] = xx [ 101 ]
; xx [ 145 ] = - xx [ 102 ] ; xx [ 146 ] = xx [ 79 ] ; xx [ 147 ] = xx [ 84 ]
; xx [ 148 ] = xx [ 98 ] ; pm_math_Quaternion_xform_ra ( xx + 142 , xx + 146
, xx + 149 ) ; xx [ 72 ] = xx [ 100 ] * xx [ 149 ] ; xx [ 79 ] = xx [ 108 ] *
xx [ 150 ] ; xx [ 83 ] = xx [ 127 ] * xx [ 151 ] ; xx [ 142 ] = xx [ 72 ] ;
xx [ 143 ] = xx [ 79 ] ; xx [ 144 ] = xx [ 83 ] ; pm_math_Vector3_cross_ra (
xx + 132 , xx + 149 , xx + 152 ) ; xx [ 101 ] = xx [ 138 ] * xx [ 152 ] ; xx
[ 102 ] = xx [ 138 ] * xx [ 153 ] ; xx [ 145 ] = xx [ 138 ] * xx [ 154 ] ; xx
[ 155 ] = xx [ 101 ] ; xx [ 156 ] = xx [ 102 ] ; xx [ 157 ] = xx [ 145 ] ; xx
[ 158 ] = pm_math_Vector3_dot_ra ( xx + 111 , xx + 142 ) +
pm_math_Vector3_dot_ra ( xx + 135 , xx + 155 ) ; xx [ 159 ] =
1.606557055026581e-13 ; xx [ 160 ] = - xx [ 159 ] ; xx [ 161 ] =
9.35944070050163e-5 ; xx [ 162 ] = - xx [ 161 ] ; xx [ 163 ] =
2.052458089580222e-3 ; xx [ 164 ] = xx [ 160 ] ; xx [ 165 ] = xx [ 162 ] ; xx
[ 166 ] = xx [ 163 ] ; xx [ 167 ] = 8.084183225090049e-3 ; xx [ 168 ] = - xx
[ 167 ] ; xx [ 169 ] = 5.4018109457199e-12 ; xx [ 170 ] = - xx [ 169 ] ; xx [
171 ] = 7.028748479175273e-13 ; xx [ 172 ] = - xx [ 171 ] ; xx [ 173 ] = xx [
168 ] ; xx [ 174 ] = xx [ 170 ] ; xx [ 175 ] = xx [ 172 ] ; xx [ 176 ] =
pm_math_Vector3_dot_ra ( xx + 111 , xx + 164 ) + pm_math_Vector3_dot_ra ( xx
+ 135 , xx + 173 ) ; xx [ 177 ] = pm_math_Vector3_dot_ra ( xx + 149 , xx +
164 ) + pm_math_Vector3_dot_ra ( xx + 152 , xx + 173 ) ; xx [ 178 ] =
pm_math_Vector3_dot_ra ( xx + 111 , xx + 129 ) + pm_math_Vector3_dot_ra ( xx
+ 135 , xx + 139 ) ; xx [ 179 ] = xx [ 158 ] ; xx [ 180 ] = xx [ 176 ] ; xx [
181 ] = xx [ 158 ] ; xx [ 182 ] = pm_math_Vector3_dot_ra ( xx + 149 , xx +
142 ) + pm_math_Vector3_dot_ra ( xx + 152 , xx + 155 ) ; xx [ 183 ] = xx [
177 ] ; xx [ 184 ] = xx [ 176 ] ; xx [ 185 ] = xx [ 177 ] ; xx [ 186 ] =
2.32467157763633e-3 ; ii [ 0 ] = factorSymmetricPosDef ( xx + 178 , 3 , xx +
129 ) ; xx [ 129 ] = 0.999999 ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin (
state [ 25 ] ) ) > xx [ 129 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] )
{ return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L1/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L1/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 187 ] = xx [ 82 ] ; xx [ 188 ] = xx [ 72 ] ; xx [ 189
] = xx [ 160 ] ; xx [ 190 ] = xx [ 109 ] ; xx [ 191 ] = xx [ 79 ] ; xx [ 192
] = xx [ 162 ] ; xx [ 193 ] = xx [ 128 ] ; xx [ 194 ] = xx [ 83 ] ; xx [ 195
] = xx [ 163 ] ; xx [ 196 ] = xx [ 139 ] ; xx [ 197 ] = xx [ 101 ] ; xx [ 198
] = xx [ 168 ] ; xx [ 199 ] = xx [ 140 ] ; xx [ 200 ] = xx [ 102 ] ; xx [ 201
] = xx [ 170 ] ; xx [ 202 ] = xx [ 141 ] ; xx [ 203 ] = xx [ 145 ] ; xx [ 204
] = xx [ 172 ] ; solveSymmetricPosDef ( xx + 178 , xx + 187 , 3 , 6 , xx +
205 , xx + 142 ) ; xx [ 130 ] = - ( xx [ 205 ] * xx [ 109 ] + xx [ 206 ] * xx
[ 79 ] - xx [ 161 ] * xx [ 207 ] ) ; xx [ 131 ] = - ( xx [ 205 ] * xx [ 128 ]
+ xx [ 206 ] * xx [ 83 ] + xx [ 163 ] * xx [ 207 ] ) ; xx [ 142 ] = - ( xx [
208 ] * xx [ 128 ] + xx [ 209 ] * xx [ 83 ] + xx [ 163 ] * xx [ 210 ] ) ; xx
[ 187 ] = xx [ 100 ] - ( xx [ 205 ] * xx [ 82 ] + xx [ 206 ] * xx [ 72 ] - xx
[ 159 ] * xx [ 207 ] ) ; xx [ 188 ] = xx [ 130 ] ; xx [ 189 ] = xx [ 131 ] ;
xx [ 190 ] = xx [ 130 ] ; xx [ 191 ] = xx [ 108 ] - ( xx [ 208 ] * xx [ 109 ]
+ xx [ 209 ] * xx [ 79 ] - xx [ 161 ] * xx [ 210 ] ) ; xx [ 192 ] = xx [ 142
] ; xx [ 193 ] = xx [ 131 ] ; xx [ 194 ] = xx [ 142 ] ; xx [ 195 ] = xx [ 127
] - ( xx [ 211 ] * xx [ 128 ] + xx [ 212 ] * xx [ 83 ] + xx [ 163 ] * xx [
213 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 187 , xx + 118 , xx +
196 ) ; pm_math_Matrix3x3_compose_ra ( xx + 118 , xx + 196 , xx + 187 ) ; xx
[ 196 ] = - ( xx [ 214 ] * xx [ 82 ] + xx [ 215 ] * xx [ 72 ] - xx [ 159 ] *
xx [ 216 ] ) ; xx [ 197 ] = - ( xx [ 217 ] * xx [ 82 ] + xx [ 218 ] * xx [ 72
] - xx [ 159 ] * xx [ 219 ] ) ; xx [ 198 ] = - ( xx [ 220 ] * xx [ 82 ] + xx
[ 221 ] * xx [ 72 ] - xx [ 159 ] * xx [ 222 ] ) ; xx [ 199 ] = - ( xx [ 214 ]
* xx [ 109 ] + xx [ 215 ] * xx [ 79 ] - xx [ 161 ] * xx [ 216 ] ) ; xx [ 200
] = - ( xx [ 217 ] * xx [ 109 ] + xx [ 218 ] * xx [ 79 ] - xx [ 161 ] * xx [
219 ] ) ; xx [ 201 ] = - ( xx [ 220 ] * xx [ 109 ] + xx [ 221 ] * xx [ 79 ] -
xx [ 161 ] * xx [ 222 ] ) ; xx [ 202 ] = - ( xx [ 214 ] * xx [ 128 ] + xx [
215 ] * xx [ 83 ] + xx [ 163 ] * xx [ 216 ] ) ; xx [ 203 ] = - ( xx [ 217 ] *
xx [ 128 ] + xx [ 218 ] * xx [ 83 ] + xx [ 163 ] * xx [ 219 ] ) ; xx [ 204 ]
= - ( xx [ 220 ] * xx [ 128 ] + xx [ 221 ] * xx [ 83 ] + xx [ 163 ] * xx [
222 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 196 , xx + 118 , xx +
223 ) ; pm_math_Matrix3x3_compose_ra ( xx + 118 , xx + 223 , xx + 196 ) ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 132 , xx + 142 ) ; xx [ 130 ] =
4.855313199912053e-13 - xx [ 142 ] ; xx [ 131 ] = 0.01419776350117569 - xx [
143 ] ; xx [ 142 ] = 0.0153662351784256 - xx [ 144 ] ; xx [ 155 ] = xx [ 130
] ; xx [ 156 ] = xx [ 131 ] ; xx [ 157 ] = xx [ 142 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 196 , xx + 155 , xx + 223 ) ; xx [ 143
] = - ( xx [ 214 ] * xx [ 140 ] + xx [ 215 ] * xx [ 102 ] - xx [ 169 ] * xx [
216 ] ) ; xx [ 144 ] = - ( xx [ 214 ] * xx [ 141 ] + xx [ 215 ] * xx [ 145 ]
- xx [ 171 ] * xx [ 216 ] ) ; xx [ 158 ] = - ( xx [ 217 ] * xx [ 141 ] + xx [
218 ] * xx [ 145 ] - xx [ 171 ] * xx [ 219 ] ) ; xx [ 232 ] = xx [ 138 ] - (
xx [ 214 ] * xx [ 139 ] + xx [ 215 ] * xx [ 101 ] - xx [ 167 ] * xx [ 216 ] )
; xx [ 233 ] = xx [ 143 ] ; xx [ 234 ] = xx [ 144 ] ; xx [ 235 ] = xx [ 143 ]
; xx [ 236 ] = xx [ 138 ] - ( xx [ 217 ] * xx [ 140 ] + xx [ 218 ] * xx [ 102
] - xx [ 169 ] * xx [ 219 ] ) ; xx [ 237 ] = xx [ 158 ] ; xx [ 238 ] = xx [
144 ] ; xx [ 239 ] = xx [ 158 ] ; xx [ 240 ] = xx [ 138 ] - ( xx [ 220 ] * xx
[ 141 ] + xx [ 221 ] * xx [ 145 ] - xx [ 171 ] * xx [ 222 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 232 , xx + 118 , xx + 241 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 118 , xx + 241 , xx + 232 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 232 , xx + 155 , xx + 118 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 118 , xx + 155 , xx + 241 ) ; xx [ 143 ]
= xx [ 187 ] - xx [ 223 ] - xx [ 223 ] - xx [ 241 ] ; xx [ 144 ] =
3.133881653570001e-6 ; xx [ 158 ] = xx [ 188 ] - xx [ 224 ] - xx [ 226 ] - xx
[ 242 ] ; xx [ 160 ] = xx [ 189 ] - xx [ 225 ] - xx [ 229 ] - xx [ 243 ] ; xx
[ 162 ] = xx [ 190 ] - xx [ 226 ] - xx [ 224 ] - xx [ 244 ] ; xx [ 164 ] =
1.518811043244711e-6 ; xx [ 165 ] = xx [ 191 ] - xx [ 227 ] - xx [ 227 ] - xx
[ 245 ] ; xx [ 166 ] = xx [ 192 ] - xx [ 228 ] - xx [ 230 ] - xx [ 246 ] ; xx
[ 168 ] = xx [ 193 ] - xx [ 229 ] - xx [ 225 ] - xx [ 247 ] ; xx [ 170 ] = xx
[ 194 ] - xx [ 230 ] - xx [ 228 ] - xx [ 248 ] ; xx [ 172 ] =
3.515161026289992e-6 ; xx [ 173 ] = xx [ 195 ] - xx [ 231 ] - xx [ 231 ] - xx
[ 249 ] ; xx [ 187 ] = xx [ 144 ] + xx [ 143 ] ; xx [ 188 ] = xx [ 158 ] ; xx
[ 189 ] = xx [ 160 ] ; xx [ 190 ] = xx [ 162 ] ; xx [ 191 ] = xx [ 164 ] + xx
[ 165 ] ; xx [ 192 ] = xx [ 166 ] ; xx [ 193 ] = xx [ 168 ] ; xx [ 194 ] = xx
[ 170 ] ; xx [ 195 ] = xx [ 172 ] + xx [ 173 ] ; xx [ 174 ] = xx [ 60 ] * xx
[ 88 ] ; xx [ 175 ] = xx [ 60 ] * xx [ 86 ] - xx [ 87 ] ; xx [ 223 ] = - xx [
174 ] ; xx [ 224 ] = xx [ 88 ] ; xx [ 225 ] = xx [ 175 ] ;
pm_math_Vector3_cross_ra ( xx + 86 , xx + 223 , xx + 226 ) ; xx [ 176 ] = xx
[ 1 ] + ( xx [ 85 ] * xx [ 174 ] + xx [ 226 ] ) * xx [ 12 ] ; xx [ 174 ] = xx
[ 60 ] + xx [ 12 ] * ( xx [ 227 ] - xx [ 80 ] ) ; xx [ 60 ] = xx [ 12 ] * (
xx [ 228 ] - xx [ 85 ] * xx [ 175 ] ) ; xx [ 223 ] = xx [ 176 ] ; xx [ 224 ]
= xx [ 174 ] ; xx [ 225 ] = xx [ 60 ] ; pm_math_Matrix3x3_xform_ra ( xx + 187
, xx + 223 , xx + 226 ) ; xx [ 80 ] = xx [ 196 ] - xx [ 118 ] ; xx [ 118 ] =
xx [ 197 ] - xx [ 121 ] ; xx [ 121 ] = xx [ 198 ] - xx [ 124 ] ; xx [ 124 ] =
xx [ 199 ] - xx [ 119 ] ; xx [ 119 ] = xx [ 200 ] - xx [ 122 ] ; xx [ 122 ] =
xx [ 201 ] - xx [ 125 ] ; xx [ 125 ] = xx [ 202 ] - xx [ 120 ] ; xx [ 120 ] =
xx [ 203 ] - xx [ 123 ] ; xx [ 123 ] = xx [ 204 ] - xx [ 126 ] ; xx [ 196 ] =
xx [ 80 ] ; xx [ 197 ] = xx [ 118 ] ; xx [ 198 ] = xx [ 121 ] ; xx [ 199 ] =
xx [ 124 ] ; xx [ 200 ] = xx [ 119 ] ; xx [ 201 ] = xx [ 122 ] ; xx [ 202 ] =
xx [ 125 ] ; xx [ 203 ] = xx [ 120 ] ; xx [ 204 ] = xx [ 123 ] ; xx [ 229 ] =
2.484784205278315e-13 ; xx [ 230 ] = 0.01055813361575447 ; xx [ 231 ] = -
0.01718904409441589 ; pm_math_Vector3_cross_ra ( xx + 229 , xx + 223 , xx +
241 ) ; pm_math_Matrix3x3_xform_ra ( xx + 196 , xx + 241 , xx + 244 ) ; xx [
126 ] = xx [ 226 ] + xx [ 244 ] ; xx [ 175 ] = xx [ 227 ] + xx [ 245 ] ; xx [
177 ] = xx [ 228 ] + xx [ 246 ] ; xx [ 226 ] = xx [ 126 ] ; xx [ 227 ] = xx [
175 ] ; xx [ 228 ] = xx [ 177 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx +
196 , xx + 223 , xx + 244 ) ; xx [ 247 ] = 7.704043062217087e-3 ; xx [ 248 ]
= xx [ 247 ] + xx [ 232 ] ; xx [ 249 ] = xx [ 233 ] ; xx [ 250 ] = xx [ 234 ]
; xx [ 251 ] = xx [ 235 ] ; xx [ 252 ] = xx [ 247 ] + xx [ 236 ] ; xx [ 253 ]
= xx [ 237 ] ; xx [ 254 ] = xx [ 238 ] ; xx [ 255 ] = xx [ 239 ] ; xx [ 256 ]
= xx [ 247 ] + xx [ 240 ] ; pm_math_Matrix3x3_xform_ra ( xx + 248 , xx + 241
, xx + 257 ) ; xx [ 260 ] = xx [ 244 ] + xx [ 257 ] ; xx [ 261 ] = xx [ 245 ]
+ xx [ 258 ] ; xx [ 244 ] = xx [ 246 ] + xx [ 259 ] ; xx [ 257 ] = xx [ 260 ]
; xx [ 258 ] = xx [ 261 ] ; xx [ 259 ] = xx [ 244 ] ; xx [ 262 ] = xx [ 58 ]
; xx [ 263 ] = - xx [ 52 ] ; xx [ 264 ] = - xx [ 73 ] ; xx [ 265 ] = - xx [
74 ] ; xx [ 266 ] = xx [ 55 ] ; xx [ 267 ] = xx [ 59 ] ; xx [ 268 ] = - xx [
61 ] ; pm_math_Quaternion_xform_ra ( xx + 262 , xx + 266 , xx + 269 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 187 , xx + 269 , xx + 262 ) ;
pm_math_Vector3_cross_ra ( xx + 229 , xx + 269 , xx + 272 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 196 , xx + 272 , xx + 275 ) ; xx [ 52 ] =
xx [ 262 ] + xx [ 275 ] ; xx [ 55 ] = xx [ 263 ] + xx [ 276 ] ; xx [ 58 ] =
xx [ 264 ] + xx [ 277 ] ; xx [ 262 ] = xx [ 52 ] ; xx [ 263 ] = xx [ 55 ] ;
xx [ 264 ] = xx [ 58 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 196 , xx
+ 269 , xx + 275 ) ; pm_math_Matrix3x3_xform_ra ( xx + 248 , xx + 272 , xx +
278 ) ; xx [ 73 ] = xx [ 275 ] + xx [ 278 ] ; xx [ 74 ] = xx [ 276 ] + xx [
279 ] ; xx [ 245 ] = xx [ 277 ] + xx [ 280 ] ; xx [ 275 ] = xx [ 73 ] ; xx [
276 ] = xx [ 74 ] ; xx [ 277 ] = xx [ 245 ] ; xx [ 246 ] =
pm_math_Vector3_dot_ra ( xx + 223 , xx + 262 ) + pm_math_Vector3_dot_ra ( xx
+ 241 , xx + 275 ) ; xx [ 278 ] = xx [ 71 ] ; xx [ 279 ] = xx [ 61 ] ; xx [
280 ] = xx [ 59 ] ; pm_math_Matrix3x3_xform_ra ( xx + 187 , xx + 278 , xx +
281 ) ; xx [ 265 ] = 0.01512320370375 ; xx [ 284 ] = 4.156663728609323e-13 ;
xx [ 285 ] = 3.670194404924682e-14 ; xx [ 286 ] = xx [ 265 ] ; xx [ 287 ] = -
xx [ 284 ] ; xx [ 288 ] = - xx [ 285 ] ; pm_math_Matrix3x3_xform_ra ( xx +
196 , xx + 286 , xx + 289 ) ; xx [ 292 ] = xx [ 281 ] + xx [ 289 ] ; xx [ 293
] = xx [ 282 ] + xx [ 290 ] ; xx [ 281 ] = xx [ 283 ] + xx [ 291 ] ; xx [ 289
] = xx [ 292 ] ; xx [ 290 ] = xx [ 293 ] ; xx [ 291 ] = xx [ 281 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 196 , xx + 278 , xx + 294 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 248 , xx + 286 , xx + 297 ) ; xx [ 282 ] =
xx [ 294 ] + xx [ 297 ] ; xx [ 283 ] = xx [ 295 ] + xx [ 298 ] ; xx [ 294 ] =
xx [ 296 ] + xx [ 299 ] ; xx [ 295 ] = xx [ 282 ] ; xx [ 296 ] = xx [ 283 ] ;
xx [ 297 ] = xx [ 294 ] ; xx [ 298 ] = pm_math_Vector3_dot_ra ( xx + 223 , xx
+ 289 ) + pm_math_Vector3_dot_ra ( xx + 241 , xx + 295 ) ; xx [ 299 ] =
pm_math_Vector3_dot_ra ( xx + 269 , xx + 289 ) + pm_math_Vector3_dot_ra ( xx
+ 272 , xx + 295 ) ; xx [ 300 ] = pm_math_Vector3_dot_ra ( xx + 223 , xx +
226 ) + pm_math_Vector3_dot_ra ( xx + 241 , xx + 257 ) ; xx [ 301 ] = xx [
246 ] ; xx [ 302 ] = xx [ 298 ] ; xx [ 303 ] = xx [ 246 ] ; xx [ 304 ] =
pm_math_Vector3_dot_ra ( xx + 269 , xx + 262 ) + pm_math_Vector3_dot_ra ( xx
+ 272 , xx + 275 ) ; xx [ 305 ] = xx [ 299 ] ; xx [ 306 ] = xx [ 298 ] ; xx [
307 ] = xx [ 299 ] ; xx [ 308 ] = pm_math_Vector3_dot_ra ( xx + 278 , xx +
289 ) + pm_math_Vector3_dot_ra ( xx + 286 , xx + 295 ) ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 300 , 3 , xx + 226 ) ; bb [ 0 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 19 ] ) ) > xx [ 129 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ;
if ( bb [ 0 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L2/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L2/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 309 ] = xx [ 126 ] ; xx [ 310 ] = xx [ 52 ] ; xx [ 311
] = xx [ 292 ] ; xx [ 312 ] = xx [ 175 ] ; xx [ 313 ] = xx [ 55 ] ; xx [ 314
] = xx [ 293 ] ; xx [ 315 ] = xx [ 177 ] ; xx [ 316 ] = xx [ 58 ] ; xx [ 317
] = xx [ 281 ] ; xx [ 318 ] = xx [ 260 ] ; xx [ 319 ] = xx [ 73 ] ; xx [ 320
] = xx [ 282 ] ; xx [ 321 ] = xx [ 261 ] ; xx [ 322 ] = xx [ 74 ] ; xx [ 323
] = xx [ 283 ] ; xx [ 324 ] = xx [ 244 ] ; xx [ 325 ] = xx [ 245 ] ; xx [ 326
] = xx [ 294 ] ; solveSymmetricPosDef ( xx + 300 , xx + 309 , 3 , 6 , xx +
327 , xx + 226 ) ; xx [ 226 ] = xx [ 175 ] * xx [ 327 ] + xx [ 55 ] * xx [
328 ] + xx [ 293 ] * xx [ 329 ] ; xx [ 227 ] = xx [ 177 ] * xx [ 327 ] + xx [
58 ] * xx [ 328 ] + xx [ 281 ] * xx [ 329 ] ; xx [ 228 ] = xx [ 177 ] * xx [
330 ] + xx [ 58 ] * xx [ 331 ] + xx [ 281 ] * xx [ 332 ] ; xx [ 309 ] = xx [
143 ] - ( xx [ 126 ] * xx [ 327 ] + xx [ 52 ] * xx [ 328 ] + xx [ 292 ] * xx
[ 329 ] ) + xx [ 144 ] ; xx [ 310 ] = xx [ 158 ] - xx [ 226 ] ; xx [ 311 ] =
xx [ 160 ] - xx [ 227 ] ; xx [ 312 ] = xx [ 162 ] - xx [ 226 ] ; xx [ 313 ] =
xx [ 165 ] - ( xx [ 175 ] * xx [ 330 ] + xx [ 55 ] * xx [ 331 ] + xx [ 293 ]
* xx [ 332 ] ) + xx [ 164 ] ; xx [ 314 ] = xx [ 166 ] - xx [ 228 ] ; xx [ 315
] = xx [ 168 ] - xx [ 227 ] ; xx [ 316 ] = xx [ 170 ] - xx [ 228 ] ; xx [ 317
] = xx [ 173 ] - ( xx [ 177 ] * xx [ 333 ] + xx [ 58 ] * xx [ 334 ] + xx [
281 ] * xx [ 335 ] ) + xx [ 172 ] ; pm_math_Matrix3x3_composeTranspose_ra (
xx + 309 , xx + 89 , xx + 318 ) ; pm_math_Matrix3x3_compose_ra ( xx + 89 , xx
+ 318 , xx + 309 ) ; xx [ 318 ] = xx [ 80 ] - ( xx [ 126 ] * xx [ 336 ] + xx
[ 52 ] * xx [ 337 ] + xx [ 292 ] * xx [ 338 ] ) ; xx [ 319 ] = xx [ 118 ] - (
xx [ 126 ] * xx [ 339 ] + xx [ 52 ] * xx [ 340 ] + xx [ 292 ] * xx [ 341 ] )
; xx [ 320 ] = xx [ 121 ] - ( xx [ 126 ] * xx [ 342 ] + xx [ 52 ] * xx [ 343
] + xx [ 292 ] * xx [ 344 ] ) ; xx [ 321 ] = xx [ 124 ] - ( xx [ 175 ] * xx [
336 ] + xx [ 55 ] * xx [ 337 ] + xx [ 293 ] * xx [ 338 ] ) ; xx [ 322 ] = xx
[ 119 ] - ( xx [ 175 ] * xx [ 339 ] + xx [ 55 ] * xx [ 340 ] + xx [ 293 ] *
xx [ 341 ] ) ; xx [ 323 ] = xx [ 122 ] - ( xx [ 175 ] * xx [ 342 ] + xx [ 55
] * xx [ 343 ] + xx [ 293 ] * xx [ 344 ] ) ; xx [ 324 ] = xx [ 125 ] - ( xx [
177 ] * xx [ 336 ] + xx [ 58 ] * xx [ 337 ] + xx [ 281 ] * xx [ 338 ] ) ; xx
[ 325 ] = xx [ 120 ] - ( xx [ 177 ] * xx [ 339 ] + xx [ 58 ] * xx [ 340 ] +
xx [ 281 ] * xx [ 341 ] ) ; xx [ 326 ] = xx [ 123 ] - ( xx [ 177 ] * xx [ 342
] + xx [ 58 ] * xx [ 343 ] + xx [ 281 ] * xx [ 344 ] ) ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 318 , xx + 89 , xx + 345 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 89 , xx + 345 , xx + 318 ) ;
pm_math_Quaternion_xform_ra ( xx + 85 , xx + 229 , xx + 118 ) ; xx [ 80 ] =
7.111565911668068e-14 + xx [ 118 ] ; xx [ 121 ] = 0.01482354797278426 - xx [
119 ] ; xx [ 118 ] = 0.01597192626903846 - xx [ 120 ] ; xx [ 122 ] = - xx [
80 ] ; xx [ 123 ] = xx [ 121 ] ; xx [ 124 ] = xx [ 118 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 318 , xx + 122 , xx + 345 ) ; xx [ 119
] = xx [ 261 ] * xx [ 336 ] + xx [ 74 ] * xx [ 337 ] + xx [ 283 ] * xx [ 338
] ; xx [ 120 ] = xx [ 244 ] * xx [ 336 ] + xx [ 245 ] * xx [ 337 ] + xx [ 294
] * xx [ 338 ] ; xx [ 125 ] = xx [ 244 ] * xx [ 339 ] + xx [ 245 ] * xx [ 340
] + xx [ 294 ] * xx [ 341 ] ; xx [ 354 ] = xx [ 232 ] - ( xx [ 260 ] * xx [
336 ] + xx [ 73 ] * xx [ 337 ] + xx [ 282 ] * xx [ 338 ] ) + xx [ 247 ] ; xx
[ 355 ] = xx [ 233 ] - xx [ 119 ] ; xx [ 356 ] = xx [ 234 ] - xx [ 120 ] ; xx
[ 357 ] = xx [ 235 ] - xx [ 119 ] ; xx [ 358 ] = xx [ 236 ] - ( xx [ 261 ] *
xx [ 339 ] + xx [ 74 ] * xx [ 340 ] + xx [ 283 ] * xx [ 341 ] ) + xx [ 247 ]
; xx [ 359 ] = xx [ 237 ] - xx [ 125 ] ; xx [ 360 ] = xx [ 238 ] - xx [ 120 ]
; xx [ 361 ] = xx [ 239 ] - xx [ 125 ] ; xx [ 362 ] = xx [ 240 ] - ( xx [ 244
] * xx [ 342 ] + xx [ 245 ] * xx [ 343 ] + xx [ 294 ] * xx [ 344 ] ) + xx [
247 ] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 354 , xx + 89 , xx + 232
) ; pm_math_Matrix3x3_compose_ra ( xx + 89 , xx + 232 , xx + 354 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 354 , xx + 122 , xx + 89 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 89 , xx + 122 , xx + 232 ) ; xx [ 119 ]
= xx [ 309 ] - xx [ 345 ] - xx [ 345 ] - xx [ 232 ] ; xx [ 120 ] =
3.395310932053464e-6 ; xx [ 125 ] = xx [ 310 ] - xx [ 346 ] - xx [ 348 ] - xx
[ 233 ] ; xx [ 143 ] = xx [ 311 ] - xx [ 347 ] - xx [ 351 ] - xx [ 234 ] ; xx
[ 158 ] = xx [ 312 ] - xx [ 348 ] - xx [ 346 ] - xx [ 235 ] ; xx [ 160 ] =
1.744065755080617e-6 ; xx [ 162 ] = xx [ 160 ] + xx [ 313 ] - xx [ 349 ] - xx
[ 349 ] - xx [ 236 ] ; xx [ 165 ] = xx [ 314 ] - xx [ 350 ] - xx [ 352 ] - xx
[ 237 ] ; xx [ 166 ] = xx [ 315 ] - xx [ 351 ] - xx [ 347 ] - xx [ 238 ] ; xx
[ 168 ] = xx [ 316 ] - xx [ 352 ] - xx [ 350 ] - xx [ 239 ] ; xx [ 170 ] =
3.911790730232107e-6 ; xx [ 173 ] = xx [ 170 ] + xx [ 317 ] - xx [ 353 ] - xx
[ 353 ] - xx [ 240 ] ; xx [ 232 ] = xx [ 120 ] + xx [ 119 ] ; xx [ 233 ] = xx
[ 125 ] ; xx [ 234 ] = xx [ 143 ] ; xx [ 235 ] = xx [ 158 ] ; xx [ 236 ] = xx
[ 162 ] ; xx [ 237 ] = xx [ 165 ] ; xx [ 238 ] = xx [ 166 ] ; xx [ 239 ] = xx
[ 168 ] ; xx [ 240 ] = xx [ 173 ] ; xx [ 226 ] = xx [ 53 ] ; xx [ 227 ] = xx
[ 54 ] ; xx [ 228 ] = xx [ 56 ] ; xx [ 246 ] = xx [ 56 ] * xx [ 51 ] ; xx [
247 ] = xx [ 51 ] * xx [ 53 ] + xx [ 54 ] ; xx [ 257 ] = xx [ 246 ] ; xx [
258 ] = xx [ 56 ] ; xx [ 259 ] = - xx [ 247 ] ; pm_math_Vector3_cross_ra ( xx
+ 226 , xx + 257 , xx + 262 ) ; xx [ 226 ] = xx [ 1 ] + ( xx [ 262 ] - xx [
246 ] * xx [ 32 ] ) * xx [ 12 ] ; xx [ 227 ] = xx [ 12 ] * ( xx [ 263 ] - xx
[ 57 ] ) - xx [ 51 ] ; xx [ 51 ] = xx [ 12 ] * ( xx [ 264 ] + xx [ 32 ] * xx
[ 247 ] ) ; xx [ 257 ] = xx [ 226 ] ; xx [ 258 ] = xx [ 227 ] ; xx [ 259 ] =
xx [ 51 ] ; pm_math_Matrix3x3_xform_ra ( xx + 232 , xx + 257 , xx + 262 ) ;
xx [ 57 ] = xx [ 318 ] - xx [ 89 ] ; xx [ 89 ] = xx [ 319 ] - xx [ 92 ] ; xx
[ 92 ] = xx [ 320 ] - xx [ 95 ] ; xx [ 95 ] = xx [ 321 ] - xx [ 90 ] ; xx [
90 ] = xx [ 322 ] - xx [ 93 ] ; xx [ 93 ] = xx [ 323 ] - xx [ 96 ] ; xx [ 96
] = xx [ 324 ] - xx [ 91 ] ; xx [ 91 ] = xx [ 325 ] - xx [ 94 ] ; xx [ 94 ] =
xx [ 326 ] - xx [ 97 ] ; xx [ 309 ] = xx [ 57 ] ; xx [ 310 ] = xx [ 89 ] ; xx
[ 311 ] = xx [ 92 ] ; xx [ 312 ] = xx [ 95 ] ; xx [ 313 ] = xx [ 90 ] ; xx [
314 ] = xx [ 93 ] ; xx [ 315 ] = xx [ 96 ] ; xx [ 316 ] = xx [ 91 ] ; xx [
317 ] = xx [ 94 ] ; xx [ 275 ] = - 3.478043091554657e-14 ; xx [ 276 ] =
8.616599387917045e-3 ; xx [ 277 ] = - 0.01781379291801384 ;
pm_math_Vector3_cross_ra ( xx + 275 , xx + 257 , xx + 289 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 309 , xx + 289 , xx + 295 ) ; xx [ 97 ] =
xx [ 262 ] + xx [ 295 ] ; xx [ 228 ] = xx [ 263 ] + xx [ 296 ] ; xx [ 246 ] =
xx [ 264 ] + xx [ 297 ] ; xx [ 262 ] = xx [ 97 ] ; xx [ 263 ] = xx [ 228 ] ;
xx [ 264 ] = xx [ 246 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 309 , xx
+ 257 , xx + 295 ) ; xx [ 247 ] = 8.355848350904705e-3 ; xx [ 318 ] = xx [
247 ] + xx [ 354 ] ; xx [ 319 ] = xx [ 355 ] ; xx [ 320 ] = xx [ 356 ] ; xx [
321 ] = xx [ 357 ] ; xx [ 322 ] = xx [ 247 ] + xx [ 358 ] ; xx [ 323 ] = xx [
359 ] ; xx [ 324 ] = xx [ 360 ] ; xx [ 325 ] = xx [ 361 ] ; xx [ 326 ] = xx [
247 ] + xx [ 362 ] ; pm_math_Matrix3x3_xform_ra ( xx + 318 , xx + 289 , xx +
345 ) ; xx [ 298 ] = xx [ 295 ] + xx [ 345 ] ; xx [ 299 ] = xx [ 296 ] + xx [
346 ] ; xx [ 295 ] = xx [ 297 ] + xx [ 347 ] ; xx [ 345 ] = xx [ 298 ] ; xx [
346 ] = xx [ 299 ] ; xx [ 347 ] = xx [ 295 ] ; xx [ 296 ] = xx [ 50 ] * xx [
27 ] ; xx [ 297 ] = xx [ 49 ] * xx [ 38 ] ; xx [ 348 ] = xx [ 296 ] + xx [
297 ] ; xx [ 349 ] = xx [ 37 ] * xx [ 27 ] ; xx [ 350 ] = xx [ 37 ] * xx [ 38
] ; xx [ 351 ] = xx [ 349 ] * xx [ 27 ] + xx [ 350 ] * xx [ 38 ] ; xx [ 352 ]
= xx [ 12 ] * ( xx [ 30 ] * xx [ 348 ] + xx [ 351 ] ) - xx [ 37 ] ; xx [ 353
] = xx [ 30 ] * xx [ 350 ] ; xx [ 350 ] = xx [ 49 ] + ( xx [ 353 ] - xx [ 38
] * xx [ 348 ] ) * xx [ 12 ] ; xx [ 363 ] = xx [ 30 ] * xx [ 349 ] ; xx [ 349
] = xx [ 50 ] + ( xx [ 363 ] - xx [ 27 ] * xx [ 348 ] ) * xx [ 12 ] ; xx [
364 ] = xx [ 352 ] ; xx [ 365 ] = xx [ 350 ] ; xx [ 366 ] = - xx [ 349 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 232 , xx + 364 , xx + 367 ) ;
pm_math_Vector3_cross_ra ( xx + 275 , xx + 364 , xx + 370 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 309 , xx + 370 , xx + 373 ) ; xx [ 348 ] =
xx [ 367 ] + xx [ 373 ] ; xx [ 376 ] = xx [ 368 ] + xx [ 374 ] ; xx [ 367 ] =
xx [ 369 ] + xx [ 375 ] ; xx [ 373 ] = xx [ 348 ] ; xx [ 374 ] = xx [ 376 ] ;
xx [ 375 ] = xx [ 367 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 309 , xx
+ 364 , xx + 377 ) ; pm_math_Matrix3x3_xform_ra ( xx + 318 , xx + 370 , xx +
380 ) ; xx [ 368 ] = xx [ 377 ] + xx [ 380 ] ; xx [ 369 ] = xx [ 378 ] + xx [
381 ] ; xx [ 377 ] = xx [ 379 ] + xx [ 382 ] ; xx [ 378 ] = xx [ 368 ] ; xx [
379 ] = xx [ 369 ] ; xx [ 380 ] = xx [ 377 ] ; xx [ 381 ] =
pm_math_Vector3_dot_ra ( xx + 257 , xx + 373 ) + pm_math_Vector3_dot_ra ( xx
+ 289 , xx + 378 ) ; xx [ 382 ] = 0.0139587874710942 ; xx [ 383 ] =
3.287582437116741e-14 ; xx [ 384 ] = 1.135158784431775e-14 ; xx [ 385 ] = xx
[ 382 ] ; xx [ 386 ] = xx [ 383 ] ; xx [ 387 ] = - xx [ 384 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 309 , xx + 385 , xx + 388 ) ; xx [ 391 ] =
xx [ 50 ] * xx [ 125 ] + xx [ 49 ] * xx [ 143 ] + xx [ 388 ] ; xx [ 392 ] =
xx [ 162 ] * xx [ 50 ] + xx [ 49 ] * xx [ 165 ] + xx [ 389 ] ; xx [ 388 ] =
xx [ 50 ] * xx [ 168 ] + xx [ 173 ] * xx [ 49 ] + xx [ 390 ] ; xx [ 393 ] =
xx [ 391 ] ; xx [ 394 ] = xx [ 392 ] ; xx [ 395 ] = xx [ 388 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 318 , xx + 385 , xx + 396 ) ; xx [ 389 ] =
xx [ 50 ] * xx [ 95 ] + xx [ 49 ] * xx [ 96 ] + xx [ 396 ] ; xx [ 390 ] = xx
[ 50 ] * xx [ 90 ] + xx [ 49 ] * xx [ 91 ] + xx [ 397 ] ; xx [ 396 ] = xx [
50 ] * xx [ 93 ] + xx [ 49 ] * xx [ 94 ] + xx [ 398 ] ; xx [ 397 ] = xx [ 389
] ; xx [ 398 ] = xx [ 390 ] ; xx [ 399 ] = xx [ 396 ] ; xx [ 400 ] =
pm_math_Vector3_dot_ra ( xx + 257 , xx + 393 ) + pm_math_Vector3_dot_ra ( xx
+ 289 , xx + 397 ) ; xx [ 401 ] = pm_math_Vector3_dot_ra ( xx + 364 , xx +
393 ) + pm_math_Vector3_dot_ra ( xx + 370 , xx + 397 ) ; xx [ 402 ] =
pm_math_Vector3_dot_ra ( xx + 257 , xx + 262 ) + pm_math_Vector3_dot_ra ( xx
+ 289 , xx + 345 ) ; xx [ 403 ] = xx [ 381 ] ; xx [ 404 ] = xx [ 400 ] ; xx [
405 ] = xx [ 381 ] ; xx [ 406 ] = pm_math_Vector3_dot_ra ( xx + 364 , xx +
373 ) + pm_math_Vector3_dot_ra ( xx + 370 , xx + 378 ) ; xx [ 407 ] = xx [
401 ] ; xx [ 408 ] = xx [ 400 ] ; xx [ 409 ] = xx [ 401 ] ; xx [ 410 ] = xx [
392 ] * xx [ 50 ] + xx [ 388 ] * xx [ 49 ] + pm_math_Vector3_dot_ra ( xx +
385 , xx + 397 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 402 , 3 , xx + 262
) ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 13 ] ) ) > xx [ 129 ] ;
ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L3/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L3/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 411 ] = xx [ 97 ] ; xx [ 412 ] = xx [ 348 ] ; xx [ 413
] = xx [ 391 ] ; xx [ 414 ] = xx [ 228 ] ; xx [ 415 ] = xx [ 376 ] ; xx [ 416
] = xx [ 392 ] ; xx [ 417 ] = xx [ 246 ] ; xx [ 418 ] = xx [ 367 ] ; xx [ 419
] = xx [ 388 ] ; xx [ 420 ] = xx [ 298 ] ; xx [ 421 ] = xx [ 368 ] ; xx [ 422
] = xx [ 389 ] ; xx [ 423 ] = xx [ 299 ] ; xx [ 424 ] = xx [ 369 ] ; xx [ 425
] = xx [ 390 ] ; xx [ 426 ] = xx [ 295 ] ; xx [ 427 ] = xx [ 377 ] ; xx [ 428
] = xx [ 396 ] ; solveSymmetricPosDef ( xx + 402 , xx + 411 , 3 , 6 , xx +
429 , xx + 262 ) ; xx [ 262 ] = xx [ 228 ] * xx [ 429 ] + xx [ 376 ] * xx [
430 ] + xx [ 392 ] * xx [ 431 ] ; xx [ 263 ] = xx [ 246 ] * xx [ 429 ] + xx [
367 ] * xx [ 430 ] + xx [ 388 ] * xx [ 431 ] ; xx [ 264 ] = xx [ 246 ] * xx [
432 ] + xx [ 367 ] * xx [ 433 ] + xx [ 388 ] * xx [ 434 ] ; xx [ 411 ] = xx [
119 ] - ( xx [ 97 ] * xx [ 429 ] + xx [ 348 ] * xx [ 430 ] + xx [ 391 ] * xx
[ 431 ] ) + xx [ 120 ] ; xx [ 412 ] = xx [ 125 ] - xx [ 262 ] ; xx [ 413 ] =
xx [ 143 ] - xx [ 263 ] ; xx [ 414 ] = xx [ 158 ] - xx [ 262 ] ; xx [ 415 ] =
xx [ 162 ] - ( xx [ 228 ] * xx [ 432 ] + xx [ 376 ] * xx [ 433 ] + xx [ 392 ]
* xx [ 434 ] ) ; xx [ 416 ] = xx [ 165 ] - xx [ 264 ] ; xx [ 417 ] = xx [ 166
] - xx [ 263 ] ; xx [ 418 ] = xx [ 168 ] - xx [ 264 ] ; xx [ 419 ] = xx [ 173
] - ( xx [ 246 ] * xx [ 435 ] + xx [ 367 ] * xx [ 436 ] + xx [ 388 ] * xx [
437 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 411 , xx + 62 , xx +
420 ) ; pm_math_Matrix3x3_compose_ra ( xx + 62 , xx + 420 , xx + 411 ) ; xx [
420 ] = xx [ 57 ] - ( xx [ 97 ] * xx [ 438 ] + xx [ 348 ] * xx [ 439 ] + xx [
391 ] * xx [ 440 ] ) ; xx [ 421 ] = xx [ 89 ] - ( xx [ 97 ] * xx [ 441 ] + xx
[ 348 ] * xx [ 442 ] + xx [ 391 ] * xx [ 443 ] ) ; xx [ 422 ] = xx [ 92 ] - (
xx [ 97 ] * xx [ 444 ] + xx [ 348 ] * xx [ 445 ] + xx [ 391 ] * xx [ 446 ] )
; xx [ 423 ] = xx [ 95 ] - ( xx [ 228 ] * xx [ 438 ] + xx [ 376 ] * xx [ 439
] + xx [ 392 ] * xx [ 440 ] ) ; xx [ 424 ] = xx [ 90 ] - ( xx [ 228 ] * xx [
441 ] + xx [ 376 ] * xx [ 442 ] + xx [ 392 ] * xx [ 443 ] ) ; xx [ 425 ] = xx
[ 93 ] - ( xx [ 228 ] * xx [ 444 ] + xx [ 376 ] * xx [ 445 ] + xx [ 392 ] *
xx [ 446 ] ) ; xx [ 426 ] = xx [ 96 ] - ( xx [ 246 ] * xx [ 438 ] + xx [ 367
] * xx [ 439 ] + xx [ 388 ] * xx [ 440 ] ) ; xx [ 427 ] = xx [ 91 ] - ( xx [
246 ] * xx [ 441 ] + xx [ 367 ] * xx [ 442 ] + xx [ 388 ] * xx [ 443 ] ) ; xx
[ 428 ] = xx [ 94 ] - ( xx [ 246 ] * xx [ 444 ] + xx [ 367 ] * xx [ 445 ] +
xx [ 388 ] * xx [ 446 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 420
, xx + 62 , xx + 447 ) ; pm_math_Matrix3x3_compose_ra ( xx + 62 , xx + 447 ,
xx + 420 ) ; xx [ 89 ] = xx [ 32 ] ; xx [ 90 ] = xx [ 53 ] ; xx [ 91 ] = xx [
54 ] ; xx [ 92 ] = xx [ 56 ] ; pm_math_Quaternion_xform_ra ( xx + 89 , xx +
275 , xx + 93 ) ; xx [ 32 ] = 1.222885353421585e-13 - xx [ 93 ] ; xx [ 53 ] =
0.01371330802384472 - xx [ 94 ] ; xx [ 54 ] = 0.01482112808326479 - xx [ 95 ]
; xx [ 93 ] = xx [ 32 ] ; xx [ 94 ] = xx [ 53 ] ; xx [ 95 ] = xx [ 54 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 420 , xx + 93 , xx + 447 ) ; xx [ 56 ]
= xx [ 299 ] * xx [ 438 ] + xx [ 369 ] * xx [ 439 ] + xx [ 390 ] * xx [ 440 ]
; xx [ 57 ] = xx [ 295 ] * xx [ 438 ] + xx [ 377 ] * xx [ 439 ] + xx [ 396 ]
* xx [ 440 ] ; xx [ 96 ] = xx [ 295 ] * xx [ 441 ] + xx [ 377 ] * xx [ 442 ]
+ xx [ 396 ] * xx [ 443 ] ; xx [ 456 ] = xx [ 354 ] - ( xx [ 298 ] * xx [ 438
] + xx [ 368 ] * xx [ 439 ] + xx [ 389 ] * xx [ 440 ] ) + xx [ 247 ] ; xx [
457 ] = xx [ 355 ] - xx [ 56 ] ; xx [ 458 ] = xx [ 356 ] - xx [ 57 ] ; xx [
459 ] = xx [ 357 ] - xx [ 56 ] ; xx [ 460 ] = xx [ 358 ] - ( xx [ 299 ] * xx
[ 441 ] + xx [ 369 ] * xx [ 442 ] + xx [ 390 ] * xx [ 443 ] ) + xx [ 247 ] ;
xx [ 461 ] = xx [ 359 ] - xx [ 96 ] ; xx [ 462 ] = xx [ 360 ] - xx [ 57 ] ;
xx [ 463 ] = xx [ 361 ] - xx [ 96 ] ; xx [ 464 ] = xx [ 362 ] - ( xx [ 295 ]
* xx [ 444 ] + xx [ 377 ] * xx [ 445 ] + xx [ 396 ] * xx [ 446 ] ) + xx [ 247
] ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 456 , xx + 62 , xx + 354 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 62 , xx + 354 , xx + 456 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 456 , xx + 93 , xx + 62 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 62 , xx + 93 , xx + 354 ) ; xx [ 56 ] =
xx [ 411 ] - xx [ 447 ] - xx [ 447 ] - xx [ 354 ] ; xx [ 57 ] =
2.872594976382685e-6 ; xx [ 96 ] = xx [ 412 ] - xx [ 448 ] - xx [ 450 ] - xx
[ 355 ] ; xx [ 119 ] = xx [ 413 ] - xx [ 449 ] - xx [ 453 ] - xx [ 356 ] ; xx
[ 125 ] = xx [ 414 ] - xx [ 450 ] - xx [ 448 ] - xx [ 357 ] ; xx [ 143 ] =
1.933045481959352e-6 ; xx [ 158 ] = xx [ 143 ] + xx [ 415 ] - xx [ 451 ] - xx
[ 451 ] - xx [ 358 ] ; xx [ 162 ] = xx [ 416 ] - xx [ 452 ] - xx [ 454 ] - xx
[ 359 ] ; xx [ 165 ] = xx [ 417 ] - xx [ 453 ] - xx [ 449 ] - xx [ 360 ] ; xx
[ 166 ] = xx [ 418 ] - xx [ 454 ] - xx [ 452 ] - xx [ 361 ] ; xx [ 168 ] =
3.740002603775385e-6 ; xx [ 173 ] = xx [ 168 ] + xx [ 419 ] - xx [ 455 ] - xx
[ 455 ] - xx [ 362 ] ; xx [ 354 ] = xx [ 57 ] + xx [ 56 ] ; xx [ 355 ] = xx [
96 ] ; xx [ 356 ] = xx [ 119 ] ; xx [ 357 ] = xx [ 125 ] ; xx [ 358 ] = xx [
158 ] ; xx [ 359 ] = xx [ 162 ] ; xx [ 360 ] = xx [ 165 ] ; xx [ 361 ] = xx [
166 ] ; xx [ 362 ] = xx [ 173 ] ; xx [ 247 ] = xx [ 1 ] - ( xx [ 36 ] + xx [
39 ] ) * xx [ 12 ] ; xx [ 36 ] = ( xx [ 35 ] + xx [ 34 ] ) * xx [ 12 ] ; xx [
262 ] = xx [ 247 ] ; xx [ 263 ] = xx [ 33 ] ; xx [ 264 ] = xx [ 36 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 354 , xx + 262 , xx + 345 ) ; xx [ 34 ] =
xx [ 420 ] - xx [ 62 ] ; xx [ 35 ] = xx [ 421 ] - xx [ 65 ] ; xx [ 39 ] = xx
[ 422 ] - xx [ 68 ] ; xx [ 62 ] = xx [ 423 ] - xx [ 63 ] ; xx [ 63 ] = xx [
424 ] - xx [ 66 ] ; xx [ 65 ] = xx [ 425 ] - xx [ 69 ] ; xx [ 66 ] = xx [ 426
] - xx [ 64 ] ; xx [ 64 ] = xx [ 427 ] - xx [ 67 ] ; xx [ 67 ] = xx [ 428 ] -
xx [ 70 ] ; xx [ 411 ] = xx [ 34 ] ; xx [ 412 ] = xx [ 35 ] ; xx [ 413 ] = xx
[ 39 ] ; xx [ 414 ] = xx [ 62 ] ; xx [ 415 ] = xx [ 63 ] ; xx [ 416 ] = xx [
65 ] ; xx [ 417 ] = xx [ 66 ] ; xx [ 418 ] = xx [ 64 ] ; xx [ 419 ] = xx [ 67
] ; xx [ 68 ] = 6.664202092713185e-14 ; xx [ 69 ] = 6.161981679940124e-3 ; xx
[ 70 ] = - 0.01687376340899878 ; pm_math_Vector3_cross_ra ( xx + 68 , xx +
262 , xx + 373 ) ; pm_math_Matrix3x3_xform_ra ( xx + 411 , xx + 373 , xx +
378 ) ; xx [ 381 ] = xx [ 345 ] + xx [ 378 ] ; xx [ 393 ] = xx [ 346 ] + xx [
379 ] ; xx [ 345 ] = xx [ 347 ] + xx [ 380 ] ; xx [ 378 ] = xx [ 381 ] ; xx [
379 ] = xx [ 393 ] ; xx [ 380 ] = xx [ 345 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 411 , xx + 262 , xx + 397 ) ; xx [
346 ] = 8.201635464916061e-3 ; xx [ 420 ] = xx [ 346 ] + xx [ 456 ] ; xx [
421 ] = xx [ 457 ] ; xx [ 422 ] = xx [ 458 ] ; xx [ 423 ] = xx [ 459 ] ; xx [
424 ] = xx [ 346 ] + xx [ 460 ] ; xx [ 425 ] = xx [ 461 ] ; xx [ 426 ] = xx [
462 ] ; xx [ 427 ] = xx [ 463 ] ; xx [ 428 ] = xx [ 346 ] + xx [ 464 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 420 , xx + 373 , xx + 447 ) ; xx [ 347 ] =
xx [ 397 ] + xx [ 447 ] ; xx [ 394 ] = xx [ 398 ] + xx [ 448 ] ; xx [ 395 ] =
xx [ 399 ] + xx [ 449 ] ; xx [ 397 ] = xx [ 347 ] ; xx [ 398 ] = xx [ 394 ] ;
xx [ 399 ] = xx [ 395 ] ; xx [ 400 ] = xx [ 26 ] * xx [ 20 ] ; xx [ 401 ] =
xx [ 25 ] * xx [ 24 ] ; xx [ 447 ] = xx [ 400 ] + xx [ 401 ] ; xx [ 448 ] =
xx [ 23 ] * xx [ 20 ] ; xx [ 449 ] = xx [ 23 ] * xx [ 24 ] ; xx [ 450 ] = xx
[ 448 ] * xx [ 20 ] + xx [ 449 ] * xx [ 24 ] ; xx [ 451 ] = xx [ 23 ] + xx [
12 ] * ( xx [ 21 ] * xx [ 447 ] - xx [ 450 ] ) ; xx [ 452 ] = xx [ 21 ] * xx
[ 449 ] ; xx [ 449 ] = xx [ 25 ] - ( xx [ 452 ] + xx [ 24 ] * xx [ 447 ] ) *
xx [ 12 ] ; xx [ 453 ] = xx [ 21 ] * xx [ 448 ] ; xx [ 448 ] = ( xx [ 453 ] +
xx [ 20 ] * xx [ 447 ] ) * xx [ 12 ] - xx [ 26 ] ; xx [ 465 ] = xx [ 451 ] ;
xx [ 466 ] = xx [ 449 ] ; xx [ 467 ] = xx [ 448 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 354 , xx + 465 , xx + 468 ) ;
pm_math_Vector3_cross_ra ( xx + 68 , xx + 465 , xx + 471 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 411 , xx + 471 , xx + 474 ) ; xx [ 447 ] =
xx [ 468 ] + xx [ 474 ] ; xx [ 454 ] = xx [ 469 ] + xx [ 475 ] ; xx [ 455 ] =
xx [ 470 ] + xx [ 476 ] ; xx [ 468 ] = xx [ 447 ] ; xx [ 469 ] = xx [ 454 ] ;
xx [ 470 ] = xx [ 455 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 411 , xx
+ 465 , xx + 474 ) ; pm_math_Matrix3x3_xform_ra ( xx + 420 , xx + 471 , xx +
477 ) ; xx [ 480 ] = xx [ 474 ] + xx [ 477 ] ; xx [ 481 ] = xx [ 475 ] + xx [
478 ] ; xx [ 474 ] = xx [ 476 ] + xx [ 479 ] ; xx [ 475 ] = xx [ 480 ] ; xx [
476 ] = xx [ 481 ] ; xx [ 477 ] = xx [ 474 ] ; xx [ 478 ] =
pm_math_Vector3_dot_ra ( xx + 262 , xx + 468 ) + pm_math_Vector3_dot_ra ( xx
+ 373 , xx + 475 ) ; xx [ 479 ] = 0.01011063572343469 ; xx [ 482 ] =
6.460835926211764e-14 ; xx [ 483 ] = 1.633765181136557e-14 ; xx [ 484 ] = xx
[ 479 ] ; xx [ 485 ] = - xx [ 482 ] ; xx [ 486 ] = xx [ 483 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 411 , xx + 484 , xx + 487 ) ; xx [ 490 ] =
xx [ 26 ] * xx [ 96 ] + xx [ 25 ] * xx [ 119 ] + xx [ 487 ] ; xx [ 491 ] = xx
[ 158 ] * xx [ 26 ] + xx [ 25 ] * xx [ 162 ] + xx [ 488 ] ; xx [ 487 ] = xx [
26 ] * xx [ 166 ] + xx [ 173 ] * xx [ 25 ] + xx [ 489 ] ; xx [ 492 ] = xx [
490 ] ; xx [ 493 ] = xx [ 491 ] ; xx [ 494 ] = xx [ 487 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 420 , xx + 484 , xx + 495 ) ; xx [ 488 ] =
xx [ 26 ] * xx [ 62 ] + xx [ 25 ] * xx [ 66 ] + xx [ 495 ] ; xx [ 489 ] = xx
[ 26 ] * xx [ 63 ] + xx [ 25 ] * xx [ 64 ] + xx [ 496 ] ; xx [ 495 ] = xx [
26 ] * xx [ 65 ] + xx [ 25 ] * xx [ 67 ] + xx [ 497 ] ; xx [ 496 ] = xx [ 488
] ; xx [ 497 ] = xx [ 489 ] ; xx [ 498 ] = xx [ 495 ] ; xx [ 499 ] =
pm_math_Vector3_dot_ra ( xx + 262 , xx + 492 ) + pm_math_Vector3_dot_ra ( xx
+ 373 , xx + 496 ) ; xx [ 500 ] = pm_math_Vector3_dot_ra ( xx + 465 , xx +
492 ) + pm_math_Vector3_dot_ra ( xx + 471 , xx + 496 ) ; xx [ 501 ] =
pm_math_Vector3_dot_ra ( xx + 262 , xx + 378 ) + pm_math_Vector3_dot_ra ( xx
+ 373 , xx + 397 ) ; xx [ 502 ] = xx [ 478 ] ; xx [ 503 ] = xx [ 499 ] ; xx [
504 ] = xx [ 478 ] ; xx [ 505 ] = pm_math_Vector3_dot_ra ( xx + 465 , xx +
468 ) + pm_math_Vector3_dot_ra ( xx + 471 , xx + 475 ) ; xx [ 506 ] = xx [
500 ] ; xx [ 507 ] = xx [ 499 ] ; xx [ 508 ] = xx [ 500 ] ; xx [ 509 ] = xx [
491 ] * xx [ 26 ] + xx [ 487 ] * xx [ 25 ] + pm_math_Vector3_dot_ra ( xx +
484 , xx + 496 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 501 , 3 , xx + 378
) ; bb [ 0 ] = ii [ 0 ] != 0 && fabs ( sin ( state [ 7 ] ) ) > xx [ 129 ] ;
ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L4/Gimbal Joint1' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L4/Gimbal Joint1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 510 ] = xx [ 381 ] ; xx [ 511 ] = xx [ 447 ] ; xx [
512 ] = xx [ 490 ] ; xx [ 513 ] = xx [ 393 ] ; xx [ 514 ] = xx [ 454 ] ; xx [
515 ] = xx [ 491 ] ; xx [ 516 ] = xx [ 345 ] ; xx [ 517 ] = xx [ 455 ] ; xx [
518 ] = xx [ 487 ] ; xx [ 519 ] = xx [ 347 ] ; xx [ 520 ] = xx [ 480 ] ; xx [
521 ] = xx [ 488 ] ; xx [ 522 ] = xx [ 394 ] ; xx [ 523 ] = xx [ 481 ] ; xx [
524 ] = xx [ 489 ] ; xx [ 525 ] = xx [ 395 ] ; xx [ 526 ] = xx [ 474 ] ; xx [
527 ] = xx [ 495 ] ; solveSymmetricPosDef ( xx + 501 , xx + 510 , 3 , 6 , xx
+ 528 , xx + 378 ) ; xx [ 378 ] = xx [ 393 ] * xx [ 528 ] + xx [ 454 ] * xx [
529 ] + xx [ 491 ] * xx [ 530 ] ; xx [ 379 ] = xx [ 345 ] * xx [ 528 ] + xx [
455 ] * xx [ 529 ] + xx [ 487 ] * xx [ 530 ] ; xx [ 380 ] = xx [ 345 ] * xx [
531 ] + xx [ 455 ] * xx [ 532 ] + xx [ 487 ] * xx [ 533 ] ; xx [ 510 ] = xx [
56 ] - ( xx [ 381 ] * xx [ 528 ] + xx [ 447 ] * xx [ 529 ] + xx [ 490 ] * xx
[ 530 ] ) + xx [ 57 ] ; xx [ 511 ] = xx [ 96 ] - xx [ 378 ] ; xx [ 512 ] = xx
[ 119 ] - xx [ 379 ] ; xx [ 513 ] = xx [ 125 ] - xx [ 378 ] ; xx [ 514 ] = xx
[ 158 ] - ( xx [ 393 ] * xx [ 531 ] + xx [ 454 ] * xx [ 532 ] + xx [ 491 ] *
xx [ 533 ] ) ; xx [ 515 ] = xx [ 162 ] - xx [ 380 ] ; xx [ 516 ] = xx [ 165 ]
- xx [ 379 ] ; xx [ 517 ] = xx [ 166 ] - xx [ 380 ] ; xx [ 518 ] = xx [ 173 ]
- ( xx [ 345 ] * xx [ 534 ] + xx [ 455 ] * xx [ 535 ] + xx [ 487 ] * xx [ 536
] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 510 , xx + 40 , xx + 519 )
; pm_math_Matrix3x3_compose_ra ( xx + 40 , xx + 519 , xx + 510 ) ; xx [ 519 ]
= xx [ 34 ] - ( xx [ 381 ] * xx [ 537 ] + xx [ 447 ] * xx [ 538 ] + xx [ 490
] * xx [ 539 ] ) ; xx [ 520 ] = xx [ 35 ] - ( xx [ 381 ] * xx [ 540 ] + xx [
447 ] * xx [ 541 ] + xx [ 490 ] * xx [ 542 ] ) ; xx [ 521 ] = xx [ 39 ] - (
xx [ 381 ] * xx [ 543 ] + xx [ 447 ] * xx [ 544 ] + xx [ 490 ] * xx [ 545 ] )
; xx [ 522 ] = xx [ 62 ] - ( xx [ 393 ] * xx [ 537 ] + xx [ 454 ] * xx [ 538
] + xx [ 491 ] * xx [ 539 ] ) ; xx [ 523 ] = xx [ 63 ] - ( xx [ 393 ] * xx [
540 ] + xx [ 454 ] * xx [ 541 ] + xx [ 491 ] * xx [ 542 ] ) ; xx [ 524 ] = xx
[ 65 ] - ( xx [ 393 ] * xx [ 543 ] + xx [ 454 ] * xx [ 544 ] + xx [ 491 ] *
xx [ 545 ] ) ; xx [ 525 ] = xx [ 66 ] - ( xx [ 345 ] * xx [ 537 ] + xx [ 455
] * xx [ 538 ] + xx [ 487 ] * xx [ 539 ] ) ; xx [ 526 ] = xx [ 64 ] - ( xx [
345 ] * xx [ 540 ] + xx [ 455 ] * xx [ 541 ] + xx [ 487 ] * xx [ 542 ] ) ; xx
[ 527 ] = xx [ 67 ] - ( xx [ 345 ] * xx [ 543 ] + xx [ 455 ] * xx [ 544 ] +
xx [ 487 ] * xx [ 545 ] ) ; pm_math_Matrix3x3_composeTranspose_ra ( xx + 519
, xx + 40 , xx + 546 ) ; pm_math_Matrix3x3_compose_ra ( xx + 40 , xx + 546 ,
xx + 519 ) ; xx [ 62 ] = xx [ 22 ] ; xx [ 63 ] = xx [ 28 ] ; xx [ 64 ] = xx [
29 ] ; xx [ 65 ] = xx [ 31 ] ; pm_math_Quaternion_xform_ra ( xx + 62 , xx +
68 , xx + 378 ) ; xx [ 22 ] = 0.01018286292250497 - xx [ 379 ] ; xx [ 28 ] =
0.01643121746247235 - xx [ 380 ] ; xx [ 397 ] = - xx [ 378 ] ; xx [ 398 ] =
xx [ 22 ] ; xx [ 399 ] = xx [ 28 ] ; pm_math_Matrix3x3_postCross_ra ( xx +
519 , xx + 397 , xx + 546 ) ; xx [ 29 ] = xx [ 394 ] * xx [ 537 ] + xx [ 481
] * xx [ 538 ] + xx [ 489 ] * xx [ 539 ] ; xx [ 31 ] = xx [ 395 ] * xx [ 537
] + xx [ 474 ] * xx [ 538 ] + xx [ 495 ] * xx [ 539 ] ; xx [ 34 ] = xx [ 395
] * xx [ 540 ] + xx [ 474 ] * xx [ 541 ] + xx [ 495 ] * xx [ 542 ] ; xx [ 555
] = xx [ 456 ] - ( xx [ 347 ] * xx [ 537 ] + xx [ 480 ] * xx [ 538 ] + xx [
488 ] * xx [ 539 ] ) + xx [ 346 ] ; xx [ 556 ] = xx [ 457 ] - xx [ 29 ] ; xx
[ 557 ] = xx [ 458 ] - xx [ 31 ] ; xx [ 558 ] = xx [ 459 ] - xx [ 29 ] ; xx [
559 ] = xx [ 460 ] - ( xx [ 394 ] * xx [ 540 ] + xx [ 481 ] * xx [ 541 ] + xx
[ 489 ] * xx [ 542 ] ) + xx [ 346 ] ; xx [ 560 ] = xx [ 461 ] - xx [ 34 ] ;
xx [ 561 ] = xx [ 462 ] - xx [ 31 ] ; xx [ 562 ] = xx [ 463 ] - xx [ 34 ] ;
xx [ 563 ] = xx [ 464 ] - ( xx [ 395 ] * xx [ 543 ] + xx [ 474 ] * xx [ 544 ]
+ xx [ 495 ] * xx [ 545 ] ) + xx [ 346 ] ;
pm_math_Matrix3x3_composeTranspose_ra ( xx + 555 , xx + 40 , xx + 456 ) ;
pm_math_Matrix3x3_compose_ra ( xx + 40 , xx + 456 , xx + 555 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 555 , xx + 397 , xx + 39 ) ;
pm_math_Matrix3x3_preCross_ra ( xx + 39 , xx + 397 , xx + 456 ) ; xx [ 29 ] =
xx [ 511 ] - xx [ 547 ] - xx [ 549 ] - xx [ 457 ] ; xx [ 31 ] = xx [ 512 ] -
xx [ 548 ] - xx [ 552 ] - xx [ 458 ] ; xx [ 34 ] = 3.490126909650324e-6 ; xx
[ 35 ] = xx [ 34 ] + xx [ 514 ] - xx [ 550 ] - xx [ 550 ] - xx [ 460 ] ; xx [
48 ] = xx [ 515 ] - xx [ 551 ] - xx [ 553 ] - xx [ 461 ] ; xx [ 56 ] = xx [
517 ] - xx [ 553 ] - xx [ 551 ] - xx [ 463 ] ; xx [ 66 ] =
5.069554565459512e-6 ; xx [ 67 ] = xx [ 66 ] + xx [ 518 ] - xx [ 554 ] - xx [
554 ] - xx [ 464 ] ; xx [ 564 ] = xx [ 19 ] + xx [ 510 ] - xx [ 546 ] - xx [
546 ] - xx [ 456 ] ; xx [ 565 ] = xx [ 29 ] ; xx [ 566 ] = xx [ 31 ] ; xx [
567 ] = xx [ 513 ] - xx [ 549 ] - xx [ 547 ] - xx [ 459 ] ; xx [ 568 ] = xx [
35 ] ; xx [ 569 ] = xx [ 48 ] ; xx [ 570 ] = xx [ 516 ] - xx [ 552 ] - xx [
548 ] - xx [ 462 ] ; xx [ 571 ] = xx [ 56 ] ; xx [ 572 ] = xx [ 67 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 564 , xx + 16 , xx + 456 ) ; xx [ 96 ] = xx
[ 519 ] - xx [ 39 ] ; xx [ 39 ] = xx [ 522 ] - xx [ 40 ] ; xx [ 40 ] = xx [
523 ] - xx [ 43 ] ; xx [ 43 ] = xx [ 524 ] - xx [ 46 ] ; xx [ 46 ] = xx [ 525
] - xx [ 41 ] ; xx [ 41 ] = xx [ 526 ] - xx [ 44 ] ; xx [ 44 ] = xx [ 527 ] -
xx [ 47 ] ; xx [ 510 ] = xx [ 96 ] ; xx [ 511 ] = xx [ 520 ] - xx [ 42 ] ; xx
[ 512 ] = xx [ 521 ] - xx [ 45 ] ; xx [ 513 ] = xx [ 39 ] ; xx [ 514 ] = xx [
40 ] ; xx [ 515 ] = xx [ 43 ] ; xx [ 516 ] = xx [ 46 ] ; xx [ 517 ] = xx [ 41
] ; xx [ 518 ] = xx [ 44 ] ; xx [ 42 ] = 8.538390167322628e-3 ; xx [ 45 ] =
0.0187094325596859 ; xx [ 47 ] = xx [ 42 ] * xx [ 9 ] + xx [ 45 ] * xx [ 5 ]
; xx [ 119 ] = xx [ 45 ] * xx [ 13 ] ; xx [ 125 ] = xx [ 42 ] * xx [ 13 ] ;
xx [ 459 ] = xx [ 47 ] ; xx [ 460 ] = - xx [ 119 ] ; xx [ 461 ] = - xx [ 125
] ; pm_math_Matrix3x3_xform_ra ( xx + 510 , xx + 459 , xx + 462 ) ; xx [ 158
] = xx [ 456 ] + xx [ 462 ] ; xx [ 162 ] = xx [ 457 ] + xx [ 463 ] ; xx [ 165
] = xx [ 458 ] + xx [ 464 ] ; xx [ 456 ] = xx [ 158 ] ; xx [ 457 ] = xx [ 162
] ; xx [ 458 ] = xx [ 165 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 510
, xx + 16 , xx + 462 ) ; xx [ 166 ] = 9.266435618121707e-3 ; xx [ 173 ] = xx
[ 166 ] + xx [ 555 ] ; xx [ 519 ] = xx [ 173 ] ; xx [ 520 ] = xx [ 556 ] ; xx
[ 521 ] = xx [ 557 ] ; xx [ 522 ] = xx [ 558 ] ; xx [ 523 ] = xx [ 166 ] + xx
[ 559 ] ; xx [ 524 ] = xx [ 560 ] ; xx [ 525 ] = xx [ 561 ] ; xx [ 526 ] = xx
[ 562 ] ; xx [ 527 ] = xx [ 166 ] + xx [ 563 ] ; pm_math_Matrix3x3_xform_ra (
xx + 519 , xx + 459 , xx + 468 ) ; xx [ 166 ] = xx [ 462 ] + xx [ 468 ] ; xx
[ 346 ] = xx [ 463 ] + xx [ 469 ] ; xx [ 379 ] = xx [ 464 ] + xx [ 470 ] ; xx
[ 462 ] = xx [ 166 ] ; xx [ 463 ] = xx [ 346 ] ; xx [ 464 ] = xx [ 379 ] ; xx
[ 380 ] = xx [ 10 ] * xx [ 3 ] ; xx [ 468 ] = xx [ 14 ] * xx [ 8 ] ; xx [ 469
] = xx [ 380 ] + xx [ 468 ] ; xx [ 470 ] = xx [ 12 ] * xx [ 4 ] * xx [ 469 ]
; xx [ 475 ] = xx [ 14 ] - xx [ 12 ] * xx [ 8 ] * xx [ 469 ] ; xx [ 476 ] =
xx [ 12 ] * xx [ 3 ] * xx [ 469 ] - xx [ 10 ] ; xx [ 492 ] = xx [ 470 ] ; xx
[ 493 ] = xx [ 475 ] ; xx [ 494 ] = xx [ 476 ] ; pm_math_Matrix3x3_xform_ra (
xx + 564 , xx + 492 , xx + 496 ) ; xx [ 469 ] = xx [ 42 ] * xx [ 476 ] + xx [
475 ] * xx [ 45 ] ; xx [ 477 ] = xx [ 45 ] * xx [ 470 ] ; xx [ 478 ] = xx [
42 ] * xx [ 470 ] ; xx [ 546 ] = xx [ 469 ] ; xx [ 547 ] = - xx [ 477 ] ; xx
[ 548 ] = - xx [ 478 ] ; pm_math_Matrix3x3_xform_ra ( xx + 510 , xx + 546 ,
xx + 549 ) ; xx [ 499 ] = xx [ 496 ] + xx [ 549 ] ; xx [ 500 ] = xx [ 497 ] +
xx [ 550 ] ; xx [ 496 ] = xx [ 498 ] + xx [ 551 ] ; xx [ 549 ] = xx [ 499 ] ;
xx [ 550 ] = xx [ 500 ] ; xx [ 551 ] = xx [ 496 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 510 , xx + 492 , xx + 552 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 519 , xx + 546 , xx + 555 ) ; xx [ 497 ] =
xx [ 552 ] + xx [ 555 ] ; xx [ 498 ] = xx [ 553 ] + xx [ 556 ] ; xx [ 552 ] =
xx [ 554 ] + xx [ 557 ] ; xx [ 553 ] = xx [ 497 ] ; xx [ 554 ] = xx [ 498 ] ;
xx [ 555 ] = xx [ 552 ] ; xx [ 556 ] = pm_math_Vector3_dot_ra ( xx + 16 , xx
+ 549 ) + pm_math_Vector3_dot_ra ( xx + 459 , xx + 553 ) ; xx [ 557 ] =
0.01308562271097496 ; xx [ 559 ] = xx [ 10 ] * xx [ 29 ] + xx [ 14 ] * xx [
31 ] + xx [ 557 ] * xx [ 96 ] ; xx [ 29 ] = xx [ 35 ] * xx [ 10 ] + xx [ 14 ]
* xx [ 48 ] + xx [ 557 ] * xx [ 39 ] ; xx [ 31 ] = xx [ 10 ] * xx [ 56 ] + xx
[ 67 ] * xx [ 14 ] + xx [ 557 ] * xx [ 46 ] ; xx [ 573 ] = xx [ 559 ] ; xx [
574 ] = xx [ 29 ] ; xx [ 575 ] = xx [ 31 ] ; xx [ 35 ] = xx [ 10 ] * xx [ 39
] + xx [ 14 ] * xx [ 46 ] + xx [ 173 ] * xx [ 557 ] ; xx [ 39 ] = xx [ 10 ] *
xx [ 40 ] + xx [ 14 ] * xx [ 41 ] + xx [ 557 ] * xx [ 558 ] ; xx [ 40 ] = xx
[ 10 ] * xx [ 43 ] + xx [ 14 ] * xx [ 44 ] + xx [ 557 ] * xx [ 561 ] ; xx [
560 ] = xx [ 35 ] ; xx [ 561 ] = xx [ 39 ] ; xx [ 562 ] = xx [ 40 ] ; xx [ 41
] = pm_math_Vector3_dot_ra ( xx + 16 , xx + 573 ) + pm_math_Vector3_dot_ra (
xx + 459 , xx + 560 ) ; xx [ 43 ] = pm_math_Vector3_dot_ra ( xx + 492 , xx +
573 ) + pm_math_Vector3_dot_ra ( xx + 546 , xx + 560 ) ; xx [ 573 ] =
pm_math_Vector3_dot_ra ( xx + 16 , xx + 456 ) + pm_math_Vector3_dot_ra ( xx +
459 , xx + 462 ) ; xx [ 574 ] = xx [ 556 ] ; xx [ 575 ] = xx [ 41 ] ; xx [
576 ] = xx [ 556 ] ; xx [ 577 ] = pm_math_Vector3_dot_ra ( xx + 492 , xx +
549 ) + pm_math_Vector3_dot_ra ( xx + 546 , xx + 553 ) ; xx [ 578 ] = xx [ 43
] ; xx [ 579 ] = xx [ 41 ] ; xx [ 580 ] = xx [ 43 ] ; xx [ 581 ] = xx [ 29 ]
* xx [ 10 ] + xx [ 31 ] * xx [ 14 ] + xx [ 35 ] * xx [ 557 ] ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 573 , 3 , xx + 456 ) ; bb [ 0 ] = ii [ 0 ] != 0
&& fabs ( sin ( state [ 1 ] ) ) > xx [ 129 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ;
if ( bb [ 0 ] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L5/Gimbal Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll" ,
 "'draft7/L5/Gimbal Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 41 ] = 5.729577951308232 ; xx [ 43 ] =
0.5235987755982988 ; xx [ 44 ] = 0.0 ; xx [ 46 ] = state [ 0 ] + xx [ 43 ] ;
if ( xx [ 44 ] < xx [ 46 ] ) xx [ 46 ] = xx [ 44 ] ; xx [ 48 ] =
1.74532925199433e-3 ; xx [ 56 ] = - ( xx [ 46 ] / xx [ 48 ] ) ; if ( xx [ 1 ]
< xx [ 56 ] ) xx [ 56 ] = xx [ 1 ] ; xx [ 67 ] = 3.0 ; xx [ 96 ] =
5729.577951308232 ; xx [ 129 ] = xx [ 96 ] * state [ 3 ] ; xx [ 173 ] =
5.729577951308232e5 ; xx [ 456 ] = xx [ 56 ] * xx [ 56 ] * ( xx [ 67 ] - xx [
12 ] * xx [ 56 ] ) * ( ( - xx [ 46 ] == xx [ 44 ] ? xx [ 44 ] : - xx [ 129 ]
) - xx [ 173 ] * xx [ 46 ] ) ; if ( xx [ 44 ] > xx [ 456 ] ) xx [ 456 ] = xx
[ 44 ] ; xx [ 46 ] = state [ 0 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 46 ] )
xx [ 46 ] = xx [ 44 ] ; xx [ 56 ] = xx [ 46 ] / xx [ 48 ] ; if ( xx [ 1 ] <
xx [ 56 ] ) xx [ 56 ] = xx [ 1 ] ; xx [ 457 ] = ( xx [ 173 ] * xx [ 46 ] + (
xx [ 46 ] == xx [ 44 ] ? xx [ 44 ] : xx [ 129 ] ) ) * xx [ 56 ] * xx [ 56 ] *
( xx [ 67 ] - xx [ 12 ] * xx [ 56 ] ) ; if ( xx [ 44 ] > xx [ 457 ] ) xx [
457 ] = xx [ 44 ] ; xx [ 46 ] = xx [ 13 ] * state [ 3 ] ; xx [ 56 ] = xx [
380 ] + xx [ 468 ] ; xx [ 129 ] = xx [ 12 ] * xx [ 4 ] * xx [ 56 ] * state [
4 ] ; xx [ 4 ] = xx [ 46 ] + xx [ 129 ] ; xx [ 380 ] = xx [ 5 ] * state [ 3 ]
; xx [ 458 ] = ( xx [ 14 ] - xx [ 12 ] * xx [ 8 ] * xx [ 56 ] ) * state [ 4 ]
; xx [ 8 ] = xx [ 10 ] * state [ 5 ] ; xx [ 462 ] = xx [ 380 ] + xx [ 458 ] +
xx [ 8 ] ; xx [ 463 ] = xx [ 9 ] * state [ 3 ] ; xx [ 464 ] = ( xx [ 12 ] *
xx [ 3 ] * xx [ 56 ] - xx [ 10 ] ) * state [ 4 ] ; xx [ 3 ] = xx [ 14 ] *
state [ 5 ] ; xx [ 56 ] = xx [ 463 ] + xx [ 464 ] + xx [ 3 ] ; xx [ 549 ] =
xx [ 4 ] ; xx [ 550 ] = xx [ 462 ] ; xx [ 551 ] = xx [ 56 ] ; xx [ 553 ] = xx
[ 19 ] * xx [ 4 ] ; xx [ 554 ] = xx [ 462 ] * xx [ 34 ] ; xx [ 555 ] = xx [
56 ] * xx [ 66 ] ; pm_math_Vector3_cross_ra ( xx + 549 , xx + 553 , xx + 560
) ; xx [ 19 ] = 0.6903818921736785 * input [ 103 ] ; xx [ 34 ] = input [ 103
] - 1.380763784347357 * xx [ 19 ] ; xx [ 66 ] = 1.446890241806463 * xx [ 19 ]
; xx [ 19 ] = 0.0375915374507293 ; xx [ 553 ] = - 2.405769667632971e-13 ; xx
[ 554 ] = - 0.03983410794452454 ; xx [ 555 ] = - 0.01645986959431302 ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 553 , xx + 582 ) ; xx [ 468 ] =
xx [ 582 ] - xx [ 378 ] ; xx [ 556 ] = xx [ 583 ] + xx [ 22 ] + xx [ 19 ] ;
xx [ 558 ] = 1.590244414800102e-3 ; xx [ 563 ] = xx [ 584 ] + xx [ 28 ] + xx
[ 558 ] ; xx [ 582 ] = sqrt ( xx [ 468 ] * xx [ 468 ] + xx [ 556 ] * xx [ 556
] + xx [ 563 ] * xx [ 563 ] ) ; if ( xx [ 582 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L4-L5 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 582 ] = input [ 112 ] / xx [ 582 ] ; xx [ 583 ] = xx [
582 ] * xx [ 563 ] ; xx [ 563 ] = xx [ 582 ] * xx [ 556 ] ; xx [ 556 ] =
0.01759714945393536 ; xx [ 584 ] = - xx [ 11 ] ; xx [ 585 ] = xx [ 15 ] ; xx
[ 586 ] = xx [ 7 ] ; xx [ 587 ] = xx [ 6 ] ; xx [ 588 ] = xx [ 15 ] ; xx [
589 ] = xx [ 7 ] ; xx [ 590 ] = xx [ 6 ] ; xx [ 591 ] = 0.03563872347849285 ;
xx [ 592 ] = xx [ 6 ] * xx [ 591 ] - xx [ 556 ] * xx [ 7 ] ; xx [ 593 ] = xx
[ 556 ] * xx [ 15 ] ; xx [ 594 ] = xx [ 591 ] * xx [ 15 ] ; xx [ 595 ] = xx [
592 ] ; xx [ 596 ] = xx [ 593 ] ; xx [ 597 ] = - xx [ 594 ] ;
pm_math_Vector3_cross_ra ( xx + 588 , xx + 595 , xx + 598 ) ; xx [ 595 ] = xx
[ 45 ] * xx [ 7 ] + xx [ 6 ] * xx [ 42 ] ; xx [ 596 ] = xx [ 45 ] * xx [ 15 ]
; xx [ 597 ] = xx [ 42 ] * xx [ 15 ] ; xx [ 601 ] = - xx [ 595 ] ; xx [ 602 ]
= xx [ 596 ] ; xx [ 603 ] = xx [ 597 ] ; pm_math_Vector3_cross_ra ( xx + 588
, xx + 601 , xx + 604 ) ; xx [ 588 ] = ( xx [ 11 ] * xx [ 595 ] + xx [ 604 ]
) * xx [ 12 ] ; xx [ 589 ] = ( xx [ 598 ] - xx [ 11 ] * xx [ 592 ] ) * xx [
12 ] - xx [ 588 ] ; xx [ 590 ] = 0.06197538565817786 - xx [ 12 ] * ( xx [ 605
] - xx [ 596 ] * xx [ 11 ] ) ; xx [ 592 ] = xx [ 12 ] * ( xx [ 599 ] - xx [
593 ] * xx [ 11 ] ) - xx [ 591 ] + xx [ 590 ] - 0.0257594283537832 ; xx [ 593
] = 0.9283707866246274 - ( xx [ 606 ] - xx [ 597 ] * xx [ 11 ] ) * xx [ 12 ]
; xx [ 595 ] = ( xx [ 594 ] * xx [ 11 ] + xx [ 600 ] ) * xx [ 12 ] - xx [ 556
] + xx [ 593 ] - 0.906781702449562 ; xx [ 594 ] = sqrt ( xx [ 589 ] * xx [
589 ] + xx [ 592 ] * xx [ 592 ] + xx [ 595 ] * xx [ 595 ] ) ; if ( xx [ 594 ]
== 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L5-S1 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 594 ] = input [ 113 ] / xx [ 594 ] ; xx [ 596 ] = xx [
594 ] * xx [ 589 ] ; xx [ 597 ] = xx [ 594 ] * xx [ 592 ] ; xx [ 598 ] = xx [
594 ] * xx [ 595 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 584 , xx + 596
, xx + 599 ) ; xx [ 589 ] = 0.04055699920652953 ; xx [ 592 ] =
0.01302079271818882 ; xx [ 595 ] = 0.0135421645305857 ; xx [ 596 ] = - xx [
589 ] ; xx [ 597 ] = - xx [ 592 ] ; xx [ 598 ] = xx [ 595 ] ; xx [ 602 ] = -
0.03653985023506644 ; xx [ 603 ] = - 0.01645220048935106 ; xx [ 604 ] =
3.239433747529818e-3 ; pm_math_Quaternion_xform_ra ( xx + 62 , xx + 602 , xx
+ 605 ) ; xx [ 608 ] = xx [ 605 ] - xx [ 378 ] + xx [ 589 ] ; xx [ 589 ] = xx
[ 606 ] + xx [ 22 ] + xx [ 592 ] ; xx [ 592 ] = xx [ 607 ] + xx [ 28 ] - xx [
595 ] ; xx [ 595 ] = sqrt ( xx [ 608 ] * xx [ 608 ] + xx [ 589 ] * xx [ 589 ]
+ xx [ 592 ] * xx [ 592 ] ) ; if ( xx [ 595 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 595 ] = input [ 117 ] / xx [ 595 ] ; xx [ 605 ] = xx [
595 ] * xx [ 608 ] ; xx [ 606 ] = xx [ 595 ] * xx [ 589 ] ; xx [ 589 ] = xx [
595 ] * xx [ 592 ] ; xx [ 607 ] = - xx [ 605 ] ; xx [ 608 ] = - xx [ 606 ] ;
xx [ 609 ] = - xx [ 589 ] ; pm_math_Vector3_cross_ra ( xx + 596 , xx + 607 ,
xx + 610 ) ; xx [ 596 ] = - 0.04008119964598488 ; xx [ 597 ] = -
0.01084940380361654 ; xx [ 598 ] = - 9.8613284252828e-4 ;
pm_math_Quaternion_xform_ra ( xx + 584 , xx + 596 , xx + 607 ) ; xx [ 592 ] =
0.044078899383545 ; xx [ 613 ] = xx [ 607 ] - xx [ 588 ] + xx [ 592 ] ; xx [
614 ] = 0.0499199981689453 ; xx [ 615 ] = xx [ 608 ] + xx [ 590 ] - xx [ 614
] ; xx [ 607 ] = 0.919140991210938 ; xx [ 608 ] = xx [ 609 ] + xx [ 593 ] -
xx [ 607 ] ; xx [ 609 ] = sqrt ( xx [ 613 ] * xx [ 613 ] + xx [ 615 ] * xx [
615 ] + xx [ 608 ] * xx [ 608 ] ) ; if ( xx [ 609 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 609 ] = input [ 118 ] / xx [ 609 ] ; xx [ 616 ] = xx [
609 ] * xx [ 613 ] ; xx [ 617 ] = xx [ 609 ] * xx [ 615 ] ; xx [ 618 ] = xx [
609 ] * xx [ 608 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 584 , xx + 616
, xx + 619 ) ; pm_math_Vector3_cross_ra ( xx + 596 , xx + 619 , xx + 615 ) ;
xx [ 596 ] = 0.04055699920655626 ; xx [ 597 ] = 0.0130207927181218 ; xx [ 598
] = 0.01354216453058323 ; xx [ 622 ] = xx [ 596 ] ; xx [ 623 ] = - xx [ 597 ]
; xx [ 624 ] = xx [ 598 ] ; xx [ 625 ] = 0.03653985023490417 ; xx [ 626 ] = -
0.01645220048983929 ; xx [ 627 ] = 3.239433747517833e-3 ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 625 , xx + 628 ) ; xx [ 608 ] =
xx [ 628 ] - xx [ 378 ] - xx [ 596 ] ; xx [ 596 ] = xx [ 629 ] + xx [ 22 ] +
xx [ 597 ] ; xx [ 597 ] = xx [ 630 ] + xx [ 28 ] - xx [ 598 ] ; xx [ 598 ] =
sqrt ( xx [ 608 ] * xx [ 608 ] + xx [ 596 ] * xx [ 596 ] + xx [ 597 ] * xx [
597 ] ) ; if ( xx [ 598 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 598 ] = input [ 122 ] / xx [ 598 ] ; xx [ 613 ] = xx [
598 ] * xx [ 608 ] ; xx [ 608 ] = xx [ 598 ] * xx [ 596 ] ; xx [ 596 ] = xx [
598 ] * xx [ 597 ] ; xx [ 628 ] = - xx [ 613 ] ; xx [ 629 ] = - xx [ 608 ] ;
xx [ 630 ] = - xx [ 596 ] ; pm_math_Vector3_cross_ra ( xx + 622 , xx + 628 ,
xx + 631 ) ; xx [ 622 ] = 0.04008119964600713 ; xx [ 623 ] = -
0.01084940380355031 ; xx [ 624 ] = - 9.861328425307225e-4 ;
pm_math_Quaternion_xform_ra ( xx + 584 , xx + 622 , xx + 628 ) ; xx [ 597 ] =
xx [ 628 ] - xx [ 588 ] - xx [ 592 ] ; xx [ 592 ] = xx [ 629 ] + xx [ 590 ] -
xx [ 614 ] ; xx [ 614 ] = xx [ 630 ] + xx [ 593 ] - xx [ 607 ] ; xx [ 607 ] =
sqrt ( xx [ 597 ] * xx [ 597 ] + xx [ 592 ] * xx [ 592 ] + xx [ 614 ] * xx [
614 ] ) ; if ( xx [ 607 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 607 ] = input [ 123 ] / xx [ 607 ] ; xx [ 628 ] = xx [
607 ] * xx [ 597 ] ; xx [ 629 ] = xx [ 607 ] * xx [ 592 ] ; xx [ 630 ] = xx [
607 ] * xx [ 614 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 584 , xx + 628
, xx + 634 ) ; pm_math_Vector3_cross_ra ( xx + 622 , xx + 634 , xx + 628 ) ;
xx [ 592 ] = 0.04705808460307085 ; xx [ 622 ] = - 3.166185351073283e-13 ; xx
[ 623 ] = - 0.0513211464694144 ; xx [ 624 ] = - 0.01219126570664875 ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 622 , xx + 637 ) ; xx [ 597 ] =
xx [ 637 ] - xx [ 378 ] ; xx [ 378 ] = xx [ 638 ] + xx [ 22 ] + xx [ 592 ] ;
xx [ 22 ] = 9.875319015864496e-3 ; xx [ 614 ] = xx [ 639 ] + xx [ 28 ] + xx [
22 ] ; xx [ 28 ] = sqrt ( xx [ 597 ] * xx [ 597 ] + xx [ 378 ] * xx [ 378 ] +
xx [ 614 ] * xx [ 614 ] ) ; if ( xx [ 28 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L4-L5 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 28 ] = input [ 138 ] / xx [ 28 ] ; xx [ 618 ] = xx [
28 ] * xx [ 614 ] ; xx [ 614 ] = xx [ 28 ] * xx [ 378 ] ; xx [ 637 ] = -
3.88840995326696e-5 ; xx [ 638 ] = - 0.04658678468440397 ; xx [ 639 ] = -
0.0171197768192325 ; pm_math_Quaternion_xform_ra ( xx + 584 , xx + 637 , xx +
640 ) ; xx [ 378 ] = xx [ 640 ] - xx [ 588 ] ; xx [ 643 ] = xx [ 641 ] + xx [
590 ] - 0.019933675415717 ; xx [ 640 ] = xx [ 642 ] + xx [ 593 ] -
0.904526583782246 ; xx [ 641 ] = sqrt ( xx [ 378 ] * xx [ 378 ] + xx [ 643 ]
* xx [ 643 ] + xx [ 640 ] * xx [ 640 ] ) ; if ( xx [ 641 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L5-S1 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 641 ] = input [ 139 ] / xx [ 641 ] ; xx [ 644 ] = xx [
641 ] * xx [ 378 ] ; xx [ 645 ] = xx [ 641 ] * xx [ 643 ] ; xx [ 646 ] = xx [
641 ] * xx [ 640 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 584 , xx + 644
, xx + 647 ) ; pm_math_Vector3_cross_ra ( xx + 637 , xx + 647 , xx + 642 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 549 , xx + 637 ) ; xx [
378 ] = xx [ 247 ] * state [ 9 ] ; xx [ 640 ] = xx [ 400 ] + xx [ 401 ] ; xx
[ 400 ] = ( xx [ 23 ] - ( xx [ 450 ] - xx [ 21 ] * xx [ 640 ] ) * xx [ 12 ] )
* state [ 10 ] ; xx [ 21 ] = xx [ 378 ] + xx [ 400 ] ; xx [ 23 ] = xx [ 637 ]
+ xx [ 21 ] ; xx [ 401 ] = xx [ 33 ] * state [ 9 ] ; xx [ 450 ] = ( xx [ 25 ]
- xx [ 12 ] * ( xx [ 24 ] * xx [ 640 ] + xx [ 452 ] ) ) * state [ 10 ] ; xx [
24 ] = xx [ 26 ] * state [ 11 ] ; xx [ 452 ] = xx [ 401 ] + xx [ 450 ] + xx [
24 ] ; xx [ 645 ] = xx [ 638 ] + xx [ 452 ] ; xx [ 646 ] = xx [ 36 ] * state
[ 9 ] ; xx [ 650 ] = ( xx [ 12 ] * ( xx [ 453 ] + xx [ 20 ] * xx [ 640 ] ) -
xx [ 26 ] ) * state [ 10 ] ; xx [ 20 ] = xx [ 25 ] * state [ 11 ] ; xx [ 453
] = xx [ 646 ] + xx [ 650 ] + xx [ 20 ] ; xx [ 640 ] = xx [ 639 ] + xx [ 453
] ; xx [ 651 ] = xx [ 23 ] ; xx [ 652 ] = xx [ 645 ] ; xx [ 653 ] = xx [ 640
] ; xx [ 654 ] = xx [ 23 ] * xx [ 57 ] ; xx [ 655 ] = xx [ 645 ] * xx [ 143 ]
; xx [ 656 ] = xx [ 640 ] * xx [ 168 ] ; pm_math_Vector3_cross_ra ( xx + 651
, xx + 654 , xx + 657 ) ; xx [ 654 ] = 2.234568172515435e-13 ; xx [ 655 ] =
0.02939308698039612 ; xx [ 656 ] = - 5.661597909317728e-3 ; xx [ 57 ] =
0.7847814363844873 ; xx [ 143 ] = 2.339080312536016e-12 ; xx [ 168 ] = xx [
143 ] * input [ 104 ] ; xx [ 660 ] = 0.619772617260799 ; xx [ 661 ] = xx [
660 ] * input [ 104 ] ; xx [ 662 ] = ( xx [ 57 ] * xx [ 168 ] + xx [ 143 ] *
xx [ 661 ] ) * xx [ 12 ] ; xx [ 663 ] = xx [ 143 ] * xx [ 168 ] ; xx [ 143 ]
= xx [ 12 ] * ( xx [ 663 ] - xx [ 57 ] * xx [ 661 ] ) ; xx [ 57 ] = input [
104 ] - ( xx [ 660 ] * xx [ 661 ] + xx [ 663 ] ) * xx [ 12 ] ; xx [ 663 ] = -
xx [ 662 ] ; xx [ 664 ] = xx [ 143 ] ; xx [ 665 ] = xx [ 57 ] ;
pm_math_Vector3_cross_ra ( xx + 654 , xx + 663 , xx + 666 ) ; xx [ 168 ] =
2.408429233865428e-13 ; xx [ 654 ] = 0.04027776673008778 ; xx [ 655 ] =
9.50951981748549e-6 ; xx [ 663 ] = - xx [ 168 ] ; xx [ 664 ] = - xx [ 654 ] ;
xx [ 665 ] = - xx [ 655 ] ; xx [ 669 ] = 1.167567527306757e-13 ; xx [ 670 ] =
- 0.04472798265803164 ; xx [ 671 ] = - 0.01492244588929304 ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 669 , xx + 672 ) ; xx [ 656 ] =
xx [ 672 ] + xx [ 32 ] + xx [ 168 ] ; xx [ 168 ] = xx [ 673 ] + xx [ 53 ] +
xx [ 654 ] ; xx [ 654 ] = xx [ 674 ] + xx [ 54 ] + xx [ 655 ] ; xx [ 655 ] =
sqrt ( xx [ 656 ] * xx [ 656 ] + xx [ 168 ] * xx [ 168 ] + xx [ 654 ] * xx [
654 ] ) ; if ( xx [ 655 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L3-L4 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 655 ] = input [ 111 ] / xx [ 655 ] ; xx [ 660 ] = xx [
655 ] * xx [ 656 ] ; xx [ 656 ] = xx [ 655 ] * xx [ 168 ] ; xx [ 168 ] = xx [
655 ] * xx [ 654 ] ; xx [ 672 ] = - xx [ 660 ] ; xx [ 673 ] = - xx [ 656 ] ;
xx [ 674 ] = - xx [ 168 ] ; pm_math_Vector3_cross_ra ( xx + 663 , xx + 672 ,
xx + 675 ) ; xx [ 654 ] = xx [ 582 ] * xx [ 468 ] ; xx [ 663 ] = xx [ 654 ] ;
xx [ 664 ] = xx [ 563 ] ; xx [ 665 ] = xx [ 583 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 663 , xx + 672 ) ;
pm_math_Vector3_cross_ra ( xx + 553 , xx + 672 , xx + 663 ) ; xx [ 468 ] =
0.03492720031745133 ; xx [ 553 ] = 0.01477959769994918 ; xx [ 554 ] =
0.01134881117700549 ; xx [ 678 ] = - xx [ 468 ] ; xx [ 679 ] = - xx [ 553 ] ;
xx [ 680 ] = xx [ 554 ] ; xx [ 681 ] = - 0.03087794971463731 ; xx [ 682 ] = -
0.01577384625407678 ; xx [ 683 ] = 4.057911382721502e-3 ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 681 , xx + 684 ) ; xx [ 555 ] =
xx [ 684 ] + xx [ 32 ] + xx [ 468 ] ; xx [ 468 ] = xx [ 685 ] + xx [ 53 ] +
xx [ 553 ] ; xx [ 553 ] = xx [ 686 ] + xx [ 54 ] - xx [ 554 ] ; xx [ 554 ] =
sqrt ( xx [ 555 ] * xx [ 555 ] + xx [ 468 ] * xx [ 468 ] + xx [ 553 ] * xx [
553 ] ) ; if ( xx [ 554 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 554 ] = input [ 116 ] / xx [ 554 ] ; xx [ 661 ] = xx [
554 ] * xx [ 555 ] ; xx [ 555 ] = xx [ 554 ] * xx [ 468 ] ; xx [ 468 ] = xx [
554 ] * xx [ 553 ] ; xx [ 684 ] = - xx [ 661 ] ; xx [ 685 ] = - xx [ 555 ] ;
xx [ 686 ] = - xx [ 468 ] ; pm_math_Vector3_cross_ra ( xx + 678 , xx + 684 ,
xx + 687 ) ; xx [ 678 ] = xx [ 605 ] ; xx [ 679 ] = xx [ 606 ] ; xx [ 680 ] =
xx [ 589 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 678 , xx +
684 ) ; pm_math_Vector3_cross_ra ( xx + 602 , xx + 684 , xx + 678 ) ; xx [
553 ] = 0.03492470169060014 ; xx [ 602 ] = 0.01552496039123881 ; xx [ 603 ] =
0.01167234256981233 ; xx [ 690 ] = xx [ 553 ] ; xx [ 691 ] = - xx [ 602 ] ;
xx [ 692 ] = xx [ 603 ] ; xx [ 693 ] = 0.03087794971468379 ; xx [ 694 ] = -
0.01577384625389952 ; xx [ 695 ] = 4.057911382755352e-3 ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 693 , xx + 696 ) ; xx [ 604 ] =
xx [ 696 ] + xx [ 32 ] - xx [ 553 ] ; xx [ 553 ] = xx [ 697 ] + xx [ 53 ] +
xx [ 602 ] ; xx [ 602 ] = xx [ 698 ] + xx [ 54 ] - xx [ 603 ] ; xx [ 603 ] =
sqrt ( xx [ 604 ] * xx [ 604 ] + xx [ 553 ] * xx [ 553 ] + xx [ 602 ] * xx [
602 ] ) ; if ( xx [ 603 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 603 ] = input [ 121 ] / xx [ 603 ] ; xx [ 696 ] = xx [
603 ] * xx [ 604 ] ; xx [ 604 ] = xx [ 603 ] * xx [ 553 ] ; xx [ 553 ] = xx [
603 ] * xx [ 602 ] ; xx [ 697 ] = - xx [ 696 ] ; xx [ 698 ] = - xx [ 604 ] ;
xx [ 699 ] = - xx [ 553 ] ; pm_math_Vector3_cross_ra ( xx + 690 , xx + 697 ,
xx + 700 ) ; xx [ 690 ] = xx [ 613 ] ; xx [ 691 ] = xx [ 608 ] ; xx [ 692 ] =
xx [ 596 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 690 , xx +
697 ) ; pm_math_Vector3_cross_ra ( xx + 625 , xx + 697 , xx + 690 ) ; xx [
602 ] = 3.146640243071065e-13 ; xx [ 625 ] = 0.05113078984265527 ; xx [ 626 ]
= 8.028332428854309e-3 ; xx [ 703 ] = - xx [ 602 ] ; xx [ 704 ] = - xx [ 625
] ; xx [ 705 ] = - xx [ 626 ] ; xx [ 706 ] = 1.4285959311088e-13 ; xx [ 707 ]
= - 0.05524484988788111 ; xx [ 708 ] = - 7.469488033553544e-3 ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 706 , xx + 709 ) ; xx [ 627 ] =
xx [ 709 ] + xx [ 32 ] + xx [ 602 ] ; xx [ 32 ] = xx [ 710 ] + xx [ 53 ] + xx
[ 625 ] ; xx [ 53 ] = xx [ 711 ] + xx [ 54 ] + xx [ 626 ] ; xx [ 54 ] = sqrt
( xx [ 627 ] * xx [ 627 ] + xx [ 32 ] * xx [ 32 ] + xx [ 53 ] * xx [ 53 ] ) ;
if ( xx [ 54 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L3-L4 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 54 ] = input [ 137 ] / xx [ 54 ] ; xx [ 602 ] = xx [
54 ] * xx [ 627 ] ; xx [ 625 ] = xx [ 54 ] * xx [ 32 ] ; xx [ 32 ] = xx [ 54
] * xx [ 53 ] ; xx [ 709 ] = - xx [ 602 ] ; xx [ 710 ] = - xx [ 625 ] ; xx [
711 ] = - xx [ 32 ] ; pm_math_Vector3_cross_ra ( xx + 703 , xx + 709 , xx +
712 ) ; xx [ 53 ] = xx [ 28 ] * xx [ 597 ] ; xx [ 703 ] = xx [ 53 ] ; xx [
704 ] = xx [ 614 ] ; xx [ 705 ] = xx [ 618 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 703 , xx + 709 ) ;
pm_math_Vector3_cross_ra ( xx + 622 , xx + 709 , xx + 703 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 651 , xx + 622 ) ; xx [
597 ] = xx [ 226 ] * state [ 15 ] ; xx [ 626 ] = xx [ 296 ] + xx [ 297 ] ; xx
[ 296 ] = ( ( xx [ 30 ] * xx [ 626 ] + xx [ 351 ] ) * xx [ 12 ] - xx [ 37 ] )
* state [ 16 ] ; xx [ 30 ] = xx [ 597 ] + xx [ 296 ] ; xx [ 37 ] = xx [ 622 ]
+ xx [ 30 ] ; xx [ 297 ] = xx [ 227 ] * state [ 15 ] ; xx [ 351 ] = ( xx [ 49
] + xx [ 12 ] * ( xx [ 353 ] - xx [ 38 ] * xx [ 626 ] ) ) * state [ 16 ] ; xx
[ 38 ] = xx [ 50 ] * state [ 17 ] ; xx [ 353 ] = xx [ 297 ] + xx [ 351 ] + xx
[ 38 ] ; xx [ 627 ] = xx [ 623 ] + xx [ 353 ] ; xx [ 715 ] = xx [ 51 ] *
state [ 15 ] ; xx [ 716 ] = ( xx [ 12 ] * ( xx [ 27 ] * xx [ 626 ] - xx [ 363
] ) - xx [ 50 ] ) * state [ 16 ] ; xx [ 27 ] = xx [ 49 ] * state [ 17 ] ; xx
[ 363 ] = xx [ 715 ] + xx [ 716 ] + xx [ 27 ] ; xx [ 626 ] = xx [ 624 ] + xx
[ 363 ] ; xx [ 717 ] = xx [ 37 ] ; xx [ 718 ] = xx [ 627 ] ; xx [ 719 ] = xx
[ 626 ] ; xx [ 720 ] = xx [ 37 ] * xx [ 120 ] ; xx [ 721 ] = xx [ 627 ] * xx
[ 160 ] ; xx [ 722 ] = xx [ 626 ] * xx [ 170 ] ; pm_math_Vector3_cross_ra (
xx + 717 , xx + 720 , xx + 723 ) ; xx [ 720 ] = - 1.076648921049358e-13 ; xx
[ 721 ] = 0.03139087037316381 ; xx [ 722 ] = - 4.53476976212614e-3 ; xx [ 120
] = 0.64004249649544 * input [ 106 ] ; xx [ 160 ] = xx [ 12 ] *
1.278175242626048e-12 * xx [ 120 ] ; xx [ 170 ] = xx [ 12 ] *
0.7683395100343888 * xx [ 120 ] ; xx [ 726 ] = input [ 106 ] -
1.28008499299088 * xx [ 120 ] ; xx [ 727 ] = xx [ 160 ] ; xx [ 728 ] = - xx [
170 ] ; xx [ 729 ] = xx [ 726 ] ; pm_math_Vector3_cross_ra ( xx + 720 , xx +
727 , xx + 730 ) ; xx [ 120 ] = 8.947197148478258e-14 ; xx [ 720 ] =
0.0386335011732275 ; xx [ 721 ] = 2.940430357145393e-3 ; xx [ 727 ] = xx [
120 ] ; xx [ 728 ] = - xx [ 720 ] ; xx [ 729 ] = xx [ 721 ] ; xx [ 733 ] = -
6.841875673243218e-13 ; xx [ 734 ] = - 0.04146091222789498 ; xx [ 735 ] = -
0.01351410150666451 ; pm_math_Quaternion_xform_ra ( xx + 85 , xx + 733 , xx +
736 ) ; xx [ 722 ] = xx [ 736 ] - xx [ 80 ] - xx [ 120 ] ; xx [ 120 ] = xx [
737 ] + xx [ 121 ] + xx [ 720 ] ; xx [ 720 ] = xx [ 738 ] + xx [ 118 ] - xx [
721 ] ; xx [ 721 ] = sqrt ( xx [ 722 ] * xx [ 722 ] + xx [ 120 ] * xx [ 120 ]
+ xx [ 720 ] * xx [ 720 ] ) ; if ( xx [ 721 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L2-L3 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 721 ] = input [ 110 ] / xx [ 721 ] ; xx [ 736 ] = xx [
721 ] * xx [ 722 ] ; xx [ 722 ] = xx [ 721 ] * xx [ 120 ] ; xx [ 120 ] = xx [
721 ] * xx [ 720 ] ; xx [ 737 ] = - xx [ 736 ] ; xx [ 738 ] = - xx [ 722 ] ;
xx [ 739 ] = - xx [ 120 ] ; pm_math_Vector3_cross_ra ( xx + 727 , xx + 737 ,
xx + 740 ) ; xx [ 727 ] = xx [ 660 ] ; xx [ 728 ] = xx [ 656 ] ; xx [ 729 ] =
xx [ 168 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 727 , xx +
737 ) ; pm_math_Vector3_cross_ra ( xx + 669 , xx + 737 , xx + 727 ) ; xx [
669 ] = 0.03295989990232563 ; xx [ 670 ] = 0.01601356214963441 ; xx [ 671 ] =
0.01475302284708025 ; xx [ 743 ] = - xx [ 669 ] ; xx [ 744 ] = - xx [ 670 ] ;
xx [ 745 ] = xx [ 671 ] ; xx [ 746 ] = - 0.03226754951497003 ; xx [ 747 ] = -
0.02045999852626687 ; xx [ 748 ] = 5.644585224138508e-3 ;
pm_math_Quaternion_xform_ra ( xx + 85 , xx + 746 , xx + 749 ) ; xx [ 720 ] =
xx [ 749 ] - xx [ 80 ] + xx [ 669 ] ; xx [ 669 ] = xx [ 750 ] + xx [ 121 ] +
xx [ 670 ] ; xx [ 670 ] = xx [ 751 ] + xx [ 118 ] - xx [ 671 ] ; xx [ 671 ] =
sqrt ( xx [ 720 ] * xx [ 720 ] + xx [ 669 ] * xx [ 669 ] + xx [ 670 ] * xx [
670 ] ) ; if ( xx [ 671 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 671 ] = input [ 115 ] / xx [ 671 ] ; xx [ 749 ] = xx [
671 ] * xx [ 720 ] ; xx [ 720 ] = xx [ 671 ] * xx [ 669 ] ; xx [ 669 ] = xx [
671 ] * xx [ 670 ] ; xx [ 750 ] = - xx [ 749 ] ; xx [ 751 ] = - xx [ 720 ] ;
xx [ 752 ] = - xx [ 669 ] ; pm_math_Vector3_cross_ra ( xx + 743 , xx + 750 ,
xx + 753 ) ; xx [ 743 ] = xx [ 661 ] ; xx [ 744 ] = xx [ 555 ] ; xx [ 745 ] =
xx [ 468 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 743 , xx +
750 ) ; pm_math_Vector3_cross_ra ( xx + 681 , xx + 750 , xx + 743 ) ; xx [
670 ] = 0.03295989990236177 ; xx [ 681 ] = 0.01601356214944519 ; xx [ 682 ] =
0.01475302284711638 ; xx [ 756 ] = xx [ 670 ] ; xx [ 757 ] = - xx [ 681 ] ;
xx [ 758 ] = xx [ 682 ] ; xx [ 759 ] = 0.03226754951457088 ; xx [ 760 ] = -
0.02045999852744781 ; xx [ 761 ] = 5.644585223800618e-3 ;
pm_math_Quaternion_xform_ra ( xx + 85 , xx + 759 , xx + 762 ) ; xx [ 683 ] =
xx [ 762 ] - xx [ 80 ] - xx [ 670 ] ; xx [ 670 ] = xx [ 763 ] + xx [ 121 ] +
xx [ 681 ] ; xx [ 681 ] = xx [ 764 ] + xx [ 118 ] - xx [ 682 ] ; xx [ 682 ] =
sqrt ( xx [ 683 ] * xx [ 683 ] + xx [ 670 ] * xx [ 670 ] + xx [ 681 ] * xx [
681 ] ) ; if ( xx [ 682 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 682 ] = input [ 120 ] / xx [ 682 ] ; xx [ 762 ] = xx [
682 ] * xx [ 683 ] ; xx [ 683 ] = xx [ 682 ] * xx [ 670 ] ; xx [ 670 ] = xx [
682 ] * xx [ 681 ] ; xx [ 763 ] = - xx [ 762 ] ; xx [ 764 ] = - xx [ 683 ] ;
xx [ 765 ] = - xx [ 670 ] ; pm_math_Vector3_cross_ra ( xx + 756 , xx + 763 ,
xx + 766 ) ; xx [ 756 ] = xx [ 696 ] ; xx [ 757 ] = xx [ 604 ] ; xx [ 758 ] =
xx [ 553 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 756 , xx +
763 ) ; pm_math_Vector3_cross_ra ( xx + 693 , xx + 763 , xx + 756 ) ; xx [
681 ] = 1.392865120001009e-13 ; xx [ 693 ] = 0.05459122458051579 ; xx [ 694 ]
= 4.374450014251545e-3 ; xx [ 769 ] = xx [ 681 ] ; xx [ 770 ] = - xx [ 693 ]
; xx [ 771 ] = - xx [ 694 ] ; xx [ 772 ] = - 8.371860108687535e-13 ; xx [ 773
] = - 0.05202883057027102 ; xx [ 774 ] = - 5.800535526395379e-3 ;
pm_math_Quaternion_xform_ra ( xx + 85 , xx + 772 , xx + 775 ) ; xx [ 695 ] =
xx [ 775 ] - xx [ 80 ] - xx [ 681 ] ; xx [ 80 ] = xx [ 776 ] + xx [ 121 ] +
xx [ 693 ] ; xx [ 121 ] = xx [ 777 ] + xx [ 118 ] + xx [ 694 ] ; xx [ 118 ] =
sqrt ( xx [ 695 ] * xx [ 695 ] + xx [ 80 ] * xx [ 80 ] + xx [ 121 ] * xx [
121 ] ) ; if ( xx [ 118 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L2-L3 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 118 ] = input [ 136 ] / xx [ 118 ] ; xx [ 681 ] = xx [
118 ] * xx [ 695 ] ; xx [ 693 ] = xx [ 118 ] * xx [ 80 ] ; xx [ 80 ] = xx [
118 ] * xx [ 121 ] ; xx [ 775 ] = - xx [ 681 ] ; xx [ 776 ] = - xx [ 693 ] ;
xx [ 777 ] = - xx [ 80 ] ; pm_math_Vector3_cross_ra ( xx + 769 , xx + 775 ,
xx + 778 ) ; xx [ 769 ] = xx [ 602 ] ; xx [ 770 ] = xx [ 625 ] ; xx [ 771 ] =
xx [ 32 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 769 , xx +
775 ) ; pm_math_Vector3_cross_ra ( xx + 706 , xx + 775 , xx + 769 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 717 , xx + 706 ) ; xx [
121 ] = xx [ 176 ] * state [ 21 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
75 , xx + 266 , xx + 781 ) ; xx [ 75 ] = xx [ 781 ] * state [ 22 ] ; xx [ 76
] = xx [ 71 ] * state [ 23 ] ; xx [ 77 ] = xx [ 121 ] + xx [ 75 ] + xx [ 76 ]
; xx [ 78 ] = xx [ 706 ] + xx [ 77 ] ; xx [ 266 ] = xx [ 174 ] * state [ 21 ]
; xx [ 267 ] = xx [ 782 ] * state [ 22 ] ; xx [ 268 ] = xx [ 61 ] * state [
23 ] ; xx [ 694 ] = xx [ 266 ] + xx [ 267 ] + xx [ 268 ] ; xx [ 695 ] = xx [
707 ] + xx [ 694 ] ; xx [ 784 ] = xx [ 60 ] * state [ 21 ] ; xx [ 781 ] = xx
[ 783 ] * state [ 22 ] ; xx [ 782 ] = xx [ 59 ] * state [ 23 ] ; xx [ 783 ] =
xx [ 784 ] + xx [ 781 ] + xx [ 782 ] ; xx [ 785 ] = xx [ 708 ] + xx [ 783 ] ;
xx [ 786 ] = xx [ 78 ] ; xx [ 787 ] = xx [ 695 ] ; xx [ 788 ] = xx [ 785 ] ;
xx [ 789 ] = xx [ 78 ] * xx [ 144 ] ; xx [ 790 ] = xx [ 695 ] * xx [ 164 ] ;
xx [ 791 ] = xx [ 785 ] * xx [ 172 ] ; pm_math_Vector3_cross_ra ( xx + 786 ,
xx + 789 , xx + 792 ) ; xx [ 789 ] = 7.188464506654162e-13 ; xx [ 790 ] =
0.03225412823629766 ; xx [ 791 ] = - 3.133507134471407e-3 ; xx [ 144 ] =
0.7453544942628708 ; xx [ 164 ] = 4.148454829529507e-12 ; xx [ 172 ] = xx [
164 ] * input [ 107 ] ; xx [ 795 ] = 8.56489137069967e-12 ; xx [ 796 ] =
0.6666683417428341 ; xx [ 797 ] = xx [ 796 ] * input [ 107 ] ; xx [ 798 ] = (
xx [ 144 ] * xx [ 172 ] + xx [ 795 ] * xx [ 797 ] ) * xx [ 12 ] ; xx [ 799 ]
= xx [ 12 ] * ( xx [ 795 ] * xx [ 172 ] - xx [ 144 ] * xx [ 797 ] ) ; xx [
144 ] = input [ 107 ] - ( xx [ 796 ] * xx [ 797 ] + xx [ 164 ] * xx [ 172 ] )
* xx [ 12 ] ; xx [ 795 ] = - xx [ 798 ] ; xx [ 796 ] = xx [ 799 ] ; xx [ 797
] = xx [ 144 ] ; pm_math_Vector3_cross_ra ( xx + 789 , xx + 795 , xx + 800 )
; xx [ 164 ] = 5.287708455224579e-13 ; xx [ 172 ] = 0.03767096436270765 ; xx
[ 789 ] = 2.923671226993926e-3 ; xx [ 795 ] = - xx [ 164 ] ; xx [ 796 ] = -
xx [ 172 ] ; xx [ 797 ] = xx [ 789 ] ; xx [ 803 ] = 8.599010959602973e-12 ;
xx [ 804 ] = - 0.08308907864317851 ; xx [ 805 ] = - 0.1306612955003031 ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 803 , xx + 806 ) ; xx [ 790 ] =
xx [ 806 ] + xx [ 130 ] + xx [ 164 ] ; xx [ 164 ] = xx [ 807 ] + xx [ 131 ] +
xx [ 172 ] ; xx [ 172 ] = xx [ 808 ] + xx [ 142 ] - xx [ 789 ] ; xx [ 789 ] =
sqrt ( xx [ 790 ] * xx [ 790 ] + xx [ 164 ] * xx [ 164 ] + xx [ 172 ] * xx [
172 ] ) ; if ( xx [ 789 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L1-L2 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 789 ] = input [ 109 ] / xx [ 789 ] ; xx [ 791 ] = xx [
789 ] * xx [ 790 ] ; xx [ 790 ] = xx [ 789 ] * xx [ 164 ] ; xx [ 164 ] = xx [
789 ] * xx [ 172 ] ; xx [ 806 ] = - xx [ 791 ] ; xx [ 807 ] = - xx [ 790 ] ;
xx [ 808 ] = - xx [ 164 ] ; pm_math_Vector3_cross_ra ( xx + 795 , xx + 806 ,
xx + 809 ) ; xx [ 795 ] = xx [ 736 ] ; xx [ 796 ] = xx [ 722 ] ; xx [ 797 ] =
xx [ 120 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 795 , xx +
806 ) ; pm_math_Vector3_cross_ra ( xx + 733 , xx + 806 , xx + 795 ) ; xx [
172 ] = 0.03234149932875941 ; xx [ 733 ] = 0.02029712378537596 ; xx [ 734 ] =
0.01526834402904475 ; xx [ 812 ] = - xx [ 172 ] ; xx [ 813 ] = - xx [ 733 ] ;
xx [ 814 ] = xx [ 734 ] ; xx [ 815 ] = - 0.02788730047518068 ; xx [ 816 ] = -
0.06226499915804137 ; xx [ 817 ] = - 0.1105856995801309 ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 815 , xx + 818 ) ; xx [ 735 ] =
xx [ 818 ] + xx [ 130 ] + xx [ 172 ] ; xx [ 172 ] = xx [ 819 ] + xx [ 131 ] +
xx [ 733 ] ; xx [ 733 ] = xx [ 820 ] + xx [ 142 ] - xx [ 734 ] ; xx [ 734 ] =
sqrt ( xx [ 735 ] * xx [ 735 ] + xx [ 172 ] * xx [ 172 ] + xx [ 733 ] * xx [
733 ] ) ; if ( xx [ 734 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 734 ] = input [ 114 ] / xx [ 734 ] ; xx [ 818 ] = xx [
734 ] * xx [ 735 ] ; xx [ 735 ] = xx [ 734 ] * xx [ 172 ] ; xx [ 172 ] = xx [
734 ] * xx [ 733 ] ; xx [ 819 ] = - xx [ 818 ] ; xx [ 820 ] = - xx [ 735 ] ;
xx [ 821 ] = - xx [ 172 ] ; pm_math_Vector3_cross_ra ( xx + 812 , xx + 819 ,
xx + 822 ) ; xx [ 812 ] = xx [ 749 ] ; xx [ 813 ] = xx [ 720 ] ; xx [ 814 ] =
xx [ 669 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 812 , xx +
819 ) ; pm_math_Vector3_cross_ra ( xx + 746 , xx + 819 , xx + 812 ) ; xx [
733 ] = 0.03234149932846699 ; xx [ 746 ] = 0.02029712378655961 ; xx [ 747 ] =
0.01526834402870608 ; xx [ 825 ] = xx [ 733 ] ; xx [ 826 ] = - xx [ 746 ] ;
xx [ 827 ] = xx [ 747 ] ; xx [ 828 ] = 0.02788730050748512 ; xx [ 829 ] = -
0.06226499918103524 ; xx [ 830 ] = - 0.1105856995772642 ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 828 , xx + 831 ) ; xx [ 748 ] =
xx [ 831 ] + xx [ 130 ] - xx [ 733 ] ; xx [ 733 ] = xx [ 832 ] + xx [ 131 ] +
xx [ 746 ] ; xx [ 746 ] = xx [ 833 ] + xx [ 142 ] - xx [ 747 ] ; xx [ 747 ] =
sqrt ( xx [ 748 ] * xx [ 748 ] + xx [ 733 ] * xx [ 733 ] + xx [ 746 ] * xx [
746 ] ) ; if ( xx [ 747 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 747 ] = input [ 119 ] / xx [ 747 ] ; xx [ 831 ] = xx [
747 ] * xx [ 748 ] ; xx [ 748 ] = xx [ 747 ] * xx [ 733 ] ; xx [ 733 ] = xx [
747 ] * xx [ 746 ] ; xx [ 832 ] = - xx [ 831 ] ; xx [ 833 ] = - xx [ 748 ] ;
xx [ 834 ] = - xx [ 733 ] ; pm_math_Vector3_cross_ra ( xx + 825 , xx + 832 ,
xx + 835 ) ; xx [ 825 ] = xx [ 762 ] ; xx [ 826 ] = xx [ 683 ] ; xx [ 827 ] =
xx [ 670 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 825 , xx +
832 ) ; pm_math_Vector3_cross_ra ( xx + 759 , xx + 832 , xx + 825 ) ; xx [
746 ] = 7.867570466502235e-13 ; xx [ 759 ] = 0.05039051001790674 ; xx [ 760 ]
= 1.894890190564144e-3 ; xx [ 838 ] = - xx [ 746 ] ; xx [ 839 ] = - xx [ 759
] ; xx [ 840 ] = - xx [ 760 ] ; xx [ 841 ] = 3.885494606759522e-12 ; xx [ 842
] = - 0.09411462191877414 ; xx [ 843 ] = - 0.1273910586185666 ;
pm_math_Quaternion_xform_ra ( xx + 114 , xx + 841 , xx + 844 ) ; xx [ 761 ] =
xx [ 844 ] + xx [ 130 ] + xx [ 746 ] ; xx [ 130 ] = xx [ 845 ] + xx [ 131 ] +
xx [ 759 ] ; xx [ 131 ] = xx [ 846 ] + xx [ 142 ] + xx [ 760 ] ; xx [ 142 ] =
sqrt ( xx [ 761 ] * xx [ 761 ] + xx [ 130 ] * xx [ 130 ] + xx [ 131 ] * xx [
131 ] ) ; if ( xx [ 142 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L1-L2 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 142 ] = input [ 135 ] / xx [ 142 ] ; xx [ 746 ] = xx [
142 ] * xx [ 761 ] ; xx [ 759 ] = xx [ 142 ] * xx [ 130 ] ; xx [ 130 ] = xx [
142 ] * xx [ 131 ] ; xx [ 844 ] = - xx [ 746 ] ; xx [ 845 ] = - xx [ 759 ] ;
xx [ 846 ] = - xx [ 130 ] ; pm_math_Vector3_cross_ra ( xx + 838 , xx + 844 ,
xx + 847 ) ; xx [ 838 ] = xx [ 681 ] ; xx [ 839 ] = xx [ 693 ] ; xx [ 840 ] =
xx [ 80 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 838 , xx +
844 ) ; pm_math_Vector3_cross_ra ( xx + 772 , xx + 844 , xx + 838 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 786 , xx + 772 ) ; xx [
131 ] = xx [ 110 ] * state [ 27 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
103 , xx + 146 , xx + 850 ) ; xx [ 103 ] = xx [ 850 ] * state [ 28 ] ; xx [
104 ] = xx [ 99 ] * state [ 29 ] ; xx [ 105 ] = xx [ 131 ] + xx [ 103 ] - xx
[ 104 ] ; xx [ 106 ] = xx [ 772 ] + xx [ 105 ] ; xx [ 146 ] = xx [ 107 ] *
state [ 27 ] ; xx [ 147 ] = xx [ 851 ] * state [ 28 ] ; xx [ 148 ] = xx [ 98
] * state [ 29 ] ; xx [ 760 ] = xx [ 146 ] + xx [ 147 ] - xx [ 148 ] ; xx [
761 ] = xx [ 773 ] + xx [ 760 ] ; xx [ 853 ] = xx [ 81 ] * state [ 27 ] ; xx
[ 850 ] = xx [ 852 ] * state [ 28 ] ; xx [ 851 ] = xx [ 84 ] * state [ 29 ] ;
xx [ 852 ] = xx [ 853 ] + xx [ 850 ] + xx [ 851 ] ; xx [ 854 ] = xx [ 774 ] +
xx [ 852 ] ; xx [ 855 ] = xx [ 106 ] ; xx [ 856 ] = xx [ 761 ] ; xx [ 857 ] =
xx [ 854 ] ; xx [ 858 ] = xx [ 106 ] * xx [ 100 ] ; xx [ 859 ] = xx [ 761 ] *
xx [ 108 ] ; xx [ 860 ] = xx [ 854 ] * xx [ 127 ] ; pm_math_Vector3_cross_ra
( xx + 855 , xx + 858 , xx + 861 ) ; xx [ 858 ] = 3.290524933036545e-11 ; xx
[ 859 ] = 0.01673590256851844 ; xx [ 860 ] = 0.1971461327241312 ; xx [ 864 ]
= 6.437320495472446e-12 ; xx [ 865 ] = 0.09289991027792205 ; xx [ 866 ] = xx
[ 865 ] * input [ 15 ] ; xx [ 867 ] = 0.9956754524795487 ; xx [ 868 ] =
2.076280636928651e-10 ; xx [ 869 ] = xx [ 868 ] * input [ 15 ] ; xx [ 870 ] =
xx [ 12 ] * ( xx [ 864 ] * xx [ 866 ] + xx [ 867 ] * xx [ 869 ] ) ; xx [ 871
] = input [ 15 ] - ( xx [ 868 ] * xx [ 869 ] + xx [ 865 ] * xx [ 866 ] ) * xx
[ 12 ] ; xx [ 872 ] = ( xx [ 864 ] * xx [ 869 ] - xx [ 867 ] * xx [ 866 ] ) *
xx [ 12 ] ; pm_math_Vector3_cross_ra ( xx + 858 , xx + 870 , xx + 873 ) ; xx
[ 876 ] = - 0.01750679316316092 ; xx [ 877 ] = - 0.01290536032774895 ; xx [
878 ] = - 0.05164023244740774 ; xx [ 866 ] = 0.6253013331666792 ; xx [ 869 ]
= 0.2647300941138785 ; xx [ 879 ] = xx [ 869 ] * input [ 16 ] ; xx [ 880 ] =
0.2862028927871909 ; xx [ 881 ] = 0.6760208015813378 ; xx [ 882 ] = xx [ 881
] * input [ 16 ] ; xx [ 883 ] = ( xx [ 866 ] * xx [ 879 ] + xx [ 880 ] * xx [
882 ] ) * xx [ 12 ] ; xx [ 884 ] = xx [ 12 ] * ( xx [ 866 ] * xx [ 882 ] - xx
[ 880 ] * xx [ 879 ] ) ; xx [ 866 ] = input [ 16 ] - ( xx [ 881 ] * xx [ 882
] + xx [ 869 ] * xx [ 879 ] ) * xx [ 12 ] ; xx [ 879 ] = - xx [ 883 ] ; xx [
880 ] = xx [ 884 ] ; xx [ 881 ] = xx [ 866 ] ; pm_math_Vector3_cross_ra ( xx
+ 876 , xx + 879 , xx + 885 ) ; xx [ 876 ] = - 0.04082091629087376 ; xx [ 877
] = - 0.05961285214677275 ; xx [ 878 ] = - 0.05914702069254961 ; xx [ 869 ] =
0.6043991865730609 ; xx [ 879 ] = 0.3996382353334624 ; xx [ 880 ] = xx [ 879
] * input [ 17 ] ; xx [ 881 ] = 0.3801248530735284 ; xx [ 882 ] =
0.5748878153215694 ; xx [ 888 ] = xx [ 882 ] * input [ 17 ] ; xx [ 889 ] = (
xx [ 869 ] * xx [ 880 ] + xx [ 881 ] * xx [ 888 ] ) * xx [ 12 ] ; xx [ 890 ]
= xx [ 12 ] * ( xx [ 869 ] * xx [ 888 ] - xx [ 881 ] * xx [ 880 ] ) ; xx [
869 ] = input [ 17 ] - ( xx [ 882 ] * xx [ 888 ] + xx [ 879 ] * xx [ 880 ] )
* xx [ 12 ] ; xx [ 879 ] = - xx [ 889 ] ; xx [ 880 ] = xx [ 890 ] ; xx [ 881
] = xx [ 869 ] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 879 , xx + 891 )
; xx [ 876 ] = - 0.01611172203639097 ; xx [ 877 ] = 0.08940775463405408 ; xx
[ 878 ] = - 0.01738863530728779 ; xx [ 879 ] = 0.3738445815915403 ; xx [ 880
] = 0.05232566424469441 ; xx [ 881 ] = xx [ 880 ] * input [ 18 ] ; xx [ 882 ]
= 0.1283596099714154 ; xx [ 888 ] = 0.9170747320714838 ; xx [ 894 ] = xx [
888 ] * input [ 18 ] ; xx [ 895 ] = ( xx [ 879 ] * xx [ 881 ] + xx [ 882 ] *
xx [ 894 ] ) * xx [ 12 ] ; xx [ 896 ] = xx [ 12 ] * ( xx [ 882 ] * xx [ 881 ]
- xx [ 879 ] * xx [ 894 ] ) ; xx [ 879 ] = input [ 18 ] - ( xx [ 888 ] * xx [
894 ] + xx [ 880 ] * xx [ 881 ] ) * xx [ 12 ] ; xx [ 880 ] = xx [ 895 ] ; xx
[ 881 ] = xx [ 896 ] ; xx [ 882 ] = xx [ 879 ] ; pm_math_Vector3_cross_ra (
xx + 876 , xx + 880 , xx + 897 ) ; xx [ 876 ] = - 0.07813551322207424 ; xx [
877 ] = - 0.07488185776988014 ; xx [ 878 ] = - 0.08063127020363367 ; xx [ 880
] = 0.6719839501447126 ; xx [ 881 ] = 0.2032749862656283 ; xx [ 882 ] = xx [
881 ] * input [ 19 ] ; xx [ 888 ] = 0.2061892296031095 ; xx [ 894 ] =
0.6816178198244918 ; xx [ 900 ] = xx [ 894 ] * input [ 19 ] ; xx [ 901 ] = (
xx [ 880 ] * xx [ 882 ] + xx [ 888 ] * xx [ 900 ] ) * xx [ 12 ] ; xx [ 902 ]
= xx [ 12 ] * ( xx [ 880 ] * xx [ 900 ] - xx [ 888 ] * xx [ 882 ] ) ; xx [
880 ] = input [ 19 ] - ( xx [ 894 ] * xx [ 900 ] + xx [ 881 ] * xx [ 882 ] )
* xx [ 12 ] ; xx [ 903 ] = xx [ 901 ] ; xx [ 904 ] = xx [ 902 ] ; xx [ 905 ]
= xx [ 880 ] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 903 , xx + 906 ) ;
xx [ 876 ] = - 0.06541920003687404 ; xx [ 877 ] = - 0.06341232834231626 ; xx
[ 878 ] = - 0.03664426853416502 ; xx [ 881 ] = 0.3952613334176077 ; xx [ 882
] = 0.06996261369131997 ; xx [ 888 ] = xx [ 882 ] * input [ 20 ] ; xx [ 894 ]
= 0.15963610203949 ; xx [ 900 ] = 0.9018813812891651 ; xx [ 903 ] = xx [ 900
] * input [ 20 ] ; xx [ 904 ] = ( xx [ 881 ] * xx [ 888 ] + xx [ 894 ] * xx [
903 ] ) * xx [ 12 ] ; xx [ 905 ] = xx [ 12 ] * ( xx [ 881 ] * xx [ 903 ] - xx
[ 894 ] * xx [ 888 ] ) ; xx [ 881 ] = input [ 20 ] - ( xx [ 900 ] * xx [ 903
] + xx [ 882 ] * xx [ 888 ] ) * xx [ 12 ] ; xx [ 909 ] = xx [ 904 ] ; xx [
910 ] = xx [ 905 ] ; xx [ 911 ] = xx [ 881 ] ; pm_math_Vector3_cross_ra ( xx
+ 876 , xx + 909 , xx + 912 ) ; xx [ 876 ] = - 0.05343540310242927 ; xx [ 877
] = - 0.02914440309254185 ; xx [ 878 ] = - 0.01230147865112343 ; xx [ 882 ] =
0.1816444983963195 ; xx [ 888 ] = 5.97993263104886e-3 ; xx [ 894 ] = xx [ 888
] * input [ 21 ] ; xx [ 900 ] = 0.03235528515767411 ; xx [ 903 ] =
0.9828136405903428 ; xx [ 909 ] = xx [ 903 ] * input [ 21 ] ; xx [ 910 ] = (
xx [ 882 ] * xx [ 894 ] + xx [ 900 ] * xx [ 909 ] ) * xx [ 12 ] ; xx [ 911 ]
= xx [ 12 ] * ( xx [ 882 ] * xx [ 909 ] - xx [ 900 ] * xx [ 894 ] ) ; xx [
882 ] = input [ 21 ] - ( xx [ 903 ] * xx [ 909 ] + xx [ 888 ] * xx [ 894 ] )
* xx [ 12 ] ; xx [ 915 ] = - xx [ 910 ] ; xx [ 916 ] = xx [ 911 ] ; xx [ 917
] = xx [ 882 ] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 915 , xx + 918 )
; xx [ 876 ] = - 0.04174218435005596 ; xx [ 877 ] = 2.578507543879904e-3 ; xx
[ 878 ] = - 2.155619895922155e-3 ; xx [ 888 ] = 0.1177775862085695 ; xx [ 894
] = 1.357137734760766e-3 ; xx [ 900 ] = xx [ 894 ] * input [ 22 ] ; xx [ 903
] = 0.01144191508251483 ; xx [ 909 ] = 0.992973152176481 ; xx [ 915 ] = xx [
909 ] * input [ 22 ] ; xx [ 916 ] = ( xx [ 888 ] * xx [ 900 ] + xx [ 903 ] *
xx [ 915 ] ) * xx [ 12 ] ; xx [ 917 ] = xx [ 12 ] * ( xx [ 888 ] * xx [ 915 ]
- xx [ 903 ] * xx [ 900 ] ) ; xx [ 888 ] = input [ 22 ] - ( xx [ 909 ] * xx [
915 ] + xx [ 894 ] * xx [ 900 ] ) * xx [ 12 ] ; xx [ 921 ] = xx [ 916 ] ; xx
[ 922 ] = xx [ 917 ] ; xx [ 923 ] = xx [ 888 ] ; pm_math_Vector3_cross_ra (
xx + 876 , xx + 921 , xx + 924 ) ; xx [ 876 ] = - 0.0298702228373676 ; xx [
877 ] = 0.03388119678505078 ; xx [ 878 ] = - 2.6595320728453e-4 ; xx [ 894 ]
= 0.05529818018829774 ; xx [ 900 ] = 5.077945039952384e-3 ; xx [ 903 ] = xx [
900 ] * input [ 23 ] ; xx [ 909 ] = 0.09130259478335537 ; xx [ 915 ] =
0.9942736856257739 ; xx [ 921 ] = xx [ 915 ] * input [ 23 ] ; xx [ 922 ] = (
xx [ 894 ] * xx [ 903 ] + xx [ 909 ] * xx [ 921 ] ) * xx [ 12 ] ; xx [ 923 ]
= xx [ 12 ] * ( xx [ 909 ] * xx [ 903 ] - xx [ 894 ] * xx [ 921 ] ) ; xx [
894 ] = input [ 23 ] - ( xx [ 915 ] * xx [ 921 ] + xx [ 900 ] * xx [ 903 ] )
* xx [ 12 ] ; xx [ 927 ] = xx [ 922 ] ; xx [ 928 ] = xx [ 923 ] ; xx [ 929 ]
= xx [ 894 ] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 927 , xx + 930 ) ;
xx [ 876 ] = - 0.02974420424265709 ; xx [ 877 ] = 0.07584660877144452 ; xx [
878 ] = - 0.01081304937138132 ; xx [ 900 ] = 0.2347060105286138 ; xx [ 903 ]
= 0.02433684704752729 ; xx [ 909 ] = xx [ 903 ] * input [ 24 ] ; xx [ 915 ] =
0.1002253606239855 ; xx [ 921 ] = 0.9665793726256111 ; xx [ 927 ] = xx [ 921
] * input [ 24 ] ; xx [ 928 ] = ( xx [ 900 ] * xx [ 909 ] + xx [ 915 ] * xx [
927 ] ) * xx [ 12 ] ; xx [ 929 ] = xx [ 12 ] * ( xx [ 915 ] * xx [ 909 ] - xx
[ 900 ] * xx [ 927 ] ) ; xx [ 900 ] = input [ 24 ] - ( xx [ 921 ] * xx [ 927
] + xx [ 903 ] * xx [ 909 ] ) * xx [ 12 ] ; xx [ 933 ] = xx [ 928 ] ; xx [
934 ] = xx [ 929 ] ; xx [ 935 ] = xx [ 900 ] ; pm_math_Vector3_cross_ra ( xx
+ 876 , xx + 933 , xx + 936 ) ; xx [ 876 ] = - 0.08960460485429393 ; xx [ 877
] = - 0.06291809277694642 ; xx [ 878 ] = - 0.1158139126272258 ; xx [ 903 ] =
0.7040109547062257 ; xx [ 909 ] = 0.2872839190275042 ; xx [ 915 ] = xx [ 909
] * input [ 25 ] ; xx [ 921 ] = 0.2453906898907255 ; xx [ 927 ] =
0.6013484304766922 ; xx [ 933 ] = xx [ 927 ] * input [ 25 ] ; xx [ 934 ] = (
xx [ 903 ] * xx [ 915 ] + xx [ 921 ] * xx [ 933 ] ) * xx [ 12 ] ; xx [ 935 ]
= xx [ 12 ] * ( xx [ 903 ] * xx [ 933 ] - xx [ 921 ] * xx [ 915 ] ) ; xx [
903 ] = input [ 25 ] - ( xx [ 927 ] * xx [ 933 ] + xx [ 909 ] * xx [ 915 ] )
* xx [ 12 ] ; xx [ 939 ] = xx [ 934 ] ; xx [ 940 ] = xx [ 935 ] ; xx [ 941 ]
= xx [ 903 ] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 939 , xx + 942 ) ;
xx [ 876 ] = - 0.08896801860071794 ; xx [ 877 ] = - 0.06299677374886863 ; xx
[ 878 ] = - 0.05389307116019502 ; xx [ 909 ] = 0.5606844803157269 ; xx [ 915
] = 0.2326195333517636 ; xx [ 921 ] = xx [ 915 ] * input [ 26 ] ; xx [ 927 ]
= 0.3045325852124455 ; xx [ 933 ] = 0.7340170098711037 ; xx [ 939 ] = xx [
933 ] * input [ 26 ] ; xx [ 940 ] = ( xx [ 909 ] * xx [ 921 ] + xx [ 927 ] *
xx [ 939 ] ) * xx [ 12 ] ; xx [ 941 ] = xx [ 12 ] * ( xx [ 909 ] * xx [ 939 ]
- xx [ 927 ] * xx [ 921 ] ) ; xx [ 909 ] = input [ 26 ] - ( xx [ 933 ] * xx [
939 ] + xx [ 915 ] * xx [ 921 ] ) * xx [ 12 ] ; xx [ 945 ] = xx [ 940 ] ; xx
[ 946 ] = xx [ 941 ] ; xx [ 947 ] = xx [ 909 ] ; pm_math_Vector3_cross_ra (
xx + 876 , xx + 945 , xx + 948 ) ; xx [ 876 ] = - 0.07773176654997652 ; xx [
877 ] = - 0.04357084081088054 ; xx [ 878 ] = - 0.02434982318954793 ; xx [ 915
] = 0.2749898426753138 ; xx [ 921 ] = 0.03833910159182111 ; xx [ 927 ] = xx [
921 ] * input [ 27 ] ; xx [ 933 ] = 0.1326553343289313 ; xx [ 939 ] =
0.9514795121223674 ; xx [ 945 ] = xx [ 939 ] * input [ 27 ] ; xx [ 946 ] = (
xx [ 915 ] * xx [ 927 ] + xx [ 933 ] * xx [ 945 ] ) * xx [ 12 ] ; xx [ 947 ]
= xx [ 12 ] * ( xx [ 915 ] * xx [ 945 ] - xx [ 933 ] * xx [ 927 ] ) ; xx [
915 ] = input [ 27 ] - ( xx [ 939 ] * xx [ 945 ] + xx [ 921 ] * xx [ 927 ] )
* xx [ 12 ] ; xx [ 951 ] = xx [ 946 ] ; xx [ 952 ] = xx [ 947 ] ; xx [ 953 ]
= xx [ 915 ] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 951 , xx + 954 ) ;
xx [ 876 ] = - 0.03035817942245689 ; xx [ 877 ] = - 0.03213171883326053 ; xx
[ 878 ] = - 0.03537286040648836 ; xx [ 921 ] = 0.4891666736071779 ; xx [ 927
] = 0.3404924332321762 ; xx [ 933 ] = xx [ 927 ] * input [ 28 ] ; xx [ 939 ]
= 0.4587386818313518 ; xx [ 945 ] = 0.6590445281886155 ; xx [ 951 ] = xx [
945 ] * input [ 28 ] ; xx [ 952 ] = ( xx [ 921 ] * xx [ 933 ] + xx [ 939 ] *
xx [ 951 ] ) * xx [ 12 ] ; xx [ 953 ] = xx [ 12 ] * ( xx [ 921 ] * xx [ 951 ]
- xx [ 939 ] * xx [ 933 ] ) ; xx [ 921 ] = input [ 28 ] - ( xx [ 945 ] * xx [
951 ] + xx [ 927 ] * xx [ 933 ] ) * xx [ 12 ] ; xx [ 957 ] = - xx [ 952 ] ;
xx [ 958 ] = xx [ 953 ] ; xx [ 959 ] = xx [ 921 ] ; pm_math_Vector3_cross_ra
( xx + 876 , xx + 957 , xx + 960 ) ; xx [ 876 ] = - 0.06547974787437513 ; xx
[ 877 ] = - 5.296907315530508e-3 ; xx [ 878 ] = - 6.867139918208744e-3 ; xx [
927 ] = 0.08330673857160131 ; xx [ 933 ] = 0.01332357166802973 ; xx [ 939 ] =
xx [ 933 ] * input [ 29 ] ; xx [ 945 ] = 0.1573638297661972 ; xx [ 951 ] =
0.9839304319045555 ; xx [ 957 ] = xx [ 951 ] * input [ 29 ] ; xx [ 958 ] = (
xx [ 927 ] * xx [ 939 ] + xx [ 945 ] * xx [ 957 ] ) * xx [ 12 ] ; xx [ 959 ]
= xx [ 12 ] * ( xx [ 927 ] * xx [ 957 ] - xx [ 945 ] * xx [ 939 ] ) ; xx [
927 ] = input [ 29 ] - ( xx [ 951 ] * xx [ 957 ] + xx [ 933 ] * xx [ 939 ] )
* xx [ 12 ] ; xx [ 963 ] = xx [ 958 ] ; xx [ 964 ] = xx [ 959 ] ; xx [ 965 ]
= xx [ 927 ] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 963 , xx + 966 ) ;
xx [ 876 ] = - 0.05341786692824899 ; xx [ 877 ] = 0.02810056500516415 ; xx [
878 ] = - 3.330290106866822e-3 ; xx [ 933 ] = 0.05921261819000172 ; xx [ 939
] = 4.064864382457281e-3 ; xx [ 945 ] = xx [ 939 ] * input [ 30 ] ; xx [ 951
] = 0.06836669742036049 ; xx [ 957 ] = 0.9958932359487489 ; xx [ 963 ] = xx [
957 ] * input [ 30 ] ; xx [ 964 ] = ( xx [ 933 ] * xx [ 945 ] + xx [ 951 ] *
xx [ 963 ] ) * xx [ 12 ] ; xx [ 965 ] = xx [ 12 ] * ( xx [ 951 ] * xx [ 945 ]
- xx [ 933 ] * xx [ 963 ] ) ; xx [ 933 ] = input [ 30 ] - ( xx [ 957 ] * xx [
963 ] + xx [ 939 ] * xx [ 945 ] ) * xx [ 12 ] ; xx [ 969 ] = xx [ 964 ] ; xx
[ 970 ] = xx [ 965 ] ; xx [ 971 ] = xx [ 933 ] ; pm_math_Vector3_cross_ra (
xx + 876 , xx + 969 , xx + 972 ) ; xx [ 876 ] = - 0.04168227632510423 ; xx [
877 ] = 0.05293569742340269 ; xx [ 878 ] = - 5.452647462001437e-3 ; xx [ 939
] = 0.09627478574816675 ; xx [ 945 ] = 8.967548559563873e-3 ; xx [ 951 ] = xx
[ 945 ] * input [ 31 ] ; xx [ 957 ] = 0.09230933376714978 ; xx [ 963 ] =
0.9910245887975947 ; xx [ 969 ] = xx [ 963 ] * input [ 31 ] ; xx [ 970 ] = (
xx [ 939 ] * xx [ 951 ] + xx [ 957 ] * xx [ 969 ] ) * xx [ 12 ] ; xx [ 971 ]
= xx [ 12 ] * ( xx [ 957 ] * xx [ 951 ] - xx [ 939 ] * xx [ 969 ] ) ; xx [
939 ] = input [ 31 ] - ( xx [ 963 ] * xx [ 969 ] + xx [ 945 ] * xx [ 951 ] )
* xx [ 12 ] ; xx [ 975 ] = xx [ 970 ] ; xx [ 976 ] = xx [ 971 ] ; xx [ 977 ]
= xx [ 939 ] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 975 , xx + 978 ) ;
xx [ 876 ] = - 0.1008247640510678 ; xx [ 877 ] = - 0.05389196638887112 ; xx [
878 ] = - 0.08618641347308455 ; xx [ 945 ] = 0.661172783054223 ; xx [ 951 ] =
0.3060055400884168 ; xx [ 957 ] = xx [ 951 ] * input [ 32 ] ; xx [ 963 ] =
0.2877084151115709 ; xx [ 969 ] = 0.6216389854710833 ; xx [ 975 ] = xx [ 969
] * input [ 32 ] ; xx [ 976 ] = ( xx [ 945 ] * xx [ 957 ] + xx [ 963 ] * xx [
975 ] ) * xx [ 12 ] ; xx [ 977 ] = xx [ 12 ] * ( xx [ 945 ] * xx [ 975 ] - xx
[ 963 ] * xx [ 957 ] ) ; xx [ 945 ] = input [ 32 ] - ( xx [ 969 ] * xx [ 975
] + xx [ 951 ] * xx [ 957 ] ) * xx [ 12 ] ; xx [ 981 ] = xx [ 976 ] ; xx [
982 ] = xx [ 977 ] ; xx [ 983 ] = xx [ 945 ] ; pm_math_Vector3_cross_ra ( xx
+ 876 , xx + 981 , xx + 984 ) ; xx [ 876 ] = - 0.1004655964981073 ; xx [ 877
] = - 0.03582136460888253 ; xx [ 878 ] = - 0.03586499238265095 ; xx [ 951 ] =
0.2631242048848931 ; xx [ 957 ] = 0.1314352705630057 ; xx [ 963 ] = xx [ 957
] * input [ 33 ] ; xx [ 969 ] = 0.4271022177782172 ; xx [ 975 ] =
0.8550287235085443 ; xx [ 981 ] = xx [ 975 ] * input [ 33 ] ; xx [ 982 ] = (
xx [ 951 ] * xx [ 963 ] + xx [ 969 ] * xx [ 981 ] ) * xx [ 12 ] ; xx [ 983 ]
= xx [ 12 ] * ( xx [ 951 ] * xx [ 981 ] - xx [ 969 ] * xx [ 963 ] ) ; xx [
951 ] = input [ 33 ] - ( xx [ 975 ] * xx [ 981 ] + xx [ 957 ] * xx [ 963 ] )
* xx [ 12 ] ; xx [ 987 ] = xx [ 982 ] ; xx [ 988 ] = xx [ 983 ] ; xx [ 989 ]
= xx [ 951 ] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 987 , xx + 990 ) ;
xx [ 876 ] = - 0.08913241730412479 ; xx [ 877 ] = - 0.01002385799363545 ; xx
[ 878 ] = - 0.01767933169316634 ; xx [ 957 ] = 0.06280224623279192 ; xx [ 963
] = 0.02051569230480004 ; xx [ 969 ] = xx [ 963 ] * input [ 34 ] ; xx [ 975 ]
= 0.3098441770463061 ; xx [ 981 ] = 0.9484890986130882 ; xx [ 987 ] = xx [
981 ] * input [ 34 ] ; xx [ 988 ] = ( xx [ 957 ] * xx [ 969 ] + xx [ 975 ] *
xx [ 987 ] ) * xx [ 12 ] ; xx [ 989 ] = xx [ 12 ] * ( xx [ 957 ] * xx [ 987 ]
- xx [ 975 ] * xx [ 969 ] ) ; xx [ 957 ] = input [ 34 ] - ( xx [ 981 ] * xx [
987 ] + xx [ 963 ] * xx [ 969 ] ) * xx [ 12 ] ; xx [ 993 ] = xx [ 988 ] ; xx
[ 994 ] = xx [ 989 ] ; xx [ 995 ] = xx [ 957 ] ; pm_math_Vector3_cross_ra (
xx + 876 , xx + 993 , xx + 996 ) ; xx [ 876 ] = - 0.07763897849411783 ; xx [
877 ] = 0.02926835419972364 ; xx [ 878 ] = - 0.01269421207333463 ; xx [ 963 ]
= 0.1126124065964388 ; xx [ 969 ] = 0.02994703367582809 ; xx [ 975 ] = xx [
969 ] * input [ 35 ] ; xx [ 981 ] = 0.255247291818142 ; xx [ 987 ] =
0.9598283393784962 ; xx [ 993 ] = xx [ 987 ] * input [ 35 ] ; xx [ 994 ] = (
xx [ 963 ] * xx [ 975 ] + xx [ 981 ] * xx [ 993 ] ) * xx [ 12 ] ; xx [ 995 ]
= xx [ 12 ] * ( xx [ 981 ] * xx [ 975 ] - xx [ 963 ] * xx [ 993 ] ) ; xx [
963 ] = input [ 35 ] - ( xx [ 987 ] * xx [ 993 ] + xx [ 969 ] * xx [ 975 ] )
* xx [ 12 ] ; xx [ 999 ] = xx [ 994 ] ; xx [ 1000 ] = xx [ 995 ] ; xx [ 1001
] = xx [ 963 ] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 999 , xx + 1002 )
; xx [ 876 ] = - 0.0650908352898615 ; xx [ 877 ] = 0.05673454466592224 ; xx [
878 ] = - 0.01754534783938935 ; xx [ 969 ] = 0.2624187067767951 ; xx [ 975 ]
= 0.07539763865837239 ; xx [ 981 ] = xx [ 975 ] * input [ 36 ] ; xx [ 987 ] =
0.2656534715216997 ; xx [ 993 ] = 0.9245971292875649 ; xx [ 999 ] = xx [ 993
] * input [ 36 ] ; xx [ 1000 ] = ( xx [ 969 ] * xx [ 981 ] + xx [ 987 ] * xx
[ 999 ] ) * xx [ 12 ] ; xx [ 1001 ] = xx [ 12 ] * ( xx [ 987 ] * xx [ 981 ] -
xx [ 969 ] * xx [ 999 ] ) ; xx [ 969 ] = input [ 36 ] - ( xx [ 993 ] * xx [
999 ] + xx [ 975 ] * xx [ 981 ] ) * xx [ 12 ] ; xx [ 1005 ] = xx [ 1000 ] ;
xx [ 1006 ] = xx [ 1001 ] ; xx [ 1007 ] = xx [ 969 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1005 , xx + 1008 ) ; xx [ 876 ] =
- 0.05277755577526828 ; xx [ 877 ] = 0.07507634805077533 ; xx [ 878 ] = -
0.02557099641168105 ; xx [ 975 ] = 0.4218960054902527 ; xx [ 981 ] =
0.1353871726335023 ; xx [ 987 ] = xx [ 981 ] * input [ 37 ] ; xx [ 993 ] =
0.2739231083818127 ; xx [ 999 ] = 0.8536042436235428 ; xx [ 1005 ] = xx [ 999
] * input [ 37 ] ; xx [ 1006 ] = ( xx [ 975 ] * xx [ 987 ] + xx [ 993 ] * xx
[ 1005 ] ) * xx [ 12 ] ; xx [ 1007 ] = xx [ 12 ] * ( xx [ 993 ] * xx [ 987 ]
- xx [ 975 ] * xx [ 1005 ] ) ; xx [ 975 ] = input [ 37 ] - ( xx [ 999 ] * xx
[ 1005 ] + xx [ 981 ] * xx [ 987 ] ) * xx [ 12 ] ; xx [ 1011 ] = xx [ 1006 ]
; xx [ 1012 ] = xx [ 1007 ] ; xx [ 1013 ] = xx [ 975 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1011 , xx + 1014 ) ; xx [ 876 ] =
- 0.04146508584349638 ; xx [ 877 ] = 0.08823626900202458 ; xx [ 878 ] = -
0.03394340829250521 ; xx [ 981 ] = 0.5420216016703115 ; xx [ 987 ] =
0.1665270222508411 ; xx [ 993 ] = xx [ 987 ] * input [ 38 ] ; xx [ 999 ] =
0.2419081906541831 ; xx [ 1005 ] = 0.7873765055406705 ; xx [ 1011 ] = xx [
1005 ] * input [ 38 ] ; xx [ 1012 ] = ( xx [ 981 ] * xx [ 993 ] + xx [ 999 ]
* xx [ 1011 ] ) * xx [ 12 ] ; xx [ 1013 ] = xx [ 12 ] * ( xx [ 999 ] * xx [
993 ] - xx [ 981 ] * xx [ 1011 ] ) ; xx [ 981 ] = input [ 38 ] - ( xx [ 1005
] * xx [ 1011 ] + xx [ 987 ] * xx [ 993 ] ) * xx [ 12 ] ; xx [ 1017 ] = xx [
1012 ] ; xx [ 1018 ] = xx [ 1013 ] ; xx [ 1019 ] = xx [ 981 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1017 , xx + 1020 ) ; xx [ 876 ] =
- 0.01725167774610059 ; xx [ 877 ] = - 7.293875250063496e-3 ; xx [ 878 ] = -
0.0148852216814814 ; xx [ 987 ] = 0.6632024936583343 ; xx [ 993 ] =
0.1731754394844267 ; xx [ 999 ] = xx [ 993 ] * input [ 39 ] ; xx [ 1005 ] =
0.1839610466043279 ; xx [ 1011 ] = 0.7045076670249825 ; xx [ 1017 ] = xx [
1011 ] * input [ 39 ] ; xx [ 1018 ] = ( xx [ 987 ] * xx [ 999 ] + xx [ 1005 ]
* xx [ 1017 ] ) * xx [ 12 ] ; xx [ 1019 ] = xx [ 12 ] * ( xx [ 987 ] * xx [
1017 ] - xx [ 1005 ] * xx [ 999 ] ) ; xx [ 987 ] = input [ 39 ] - ( xx [ 1011
] * xx [ 1017 ] + xx [ 993 ] * xx [ 999 ] ) * xx [ 12 ] ; xx [ 1023 ] = - xx
[ 1018 ] ; xx [ 1024 ] = xx [ 1019 ] ; xx [ 1025 ] = xx [ 987 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1023 , xx + 1026 ) ; xx [ 876 ] =
- 0.1088176366578311 ; xx [ 877 ] = - 0.03672198862995138 ; xx [ 878 ] = -
0.1164296265327258 ; xx [ 993 ] = 0.6776280350405145 ; xx [ 999 ] =
0.427089070547183 ; xx [ 1005 ] = xx [ 999 ] * input [ 40 ] ; xx [ 1011 ] =
0.3192159680645557 ; xx [ 1017 ] = 0.5064744195701136 ; xx [ 1023 ] = xx [
1017 ] * input [ 40 ] ; xx [ 1024 ] = ( xx [ 993 ] * xx [ 1005 ] + xx [ 1011
] * xx [ 1023 ] ) * xx [ 12 ] ; xx [ 1025 ] = xx [ 12 ] * ( xx [ 993 ] * xx [
1023 ] - xx [ 1011 ] * xx [ 1005 ] ) ; xx [ 993 ] = input [ 40 ] - ( xx [
1017 ] * xx [ 1023 ] + xx [ 999 ] * xx [ 1005 ] ) * xx [ 12 ] ; xx [ 1029 ] =
xx [ 1024 ] ; xx [ 1030 ] = xx [ 1025 ] ; xx [ 1031 ] = xx [ 993 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1029 , xx + 1032 ) ; xx [ 876 ] =
- 0.1090246450527187 ; xx [ 877 ] = - 0.0393561065615584 ; xx [ 878 ] = -
0.06805735492308039 ; xx [ 999 ] = 0.5197036589200118 ; xx [ 1005 ] =
0.3653225989192338 ; xx [ 1011 ] = xx [ 1005 ] * input [ 41 ] ; xx [ 1017 ] =
0.4441325812467261 ; xx [ 1023 ] = 0.6318178185989765 ; xx [ 1029 ] = xx [
1023 ] * input [ 41 ] ; xx [ 1030 ] = ( xx [ 999 ] * xx [ 1011 ] + xx [ 1017
] * xx [ 1029 ] ) * xx [ 12 ] ; xx [ 1031 ] = xx [ 12 ] * ( xx [ 999 ] * xx [
1029 ] - xx [ 1017 ] * xx [ 1011 ] ) ; xx [ 999 ] = input [ 41 ] - ( xx [
1023 ] * xx [ 1029 ] + xx [ 1005 ] * xx [ 1011 ] ) * xx [ 12 ] ; xx [ 1035 ]
= xx [ 1030 ] ; xx [ 1036 ] = xx [ 1031 ] ; xx [ 1037 ] = xx [ 999 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1035 , xx + 1038 ) ; xx [ 876 ] =
- 0.1085660128406191 ; xx [ 877 ] = - 8.240157635229641e-3 ; xx [ 878 ] = -
0.0383302197705869 ; xx [ 1005 ] = 0.02566070414415076 ; xx [ 1011 ] =
0.01743713672443727 ; xx [ 1017 ] = xx [ 1011 ] * input [ 42 ] ; xx [ 1023 ]
= 0.5617718096747571 ; xx [ 1029 ] = 0.8267102928961441 ; xx [ 1035 ] = xx [
1029 ] * input [ 42 ] ; xx [ 1036 ] = ( xx [ 1005 ] * xx [ 1017 ] + xx [ 1023
] * xx [ 1035 ] ) * xx [ 12 ] ; xx [ 1037 ] = xx [ 12 ] * ( xx [ 1005 ] * xx
[ 1035 ] - xx [ 1023 ] * xx [ 1017 ] ) ; xx [ 1005 ] = input [ 42 ] - ( xx [
1029 ] * xx [ 1035 ] + xx [ 1011 ] * xx [ 1017 ] ) * xx [ 12 ] ; xx [ 1041 ]
= xx [ 1036 ] ; xx [ 1042 ] = xx [ 1037 ] ; xx [ 1043 ] = xx [ 1005 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1041 , xx + 1044 ) ; xx [ 876 ] =
- 0.1002889443706825 ; xx [ 877 ] = 0.0215172771559628 ; xx [ 878 ] = -
0.03134160901195143 ; xx [ 1011 ] = 0.1937497476864955 ; xx [ 1017 ] =
0.1060397759083277 ; xx [ 1023 ] = xx [ 1017 ] * input [ 43 ] ; xx [ 1029 ] =
0.4682442847113035 ; xx [ 1035 ] = 0.8555488829002882 ; xx [ 1041 ] = xx [
1035 ] * input [ 43 ] ; xx [ 1042 ] = ( xx [ 1011 ] * xx [ 1023 ] + xx [ 1029
] * xx [ 1041 ] ) * xx [ 12 ] ; xx [ 1043 ] = xx [ 12 ] * ( xx [ 1029 ] * xx
[ 1023 ] - xx [ 1011 ] * xx [ 1041 ] ) ; xx [ 1011 ] = input [ 43 ] - ( xx [
1035 ] * xx [ 1041 ] + xx [ 1017 ] * xx [ 1023 ] ) * xx [ 12 ] ; xx [ 1047 ]
= xx [ 1042 ] ; xx [ 1048 ] = xx [ 1043 ] ; xx [ 1049 ] = xx [ 1011 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1047 , xx + 1050 ) ; xx [ 876 ] =
- 0.08825404787879754 ; xx [ 877 ] = 0.05085694606056507 ; xx [ 878 ] = -
0.04022128746621207 ; xx [ 1017 ] = 0.4329293027057527 ; xx [ 1023 ] =
0.2388834572967249 ; xx [ 1029 ] = xx [ 1023 ] * input [ 44 ] ; xx [ 1035 ] =
0.4199252650269746 ; xx [ 1041 ] = 0.7610319865029983 ; xx [ 1047 ] = xx [
1041 ] * input [ 44 ] ; xx [ 1048 ] = ( xx [ 1017 ] * xx [ 1029 ] + xx [ 1035
] * xx [ 1047 ] ) * xx [ 12 ] ; xx [ 1049 ] = xx [ 12 ] * ( xx [ 1035 ] * xx
[ 1029 ] - xx [ 1017 ] * xx [ 1047 ] ) ; xx [ 1017 ] = input [ 44 ] - ( xx [
1041 ] * xx [ 1047 ] + xx [ 1023 ] * xx [ 1029 ] ) * xx [ 12 ] ; xx [ 1053 ]
= xx [ 1048 ] ; xx [ 1054 ] = xx [ 1049 ] ; xx [ 1055 ] = xx [ 1017 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1053 , xx + 1056 ) ; xx [ 876 ] =
- 0.07778373213920264 ; xx [ 877 ] = 0.06920777240521035 ; xx [ 878 ] = -
0.05836215232293852 ; xx [ 1023 ] = 0.6395227562463073 ; xx [ 1029 ] =
0.2517984334672473 ; xx [ 1035 ] = xx [ 1029 ] * input [ 45 ] ; xx [ 1041 ] =
0.2661078040580403 ; xx [ 1047 ] = 0.6758659850635882 ; xx [ 1053 ] = xx [
1047 ] * input [ 45 ] ; xx [ 1054 ] = ( xx [ 1023 ] * xx [ 1035 ] + xx [ 1041
] * xx [ 1053 ] ) * xx [ 12 ] ; xx [ 1055 ] = xx [ 12 ] * ( xx [ 1041 ] * xx
[ 1035 ] - xx [ 1023 ] * xx [ 1053 ] ) ; xx [ 1023 ] = input [ 45 ] - ( xx [
1047 ] * xx [ 1053 ] + xx [ 1029 ] * xx [ 1035 ] ) * xx [ 12 ] ; xx [ 1059 ]
= xx [ 1054 ] ; xx [ 1060 ] = xx [ 1055 ] ; xx [ 1061 ] = xx [ 1023 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1059 , xx + 1062 ) ; xx [ 876 ] =
- 0.0602032403376731 ; xx [ 877 ] = 0.08203106316879522 ; xx [ 878 ] = -
0.0748733734520845 ; xx [ 1029 ] = 0.6940948608111935 ; xx [ 1035 ] =
0.2053956680732152 ; xx [ 1041 ] = xx [ 1035 ] * input [ 46 ] ; xx [ 1047 ] =
0.1957799622059196 ; xx [ 1053 ] = 0.6616004459875284 ; xx [ 1059 ] = xx [
1053 ] * input [ 46 ] ; xx [ 1060 ] = ( xx [ 1029 ] * xx [ 1041 ] + xx [ 1047
] * xx [ 1059 ] ) * xx [ 12 ] ; xx [ 1061 ] = xx [ 12 ] * ( xx [ 1047 ] * xx
[ 1041 ] - xx [ 1029 ] * xx [ 1059 ] ) ; xx [ 1029 ] = input [ 46 ] - ( xx [
1053 ] * xx [ 1059 ] + xx [ 1035 ] * xx [ 1041 ] ) * xx [ 12 ] ; xx [ 1065 ]
= xx [ 1060 ] ; xx [ 1066 ] = xx [ 1061 ] ; xx [ 1067 ] = xx [ 1029 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1065 , xx + 1068 ) ; xx [ 876 ] =
- 0.1143978971912872 ; xx [ 877 ] = - 0.01074410159992742 ; xx [ 878 ] = -
0.1239980564908309 ; xx [ 1035 ] = 0.6377272327882759 ; xx [ 1041 ] =
0.6305933820461086 ; xx [ 1047 ] = xx [ 1041 ] * input [ 47 ] ; xx [ 1053 ] =
0.3199249703720028 ; xx [ 1059 ] = 0.3054569960114387 ; xx [ 1065 ] = xx [
1059 ] * input [ 47 ] ; xx [ 1066 ] = ( xx [ 1035 ] * xx [ 1047 ] + xx [ 1053
] * xx [ 1065 ] ) * xx [ 12 ] ; xx [ 1067 ] = xx [ 12 ] * ( xx [ 1035 ] * xx
[ 1065 ] - xx [ 1053 ] * xx [ 1047 ] ) ; xx [ 1035 ] = input [ 47 ] - ( xx [
1059 ] * xx [ 1065 ] + xx [ 1041 ] * xx [ 1047 ] ) * xx [ 12 ] ; xx [ 1071 ]
= xx [ 1066 ] ; xx [ 1072 ] = xx [ 1067 ] ; xx [ 1073 ] = xx [ 1035 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1071 , xx + 1074 ) ; xx [ 876 ] =
- 0.1151109708215916 ; xx [ 877 ] = - 0.01075804635765636 ; xx [ 878 ] = -
0.08461401534740115 ; xx [ 1041 ] = 0.4666321198618352 ; xx [ 1047 ] =
0.4902460693848289 ; xx [ 1053 ] = xx [ 1047 ] * input [ 48 ] ; xx [ 1059 ] =
0.5095672592114674 ; xx [ 1065 ] = 0.53127626006221 ; xx [ 1071 ] = xx [ 1065
] * input [ 48 ] ; xx [ 1072 ] = ( xx [ 1041 ] * xx [ 1053 ] + xx [ 1059 ] *
xx [ 1071 ] ) * xx [ 12 ] ; xx [ 1073 ] = xx [ 12 ] * ( xx [ 1041 ] * xx [
1071 ] - xx [ 1059 ] * xx [ 1053 ] ) ; xx [ 1041 ] = input [ 48 ] - ( xx [
1065 ] * xx [ 1071 ] + xx [ 1047 ] * xx [ 1053 ] ) * xx [ 12 ] ; xx [ 1077 ]
= xx [ 1072 ] ; xx [ 1078 ] = xx [ 1073 ] ; xx [ 1079 ] = xx [ 1041 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1077 , xx + 1080 ) ; xx [ 876 ] =
- 0.1089181529967568 ; xx [ 877 ] = 0.02522537869168801 ; xx [ 878 ] = -
0.06782609012651207 ; xx [ 1047 ] = 0.5150379189616971 ; xx [ 1053 ] =
0.4000839555183756 ; xx [ 1059 ] = xx [ 1053 ] * input [ 49 ] ; xx [ 1065 ] =
0.4650464120507912 ; xx [ 1071 ] = 0.598665687347338 ; xx [ 1077 ] = xx [
1071 ] * input [ 49 ] ; xx [ 1078 ] = ( xx [ 1047 ] * xx [ 1059 ] + xx [ 1065
] * xx [ 1077 ] ) * xx [ 12 ] ; xx [ 1079 ] = xx [ 12 ] * ( xx [ 1065 ] * xx
[ 1059 ] - xx [ 1047 ] * xx [ 1077 ] ) ; xx [ 1047 ] = input [ 49 ] - ( xx [
1071 ] * xx [ 1077 ] + xx [ 1053 ] * xx [ 1059 ] ) * xx [ 12 ] ; xx [ 1083 ]
= xx [ 1078 ] ; xx [ 1084 ] = xx [ 1079 ] ; xx [ 1085 ] = xx [ 1047 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1083 , xx + 1086 ) ; xx [ 876 ] =
- 0.06588460407050081 ; xx [ 877 ] = - 0.07959463952718712 ; xx [ 878 ] = -
0.09123943252004506 ; xx [ 1053 ] = 0.7220158820274279 ; xx [ 1059 ] =
0.05371025093528867 ; xx [ 1065 ] = xx [ 1059 ] * input [ 50 ] ; xx [ 1071 ]
= 0.05117149400750862 ; xx [ 1077 ] = 0.6878878929343526 ; xx [ 1083 ] = xx [
1077 ] * input [ 50 ] ; xx [ 1084 ] = ( xx [ 1053 ] * xx [ 1065 ] + xx [ 1071
] * xx [ 1083 ] ) * xx [ 12 ] ; xx [ 1085 ] = xx [ 12 ] * ( xx [ 1053 ] * xx
[ 1083 ] - xx [ 1071 ] * xx [ 1065 ] ) ; xx [ 1053 ] = input [ 50 ] - ( xx [
1077 ] * xx [ 1083 ] + xx [ 1059 ] * xx [ 1065 ] ) * xx [ 12 ] ; xx [ 1089 ]
= xx [ 1084 ] ; xx [ 1090 ] = xx [ 1085 ] ; xx [ 1091 ] = xx [ 1053 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1089 , xx + 1092 ) ; xx [ 876 ] =
- 0.1090036909983146 ; xx [ 877 ] = 0.01817465773016072 ; xx [ 878 ] = -
0.1239039825644493 ; xx [ 1059 ] = 0.6677460747179526 ; xx [ 1065 ] =
0.4544566948802226 ; xx [ 1071 ] = xx [ 1065 ] * input [ 51 ] ; xx [ 1077 ] =
0.3317113808219959 ; xx [ 1083 ] = 0.4873929133773655 ; xx [ 1089 ] = xx [
1083 ] * input [ 51 ] ; xx [ 1090 ] = ( xx [ 1059 ] * xx [ 1071 ] + xx [ 1077
] * xx [ 1089 ] ) * xx [ 12 ] ; xx [ 1091 ] = xx [ 12 ] * ( xx [ 1077 ] * xx
[ 1071 ] - xx [ 1059 ] * xx [ 1089 ] ) ; xx [ 1059 ] = input [ 51 ] - ( xx [
1083 ] * xx [ 1089 ] + xx [ 1065 ] * xx [ 1071 ] ) * xx [ 12 ] ; xx [ 1095 ]
= xx [ 1090 ] ; xx [ 1096 ] = xx [ 1091 ] ; xx [ 1097 ] = xx [ 1059 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1095 , xx + 1098 ) ; xx [ 876 ] =
- 0.1009356428263194 ; xx [ 877 ] = 0.04283189637270055 ; xx [ 878 ] = -
0.08674853388306464 ; xx [ 1065 ] = 0.6771997737581915 ; xx [ 1071 ] =
0.3636835401886195 ; xx [ 1077 ] = xx [ 1071 ] * input [ 52 ] ; xx [ 1083 ] =
0.3026304367073079 ; xx [ 1089 ] = 0.5635153660691705 ; xx [ 1095 ] = xx [
1089 ] * input [ 52 ] ; xx [ 1096 ] = ( xx [ 1065 ] * xx [ 1077 ] + xx [ 1083
] * xx [ 1095 ] ) * xx [ 12 ] ; xx [ 1097 ] = xx [ 12 ] * ( xx [ 1083 ] * xx
[ 1077 ] - xx [ 1065 ] * xx [ 1095 ] ) ; xx [ 1065 ] = input [ 52 ] - ( xx [
1089 ] * xx [ 1095 ] + xx [ 1071 ] * xx [ 1077 ] ) * xx [ 12 ] ; xx [ 1101 ]
= xx [ 1096 ] ; xx [ 1102 ] = xx [ 1097 ] ; xx [ 1103 ] = xx [ 1065 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1101 , xx + 1104 ) ; xx [ 876 ] =
- 0.08364765664069315 ; xx [ 877 ] = 0.05885119021368576 ; xx [ 878 ] = -
0.1171046153075557 ; xx [ 1071 ] = 0.7067331897966952 ; xx [ 1077 ] =
0.3119482575694982 ; xx [ 1083 ] = xx [ 1077 ] * input [ 53 ] ; xx [ 1089 ] =
0.2564149206882397 ; xx [ 1095 ] = 0.580919849452217 ; xx [ 1101 ] = xx [
1095 ] * input [ 53 ] ; xx [ 1102 ] = ( xx [ 1071 ] * xx [ 1083 ] + xx [ 1089
] * xx [ 1101 ] ) * xx [ 12 ] ; xx [ 1103 ] = xx [ 12 ] * ( xx [ 1089 ] * xx
[ 1083 ] - xx [ 1071 ] * xx [ 1101 ] ) ; xx [ 1071 ] = input [ 53 ] - ( xx [
1095 ] * xx [ 1101 ] + xx [ 1077 ] * xx [ 1083 ] ) * xx [ 12 ] ; xx [ 1107 ]
= xx [ 1102 ] ; xx [ 1108 ] = xx [ 1103 ] ; xx [ 1109 ] = xx [ 1071 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1107 , xx + 1110 ) ; xx [ 876 ] =
7.346085301000095e-11 ; xx [ 877 ] = 0.08915795098142906 ; xx [ 878 ] = -
0.01101380984473742 ; xx [ 1077 ] = 0.1793252316684608 ; xx [ 1083 ] =
2.073990563595057e-10 ; xx [ 1089 ] = xx [ 1083 ] * input [ 54 ] ; xx [ 1095
] = 1.168303251267773e-11 ; xx [ 1101 ] = 0.9837898460987758 ; xx [ 1107 ] =
xx [ 1101 ] * input [ 54 ] ; xx [ 1108 ] = ( xx [ 1077 ] * xx [ 1089 ] + xx [
1095 ] * xx [ 1107 ] ) * xx [ 12 ] ; xx [ 1109 ] = xx [ 12 ] * ( xx [ 1095 ]
* xx [ 1089 ] - xx [ 1077 ] * xx [ 1107 ] ) ; xx [ 1077 ] = input [ 54 ] - (
xx [ 1101 ] * xx [ 1107 ] + xx [ 1083 ] * xx [ 1089 ] ) * xx [ 12 ] ; xx [
1113 ] = - xx [ 1108 ] ; xx [ 1114 ] = xx [ 1109 ] ; xx [ 1115 ] = xx [ 1077
] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 1113 , xx + 1116 ) ; xx [ 876
] = 5.209776461554911e-11 ; xx [ 877 ] = 0.03919438724272629 ; xx [ 878 ] =
3.868436680280641e-3 ; xx [ 1083 ] = 6.43744375539838e-12 ; xx [ 1089 ] = xx
[ 867 ] * input [ 55 ] ; xx [ 1095 ] = 2.076280837107586e-10 ; xx [ 1101 ] =
xx [ 1095 ] * input [ 55 ] ; xx [ 1107 ] = ( xx [ 1083 ] * xx [ 1089 ] - xx [
865 ] * xx [ 1101 ] ) * xx [ 12 ] ; xx [ 1113 ] = xx [ 12 ] * ( xx [ 1083 ] *
xx [ 1101 ] + xx [ 865 ] * xx [ 1089 ] ) ; xx [ 1083 ] = input [ 55 ] - ( xx
[ 867 ] * xx [ 1089 ] + xx [ 1095 ] * xx [ 1101 ] ) * xx [ 12 ] ; xx [ 1119 ]
= xx [ 1107 ] ; xx [ 1120 ] = - xx [ 1113 ] ; xx [ 1121 ] = xx [ 1083 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1119 , xx + 1122 ) ; xx [ 876 ] =
0.01750679323010461 ; xx [ 877 ] = - 0.0129053603421838 ; xx [ 878 ] = -
0.05164023244560817 ; xx [ 1089 ] = 0.6253013330622943 ; xx [ 1095 ] =
0.2647300943604388 ; xx [ 1101 ] = xx [ 1095 ] * input [ 56 ] ; xx [ 1114 ] =
0.2862028930797249 ; xx [ 1115 ] = 0.6760208014574897 ; xx [ 1119 ] = xx [
1115 ] * input [ 56 ] ; xx [ 1120 ] = ( xx [ 1089 ] * xx [ 1101 ] + xx [ 1114
] * xx [ 1119 ] ) * xx [ 12 ] ; xx [ 1121 ] = xx [ 12 ] * ( xx [ 1089 ] * xx
[ 1119 ] - xx [ 1114 ] * xx [ 1101 ] ) ; xx [ 1089 ] = input [ 56 ] - ( xx [
1115 ] * xx [ 1119 ] + xx [ 1095 ] * xx [ 1101 ] ) * xx [ 12 ] ; xx [ 1125 ]
= xx [ 1120 ] ; xx [ 1126 ] = xx [ 1121 ] ; xx [ 1127 ] = xx [ 1089 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1125 , xx + 1128 ) ; xx [ 876 ] =
0.04082091632007744 ; xx [ 877 ] = - 0.05961285218043077 ; xx [ 878 ] = -
0.05914702068835351 ; xx [ 1095 ] = 0.6043991864368889 ; xx [ 1101 ] =
0.3996382355394038 ; xx [ 1114 ] = xx [ 1101 ] * input [ 57 ] ; xx [ 1115 ] =
0.3801248533522478 ; xx [ 1119 ] = 0.574887815137276 ; xx [ 1125 ] = xx [
1119 ] * input [ 57 ] ; xx [ 1126 ] = ( xx [ 1095 ] * xx [ 1114 ] + xx [ 1115
] * xx [ 1125 ] ) * xx [ 12 ] ; xx [ 1127 ] = xx [ 12 ] * ( xx [ 1095 ] * xx
[ 1125 ] - xx [ 1115 ] * xx [ 1114 ] ) ; xx [ 1095 ] = input [ 57 ] - ( xx [
1119 ] * xx [ 1125 ] + xx [ 1101 ] * xx [ 1114 ] ) * xx [ 12 ] ; xx [ 1131 ]
= xx [ 1126 ] ; xx [ 1132 ] = xx [ 1127 ] ; xx [ 1133 ] = xx [ 1095 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1131 , xx + 1134 ) ; xx [ 876 ] =
0.03035817947187572 ; xx [ 877 ] = - 0.0321317188582917 ; xx [ 878 ] = -
0.03537286040336775 ; xx [ 1101 ] = 0.4891666734355569 ; xx [ 1114 ] =
0.3404924334787352 ; xx [ 1115 ] = xx [ 1114 ] * input [ 58 ] ; xx [ 1119 ] =
0.45873868206689 ; xx [ 1125 ] = 0.6590445280246652 ; xx [ 1131 ] = xx [ 1125
] * input [ 58 ] ; xx [ 1132 ] = ( xx [ 1101 ] * xx [ 1115 ] + xx [ 1119 ] *
xx [ 1131 ] ) * xx [ 12 ] ; xx [ 1133 ] = xx [ 12 ] * ( xx [ 1101 ] * xx [
1131 ] - xx [ 1119 ] * xx [ 1115 ] ) ; xx [ 1101 ] = input [ 58 ] - ( xx [
1125 ] * xx [ 1131 ] + xx [ 1114 ] * xx [ 1115 ] ) * xx [ 12 ] ; xx [ 1137 ]
= xx [ 1132 ] ; xx [ 1138 ] = xx [ 1133 ] ; xx [ 1139 ] = xx [ 1101 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1137 , xx + 1140 ) ; xx [ 876 ] =
0.01725167781389296 ; xx [ 877 ] = - 7.293875264287998e-3 ; xx [ 878 ] = -
0.01488522167970806 ; xx [ 1114 ] = 0.6632024935913943 ; xx [ 1115 ] =
0.1731754397407833 ; xx [ 1119 ] = xx [ 1115 ] * input [ 59 ] ; xx [ 1125 ] =
0.1839610469139512 ; xx [ 1131 ] = 0.7045076669441338 ; xx [ 1137 ] = xx [
1131 ] * input [ 59 ] ; xx [ 1138 ] = ( xx [ 1114 ] * xx [ 1119 ] + xx [ 1125
] * xx [ 1137 ] ) * xx [ 12 ] ; xx [ 1139 ] = xx [ 12 ] * ( xx [ 1114 ] * xx
[ 1137 ] - xx [ 1125 ] * xx [ 1119 ] ) ; xx [ 1114 ] = input [ 59 ] - ( xx [
1131 ] * xx [ 1137 ] + xx [ 1115 ] * xx [ 1119 ] ) * xx [ 12 ] ; xx [ 1143 ]
= xx [ 1138 ] ; xx [ 1144 ] = xx [ 1139 ] ; xx [ 1145 ] = xx [ 1114 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1143 , xx + 1146 ) ; xx [ 876 ] =
0.06588460408652783 ; xx [ 877 ] = - 0.07959463958151086 ; xx [ 878 ] = -
0.09123943251327259 ; xx [ 1115 ] = 0.7220158820457636 ; xx [ 1119 ] =
0.05371025068880647 ; xx [ 1125 ] = xx [ 1119 ] * input [ 60 ] ; xx [ 1131 ]
= 0.0511714936744926 ; xx [ 1137 ] = 0.6878878929591253 ; xx [ 1143 ] = xx [
1137 ] * input [ 60 ] ; xx [ 1144 ] = ( xx [ 1115 ] * xx [ 1125 ] + xx [ 1131
] * xx [ 1143 ] ) * xx [ 12 ] ; xx [ 1145 ] = xx [ 12 ] * ( xx [ 1115 ] * xx
[ 1143 ] - xx [ 1131 ] * xx [ 1125 ] ) ; xx [ 1115 ] = input [ 60 ] - ( xx [
1137 ] * xx [ 1143 ] + xx [ 1119 ] * xx [ 1125 ] ) * xx [ 12 ] ; xx [ 1149 ]
= - xx [ 1144 ] ; xx [ 1150 ] = xx [ 1145 ] ; xx [ 1151 ] = xx [ 1115 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1149 , xx + 1152 ) ; xx [ 876 ] =
- 0.05368324839120633 ; xx [ 877 ] = - 0.07164184646856597 ; xx [ 878 ] = -
0.04830567954615582 ; xx [ 1119 ] = 0.5405475385081842 ; xx [ 1125 ] =
0.03748965768333729 ; xx [ 1131 ] = xx [ 1125 ] * input [ 61 ] ; xx [ 1137 ]
= 0.05815161963514951 ; xx [ 1143 ] = 0.8384636386351757 ; xx [ 1149 ] = xx [
1143 ] * input [ 61 ] ; xx [ 1150 ] = ( xx [ 1119 ] * xx [ 1131 ] + xx [ 1137
] * xx [ 1149 ] ) * xx [ 12 ] ; xx [ 1151 ] = xx [ 12 ] * ( xx [ 1119 ] * xx
[ 1149 ] - xx [ 1137 ] * xx [ 1131 ] ) ; xx [ 1119 ] = input [ 61 ] - ( xx [
1143 ] * xx [ 1149 ] + xx [ 1125 ] * xx [ 1131 ] ) * xx [ 12 ] ; xx [ 1155 ]
= - xx [ 1150 ] ; xx [ 1156 ] = xx [ 1151 ] ; xx [ 1157 ] = xx [ 1119 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1155 , xx + 1158 ) ; xx [ 876 ] =
0.05368324840937735 ; xx [ 877 ] = - 0.07164184651282934 ; xx [ 878 ] = -
0.04830567954063756 ; xx [ 1125 ] = 0.5405475384861372 ; xx [ 1131 ] =
0.03748965800122345 ; xx [ 1137 ] = xx [ 1131 ] * input [ 62 ] ; xx [ 1143 ]
= 0.05815161990109163 ; xx [ 1149 ] = 0.8384636386167313 ; xx [ 1155 ] = xx [
1149 ] * input [ 62 ] ; xx [ 1156 ] = ( xx [ 1125 ] * xx [ 1137 ] + xx [ 1143
] * xx [ 1155 ] ) * xx [ 12 ] ; xx [ 1157 ] = xx [ 12 ] * ( xx [ 1125 ] * xx
[ 1155 ] - xx [ 1143 ] * xx [ 1137 ] ) ; xx [ 1125 ] = input [ 62 ] - ( xx [
1149 ] * xx [ 1155 ] + xx [ 1131 ] * xx [ 1137 ] ) * xx [ 12 ] ; xx [ 1161 ]
= xx [ 1156 ] ; xx [ 1162 ] = xx [ 1157 ] ; xx [ 1163 ] = xx [ 1125 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1161 , xx + 1164 ) ; xx [ 876 ] =
0.04170028917640188 ; xx [ 877 ] = - 0.04154840885049218 ; xx [ 878 ] = -
0.02148789347075055 ; xx [ 1131 ] = 0.2331544634603246 ; xx [ 1137 ] =
0.06113194106485485 ; xx [ 1143 ] = xx [ 1137 ] * input [ 63 ] ; xx [ 1149 ]
= 0.2461444141007786 ; xx [ 1155 ] = 0.9387836861370974 ; xx [ 1161 ] = xx [
1155 ] * input [ 63 ] ; xx [ 1162 ] = ( xx [ 1131 ] * xx [ 1143 ] + xx [ 1149
] * xx [ 1161 ] ) * xx [ 12 ] ; xx [ 1163 ] = xx [ 12 ] * ( xx [ 1131 ] * xx
[ 1161 ] - xx [ 1149 ] * xx [ 1143 ] ) ; xx [ 1131 ] = input [ 63 ] - ( xx [
1155 ] * xx [ 1161 ] + xx [ 1137 ] * xx [ 1143 ] ) * xx [ 12 ] ; xx [ 1167 ]
= xx [ 1162 ] ; xx [ 1168 ] = xx [ 1163 ] ; xx [ 1169 ] = xx [ 1131 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1167 , xx + 1170 ) ; xx [ 876 ] =
0.02981875547221127 ; xx [ 877 ] = - 6.485610562903104e-3 ; xx [ 878 ] = -
5.280536037984701e-3 ; xx [ 1137 ] = 0.2640102090543709 ; xx [ 1143 ] =
8.799363107773798e-3 ; xx [ 1149 ] = xx [ 1143 ] * input [ 64 ] ; xx [ 1155 ]
= 0.0321279156914788 ; xx [ 1161 ] = 0.9639444889397347 ; xx [ 1167 ] = xx [
1161 ] * input [ 64 ] ; xx [ 1168 ] = ( xx [ 1137 ] * xx [ 1149 ] + xx [ 1155
] * xx [ 1167 ] ) * xx [ 12 ] ; xx [ 1169 ] = xx [ 12 ] * ( xx [ 1137 ] * xx
[ 1167 ] - xx [ 1155 ] * xx [ 1149 ] ) ; xx [ 1137 ] = input [ 64 ] - ( xx [
1161 ] * xx [ 1167 ] + xx [ 1143 ] * xx [ 1149 ] ) * xx [ 12 ] ; xx [ 1173 ]
= - xx [ 1168 ] ; xx [ 1174 ] = xx [ 1169 ] ; xx [ 1175 ] = xx [ 1137 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1173 , xx + 1176 ) ; xx [ 876 ] =
0.01621445187265931 ; xx [ 877 ] = 0.02064735427402701 ; xx [ 878 ] =
3.272323513626888e-3 ; xx [ 1143 ] = 0.02715056723764842 ; xx [ 1149 ] =
3.291295194283892e-3 ; xx [ 1155 ] = xx [ 1149 ] * input [ 65 ] ; xx [ 1161 ]
= 0.1202977796697935 ; xx [ 1167 ] = 0.992361052380199 ; xx [ 1173 ] = xx [
1167 ] * input [ 65 ] ; xx [ 1174 ] = ( xx [ 1143 ] * xx [ 1155 ] + xx [ 1161
] * xx [ 1173 ] ) * xx [ 12 ] ; xx [ 1175 ] = xx [ 12 ] * ( xx [ 1161 ] * xx
[ 1155 ] - xx [ 1143 ] * xx [ 1173 ] ) ; xx [ 1143 ] = input [ 65 ] - ( xx [
1167 ] * xx [ 1173 ] + xx [ 1149 ] * xx [ 1155 ] ) * xx [ 12 ] ; xx [ 1179 ]
= - xx [ 1174 ] ; xx [ 1180 ] = xx [ 1175 ] ; xx [ 1181 ] = xx [ 1143 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1179 , xx + 1182 ) ; xx [ 876 ] =
0.01629907193013071 ; xx [ 877 ] = 0.05877878017211896 ; xx [ 878 ] = -
2.234518483059734e-3 ; xx [ 1149 ] = 0.1201225500255419 ; xx [ 1155 ] =
8.250560390230657e-3 ; xx [ 1161 ] = xx [ 1155 ] * input [ 66 ] ; xx [ 1167 ]
= 0.06802456318766753 ; xx [ 1173 ] = 0.9903914175878825 ; xx [ 1179 ] = xx [
1173 ] * input [ 66 ] ; xx [ 1180 ] = ( xx [ 1149 ] * xx [ 1161 ] + xx [ 1167
] * xx [ 1179 ] ) * xx [ 12 ] ; xx [ 1181 ] = xx [ 12 ] * ( xx [ 1167 ] * xx
[ 1161 ] - xx [ 1149 ] * xx [ 1179 ] ) ; xx [ 1149 ] = input [ 66 ] - ( xx [
1173 ] * xx [ 1179 ] + xx [ 1155 ] * xx [ 1161 ] ) * xx [ 12 ] ; xx [ 1185 ]
= - xx [ 1180 ] ; xx [ 1186 ] = xx [ 1181 ] ; xx [ 1187 ] = xx [ 1149 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1185 , xx + 1188 ) ; xx [ 876 ] =
0.01611171862314275 ; xx [ 877 ] = 0.08940775514076232 ; xx [ 878 ] = -
0.01738863438419946 ; xx [ 1155 ] = 0.3738445815359331 ; xx [ 1161 ] =
0.05232566464198572 ; xx [ 1167 ] = xx [ 1161 ] * input [ 67 ] ; xx [ 1173 ]
= 0.1283596100784034 ; xx [ 1179 ] = 0.9170747320565092 ; xx [ 1185 ] = xx [
1179 ] * input [ 67 ] ; xx [ 1186 ] = ( xx [ 1155 ] * xx [ 1167 ] + xx [ 1173
] * xx [ 1185 ] ) * xx [ 12 ] ; xx [ 1187 ] = xx [ 12 ] * ( xx [ 1173 ] * xx
[ 1167 ] - xx [ 1155 ] * xx [ 1185 ] ) ; xx [ 1155 ] = input [ 67 ] - ( xx [
1179 ] * xx [ 1185 ] + xx [ 1161 ] * xx [ 1167 ] ) * xx [ 12 ] ; xx [ 1191 ]
= - xx [ 1186 ] ; xx [ 1192 ] = xx [ 1187 ] ; xx [ 1193 ] = xx [ 1155 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1191 , xx + 1194 ) ; xx [ 876 ] =
0.07813551324089663 ; xx [ 877 ] = - 0.07488185783430511 ; xx [ 878 ] = -
0.0806312701956019 ; xx [ 1161 ] = 0.6719839502192693 ; xx [ 1167 ] =
0.2032749860191597 ; xx [ 1173 ] = xx [ 1167 ] * input [ 68 ] ; xx [ 1179 ] =
0.2061892292910423 ; xx [ 1185 ] = 0.6816178199188923 ; xx [ 1191 ] = xx [
1185 ] * input [ 68 ] ; xx [ 1192 ] = ( xx [ 1161 ] * xx [ 1173 ] + xx [ 1179
] * xx [ 1191 ] ) * xx [ 12 ] ; xx [ 1193 ] = xx [ 12 ] * ( xx [ 1161 ] * xx
[ 1191 ] - xx [ 1179 ] * xx [ 1173 ] ) ; xx [ 1161 ] = input [ 68 ] - ( xx [
1185 ] * xx [ 1191 ] + xx [ 1167 ] * xx [ 1173 ] ) * xx [ 12 ] ; xx [ 1197 ]
= - xx [ 1192 ] ; xx [ 1198 ] = xx [ 1193 ] ; xx [ 1199 ] = xx [ 1161 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1197 , xx + 1200 ) ; xx [ 876 ] =
0.06541920006063182 ; xx [ 877 ] = - 0.06341232839625627 ; xx [ 878 ] = -
0.03664426852744039 ; xx [ 1167 ] = 0.3952613334798241 ; xx [ 1173 ] =
0.06996261333982168 ; xx [ 1179 ] = xx [ 1173 ] * input [ 69 ] ; xx [ 1185 ]
= 0.1596361018301848 ; xx [ 1191 ] = 0.9018813813262124 ; xx [ 1197 ] = xx [
1191 ] * input [ 69 ] ; xx [ 1198 ] = ( xx [ 1167 ] * xx [ 1179 ] + xx [ 1185
] * xx [ 1197 ] ) * xx [ 12 ] ; xx [ 1199 ] = xx [ 12 ] * ( xx [ 1167 ] * xx
[ 1197 ] - xx [ 1185 ] * xx [ 1179 ] ) ; xx [ 1167 ] = input [ 69 ] - ( xx [
1191 ] * xx [ 1197 ] + xx [ 1173 ] * xx [ 1179 ] ) * xx [ 12 ] ; xx [ 1203 ]
= - xx [ 1198 ] ; xx [ 1204 ] = xx [ 1199 ] ; xx [ 1205 ] = xx [ 1167 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1203 , xx + 1206 ) ; xx [ 876 ] =
0.05343540315193968 ; xx [ 877 ] = - 0.02914440313660086 ; xx [ 878 ] = -
0.01230147864563064 ; xx [ 1173 ] = 0.1816444983832879 ; xx [ 1179 ] =
5.979933026891875e-3 ; xx [ 1185 ] = xx [ 1179 ] * input [ 70 ] ; xx [ 1191 ]
= 0.03235528528307241 ; xx [ 1197 ] = 0.9828136405862146 ; xx [ 1203 ] = xx [
1197 ] * input [ 70 ] ; xx [ 1204 ] = ( xx [ 1173 ] * xx [ 1185 ] + xx [ 1191
] * xx [ 1203 ] ) * xx [ 12 ] ; xx [ 1205 ] = xx [ 12 ] * ( xx [ 1173 ] * xx
[ 1203 ] - xx [ 1191 ] * xx [ 1185 ] ) ; xx [ 1173 ] = input [ 70 ] - ( xx [
1197 ] * xx [ 1203 ] + xx [ 1179 ] * xx [ 1185 ] ) * xx [ 12 ] ; xx [ 1209 ]
= xx [ 1204 ] ; xx [ 1210 ] = xx [ 1205 ] ; xx [ 1211 ] = xx [ 1173 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1209 , xx + 1212 ) ; xx [ 876 ] =
0.04174218103265672 ; xx [ 877 ] = 2.57851019372676e-3 ; xx [ 878 ] = -
2.155619169886894e-3 ; xx [ 1179 ] = 0.1177775862132168 ; xx [ 1185 ] =
1.357137331446776e-3 ; xx [ 1191 ] = xx [ 1185 ] * input [ 71 ] ; xx [ 1197 ]
= 0.01144191498292432 ; xx [ 1203 ] = 0.9929731521776285 ; xx [ 1209 ] = xx [
1203 ] * input [ 71 ] ; xx [ 1210 ] = ( xx [ 1179 ] * xx [ 1191 ] + xx [ 1197
] * xx [ 1209 ] ) * xx [ 12 ] ; xx [ 1211 ] = xx [ 12 ] * ( xx [ 1179 ] * xx
[ 1209 ] - xx [ 1197 ] * xx [ 1191 ] ) ; xx [ 1179 ] = input [ 71 ] - ( xx [
1203 ] * xx [ 1209 ] + xx [ 1185 ] * xx [ 1191 ] ) * xx [ 12 ] ; xx [ 1215 ]
= - xx [ 1210 ] ; xx [ 1216 ] = xx [ 1211 ] ; xx [ 1217 ] = xx [ 1179 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1215 , xx + 1218 ) ; xx [ 876 ] =
- 0.04170028913617464 ; xx [ 877 ] = - 0.04154840881610911 ; xx [ 878 ] = -
0.02148789347503706 ; xx [ 1185 ] = 0.2331544635586586 ; xx [ 1191 ] =
0.0611319406898112 ; xx [ 1197 ] = xx [ 1191 ] * input [ 72 ] ; xx [ 1203 ] =
0.2461444139564077 ; xx [ 1209 ] = 0.9387836861749506 ; xx [ 1215 ] = xx [
1209 ] * input [ 72 ] ; xx [ 1216 ] = ( xx [ 1185 ] * xx [ 1197 ] + xx [ 1203
] * xx [ 1215 ] ) * xx [ 12 ] ; xx [ 1217 ] = xx [ 12 ] * ( xx [ 1185 ] * xx
[ 1215 ] - xx [ 1203 ] * xx [ 1197 ] ) ; xx [ 1185 ] = input [ 72 ] - ( xx [
1209 ] * xx [ 1215 ] + xx [ 1191 ] * xx [ 1197 ] ) * xx [ 12 ] ; xx [ 1221 ]
= - xx [ 1216 ] ; xx [ 1222 ] = xx [ 1217 ] ; xx [ 1223 ] = xx [ 1185 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1221 , xx + 1224 ) ; xx [ 876 ] =
0.02987022293760724 ; xx [ 877 ] = 0.03388119676042192 ; xx [ 878 ] = -
2.659532042140794e-4 ; xx [ 1191 ] = 0.05529818015039611 ; xx [ 1197 ] =
5.07794545269807e-3 ; xx [ 1203 ] = xx [ 1197 ] * input [ 73 ] ; xx [ 1209 ]
= 0.09130259475505068 ; xx [ 1215 ] = 0.9942736856283731 ; xx [ 1221 ] = xx [
1215 ] * input [ 73 ] ; xx [ 1222 ] = ( xx [ 1191 ] * xx [ 1203 ] + xx [ 1209
] * xx [ 1221 ] ) * xx [ 12 ] ; xx [ 1223 ] = xx [ 12 ] * ( xx [ 1209 ] * xx
[ 1203 ] - xx [ 1191 ] * xx [ 1221 ] ) ; xx [ 1191 ] = input [ 73 ] - ( xx [
1215 ] * xx [ 1221 ] + xx [ 1197 ] * xx [ 1203 ] ) * xx [ 12 ] ; xx [ 1227 ]
= - xx [ 1222 ] ; xx [ 1228 ] = xx [ 1223 ] ; xx [ 1229 ] = xx [ 1191 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1227 , xx + 1230 ) ; xx [ 876 ] =
0.02974420973278944 ; xx [ 877 ] = 0.07584660884820256 ; xx [ 878 ] = -
0.01081305066545697 ; xx [ 1197 ] = 0.2347060104860436 ; xx [ 1203 ] =
0.02433684745807652 ; xx [ 1209 ] = xx [ 1203 ] * input [ 74 ] ; xx [ 1215 ]
= 0.1002253606710676 ; xx [ 1221 ] = 0.966579372620729 ; xx [ 1227 ] = xx [
1221 ] * input [ 74 ] ; xx [ 1228 ] = ( xx [ 1197 ] * xx [ 1209 ] + xx [ 1215
] * xx [ 1227 ] ) * xx [ 12 ] ; xx [ 1229 ] = xx [ 12 ] * ( xx [ 1215 ] * xx
[ 1209 ] - xx [ 1197 ] * xx [ 1227 ] ) ; xx [ 1197 ] = input [ 74 ] - ( xx [
1221 ] * xx [ 1227 ] + xx [ 1203 ] * xx [ 1209 ] ) * xx [ 12 ] ; xx [ 1233 ]
= - xx [ 1228 ] ; xx [ 1234 ] = xx [ 1229 ] ; xx [ 1235 ] = xx [ 1197 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1233 , xx + 1236 ) ; xx [ 876 ] =
0.08960460729423878 ; xx [ 877 ] = - 0.0629180904162949 ; xx [ 878 ] = -
0.1158139129040354 ; xx [ 1203 ] = 0.704010954792626 ; xx [ 1209 ] =
0.287283918815774 ; xx [ 1215 ] = xx [ 1209 ] * input [ 75 ] ; xx [ 1221 ] =
0.2453906895695802 ; xx [ 1227 ] = 0.6013484306077408 ; xx [ 1233 ] = xx [
1227 ] * input [ 75 ] ; xx [ 1234 ] = ( xx [ 1203 ] * xx [ 1215 ] + xx [ 1221
] * xx [ 1233 ] ) * xx [ 12 ] ; xx [ 1235 ] = xx [ 12 ] * ( xx [ 1203 ] * xx
[ 1233 ] - xx [ 1221 ] * xx [ 1215 ] ) ; xx [ 1203 ] = input [ 75 ] - ( xx [
1227 ] * xx [ 1233 ] + xx [ 1209 ] * xx [ 1215 ] ) * xx [ 12 ] ; xx [ 1239 ]
= - xx [ 1234 ] ; xx [ 1240 ] = xx [ 1235 ] ; xx [ 1241 ] = xx [ 1203 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1239 , xx + 1242 ) ; xx [ 876 ] =
0.08896801895652537 ; xx [ 877 ] = - 0.0629967735175615 ; xx [ 878 ] = -
0.0538930712922808 ; xx [ 1209 ] = 0.5606844804293186 ; xx [ 1215 ] =
0.2326195330779721 ; xx [ 1221 ] = xx [ 1215 ] * input [ 76 ] ; xx [ 1227 ] =
0.3045325849435699 ; xx [ 1233 ] = 0.7340170099826563 ; xx [ 1239 ] = xx [
1233 ] * input [ 76 ] ; xx [ 1240 ] = ( xx [ 1209 ] * xx [ 1221 ] + xx [ 1227
] * xx [ 1239 ] ) * xx [ 12 ] ; xx [ 1241 ] = xx [ 12 ] * ( xx [ 1209 ] * xx
[ 1239 ] - xx [ 1227 ] * xx [ 1221 ] ) ; xx [ 1209 ] = input [ 76 ] - ( xx [
1233 ] * xx [ 1239 ] + xx [ 1215 ] * xx [ 1221 ] ) * xx [ 12 ] ; xx [ 1245 ]
= - xx [ 1240 ] ; xx [ 1246 ] = xx [ 1241 ] ; xx [ 1247 ] = xx [ 1209 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1245 , xx + 1248 ) ; xx [ 876 ] =
0.07773176658883038 ; xx [ 877 ] = - 0.04357084087497261 ; xx [ 878 ] = -
0.02434982318155766 ; xx [ 1215 ] = 0.2749898427280319 ; xx [ 1221 ] =
0.03833910121369367 ; xx [ 1227 ] = xx [ 1221 ] * input [ 77 ] ; xx [ 1233 ]
= 0.1326553341666606 ; xx [ 1239 ] = 0.9514795121449912 ; xx [ 1245 ] = xx [
1239 ] * input [ 77 ] ; xx [ 1246 ] = ( xx [ 1215 ] * xx [ 1227 ] + xx [ 1233
] * xx [ 1245 ] ) * xx [ 12 ] ; xx [ 1247 ] = xx [ 12 ] * ( xx [ 1215 ] * xx
[ 1245 ] - xx [ 1233 ] * xx [ 1227 ] ) ; xx [ 1215 ] = input [ 77 ] - ( xx [
1239 ] * xx [ 1245 ] + xx [ 1221 ] * xx [ 1227 ] ) * xx [ 12 ] ; xx [ 1251 ]
= - xx [ 1246 ] ; xx [ 1252 ] = xx [ 1247 ] ; xx [ 1253 ] = xx [ 1215 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1251 , xx + 1254 ) ; xx [ 876 ] =
0.06547974794298986 ; xx [ 877 ] = - 5.296907369520426e-3 ; xx [ 878 ] = -
6.867139911477884e-3 ; xx [ 1221 ] = 0.08330673863579158 ; xx [ 1227 ] =
0.01332357126667194 ; xx [ 1233 ] = xx [ 1227 ] * input [ 78 ] ; xx [ 1239 ]
= 0.1573638296812823 ; xx [ 1245 ] = 0.9839304319181364 ; xx [ 1251 ] = xx [
1245 ] * input [ 78 ] ; xx [ 1252 ] = ( xx [ 1221 ] * xx [ 1233 ] + xx [ 1239
] * xx [ 1251 ] ) * xx [ 12 ] ; xx [ 1253 ] = xx [ 12 ] * ( xx [ 1221 ] * xx
[ 1251 ] - xx [ 1239 ] * xx [ 1233 ] ) ; xx [ 1221 ] = input [ 78 ] - ( xx [
1245 ] * xx [ 1251 ] + xx [ 1227 ] * xx [ 1233 ] ) * xx [ 12 ] ; xx [ 1257 ]
= - xx [ 1252 ] ; xx [ 1258 ] = xx [ 1253 ] ; xx [ 1259 ] = xx [ 1221 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1257 , xx + 1260 ) ; xx [ 876 ] =
0.05341786702403734 ; xx [ 877 ] = 0.02810056496111961 ; xx [ 878 ] = -
3.330290101375847e-3 ; xx [ 1227 ] = 0.05921261816160776 ; xx [ 1233 ] =
4.064864796071833e-3 ; xx [ 1239 ] = xx [ 1233 ] * input [ 79 ] ; xx [ 1245 ]
= 0.06836669739358632 ; xx [ 1251 ] = 0.9958932359505869 ; xx [ 1257 ] = xx [
1251 ] * input [ 79 ] ; xx [ 1258 ] = ( xx [ 1227 ] * xx [ 1239 ] + xx [ 1245
] * xx [ 1257 ] ) * xx [ 12 ] ; xx [ 1259 ] = xx [ 12 ] * ( xx [ 1245 ] * xx
[ 1239 ] - xx [ 1227 ] * xx [ 1257 ] ) ; xx [ 1227 ] = input [ 79 ] - ( xx [
1251 ] * xx [ 1257 ] + xx [ 1233 ] * xx [ 1239 ] ) * xx [ 12 ] ; xx [ 1263 ]
= - xx [ 1258 ] ; xx [ 1264 ] = xx [ 1259 ] ; xx [ 1265 ] = xx [ 1227 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1263 , xx + 1266 ) ; xx [ 876 ] =
0.04168227644158801 ; xx [ 877 ] = 0.05293569738903448 ; xx [ 878 ] = -
5.452647457716795e-3 ; xx [ 1233 ] = 0.09627478570965015 ; xx [ 1239 ] =
8.967548973076127e-3 ; xx [ 1245 ] = xx [ 1239 ] * input [ 80 ] ; xx [ 1251 ]
= 0.09230933375590525 ; xx [ 1257 ] = 0.9910245887986421 ; xx [ 1263 ] = xx [
1257 ] * input [ 80 ] ; xx [ 1264 ] = ( xx [ 1233 ] * xx [ 1245 ] + xx [ 1251
] * xx [ 1263 ] ) * xx [ 12 ] ; xx [ 1265 ] = xx [ 12 ] * ( xx [ 1251 ] * xx
[ 1245 ] - xx [ 1233 ] * xx [ 1263 ] ) ; xx [ 1233 ] = input [ 80 ] - ( xx [
1257 ] * xx [ 1263 ] + xx [ 1239 ] * xx [ 1245 ] ) * xx [ 12 ] ; xx [ 1269 ]
= - xx [ 1264 ] ; xx [ 1270 ] = xx [ 1265 ] ; xx [ 1271 ] = xx [ 1233 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1269 , xx + 1272 ) ; xx [ 876 ] =
0.100824764087768 ; xx [ 877 ] = - 0.05389196647200403 ; xx [ 878 ] = -
0.08618641346272046 ; xx [ 1239 ] = 0.6611727831571071 ; xx [ 1245 ] =
0.3060055398661197 ; xx [ 1251 ] = xx [ 1245 ] * input [ 81 ] ; xx [ 1257 ] =
0.2877084148070432 ; xx [ 1263 ] = 0.6216389856120255 ; xx [ 1269 ] = xx [
1263 ] * input [ 81 ] ; xx [ 1270 ] = ( xx [ 1239 ] * xx [ 1251 ] + xx [ 1257
] * xx [ 1269 ] ) * xx [ 12 ] ; xx [ 1271 ] = xx [ 12 ] * ( xx [ 1239 ] * xx
[ 1269 ] - xx [ 1257 ] * xx [ 1251 ] ) ; xx [ 1239 ] = input [ 81 ] - ( xx [
1263 ] * xx [ 1269 ] + xx [ 1245 ] * xx [ 1251 ] ) * xx [ 12 ] ; xx [ 1275 ]
= - xx [ 1270 ] ; xx [ 1276 ] = xx [ 1271 ] ; xx [ 1277 ] = xx [ 1239 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1275 , xx + 1278 ) ; xx [ 876 ] =
0.100465596542249 ; xx [ 877 ] = - 0.03582136469449106 ; xx [ 878 ] = -
0.03586499237016935 ; xx [ 1245 ] = 0.2631242050542163 ; xx [ 1251 ] =
0.1314352702240315 ; xx [ 1257 ] = xx [ 1251 ] * input [ 82 ] ; xx [ 1263 ] =
0.4271022176257958 ; xx [ 1269 ] = 0.8550287235846818 ; xx [ 1275 ] = xx [
1269 ] * input [ 82 ] ; xx [ 1276 ] = ( xx [ 1245 ] * xx [ 1257 ] + xx [ 1263
] * xx [ 1275 ] ) * xx [ 12 ] ; xx [ 1277 ] = xx [ 12 ] * ( xx [ 1245 ] * xx
[ 1275 ] - xx [ 1263 ] * xx [ 1257 ] ) ; xx [ 1245 ] = input [ 82 ] - ( xx [
1269 ] * xx [ 1275 ] + xx [ 1251 ] * xx [ 1257 ] ) * xx [ 12 ] ; xx [ 1281 ]
= - xx [ 1276 ] ; xx [ 1282 ] = xx [ 1277 ] ; xx [ 1283 ] = xx [ 1245 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1281 , xx + 1284 ) ; xx [ 876 ] =
- 0.02981875540473976 ; xx [ 877 ] = - 6.485610538316687e-3 ; xx [ 878 ] = -
5.280536041049861e-3 ; xx [ 1251 ] = 0.264010209041578 ; xx [ 1257 ] =
8.799363491604362e-3 ; xx [ 1263 ] = xx [ 1257 ] * input [ 83 ] ; xx [ 1269 ]
= 0.03212791584986363 ; xx [ 1275 ] = 0.9639444889344556 ; xx [ 1281 ] = xx [
1275 ] * input [ 83 ] ; xx [ 1282 ] = ( xx [ 1251 ] * xx [ 1263 ] + xx [ 1269
] * xx [ 1281 ] ) * xx [ 12 ] ; xx [ 1283 ] = xx [ 12 ] * ( xx [ 1251 ] * xx
[ 1281 ] - xx [ 1269 ] * xx [ 1263 ] ) ; xx [ 1251 ] = input [ 83 ] - ( xx [
1275 ] * xx [ 1281 ] + xx [ 1257 ] * xx [ 1263 ] ) * xx [ 12 ] ; xx [ 1287 ]
= xx [ 1282 ] ; xx [ 1288 ] = xx [ 1283 ] ; xx [ 1289 ] = xx [ 1251 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1287 , xx + 1290 ) ; xx [ 876 ] =
0.08913241736995343 ; xx [ 877 ] = - 0.01002385806712768 ; xx [ 878 ] = -
0.01767933168400414 ; xx [ 1257 ] = 0.06280224635947465 ; xx [ 1263 ] =
0.02051569191699949 ; xx [ 1269 ] = xx [ 1263 ] * input [ 84 ] ; xx [ 1275 ]
= 0.3098441769716661 ; xx [ 1281 ] = 0.9484890986374709 ; xx [ 1287 ] = xx [
1281 ] * input [ 84 ] ; xx [ 1288 ] = ( xx [ 1257 ] * xx [ 1269 ] + xx [ 1275
] * xx [ 1287 ] ) * xx [ 12 ] ; xx [ 1289 ] = xx [ 12 ] * ( xx [ 1257 ] * xx
[ 1287 ] - xx [ 1275 ] * xx [ 1269 ] ) ; xx [ 1257 ] = input [ 84 ] - ( xx [
1281 ] * xx [ 1287 ] + xx [ 1263 ] * xx [ 1269 ] ) * xx [ 12 ] ; xx [ 1293 ]
= - xx [ 1288 ] ; xx [ 1294 ] = xx [ 1289 ] ; xx [ 1295 ] = xx [ 1257 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1293 , xx + 1296 ) ; xx [ 876 ] =
0.07763897859183158 ; xx [ 877 ] = 0.02926835413570807 ; xx [ 878 ] = -
0.01269421206535389 ; xx [ 1263 ] = 0.1126124064896707 ; xx [ 1269 ] =
0.02994703407731902 ; xx [ 1275 ] = xx [ 1269 ] * input [ 85 ] ; xx [ 1281 ]
= 0.2552472918152362 ; xx [ 1287 ] = 0.9598283393792688 ; xx [ 1293 ] = xx [
1287 ] * input [ 85 ] ; xx [ 1294 ] = ( xx [ 1263 ] * xx [ 1275 ] + xx [ 1281
] * xx [ 1293 ] ) * xx [ 12 ] ; xx [ 1295 ] = xx [ 12 ] * ( xx [ 1281 ] * xx
[ 1275 ] - xx [ 1263 ] * xx [ 1293 ] ) ; xx [ 1263 ] = input [ 85 ] - ( xx [
1287 ] * xx [ 1293 ] + xx [ 1269 ] * xx [ 1275 ] ) * xx [ 12 ] ; xx [ 1299 ]
= - xx [ 1294 ] ; xx [ 1300 ] = xx [ 1295 ] ; xx [ 1301 ] = xx [ 1263 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1299 , xx + 1302 ) ; xx [ 876 ] =
0.06509083541072057 ; xx [ 877 ] = 0.05673454461225298 ; xx [ 878 ] = -
0.01754534783269847 ; xx [ 1269 ] = 0.2624187066634011 ; xx [ 1275 ] =
0.07539763905303828 ; xx [ 1281 ] = xx [ 1275 ] * input [ 86 ] ; xx [ 1287 ]
= 0.2656534715823643 ; xx [ 1293 ] = 0.9245971292701344 ; xx [ 1299 ] = xx [
1293 ] * input [ 86 ] ; xx [ 1300 ] = ( xx [ 1269 ] * xx [ 1281 ] + xx [ 1287
] * xx [ 1299 ] ) * xx [ 12 ] ; xx [ 1301 ] = xx [ 12 ] * ( xx [ 1287 ] * xx
[ 1281 ] - xx [ 1269 ] * xx [ 1299 ] ) ; xx [ 1269 ] = input [ 86 ] - ( xx [
1293 ] * xx [ 1299 ] + xx [ 1275 ] * xx [ 1281 ] ) * xx [ 12 ] ; xx [ 1305 ]
= - xx [ 1300 ] ; xx [ 1306 ] = xx [ 1301 ] ; xx [ 1307 ] = xx [ 1269 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1305 , xx + 1308 ) ; xx [ 876 ] =
0.05277755591207568 ; xx [ 877 ] = 0.07507634800725872 ; xx [ 878 ] = -
0.0255709964062559 ; xx [ 1275 ] = 0.421896005370366 ; xx [ 1281 ] =
0.1353871730070967 ; xx [ 1287 ] = xx [ 1281 ] * input [ 87 ] ; xx [ 1293 ] =
0.2739231085118727 ; xx [ 1299 ] = 0.8536042435818063 ; xx [ 1305 ] = xx [
1299 ] * input [ 87 ] ; xx [ 1306 ] = ( xx [ 1275 ] * xx [ 1287 ] + xx [ 1293
] * xx [ 1305 ] ) * xx [ 12 ] ; xx [ 1307 ] = xx [ 12 ] * ( xx [ 1293 ] * xx
[ 1287 ] - xx [ 1275 ] * xx [ 1305 ] ) ; xx [ 1275 ] = input [ 87 ] - ( xx [
1299 ] * xx [ 1305 ] + xx [ 1281 ] * xx [ 1287 ] ) * xx [ 12 ] ; xx [ 1311 ]
= - xx [ 1306 ] ; xx [ 1312 ] = xx [ 1307 ] ; xx [ 1313 ] = xx [ 1275 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1311 , xx + 1314 ) ; xx [ 876 ] =
0.04146508599201515 ; xx [ 877 ] = 0.08823626896783543 ; xx [ 878 ] = -
0.03394340828824289 ; xx [ 1281 ] = 0.5420216015620228 ; xx [ 1287 ] =
0.166527022603306 ; xx [ 1293 ] = xx [ 1287 ] * input [ 88 ] ; xx [ 1299 ] =
0.2419081908371703 ; xx [ 1305 ] = 0.7873765054844507 ; xx [ 1311 ] = xx [
1305 ] * input [ 88 ] ; xx [ 1312 ] = ( xx [ 1281 ] * xx [ 1293 ] + xx [ 1299
] * xx [ 1311 ] ) * xx [ 12 ] ; xx [ 1313 ] = xx [ 12 ] * ( xx [ 1299 ] * xx
[ 1293 ] - xx [ 1281 ] * xx [ 1311 ] ) ; xx [ 1281 ] = input [ 88 ] - ( xx [
1305 ] * xx [ 1311 ] + xx [ 1287 ] * xx [ 1293 ] ) * xx [ 12 ] ; xx [ 1317 ]
= - xx [ 1312 ] ; xx [ 1318 ] = xx [ 1313 ] ; xx [ 1319 ] = xx [ 1281 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1317 , xx + 1320 ) ; xx [ 876 ] =
0.1088176367117972 ; xx [ 877 ] = - 0.03672198871967463 ; xx [ 878 ] = -
0.1164296265215401 ; xx [ 1287 ] = 0.677628035150165 ; xx [ 1293 ] =
0.4270890703732098 ; xx [ 1299 ] = xx [ 1293 ] * input [ 89 ] ; xx [ 1305 ] =
0.319215967759163 ; xx [ 1311 ] = 0.506474419762593 ; xx [ 1317 ] = xx [ 1311
] * input [ 89 ] ; xx [ 1318 ] = ( xx [ 1287 ] * xx [ 1299 ] + xx [ 1305 ] *
xx [ 1317 ] ) * xx [ 12 ] ; xx [ 1319 ] = xx [ 12 ] * ( xx [ 1287 ] * xx [
1317 ] - xx [ 1305 ] * xx [ 1299 ] ) ; xx [ 1287 ] = input [ 89 ] - ( xx [
1311 ] * xx [ 1317 ] + xx [ 1293 ] * xx [ 1299 ] ) * xx [ 12 ] ; xx [ 1323 ]
= - xx [ 1318 ] ; xx [ 1324 ] = xx [ 1319 ] ; xx [ 1325 ] = xx [ 1287 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1323 , xx + 1326 ) ; xx [ 876 ] =
0.1090246450995406 ; xx [ 877 ] = - 0.03935610665145234 ; xx [ 878 ] = -
0.06805735491187342 ; xx [ 1293 ] = 0.519703659084335 ; xx [ 1299 ] =
0.3653225986854693 ; xx [ 1305 ] = xx [ 1299 ] * input [ 90 ] ; xx [ 1311 ] =
0.4441325809999982 ; xx [ 1317 ] = 0.6318178187724124 ; xx [ 1323 ] = xx [
1317 ] * input [ 90 ] ; xx [ 1324 ] = ( xx [ 1293 ] * xx [ 1305 ] + xx [ 1311
] * xx [ 1323 ] ) * xx [ 12 ] ; xx [ 1325 ] = xx [ 12 ] * ( xx [ 1293 ] * xx
[ 1323 ] - xx [ 1311 ] * xx [ 1305 ] ) ; xx [ 1293 ] = input [ 90 ] - ( xx [
1317 ] * xx [ 1323 ] + xx [ 1299 ] * xx [ 1305 ] ) * xx [ 12 ] ; xx [ 1329 ]
= - xx [ 1324 ] ; xx [ 1330 ] = xx [ 1325 ] ; xx [ 1331 ] = xx [ 1293 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1329 , xx + 1332 ) ; xx [ 876 ] =
0.1085660129100413 ; xx [ 877 ] = - 8.240157724745425e-3 ; xx [ 878 ] = -
0.03833021975942708 ; xx [ 1299 ] = 0.02566070437485158 ; xx [ 1305 ] =
0.01743713638493203 ; xx [ 1311 ] = xx [ 1305 ] * input [ 91 ] ; xx [ 1317 ]
= 0.5617718096216883 ; xx [ 1323 ] = 0.8267102929322058 ; xx [ 1329 ] = xx [
1323 ] * input [ 91 ] ; xx [ 1330 ] = ( xx [ 1299 ] * xx [ 1311 ] + xx [ 1317
] * xx [ 1329 ] ) * xx [ 12 ] ; xx [ 1331 ] = xx [ 12 ] * ( xx [ 1299 ] * xx
[ 1329 ] - xx [ 1317 ] * xx [ 1311 ] ) ; xx [ 1299 ] = input [ 91 ] - ( xx [
1323 ] * xx [ 1329 ] + xx [ 1305 ] * xx [ 1311 ] ) * xx [ 12 ] ; xx [ 1335 ]
= - xx [ 1330 ] ; xx [ 1336 ] = xx [ 1331 ] ; xx [ 1337 ] = xx [ 1299 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1335 , xx + 1338 ) ; xx [ 876 ] =
0.1002889441519224 ; xx [ 877 ] = 0.02151727728365404 ; xx [ 878 ] = -
0.03134160856156223 ; xx [ 1305 ] = 0.1937497474880058 ; xx [ 1311 ] =
0.1060397762709983 ; xx [ 1317 ] = xx [ 1311 ] * input [ 92 ] ; xx [ 1323 ] =
0.4682442847472073 ; xx [ 1329 ] = 0.8555488828806376 ; xx [ 1335 ] = xx [
1329 ] * input [ 92 ] ; xx [ 1336 ] = ( xx [ 1305 ] * xx [ 1317 ] + xx [ 1323
] * xx [ 1335 ] ) * xx [ 12 ] ; xx [ 1337 ] = xx [ 12 ] * ( xx [ 1323 ] * xx
[ 1317 ] - xx [ 1305 ] * xx [ 1335 ] ) ; xx [ 1305 ] = input [ 92 ] - ( xx [
1329 ] * xx [ 1335 ] + xx [ 1311 ] * xx [ 1317 ] ) * xx [ 12 ] ; xx [ 1341 ]
= - xx [ 1336 ] ; xx [ 1342 ] = xx [ 1337 ] ; xx [ 1343 ] = xx [ 1305 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1341 , xx + 1344 ) ; xx [ 876 ] =
0.08825404800005146 ; xx [ 877 ] = 0.05085694598496637 ; xx [ 878 ] = -
0.04022128746106271 ; xx [ 1311 ] = 0.4329293025203554 ; xx [ 1317 ] =
0.2388834576327223 ; xx [ 1323 ] = xx [ 1317 ] * input [ 93 ] ; xx [ 1329 ] =
0.4199252651663411 ; xx [ 1335 ] = 0.7610319864260977 ; xx [ 1341 ] = xx [
1335 ] * input [ 93 ] ; xx [ 1342 ] = ( xx [ 1311 ] * xx [ 1323 ] + xx [ 1329
] * xx [ 1341 ] ) * xx [ 12 ] ; xx [ 1343 ] = xx [ 12 ] * ( xx [ 1329 ] * xx
[ 1323 ] - xx [ 1311 ] * xx [ 1341 ] ) ; xx [ 1311 ] = input [ 93 ] - ( xx [
1335 ] * xx [ 1341 ] + xx [ 1317 ] * xx [ 1323 ] ) * xx [ 12 ] ; xx [ 1347 ]
= - xx [ 1342 ] ; xx [ 1348 ] = xx [ 1343 ] ; xx [ 1349 ] = xx [ 1311 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1347 , xx + 1350 ) ; xx [ 876 ] =
- 0.01621445178369506 ; xx [ 877 ] = 0.02064735428739629 ; xx [ 878 ] =
3.272323511960149e-3 ; xx [ 1317 ] = 0.02715056728741203 ; xx [ 1323 ] =
3.291294783773412e-3 ; xx [ 1329 ] = xx [ 1323 ] * input [ 94 ] ; xx [ 1335 ]
= 0.1202977797096041 ; xx [ 1341 ] = 0.9923610523753731 ; xx [ 1347 ] = xx [
1341 ] * input [ 94 ] ; xx [ 1348 ] = ( xx [ 1317 ] * xx [ 1329 ] + xx [ 1335
] * xx [ 1347 ] ) * xx [ 12 ] ; xx [ 1349 ] = xx [ 12 ] * ( xx [ 1335 ] * xx
[ 1329 ] - xx [ 1317 ] * xx [ 1347 ] ) ; xx [ 1317 ] = input [ 94 ] - ( xx [
1341 ] * xx [ 1347 ] + xx [ 1323 ] * xx [ 1329 ] ) * xx [ 12 ] ; xx [ 1353 ]
= xx [ 1348 ] ; xx [ 1354 ] = xx [ 1349 ] ; xx [ 1355 ] = xx [ 1317 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1353 , xx + 1356 ) ; xx [ 876 ] =
0.07778373207184298 ; xx [ 877 ] = 0.06920777250867712 ; xx [ 878 ] = -
0.05836215192562574 ; xx [ 1323 ] = 0.6395227561236595 ; xx [ 1329 ] =
0.2517984337787514 ; xx [ 1335 ] = xx [ 1329 ] * input [ 95 ] ; xx [ 1341 ] =
0.266107804286955 ; xx [ 1347 ] = 0.6758659849734575 ; xx [ 1353 ] = xx [
1347 ] * input [ 95 ] ; xx [ 1354 ] = ( xx [ 1323 ] * xx [ 1335 ] + xx [ 1341
] * xx [ 1353 ] ) * xx [ 12 ] ; xx [ 1355 ] = xx [ 12 ] * ( xx [ 1341 ] * xx
[ 1335 ] - xx [ 1323 ] * xx [ 1353 ] ) ; xx [ 1323 ] = input [ 95 ] - ( xx [
1347 ] * xx [ 1353 ] + xx [ 1329 ] * xx [ 1335 ] ) * xx [ 12 ] ; xx [ 1359 ]
= - xx [ 1354 ] ; xx [ 1360 ] = xx [ 1355 ] ; xx [ 1361 ] = xx [ 1323 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1359 , xx + 1362 ) ; xx [ 876 ] =
0.0602032404852826 ; xx [ 877 ] = 0.08203106311915592 ; xx [ 878 ] = -
0.07487337344589605 ; xx [ 1329 ] = 0.6940948607199241 ; xx [ 1335 ] =
0.2053956683816426 ; xx [ 1341 ] = xx [ 1335 ] * input [ 96 ] ; xx [ 1347 ] =
0.1957799624580653 ; xx [ 1353 ] = 0.6616004459129137 ; xx [ 1359 ] = xx [
1353 ] * input [ 96 ] ; xx [ 1360 ] = ( xx [ 1329 ] * xx [ 1341 ] + xx [ 1347
] * xx [ 1359 ] ) * xx [ 12 ] ; xx [ 1361 ] = xx [ 12 ] * ( xx [ 1347 ] * xx
[ 1341 ] - xx [ 1329 ] * xx [ 1359 ] ) ; xx [ 1329 ] = input [ 96 ] - ( xx [
1353 ] * xx [ 1359 ] + xx [ 1335 ] * xx [ 1341 ] ) * xx [ 12 ] ; xx [ 1365 ]
= - xx [ 1360 ] ; xx [ 1366 ] = xx [ 1361 ] ; xx [ 1367 ] = xx [ 1329 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1365 , xx + 1368 ) ; xx [ 876 ] =
0.1143978972674508 ; xx [ 877 ] = - 0.01074410169425164 ; xx [ 878 ] = -
0.1239980564790716 ; xx [ 1335 ] = 0.6377272328877593 ; xx [ 1341 ] =
0.6305933819529564 ; xx [ 1347 ] = xx [ 1341 ] * input [ 97 ] ; xx [ 1353 ] =
0.3199249700933913 ; xx [ 1359 ] = 0.3054569962878528 ; xx [ 1365 ] = xx [
1359 ] * input [ 97 ] ; xx [ 1366 ] = ( xx [ 1335 ] * xx [ 1347 ] + xx [ 1353
] * xx [ 1365 ] ) * xx [ 12 ] ; xx [ 1367 ] = xx [ 12 ] * ( xx [ 1335 ] * xx
[ 1365 ] - xx [ 1353 ] * xx [ 1347 ] ) ; xx [ 1335 ] = input [ 97 ] - ( xx [
1359 ] * xx [ 1365 ] + xx [ 1341 ] * xx [ 1347 ] ) * xx [ 12 ] ; xx [ 1371 ]
= - xx [ 1366 ] ; xx [ 1372 ] = xx [ 1367 ] ; xx [ 1373 ] = xx [ 1335 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1371 , xx + 1374 ) ; xx [ 876 ] =
0.1151109708936954 ; xx [ 877 ] = - 0.0107580464525686 ; xx [ 878 ] = -
0.08461401533556856 ; xx [ 1341 ] = 0.4666321200467146 ; xx [ 1347 ] =
0.4902460691897858 ; xx [ 1353 ] = xx [ 1347 ] * input [ 98 ] ; xx [ 1359 ] =
0.509567258991786 ; xx [ 1365 ] = 0.5312762602905107 ; xx [ 1371 ] = xx [
1365 ] * input [ 98 ] ; xx [ 1372 ] = ( xx [ 1341 ] * xx [ 1353 ] + xx [ 1359
] * xx [ 1371 ] ) * xx [ 12 ] ; xx [ 1373 ] = xx [ 12 ] * ( xx [ 1341 ] * xx
[ 1371 ] - xx [ 1359 ] * xx [ 1353 ] ) ; xx [ 1341 ] = input [ 98 ] - ( xx [
1365 ] * xx [ 1371 ] + xx [ 1347 ] * xx [ 1353 ] ) * xx [ 12 ] ; xx [ 1377 ]
= - xx [ 1372 ] ; xx [ 1378 ] = xx [ 1373 ] ; xx [ 1379 ] = xx [ 1341 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1377 , xx + 1380 ) ; xx [ 876 ] =
0.1089181530968041 ; xx [ 877 ] = 0.02522537860188187 ; xx [ 878 ] = -
0.06782609011531604 ; xx [ 1347 ] = 0.5150379187494134 ; xx [ 1353 ] =
0.4000839557916553 ; xx [ 1359 ] = xx [ 1353 ] * input [ 99 ] ; xx [ 1365 ] =
0.4650464122323525 ; xx [ 1371 ] = 0.598665687206299 ; xx [ 1377 ] = xx [
1371 ] * input [ 99 ] ; xx [ 1378 ] = ( xx [ 1347 ] * xx [ 1359 ] + xx [ 1365
] * xx [ 1377 ] ) * xx [ 12 ] ; xx [ 1379 ] = xx [ 12 ] * ( xx [ 1365 ] * xx
[ 1359 ] - xx [ 1347 ] * xx [ 1377 ] ) ; xx [ 1347 ] = input [ 99 ] - ( xx [
1371 ] * xx [ 1377 ] + xx [ 1353 ] * xx [ 1359 ] ) * xx [ 12 ] ; xx [ 1383 ]
= - xx [ 1378 ] ; xx [ 1384 ] = xx [ 1379 ] ; xx [ 1385 ] = xx [ 1347 ] ;
pm_math_Vector3_cross_ra ( xx + 876 , xx + 1383 , xx + 1386 ) ; xx [ 876 ] =
0.1090036910983129 ; xx [ 877 ] = 0.01817465764028406 ; xx [ 878 ] = -
0.1239039825532445 ; xx [ 1353 ] = 0.6677460745578425 ; xx [ 1359 ] =
0.4544566951154766 ; xx [ 1365 ] = xx [ 1359 ] * input [ 100 ] ; xx [ 1371 ]
= 0.3317113810722333 ; xx [ 1377 ] = 0.4873929132070582 ; xx [ 1383 ] = xx [
1377 ] * input [ 100 ] ; xx [ 1384 ] = ( xx [ 1353 ] * xx [ 1365 ] + xx [
1371 ] * xx [ 1383 ] ) * xx [ 12 ] ; xx [ 1385 ] = xx [ 12 ] * ( xx [ 1371 ]
* xx [ 1365 ] - xx [ 1353 ] * xx [ 1383 ] ) ; xx [ 1353 ] = input [ 100 ] - (
xx [ 1377 ] * xx [ 1383 ] + xx [ 1359 ] * xx [ 1365 ] ) * xx [ 12 ] ; xx [
1389 ] = - xx [ 1384 ] ; xx [ 1390 ] = xx [ 1385 ] ; xx [ 1391 ] = xx [ 1353
] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 1389 , xx + 1392 ) ; xx [ 876
] = 0.1009356429428289 ; xx [ 877 ] = 0.04283189628947623 ; xx [ 878 ] = -
0.08674853387268916 ; xx [ 1359 ] = 0.677199773614736 ; xx [ 1365 ] =
0.363683540455742 ; xx [ 1371 ] = xx [ 1365 ] * input [ 101 ] ; xx [ 1377 ] =
0.3026304369575301 ; xx [ 1383 ] = 0.5635153659347912 ; xx [ 1389 ] = xx [
1383 ] * input [ 101 ] ; xx [ 1390 ] = ( xx [ 1359 ] * xx [ 1371 ] + xx [
1377 ] * xx [ 1389 ] ) * xx [ 12 ] ; xx [ 1391 ] = xx [ 12 ] * ( xx [ 1377 ]
* xx [ 1371 ] - xx [ 1359 ] * xx [ 1389 ] ) ; xx [ 1359 ] = input [ 101 ] - (
xx [ 1383 ] * xx [ 1389 ] + xx [ 1365 ] * xx [ 1371 ] ) * xx [ 12 ] ; xx [
1395 ] = - xx [ 1390 ] ; xx [ 1396 ] = xx [ 1391 ] ; xx [ 1397 ] = xx [ 1359
] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 1395 , xx + 1398 ) ; xx [ 876
] = 0.08364765677353131 ; xx [ 877 ] = 0.05885119014471588 ; xx [ 878 ] = -
0.1171046152989574 ; xx [ 1365 ] = 0.7067331896749514 ; xx [ 1371 ] =
0.3119482578453143 ; xx [ 1377 ] = xx [ 1371 ] * input [ 102 ] ; xx [ 1383 ]
= 0.2564149209497433 ; xx [ 1389 ] = 0.5809198493367906 ; xx [ 1395 ] = xx [
1389 ] * input [ 102 ] ; xx [ 1396 ] = ( xx [ 1365 ] * xx [ 1377 ] + xx [
1383 ] * xx [ 1395 ] ) * xx [ 12 ] ; xx [ 1397 ] = xx [ 12 ] * ( xx [ 1383 ]
* xx [ 1377 ] - xx [ 1365 ] * xx [ 1395 ] ) ; xx [ 1365 ] = input [ 102 ] - (
xx [ 1389 ] * xx [ 1395 ] + xx [ 1371 ] * xx [ 1377 ] ) * xx [ 12 ] ; xx [
1401 ] = - xx [ 1396 ] ; xx [ 1402 ] = xx [ 1397 ] ; xx [ 1403 ] = xx [ 1365
] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 1401 , xx + 1404 ) ; xx [ 876
] = - 0.01629915112845618 ; xx [ 877 ] = 0.05877877777950456 ; xx [ 878 ] = -
2.234529161204791e-3 ; xx [ 1371 ] = 0.12012255005401 ; xx [ 1377 ] =
8.250559975753753e-3 ; xx [ 1383 ] = xx [ 1377 ] * input [ 105 ] ; xx [ 1389
] = 0.06802456318904793 ; xx [ 1395 ] = 0.9903914175877879 ; xx [ 1401 ] = xx
[ 1395 ] * input [ 105 ] ; xx [ 1402 ] = ( xx [ 1371 ] * xx [ 1383 ] + xx [
1389 ] * xx [ 1401 ] ) * xx [ 12 ] ; xx [ 1403 ] = xx [ 12 ] * ( xx [ 1389 ]
* xx [ 1383 ] - xx [ 1371 ] * xx [ 1401 ] ) ; xx [ 1371 ] = input [ 105 ] - (
xx [ 1395 ] * xx [ 1401 ] + xx [ 1377 ] * xx [ 1383 ] ) * xx [ 12 ] ; xx [
1407 ] = xx [ 1402 ] ; xx [ 1408 ] = xx [ 1403 ] ; xx [ 1409 ] = xx [ 1371 ]
; pm_math_Vector3_cross_ra ( xx + 876 , xx + 1407 , xx + 1410 ) ; xx [ 876 ]
= 3.708927448715881e-11 ; xx [ 877 ] = - 0.01098323883424421 ; xx [ 878 ] = -
0.106610016515035 ; xx [ 1377 ] = 0.6719667737207162 ; xx [ 1383 ] =
1.699259131240703e-10 ; xx [ 1389 ] = xx [ 1383 ] * input [ 108 ] ; xx [ 1395
] = 1.194822558890025e-10 ; xx [ 1401 ] = 0.7405812953453335 ; xx [ 1407 ] =
xx [ 1401 ] * input [ 108 ] ; xx [ 1408 ] = ( xx [ 1377 ] * xx [ 1389 ] + xx
[ 1395 ] * xx [ 1407 ] ) * xx [ 12 ] ; xx [ 1409 ] = xx [ 12 ] * ( xx [ 1395
] * xx [ 1389 ] - xx [ 1377 ] * xx [ 1407 ] ) ; xx [ 1377 ] = input [ 108 ] -
( xx [ 1401 ] * xx [ 1407 ] + xx [ 1383 ] * xx [ 1389 ] ) * xx [ 12 ] ; xx [
1413 ] = - xx [ 1408 ] ; xx [ 1414 ] = xx [ 1409 ] ; xx [ 1415 ] = xx [ 1377
] ; pm_math_Vector3_cross_ra ( xx + 876 , xx + 1413 , xx + 1416 ) ; xx [ 876
] = xx [ 791 ] ; xx [ 877 ] = xx [ 790 ] ; xx [ 878 ] = xx [ 164 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 876 , xx + 1413 ) ;
pm_math_Vector3_cross_ra ( xx + 803 , xx + 1413 , xx + 876 ) ; xx [ 803 ] =
xx [ 818 ] ; xx [ 804 ] = xx [ 735 ] ; xx [ 805 ] = xx [ 172 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 803 , xx + 1419 ) ;
pm_math_Vector3_cross_ra ( xx + 815 , xx + 1419 , xx + 803 ) ; xx [ 815 ] =
xx [ 831 ] ; xx [ 816 ] = xx [ 748 ] ; xx [ 817 ] = xx [ 733 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 815 , xx + 1422 ) ;
pm_math_Vector3_cross_ra ( xx + 828 , xx + 1422 , xx + 815 ) ; xx [ 828 ] =
0.01688944443296599 ; xx [ 829 ] = 0.1061533353579484 ; xx [ 830 ] = -
0.0363534993916424 ; pm_math_Quaternion_compose_ra ( xx + 584 , xx + 62 , xx
+ 1425 ) ; pm_math_Quaternion_compose_ra ( xx + 1425 , xx + 89 , xx + 1429 )
; pm_math_Quaternion_compose_ra ( xx + 1429 , xx + 85 , xx + 1433 ) ;
pm_math_Quaternion_compose_ra ( xx + 1433 , xx + 114 , xx + 1437 ) ;
pm_math_Quaternion_xform_ra ( xx + 1437 , xx + 828 , xx + 1441 ) ;
pm_math_Quaternion_xform_ra ( xx + 1433 , xx + 155 , xx + 1444 ) ;
pm_math_Quaternion_xform_ra ( xx + 1429 , xx + 122 , xx + 1433 ) ;
pm_math_Quaternion_xform_ra ( xx + 1425 , xx + 93 , xx + 1429 ) ;
pm_math_Quaternion_xform_ra ( xx + 584 , xx + 397 , xx + 1425 ) ; xx [ 584 ]
= xx [ 1444 ] + xx [ 1433 ] + xx [ 1429 ] + xx [ 1425 ] - xx [ 588 ] ; xx [
585 ] = 0.01688944435119629 ; xx [ 586 ] = xx [ 1441 ] + xx [ 584 ] - xx [
585 ] ; xx [ 587 ] = xx [ 1445 ] + xx [ 1434 ] + xx [ 1430 ] + xx [ 1426 ] +
xx [ 590 ] ; xx [ 588 ] = 0.1319682159423828 ; xx [ 590 ] = xx [ 1442 ] + xx
[ 587 ] - xx [ 588 ] ; xx [ 1383 ] = xx [ 1446 ] + xx [ 1435 ] + xx [ 1431 ]
+ xx [ 1427 ] + xx [ 593 ] ; xx [ 593 ] = 0.8089576416015625 ; xx [ 1389 ] =
xx [ 1443 ] + xx [ 1383 ] - xx [ 593 ] ; xx [ 1395 ] = sqrt ( xx [ 586 ] * xx
[ 586 ] + xx [ 590 ] * xx [ 590 ] + xx [ 1389 ] * xx [ 1389 ] ) ; if ( xx [
1395 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1395 ] = input [ 124 ] / xx [ 1395 ] ; xx [ 1425 ] =
xx [ 1395 ] * xx [ 586 ] ; xx [ 1426 ] = xx [ 1395 ] * xx [ 590 ] ; xx [ 1427
] = xx [ 1395 ] * xx [ 1389 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1437 , xx + 1425 , xx + 1428 ) ; pm_math_Vector3_cross_ra ( xx + 828 , xx +
1428 , xx + 1425 ) ; xx [ 828 ] = - 0.01688944426942647 ; xx [ 829 ] =
0.1061533353718742 ; xx [ 830 ] = - 0.03635349939337851 ;
pm_math_Quaternion_xform_ra ( xx + 1437 , xx + 828 , xx + 1431 ) ; xx [ 586 ]
= xx [ 1431 ] + xx [ 584 ] + xx [ 585 ] ; xx [ 585 ] = xx [ 1432 ] + xx [ 587
] - xx [ 588 ] ; xx [ 588 ] = xx [ 1433 ] + xx [ 1383 ] - xx [ 593 ] ; xx [
590 ] = sqrt ( xx [ 586 ] * xx [ 586 ] + xx [ 585 ] * xx [ 585 ] + xx [ 588 ]
* xx [ 588 ] ) ; if ( xx [ 590 ] == 0.0 ) { return sm_ssci_recordRunTimeError
( "physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force1' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 590 ] = input [ 125 ] / xx [ 590 ] ; xx [ 1431 ] = xx
[ 590 ] * xx [ 586 ] ; xx [ 1432 ] = xx [ 590 ] * xx [ 585 ] ; xx [ 1433 ] =
xx [ 590 ] * xx [ 588 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1437 , xx
+ 1431 , xx + 1434 ) ; pm_math_Vector3_cross_ra ( xx + 828 , xx + 1434 , xx +
1431 ) ; xx [ 828 ] = 9.709312439494935e-3 ; xx [ 829 ] = -
0.08575875923336911 ; xx [ 830 ] = 4.916076512637418e-3 ;
pm_math_Quaternion_xform_ra ( xx + 1437 , xx + 828 , xx + 1441 ) ; xx [ 585 ]
= 9.709312438964843e-3 ; xx [ 586 ] = xx [ 1441 ] + xx [ 584 ] - xx [ 585 ] ;
xx [ 588 ] = 2.232642650604248e-3 ; xx [ 593 ] = xx [ 1442 ] + xx [ 587 ] +
xx [ 588 ] ; xx [ 1389 ] = 0.8689576416015625 ; xx [ 1401 ] = xx [ 1443 ] +
xx [ 1383 ] - xx [ 1389 ] ; xx [ 1407 ] = sqrt ( xx [ 586 ] * xx [ 586 ] + xx
[ 593 ] * xx [ 593 ] + xx [ 1401 ] * xx [ 1401 ] ) ; if ( xx [ 1407 ] == 0.0
) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force2' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1407 ] = input [ 126 ] / xx [ 1407 ] ; xx [ 1441 ] =
xx [ 1407 ] * xx [ 586 ] ; xx [ 1442 ] = xx [ 1407 ] * xx [ 593 ] ; xx [ 1443
] = xx [ 1407 ] * xx [ 1401 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1437 , xx + 1441 , xx + 1444 ) ; pm_math_Vector3_cross_ra ( xx + 828 , xx +
1444 , xx + 1441 ) ; xx [ 828 ] = - 9.709312438434646e-3 ; xx [ 829 ] = -
0.0857587592253635 ; xx [ 830 ] = 4.916076511639372e-3 ;
pm_math_Quaternion_xform_ra ( xx + 1437 , xx + 828 , xx + 1447 ) ; xx [ 586 ]
= xx [ 1447 ] + xx [ 584 ] + xx [ 585 ] ; xx [ 585 ] = xx [ 1448 ] + xx [ 587
] + xx [ 588 ] ; xx [ 588 ] = xx [ 1449 ] + xx [ 1383 ] - xx [ 1389 ] ; xx [
593 ] = sqrt ( xx [ 586 ] * xx [ 586 ] + xx [ 585 ] * xx [ 585 ] + xx [ 588 ]
* xx [ 588 ] ) ; if ( xx [ 593 ] == 0.0 ) { return sm_ssci_recordRunTimeError
( "physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force3' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 593 ] = input [ 127 ] / xx [ 593 ] ; xx [ 1447 ] = xx
[ 593 ] * xx [ 586 ] ; xx [ 1448 ] = xx [ 593 ] * xx [ 585 ] ; xx [ 1449 ] =
xx [ 593 ] * xx [ 588 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1437 , xx
+ 1447 , xx + 1450 ) ; pm_math_Vector3_cross_ra ( xx + 828 , xx + 1450 , xx +
1447 ) ; xx [ 828 ] = 0.1069609375520753 ; xx [ 829 ] = 0.01842456453313058 ;
xx [ 830 ] = - 0.1622978990106889 ; pm_math_Quaternion_xform_ra ( xx + 1437 ,
xx + 828 , xx + 1453 ) ; xx [ 585 ] = 0.06488653564453126 ; xx [ 586 ] = xx [
1453 ] + xx [ 584 ] - xx [ 585 ] ; xx [ 588 ] = 0.03644176864624023 ; xx [
1389 ] = xx [ 1454 ] + xx [ 587 ] - xx [ 588 ] ; xx [ 1401 ] =
0.9499576416015625 ; xx [ 1453 ] = xx [ 1455 ] + xx [ 1383 ] - xx [ 1401 ] ;
xx [ 1454 ] = sqrt ( xx [ 586 ] * xx [ 586 ] + xx [ 1389 ] * xx [ 1389 ] + xx
[ 1453 ] * xx [ 1453 ] ) ; if ( xx [ 1454 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force4' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1454 ] = input [ 128 ] / xx [ 1454 ] ; xx [ 1455 ] =
xx [ 1454 ] * xx [ 586 ] ; xx [ 1456 ] = xx [ 1454 ] * xx [ 1389 ] ; xx [
1457 ] = xx [ 1454 ] * xx [ 1453 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 1437 , xx + 1455 , xx + 1458 ) ; pm_math_Vector3_cross_ra ( xx + 828 , xx +
1458 , xx + 1455 ) ; xx [ 828 ] = 0.09543898773968792 ; xx [ 829 ] = -
0.07942755025287042 ; xx [ 830 ] = - 0.08485896084049524 ;
pm_math_Quaternion_xform_ra ( xx + 1437 , xx + 828 , xx + 1461 ) ; xx [ 586 ]
= 0.1324676666259766 ; xx [ 1389 ] = xx [ 1461 ] + xx [ 584 ] - xx [ 586 ] ;
xx [ 1453 ] = 0.1263068237304688 ; xx [ 1464 ] = xx [ 1462 ] + xx [ 587 ] -
xx [ 1453 ] ; xx [ 1461 ] = 0.9199576416015626 ; xx [ 1462 ] = xx [ 1463 ] +
xx [ 1383 ] - xx [ 1461 ] ; xx [ 1463 ] = sqrt ( xx [ 1389 ] * xx [ 1389 ] +
xx [ 1464 ] * xx [ 1464 ] + xx [ 1462 ] * xx [ 1462 ] ) ; if ( xx [ 1463 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force5' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1463 ] = input [ 129 ] / xx [ 1463 ] ; xx [ 1465 ] =
xx [ 1463 ] * xx [ 1389 ] ; xx [ 1466 ] = xx [ 1463 ] * xx [ 1464 ] ; xx [
1467 ] = xx [ 1463 ] * xx [ 1462 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 1437 , xx + 1465 , xx + 1468 ) ; pm_math_Vector3_cross_ra ( xx + 828 , xx +
1468 , xx + 1464 ) ; xx [ 828 ] = - 0.1069609374479245 ; xx [ 829 ] =
0.01842456462132292 ; xx [ 830 ] = - 0.1622978990216837 ;
pm_math_Quaternion_xform_ra ( xx + 1437 , xx + 828 , xx + 1471 ) ; xx [ 1389
] = xx [ 1471 ] + xx [ 584 ] + xx [ 585 ] ; xx [ 585 ] = xx [ 1472 ] + xx [
587 ] - xx [ 588 ] ; xx [ 588 ] = xx [ 1473 ] + xx [ 1383 ] - xx [ 1401 ] ;
xx [ 1401 ] = sqrt ( xx [ 1389 ] * xx [ 1389 ] + xx [ 585 ] * xx [ 585 ] + xx
[ 588 ] * xx [ 588 ] ) ; if ( xx [ 1401 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force6' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1401 ] = input [ 130 ] / xx [ 1401 ] ; xx [ 1471 ] =
xx [ 1401 ] * xx [ 1389 ] ; xx [ 1472 ] = xx [ 1401 ] * xx [ 585 ] ; xx [
1473 ] = xx [ 1401 ] * xx [ 588 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
1437 , xx + 1471 , xx + 1474 ) ; pm_math_Vector3_cross_ra ( xx + 828 , xx +
1474 , xx + 1471 ) ; xx [ 828 ] = - 0.09543898772417915 ; xx [ 829 ] = -
0.07942755017417825 ; xx [ 830 ] = - 0.08485896085030567 ;
pm_math_Quaternion_xform_ra ( xx + 1437 , xx + 828 , xx + 1477 ) ; xx [ 585 ]
= xx [ 1477 ] + xx [ 584 ] + xx [ 586 ] ; xx [ 586 ] = xx [ 1478 ] + xx [ 587
] - xx [ 1453 ] ; xx [ 588 ] = xx [ 1479 ] + xx [ 1383 ] - xx [ 1461 ] ; xx [
1389 ] = sqrt ( xx [ 585 ] * xx [ 585 ] + xx [ 586 ] * xx [ 586 ] + xx [ 588
] * xx [ 588 ] ) ; if ( xx [ 1389 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force7' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 1389 ] = input [ 131 ] / xx [ 1389 ] ; xx [ 1477 ] =
xx [ 1389 ] * xx [ 585 ] ; xx [ 1478 ] = xx [ 1389 ] * xx [ 586 ] ; xx [ 1479
] = xx [ 1389 ] * xx [ 588 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1437
, xx + 1477 , xx + 1480 ) ; pm_math_Vector3_cross_ra ( xx + 828 , xx + 1480 ,
xx + 1477 ) ; xx [ 585 ] = xx [ 1438 ] * input [ 132 ] ; xx [ 586 ] = xx [
1439 ] * input [ 132 ] ; xx [ 588 ] = xx [ 1439 ] * input [ 133 ] ; xx [ 828
] = xx [ 1440 ] * input [ 133 ] ; xx [ 829 ] = xx [ 1440 ] * input [ 134 ] ;
xx [ 830 ] = xx [ 1438 ] * input [ 134 ] ; xx [ 1483 ] = xx [ 746 ] ; xx [
1484 ] = xx [ 759 ] ; xx [ 1485 ] = xx [ 130 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 1483 , xx + 1486 ) ;
pm_math_Vector3_cross_ra ( xx + 841 , xx + 1486 , xx + 1483 ) ; xx [ 841 ] =
xx [ 105 ] ; xx [ 842 ] = xx [ 760 ] ; xx [ 843 ] = xx [ 852 ] ;
pm_math_Vector3_cross_ra ( xx + 772 , xx + 841 , xx + 1489 ) ; xx [ 1492 ] =
xx [ 131 ] ; xx [ 1493 ] = xx [ 146 ] ; xx [ 1494 ] = xx [ 853 ] ;
pm_math_Vector3_cross_ra ( xx + 841 , xx + 1492 , xx + 1495 ) ; xx [ 1492 ] =
- xx [ 104 ] ; xx [ 1493 ] = - xx [ 148 ] ; xx [ 1494 ] = xx [ 851 ] ; xx [
851 ] = xx [ 103 ] ; xx [ 852 ] = xx [ 147 ] ; xx [ 853 ] = xx [ 850 ] ;
pm_math_Vector3_cross_ra ( xx + 1492 , xx + 851 , xx + 103 ) ; xx [ 131 ] =
xx [ 1495 ] + xx [ 103 ] ; xx [ 146 ] = xx [ 1489 ] - xx [ 131 ] ; xx [ 147 ]
= xx [ 861 ] - xx [ 873 ] - xx [ 885 ] - xx [ 891 ] - xx [ 897 ] - xx [ 906 ]
- xx [ 912 ] - xx [ 918 ] - xx [ 924 ] - xx [ 930 ] - xx [ 936 ] - xx [ 942 ]
- xx [ 948 ] - xx [ 954 ] - xx [ 960 ] - xx [ 966 ] - xx [ 972 ] - xx [ 978 ]
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
1410 ] - xx [ 1416 ] - xx [ 876 ] - xx [ 803 ] - xx [ 815 ] - xx [ 1425 ] -
xx [ 1431 ] - xx [ 1441 ] - xx [ 1447 ] - xx [ 1455 ] - xx [ 1464 ] - xx [
1471 ] - xx [ 1477 ] - xx [ 12 ] * ( xx [ 1440 ] * xx [ 585 ] - xx [ 1437 ] *
xx [ 586 ] ) - ( input [ 133 ] - ( xx [ 1439 ] * xx [ 588 ] + xx [ 1440 ] *
xx [ 828 ] ) * xx [ 12 ] ) - ( xx [ 1437 ] * xx [ 829 ] + xx [ 1439 ] * xx [
830 ] ) * xx [ 12 ] - xx [ 1483 ] + xx [ 100 ] * xx [ 146 ] ; xx [ 100 ] =
state [ 24 ] + xx [ 43 ] ; if ( xx [ 44 ] < xx [ 100 ] ) xx [ 100 ] = xx [ 44
] ; xx [ 148 ] = - ( xx [ 100 ] / xx [ 48 ] ) ; if ( xx [ 1 ] < xx [ 148 ] )
xx [ 148 ] = xx [ 1 ] ; xx [ 760 ] = xx [ 96 ] * state [ 27 ] ; xx [ 850 ] =
xx [ 148 ] * xx [ 148 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 148 ] ) * ( ( - xx [
100 ] == xx [ 44 ] ? xx [ 44 ] : - xx [ 760 ] ) - xx [ 173 ] * xx [ 100 ] ) ;
if ( xx [ 44 ] > xx [ 850 ] ) xx [ 850 ] = xx [ 44 ] ; xx [ 100 ] = state [
24 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 100 ] ) xx [ 100 ] = xx [ 44 ] ; xx
[ 148 ] = xx [ 100 ] / xx [ 48 ] ; if ( xx [ 1 ] < xx [ 148 ] ) xx [ 148 ] =
xx [ 1 ] ; xx [ 851 ] = ( xx [ 173 ] * xx [ 100 ] + ( xx [ 100 ] == xx [ 44 ]
? xx [ 44 ] : xx [ 760 ] ) ) * xx [ 148 ] * xx [ 148 ] * ( xx [ 67 ] - xx [
12 ] * xx [ 148 ] ) ; if ( xx [ 44 ] > xx [ 851 ] ) xx [ 851 ] = xx [ 44 ] ;
xx [ 100 ] = xx [ 1496 ] + xx [ 104 ] ; xx [ 148 ] = xx [ 1490 ] - xx [ 100 ]
; xx [ 760 ] = xx [ 862 ] - xx [ 874 ] - xx [ 886 ] - xx [ 892 ] - xx [ 898 ]
- xx [ 907 ] - xx [ 913 ] - xx [ 919 ] - xx [ 925 ] - xx [ 931 ] - xx [ 937 ]
- xx [ 943 ] - xx [ 949 ] - xx [ 955 ] - xx [ 961 ] - xx [ 967 ] - xx [ 973 ]
- xx [ 979 ] - xx [ 985 ] - xx [ 991 ] - xx [ 997 ] - xx [ 1003 ] - xx [ 1009
] - xx [ 1015 ] - xx [ 1021 ] - xx [ 1027 ] - xx [ 1033 ] - xx [ 1039 ] - xx
[ 1045 ] - xx [ 1051 ] - xx [ 1057 ] - xx [ 1063 ] - xx [ 1069 ] - xx [ 1075
] - xx [ 1081 ] - xx [ 1087 ] - xx [ 1093 ] - xx [ 1099 ] - xx [ 1105 ] - xx
[ 1111 ] - xx [ 1117 ] - xx [ 1123 ] - xx [ 1129 ] - xx [ 1135 ] - xx [ 1141
] - xx [ 1147 ] - xx [ 1153 ] - xx [ 1159 ] - xx [ 1165 ] - xx [ 1171 ] - xx
[ 1177 ] - xx [ 1183 ] - xx [ 1189 ] - xx [ 1195 ] - xx [ 1201 ] - xx [ 1207
] - xx [ 1213 ] - xx [ 1219 ] - xx [ 1225 ] - xx [ 1231 ] - xx [ 1237 ] - xx
[ 1243 ] - xx [ 1249 ] - xx [ 1255 ] - xx [ 1261 ] - xx [ 1267 ] - xx [ 1273
] - xx [ 1279 ] - xx [ 1285 ] - xx [ 1291 ] - xx [ 1297 ] - xx [ 1303 ] - xx
[ 1309 ] - xx [ 1315 ] - xx [ 1321 ] - xx [ 1327 ] - xx [ 1333 ] - xx [ 1339
] - xx [ 1345 ] - xx [ 1351 ] - xx [ 1357 ] - xx [ 1363 ] - xx [ 1369 ] - xx
[ 1375 ] - xx [ 1381 ] - xx [ 1387 ] - xx [ 1393 ] - xx [ 1399 ] - xx [ 1405
] - xx [ 1411 ] - xx [ 1417 ] - xx [ 877 ] - xx [ 804 ] - xx [ 816 ] - xx [
1426 ] - xx [ 1432 ] - xx [ 1442 ] - xx [ 1448 ] - xx [ 1456 ] - xx [ 1465 ]
- xx [ 1472 ] - xx [ 1478 ] - ( xx [ 1437 ] * xx [ 585 ] + xx [ 1440 ] * xx [
586 ] ) * xx [ 12 ] - xx [ 12 ] * ( xx [ 1438 ] * xx [ 588 ] - xx [ 1437 ] *
xx [ 828 ] ) - ( input [ 134 ] - ( xx [ 1440 ] * xx [ 829 ] + xx [ 1438 ] *
xx [ 830 ] ) * xx [ 12 ] ) - xx [ 1484 ] + xx [ 108 ] * xx [ 148 ] ; xx [ 103
] = xx [ 1497 ] + xx [ 105 ] ; xx [ 104 ] = xx [ 1491 ] - xx [ 103 ] ; xx [
105 ] = xx [ 863 ] - xx [ 875 ] - xx [ 887 ] - xx [ 893 ] - xx [ 899 ] - xx [
908 ] - xx [ 914 ] - xx [ 920 ] - xx [ 926 ] - xx [ 932 ] - xx [ 938 ] - xx [
944 ] - xx [ 950 ] - xx [ 956 ] - xx [ 962 ] - xx [ 968 ] - xx [ 974 ] - xx [
980 ] - xx [ 986 ] - xx [ 992 ] - xx [ 998 ] - xx [ 1004 ] - xx [ 1010 ] - xx
[ 1016 ] - xx [ 1022 ] - xx [ 1028 ] - xx [ 1034 ] - xx [ 1040 ] - xx [ 1046
] - xx [ 1052 ] - xx [ 1058 ] - xx [ 1064 ] - xx [ 1070 ] - xx [ 1076 ] - xx
[ 1082 ] - xx [ 1088 ] - xx [ 1094 ] - xx [ 1100 ] - xx [ 1106 ] - xx [ 1112
] - xx [ 1118 ] - xx [ 1124 ] - xx [ 1130 ] - xx [ 1136 ] - xx [ 1142 ] - xx
[ 1148 ] - xx [ 1154 ] - xx [ 1160 ] - xx [ 1166 ] - xx [ 1172 ] - xx [ 1178
] - xx [ 1184 ] - xx [ 1190 ] - xx [ 1196 ] - xx [ 1202 ] - xx [ 1208 ] - xx
[ 1214 ] - xx [ 1220 ] - xx [ 1226 ] - xx [ 1232 ] - xx [ 1238 ] - xx [ 1244
] - xx [ 1250 ] - xx [ 1256 ] - xx [ 1262 ] - xx [ 1268 ] - xx [ 1274 ] - xx
[ 1280 ] - xx [ 1286 ] - xx [ 1292 ] - xx [ 1298 ] - xx [ 1304 ] - xx [ 1310
] - xx [ 1316 ] - xx [ 1322 ] - xx [ 1328 ] - xx [ 1334 ] - xx [ 1340 ] - xx
[ 1346 ] - xx [ 1352 ] - xx [ 1358 ] - xx [ 1364 ] - xx [ 1370 ] - xx [ 1376
] - xx [ 1382 ] - xx [ 1388 ] - xx [ 1394 ] - xx [ 1400 ] - xx [ 1406 ] - xx
[ 1412 ] - xx [ 1418 ] - xx [ 878 ] - xx [ 805 ] - xx [ 817 ] - xx [ 1427 ] -
xx [ 1433 ] - xx [ 1443 ] - xx [ 1449 ] - xx [ 1457 ] - xx [ 1466 ] - xx [
1473 ] - xx [ 1479 ] - ( input [ 132 ] - ( xx [ 1438 ] * xx [ 585 ] + xx [
1439 ] * xx [ 586 ] ) * xx [ 12 ] ) - ( xx [ 1437 ] * xx [ 588 ] + xx [ 1438
] * xx [ 828 ] ) * xx [ 12 ] - xx [ 12 ] * ( xx [ 1439 ] * xx [ 829 ] - xx [
1437 ] * xx [ 830 ] ) - xx [ 1485 ] + xx [ 127 ] * xx [ 104 ] ; xx [ 803 ] =
xx [ 147 ] ; xx [ 804 ] = xx [ 760 ] ; xx [ 805 ] = xx [ 105 ] ; xx [ 815 ] =
xx [ 772 ] + xx [ 106 ] ; xx [ 816 ] = xx [ 773 ] + xx [ 761 ] ; xx [ 817 ] =
xx [ 774 ] + xx [ 854 ] ; pm_math_Vector3_cross_ra ( xx + 132 , xx + 841 , xx
+ 772 ) ; pm_math_Vector3_cross_ra ( xx + 815 , xx + 772 , xx + 828 ) ;
pm_math_Vector3_cross_ra ( xx + 786 , xx + 155 , xx + 815 ) ;
pm_math_Vector3_cross_ra ( xx + 786 , xx + 815 , xx + 841 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 841 , xx + 786 ) ; xx [
841 ] = - xx [ 131 ] ; xx [ 842 ] = - xx [ 100 ] ; xx [ 843 ] = - xx [ 103 ]
; pm_math_Vector3_cross_ra ( xx + 132 , xx + 841 , xx + 852 ) ; xx [ 100 ] =
xx [ 828 ] + xx [ 786 ] + xx [ 852 ] ; xx [ 103 ] = xx [ 100 ] * xx [ 138 ] -
( xx [ 870 ] - xx [ 883 ] - xx [ 889 ] + xx [ 895 ] + xx [ 901 ] + xx [ 904 ]
- xx [ 910 ] + xx [ 916 ] + xx [ 922 ] + xx [ 928 ] + xx [ 934 ] + xx [ 940 ]
+ xx [ 946 ] - xx [ 952 ] + xx [ 958 ] + xx [ 964 ] + xx [ 970 ] + xx [ 976 ]
+ xx [ 982 ] + xx [ 988 ] + xx [ 994 ] + xx [ 1000 ] + xx [ 1006 ] + xx [
1012 ] - xx [ 1018 ] + xx [ 1024 ] + xx [ 1030 ] + xx [ 1036 ] + xx [ 1042 ]
+ xx [ 1048 ] + xx [ 1054 ] + xx [ 1060 ] + xx [ 1066 ] + xx [ 1072 ] + xx [
1078 ] + xx [ 1084 ] + xx [ 1090 ] + xx [ 1096 ] + xx [ 1102 ] - xx [ 1108 ]
+ xx [ 1107 ] + xx [ 1120 ] + xx [ 1126 ] + xx [ 1132 ] + xx [ 1138 ] - xx [
1144 ] - xx [ 1150 ] + xx [ 1156 ] + xx [ 1162 ] - xx [ 1168 ] - xx [ 1174 ]
- xx [ 1180 ] - xx [ 1186 ] - xx [ 1192 ] - xx [ 1198 ] + xx [ 1204 ] - xx [
1210 ] - xx [ 1216 ] - xx [ 1222 ] - xx [ 1228 ] - xx [ 1234 ] - xx [ 1240 ]
- xx [ 1246 ] - xx [ 1252 ] - xx [ 1258 ] - xx [ 1264 ] - xx [ 1270 ] - xx [
1276 ] + xx [ 1282 ] - xx [ 1288 ] - xx [ 1294 ] - xx [ 1300 ] - xx [ 1306 ]
- xx [ 1312 ] - xx [ 1318 ] - xx [ 1324 ] - xx [ 1330 ] - xx [ 1336 ] - xx [
1342 ] + xx [ 1348 ] - xx [ 1354 ] - xx [ 1360 ] - xx [ 1366 ] - xx [ 1372 ]
- xx [ 1378 ] - xx [ 1384 ] - xx [ 1390 ] - xx [ 1396 ] + xx [ 1402 ] - xx [
1408 ] + xx [ 1413 ] + xx [ 1419 ] + xx [ 1422 ] + xx [ 1428 ] + xx [ 1434 ]
+ xx [ 1444 ] + xx [ 1450 ] + xx [ 1458 ] + xx [ 1468 ] + xx [ 1474 ] + xx [
1480 ] + xx [ 1486 ] ) ; xx [ 106 ] = xx [ 829 ] + xx [ 787 ] + xx [ 853 ] ;
xx [ 108 ] = xx [ 106 ] * xx [ 138 ] - ( xx [ 871 ] + xx [ 884 ] + xx [ 890 ]
+ xx [ 896 ] + xx [ 902 ] + xx [ 905 ] + xx [ 911 ] + xx [ 917 ] + xx [ 923 ]
+ xx [ 929 ] + xx [ 935 ] + xx [ 941 ] + xx [ 947 ] + xx [ 953 ] + xx [ 959 ]
+ xx [ 965 ] + xx [ 971 ] + xx [ 977 ] + xx [ 983 ] + xx [ 989 ] + xx [ 995 ]
+ xx [ 1001 ] + xx [ 1007 ] + xx [ 1013 ] + xx [ 1019 ] + xx [ 1025 ] + xx [
1031 ] + xx [ 1037 ] + xx [ 1043 ] + xx [ 1049 ] + xx [ 1055 ] + xx [ 1061 ]
+ xx [ 1067 ] + xx [ 1073 ] + xx [ 1079 ] + xx [ 1085 ] + xx [ 1091 ] + xx [
1097 ] + xx [ 1103 ] + xx [ 1109 ] - xx [ 1113 ] + xx [ 1121 ] + xx [ 1127 ]
+ xx [ 1133 ] + xx [ 1139 ] + xx [ 1145 ] + xx [ 1151 ] + xx [ 1157 ] + xx [
1163 ] + xx [ 1169 ] + xx [ 1175 ] + xx [ 1181 ] + xx [ 1187 ] + xx [ 1193 ]
+ xx [ 1199 ] + xx [ 1205 ] + xx [ 1211 ] + xx [ 1217 ] + xx [ 1223 ] + xx [
1229 ] + xx [ 1235 ] + xx [ 1241 ] + xx [ 1247 ] + xx [ 1253 ] + xx [ 1259 ]
+ xx [ 1265 ] + xx [ 1271 ] + xx [ 1277 ] + xx [ 1283 ] + xx [ 1289 ] + xx [
1295 ] + xx [ 1301 ] + xx [ 1307 ] + xx [ 1313 ] + xx [ 1319 ] + xx [ 1325 ]
+ xx [ 1331 ] + xx [ 1337 ] + xx [ 1343 ] + xx [ 1349 ] + xx [ 1355 ] + xx [
1361 ] + xx [ 1367 ] + xx [ 1373 ] + xx [ 1379 ] + xx [ 1385 ] + xx [ 1391 ]
+ xx [ 1397 ] + xx [ 1403 ] + xx [ 1409 ] + xx [ 1414 ] + xx [ 1420 ] + xx [
1423 ] + xx [ 1429 ] + xx [ 1435 ] + xx [ 1445 ] + xx [ 1451 ] + xx [ 1459 ]
+ xx [ 1469 ] + xx [ 1475 ] + xx [ 1481 ] + xx [ 1487 ] ) ; xx [ 127 ] = xx [
830 ] + xx [ 788 ] + xx [ 854 ] ; xx [ 131 ] = xx [ 127 ] * xx [ 138 ] - ( xx
[ 872 ] + xx [ 866 ] + xx [ 869 ] + xx [ 879 ] + xx [ 880 ] + xx [ 881 ] + xx
[ 882 ] + xx [ 888 ] + xx [ 894 ] + xx [ 900 ] + xx [ 903 ] + xx [ 909 ] + xx
[ 915 ] + xx [ 921 ] + xx [ 927 ] + xx [ 933 ] + xx [ 939 ] + xx [ 945 ] + xx
[ 951 ] + xx [ 957 ] + xx [ 963 ] + xx [ 969 ] + xx [ 975 ] + xx [ 981 ] + xx
[ 987 ] + xx [ 993 ] + xx [ 999 ] + xx [ 1005 ] + xx [ 1011 ] + xx [ 1017 ] +
xx [ 1023 ] + xx [ 1029 ] + xx [ 1035 ] + xx [ 1041 ] + xx [ 1047 ] + xx [
1053 ] + xx [ 1059 ] + xx [ 1065 ] + xx [ 1071 ] + xx [ 1077 ] + xx [ 1083 ]
+ xx [ 1089 ] + xx [ 1095 ] + xx [ 1101 ] + xx [ 1114 ] + xx [ 1115 ] + xx [
1119 ] + xx [ 1125 ] + xx [ 1131 ] + xx [ 1137 ] + xx [ 1143 ] + xx [ 1149 ]
+ xx [ 1155 ] + xx [ 1161 ] + xx [ 1167 ] + xx [ 1173 ] + xx [ 1179 ] + xx [
1185 ] + xx [ 1191 ] + xx [ 1197 ] + xx [ 1203 ] + xx [ 1209 ] + xx [ 1215 ]
+ xx [ 1221 ] + xx [ 1227 ] + xx [ 1233 ] + xx [ 1239 ] + xx [ 1245 ] + xx [
1251 ] + xx [ 1257 ] + xx [ 1263 ] + xx [ 1269 ] + xx [ 1275 ] + xx [ 1281 ]
+ xx [ 1287 ] + xx [ 1293 ] + xx [ 1299 ] + xx [ 1305 ] + xx [ 1311 ] + xx [
1317 ] + xx [ 1323 ] + xx [ 1329 ] + xx [ 1335 ] + xx [ 1341 ] + xx [ 1347 ]
+ xx [ 1353 ] + xx [ 1359 ] + xx [ 1365 ] + xx [ 1371 ] + xx [ 1377 ] + xx [
1415 ] + xx [ 1421 ] + xx [ 1424 ] + xx [ 1430 ] + xx [ 1436 ] + xx [ 1446 ]
+ xx [ 1452 ] + xx [ 1460 ] + xx [ 1470 ] + xx [ 1476 ] + xx [ 1482 ] + xx [
1488 ] ) ; xx [ 132 ] = xx [ 103 ] ; xx [ 133 ] = xx [ 108 ] ; xx [ 134 ] =
xx [ 131 ] ; xx [ 138 ] = state [ 25 ] + xx [ 43 ] ; if ( xx [ 44 ] < xx [
138 ] ) xx [ 138 ] = xx [ 44 ] ; xx [ 585 ] = - ( xx [ 138 ] / xx [ 48 ] ) ;
if ( xx [ 1 ] < xx [ 585 ] ) xx [ 585 ] = xx [ 1 ] ; xx [ 586 ] = xx [ 96 ] *
state [ 28 ] ; xx [ 588 ] = xx [ 585 ] * xx [ 585 ] * ( xx [ 67 ] - xx [ 12 ]
* xx [ 585 ] ) * ( ( - xx [ 138 ] == xx [ 44 ] ? xx [ 44 ] : - xx [ 586 ] ) -
xx [ 173 ] * xx [ 138 ] ) ; if ( xx [ 44 ] > xx [ 588 ] ) xx [ 588 ] = xx [
44 ] ; xx [ 138 ] = state [ 25 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 138 ] )
xx [ 138 ] = xx [ 44 ] ; xx [ 585 ] = xx [ 138 ] / xx [ 48 ] ; if ( xx [ 1 ]
< xx [ 585 ] ) xx [ 585 ] = xx [ 1 ] ; xx [ 761 ] = ( xx [ 173 ] * xx [ 138 ]
+ ( xx [ 138 ] == xx [ 44 ] ? xx [ 44 ] : xx [ 586 ] ) ) * xx [ 585 ] * xx [
585 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 585 ] ) ; if ( xx [ 44 ] > xx [ 761 ]
) xx [ 761 ] = xx [ 44 ] ; xx [ 138 ] = state [ 26 ] + xx [ 43 ] ; if ( xx [
44 ] < xx [ 138 ] ) xx [ 138 ] = xx [ 44 ] ; xx [ 585 ] = - ( xx [ 138 ] / xx
[ 48 ] ) ; if ( xx [ 1 ] < xx [ 585 ] ) xx [ 585 ] = xx [ 1 ] ; xx [ 586 ] =
xx [ 96 ] * state [ 29 ] ; xx [ 786 ] = xx [ 585 ] * xx [ 585 ] * ( xx [ 67 ]
- xx [ 12 ] * xx [ 585 ] ) * ( ( - xx [ 138 ] == xx [ 44 ] ? xx [ 44 ] : - xx
[ 586 ] ) - xx [ 173 ] * xx [ 138 ] ) ; if ( xx [ 44 ] > xx [ 786 ] ) xx [
786 ] = xx [ 44 ] ; xx [ 138 ] = state [ 26 ] - xx [ 43 ] ; if ( xx [ 44 ] >
xx [ 138 ] ) xx [ 138 ] = xx [ 44 ] ; xx [ 585 ] = xx [ 138 ] / xx [ 48 ] ;
if ( xx [ 1 ] < xx [ 585 ] ) xx [ 585 ] = xx [ 1 ] ; xx [ 787 ] = ( xx [ 173
] * xx [ 138 ] + ( xx [ 138 ] == xx [ 44 ] ? xx [ 44 ] : xx [ 586 ] ) ) * xx
[ 585 ] * xx [ 585 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 585 ] ) ; if ( xx [ 44
] > xx [ 787 ] ) xx [ 787 ] = xx [ 44 ] ; xx [ 828 ] = - xx [ 99 ] ; xx [ 829
] = - xx [ 98 ] ; xx [ 830 ] = xx [ 84 ] ; xx [ 138 ] = 0.03342895180409124 ;
xx [ 585 ] = 2.233705901158266e-11 ; xx [ 586 ] = 2.906461761334121e-12 ; xx
[ 841 ] = - xx [ 138 ] ; xx [ 842 ] = - xx [ 585 ] ; xx [ 843 ] = - xx [ 586
] ; xx [ 852 ] = input [ 0 ] - xx [ 41 ] * state [ 27 ] + xx [ 850 ] - xx [
851 ] - ( pm_math_Vector3_dot_ra ( xx + 111 , xx + 803 ) +
pm_math_Vector3_dot_ra ( xx + 135 , xx + 132 ) ) ; xx [ 853 ] = input [ 1 ] -
xx [ 41 ] * state [ 28 ] + xx [ 588 ] - xx [ 761 ] - ( pm_math_Vector3_dot_ra
( xx + 149 , xx + 803 ) + pm_math_Vector3_dot_ra ( xx + 152 , xx + 132 ) ) ;
xx [ 854 ] = input [ 2 ] - xx [ 41 ] * state [ 29 ] + xx [ 786 ] - xx [ 787 ]
- ( pm_math_Vector3_dot_ra ( xx + 828 , xx + 803 ) + pm_math_Vector3_dot_ra (
xx + 841 , xx + 132 ) ) ; solveSymmetricPosDef ( xx + 178 , xx + 852 , 3 , 1
, xx + 111 , xx + 132 ) ; xx [ 132 ] = xx [ 147 ] + xx [ 111 ] * xx [ 82 ] +
xx [ 112 ] * xx [ 72 ] - xx [ 159 ] * xx [ 113 ] ; xx [ 133 ] = xx [ 760 ] +
xx [ 111 ] * xx [ 109 ] + xx [ 112 ] * xx [ 79 ] - xx [ 161 ] * xx [ 113 ] ;
xx [ 134 ] = xx [ 105 ] + xx [ 111 ] * xx [ 128 ] + xx [ 112 ] * xx [ 83 ] +
xx [ 163 ] * xx [ 113 ] ; pm_math_Quaternion_xform_ra ( xx + 114 , xx + 132 ,
xx + 178 ) ; xx [ 132 ] = xx [ 103 ] + xx [ 111 ] * xx [ 139 ] + xx [ 112 ] *
xx [ 101 ] - xx [ 167 ] * xx [ 113 ] ; xx [ 133 ] = xx [ 108 ] + xx [ 111 ] *
xx [ 140 ] + xx [ 112 ] * xx [ 102 ] - xx [ 169 ] * xx [ 113 ] ; xx [ 134 ] =
xx [ 131 ] + xx [ 111 ] * xx [ 141 ] + xx [ 112 ] * xx [ 145 ] - xx [ 171 ] *
xx [ 113 ] ; pm_math_Quaternion_xform_ra ( xx + 114 , xx + 132 , xx + 101 ) ;
pm_math_Vector3_cross_ra ( xx + 155 , xx + 101 , xx + 131 ) ; xx [ 139 ] = xx
[ 77 ] ; xx [ 140 ] = xx [ 694 ] ; xx [ 141 ] = xx [ 783 ] ;
pm_math_Vector3_cross_ra ( xx + 706 , xx + 139 , xx + 181 ) ; xx [ 184 ] = xx
[ 121 ] ; xx [ 185 ] = xx [ 266 ] ; xx [ 186 ] = xx [ 784 ] ;
pm_math_Vector3_cross_ra ( xx + 139 , xx + 184 , xx + 786 ) ; xx [ 184 ] = xx
[ 76 ] ; xx [ 185 ] = xx [ 268 ] ; xx [ 186 ] = xx [ 782 ] ; xx [ 782 ] = xx
[ 75 ] ; xx [ 783 ] = xx [ 267 ] ; xx [ 784 ] = xx [ 781 ] ;
pm_math_Vector3_cross_ra ( xx + 184 , xx + 782 , xx + 75 ) ; xx [ 72 ] = xx [
786 ] + xx [ 75 ] ; xx [ 79 ] = xx [ 181 ] - xx [ 72 ] ; xx [ 82 ] = xx [ 787
] + xx [ 76 ] ; xx [ 83 ] = xx [ 182 ] - xx [ 82 ] ; xx [ 75 ] = xx [ 788 ] +
xx [ 77 ] ; xx [ 76 ] = xx [ 183 ] - xx [ 75 ] ; xx [ 181 ] = xx [ 79 ] ; xx
[ 182 ] = xx [ 83 ] ; xx [ 183 ] = xx [ 76 ] ; pm_math_Matrix3x3_xform_ra (
xx + 187 , xx + 181 , xx + 184 ) ; xx [ 187 ] = xx [ 706 ] + xx [ 78 ] ; xx [
188 ] = xx [ 707 ] + xx [ 695 ] ; xx [ 189 ] = xx [ 708 ] + xx [ 785 ] ;
pm_math_Vector3_cross_ra ( xx + 229 , xx + 139 , xx + 190 ) ;
pm_math_Vector3_cross_ra ( xx + 187 , xx + 190 , xx + 139 ) ;
pm_math_Vector3_cross_ra ( xx + 717 , xx + 122 , xx + 187 ) ;
pm_math_Vector3_cross_ra ( xx + 717 , xx + 187 , xx + 193 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 193 , xx + 266 ) ; xx [
193 ] = - xx [ 72 ] ; xx [ 194 ] = - xx [ 82 ] ; xx [ 195 ] = - xx [ 75 ] ;
pm_math_Vector3_cross_ra ( xx + 229 , xx + 193 , xx + 706 ) ; xx [ 72 ] = xx
[ 139 ] + xx [ 266 ] + xx [ 706 ] ; xx [ 75 ] = xx [ 140 ] + xx [ 267 ] + xx
[ 707 ] ; xx [ 77 ] = xx [ 141 ] + xx [ 268 ] + xx [ 708 ] ; xx [ 139 ] = xx
[ 72 ] ; xx [ 140 ] = xx [ 75 ] ; xx [ 141 ] = xx [ 77 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 196 , xx + 139 , xx + 193 ) ; xx [ 78 ] =
xx [ 792 ] - xx [ 800 ] - xx [ 809 ] - xx [ 795 ] - xx [ 822 ] - xx [ 812 ] -
xx [ 835 ] - xx [ 825 ] - xx [ 847 ] - xx [ 838 ] + xx [ 178 ] + xx [ 131 ] +
xx [ 184 ] + xx [ 193 ] ; xx [ 82 ] = state [ 18 ] + xx [ 43 ] ; if ( xx [ 44
] < xx [ 82 ] ) xx [ 82 ] = xx [ 44 ] ; xx [ 105 ] = - ( xx [ 82 ] / xx [ 48
] ) ; if ( xx [ 1 ] < xx [ 105 ] ) xx [ 105 ] = xx [ 1 ] ; xx [ 108 ] = xx [
96 ] * state [ 21 ] ; xx [ 109 ] = xx [ 105 ] * xx [ 105 ] * ( xx [ 67 ] - xx
[ 12 ] * xx [ 105 ] ) * ( ( - xx [ 82 ] == xx [ 44 ] ? xx [ 44 ] : - xx [ 108
] ) - xx [ 173 ] * xx [ 82 ] ) ; if ( xx [ 44 ] > xx [ 109 ] ) xx [ 109 ] =
xx [ 44 ] ; xx [ 82 ] = state [ 18 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 82 ]
) xx [ 82 ] = xx [ 44 ] ; xx [ 105 ] = xx [ 82 ] / xx [ 48 ] ; if ( xx [ 1 ]
< xx [ 105 ] ) xx [ 105 ] = xx [ 1 ] ; xx [ 121 ] = ( xx [ 173 ] * xx [ 82 ]
+ ( xx [ 82 ] == xx [ 44 ] ? xx [ 44 ] : xx [ 108 ] ) ) * xx [ 105 ] * xx [
105 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 105 ] ) ; if ( xx [ 44 ] > xx [ 121 ]
) xx [ 121 ] = xx [ 44 ] ; xx [ 82 ] = xx [ 793 ] - xx [ 801 ] - xx [ 810 ] -
xx [ 796 ] - xx [ 823 ] - xx [ 813 ] - xx [ 836 ] - xx [ 826 ] - xx [ 848 ] -
xx [ 839 ] + xx [ 179 ] + xx [ 132 ] + xx [ 185 ] + xx [ 194 ] ; xx [ 105 ] =
xx [ 794 ] - xx [ 802 ] - xx [ 811 ] - xx [ 797 ] - xx [ 824 ] - xx [ 814 ] -
xx [ 837 ] - xx [ 827 ] - xx [ 849 ] - xx [ 840 ] + xx [ 180 ] + xx [ 133 ] +
xx [ 186 ] + xx [ 195 ] ; xx [ 131 ] = xx [ 78 ] ; xx [ 132 ] = xx [ 82 ] ;
xx [ 133 ] = xx [ 105 ] ; pm_math_Matrix3x3_transposeXform_ra ( xx + 196 , xx
+ 181 , xx + 178 ) ; pm_math_Matrix3x3_xform_ra ( xx + 248 , xx + 139 , xx +
181 ) ; xx [ 108 ] = xx [ 791 ] + xx [ 798 ] - xx [ 806 ] + xx [ 818 ] - xx [
819 ] + xx [ 831 ] - xx [ 832 ] + xx [ 746 ] - xx [ 844 ] + xx [ 101 ] + xx [
178 ] + xx [ 181 ] ; xx [ 101 ] = xx [ 790 ] - xx [ 799 ] - xx [ 807 ] + xx [
735 ] - xx [ 820 ] + xx [ 748 ] - xx [ 833 ] + xx [ 759 ] - xx [ 845 ] + xx [
102 ] + xx [ 179 ] + xx [ 182 ] ; xx [ 102 ] = xx [ 164 ] - xx [ 144 ] - xx [
808 ] + xx [ 172 ] - xx [ 821 ] + xx [ 733 ] - xx [ 834 ] + xx [ 130 ] - xx [
846 ] + xx [ 103 ] + xx [ 180 ] + xx [ 183 ] ; xx [ 139 ] = xx [ 108 ] ; xx [
140 ] = xx [ 101 ] ; xx [ 141 ] = xx [ 102 ] ; xx [ 103 ] = state [ 19 ] + xx
[ 43 ] ; if ( xx [ 44 ] < xx [ 103 ] ) xx [ 103 ] = xx [ 44 ] ; xx [ 128 ] =
- ( xx [ 103 ] / xx [ 48 ] ) ; if ( xx [ 1 ] < xx [ 128 ] ) xx [ 128 ] = xx [
1 ] ; xx [ 130 ] = xx [ 96 ] * state [ 22 ] ; xx [ 134 ] = xx [ 128 ] * xx [
128 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 128 ] ) * ( ( - xx [ 103 ] == xx [ 44
] ? xx [ 44 ] : - xx [ 130 ] ) - xx [ 173 ] * xx [ 103 ] ) ; if ( xx [ 44 ] >
xx [ 134 ] ) xx [ 134 ] = xx [ 44 ] ; xx [ 103 ] = state [ 19 ] - xx [ 43 ] ;
if ( xx [ 44 ] > xx [ 103 ] ) xx [ 103 ] = xx [ 44 ] ; xx [ 128 ] = xx [ 103
] / xx [ 48 ] ; if ( xx [ 1 ] < xx [ 128 ] ) xx [ 128 ] = xx [ 1 ] ; xx [ 144
] = ( xx [ 173 ] * xx [ 103 ] + ( xx [ 103 ] == xx [ 44 ] ? xx [ 44 ] : xx [
130 ] ) ) * xx [ 128 ] * xx [ 128 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 128 ] )
; if ( xx [ 44 ] > xx [ 144 ] ) xx [ 144 ] = xx [ 44 ] ; xx [ 103 ] = state [
20 ] + xx [ 43 ] ; if ( xx [ 44 ] < xx [ 103 ] ) xx [ 103 ] = xx [ 44 ] ; xx
[ 128 ] = - ( xx [ 103 ] / xx [ 48 ] ) ; if ( xx [ 1 ] < xx [ 128 ] ) xx [
128 ] = xx [ 1 ] ; xx [ 130 ] = xx [ 96 ] * state [ 23 ] ; xx [ 145 ] = xx [
128 ] * xx [ 128 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 128 ] ) * ( ( - xx [ 103
] == xx [ 44 ] ? xx [ 44 ] : - xx [ 130 ] ) - xx [ 173 ] * xx [ 103 ] ) ; if
( xx [ 44 ] > xx [ 145 ] ) xx [ 145 ] = xx [ 44 ] ; xx [ 103 ] = state [ 20 ]
- xx [ 43 ] ; if ( xx [ 44 ] > xx [ 103 ] ) xx [ 103 ] = xx [ 44 ] ; xx [ 128
] = xx [ 103 ] / xx [ 48 ] ; if ( xx [ 1 ] < xx [ 128 ] ) xx [ 128 ] = xx [ 1
] ; xx [ 147 ] = ( xx [ 173 ] * xx [ 103 ] + ( xx [ 103 ] == xx [ 44 ] ? xx [
44 ] : xx [ 130 ] ) ) * xx [ 128 ] * xx [ 128 ] * ( xx [ 67 ] - xx [ 12 ] *
xx [ 128 ] ) ; if ( xx [ 44 ] > xx [ 147 ] ) xx [ 147 ] = xx [ 44 ] ; xx [
178 ] = input [ 3 ] - xx [ 41 ] * state [ 21 ] + xx [ 109 ] - xx [ 121 ] - (
pm_math_Vector3_dot_ra ( xx + 223 , xx + 131 ) + pm_math_Vector3_dot_ra ( xx
+ 241 , xx + 139 ) ) ; xx [ 179 ] = input [ 4 ] - xx [ 41 ] * state [ 22 ] +
xx [ 134 ] - xx [ 144 ] - ( pm_math_Vector3_dot_ra ( xx + 269 , xx + 131 ) +
pm_math_Vector3_dot_ra ( xx + 272 , xx + 139 ) ) ; xx [ 180 ] = input [ 5 ] -
xx [ 41 ] * state [ 23 ] + xx [ 145 ] - xx [ 147 ] - ( pm_math_Vector3_dot_ra
( xx + 278 , xx + 131 ) + pm_math_Vector3_dot_ra ( xx + 286 , xx + 139 ) ) ;
solveSymmetricPosDef ( xx + 300 , xx + 178 , 3 , 1 , xx + 130 , xx + 139 ) ;
xx [ 139 ] = xx [ 78 ] + xx [ 126 ] * xx [ 130 ] + xx [ 52 ] * xx [ 131 ] +
xx [ 292 ] * xx [ 132 ] ; xx [ 140 ] = xx [ 82 ] + xx [ 175 ] * xx [ 130 ] +
xx [ 55 ] * xx [ 131 ] + xx [ 293 ] * xx [ 132 ] ; xx [ 141 ] = xx [ 105 ] +
xx [ 177 ] * xx [ 130 ] + xx [ 58 ] * xx [ 131 ] + xx [ 281 ] * xx [ 132 ] ;
pm_math_Quaternion_xform_ra ( xx + 85 , xx + 139 , xx + 177 ) ; xx [ 139 ] =
xx [ 108 ] + xx [ 260 ] * xx [ 130 ] + xx [ 73 ] * xx [ 131 ] + xx [ 282 ] *
xx [ 132 ] ; xx [ 140 ] = xx [ 101 ] + xx [ 261 ] * xx [ 130 ] + xx [ 74 ] *
xx [ 131 ] + xx [ 283 ] * xx [ 132 ] ; xx [ 141 ] = xx [ 102 ] + xx [ 244 ] *
xx [ 130 ] + xx [ 245 ] * xx [ 131 ] + xx [ 294 ] * xx [ 132 ] ;
pm_math_Quaternion_xform_ra ( xx + 85 , xx + 139 , xx + 101 ) ;
pm_math_Vector3_cross_ra ( xx + 122 , xx + 101 , xx + 139 ) ; xx [ 180 ] = xx
[ 30 ] ; xx [ 181 ] = xx [ 353 ] ; xx [ 182 ] = xx [ 363 ] ;
pm_math_Vector3_cross_ra ( xx + 622 , xx + 180 , xx + 183 ) ; xx [ 193 ] = xx
[ 597 ] ; xx [ 194 ] = xx [ 297 ] ; xx [ 195 ] = xx [ 715 ] ;
pm_math_Vector3_cross_ra ( xx + 180 , xx + 193 , xx + 196 ) ; xx [ 30 ] = xx
[ 196 ] + xx [ 716 ] * xx [ 38 ] - xx [ 351 ] * xx [ 27 ] ; xx [ 52 ] = xx [
183 ] - xx [ 30 ] ; xx [ 55 ] = xx [ 197 ] + xx [ 27 ] * xx [ 296 ] ; xx [ 27
] = xx [ 184 ] - xx [ 55 ] ; xx [ 58 ] = xx [ 38 ] * xx [ 296 ] - xx [ 198 ]
; xx [ 38 ] = xx [ 185 ] + xx [ 58 ] ; xx [ 183 ] = xx [ 52 ] ; xx [ 184 ] =
xx [ 27 ] ; xx [ 185 ] = xx [ 38 ] ; pm_math_Matrix3x3_xform_ra ( xx + 232 ,
xx + 183 , xx + 193 ) ; xx [ 196 ] = xx [ 622 ] + xx [ 37 ] ; xx [ 197 ] = xx
[ 623 ] + xx [ 627 ] ; xx [ 198 ] = xx [ 624 ] + xx [ 626 ] ;
pm_math_Vector3_cross_ra ( xx + 275 , xx + 180 , xx + 199 ) ;
pm_math_Vector3_cross_ra ( xx + 196 , xx + 199 , xx + 180 ) ;
pm_math_Vector3_cross_ra ( xx + 651 , xx + 93 , xx + 196 ) ;
pm_math_Vector3_cross_ra ( xx + 651 , xx + 196 , xx + 202 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 202 , xx + 223 ) ; xx [
202 ] = - xx [ 30 ] ; xx [ 203 ] = - xx [ 55 ] ; xx [ 204 ] = xx [ 58 ] ;
pm_math_Vector3_cross_ra ( xx + 275 , xx + 202 , xx + 229 ) ; xx [ 30 ] = xx
[ 180 ] + xx [ 223 ] + xx [ 229 ] ; xx [ 37 ] = xx [ 181 ] + xx [ 224 ] + xx
[ 230 ] ; xx [ 55 ] = xx [ 182 ] + xx [ 225 ] + xx [ 231 ] ; xx [ 180 ] = xx
[ 30 ] ; xx [ 181 ] = xx [ 37 ] ; xx [ 182 ] = xx [ 55 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 309 , xx + 180 , xx + 202 ) ; xx [ 58 ] =
xx [ 723 ] - xx [ 730 ] - xx [ 740 ] - xx [ 727 ] - xx [ 753 ] - xx [ 743 ] -
xx [ 766 ] - xx [ 756 ] - xx [ 778 ] - xx [ 769 ] + xx [ 177 ] + xx [ 139 ] +
xx [ 193 ] + xx [ 202 ] ; xx [ 73 ] = state [ 12 ] + xx [ 43 ] ; if ( xx [ 44
] < xx [ 73 ] ) xx [ 73 ] = xx [ 44 ] ; xx [ 74 ] = - ( xx [ 73 ] / xx [ 48 ]
) ; if ( xx [ 1 ] < xx [ 74 ] ) xx [ 74 ] = xx [ 1 ] ; xx [ 78 ] = xx [ 96 ]
* state [ 15 ] ; xx [ 82 ] = xx [ 74 ] * xx [ 74 ] * ( xx [ 67 ] - xx [ 12 ]
* xx [ 74 ] ) * ( ( - xx [ 73 ] == xx [ 44 ] ? xx [ 44 ] : - xx [ 78 ] ) - xx
[ 173 ] * xx [ 73 ] ) ; if ( xx [ 44 ] > xx [ 82 ] ) xx [ 82 ] = xx [ 44 ] ;
xx [ 73 ] = state [ 12 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 73 ] ) xx [ 73 ]
= xx [ 44 ] ; xx [ 74 ] = xx [ 73 ] / xx [ 48 ] ; if ( xx [ 1 ] < xx [ 74 ] )
xx [ 74 ] = xx [ 1 ] ; xx [ 105 ] = ( xx [ 173 ] * xx [ 73 ] + ( xx [ 73 ] ==
xx [ 44 ] ? xx [ 44 ] : xx [ 78 ] ) ) * xx [ 74 ] * xx [ 74 ] * ( xx [ 67 ] -
xx [ 12 ] * xx [ 74 ] ) ; if ( xx [ 44 ] > xx [ 105 ] ) xx [ 105 ] = xx [ 44
] ; xx [ 73 ] = xx [ 724 ] - xx [ 731 ] - xx [ 741 ] - xx [ 728 ] - xx [ 754
] - xx [ 744 ] - xx [ 767 ] - xx [ 757 ] - xx [ 779 ] - xx [ 770 ] + xx [ 178
] + xx [ 140 ] + xx [ 194 ] + xx [ 203 ] ; xx [ 74 ] = xx [ 725 ] - xx [ 732
] - xx [ 742 ] - xx [ 729 ] - xx [ 755 ] - xx [ 745 ] - xx [ 768 ] - xx [ 758
] - xx [ 780 ] - xx [ 771 ] + xx [ 179 ] + xx [ 141 ] + xx [ 195 ] + xx [ 204
] ; xx [ 139 ] = xx [ 58 ] ; xx [ 140 ] = xx [ 73 ] ; xx [ 141 ] = xx [ 74 ]
; pm_math_Matrix3x3_transposeXform_ra ( xx + 309 , xx + 183 , xx + 177 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 318 , xx + 180 , xx + 183 ) ; xx [ 78 ] =
xx [ 736 ] - xx [ 160 ] - xx [ 737 ] + xx [ 749 ] - xx [ 750 ] + xx [ 762 ] -
xx [ 763 ] + xx [ 681 ] - xx [ 775 ] + xx [ 101 ] + xx [ 177 ] + xx [ 183 ] ;
xx [ 101 ] = xx [ 170 ] + xx [ 722 ] - xx [ 738 ] + xx [ 720 ] - xx [ 751 ] +
xx [ 683 ] - xx [ 764 ] + xx [ 693 ] - xx [ 776 ] + xx [ 102 ] + xx [ 178 ] +
xx [ 184 ] ; xx [ 102 ] = xx [ 120 ] - xx [ 726 ] - xx [ 739 ] + xx [ 669 ] -
xx [ 752 ] + xx [ 670 ] - xx [ 765 ] + xx [ 80 ] - xx [ 777 ] + xx [ 103 ] +
xx [ 179 ] + xx [ 185 ] ; xx [ 159 ] = xx [ 78 ] ; xx [ 160 ] = xx [ 101 ] ;
xx [ 161 ] = xx [ 102 ] ; xx [ 80 ] = state [ 13 ] + xx [ 43 ] ; if ( xx [ 44
] < xx [ 80 ] ) xx [ 80 ] = xx [ 44 ] ; xx [ 103 ] = - ( xx [ 80 ] / xx [ 48
] ) ; if ( xx [ 1 ] < xx [ 103 ] ) xx [ 103 ] = xx [ 1 ] ; xx [ 108 ] = xx [
96 ] * state [ 16 ] ; xx [ 109 ] = xx [ 103 ] * xx [ 103 ] * ( xx [ 67 ] - xx
[ 12 ] * xx [ 103 ] ) * ( ( - xx [ 80 ] == xx [ 44 ] ? xx [ 44 ] : - xx [ 108
] ) - xx [ 173 ] * xx [ 80 ] ) ; if ( xx [ 44 ] > xx [ 109 ] ) xx [ 109 ] =
xx [ 44 ] ; xx [ 80 ] = state [ 13 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 80 ]
) xx [ 80 ] = xx [ 44 ] ; xx [ 103 ] = xx [ 80 ] / xx [ 48 ] ; if ( xx [ 1 ]
< xx [ 103 ] ) xx [ 103 ] = xx [ 1 ] ; xx [ 120 ] = ( xx [ 173 ] * xx [ 80 ]
+ ( xx [ 80 ] == xx [ 44 ] ? xx [ 44 ] : xx [ 108 ] ) ) * xx [ 103 ] * xx [
103 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 103 ] ) ; if ( xx [ 44 ] > xx [ 120 ]
) xx [ 120 ] = xx [ 44 ] ; xx [ 80 ] = state [ 14 ] + xx [ 43 ] ; if ( xx [
44 ] < xx [ 80 ] ) xx [ 80 ] = xx [ 44 ] ; xx [ 103 ] = - ( xx [ 80 ] / xx [
48 ] ) ; if ( xx [ 1 ] < xx [ 103 ] ) xx [ 103 ] = xx [ 1 ] ; xx [ 108 ] = xx
[ 96 ] * state [ 17 ] ; xx [ 121 ] = xx [ 103 ] * xx [ 103 ] * ( xx [ 67 ] -
xx [ 12 ] * xx [ 103 ] ) * ( ( - xx [ 80 ] == xx [ 44 ] ? xx [ 44 ] : - xx [
108 ] ) - xx [ 173 ] * xx [ 80 ] ) ; if ( xx [ 44 ] > xx [ 121 ] ) xx [ 121 ]
= xx [ 44 ] ; xx [ 80 ] = state [ 14 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 80
] ) xx [ 80 ] = xx [ 44 ] ; xx [ 103 ] = xx [ 80 ] / xx [ 48 ] ; if ( xx [ 1
] < xx [ 103 ] ) xx [ 103 ] = xx [ 1 ] ; xx [ 126 ] = ( xx [ 173 ] * xx [ 80
] + ( xx [ 80 ] == xx [ 44 ] ? xx [ 44 ] : xx [ 108 ] ) ) * xx [ 103 ] * xx [
103 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 103 ] ) ; if ( xx [ 44 ] > xx [ 126 ]
) xx [ 126 ] = xx [ 44 ] ; xx [ 169 ] = input [ 6 ] - xx [ 41 ] * state [ 15
] + xx [ 82 ] - xx [ 105 ] - ( pm_math_Vector3_dot_ra ( xx + 257 , xx + 139 )
+ pm_math_Vector3_dot_ra ( xx + 289 , xx + 159 ) ) ; xx [ 170 ] = input [ 7 ]
- xx [ 41 ] * state [ 16 ] + xx [ 109 ] - xx [ 120 ] - (
pm_math_Vector3_dot_ra ( xx + 364 , xx + 139 ) + pm_math_Vector3_dot_ra ( xx
+ 370 , xx + 159 ) ) ; xx [ 171 ] = input [ 8 ] - xx [ 41 ] * state [ 17 ] +
xx [ 121 ] - xx [ 126 ] - ( xx [ 73 ] * xx [ 50 ] + xx [ 74 ] * xx [ 49 ] +
pm_math_Vector3_dot_ra ( xx + 385 , xx + 159 ) ) ; solveSymmetricPosDef ( xx
+ 402 , xx + 169 , 3 , 1 , xx + 139 , xx + 159 ) ; xx [ 159 ] = xx [ 58 ] +
xx [ 97 ] * xx [ 139 ] + xx [ 348 ] * xx [ 140 ] + xx [ 391 ] * xx [ 141 ] ;
xx [ 160 ] = xx [ 73 ] + xx [ 228 ] * xx [ 139 ] + xx [ 376 ] * xx [ 140 ] +
xx [ 392 ] * xx [ 141 ] ; xx [ 161 ] = xx [ 74 ] + xx [ 246 ] * xx [ 139 ] +
xx [ 367 ] * xx [ 140 ] + xx [ 388 ] * xx [ 141 ] ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 159 , xx + 169 ) ; xx [ 159 ] =
xx [ 78 ] + xx [ 298 ] * xx [ 139 ] + xx [ 368 ] * xx [ 140 ] + xx [ 389 ] *
xx [ 141 ] ; xx [ 160 ] = xx [ 101 ] + xx [ 299 ] * xx [ 139 ] + xx [ 369 ] *
xx [ 140 ] + xx [ 390 ] * xx [ 141 ] ; xx [ 161 ] = xx [ 102 ] + xx [ 295 ] *
xx [ 139 ] + xx [ 377 ] * xx [ 140 ] + xx [ 396 ] * xx [ 141 ] ;
pm_math_Quaternion_xform_ra ( xx + 89 , xx + 159 , xx + 101 ) ;
pm_math_Vector3_cross_ra ( xx + 93 , xx + 101 , xx + 159 ) ; xx [ 177 ] = xx
[ 21 ] ; xx [ 178 ] = xx [ 452 ] ; xx [ 179 ] = xx [ 453 ] ;
pm_math_Vector3_cross_ra ( xx + 637 , xx + 177 , xx + 180 ) ; xx [ 183 ] = xx
[ 378 ] ; xx [ 184 ] = xx [ 401 ] ; xx [ 185 ] = xx [ 646 ] ;
pm_math_Vector3_cross_ra ( xx + 177 , xx + 183 , xx + 193 ) ; xx [ 21 ] = xx
[ 193 ] + xx [ 650 ] * xx [ 24 ] - xx [ 450 ] * xx [ 20 ] ; xx [ 58 ] = xx [
180 ] - xx [ 21 ] ; xx [ 73 ] = xx [ 194 ] + xx [ 20 ] * xx [ 400 ] ; xx [ 20
] = xx [ 181 ] - xx [ 73 ] ; xx [ 74 ] = xx [ 24 ] * xx [ 400 ] - xx [ 195 ]
; xx [ 24 ] = xx [ 182 ] + xx [ 74 ] ; xx [ 180 ] = xx [ 58 ] ; xx [ 181 ] =
xx [ 20 ] ; xx [ 182 ] = xx [ 24 ] ; pm_math_Matrix3x3_xform_ra ( xx + 354 ,
xx + 180 , xx + 183 ) ; xx [ 193 ] = xx [ 637 ] + xx [ 23 ] ; xx [ 194 ] = xx
[ 638 ] + xx [ 645 ] ; xx [ 195 ] = xx [ 639 ] + xx [ 640 ] ;
pm_math_Vector3_cross_ra ( xx + 68 , xx + 177 , xx + 202 ) ;
pm_math_Vector3_cross_ra ( xx + 193 , xx + 202 , xx + 177 ) ;
pm_math_Vector3_cross_ra ( xx + 549 , xx + 397 , xx + 193 ) ;
pm_math_Vector3_cross_ra ( xx + 549 , xx + 193 , xx + 223 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 223 , xx + 228 ) ; xx [
223 ] = - xx [ 21 ] ; xx [ 224 ] = - xx [ 73 ] ; xx [ 225 ] = xx [ 74 ] ;
pm_math_Vector3_cross_ra ( xx + 68 , xx + 223 , xx + 231 ) ; xx [ 21 ] = xx [
177 ] + xx [ 228 ] + xx [ 231 ] ; xx [ 23 ] = xx [ 178 ] + xx [ 229 ] + xx [
232 ] ; xx [ 68 ] = xx [ 179 ] + xx [ 230 ] + xx [ 233 ] ; xx [ 177 ] = xx [
21 ] ; xx [ 178 ] = xx [ 23 ] ; xx [ 179 ] = xx [ 68 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 411 , xx + 177 , xx + 223 ) ; xx [ 69 ] =
xx [ 657 ] - xx [ 666 ] - xx [ 675 ] - xx [ 663 ] - xx [ 687 ] - xx [ 678 ] -
xx [ 700 ] - xx [ 690 ] - xx [ 712 ] - xx [ 703 ] + xx [ 169 ] + xx [ 159 ] +
xx [ 183 ] + xx [ 223 ] ; xx [ 70 ] = state [ 6 ] + xx [ 43 ] ; if ( xx [ 44
] < xx [ 70 ] ) xx [ 70 ] = xx [ 44 ] ; xx [ 73 ] = - ( xx [ 70 ] / xx [ 48 ]
) ; if ( xx [ 1 ] < xx [ 73 ] ) xx [ 73 ] = xx [ 1 ] ; xx [ 74 ] = xx [ 96 ]
* state [ 9 ] ; xx [ 78 ] = xx [ 73 ] * xx [ 73 ] * ( xx [ 67 ] - xx [ 12 ] *
xx [ 73 ] ) * ( ( - xx [ 70 ] == xx [ 44 ] ? xx [ 44 ] : - xx [ 74 ] ) - xx [
173 ] * xx [ 70 ] ) ; if ( xx [ 44 ] > xx [ 78 ] ) xx [ 78 ] = xx [ 44 ] ; xx
[ 70 ] = state [ 6 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 70 ] ) xx [ 70 ] =
xx [ 44 ] ; xx [ 73 ] = xx [ 70 ] / xx [ 48 ] ; if ( xx [ 1 ] < xx [ 73 ] )
xx [ 73 ] = xx [ 1 ] ; xx [ 80 ] = ( xx [ 173 ] * xx [ 70 ] + ( xx [ 70 ] ==
xx [ 44 ] ? xx [ 44 ] : xx [ 74 ] ) ) * xx [ 73 ] * xx [ 73 ] * ( xx [ 67 ] -
xx [ 12 ] * xx [ 73 ] ) ; if ( xx [ 44 ] > xx [ 80 ] ) xx [ 80 ] = xx [ 44 ]
; xx [ 70 ] = xx [ 658 ] - xx [ 667 ] - xx [ 676 ] - xx [ 664 ] - xx [ 688 ]
- xx [ 679 ] - xx [ 701 ] - xx [ 691 ] - xx [ 713 ] - xx [ 704 ] + xx [ 170 ]
+ xx [ 160 ] + xx [ 184 ] + xx [ 224 ] ; xx [ 73 ] = xx [ 659 ] - xx [ 668 ]
- xx [ 677 ] - xx [ 665 ] - xx [ 689 ] - xx [ 680 ] - xx [ 702 ] - xx [ 692 ]
- xx [ 714 ] - xx [ 705 ] + xx [ 171 ] + xx [ 161 ] + xx [ 185 ] + xx [ 225 ]
; xx [ 159 ] = xx [ 69 ] ; xx [ 160 ] = xx [ 70 ] ; xx [ 161 ] = xx [ 73 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 411 , xx + 180 , xx + 169 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 420 , xx + 177 , xx + 180 ) ; xx [ 74 ] =
xx [ 660 ] + xx [ 662 ] - xx [ 672 ] + xx [ 661 ] - xx [ 684 ] + xx [ 696 ] -
xx [ 697 ] + xx [ 602 ] - xx [ 709 ] + xx [ 101 ] + xx [ 169 ] + xx [ 180 ] ;
xx [ 82 ] = xx [ 656 ] - xx [ 143 ] - xx [ 673 ] + xx [ 555 ] - xx [ 685 ] +
xx [ 604 ] - xx [ 698 ] + xx [ 625 ] - xx [ 710 ] + xx [ 102 ] + xx [ 170 ] +
xx [ 181 ] ; xx [ 97 ] = xx [ 168 ] - xx [ 57 ] - xx [ 674 ] + xx [ 468 ] -
xx [ 686 ] + xx [ 553 ] - xx [ 699 ] + xx [ 32 ] - xx [ 711 ] + xx [ 103 ] +
xx [ 171 ] + xx [ 182 ] ; xx [ 101 ] = xx [ 74 ] ; xx [ 102 ] = xx [ 82 ] ;
xx [ 103 ] = xx [ 97 ] ; xx [ 32 ] = state [ 7 ] + xx [ 43 ] ; if ( xx [ 44 ]
< xx [ 32 ] ) xx [ 32 ] = xx [ 44 ] ; xx [ 57 ] = - ( xx [ 32 ] / xx [ 48 ] )
; if ( xx [ 1 ] < xx [ 57 ] ) xx [ 57 ] = xx [ 1 ] ; xx [ 105 ] = xx [ 96 ] *
state [ 10 ] ; xx [ 108 ] = xx [ 57 ] * xx [ 57 ] * ( xx [ 67 ] - xx [ 12 ] *
xx [ 57 ] ) * ( ( - xx [ 32 ] == xx [ 44 ] ? xx [ 44 ] : - xx [ 105 ] ) - xx
[ 173 ] * xx [ 32 ] ) ; if ( xx [ 44 ] > xx [ 108 ] ) xx [ 108 ] = xx [ 44 ]
; xx [ 32 ] = state [ 7 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 32 ] ) xx [ 32
] = xx [ 44 ] ; xx [ 57 ] = xx [ 32 ] / xx [ 48 ] ; if ( xx [ 1 ] < xx [ 57 ]
) xx [ 57 ] = xx [ 1 ] ; xx [ 109 ] = ( xx [ 173 ] * xx [ 32 ] + ( xx [ 32 ]
== xx [ 44 ] ? xx [ 44 ] : xx [ 105 ] ) ) * xx [ 57 ] * xx [ 57 ] * ( xx [ 67
] - xx [ 12 ] * xx [ 57 ] ) ; if ( xx [ 44 ] > xx [ 109 ] ) xx [ 109 ] = xx [
44 ] ; xx [ 32 ] = state [ 8 ] + xx [ 43 ] ; if ( xx [ 44 ] < xx [ 32 ] ) xx
[ 32 ] = xx [ 44 ] ; xx [ 57 ] = - ( xx [ 32 ] / xx [ 48 ] ) ; if ( xx [ 1 ]
< xx [ 57 ] ) xx [ 57 ] = xx [ 1 ] ; xx [ 105 ] = xx [ 96 ] * state [ 11 ] ;
xx [ 120 ] = xx [ 57 ] * xx [ 57 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 57 ] ) *
( ( - xx [ 32 ] == xx [ 44 ] ? xx [ 44 ] : - xx [ 105 ] ) - xx [ 173 ] * xx [
32 ] ) ; if ( xx [ 44 ] > xx [ 120 ] ) xx [ 120 ] = xx [ 44 ] ; xx [ 32 ] =
state [ 8 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 32 ] ) xx [ 32 ] = xx [ 44 ]
; xx [ 57 ] = xx [ 32 ] / xx [ 48 ] ; if ( xx [ 1 ] < xx [ 57 ] ) xx [ 57 ] =
xx [ 1 ] ; xx [ 121 ] = ( xx [ 173 ] * xx [ 32 ] + ( xx [ 32 ] == xx [ 44 ] ?
xx [ 44 ] : xx [ 105 ] ) ) * xx [ 57 ] * xx [ 57 ] * ( xx [ 67 ] - xx [ 12 ]
* xx [ 57 ] ) ; if ( xx [ 44 ] > xx [ 121 ] ) xx [ 121 ] = xx [ 44 ] ; xx [
143 ] = input [ 9 ] - xx [ 41 ] * state [ 9 ] + xx [ 78 ] - xx [ 80 ] - (
pm_math_Vector3_dot_ra ( xx + 262 , xx + 159 ) + pm_math_Vector3_dot_ra ( xx
+ 373 , xx + 101 ) ) ; xx [ 144 ] = input [ 10 ] - xx [ 41 ] * state [ 10 ] +
xx [ 108 ] - xx [ 109 ] - ( pm_math_Vector3_dot_ra ( xx + 465 , xx + 159 ) +
pm_math_Vector3_dot_ra ( xx + 471 , xx + 101 ) ) ; xx [ 145 ] = input [ 11 ]
- xx [ 41 ] * state [ 11 ] + xx [ 120 ] - xx [ 121 ] - ( xx [ 70 ] * xx [ 26
] + xx [ 73 ] * xx [ 25 ] + pm_math_Vector3_dot_ra ( xx + 484 , xx + 101 ) )
; solveSymmetricPosDef ( xx + 501 , xx + 143 , 3 , 1 , xx + 101 , xx + 159 )
; xx [ 143 ] = xx [ 69 ] + xx [ 381 ] * xx [ 101 ] + xx [ 447 ] * xx [ 102 ]
+ xx [ 490 ] * xx [ 103 ] ; xx [ 144 ] = xx [ 70 ] + xx [ 393 ] * xx [ 101 ]
+ xx [ 454 ] * xx [ 102 ] + xx [ 491 ] * xx [ 103 ] ; xx [ 145 ] = xx [ 73 ]
+ xx [ 345 ] * xx [ 101 ] + xx [ 455 ] * xx [ 102 ] + xx [ 487 ] * xx [ 103 ]
; pm_math_Quaternion_xform_ra ( xx + 62 , xx + 143 , xx + 159 ) ; xx [ 143 ]
= xx [ 74 ] + xx [ 347 ] * xx [ 101 ] + xx [ 480 ] * xx [ 102 ] + xx [ 488 ]
* xx [ 103 ] ; xx [ 144 ] = xx [ 82 ] + xx [ 394 ] * xx [ 101 ] + xx [ 481 ]
* xx [ 102 ] + xx [ 489 ] * xx [ 103 ] ; xx [ 145 ] = xx [ 97 ] + xx [ 395 ]
* xx [ 101 ] + xx [ 474 ] * xx [ 102 ] + xx [ 495 ] * xx [ 103 ] ;
pm_math_Quaternion_xform_ra ( xx + 62 , xx + 143 , xx + 167 ) ;
pm_math_Vector3_cross_ra ( xx + 397 , xx + 167 , xx + 143 ) ; xx [ 170 ] = xx
[ 46 ] ; xx [ 171 ] = xx [ 380 ] ; xx [ 172 ] = xx [ 463 ] ;
pm_math_Vector3_cross_ra ( xx + 549 , xx + 170 , xx + 177 ) ; xx [ 32 ] = xx
[ 177 ] + xx [ 8 ] * xx [ 464 ] - xx [ 458 ] * xx [ 3 ] ; xx [ 46 ] = xx [ 3
] * xx [ 129 ] + xx [ 178 ] ; xx [ 3 ] = xx [ 179 ] - xx [ 8 ] * xx [ 129 ] ;
xx [ 170 ] = - xx [ 32 ] ; xx [ 171 ] = - xx [ 46 ] ; xx [ 172 ] = - xx [ 3 ]
; pm_math_Matrix3x3_xform_ra ( xx + 564 , xx + 170 , xx + 177 ) ; xx [ 8 ] =
xx [ 56 ] * xx [ 42 ] + xx [ 462 ] * xx [ 45 ] ; xx [ 56 ] = xx [ 45 ] * xx [
4 ] ; xx [ 57 ] = xx [ 42 ] * xx [ 4 ] ; xx [ 180 ] = xx [ 8 ] ; xx [ 181 ] =
- xx [ 56 ] ; xx [ 182 ] = - xx [ 57 ] ; pm_math_Vector3_cross_ra ( xx + 549
, xx + 180 , xx + 183 ) ; xx [ 4 ] = xx [ 183 ] - ( xx [ 3 ] * xx [ 42 ] + xx
[ 45 ] * xx [ 46 ] ) ; xx [ 69 ] = xx [ 184 ] + xx [ 32 ] * xx [ 45 ] ; xx [
45 ] = xx [ 185 ] + xx [ 32 ] * xx [ 42 ] ; xx [ 180 ] = xx [ 4 ] ; xx [ 181
] = xx [ 69 ] ; xx [ 182 ] = xx [ 45 ] ; pm_math_Matrix3x3_xform_ra ( xx +
510 , xx + 180 , xx + 183 ) ; xx [ 42 ] = xx [ 561 ] - xx [ 558 ] * xx [ 654
] + xx [ 556 ] * xx [ 599 ] - xx [ 611 ] - xx [ 616 ] - xx [ 632 ] - xx [ 629
] - xx [ 22 ] * xx [ 53 ] - xx [ 643 ] + xx [ 160 ] + xx [ 144 ] + xx [ 178 ]
+ xx [ 184 ] ; xx [ 70 ] = xx [ 562 ] + xx [ 19 ] * xx [ 654 ] - xx [ 591 ] *
xx [ 599 ] - xx [ 612 ] - xx [ 617 ] - xx [ 633 ] - xx [ 630 ] + xx [ 592 ] *
xx [ 53 ] - xx [ 644 ] + xx [ 161 ] + xx [ 145 ] + xx [ 179 ] + xx [ 185 ] ;
xx [ 184 ] = xx [ 560 ] - ( 0.02933876077043094 * xx [ 34 ] -
2.074016415803327e-3 * xx [ 66 ] ) - ( xx [ 19 ] * xx [ 583 ] - xx [ 558 ] *
xx [ 563 ] ) - ( xx [ 556 ] * xx [ 600 ] - xx [ 591 ] * xx [ 601 ] ) - xx [
610 ] - xx [ 615 ] - xx [ 631 ] - xx [ 628 ] - ( xx [ 592 ] * xx [ 618 ] - xx
[ 22 ] * xx [ 614 ] ) - xx [ 642 ] + xx [ 159 ] + xx [ 143 ] + xx [ 177 ] +
xx [ 183 ] ; xx [ 185 ] = xx [ 42 ] ; xx [ 186 ] = xx [ 70 ] ;
pm_math_Matrix3x3_transposeXform_ra ( xx + 510 , xx + 170 , xx + 143 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 519 , xx + 180 , xx + 159 ) ; xx [ 19 ] =
xx [ 654 ] - xx [ 599 ] + xx [ 605 ] - xx [ 619 ] + xx [ 613 ] - xx [ 634 ] +
xx [ 53 ] - xx [ 647 ] + xx [ 167 ] + xx [ 143 ] + xx [ 159 ] ; xx [ 170 ] =
xx [ 19 ] ; xx [ 171 ] = xx [ 66 ] + xx [ 563 ] - xx [ 600 ] + xx [ 606 ] -
xx [ 620 ] + xx [ 608 ] - xx [ 635 ] + xx [ 614 ] - xx [ 648 ] + xx [ 168 ] +
xx [ 144 ] + xx [ 160 ] ; xx [ 172 ] = xx [ 583 ] - xx [ 34 ] - xx [ 601 ] +
xx [ 589 ] - xx [ 621 ] + xx [ 596 ] - xx [ 636 ] + xx [ 618 ] - xx [ 649 ] +
xx [ 169 ] + xx [ 145 ] + xx [ 161 ] ; xx [ 22 ] = state [ 1 ] + xx [ 43 ] ;
if ( xx [ 44 ] < xx [ 22 ] ) xx [ 22 ] = xx [ 44 ] ; xx [ 34 ] = - ( xx [ 22
] / xx [ 48 ] ) ; if ( xx [ 1 ] < xx [ 34 ] ) xx [ 34 ] = xx [ 1 ] ; xx [ 53
] = xx [ 96 ] * state [ 4 ] ; xx [ 66 ] = xx [ 34 ] * xx [ 34 ] * ( xx [ 67 ]
- xx [ 12 ] * xx [ 34 ] ) * ( ( - xx [ 22 ] == xx [ 44 ] ? xx [ 44 ] : - xx [
53 ] ) - xx [ 173 ] * xx [ 22 ] ) ; if ( xx [ 44 ] > xx [ 66 ] ) xx [ 66 ] =
xx [ 44 ] ; xx [ 22 ] = state [ 1 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 22 ]
) xx [ 22 ] = xx [ 44 ] ; xx [ 34 ] = xx [ 22 ] / xx [ 48 ] ; if ( xx [ 1 ] <
xx [ 34 ] ) xx [ 34 ] = xx [ 1 ] ; xx [ 73 ] = ( xx [ 173 ] * xx [ 22 ] + (
xx [ 22 ] == xx [ 44 ] ? xx [ 44 ] : xx [ 53 ] ) ) * xx [ 34 ] * xx [ 34 ] *
( xx [ 67 ] - xx [ 12 ] * xx [ 34 ] ) ; if ( xx [ 44 ] > xx [ 73 ] ) xx [ 73
] = xx [ 44 ] ; xx [ 22 ] = state [ 2 ] + xx [ 43 ] ; if ( xx [ 44 ] < xx [
22 ] ) xx [ 22 ] = xx [ 44 ] ; xx [ 34 ] = - ( xx [ 22 ] / xx [ 48 ] ) ; if (
xx [ 1 ] < xx [ 34 ] ) xx [ 34 ] = xx [ 1 ] ; xx [ 53 ] = xx [ 96 ] * state [
5 ] ; xx [ 74 ] = xx [ 34 ] * xx [ 34 ] * ( xx [ 67 ] - xx [ 12 ] * xx [ 34 ]
) * ( ( - xx [ 22 ] == xx [ 44 ] ? xx [ 44 ] : - xx [ 53 ] ) - xx [ 173 ] *
xx [ 22 ] ) ; if ( xx [ 44 ] > xx [ 74 ] ) xx [ 74 ] = xx [ 44 ] ; xx [ 22 ]
= state [ 2 ] - xx [ 43 ] ; if ( xx [ 44 ] > xx [ 22 ] ) xx [ 22 ] = xx [ 44
] ; xx [ 34 ] = xx [ 22 ] / xx [ 48 ] ; if ( xx [ 1 ] < xx [ 34 ] ) xx [ 34 ]
= xx [ 1 ] ; xx [ 43 ] = ( xx [ 173 ] * xx [ 22 ] + ( xx [ 22 ] == xx [ 44 ]
? xx [ 44 ] : xx [ 53 ] ) ) * xx [ 34 ] * xx [ 34 ] * ( xx [ 67 ] - xx [ 12 ]
* xx [ 34 ] ) ; if ( xx [ 44 ] > xx [ 43 ] ) xx [ 43 ] = xx [ 44 ] ; xx [ 143
] = input [ 12 ] - xx [ 41 ] * state [ 3 ] + xx [ 456 ] - xx [ 457 ] - (
pm_math_Vector3_dot_ra ( xx + 16 , xx + 184 ) + pm_math_Vector3_dot_ra ( xx +
459 , xx + 170 ) ) ; xx [ 144 ] = input [ 13 ] - xx [ 41 ] * state [ 4 ] + xx
[ 66 ] - xx [ 73 ] - ( pm_math_Vector3_dot_ra ( xx + 492 , xx + 184 ) +
pm_math_Vector3_dot_ra ( xx + 546 , xx + 170 ) ) ; xx [ 145 ] = input [ 14 ]
- xx [ 41 ] * state [ 5 ] + xx [ 74 ] - xx [ 43 ] - ( xx [ 42 ] * xx [ 10 ] +
xx [ 70 ] * xx [ 14 ] + xx [ 19 ] * xx [ 557 ] ) ; solveSymmetricPosDef ( xx
+ 573 , xx + 143 , 3 , 1 , xx + 16 , xx + 41 ) ; xx [ 292 ] = xx [ 158 ] ; xx
[ 293 ] = xx [ 499 ] ; xx [ 294 ] = xx [ 559 ] ; xx [ 295 ] = xx [ 162 ] ; xx
[ 296 ] = xx [ 500 ] ; xx [ 297 ] = xx [ 29 ] ; xx [ 298 ] = xx [ 165 ] ; xx
[ 299 ] = xx [ 496 ] ; xx [ 300 ] = xx [ 31 ] ; xx [ 301 ] = xx [ 166 ] ; xx
[ 302 ] = xx [ 497 ] ; xx [ 303 ] = xx [ 35 ] ; xx [ 304 ] = xx [ 346 ] ; xx
[ 305 ] = xx [ 498 ] ; xx [ 306 ] = xx [ 39 ] ; xx [ 307 ] = xx [ 379 ] ; xx
[ 308 ] = xx [ 552 ] ; xx [ 309 ] = xx [ 40 ] ; solveSymmetricPosDef ( xx +
573 , xx + 292 , 3 , 6 , xx + 400 , xx + 39 ) ; xx [ 39 ] = xx [ 409 ] ; xx [
40 ] = xx [ 412 ] ; xx [ 41 ] = xx [ 415 ] ; xx [ 19 ] = 9.806649999999999 ;
xx [ 22 ] = xx [ 19 ] * xx [ 15 ] ; xx [ 29 ] = xx [ 19 ] * xx [ 7 ] ; xx [
31 ] = xx [ 12 ] * ( xx [ 6 ] * xx [ 22 ] + xx [ 29 ] * xx [ 11 ] ) ; xx [ 34
] = ( xx [ 6 ] * xx [ 29 ] - xx [ 22 ] * xx [ 11 ] ) * xx [ 12 ] ; xx [ 6 ] =
( xx [ 22 ] * xx [ 15 ] + xx [ 29 ] * xx [ 7 ] ) * xx [ 12 ] ; xx [ 42 ] = xx
[ 31 ] ; xx [ 43 ] = xx [ 34 ] ; xx [ 44 ] = xx [ 19 ] - xx [ 6 ] ; xx [ 7 ]
= xx [ 16 ] - pm_math_Vector3_dot_ra ( xx + 39 , xx + 42 ) ; xx [ 39 ] = xx [
410 ] ; xx [ 40 ] = xx [ 413 ] ; xx [ 41 ] = xx [ 416 ] ; xx [ 11 ] = xx [ 17
] - pm_math_Vector3_dot_ra ( xx + 39 , xx + 42 ) ; xx [ 15 ] = xx [ 411 ] ;
xx [ 16 ] = xx [ 414 ] ; xx [ 17 ] = xx [ 417 ] ; xx [ 22 ] = xx [ 18 ] -
pm_math_Vector3_dot_ra ( xx + 15 , xx + 42 ) ; xx [ 15 ] = xx [ 528 ] ; xx [
16 ] = xx [ 531 ] ; xx [ 17 ] = xx [ 534 ] ; xx [ 39 ] = xx [ 13 ] * xx [ 7 ]
+ xx [ 470 ] * xx [ 11 ] - xx [ 32 ] ; xx [ 40 ] = xx [ 5 ] * xx [ 7 ] + xx [
475 ] * xx [ 11 ] + xx [ 10 ] * xx [ 22 ] - xx [ 46 ] ; xx [ 41 ] = xx [ 9 ]
* xx [ 7 ] + xx [ 11 ] * xx [ 476 ] + xx [ 14 ] * xx [ 22 ] - xx [ 3 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 39 , xx + 42 ) ; xx [ 143
] = xx [ 537 ] ; xx [ 144 ] = xx [ 540 ] ; xx [ 145 ] = xx [ 543 ] ;
pm_math_Vector3_cross_ra ( xx + 39 , xx + 397 , xx + 158 ) ; xx [ 39 ] = xx [
31 ] + xx [ 7 ] * xx [ 47 ] + xx [ 11 ] * xx [ 469 ] + xx [ 557 ] * xx [ 22 ]
+ xx [ 4 ] + xx [ 158 ] ; xx [ 40 ] = xx [ 34 ] - xx [ 119 ] * xx [ 7 ] - xx
[ 477 ] * xx [ 11 ] + xx [ 69 ] + xx [ 159 ] ; xx [ 41 ] = xx [ 45 ] - ( xx [
6 ] + xx [ 125 ] * xx [ 7 ] + xx [ 478 ] * xx [ 11 ] ) + xx [ 160 ] + xx [ 19
] ; pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 39 , xx + 3 ) ; xx [
6 ] = xx [ 101 ] - ( pm_math_Vector3_dot_ra ( xx + 15 , xx + 42 ) +
pm_math_Vector3_dot_ra ( xx + 143 , xx + 3 ) ) ; xx [ 13 ] = xx [ 529 ] ; xx
[ 14 ] = xx [ 532 ] ; xx [ 15 ] = xx [ 535 ] ; xx [ 16 ] = xx [ 538 ] ; xx [
17 ] = xx [ 541 ] ; xx [ 18 ] = xx [ 544 ] ; xx [ 9 ] = xx [ 102 ] - (
pm_math_Vector3_dot_ra ( xx + 13 , xx + 42 ) + pm_math_Vector3_dot_ra ( xx +
16 , xx + 3 ) ) ; xx [ 13 ] = xx [ 530 ] ; xx [ 14 ] = xx [ 533 ] ; xx [ 15 ]
= xx [ 536 ] ; xx [ 16 ] = xx [ 539 ] ; xx [ 17 ] = xx [ 542 ] ; xx [ 18 ] =
xx [ 545 ] ; xx [ 10 ] = xx [ 103 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx
+ 42 ) + pm_math_Vector3_dot_ra ( xx + 16 , xx + 3 ) ) ; xx [ 13 ] = xx [ 429
] ; xx [ 14 ] = xx [ 432 ] ; xx [ 15 ] = xx [ 435 ] ; xx [ 16 ] = xx [ 42 ] +
xx [ 247 ] * xx [ 6 ] + xx [ 451 ] * xx [ 9 ] + xx [ 58 ] ; xx [ 17 ] = xx [
43 ] + xx [ 33 ] * xx [ 6 ] + xx [ 449 ] * xx [ 9 ] + xx [ 26 ] * xx [ 10 ] +
xx [ 20 ] ; xx [ 18 ] = xx [ 44 ] + xx [ 36 ] * xx [ 6 ] + xx [ 9 ] * xx [
448 ] + xx [ 25 ] * xx [ 10 ] + xx [ 24 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 16 , xx + 24 ) ; xx [ 31
] = xx [ 438 ] ; xx [ 32 ] = xx [ 441 ] ; xx [ 33 ] = xx [ 444 ] ;
pm_math_Vector3_cross_ra ( xx + 16 , xx + 93 , xx + 34 ) ; xx [ 16 ] = xx [ 3
] + xx [ 373 ] * xx [ 6 ] + xx [ 471 ] * xx [ 9 ] + xx [ 479 ] * xx [ 10 ] +
xx [ 21 ] + xx [ 34 ] ; xx [ 17 ] = xx [ 4 ] + xx [ 374 ] * xx [ 6 ] + xx [
472 ] * xx [ 9 ] - xx [ 482 ] * xx [ 10 ] + xx [ 23 ] + xx [ 35 ] ; xx [ 18 ]
= xx [ 5 ] + xx [ 375 ] * xx [ 6 ] + xx [ 473 ] * xx [ 9 ] + xx [ 483 ] * xx
[ 10 ] + xx [ 68 ] + xx [ 36 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 89
, xx + 16 , xx + 3 ) ; xx [ 16 ] = xx [ 139 ] - ( pm_math_Vector3_dot_ra ( xx
+ 13 , xx + 24 ) + pm_math_Vector3_dot_ra ( xx + 31 , xx + 3 ) ) ; xx [ 13 ]
= xx [ 430 ] ; xx [ 14 ] = xx [ 433 ] ; xx [ 15 ] = xx [ 436 ] ; xx [ 31 ] =
xx [ 439 ] ; xx [ 32 ] = xx [ 442 ] ; xx [ 33 ] = xx [ 445 ] ; xx [ 17 ] = xx
[ 140 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx + 24 ) +
pm_math_Vector3_dot_ra ( xx + 31 , xx + 3 ) ) ; xx [ 13 ] = xx [ 431 ] ; xx [
14 ] = xx [ 434 ] ; xx [ 15 ] = xx [ 437 ] ; xx [ 31 ] = xx [ 440 ] ; xx [ 32
] = xx [ 443 ] ; xx [ 33 ] = xx [ 446 ] ; xx [ 18 ] = xx [ 141 ] - (
pm_math_Vector3_dot_ra ( xx + 13 , xx + 24 ) + pm_math_Vector3_dot_ra ( xx +
31 , xx + 3 ) ) ; xx [ 13 ] = xx [ 327 ] ; xx [ 14 ] = xx [ 330 ] ; xx [ 15 ]
= xx [ 333 ] ; xx [ 31 ] = xx [ 24 ] + xx [ 226 ] * xx [ 16 ] + xx [ 352 ] *
xx [ 17 ] + xx [ 52 ] ; xx [ 32 ] = xx [ 25 ] + xx [ 227 ] * xx [ 16 ] + xx [
350 ] * xx [ 17 ] + xx [ 50 ] * xx [ 18 ] + xx [ 27 ] ; xx [ 33 ] = xx [ 26 ]
+ xx [ 51 ] * xx [ 16 ] - xx [ 17 ] * xx [ 349 ] + xx [ 49 ] * xx [ 18 ] + xx
[ 38 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 31 , xx + 23 ) ;
xx [ 34 ] = xx [ 336 ] ; xx [ 35 ] = xx [ 339 ] ; xx [ 36 ] = xx [ 342 ] ;
pm_math_Vector3_cross_ra ( xx + 31 , xx + 122 , xx + 38 ) ; xx [ 31 ] = xx [
3 ] + xx [ 289 ] * xx [ 16 ] + xx [ 370 ] * xx [ 17 ] + xx [ 382 ] * xx [ 18
] + xx [ 30 ] + xx [ 38 ] ; xx [ 32 ] = xx [ 4 ] + xx [ 290 ] * xx [ 16 ] +
xx [ 371 ] * xx [ 17 ] + xx [ 383 ] * xx [ 18 ] + xx [ 37 ] + xx [ 39 ] ; xx
[ 33 ] = xx [ 5 ] + xx [ 291 ] * xx [ 16 ] + xx [ 372 ] * xx [ 17 ] - xx [
384 ] * xx [ 18 ] + xx [ 55 ] + xx [ 40 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 31 , xx + 3 ) ; xx [ 20 ]
= xx [ 130 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx + 23 ) +
pm_math_Vector3_dot_ra ( xx + 34 , xx + 3 ) ) ; xx [ 13 ] = xx [ 328 ] ; xx [
14 ] = xx [ 331 ] ; xx [ 15 ] = xx [ 334 ] ; xx [ 29 ] = xx [ 337 ] ; xx [ 30
] = xx [ 340 ] ; xx [ 31 ] = xx [ 343 ] ; xx [ 21 ] = xx [ 131 ] - (
pm_math_Vector3_dot_ra ( xx + 13 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
29 , xx + 3 ) ) ; xx [ 13 ] = xx [ 329 ] ; xx [ 14 ] = xx [ 332 ] ; xx [ 15 ]
= xx [ 335 ] ; xx [ 29 ] = xx [ 338 ] ; xx [ 30 ] = xx [ 341 ] ; xx [ 31 ] =
xx [ 344 ] ; xx [ 26 ] = xx [ 132 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx
+ 23 ) + pm_math_Vector3_dot_ra ( xx + 29 , xx + 3 ) ) ; xx [ 13 ] = xx [ 205
] ; xx [ 14 ] = xx [ 208 ] ; xx [ 15 ] = xx [ 211 ] ; xx [ 29 ] = xx [ 23 ] +
xx [ 176 ] * xx [ 20 ] + xx [ 269 ] * xx [ 21 ] + xx [ 71 ] * xx [ 26 ] + xx
[ 79 ] ; xx [ 30 ] = xx [ 24 ] + xx [ 174 ] * xx [ 20 ] + xx [ 270 ] * xx [
21 ] + xx [ 61 ] * xx [ 26 ] + xx [ 83 ] ; xx [ 31 ] = xx [ 25 ] + xx [ 60 ]
* xx [ 20 ] + xx [ 271 ] * xx [ 21 ] + xx [ 59 ] * xx [ 26 ] + xx [ 76 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 29 , xx + 23 ) ; xx [ 32
] = xx [ 214 ] ; xx [ 33 ] = xx [ 217 ] ; xx [ 34 ] = xx [ 220 ] ;
pm_math_Vector3_cross_ra ( xx + 29 , xx + 155 , xx + 35 ) ; xx [ 29 ] = xx [
3 ] + xx [ 241 ] * xx [ 20 ] + xx [ 272 ] * xx [ 21 ] + xx [ 265 ] * xx [ 26
] + xx [ 72 ] + xx [ 35 ] ; xx [ 30 ] = xx [ 4 ] + xx [ 242 ] * xx [ 20 ] +
xx [ 273 ] * xx [ 21 ] - xx [ 284 ] * xx [ 26 ] + xx [ 75 ] + xx [ 36 ] ; xx
[ 31 ] = xx [ 5 ] + xx [ 243 ] * xx [ 20 ] + xx [ 274 ] * xx [ 21 ] - xx [
285 ] * xx [ 26 ] + xx [ 77 ] + xx [ 37 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 29 , xx + 3 ) ; xx [ 27
] = xx [ 111 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx + 23 ) +
pm_math_Vector3_dot_ra ( xx + 32 , xx + 3 ) ) ; xx [ 13 ] = xx [ 206 ] ; xx [
14 ] = xx [ 209 ] ; xx [ 15 ] = xx [ 212 ] ; xx [ 29 ] = xx [ 215 ] ; xx [ 30
] = xx [ 218 ] ; xx [ 31 ] = xx [ 221 ] ; xx [ 32 ] = xx [ 112 ] - (
pm_math_Vector3_dot_ra ( xx + 13 , xx + 23 ) + pm_math_Vector3_dot_ra ( xx +
29 , xx + 3 ) ) ; xx [ 13 ] = xx [ 207 ] ; xx [ 14 ] = xx [ 210 ] ; xx [ 15 ]
= xx [ 213 ] ; xx [ 29 ] = xx [ 216 ] ; xx [ 30 ] = xx [ 219 ] ; xx [ 31 ] =
xx [ 222 ] ; xx [ 33 ] = xx [ 113 ] - ( pm_math_Vector3_dot_ra ( xx + 13 , xx
+ 23 ) + pm_math_Vector3_dot_ra ( xx + 29 , xx + 3 ) ) ; xx [ 34 ] = - xx [
1437 ] ; xx [ 35 ] = - xx [ 1438 ] ; xx [ 36 ] = - xx [ 1439 ] ; xx [ 37 ] =
- xx [ 1440 ] ; xx [ 13 ] = 2.754391631453844e-11 ; xx [ 14 ] = -
0.03241958876449764 ; xx [ 15 ] = - 0.09283153363117916 ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 13 , xx + 29 ) ; xx [ 38 ] =
0.079 ; xx [ 39 ] = 0.8864576416015625 ; xx [ 40 ] = 0.9994226636119462 ; xx
[ 41 ] = 0.03397557150075099 ; xx [ 42 ] = - 3.268676406922499e-11 ; xx [ 43
] = - 2.051400253076505e-10 ; pm_math_Quaternion_compose_ra ( xx + 34 , xx +
40 , xx + 44 ) ; xx [ 40 ] = ( xx [ 45 ] * xx [ 47 ] + xx [ 44 ] * xx [ 46 ]
) * xx [ 12 ] ; xx [ 41 ] = 0.99999999999999 ; bb [ 0 ] = fabs ( xx [ 40 ] )
> xx [ 41 ] ; xx [ 42 ] = xx [ 46 ] * xx [ 47 ] ; xx [ 43 ] = xx [ 44 ] * xx
[ 45 ] ; xx [ 48 ] = xx [ 44 ] * xx [ 44 ] ; xx [ 49 ] = ( xx [ 48 ] + xx [
46 ] * xx [ 46 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 50 ] = ( xx [ 42 ] + xx [ 43
] ) * xx [ 12 ] ; xx [ 49 ] = ( xx [ 50 ] == 0.0 && xx [ 49 ] == 0.0 ) ? 0.0
: atan2 ( xx [ 50 ] , xx [ 49 ] ) ; xx [ 50 ] = ( xx [ 48 ] + xx [ 47 ] * xx
[ 47 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 51 ] = - ( xx [ 12 ] * ( xx [ 42 ] -
xx [ 43 ] ) ) ; xx [ 50 ] = ( xx [ 51 ] == 0.0 && xx [ 50 ] == 0.0 ) ? 0.0 :
atan2 ( xx [ 51 ] , xx [ 50 ] ) ; xx [ 42 ] = bb [ 0 ] ? xx [ 2 ] * xx [ 49 ]
: xx [ 50 ] ; xx [ 43 ] = 1.570796326794897 ; xx [ 49 ] = ( ( cos ( state [
31 ] ) ) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 50 ] = xx [ 43 ] * ( xx [ 1 ] - xx [
49 ] ) ; if ( xx [ 40 ] < 0.0 ) xx [ 51 ] = - 1.0 ; else if ( xx [ 40 ] > 0.0
) xx [ 51 ] = + 1.0 ; else xx [ 51 ] = 0.0 ; xx [ 52 ] = fabs ( xx [ 40 ] ) >
1.0 ? atan2 ( xx [ 40 ] , 0.0 ) : asin ( xx [ 40 ] ) ; xx [ 40 ] = bb [ 0 ] ?
xx [ 43 ] * xx [ 51 ] : xx [ 52 ] ; xx [ 52 ] = ( xx [ 48 ] + xx [ 45 ] * xx
[ 45 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 53 ] = - ( xx [ 12 ] * ( xx [ 45 ] *
xx [ 46 ] - xx [ 44 ] * xx [ 47 ] ) ) ; xx [ 52 ] = ( xx [ 53 ] == 0.0 && xx
[ 52 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 53 ] , xx [ 52 ] ) ; xx [ 44 ] = bb [ 0
] ? xx [ 51 ] * xx [ 42 ] : xx [ 52 ] ; xx [ 45 ] = xx [ 44 ] - ( xx [ 44 ] <
0.0 ? - 1.0 : + 1.0 ) * xx [ 50 ] ; xx [ 46 ] = xx [ 193 ] + xx [ 8 ] ; xx [
47 ] = xx [ 194 ] - xx [ 56 ] ; xx [ 48 ] = xx [ 195 ] - xx [ 57 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 62 , xx + 46 , xx + 51 ) ; xx [ 46
] = xx [ 196 ] + xx [ 51 ] + xx [ 202 ] ; xx [ 47 ] = xx [ 197 ] + xx [ 52 ]
+ xx [ 203 ] ; xx [ 48 ] = xx [ 198 ] + xx [ 53 ] + xx [ 204 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 89 , xx + 46 , xx + 51 ) ; xx [ 46
] = xx [ 187 ] + xx [ 51 ] + xx [ 199 ] ; xx [ 47 ] = xx [ 188 ] + xx [ 52 ]
+ xx [ 200 ] ; xx [ 48 ] = xx [ 189 ] + xx [ 53 ] + xx [ 201 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 46 , xx + 51 ) ; xx [ 46
] = xx [ 815 ] + xx [ 51 ] + xx [ 190 ] ; xx [ 47 ] = xx [ 816 ] + xx [ 52 ]
+ xx [ 191 ] ; xx [ 48 ] = xx [ 817 ] + xx [ 53 ] + xx [ 192 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 114 , xx + 46 , xx + 51 ) ; xx [ 8
] = xx [ 51 ] + xx [ 772 ] ; pm_math_Vector3_cross_ra ( xx + 13 , xx + 855 ,
xx + 46 ) ; xx [ 44 ] = xx [ 52 ] + xx [ 773 ] ; xx [ 51 ] = xx [ 53 ] + xx [
774 ] ; xx [ 55 ] = xx [ 8 ] - xx [ 46 ] ; xx [ 56 ] = xx [ 44 ] - xx [ 47 ]
; xx [ 57 ] = xx [ 51 ] - xx [ 48 ] ; pm_math_Quaternion_xform_ra ( xx + 34 ,
xx + 55 , xx + 46 ) ; xx [ 52 ] = xx [ 1439 ] * xx [ 1439 ] ; xx [ 53 ] = xx
[ 1440 ] * xx [ 1440 ] ; xx [ 55 ] = xx [ 1 ] - ( xx [ 52 ] + xx [ 53 ] ) *
xx [ 12 ] ; xx [ 56 ] = xx [ 1438 ] * xx [ 1439 ] ; xx [ 57 ] = xx [ 1437 ] *
xx [ 1440 ] ; xx [ 58 ] = xx [ 56 ] - xx [ 57 ] ; xx [ 59 ] = xx [ 12 ] * xx
[ 58 ] ; xx [ 60 ] = xx [ 1437 ] * xx [ 1439 ] ; xx [ 61 ] = xx [ 1438 ] * xx
[ 1440 ] ; xx [ 62 ] = xx [ 60 ] + xx [ 61 ] ; xx [ 63 ] = xx [ 62 ] * xx [
12 ] ; xx [ 64 ] = xx [ 55 ] ; xx [ 65 ] = xx [ 59 ] ; xx [ 66 ] = xx [ 63 ]
; xx [ 67 ] = pm_math_Vector3_dot_ra ( xx + 855 , xx + 64 ) ; xx [ 68 ] =
7.927528481685209e-11 ; xx [ 69 ] = 0.06791191233403736 ; xx [ 70 ] =
0.9976913210823947 ; xx [ 71 ] = - xx [ 68 ] ; xx [ 72 ] = - xx [ 69 ] ; xx [
73 ] = xx [ 70 ] ; xx [ 74 ] = pm_math_Vector3_dot_ra ( xx + 64 , xx + 71 ) ;
xx [ 75 ] = xx [ 1 ] - xx [ 74 ] * xx [ 74 ] ; xx [ 76 ] = xx [ 75 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 855 , xx + 71 ) - xx [ 67 ] * xx [ 74 ]
) / xx [ 75 ] ; xx [ 77 ] = xx [ 67 ] - xx [ 74 ] * xx [ 76 ] ; xx [ 78 ] =
xx [ 2 ] * xx [ 45 ] ; xx [ 79 ] = sin ( xx [ 78 ] ) ; xx [ 85 ] = cos ( xx [
78 ] ) ; xx [ 86 ] = - ( xx [ 68 ] * xx [ 79 ] ) ; xx [ 87 ] = - ( xx [ 69 ]
* xx [ 79 ] ) ; xx [ 88 ] = xx [ 70 ] * xx [ 79 ] ; xx [ 78 ] =
4.07822078033264e-10 ; xx [ 79 ] = xx [ 70 ] ; xx [ 80 ] = xx [ 69 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 85 , xx + 78 , xx + 89 ) ; xx [ 78
] = pm_math_Vector3_dot_ra ( xx + 855 , xx + 89 ) ; xx [ 79 ] = xx [ 3 ] + xx
[ 135 ] * xx [ 27 ] + xx [ 152 ] * xx [ 32 ] - xx [ 138 ] * xx [ 33 ] + xx [
100 ] ; xx [ 3 ] = xx [ 19 ] * xx [ 1438 ] ; xx [ 80 ] = xx [ 19 ] * xx [
1439 ] ; xx [ 82 ] = xx [ 12 ] * ( xx [ 1440 ] * xx [ 3 ] - xx [ 1437 ] * xx
[ 80 ] ) ; xx [ 85 ] = xx [ 8 ] ; xx [ 86 ] = xx [ 44 ] ; xx [ 87 ] = xx [ 51
] ; pm_math_Vector3_cross_ra ( xx + 855 , xx + 85 , xx + 92 ) ; xx [ 85 ] =
xx [ 77 ] * xx [ 55 ] ; xx [ 86 ] = xx [ 59 ] * xx [ 77 ] ; xx [ 87 ] = xx [
63 ] * xx [ 77 ] ; pm_math_Vector3_cross_ra ( xx + 855 , xx + 85 , xx + 95 )
; xx [ 85 ] = - ( xx [ 68 ] * xx [ 76 ] ) ; xx [ 86 ] = - ( xx [ 69 ] * xx [
76 ] ) ; xx [ 87 ] = xx [ 70 ] * xx [ 76 ] ; xx [ 68 ] = xx [ 78 ] * xx [ 89
] ; xx [ 69 ] = xx [ 78 ] * xx [ 90 ] ; xx [ 70 ] = xx [ 78 ] * xx [ 91 ] ;
pm_math_Vector3_cross_ra ( xx + 85 , xx + 68 , xx + 100 ) ; xx [ 68 ] = xx [
95 ] + xx [ 100 ] ; xx [ 69 ] = xx [ 96 ] + xx [ 101 ] ; xx [ 70 ] = xx [ 97
] + xx [ 102 ] ; xx [ 85 ] = - xx [ 68 ] ; xx [ 86 ] = - xx [ 69 ] ; xx [ 87
] = - xx [ 70 ] ; pm_math_Vector3_cross_ra ( xx + 13 , xx + 85 , xx + 95 ) ;
xx [ 83 ] = xx [ 57 ] + xx [ 56 ] ; xx [ 56 ] = xx [ 61 ] - xx [ 60 ] ; xx [
57 ] = xx [ 1438 ] * xx [ 1438 ] ; xx [ 60 ] = xx [ 1 ] - ( xx [ 53 ] + xx [
57 ] ) * xx [ 12 ] ; xx [ 53 ] = xx [ 1437 ] * xx [ 1438 ] ; xx [ 61 ] = xx [
1439 ] * xx [ 1440 ] ; xx [ 85 ] = xx [ 53 ] + xx [ 61 ] ; xx [ 86 ] = xx [
61 ] - xx [ 53 ] ; xx [ 53 ] = xx [ 1 ] - ( xx [ 57 ] + xx [ 52 ] ) * xx [ 12
] ; xx [ 100 ] = xx [ 46 ] * xx [ 55 ] + xx [ 12 ] * xx [ 83 ] * xx [ 47 ] +
xx [ 12 ] * xx [ 48 ] * xx [ 56 ] ; xx [ 101 ] = xx [ 12 ] * xx [ 46 ] * xx [
58 ] + xx [ 47 ] * xx [ 60 ] + xx [ 12 ] * xx [ 85 ] * xx [ 48 ] ; xx [ 102 ]
= xx [ 12 ] * xx [ 62 ] * xx [ 46 ] + xx [ 12 ] * xx [ 47 ] * xx [ 86 ] + xx
[ 48 ] * xx [ 53 ] ; pm_math_Vector3_cross_ra ( xx + 855 , xx + 100 , xx +
111 ) ; xx [ 52 ] = xx [ 23 ] + xx [ 110 ] * xx [ 27 ] + xx [ 149 ] * xx [ 32
] - xx [ 99 ] * xx [ 33 ] + xx [ 146 ] ; xx [ 23 ] = xx [ 24 ] + xx [ 107 ] *
xx [ 27 ] + xx [ 150 ] * xx [ 32 ] - xx [ 98 ] * xx [ 33 ] + xx [ 148 ] ; xx
[ 24 ] = xx [ 25 ] + xx [ 81 ] * xx [ 27 ] + xx [ 151 ] * xx [ 32 ] + xx [ 84
] * xx [ 33 ] + xx [ 104 ] ; xx [ 98 ] = xx [ 52 ] + xx [ 68 ] ; xx [ 99 ] =
xx [ 23 ] + xx [ 69 ] ; xx [ 100 ] = xx [ 24 ] + xx [ 70 ] ;
pm_math_Vector3_cross_ra ( xx + 13 , xx + 98 , xx + 68 ) ; xx [ 13 ] = xx [ 4
] + xx [ 136 ] * xx [ 27 ] + xx [ 153 ] * xx [ 32 ] - xx [ 585 ] * xx [ 33 ]
+ xx [ 106 ] ; xx [ 4 ] = ( xx [ 1437 ] * xx [ 3 ] + xx [ 1440 ] * xx [ 80 ]
) * xx [ 12 ] ; xx [ 14 ] = xx [ 5 ] + xx [ 137 ] * xx [ 27 ] + xx [ 154 ] *
xx [ 32 ] - xx [ 586 ] * xx [ 33 ] + xx [ 127 ] ; xx [ 5 ] = ( xx [ 1438 ] *
xx [ 3 ] + xx [ 1439 ] * xx [ 80 ] ) * xx [ 12 ] ; xx [ 101 ] = xx [ 79 ] - (
xx [ 82 ] + xx [ 92 ] + xx [ 95 ] - xx [ 111 ] ) - xx [ 68 ] ; xx [ 102 ] =
xx [ 13 ] - ( xx [ 4 ] + xx [ 93 ] + xx [ 96 ] - xx [ 112 ] ) - xx [ 69 ] ;
xx [ 103 ] = xx [ 14 ] - ( xx [ 94 ] + xx [ 97 ] - xx [ 113 ] - xx [ 5 ] + xx
[ 19 ] ) - xx [ 70 ] ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 101 , xx
+ 68 ) ; xx [ 3 ] = pm_math_Vector3_dot_ra ( xx + 98 , xx + 64 ) ; xx [ 15 ]
= xx [ 75 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 98 , xx + 71 ) -
xx [ 3 ] * xx [ 74 ] ) / xx [ 75 ] ; pm_math_Quaternion_xform_ra ( xx + 34 ,
xx + 858 , xx + 71 ) ; xx [ 101 ] = - xx [ 867 ] ; xx [ 102 ] = xx [ 865 ] ;
xx [ 103 ] = xx [ 864 ] ; xx [ 104 ] = xx [ 868 ] ;
pm_math_Quaternion_compose_ra ( xx + 34 , xx + 101 , xx + 105 ) ; xx [ 25 ] =
( xx [ 106 ] * xx [ 108 ] + xx [ 105 ] * xx [ 107 ] ) * xx [ 12 ] ; bb [ 0 ]
= fabs ( xx [ 25 ] ) > xx [ 41 ] ; xx [ 41 ] = xx [ 107 ] * xx [ 108 ] ; xx [
57 ] = xx [ 105 ] * xx [ 106 ] ; xx [ 61 ] = xx [ 105 ] * xx [ 105 ] ; xx [
75 ] = ( xx [ 61 ] + xx [ 107 ] * xx [ 107 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [
80 ] = ( xx [ 41 ] + xx [ 57 ] ) * xx [ 12 ] ; xx [ 75 ] = ( xx [ 80 ] == 0.0
&& xx [ 75 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 80 ] , xx [ 75 ] ) ; xx [ 80 ] = (
xx [ 61 ] + xx [ 108 ] * xx [ 108 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 81 ] = -
( xx [ 12 ] * ( xx [ 41 ] - xx [ 57 ] ) ) ; xx [ 80 ] = ( xx [ 81 ] == 0.0 &&
xx [ 80 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 81 ] , xx [ 80 ] ) ; xx [ 41 ] = bb [
0 ] ? xx [ 2 ] * xx [ 75 ] : xx [ 80 ] ; xx [ 57 ] = ( ( cos ( state [ 37 ] )
) < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 75 ] = xx [ 43 ] * ( xx [ 1 ] - xx [ 57 ] )
; if ( xx [ 25 ] < 0.0 ) xx [ 80 ] = - 1.0 ; else if ( xx [ 25 ] > 0.0 ) xx [
80 ] = + 1.0 ; else xx [ 80 ] = 0.0 ; xx [ 81 ] = fabs ( xx [ 25 ] ) > 1.0 ?
atan2 ( xx [ 25 ] , 0.0 ) : asin ( xx [ 25 ] ) ; xx [ 25 ] = bb [ 0 ] ? xx [
43 ] * xx [ 80 ] : xx [ 81 ] ; xx [ 43 ] = ( xx [ 61 ] + xx [ 106 ] * xx [
106 ] ) * xx [ 12 ] - xx [ 1 ] ; xx [ 81 ] = - ( xx [ 12 ] * ( xx [ 106 ] *
xx [ 107 ] - xx [ 105 ] * xx [ 108 ] ) ) ; xx [ 43 ] = ( xx [ 81 ] == 0.0 &&
xx [ 43 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 81 ] , xx [ 43 ] ) ; xx [ 61 ] = bb [
0 ] ? xx [ 80 ] * xx [ 41 ] : xx [ 43 ] ; xx [ 43 ] = xx [ 61 ] - ( xx [ 61 ]
< 0.0 ? - 1.0 : + 1.0 ) * xx [ 75 ] ; pm_math_Vector3_cross_ra ( xx + 858 ,
xx + 855 , xx + 95 ) ; xx [ 101 ] = xx [ 8 ] - xx [ 95 ] ; xx [ 102 ] = xx [
44 ] - xx [ 96 ] ; xx [ 103 ] = xx [ 51 ] - xx [ 97 ] ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 101 , xx + 95 ) ; xx [ 8 ] =
2.57582929823209e-11 ; xx [ 44 ] = 0.184996320402559 ; xx [ 51 ] =
0.982739213340708 ; xx [ 101 ] = xx [ 8 ] ; xx [ 102 ] = xx [ 44 ] ; xx [ 103
] = xx [ 51 ] ; xx [ 61 ] = pm_math_Vector3_dot_ra ( xx + 64 , xx + 101 ) ;
xx [ 80 ] = xx [ 1 ] - xx [ 61 ] * xx [ 61 ] ; xx [ 1 ] = xx [ 80 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 855 , xx + 101 ) - xx [ 67 ] * xx [ 61
] ) / xx [ 80 ] ; xx [ 81 ] = xx [ 67 ] - xx [ 61 ] * xx [ 1 ] ; xx [ 67 ] =
xx [ 2 ] * xx [ 43 ] ; xx [ 2 ] = sin ( xx [ 67 ] ) ; xx [ 104 ] = cos ( xx [
67 ] ) ; xx [ 105 ] = xx [ 8 ] * xx [ 2 ] ; xx [ 106 ] = xx [ 44 ] * xx [ 2 ]
; xx [ 107 ] = xx [ 51 ] * xx [ 2 ] ; xx [ 108 ] = 4.146563855226113e-10 ; xx
[ 109 ] = xx [ 51 ] ; xx [ 110 ] = - xx [ 44 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 104 , xx + 108 , xx + 111 ) ; xx [
2 ] = pm_math_Vector3_dot_ra ( xx + 855 , xx + 111 ) ; xx [ 104 ] = xx [ 81 ]
* xx [ 55 ] ; xx [ 105 ] = xx [ 59 ] * xx [ 81 ] ; xx [ 106 ] = xx [ 63 ] *
xx [ 81 ] ; pm_math_Vector3_cross_ra ( xx + 855 , xx + 104 , xx + 107 ) ; xx
[ 104 ] = xx [ 8 ] * xx [ 1 ] ; xx [ 105 ] = xx [ 44 ] * xx [ 1 ] ; xx [ 106
] = xx [ 51 ] * xx [ 1 ] ; xx [ 114 ] = xx [ 2 ] * xx [ 111 ] ; xx [ 115 ] =
xx [ 2 ] * xx [ 112 ] ; xx [ 116 ] = xx [ 2 ] * xx [ 113 ] ;
pm_math_Vector3_cross_ra ( xx + 104 , xx + 114 , xx + 119 ) ; xx [ 8 ] = xx [
107 ] + xx [ 119 ] ; xx [ 44 ] = xx [ 108 ] + xx [ 120 ] ; xx [ 51 ] = xx [
109 ] + xx [ 121 ] ; xx [ 104 ] = - xx [ 8 ] ; xx [ 105 ] = - xx [ 44 ] ; xx
[ 106 ] = - xx [ 51 ] ; pm_math_Vector3_cross_ra ( xx + 858 , xx + 104 , xx +
107 ) ; xx [ 104 ] = xx [ 95 ] * xx [ 55 ] + xx [ 12 ] * xx [ 83 ] * xx [ 96
] + xx [ 12 ] * xx [ 97 ] * xx [ 56 ] ; xx [ 105 ] = xx [ 12 ] * xx [ 95 ] *
xx [ 58 ] + xx [ 96 ] * xx [ 60 ] + xx [ 12 ] * xx [ 85 ] * xx [ 97 ] ; xx [
106 ] = xx [ 12 ] * xx [ 62 ] * xx [ 95 ] + xx [ 12 ] * xx [ 96 ] * xx [ 86 ]
+ xx [ 97 ] * xx [ 53 ] ; pm_math_Vector3_cross_ra ( xx + 855 , xx + 104 , xx
+ 58 ) ; xx [ 83 ] = xx [ 52 ] + xx [ 8 ] ; xx [ 84 ] = xx [ 23 ] + xx [ 44 ]
; xx [ 85 ] = xx [ 24 ] + xx [ 51 ] ; pm_math_Vector3_cross_ra ( xx + 858 ,
xx + 83 , xx + 51 ) ; xx [ 86 ] = xx [ 79 ] - ( xx [ 82 ] + xx [ 92 ] + xx [
107 ] - xx [ 58 ] ) - xx [ 51 ] ; xx [ 87 ] = xx [ 13 ] - ( xx [ 4 ] + xx [
93 ] + xx [ 108 ] - xx [ 59 ] ) - xx [ 52 ] ; xx [ 88 ] = xx [ 14 ] - ( xx [
94 ] + xx [ 109 ] - xx [ 60 ] - xx [ 5 ] + xx [ 19 ] ) - xx [ 53 ] ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 86 , xx + 12 ) ; xx [ 4 ] =
pm_math_Vector3_dot_ra ( xx + 83 , xx + 64 ) ; xx [ 5 ] = xx [ 80 ] == 0.0 ?
0.0 : ( pm_math_Vector3_dot_ra ( xx + 83 , xx + 101 ) - xx [ 4 ] * xx [ 61 ]
) / xx [ 80 ] ; logVector [ 0 ] = xx [ 0 ] * state [ 0 ] ; logVector [ 1 ] =
xx [ 0 ] * state [ 1 ] ; logVector [ 2 ] = xx [ 0 ] * state [ 2 ] ; logVector
[ 3 ] = xx [ 0 ] * state [ 3 ] ; logVector [ 4 ] = xx [ 0 ] * state [ 4 ] ;
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
= xx [ 0 ] * xx [ 7 ] ; logVector [ 31 ] = xx [ 0 ] * xx [ 11 ] ; logVector [
32 ] = xx [ 0 ] * xx [ 22 ] ; logVector [ 33 ] = xx [ 0 ] * xx [ 6 ] ;
logVector [ 34 ] = xx [ 0 ] * xx [ 9 ] ; logVector [ 35 ] = xx [ 0 ] * xx [
10 ] ; logVector [ 36 ] = xx [ 0 ] * xx [ 16 ] ; logVector [ 37 ] = xx [ 0 ]
* xx [ 17 ] ; logVector [ 38 ] = xx [ 0 ] * xx [ 18 ] ; logVector [ 39 ] = xx
[ 0 ] * xx [ 20 ] ; logVector [ 40 ] = xx [ 0 ] * xx [ 21 ] ; logVector [ 41
] = xx [ 0 ] * xx [ 26 ] ; logVector [ 42 ] = xx [ 0 ] * xx [ 27 ] ;
logVector [ 43 ] = xx [ 0 ] * xx [ 32 ] ; logVector [ 44 ] = xx [ 0 ] * xx [
33 ] ; logVector [ 45 ] = xx [ 584 ] + xx [ 29 ] ; logVector [ 46 ] = xx [
587 ] + xx [ 30 ] - xx [ 38 ] ; logVector [ 47 ] = xx [ 1383 ] + xx [ 31 ] -
xx [ 39 ] ; logVector [ 48 ] = ( state [ 30 ] + pm_math_canonicalAngle ( xx [
42 ] - ( xx [ 42 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 50 ] - state [ 30 ] ) ) *
xx [ 0 ] ; logVector [ 49 ] = ( state [ 31 ] + pm_math_canonicalAngle ( xx [
49 ] * xx [ 40 ] + ( xx [ 40 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 50 ] - state [
31 ] ) ) * xx [ 0 ] ; logVector [ 50 ] = ( state [ 32 ] +
pm_math_canonicalAngle ( xx [ 45 ] - state [ 32 ] ) ) * xx [ 0 ] ; logVector
[ 51 ] = xx [ 46 ] ; logVector [ 52 ] = xx [ 47 ] ; logVector [ 53 ] = xx [
48 ] ; logVector [ 54 ] = xx [ 0 ] * xx [ 77 ] ; logVector [ 55 ] = xx [ 78 ]
* xx [ 0 ] ; logVector [ 56 ] = xx [ 0 ] * xx [ 76 ] ; logVector [ 57 ] = xx
[ 68 ] ; logVector [ 58 ] = xx [ 69 ] ; logVector [ 59 ] = xx [ 70 ] ;
logVector [ 60 ] = xx [ 0 ] * ( xx [ 3 ] - xx [ 74 ] * xx [ 15 ] ) ;
logVector [ 61 ] = pm_math_Vector3_dot_ra ( xx + 98 , xx + 89 ) * xx [ 0 ] ;
logVector [ 62 ] = xx [ 0 ] * xx [ 15 ] ; logVector [ 63 ] = xx [ 584 ] + xx
[ 71 ] ; logVector [ 64 ] = xx [ 587 ] + xx [ 72 ] - xx [ 38 ] ; logVector [
65 ] = xx [ 1383 ] + xx [ 73 ] - xx [ 39 ] ; logVector [ 66 ] = ( state [ 36
] + pm_math_canonicalAngle ( xx [ 41 ] - ( xx [ 41 ] < 0.0 ? - 1.0 : + 1.0 )
* xx [ 75 ] - state [ 36 ] ) ) * xx [ 0 ] ; logVector [ 67 ] = ( state [ 37 ]
+ pm_math_canonicalAngle ( xx [ 57 ] * xx [ 25 ] + ( xx [ 25 ] < 0.0 ? - 1.0
: + 1.0 ) * xx [ 75 ] - state [ 37 ] ) ) * xx [ 0 ] ; logVector [ 68 ] = (
state [ 38 ] + pm_math_canonicalAngle ( xx [ 43 ] - state [ 38 ] ) ) * xx [ 0
] ; logVector [ 69 ] = xx [ 95 ] ; logVector [ 70 ] = xx [ 96 ] ; logVector [
71 ] = xx [ 97 ] ; logVector [ 72 ] = xx [ 0 ] * xx [ 81 ] ; logVector [ 73 ]
= xx [ 2 ] * xx [ 0 ] ; logVector [ 74 ] = xx [ 0 ] * xx [ 1 ] ; logVector [
75 ] = xx [ 12 ] ; logVector [ 76 ] = xx [ 13 ] ; logVector [ 77 ] = xx [ 14
] ; logVector [ 78 ] = xx [ 0 ] * ( xx [ 4 ] - xx [ 61 ] * xx [ 5 ] ) ;
logVector [ 79 ] = pm_math_Vector3_dot_ra ( xx + 83 , xx + 111 ) * xx [ 0 ] ;
logVector [ 80 ] = xx [ 0 ] * xx [ 5 ] ; errorResult [ 0 ] = xx [ 789 ] + xx
[ 721 ] + xx [ 655 ] + xx [ 582 ] + xx [ 594 ] + xx [ 734 ] + xx [ 671 ] + xx
[ 554 ] + xx [ 595 ] + xx [ 609 ] + xx [ 747 ] + xx [ 682 ] + xx [ 603 ] + xx
[ 598 ] + xx [ 607 ] + xx [ 1395 ] + xx [ 590 ] + xx [ 1407 ] + xx [ 593 ] +
xx [ 1454 ] + xx [ 1463 ] + xx [ 1401 ] + xx [ 1389 ] + xx [ 142 ] + xx [ 118
] + xx [ 54 ] + xx [ 28 ] + xx [ 641 ] ; return NULL ; }
