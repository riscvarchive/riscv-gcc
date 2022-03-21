/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fdump-tree-optimized -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */


#include <stdint.h>

#define TEST_LOOP(TYPE1)			                                \
  void __attribute__ ((noinline, noclone))			                                            \
  f_##TYPE1##_2 (TYPE1 *restrict a,TYPE1 *restrict b,		\
    			   TYPE1 *restrict c, TYPE1 *restrict d, TYPE1 *restrict e,int *mask)	     \
  {								                                                                \
     for (int i = 0; i < 80; ++i)					                                \
          e[i] = mask[i] ? a[i] * b[i] + c[i] : d[i];				                                            \
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
