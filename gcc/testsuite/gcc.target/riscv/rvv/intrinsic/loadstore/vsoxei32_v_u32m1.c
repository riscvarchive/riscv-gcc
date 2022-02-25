/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei32_v_u32m1(uint32_t *base,vuint32m1_t bindex,vuint32m1_t value,size_t vl)
{
    vsoxei32_v_u32m1(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsoxei32_v_u32m1(uint32_t *base,vuint32m1_t bindex,vuint32m1_t value,size_t vl)
{
    vsoxei32_v_u32m1(base, bindex, value, 28);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*28,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei32\.v} 2 } } */
