
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void
test_vsoxseg2ei8_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8_t v0, vint8mf8_t v1)
{
  vsoxseg2ei8_v_i8mf8_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2)
{
  vsoxseg3ei8_v_i8mf8_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3)
{
  vsoxseg4ei8_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg5ei8_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4)
{
  vsoxseg5ei8_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei8_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg6ei8_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5)
{
  vsoxseg6ei8_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei8_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg7ei8_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6)
{
  vsoxseg7ei8_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei8_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg8ei8_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6, vint8mf8_t v7)
{
  vsoxseg8ei8_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei8_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint8mf8_t bindex, vint16mf4_t v0, vint16mf4_t v1)
{
  vsoxseg2ei8_v_i16mf4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint8mf8_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2)
{
  vsoxseg3ei8_v_i16mf4_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint8mf8_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3)
{
  vsoxseg4ei8_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg5ei8_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint8mf8_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4)
{
  vsoxseg5ei8_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei8_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg6ei8_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint8mf8_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5)
{
  vsoxseg6ei8_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei8_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg7ei8_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint8mf8_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6)
{
  vsoxseg7ei8_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei8_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg8ei8_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint8mf8_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6, vint16mf4_t v7)
{
  vsoxseg8ei8_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei8_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint8mf8_t bindex, vint32mf2_t v0, vint32mf2_t v1)
{
  vsoxseg2ei8_v_i32mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint8mf8_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2)
{
  vsoxseg3ei8_v_i32mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint8mf8_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3)
{
  vsoxseg4ei8_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei8_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint8mf8_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4)
{
  vsoxseg5ei8_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei8_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei8_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint8mf8_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5)
{
  vsoxseg6ei8_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei8_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei8_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint8mf8_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6)
{
  vsoxseg7ei8_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei8_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei8_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint8mf8_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6, vint32mf2_t v7)
{
  vsoxseg8ei8_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei8_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint8mf8_t bindex, vint64m1_t v0, vint64m1_t v1)
{
  vsoxseg2ei8_v_i64m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint8mf8_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2)
{
  vsoxseg3ei8_v_i64m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint8mf8_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3)
{
  vsoxseg4ei8_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei8_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint8mf8_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4)
{
  vsoxseg5ei8_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei8_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei8_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint8mf8_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5)
{
  vsoxseg6ei8_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei8_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei8_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint8mf8_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6)
{
  vsoxseg7ei8_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei8_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei8_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint8mf8_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7)
{
  vsoxseg8ei8_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei8_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint8mf4_t bindex, vint8mf4_t v0, vint8mf4_t v1)
{
  vsoxseg2ei8_v_i8mf4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint8mf4_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2)
{
  vsoxseg3ei8_v_i8mf4_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint8mf4_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3)
{
  vsoxseg4ei8_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg5ei8_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint8mf4_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4)
{
  vsoxseg5ei8_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei8_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg6ei8_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint8mf4_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5)
{
  vsoxseg6ei8_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei8_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg7ei8_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint8mf4_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6)
{
  vsoxseg7ei8_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei8_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg8ei8_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint8mf4_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6, vint8mf4_t v7)
{
  vsoxseg8ei8_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei8_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint8mf4_t bindex, vint16mf2_t v0, vint16mf2_t v1)
{
  vsoxseg2ei8_v_i16mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint8mf4_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2)
{
  vsoxseg3ei8_v_i16mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint8mf4_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3)
{
  vsoxseg4ei8_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei8_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint8mf4_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4)
{
  vsoxseg5ei8_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei8_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei8_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint8mf4_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5)
{
  vsoxseg6ei8_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei8_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei8_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint8mf4_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6)
{
  vsoxseg7ei8_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei8_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei8_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint8mf4_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6, vint16mf2_t v7)
{
  vsoxseg8ei8_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei8_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint8mf4_t bindex, vint32m1_t v0, vint32m1_t v1)
{
  vsoxseg2ei8_v_i32m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint8mf4_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2)
{
  vsoxseg3ei8_v_i32m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint8mf4_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3)
{
  vsoxseg4ei8_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei8_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint8mf4_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4)
{
  vsoxseg5ei8_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei8_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei8_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint8mf4_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5)
{
  vsoxseg6ei8_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei8_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei8_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint8mf4_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6)
{
  vsoxseg7ei8_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei8_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei8_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint8mf4_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7)
{
  vsoxseg8ei8_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei8_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint8mf4_t bindex, vint64m2_t v0, vint64m2_t v1)
{
  vsoxseg2ei8_v_i64m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint8mf4_t bindex, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2)
{
  vsoxseg3ei8_v_i64m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint8mf4_t bindex, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3)
{
  vsoxseg4ei8_v_i64m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint8mf2_t bindex, vint8mf2_t v0, vint8mf2_t v1)
{
  vsoxseg2ei8_v_i8mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint8mf2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2)
{
  vsoxseg3ei8_v_i8mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint8mf2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3)
{
  vsoxseg4ei8_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei8_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint8mf2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4)
{
  vsoxseg5ei8_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei8_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei8_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint8mf2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5)
{
  vsoxseg6ei8_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei8_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei8_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint8mf2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6)
{
  vsoxseg7ei8_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei8_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei8_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint8mf2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6, vint8mf2_t v7)
{
  vsoxseg8ei8_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei8_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint8mf2_t bindex, vint16m1_t v0, vint16m1_t v1)
{
  vsoxseg2ei8_v_i16m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint8mf2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2)
{
  vsoxseg3ei8_v_i16m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint8mf2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3)
{
  vsoxseg4ei8_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei8_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint8mf2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4)
{
  vsoxseg5ei8_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei8_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei8_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint8mf2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5)
{
  vsoxseg6ei8_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei8_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei8_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint8mf2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6)
{
  vsoxseg7ei8_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei8_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei8_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint8mf2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7)
{
  vsoxseg8ei8_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei8_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint8mf2_t bindex, vint32m2_t v0, vint32m2_t v1)
{
  vsoxseg2ei8_v_i32m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint8mf2_t bindex, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2)
{
  vsoxseg3ei8_v_i32m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint8mf2_t bindex, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3)
{
  vsoxseg4ei8_v_i32m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i64m4_vl32_m (vbool16_t mask, int64_t *base, vuint8mf2_t bindex, vint64m4_t v0, vint64m4_t v1)
{
  vsoxseg2ei8_v_i64m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i64m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint8m1_t bindex, vint8m1_t v0, vint8m1_t v1)
{
  vsoxseg2ei8_v_i8m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint8m1_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2)
{
  vsoxseg3ei8_v_i8m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint8m1_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3)
{
  vsoxseg4ei8_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei8_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint8m1_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4)
{
  vsoxseg5ei8_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei8_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei8_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint8m1_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5)
{
  vsoxseg6ei8_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei8_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei8_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint8m1_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6)
{
  vsoxseg7ei8_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei8_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei8_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint8m1_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7)
{
  vsoxseg8ei8_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei8_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint8m1_t bindex, vint16m2_t v0, vint16m2_t v1)
{
  vsoxseg2ei8_v_i16m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint8m1_t bindex, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2)
{
  vsoxseg3ei8_v_i16m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint8m1_t bindex, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3)
{
  vsoxseg4ei8_v_i16m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i32m4_vl32_m (vbool8_t mask, int32_t *base, vuint8m1_t bindex, vint32m4_t v0, vint32m4_t v1)
{
  vsoxseg2ei8_v_i32m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i32m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i8m2_vl32_m (vbool4_t mask, int8_t *base, vuint8m2_t bindex, vint8m2_t v0, vint8m2_t v1)
{
  vsoxseg2ei8_v_i8m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i8m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei8_v_i8m2_vl32_m (vbool4_t mask, int8_t *base, vuint8m2_t bindex, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2)
{
  vsoxseg3ei8_v_i8m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg3ei8_v_i8m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei8_v_i8m2_vl32_m (vbool4_t mask, int8_t *base, vuint8m2_t bindex, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3)
{
  vsoxseg4ei8_v_i8m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg4ei8_v_i8m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i16m4_vl32_m (vbool4_t mask, int16_t *base, vuint8m2_t bindex, vint16m4_t v0, vint16m4_t v1)
{
  vsoxseg2ei8_v_i16m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i16m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei8_v_i8m4_vl32_m (vbool2_t mask, int8_t *base, vuint8m4_t bindex, vint8m4_t v0, vint8m4_t v1)
{
  vsoxseg2ei8_v_i8m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg2ei8_v_i8m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint16mf4_t bindex, vint8mf8_t v0, vint8mf8_t v1)
{
  vsoxseg2ei16_v_i8mf8_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint16mf4_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2)
{
  vsoxseg3ei16_v_i8mf8_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint16mf4_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3)
{
  vsoxseg4ei16_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg5ei16_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint16mf4_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4)
{
  vsoxseg5ei16_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei16_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg6ei16_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint16mf4_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5)
{
  vsoxseg6ei16_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei16_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg7ei16_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint16mf4_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6)
{
  vsoxseg7ei16_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei16_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg8ei16_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint16mf4_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6, vint8mf8_t v7)
{
  vsoxseg8ei16_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei16_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint16mf4_t bindex, vint16mf4_t v0, vint16mf4_t v1)
{
  vsoxseg2ei16_v_i16mf4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint16mf4_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2)
{
  vsoxseg3ei16_v_i16mf4_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint16mf4_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3)
{
  vsoxseg4ei16_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg5ei16_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint16mf4_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4)
{
  vsoxseg5ei16_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei16_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg6ei16_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint16mf4_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5)
{
  vsoxseg6ei16_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei16_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg7ei16_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint16mf4_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6)
{
  vsoxseg7ei16_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei16_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg8ei16_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint16mf4_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6, vint16mf4_t v7)
{
  vsoxseg8ei16_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei16_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint16mf4_t bindex, vint32mf2_t v0, vint32mf2_t v1)
{
  vsoxseg2ei16_v_i32mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint16mf4_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2)
{
  vsoxseg3ei16_v_i32mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint16mf4_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3)
{
  vsoxseg4ei16_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei16_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint16mf4_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4)
{
  vsoxseg5ei16_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei16_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei16_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint16mf4_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5)
{
  vsoxseg6ei16_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei16_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei16_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint16mf4_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6)
{
  vsoxseg7ei16_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei16_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei16_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint16mf4_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6, vint32mf2_t v7)
{
  vsoxseg8ei16_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei16_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint16mf4_t bindex, vint64m1_t v0, vint64m1_t v1)
{
  vsoxseg2ei16_v_i64m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint16mf4_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2)
{
  vsoxseg3ei16_v_i64m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint16mf4_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3)
{
  vsoxseg4ei16_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei16_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint16mf4_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4)
{
  vsoxseg5ei16_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei16_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei16_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint16mf4_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5)
{
  vsoxseg6ei16_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei16_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei16_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint16mf4_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6)
{
  vsoxseg7ei16_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei16_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei16_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint16mf4_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7)
{
  vsoxseg8ei16_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei16_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4_t v0, vint8mf4_t v1)
{
  vsoxseg2ei16_v_i8mf4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2)
{
  vsoxseg3ei16_v_i8mf4_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3)
{
  vsoxseg4ei16_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg5ei16_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4)
{
  vsoxseg5ei16_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei16_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg6ei16_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5)
{
  vsoxseg6ei16_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei16_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg7ei16_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6)
{
  vsoxseg7ei16_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei16_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg8ei16_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint16mf2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6, vint8mf4_t v7)
{
  vsoxseg8ei16_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei16_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2_t v0, vint16mf2_t v1)
{
  vsoxseg2ei16_v_i16mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2)
{
  vsoxseg3ei16_v_i16mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3)
{
  vsoxseg4ei16_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei16_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4)
{
  vsoxseg5ei16_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei16_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei16_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5)
{
  vsoxseg6ei16_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei16_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei16_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6)
{
  vsoxseg7ei16_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei16_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei16_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint16mf2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6, vint16mf2_t v7)
{
  vsoxseg8ei16_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei16_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1_t v0, vint32m1_t v1)
{
  vsoxseg2ei16_v_i32m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2)
{
  vsoxseg3ei16_v_i32m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3)
{
  vsoxseg4ei16_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei16_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4)
{
  vsoxseg5ei16_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei16_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei16_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5)
{
  vsoxseg6ei16_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei16_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei16_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6)
{
  vsoxseg7ei16_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei16_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei16_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint16mf2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7)
{
  vsoxseg8ei16_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei16_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint16mf2_t bindex, vint64m2_t v0, vint64m2_t v1)
{
  vsoxseg2ei16_v_i64m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint16mf2_t bindex, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2)
{
  vsoxseg3ei16_v_i64m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint16mf2_t bindex, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3)
{
  vsoxseg4ei16_v_i64m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2_t v0, vint8mf2_t v1)
{
  vsoxseg2ei16_v_i8mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2)
{
  vsoxseg3ei16_v_i8mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3)
{
  vsoxseg4ei16_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei16_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4)
{
  vsoxseg5ei16_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei16_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei16_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5)
{
  vsoxseg6ei16_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei16_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei16_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6)
{
  vsoxseg7ei16_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei16_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei16_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint16m1_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6, vint8mf2_t v7)
{
  vsoxseg8ei16_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei16_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1_t v0, vint16m1_t v1)
{
  vsoxseg2ei16_v_i16m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2)
{
  vsoxseg3ei16_v_i16m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3)
{
  vsoxseg4ei16_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei16_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4)
{
  vsoxseg5ei16_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei16_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei16_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5)
{
  vsoxseg6ei16_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei16_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei16_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6)
{
  vsoxseg7ei16_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei16_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei16_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint16m1_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7)
{
  vsoxseg8ei16_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei16_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint16m1_t bindex, vint32m2_t v0, vint32m2_t v1)
{
  vsoxseg2ei16_v_i32m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint16m1_t bindex, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2)
{
  vsoxseg3ei16_v_i32m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint16m1_t bindex, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3)
{
  vsoxseg4ei16_v_i32m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i64m4_vl32_m (vbool16_t mask, int64_t *base, vuint16m1_t bindex, vint64m4_t v0, vint64m4_t v1)
{
  vsoxseg2ei16_v_i64m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i64m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1_t v0, vint8m1_t v1)
{
  vsoxseg2ei16_v_i8m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2)
{
  vsoxseg3ei16_v_i8m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3)
{
  vsoxseg4ei16_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei16_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4)
{
  vsoxseg5ei16_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg5ei16_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei16_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5)
{
  vsoxseg6ei16_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg6ei16_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei16_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6)
{
  vsoxseg7ei16_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg7ei16_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei16_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint16m2_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7)
{
  vsoxseg8ei16_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg8ei16_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint16m2_t bindex, vint16m2_t v0, vint16m2_t v1)
{
  vsoxseg2ei16_v_i16m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint16m2_t bindex, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2)
{
  vsoxseg3ei16_v_i16m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint16m2_t bindex, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3)
{
  vsoxseg4ei16_v_i16m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i32m4_vl32_m (vbool8_t mask, int32_t *base, vuint16m2_t bindex, vint32m4_t v0, vint32m4_t v1)
{
  vsoxseg2ei16_v_i32m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i32m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i8m2_vl32_m (vbool4_t mask, int8_t *base, vuint16m4_t bindex, vint8m2_t v0, vint8m2_t v1)
{
  vsoxseg2ei16_v_i8m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i8m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei16_v_i8m2_vl32_m (vbool4_t mask, int8_t *base, vuint16m4_t bindex, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2)
{
  vsoxseg3ei16_v_i8m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg3ei16_v_i8m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei16_v_i8m2_vl32_m (vbool4_t mask, int8_t *base, vuint16m4_t bindex, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3)
{
  vsoxseg4ei16_v_i8m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg4ei16_v_i8m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i16m4_vl32_m (vbool4_t mask, int16_t *base, vuint16m4_t bindex, vint16m4_t v0, vint16m4_t v1)
{
  vsoxseg2ei16_v_i16m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i16m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei16_v_i8m4_vl32_m (vbool2_t mask, int8_t *base, vuint16m8_t bindex, vint8m4_t v0, vint8m4_t v1)
{
  vsoxseg2ei16_v_i8m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg2ei16_v_i8m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint32mf2_t bindex, vint8mf8_t v0, vint8mf8_t v1)
{
  vsoxseg2ei32_v_i8mf8_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint32mf2_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2)
{
  vsoxseg3ei32_v_i8mf8_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint32mf2_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3)
{
  vsoxseg4ei32_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg5ei32_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint32mf2_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4)
{
  vsoxseg5ei32_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei32_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg6ei32_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint32mf2_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5)
{
  vsoxseg6ei32_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei32_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg7ei32_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint32mf2_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6)
{
  vsoxseg7ei32_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei32_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg8ei32_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint32mf2_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6, vint8mf8_t v7)
{
  vsoxseg8ei32_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei32_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint32mf2_t bindex, vint16mf4_t v0, vint16mf4_t v1)
{
  vsoxseg2ei32_v_i16mf4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint32mf2_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2)
{
  vsoxseg3ei32_v_i16mf4_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint32mf2_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3)
{
  vsoxseg4ei32_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg5ei32_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint32mf2_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4)
{
  vsoxseg5ei32_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei32_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg6ei32_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint32mf2_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5)
{
  vsoxseg6ei32_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei32_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg7ei32_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint32mf2_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6)
{
  vsoxseg7ei32_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei32_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg8ei32_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint32mf2_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6, vint16mf4_t v7)
{
  vsoxseg8ei32_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei32_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint32mf2_t bindex, vint32mf2_t v0, vint32mf2_t v1)
{
  vsoxseg2ei32_v_i32mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint32mf2_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2)
{
  vsoxseg3ei32_v_i32mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint32mf2_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3)
{
  vsoxseg4ei32_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei32_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint32mf2_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4)
{
  vsoxseg5ei32_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei32_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei32_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint32mf2_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5)
{
  vsoxseg6ei32_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei32_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei32_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint32mf2_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6)
{
  vsoxseg7ei32_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei32_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei32_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint32mf2_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6, vint32mf2_t v7)
{
  vsoxseg8ei32_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei32_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint32mf2_t bindex, vint64m1_t v0, vint64m1_t v1)
{
  vsoxseg2ei32_v_i64m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint32mf2_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2)
{
  vsoxseg3ei32_v_i64m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint32mf2_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3)
{
  vsoxseg4ei32_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei32_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint32mf2_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4)
{
  vsoxseg5ei32_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei32_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei32_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint32mf2_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5)
{
  vsoxseg6ei32_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei32_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei32_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint32mf2_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6)
{
  vsoxseg7ei32_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei32_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei32_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint32mf2_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7)
{
  vsoxseg8ei32_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei32_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint32m1_t bindex, vint8mf4_t v0, vint8mf4_t v1)
{
  vsoxseg2ei32_v_i8mf4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint32m1_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2)
{
  vsoxseg3ei32_v_i8mf4_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint32m1_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3)
{
  vsoxseg4ei32_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg5ei32_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint32m1_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4)
{
  vsoxseg5ei32_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei32_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg6ei32_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint32m1_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5)
{
  vsoxseg6ei32_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei32_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg7ei32_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint32m1_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6)
{
  vsoxseg7ei32_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei32_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg8ei32_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint32m1_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6, vint8mf4_t v7)
{
  vsoxseg8ei32_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei32_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint32m1_t bindex, vint16mf2_t v0, vint16mf2_t v1)
{
  vsoxseg2ei32_v_i16mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint32m1_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2)
{
  vsoxseg3ei32_v_i16mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint32m1_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3)
{
  vsoxseg4ei32_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei32_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint32m1_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4)
{
  vsoxseg5ei32_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei32_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei32_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint32m1_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5)
{
  vsoxseg6ei32_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei32_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei32_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint32m1_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6)
{
  vsoxseg7ei32_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei32_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei32_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint32m1_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6, vint16mf2_t v7)
{
  vsoxseg8ei32_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei32_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint32m1_t bindex, vint32m1_t v0, vint32m1_t v1)
{
  vsoxseg2ei32_v_i32m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint32m1_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2)
{
  vsoxseg3ei32_v_i32m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint32m1_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3)
{
  vsoxseg4ei32_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei32_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint32m1_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4)
{
  vsoxseg5ei32_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei32_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei32_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint32m1_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5)
{
  vsoxseg6ei32_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei32_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei32_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint32m1_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6)
{
  vsoxseg7ei32_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei32_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei32_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint32m1_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7)
{
  vsoxseg8ei32_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei32_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint32m1_t bindex, vint64m2_t v0, vint64m2_t v1)
{
  vsoxseg2ei32_v_i64m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint32m1_t bindex, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2)
{
  vsoxseg3ei32_v_i64m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint32m1_t bindex, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3)
{
  vsoxseg4ei32_v_i64m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint32m2_t bindex, vint8mf2_t v0, vint8mf2_t v1)
{
  vsoxseg2ei32_v_i8mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint32m2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2)
{
  vsoxseg3ei32_v_i8mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint32m2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3)
{
  vsoxseg4ei32_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei32_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint32m2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4)
{
  vsoxseg5ei32_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg5ei32_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei32_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint32m2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5)
{
  vsoxseg6ei32_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg6ei32_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei32_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint32m2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6)
{
  vsoxseg7ei32_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg7ei32_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei32_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint32m2_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6, vint8mf2_t v7)
{
  vsoxseg8ei32_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg8ei32_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint32m2_t bindex, vint16m1_t v0, vint16m1_t v1)
{
  vsoxseg2ei32_v_i16m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint32m2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2)
{
  vsoxseg3ei32_v_i16m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint32m2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3)
{
  vsoxseg4ei32_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei32_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint32m2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4)
{
  vsoxseg5ei32_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg5ei32_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei32_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint32m2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5)
{
  vsoxseg6ei32_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg6ei32_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei32_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint32m2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6)
{
  vsoxseg7ei32_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg7ei32_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei32_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint32m2_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7)
{
  vsoxseg8ei32_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg8ei32_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint32m2_t bindex, vint32m2_t v0, vint32m2_t v1)
{
  vsoxseg2ei32_v_i32m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint32m2_t bindex, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2)
{
  vsoxseg3ei32_v_i32m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint32m2_t bindex, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3)
{
  vsoxseg4ei32_v_i32m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i64m4_vl32_m (vbool16_t mask, int64_t *base, vuint32m2_t bindex, vint64m4_t v0, vint64m4_t v1)
{
  vsoxseg2ei32_v_i64m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i64m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint32m4_t bindex, vint8m1_t v0, vint8m1_t v1)
{
  vsoxseg2ei32_v_i8m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint32m4_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2)
{
  vsoxseg3ei32_v_i8m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint32m4_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3)
{
  vsoxseg4ei32_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei32_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint32m4_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4)
{
  vsoxseg5ei32_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg5ei32_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei32_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint32m4_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5)
{
  vsoxseg6ei32_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg6ei32_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei32_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint32m4_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6)
{
  vsoxseg7ei32_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg7ei32_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei32_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint32m4_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7)
{
  vsoxseg8ei32_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg8ei32_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint32m4_t bindex, vint16m2_t v0, vint16m2_t v1)
{
  vsoxseg2ei32_v_i16m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint32m4_t bindex, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2)
{
  vsoxseg3ei32_v_i16m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint32m4_t bindex, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3)
{
  vsoxseg4ei32_v_i16m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i32m4_vl32_m (vbool8_t mask, int32_t *base, vuint32m4_t bindex, vint32m4_t v0, vint32m4_t v1)
{
  vsoxseg2ei32_v_i32m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i32m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i8m2_vl32_m (vbool4_t mask, int8_t *base, vuint32m8_t bindex, vint8m2_t v0, vint8m2_t v1)
{
  vsoxseg2ei32_v_i8m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i8m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei32_v_i8m2_vl32_m (vbool4_t mask, int8_t *base, vuint32m8_t bindex, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2)
{
  vsoxseg3ei32_v_i8m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg3ei32_v_i8m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei32_v_i8m2_vl32_m (vbool4_t mask, int8_t *base, vuint32m8_t bindex, vint8m2_t v0, vint8m2_t v1, vint8m2_t v2, vint8m2_t v3)
{
  vsoxseg4ei32_v_i8m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg4ei32_v_i8m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei32_v_i16m4_vl32_m (vbool4_t mask, int16_t *base, vuint32m8_t bindex, vint16m4_t v0, vint16m4_t v1)
{
  vsoxseg2ei32_v_i16m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg2ei32_v_i16m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint64m1_t bindex, vint8mf8_t v0, vint8mf8_t v1)
{
  vsoxseg2ei64_v_i8mf8_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint64m1_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2)
{
  vsoxseg3ei64_v_i8mf8_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint64m1_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3)
{
  vsoxseg4ei64_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg5ei64_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint64m1_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4)
{
  vsoxseg5ei64_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei64_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg6ei64_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint64m1_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5)
{
  vsoxseg6ei64_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei64_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg7ei64_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint64m1_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6)
{
  vsoxseg7ei64_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei64_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg8ei64_v_i8mf8_vl32_m (vbool64_t mask, int8_t *base, vuint64m1_t bindex, vint8mf8_t v0, vint8mf8_t v1, vint8mf8_t v2, vint8mf8_t v3, vint8mf8_t v4, vint8mf8_t v5, vint8mf8_t v6, vint8mf8_t v7)
{
  vsoxseg8ei64_v_i8mf8_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei64_v_i8mf8_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint64m1_t bindex, vint16mf4_t v0, vint16mf4_t v1)
{
  vsoxseg2ei64_v_i16mf4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint64m1_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2)
{
  vsoxseg3ei64_v_i16mf4_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint64m1_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3)
{
  vsoxseg4ei64_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg5ei64_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint64m1_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4)
{
  vsoxseg5ei64_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei64_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg6ei64_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint64m1_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5)
{
  vsoxseg6ei64_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei64_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg7ei64_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint64m1_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6)
{
  vsoxseg7ei64_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei64_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg8ei64_v_i16mf4_vl32_m (vbool64_t mask, int16_t *base, vuint64m1_t bindex, vint16mf4_t v0, vint16mf4_t v1, vint16mf4_t v2, vint16mf4_t v3, vint16mf4_t v4, vint16mf4_t v5, vint16mf4_t v6, vint16mf4_t v7)
{
  vsoxseg8ei64_v_i16mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei64_v_i16mf4_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint64m1_t bindex, vint32mf2_t v0, vint32mf2_t v1)
{
  vsoxseg2ei64_v_i32mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint64m1_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2)
{
  vsoxseg3ei64_v_i32mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint64m1_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3)
{
  vsoxseg4ei64_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei64_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint64m1_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4)
{
  vsoxseg5ei64_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei64_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei64_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint64m1_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5)
{
  vsoxseg6ei64_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei64_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei64_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint64m1_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6)
{
  vsoxseg7ei64_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei64_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei64_v_i32mf2_vl32_m (vbool64_t mask, int32_t *base, vuint64m1_t bindex, vint32mf2_t v0, vint32mf2_t v1, vint32mf2_t v2, vint32mf2_t v3, vint32mf2_t v4, vint32mf2_t v5, vint32mf2_t v6, vint32mf2_t v7)
{
  vsoxseg8ei64_v_i32mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei64_v_i32mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint64m1_t bindex, vint64m1_t v0, vint64m1_t v1)
{
  vsoxseg2ei64_v_i64m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint64m1_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2)
{
  vsoxseg3ei64_v_i64m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint64m1_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3)
{
  vsoxseg4ei64_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei64_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint64m1_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4)
{
  vsoxseg5ei64_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg5ei64_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei64_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint64m1_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5)
{
  vsoxseg6ei64_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg6ei64_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei64_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint64m1_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6)
{
  vsoxseg7ei64_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg7ei64_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei64_v_i64m1_vl32_m (vbool64_t mask, int64_t *base, vuint64m1_t bindex, vint64m1_t v0, vint64m1_t v1, vint64m1_t v2, vint64m1_t v3, vint64m1_t v4, vint64m1_t v5, vint64m1_t v6, vint64m1_t v7)
{
  vsoxseg8ei64_v_i64m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t\n(?: test_vsoxseg8ei64_v_i64m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint64m2_t bindex, vint8mf4_t v0, vint8mf4_t v1)
{
  vsoxseg2ei64_v_i8mf4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint64m2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2)
{
  vsoxseg3ei64_v_i8mf4_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint64m2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3)
{
  vsoxseg4ei64_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg5ei64_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint64m2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4)
{
  vsoxseg5ei64_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg5ei64_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg6ei64_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint64m2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5)
{
  vsoxseg6ei64_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg6ei64_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg7ei64_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint64m2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6)
{
  vsoxseg7ei64_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg7ei64_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg8ei64_v_i8mf4_vl32_m (vbool32_t mask, int8_t *base, vuint64m2_t bindex, vint8mf4_t v0, vint8mf4_t v1, vint8mf4_t v2, vint8mf4_t v3, vint8mf4_t v4, vint8mf4_t v5, vint8mf4_t v6, vint8mf4_t v7)
{
  vsoxseg8ei64_v_i8mf4_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg8ei64_v_i8mf4_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint64m2_t bindex, vint16mf2_t v0, vint16mf2_t v1)
{
  vsoxseg2ei64_v_i16mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint64m2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2)
{
  vsoxseg3ei64_v_i16mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint64m2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3)
{
  vsoxseg4ei64_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei64_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint64m2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4)
{
  vsoxseg5ei64_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg5ei64_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei64_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint64m2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5)
{
  vsoxseg6ei64_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg6ei64_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei64_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint64m2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6)
{
  vsoxseg7ei64_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg7ei64_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei64_v_i16mf2_vl32_m (vbool32_t mask, int16_t *base, vuint64m2_t bindex, vint16mf2_t v0, vint16mf2_t v1, vint16mf2_t v2, vint16mf2_t v3, vint16mf2_t v4, vint16mf2_t v5, vint16mf2_t v6, vint16mf2_t v7)
{
  vsoxseg8ei64_v_i16mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg8ei64_v_i16mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint64m2_t bindex, vint32m1_t v0, vint32m1_t v1)
{
  vsoxseg2ei64_v_i32m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint64m2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2)
{
  vsoxseg3ei64_v_i32m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint64m2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3)
{
  vsoxseg4ei64_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei64_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint64m2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4)
{
  vsoxseg5ei64_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg5ei64_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei64_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint64m2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5)
{
  vsoxseg6ei64_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg6ei64_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei64_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint64m2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6)
{
  vsoxseg7ei64_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg7ei64_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei64_v_i32m1_vl32_m (vbool32_t mask, int32_t *base, vuint64m2_t bindex, vint32m1_t v0, vint32m1_t v1, vint32m1_t v2, vint32m1_t v3, vint32m1_t v4, vint32m1_t v5, vint32m1_t v6, vint32m1_t v7)
{
  vsoxseg8ei64_v_i32m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg8ei64_v_i32m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint64m2_t bindex, vint64m2_t v0, vint64m2_t v1)
{
  vsoxseg2ei64_v_i64m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint64m2_t bindex, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2)
{
  vsoxseg3ei64_v_i64m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i64m2_vl32_m (vbool32_t mask, int64_t *base, vuint64m2_t bindex, vint64m2_t v0, vint64m2_t v1, vint64m2_t v2, vint64m2_t v3)
{
  vsoxseg4ei64_v_i64m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i64m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint64m4_t bindex, vint8mf2_t v0, vint8mf2_t v1)
{
  vsoxseg2ei64_v_i8mf2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint64m4_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2)
{
  vsoxseg3ei64_v_i8mf2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint64m4_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3)
{
  vsoxseg4ei64_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg5ei64_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint64m4_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4)
{
  vsoxseg5ei64_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg5ei64_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg6ei64_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint64m4_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5)
{
  vsoxseg6ei64_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg6ei64_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg7ei64_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint64m4_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6)
{
  vsoxseg7ei64_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg7ei64_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg8ei64_v_i8mf2_vl32_m (vbool16_t mask, int8_t *base, vuint64m4_t bindex, vint8mf2_t v0, vint8mf2_t v1, vint8mf2_t v2, vint8mf2_t v3, vint8mf2_t v4, vint8mf2_t v5, vint8mf2_t v6, vint8mf2_t v7)
{
  vsoxseg8ei64_v_i8mf2_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg8ei64_v_i8mf2_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint64m4_t bindex, vint16m1_t v0, vint16m1_t v1)
{
  vsoxseg2ei64_v_i16m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint64m4_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2)
{
  vsoxseg3ei64_v_i16m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint64m4_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3)
{
  vsoxseg4ei64_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei64_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint64m4_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4)
{
  vsoxseg5ei64_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg5ei64_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei64_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint64m4_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5)
{
  vsoxseg6ei64_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg6ei64_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei64_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint64m4_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6)
{
  vsoxseg7ei64_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg7ei64_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei64_v_i16m1_vl32_m (vbool16_t mask, int16_t *base, vuint64m4_t bindex, vint16m1_t v0, vint16m1_t v1, vint16m1_t v2, vint16m1_t v3, vint16m1_t v4, vint16m1_t v5, vint16m1_t v6, vint16m1_t v7)
{
  vsoxseg8ei64_v_i16m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg8ei64_v_i16m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint64m4_t bindex, vint32m2_t v0, vint32m2_t v1)
{
  vsoxseg2ei64_v_i32m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint64m4_t bindex, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2)
{
  vsoxseg3ei64_v_i32m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i32m2_vl32_m (vbool16_t mask, int32_t *base, vuint64m4_t bindex, vint32m2_t v0, vint32m2_t v1, vint32m2_t v2, vint32m2_t v3)
{
  vsoxseg4ei64_v_i32m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i32m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i64m4_vl32_m (vbool16_t mask, int64_t *base, vuint64m4_t bindex, vint64m4_t v0, vint64m4_t v1)
{
  vsoxseg2ei64_v_i64m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i64m4_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint64m8_t bindex, vint8m1_t v0, vint8m1_t v1)
{
  vsoxseg2ei64_v_i8m1_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint64m8_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2)
{
  vsoxseg3ei64_v_i8m1_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint64m8_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3)
{
  vsoxseg4ei64_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg5ei64_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint64m8_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4)
{
  vsoxseg5ei64_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg5ei64_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg6ei64_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint64m8_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5)
{
  vsoxseg6ei64_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg6ei64_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg7ei64_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint64m8_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6)
{
  vsoxseg7ei64_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg7ei64_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg8ei64_v_i8m1_vl32_m (vbool8_t mask, int8_t *base, vuint64m8_t bindex, vint8m1_t v0, vint8m1_t v1, vint8m1_t v2, vint8m1_t v3, vint8m1_t v4, vint8m1_t v5, vint8m1_t v6, vint8m1_t v7)
{
  vsoxseg8ei64_v_i8m1_m (mask, base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg8ei64_v_i8m1_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint64m8_t bindex, vint16m2_t v0, vint16m2_t v1)
{
  vsoxseg2ei64_v_i16m2_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg3ei64_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint64m8_t bindex, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2)
{
  vsoxseg3ei64_v_i16m2_m (mask, base, bindex, v0, v1, v2, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg3ei64_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg4ei64_v_i16m2_vl32_m (vbool8_t mask, int16_t *base, vuint64m8_t bindex, vint16m2_t v0, vint16m2_t v1, vint16m2_t v2, vint16m2_t v3)
{
  vsoxseg4ei64_v_i16m2_m (mask, base, bindex, v0, v1, v2, v3, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg4ei64_v_i16m2_vl32 )?} 1 } } */
void
test_vsoxseg2ei64_v_i32m4_vl32_m (vbool8_t mask, int32_t *base, vuint64m8_t bindex, vint32m4_t v0, vint32m4_t v1)
{
  vsoxseg2ei64_v_i32m4_m (mask, base, bindex, v0, v1, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsoxseg.ei..?\.v).)*\s+vsoxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t\n(?: test_vsoxseg2ei64_v_i32m4_vl32 )?} 1 } } */
