/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

/* Case 2.1: Leading constants with stepped sequence.  */

#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (16)));
typedef __fp16 vnx8hf __attribute__((vector_size (16)));

__attribute__((noipa))
vnx16qi foo(int8_t a, int8_t b)
{
  return (vnx16qi) { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, a, b };
}

/* { dg-final { scan-assembler {\tvslide1down.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a0\s+vslide1down.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a1} } } */

__attribute__((noipa))
vnx16qi foo2(int8_t a, int8_t b, int c)
{
  return (vnx16qi) { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, a, b, c };
}

/* { dg-final { scan-assembler {\tvslide1down.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a0\s+vslide1down.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a1\s+vslide1down.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a2} } } */

__attribute__((noipa))
vnx8hf foo3(__fp16 a, __fp16 b)
{
  return (vnx8hf) { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, a, b };
}

/* { dg-final { scan-assembler {\tvfslide1down.vf\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*fa0\s+vfslide1down.vf\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*fa1} } } */

__attribute__((noipa))
vnx8hf foo4(__fp16 a, __fp16 b, __fp16 c)
{
  return (vnx8hf) { 1.1, 2.2, 3.3, 4.4, 5.5, a, b, c };
}

/* { dg-final { scan-assembler {\tvfslide1down.vf\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*fa0\s+vfslide1down.vf\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*fa1\s+vfslide1down.vf\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*fa2} } } */

