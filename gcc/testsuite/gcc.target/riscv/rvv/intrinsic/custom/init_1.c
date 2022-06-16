/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test intrinsic using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <riscv_vector.h>

vint8mf8_t
init_vint8mf8 ()
{
  vint8mf8_t a;
  return a;
}

vint8mf4_t
init_vint8mf4 ()
{
  vint8mf4_t a;
  return a;
}

vint8mf2_t
init_vint8mf2 ()
{
  vint8mf2_t a;
  return a;
}

vint8m1_t
init_vint8m1 ()
{
  vint8m1_t a;
  return a;
}

vint8m2_t
init_vint8m2 ()
{
  vint8m2_t a;
  return a;
}

vint8m4_t
init_vint8m4 ()
{
  vint8m4_t a;
  return a;
}

vint8m8_t
init_vint8m8 ()
{
  vint8m8_t a;
  return a;
}

vint16mf4_t
init_vint16mf4 ()
{
  vint16mf4_t a;
  return a;
}

vint16mf2_t
init_vint16mf2 ()
{
  vint16mf2_t a;
  return a;
}

vint16m1_t
init_vint16m1 ()
{
  vint16m1_t a;
  return a;
}

vint16m2_t
init_vint16m2 ()
{
  vint16m2_t a;
  return a;
}

vint16m4_t
init_vint16m4 ()
{
  vint16m4_t a;
  return a;
}

vint16m8_t
init_vint16m8 ()
{
  vint16m8_t a;
  return a;
}

vint32mf2_t
init_vint32mf2 ()
{
  vint32mf2_t a;
  return a;
}

vint32m1_t
init_vint32m1 ()
{
  vint32m1_t a;
  return a;
}

vint32m2_t
init_vint32m2 ()
{
  vint32m2_t a;
  return a;
}

vint32m4_t
init_vint32m4 ()
{
  vint32m4_t a;
  return a;
}

vint32m8_t
init_vint32m8 ()
{
  vint32m8_t a;
  return a;
}

vint64m1_t
init_vint64m1 ()
{
  vint64m1_t a;
  return a;
}

vint64m2_t
init_vint64m2 ()
{
  vint64m2_t a;
  return a;
}

vint64m4_t
init_vint64m4 ()
{
  vint64m4_t a;
  return a;
}

vint64m8_t
init_vint64m8 ()
{
  vint64m8_t a;
  return a;
}

/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*0\n} 22 } } */