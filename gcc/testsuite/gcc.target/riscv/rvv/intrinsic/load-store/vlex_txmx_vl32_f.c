
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4_t
test_vle16_v_f16mf4_tama_vl32 (vbool64_t mask, float16_t *base)
{
  return vle16_v_f16mf4_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf4_tama_vl32 )?} 1 } } */
vfloat16mf4_t
test_vle16_v_f16mf4_tamu_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base)
{
  return vle16_v_f16mf4_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf4_tamu_vl32 )?} 1 } } */
vfloat16mf4_t
test_vle16_v_f16mf4_tuma_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base)
{
  return vle16_v_f16mf4_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf4_tuma_vl32 )?} 1 } } */
vfloat16mf4_t
test_vle16_v_f16mf4_tumu_vl32 (vbool64_t mask, vfloat16mf4_t dest, float16_t *base)
{
  return vle16_v_f16mf4_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf4_tumu_vl32 )?} 1 } } */
vfloat16mf2_t
test_vle16_v_f16mf2_tama_vl32 (vbool32_t mask, float16_t *base)
{
  return vle16_v_f16mf2_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf2_tama_vl32 )?} 1 } } */
vfloat16mf2_t
test_vle16_v_f16mf2_tamu_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base)
{
  return vle16_v_f16mf2_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf2_tamu_vl32 )?} 1 } } */
vfloat16mf2_t
test_vle16_v_f16mf2_tuma_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base)
{
  return vle16_v_f16mf2_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf2_tuma_vl32 )?} 1 } } */
vfloat16mf2_t
test_vle16_v_f16mf2_tumu_vl32 (vbool32_t mask, vfloat16mf2_t dest, float16_t *base)
{
  return vle16_v_f16mf2_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16mf2_tumu_vl32 )?} 1 } } */
vfloat16m1_t
test_vle16_v_f16m1_tama_vl32 (vbool16_t mask, float16_t *base)
{
  return vle16_v_f16m1_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m1_tama_vl32 )?} 1 } } */
vfloat16m1_t
test_vle16_v_f16m1_tamu_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base)
{
  return vle16_v_f16m1_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m1_tamu_vl32 )?} 1 } } */
vfloat16m1_t
test_vle16_v_f16m1_tuma_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base)
{
  return vle16_v_f16m1_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m1_tuma_vl32 )?} 1 } } */
vfloat16m1_t
test_vle16_v_f16m1_tumu_vl32 (vbool16_t mask, vfloat16m1_t dest, float16_t *base)
{
  return vle16_v_f16m1_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m1_tumu_vl32 )?} 1 } } */
vfloat16m2_t
test_vle16_v_f16m2_tama_vl32 (vbool8_t mask, float16_t *base)
{
  return vle16_v_f16m2_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m2_tama_vl32 )?} 1 } } */
vfloat16m2_t
test_vle16_v_f16m2_tamu_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base)
{
  return vle16_v_f16m2_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m2_tamu_vl32 )?} 1 } } */
vfloat16m2_t
test_vle16_v_f16m2_tuma_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base)
{
  return vle16_v_f16m2_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m2_tuma_vl32 )?} 1 } } */
vfloat16m2_t
test_vle16_v_f16m2_tumu_vl32 (vbool8_t mask, vfloat16m2_t dest, float16_t *base)
{
  return vle16_v_f16m2_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m2_tumu_vl32 )?} 1 } } */
vfloat16m4_t
test_vle16_v_f16m4_tama_vl32 (vbool4_t mask, float16_t *base)
{
  return vle16_v_f16m4_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m4_tama_vl32 )?} 1 } } */
vfloat16m4_t
test_vle16_v_f16m4_tamu_vl32 (vbool4_t mask, vfloat16m4_t dest, float16_t *base)
{
  return vle16_v_f16m4_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m4_tamu_vl32 )?} 1 } } */
vfloat16m4_t
test_vle16_v_f16m4_tuma_vl32 (vbool4_t mask, vfloat16m4_t dest, float16_t *base)
{
  return vle16_v_f16m4_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m4_tuma_vl32 )?} 1 } } */
vfloat16m4_t
test_vle16_v_f16m4_tumu_vl32 (vbool4_t mask, vfloat16m4_t dest, float16_t *base)
{
  return vle16_v_f16m4_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m4_tumu_vl32 )?} 1 } } */
vfloat16m8_t
test_vle16_v_f16m8_tama_vl32 (vbool2_t mask, float16_t *base)
{
  return vle16_v_f16m8_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m8_tama_vl32 )?} 1 } } */
vfloat16m8_t
test_vle16_v_f16m8_tamu_vl32 (vbool2_t mask, vfloat16m8_t dest, float16_t *base)
{
  return vle16_v_f16m8_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m8_tamu_vl32 )?} 1 } } */
vfloat16m8_t
test_vle16_v_f16m8_tuma_vl32 (vbool2_t mask, vfloat16m8_t dest, float16_t *base)
{
  return vle16_v_f16m8_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m8_tuma_vl32 )?} 1 } } */
vfloat16m8_t
test_vle16_v_f16m8_tumu_vl32 (vbool2_t mask, vfloat16m8_t dest, float16_t *base)
{
  return vle16_v_f16m8_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16_v_f16m8_tumu_vl32 )?} 1 } } */
vfloat32mf2_t
test_vle32_v_f32mf2_tama_vl32 (vbool64_t mask, float32_t *base)
{
  return vle32_v_f32mf2_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32mf2_tama_vl32 )?} 1 } } */
vfloat32mf2_t
test_vle32_v_f32mf2_tamu_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base)
{
  return vle32_v_f32mf2_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32mf2_tamu_vl32 )?} 1 } } */
vfloat32mf2_t
test_vle32_v_f32mf2_tuma_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base)
{
  return vle32_v_f32mf2_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32mf2_tuma_vl32 )?} 1 } } */
vfloat32mf2_t
test_vle32_v_f32mf2_tumu_vl32 (vbool64_t mask, vfloat32mf2_t dest, float32_t *base)
{
  return vle32_v_f32mf2_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32mf2_tumu_vl32 )?} 1 } } */
vfloat32m1_t
test_vle32_v_f32m1_tama_vl32 (vbool32_t mask, float32_t *base)
{
  return vle32_v_f32m1_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m1_tama_vl32 )?} 1 } } */
vfloat32m1_t
test_vle32_v_f32m1_tamu_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base)
{
  return vle32_v_f32m1_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m1_tamu_vl32 )?} 1 } } */
vfloat32m1_t
test_vle32_v_f32m1_tuma_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base)
{
  return vle32_v_f32m1_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m1_tuma_vl32 )?} 1 } } */
vfloat32m1_t
test_vle32_v_f32m1_tumu_vl32 (vbool32_t mask, vfloat32m1_t dest, float32_t *base)
{
  return vle32_v_f32m1_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m1_tumu_vl32 )?} 1 } } */
vfloat32m2_t
test_vle32_v_f32m2_tama_vl32 (vbool16_t mask, float32_t *base)
{
  return vle32_v_f32m2_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m2_tama_vl32 )?} 1 } } */
vfloat32m2_t
test_vle32_v_f32m2_tamu_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base)
{
  return vle32_v_f32m2_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m2_tamu_vl32 )?} 1 } } */
vfloat32m2_t
test_vle32_v_f32m2_tuma_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base)
{
  return vle32_v_f32m2_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m2_tuma_vl32 )?} 1 } } */
vfloat32m2_t
test_vle32_v_f32m2_tumu_vl32 (vbool16_t mask, vfloat32m2_t dest, float32_t *base)
{
  return vle32_v_f32m2_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m2_tumu_vl32 )?} 1 } } */
vfloat32m4_t
test_vle32_v_f32m4_tama_vl32 (vbool8_t mask, float32_t *base)
{
  return vle32_v_f32m4_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m4_tama_vl32 )?} 1 } } */
vfloat32m4_t
test_vle32_v_f32m4_tamu_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base)
{
  return vle32_v_f32m4_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m4_tamu_vl32 )?} 1 } } */
vfloat32m4_t
test_vle32_v_f32m4_tuma_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base)
{
  return vle32_v_f32m4_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m4_tuma_vl32 )?} 1 } } */
vfloat32m4_t
test_vle32_v_f32m4_tumu_vl32 (vbool8_t mask, vfloat32m4_t dest, float32_t *base)
{
  return vle32_v_f32m4_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m4_tumu_vl32 )?} 1 } } */
vfloat32m8_t
test_vle32_v_f32m8_tama_vl32 (vbool4_t mask, float32_t *base)
{
  return vle32_v_f32m8_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m8_tama_vl32 )?} 1 } } */
vfloat32m8_t
test_vle32_v_f32m8_tamu_vl32 (vbool4_t mask, vfloat32m8_t dest, float32_t *base)
{
  return vle32_v_f32m8_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m8_tamu_vl32 )?} 1 } } */
vfloat32m8_t
test_vle32_v_f32m8_tuma_vl32 (vbool4_t mask, vfloat32m8_t dest, float32_t *base)
{
  return vle32_v_f32m8_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m8_tuma_vl32 )?} 1 } } */
vfloat32m8_t
test_vle32_v_f32m8_tumu_vl32 (vbool4_t mask, vfloat32m8_t dest, float32_t *base)
{
  return vle32_v_f32m8_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32_v_f32m8_tumu_vl32 )?} 1 } } */
vfloat64m1_t
test_vle64_v_f64m1_tama_vl32 (vbool64_t mask, float64_t *base)
{
  return vle64_v_f64m1_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m1_tama_vl32 )?} 1 } } */
vfloat64m1_t
test_vle64_v_f64m1_tamu_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base)
{
  return vle64_v_f64m1_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m1_tamu_vl32 )?} 1 } } */
vfloat64m1_t
test_vle64_v_f64m1_tuma_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base)
{
  return vle64_v_f64m1_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m1_tuma_vl32 )?} 1 } } */
vfloat64m1_t
test_vle64_v_f64m1_tumu_vl32 (vbool64_t mask, vfloat64m1_t dest, float64_t *base)
{
  return vle64_v_f64m1_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m1_tumu_vl32 )?} 1 } } */
vfloat64m2_t
test_vle64_v_f64m2_tama_vl32 (vbool32_t mask, float64_t *base)
{
  return vle64_v_f64m2_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m2_tama_vl32 )?} 1 } } */
vfloat64m2_t
test_vle64_v_f64m2_tamu_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base)
{
  return vle64_v_f64m2_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m2_tamu_vl32 )?} 1 } } */
vfloat64m2_t
test_vle64_v_f64m2_tuma_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base)
{
  return vle64_v_f64m2_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m2_tuma_vl32 )?} 1 } } */
vfloat64m2_t
test_vle64_v_f64m2_tumu_vl32 (vbool32_t mask, vfloat64m2_t dest, float64_t *base)
{
  return vle64_v_f64m2_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m2_tumu_vl32 )?} 1 } } */
vfloat64m4_t
test_vle64_v_f64m4_tama_vl32 (vbool16_t mask, float64_t *base)
{
  return vle64_v_f64m4_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m4_tama_vl32 )?} 1 } } */
vfloat64m4_t
test_vle64_v_f64m4_tamu_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base)
{
  return vle64_v_f64m4_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m4_tamu_vl32 )?} 1 } } */
vfloat64m4_t
test_vle64_v_f64m4_tuma_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base)
{
  return vle64_v_f64m4_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m4_tuma_vl32 )?} 1 } } */
vfloat64m4_t
test_vle64_v_f64m4_tumu_vl32 (vbool16_t mask, vfloat64m4_t dest, float64_t *base)
{
  return vle64_v_f64m4_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m4_tumu_vl32 )?} 1 } } */
vfloat64m8_t
test_vle64_v_f64m8_tama_vl32 (vbool8_t mask, float64_t *base)
{
  return vle64_v_f64m8_tama (mask, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m8_tama_vl32 )?} 1 } } */
vfloat64m8_t
test_vle64_v_f64m8_tamu_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base)
{
  return vle64_v_f64m8_tamu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m8_tamu_vl32 )?} 1 } } */
vfloat64m8_t
test_vle64_v_f64m8_tuma_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base)
{
  return vle64_v_f64m8_tuma (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m8_tuma_vl32 )?} 1 } } */
vfloat64m8_t
test_vle64_v_f64m8_tumu_vl32 (vbool8_t mask, vfloat64m8_t dest, float64_t *base)
{
  return vle64_v_f64m8_tumu (mask, dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64_v_f64m8_tumu_vl32 )?} 1 } } */
