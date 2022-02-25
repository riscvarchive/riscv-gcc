/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32m8_t
test0_vle32_v_u32m8_tu(vuint32m8_t dest,const uint32_t *base,size_t vl)
{
    return vle32_v_u32m8_tu(dest, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu} 1 } } */

vuint32m8_t
test1_vle32_v_u32m8_tu(vuint32m8_t dest,const uint32_t *base,size_t vl)
{
    return vle32_v_u32m8_tu(dest, base, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e32,\s*m8,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle32\.v} 2 } } */
