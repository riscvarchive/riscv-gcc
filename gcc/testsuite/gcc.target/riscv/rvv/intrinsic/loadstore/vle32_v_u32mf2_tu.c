/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32mf2_t
test0_vle32_v_u32mf2_tu(vuint32mf2_t dest,const uint32_t *base,size_t vl)
{
    return vle32_v_u32mf2_tu(dest, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu} 1 } } */

vuint32mf2_t
test1_vle32_v_u32mf2_tu(vuint32mf2_t dest,const uint32_t *base,size_t vl)
{
    return vle32_v_u32mf2_tu(dest, base, 5);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*5,\s*e32,\s*mf2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle32\.v} 2 } } */
