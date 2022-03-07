
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8mf8_t
test_vid_v_u8mf8_vl32(size_t vl)
{
  return vid_v_u8mf8(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vid_v_u8mf8_vl32 )?} 1 } } */

vuint8mf4_t
test_vid_v_u8mf4_vl32(size_t vl)
{
  return vid_v_u8mf4(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vid_v_u8mf4_vl32 )?} 1 } } */

vuint8mf2_t
test_vid_v_u8mf2_vl32(size_t vl)
{
  return vid_v_u8mf2(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vid_v_u8mf2_vl32 )?} 1 } } */

vuint8m1_t
test_vid_v_u8m1_vl32(size_t vl)
{
  return vid_v_u8m1(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vid_v_u8m1_vl32 )?} 1 } } */

vuint8m2_t
test_vid_v_u8m2_vl32(size_t vl)
{
  return vid_v_u8m2(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vid_v_u8m2_vl32 )?} 1 } } */

vuint8m4_t
test_vid_v_u8m4_vl32(size_t vl)
{
  return vid_v_u8m4(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[048]|v1[26]|v2[048])\n(?: test_vid_v_u8m4_vl32 )?} 1 } } */

vuint8m8_t
test_vid_v_u8m8_vl32(size_t vl)
{
  return vid_v_u8m8(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[08]|v16|v24)\n(?: test_vid_v_u8m8_vl32 )?} 1 } } */

vuint16mf4_t
test_vid_v_u16mf4_vl32(size_t vl)
{
  return vid_v_u16mf4(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vid_v_u16mf4_vl32 )?} 1 } } */

vuint16mf2_t
test_vid_v_u16mf2_vl32(size_t vl)
{
  return vid_v_u16mf2(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vid_v_u16mf2_vl32 )?} 1 } } */

vuint16m1_t
test_vid_v_u16m1_vl32(size_t vl)
{
  return vid_v_u16m1(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vid_v_u16m1_vl32 )?} 1 } } */

vuint16m2_t
test_vid_v_u16m2_vl32(size_t vl)
{
  return vid_v_u16m2(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vid_v_u16m2_vl32 )?} 1 } } */

vuint16m4_t
test_vid_v_u16m4_vl32(size_t vl)
{
  return vid_v_u16m4(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[048]|v1[26]|v2[048])\n(?: test_vid_v_u16m4_vl32 )?} 1 } } */

vuint16m8_t
test_vid_v_u16m8_vl32(size_t vl)
{
  return vid_v_u16m8(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[08]|v16|v24)\n(?: test_vid_v_u16m8_vl32 )?} 1 } } */

vuint32mf2_t
test_vid_v_u32mf2_vl32(size_t vl)
{
  return vid_v_u32mf2(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vid_v_u32mf2_vl32 )?} 1 } } */

vuint32m1_t
test_vid_v_u32m1_vl32(size_t vl)
{
  return vid_v_u32m1(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vid_v_u32m1_vl32 )?} 1 } } */

vuint32m2_t
test_vid_v_u32m2_vl32(size_t vl)
{
  return vid_v_u32m2(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vid_v_u32m2_vl32 )?} 1 } } */

vuint32m4_t
test_vid_v_u32m4_vl32(size_t vl)
{
  return vid_v_u32m4(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[048]|v1[26]|v2[048])\n(?: test_vid_v_u32m4_vl32 )?} 1 } } */

vuint32m8_t
test_vid_v_u32m8_vl32(size_t vl)
{
  return vid_v_u32m8(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[08]|v16|v24)\n(?: test_vid_v_u32m8_vl32 )?} 1 } } */

vuint64m1_t
test_vid_v_u64m1_vl32(size_t vl)
{
  return vid_v_u64m1(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vid_v_u64m1_vl32 )?} 1 } } */

vuint64m2_t
test_vid_v_u64m2_vl32(size_t vl)
{
  return vid_v_u64m2(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vid_v_u64m2_vl32 )?} 1 } } */

vuint64m4_t
test_vid_v_u64m4_vl32(size_t vl)
{
  return vid_v_u64m4(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[048]|v1[26]|v2[048])\n(?: test_vid_v_u64m4_vl32 )?} 1 } } */

vuint64m8_t
test_vid_v_u64m8_vl32(size_t vl)
{
  return vid_v_u64m8(32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]\s+(?:(?!vsetvli|vid\.v).)*\s+vid\.v\s+(?:v[08]|v16|v24)\n(?: test_vid_v_u64m8_vl32 )?} 1 } } */
