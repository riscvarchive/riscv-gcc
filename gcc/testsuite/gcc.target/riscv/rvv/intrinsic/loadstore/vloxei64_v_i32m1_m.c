/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint32m1_t
test0_vloxei64_v_i32m1_m(vbool32_t mask,vint32m1_t maskedoff,const int32_t *base,vuint64m2_t bindex,size_t vl)
{
    return vloxei64_v_i32m1_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

vint32m1_t
test1_vloxei64_v_i32m1_m(vbool32_t mask,vint32m1_t maskedoff,const int32_t *base,vuint64m2_t bindex,size_t vl)
{
    return vloxei64_v_i32m1_m(mask, maskedoff, base, bindex, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei64\.v} 2 } } */
