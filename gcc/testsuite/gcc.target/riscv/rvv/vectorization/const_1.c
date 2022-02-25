/* { dg-do run } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

void __attribute__ ((noinline, noclone))
set (uint64_t *dst, int count)
{
  for (int i = 0; i < count; ++i)
    dst[i] = 0xffff00ff00ffff00ULL;
}

int
main ()
{
  #define TEST_SET(NUM, COUNT) \
    uint64_t result##NUM[COUNT] = {0}; \
    set (result##NUM, COUNT); \
    for (int i = 0; i < COUNT; i++) \
      if (result##NUM[i] != 0xffff00ff00ffff00ULL) \
        __builtin_abort ();
  
  TEST_SET(0, 2)
  TEST_SET(1, 9)
  TEST_SET(2, 17)
  TEST_SET(3, 32)
  TEST_SET(4, 64)
  TEST_SET(5, 128)
  TEST_SET(6, 277)
  TEST_SET(7, 319)
  TEST_SET(8, 1033)
  TEST_SET(9, 2011)

  return 0;
}
