/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg2ei8_v_u16m4_m(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t maskedoff0,vuint16m4_t maskedoff1,const uint16_t *base,vuint8m2_t bindex,size_t vl)
{
    vluxseg2ei8_v_u16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu} 1 } } */

void
test1_vluxseg2ei8_v_u16m4_m(vuint16m4_t *v0,vuint16m4_t *v1,vbool4_t mask,vuint16m4_t maskedoff0,vuint16m4_t maskedoff1,const uint16_t *base,vuint8m2_t bindex,size_t vl)
{
    vluxseg2ei8_v_u16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e16,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg2ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs4r\.v} 4 } } */

