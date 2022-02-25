/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint32m2_t
test0_vle32_v_i32m2_m(vbool16_t mask,vint32m2_t maskedoff,const int32_t *base,size_t vl)
{
    return vle32_v_i32m2_m(mask, maskedoff, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

vint32m2_t
test1_vle32_v_i32m2_m(vbool16_t mask,vint32m2_t maskedoff,const int32_t *base,size_t vl)
{
    return vle32_v_i32m2_m(mask, maskedoff, base, 28);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*28,\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle32\.v} 2 } } */
