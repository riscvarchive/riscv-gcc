/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg8e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsseg8e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsseg8e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,vuint64m1_t v4,vuint64m1_t v5,vuint64m1_t v6,vuint64m1_t v7,size_t vl)
{
    vsseg8e64_v_u64m1_m(mask, base, v0, v1, v2, v3, v4, v5, v6, v7, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg8e64\.v} 2 } } */
