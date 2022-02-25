/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg8ei16_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,const int8_t *base,vuint16mf4_t bindex,size_t vl)
{
    vloxseg8ei16_v_i8mf8_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg8ei16_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,vint8mf8_t *v7,const int8_t *base,vuint16mf4_t bindex,size_t vl)
{
    vloxseg8ei16_v_i8mf8_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bindex, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e8,\s*mf8,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg8ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 16 } } */

