/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test intrinsic using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <riscv_vector.h>

vfloat16mf4_t
init_vfloat16mf4 ()
{
  vfloat16mf4_t a;
  return a;
}

vfloat16mf2_t
init_vfloat16mf2 ()
{
  vfloat16mf2_t a;
  return a;
}

vfloat16m1_t
init_vfloat16m1 ()
{
  vfloat16m1_t a;
  return a;
}

vfloat16m2_t
init_vfloat16m2 ()
{
  vfloat16m2_t a;
  return a;
}

vfloat16m4_t
init_vfloat16m4 ()
{
  vfloat16m4_t a;
  return a;
}

vfloat16m8_t
init_vfloat16m8 ()
{
  vfloat16m8_t a;
  return a;
}

vfloat32mf2_t
init_vfloat32mf2 ()
{
  vfloat32mf2_t a;
  return a;
}

vfloat32m1_t
init_vfloat32m1 ()
{
  vfloat32m1_t a;
  return a;
}

vfloat32m2_t
init_vfloat32m2 ()
{
  vfloat32m2_t a;
  return a;
}

vfloat32m4_t
init_vfloat32m4 ()
{
  vfloat32m4_t a;
  return a;
}

vfloat32m8_t
init_vfloat32m8 ()
{
  vfloat32m8_t a;
  return a;
}

vfloat64m1_t
init_vfloat64m1 ()
{
  vfloat64m1_t a;
  return a;
}

vfloat64m2_t
init_vfloat64m2 ()
{
  vfloat64m2_t a;
  return a;
}

vfloat64m4_t
init_vfloat64m4 ()
{
  vfloat64m4_t a;
  return a;
}

vfloat64m8_t
init_vfloat64m8 ()
{
  vfloat64m8_t a;
  return a;
}

/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*0\n} 15 } } */