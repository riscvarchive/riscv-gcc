/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vloxei32_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vloxei32_v_i8mf8_tumu (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vloxei32_v_i16mf4_tama (vbool64_t mask, int16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vloxei32_v_i16mf4_tamu (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vloxei32_v_i16mf4_tuma (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vloxei32_v_i16mf4_tumu (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vloxei32_v_i32mf2_tama (vbool64_t mask, int32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vloxei32_v_i32mf2_tamu (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vloxei32_v_i32mf2_tuma (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vloxei32_v_i32mf2_tumu (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vloxei32_v_i64m1_tama (vbool64_t mask, int64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vloxei32_v_i64m1_tamu (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vloxei32_v_i64m1_tuma (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vloxei32_v_i64m1_tumu (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vloxei32_v_i8mf4_tama (vbool32_t mask, int8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vloxei32_v_i8mf4_tamu (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vloxei32_v_i8mf4_tuma (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vloxei32_v_i8mf4_tumu (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vloxei32_v_i16mf2_tama (vbool32_t mask, int16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vloxei32_v_i16mf2_tamu (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vloxei32_v_i16mf2_tuma (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vloxei32_v_i16mf2_tumu (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vloxei32_v_i32m1_tama (vbool32_t mask, int32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vloxei32_v_i32m1_tamu (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vloxei32_v_i32m1_tuma (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vloxei32_v_i32m1_tumu (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vloxei32_v_i64m2_tama (vbool32_t mask, int64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vloxei32_v_i64m2_tamu (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vloxei32_v_i64m2_tuma (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vloxei32_v_i64m2_tumu (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vloxei32_v_i8mf2_tama (vbool16_t mask, int8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vloxei32_v_i8mf2_tamu (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vloxei32_v_i8mf2_tuma (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vloxei32_v_i8mf2_tumu (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vloxei32_v_i16m1_tama (vbool16_t mask, int16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vloxei32_v_i16m1_tamu (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vloxei32_v_i16m1_tuma (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vloxei32_v_i16m1_tumu (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vloxei32_v_i32m2_tama (vbool16_t mask, int32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vloxei32_v_i32m2_tamu (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vloxei32_v_i32m2_tuma (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vloxei32_v_i32m2_tumu (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vloxei32_v_i64m4_tama (vbool16_t mask, int64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vloxei32_v_i64m4_tamu (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vloxei32_v_i64m4_tuma (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vloxei32_v_i64m4_tumu (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vloxei32_v_i8m1_tama (vbool8_t mask, int8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vloxei32_v_i8m1_tamu (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vloxei32_v_i8m1_tuma (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vloxei32_v_i8m1_tumu (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vloxei32_v_i16m2_tama (vbool8_t mask, int16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vloxei32_v_i16m2_tamu (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vloxei32_v_i16m2_tuma (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vloxei32_v_i16m2_tumu (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vloxei32_v_i32m4_tama (vbool8_t mask, int32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vloxei32_v_i32m4_tamu (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vloxei32_v_i32m4_tuma (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vloxei32_v_i32m4_tumu (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vloxei32_v_i64m8_tama (vbool8_t mask, int64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vloxei32_v_i64m8_tamu (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vloxei32_v_i64m8_tuma (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vloxei32_v_i64m8_tumu (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vloxei32_v_i8m2_tama (vbool4_t mask, int8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vloxei32_v_i8m2_tamu (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vloxei32_v_i8m2_tuma (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m2_t
test_vloxei32_v_i8m2_tumu (vbool4_t mask, vint8m2_t dest, int8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vloxei32_v_i16m4_tama (vbool4_t mask, int16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vloxei32_v_i16m4_tamu (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vloxei32_v_i16m4_tuma (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m4_t
test_vloxei32_v_i16m4_tumu (vbool4_t mask, vint16m4_t dest, int16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vloxei32_v_i32m8_tama (vbool4_t mask, int32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vloxei32_v_i32m8_tamu (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vloxei32_v_i32m8_tuma (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_i32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m8_t
test_vloxei32_v_i32m8_tumu (vbool4_t mask, vint32m8_t dest, int32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vloxei64_v_i8mf8_tama (vbool64_t mask, int8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vloxei64_v_i8mf8_tamu (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vloxei64_v_i8mf8_tuma (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf8_t
test_vloxei64_v_i8mf8_tumu (vbool64_t mask, vint8mf8_t dest, int8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vloxei64_v_i16mf4_tama (vbool64_t mask, int16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vloxei64_v_i16mf4_tamu (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vloxei64_v_i16mf4_tuma (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf4_t
test_vloxei64_v_i16mf4_tumu (vbool64_t mask, vint16mf4_t dest, int16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vloxei64_v_i32mf2_tama (vbool64_t mask, int32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vloxei64_v_i32mf2_tamu (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vloxei64_v_i32mf2_tuma (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32mf2_t
test_vloxei64_v_i32mf2_tumu (vbool64_t mask, vint32mf2_t dest, int32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vloxei64_v_i64m1_tama (vbool64_t mask, int64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vloxei64_v_i64m1_tamu (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vloxei64_v_i64m1_tuma (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m1_t
test_vloxei64_v_i64m1_tumu (vbool64_t mask, vint64m1_t dest, int64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vloxei64_v_i8mf4_tama (vbool32_t mask, int8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vloxei64_v_i8mf4_tamu (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vloxei64_v_i8mf4_tuma (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf4_t
test_vloxei64_v_i8mf4_tumu (vbool32_t mask, vint8mf4_t dest, int8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vloxei64_v_i16mf2_tama (vbool32_t mask, int16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vloxei64_v_i16mf2_tamu (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vloxei64_v_i16mf2_tuma (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16mf2_t
test_vloxei64_v_i16mf2_tumu (vbool32_t mask, vint16mf2_t dest, int16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vloxei64_v_i32m1_tama (vbool32_t mask, int32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vloxei64_v_i32m1_tamu (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vloxei64_v_i32m1_tuma (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m1_t
test_vloxei64_v_i32m1_tumu (vbool32_t mask, vint32m1_t dest, int32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vloxei64_v_i64m2_tama (vbool32_t mask, int64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vloxei64_v_i64m2_tamu (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vloxei64_v_i64m2_tuma (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m2_t
test_vloxei64_v_i64m2_tumu (vbool32_t mask, vint64m2_t dest, int64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vloxei64_v_i8mf2_tama (vbool16_t mask, int8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vloxei64_v_i8mf2_tamu (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vloxei64_v_i8mf2_tuma (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8mf2_t
test_vloxei64_v_i8mf2_tumu (vbool16_t mask, vint8mf2_t dest, int8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vloxei64_v_i16m1_tama (vbool16_t mask, int16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vloxei64_v_i16m1_tamu (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vloxei64_v_i16m1_tuma (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m1_t
test_vloxei64_v_i16m1_tumu (vbool16_t mask, vint16m1_t dest, int16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vloxei64_v_i32m2_tama (vbool16_t mask, int32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vloxei64_v_i32m2_tamu (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vloxei64_v_i32m2_tuma (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m2_t
test_vloxei64_v_i32m2_tumu (vbool16_t mask, vint32m2_t dest, int32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vloxei64_v_i64m4_tama (vbool16_t mask, int64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vloxei64_v_i64m4_tamu (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vloxei64_v_i64m4_tuma (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m4_t
test_vloxei64_v_i64m4_tumu (vbool16_t mask, vint64m4_t dest, int64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vloxei64_v_i8m1_tama (vbool8_t mask, int8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vloxei64_v_i8m1_tamu (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vloxei64_v_i8m1_tuma (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint8m1_t
test_vloxei64_v_i8m1_tumu (vbool8_t mask, vint8m1_t dest, int8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vloxei64_v_i16m2_tama (vbool8_t mask, int16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vloxei64_v_i16m2_tamu (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vloxei64_v_i16m2_tuma (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint16m2_t
test_vloxei64_v_i16m2_tumu (vbool8_t mask, vint16m2_t dest, int16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vloxei64_v_i32m4_tama (vbool8_t mask, int32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vloxei64_v_i32m4_tamu (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vloxei64_v_i32m4_tuma (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint32m4_t
test_vloxei64_v_i32m4_tumu (vbool8_t mask, vint32m4_t dest, int32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vloxei64_v_i64m8_tama (vbool8_t mask, int64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vloxei64_v_i64m8_tamu (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vloxei64_v_i64m8_tuma (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_i64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vint64m8_t
test_vloxei64_v_i64m8_tumu (vbool8_t mask, vint64m8_t dest, int64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei8_v_u8mf8_tama (vbool64_t mask, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei8_v_u8mf8_tamu (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei8_v_u8mf8_tuma (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei8_v_u8mf8_tumu (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei8_v_u16mf4_tama (vbool64_t mask, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei8_v_u16mf4_tamu (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei8_v_u16mf4_tuma (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei8_v_u16mf4_tumu (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei8_v_u32mf2_tama (vbool64_t mask, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei8_v_u32mf2_tamu (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei8_v_u32mf2_tuma (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei8_v_u32mf2_tumu (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei8_v_u64m1_tama (vbool64_t mask, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei8_v_u64m1_tamu (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei8_v_u64m1_tuma (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei8_v_u64m1_tumu (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei8_v_u8mf4_tama (vbool32_t mask, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei8_v_u8mf4_tamu (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei8_v_u8mf4_tuma (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei8_v_u8mf4_tumu (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei8_v_u16mf2_tama (vbool32_t mask, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei8_v_u16mf2_tamu (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei8_v_u16mf2_tuma (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei8_v_u16mf2_tumu (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei8_v_u32m1_tama (vbool32_t mask, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei8_v_u32m1_tamu (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei8_v_u32m1_tuma (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei8_v_u32m1_tumu (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei8_v_u64m2_tama (vbool32_t mask, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei8_v_u64m2_tamu (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei8_v_u64m2_tuma (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei8_v_u64m2_tumu (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei8_v_u8mf2_tama (vbool16_t mask, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei8_v_u8mf2_tamu (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei8_v_u8mf2_tuma (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei8_v_u8mf2_tumu (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei8_v_u16m1_tama (vbool16_t mask, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei8_v_u16m1_tamu (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei8_v_u16m1_tuma (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei8_v_u16m1_tumu (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei8_v_u32m2_tama (vbool16_t mask, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei8_v_u32m2_tamu (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei8_v_u32m2_tuma (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei8_v_u32m2_tumu (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei8_v_u64m4_tama (vbool16_t mask, uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei8_v_u64m4_tamu (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei8_v_u64m4_tuma (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei8_v_u64m4_tumu (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei8_v_u8m1_tama (vbool8_t mask, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei8_v_u8m1_tamu (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei8_v_u8m1_tuma (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei8_v_u8m1_tumu (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei8_v_u16m2_tama (vbool8_t mask, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei8_v_u16m2_tamu (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei8_v_u16m2_tuma (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei8_v_u16m2_tumu (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei8_v_u32m4_tama (vbool8_t mask, uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei8_v_u32m4_tamu (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei8_v_u32m4_tuma (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei8_v_u32m4_tumu (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei8_v_u64m8_tama (vbool8_t mask, uint64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei8_v_u64m8_tamu (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei8_v_u64m8_tuma (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei8_v_u64m8_tumu (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei8_v_u8m2_tama (vbool4_t mask, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei8_v_u8m2_tamu (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei8_v_u8m2_tuma (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei8_v_u8m2_tumu (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei8_v_u16m4_tama (vbool4_t mask, uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei8_v_u16m4_tamu (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei8_v_u16m4_tuma (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei8_v_u16m4_tumu (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei8_v_u32m8_tama (vbool4_t mask, uint32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei8_v_u32m8_tamu (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei8_v_u32m8_tuma (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei8_v_u32m8_tumu (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vloxei8_v_u8m4_tama (vbool2_t mask, uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vloxei8_v_u8m4_tamu (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vloxei8_v_u8m4_tuma (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vloxei8_v_u8m4_tumu (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vloxei8_v_u16m8_tama (vbool2_t mask, uint16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vloxei8_v_u16m8_tamu (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vloxei8_v_u16m8_tuma (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vloxei8_v_u16m8_tumu (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vloxei8_v_u8m8_tama (vbool1_t mask, uint8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vloxei8_tama (mask, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vloxei8_v_u8m8_tamu (vbool1_t mask, vuint8m8_t dest, uint8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vloxei8_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vloxei8_v_u8m8_tuma (vbool1_t mask, vuint8m8_t dest, uint8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vloxei8_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei8_v_u8m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vloxei8_v_u8m8_tumu (vbool1_t mask, vuint8m8_t dest, uint8_t *base, vuint8m8_t bindex, size_t vl)
{
  return vloxei8_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei16_v_u8mf8_tama (vbool64_t mask, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei16_v_u8mf8_tamu (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei16_v_u8mf8_tuma (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei16_v_u8mf8_tumu (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei16_v_u16mf4_tama (vbool64_t mask, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei16_v_u16mf4_tamu (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei16_v_u16mf4_tuma (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei16_v_u16mf4_tumu (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei16_v_u32mf2_tama (vbool64_t mask, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei16_v_u32mf2_tamu (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei16_v_u32mf2_tuma (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei16_v_u32mf2_tumu (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei16_v_u64m1_tama (vbool64_t mask, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei16_v_u64m1_tamu (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei16_v_u64m1_tuma (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei16_v_u64m1_tumu (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei16_v_u8mf4_tama (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei16_v_u8mf4_tamu (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei16_v_u8mf4_tuma (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei16_v_u8mf4_tumu (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei16_v_u16mf2_tama (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei16_v_u16mf2_tamu (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei16_v_u16mf2_tuma (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei16_v_u16mf2_tumu (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei16_v_u32m1_tama (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei16_v_u32m1_tamu (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei16_v_u32m1_tuma (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei16_v_u32m1_tumu (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei16_v_u64m2_tama (vbool32_t mask, uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei16_v_u64m2_tamu (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei16_v_u64m2_tuma (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei16_v_u64m2_tumu (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei16_v_u8mf2_tama (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei16_v_u8mf2_tamu (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei16_v_u8mf2_tuma (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei16_v_u8mf2_tumu (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei16_v_u16m1_tama (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei16_v_u16m1_tamu (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei16_v_u16m1_tuma (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei16_v_u16m1_tumu (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei16_v_u32m2_tama (vbool16_t mask, uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei16_v_u32m2_tamu (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei16_v_u32m2_tuma (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei16_v_u32m2_tumu (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei16_v_u64m4_tama (vbool16_t mask, uint64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei16_v_u64m4_tamu (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei16_v_u64m4_tuma (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei16_v_u64m4_tumu (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei16_v_u8m1_tama (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei16_v_u8m1_tamu (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei16_v_u8m1_tuma (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei16_v_u8m1_tumu (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei16_v_u16m2_tama (vbool8_t mask, uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei16_v_u16m2_tamu (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei16_v_u16m2_tuma (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei16_v_u16m2_tumu (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei16_v_u32m4_tama (vbool8_t mask, uint32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei16_v_u32m4_tamu (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei16_v_u32m4_tuma (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei16_v_u32m4_tumu (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei16_v_u64m8_tama (vbool8_t mask, uint64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei16_v_u64m8_tamu (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei16_v_u64m8_tuma (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei16_v_u64m8_tumu (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint16m2_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei16_v_u8m2_tama (vbool4_t mask, uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei16_v_u8m2_tamu (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei16_v_u8m2_tuma (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei16_v_u8m2_tumu (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei16_v_u16m4_tama (vbool4_t mask, uint16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei16_v_u16m4_tamu (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei16_v_u16m4_tuma (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei16_v_u16m4_tumu (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei16_v_u32m8_tama (vbool4_t mask, uint32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei16_v_u32m8_tamu (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei16_v_u32m8_tuma (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei16_v_u32m8_tumu (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint16m4_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vloxei16_v_u8m4_tama (vbool2_t mask, uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vloxei16_v_u8m4_tamu (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vloxei16_v_u8m4_tuma (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vloxei16_v_u8m4_tumu (vbool2_t mask, vuint8m4_t dest, uint8_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vloxei16_v_u16m8_tama (vbool2_t mask, uint16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_tama (mask, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vloxei16_v_u16m8_tamu (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vloxei16_v_u16m8_tuma (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei16_v_u16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vloxei16_v_u16m8_tumu (vbool2_t mask, vuint16m8_t dest, uint16_t *base, vuint16m8_t bindex, size_t vl)
{
  return vloxei16_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei32_v_u8mf8_tama (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei32_v_u8mf8_tamu (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei32_v_u8mf8_tuma (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei32_v_u8mf8_tumu (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei32_v_u16mf4_tama (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei32_v_u16mf4_tamu (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei32_v_u16mf4_tuma (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei32_v_u16mf4_tumu (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei32_v_u32mf2_tama (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei32_v_u32mf2_tamu (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei32_v_u32mf2_tuma (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei32_v_u32mf2_tumu (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei32_v_u64m1_tama (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei32_v_u64m1_tamu (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei32_v_u64m1_tuma (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei32_v_u64m1_tumu (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei32_v_u8mf4_tama (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei32_v_u8mf4_tamu (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei32_v_u8mf4_tuma (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei32_v_u8mf4_tumu (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei32_v_u16mf2_tama (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei32_v_u16mf2_tamu (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei32_v_u16mf2_tuma (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei32_v_u16mf2_tumu (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei32_v_u32m1_tama (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei32_v_u32m1_tamu (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei32_v_u32m1_tuma (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei32_v_u32m1_tumu (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei32_v_u64m2_tama (vbool32_t mask, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei32_v_u64m2_tamu (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei32_v_u64m2_tuma (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei32_v_u64m2_tumu (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei32_v_u8mf2_tama (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei32_v_u8mf2_tamu (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei32_v_u8mf2_tuma (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei32_v_u8mf2_tumu (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei32_v_u16m1_tama (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei32_v_u16m1_tamu (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei32_v_u16m1_tuma (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei32_v_u16m1_tumu (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei32_v_u32m2_tama (vbool16_t mask, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei32_v_u32m2_tamu (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei32_v_u32m2_tuma (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei32_v_u32m2_tumu (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei32_v_u64m4_tama (vbool16_t mask, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei32_v_u64m4_tamu (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei32_v_u64m4_tuma (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei32_v_u64m4_tumu (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei32_v_u8m1_tama (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei32_v_u8m1_tamu (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei32_v_u8m1_tuma (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei32_v_u8m1_tumu (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei32_v_u16m2_tama (vbool8_t mask, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei32_v_u16m2_tamu (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei32_v_u16m2_tuma (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei32_v_u16m2_tumu (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei32_v_u32m4_tama (vbool8_t mask, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei32_v_u32m4_tamu (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei32_v_u32m4_tuma (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei32_v_u32m4_tumu (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei32_v_u64m8_tama (vbool8_t mask, uint64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei32_v_u64m8_tamu (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei32_v_u64m8_tuma (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei32_v_u64m8_tumu (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint32m4_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei32_v_u8m2_tama (vbool4_t mask, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei32_v_u8m2_tamu (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei32_v_u8m2_tuma (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vloxei32_v_u8m2_tumu (vbool4_t mask, vuint8m2_t dest, uint8_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei32_v_u16m4_tama (vbool4_t mask, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei32_v_u16m4_tamu (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei32_v_u16m4_tuma (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vloxei32_v_u16m4_tumu (vbool4_t mask, vuint16m4_t dest, uint16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei32_v_u32m8_tama (vbool4_t mask, uint32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tama (mask, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei32_v_u32m8_tamu (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei32_v_u32m8_tuma (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei32_v_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vloxei32_v_u32m8_tumu (vbool4_t mask, vuint32m8_t dest, uint32_t *base, vuint32m8_t bindex, size_t vl)
{
  return vloxei32_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei64_v_u8mf8_tama (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei64_v_u8mf8_tamu (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei64_v_u8mf8_tuma (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vloxei64_v_u8mf8_tumu (vbool64_t mask, vuint8mf8_t dest, uint8_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei64_v_u16mf4_tama (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei64_v_u16mf4_tamu (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei64_v_u16mf4_tuma (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vloxei64_v_u16mf4_tumu (vbool64_t mask, vuint16mf4_t dest, uint16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei64_v_u32mf2_tama (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei64_v_u32mf2_tamu (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei64_v_u32mf2_tuma (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vloxei64_v_u32mf2_tumu (vbool64_t mask, vuint32mf2_t dest, uint32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei64_v_u64m1_tama (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei64_v_u64m1_tamu (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei64_v_u64m1_tuma (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vloxei64_v_u64m1_tumu (vbool64_t mask, vuint64m1_t dest, uint64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei64_v_u8mf4_tama (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei64_v_u8mf4_tamu (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei64_v_u8mf4_tuma (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vloxei64_v_u8mf4_tumu (vbool32_t mask, vuint8mf4_t dest, uint8_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei64_v_u16mf2_tama (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei64_v_u16mf2_tamu (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei64_v_u16mf2_tuma (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vloxei64_v_u16mf2_tumu (vbool32_t mask, vuint16mf2_t dest, uint16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei64_v_u32m1_tama (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei64_v_u32m1_tamu (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei64_v_u32m1_tuma (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vloxei64_v_u32m1_tumu (vbool32_t mask, vuint32m1_t dest, uint32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei64_v_u64m2_tama (vbool32_t mask, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei64_v_u64m2_tamu (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei64_v_u64m2_tuma (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vloxei64_v_u64m2_tumu (vbool32_t mask, vuint64m2_t dest, uint64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei64_v_u8mf2_tama (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei64_v_u8mf2_tamu (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei64_v_u8mf2_tuma (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vloxei64_v_u8mf2_tumu (vbool16_t mask, vuint8mf2_t dest, uint8_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei64_v_u16m1_tama (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei64_v_u16m1_tamu (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei64_v_u16m1_tuma (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vloxei64_v_u16m1_tumu (vbool16_t mask, vuint16m1_t dest, uint16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei64_v_u32m2_tama (vbool16_t mask, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei64_v_u32m2_tamu (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei64_v_u32m2_tuma (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vloxei64_v_u32m2_tumu (vbool16_t mask, vuint32m2_t dest, uint32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei64_v_u64m4_tama (vbool16_t mask, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei64_v_u64m4_tamu (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei64_v_u64m4_tuma (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vloxei64_v_u64m4_tumu (vbool16_t mask, vuint64m4_t dest, uint64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei64_v_u8m1_tama (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei64_v_u8m1_tamu (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei64_v_u8m1_tuma (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vloxei64_v_u8m1_tumu (vbool8_t mask, vuint8m1_t dest, uint8_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei64_v_u16m2_tama (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei64_v_u16m2_tamu (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei64_v_u16m2_tuma (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vloxei64_v_u16m2_tumu (vbool8_t mask, vuint16m2_t dest, uint16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei64_v_u32m4_tama (vbool8_t mask, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei64_v_u32m4_tamu (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei64_v_u32m4_tuma (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vloxei64_v_u32m4_tumu (vbool8_t mask, vuint32m4_t dest, uint32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei64_v_u64m8_tama (vbool8_t mask, uint64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tama (mask, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei64_v_u64m8_tamu (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tamu (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei64_v_u64m8_tuma (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tuma (mask, dest, base, bindex, vl);
}


/*
** test_vloxei64_v_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vloxei64_v_u64m8_tumu (vbool8_t mask, vuint64m8_t dest, uint64_t *base, vuint64m8_t bindex, size_t vl)
{
  return vloxei64_tumu (mask, dest, base, bindex, vl);
}



