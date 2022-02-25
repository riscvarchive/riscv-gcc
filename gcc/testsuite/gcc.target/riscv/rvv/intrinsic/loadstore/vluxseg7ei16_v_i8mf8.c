/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg7ei16_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,const int8_t *base,vuint16mf4_t bindex,size_t vl)
{
    vluxseg7ei16_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

void
test1_vluxseg7ei16_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,vint8mf8_t *v3,vint8mf8_t *v4,vint8mf8_t *v5,vint8mf8_t *v6,const int8_t *base,vuint16mf4_t bindex,size_t vl)
{
    vluxseg7ei16_v_i8mf8(v0, v1, v2, v3, v4, v5, v6, base, bindex, 4);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*4,\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg7ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 14 } } */

