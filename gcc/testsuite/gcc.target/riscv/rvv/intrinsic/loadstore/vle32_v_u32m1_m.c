/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32m1_t
test0_vle32_v_u32m1_m(vbool32_t mask,vuint32m1_t maskedoff,const uint32_t *base,size_t vl)
{
    return vle32_v_u32m1_m(mask, maskedoff, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

vuint32m1_t
test1_vle32_v_u32m1_m(vbool32_t mask,vuint32m1_t maskedoff,const uint32_t *base,size_t vl)
{
    return vle32_v_u32m1_m(mask, maskedoff, base, 15);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*15,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle32\.v} 2 } } */
