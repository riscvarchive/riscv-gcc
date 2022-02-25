/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg6e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,vint32mf2_t maskedoff5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg6e32ff_v_i32mf2_m(vint32mf2_t *v0,vint32mf2_t *v1,vint32mf2_t *v2,vint32mf2_t *v3,vint32mf2_t *v4,vint32mf2_t *v5,vbool64_t mask,vint32mf2_t maskedoff0,vint32mf2_t maskedoff1,vint32mf2_t maskedoff2,vint32mf2_t maskedoff3,vint32mf2_t maskedoff4,vint32mf2_t maskedoff5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32mf2_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, new_vl, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg6e32ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse32\.v} 12 } } */

