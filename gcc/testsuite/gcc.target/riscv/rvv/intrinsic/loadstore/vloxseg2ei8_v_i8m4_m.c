/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei8_v_i8m4_m(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t maskedoff0,vint8m4_t maskedoff1,const int8_t *base,vuint8m4_t bindex,size_t vl)
{
    vloxseg2ei8_v_i8m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg2ei8_v_i8m4_m(vint8m4_t *v0,vint8m4_t *v1,vbool2_t mask,vint8m4_t maskedoff0,vint8m4_t maskedoff1,const int8_t *base,vuint8m4_t bindex,size_t vl)
{
    vloxseg2ei8_v_i8m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, 24);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*24,\s*e8,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs4r\.v} 4 } } */

