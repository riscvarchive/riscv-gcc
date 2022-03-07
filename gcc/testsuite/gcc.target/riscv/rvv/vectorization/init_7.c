/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (16)));
typedef __fp16 vnx8hf __attribute__((vector_size (16)));

__attribute__((noipa))
vnx16qi foo(int8_t a, int8_t b, int8_t c, int8_t d, int8_t e, int8_t f, int8_t g, int8_t h,
    int8_t a2, int8_t b2, int8_t c2, int8_t d2, int8_t e2, int8_t f2, int8_t g2, int8_t h2)
{
  return (vnx16qi) { a, b, c, d, e, f, g, h, a2, b2, c2, d2, e2, f2, g2, h2 };
}

__attribute__((noipa))
vnx8hf foo2(__fp16 a, __fp16 b, __fp16 c, __fp16 d, __fp16 e, __fp16 f, __fp16 g, __fp16 h)
{
  return (vnx8hf) { a, b, c, d, e, f, g, h };
}
