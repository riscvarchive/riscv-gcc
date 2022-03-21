
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool1_t test_vlm_v_b1_31(const uint8_t *base, size_t vl) {
  return vlm_v_b1(base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*mu\s+vlm\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlm_v_b1 )?} 1 } } */

void test_vsm_v_b1_31(uint8_t *base, vbool1_t value, size_t vl) {
  vsm_v_b1(base, value, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*ta,\s*mu\s+vsm\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsm_v_b1 )?} 1 } } */

vbool2_t test_vlm_v_b2_31(const uint8_t *base, size_t vl) {
  return vlm_v_b2(base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu\s+vlm\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlm_v_b2 )?} 1 } } */

void test_vsm_v_b2_31(uint8_t *base, vbool2_t value, size_t vl) {
  vsm_v_b2(base, value, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*ta,\s*mu\s+vsm\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsm_v_b2 )?} 1 } } */

vbool4_t test_vlm_v_b4_31(const uint8_t *base, size_t vl) {
  return vlm_v_b4(base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu\s+vlm\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlm_v_b4 )?} 1 } } */

void test_vsm_v_b4_31(uint8_t *base, vbool4_t value, size_t vl) {
  vsm_v_b4(base, value, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*ta,\s*mu\s+vsm\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsm_v_b4 )?} 1 } } */

vbool8_t test_vlm_v_b8_31(const uint8_t *base, size_t vl) {
  return vlm_v_b8(base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu\s+vlm\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlm_v_b8 )?} 1 } } */

void test_vsm_v_b8_31(uint8_t *base, vbool8_t value, size_t vl) {
  vsm_v_b8(base, value, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*ta,\s*mu\s+vsm\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsm_v_b8 )?} 1 } } */

vbool16_t test_vlm_v_b16_31(const uint8_t *base, size_t vl) {
  return vlm_v_b16(base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu\s+vlm\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlm_v_b16 )?} 1 } } */

void test_vsm_v_b16_31(uint8_t *base, vbool16_t value, size_t vl) {
  vsm_v_b16(base, value, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*ta,\s*mu\s+vsm\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsm_v_b16 )?} 1 } } */

vbool32_t test_vlm_v_b32_31(const uint8_t *base, size_t vl) {
  return vlm_v_b32(base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu\s+vlm\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlm_v_b32 )?} 1 } } */

void test_vsm_v_b32_31(uint8_t *base, vbool32_t value, size_t vl) {
  vsm_v_b32(base, value, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*ta,\s*mu\s+vsm\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsm_v_b32 )?} 1 } } */

vbool64_t test_vlm_v_b64_31(const uint8_t *base, size_t vl) {
  return vlm_v_b64(base, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu\s+vlm\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vlm_v_b64 )?} 1 } } */

void test_vsm_v_b64_31(uint8_t *base, vbool64_t value, size_t vl) {
  vsm_v_b64(base, value, 31);
}
/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu\s+vsm\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vsm_v_b64 )?} 1 } } */
