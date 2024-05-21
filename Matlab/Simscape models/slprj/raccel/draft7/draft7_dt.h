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
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . ktec0bj0ur [ 0 ] ) , 0 , 0 ,
928 } , { ( char_T * ) ( & rtDW . pgcqgwwohh [ 0 ] ) , 0 , 0 , 283 } , { (
char_T * ) ( & rtDW . ifdt2vgjvi ) , 11 , 0 , 148 } , { ( char_T * ) ( & rtDW
. m0jdueq20s ) , 6 , 0 , 17 } , { ( char_T * ) ( & rtDW . c50h32v25n ) , 7 ,
0 , 20 } , { ( char_T * ) ( & rtDW . foe1glerec ) , 10 , 0 , 6 } , { ( char_T
* ) ( & rtDW . nnb05kfypd ) , 3 , 0 , 17 } , { ( char_T * ) ( & rtDW .
aicjk2ndig ) , 8 , 0 , 20 } } ; static DataTypeTransitionTable rtBTransTable
= { 8U , rtBTransitions } ; static DataTypeTransition rtPTransitions [ ] = {
{ ( char_T * ) ( & rtP . IAP_Pa ) , 0 , 0 , 596 } } ; static
DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
