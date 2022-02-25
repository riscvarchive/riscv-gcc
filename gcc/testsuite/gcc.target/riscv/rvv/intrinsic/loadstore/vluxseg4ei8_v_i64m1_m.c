/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg4ei8_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,const int64_t *base,vuint8mf8_t bindex,size_t vl)
{
    vluxseg4ei8_v_i64m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vluxseg4ei8_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,vint64m1_t maskedoff2,vint64m1_t maskedoff3,const int64_t *base,vuint8mf8_t bindex,size_t vl)
{
    vluxseg4ei8_v_i64m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg4ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 8 } } */

