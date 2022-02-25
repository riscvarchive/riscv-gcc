/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint64m8_t
test0_vloxei64_v_i64m8(const int64_t *base,vuint64m8_t bindex,size_t vl)
{
    return vloxei64_v_i64m8(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu} 1 } } */

vint64m8_t
test1_vloxei64_v_i64m8(const int64_t *base,vuint64m8_t bindex,size_t vl)
{
    return vloxei64_v_i64m8(base, bindex, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e64,\s*m8,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei64\.v} 2 } } */
