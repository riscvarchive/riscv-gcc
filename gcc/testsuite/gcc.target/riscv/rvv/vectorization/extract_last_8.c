/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=256 -fdump-tree-vect-details --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define TEST_TYPE(TYPE) \
  void \
  test_##TYPE (TYPE *ptr, TYPE *a, TYPE *b, TYPE min_v) \
  { \
    TYPE last = *ptr; \
    for (int i = 0; i < 1024; i++) \
      if (a[i] < min_v) \
	last = b[i]; \
    *ptr = last; \
  }

TEST_TYPE (uint8_t);
TEST_TYPE (uint16_t);
TEST_TYPE (uint32_t);
TEST_TYPE (uint64_t);

/* { dg-final { scan-assembler-times {\tvcpop.m} 4 } } */
/* { dg-final { scan-assembler-times {\tvcompress.vm} 4 } } */