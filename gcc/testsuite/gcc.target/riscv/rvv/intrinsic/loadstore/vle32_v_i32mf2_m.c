/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint32mf2_t
test0_vle32_v_i32mf2_m(vbool64_t mask,vint32mf2_t maskedoff,const int32_t *base,size_t vl)
{
    return vle32_v_i32mf2_m(mask, maskedoff, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

vint32mf2_t
test1_vle32_v_i32mf2_m(vbool64_t mask,vint32mf2_t maskedoff,const int32_t *base,size_t vl)
{
    return vle32_v_i32mf2_m(mask, maskedoff, base, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle32\.v} 2 } } */
