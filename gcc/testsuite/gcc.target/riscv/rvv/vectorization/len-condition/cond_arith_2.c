/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>
#define N 80

#define TEST(DATA_TYPE, PRED_TYPE, NAME, OP)				\
  void __attribute__ ((noinline, noclone))				\
  test_##DATA_TYPE##_##PRED_TYPE##_##NAME (DATA_TYPE *__restrict x,	\
					   DATA_TYPE *__restrict y,	\
					   DATA_TYPE *__restrict z,	\
					   PRED_TYPE *__restrict pred)			\
  {									\
    for (int i = 0; i < N; ++i)						\
      x[i] = pred[i] != 1 ? y[i] OP z[i] : y[i];			\
  }

#define TEST_INT_TYPE(DATA_TYPE, PRED_TYPE) \
  TEST (DATA_TYPE, PRED_TYPE, add, +) \
  TEST (DATA_TYPE, PRED_TYPE, sub, -) \
  TEST (DATA_TYPE, PRED_TYPE, mul, *) \
  TEST (DATA_TYPE, PRED_TYPE, div, /)

#define TEST_FP_TYPE(DATA_TYPE, PRED_TYPE) \
  TEST (DATA_TYPE, PRED_TYPE, add, +) \
  TEST (DATA_TYPE, PRED_TYPE, sub, -) \
  TEST (DATA_TYPE, PRED_TYPE, mul, *) \
  TEST (DATA_TYPE, PRED_TYPE, div, /)

#define TEST_ALL \
  TEST_INT_TYPE (int32_t, int8_t) \
  TEST_INT_TYPE (uint32_t, int8_t) \
  TEST_INT_TYPE (int32_t, int16_t) \
  TEST_INT_TYPE (uint32_t, int16_t) \
  TEST_INT_TYPE (int64_t, int8_t) \
  TEST_INT_TYPE (uint64_t, int8_t) \
  TEST_INT_TYPE (int64_t, int16_t) \
  TEST_INT_TYPE (uint64_t, int16_t) \
  TEST_INT_TYPE (int64_t, int32_t) \
  TEST_INT_TYPE (uint64_t, int32_t) \
  TEST_FP_TYPE (float, int8_t) \
  TEST_FP_TYPE (float, int16_t) \
  TEST_FP_TYPE (double, int8_t) \
  TEST_FP_TYPE (double, int16_t) \
  TEST_FP_TYPE (double, int32_t)

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