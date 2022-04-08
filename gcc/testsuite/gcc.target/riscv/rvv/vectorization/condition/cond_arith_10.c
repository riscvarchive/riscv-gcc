/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>
#define N 80

#define TEST(TYPE, NAME, OP)				\
  void __attribute__ ((noinline, noclone))		\
  test_##TYPE##_##NAME (TYPE *__restrict x,		\
			TYPE *__restrict y,		\
			TYPE z,		\
			TYPE *__restrict pred)	\
  {							\
    for (int i = 0; i < N; ++i)				\
      x[i] = pred[i] != 1 ? z OP y[i] : y[i];	\
  }

#define TEST_INT_TYPE(TYPE) \
  TEST (TYPE, sub, -)

#define TEST_FP_TYPE(TYPE) \
  TEST (TYPE, sub, -)

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

/* { dg-final { scan-assembler-times {\tvrsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t} 8 {target riscv64-*-*} } } */
/* { dg-final { scan-assembler-times {\tvrsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t} 6 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times {\tvsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} 2 {target riscv32-*-*} } } */
/* { dg-final { scan-assembler-times {\tvfrsub\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t} 2 } } */
/* { dg-final { scan-assembler-not {\tvsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n} } } */
/* { dg-final { scan-assembler-not {\tvsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n} } } */
/* { dg-final { scan-assembler-not {\tvfrsub\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n} } } */
/* { dg-final { scan-assembler-not {\tvfsub\.vv} } } */