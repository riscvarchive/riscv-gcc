/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei64_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,const float32_t *base,vuint64m1_t bindex,size_t vl)
{
    vloxseg2ei64_v_f32mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg2ei64_v_f32mf2_m(vfloat32mf2_t *v0,vfloat32mf2_t *v1,vbool64_t mask,vfloat32mf2_t maskedoff0,vfloat32mf2_t maskedoff1,const float32_t *base,vuint64m1_t bindex,size_t vl)
{
    vloxseg2ei64_v_f32mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 4 } } */

