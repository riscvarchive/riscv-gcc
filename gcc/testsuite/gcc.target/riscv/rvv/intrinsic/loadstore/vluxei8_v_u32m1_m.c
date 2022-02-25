/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32m1_t
test0_vluxei8_v_u32m1_m(vbool32_t mask,vuint32m1_t maskedoff,const uint32_t *base,vuint8mf4_t bindex,size_t vl)
{
    return vluxei8_v_u32m1_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

vuint32m1_t
test1_vluxei8_v_u32m1_m(vbool32_t mask,vuint32m1_t maskedoff,const uint32_t *base,vuint8mf4_t bindex,size_t vl)
{
    return vluxei8_v_u32m1_m(mask, maskedoff, base, bindex, 28);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*28,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei8\.v} 2 } } */
