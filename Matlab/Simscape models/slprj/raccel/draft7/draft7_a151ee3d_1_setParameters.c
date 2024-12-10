#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void draft7_a151ee3d_1_computeRuntimeParameters ( const real_T t0 [ ] ,
real_T out [ ] ) { real_T t2 [ 3 ] ; real_T t3 [ 3 ] ; real_T t13 ; real_T
t14 ; real_T t15 ; t2 [ 0ULL ] = t0 [ 0ULL ] ; t2 [ 1ULL ] = t0 [ 1ULL ] ; t2
[ 2ULL ] = t0 [ 2ULL ] ; memcpy ( & t3 [ 0 ] , & t2 [ 0 ] , 24U ) ; t13 = t3
[ 0ULL ] ; t14 = t3 [ 1ULL ] ; t15 = t3 [ 2ULL ] ; out [ 0 ] = t13 ; out [ 1
] = t14 ; out [ 2 ] = t15 ; } void
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
