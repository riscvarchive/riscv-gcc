/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math" } */
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
      x[i] = pred[i] != 1 ? y[i] OP z : y[i];	\
  }

#define TEST_INT_TYPE(TYPE) \
  TEST (TYPE, add, +) \
  TEST (TYPE, sub, -) \
  TEST (TYPE, mul, *)

#define TEST_FP_TYPE(TYPE) \
  TEST (TYPE, add, +) \
  TEST (TYPE, sub, -) \
  TEST (TYPE, mul, *)

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

/* { dg-final { scan-assembler {\tvadd\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t} {target riscv64-*-*} } } */
/* { dg-final { scan-assembler {\tvsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t} {target riscv64-*-*} } } */
/* { dg-final { scan-assembler {\tvmul\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t} {target riscv64-*-*} } } */
/* { dg-final { scan-assembler {\tvadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} {target riscv32-*-*} } } */
/* { dg-final { scan-assembler {\tvsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} {target riscv32-*-*} } } */
/* { dg-final { scan-assembler {\tvmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} {target riscv32-*-*} } } */
/* { dg-final { scan-assembler {\tvfadd\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t} } } */
/* { dg-final { scan-assembler {\tvfsub\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t} } } */
/* { dg-final { scan-assembler {\tvfmul\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*v0\.t} } } */
/* { dg-final { scan-assembler-not {\tvadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n} } } */
/* { dg-final { scan-assembler-not {\tvsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n} } } */
/* { dg-final { scan-assembler-not {\tvmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n} } } */
/* { dg-final { scan-assembler-not {\tvadd\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n} } } */
/* { dg-final { scan-assembler-not {\tvsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n} } } */
/* { dg-final { scan-assembler-not {\tvmul\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\n} } } */
/* { dg-final { scan-assembler-not {\tvfadd\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n} } } */
/* { dg-final { scan-assembler-not {\tvfsub\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n} } } */
/* { dg-final { scan-assembler-not {\tvfmul\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7])\n} } } */
/* { dg-final { scan-assembler-not {\tvfadd\.vv} } } */
/* { dg-final { scan-assembler-not {\tvfsub\.vv} } } */
/* { dg-final { scan-assembler-not {\tvfmul\.vv} } } */