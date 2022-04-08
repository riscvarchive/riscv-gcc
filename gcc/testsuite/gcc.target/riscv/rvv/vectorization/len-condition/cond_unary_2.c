/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define abs(A) ((A) < 0 ? -(A) : (A))
#define neg(A) (-(A))

#define DEF_LOOP(TYPE, OP)					\
  void __attribute__ ((noipa))					\
  test_##TYPE##_##OP (TYPE *__restrict r, TYPE *__restrict a,	\
		      TYPE *__restrict b,			\
		      TYPE *__restrict pred, int n)		\
  {								\
    for (int i = 0; i < n; ++i)					\
      {								\
	TYPE bi = b[i];						\
	r[i] = pred[i] ? OP (a[i]) : bi;			\
      }								\
  }

#define TEST_INT_TYPE(T, TYPE) \
  T (TYPE, abs) \
  T (TYPE, neg)

#define TEST_FLOAT_TYPE(T, TYPE, SUFFIX) \
  T (TYPE, __builtin_fabs##SUFFIX) \
  T (TYPE, neg)

#define TEST_ALL(T) \
  TEST_INT_TYPE (T, int8_t) \
  TEST_INT_TYPE (T, int16_t) \
  TEST_INT_TYPE (T, int32_t) \
  TEST_INT_TYPE (T, int64_t) \
  TEST_FLOAT_TYPE (T, _Float16, f16) \
  TEST_FLOAT_TYPE (T, float, f) \
  TEST_FLOAT_TYPE (T, double, )

TEST_ALL (DEF_LOOP)

/* { dg-final { scan-assembler-not {vneg\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n} } } */
/* { dg-final { scan-assembler-not {vfneg\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n} } } */
