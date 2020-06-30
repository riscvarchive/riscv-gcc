/* { dg-do compile } */

#include "rvv-common.h"

#define DECL_F_VEC_TUPLE_TYPES(SEW, LMUL, NR, MLEN, X) \
  vfloat##SEW##m##LMUL##x##NR##_t f##SEW##m##LMUL##x##NR;

#define DECL_I_VEC_TUPLE_TYPES(SEW, LMUL, NR, MLEN, X) \
  vint##SEW##m##LMUL##x##NR##_t i##SEW##m##LMUL##x##NR; \
  vuint##SEW##m##LMUL##x##NR##_t u##SEW##m##LMUL##x##NR;

void type_test()
{
  RVV_SEG_NO_SEW8_TEST_ARG(DECL_F_VEC_TUPLE_TYPES, );
  RVV_SEG_TEST_ARG(DECL_I_VEC_TUPLE_TYPES, );
}
