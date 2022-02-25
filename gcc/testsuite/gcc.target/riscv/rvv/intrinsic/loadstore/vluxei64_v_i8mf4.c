/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8mf4_t
test0_vluxei64_v_i8mf4(const int8_t *base,vuint64m2_t bindex,size_t vl)
{
    return vluxei64_v_i8mf4(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

vint8mf4_t
test1_vluxei64_v_i8mf4(const int8_t *base,vuint64m2_t bindex,size_t vl)
{
    return vluxei64_v_i8mf4(base, bindex, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei64\.v} 2 } } */
