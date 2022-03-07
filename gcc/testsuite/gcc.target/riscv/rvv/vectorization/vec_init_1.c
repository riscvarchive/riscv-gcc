/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fno-tree-loop-distribute-patterns" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define NUM_ELEMS(TYPE) (128 / sizeof (TYPE))

#define DUP_FN(TYPE)				\
void __attribute__ ((noinline, noclone))	\
dup_##TYPE (TYPE *r, TYPE v)			\
{						\
  for (int i = 0; i < NUM_ELEMS (TYPE); i++)	\
    r[i] = v;					\
}

DUP_FN (int8_t)
DUP_FN (int16_t)
DUP_FN (int32_t)
DUP_FN (int64_t)
DUP_FN (_Float16)
DUP_FN (float)
DUP_FN (double)

/* { dg-final { scan-assembler {\tvmv.v.x} } } */
/* { dg-final { scan-assembler-times {\tvfmv.v.f\s+v[1-3]?[0-9],\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])} 3 } } */
