/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test intrinsic using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <riscv_vector.h>

vbool1_t
init_vbool1 ()
{
  vbool1_t a;
  return a;
}

vbool2_t
init_vbool2 ()
{
  vbool2_t a;
  return a;
}

vbool4_t
init_vbool4 ()
{
  vbool4_t a;
  return a;
}

vbool8_t
init_vbool8 ()
{
  vbool8_t a;
  return a;
}

vbool16_t
init_vbool16 ()
{
  vbool16_t a;
  return a;
}

vbool32_t
init_vbool32 ()
{
  vbool32_t a;
  return a;
}

vbool64_t
init_vbool64 ()
{
  vbool64_t a;
  return a;
}

/* { dg-final { scan-assembler-times {\tvmclr.m} 7 } } */