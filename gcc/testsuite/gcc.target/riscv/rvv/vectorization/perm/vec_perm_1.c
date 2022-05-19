/* { dg-do compile } */
/* { dg-options "-O -mriscv-vector-bits=256 " } */

#include <stdint.h>

typedef int64_t vnx2di __attribute__((vector_size (32)));
typedef int32_t vnx4si __attribute__((vector_size (32)));
typedef int16_t vnx8hi __attribute__((vector_size (32)));
typedef int8_t vnx16qi __attribute__((vector_size (32)));
typedef double vnx2df __attribute__((vector_size (32)));
typedef float vnx4sf __attribute__((vector_size (32)));
typedef _Float16 vnx8hf __attribute__((vector_size (32)));

#define VEC_PERM(TYPE, MASKTYPE)					\
TYPE __attribute__ ((noinline, noclone)) 				\
vec_perm_##TYPE (TYPE values1, TYPE values2, MASKTYPE mask)		\
{									\
  return __builtin_shuffle (values1, values2, mask);			\
}

VEC_PERM (vnx2di, vnx2di);
VEC_PERM (vnx4si, vnx4si);
VEC_PERM (vnx8hi, vnx8hi);
VEC_PERM (vnx16qi, vnx16qi);
VEC_PERM (vnx2df, vnx2di);
VEC_PERM (vnx4sf, vnx4si);
VEC_PERM (vnx8hf, vnx8hi);

/* { dg-final { scan-assembler-times {\tvrgather.vv} 14 } } */
/* { dg-final { scan-assembler-times {\tvmsgeu.vi} 6 } } */
/* { dg-final { scan-assembler-times {\tvmsgeu.vx} 1 } } */
