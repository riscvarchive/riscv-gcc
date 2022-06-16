/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test intrinsic using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <riscv_vector.h>

vuint8mf8_t
init_vuint8mf8 ()
{
  vuint8mf8_t a;
  return a;
}

vuint8mf4_t
init_vuint8mf4 ()
{
  vuint8mf4_t a;
  return a;
}

vuint8mf2_t
init_vuint8mf2 ()
{
  vuint8mf2_t a;
  return a;
}

vuint8m1_t
init_vuint8m1 ()
{
  vuint8m1_t a;
  return a;
}

vuint8m2_t
init_vuint8m2 ()
{
  vuint8m2_t a;
  return a;
}

vuint8m4_t
init_vuint8m4 ()
{
  vuint8m4_t a;
  return a;
}

vuint8m8_t
init_vuint8m8 ()
{
  vuint8m8_t a;
  return a;
}

vuint16mf4_t
init_vuint16mf4 ()
{
  vuint16mf4_t a;
  return a;
}

vuint16mf2_t
init_vuint16mf2 ()
{
  vuint16mf2_t a;
  return a;
}

vuint16m1_t
init_vuint16m1 ()
{
  vuint16m1_t a;
  return a;
}

vuint16m2_t
init_vuint16m2 ()
{
  vuint16m2_t a;
  return a;
}

vuint16m4_t
init_vuint16m4 ()
{
  vuint16m4_t a;
  return a;
}

vuint16m8_t
init_vuint16m8 ()
{
  vuint16m8_t a;
  return a;
}

vuint32mf2_t
init_vuint32mf2 ()
{
  vuint32mf2_t a;
  return a;
}

vuint32m1_t
init_vuint32m1 ()
{
  vuint32m1_t a;
  return a;
}

vuint32m2_t
init_vuint32m2 ()
{
  vuint32m2_t a;
  return a;
}

vuint32m4_t
init_vuint32m4 ()
{
  vuint32m4_t a;
  return a;
}

vuint32m8_t
init_vuint32m8 ()
{
  vuint32m8_t a;
  return a;
}

vuint64m1_t
init_vuint64m1 ()
{
  vuint64m1_t a;
  return a;
}

vuint64m2_t
init_vuint64m2 ()
{
  vuint64m2_t a;
  return a;
}

vuint64m4_t
init_vuint64m4 ()
{
  vuint64m4_t a;
  return a;
}

vuint64m8_t
init_vuint64m8 ()
{
  vuint64m8_t a;
  return a;
}

/* { dg-final { scan-assembler-times {\tvmv.v.i\s+v[1-3]?[0-9],\s*0\n} 22 } } */