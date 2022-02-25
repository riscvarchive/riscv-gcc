/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32m8_t
test0_vloxei16_v_u32m8_tu(vuint32m8_t dest,const uint32_t *base,vuint16m4_t bindex,size_t vl)
{
    return vloxei16_v_u32m8_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu} 1 } } */

vuint32m8_t
test1_vloxei16_v_u32m8_tu(vuint32m8_t dest,const uint32_t *base,vuint16m4_t bindex,size_t vl)
{
    return vloxei16_v_u32m8_tu(dest, base, bindex, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e32,\s*m8,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei16\.v} 2 } } */
