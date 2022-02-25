/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg6e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlseg6e32ff_v_i32m1(vint32m1_t *v0,vint32m1_t *v1,vint32m1_t *v2,vint32m1_t *v3,vint32m1_t *v4,vint32m1_t *v5,const int32_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e32ff_v_i32m1(v0, v1, v2, v3, v4, v5, base, new_vl, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg6e32ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 12 } } */

