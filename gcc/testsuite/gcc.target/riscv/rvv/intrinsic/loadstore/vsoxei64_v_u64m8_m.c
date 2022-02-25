/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei64_v_u64m8_m(vbool8_t mask,uint64_t *base,vuint64m8_t bindex,vuint64m8_t value,size_t vl)
{
    vsoxei64_v_u64m8_m(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxei64_v_u64m8_m(vbool8_t mask,uint64_t *base,vuint64m8_t bindex,vuint64m8_t value,size_t vl)
{
    vsoxei64_v_u64m8_m(mask, base, bindex, value, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e64,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei64\.v} 2 } } */
