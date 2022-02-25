/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg8e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,vuint64m1_t maskedoff4,vuint64m1_t maskedoff5,vuint64m1_t maskedoff6,vuint64m1_t maskedoff7,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg8e64ff_v_u64m1_m(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,vuint64m1_t *v3,vuint64m1_t *v4,vuint64m1_t *v5,vuint64m1_t *v6,vuint64m1_t *v7,vbool64_t mask,vuint64m1_t maskedoff0,vuint64m1_t maskedoff1,vuint64m1_t maskedoff2,vuint64m1_t maskedoff3,vuint64m1_t maskedoff4,vuint64m1_t maskedoff5,vuint64m1_t maskedoff6,vuint64m1_t maskedoff7,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e64ff_v_u64m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, new_vl, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg8e64ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 16 } } */

