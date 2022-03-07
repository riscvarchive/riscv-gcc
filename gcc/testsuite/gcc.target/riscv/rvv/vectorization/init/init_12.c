/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (16)));
typedef __fp16 vnx8hf __attribute__((vector_size (16)));

__attribute__((noipa))
vnx16qi foo(int8_t a, int8_t b, int8_t f) 
{
  return (vnx16qi) { b, f, b, f, b, f, b, f, b, f, b, f, b, f, a, f };
}

__attribute__((noipa))
vnx8hf foo2(__fp16 a, __fp16 b, __fp16 f) 
{
  return (vnx8hf) { b, f, b, f, b, f, a, f };
}
