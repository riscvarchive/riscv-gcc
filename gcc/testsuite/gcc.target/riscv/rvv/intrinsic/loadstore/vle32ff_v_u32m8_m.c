/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32m8_t
test0_vle32ff_v_u32m8_m(vbool4_t mask,vuint32m8_t maskedoff,const uint32_t *base,size_t *new_vl,size_t vl)
{
    return vle32ff_v_u32m8_m(mask, maskedoff, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu} 1 } } */

vuint32m8_t
test1_vle32ff_v_u32m8_m(vbool4_t mask,vuint32m8_t maskedoff,const uint32_t *base,size_t *new_vl,size_t vl)
{
    return vle32ff_v_u32m8_m(mask, maskedoff, base, new_vl, 4);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*4,\s*e32,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle32ff\.v} 2 } } */
