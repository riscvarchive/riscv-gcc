/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stddef.h>
#include <stdint.h>

void __attribute__ ((noinline, noclone))
foo (int8_t *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

void __attribute__ ((noinline, noclone))
foo2 (int16_t *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

void __attribute__ ((noinline, noclone))
foo3 (int32_t *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

void __attribute__ ((noinline, noclone))
foo4 (int64_t *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

void __attribute__ ((noinline, noclone))
foo5 (uint8_t *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

void __attribute__ ((noinline, noclone))
foo6 (uint16_t *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

void __attribute__ ((noinline, noclone))
foo7 (uint32_t *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

void __attribute__ ((noinline, noclone))
foo8 (uint64_t *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

void __attribute__ ((noinline, noclone))
foo9 (_Float16 *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

void __attribute__ ((noinline, noclone))
foo10 (float *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

void __attribute__ ((noinline, noclone))
foo11 (double *x, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    x[i] += 1;
}

/* { dg-final { scan-tree-dump-times "\.LEN_LOAD" 11 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.LEN_STORE"  11 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 11 "optimized" } } */