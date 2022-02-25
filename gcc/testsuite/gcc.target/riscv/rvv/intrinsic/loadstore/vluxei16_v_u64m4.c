/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint64m4_t
test0_vluxei16_v_u64m4(const uint64_t *base,vuint16m1_t bindex,size_t vl)
{
    return vluxei16_v_u64m4(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu} 1 } } */

vuint64m4_t
test1_vluxei16_v_u64m4(const uint64_t *base,vuint16m1_t bindex,size_t vl)
{
    return vluxei16_v_u64m4(base, bindex, 18);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*18,\s*e64,\s*m4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei16\.v} 2 } } */
