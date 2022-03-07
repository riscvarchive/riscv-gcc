/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (16)));
typedef __fp16 vnx8hf __attribute__((vector_size (16)));

__attribute__((noipa))
vnx16qi foo(int8_t a, int8_t b, int8_t f)
{
  return (vnx16qi) { b, f, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, a, 2};
}

__attribute__((noipa))
vnx16qi foo2(int8_t a, int8_t b, int8_t f)
{
  return (vnx16qi) { b, f, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, a, 15};
}

__attribute__((noipa))
vnx16qi foo3(int8_t a, int8_t b, int8_t f)
{
  return (vnx16qi) { b, f, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 13, 15};
}

__attribute__((noipa))
vnx16qi foo4(int8_t a, int8_t b, int8_t f)
{
  return (vnx16qi) { 2, 3, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 13, 15, b, a};
}

__attribute__((noipa))
vnx16qi foo5(int8_t a, int8_t b, int8_t f)
{
  return (vnx16qi) { 2, 3, 4, f, 6, 7, 8, 9, 10, 11, 12, 13, 13, 15, b, a};
}

__attribute__((noipa))
vnx16qi foo6(int8_t a, int8_t b, int8_t f)
{
  return (vnx16qi) { a, b, 4, f, 6, 7, 8, 9, 10, a, 12, 13, 13, 15, b, a};
}

__attribute__((noipa))
vnx16qi foo7(int8_t a, int8_t b, int8_t f)
{
  return (vnx16qi) { a, b, f, f, f, f, f, f, f, a, f, f, f, f, b, f};
}

__attribute__((noipa))
vnx16qi foo8(int8_t a, int8_t b, int8_t f)
{
  return (vnx16qi) { b, f, 3, 3, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, a, 15};
}

/* { dg-final { scan-assembler-times "vmv.v.i\\tv\[1-3\]\?\[0-9\],\s*2" 1 } } */
/* { dg-final { scan-assembler-times "vid.v\\tv\[1-3\]\?\[0-9\]" 5 } } */

