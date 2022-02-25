/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg2e16ff_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m1_tu(v0, v1, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

void
test1_vlseg2e16ff_v_u16m1_tu(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e16ff_v_u16m1_tu(v0, v1, base, new_vl, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg2e16ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 4 } } */

