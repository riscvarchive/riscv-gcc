/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=65536 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

typedef uint8_t vnx16qi __attribute__((vector_size (8192)));

vnx16qi __attribute__ ((noinline, noclone))
permute (vnx16qi x, vnx16qi y)
{
  vnx16qi mask = {2, 1, 128, 0};
  return (vnx16qi) __builtin_shuffle ((vnx16qi) x, (vnx16qi) y, mask);
}

/* { dg-final { scan-assembler-times {\tvrgather.vv} 1 } } */