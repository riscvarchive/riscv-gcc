/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>
#define N 80

#define TEST(TYPE, NAME, OP)				\
  void __attribute__ ((noinline, noclone))		\
  test_##TYPE##_##NAME (TYPE *__restrict x,		\
			TYPE *__restrict y,		\
			TYPE *__restrict z,		\
			TYPE *__restrict pred)	\
  {							\
    for (int i = 0; i < N; ++i)				\
      x[i] = pred[i] != 1 ? y[i] OP z[i] : 1;		\
  }

#define TEST_INT_TYPE(TYPE) \
  TEST (TYPE, add, +) \
  TEST (TYPE, sub, -) \
  TEST (TYPE, mul, *) \
  TEST (TYPE, div, /)

#define TEST_FP_TYPE(TYPE) \
  TEST (TYPE, add, +) \
  TEST (TYPE, sub, -) \
  TEST (TYPE, mul, *) \
  TEST (TYPE, div, /)

#define TEST_ALL \
  TEST_INT_TYPE (int8_t) \
  TEST_INT_TYPE (uint8_t) \
  TEST_INT_TYPE (int16_t) \
  TEST_INT_TYPE (uint16_t) \
  TEST_INT_TYPE (int32_t) \
  TEST_INT_TYPE (uint32_t) \
  TEST_INT_TYPE (int64_t) \
  TEST_INT_TYPE (uint64_t) \
  TEST_FP_TYPE (float) \
  TEST_FP_TYPE (double)

TEST_ALL

/* { dg-final { scan-assembler {\tvadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} } } */
/* { dg-final { scan-assembler {\tvsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} } } */
/* { dg-final { scan-assembler {\tvmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} } } */
/* { dg-final { scan-assembler {\tvdiv\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} } } */
/* { dg-final { scan-assembler {\tvdivu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} } } */
/* { dg-final { scan-assembler {\tvfadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} } } */
/* { dg-final { scan-assembler {\tvfsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} } } */
/* { dg-final { scan-assembler {\tvfmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} } } */
/* { dg-final { scan-assembler {\tvfdiv\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} } } */