/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define NUM_ELEMS(TYPE) (1024 / sizeof (TYPE))

#define DEF_REDUC_PLUS(TYPE)					\
void __attribute__ ((noinline, noclone))			\
reduc_plus_##TYPE (TYPE (*restrict a)[NUM_ELEMS (TYPE)],	\
		   TYPE *restrict r, int n)			\
{								\
  for (int i = 0; i < n; i++)					\
    {								\
      r[i] = 0;							\
      for (int j = 0; j < NUM_ELEMS (TYPE); j++)		\
        r[i] += a[i][j];					\
    }								\
}

#define TEST_PLUS(T)				\
  T (int8_t)					\
  T (int16_t)					\
  T (int32_t)					\
  T (int64_t)					\
  T (uint8_t)					\
  T (uint16_t)					\
  T (uint32_t)					\
  T (uint64_t)					\
  T (_Float16)					\
  T (float)					\
  T (double)

TEST_PLUS (DEF_REDUC_PLUS)

#define DEF_REDUC_MAXMIN(TYPE, NAME, CMP_OP)			\
void __attribute__ ((noinline, noclone))			\
reduc_##NAME##_##TYPE (TYPE (*restrict a)[NUM_ELEMS (TYPE)],	\
		       TYPE *restrict r, int n)			\
{								\
  for (int i = 0; i < n; i++)					\
    {								\
      r[i] = a[i][0];						\
      for (int j = 0; j < NUM_ELEMS (TYPE); j++)		\
        r[i] = a[i][j] CMP_OP r[i] ? a[i][j] : r[i];		\
    }								\
}

#define TEST_MAXMIN(T)				\
  T (int8_t, max, >)				\
  T (int16_t, max, >)				\
  T (int32_t, max, >)				\
  T (int64_t, max, >)				\
  T (uint8_t, max, >)				\
  T (uint16_t, max, >)				\
  T (uint32_t, max, >)				\
  T (uint64_t, max, >)				\
  T (_Float16, max, >)				\
  T (float, max, >)				\
  T (double, max, >)				\
						\
  T (int8_t, min, <)				\
  T (int16_t, min, <)				\
  T (int32_t, min, <)				\
  T (int64_t, min, <)				\
  T (uint8_t, min, <)				\
  T (uint16_t, min, <)				\
  T (uint32_t, min, <)				\
  T (uint64_t, min, <)				\
  T (_Float16, min, <)				\
  T (float, min, <)				\
  T (double, min, <)

TEST_MAXMIN (DEF_REDUC_MAXMIN)

#define DEF_REDUC_BITWISE(TYPE,NAME,BIT_OP)			\
void __attribute__ ((noinline, noclone))			\
reduc_##NAME##TYPE (TYPE (*restrict a)[NUM_ELEMS(TYPE)],	\
		    TYPE *restrict r, int n)			\
{								\
  for (int i = 0; i < n; i++)					\
    {								\
      r[i] = a[i][0];						\
      for (int j = 0; j < NUM_ELEMS(TYPE); j++)			\
        r[i] BIT_OP a[i][j];					\
    }								\
}

#define TEST_BITWISE(T)				\
  T (int8_t, and, &=)				\
  T (int16_t, and, &=)				\
  T (int32_t, and, &=)				\
  T (int64_t, and, &=)				\
  T (uint8_t, and, &=)				\
  T (uint16_t, and, &=)				\
  T (uint32_t, and, &=)				\
  T (uint64_t, and, &=)				\
						\
  T (int8_t, ior, |=)				\
  T (int16_t, ior, |=)				\
  T (int32_t, ior, |=)				\
  T (int64_t, ior, |=)				\
  T (uint8_t, ior, |=)				\
  T (uint16_t, ior, |=)				\
  T (uint32_t, ior, |=)				\
  T (uint64_t, ior, |=)				\
						\
  T (int8_t, xor, ^=)				\
  T (int16_t, xor, ^=)				\
  T (int32_t, xor, ^=)				\
  T (int64_t, xor, ^=)				\
  T (uint8_t, xor, ^=)				\
  T (uint16_t, xor, ^=)				\
  T (uint32_t, xor, ^=)				\
  T (uint64_t, xor, ^=)

TEST_BITWISE (DEF_REDUC_BITWISE)

/* { dg-final { scan-assembler-times {\tvredsum.vs} 8 } } */
/* { dg-final { scan-assembler-times {\tvredmax.vs} 4 } } */
/* { dg-final { scan-assembler-times {\tvredmaxu.vs} 4 } } */
/* { dg-final { scan-assembler-times {\tvredmin.vs} 4 } } */
/* { dg-final { scan-assembler-times {\tvredminu.vs} 4 } } */
/* { dg-final { scan-assembler-times {\tvredand.vs} 8 } } */
/* { dg-final { scan-assembler-times {\tvredor.vs} 8 } } */
/* { dg-final { scan-assembler-times {\tvredxor.vs} 8 } } */
/* { dg-final { scan-assembler-times {\tvfredusum.vs} 3 } } */
/* { dg-final { scan-assembler-times {\tvfredmax.vs} 3 } } */
/* { dg-final { scan-assembler-times {\tvfredmin.vs} 3 } } */