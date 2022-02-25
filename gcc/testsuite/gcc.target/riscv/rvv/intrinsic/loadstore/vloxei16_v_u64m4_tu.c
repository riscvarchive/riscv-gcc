/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint64m4_t
test0_vloxei16_v_u64m4_tu(vuint64m4_t dest,const uint64_t *base,vuint16m1_t bindex,size_t vl)
{
    return vloxei16_v_u64m4_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

vuint64m4_t
test1_vloxei16_v_u64m4_tu(vuint64m4_t dest,const uint64_t *base,vuint16m1_t bindex,size_t vl)
{
    return vloxei16_v_u64m4_tu(dest, base, bindex, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei16\.v} 2 } } */
