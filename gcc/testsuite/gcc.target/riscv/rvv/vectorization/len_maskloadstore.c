/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stddef.h>
#include <stdint.h>

void __attribute__ ((noinline, noclone))
foo (int8_t * __restrict cond, int8_t * __restrict x, int8_t * __restrict y)
{
  for (size_t i = 0; i < 16; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

void __attribute__ ((noinline, noclone))
foo2 (int16_t * __restrict cond, int16_t * __restrict x, int16_t * __restrict y)
{
  for (size_t i = 0; i < 8; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

void __attribute__ ((noinline, noclone))
foo3 (int32_t * __restrict cond, int32_t * __restrict x, int32_t * __restrict y)
{
  for (size_t i = 0; i < 4; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

void __attribute__ ((noinline, noclone))
foo4 (int64_t * __restrict cond, int64_t * __restrict x, int64_t * __restrict y)
{
  for (size_t i = 0; i < 4; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

void __attribute__ ((noinline, noclone))
foo5 (uint8_t * __restrict cond, uint8_t * __restrict x, uint8_t * __restrict y)
{
  for (size_t i = 0; i < 16; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

void __attribute__ ((noinline, noclone))
foo6 (uint16_t * __restrict cond, uint16_t * __restrict x, uint16_t * __restrict y)
{
  for (size_t i = 0; i < 8; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

void __attribute__ ((noinline, noclone))
foo7 (uint32_t * __restrict cond, uint32_t * __restrict x, uint32_t * __restrict y)
{
  for (size_t i = 0; i < 4; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

void __attribute__ ((noinline, noclone))
foo8 (uint64_t * __restrict cond, uint64_t * __restrict x, uint64_t * __restrict y)
{
  for (size_t i = 0; i < 4; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

void __attribute__ ((noinline, noclone))
foo9 (int16_t * __restrict cond, _Float16 * __restrict x, _Float16 * __restrict y)
{
  for (size_t i = 0; i < 8; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

void __attribute__ ((noinline, noclone))
foo10 (uint32_t * __restrict cond, float * __restrict x, float * __restrict y)
{
  for (size_t i = 0; i < 4; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

void __attribute__ ((noinline, noclone))
foo11 (uint64_t * __restrict cond, double * __restrict x, double * __restrict y)
{
  for (size_t i = 0; i < 4; ++i)
    {
      if (cond[i])
        x[i] = y[i];
    }
}

/* { dg-final { scan-tree-dump-times "\.LEN_MASK_LOAD" 14 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.LEN_MASK_STORE"  14 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 3 "optimized" } } */