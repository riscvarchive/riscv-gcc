/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8m4_t
test0_vle8_v_u8m4_m(vbool2_t mask,vuint8m4_t maskedoff,const uint8_t *base,size_t vl)
{
    return vle8_v_u8m4_m(mask, maskedoff, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu} 1 } } */

vuint8m4_t
test1_vle8_v_u8m4_m(vbool2_t mask,vuint8m4_t maskedoff,const uint8_t *base,size_t vl)
{
    return vle8_v_u8m4_m(mask, maskedoff, base, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e8,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle8\.v} 2 } } */
