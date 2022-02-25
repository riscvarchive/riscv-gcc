/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8mf4_t
test0_vle8ff_v_u8mf4_m(vbool32_t mask,vuint8mf4_t maskedoff,const uint8_t *base,size_t *new_vl,size_t vl)
{
    return vle8ff_v_u8mf4_m(mask, maskedoff, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

vuint8mf4_t
test1_vle8ff_v_u8mf4_m(vbool32_t mask,vuint8mf4_t maskedoff,const uint8_t *base,size_t *new_vl,size_t vl)
{
    return vle8ff_v_u8mf4_m(mask, maskedoff, base, new_vl, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle8ff\.v} 2 } } */
