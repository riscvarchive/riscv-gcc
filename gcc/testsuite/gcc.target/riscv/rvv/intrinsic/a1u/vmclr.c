/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmclr_m_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t
test_vmclr_m_b64(size_t vl)
{
  return vmclr_m_b64(vl);
}

/*
** test_vmclr_m_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t
test_vmclr_m_b64_vl31(size_t vl)
{
  return vmclr_m_b64(31);
}

/*
** test_vmclr_m_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t
test_vmclr_m_b32(size_t vl)
{
  return vmclr_m_b32(vl);
}

/*
** test_vmclr_m_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t
test_vmclr_m_b32_vl31(size_t vl)
{
  return vmclr_m_b32(31);
}

/*
** test_vmclr_m_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t
test_vmclr_m_b16(size_t vl)
{
  return vmclr_m_b16(vl);
}

/*
** test_vmclr_m_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t
test_vmclr_m_b16_vl31(size_t vl)
{
  return vmclr_m_b16(31);
}

/*
** test_vmclr_m_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t
test_vmclr_m_b8(size_t vl)
{
  return vmclr_m_b8(vl);
}

/*
** test_vmclr_m_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t
test_vmclr_m_b8_vl31(size_t vl)
{
  return vmclr_m_b8(31);
}

/*
** test_vmclr_m_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool4_t
test_vmclr_m_b4(size_t vl)
{
  return vmclr_m_b4(vl);
}

/*
** test_vmclr_m_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool4_t
test_vmclr_m_b4_vl31(size_t vl)
{
  return vmclr_m_b4(31);
}

/*
** test_vmclr_m_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool2_t
test_vmclr_m_b2(size_t vl)
{
  return vmclr_m_b2(vl);
}

/*
** test_vmclr_m_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool2_t
test_vmclr_m_b2_vl31(size_t vl)
{
  return vmclr_m_b2(31);
}

/*
** test_vmclr_m_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool1_t
test_vmclr_m_b1(size_t vl)
{
  return vmclr_m_b1(vl);
}

/*
** test_vmclr_m_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool1_t
test_vmclr_m_b1_vl31(size_t vl)
{
  return vmclr_m_b1(31);
}

/*
** test_vmclr_m_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t
test_vmclr_m_b64_vl32(size_t vl)
{
  return vmclr_m_b64(32);
}

/*
** test_vmclr_m_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t
test_vmclr_m_b32_vl32(size_t vl)
{
  return vmclr_m_b32(32);
}

/*
** test_vmclr_m_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t
test_vmclr_m_b16_vl32(size_t vl)
{
  return vmclr_m_b16(32);
}

/*
** test_vmclr_m_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t
test_vmclr_m_b8_vl32(size_t vl)
{
  return vmclr_m_b8(32);
}

/*
** test_vmclr_m_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool4_t
test_vmclr_m_b4_vl32(size_t vl)
{
  return vmclr_m_b4(32);
}

/*
** test_vmclr_m_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool2_t
test_vmclr_m_b2_vl32(size_t vl)
{
  return vmclr_m_b2(32);
}

/*
** test_vmclr_m_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmclr\.m\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool1_t
test_vmclr_m_b1_vl32(size_t vl)
{
  return vmclr_m_b1(32);
}

