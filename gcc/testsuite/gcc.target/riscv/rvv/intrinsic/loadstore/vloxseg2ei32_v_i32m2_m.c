/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t maskedoff0,vint32m2_t maskedoff1,const int32_t *base,vuint32m2_t bindex,size_t vl)
{
    vloxseg2ei32_v_i32m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg2ei32_v_i32m2_m(vint32m2_t *v0,vint32m2_t *v1,vbool16_t mask,vint32m2_t maskedoff0,vint32m2_t maskedoff1,const int32_t *base,vuint32m2_t bindex,size_t vl)
{
    vloxseg2ei32_v_i32m2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, 21);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*21,\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 4 } } */

