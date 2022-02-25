/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg3e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg3e8ff_v_i8mf2_m(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vbool16_t mask,vint8mf2_t maskedoff0,vint8mf2_t maskedoff1,vint8mf2_t maskedoff2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8mf2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, new_vl, 24);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*24,\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg3e8ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 6 } } */

