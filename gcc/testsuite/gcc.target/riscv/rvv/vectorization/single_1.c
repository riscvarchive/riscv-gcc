/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fopenmp-simd -mriscv-vector-bits=128 -fno-tree-loop-distribute-patterns" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#ifndef N
#define N 16
#endif

#include <stdint.h>

#define TEST_LOOP(TYPE, VALUE)			\
  void						\
  __attribute__ ((noinline, noclone))	        \
  test_##TYPE (TYPE *data)			\
  {						\
    _Pragma ("omp simd")			\
    for (int i = 0; i < N / sizeof (TYPE); ++i)	\
      data[i] = VALUE;				\
  }

TEST_LOOP (uint8_t, 1)
TEST_LOOP (int8_t, 2)
TEST_LOOP (uint16_t, 3)
TEST_LOOP (int16_t, 4)
TEST_LOOP (uint32_t, 5)
TEST_LOOP (int32_t, 6)
TEST_LOOP (uint64_t, 7)
TEST_LOOP (int64_t, 8)
TEST_LOOP (_Float16, 1.0f)
TEST_LOOP (float, 2.0f)
TEST_LOOP (double, 3.0f)

/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*1\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*2\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*3\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*4\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*5\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*6\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*7\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*8\n} 1 } } */
/* { dg-final { scan-assembler-times {\tvfmv.v.f\s+v[1-3]?[0-9],\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n} 3 } } */
