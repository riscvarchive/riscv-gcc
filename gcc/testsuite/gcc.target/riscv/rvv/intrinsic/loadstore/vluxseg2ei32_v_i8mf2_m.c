/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg2ei32_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,const int8_t *base,vuint32m2_t bindex,size_t vl)
{
    vluxseg2ei32_v_i8mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vluxseg2ei32_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,const int8_t *base,vuint32m2_t bindex,size_t vl)
{
    vluxseg2ei32_v_i8mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg2ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 4 } } */

