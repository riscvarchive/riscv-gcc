/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg4ei16_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,const float32_t *base,vuint16mf4_t bindex,size_t vl)
{
    vloxseg4ei16_v_f32mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg4ei16_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vfloat32mf2_t *v2,vfloat32mf2_t *v3,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,vfloat32mf2_t maskedoff2,vfloat32mf2_t maskedoff3,const float32_t *base,vuint16mf4_t bindex,size_t vl)
{
    vloxseg4ei16_v_f32mf2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg4ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 8 } } */

