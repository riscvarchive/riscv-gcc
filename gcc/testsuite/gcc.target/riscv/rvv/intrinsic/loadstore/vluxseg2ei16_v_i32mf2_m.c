/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg2ei16_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,const int32_t *base,vuint16mf4_t bindex,size_t vl)
{
    vluxseg2ei16_v_i32mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vluxseg2ei16_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,const int32_t *base,vuint16mf4_t bindex,size_t vl)
{
    vluxseg2ei16_v_i32mf2_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg2ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 4 } } */

