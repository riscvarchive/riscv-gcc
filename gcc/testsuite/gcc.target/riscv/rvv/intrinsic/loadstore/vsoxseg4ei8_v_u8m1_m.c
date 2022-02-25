/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg4ei8_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vsoxseg4ei8_v_u8m1_m(mask, base, bindex, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg4ei8_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint8m1_t bindex,vuint8m1_t v0,vuint8m1_t v1,vuint8m1_t v2,vuint8m1_t v3,size_t vl)
{
    vsoxseg4ei8_v_u8m1_m(mask, base, bindex, v0, v1, v2, v3, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg4ei8\.v} 2 } } */
