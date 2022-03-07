/* { dg-do compile } */
/* { dg-additional-options "-O3 -fno-vect-cost-model -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

void __attribute__ ((noinline, noclone))
f1 (int32_t *restrict y, int32_t *restrict x, int32_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = x[index[i * 2]] + 1;
      y[i * 2 + 1] = x[index[i * 2 + 1]] + 2;
    }
}

void __attribute__ ((noinline, noclone))
f2 (int32_t *restrict y, int32_t *restrict x, uint32_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = x[index[i * 2]] + 1;
      y[i * 2 + 1] = x[index[i * 2 + 1]] + 2;
    }
}

void __attribute__ ((noinline, noclone))
f3 (int32_t *restrict y, int32_t *restrict x, uint64_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = x[index[i * 2]] + 1;
      y[i * 2 + 1] = x[index[i * 2 + 1]] + 2;
    }
}

void __attribute__ ((noinline, noclone))
f4 (int64_t *restrict y, int64_t *restrict x, uint64_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = x[index[i * 2]] + 1;
      y[i * 2 + 1] = x[index[i * 2 + 1]] + 2;
    }
}

void __attribute__ ((noinline, noclone))
f5 (int64_t *restrict y, int64_t *restrict x, uint64_t *restrict index)
{
  for (uint64_t i = 0; i < 100; ++i)
    {
      y[i * 2] = x[index[i * 2]] + 1;
      y[i * 2 + 1] = x[index[i * 2 + 1]] + 2;
    }
}

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 10 "optimized" {target riscv64-*-*} } } */
/* For the f5 (), we don't enable vec_pack_trunc because it breaks in most cases,
   so it doesn't use LEN_GATHER_LOAD. But it makes sense, because in RV32 system,
   we don't recommand programmer uses 64bit as memory address access type. */
/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 8 "optimized" {target riscv32-*-*} } } */
/* { dg-final { scan-tree-dump-times " \.GATHER_LOAD" 2 "optimized" {target riscv32-*-*} } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 5 "optimized" {target riscv64-*-*} } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 4 "optimized" {target riscv32-*-*} } } */