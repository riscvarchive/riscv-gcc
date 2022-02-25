/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint64m1_t
test0_vloxei16_v_u64m1(const uint64_t *base,vuint16mf4_t bindex,size_t vl)
{
    return vloxei16_v_u64m1(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

vuint64m1_t
test1_vloxei16_v_u64m1(const uint64_t *base,vuint16mf4_t bindex,size_t vl)
{
    return vloxei16_v_u64m1(base, bindex, 2);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*2,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei16\.v} 2 } } */
