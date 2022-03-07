/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void foo1 (int8_t * base, int8_t * out)
{
  vint32mf2_t v = *(vint32mf2_t*)base;
  *(vint32mf2_t*)out = v;
}

void foo2 (int8_t * base, int8_t * out)
{
  vbool16_t v = *(vbool16_t*)base;
  *(vbool16_t*)out = v;
}

void foo3 (int8_t * base, int8_t * out)
{
  vint32mf2x2_t v = *(vint32mf2x2_t*)base;
  *(vint32mf2x2_t*)out = v;
}

void foo4 (int8_t * base, int8_t * out)
{
  vint32m2x2_t v = *(vint32m2x2_t*)base;
  *(vint32m2x2_t*)out = v;
}

/* { dg-final { scan-assembler-times {vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7],\s*zero)} 3 } } */

