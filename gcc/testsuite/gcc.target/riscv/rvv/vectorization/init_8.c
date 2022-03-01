/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (16)));
typedef __fp16 vnx8hf __attribute__((vector_size (16)));

__attribute__((noipa))
vnx16qi foo(int8_t a, int8_t b, int8_t c, int8_t d, int8_t e, int8_t f, int8_t g, int8_t h)
{
  return (vnx16qi) { a, 1, b, 2, c, 3, d, 4, e, 5, f, 6, g, 7, h, 8 }; 
}

__attribute__((noipa))
vnx8hf foo2(__fp16 a, __fp16 b, __fp16 c, __fp16 d)
{
  return (vnx8hf) { a, 1.1, b, 2.2, c, 3.3, d, 4.4 }; 
}
