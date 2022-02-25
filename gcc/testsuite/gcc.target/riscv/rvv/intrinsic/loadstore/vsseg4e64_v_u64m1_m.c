/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg4e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsseg4e64_v_u64m1_m(mask, base, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsseg4e64_v_u64m1_m(vbool64_t mask,uint64_t *base,vuint64m1_t v0,vuint64m1_t v1,vuint64m1_t v2,vuint64m1_t v3,size_t vl)
{
    vsseg4e64_v_u64m1_m(mask, base, v0, v1, v2, v3, 8);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*8,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg4e64\.v} 2 } } */
