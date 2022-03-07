/* { dg-do run } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define TEST(TYPE, CONST)			\
  void __attribute__ ((noinline, noclone))						\
  set_##TYPE (TYPE *dst, int count)		\
  {						\
    for (int i = 0; i < count; ++i)		\
      dst[i] = CONST;				\
  }

TEST (uint16_t, 129)
TEST (uint32_t, 129)
TEST (uint64_t, 129)

int
main ()
{
  uint16_t result0[1997] = {0};
  uint32_t result1[1997] = {0};
  uint64_t result2[1997] = {0};
  
  set_uint16_t (result0, 1997);
  set_uint32_t (result1, 1997);
  set_uint64_t (result2, 1997);

  for (int i = 0; i < 1997; i++)
    if (result0[i] != 129)
      __builtin_abort ();
  
  for (int i = 0; i < 1997; i++)
    if (result1[i] != 129)
      __builtin_abort ();

  for (int i = 0; i < 1997; i++)
    if (result2[i] != 129)
      __builtin_abort ();
  return 0;
}
