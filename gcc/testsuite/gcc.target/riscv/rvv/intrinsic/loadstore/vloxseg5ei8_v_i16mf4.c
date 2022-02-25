/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg5ei8_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,const int16_t *base,vuint8mf8_t bindex,size_t vl)
{
    vloxseg5ei8_v_i16mf4(v0, v1, v2, v3, v4, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vloxseg5ei8_v_i16mf4(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vint16mf4_t *v3,vint16mf4_t *v4,const int16_t *base,vuint8mf8_t bindex,size_t vl)
{
    vloxseg5ei8_v_i16mf4(v0, v1, v2, v3, v4, base, bindex, 24);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg5ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 10 } } */

