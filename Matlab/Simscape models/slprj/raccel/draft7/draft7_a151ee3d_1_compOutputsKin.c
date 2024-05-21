#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "draft7_a151ee3d_1_geometries.h"
PmfMessageId draft7_a151ee3d_1_compOutputsKin ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * output ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 157 ] ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 9.87654321 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] *
state [ 2 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = xx [ 1 ] * state [ 1 ]
; xx [ 5 ] = cos ( xx [ 4 ] ) ; xx [ 6 ] = 0.9881368157912284 ; xx [ 7 ] = xx
[ 1 ] * state [ 0 ] ; xx [ 8 ] = cos ( xx [ 7 ] ) ; xx [ 9 ] =
0.1535761481414752 ; xx [ 10 ] = sin ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 6 ] * xx
[ 8 ] + xx [ 9 ] * xx [ 10 ] ; xx [ 11 ] = xx [ 5 ] * xx [ 7 ] ; xx [ 12 ] =
0.258564134865625 ; xx [ 13 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 12 ] * xx
[ 13 ] ; xx [ 14 ] = xx [ 9 ] * xx [ 8 ] - xx [ 6 ] * xx [ 10 ] ; xx [ 6 ] =
sin ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 12 ] * xx [ 6 ] ; xx [ 8 ] =
0.9659940932330751 ; xx [ 9 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 14 ] *
xx [ 4 ] - xx [ 9 ] * xx [ 7 ] ; xx [ 10 ] = xx [ 4 ] * xx [ 7 ] + xx [ 14 ]
* xx [ 9 ] ; xx [ 4 ] = xx [ 8 ] * xx [ 13 ] ; xx [ 7 ] = xx [ 3 ] * xx [ 11
] + xx [ 2 ] * xx [ 6 ] + xx [ 10 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 14 ] * xx [
5 ] ; xx [ 5 ] = xx [ 3 ] * xx [ 8 ] + xx [ 4 ] * xx [ 6 ] - xx [ 10 ] * xx [
2 ] ; xx [ 9 ] = xx [ 3 ] * xx [ 6 ] - xx [ 2 ] * xx [ 11 ] - xx [ 8 ] * xx [
4 ] ; xx [ 6 ] = xx [ 10 ] * xx [ 3 ] - xx [ 4 ] * xx [ 11 ] + xx [ 8 ] * xx
[ 2 ] ; xx [ 10 ] = - xx [ 7 ] ; xx [ 11 ] = xx [ 5 ] ; xx [ 12 ] = xx [ 9 ]
; xx [ 13 ] = xx [ 6 ] ; xx [ 2 ] = xx [ 1 ] * state [ 8 ] ; xx [ 3 ] = cos (
xx [ 2 ] ) ; xx [ 4 ] = 0.08149234695961537 ; xx [ 8 ] = xx [ 1 ] * state [ 6
] ; xx [ 14 ] = sin ( xx [ 8 ] ) ; xx [ 15 ] = 0.9966739674472358 ; xx [ 16 ]
= cos ( xx [ 8 ] ) ; xx [ 8 ] = 3.301712910522993e-12 ; xx [ 17 ] = xx [ 4 ]
* xx [ 14 ] - xx [ 15 ] * xx [ 16 ] ; xx [ 18 ] = - ( xx [ 4 ] * xx [ 16 ] +
xx [ 15 ] * xx [ 14 ] ) ; xx [ 19 ] = xx [ 8 ] * xx [ 14 ] ; xx [ 20 ] = - (
xx [ 8 ] * xx [ 16 ] ) ; xx [ 4 ] = xx [ 1 ] * state [ 7 ] ; xx [ 8 ] = sin (
xx [ 4 ] ) ; xx [ 14 ] = 0.9694837936076719 ; xx [ 15 ] = 0.2451554077153451
; xx [ 21 ] = cos ( xx [ 4 ] ) ; xx [ 22 ] = 6.558709267800361e-12 * xx [ 8 ]
; xx [ 23 ] = xx [ 14 ] * xx [ 8 ] ; xx [ 24 ] = - ( xx [ 15 ] * xx [ 8 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 17 , xx + 21 , xx + 25 ) ; xx [ 4 ] =
sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 15 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 14 ] *
xx [ 4 ] ; xx [ 14 ] = xx [ 3 ] * xx [ 25 ] - ( xx [ 27 ] * xx [ 2 ] + xx [
28 ] * xx [ 8 ] ) ; xx [ 15 ] = xx [ 3 ] * xx [ 26 ] + xx [ 27 ] * xx [ 8 ] -
xx [ 28 ] * xx [ 2 ] ; xx [ 16 ] = xx [ 25 ] * xx [ 2 ] + xx [ 3 ] * xx [ 27
] - xx [ 26 ] * xx [ 8 ] ; xx [ 17 ] = xx [ 25 ] * xx [ 8 ] + xx [ 3 ] * xx [
28 ] + xx [ 26 ] * xx [ 2 ] ; pm_math_Quaternion_compose_ra ( xx + 10 , xx +
14 , xx + 18 ) ; xx [ 2 ] = xx [ 1 ] * state [ 14 ] ; xx [ 3 ] = cos ( xx [ 2
] ) ; xx [ 4 ] = 0.1159778701879254 ; xx [ 8 ] = xx [ 1 ] * state [ 12 ] ; xx
[ 22 ] = sin ( xx [ 8 ] ) ; xx [ 23 ] = 0.9932517976961697 ; xx [ 24 ] = cos
( xx [ 8 ] ) ; xx [ 8 ] = 4.654509323289534e-12 ; xx [ 25 ] =
6.655858618855781e-12 * xx [ 22 ] ; xx [ 26 ] = xx [ 4 ] * xx [ 22 ] - xx [
23 ] * xx [ 24 ] ; xx [ 27 ] = - ( xx [ 4 ] * xx [ 24 ] + xx [ 23 ] * xx [ 22
] + xx [ 8 ] * xx [ 25 ] ) ; xx [ 28 ] = xx [ 23 ] * xx [ 25 ] - xx [ 8 ] *
xx [ 22 ] ; xx [ 29 ] = xx [ 8 ] * xx [ 24 ] - xx [ 4 ] * xx [ 25 ] ; xx [ 4
] = xx [ 1 ] * state [ 13 ] ; xx [ 8 ] = sin ( xx [ 4 ] ) ; xx [ 22 ] =
0.9452391332067189 ; xx [ 23 ] = 0.3263785854718576 ; xx [ 30 ] = cos ( xx [
4 ] ) ; xx [ 31 ] = - ( 2.702350965790575e-12 * xx [ 8 ] ) ; xx [ 32 ] = xx [
22 ] * xx [ 8 ] ; xx [ 33 ] = - ( xx [ 23 ] * xx [ 8 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 26 , xx + 30 , xx + 34 ) ; xx [ 4 ] =
sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 23 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 22 ] *
xx [ 4 ] ; xx [ 22 ] = xx [ 3 ] * xx [ 34 ] - ( xx [ 36 ] * xx [ 2 ] + xx [
37 ] * xx [ 8 ] ) ; xx [ 23 ] = xx [ 3 ] * xx [ 35 ] + xx [ 36 ] * xx [ 8 ] -
xx [ 37 ] * xx [ 2 ] ; xx [ 24 ] = xx [ 34 ] * xx [ 2 ] + xx [ 3 ] * xx [ 36
] - xx [ 35 ] * xx [ 8 ] ; xx [ 25 ] = xx [ 34 ] * xx [ 8 ] + xx [ 3 ] * xx [
37 ] + xx [ 35 ] * xx [ 2 ] ; pm_math_Quaternion_compose_ra ( xx + 18 , xx +
22 , xx + 26 ) ; xx [ 2 ] = 0.9961405467325101 ; xx [ 3 ] = xx [ 1 ] * state
[ 18 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 8 ] = 3.201611086326645e-12 ; xx
[ 30 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = 2.826845832587476e-12 * xx [ 30 ] ; xx
[ 31 ] = 0.08777249657755079 ; xx [ 32 ] = 1.028498847019974e-11 ; xx [ 33 ]
= - ( xx [ 2 ] * xx [ 4 ] + xx [ 8 ] * xx [ 3 ] - xx [ 31 ] * xx [ 30 ] ) ;
xx [ 34 ] = - ( xx [ 31 ] * xx [ 4 ] + xx [ 2 ] * xx [ 30 ] + xx [ 32 ] * xx
[ 3 ] ) ; xx [ 35 ] = xx [ 8 ] * xx [ 4 ] - xx [ 2 ] * xx [ 3 ] + xx [ 32 ] *
xx [ 30 ] ; xx [ 36 ] = xx [ 8 ] * xx [ 30 ] - xx [ 32 ] * xx [ 4 ] + xx [ 31
] * xx [ 3 ] ; xx [ 2 ] = xx [ 1 ] * state [ 19 ] ; xx [ 3 ] = sin ( xx [ 2 ]
) ; xx [ 4 ] = 0.9562867924269723 ; xx [ 8 ] = 0.2924304543472392 ; xx [ 37 ]
= cos ( xx [ 2 ] ) ; xx [ 38 ] = 1.596819818085218e-11 * xx [ 3 ] ; xx [ 39 ]
= xx [ 4 ] * xx [ 3 ] ; xx [ 40 ] = - ( xx [ 8 ] * xx [ 3 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 33 , xx + 37 , xx + 41 ) ; xx [ 2 ] = xx
[ 1 ] * state [ 20 ] ; xx [ 3 ] = sin ( xx [ 2 ] ) ; xx [ 30 ] = cos ( xx [ 2
] ) ; xx [ 31 ] = 1.035832709073648e-11 * xx [ 3 ] ; xx [ 32 ] = xx [ 8 ] *
xx [ 3 ] ; xx [ 33 ] = xx [ 4 ] * xx [ 3 ] ; pm_math_Quaternion_compose_ra (
xx + 41 , xx + 30 , xx + 34 ) ; pm_math_Quaternion_compose_ra ( xx + 26 , xx
+ 34 , xx + 30 ) ; xx [ 2 ] = xx [ 1 ] * state [ 24 ] ; xx [ 3 ] = sin ( xx [
2 ] ) ; xx [ 38 ] = cos ( xx [ 2 ] ) ; xx [ 39 ] = xx [ 3 ] ; xx [ 40 ] = - (
1.82992095932877e-11 * xx [ 3 ] ) ; xx [ 41 ] = - ( 5.235917730680519e-12 *
xx [ 3 ] ) ; xx [ 42 ] = 0.9992594490823861 ; xx [ 43 ] = -
0.03847796017939601 ; xx [ 44 ] = 3.657873200514057e-11 ; xx [ 45 ] =
1.959485864323585e-10 ; pm_math_Quaternion_compose_ra ( xx + 38 , xx + 42 ,
xx + 46 ) ; xx [ 2 ] = xx [ 1 ] * state [ 25 ] ; xx [ 3 ] = sin ( xx [ 2 ] )
; xx [ 4 ] = 0.9994592018341244 ; xx [ 8 ] = 0.03288318520300273 ; xx [ 38 ]
= cos ( xx [ 2 ] ) ; xx [ 39 ] = 4.103512650758317e-10 * xx [ 3 ] ; xx [ 40 ]
= xx [ 4 ] * xx [ 3 ] ; xx [ 41 ] = xx [ 8 ] * xx [ 3 ] ;
pm_math_Quaternion_compose_ra ( xx + 46 , xx + 38 , xx + 42 ) ; xx [ 2 ] = xx
[ 1 ] * state [ 26 ] ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx [ 38 ] = cos ( xx [ 2
] ) ; xx [ 39 ] = - ( 6.492504809889092e-11 * xx [ 1 ] ) ; xx [ 40 ] = - ( xx
[ 8 ] * xx [ 1 ] ) ; xx [ 41 ] = xx [ 4 ] * xx [ 1 ] ;
pm_math_Quaternion_compose_ra ( xx + 42 , xx + 38 , xx + 1 ) ; xx [ 38 ] =
3.04214492957313e-11 ; xx [ 39 ] = - 0.02935858602823881 ; xx [ 40 ] = -
0.1242654207645331 ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 38 , xx + 41
) ; xx [ 8 ] = 4.855313199912053e-13 - xx [ 41 ] ; xx [ 38 ] =
0.01419776350117569 - xx [ 42 ] ; xx [ 39 ] = 0.0153662351784256 - xx [ 43 ]
; xx [ 40 ] = xx [ 8 ] ; xx [ 41 ] = xx [ 38 ] ; xx [ 42 ] = xx [ 39 ] ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 40 , xx + 43 ) ; xx [ 40 ] =
2.484784205278315e-13 ; xx [ 41 ] = 0.01055813361575447 ; xx [ 42 ] = -
0.01718904409441589 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 40 , xx +
46 ) ; xx [ 40 ] = 7.111565911668068e-14 + xx [ 46 ] ; xx [ 41 ] =
0.01482354797278426 - xx [ 47 ] ; xx [ 42 ] = 0.01597192626903846 - xx [ 48 ]
; xx [ 46 ] = - xx [ 40 ] ; xx [ 47 ] = xx [ 41 ] ; xx [ 48 ] = xx [ 42 ] ;
pm_math_Quaternion_xform_ra ( xx + 26 , xx + 46 , xx + 49 ) ; xx [ 46 ] = -
3.478043091554657e-14 ; xx [ 47 ] = 8.616599387917045e-3 ; xx [ 48 ] = -
0.01781379291801384 ; pm_math_Quaternion_xform_ra ( xx + 22 , xx + 46 , xx +
52 ) ; xx [ 46 ] = 1.222885353421585e-13 - xx [ 52 ] ; xx [ 47 ] =
0.01371330802384472 - xx [ 53 ] ; xx [ 48 ] = 0.01482112808326479 - xx [ 54 ]
; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 46 , xx + 52 ) ; xx [ 55 ] =
6.664202092713185e-14 ; xx [ 56 ] = 6.161981679940124e-3 ; xx [ 57 ] = -
0.01687376340899878 ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 55 , xx +
58 ) ; xx [ 55 ] = 0.01018286292250497 - xx [ 59 ] ; xx [ 56 ] =
0.01643121746247235 - xx [ 60 ] ; xx [ 59 ] = - xx [ 58 ] ; xx [ 60 ] = xx [
55 ] ; xx [ 61 ] = xx [ 56 ] ; pm_math_Quaternion_xform_ra ( xx + 10 , xx +
59 , xx + 62 ) ; xx [ 57 ] = 0.0187094325596859 ; xx [ 59 ] =
8.538390167322628e-3 ; xx [ 60 ] = xx [ 57 ] * xx [ 9 ] + xx [ 6 ] * xx [ 59
] ; xx [ 65 ] = xx [ 5 ] ; xx [ 66 ] = xx [ 9 ] ; xx [ 67 ] = xx [ 6 ] ; xx [
61 ] = xx [ 57 ] * xx [ 5 ] ; xx [ 57 ] = xx [ 59 ] * xx [ 5 ] ; xx [ 68 ] =
- xx [ 60 ] ; xx [ 69 ] = xx [ 61 ] ; xx [ 70 ] = xx [ 57 ] ;
pm_math_Vector3_cross_ra ( xx + 65 , xx + 68 , xx + 71 ) ; xx [ 59 ] = 2.0 ;
xx [ 68 ] = ( xx [ 7 ] * xx [ 60 ] + xx [ 71 ] ) * xx [ 59 ] ;
pm_math_Quaternion_compose_ra ( xx + 30 , xx + 1 , xx + 74 ) ; xx [ 78 ] = -
xx [ 74 ] ; xx [ 79 ] = - xx [ 75 ] ; xx [ 80 ] = - xx [ 76 ] ; xx [ 81 ] = -
xx [ 77 ] ; xx [ 82 ] = 3.290524933036545e-11 ; xx [ 83 ] =
0.01673590256851844 ; xx [ 84 ] = 0.1971461327241312 ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 82 , xx + 85 ) ; xx [ 60 ] =
0.06197538565817786 - xx [ 59 ] * ( xx [ 72 ] - xx [ 61 ] * xx [ 7 ] ) ; xx [
61 ] = xx [ 63 ] + xx [ 60 ] ; xx [ 69 ] = xx [ 53 ] + xx [ 61 ] ; xx [ 70 ]
= xx [ 50 ] + xx [ 69 ] ; xx [ 78 ] = xx [ 44 ] + xx [ 70 ] ; xx [ 44 ] =
0.9283707866246274 - ( xx [ 73 ] - xx [ 57 ] * xx [ 7 ] ) * xx [ 59 ] ; xx [
50 ] = xx [ 64 ] + xx [ 44 ] ; xx [ 53 ] = xx [ 54 ] + xx [ 50 ] ; xx [ 54 ]
= xx [ 51 ] + xx [ 53 ] ; xx [ 51 ] = xx [ 45 ] + xx [ 54 ] ; xx [ 45 ] =
0.03563872347849285 ; xx [ 57 ] = 0.01759714945393536 ; xx [ 63 ] = xx [ 6 ]
* xx [ 45 ] - xx [ 57 ] * xx [ 9 ] ; xx [ 6 ] = xx [ 57 ] * xx [ 5 ] ; xx [ 9
] = xx [ 45 ] * xx [ 5 ] ; xx [ 71 ] = xx [ 63 ] ; xx [ 72 ] = xx [ 6 ] ; xx
[ 73 ] = - xx [ 9 ] ; pm_math_Vector3_cross_ra ( xx + 65 , xx + 71 , xx + 79
) ; xx [ 5 ] = ( xx [ 79 ] - xx [ 7 ] * xx [ 63 ] ) * xx [ 59 ] - xx [ 68 ] ;
xx [ 63 ] = xx [ 59 ] * ( xx [ 80 ] - xx [ 6 ] * xx [ 7 ] ) - xx [ 45 ] + xx
[ 60 ] - 0.0257594283537832 ; xx [ 6 ] = ( xx [ 9 ] * xx [ 7 ] + xx [ 81 ] )
* xx [ 59 ] - xx [ 57 ] + xx [ 44 ] - 0.906781702449562 ; xx [ 64 ] = -
2.405769667632971e-13 ; xx [ 65 ] = - 0.03983410794452454 ; xx [ 66 ] = -
0.01645986959431302 ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 64 , xx +
71 ) ; xx [ 64 ] = xx [ 71 ] - xx [ 58 ] ; xx [ 65 ] = xx [ 72 ] + xx [ 55 ]
+ 0.0375915374507293 ; xx [ 66 ] = xx [ 73 ] + xx [ 56 ] +
1.590244414800102e-3 ; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 64 , xx +
71 ) ; xx [ 64 ] = 1.167567527306757e-13 ; xx [ 65 ] = - 0.04472798265803164
; xx [ 66 ] = - 0.01492244588929304 ; pm_math_Quaternion_xform_ra ( xx + 22 ,
xx + 64 , xx + 79 ) ; xx [ 64 ] = xx [ 79 ] + xx [ 46 ] +
2.408429233865428e-13 ; xx [ 65 ] = xx [ 80 ] + xx [ 47 ] +
0.04027776673008778 ; xx [ 66 ] = xx [ 81 ] + xx [ 48 ] + 9.50951981748549e-6
; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 64 , xx + 79 ) ; xx [ 64 ] = -
6.841875673243218e-13 ; xx [ 65 ] = - 0.04146091222789498 ; xx [ 66 ] = -
0.01351410150666451 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 64 , xx +
82 ) ; xx [ 64 ] = xx [ 82 ] - xx [ 40 ] - 8.947197148478258e-14 ; xx [ 65 ]
= xx [ 83 ] + xx [ 41 ] + 0.0386335011732275 ; xx [ 66 ] = xx [ 84 ] + xx [
42 ] - 2.940430357145393e-3 ; pm_math_Quaternion_xform_ra ( xx + 26 , xx + 64
, xx + 82 ) ; xx [ 64 ] = 8.599010959602973e-12 ; xx [ 65 ] = -
0.08308907864317851 ; xx [ 66 ] = - 0.1306612955003031 ;
pm_math_Quaternion_xform_ra ( xx + 1 , xx + 64 , xx + 88 ) ; xx [ 64 ] = xx [
88 ] + xx [ 8 ] + 5.287708455224579e-13 ; xx [ 65 ] = xx [ 89 ] + xx [ 38 ] +
0.03767096436270765 ; xx [ 66 ] = xx [ 90 ] + xx [ 39 ] -
2.923671226993926e-3 ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 64 , xx +
88 ) ; xx [ 64 ] = - 0.04008119964598488 ; xx [ 65 ] = - 0.01084940380361654
; xx [ 66 ] = - 9.8613284252828e-4 ; pm_math_Quaternion_xform_ra ( xx + 10 ,
xx + 64 , xx + 91 ) ; xx [ 7 ] = 0.044078899383545 ; xx [ 9 ] = xx [ 91 ] -
xx [ 68 ] + xx [ 7 ] ; xx [ 45 ] = 0.0499199981689453 ; xx [ 57 ] = xx [ 92 ]
+ xx [ 60 ] - xx [ 45 ] ; xx [ 59 ] = 0.919140991210938 ; xx [ 64 ] = xx [ 93
] + xx [ 44 ] - xx [ 59 ] ; xx [ 65 ] = 0.04008119964600713 ; xx [ 66 ] = -
0.01084940380355031 ; xx [ 67 ] = - 9.861328425307225e-4 ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 65 , xx + 91 ) ; xx [ 65 ] = xx
[ 91 ] - xx [ 68 ] - xx [ 7 ] ; xx [ 7 ] = xx [ 92 ] + xx [ 60 ] - xx [ 45 ]
; xx [ 45 ] = xx [ 93 ] + xx [ 44 ] - xx [ 59 ] ; xx [ 91 ] = -
0.03653985023506644 ; xx [ 92 ] = - 0.01645220048935106 ; xx [ 93 ] =
3.239433747529818e-3 ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 91 , xx +
94 ) ; xx [ 91 ] = xx [ 94 ] - xx [ 58 ] + 0.04055699920652953 ; xx [ 92 ] =
xx [ 95 ] + xx [ 55 ] + 0.01302079271818882 ; xx [ 93 ] = xx [ 96 ] + xx [ 56
] - 0.0135421645305857 ; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 91 , xx
+ 94 ) ; xx [ 91 ] = 0.03653985023490417 ; xx [ 92 ] = - 0.01645220048983929
; xx [ 93 ] = 3.239433747517833e-3 ; pm_math_Quaternion_xform_ra ( xx + 14 ,
xx + 91 , xx + 97 ) ; xx [ 91 ] = xx [ 97 ] - xx [ 58 ] - 0.04055699920655626
; xx [ 92 ] = xx [ 98 ] + xx [ 55 ] + 0.0130207927181218 ; xx [ 93 ] = xx [
99 ] + xx [ 56 ] - 0.01354216453058323 ; pm_math_Quaternion_xform_ra ( xx +
10 , xx + 91 , xx + 97 ) ; xx [ 91 ] = - 0.03087794971463731 ; xx [ 92 ] = -
0.01577384625407678 ; xx [ 93 ] = 4.057911382721502e-3 ;
pm_math_Quaternion_xform_ra ( xx + 22 , xx + 91 , xx + 100 ) ; xx [ 91 ] = xx
[ 100 ] + xx [ 46 ] + 0.03492720031745133 ; xx [ 92 ] = xx [ 101 ] + xx [ 47
] + 0.01477959769994918 ; xx [ 93 ] = xx [ 102 ] + xx [ 48 ] -
0.01134881117700549 ; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 91 , xx +
100 ) ; xx [ 91 ] = 0.03087794971468379 ; xx [ 92 ] = - 0.01577384625389952 ;
xx [ 93 ] = 4.057911382755352e-3 ; pm_math_Quaternion_xform_ra ( xx + 22 , xx
+ 91 , xx + 103 ) ; xx [ 91 ] = xx [ 103 ] + xx [ 46 ] - 0.03492470169060014
; xx [ 92 ] = xx [ 104 ] + xx [ 47 ] + 0.01552496039123881 ; xx [ 93 ] = xx [
105 ] + xx [ 48 ] - 0.01167234256981233 ; pm_math_Quaternion_xform_ra ( xx +
18 , xx + 91 , xx + 103 ) ; xx [ 91 ] = - 0.03226754951497003 ; xx [ 92 ] = -
0.02045999852626687 ; xx [ 93 ] = 5.644585224138508e-3 ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 91 , xx + 106 ) ; xx [ 91 ] = xx
[ 106 ] - xx [ 40 ] + 0.03295989990232563 ; xx [ 92 ] = xx [ 107 ] + xx [ 41
] + 0.01601356214963441 ; xx [ 93 ] = xx [ 108 ] + xx [ 42 ] -
0.01475302284708025 ; pm_math_Quaternion_xform_ra ( xx + 26 , xx + 91 , xx +
106 ) ; xx [ 91 ] = 0.03226754951457088 ; xx [ 92 ] = - 0.02045999852744781 ;
xx [ 93 ] = 5.644585223800618e-3 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx
+ 91 , xx + 109 ) ; xx [ 91 ] = xx [ 109 ] - xx [ 40 ] - 0.03295989990236177
; xx [ 92 ] = xx [ 110 ] + xx [ 41 ] + 0.01601356214944519 ; xx [ 93 ] = xx [
111 ] + xx [ 42 ] - 0.01475302284711638 ; pm_math_Quaternion_xform_ra ( xx +
26 , xx + 91 , xx + 109 ) ; xx [ 91 ] = - 0.02788730047518068 ; xx [ 92 ] = -
0.06226499915804137 ; xx [ 93 ] = - 0.1105856995801309 ;
pm_math_Quaternion_xform_ra ( xx + 1 , xx + 91 , xx + 112 ) ; xx [ 91 ] = xx
[ 112 ] + xx [ 8 ] + 0.03234149932875941 ; xx [ 92 ] = xx [ 113 ] + xx [ 38 ]
+ 0.02029712378537596 ; xx [ 93 ] = xx [ 114 ] + xx [ 39 ] -
0.01526834402904475 ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 91 , xx +
112 ) ; xx [ 91 ] = 0.02788730050748512 ; xx [ 92 ] = - 0.06226499918103524 ;
xx [ 93 ] = - 0.1105856995772642 ; pm_math_Quaternion_xform_ra ( xx + 1 , xx
+ 91 , xx + 115 ) ; xx [ 91 ] = xx [ 115 ] + xx [ 8 ] - 0.03234149932846699 ;
xx [ 92 ] = xx [ 116 ] + xx [ 38 ] + 0.02029712378655961 ; xx [ 93 ] = xx [
117 ] + xx [ 39 ] - 0.01526834402870608 ; pm_math_Quaternion_xform_ra ( xx +
30 , xx + 91 , xx + 115 ) ; xx [ 91 ] = 3.885494606759522e-12 ; xx [ 92 ] = -
0.09411462191877414 ; xx [ 93 ] = - 0.1273910586185666 ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 91 , xx + 118 ) ; xx [ 59 ] =
0.019933675415717 ; xx [ 66 ] = 0.904526583782246 ; xx [ 121 ] = -
8.371860108687535e-13 ; xx [ 122 ] = - 0.05202883057027102 ; xx [ 123 ] = -
5.800535526395379e-3 ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 121 , xx
+ 124 ) ; xx [ 127 ] = 1.4285959311088e-13 ; xx [ 128 ] = -
0.05524484988788111 ; xx [ 129 ] = - 7.469488033553544e-3 ;
pm_math_Quaternion_xform_ra ( xx + 26 , xx + 127 , xx + 130 ) ; xx [ 133 ] =
- 3.166185351073283e-13 ; xx [ 134 ] = - 0.0513211464694144 ; xx [ 135 ] = -
0.01219126570664875 ; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 133 , xx +
136 ) ; xx [ 139 ] = - 3.88840995326696e-5 ; xx [ 140 ] = -
0.04658678468440397 ; xx [ 141 ] = - 0.0171197768192325 ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 139 , xx + 142 ) ; xx [ 67 ] =
xx [ 143 ] + xx [ 60 ] - xx [ 59 ] ; xx [ 60 ] = xx [ 144 ] + xx [ 44 ] - xx
[ 66 ] ; xx [ 139 ] = - 2.504410750965726e-12 ; xx [ 140 ] = -
0.09965295527533023 ; xx [ 141 ] = - 0.04748937414644091 ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 139 , xx + 145 ) ; xx [ 139 ] =
2.673753481903913e-12 ; xx [ 140 ] = - 0.09363902851404965 ; xx [ 141 ] = -
0.09999991316511406 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 139 , xx +
148 ) ; xx [ 139 ] = 7.372473583872229e-12 ; xx [ 140 ] = -
0.04536761330787328 ; xx [ 141 ] = 0.1957785797555702 ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 139 , xx + 151 ) ; xx [ 139 ] =
- 1.114658466207941e-12 ; xx [ 140 ] = - 0.07816903966177527 ; xx [ 141 ] =
0.09779984268466979 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 139 , xx +
154 ) ; xx [ 44 ] = xx [ 142 ] - xx [ 68 ] ; pm_math_Quaternion_xform_ra ( xx
+ 14 , xx + 133 , xx + 74 ) ; xx [ 14 ] = xx [ 74 ] - xx [ 58 ] ; xx [ 15 ] =
xx [ 75 ] + xx [ 55 ] + 0.04705808460307085 ; xx [ 16 ] = xx [ 76 ] + xx [ 56
] + 9.875319015864496e-3 ; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 14 ,
xx + 74 ) ; pm_math_Quaternion_xform_ra ( xx + 22 , xx + 127 , xx + 10 ) ; xx
[ 13 ] = xx [ 10 ] + xx [ 46 ] + 3.146640243071065e-13 ; xx [ 14 ] = xx [ 11
] + xx [ 47 ] + 0.05113078984265527 ; xx [ 15 ] = xx [ 12 ] + xx [ 48 ] +
8.028332428854309e-3 ; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 13 , xx +
10 ) ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 121 , xx + 13 ) ; xx [ 16
] = xx [ 13 ] - xx [ 40 ] - 1.392865120001009e-13 ; xx [ 17 ] = xx [ 14 ] +
xx [ 41 ] + 0.05459122458051579 ; xx [ 18 ] = xx [ 15 ] + xx [ 42 ] +
4.374450014251545e-3 ; pm_math_Quaternion_xform_ra ( xx + 26 , xx + 16 , xx +
13 ) ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 91 , xx + 16 ) ; xx [ 1 ]
= xx [ 16 ] + xx [ 8 ] + 7.867570466502235e-13 ; xx [ 2 ] = xx [ 17 ] + xx [
38 ] + 0.05039051001790674 ; xx [ 3 ] = xx [ 18 ] + xx [ 39 ] +
1.894890190564144e-3 ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 1 , xx +
16 ) ; output [ 0 ] = state [ 24 ] ; output [ 2 ] = state [ 25 ] ; output [ 4
] = state [ 26 ] ; output [ 6 ] = state [ 30 ] ; output [ 7 ] = state [ 31 ]
; output [ 8 ] = state [ 32 ] ; output [ 9 ] = state [ 18 ] ; output [ 11 ] =
state [ 19 ] ; output [ 13 ] = state [ 20 ] ; output [ 15 ] = state [ 12 ] ;
output [ 17 ] = state [ 13 ] ; output [ 19 ] = state [ 14 ] ; output [ 21 ] =
state [ 6 ] ; output [ 23 ] = state [ 7 ] ; output [ 25 ] = state [ 8 ] ;
output [ 27 ] = state [ 0 ] ; output [ 29 ] = state [ 1 ] ; output [ 31 ] =
state [ 2 ] ; output [ 39 ] = xx [ 43 ] + xx [ 49 ] + xx [ 52 ] + xx [ 62 ] -
xx [ 68 ] + xx [ 85 ] ; output [ 40 ] = xx [ 78 ] + xx [ 86 ] - 0.079 ;
output [ 41 ] = xx [ 51 ] + xx [ 87 ] - 0.8864576416015625 ; output [ 42 ] =
sqrt ( xx [ 5 ] * xx [ 5 ] + xx [ 63 ] * xx [ 63 ] + xx [ 6 ] * xx [ 6 ] ) ;
output [ 43 ] = sqrt ( xx [ 71 ] * xx [ 71 ] + xx [ 72 ] * xx [ 72 ] + xx [
73 ] * xx [ 73 ] ) ; output [ 44 ] = sqrt ( xx [ 79 ] * xx [ 79 ] + xx [ 80 ]
* xx [ 80 ] + xx [ 81 ] * xx [ 81 ] ) ; output [ 45 ] = sqrt ( xx [ 82 ] * xx
[ 82 ] + xx [ 83 ] * xx [ 83 ] + xx [ 84 ] * xx [ 84 ] ) ; output [ 46 ] =
sqrt ( xx [ 88 ] * xx [ 88 ] + xx [ 89 ] * xx [ 89 ] + xx [ 90 ] * xx [ 90 ]
) ; output [ 47 ] = sqrt ( xx [ 9 ] * xx [ 9 ] + xx [ 57 ] * xx [ 57 ] + xx [
64 ] * xx [ 64 ] ) ; output [ 48 ] = sqrt ( xx [ 65 ] * xx [ 65 ] + xx [ 7 ]
* xx [ 7 ] + xx [ 45 ] * xx [ 45 ] ) ; output [ 49 ] = sqrt ( xx [ 94 ] * xx
[ 94 ] + xx [ 95 ] * xx [ 95 ] + xx [ 96 ] * xx [ 96 ] ) ; output [ 50 ] =
sqrt ( xx [ 97 ] * xx [ 97 ] + xx [ 98 ] * xx [ 98 ] + xx [ 99 ] * xx [ 99 ]
) ; output [ 51 ] = sqrt ( xx [ 100 ] * xx [ 100 ] + xx [ 101 ] * xx [ 101 ]
+ xx [ 102 ] * xx [ 102 ] ) ; output [ 52 ] = sqrt ( xx [ 103 ] * xx [ 103 ]
+ xx [ 104 ] * xx [ 104 ] + xx [ 105 ] * xx [ 105 ] ) ; output [ 53 ] = sqrt
( xx [ 106 ] * xx [ 106 ] + xx [ 107 ] * xx [ 107 ] + xx [ 108 ] * xx [ 108 ]
) ; output [ 54 ] = sqrt ( xx [ 109 ] * xx [ 109 ] + xx [ 110 ] * xx [ 110 ]
+ xx [ 111 ] * xx [ 111 ] ) ; output [ 55 ] = sqrt ( xx [ 112 ] * xx [ 112 ]
+ xx [ 113 ] * xx [ 113 ] + xx [ 114 ] * xx [ 114 ] ) ; output [ 56 ] = sqrt
( xx [ 115 ] * xx [ 115 ] + xx [ 116 ] * xx [ 116 ] + xx [ 117 ] * xx [ 117 ]
) ; output [ 57 ] = xx [ 119 ] + xx [ 78 ] - xx [ 59 ] ; output [ 58 ] = xx [
120 ] + xx [ 51 ] - xx [ 66 ] ; output [ 59 ] = xx [ 125 ] + xx [ 70 ] - xx [
59 ] ; output [ 60 ] = xx [ 126 ] + xx [ 54 ] - xx [ 66 ] ; output [ 61 ] =
xx [ 131 ] + xx [ 69 ] - xx [ 59 ] ; output [ 62 ] = xx [ 132 ] + xx [ 53 ] -
xx [ 66 ] ; output [ 63 ] = xx [ 137 ] + xx [ 61 ] - xx [ 59 ] ; output [ 64
] = xx [ 138 ] + xx [ 50 ] - xx [ 66 ] ; output [ 65 ] = xx [ 67 ] ; output [
66 ] = xx [ 60 ] ; output [ 67 ] = xx [ 146 ] + xx [ 78 ] - xx [ 59 ] ;
output [ 68 ] = xx [ 147 ] + xx [ 51 ] - xx [ 66 ] ; output [ 69 ] = xx [ 149
] + xx [ 78 ] - xx [ 59 ] ; output [ 70 ] = xx [ 150 ] + xx [ 51 ] - xx [ 66
] ; output [ 71 ] = xx [ 152 ] + xx [ 78 ] - xx [ 59 ] ; output [ 72 ] = xx [
153 ] + xx [ 51 ] - xx [ 66 ] ; output [ 73 ] = xx [ 155 ] + xx [ 78 ] - xx [
59 ] ; output [ 74 ] = xx [ 156 ] + xx [ 51 ] - xx [ 66 ] ; output [ 75 ] =
sqrt ( xx [ 44 ] * xx [ 44 ] + xx [ 67 ] * xx [ 67 ] + xx [ 60 ] * xx [ 60 ]
) ; output [ 76 ] = sqrt ( xx [ 74 ] * xx [ 74 ] + xx [ 75 ] * xx [ 75 ] + xx
[ 76 ] * xx [ 76 ] ) ; output [ 77 ] = sqrt ( xx [ 10 ] * xx [ 10 ] + xx [ 11
] * xx [ 11 ] + xx [ 12 ] * xx [ 12 ] ) ; output [ 78 ] = sqrt ( xx [ 13 ] *
xx [ 13 ] + xx [ 14 ] * xx [ 14 ] + xx [ 15 ] * xx [ 15 ] ) ; output [ 79 ] =
sqrt ( xx [ 16 ] * xx [ 16 ] + xx [ 17 ] * xx [ 17 ] + xx [ 18 ] * xx [ 18 ]
) ; return NULL ; }
