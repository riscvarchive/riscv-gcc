/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg6ei32_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsoxseg6ei32_v_f32mf2_m(mask, base, bindex, v0, v1, v2, v3, v4, v5, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg6ei32_v_f32mf2_m(vbool64_t mask,float32_t *base,vuint32mf2_t bindex,vfloat32mf2_t v0,vfloat32mf2_t v1,vfloat32mf2_t v2,vfloat32mf2_t v3,vfloat32mf2_t v4,vfloat32mf2_t v5,size_t vl)
{
    vsoxseg6ei32_v_f32mf2_m(mask, base, bindex, v0, v1, v2, v3, v4, v5, 17);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*17,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg6ei32\.v} 2 } } */
