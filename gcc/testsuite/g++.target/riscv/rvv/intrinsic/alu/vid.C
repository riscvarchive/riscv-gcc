/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vid_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vid_v_u8mf8(size_t vl)
{
  return vid_v_u8mf8(vl);
}


/*
** test_vid_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vid_v_u8mf4(size_t vl)
{
  return vid_v_u8mf4(vl);
}


/*
** test_vid_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vid_v_u8mf2(size_t vl)
{
  return vid_v_u8mf2(vl);
}


/*
** test_vid_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vid_v_u8m1(size_t vl)
{
  return vid_v_u8m1(vl);
}


/*
** test_vid_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vid_v_u8m2(size_t vl)
{
  return vid_v_u8m2(vl);
}


/*
** test_vid_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vid_v_u8m4(size_t vl)
{
  return vid_v_u8m4(vl);
}


/*
** test_vid_v_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vid_v_u8m8(size_t vl)
{
  return vid_v_u8m8(vl);
}


/*
** test_vid_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vid_v_u16mf4(size_t vl)
{
  return vid_v_u16mf4(vl);
}


/*
** test_vid_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vid_v_u16mf2(size_t vl)
{
  return vid_v_u16mf2(vl);
}


/*
** test_vid_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vid_v_u16m1(size_t vl)
{
  return vid_v_u16m1(vl);
}


/*
** test_vid_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vid_v_u16m2(size_t vl)
{
  return vid_v_u16m2(vl);
}


/*
** test_vid_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vid_v_u16m4(size_t vl)
{
  return vid_v_u16m4(vl);
}


/*
** test_vid_v_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vid_v_u16m8(size_t vl)
{
  return vid_v_u16m8(vl);
}


/*
** test_vid_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vid_v_u32mf2(size_t vl)
{
  return vid_v_u32mf2(vl);
}


/*
** test_vid_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vid_v_u32m1(size_t vl)
{
  return vid_v_u32m1(vl);
}


/*
** test_vid_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vid_v_u32m2(size_t vl)
{
  return vid_v_u32m2(vl);
}


/*
** test_vid_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vid_v_u32m4(size_t vl)
{
  return vid_v_u32m4(vl);
}


/*
** test_vid_v_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vid_v_u32m8(size_t vl)
{
  return vid_v_u32m8(vl);
}


/*
** test_vid_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vid_v_u64m1(size_t vl)
{
  return vid_v_u64m1(vl);
}


/*
** test_vid_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vid_v_u64m2(size_t vl)
{
  return vid_v_u64m2(vl);
}


/*
** test_vid_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vid_v_u64m4(size_t vl)
{
  return vid_v_u64m4(vl);
}


/*
** test_vid_v_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vid_v_u64m8(size_t vl)
{
  return vid_v_u64m8(vl);
}


/*
** test_vid_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vid_v_u8mf8_m(vbool64_t mask, vuint8mf8_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vid_v_u8mf4_m(vbool32_t mask, vuint8mf4_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vid_v_u8mf2_m(vbool16_t mask, vuint8mf2_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vid_v_u8m1_m(vbool8_t mask, vuint8m1_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vid_v_u8m2_m(vbool4_t mask, vuint8m2_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vid_v_u8m4_m(vbool2_t mask, vuint8m4_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vid_v_u8m8_m(vbool1_t mask, vuint8m8_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vid_v_u16mf4_m(vbool64_t mask, vuint16mf4_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vid_v_u16mf2_m(vbool32_t mask, vuint16mf2_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vid_v_u16m1_m(vbool16_t mask, vuint16m1_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vid_v_u16m2_m(vbool8_t mask, vuint16m2_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vid_v_u16m4_m(vbool4_t mask, vuint16m4_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vid_v_u16m8_m(vbool2_t mask, vuint16m8_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vid_v_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vid_v_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vid_v_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vid_v_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vid_v_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vid_v_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vid_v_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vid_v_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vid_v_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, size_t vl)
{
  return vid(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vid_v_u8mf8_ta(size_t vl)
{
  return vid_v_u8mf8_ta(vl);
}


/*
** test_vid_v_u8mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vid_v_u8mf4_ta(size_t vl)
{
  return vid_v_u8mf4_ta(vl);
}


/*
** test_vid_v_u8mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vid_v_u8mf2_ta(size_t vl)
{
  return vid_v_u8mf2_ta(vl);
}


/*
** test_vid_v_u8m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vid_v_u8m1_ta(size_t vl)
{
  return vid_v_u8m1_ta(vl);
}


/*
** test_vid_v_u8m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vid_v_u8m2_ta(size_t vl)
{
  return vid_v_u8m2_ta(vl);
}


/*
** test_vid_v_u8m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vid_v_u8m4_ta(size_t vl)
{
  return vid_v_u8m4_ta(vl);
}


/*
** test_vid_v_u8m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vid_v_u8m8_ta(size_t vl)
{
  return vid_v_u8m8_ta(vl);
}


/*
** test_vid_v_u16mf4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vid_v_u16mf4_ta(size_t vl)
{
  return vid_v_u16mf4_ta(vl);
}


/*
** test_vid_v_u16mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vid_v_u16mf2_ta(size_t vl)
{
  return vid_v_u16mf2_ta(vl);
}


/*
** test_vid_v_u16m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vid_v_u16m1_ta(size_t vl)
{
  return vid_v_u16m1_ta(vl);
}


/*
** test_vid_v_u16m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vid_v_u16m2_ta(size_t vl)
{
  return vid_v_u16m2_ta(vl);
}


/*
** test_vid_v_u16m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vid_v_u16m4_ta(size_t vl)
{
  return vid_v_u16m4_ta(vl);
}


/*
** test_vid_v_u16m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vid_v_u16m8_ta(size_t vl)
{
  return vid_v_u16m8_ta(vl);
}


/*
** test_vid_v_u32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vid_v_u32mf2_ta(size_t vl)
{
  return vid_v_u32mf2_ta(vl);
}


/*
** test_vid_v_u32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vid_v_u32m1_ta(size_t vl)
{
  return vid_v_u32m1_ta(vl);
}


/*
** test_vid_v_u32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vid_v_u32m2_ta(size_t vl)
{
  return vid_v_u32m2_ta(vl);
}


/*
** test_vid_v_u32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vid_v_u32m4_ta(size_t vl)
{
  return vid_v_u32m4_ta(vl);
}


/*
** test_vid_v_u32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vid_v_u32m8_ta(size_t vl)
{
  return vid_v_u32m8_ta(vl);
}


/*
** test_vid_v_u64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vid_v_u64m1_ta(size_t vl)
{
  return vid_v_u64m1_ta(vl);
}


/*
** test_vid_v_u64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vid_v_u64m2_ta(size_t vl)
{
  return vid_v_u64m2_ta(vl);
}


/*
** test_vid_v_u64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vid_v_u64m4_ta(size_t vl)
{
  return vid_v_u64m4_ta(vl);
}


/*
** test_vid_v_u64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vid_v_u64m8_ta(size_t vl)
{
  return vid_v_u64m8_ta(vl);
}


/*
** test_vid_v_u8mf8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vid_v_u8mf8_tu(vuint8mf8_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u8mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vid_v_u8mf4_tu(vuint8mf4_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u8mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vid_v_u8mf2_tu(vuint8mf2_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u8m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vid_v_u8m1_tu(vuint8m1_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u8m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vid_v_u8m2_tu(vuint8m2_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u8m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vid_v_u8m4_tu(vuint8m4_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u8m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vid_v_u8m8_tu(vuint8m8_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u16mf4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vid_v_u16mf4_tu(vuint16mf4_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u16mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vid_v_u16mf2_tu(vuint16mf2_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u16m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vid_v_u16m1_tu(vuint16m1_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u16m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vid_v_u16m2_tu(vuint16m2_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u16m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vid_v_u16m4_tu(vuint16m4_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u16m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vid_v_u16m8_tu(vuint16m8_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vid_v_u32mf2_tu(vuint32mf2_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vid_v_u32m1_tu(vuint32m1_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vid_v_u32m2_tu(vuint32m2_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vid_v_u32m4_tu(vuint32m4_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vid_v_u32m8_tu(vuint32m8_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vid_v_u64m1_tu(vuint64m1_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vid_v_u64m2_tu(vuint64m2_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vid_v_u64m4_tu(vuint64m4_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]
**  ...
**	vid\.v\s+(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vid_v_u64m8_tu(vuint64m8_t dest, size_t vl)
{
  return vid_tu(dest, vl);
}


/*
** test_vid_v_u8mf8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vid_v_u8mf8_tama(vbool64_t mask, vuint8mf8_t maskedoff, size_t vl)
{
  return vid_v_u8mf8_tama(mask, vl);
}


/*
** test_vid_v_u8mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vid_v_u8mf4_tama(vbool32_t mask, vuint8mf4_t maskedoff, size_t vl)
{
  return vid_v_u8mf4_tama(mask, vl);
}


/*
** test_vid_v_u8mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vid_v_u8mf2_tama(vbool16_t mask, vuint8mf2_t maskedoff, size_t vl)
{
  return vid_v_u8mf2_tama(mask, vl);
}


/*
** test_vid_v_u8m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vid_v_u8m1_tama(vbool8_t mask, vuint8m1_t maskedoff, size_t vl)
{
  return vid_v_u8m1_tama(mask, vl);
}


/*
** test_vid_v_u8m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vid_v_u8m2_tama(vbool4_t mask, vuint8m2_t maskedoff, size_t vl)
{
  return vid_v_u8m2_tama(mask, vl);
}


/*
** test_vid_v_u8m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vid_v_u8m4_tama(vbool2_t mask, vuint8m4_t maskedoff, size_t vl)
{
  return vid_v_u8m4_tama(mask, vl);
}


/*
** test_vid_v_u8m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vid_v_u8m8_tama(vbool1_t mask, vuint8m8_t maskedoff, size_t vl)
{
  return vid_v_u8m8_tama(mask, vl);
}


/*
** test_vid_v_u16mf4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vid_v_u16mf4_tama(vbool64_t mask, vuint16mf4_t maskedoff, size_t vl)
{
  return vid_v_u16mf4_tama(mask, vl);
}


/*
** test_vid_v_u16mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vid_v_u16mf2_tama(vbool32_t mask, vuint16mf2_t maskedoff, size_t vl)
{
  return vid_v_u16mf2_tama(mask, vl);
}


/*
** test_vid_v_u16m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vid_v_u16m1_tama(vbool16_t mask, vuint16m1_t maskedoff, size_t vl)
{
  return vid_v_u16m1_tama(mask, vl);
}


/*
** test_vid_v_u16m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vid_v_u16m2_tama(vbool8_t mask, vuint16m2_t maskedoff, size_t vl)
{
  return vid_v_u16m2_tama(mask, vl);
}


/*
** test_vid_v_u16m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vid_v_u16m4_tama(vbool4_t mask, vuint16m4_t maskedoff, size_t vl)
{
  return vid_v_u16m4_tama(mask, vl);
}


/*
** test_vid_v_u16m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vid_v_u16m8_tama(vbool2_t mask, vuint16m8_t maskedoff, size_t vl)
{
  return vid_v_u16m8_tama(mask, vl);
}


/*
** test_vid_v_u32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vid_v_u32mf2_tama(vbool64_t mask, vuint32mf2_t maskedoff, size_t vl)
{
  return vid_v_u32mf2_tama(mask, vl);
}


/*
** test_vid_v_u32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vid_v_u32m1_tama(vbool32_t mask, vuint32m1_t maskedoff, size_t vl)
{
  return vid_v_u32m1_tama(mask, vl);
}


/*
** test_vid_v_u32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vid_v_u32m2_tama(vbool16_t mask, vuint32m2_t maskedoff, size_t vl)
{
  return vid_v_u32m2_tama(mask, vl);
}


/*
** test_vid_v_u32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vid_v_u32m4_tama(vbool8_t mask, vuint32m4_t maskedoff, size_t vl)
{
  return vid_v_u32m4_tama(mask, vl);
}


/*
** test_vid_v_u32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vid_v_u32m8_tama(vbool4_t mask, vuint32m8_t maskedoff, size_t vl)
{
  return vid_v_u32m8_tama(mask, vl);
}


/*
** test_vid_v_u64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vid_v_u64m1_tama(vbool64_t mask, vuint64m1_t maskedoff, size_t vl)
{
  return vid_v_u64m1_tama(mask, vl);
}


/*
** test_vid_v_u64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vid_v_u64m2_tama(vbool32_t mask, vuint64m2_t maskedoff, size_t vl)
{
  return vid_v_u64m2_tama(mask, vl);
}


/*
** test_vid_v_u64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vid_v_u64m4_tama(vbool16_t mask, vuint64m4_t maskedoff, size_t vl)
{
  return vid_v_u64m4_tama(mask, vl);
}


/*
** test_vid_v_u64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vid_v_u64m8_tama(vbool8_t mask, vuint64m8_t maskedoff, size_t vl)
{
  return vid_v_u64m8_tama(mask, vl);
}


/*
** test_vid_v_u8mf8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vid_v_u8mf8_tamu(vbool64_t mask, vuint8mf8_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vid_v_u8mf4_tamu(vbool32_t mask, vuint8mf4_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vid_v_u8mf2_tamu(vbool16_t mask, vuint8mf2_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vid_v_u8m1_tamu(vbool8_t mask, vuint8m1_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vid_v_u8m2_tamu(vbool4_t mask, vuint8m2_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vid_v_u8m4_tamu(vbool2_t mask, vuint8m4_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vid_v_u8m8_tamu(vbool1_t mask, vuint8m8_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16mf4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vid_v_u16mf4_tamu(vbool64_t mask, vuint16mf4_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vid_v_u16mf2_tamu(vbool32_t mask, vuint16mf2_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vid_v_u16m1_tamu(vbool16_t mask, vuint16m1_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vid_v_u16m2_tamu(vbool8_t mask, vuint16m2_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vid_v_u16m4_tamu(vbool4_t mask, vuint16m4_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vid_v_u16m8_tamu(vbool2_t mask, vuint16m8_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vid_v_u32mf2_tamu(vbool64_t mask, vuint32mf2_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vid_v_u32m1_tamu(vbool32_t mask, vuint32m1_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vid_v_u32m2_tamu(vbool16_t mask, vuint32m2_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vid_v_u32m4_tamu(vbool8_t mask, vuint32m4_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vid_v_u32m8_tamu(vbool4_t mask, vuint32m8_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vid_v_u64m1_tamu(vbool64_t mask, vuint64m1_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vid_v_u64m2_tamu(vbool32_t mask, vuint64m2_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vid_v_u64m4_tamu(vbool16_t mask, vuint64m4_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vid_v_u64m8_tamu(vbool8_t mask, vuint64m8_t maskedoff, size_t vl)
{
  return vid_tamu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vid_v_u8mf8_tuma(vbool64_t mask, vuint8mf8_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vid_v_u8mf4_tuma(vbool32_t mask, vuint8mf4_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vid_v_u8mf2_tuma(vbool16_t mask, vuint8mf2_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vid_v_u8m1_tuma(vbool8_t mask, vuint8m1_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vid_v_u8m2_tuma(vbool4_t mask, vuint8m2_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vid_v_u8m4_tuma(vbool2_t mask, vuint8m4_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vid_v_u8m8_tuma(vbool1_t mask, vuint8m8_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u16mf4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vid_v_u16mf4_tuma(vbool64_t mask, vuint16mf4_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u16mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vid_v_u16mf2_tuma(vbool32_t mask, vuint16mf2_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vid_v_u16m1_tuma(vbool16_t mask, vuint16m1_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vid_v_u16m2_tuma(vbool8_t mask, vuint16m2_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vid_v_u16m4_tuma(vbool4_t mask, vuint16m4_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vid_v_u16m8_tuma(vbool2_t mask, vuint16m8_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vid_v_u32mf2_tuma(vbool64_t mask, vuint32mf2_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vid_v_u32m1_tuma(vbool32_t mask, vuint32m1_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vid_v_u32m2_tuma(vbool16_t mask, vuint32m2_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vid_v_u32m4_tuma(vbool8_t mask, vuint32m4_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vid_v_u32m8_tuma(vbool4_t mask, vuint32m8_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vid_v_u64m1_tuma(vbool64_t mask, vuint64m1_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vid_v_u64m2_tuma(vbool32_t mask, vuint64m2_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vid_v_u64m4_tuma(vbool16_t mask, vuint64m4_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vid_v_u64m8_tuma(vbool8_t mask, vuint64m8_t maskedoff, size_t vl)
{
  return vid_tuma(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf8_t
test_vid_v_u8mf8_tumu(vbool64_t mask, vuint8mf8_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf4_t
test_vid_v_u8mf4_tumu(vbool32_t mask, vuint8mf4_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8mf2_t
test_vid_v_u8mf2_tumu(vbool16_t mask, vuint8mf2_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m1_t
test_vid_v_u8m1_tumu(vbool8_t mask, vuint8m1_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m2_t
test_vid_v_u8m2_tumu(vbool4_t mask, vuint8m2_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m4_t
test_vid_v_u8m4_tumu(vbool2_t mask, vuint8m4_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u8m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint8m8_t
test_vid_v_u8m8_tumu(vbool1_t mask, vuint8m8_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16mf4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf4_t
test_vid_v_u16mf4_tumu(vbool64_t mask, vuint16mf4_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16mf2_t
test_vid_v_u16mf2_tumu(vbool32_t mask, vuint16mf2_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m1_t
test_vid_v_u16m1_tumu(vbool16_t mask, vuint16m1_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m2_t
test_vid_v_u16m2_tumu(vbool8_t mask, vuint16m2_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m4_t
test_vid_v_u16m4_tumu(vbool4_t mask, vuint16m4_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u16m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint16m8_t
test_vid_v_u16m8_tumu(vbool2_t mask, vuint16m8_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32mf2_t
test_vid_v_u32mf2_tumu(vbool64_t mask, vuint32mf2_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m1_t
test_vid_v_u32m1_tumu(vbool32_t mask, vuint32m1_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m2_t
test_vid_v_u32m2_tumu(vbool16_t mask, vuint32m2_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m4_t
test_vid_v_u32m4_tumu(vbool8_t mask, vuint32m4_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint32m8_t
test_vid_v_u32m8_tumu(vbool4_t mask, vuint32m8_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m1_t
test_vid_v_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m2_t
test_vid_v_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m4_t
test_vid_v_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}


/*
** test_vid_v_u64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vid\.v\s+(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
extern "C" vuint64m8_t
test_vid_v_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, size_t vl)
{
  return vid_tumu(mask, maskedoff, vl);
}

