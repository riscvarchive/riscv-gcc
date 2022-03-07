
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vfloat16mf4_t
test_vle16ff_v_f16mf4_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16mf4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16mf4_ta )?} 1 } } */
vfloat16mf4_t
test_vle16ff_v_f16mf4_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16mf4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16mf4_ta_vl31 )?} 1 } } */
vfloat16mf4_t
test_vle16ff_v_f16mf4_tu (vfloat16mf4_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16mf4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16mf4_tu )?} 1 } } */
vfloat16mf4_t
test_vle16ff_v_f16mf4_tu_vl31 (vfloat16mf4_t dest, float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16mf4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16mf4_tu_vl31 )?} 1 } } */
vfloat16mf2_t
test_vle16ff_v_f16mf2_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16mf2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16mf2_ta )?} 1 } } */
vfloat16mf2_t
test_vle16ff_v_f16mf2_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16mf2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16mf2_ta_vl31 )?} 1 } } */
vfloat16mf2_t
test_vle16ff_v_f16mf2_tu (vfloat16mf2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16mf2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16mf2_tu )?} 1 } } */
vfloat16mf2_t
test_vle16ff_v_f16mf2_tu_vl31 (vfloat16mf2_t dest, float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16mf2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16mf2_tu_vl31 )?} 1 } } */
vfloat16m1_t
test_vle16ff_v_f16m1_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16m1_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m1_ta )?} 1 } } */
vfloat16m1_t
test_vle16ff_v_f16m1_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16m1_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m1_ta_vl31 )?} 1 } } */
vfloat16m1_t
test_vle16ff_v_f16m1_tu (vfloat16m1_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16m1_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m1_tu )?} 1 } } */
vfloat16m1_t
test_vle16ff_v_f16m1_tu_vl31 (vfloat16m1_t dest, float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16m1_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m1_tu_vl31 )?} 1 } } */
vfloat16m2_t
test_vle16ff_v_f16m2_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16m2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m2_ta )?} 1 } } */
vfloat16m2_t
test_vle16ff_v_f16m2_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16m2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m2_ta_vl31 )?} 1 } } */
vfloat16m2_t
test_vle16ff_v_f16m2_tu (vfloat16m2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16m2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m2_tu )?} 1 } } */
vfloat16m2_t
test_vle16ff_v_f16m2_tu_vl31 (vfloat16m2_t dest, float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16m2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m2_tu_vl31 )?} 1 } } */
vfloat16m4_t
test_vle16ff_v_f16m4_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16m4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m4_ta )?} 1 } } */
vfloat16m4_t
test_vle16ff_v_f16m4_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16m4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m4_ta_vl31 )?} 1 } } */
vfloat16m4_t
test_vle16ff_v_f16m4_tu (vfloat16m4_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16m4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m4_tu )?} 1 } } */
vfloat16m4_t
test_vle16ff_v_f16m4_tu_vl31 (vfloat16m4_t dest, float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16m4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m4_tu_vl31 )?} 1 } } */
vfloat16m8_t
test_vle16ff_v_f16m8_ta (float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16m8_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m8_ta )?} 1 } } */
vfloat16m8_t
test_vle16ff_v_f16m8_ta_vl31 (float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16m8_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m8_ta_vl31 )?} 1 } } */
vfloat16m8_t
test_vle16ff_v_f16m8_tu (vfloat16m8_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vle16ff_v_f16m8_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m8_tu )?} 1 } } */
vfloat16m8_t
test_vle16ff_v_f16m8_tu_vl31 (vfloat16m8_t dest, float16_t *base, size_t *new_vl)
{
  return vle16ff_v_f16m8_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16ff_v_f16m8_tu_vl31 )?} 1 } } */
vfloat32mf2_t
test_vle32ff_v_f32mf2_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vle32ff_v_f32mf2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32mf2_ta )?} 1 } } */
vfloat32mf2_t
test_vle32ff_v_f32mf2_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vle32ff_v_f32mf2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32mf2_ta_vl31 )?} 1 } } */
vfloat32mf2_t
test_vle32ff_v_f32mf2_tu (vfloat32mf2_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vle32ff_v_f32mf2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32mf2_tu )?} 1 } } */
vfloat32mf2_t
test_vle32ff_v_f32mf2_tu_vl31 (vfloat32mf2_t dest, float32_t *base, size_t *new_vl)
{
  return vle32ff_v_f32mf2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32mf2_tu_vl31 )?} 1 } } */
vfloat32m1_t
test_vle32ff_v_f32m1_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vle32ff_v_f32m1_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m1_ta )?} 1 } } */
vfloat32m1_t
test_vle32ff_v_f32m1_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vle32ff_v_f32m1_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m1_ta_vl31 )?} 1 } } */
vfloat32m1_t
test_vle32ff_v_f32m1_tu (vfloat32m1_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vle32ff_v_f32m1_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m1_tu )?} 1 } } */
vfloat32m1_t
test_vle32ff_v_f32m1_tu_vl31 (vfloat32m1_t dest, float32_t *base, size_t *new_vl)
{
  return vle32ff_v_f32m1_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m1_tu_vl31 )?} 1 } } */
vfloat32m2_t
test_vle32ff_v_f32m2_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vle32ff_v_f32m2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m2_ta )?} 1 } } */
vfloat32m2_t
test_vle32ff_v_f32m2_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vle32ff_v_f32m2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m2_ta_vl31 )?} 1 } } */
vfloat32m2_t
test_vle32ff_v_f32m2_tu (vfloat32m2_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vle32ff_v_f32m2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m2_tu )?} 1 } } */
vfloat32m2_t
test_vle32ff_v_f32m2_tu_vl31 (vfloat32m2_t dest, float32_t *base, size_t *new_vl)
{
  return vle32ff_v_f32m2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m2_tu_vl31 )?} 1 } } */
vfloat32m4_t
test_vle32ff_v_f32m4_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vle32ff_v_f32m4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m4_ta )?} 1 } } */
vfloat32m4_t
test_vle32ff_v_f32m4_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vle32ff_v_f32m4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m4_ta_vl31 )?} 1 } } */
vfloat32m4_t
test_vle32ff_v_f32m4_tu (vfloat32m4_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vle32ff_v_f32m4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m4_tu )?} 1 } } */
vfloat32m4_t
test_vle32ff_v_f32m4_tu_vl31 (vfloat32m4_t dest, float32_t *base, size_t *new_vl)
{
  return vle32ff_v_f32m4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m4_tu_vl31 )?} 1 } } */
vfloat32m8_t
test_vle32ff_v_f32m8_ta (float32_t *base, size_t *new_vl, size_t vl)
{
  return vle32ff_v_f32m8_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m8_ta )?} 1 } } */
vfloat32m8_t
test_vle32ff_v_f32m8_ta_vl31 (float32_t *base, size_t *new_vl)
{
  return vle32ff_v_f32m8_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m8_ta_vl31 )?} 1 } } */
vfloat32m8_t
test_vle32ff_v_f32m8_tu (vfloat32m8_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vle32ff_v_f32m8_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m8_tu )?} 1 } } */
vfloat32m8_t
test_vle32ff_v_f32m8_tu_vl31 (vfloat32m8_t dest, float32_t *base, size_t *new_vl)
{
  return vle32ff_v_f32m8_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32ff_v_f32m8_tu_vl31 )?} 1 } } */
vfloat64m1_t
test_vle64ff_v_f64m1_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vle64ff_v_f64m1_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m1_ta )?} 1 } } */
vfloat64m1_t
test_vle64ff_v_f64m1_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vle64ff_v_f64m1_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m1_ta_vl31 )?} 1 } } */
vfloat64m1_t
test_vle64ff_v_f64m1_tu (vfloat64m1_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vle64ff_v_f64m1_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m1_tu )?} 1 } } */
vfloat64m1_t
test_vle64ff_v_f64m1_tu_vl31 (vfloat64m1_t dest, float64_t *base, size_t *new_vl)
{
  return vle64ff_v_f64m1_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m1_tu_vl31 )?} 1 } } */
vfloat64m2_t
test_vle64ff_v_f64m2_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vle64ff_v_f64m2_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m2_ta )?} 1 } } */
vfloat64m2_t
test_vle64ff_v_f64m2_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vle64ff_v_f64m2_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m2_ta_vl31 )?} 1 } } */
vfloat64m2_t
test_vle64ff_v_f64m2_tu (vfloat64m2_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vle64ff_v_f64m2_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m2_tu )?} 1 } } */
vfloat64m2_t
test_vle64ff_v_f64m2_tu_vl31 (vfloat64m2_t dest, float64_t *base, size_t *new_vl)
{
  return vle64ff_v_f64m2_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m2_tu_vl31 )?} 1 } } */
vfloat64m4_t
test_vle64ff_v_f64m4_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vle64ff_v_f64m4_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m4_ta )?} 1 } } */
vfloat64m4_t
test_vle64ff_v_f64m4_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vle64ff_v_f64m4_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m4_ta_vl31 )?} 1 } } */
vfloat64m4_t
test_vle64ff_v_f64m4_tu (vfloat64m4_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vle64ff_v_f64m4_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m4_tu )?} 1 } } */
vfloat64m4_t
test_vle64ff_v_f64m4_tu_vl31 (vfloat64m4_t dest, float64_t *base, size_t *new_vl)
{
  return vle64ff_v_f64m4_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m4_tu_vl31 )?} 1 } } */
vfloat64m8_t
test_vle64ff_v_f64m8_ta (float64_t *base, size_t *new_vl, size_t vl)
{
  return vle64ff_v_f64m8_ta (base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m8_ta )?} 1 } } */
vfloat64m8_t
test_vle64ff_v_f64m8_ta_vl31 (float64_t *base, size_t *new_vl)
{
  return vle64ff_v_f64m8_ta (base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m8_ta_vl31 )?} 1 } } */
vfloat64m8_t
test_vle64ff_v_f64m8_tu (vfloat64m8_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vle64ff_v_f64m8_tu (dest, base, new_vl, vl);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m8_tu )?} 1 } } */
vfloat64m8_t
test_vle64ff_v_f64m8_tu_vl31 (vfloat64m8_t dest, float64_t *base, size_t *new_vl)
{
  return vle64ff_v_f64m8_tu (dest, base, new_vl, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetivli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64ff_v_f64m8_tu_vl31 )?} 1 } } */
