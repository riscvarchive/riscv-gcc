/* { dg-do compile } */
/* { dg-additional-options "-Ofast -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#define DO_OPS(TYPE, OP)			\
void						\
vsqrt_##TYPE (TYPE *dst, TYPE *src, int count)	\
{						\
  for (int i = 0; i < count; ++i)		\
    dst[i] = __builtin_##OP (src[i]);		\
}

DO_OPS (_Float16, fabsf)
DO_OPS (float, fabsf)
DO_OPS (double, fabs)

/* { dg-final { scan-assembler-times {\tvfabs\.v} 3 } } */