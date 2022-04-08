/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fdump-tree-optimized -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */


#include <stdint.h>

#define TEST_LOOP(TYPE1)			                                \
  void __attribute__ ((noinline, noclone))			                                            \
  f_##TYPE1##_1 (TYPE1 *restrict a,TYPE1 *restrict b,		\
    			   TYPE1 *restrict c, TYPE1 *restrict d, TYPE1 e, TYPE1 *restrict f, TYPE1 *mask)	     \
  {								                                                                \
     for (int i = 0; i < 80; ++i)					                                \
          f[i] = mask[i] ? -(a[i] * e) + c[i] : a[i];				                                            \
  }

#define TEST_ALL(T)			        \
  T (int8_t)				\
  T (uint8_t)				\
  T (int16_t)				\
  T (uint16_t)				\
  T (int32_t)				\
  T (uint32_t)				\
  T (int64_t)			    \
  T (uint64_t)			    \
  T (__fp16)		        \
  T (float)			        \
  T (double)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-assembler-times {\tvnmsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} 8 {target riscv64-*-*} } } */
/* { dg-final { scan-assembler-times {\tvnmsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} 6 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times {\tvfnmsub\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} 3 } } */