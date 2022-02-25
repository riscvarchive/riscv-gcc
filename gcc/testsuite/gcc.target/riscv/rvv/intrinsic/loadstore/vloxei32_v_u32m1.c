/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32m1_t
test0_vloxei32_v_u32m1(const uint32_t *base,vuint32m1_t bindex,size_t vl)
{
    return vloxei32_v_u32m1(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

vuint32m1_t
test1_vloxei32_v_u32m1(const uint32_t *base,vuint32m1_t bindex,size_t vl)
{
    return vloxei32_v_u32m1(base, bindex, 5);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*5,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei32\.v} 2 } } */
