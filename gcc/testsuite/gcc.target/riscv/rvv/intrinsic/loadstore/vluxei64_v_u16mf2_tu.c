/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint16mf2_t
test0_vluxei64_v_u16mf2_tu(vuint16mf2_t dest,const uint16_t *base,vuint64m2_t bindex,size_t vl)
{
    return vluxei64_v_u16mf2_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu} 1 } } */

vuint16mf2_t
test1_vluxei64_v_u16mf2_tu(vuint16mf2_t dest,const uint16_t *base,vuint64m2_t bindex,size_t vl)
{
    return vluxei64_v_u16mf2_tu(dest, base, bindex, 2);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*2,\s*e16,\s*mf2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei64\.v} 2 } } */
