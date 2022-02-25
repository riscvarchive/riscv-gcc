/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg7ei16_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsoxseg7ei16_v_i8mf4_m(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg7ei16_v_i8mf4_m(vbool32_t mask,int8_t *base,vuint16mf2_t bindex,vint8mf4_t v0,vint8mf4_t v1,vint8mf4_t v2,vint8mf4_t v3,vint8mf4_t v4,vint8mf4_t v5,vint8mf4_t v6,size_t vl)
{
    vsoxseg7ei16_v_i8mf4_m(mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg7ei16\.v} 2 } } */
