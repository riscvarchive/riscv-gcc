/* { dg-do compile } */
/* { dg-additional-options "-Ofast -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#define DEF_LOOP(TYPE, FN)		\
  void __attribute__ ((noinline, noclone))					\
  test_##TYPE (TYPE *x, int n)		\
  {					\
    for (int i = 0; i < n; ++i)		\
      x[i] = FN (x[i]);			\
  }

#define TEST_ALL(T)			\
  T (_Float16, __builtin_sqrtf16)	\
  T (float, __builtin_sqrtf)		\
  T (double, __builtin_sqrt)

TEST_ALL (DEF_LOOP)

/* { dg-final { scan-assembler-times {\tvfsqrt\.v} 3 } } */