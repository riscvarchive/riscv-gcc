/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg3ei32_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,const uint64_t *base,vuint32m1_t bindex,size_t vl)
{
    vluxseg3ei32_v_u64m2(v0, v1, v2, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vluxseg3ei32_v_u64m2(vuint64m2_t *v0,vuint64m2_t *v1,vuint64m2_t *v2,const uint64_t *base,vuint32m1_t bindex,size_t vl)
{
    vluxseg3ei32_v_u64m2(v0, v1, v2, base, bindex, 11);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*11,\s*e64,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg3ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 6 } } */

