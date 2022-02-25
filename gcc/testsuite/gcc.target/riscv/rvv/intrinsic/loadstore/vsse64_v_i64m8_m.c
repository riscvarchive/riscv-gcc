/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsse64_v_i64m8_m(vbool8_t mask,int64_t *base,ptrdiff_t bstride,vint64m8_t value,size_t vl)
{
    vsse64_v_i64m8_m(mask, base, bstride, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu} 1 } } */

void
test1_vsse64_v_i64m8_m(vbool8_t mask,int64_t *base,ptrdiff_t bstride,vint64m8_t value,size_t vl)
{
    vsse64_v_i64m8_m(mask, base, bstride, value, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e64,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsse64\.v} 2 } } */
