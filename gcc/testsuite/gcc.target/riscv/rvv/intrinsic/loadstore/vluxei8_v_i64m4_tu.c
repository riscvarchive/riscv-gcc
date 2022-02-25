/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint64m4_t
test0_vluxei8_v_i64m4_tu(vint64m4_t dest,const int64_t *base,vuint8mf2_t bindex,size_t vl)
{
    return vluxei8_v_i64m4_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

vint64m4_t
test1_vluxei8_v_i64m4_tu(vint64m4_t dest,const int64_t *base,vuint8mf2_t bindex,size_t vl)
{
    return vluxei8_v_i64m4_tu(dest, base, bindex, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e64,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei8\.v} 2 } } */
