/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsse16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t value,size_t vl)
{
    vsse16_v_u16mf4_m(mask, base, bstride, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vsse16_v_u16mf4_m(vbool64_t mask,uint16_t *base,ptrdiff_t bstride,vuint16mf4_t value,size_t vl)
{
    vsse16_v_u16mf4_m(mask, base, bstride, value, 14);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*14,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsse16\.v} 2 } } */
