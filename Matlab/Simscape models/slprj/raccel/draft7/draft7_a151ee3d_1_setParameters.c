#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void draft7_a151ee3d_1_computeRuntimeParameters ( const real_T t0 [ ] ,
real_T out [ ] ) { real_T t10 [ 3 ] ; real_T t11 [ 3 ] ; real_T t12 [ 3 ] ;
real_T t13 [ 3 ] ; real_T t14 [ 3 ] ; real_T t15 [ 3 ] ; real_T t16 [ 3 ] ;
real_T t17 [ 3 ] ; real_T t7 [ 3 ] ; real_T t76 ; real_T t77 ; real_T t78 ;
real_T t79 ; real_T t80 ; real_T t81 ; real_T t82 ; real_T t83 ; real_T t84 ;
real_T t85 ; real_T t86 ; real_T t87 ; real_T t88 ; real_T t89 ; real_T t90 ;
real_T t91 ; real_T t92 ; real_T t93 ; real_T t94 ; real_T t95 ; real_T t96 ;
real_T t97 ; real_T t98 ; real_T t99 ; t15 [ 0ULL ] = t0 [ 0ULL ] ; t15 [
1ULL ] = t0 [ 1ULL ] ; t15 [ 2ULL ] = t0 [ 2ULL ] ; t13 [ 0ULL ] = t0 [ 3ULL
] ; t13 [ 1ULL ] = t0 [ 4ULL ] ; t13 [ 2ULL ] = t0 [ 5ULL ] ; t16 [ 0ULL ] =
t0 [ 6ULL ] ; t16 [ 1ULL ] = t0 [ 7ULL ] ; t16 [ 2ULL ] = t0 [ 8ULL ] ; t14 [
0ULL ] = t0 [ 9ULL ] ; t14 [ 1ULL ] = t0 [ 10ULL ] ; t14 [ 2ULL ] = t0 [
11ULL ] ; t12 [ 0ULL ] = t0 [ 12ULL ] ; t12 [ 1ULL ] = t0 [ 13ULL ] ; t12 [
2ULL ] = t0 [ 14ULL ] ; t7 [ 0ULL ] = t0 [ 15ULL ] ; t7 [ 1ULL ] = t0 [ 16ULL
] ; t7 [ 2ULL ] = t0 [ 17ULL ] ; t17 [ 0ULL ] = t0 [ 18ULL ] ; t17 [ 1ULL ] =
t0 [ 19ULL ] ; t17 [ 2ULL ] = t0 [ 20ULL ] ; t11 [ 0ULL ] = t0 [ 21ULL ] ;
t11 [ 1ULL ] = t0 [ 22ULL ] ; t11 [ 2ULL ] = t0 [ 23ULL ] ; memcpy ( & t10 [
0 ] , & t11 [ 0 ] , 24U ) ; memcpy ( & t11 [ 0 ] , & t12 [ 0 ] , 24U ) ;
memcpy ( & t12 [ 0 ] , & t13 [ 0 ] , 24U ) ; memcpy ( & t13 [ 0 ] , & t14 [ 0
] , 24U ) ; memcpy ( & t14 [ 0 ] , & t15 [ 0 ] , 24U ) ; memcpy ( & t15 [ 0 ]
, & t16 [ 0 ] , 24U ) ; memcpy ( & t16 [ 0 ] , & t17 [ 0 ] , 24U ) ; memcpy (
& t17 [ 0 ] , & t7 [ 0 ] , 24U ) ; t76 = t10 [ 0ULL ] ; t77 = t10 [ 1ULL ] ;
t78 = t10 [ 2ULL ] ; t79 = t11 [ 0ULL ] ; t80 = t11 [ 1ULL ] ; t81 = t11 [
2ULL ] ; t82 = t12 [ 0ULL ] ; t83 = t12 [ 1ULL ] ; t84 = t12 [ 2ULL ] ; t85 =
t13 [ 0ULL ] ; t86 = t13 [ 1ULL ] ; t87 = t13 [ 2ULL ] ; t88 = t14 [ 0ULL ] ;
t89 = t14 [ 1ULL ] ; t90 = t14 [ 2ULL ] ; t91 = t15 [ 0ULL ] ; t92 = t15 [
1ULL ] ; t93 = t15 [ 2ULL ] ; t94 = t16 [ 0ULL ] ; t95 = t16 [ 1ULL ] ; t96 =
t16 [ 2ULL ] ; t97 = t17 [ 0ULL ] ; t98 = t17 [ 1ULL ] ; t99 = t17 [ 2ULL ] ;
out [ 0 ] = t76 ; out [ 1 ] = t77 ; out [ 2 ] = t78 ; out [ 3 ] = t79 ; out [
4 ] = t80 ; out [ 5 ] = t81 ; out [ 6 ] = t82 ; out [ 7 ] = t83 ; out [ 8 ] =
t84 ; out [ 9 ] = t85 ; out [ 10 ] = t86 ; out [ 11 ] = t87 ; out [ 12 ] =
t88 ; out [ 13 ] = t89 ; out [ 14 ] = t90 ; out [ 15 ] = t91 ; out [ 16 ] =
t92 ; out [ 17 ] = t93 ; out [ 18 ] = t94 ; out [ 19 ] = t95 ; out [ 20 ] =
t96 ; out [ 21 ] = t97 ; out [ 22 ] = t98 ; out [ 23 ] = t99 ; } void
draft7_a151ee3d_1_computeAsmRuntimeDerivedValuesDoubles ( const double * rtp
, double * rtdvd ) { ( void ) rtp ; ( void ) rtdvd ; } void
draft7_a151ee3d_1_computeAsmRuntimeDerivedValuesInts ( const double * rtp ,
int * rtdvi ) { ( void ) rtp ; ( void ) rtdvi ; } void
draft7_a151ee3d_1_computeAsmRuntimeDerivedValues ( const double * rtp ,
RuntimeDerivedValuesBundle * rtdv ) {
draft7_a151ee3d_1_computeAsmRuntimeDerivedValuesDoubles ( rtp , rtdv ->
mDoubles . mValues ) ; draft7_a151ee3d_1_computeAsmRuntimeDerivedValuesInts (
rtp , rtdv -> mInts . mValues ) ; } void
draft7_a151ee3d_1_computeSimRuntimeDerivedValuesDoubles ( const double * rtp
, double * rtdvd ) { ( void ) rtp ; ( void ) rtdvd ; } void
draft7_a151ee3d_1_computeSimRuntimeDerivedValuesInts ( const double * rtp ,
int * rtdvi ) { ( void ) rtp ; ( void ) rtdvi ; } void
draft7_a151ee3d_1_computeSimRuntimeDerivedValues ( const double * rtp ,
RuntimeDerivedValuesBundle * rtdv ) {
draft7_a151ee3d_1_computeSimRuntimeDerivedValuesDoubles ( rtp , rtdv ->
mDoubles . mValues ) ; draft7_a151ee3d_1_computeSimRuntimeDerivedValuesInts (
rtp , rtdv -> mInts . mValues ) ; }
