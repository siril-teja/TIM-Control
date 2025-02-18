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
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 188 ] ;
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
xx [ 68 ] = ( xx [ 7 ] * xx [ 60 ] + xx [ 71 ] ) * xx [ 59 ] ; xx [ 60 ] = xx
[ 43 ] + xx [ 49 ] + xx [ 52 ] + xx [ 62 ] - xx [ 68 ] ;
pm_math_Quaternion_compose_ra ( xx + 30 , xx + 1 , xx + 74 ) ; xx [ 78 ] = -
xx [ 74 ] ; xx [ 79 ] = - xx [ 75 ] ; xx [ 80 ] = - xx [ 76 ] ; xx [ 81 ] = -
xx [ 77 ] ; xx [ 82 ] = 3.290524933036545e-11 ; xx [ 83 ] =
0.01673590256851844 ; xx [ 84 ] = 0.1971461327241312 ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 82 , xx + 85 ) ; xx [ 69 ] =
0.06197538565817786 - xx [ 59 ] * ( xx [ 72 ] - xx [ 61 ] * xx [ 7 ] ) ; xx [
61 ] = xx [ 63 ] + xx [ 69 ] ; xx [ 70 ] = xx [ 53 ] + xx [ 61 ] ; xx [ 78 ]
= xx [ 50 ] + xx [ 70 ] ; xx [ 79 ] = xx [ 44 ] + xx [ 78 ] ; xx [ 43 ] =
0.9283707866246274 - ( xx [ 73 ] - xx [ 57 ] * xx [ 7 ] ) * xx [ 59 ] ; xx [
44 ] = xx [ 64 ] + xx [ 43 ] ; xx [ 49 ] = xx [ 54 ] + xx [ 44 ] ; xx [ 50 ]
= xx [ 51 ] + xx [ 49 ] ; xx [ 51 ] = xx [ 45 ] + xx [ 50 ] ; xx [ 45 ] =
0.03563872347849285 ; xx [ 52 ] = 0.01759714945393536 ; xx [ 53 ] = xx [ 6 ]
* xx [ 45 ] - xx [ 52 ] * xx [ 9 ] ; xx [ 6 ] = xx [ 52 ] * xx [ 5 ] ; xx [ 9
] = xx [ 45 ] * xx [ 5 ] ; xx [ 62 ] = xx [ 53 ] ; xx [ 63 ] = xx [ 6 ] ; xx
[ 64 ] = - xx [ 9 ] ; pm_math_Vector3_cross_ra ( xx + 65 , xx + 62 , xx + 71
) ; xx [ 5 ] = ( xx [ 71 ] - xx [ 7 ] * xx [ 53 ] ) * xx [ 59 ] - xx [ 68 ] ;
xx [ 53 ] = xx [ 59 ] * ( xx [ 72 ] - xx [ 6 ] * xx [ 7 ] ) - xx [ 45 ] + xx
[ 69 ] - 0.0257594283537832 ; xx [ 6 ] = ( xx [ 9 ] * xx [ 7 ] + xx [ 73 ] )
* xx [ 59 ] - xx [ 52 ] + xx [ 43 ] - 0.906781702449562 ; xx [ 62 ] = -
2.405769667632971e-13 ; xx [ 63 ] = - 0.03983410794452454 ; xx [ 64 ] = -
0.01645986959431302 ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 62 , xx +
65 ) ; xx [ 62 ] = xx [ 65 ] - xx [ 58 ] ; xx [ 63 ] = xx [ 66 ] + xx [ 55 ]
+ 0.0375915374507293 ; xx [ 64 ] = xx [ 67 ] + xx [ 56 ] +
1.590244414800102e-3 ; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 62 , xx +
65 ) ; xx [ 62 ] = 1.167567527306757e-13 ; xx [ 63 ] = - 0.04472798265803164
; xx [ 64 ] = - 0.01492244588929304 ; pm_math_Quaternion_xform_ra ( xx + 22 ,
xx + 62 , xx + 71 ) ; xx [ 62 ] = xx [ 71 ] + xx [ 46 ] +
2.408429233865428e-13 ; xx [ 63 ] = xx [ 72 ] + xx [ 47 ] +
0.04027776673008778 ; xx [ 64 ] = xx [ 73 ] + xx [ 48 ] + 9.50951981748549e-6
; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 62 , xx + 71 ) ; xx [ 62 ] = -
6.841875673243218e-13 ; xx [ 63 ] = - 0.04146091222789498 ; xx [ 64 ] = -
0.01351410150666451 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 62 , xx +
80 ) ; xx [ 62 ] = xx [ 80 ] - xx [ 40 ] - 8.947197148478258e-14 ; xx [ 63 ]
= xx [ 81 ] + xx [ 41 ] + 0.0386335011732275 ; xx [ 64 ] = xx [ 82 ] + xx [
42 ] - 2.940430357145393e-3 ; pm_math_Quaternion_xform_ra ( xx + 26 , xx + 62
, xx + 80 ) ; xx [ 62 ] = 8.599010959602973e-12 ; xx [ 63 ] = -
0.08308907864317851 ; xx [ 64 ] = - 0.1306612955003031 ;
pm_math_Quaternion_xform_ra ( xx + 1 , xx + 62 , xx + 88 ) ; xx [ 62 ] = xx [
88 ] + xx [ 8 ] + 5.287708455224579e-13 ; xx [ 63 ] = xx [ 89 ] + xx [ 38 ] +
0.03767096436270765 ; xx [ 64 ] = xx [ 90 ] + xx [ 39 ] -
2.923671226993926e-3 ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 62 , xx +
88 ) ; xx [ 62 ] = - 0.04008119964598488 ; xx [ 63 ] = - 0.01084940380361654
; xx [ 64 ] = - 9.8613284252828e-4 ; pm_math_Quaternion_xform_ra ( xx + 10 ,
xx + 62 , xx + 91 ) ; xx [ 7 ] = 0.044078899383545 ; xx [ 9 ] = xx [ 91 ] -
xx [ 68 ] + xx [ 7 ] ; xx [ 45 ] = 0.0499199981689453 ; xx [ 52 ] = xx [ 92 ]
+ xx [ 69 ] - xx [ 45 ] ; xx [ 54 ] = 0.919140991210938 ; xx [ 57 ] = xx [ 93
] + xx [ 43 ] - xx [ 54 ] ; xx [ 62 ] = 0.04008119964600713 ; xx [ 63 ] = -
0.01084940380355031 ; xx [ 64 ] = - 9.861328425307225e-4 ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 62 , xx + 91 ) ; xx [ 59 ] = xx
[ 91 ] - xx [ 68 ] - xx [ 7 ] ; xx [ 7 ] = xx [ 92 ] + xx [ 69 ] - xx [ 45 ]
; xx [ 45 ] = xx [ 93 ] + xx [ 43 ] - xx [ 54 ] ; xx [ 62 ] = -
0.03653985023506644 ; xx [ 63 ] = - 0.01645220048935106 ; xx [ 64 ] =
3.239433747529818e-3 ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 62 , xx +
91 ) ; xx [ 62 ] = xx [ 91 ] - xx [ 58 ] + 0.04055699920652953 ; xx [ 63 ] =
xx [ 92 ] + xx [ 55 ] + 0.01302079271818882 ; xx [ 64 ] = xx [ 93 ] + xx [ 56
] - 0.0135421645305857 ; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 62 , xx
+ 91 ) ; xx [ 62 ] = 0.03653985023490417 ; xx [ 63 ] = - 0.01645220048983929
; xx [ 64 ] = 3.239433747517833e-3 ; pm_math_Quaternion_xform_ra ( xx + 14 ,
xx + 62 , xx + 94 ) ; xx [ 62 ] = xx [ 94 ] - xx [ 58 ] - 0.04055699920655626
; xx [ 63 ] = xx [ 95 ] + xx [ 55 ] + 0.0130207927181218 ; xx [ 64 ] = xx [
96 ] + xx [ 56 ] - 0.01354216453058323 ; pm_math_Quaternion_xform_ra ( xx +
10 , xx + 62 , xx + 94 ) ; xx [ 62 ] = - 0.03087794971463731 ; xx [ 63 ] = -
0.01577384625407678 ; xx [ 64 ] = 4.057911382721502e-3 ;
pm_math_Quaternion_xform_ra ( xx + 22 , xx + 62 , xx + 97 ) ; xx [ 62 ] = xx
[ 97 ] + xx [ 46 ] + 0.03492720031745133 ; xx [ 63 ] = xx [ 98 ] + xx [ 47 ]
+ 0.01477959769994918 ; xx [ 64 ] = xx [ 99 ] + xx [ 48 ] -
0.01134881117700549 ; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 62 , xx +
97 ) ; xx [ 62 ] = 0.03087794971468379 ; xx [ 63 ] = - 0.01577384625389952 ;
xx [ 64 ] = 4.057911382755352e-3 ; pm_math_Quaternion_xform_ra ( xx + 22 , xx
+ 62 , xx + 100 ) ; xx [ 62 ] = xx [ 100 ] + xx [ 46 ] - 0.03492470169060014
; xx [ 63 ] = xx [ 101 ] + xx [ 47 ] + 0.01552496039123881 ; xx [ 64 ] = xx [
102 ] + xx [ 48 ] - 0.01167234256981233 ; pm_math_Quaternion_xform_ra ( xx +
18 , xx + 62 , xx + 100 ) ; xx [ 62 ] = - 0.03226754951497003 ; xx [ 63 ] = -
0.02045999852626687 ; xx [ 64 ] = 5.644585224138508e-3 ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 62 , xx + 103 ) ; xx [ 62 ] = xx
[ 103 ] - xx [ 40 ] + 0.03295989990232563 ; xx [ 63 ] = xx [ 104 ] + xx [ 41
] + 0.01601356214963441 ; xx [ 64 ] = xx [ 105 ] + xx [ 42 ] -
0.01475302284708025 ; pm_math_Quaternion_xform_ra ( xx + 26 , xx + 62 , xx +
103 ) ; xx [ 62 ] = 0.03226754951457088 ; xx [ 63 ] = - 0.02045999852744781 ;
xx [ 64 ] = 5.644585223800618e-3 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx
+ 62 , xx + 106 ) ; xx [ 62 ] = xx [ 106 ] - xx [ 40 ] - 0.03295989990236177
; xx [ 63 ] = xx [ 107 ] + xx [ 41 ] + 0.01601356214944519 ; xx [ 64 ] = xx [
108 ] + xx [ 42 ] - 0.01475302284711638 ; pm_math_Quaternion_xform_ra ( xx +
26 , xx + 62 , xx + 106 ) ; xx [ 62 ] = - 0.02788730047518068 ; xx [ 63 ] = -
0.06226499915804137 ; xx [ 64 ] = - 0.1105856995801309 ;
pm_math_Quaternion_xform_ra ( xx + 1 , xx + 62 , xx + 109 ) ; xx [ 62 ] = xx
[ 109 ] + xx [ 8 ] + 0.03234149932875941 ; xx [ 63 ] = xx [ 110 ] + xx [ 38 ]
+ 0.02029712378537596 ; xx [ 64 ] = xx [ 111 ] + xx [ 39 ] -
0.01526834402904475 ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 62 , xx +
109 ) ; xx [ 62 ] = 0.02788730050748512 ; xx [ 63 ] = - 0.06226499918103524 ;
xx [ 64 ] = - 0.1105856995772642 ; pm_math_Quaternion_xform_ra ( xx + 1 , xx
+ 62 , xx + 112 ) ; xx [ 62 ] = xx [ 112 ] + xx [ 8 ] - 0.03234149932846699 ;
xx [ 63 ] = xx [ 113 ] + xx [ 38 ] + 0.02029712378655961 ; xx [ 64 ] = xx [
114 ] + xx [ 39 ] - 0.01526834402870608 ; pm_math_Quaternion_xform_ra ( xx +
30 , xx + 62 , xx + 112 ) ; xx [ 54 ] = 0.01688944435119629 ; xx [ 62 ] =
0.1319682159423828 ; xx [ 63 ] = 0.8089576416015625 ; xx [ 115 ] =
0.01688944443296599 ; xx [ 116 ] = 0.1061533353579484 ; xx [ 117 ] = -
0.0363534993916424 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 115 , xx +
118 ) ; xx [ 115 ] = - 0.01688944426942647 ; xx [ 116 ] = 0.1061533353718742
; xx [ 117 ] = - 0.03635349939337851 ; pm_math_Quaternion_xform_ra ( xx + 74
, xx + 115 , xx + 121 ) ; xx [ 64 ] = 9.709312438964843e-3 ; xx [ 83 ] = -
2.232642650604248e-3 ; xx [ 84 ] = 0.8689576416015625 ; xx [ 115 ] =
9.709312439494935e-3 ; xx [ 116 ] = - 0.08575875923336911 ; xx [ 117 ] =
4.916076512637418e-3 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 115 , xx
+ 124 ) ; xx [ 115 ] = - 9.709312438434646e-3 ; xx [ 116 ] = -
0.0857587592253635 ; xx [ 117 ] = 4.916076511639372e-3 ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 115 , xx + 127 ) ; xx [ 115 ] =
0.06488653564453126 ; xx [ 116 ] = 0.03644176864624023 ; xx [ 117 ] =
0.9499576416015625 ; xx [ 130 ] = 0.1069609375520753 ; xx [ 131 ] =
0.01842456453313058 ; xx [ 132 ] = - 0.1622978990106889 ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 130 , xx + 133 ) ; xx [ 130 ] =
0.1324676666259766 ; xx [ 131 ] = 0.1263068237304688 ; xx [ 132 ] =
0.9199576416015626 ; xx [ 136 ] = 0.09543898773968792 ; xx [ 137 ] = -
0.07942755025287042 ; xx [ 138 ] = - 0.08485896084049524 ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 136 , xx + 139 ) ; xx [ 136 ] =
- 0.1069609374479245 ; xx [ 137 ] = 0.01842456462132292 ; xx [ 138 ] = -
0.1622978990216837 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 136 , xx +
142 ) ; xx [ 136 ] = - 0.09543898772417915 ; xx [ 137 ] = -
0.07942755017417825 ; xx [ 138 ] = - 0.08485896085030567 ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 136 , xx + 145 ) ; xx [ 136 ] =
3.885494606759522e-12 ; xx [ 137 ] = - 0.09411462191877414 ; xx [ 138 ] = -
0.1273910586185666 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 136 , xx +
148 ) ; xx [ 151 ] = 0.019933675415717 ; xx [ 148 ] = 0.904526583782246 ; xx
[ 152 ] = - 8.371860108687535e-13 ; xx [ 153 ] = - 0.05202883057027102 ; xx [
154 ] = - 5.800535526395379e-3 ; pm_math_Quaternion_xform_ra ( xx + 30 , xx +
152 , xx + 155 ) ; xx [ 158 ] = 1.4285959311088e-13 ; xx [ 159 ] = -
0.05524484988788111 ; xx [ 160 ] = - 7.469488033553544e-3 ;
pm_math_Quaternion_xform_ra ( xx + 26 , xx + 158 , xx + 161 ) ; xx [ 164 ] =
- 3.166185351073283e-13 ; xx [ 165 ] = - 0.0513211464694144 ; xx [ 166 ] = -
0.01219126570664875 ; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 164 , xx +
167 ) ; xx [ 170 ] = - 3.88840995326696e-5 ; xx [ 171 ] = -
0.04658678468440397 ; xx [ 172 ] = - 0.0171197768192325 ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 170 , xx + 173 ) ; xx [ 155 ] =
xx [ 174 ] + xx [ 69 ] - xx [ 151 ] ; xx [ 69 ] = xx [ 175 ] + xx [ 43 ] - xx
[ 148 ] ; xx [ 170 ] = - 2.504410750965726e-12 ; xx [ 171 ] = -
0.09965295527533023 ; xx [ 172 ] = - 0.04748937414644091 ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 170 , xx + 176 ) ; xx [ 170 ] =
2.673753481903913e-12 ; xx [ 171 ] = - 0.09363902851404965 ; xx [ 172 ] = -
0.09999991316511406 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 170 , xx +
179 ) ; xx [ 170 ] = 7.372473583872229e-12 ; xx [ 171 ] = -
0.04536761330787328 ; xx [ 172 ] = 0.1957785797555702 ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 170 , xx + 182 ) ; xx [ 170 ] =
- 1.114658466207941e-12 ; xx [ 171 ] = - 0.07816903966177527 ; xx [ 172 ] =
0.09779984268466979 ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 170 , xx +
185 ) ; xx [ 43 ] = xx [ 173 ] - xx [ 68 ] ; pm_math_Quaternion_xform_ra ( xx
+ 14 , xx + 164 , xx + 74 ) ; xx [ 14 ] = xx [ 74 ] - xx [ 58 ] ; xx [ 15 ] =
xx [ 75 ] + xx [ 55 ] + 0.04705808460307085 ; xx [ 16 ] = xx [ 76 ] + xx [ 56
] + 9.875319015864496e-3 ; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 14 ,
xx + 74 ) ; pm_math_Quaternion_xform_ra ( xx + 22 , xx + 158 , xx + 10 ) ; xx
[ 13 ] = xx [ 10 ] + xx [ 46 ] + 3.146640243071065e-13 ; xx [ 14 ] = xx [ 11
] + xx [ 47 ] + 0.05113078984265527 ; xx [ 15 ] = xx [ 12 ] + xx [ 48 ] +
8.028332428854309e-3 ; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 13 , xx +
10 ) ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 152 , xx + 13 ) ; xx [ 16
] = xx [ 13 ] - xx [ 40 ] - 1.392865120001009e-13 ; xx [ 17 ] = xx [ 14 ] +
xx [ 41 ] + 0.05459122458051579 ; xx [ 18 ] = xx [ 15 ] + xx [ 42 ] +
4.374450014251545e-3 ; pm_math_Quaternion_xform_ra ( xx + 26 , xx + 16 , xx +
13 ) ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 136 , xx + 16 ) ; xx [ 1 ]
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
state [ 2 ] ; output [ 39 ] = xx [ 60 ] + xx [ 85 ] ; output [ 40 ] = xx [ 79
] + xx [ 86 ] - 0.079 ; output [ 41 ] = xx [ 51 ] + xx [ 87 ] -
0.8864576416015625 ; output [ 42 ] = sqrt ( xx [ 5 ] * xx [ 5 ] + xx [ 53 ] *
xx [ 53 ] + xx [ 6 ] * xx [ 6 ] ) ; output [ 43 ] = sqrt ( xx [ 65 ] * xx [
65 ] + xx [ 66 ] * xx [ 66 ] + xx [ 67 ] * xx [ 67 ] ) ; output [ 44 ] = sqrt
( xx [ 71 ] * xx [ 71 ] + xx [ 72 ] * xx [ 72 ] + xx [ 73 ] * xx [ 73 ] ) ;
output [ 45 ] = sqrt ( xx [ 80 ] * xx [ 80 ] + xx [ 81 ] * xx [ 81 ] + xx [
82 ] * xx [ 82 ] ) ; output [ 46 ] = sqrt ( xx [ 88 ] * xx [ 88 ] + xx [ 89 ]
* xx [ 89 ] + xx [ 90 ] * xx [ 90 ] ) ; output [ 47 ] = sqrt ( xx [ 9 ] * xx
[ 9 ] + xx [ 52 ] * xx [ 52 ] + xx [ 57 ] * xx [ 57 ] ) ; output [ 48 ] =
sqrt ( xx [ 59 ] * xx [ 59 ] + xx [ 7 ] * xx [ 7 ] + xx [ 45 ] * xx [ 45 ] )
; output [ 49 ] = sqrt ( xx [ 91 ] * xx [ 91 ] + xx [ 92 ] * xx [ 92 ] + xx [
93 ] * xx [ 93 ] ) ; output [ 50 ] = sqrt ( xx [ 94 ] * xx [ 94 ] + xx [ 95 ]
* xx [ 95 ] + xx [ 96 ] * xx [ 96 ] ) ; output [ 51 ] = sqrt ( xx [ 97 ] * xx
[ 97 ] + xx [ 98 ] * xx [ 98 ] + xx [ 99 ] * xx [ 99 ] ) ; output [ 52 ] =
sqrt ( xx [ 100 ] * xx [ 100 ] + xx [ 101 ] * xx [ 101 ] + xx [ 102 ] * xx [
102 ] ) ; output [ 53 ] = sqrt ( xx [ 103 ] * xx [ 103 ] + xx [ 104 ] * xx [
104 ] + xx [ 105 ] * xx [ 105 ] ) ; output [ 54 ] = sqrt ( xx [ 106 ] * xx [
106 ] + xx [ 107 ] * xx [ 107 ] + xx [ 108 ] * xx [ 108 ] ) ; output [ 55 ] =
sqrt ( xx [ 109 ] * xx [ 109 ] + xx [ 110 ] * xx [ 110 ] + xx [ 111 ] * xx [
111 ] ) ; output [ 56 ] = sqrt ( xx [ 112 ] * xx [ 112 ] + xx [ 113 ] * xx [
113 ] + xx [ 114 ] * xx [ 114 ] ) ; output [ 57 ] = xx [ 54 ] ; output [ 58 ]
= xx [ 62 ] ; output [ 59 ] = xx [ 63 ] ; output [ 60 ] = xx [ 118 ] + xx [
60 ] ; output [ 61 ] = xx [ 119 ] + xx [ 79 ] ; output [ 62 ] = xx [ 120 ] +
xx [ 51 ] ; output [ 63 ] = - xx [ 54 ] ; output [ 64 ] = xx [ 62 ] ; output
[ 65 ] = xx [ 63 ] ; output [ 66 ] = xx [ 121 ] + xx [ 60 ] ; output [ 67 ] =
xx [ 122 ] + xx [ 79 ] ; output [ 68 ] = xx [ 123 ] + xx [ 51 ] ; output [ 69
] = xx [ 64 ] ; output [ 70 ] = xx [ 83 ] ; output [ 71 ] = xx [ 84 ] ;
output [ 72 ] = xx [ 124 ] + xx [ 60 ] ; output [ 73 ] = xx [ 125 ] + xx [ 79
] ; output [ 74 ] = xx [ 126 ] + xx [ 51 ] ; output [ 75 ] = - xx [ 64 ] ;
output [ 76 ] = xx [ 83 ] ; output [ 77 ] = xx [ 84 ] ; output [ 78 ] = xx [
127 ] + xx [ 60 ] ; output [ 79 ] = xx [ 128 ] + xx [ 79 ] ; output [ 80 ] =
xx [ 129 ] + xx [ 51 ] ; output [ 81 ] = xx [ 115 ] ; output [ 82 ] = xx [
116 ] ; output [ 83 ] = xx [ 117 ] ; output [ 84 ] = xx [ 133 ] + xx [ 60 ] ;
output [ 85 ] = xx [ 134 ] + xx [ 79 ] ; output [ 86 ] = xx [ 135 ] + xx [ 51
] ; output [ 87 ] = xx [ 130 ] ; output [ 88 ] = xx [ 131 ] ; output [ 89 ] =
xx [ 132 ] ; output [ 90 ] = xx [ 139 ] + xx [ 60 ] ; output [ 91 ] = xx [
140 ] + xx [ 79 ] ; output [ 92 ] = xx [ 141 ] + xx [ 51 ] ; output [ 93 ] =
- xx [ 115 ] ; output [ 94 ] = xx [ 116 ] ; output [ 95 ] = xx [ 117 ] ;
output [ 96 ] = xx [ 142 ] + xx [ 60 ] ; output [ 97 ] = xx [ 143 ] + xx [ 79
] ; output [ 98 ] = xx [ 144 ] + xx [ 51 ] ; output [ 99 ] = - xx [ 130 ] ;
output [ 100 ] = xx [ 131 ] ; output [ 101 ] = xx [ 132 ] ; output [ 102 ] =
xx [ 145 ] + xx [ 60 ] ; output [ 103 ] = xx [ 146 ] + xx [ 79 ] ; output [
104 ] = xx [ 147 ] + xx [ 51 ] ; output [ 105 ] = xx [ 149 ] + xx [ 79 ] - xx
[ 151 ] ; output [ 106 ] = xx [ 150 ] + xx [ 51 ] - xx [ 148 ] ; output [ 107
] = xx [ 156 ] + xx [ 78 ] - xx [ 151 ] ; output [ 108 ] = xx [ 157 ] + xx [
50 ] - xx [ 148 ] ; output [ 109 ] = xx [ 162 ] + xx [ 70 ] - xx [ 151 ] ;
output [ 110 ] = xx [ 163 ] + xx [ 49 ] - xx [ 148 ] ; output [ 111 ] = xx [
168 ] + xx [ 61 ] - xx [ 151 ] ; output [ 112 ] = xx [ 169 ] + xx [ 44 ] - xx
[ 148 ] ; output [ 113 ] = xx [ 155 ] ; output [ 114 ] = xx [ 69 ] ; output [
115 ] = xx [ 177 ] + xx [ 79 ] - xx [ 151 ] ; output [ 116 ] = xx [ 178 ] +
xx [ 51 ] - xx [ 148 ] ; output [ 117 ] = xx [ 180 ] + xx [ 79 ] - xx [ 151 ]
; output [ 118 ] = xx [ 181 ] + xx [ 51 ] - xx [ 148 ] ; output [ 119 ] = xx
[ 183 ] + xx [ 79 ] - xx [ 151 ] ; output [ 120 ] = xx [ 184 ] + xx [ 51 ] -
xx [ 148 ] ; output [ 121 ] = xx [ 186 ] + xx [ 79 ] - xx [ 151 ] ; output [
122 ] = xx [ 187 ] + xx [ 51 ] - xx [ 148 ] ; output [ 123 ] = sqrt ( xx [ 43
] * xx [ 43 ] + xx [ 155 ] * xx [ 155 ] + xx [ 69 ] * xx [ 69 ] ) ; output [
124 ] = sqrt ( xx [ 74 ] * xx [ 74 ] + xx [ 75 ] * xx [ 75 ] + xx [ 76 ] * xx
[ 76 ] ) ; output [ 125 ] = sqrt ( xx [ 10 ] * xx [ 10 ] + xx [ 11 ] * xx [
11 ] + xx [ 12 ] * xx [ 12 ] ) ; output [ 126 ] = sqrt ( xx [ 13 ] * xx [ 13
] + xx [ 14 ] * xx [ 14 ] + xx [ 15 ] * xx [ 15 ] ) ; output [ 127 ] = sqrt (
xx [ 16 ] * xx [ 16 ] + xx [ 17 ] * xx [ 17 ] + xx [ 18 ] * xx [ 18 ] ) ;
return NULL ; }
