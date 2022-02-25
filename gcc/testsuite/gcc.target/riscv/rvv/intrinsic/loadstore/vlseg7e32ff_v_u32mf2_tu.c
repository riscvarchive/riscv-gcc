/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg7e32ff_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_u32mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu} 1 } } */

void
test1_vlseg7e32ff_v_u32mf2_tu(vuint32mf2_t *v0,vuint32mf2_t *v1,vuint32mf2_t *v2,vuint32mf2_t *v3,vuint32mf2_t *v4,vuint32mf2_t *v5,vuint32mf2_t *v6,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg7e32ff_v_u32mf2_tu(v0, v1, v2, v3, v4, v5, v6, base, new_vl, 15);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*15,\s*e32,\s*mf2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg7e32ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 14 } } */

