#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "uint64_T" , 17 , 8 } , {
"int64_T" , 18 , 8 } , { "uint_T" , 19 , 32 } , { "char_T" , 20 , 8 } , {
"uchar_T" , 21 , 8 } , { "time_T" , 22 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T ) ,
sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" , "uint64_T" , "int64_T" ,
"uint_T" , "char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . o11rlgz0ft ) , 0 , 0 , 1182 }
, { ( char_T * ) ( & rtB . dnbufslaic . mwcv0vzz4q ) , 0 , 0 , 4 } , { (
char_T * ) ( & rtB . iy1eg5cnon . mwcv0vzz4q ) , 0 , 0 , 4 } , { ( char_T * )
( & rtB . bxeechofne . mwcv0vzz4q ) , 0 , 0 , 4 } , { ( char_T * ) ( & rtB .
feuzr30zrm . mwcv0vzz4q ) , 0 , 0 , 4 } , { ( char_T * ) ( & rtB . a0e45r5q3z
. mwcv0vzz4q ) , 0 , 0 , 4 } , { ( char_T * ) ( & rtB . mdcxtbbkkc .
mwcv0vzz4q ) , 0 , 0 , 4 } , { ( char_T * ) ( & rtB . l3t1y0nbpb . mwcv0vzz4q
) , 0 , 0 , 4 } , { ( char_T * ) ( & rtB . h4hmahoop3 . mwcv0vzz4q ) , 0 , 0
, 4 } , { ( char_T * ) ( & rtB . co0bn1ifzm . mwcv0vzz4q ) , 0 , 0 , 4 } , {
( char_T * ) ( & rtB . h4clof0ldd . mwcv0vzz4q ) , 0 , 0 , 4 } , { ( char_T *
) ( & rtDW . oud0wpblen [ 0 ] ) , 0 , 0 , 393 } , { ( char_T * ) ( & rtDW .
aqxggaoq2t . TUbufferPtrs [ 0 ] ) , 11 , 0 , 214 } , { ( char_T * ) ( & rtDW
. m0jdueq20s ) , 6 , 0 , 17 } , { ( char_T * ) ( & rtDW . ms1v23tnro . Tail )
, 10 , 0 , 37 } , { ( char_T * ) ( & rtDW . nnb05kfypd ) , 3 , 0 , 17 } , { (
char_T * ) ( & rtDW . dzzqgmxrlb ) , 8 , 0 , 21 } , { ( char_T * ) ( & rtDW .
dnbufslaic . ks1figpaye ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
dnbufslaic . amhrbpyzef ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
dnbufslaic . ffpms2kcv1 ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
iy1eg5cnon . ks1figpaye ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
iy1eg5cnon . amhrbpyzef ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
iy1eg5cnon . ffpms2kcv1 ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
bxeechofne . ks1figpaye ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
bxeechofne . amhrbpyzef ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
bxeechofne . ffpms2kcv1 ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
feuzr30zrm . ks1figpaye ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
feuzr30zrm . amhrbpyzef ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
feuzr30zrm . ffpms2kcv1 ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
a0e45r5q3z . ks1figpaye ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
a0e45r5q3z . amhrbpyzef ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
a0e45r5q3z . ffpms2kcv1 ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
mdcxtbbkkc . ks1figpaye ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
mdcxtbbkkc . amhrbpyzef ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
mdcxtbbkkc . ffpms2kcv1 ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
l3t1y0nbpb . ks1figpaye ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
l3t1y0nbpb . amhrbpyzef ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
l3t1y0nbpb . ffpms2kcv1 ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
h4hmahoop3 . ks1figpaye ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
h4hmahoop3 . amhrbpyzef ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
h4hmahoop3 . ffpms2kcv1 ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
co0bn1ifzm . ks1figpaye ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
co0bn1ifzm . amhrbpyzef ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
co0bn1ifzm . ffpms2kcv1 ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
h4clof0ldd . ks1figpaye ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
h4clof0ldd . amhrbpyzef ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
h4clof0ldd . ffpms2kcv1 ) , 8 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 47U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . IAP_Pa ) , 0 , 0 , 683 } } ;
static DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
