/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint32mf2_t
test0_vlse32_v_i32mf2_m(vbool64_t mask,vint32mf2_t maskedoff,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse32_v_i32mf2_m(mask, maskedoff, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

vint32mf2_t
test1_vlse32_v_i32mf2_m(vbool64_t mask,vint32mf2_t maskedoff,const int32_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse32_v_i32mf2_m(mask, maskedoff, base, bstride, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse32\.v} 2 } } */
