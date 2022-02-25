/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8m1_t
test0_vloxei8_v_i8m1_tu(vint8m1_t dest,const int8_t *base,vuint8m1_t bindex,size_t vl)
{
    return vloxei8_v_i8m1_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu} 1 } } */

vint8m1_t
test1_vloxei8_v_i8m1_tu(vint8m1_t dest,const int8_t *base,vuint8m1_t bindex,size_t vl)
{
    return vloxei8_v_i8m1_tu(dest, base, bindex, 13);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*13,\s*e8,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei8\.v} 2 } } */
