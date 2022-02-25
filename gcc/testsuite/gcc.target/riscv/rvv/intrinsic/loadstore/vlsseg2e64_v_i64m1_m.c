/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg2e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vlsseg2e64_v_i64m1_m(vint64m1_t *v0,vint64m1_t *v1,vbool64_t mask,vint64m1_t maskedoff0,vint64m1_t maskedoff1,const int64_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e64_v_i64m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 21);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*21,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg2e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 4 } } */

