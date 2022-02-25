/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg2e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32mf2_tu(v0, v1, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu} 1 } } */

void
test1_vlseg2e32_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,const uint32_t *base,size_t vl)
{
    vlseg2e32_v_u32mf2_tu(v0, v1, base, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg2e32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 4 } } */

