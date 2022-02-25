/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg2ei64_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t maskedoff0,vuint16m2_t maskedoff1,const uint16_t *base,vuint64m8_t bindex,size_t vl)
{
    vluxseg2ei64_v_u16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vluxseg2ei64_v_u16m2_m(vuint16m2_t *v0,vuint16m2_t *v1,vbool8_t mask,vuint16m2_t maskedoff0,vuint16m2_t maskedoff1,const uint16_t *base,vuint64m8_t bindex,size_t vl)
{
    vluxseg2ei64_v_u16m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e16,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg2ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 4 } } */

