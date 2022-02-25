/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg8ei8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,vuint8mf8_t maskedoff4,vuint8mf8_t maskedoff5,vuint8mf8_t maskedoff6,vuint8mf8_t maskedoff7,const uint8_t *base,vuint8mf8_t bindex,size_t vl)
{
    vluxseg8ei8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

void
test1_vluxseg8ei8_v_u8mf8_m(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,vuint8mf8_t *v7,vbool64_t mask,vuint8mf8_t maskedoff0,vuint8mf8_t maskedoff1,vuint8mf8_t maskedoff2,vuint8mf8_t maskedoff3,vuint8mf8_t maskedoff4,vuint8mf8_t maskedoff5,vuint8mf8_t maskedoff6,vuint8mf8_t maskedoff7,const uint8_t *base,vuint8mf8_t bindex,size_t vl)
{
    vluxseg8ei8_v_u8mf8_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, bindex, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg8ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 16 } } */

