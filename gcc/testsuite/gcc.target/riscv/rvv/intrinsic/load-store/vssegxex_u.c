
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void
test_vsseg2e8_v_u8mf8 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, size_t vl)
{
  vsseg2e8_v_u8mf8 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8mf8 )?} 1 } } */
void
test_vsseg2e8_v_u8mf8_vl31 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1)
{
  vsseg2e8_v_u8mf8 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8mf8_vl31 )?} 1 } } */
void
test_vsseg3e8_v_u8mf8 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, size_t vl)
{
  vsseg3e8_v_u8mf8 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e8_v_u8mf8 )?} 1 } } */
void
test_vsseg3e8_v_u8mf8_vl31 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2)
{
  vsseg3e8_v_u8mf8 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e8_v_u8mf8_vl31 )?} 1 } } */
void
test_vsseg4e8_v_u8mf8 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, size_t vl)
{
  vsseg4e8_v_u8mf8 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e8_v_u8mf8 )?} 1 } } */
void
test_vsseg4e8_v_u8mf8_vl31 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3)
{
  vsseg4e8_v_u8mf8 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e8_v_u8mf8_vl31 )?} 1 } } */
void
test_vsseg5e8_v_u8mf8 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, size_t vl)
{
  vsseg5e8_v_u8mf8 (base, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e8_v_u8mf8 )?} 1 } } */
void
test_vsseg5e8_v_u8mf8_vl31 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4)
{
  vsseg5e8_v_u8mf8 (base, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e8_v_u8mf8_vl31 )?} 1 } } */
void
test_vsseg6e8_v_u8mf8 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, vuint8mf8_t v5, size_t vl)
{
  vsseg6e8_v_u8mf8 (base, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e8_v_u8mf8 )?} 1 } } */
void
test_vsseg6e8_v_u8mf8_vl31 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, vuint8mf8_t v5)
{
  vsseg6e8_v_u8mf8 (base, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e8_v_u8mf8_vl31 )?} 1 } } */
void
test_vsseg7e8_v_u8mf8 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, vuint8mf8_t v5, vuint8mf8_t v6, size_t vl)
{
  vsseg7e8_v_u8mf8 (base, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e8_v_u8mf8 )?} 1 } } */
void
test_vsseg7e8_v_u8mf8_vl31 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, vuint8mf8_t v5, vuint8mf8_t v6)
{
  vsseg7e8_v_u8mf8 (base, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e8_v_u8mf8_vl31 )?} 1 } } */
void
test_vsseg8e8_v_u8mf8 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, vuint8mf8_t v5, vuint8mf8_t v6, vuint8mf8_t v7, size_t vl)
{
  vsseg8e8_v_u8mf8 (base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e8_v_u8mf8 )?} 1 } } */
void
test_vsseg8e8_v_u8mf8_vl31 (uint8_t *base, vuint8mf8_t v0, vuint8mf8_t v1, vuint8mf8_t v2, vuint8mf8_t v3, vuint8mf8_t v4, vuint8mf8_t v5, vuint8mf8_t v6, vuint8mf8_t v7)
{
  vsseg8e8_v_u8mf8 (base, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e8_v_u8mf8_vl31 )?} 1 } } */
void
test_vsseg2e8_v_u8mf4 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, size_t vl)
{
  vsseg2e8_v_u8mf4 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8mf4 )?} 1 } } */
void
test_vsseg2e8_v_u8mf4_vl31 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1)
{
  vsseg2e8_v_u8mf4 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8mf4_vl31 )?} 1 } } */
void
test_vsseg3e8_v_u8mf4 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, size_t vl)
{
  vsseg3e8_v_u8mf4 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e8_v_u8mf4 )?} 1 } } */
void
test_vsseg3e8_v_u8mf4_vl31 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2)
{
  vsseg3e8_v_u8mf4 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e8_v_u8mf4_vl31 )?} 1 } } */
void
test_vsseg4e8_v_u8mf4 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, size_t vl)
{
  vsseg4e8_v_u8mf4 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e8_v_u8mf4 )?} 1 } } */
void
test_vsseg4e8_v_u8mf4_vl31 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3)
{
  vsseg4e8_v_u8mf4 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e8_v_u8mf4_vl31 )?} 1 } } */
void
test_vsseg5e8_v_u8mf4 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, size_t vl)
{
  vsseg5e8_v_u8mf4 (base, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e8_v_u8mf4 )?} 1 } } */
void
test_vsseg5e8_v_u8mf4_vl31 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4)
{
  vsseg5e8_v_u8mf4 (base, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e8_v_u8mf4_vl31 )?} 1 } } */
void
test_vsseg6e8_v_u8mf4 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, vuint8mf4_t v5, size_t vl)
{
  vsseg6e8_v_u8mf4 (base, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e8_v_u8mf4 )?} 1 } } */
void
test_vsseg6e8_v_u8mf4_vl31 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, vuint8mf4_t v5)
{
  vsseg6e8_v_u8mf4 (base, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e8_v_u8mf4_vl31 )?} 1 } } */
void
test_vsseg7e8_v_u8mf4 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, vuint8mf4_t v5, vuint8mf4_t v6, size_t vl)
{
  vsseg7e8_v_u8mf4 (base, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e8_v_u8mf4 )?} 1 } } */
void
test_vsseg7e8_v_u8mf4_vl31 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, vuint8mf4_t v5, vuint8mf4_t v6)
{
  vsseg7e8_v_u8mf4 (base, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e8_v_u8mf4_vl31 )?} 1 } } */
void
test_vsseg8e8_v_u8mf4 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, vuint8mf4_t v5, vuint8mf4_t v6, vuint8mf4_t v7, size_t vl)
{
  vsseg8e8_v_u8mf4 (base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e8_v_u8mf4 )?} 1 } } */
void
test_vsseg8e8_v_u8mf4_vl31 (uint8_t *base, vuint8mf4_t v0, vuint8mf4_t v1, vuint8mf4_t v2, vuint8mf4_t v3, vuint8mf4_t v4, vuint8mf4_t v5, vuint8mf4_t v6, vuint8mf4_t v7)
{
  vsseg8e8_v_u8mf4 (base, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e8_v_u8mf4_vl31 )?} 1 } } */
void
test_vsseg2e8_v_u8mf2 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, size_t vl)
{
  vsseg2e8_v_u8mf2 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8mf2 )?} 1 } } */
void
test_vsseg2e8_v_u8mf2_vl31 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1)
{
  vsseg2e8_v_u8mf2 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8mf2_vl31 )?} 1 } } */
void
test_vsseg3e8_v_u8mf2 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, size_t vl)
{
  vsseg3e8_v_u8mf2 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e8_v_u8mf2 )?} 1 } } */
void
test_vsseg3e8_v_u8mf2_vl31 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2)
{
  vsseg3e8_v_u8mf2 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e8_v_u8mf2_vl31 )?} 1 } } */
void
test_vsseg4e8_v_u8mf2 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, size_t vl)
{
  vsseg4e8_v_u8mf2 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e8_v_u8mf2 )?} 1 } } */
void
test_vsseg4e8_v_u8mf2_vl31 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3)
{
  vsseg4e8_v_u8mf2 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e8_v_u8mf2_vl31 )?} 1 } } */
void
test_vsseg5e8_v_u8mf2 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, size_t vl)
{
  vsseg5e8_v_u8mf2 (base, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e8_v_u8mf2 )?} 1 } } */
void
test_vsseg5e8_v_u8mf2_vl31 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4)
{
  vsseg5e8_v_u8mf2 (base, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e8_v_u8mf2_vl31 )?} 1 } } */
void
test_vsseg6e8_v_u8mf2 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, vuint8mf2_t v5, size_t vl)
{
  vsseg6e8_v_u8mf2 (base, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e8_v_u8mf2 )?} 1 } } */
void
test_vsseg6e8_v_u8mf2_vl31 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, vuint8mf2_t v5)
{
  vsseg6e8_v_u8mf2 (base, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e8_v_u8mf2_vl31 )?} 1 } } */
void
test_vsseg7e8_v_u8mf2 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, vuint8mf2_t v5, vuint8mf2_t v6, size_t vl)
{
  vsseg7e8_v_u8mf2 (base, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e8_v_u8mf2 )?} 1 } } */
void
test_vsseg7e8_v_u8mf2_vl31 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, vuint8mf2_t v5, vuint8mf2_t v6)
{
  vsseg7e8_v_u8mf2 (base, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e8_v_u8mf2_vl31 )?} 1 } } */
void
test_vsseg8e8_v_u8mf2 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, vuint8mf2_t v5, vuint8mf2_t v6, vuint8mf2_t v7, size_t vl)
{
  vsseg8e8_v_u8mf2 (base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e8_v_u8mf2 )?} 1 } } */
void
test_vsseg8e8_v_u8mf2_vl31 (uint8_t *base, vuint8mf2_t v0, vuint8mf2_t v1, vuint8mf2_t v2, vuint8mf2_t v3, vuint8mf2_t v4, vuint8mf2_t v5, vuint8mf2_t v6, vuint8mf2_t v7)
{
  vsseg8e8_v_u8mf2 (base, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e8_v_u8mf2_vl31 )?} 1 } } */
void
test_vsseg2e8_v_u8m1 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, size_t vl)
{
  vsseg2e8_v_u8m1 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8m1 )?} 1 } } */
void
test_vsseg2e8_v_u8m1_vl31 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1)
{
  vsseg2e8_v_u8m1 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8m1_vl31 )?} 1 } } */
void
test_vsseg3e8_v_u8m1 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, size_t vl)
{
  vsseg3e8_v_u8m1 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e8_v_u8m1 )?} 1 } } */
void
test_vsseg3e8_v_u8m1_vl31 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2)
{
  vsseg3e8_v_u8m1 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e8_v_u8m1_vl31 )?} 1 } } */
void
test_vsseg4e8_v_u8m1 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, size_t vl)
{
  vsseg4e8_v_u8m1 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e8_v_u8m1 )?} 1 } } */
void
test_vsseg4e8_v_u8m1_vl31 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3)
{
  vsseg4e8_v_u8m1 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e8_v_u8m1_vl31 )?} 1 } } */
void
test_vsseg5e8_v_u8m1 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, size_t vl)
{
  vsseg5e8_v_u8m1 (base, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e8_v_u8m1 )?} 1 } } */
void
test_vsseg5e8_v_u8m1_vl31 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4)
{
  vsseg5e8_v_u8m1 (base, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg5e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e8_v_u8m1_vl31 )?} 1 } } */
void
test_vsseg6e8_v_u8m1 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, size_t vl)
{
  vsseg6e8_v_u8m1 (base, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e8_v_u8m1 )?} 1 } } */
void
test_vsseg6e8_v_u8m1_vl31 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5)
{
  vsseg6e8_v_u8m1 (base, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg6e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e8_v_u8m1_vl31 )?} 1 } } */
void
test_vsseg7e8_v_u8m1 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, size_t vl)
{
  vsseg7e8_v_u8m1 (base, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e8_v_u8m1 )?} 1 } } */
void
test_vsseg7e8_v_u8m1_vl31 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6)
{
  vsseg7e8_v_u8m1 (base, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg7e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e8_v_u8m1_vl31 )?} 1 } } */
void
test_vsseg8e8_v_u8m1 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7, size_t vl)
{
  vsseg8e8_v_u8m1 (base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e8_v_u8m1 )?} 1 } } */
void
test_vsseg8e8_v_u8m1_vl31 (uint8_t *base, vuint8m1_t v0, vuint8m1_t v1, vuint8m1_t v2, vuint8m1_t v3, vuint8m1_t v4, vuint8m1_t v5, vuint8m1_t v6, vuint8m1_t v7)
{
  vsseg8e8_v_u8m1 (base, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg8e8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e8_v_u8m1_vl31 )?} 1 } } */
void
test_vsseg2e8_v_u8m2 (uint8_t *base, vuint8m2_t v0, vuint8m2_t v1, size_t vl)
{
  vsseg2e8_v_u8m2 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8m2 )?} 1 } } */
void
test_vsseg2e8_v_u8m2_vl31 (uint8_t *base, vuint8m2_t v0, vuint8m2_t v1)
{
  vsseg2e8_v_u8m2 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8m2_vl31 )?} 1 } } */
void
test_vsseg3e8_v_u8m2 (uint8_t *base, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, size_t vl)
{
  vsseg3e8_v_u8m2 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e8_v_u8m2 )?} 1 } } */
void
test_vsseg3e8_v_u8m2_vl31 (uint8_t *base, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2)
{
  vsseg3e8_v_u8m2 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e8_v_u8m2_vl31 )?} 1 } } */
void
test_vsseg4e8_v_u8m2 (uint8_t *base, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3, size_t vl)
{
  vsseg4e8_v_u8m2 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e8_v_u8m2 )?} 1 } } */
void
test_vsseg4e8_v_u8m2_vl31 (uint8_t *base, vuint8m2_t v0, vuint8m2_t v1, vuint8m2_t v2, vuint8m2_t v3)
{
  vsseg4e8_v_u8m2 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e8_v_u8m2_vl31 )?} 1 } } */
void
test_vsseg2e8_v_u8m4 (uint8_t *base, vuint8m4_t v0, vuint8m4_t v1, size_t vl)
{
  vsseg2e8_v_u8m4 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8m4 )?} 1 } } */
void
test_vsseg2e8_v_u8m4_vl31 (uint8_t *base, vuint8m4_t v0, vuint8m4_t v1)
{
  vsseg2e8_v_u8m4 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e8_v_u8m4_vl31 )?} 1 } } */
void
test_vsseg2e16_v_u16mf4 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, size_t vl)
{
  vsseg2e16_v_u16mf4 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_u16mf4 )?} 1 } } */
void
test_vsseg2e16_v_u16mf4_vl31 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1)
{
  vsseg2e16_v_u16mf4 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_u16mf4_vl31 )?} 1 } } */
void
test_vsseg3e16_v_u16mf4 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, size_t vl)
{
  vsseg3e16_v_u16mf4 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_u16mf4 )?} 1 } } */
void
test_vsseg3e16_v_u16mf4_vl31 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2)
{
  vsseg3e16_v_u16mf4 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_u16mf4_vl31 )?} 1 } } */
void
test_vsseg4e16_v_u16mf4 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, size_t vl)
{
  vsseg4e16_v_u16mf4 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_u16mf4 )?} 1 } } */
void
test_vsseg4e16_v_u16mf4_vl31 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3)
{
  vsseg4e16_v_u16mf4 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_u16mf4_vl31 )?} 1 } } */
void
test_vsseg5e16_v_u16mf4 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, size_t vl)
{
  vsseg5e16_v_u16mf4 (base, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e16_v_u16mf4 )?} 1 } } */
void
test_vsseg5e16_v_u16mf4_vl31 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4)
{
  vsseg5e16_v_u16mf4 (base, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e16_v_u16mf4_vl31 )?} 1 } } */
void
test_vsseg6e16_v_u16mf4 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, size_t vl)
{
  vsseg6e16_v_u16mf4 (base, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e16_v_u16mf4 )?} 1 } } */
void
test_vsseg6e16_v_u16mf4_vl31 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5)
{
  vsseg6e16_v_u16mf4 (base, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e16_v_u16mf4_vl31 )?} 1 } } */
void
test_vsseg7e16_v_u16mf4 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, vuint16mf4_t v6, size_t vl)
{
  vsseg7e16_v_u16mf4 (base, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e16_v_u16mf4 )?} 1 } } */
void
test_vsseg7e16_v_u16mf4_vl31 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, vuint16mf4_t v6)
{
  vsseg7e16_v_u16mf4 (base, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e16_v_u16mf4_vl31 )?} 1 } } */
void
test_vsseg8e16_v_u16mf4 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, vuint16mf4_t v6, vuint16mf4_t v7, size_t vl)
{
  vsseg8e16_v_u16mf4 (base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e16_v_u16mf4 )?} 1 } } */
void
test_vsseg8e16_v_u16mf4_vl31 (uint16_t *base, vuint16mf4_t v0, vuint16mf4_t v1, vuint16mf4_t v2, vuint16mf4_t v3, vuint16mf4_t v4, vuint16mf4_t v5, vuint16mf4_t v6, vuint16mf4_t v7)
{
  vsseg8e16_v_u16mf4 (base, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e16_v_u16mf4_vl31 )?} 1 } } */
void
test_vsseg2e16_v_u16mf2 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, size_t vl)
{
  vsseg2e16_v_u16mf2 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_u16mf2 )?} 1 } } */
void
test_vsseg2e16_v_u16mf2_vl31 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1)
{
  vsseg2e16_v_u16mf2 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_u16mf2_vl31 )?} 1 } } */
void
test_vsseg3e16_v_u16mf2 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, size_t vl)
{
  vsseg3e16_v_u16mf2 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_u16mf2 )?} 1 } } */
void
test_vsseg3e16_v_u16mf2_vl31 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2)
{
  vsseg3e16_v_u16mf2 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_u16mf2_vl31 )?} 1 } } */
void
test_vsseg4e16_v_u16mf2 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, size_t vl)
{
  vsseg4e16_v_u16mf2 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_u16mf2 )?} 1 } } */
void
test_vsseg4e16_v_u16mf2_vl31 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3)
{
  vsseg4e16_v_u16mf2 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_u16mf2_vl31 )?} 1 } } */
void
test_vsseg5e16_v_u16mf2 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, size_t vl)
{
  vsseg5e16_v_u16mf2 (base, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e16_v_u16mf2 )?} 1 } } */
void
test_vsseg5e16_v_u16mf2_vl31 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4)
{
  vsseg5e16_v_u16mf2 (base, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e16_v_u16mf2_vl31 )?} 1 } } */
void
test_vsseg6e16_v_u16mf2 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, size_t vl)
{
  vsseg6e16_v_u16mf2 (base, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e16_v_u16mf2 )?} 1 } } */
void
test_vsseg6e16_v_u16mf2_vl31 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5)
{
  vsseg6e16_v_u16mf2 (base, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e16_v_u16mf2_vl31 )?} 1 } } */
void
test_vsseg7e16_v_u16mf2 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, vuint16mf2_t v6, size_t vl)
{
  vsseg7e16_v_u16mf2 (base, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e16_v_u16mf2 )?} 1 } } */
void
test_vsseg7e16_v_u16mf2_vl31 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, vuint16mf2_t v6)
{
  vsseg7e16_v_u16mf2 (base, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e16_v_u16mf2_vl31 )?} 1 } } */
void
test_vsseg8e16_v_u16mf2 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, vuint16mf2_t v6, vuint16mf2_t v7, size_t vl)
{
  vsseg8e16_v_u16mf2 (base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e16_v_u16mf2 )?} 1 } } */
void
test_vsseg8e16_v_u16mf2_vl31 (uint16_t *base, vuint16mf2_t v0, vuint16mf2_t v1, vuint16mf2_t v2, vuint16mf2_t v3, vuint16mf2_t v4, vuint16mf2_t v5, vuint16mf2_t v6, vuint16mf2_t v7)
{
  vsseg8e16_v_u16mf2 (base, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e16_v_u16mf2_vl31 )?} 1 } } */
void
test_vsseg2e16_v_u16m1 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, size_t vl)
{
  vsseg2e16_v_u16m1 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_u16m1 )?} 1 } } */
void
test_vsseg2e16_v_u16m1_vl31 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1)
{
  vsseg2e16_v_u16m1 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_u16m1_vl31 )?} 1 } } */
void
test_vsseg3e16_v_u16m1 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, size_t vl)
{
  vsseg3e16_v_u16m1 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_u16m1 )?} 1 } } */
void
test_vsseg3e16_v_u16m1_vl31 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2)
{
  vsseg3e16_v_u16m1 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_u16m1_vl31 )?} 1 } } */
void
test_vsseg4e16_v_u16m1 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, size_t vl)
{
  vsseg4e16_v_u16m1 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_u16m1 )?} 1 } } */
void
test_vsseg4e16_v_u16m1_vl31 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3)
{
  vsseg4e16_v_u16m1 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_u16m1_vl31 )?} 1 } } */
void
test_vsseg5e16_v_u16m1 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, size_t vl)
{
  vsseg5e16_v_u16m1 (base, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e16_v_u16m1 )?} 1 } } */
void
test_vsseg5e16_v_u16m1_vl31 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4)
{
  vsseg5e16_v_u16m1 (base, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg5e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e16_v_u16m1_vl31 )?} 1 } } */
void
test_vsseg6e16_v_u16m1 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, size_t vl)
{
  vsseg6e16_v_u16m1 (base, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e16_v_u16m1 )?} 1 } } */
void
test_vsseg6e16_v_u16m1_vl31 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5)
{
  vsseg6e16_v_u16m1 (base, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg6e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e16_v_u16m1_vl31 )?} 1 } } */
void
test_vsseg7e16_v_u16m1 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, size_t vl)
{
  vsseg7e16_v_u16m1 (base, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e16_v_u16m1 )?} 1 } } */
void
test_vsseg7e16_v_u16m1_vl31 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6)
{
  vsseg7e16_v_u16m1 (base, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg7e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e16_v_u16m1_vl31 )?} 1 } } */
void
test_vsseg8e16_v_u16m1 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7, size_t vl)
{
  vsseg8e16_v_u16m1 (base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e16_v_u16m1 )?} 1 } } */
void
test_vsseg8e16_v_u16m1_vl31 (uint16_t *base, vuint16m1_t v0, vuint16m1_t v1, vuint16m1_t v2, vuint16m1_t v3, vuint16m1_t v4, vuint16m1_t v5, vuint16m1_t v6, vuint16m1_t v7)
{
  vsseg8e16_v_u16m1 (base, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg8e16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e16_v_u16m1_vl31 )?} 1 } } */
void
test_vsseg2e16_v_u16m2 (uint16_t *base, vuint16m2_t v0, vuint16m2_t v1, size_t vl)
{
  vsseg2e16_v_u16m2 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_u16m2 )?} 1 } } */
void
test_vsseg2e16_v_u16m2_vl31 (uint16_t *base, vuint16m2_t v0, vuint16m2_t v1)
{
  vsseg2e16_v_u16m2 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_u16m2_vl31 )?} 1 } } */
void
test_vsseg3e16_v_u16m2 (uint16_t *base, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, size_t vl)
{
  vsseg3e16_v_u16m2 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_u16m2 )?} 1 } } */
void
test_vsseg3e16_v_u16m2_vl31 (uint16_t *base, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2)
{
  vsseg3e16_v_u16m2 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e16_v_u16m2_vl31 )?} 1 } } */
void
test_vsseg4e16_v_u16m2 (uint16_t *base, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3, size_t vl)
{
  vsseg4e16_v_u16m2 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_u16m2 )?} 1 } } */
void
test_vsseg4e16_v_u16m2_vl31 (uint16_t *base, vuint16m2_t v0, vuint16m2_t v1, vuint16m2_t v2, vuint16m2_t v3)
{
  vsseg4e16_v_u16m2 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e16_v_u16m2_vl31 )?} 1 } } */
void
test_vsseg2e16_v_u16m4 (uint16_t *base, vuint16m4_t v0, vuint16m4_t v1, size_t vl)
{
  vsseg2e16_v_u16m4 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_u16m4 )?} 1 } } */
void
test_vsseg2e16_v_u16m4_vl31 (uint16_t *base, vuint16m4_t v0, vuint16m4_t v1)
{
  vsseg2e16_v_u16m4 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e16_v_u16m4_vl31 )?} 1 } } */
void
test_vsseg2e32_v_u32mf2 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, size_t vl)
{
  vsseg2e32_v_u32mf2 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_u32mf2 )?} 1 } } */
void
test_vsseg2e32_v_u32mf2_vl31 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1)
{
  vsseg2e32_v_u32mf2 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_u32mf2_vl31 )?} 1 } } */
void
test_vsseg3e32_v_u32mf2 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, size_t vl)
{
  vsseg3e32_v_u32mf2 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e32_v_u32mf2 )?} 1 } } */
void
test_vsseg3e32_v_u32mf2_vl31 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2)
{
  vsseg3e32_v_u32mf2 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e32_v_u32mf2_vl31 )?} 1 } } */
void
test_vsseg4e32_v_u32mf2 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, size_t vl)
{
  vsseg4e32_v_u32mf2 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e32_v_u32mf2 )?} 1 } } */
void
test_vsseg4e32_v_u32mf2_vl31 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3)
{
  vsseg4e32_v_u32mf2 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e32_v_u32mf2_vl31 )?} 1 } } */
void
test_vsseg5e32_v_u32mf2 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, size_t vl)
{
  vsseg5e32_v_u32mf2 (base, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e32_v_u32mf2 )?} 1 } } */
void
test_vsseg5e32_v_u32mf2_vl31 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4)
{
  vsseg5e32_v_u32mf2 (base, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e32_v_u32mf2_vl31 )?} 1 } } */
void
test_vsseg6e32_v_u32mf2 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, vuint32mf2_t v5, size_t vl)
{
  vsseg6e32_v_u32mf2 (base, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e32_v_u32mf2 )?} 1 } } */
void
test_vsseg6e32_v_u32mf2_vl31 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, vuint32mf2_t v5)
{
  vsseg6e32_v_u32mf2 (base, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e32_v_u32mf2_vl31 )?} 1 } } */
void
test_vsseg7e32_v_u32mf2 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, vuint32mf2_t v5, vuint32mf2_t v6, size_t vl)
{
  vsseg7e32_v_u32mf2 (base, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e32_v_u32mf2 )?} 1 } } */
void
test_vsseg7e32_v_u32mf2_vl31 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, vuint32mf2_t v5, vuint32mf2_t v6)
{
  vsseg7e32_v_u32mf2 (base, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e32_v_u32mf2_vl31 )?} 1 } } */
void
test_vsseg8e32_v_u32mf2 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, vuint32mf2_t v5, vuint32mf2_t v6, vuint32mf2_t v7, size_t vl)
{
  vsseg8e32_v_u32mf2 (base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e32_v_u32mf2 )?} 1 } } */
void
test_vsseg8e32_v_u32mf2_vl31 (uint32_t *base, vuint32mf2_t v0, vuint32mf2_t v1, vuint32mf2_t v2, vuint32mf2_t v3, vuint32mf2_t v4, vuint32mf2_t v5, vuint32mf2_t v6, vuint32mf2_t v7)
{
  vsseg8e32_v_u32mf2 (base, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e32_v_u32mf2_vl31 )?} 1 } } */
void
test_vsseg2e32_v_u32m1 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, size_t vl)
{
  vsseg2e32_v_u32m1 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_u32m1 )?} 1 } } */
void
test_vsseg2e32_v_u32m1_vl31 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1)
{
  vsseg2e32_v_u32m1 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_u32m1_vl31 )?} 1 } } */
void
test_vsseg3e32_v_u32m1 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, size_t vl)
{
  vsseg3e32_v_u32m1 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e32_v_u32m1 )?} 1 } } */
void
test_vsseg3e32_v_u32m1_vl31 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2)
{
  vsseg3e32_v_u32m1 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e32_v_u32m1_vl31 )?} 1 } } */
void
test_vsseg4e32_v_u32m1 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, size_t vl)
{
  vsseg4e32_v_u32m1 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e32_v_u32m1 )?} 1 } } */
void
test_vsseg4e32_v_u32m1_vl31 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3)
{
  vsseg4e32_v_u32m1 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e32_v_u32m1_vl31 )?} 1 } } */
void
test_vsseg5e32_v_u32m1 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, size_t vl)
{
  vsseg5e32_v_u32m1 (base, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e32_v_u32m1 )?} 1 } } */
void
test_vsseg5e32_v_u32m1_vl31 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4)
{
  vsseg5e32_v_u32m1 (base, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg5e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e32_v_u32m1_vl31 )?} 1 } } */
void
test_vsseg6e32_v_u32m1 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, size_t vl)
{
  vsseg6e32_v_u32m1 (base, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e32_v_u32m1 )?} 1 } } */
void
test_vsseg6e32_v_u32m1_vl31 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5)
{
  vsseg6e32_v_u32m1 (base, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg6e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e32_v_u32m1_vl31 )?} 1 } } */
void
test_vsseg7e32_v_u32m1 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, size_t vl)
{
  vsseg7e32_v_u32m1 (base, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e32_v_u32m1 )?} 1 } } */
void
test_vsseg7e32_v_u32m1_vl31 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6)
{
  vsseg7e32_v_u32m1 (base, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg7e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e32_v_u32m1_vl31 )?} 1 } } */
void
test_vsseg8e32_v_u32m1 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7, size_t vl)
{
  vsseg8e32_v_u32m1 (base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e32_v_u32m1 )?} 1 } } */
void
test_vsseg8e32_v_u32m1_vl31 (uint32_t *base, vuint32m1_t v0, vuint32m1_t v1, vuint32m1_t v2, vuint32m1_t v3, vuint32m1_t v4, vuint32m1_t v5, vuint32m1_t v6, vuint32m1_t v7)
{
  vsseg8e32_v_u32m1 (base, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg8e32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e32_v_u32m1_vl31 )?} 1 } } */
void
test_vsseg2e32_v_u32m2 (uint32_t *base, vuint32m2_t v0, vuint32m2_t v1, size_t vl)
{
  vsseg2e32_v_u32m2 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_u32m2 )?} 1 } } */
void
test_vsseg2e32_v_u32m2_vl31 (uint32_t *base, vuint32m2_t v0, vuint32m2_t v1)
{
  vsseg2e32_v_u32m2 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_u32m2_vl31 )?} 1 } } */
void
test_vsseg3e32_v_u32m2 (uint32_t *base, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, size_t vl)
{
  vsseg3e32_v_u32m2 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e32_v_u32m2 )?} 1 } } */
void
test_vsseg3e32_v_u32m2_vl31 (uint32_t *base, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2)
{
  vsseg3e32_v_u32m2 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e32_v_u32m2_vl31 )?} 1 } } */
void
test_vsseg4e32_v_u32m2 (uint32_t *base, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3, size_t vl)
{
  vsseg4e32_v_u32m2 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e32_v_u32m2 )?} 1 } } */
void
test_vsseg4e32_v_u32m2_vl31 (uint32_t *base, vuint32m2_t v0, vuint32m2_t v1, vuint32m2_t v2, vuint32m2_t v3)
{
  vsseg4e32_v_u32m2 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e32_v_u32m2_vl31 )?} 1 } } */
void
test_vsseg2e32_v_u32m4 (uint32_t *base, vuint32m4_t v0, vuint32m4_t v1, size_t vl)
{
  vsseg2e32_v_u32m4 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_u32m4 )?} 1 } } */
void
test_vsseg2e32_v_u32m4_vl31 (uint32_t *base, vuint32m4_t v0, vuint32m4_t v1)
{
  vsseg2e32_v_u32m4 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e32_v_u32m4_vl31 )?} 1 } } */
void
test_vsseg2e64_v_u64m1 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, size_t vl)
{
  vsseg2e64_v_u64m1 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e64_v_u64m1 )?} 1 } } */
void
test_vsseg2e64_v_u64m1_vl31 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1)
{
  vsseg2e64_v_u64m1 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e64_v_u64m1_vl31 )?} 1 } } */
void
test_vsseg3e64_v_u64m1 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, size_t vl)
{
  vsseg3e64_v_u64m1 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e64_v_u64m1 )?} 1 } } */
void
test_vsseg3e64_v_u64m1_vl31 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2)
{
  vsseg3e64_v_u64m1 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e64_v_u64m1_vl31 )?} 1 } } */
void
test_vsseg4e64_v_u64m1 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, size_t vl)
{
  vsseg4e64_v_u64m1 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e64_v_u64m1 )?} 1 } } */
void
test_vsseg4e64_v_u64m1_vl31 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3)
{
  vsseg4e64_v_u64m1 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e64_v_u64m1_vl31 )?} 1 } } */
void
test_vsseg5e64_v_u64m1 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, size_t vl)
{
  vsseg5e64_v_u64m1 (base, v0, v1, v2, v3, v4, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e64_v_u64m1 )?} 1 } } */
void
test_vsseg5e64_v_u64m1_vl31 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4)
{
  vsseg5e64_v_u64m1 (base, v0, v1, v2, v3, v4, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg5e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg5e64_v_u64m1_vl31 )?} 1 } } */
void
test_vsseg6e64_v_u64m1 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, size_t vl)
{
  vsseg6e64_v_u64m1 (base, v0, v1, v2, v3, v4, v5, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e64_v_u64m1 )?} 1 } } */
void
test_vsseg6e64_v_u64m1_vl31 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5)
{
  vsseg6e64_v_u64m1 (base, v0, v1, v2, v3, v4, v5, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg6e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg6e64_v_u64m1_vl31 )?} 1 } } */
void
test_vsseg7e64_v_u64m1 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, size_t vl)
{
  vsseg7e64_v_u64m1 (base, v0, v1, v2, v3, v4, v5, v6, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e64_v_u64m1 )?} 1 } } */
void
test_vsseg7e64_v_u64m1_vl31 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6)
{
  vsseg7e64_v_u64m1 (base, v0, v1, v2, v3, v4, v5, v6, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg7e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg7e64_v_u64m1_vl31 )?} 1 } } */
void
test_vsseg8e64_v_u64m1 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7, size_t vl)
{
  vsseg8e64_v_u64m1 (base, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e64_v_u64m1 )?} 1 } } */
void
test_vsseg8e64_v_u64m1_vl31 (uint64_t *base, vuint64m1_t v0, vuint64m1_t v1, vuint64m1_t v2, vuint64m1_t v3, vuint64m1_t v4, vuint64m1_t v5, vuint64m1_t v6, vuint64m1_t v7)
{
  vsseg8e64_v_u64m1 (base, v0, v1, v2, v3, v4, v5, v6, v7, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg8e64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg8e64_v_u64m1_vl31 )?} 1 } } */
void
test_vsseg2e64_v_u64m2 (uint64_t *base, vuint64m2_t v0, vuint64m2_t v1, size_t vl)
{
  vsseg2e64_v_u64m2 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e64_v_u64m2 )?} 1 } } */
void
test_vsseg2e64_v_u64m2_vl31 (uint64_t *base, vuint64m2_t v0, vuint64m2_t v1)
{
  vsseg2e64_v_u64m2 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e64_v_u64m2_vl31 )?} 1 } } */
void
test_vsseg3e64_v_u64m2 (uint64_t *base, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, size_t vl)
{
  vsseg3e64_v_u64m2 (base, v0, v1, v2, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e64_v_u64m2 )?} 1 } } */
void
test_vsseg3e64_v_u64m2_vl31 (uint64_t *base, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2)
{
  vsseg3e64_v_u64m2 (base, v0, v1, v2, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg3e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg3e64_v_u64m2_vl31 )?} 1 } } */
void
test_vsseg4e64_v_u64m2 (uint64_t *base, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3, size_t vl)
{
  vsseg4e64_v_u64m2 (base, v0, v1, v2, v3, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e64_v_u64m2 )?} 1 } } */
void
test_vsseg4e64_v_u64m2_vl31 (uint64_t *base, vuint64m2_t v0, vuint64m2_t v1, vuint64m2_t v2, vuint64m2_t v3)
{
  vsseg4e64_v_u64m2 (base, v0, v1, v2, v3, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg4e64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg4e64_v_u64m2_vl31 )?} 1 } } */
void
test_vsseg2e64_v_u64m4 (uint64_t *base, vuint64m4_t v0, vuint64m4_t v1, size_t vl)
{
  vsseg2e64_v_u64m4 (base, v0, v1, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e64_v_u64m4 )?} 1 } } */
void
test_vsseg2e64_v_u64m4_vl31 (uint64_t *base, vuint64m4_t v0, vuint64m4_t v1)
{
  vsseg2e64_v_u64m4 (base, v0, v1, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetivli|vsseg.e..?\.v).)*\s+vsseg2e64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsseg2e64_v_u64m4_vl31 )?} 1 } } */
