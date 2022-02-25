/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint32m4_t
test0_vluxei8_v_i32m4_tu(vint32m4_t dest,const int32_t *base,vuint8m1_t bindex,size_t vl)
{
    return vluxei8_v_i32m4_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu} 1 } } */

vint32m4_t
test1_vluxei8_v_i32m4_tu(vint32m4_t dest,const int32_t *base,vuint8m1_t bindex,size_t vl)
{
    return vluxei8_v_i32m4_tu(dest, base, bindex, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e32,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei8\.v} 2 } } */
