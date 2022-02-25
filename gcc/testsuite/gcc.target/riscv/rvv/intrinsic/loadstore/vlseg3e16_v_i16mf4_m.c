/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg3e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg3e16_v_i16mf4_m(vint16mf4_t *v0,vint16mf4_t *v1,vint16mf4_t *v2,vbool64_t mask,vint16mf4_t maskedoff0,vint16mf4_t maskedoff1,vint16mf4_t maskedoff2,const int16_t *base,size_t vl)
{
    vlseg3e16_v_i16mf4_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, 13);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*13,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg3e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 6 } } */

