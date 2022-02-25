/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32mf2_t
test0_vlse32_v_u32mf2_m(vbool64_t mask,vuint32mf2_t maskedoff,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse32_v_u32mf2_m(mask, maskedoff, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

vuint32mf2_t
test1_vlse32_v_u32mf2_m(vbool64_t mask,vuint32mf2_t maskedoff,const uint32_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse32_v_u32mf2_m(mask, maskedoff, base, bstride, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse32\.v} 2 } } */
