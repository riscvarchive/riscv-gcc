
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vint8mf8_t
test_vloxei8_v_i8mf8_ta_vl32 (int8_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i8mf8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i8mf8_ta_vl32 )?} 1 } } */
vint8mf8_t
test_vloxei8_v_i8mf8_tu_vl32 (vint8mf8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i8mf8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i8mf8_tu_vl32 )?} 1 } } */
vint16mf4_t
test_vloxei8_v_i16mf4_ta_vl32 (int16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i16mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i16mf4_ta_vl32 )?} 1 } } */
vint16mf4_t
test_vloxei8_v_i16mf4_tu_vl32 (vint16mf4_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i16mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i16mf4_tu_vl32 )?} 1 } } */
vint32mf2_t
test_vloxei8_v_i32mf2_ta_vl32 (int32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i32mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i32mf2_ta_vl32 )?} 1 } } */
vint32mf2_t
test_vloxei8_v_i32mf2_tu_vl32 (vint32mf2_t dest, int32_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i32mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i32mf2_tu_vl32 )?} 1 } } */
vint64m1_t
test_vloxei8_v_i64m1_ta_vl32 (int64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i64m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i64m1_ta_vl32 )?} 1 } } */
vint64m1_t
test_vloxei8_v_i64m1_tu_vl32 (vint64m1_t dest, int64_t *base, vuint8mf8_t bindex)
{
  return vloxei8_v_i64m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i64m1_tu_vl32 )?} 1 } } */
vint8mf4_t
test_vloxei8_v_i8mf4_ta_vl32 (int8_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i8mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i8mf4_ta_vl32 )?} 1 } } */
vint8mf4_t
test_vloxei8_v_i8mf4_tu_vl32 (vint8mf4_t dest, int8_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i8mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i8mf4_tu_vl32 )?} 1 } } */
vint16mf2_t
test_vloxei8_v_i16mf2_ta_vl32 (int16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i16mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i16mf2_ta_vl32 )?} 1 } } */
vint16mf2_t
test_vloxei8_v_i16mf2_tu_vl32 (vint16mf2_t dest, int16_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i16mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i16mf2_tu_vl32 )?} 1 } } */
vint32m1_t
test_vloxei8_v_i32m1_ta_vl32 (int32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i32m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i32m1_ta_vl32 )?} 1 } } */
vint32m1_t
test_vloxei8_v_i32m1_tu_vl32 (vint32m1_t dest, int32_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i32m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i32m1_tu_vl32 )?} 1 } } */
vint64m2_t
test_vloxei8_v_i64m2_ta_vl32 (int64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i64m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i64m2_ta_vl32 )?} 1 } } */
vint64m2_t
test_vloxei8_v_i64m2_tu_vl32 (vint64m2_t dest, int64_t *base, vuint8mf4_t bindex)
{
  return vloxei8_v_i64m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i64m2_tu_vl32 )?} 1 } } */
vint8mf2_t
test_vloxei8_v_i8mf2_ta_vl32 (int8_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i8mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i8mf2_ta_vl32 )?} 1 } } */
vint8mf2_t
test_vloxei8_v_i8mf2_tu_vl32 (vint8mf2_t dest, int8_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i8mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i8mf2_tu_vl32 )?} 1 } } */
vint16m1_t
test_vloxei8_v_i16m1_ta_vl32 (int16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i16m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i16m1_ta_vl32 )?} 1 } } */
vint16m1_t
test_vloxei8_v_i16m1_tu_vl32 (vint16m1_t dest, int16_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i16m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i16m1_tu_vl32 )?} 1 } } */
vint32m2_t
test_vloxei8_v_i32m2_ta_vl32 (int32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i32m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i32m2_ta_vl32 )?} 1 } } */
vint32m2_t
test_vloxei8_v_i32m2_tu_vl32 (vint32m2_t dest, int32_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i32m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i32m2_tu_vl32 )?} 1 } } */
vint64m4_t
test_vloxei8_v_i64m4_ta_vl32 (int64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i64m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i64m4_ta_vl32 )?} 1 } } */
vint64m4_t
test_vloxei8_v_i64m4_tu_vl32 (vint64m4_t dest, int64_t *base, vuint8mf2_t bindex)
{
  return vloxei8_v_i64m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i64m4_tu_vl32 )?} 1 } } */
vint8m1_t
test_vloxei8_v_i8m1_ta_vl32 (int8_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i8m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i8m1_ta_vl32 )?} 1 } } */
vint8m1_t
test_vloxei8_v_i8m1_tu_vl32 (vint8m1_t dest, int8_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i8m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i8m1_tu_vl32 )?} 1 } } */
vint16m2_t
test_vloxei8_v_i16m2_ta_vl32 (int16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i16m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i16m2_ta_vl32 )?} 1 } } */
vint16m2_t
test_vloxei8_v_i16m2_tu_vl32 (vint16m2_t dest, int16_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i16m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i16m2_tu_vl32 )?} 1 } } */
vint32m4_t
test_vloxei8_v_i32m4_ta_vl32 (int32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i32m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i32m4_ta_vl32 )?} 1 } } */
vint32m4_t
test_vloxei8_v_i32m4_tu_vl32 (vint32m4_t dest, int32_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i32m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i32m4_tu_vl32 )?} 1 } } */
vint64m8_t
test_vloxei8_v_i64m8_ta_vl32 (int64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i64m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i64m8_ta_vl32 )?} 1 } } */
vint64m8_t
test_vloxei8_v_i64m8_tu_vl32 (vint64m8_t dest, int64_t *base, vuint8m1_t bindex)
{
  return vloxei8_v_i64m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei8_v_i64m8_tu_vl32 )?} 1 } } */
vint8m2_t
test_vloxei8_v_i8m2_ta_vl32 (int8_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i8m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_i8m2_ta_vl32 )?} 1 } } */
vint8m2_t
test_vloxei8_v_i8m2_tu_vl32 (vint8m2_t dest, int8_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i8m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_i8m2_tu_vl32 )?} 1 } } */
vint16m4_t
test_vloxei8_v_i16m4_ta_vl32 (int16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i16m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_i16m4_ta_vl32 )?} 1 } } */
vint16m4_t
test_vloxei8_v_i16m4_tu_vl32 (vint16m4_t dest, int16_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i16m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_i16m4_tu_vl32 )?} 1 } } */
vint32m8_t
test_vloxei8_v_i32m8_ta_vl32 (int32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i32m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_i32m8_ta_vl32 )?} 1 } } */
vint32m8_t
test_vloxei8_v_i32m8_tu_vl32 (vint32m8_t dest, int32_t *base, vuint8m2_t bindex)
{
  return vloxei8_v_i32m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei8_v_i32m8_tu_vl32 )?} 1 } } */
vint8m4_t
test_vloxei8_v_i8m4_ta_vl32 (int8_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i8m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei8_v_i8m4_ta_vl32 )?} 1 } } */
vint8m4_t
test_vloxei8_v_i8m4_tu_vl32 (vint8m4_t dest, int8_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i8m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei8_v_i8m4_tu_vl32 )?} 1 } } */
vint16m8_t
test_vloxei8_v_i16m8_ta_vl32 (int16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i16m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei8_v_i16m8_ta_vl32 )?} 1 } } */
vint16m8_t
test_vloxei8_v_i16m8_tu_vl32 (vint16m8_t dest, int16_t *base, vuint8m4_t bindex)
{
  return vloxei8_v_i16m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei8_v_i16m8_tu_vl32 )?} 1 } } */
vint8m8_t
test_vloxei8_v_i8m8_ta_vl32 (int8_t *base, vuint8m8_t bindex)
{
  return vloxei8_v_i8m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei8_v_i8m8_ta_vl32 )?} 1 } } */
vint8m8_t
test_vloxei8_v_i8m8_tu_vl32 (vint8m8_t dest, int8_t *base, vuint8m8_t bindex)
{
  return vloxei8_v_i8m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei8_v_i8m8_tu_vl32 )?} 1 } } */
vint8mf8_t
test_vloxei16_v_i8mf8_ta_vl32 (int8_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i8mf8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i8mf8_ta_vl32 )?} 1 } } */
vint8mf8_t
test_vloxei16_v_i8mf8_tu_vl32 (vint8mf8_t dest, int8_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i8mf8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i8mf8_tu_vl32 )?} 1 } } */
vint16mf4_t
test_vloxei16_v_i16mf4_ta_vl32 (int16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i16mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i16mf4_ta_vl32 )?} 1 } } */
vint16mf4_t
test_vloxei16_v_i16mf4_tu_vl32 (vint16mf4_t dest, int16_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i16mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i16mf4_tu_vl32 )?} 1 } } */
vint32mf2_t
test_vloxei16_v_i32mf2_ta_vl32 (int32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i32mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i32mf2_ta_vl32 )?} 1 } } */
vint32mf2_t
test_vloxei16_v_i32mf2_tu_vl32 (vint32mf2_t dest, int32_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i32mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i32mf2_tu_vl32 )?} 1 } } */
vint64m1_t
test_vloxei16_v_i64m1_ta_vl32 (int64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i64m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i64m1_ta_vl32 )?} 1 } } */
vint64m1_t
test_vloxei16_v_i64m1_tu_vl32 (vint64m1_t dest, int64_t *base, vuint16mf4_t bindex)
{
  return vloxei16_v_i64m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i64m1_tu_vl32 )?} 1 } } */
vint8mf4_t
test_vloxei16_v_i8mf4_ta_vl32 (int8_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i8mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i8mf4_ta_vl32 )?} 1 } } */
vint8mf4_t
test_vloxei16_v_i8mf4_tu_vl32 (vint8mf4_t dest, int8_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i8mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i8mf4_tu_vl32 )?} 1 } } */
vint16mf2_t
test_vloxei16_v_i16mf2_ta_vl32 (int16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i16mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i16mf2_ta_vl32 )?} 1 } } */
vint16mf2_t
test_vloxei16_v_i16mf2_tu_vl32 (vint16mf2_t dest, int16_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i16mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i16mf2_tu_vl32 )?} 1 } } */
vint32m1_t
test_vloxei16_v_i32m1_ta_vl32 (int32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i32m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i32m1_ta_vl32 )?} 1 } } */
vint32m1_t
test_vloxei16_v_i32m1_tu_vl32 (vint32m1_t dest, int32_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i32m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i32m1_tu_vl32 )?} 1 } } */
vint64m2_t
test_vloxei16_v_i64m2_ta_vl32 (int64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i64m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i64m2_ta_vl32 )?} 1 } } */
vint64m2_t
test_vloxei16_v_i64m2_tu_vl32 (vint64m2_t dest, int64_t *base, vuint16mf2_t bindex)
{
  return vloxei16_v_i64m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i64m2_tu_vl32 )?} 1 } } */
vint8mf2_t
test_vloxei16_v_i8mf2_ta_vl32 (int8_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i8mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i8mf2_ta_vl32 )?} 1 } } */
vint8mf2_t
test_vloxei16_v_i8mf2_tu_vl32 (vint8mf2_t dest, int8_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i8mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i8mf2_tu_vl32 )?} 1 } } */
vint16m1_t
test_vloxei16_v_i16m1_ta_vl32 (int16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i16m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i16m1_ta_vl32 )?} 1 } } */
vint16m1_t
test_vloxei16_v_i16m1_tu_vl32 (vint16m1_t dest, int16_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i16m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i16m1_tu_vl32 )?} 1 } } */
vint32m2_t
test_vloxei16_v_i32m2_ta_vl32 (int32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i32m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i32m2_ta_vl32 )?} 1 } } */
vint32m2_t
test_vloxei16_v_i32m2_tu_vl32 (vint32m2_t dest, int32_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i32m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i32m2_tu_vl32 )?} 1 } } */
vint64m4_t
test_vloxei16_v_i64m4_ta_vl32 (int64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i64m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i64m4_ta_vl32 )?} 1 } } */
vint64m4_t
test_vloxei16_v_i64m4_tu_vl32 (vint64m4_t dest, int64_t *base, vuint16m1_t bindex)
{
  return vloxei16_v_i64m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei16_v_i64m4_tu_vl32 )?} 1 } } */
vint8m1_t
test_vloxei16_v_i8m1_ta_vl32 (int8_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i8m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_i8m1_ta_vl32 )?} 1 } } */
vint8m1_t
test_vloxei16_v_i8m1_tu_vl32 (vint8m1_t dest, int8_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i8m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_i8m1_tu_vl32 )?} 1 } } */
vint16m2_t
test_vloxei16_v_i16m2_ta_vl32 (int16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i16m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_i16m2_ta_vl32 )?} 1 } } */
vint16m2_t
test_vloxei16_v_i16m2_tu_vl32 (vint16m2_t dest, int16_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i16m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_i16m2_tu_vl32 )?} 1 } } */
vint32m4_t
test_vloxei16_v_i32m4_ta_vl32 (int32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i32m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_i32m4_ta_vl32 )?} 1 } } */
vint32m4_t
test_vloxei16_v_i32m4_tu_vl32 (vint32m4_t dest, int32_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i32m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_i32m4_tu_vl32 )?} 1 } } */
vint64m8_t
test_vloxei16_v_i64m8_ta_vl32 (int64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i64m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_i64m8_ta_vl32 )?} 1 } } */
vint64m8_t
test_vloxei16_v_i64m8_tu_vl32 (vint64m8_t dest, int64_t *base, vuint16m2_t bindex)
{
  return vloxei16_v_i64m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei16_v_i64m8_tu_vl32 )?} 1 } } */
vint8m2_t
test_vloxei16_v_i8m2_ta_vl32 (int8_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i8m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_i8m2_ta_vl32 )?} 1 } } */
vint8m2_t
test_vloxei16_v_i8m2_tu_vl32 (vint8m2_t dest, int8_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i8m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_i8m2_tu_vl32 )?} 1 } } */
vint16m4_t
test_vloxei16_v_i16m4_ta_vl32 (int16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i16m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_i16m4_ta_vl32 )?} 1 } } */
vint16m4_t
test_vloxei16_v_i16m4_tu_vl32 (vint16m4_t dest, int16_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i16m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_i16m4_tu_vl32 )?} 1 } } */
vint32m8_t
test_vloxei16_v_i32m8_ta_vl32 (int32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i32m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_i32m8_ta_vl32 )?} 1 } } */
vint32m8_t
test_vloxei16_v_i32m8_tu_vl32 (vint32m8_t dest, int32_t *base, vuint16m4_t bindex)
{
  return vloxei16_v_i32m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei16_v_i32m8_tu_vl32 )?} 1 } } */
vint8m4_t
test_vloxei16_v_i8m4_ta_vl32 (int8_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i8m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei16_v_i8m4_ta_vl32 )?} 1 } } */
vint8m4_t
test_vloxei16_v_i8m4_tu_vl32 (vint8m4_t dest, int8_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i8m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei16_v_i8m4_tu_vl32 )?} 1 } } */
vint16m8_t
test_vloxei16_v_i16m8_ta_vl32 (int16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i16m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei16_v_i16m8_ta_vl32 )?} 1 } } */
vint16m8_t
test_vloxei16_v_i16m8_tu_vl32 (vint16m8_t dest, int16_t *base, vuint16m8_t bindex)
{
  return vloxei16_v_i16m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei16_v_i16m8_tu_vl32 )?} 1 } } */
vint8mf8_t
test_vloxei32_v_i8mf8_ta_vl32 (int8_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i8mf8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i8mf8_ta_vl32 )?} 1 } } */
vint8mf8_t
test_vloxei32_v_i8mf8_tu_vl32 (vint8mf8_t dest, int8_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i8mf8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i8mf8_tu_vl32 )?} 1 } } */
vint16mf4_t
test_vloxei32_v_i16mf4_ta_vl32 (int16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i16mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i16mf4_ta_vl32 )?} 1 } } */
vint16mf4_t
test_vloxei32_v_i16mf4_tu_vl32 (vint16mf4_t dest, int16_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i16mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i16mf4_tu_vl32 )?} 1 } } */
vint32mf2_t
test_vloxei32_v_i32mf2_ta_vl32 (int32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i32mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i32mf2_ta_vl32 )?} 1 } } */
vint32mf2_t
test_vloxei32_v_i32mf2_tu_vl32 (vint32mf2_t dest, int32_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i32mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i32mf2_tu_vl32 )?} 1 } } */
vint64m1_t
test_vloxei32_v_i64m1_ta_vl32 (int64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i64m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i64m1_ta_vl32 )?} 1 } } */
vint64m1_t
test_vloxei32_v_i64m1_tu_vl32 (vint64m1_t dest, int64_t *base, vuint32mf2_t bindex)
{
  return vloxei32_v_i64m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i64m1_tu_vl32 )?} 1 } } */
vint8mf4_t
test_vloxei32_v_i8mf4_ta_vl32 (int8_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i8mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i8mf4_ta_vl32 )?} 1 } } */
vint8mf4_t
test_vloxei32_v_i8mf4_tu_vl32 (vint8mf4_t dest, int8_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i8mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i8mf4_tu_vl32 )?} 1 } } */
vint16mf2_t
test_vloxei32_v_i16mf2_ta_vl32 (int16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i16mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i16mf2_ta_vl32 )?} 1 } } */
vint16mf2_t
test_vloxei32_v_i16mf2_tu_vl32 (vint16mf2_t dest, int16_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i16mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i16mf2_tu_vl32 )?} 1 } } */
vint32m1_t
test_vloxei32_v_i32m1_ta_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i32m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i32m1_ta_vl32 )?} 1 } } */
vint32m1_t
test_vloxei32_v_i32m1_tu_vl32 (vint32m1_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i32m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i32m1_tu_vl32 )?} 1 } } */
vint64m2_t
test_vloxei32_v_i64m2_ta_vl32 (int64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i64m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i64m2_ta_vl32 )?} 1 } } */
vint64m2_t
test_vloxei32_v_i64m2_tu_vl32 (vint64m2_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vloxei32_v_i64m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei32_v_i64m2_tu_vl32 )?} 1 } } */
vint8mf2_t
test_vloxei32_v_i8mf2_ta_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i8mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_i8mf2_ta_vl32 )?} 1 } } */
vint8mf2_t
test_vloxei32_v_i8mf2_tu_vl32 (vint8mf2_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i8mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_i8mf2_tu_vl32 )?} 1 } } */
vint16m1_t
test_vloxei32_v_i16m1_ta_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i16m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_i16m1_ta_vl32 )?} 1 } } */
vint16m1_t
test_vloxei32_v_i16m1_tu_vl32 (vint16m1_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i16m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_i16m1_tu_vl32 )?} 1 } } */
vint32m2_t
test_vloxei32_v_i32m2_ta_vl32 (int32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i32m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_i32m2_ta_vl32 )?} 1 } } */
vint32m2_t
test_vloxei32_v_i32m2_tu_vl32 (vint32m2_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i32m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_i32m2_tu_vl32 )?} 1 } } */
vint64m4_t
test_vloxei32_v_i64m4_ta_vl32 (int64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i64m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_i64m4_ta_vl32 )?} 1 } } */
vint64m4_t
test_vloxei32_v_i64m4_tu_vl32 (vint64m4_t dest, int64_t *base, vuint32m2_t bindex)
{
  return vloxei32_v_i64m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei32_v_i64m4_tu_vl32 )?} 1 } } */
vint8m1_t
test_vloxei32_v_i8m1_ta_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i8m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_i8m1_ta_vl32 )?} 1 } } */
vint8m1_t
test_vloxei32_v_i8m1_tu_vl32 (vint8m1_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i8m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_i8m1_tu_vl32 )?} 1 } } */
vint16m2_t
test_vloxei32_v_i16m2_ta_vl32 (int16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i16m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_i16m2_ta_vl32 )?} 1 } } */
vint16m2_t
test_vloxei32_v_i16m2_tu_vl32 (vint16m2_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i16m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_i16m2_tu_vl32 )?} 1 } } */
vint32m4_t
test_vloxei32_v_i32m4_ta_vl32 (int32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i32m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_i32m4_ta_vl32 )?} 1 } } */
vint32m4_t
test_vloxei32_v_i32m4_tu_vl32 (vint32m4_t dest, int32_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i32m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_i32m4_tu_vl32 )?} 1 } } */
vint64m8_t
test_vloxei32_v_i64m8_ta_vl32 (int64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i64m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_i64m8_ta_vl32 )?} 1 } } */
vint64m8_t
test_vloxei32_v_i64m8_tu_vl32 (vint64m8_t dest, int64_t *base, vuint32m4_t bindex)
{
  return vloxei32_v_i64m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei32_v_i64m8_tu_vl32 )?} 1 } } */
vint8m2_t
test_vloxei32_v_i8m2_ta_vl32 (int8_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i8m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_i8m2_ta_vl32 )?} 1 } } */
vint8m2_t
test_vloxei32_v_i8m2_tu_vl32 (vint8m2_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i8m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_i8m2_tu_vl32 )?} 1 } } */
vint16m4_t
test_vloxei32_v_i16m4_ta_vl32 (int16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i16m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_i16m4_ta_vl32 )?} 1 } } */
vint16m4_t
test_vloxei32_v_i16m4_tu_vl32 (vint16m4_t dest, int16_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i16m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_i16m4_tu_vl32 )?} 1 } } */
vint32m8_t
test_vloxei32_v_i32m8_ta_vl32 (int32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i32m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_i32m8_ta_vl32 )?} 1 } } */
vint32m8_t
test_vloxei32_v_i32m8_tu_vl32 (vint32m8_t dest, int32_t *base, vuint32m8_t bindex)
{
  return vloxei32_v_i32m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei32_v_i32m8_tu_vl32 )?} 1 } } */
vint8mf8_t
test_vloxei64_v_i8mf8_ta_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i8mf8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_i8mf8_ta_vl32 )?} 1 } } */
vint8mf8_t
test_vloxei64_v_i8mf8_tu_vl32 (vint8mf8_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i8mf8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_i8mf8_tu_vl32 )?} 1 } } */
vint16mf4_t
test_vloxei64_v_i16mf4_ta_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i16mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_i16mf4_ta_vl32 )?} 1 } } */
vint16mf4_t
test_vloxei64_v_i16mf4_tu_vl32 (vint16mf4_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i16mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_i16mf4_tu_vl32 )?} 1 } } */
vint32mf2_t
test_vloxei64_v_i32mf2_ta_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i32mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_i32mf2_ta_vl32 )?} 1 } } */
vint32mf2_t
test_vloxei64_v_i32mf2_tu_vl32 (vint32mf2_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i32mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_i32mf2_tu_vl32 )?} 1 } } */
vint64m1_t
test_vloxei64_v_i64m1_ta_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i64m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_i64m1_ta_vl32 )?} 1 } } */
vint64m1_t
test_vloxei64_v_i64m1_tu_vl32 (vint64m1_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vloxei64_v_i64m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vloxei64_v_i64m1_tu_vl32 )?} 1 } } */
vint8mf4_t
test_vloxei64_v_i8mf4_ta_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i8mf4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_i8mf4_ta_vl32 )?} 1 } } */
vint8mf4_t
test_vloxei64_v_i8mf4_tu_vl32 (vint8mf4_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i8mf4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_i8mf4_tu_vl32 )?} 1 } } */
vint16mf2_t
test_vloxei64_v_i16mf2_ta_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i16mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_i16mf2_ta_vl32 )?} 1 } } */
vint16mf2_t
test_vloxei64_v_i16mf2_tu_vl32 (vint16mf2_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i16mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_i16mf2_tu_vl32 )?} 1 } } */
vint32m1_t
test_vloxei64_v_i32m1_ta_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i32m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_i32m1_ta_vl32 )?} 1 } } */
vint32m1_t
test_vloxei64_v_i32m1_tu_vl32 (vint32m1_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i32m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_i32m1_tu_vl32 )?} 1 } } */
vint64m2_t
test_vloxei64_v_i64m2_ta_vl32 (int64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i64m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_i64m2_ta_vl32 )?} 1 } } */
vint64m2_t
test_vloxei64_v_i64m2_tu_vl32 (vint64m2_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vloxei64_v_i64m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vloxei64_v_i64m2_tu_vl32 )?} 1 } } */
vint8mf2_t
test_vloxei64_v_i8mf2_ta_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i8mf2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_i8mf2_ta_vl32 )?} 1 } } */
vint8mf2_t
test_vloxei64_v_i8mf2_tu_vl32 (vint8mf2_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i8mf2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_i8mf2_tu_vl32 )?} 1 } } */
vint16m1_t
test_vloxei64_v_i16m1_ta_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i16m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_i16m1_ta_vl32 )?} 1 } } */
vint16m1_t
test_vloxei64_v_i16m1_tu_vl32 (vint16m1_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i16m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_i16m1_tu_vl32 )?} 1 } } */
vint32m2_t
test_vloxei64_v_i32m2_ta_vl32 (int32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i32m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_i32m2_ta_vl32 )?} 1 } } */
vint32m2_t
test_vloxei64_v_i32m2_tu_vl32 (vint32m2_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i32m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_i32m2_tu_vl32 )?} 1 } } */
vint64m4_t
test_vloxei64_v_i64m4_ta_vl32 (int64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i64m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_i64m4_ta_vl32 )?} 1 } } */
vint64m4_t
test_vloxei64_v_i64m4_tu_vl32 (vint64m4_t dest, int64_t *base, vuint64m4_t bindex)
{
  return vloxei64_v_i64m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vloxei64_v_i64m4_tu_vl32 )?} 1 } } */
vint8m1_t
test_vloxei64_v_i8m1_ta_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i8m1_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_i8m1_ta_vl32 )?} 1 } } */
vint8m1_t
test_vloxei64_v_i8m1_tu_vl32 (vint8m1_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i8m1_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_i8m1_tu_vl32 )?} 1 } } */
vint16m2_t
test_vloxei64_v_i16m2_ta_vl32 (int16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i16m2_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_i16m2_ta_vl32 )?} 1 } } */
vint16m2_t
test_vloxei64_v_i16m2_tu_vl32 (vint16m2_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i16m2_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_i16m2_tu_vl32 )?} 1 } } */
vint32m4_t
test_vloxei64_v_i32m4_ta_vl32 (int32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i32m4_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_i32m4_ta_vl32 )?} 1 } } */
vint32m4_t
test_vloxei64_v_i32m4_tu_vl32 (vint32m4_t dest, int32_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i32m4_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_i32m4_tu_vl32 )?} 1 } } */
vint64m8_t
test_vloxei64_v_i64m8_ta_vl32 (int64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i64m8_ta (base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_i64m8_ta_vl32 )?} 1 } } */
vint64m8_t
test_vloxei64_v_i64m8_tu_vl32 (vint64m8_t dest, int64_t *base, vuint64m8_t bindex)
{
  return vloxei64_v_i64m8_tu (dest, base, bindex, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vloxei..?\.v).)*\s+vloxei64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)\n(?: test_vloxei64_v_i64m8_tu_vl32 )?} 1 } } */
