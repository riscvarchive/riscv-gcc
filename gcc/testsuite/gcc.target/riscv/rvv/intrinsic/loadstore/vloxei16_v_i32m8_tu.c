/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint32m8_t
test0_vloxei16_v_i32m8_tu(vint32m8_t dest,const int32_t *base,vuint16m4_t bindex,size_t vl)
{
    return vloxei16_v_i32m8_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu} 1 } } */

vint32m8_t
test1_vloxei16_v_i32m8_tu(vint32m8_t dest,const int32_t *base,vuint16m4_t bindex,size_t vl)
{
    return vloxei16_v_i32m8_tu(dest, base, bindex, 2);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*2,\s*e32,\s*m8,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei16\.v} 2 } } */
