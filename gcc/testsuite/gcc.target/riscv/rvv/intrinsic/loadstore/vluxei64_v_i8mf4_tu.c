/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8mf4_t
test0_vluxei64_v_i8mf4_tu(vint8mf4_t dest,const int8_t *base,vuint64m2_t bindex,size_t vl)
{
    return vluxei64_v_i8mf4_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu} 1 } } */

vint8mf4_t
test1_vluxei64_v_i8mf4_tu(vint8mf4_t dest,const int8_t *base,vuint64m2_t bindex,size_t vl)
{
    return vluxei64_v_i8mf4_tu(dest, base, bindex, 14);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*14,\s*e8,\s*mf4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei64\.v} 2 } } */
