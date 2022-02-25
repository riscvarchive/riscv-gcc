/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint16mf2_t
test0_vle16_v_u16mf2_m(vbool32_t mask,vuint16mf2_t maskedoff,const uint16_t *base,size_t vl)
{
    return vle16_v_u16mf2_m(mask, maskedoff, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

vuint16mf2_t
test1_vle16_v_u16mf2_m(vbool32_t mask,vuint16mf2_t maskedoff,const uint16_t *base,size_t vl)
{
    return vle16_v_u16mf2_m(mask, maskedoff, base, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle16\.v} 2 } } */
