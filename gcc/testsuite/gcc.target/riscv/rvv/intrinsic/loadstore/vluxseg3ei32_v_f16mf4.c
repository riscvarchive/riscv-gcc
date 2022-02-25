/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg3ei32_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,const float16_t *base,vuint32mf2_t bindex,size_t vl)
{
    vluxseg3ei32_v_f16mf4(v0, v1, v2, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vluxseg3ei32_v_f16mf4(vfloat16mf4_t *v0,vfloat16mf4_t *v1,vfloat16mf4_t *v2,const float16_t *base,vuint32mf2_t bindex,size_t vl)
{
    vluxseg3ei32_v_f16mf4(v0, v1, v2, base, bindex, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg3ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 6 } } */

