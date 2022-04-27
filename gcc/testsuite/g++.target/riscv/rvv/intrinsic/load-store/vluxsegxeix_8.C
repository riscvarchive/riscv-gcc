/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vluxseg2ei64_v_u32m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vluxseg2ei64_v_u32m4x2_tamu (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei64_v_u32m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vluxseg2ei64_v_u32m4x2_tuma (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vluxseg2ei64_v_u32m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4x2_t
test_vluxseg2ei64_v_u32m4x2_tumu (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_tumu (mask, dest, base, bindex, vl);
}



