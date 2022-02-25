/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg6e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,vint8m1_t maskedoff4,vint8m1_t maskedoff5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg6e8ff_v_i8m1_m(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vbool8_t mask,vint8m1_t maskedoff0,vint8m1_t maskedoff1,vint8m1_t maskedoff2,vint8m1_t maskedoff3,vint8m1_t maskedoff4,vint8m1_t maskedoff5,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e8ff_v_i8m1_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, new_vl, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg6e8ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 12 } } */

