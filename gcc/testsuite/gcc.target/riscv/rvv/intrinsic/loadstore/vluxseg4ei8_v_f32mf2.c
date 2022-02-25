/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg4ei8_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,const float32_t *base,vuint8mf8_t bindex,size_t vl)
{
    vluxseg4ei8_v_f32mf2(v0, v1, v2, v3, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vluxseg4ei8_v_f32mf2(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,const float32_t *base,vuint8mf8_t bindex,size_t vl)
{
    vluxseg4ei8_v_f32mf2(v0, v1, v2, v3, base, bindex, 21);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*21,\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg4ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 8 } } */

