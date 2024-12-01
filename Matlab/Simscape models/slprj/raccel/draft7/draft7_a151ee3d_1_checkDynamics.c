#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "draft7_a151ee3d_1_geometries.h"
PmfMessageId draft7_a151ee3d_1_checkDynamics ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const double *
input , const double * inputDot , const double * inputDdot , const double *
discreteState , const int * modeVector , double * errorResult ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; boolean_T bb [ 1 ]
; int ii [ 2 ] ; double xx [ 81 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
modeVector ; ( void ) neDiagMgr ; xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0 ] *
state [ 24 ] ; xx [ 2 ] = sin ( xx [ 1 ] ) ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx
[ 4 ] = xx [ 2 ] ; xx [ 5 ] = - ( 1.82992095932877e-11 * xx [ 2 ] ) ; xx [ 6
] = - ( 5.235917730680519e-12 * xx [ 2 ] ) ; xx [ 7 ] = 0.9991449255755711 ;
xx [ 8 ] = - 0.04069340420070983 ; xx [ 9 ] = - 5.269348941183292e-3 ; xx [
10 ] = - 5.069370067487187e-3 ; pm_math_Quaternion_compose_ra ( xx + 3 , xx +
7 , xx + 11 ) ; xx [ 1 ] = xx [ 0 ] * state [ 25 ] ; xx [ 2 ] = sin ( xx [ 1
] ) ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 4 ] = - ( 0.01017403174547095 * xx [
2 ] ) ; xx [ 5 ] = 0.9992497622599684 * xx [ 2 ] ; xx [ 6 ] =
0.03736845864413881 * xx [ 2 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx
+ 3 , xx + 7 ) ; xx [ 1 ] = xx [ 0 ] * state [ 26 ] ; xx [ 2 ] = sin ( xx [ 1
] ) ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 4 ] = 0.01050408723065136 * xx [ 2 ]
; xx [ 5 ] = - ( 0.03726153110399754 * xx [ 2 ] ) ; xx [ 6 ] =
0.9992503402307336 * xx [ 2 ] ; pm_math_Quaternion_compose_ra ( xx + 7 , xx +
3 , xx + 11 ) ; xx [ 1 ] = - 6.605394032297572e-4 ; xx [ 2 ] = -
0.08234236971698156 ; xx [ 3 ] = - 0.130840158189375 ;
pm_math_Quaternion_xform_ra ( xx + 11 , xx + 1 , xx + 4 ) ; xx [ 1 ] = -
1.160451719412536e-3 ; xx [ 2 ] = - 0.02864342077244468 ; xx [ 3 ] = -
0.1242034406115433 ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 1 , xx + 7
) ; xx [ 1 ] = 4.855313199912053e-13 - xx [ 7 ] ; xx [ 2 ] = xx [ 4 ] + xx [
1 ] + 5.287708455224579e-13 ; xx [ 3 ] = 0.01419776350117569 - xx [ 8 ] ; xx
[ 10 ] = xx [ 5 ] + xx [ 3 ] + 0.03767096436270765 ; xx [ 4 ] =
0.0153662351784256 - xx [ 9 ] ; xx [ 5 ] = xx [ 6 ] + xx [ 4 ] -
2.923671226993926e-3 ; xx [ 6 ] = sqrt ( xx [ 2 ] * xx [ 2 ] + xx [ 10 ] * xx
[ 10 ] + xx [ 5 ] * xx [ 5 ] ) ; if ( xx [ 6 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L1-L2 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 6 ] = input [ 149 ] / xx [ 6 ] ; xx [ 2 ] =
0.9961405467325101 ; xx [ 5 ] = xx [ 0 ] * state [ 18 ] ; xx [ 7 ] = cos ( xx
[ 5 ] ) ; xx [ 8 ] = 3.201611086326645e-12 ; xx [ 9 ] = sin ( xx [ 5 ] ) ; xx
[ 5 ] = 2.826845832587476e-12 * xx [ 9 ] ; xx [ 10 ] = 0.08777249657755079 ;
xx [ 15 ] = 1.028498847019974e-11 ; xx [ 16 ] = - ( xx [ 2 ] * xx [ 7 ] + xx
[ 8 ] * xx [ 5 ] - xx [ 10 ] * xx [ 9 ] ) ; xx [ 17 ] = - ( xx [ 10 ] * xx [
7 ] + xx [ 2 ] * xx [ 9 ] + xx [ 15 ] * xx [ 5 ] ) ; xx [ 18 ] = xx [ 8 ] *
xx [ 7 ] - xx [ 2 ] * xx [ 5 ] + xx [ 15 ] * xx [ 9 ] ; xx [ 19 ] = xx [ 8 ]
* xx [ 9 ] - xx [ 15 ] * xx [ 7 ] + xx [ 10 ] * xx [ 5 ] ; xx [ 2 ] = xx [ 0
] * state [ 19 ] ; xx [ 5 ] = sin ( xx [ 2 ] ) ; xx [ 7 ] =
0.9562867924269723 ; xx [ 8 ] = 0.2924304543472392 ; xx [ 20 ] = cos ( xx [ 2
] ) ; xx [ 21 ] = 1.596819818085218e-11 * xx [ 5 ] ; xx [ 22 ] = xx [ 7 ] *
xx [ 5 ] ; xx [ 23 ] = - ( xx [ 8 ] * xx [ 5 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 16 , xx + 20 , xx + 24 ) ; xx [ 2 ] = xx
[ 0 ] * state [ 20 ] ; xx [ 5 ] = sin ( xx [ 2 ] ) ; xx [ 15 ] = cos ( xx [ 2
] ) ; xx [ 16 ] = 1.035832709073648e-11 * xx [ 5 ] ; xx [ 17 ] = xx [ 8 ] *
xx [ 5 ] ; xx [ 18 ] = xx [ 7 ] * xx [ 5 ] ; pm_math_Quaternion_compose_ra (
xx + 24 , xx + 15 , xx + 7 ) ; xx [ 15 ] = - 6.841875673243218e-13 ; xx [ 16
] = - 0.04146091222789498 ; xx [ 17 ] = - 0.01351410150666451 ;
pm_math_Quaternion_xform_ra ( xx + 7 , xx + 15 , xx + 18 ) ; xx [ 15 ] =
2.484784205278315e-13 ; xx [ 16 ] = 0.01055813361575447 ; xx [ 17 ] = -
0.01718904409441589 ; pm_math_Quaternion_xform_ra ( xx + 7 , xx + 15 , xx +
21 ) ; xx [ 2 ] = 7.111565911668068e-14 + xx [ 21 ] ; xx [ 5 ] = xx [ 18 ] -
xx [ 2 ] - 8.947197148478258e-14 ; xx [ 15 ] = 0.01482354797278426 - xx [ 22
] ; xx [ 16 ] = xx [ 19 ] + xx [ 15 ] + 0.0386335011732275 ; xx [ 17 ] =
0.01597192626903846 - xx [ 23 ] ; xx [ 18 ] = xx [ 20 ] + xx [ 17 ] -
2.940430357145393e-3 ; xx [ 19 ] = sqrt ( xx [ 5 ] * xx [ 5 ] + xx [ 16 ] *
xx [ 16 ] + xx [ 18 ] * xx [ 18 ] ) ; if ( xx [ 19 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L2-L3 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 19 ] = input [ 150 ] / xx [ 19 ] ; xx [ 5 ] = xx [ 0 ]
* state [ 14 ] ; xx [ 16 ] = cos ( xx [ 5 ] ) ; xx [ 18 ] =
0.1159778701879254 ; xx [ 20 ] = xx [ 0 ] * state [ 12 ] ; xx [ 21 ] = sin (
xx [ 20 ] ) ; xx [ 22 ] = 0.9932517976961697 ; xx [ 23 ] = cos ( xx [ 20 ] )
; xx [ 20 ] = 4.654509323289534e-12 ; xx [ 24 ] = 6.655858618855781e-12 * xx
[ 21 ] ; xx [ 25 ] = xx [ 18 ] * xx [ 21 ] - xx [ 22 ] * xx [ 23 ] ; xx [ 26
] = - ( xx [ 18 ] * xx [ 23 ] + xx [ 22 ] * xx [ 21 ] + xx [ 20 ] * xx [ 24 ]
) ; xx [ 27 ] = xx [ 22 ] * xx [ 24 ] - xx [ 20 ] * xx [ 21 ] ; xx [ 28 ] =
xx [ 20 ] * xx [ 23 ] - xx [ 18 ] * xx [ 24 ] ; xx [ 18 ] = xx [ 0 ] * state
[ 13 ] ; xx [ 20 ] = sin ( xx [ 18 ] ) ; xx [ 21 ] = 0.9452391332067189 ; xx
[ 22 ] = 0.3263785854718576 ; xx [ 29 ] = cos ( xx [ 18 ] ) ; xx [ 30 ] = - (
2.702350965790575e-12 * xx [ 20 ] ) ; xx [ 31 ] = xx [ 21 ] * xx [ 20 ] ; xx
[ 32 ] = - ( xx [ 22 ] * xx [ 20 ] ) ; pm_math_Quaternion_compose_ra ( xx +
25 , xx + 29 , xx + 33 ) ; xx [ 18 ] = sin ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 22
] * xx [ 18 ] ; xx [ 20 ] = xx [ 21 ] * xx [ 18 ] ; xx [ 21 ] = xx [ 16 ] *
xx [ 33 ] - ( xx [ 35 ] * xx [ 5 ] + xx [ 36 ] * xx [ 20 ] ) ; xx [ 22 ] = xx
[ 16 ] * xx [ 34 ] + xx [ 35 ] * xx [ 20 ] - xx [ 36 ] * xx [ 5 ] ; xx [ 23 ]
= xx [ 33 ] * xx [ 5 ] + xx [ 16 ] * xx [ 35 ] - xx [ 34 ] * xx [ 20 ] ; xx [
24 ] = xx [ 33 ] * xx [ 20 ] + xx [ 16 ] * xx [ 36 ] + xx [ 34 ] * xx [ 5 ] ;
xx [ 25 ] = 1.167567527306757e-13 ; xx [ 26 ] = - 0.04472798265803164 ; xx [
27 ] = - 0.01492244588929304 ; pm_math_Quaternion_xform_ra ( xx + 21 , xx +
25 , xx + 28 ) ; xx [ 25 ] = - 3.478043091554657e-14 ; xx [ 26 ] =
8.616599387917045e-3 ; xx [ 27 ] = - 0.01781379291801384 ;
pm_math_Quaternion_xform_ra ( xx + 21 , xx + 25 , xx + 31 ) ; xx [ 5 ] =
1.222885353421585e-13 - xx [ 31 ] ; xx [ 16 ] = xx [ 28 ] + xx [ 5 ] +
2.408429233865428e-13 ; xx [ 18 ] = 0.01371330802384472 - xx [ 32 ] ; xx [ 20
] = xx [ 29 ] + xx [ 18 ] + 0.04027776673008778 ; xx [ 25 ] =
0.01482112808326479 - xx [ 33 ] ; xx [ 26 ] = xx [ 30 ] + xx [ 25 ] +
9.50951981748549e-6 ; xx [ 27 ] = sqrt ( xx [ 16 ] * xx [ 16 ] + xx [ 20 ] *
xx [ 20 ] + xx [ 26 ] * xx [ 26 ] ) ; if ( xx [ 27 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L3-L4 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 27 ] = input [ 151 ] / xx [ 27 ] ; xx [ 16 ] = xx [ 0
] * state [ 8 ] ; xx [ 20 ] = cos ( xx [ 16 ] ) ; xx [ 26 ] =
0.08149234695961537 ; xx [ 28 ] = xx [ 0 ] * state [ 6 ] ; xx [ 29 ] = sin (
xx [ 28 ] ) ; xx [ 30 ] = 0.9966739674472358 ; xx [ 31 ] = cos ( xx [ 28 ] )
; xx [ 28 ] = 3.301712910522993e-12 ; xx [ 32 ] = xx [ 26 ] * xx [ 29 ] - xx
[ 30 ] * xx [ 31 ] ; xx [ 33 ] = - ( xx [ 26 ] * xx [ 31 ] + xx [ 30 ] * xx [
29 ] ) ; xx [ 34 ] = xx [ 28 ] * xx [ 29 ] ; xx [ 35 ] = - ( xx [ 28 ] * xx [
31 ] ) ; xx [ 26 ] = xx [ 0 ] * state [ 7 ] ; xx [ 28 ] = sin ( xx [ 26 ] ) ;
xx [ 29 ] = 0.9694837936076719 ; xx [ 30 ] = 0.2451554077153451 ; xx [ 36 ] =
cos ( xx [ 26 ] ) ; xx [ 37 ] = 6.558709267800361e-12 * xx [ 28 ] ; xx [ 38 ]
= xx [ 29 ] * xx [ 28 ] ; xx [ 39 ] = - ( xx [ 30 ] * xx [ 28 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 32 , xx + 36 , xx + 40 ) ; xx [ 26 ] =
sin ( xx [ 16 ] ) ; xx [ 16 ] = xx [ 30 ] * xx [ 26 ] ; xx [ 28 ] = xx [ 29 ]
* xx [ 26 ] ; xx [ 29 ] = xx [ 20 ] * xx [ 40 ] - ( xx [ 42 ] * xx [ 16 ] +
xx [ 43 ] * xx [ 28 ] ) ; xx [ 30 ] = xx [ 20 ] * xx [ 41 ] + xx [ 42 ] * xx
[ 28 ] - xx [ 43 ] * xx [ 16 ] ; xx [ 31 ] = xx [ 40 ] * xx [ 16 ] + xx [ 20
] * xx [ 42 ] - xx [ 41 ] * xx [ 28 ] ; xx [ 32 ] = xx [ 40 ] * xx [ 28 ] +
xx [ 20 ] * xx [ 43 ] + xx [ 41 ] * xx [ 16 ] ; xx [ 33 ] = -
2.405769667632971e-13 ; xx [ 34 ] = - 0.03983410794452454 ; xx [ 35 ] = -
0.01645986959431302 ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 33 , xx +
36 ) ; xx [ 33 ] = 6.664202092713185e-14 ; xx [ 34 ] = 6.161981679940124e-3 ;
xx [ 35 ] = - 0.01687376340899878 ; pm_math_Quaternion_xform_ra ( xx + 29 ,
xx + 33 , xx + 39 ) ; xx [ 16 ] = xx [ 36 ] - xx [ 39 ] ; xx [ 20 ] =
0.01018286292250497 - xx [ 40 ] ; xx [ 26 ] = xx [ 37 ] + xx [ 20 ] +
0.0375915374507293 ; xx [ 28 ] = 0.01643121746247235 - xx [ 41 ] ; xx [ 33 ]
= xx [ 38 ] + xx [ 28 ] + 1.590244414800102e-3 ; xx [ 34 ] = sqrt ( xx [ 16 ]
* xx [ 16 ] + xx [ 26 ] * xx [ 26 ] + xx [ 33 ] * xx [ 33 ] ) ; if ( xx [ 34
] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L4-L5 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 34 ] = input [ 152 ] / xx [ 34 ] ; xx [ 16 ] = xx [ 0
] * state [ 2 ] ; xx [ 26 ] = cos ( xx [ 16 ] ) ; xx [ 33 ] =
0.1535761481414752 ; xx [ 35 ] = xx [ 0 ] * state [ 0 ] ; xx [ 36 ] = cos (
xx [ 35 ] ) ; xx [ 37 ] = 0.9881368157912284 ; xx [ 38 ] = sin ( xx [ 35 ] )
; xx [ 35 ] = xx [ 33 ] * xx [ 36 ] - xx [ 37 ] * xx [ 38 ] ; xx [ 40 ] = xx
[ 0 ] * state [ 1 ] ; xx [ 0 ] = cos ( xx [ 40 ] ) ; xx [ 41 ] = xx [ 35 ] *
xx [ 0 ] ; xx [ 42 ] = 0.9659940932330751 ; xx [ 43 ] = sin ( xx [ 16 ] ) ;
xx [ 16 ] = xx [ 42 ] * xx [ 43 ] ; xx [ 44 ] = 0.258564134865625 ; xx [ 45 ]
= sin ( xx [ 40 ] ) ; xx [ 40 ] = xx [ 44 ] * xx [ 45 ] ; xx [ 46 ] = xx [ 42
] * xx [ 45 ] ; xx [ 42 ] = xx [ 37 ] * xx [ 36 ] + xx [ 33 ] * xx [ 38 ] ;
xx [ 33 ] = xx [ 35 ] * xx [ 40 ] - xx [ 46 ] * xx [ 42 ] ; xx [ 36 ] = xx [
40 ] * xx [ 42 ] + xx [ 35 ] * xx [ 46 ] ; xx [ 35 ] = xx [ 44 ] * xx [ 43 ]
; xx [ 37 ] = xx [ 26 ] * xx [ 41 ] + xx [ 16 ] * xx [ 33 ] - xx [ 36 ] * xx
[ 35 ] ; xx [ 38 ] = xx [ 0 ] * xx [ 42 ] ; xx [ 0 ] = xx [ 26 ] * xx [ 33 ]
- xx [ 35 ] * xx [ 38 ] - xx [ 41 ] * xx [ 16 ] ; xx [ 40 ] = xx [ 36 ] * xx
[ 26 ] - xx [ 16 ] * xx [ 38 ] + xx [ 41 ] * xx [ 35 ] ; xx [ 41 ] = xx [ 37
] ; xx [ 42 ] = xx [ 0 ] ; xx [ 43 ] = xx [ 40 ] ; xx [ 44 ] =
0.03563872347849285 ; xx [ 45 ] = 0.01759714945393536 ; xx [ 46 ] = xx [ 40 ]
* xx [ 44 ] - xx [ 45 ] * xx [ 0 ] ; xx [ 47 ] = xx [ 45 ] * xx [ 37 ] ; xx [
48 ] = xx [ 44 ] * xx [ 37 ] ; xx [ 49 ] = xx [ 46 ] ; xx [ 50 ] = xx [ 47 ]
; xx [ 51 ] = - xx [ 48 ] ; pm_math_Vector3_cross_ra ( xx + 41 , xx + 49 , xx
+ 52 ) ; xx [ 49 ] = xx [ 26 ] * xx [ 38 ] + xx [ 35 ] * xx [ 33 ] + xx [ 36
] * xx [ 16 ] ; xx [ 16 ] = 2.0 ; xx [ 26 ] = 0.0187094325596859 ; xx [ 33 ]
= 8.538390167322628e-3 ; xx [ 35 ] = xx [ 26 ] * xx [ 0 ] + xx [ 40 ] * xx [
33 ] ; xx [ 36 ] = xx [ 26 ] * xx [ 37 ] ; xx [ 26 ] = xx [ 33 ] * xx [ 37 ]
; xx [ 55 ] = - xx [ 35 ] ; xx [ 56 ] = xx [ 36 ] ; xx [ 57 ] = xx [ 26 ] ;
pm_math_Vector3_cross_ra ( xx + 41 , xx + 55 , xx + 58 ) ; xx [ 33 ] = ( xx [
49 ] * xx [ 35 ] + xx [ 58 ] ) * xx [ 16 ] ; xx [ 35 ] = ( xx [ 52 ] - xx [
49 ] * xx [ 46 ] ) * xx [ 16 ] - xx [ 33 ] ; xx [ 38 ] = 0.06197538565817786
- xx [ 16 ] * ( xx [ 59 ] - xx [ 36 ] * xx [ 49 ] ) ; xx [ 36 ] = xx [ 16 ] *
( xx [ 53 ] - xx [ 47 ] * xx [ 49 ] ) - xx [ 44 ] + xx [ 38 ] -
0.0257594283537832 ; xx [ 41 ] = 0.9283707866246274 - ( xx [ 60 ] - xx [ 26 ]
* xx [ 49 ] ) * xx [ 16 ] ; xx [ 26 ] = ( xx [ 48 ] * xx [ 49 ] + xx [ 54 ] )
* xx [ 16 ] - xx [ 45 ] + xx [ 41 ] - 0.906781702449562 ; xx [ 42 ] = sqrt (
xx [ 35 ] * xx [ 35 ] + xx [ 36 ] * xx [ 36 ] + xx [ 26 ] * xx [ 26 ] ) ; if
( xx [ 42 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Interspinous Ligaments/L5-S1 ISL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 42 ] = input [ 153 ] / xx [ 42 ] ; xx [ 43 ] = -
0.02855975561335375 ; xx [ 44 ] = - 0.06190209972411849 ; xx [ 45 ] = -
0.1103901590767691 ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 43 , xx +
46 ) ; xx [ 26 ] = xx [ 46 ] + xx [ 1 ] + 0.03234149932875941 ; xx [ 35 ] =
xx [ 47 ] + xx [ 3 ] + 0.02029712378537596 ; xx [ 36 ] = xx [ 48 ] + xx [ 4 ]
- 0.01526834402904475 ; xx [ 43 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 35 ]
* xx [ 35 ] + xx [ 36 ] * xx [ 36 ] ) ; if ( xx [ 43 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 43 ] = input [ 154 ] / xx [ 43 ] ; xx [ 44 ] = -
0.03226754951497003 ; xx [ 45 ] = - 0.02045999852626687 ; xx [ 46 ] =
5.644585224138508e-3 ; pm_math_Quaternion_xform_ra ( xx + 7 , xx + 44 , xx +
50 ) ; xx [ 26 ] = xx [ 50 ] - xx [ 2 ] + 0.03295989990232563 ; xx [ 35 ] =
xx [ 51 ] + xx [ 15 ] + 0.01601356214963441 ; xx [ 36 ] = xx [ 52 ] + xx [ 17
] - 0.01475302284708025 ; xx [ 44 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 35
] * xx [ 35 ] + xx [ 36 ] * xx [ 36 ] ) ; if ( xx [ 44 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 44 ] = input [ 155 ] / xx [ 44 ] ; xx [ 45 ] = -
0.03087794971463731 ; xx [ 46 ] = - 0.01577384625407678 ; xx [ 47 ] =
4.057911382721502e-3 ; pm_math_Quaternion_xform_ra ( xx + 21 , xx + 45 , xx +
50 ) ; xx [ 26 ] = xx [ 50 ] + xx [ 5 ] + 0.03492720031745133 ; xx [ 35 ] =
xx [ 51 ] + xx [ 18 ] + 0.01477959769994918 ; xx [ 36 ] = xx [ 52 ] + xx [ 25
] - 0.01134881117700549 ; xx [ 45 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 35
] * xx [ 35 ] + xx [ 36 ] * xx [ 36 ] ) ; if ( xx [ 45 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 45 ] = input [ 156 ] / xx [ 45 ] ; xx [ 46 ] = -
0.03653985023506644 ; xx [ 47 ] = - 0.01645220048935106 ; xx [ 48 ] =
3.239433747529818e-3 ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 46 , xx +
50 ) ; xx [ 26 ] = xx [ 50 ] - xx [ 39 ] + 0.04055699920652953 ; xx [ 35 ] =
xx [ 51 ] + xx [ 20 ] + 0.01302079271818882 ; xx [ 36 ] = xx [ 52 ] + xx [ 28
] - 0.0135421645305857 ; xx [ 46 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 35 ]
* xx [ 35 ] + xx [ 36 ] * xx [ 36 ] ) ; if ( xx [ 46 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 46 ] = input [ 157 ] / xx [ 46 ] ; xx [ 50 ] = - xx [
49 ] ; xx [ 51 ] = xx [ 37 ] ; xx [ 52 ] = xx [ 0 ] ; xx [ 53 ] = xx [ 40 ] ;
xx [ 35 ] = - 0.04008119964598488 ; xx [ 36 ] = - 0.01084940380361654 ; xx [
37 ] = - 9.8613284252828e-4 ; pm_math_Quaternion_xform_ra ( xx + 50 , xx + 35
, xx + 47 ) ; xx [ 0 ] = 0.044078899383545 ; xx [ 26 ] = xx [ 47 ] - xx [ 33
] + xx [ 0 ] ; xx [ 35 ] = 0.0499199981689453 ; xx [ 36 ] = xx [ 48 ] + xx [
38 ] - xx [ 35 ] ; xx [ 37 ] = 0.919140991210938 ; xx [ 40 ] = xx [ 49 ] + xx
[ 41 ] - xx [ 37 ] ; xx [ 47 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 36 ] *
xx [ 36 ] + xx [ 40 ] * xx [ 40 ] ) ; if ( xx [ 47 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Left L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 47 ] = input [ 158 ] / xx [ 47 ] ; xx [ 54 ] =
0.02720888144130509 ; xx [ 55 ] = - 0.06131317982669802 ; xx [ 56 ] = -
0.1109544366642564 ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 54 , xx +
57 ) ; xx [ 26 ] = xx [ 57 ] + xx [ 1 ] - 0.03234149932846699 ; xx [ 36 ] =
xx [ 58 ] + xx [ 3 ] + 0.02029712378655961 ; xx [ 40 ] = xx [ 59 ] + xx [ 4 ]
- 0.01526834402870608 ; xx [ 48 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 36 ]
* xx [ 36 ] + xx [ 40 ] * xx [ 40 ] ) ; if ( xx [ 48 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L1-L2 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 48 ] = input [ 159 ] / xx [ 48 ] ; xx [ 54 ] =
0.03226754951457088 ; xx [ 55 ] = - 0.02045999852744781 ; xx [ 56 ] =
5.644585223800618e-3 ; pm_math_Quaternion_xform_ra ( xx + 7 , xx + 54 , xx +
57 ) ; xx [ 26 ] = xx [ 57 ] - xx [ 2 ] - 0.03295989990236177 ; xx [ 36 ] =
xx [ 58 ] + xx [ 15 ] + 0.01601356214944519 ; xx [ 40 ] = xx [ 59 ] + xx [ 17
] - 0.01475302284711638 ; xx [ 49 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 36
] * xx [ 36 ] + xx [ 40 ] * xx [ 40 ] ) ; if ( xx [ 49 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L2-L3 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 49 ] = input [ 160 ] / xx [ 49 ] ; xx [ 54 ] =
0.03087794971468379 ; xx [ 55 ] = - 0.01577384625389952 ; xx [ 56 ] =
4.057911382755352e-3 ; pm_math_Quaternion_xform_ra ( xx + 21 , xx + 54 , xx +
57 ) ; xx [ 26 ] = xx [ 57 ] + xx [ 5 ] - 0.03492470169060014 ; xx [ 36 ] =
xx [ 58 ] + xx [ 18 ] + 0.01552496039123881 ; xx [ 40 ] = xx [ 59 ] + xx [ 25
] - 0.01167234256981233 ; xx [ 54 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 36
] * xx [ 36 ] + xx [ 40 ] * xx [ 40 ] ) ; if ( xx [ 54 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L3-L4 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 54 ] = input [ 161 ] / xx [ 54 ] ; xx [ 55 ] =
0.03653985023490417 ; xx [ 56 ] = - 0.01645220048983929 ; xx [ 57 ] =
3.239433747517833e-3 ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 55 , xx +
58 ) ; xx [ 26 ] = xx [ 58 ] - xx [ 39 ] - 0.04055699920655626 ; xx [ 36 ] =
xx [ 59 ] + xx [ 20 ] + 0.0130207927181218 ; xx [ 40 ] = xx [ 60 ] + xx [ 28
] - 0.01354216453058323 ; xx [ 55 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 36
] * xx [ 36 ] + xx [ 40 ] * xx [ 40 ] ) ; if ( xx [ 55 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L4-L5 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 55 ] = input [ 162 ] / xx [ 55 ] ; xx [ 56 ] =
0.04008119964600713 ; xx [ 57 ] = - 0.01084940380355031 ; xx [ 58 ] = -
9.861328425307225e-4 ; pm_math_Quaternion_xform_ra ( xx + 50 , xx + 56 , xx +
59 ) ; xx [ 26 ] = xx [ 59 ] - xx [ 33 ] - xx [ 0 ] ; xx [ 0 ] = xx [ 60 ] +
xx [ 38 ] - xx [ 35 ] ; xx [ 35 ] = xx [ 61 ] + xx [ 41 ] - xx [ 37 ] ; xx [
36 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 0 ] * xx [ 0 ] + xx [ 35 ] * xx [
35 ] ) ; if ( xx [ 36 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Left and Right Intertransverse Ligaments/Right L5-S1 ITL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 36 ] = input [ 163 ] / xx [ 36 ] ;
pm_math_Quaternion_compose_ra ( xx + 50 , xx + 29 , xx + 56 ) ;
pm_math_Quaternion_compose_ra ( xx + 56 , xx + 21 , xx + 60 ) ;
pm_math_Quaternion_compose_ra ( xx + 60 , xx + 7 , xx + 64 ) ;
pm_math_Quaternion_compose_ra ( xx + 64 , xx + 11 , xx + 68 ) ; xx [ 72 ] =
0.01519594655146509 ; xx [ 73 ] = 0.1066526728995764 ; xx [ 74 ] = -
0.03585936688742598 ; pm_math_Quaternion_xform_ra ( xx + 68 , xx + 72 , xx +
75 ) ; xx [ 72 ] = xx [ 1 ] ; xx [ 73 ] = xx [ 3 ] ; xx [ 74 ] = xx [ 4 ] ;
pm_math_Quaternion_xform_ra ( xx + 64 , xx + 72 , xx + 78 ) ; xx [ 64 ] = -
xx [ 2 ] ; xx [ 65 ] = xx [ 15 ] ; xx [ 66 ] = xx [ 17 ] ;
pm_math_Quaternion_xform_ra ( xx + 60 , xx + 64 , xx + 72 ) ; xx [ 60 ] = xx
[ 5 ] ; xx [ 61 ] = xx [ 18 ] ; xx [ 62 ] = xx [ 25 ] ;
pm_math_Quaternion_xform_ra ( xx + 56 , xx + 60 , xx + 63 ) ; xx [ 56 ] = -
xx [ 39 ] ; xx [ 57 ] = xx [ 20 ] ; xx [ 58 ] = xx [ 28 ] ;
pm_math_Quaternion_xform_ra ( xx + 50 , xx + 56 , xx + 59 ) ; xx [ 0 ] = xx [
78 ] + xx [ 72 ] + xx [ 63 ] + xx [ 59 ] - xx [ 33 ] ; xx [ 26 ] =
0.01688944435119629 ; xx [ 35 ] = xx [ 75 ] + xx [ 0 ] - xx [ 26 ] ; xx [ 37
] = xx [ 79 ] + xx [ 73 ] + xx [ 64 ] + xx [ 60 ] + xx [ 38 ] ; xx [ 40 ] =
0.1319682159423828 ; xx [ 56 ] = xx [ 76 ] + xx [ 37 ] - xx [ 40 ] ; xx [ 57
] = xx [ 80 ] + xx [ 74 ] + xx [ 65 ] + xx [ 61 ] + xx [ 41 ] ; xx [ 58 ] =
0.8089576416015625 ; xx [ 59 ] = xx [ 77 ] + xx [ 57 ] - xx [ 58 ] ; xx [ 60
] = sqrt ( xx [ 35 ] * xx [ 35 ] + xx [ 56 ] * xx [ 56 ] + xx [ 59 ] * xx [
59 ] ) ; if ( xx [ 60 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 60 ] = input [ 164 ] / xx [ 60 ] ; xx [ 61 ] = -
0.01857933020468612 ; xx [ 62 ] = 0.1062960041055536 ; xx [ 63 ] = -
0.03551762226730922 ; pm_math_Quaternion_xform_ra ( xx + 68 , xx + 61 , xx +
64 ) ; xx [ 35 ] = xx [ 64 ] + xx [ 0 ] + xx [ 26 ] ; xx [ 26 ] = xx [ 65 ] +
xx [ 37 ] - xx [ 40 ] ; xx [ 40 ] = xx [ 66 ] + xx [ 57 ] - xx [ 58 ] ; xx [
56 ] = sqrt ( xx [ 35 ] * xx [ 35 ] + xx [ 26 ] * xx [ 26 ] + xx [ 40 ] * xx
[ 40 ] ) ; if ( xx [ 56 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force1' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 56 ] = input [ 165 ] / xx [ 56 ] ; xx [ 61 ] =
0.01045379203557594 ; xx [ 62 ] = - 0.08550357325700537 ; xx [ 63 ] =
4.618692289715317e-3 ; pm_math_Quaternion_xform_ra ( xx + 68 , xx + 61 , xx +
64 ) ; xx [ 26 ] = 9.709312438964843e-3 ; xx [ 35 ] = xx [ 64 ] + xx [ 0 ] -
xx [ 26 ] ; xx [ 40 ] = 2.232642650604248e-3 ; xx [ 58 ] = xx [ 65 ] + xx [
37 ] + xx [ 40 ] ; xx [ 59 ] = 0.8689576416015625 ; xx [ 61 ] = xx [ 66 ] +
xx [ 57 ] - xx [ 59 ] ; xx [ 62 ] = sqrt ( xx [ 35 ] * xx [ 35 ] + xx [ 58 ]
* xx [ 58 ] + xx [ 61 ] * xx [ 61 ] ) ; if ( xx [ 62 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force2' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 62 ] = input [ 166 ] / xx [ 62 ] ; xx [ 63 ] = -
8.962756426230073e-3 ; xx [ 64 ] = - 0.08570861308462711 ; xx [ 65 ] =
4.815152588944403e-3 ; pm_math_Quaternion_xform_ra ( xx + 68 , xx + 63 , xx +
72 ) ; xx [ 35 ] = xx [ 72 ] + xx [ 0 ] + xx [ 26 ] ; xx [ 26 ] = xx [ 73 ] +
xx [ 37 ] + xx [ 40 ] ; xx [ 40 ] = xx [ 74 ] + xx [ 57 ] - xx [ 59 ] ; xx [
58 ] = sqrt ( xx [ 35 ] * xx [ 35 ] + xx [ 26 ] * xx [ 26 ] + xx [ 40 ] * xx
[ 40 ] ) ; if ( xx [ 58 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force3' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 58 ] = input [ 167 ] / xx [ 58 ] ; xx [ 63 ] =
0.1049001030020798 ; xx [ 64 ] = 0.02043269096374428 ; xx [ 65 ] = -
0.1631011914932122 ; pm_math_Quaternion_xform_ra ( xx + 68 , xx + 63 , xx +
72 ) ; xx [ 26 ] = 0.06488653564453126 ; xx [ 35 ] = xx [ 72 ] + xx [ 0 ] -
xx [ 26 ] ; xx [ 40 ] = 0.03644176864624023 ; xx [ 59 ] = xx [ 73 ] + xx [ 37
] - xx [ 40 ] ; xx [ 61 ] = 0.9499576416015625 ; xx [ 63 ] = xx [ 74 ] + xx [
57 ] - xx [ 61 ] ; xx [ 64 ] = sqrt ( xx [ 35 ] * xx [ 35 ] + xx [ 59 ] * xx
[ 59 ] + xx [ 63 ] * xx [ 63 ] ) ; if ( xx [ 64 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force4' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 64 ] = input [ 168 ] / xx [ 64 ] ; xx [ 65 ] =
0.09519527419625862 ; xx [ 66 ] = - 0.07787409280153862 ; xx [ 67 ] = -
0.0859897565171039 ; pm_math_Quaternion_xform_ra ( xx + 68 , xx + 65 , xx +
72 ) ; xx [ 35 ] = 0.1324676666259766 ; xx [ 59 ] = xx [ 72 ] + xx [ 0 ] - xx
[ 35 ] ; xx [ 63 ] = 0.1263068237304688 ; xx [ 65 ] = xx [ 73 ] + xx [ 37 ] -
xx [ 63 ] ; xx [ 66 ] = 0.9199576416015626 ; xx [ 67 ] = xx [ 74 ] + xx [ 57
] - xx [ 66 ] ; xx [ 72 ] = sqrt ( xx [ 59 ] * xx [ 59 ] + xx [ 65 ] * xx [
65 ] + xx [ 67 ] * xx [ 67 ] ) ; if ( xx [ 72 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force5' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 72 ] = input [ 169 ] / xx [ 72 ] ; xx [ 73 ] = -
0.1089988975238918 ; xx [ 74 ] = 0.01817390566611121 ; xx [ 75 ] = -
0.1609369210652937 ; pm_math_Quaternion_xform_ra ( xx + 68 , xx + 73 , xx +
76 ) ; xx [ 59 ] = xx [ 76 ] + xx [ 0 ] + xx [ 26 ] ; xx [ 26 ] = xx [ 77 ] +
xx [ 37 ] - xx [ 40 ] ; xx [ 40 ] = xx [ 78 ] + xx [ 57 ] - xx [ 61 ] ; xx [
61 ] = sqrt ( xx [ 59 ] * xx [ 59 ] + xx [ 26 ] * xx [ 26 ] + xx [ 40 ] * xx
[ 40 ] ) ; if ( xx [ 61 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force6' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 61 ] = input [ 170 ] / xx [ 61 ] ; xx [ 73 ] = -
0.09566229085706808 ; xx [ 74 ] = - 0.0798895592638616 ; xx [ 75 ] = -
0.08405862367883098 ; pm_math_Quaternion_xform_ra ( xx + 68 , xx + 73 , xx +
76 ) ; xx [ 26 ] = xx [ 76 ] + xx [ 0 ] + xx [ 35 ] ; xx [ 0 ] = xx [ 77 ] +
xx [ 37 ] - xx [ 63 ] ; xx [ 35 ] = xx [ 78 ] + xx [ 57 ] - xx [ 66 ] ; xx [
37 ] = sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 0 ] * xx [ 0 ] + xx [ 35 ] * xx [
35 ] ) ; if ( xx [ 37 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Muscle Forces/Internal Force7' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 37 ] = input [ 171 ] / xx [ 37 ] ; xx [ 65 ] = -
5.113793264997846e-4 ; xx [ 66 ] = - 0.09338152545463696 ; xx [ 67 ] = -
0.1276196231940676 ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 65 , xx +
73 ) ; xx [ 0 ] = xx [ 73 ] + xx [ 1 ] + 7.867570466502235e-13 ; xx [ 1 ] =
xx [ 74 ] + xx [ 3 ] + 0.05039051001790674 ; xx [ 3 ] = xx [ 75 ] + xx [ 4 ]
+ 1.894890190564144e-3 ; xx [ 4 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 1 ] *
xx [ 1 ] + xx [ 3 ] * xx [ 3 ] ) ; if ( xx [ 4 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L1-L2 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 4 ] = input [ 175 ] / xx [ 4 ] ; xx [ 11 ] = -
8.371860108687535e-13 ; xx [ 12 ] = - 0.05202883057027102 ; xx [ 13 ] = -
5.800535526395379e-3 ; pm_math_Quaternion_xform_ra ( xx + 7 , xx + 11 , xx +
65 ) ; xx [ 0 ] = xx [ 65 ] - xx [ 2 ] - 1.392865120001009e-13 ; xx [ 1 ] =
xx [ 66 ] + xx [ 15 ] + 0.05459122458051579 ; xx [ 2 ] = xx [ 67 ] + xx [ 17
] + 4.374450014251545e-3 ; xx [ 3 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 1 ] *
xx [ 1 ] + xx [ 2 ] * xx [ 2 ] ) ; if ( xx [ 3 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L2-L3 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 3 ] = input [ 176 ] / xx [ 3 ] ; xx [ 0 ] =
1.4285959311088e-13 ; xx [ 1 ] = - 0.05524484988788111 ; xx [ 2 ] = -
7.469488033553544e-3 ; pm_math_Quaternion_xform_ra ( xx + 21 , xx + 0 , xx +
7 ) ; xx [ 0 ] = xx [ 7 ] + xx [ 5 ] + 3.146640243071065e-13 ; xx [ 1 ] = xx
[ 8 ] + xx [ 18 ] + 0.05113078984265527 ; xx [ 2 ] = xx [ 9 ] + xx [ 25 ] +
8.028332428854309e-3 ; xx [ 5 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 1 ] * xx
[ 1 ] + xx [ 2 ] * xx [ 2 ] ) ; if ( xx [ 5 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L3-L4 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 5 ] = input [ 177 ] / xx [ 5 ] ; xx [ 0 ] = -
3.166185351073283e-13 ; xx [ 1 ] = - 0.0513211464694144 ; xx [ 2 ] = -
0.01219126570664875 ; pm_math_Quaternion_xform_ra ( xx + 29 , xx + 0 , xx + 7
) ; xx [ 0 ] = xx [ 7 ] - xx [ 39 ] ; xx [ 1 ] = xx [ 8 ] + xx [ 20 ] +
0.04705808460307085 ; xx [ 2 ] = xx [ 9 ] + xx [ 28 ] + 9.875319015864496e-3
; xx [ 7 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 1 ] * xx [ 1 ] + xx [ 2 ] * xx
[ 2 ] ) ; if ( xx [ 7 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L4-L5 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 7 ] = input [ 178 ] / xx [ 7 ] ; xx [ 0 ] = -
3.88840995326696e-5 ; xx [ 1 ] = - 0.04658678468440397 ; xx [ 2 ] = -
0.0171197768192325 ; pm_math_Quaternion_xform_ra ( xx + 50 , xx + 0 , xx + 8
) ; xx [ 0 ] = xx [ 8 ] - xx [ 33 ] ; xx [ 1 ] = xx [ 9 ] + xx [ 38 ] -
0.019933675415717 ; xx [ 2 ] = xx [ 10 ] + xx [ 41 ] - 0.904526583782246 ; xx
[ 8 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 1 ] * xx [ 1 ] + xx [ 2 ] * xx [ 2
] ) ; if ( xx [ 8 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:force:force:forceUndefined" ,
 "'draft7/Supraspinous Ligaments/L5-S1 SSL' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 8 ] = input [ 179 ] / xx [ 8 ] ; xx [ 9 ] = - xx [ 68
] ; xx [ 10 ] = - xx [ 69 ] ; xx [ 11 ] = - xx [ 70 ] ; xx [ 12 ] = - xx [ 71
] ; xx [ 20 ] = 0.9993181225840584 ; xx [ 21 ] = 0.03619150900402053 ; xx [
22 ] = 5.246456256884902e-3 ; xx [ 23 ] = 5.093058789132701e-3 ;
pm_math_Quaternion_compose_ra ( xx + 9 , xx + 20 , xx + 28 ) ; xx [ 0 ] =
0.99999999999999 ; bb [ 0 ] = fabs ( ( xx [ 29 ] * xx [ 31 ] + xx [ 28 ] * xx
[ 30 ] ) * xx [ 16 ] ) > xx [ 0 ] ; ii [ 0 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0
] ) { return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/L1-S1 Bushing Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } xx [ 20 ] = 0.9958524573065585 ; xx [ 21 ] = -
0.09068858100887965 ; xx [ 22 ] = 4.55902949587172e-3 ; xx [ 23 ] =
5.716624978144062e-3 ; pm_math_Quaternion_compose_ra ( xx + 9 , xx + 20 , xx
+ 28 ) ; bb [ 0 ] = fabs ( ( xx [ 29 ] * xx [ 31 ] + xx [ 28 ] * xx [ 30 ] )
* xx [ 16 ] ) > xx [ 0 ] ; ii [ 1 ] = bb [ 0 ] ? 1 : 0 ; if ( bb [ 0 ] ) {
return sm_ssci_recordRunTimeError (
"physmod:sm:core:compiler:joint:gimbalSupport:gimbalLock" ,
 "'draft7/T1-S1 Bushing Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } errorResult [ 0 ] = xx [ 6 ] + xx [ 19 ] + xx [ 27 ] + xx [
34 ] + xx [ 42 ] + xx [ 43 ] + xx [ 44 ] + xx [ 45 ] + xx [ 46 ] + xx [ 47 ]
+ xx [ 48 ] + xx [ 49 ] + xx [ 54 ] + xx [ 55 ] + xx [ 36 ] + xx [ 60 ] + xx
[ 56 ] + xx [ 62 ] + xx [ 58 ] + xx [ 64 ] + xx [ 72 ] + xx [ 61 ] + xx [ 37
] + xx [ 4 ] + xx [ 3 ] + xx [ 5 ] + xx [ 7 ] + xx [ 8 ] + ( double ) ( ii [
0 ] + ii [ 1 ] ) ; return NULL ; }
