/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg4e32_v_u32m2(uint32_t *base,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsseg4e32_v_u32m2(base, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vsseg4e32_v_u32m2(uint32_t *base,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,vuint32m2_t v3,size_t vl)
{
    vsseg4e32_v_u32m2(base, v0, v1, v2, v3, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e32,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg4e32\.v} 2 } } */
