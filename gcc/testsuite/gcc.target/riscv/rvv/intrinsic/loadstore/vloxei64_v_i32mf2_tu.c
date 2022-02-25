/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint32mf2_t
test0_vloxei64_v_i32mf2_tu(vint32mf2_t dest,const int32_t *base,vuint64m1_t bindex,size_t vl)
{
    return vloxei64_v_i32mf2_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu} 1 } } */

vint32mf2_t
test1_vloxei64_v_i32mf2_tu(vint32mf2_t dest,const int32_t *base,vuint64m1_t bindex,size_t vl)
{
    return vloxei64_v_i32mf2_tu(dest, base, bindex, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e32,\s*mf2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei64\.v} 2 } } */
