/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg3ei64_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsoxseg3ei64_v_f16mf4_m(mask, base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg3ei64_v_f16mf4_m(vbool64_t mask,float16_t *base,vuint64m1_t bindex,vfloat16mf4_t v0,vfloat16mf4_t v1,vfloat16mf4_t v2,size_t vl)
{
    vsoxseg3ei64_v_f16mf4_m(mask, base, bindex, v0, v1, v2, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg3ei64\.v} 2 } } */
