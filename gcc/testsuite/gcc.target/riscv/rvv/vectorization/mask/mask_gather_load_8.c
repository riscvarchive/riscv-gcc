/* { dg-do compile } */
/* { dg-additional-options "-O3 -fno-vect-cost-model -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

void __attribute__ ((noinline, noclone))
f1 (int32_t *restrict y, int32_t *restrict x, int32_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = (index[i * 2] < 128
		  ? x[index[i * 2]] + 1
		  : 1);
      y[i * 2 + 1] = (index[i * 2 + 1] < 128
		      ? x[index[i * 2 + 1]] + 2
		      : 2);
    }
}

void __attribute__ ((noinline, noclone))
f2 (int32_t *restrict y, int32_t *restrict x, uint32_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = (index[i * 2] < 128
		  ? x[index[i * 2]] + 1
		  : 1);
      y[i * 2 + 1] = (index[i * 2 + 1] < 128
		      ? x[index[i * 2 + 1]] + 2
		      : 2);
    }
}

void __attribute__ ((noinline, noclone))
f3 (int32_t *restrict y, int32_t *restrict x, uint64_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = (index[i * 2] < 128
		  ? x[index[i * 2]] + 1
		  : 1);
      y[i * 2 + 1] = (index[i * 2 + 1] < 128
		      ? x[index[i * 2 + 1]] + 2
		      : 2);
    }
}

void __attribute__ ((noinline, noclone))
f4 (int64_t *restrict y, int64_t *restrict x, uint64_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = (index[i * 2] < 128
		  ? x[index[i * 2]] + 1
		  : 1);
      y[i * 2 + 1] = (index[i * 2 + 1] < 128
		      ? x[index[i * 2 + 1]] + 2
		      : 2);
    }
}

/* { dg-final { scan-tree-dump-times "\.MASK_GATHER_LOAD" 16 "optimized" } } */