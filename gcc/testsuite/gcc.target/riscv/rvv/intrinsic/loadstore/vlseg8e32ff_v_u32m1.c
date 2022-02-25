/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg8e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_u32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlseg8e32ff_v_u32m1(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vuint32m1_t *v7,const uint32_t *base,size_t *new_vl,size_t vl)
{
    vlseg8e32ff_v_u32m1(v0, v1, v2, v3, v4, v5, v6, v7, base, new_vl, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg8e32ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 16 } } */

