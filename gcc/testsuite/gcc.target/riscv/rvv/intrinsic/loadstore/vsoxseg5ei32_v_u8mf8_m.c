/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg5ei32_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsoxseg5ei32_v_u8mf8_m(mask, base, bindex, v0, v1, v2, v3, v4, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg5ei32_v_u8mf8_m(vbool64_t mask,uint8_t *base,vuint32mf2_t bindex,vuint8mf8_t v0,vuint8mf8_t v1,vuint8mf8_t v2,vuint8mf8_t v3,vuint8mf8_t v4,size_t vl)
{
    vsoxseg5ei32_v_u8mf8_m(mask, base, bindex, v0, v1, v2, v3, v4, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg5ei32\.v} 2 } } */
