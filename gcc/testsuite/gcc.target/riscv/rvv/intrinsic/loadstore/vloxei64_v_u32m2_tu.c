/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32m2_t
test0_vloxei64_v_u32m2_tu(vuint32m2_t dest,const uint32_t *base,vuint64m4_t bindex,size_t vl)
{
    return vloxei64_v_u32m2_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu} 1 } } */

vuint32m2_t
test1_vloxei64_v_u32m2_tu(vuint32m2_t dest,const uint32_t *base,vuint64m4_t bindex,size_t vl)
{
    return vloxei64_v_u32m2_tu(dest, base, bindex, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e32,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei64\.v} 2 } } */
