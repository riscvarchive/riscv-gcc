/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

/* Case 1.2: Trailing constants with repeating sequence.  */

#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (16)));
typedef __fp16 vnx8hf __attribute__((vector_size (16)));

__attribute__((noipa))
vnx16qi foo(int8_t a, int8_t b)
{
  return (vnx16qi) { a, b, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3 };
}

/* { dg-final { scan-assembler {\tvslide1up.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a1\s+vslide1up.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a0} } } */

__attribute__((noipa))
vnx16qi foo2(int8_t a, int8_t b, int8_t c)
{
  return (vnx16qi) { a, b, c, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2 };
}

/* { dg-final { scan-assembler {\tvslide1up.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a2\s+vslide1up.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a1\s+vslide1up.vx\s+v[1-3]?[0-9],\s*v[1-3]?[0-9],\s*a0} } } */

__attribute__((noipa))
vnx8hf foo3(__fp16 a, __fp16 b)
{
  return (vnx8hf) { a, b, 2.2, 3.3, 2.2, 3.3, 2.2, 3.3 };
}

/* { dg-final { scan-assembler {\tvfslide1up.vf\s+v[1-3.3]?[0-9],\s*v[1-3.3]?[0-9],\s*fa1\s+vfslide1up.vf\s+v[1-3.3]?[0-9],\s*v[1-3.3]?[0-9],\s*fa0} } } */

__attribute__((noipa))
vnx8hf foo4(__fp16 a, __fp16 b, __fp16 c)
{
  return (vnx8hf) { a, b, c, 2.2, 3.3, 2.2, 3.3, 2.2 };
}

/* { dg-final { scan-assembler {\tvfslide1up.vf\s+v[1-3.3]?[0-9],\s*v[1-3.3]?[0-9],\s*fa2\s+vfslide1up.vf\s+v[1-3.3]?[0-9],\s*v[1-3.3]?[0-9],\s*fa1\s+vfslide1up.vf\s+v[1-3.3]?[0-9],\s*v[1-3.3]?[0-9],\s*fa0} } } */
