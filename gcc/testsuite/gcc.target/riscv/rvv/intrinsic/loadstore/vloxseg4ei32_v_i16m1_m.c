/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg4ei32_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,const int16_t *base,vuint32m2_t bindex,size_t vl)
{
    vloxseg4ei32_v_i16m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg4ei32_v_i16m1_m(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vbool16_t mask,vint16m1_t maskedoff0,vint16m1_t maskedoff1,vint16m1_t maskedoff2,vint16m1_t maskedoff3,const int16_t *base,vuint32m2_t bindex,size_t vl)
{
    vloxseg4ei32_v_i16m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg4ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 8 } } */

