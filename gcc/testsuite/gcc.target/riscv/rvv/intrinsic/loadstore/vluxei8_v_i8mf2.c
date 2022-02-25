/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8mf2_t
test0_vluxei8_v_i8mf2(const int8_t *base,vuint8mf2_t bindex,size_t vl)
{
    return vluxei8_v_i8mf2(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

vint8mf2_t
test1_vluxei8_v_i8mf2(const int8_t *base,vuint8mf2_t bindex,size_t vl)
{
    return vluxei8_v_i8mf2(base, bindex, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei8\.v} 2 } } */
