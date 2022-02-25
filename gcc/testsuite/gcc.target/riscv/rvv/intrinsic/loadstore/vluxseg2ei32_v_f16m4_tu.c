/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg2ei32_v_f16m4_tu(vfloat16m4_t *v0,vfloat16m4_t *v1,const float16_t *base,vuint32m8_t bindex,size_t vl)
{
    vluxseg2ei32_v_f16m4_tu(v0, v1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu} 1 } } */

void
test1_vluxseg2ei32_v_f16m4_tu(vfloat16m4_t *v0,vfloat16m4_t *v1,const float16_t *base,vuint32m8_t bindex,size_t vl)
{
    vluxseg2ei32_v_f16m4_tu(v0, v1, base, bindex, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg2ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs4r\.v} 4 } } */

