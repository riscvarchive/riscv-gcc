/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8mf8_t
test0_vle8_v_u8mf8_m(vbool64_t mask,vuint8mf8_t maskedoff,const uint8_t *base,size_t vl)
{
    return vle8_v_u8mf8_m(mask, maskedoff, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

vuint8mf8_t
test1_vle8_v_u8mf8_m(vbool64_t mask,vuint8mf8_t maskedoff,const uint8_t *base,size_t vl)
{
    return vle8_v_u8mf8_m(mask, maskedoff, base, 28);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*28,\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle8\.v} 2 } } */
