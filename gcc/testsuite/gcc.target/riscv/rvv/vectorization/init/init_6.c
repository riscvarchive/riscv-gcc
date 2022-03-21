/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

/* Case 3: Trailing same element.  */ 

#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (16)));
typedef __fp16 vnx8hf __attribute__((vector_size (16)));

__attribute__((noipa))
vnx16qi foo(int8_t a, int8_t b, int8_t c)
{
  return (vnx16qi) { c, c, c, c, c, c, c, c, c, c, c, c, c, c, b, a };
}

/* { dg-final { scan-assembler {\tvslide1down.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a0\s+vslide1down.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a1} } } */

__attribute__((noipa))
vnx16qi foo2(int8_t a, int8_t b, int8_t c)
{
  return (vnx16qi) { c, c, c, c, c, c, c, c, c, c, c, c, c, a, b, a };
}

/* { dg-final { scan-assembler {\tvslide1down.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a0\s+vslide1down.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a1\s+vslide1down.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a0} } } */

__attribute__((noipa))
vnx8hf foo3(__fp16 a, __fp16 b, __fp16 c)
{
  return (vnx8hf) { c, c, c, c, c, c, b, a };
}

/* { dg-final { scan-assembler {\tvfslide1down.vf\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*fa0\s+vfslide1down.vf\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*fa1} } } */

__attribute__((noipa))
vnx8hf foo4(__fp16 a, __fp16 b, __fp16 c)
{
  return (vnx8hf) { c, c, c, c, c, a, b, a };
}

/* { dg-final { scan-assembler {\tvfslide1down.vf\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*fa0\s+vfslide1down.vf\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*fa1\s+vfslide1down.vf\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*fa0} } } */

