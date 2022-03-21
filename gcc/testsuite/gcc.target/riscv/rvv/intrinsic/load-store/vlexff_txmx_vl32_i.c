
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vint8mf8_t
test_vle8ff_v_i8mf8_tama_vl32 (vbool64_t mask, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf8_tama_vl32 )?} 1 } } */
vint8mf8_t
test_vle8ff_v_i8mf8_tamu_vl32 (vbool64_t mask, vint8mf8_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf8_tamu_vl32 )?} 1 } } */
vint8mf8_t
test_vle8ff_v_i8mf8_tuma_vl32 (vbool64_t mask, vint8mf8_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf8_tuma_vl32 )?} 1 } } */
vint8mf8_t
test_vle8ff_v_i8mf8_tumu_vl32 (vbool64_t mask, vint8mf8_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf8_tumu_vl32 )?} 1 } } */
vint8mf4_t
test_vle8ff_v_i8mf4_tama_vl32 (vbool32_t mask, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf4_tama_vl32 )?} 1 } } */
vint8mf4_t
test_vle8ff_v_i8mf4_tamu_vl32 (vbool32_t mask, vint8mf4_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf4_tamu_vl32 )?} 1 } } */
vint8mf4_t
test_vle8ff_v_i8mf4_tuma_vl32 (vbool32_t mask, vint8mf4_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf4_tuma_vl32 )?} 1 } } */
vint8mf4_t
test_vle8ff_v_i8mf4_tumu_vl32 (vbool32_t mask, vint8mf4_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf4_tumu_vl32 )?} 1 } } */
vint8mf2_t
test_vle8ff_v_i8mf2_tama_vl32 (vbool16_t mask, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf2_tama_vl32 )?} 1 } } */
vint8mf2_t
test_vle8ff_v_i8mf2_tamu_vl32 (vbool16_t mask, vint8mf2_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf2_tamu_vl32 )?} 1 } } */
vint8mf2_t
test_vle8ff_v_i8mf2_tuma_vl32 (vbool16_t mask, vint8mf2_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf2_tuma_vl32 )?} 1 } } */
vint8mf2_t
test_vle8ff_v_i8mf2_tumu_vl32 (vbool16_t mask, vint8mf2_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8mf2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8mf2_tumu_vl32 )?} 1 } } */
vint8m1_t
test_vle8ff_v_i8m1_tama_vl32 (vbool8_t mask, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m1_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m1_tama_vl32 )?} 1 } } */
vint8m1_t
test_vle8ff_v_i8m1_tamu_vl32 (vbool8_t mask, vint8m1_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m1_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m1_tamu_vl32 )?} 1 } } */
vint8m1_t
test_vle8ff_v_i8m1_tuma_vl32 (vbool8_t mask, vint8m1_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m1_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m1_tuma_vl32 )?} 1 } } */
vint8m1_t
test_vle8ff_v_i8m1_tumu_vl32 (vbool8_t mask, vint8m1_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m1_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m1_tumu_vl32 )?} 1 } } */
vint8m2_t
test_vle8ff_v_i8m2_tama_vl32 (vbool4_t mask, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m2_tama_vl32 )?} 1 } } */
vint8m2_t
test_vle8ff_v_i8m2_tamu_vl32 (vbool4_t mask, vint8m2_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m2_tamu_vl32 )?} 1 } } */
vint8m2_t
test_vle8ff_v_i8m2_tuma_vl32 (vbool4_t mask, vint8m2_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m2_tuma_vl32 )?} 1 } } */
vint8m2_t
test_vle8ff_v_i8m2_tumu_vl32 (vbool4_t mask, vint8m2_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m2_tumu_vl32 )?} 1 } } */
vint8m4_t
test_vle8ff_v_i8m4_tama_vl32 (vbool2_t mask, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m4_tama_vl32 )?} 1 } } */
vint8m4_t
test_vle8ff_v_i8m4_tamu_vl32 (vbool2_t mask, vint8m4_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m4_tamu_vl32 )?} 1 } } */
vint8m4_t
test_vle8ff_v_i8m4_tuma_vl32 (vbool2_t mask, vint8m4_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m4_tuma_vl32 )?} 1 } } */
vint8m4_t
test_vle8ff_v_i8m4_tumu_vl32 (vbool2_t mask, vint8m4_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m4_tumu_vl32 )?} 1 } } */
vint8m8_t
test_vle8ff_v_i8m8_tama_vl32 (vbool1_t mask, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m8_tama_vl32 )?} 1 } } */
vint8m8_t
test_vle8ff_v_i8m8_tamu_vl32 (vbool1_t mask, vint8m8_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m8_tamu_vl32 )?} 1 } } */
vint8m8_t
test_vle8ff_v_i8m8_tuma_vl32 (vbool1_t mask, vint8m8_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m8_tuma_vl32 )?} 1 } } */
vint8m8_t
test_vle8ff_v_i8m8_tumu_vl32 (vbool1_t mask, vint8m8_t dest, int8_t *base, size_t *new_vl)
{
  return vle8ff_v_i8m8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle8ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle8ff_v_i8m8_tumu_vl32 )?} 1 } } */
vint16mf4_t
test_vle16ff_v_i16mf4_tama_vl32 (vbool64_t mask, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16mf4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16mf4_tama_vl32 )?} 1 } } */
vint16mf4_t
test_vle16ff_v_i16mf4_tamu_vl32 (vbool64_t mask, vint16mf4_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16mf4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16mf4_tamu_vl32 )?} 1 } } */
vint16mf4_t
test_vle16ff_v_i16mf4_tuma_vl32 (vbool64_t mask, vint16mf4_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16mf4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16mf4_tuma_vl32 )?} 1 } } */
vint16mf4_t
test_vle16ff_v_i16mf4_tumu_vl32 (vbool64_t mask, vint16mf4_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16mf4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16mf4_tumu_vl32 )?} 1 } } */
vint16mf2_t
test_vle16ff_v_i16mf2_tama_vl32 (vbool32_t mask, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16mf2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16mf2_tama_vl32 )?} 1 } } */
vint16mf2_t
test_vle16ff_v_i16mf2_tamu_vl32 (vbool32_t mask, vint16mf2_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16mf2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16mf2_tamu_vl32 )?} 1 } } */
vint16mf2_t
test_vle16ff_v_i16mf2_tuma_vl32 (vbool32_t mask, vint16mf2_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16mf2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16mf2_tuma_vl32 )?} 1 } } */
vint16mf2_t
test_vle16ff_v_i16mf2_tumu_vl32 (vbool32_t mask, vint16mf2_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16mf2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16mf2_tumu_vl32 )?} 1 } } */
vint16m1_t
test_vle16ff_v_i16m1_tama_vl32 (vbool16_t mask, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m1_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m1_tama_vl32 )?} 1 } } */
vint16m1_t
test_vle16ff_v_i16m1_tamu_vl32 (vbool16_t mask, vint16m1_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m1_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m1_tamu_vl32 )?} 1 } } */
vint16m1_t
test_vle16ff_v_i16m1_tuma_vl32 (vbool16_t mask, vint16m1_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m1_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m1_tuma_vl32 )?} 1 } } */
vint16m1_t
test_vle16ff_v_i16m1_tumu_vl32 (vbool16_t mask, vint16m1_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m1_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m1_tumu_vl32 )?} 1 } } */
vint16m2_t
test_vle16ff_v_i16m2_tama_vl32 (vbool8_t mask, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m2_tama_vl32 )?} 1 } } */
vint16m2_t
test_vle16ff_v_i16m2_tamu_vl32 (vbool8_t mask, vint16m2_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m2_tamu_vl32 )?} 1 } } */
vint16m2_t
test_vle16ff_v_i16m2_tuma_vl32 (vbool8_t mask, vint16m2_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m2_tuma_vl32 )?} 1 } } */
vint16m2_t
test_vle16ff_v_i16m2_tumu_vl32 (vbool8_t mask, vint16m2_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m2_tumu_vl32 )?} 1 } } */
vint16m4_t
test_vle16ff_v_i16m4_tama_vl32 (vbool4_t mask, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m4_tama_vl32 )?} 1 } } */
vint16m4_t
test_vle16ff_v_i16m4_tamu_vl32 (vbool4_t mask, vint16m4_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m4_tamu_vl32 )?} 1 } } */
vint16m4_t
test_vle16ff_v_i16m4_tuma_vl32 (vbool4_t mask, vint16m4_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m4_tuma_vl32 )?} 1 } } */
vint16m4_t
test_vle16ff_v_i16m4_tumu_vl32 (vbool4_t mask, vint16m4_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m4_tumu_vl32 )?} 1 } } */
vint16m8_t
test_vle16ff_v_i16m8_tama_vl32 (vbool2_t mask, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m8_tama_vl32 )?} 1 } } */
vint16m8_t
test_vle16ff_v_i16m8_tamu_vl32 (vbool2_t mask, vint16m8_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m8_tamu_vl32 )?} 1 } } */
vint16m8_t
test_vle16ff_v_i16m8_tuma_vl32 (vbool2_t mask, vint16m8_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m8_tuma_vl32 )?} 1 } } */
vint16m8_t
test_vle16ff_v_i16m8_tumu_vl32 (vbool2_t mask, vint16m8_t dest, int16_t *base, size_t *new_vl)
{
  return vle16ff_v_i16m8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle16ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle16ff_v_i16m8_tumu_vl32 )?} 1 } } */
vint32mf2_t
test_vle32ff_v_i32mf2_tama_vl32 (vbool64_t mask, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32mf2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32mf2_tama_vl32 )?} 1 } } */
vint32mf2_t
test_vle32ff_v_i32mf2_tamu_vl32 (vbool64_t mask, vint32mf2_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32mf2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32mf2_tamu_vl32 )?} 1 } } */
vint32mf2_t
test_vle32ff_v_i32mf2_tuma_vl32 (vbool64_t mask, vint32mf2_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32mf2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32mf2_tuma_vl32 )?} 1 } } */
vint32mf2_t
test_vle32ff_v_i32mf2_tumu_vl32 (vbool64_t mask, vint32mf2_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32mf2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32mf2_tumu_vl32 )?} 1 } } */
vint32m1_t
test_vle32ff_v_i32m1_tama_vl32 (vbool32_t mask, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m1_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m1_tama_vl32 )?} 1 } } */
vint32m1_t
test_vle32ff_v_i32m1_tamu_vl32 (vbool32_t mask, vint32m1_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m1_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m1_tamu_vl32 )?} 1 } } */
vint32m1_t
test_vle32ff_v_i32m1_tuma_vl32 (vbool32_t mask, vint32m1_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m1_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m1_tuma_vl32 )?} 1 } } */
vint32m1_t
test_vle32ff_v_i32m1_tumu_vl32 (vbool32_t mask, vint32m1_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m1_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m1_tumu_vl32 )?} 1 } } */
vint32m2_t
test_vle32ff_v_i32m2_tama_vl32 (vbool16_t mask, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m2_tama_vl32 )?} 1 } } */
vint32m2_t
test_vle32ff_v_i32m2_tamu_vl32 (vbool16_t mask, vint32m2_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m2_tamu_vl32 )?} 1 } } */
vint32m2_t
test_vle32ff_v_i32m2_tuma_vl32 (vbool16_t mask, vint32m2_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m2_tuma_vl32 )?} 1 } } */
vint32m2_t
test_vle32ff_v_i32m2_tumu_vl32 (vbool16_t mask, vint32m2_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m2_tumu_vl32 )?} 1 } } */
vint32m4_t
test_vle32ff_v_i32m4_tama_vl32 (vbool8_t mask, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m4_tama_vl32 )?} 1 } } */
vint32m4_t
test_vle32ff_v_i32m4_tamu_vl32 (vbool8_t mask, vint32m4_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m4_tamu_vl32 )?} 1 } } */
vint32m4_t
test_vle32ff_v_i32m4_tuma_vl32 (vbool8_t mask, vint32m4_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m4_tuma_vl32 )?} 1 } } */
vint32m4_t
test_vle32ff_v_i32m4_tumu_vl32 (vbool8_t mask, vint32m4_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m4_tumu_vl32 )?} 1 } } */
vint32m8_t
test_vle32ff_v_i32m8_tama_vl32 (vbool4_t mask, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m8_tama_vl32 )?} 1 } } */
vint32m8_t
test_vle32ff_v_i32m8_tamu_vl32 (vbool4_t mask, vint32m8_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m8_tamu_vl32 )?} 1 } } */
vint32m8_t
test_vle32ff_v_i32m8_tuma_vl32 (vbool4_t mask, vint32m8_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m8_tuma_vl32 )?} 1 } } */
vint32m8_t
test_vle32ff_v_i32m8_tumu_vl32 (vbool4_t mask, vint32m8_t dest, int32_t *base, size_t *new_vl)
{
  return vle32ff_v_i32m8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle32ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle32ff_v_i32m8_tumu_vl32 )?} 1 } } */
vint64m1_t
test_vle64ff_v_i64m1_tama_vl32 (vbool64_t mask, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m1_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m1_tama_vl32 )?} 1 } } */
vint64m1_t
test_vle64ff_v_i64m1_tamu_vl32 (vbool64_t mask, vint64m1_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m1_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m1_tamu_vl32 )?} 1 } } */
vint64m1_t
test_vle64ff_v_i64m1_tuma_vl32 (vbool64_t mask, vint64m1_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m1_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m1_tuma_vl32 )?} 1 } } */
vint64m1_t
test_vle64ff_v_i64m1_tumu_vl32 (vbool64_t mask, vint64m1_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m1_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m1_tumu_vl32 )?} 1 } } */
vint64m2_t
test_vle64ff_v_i64m2_tama_vl32 (vbool32_t mask, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m2_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m2_tama_vl32 )?} 1 } } */
vint64m2_t
test_vle64ff_v_i64m2_tamu_vl32 (vbool32_t mask, vint64m2_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m2_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m2_tamu_vl32 )?} 1 } } */
vint64m2_t
test_vle64ff_v_i64m2_tuma_vl32 (vbool32_t mask, vint64m2_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m2_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m2_tuma_vl32 )?} 1 } } */
vint64m2_t
test_vle64ff_v_i64m2_tumu_vl32 (vbool32_t mask, vint64m2_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m2_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m2_tumu_vl32 )?} 1 } } */
vint64m4_t
test_vle64ff_v_i64m4_tama_vl32 (vbool16_t mask, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m4_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m4_tama_vl32 )?} 1 } } */
vint64m4_t
test_vle64ff_v_i64m4_tamu_vl32 (vbool16_t mask, vint64m4_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m4_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m4_tamu_vl32 )?} 1 } } */
vint64m4_t
test_vle64ff_v_i64m4_tuma_vl32 (vbool16_t mask, vint64m4_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m4_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m4_tuma_vl32 )?} 1 } } */
vint64m4_t
test_vle64ff_v_i64m4_tumu_vl32 (vbool16_t mask, vint64m4_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m4_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m4_tumu_vl32 )?} 1 } } */
vint64m8_t
test_vle64ff_v_i64m8_tama_vl32 (vbool8_t mask, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m8_tama (mask, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m8_tama_vl32 )?} 1 } } */
vint64m8_t
test_vle64ff_v_i64m8_tamu_vl32 (vbool8_t mask, vint64m8_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m8_tamu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m8_tamu_vl32 )?} 1 } } */
vint64m8_t
test_vle64ff_v_i64m8_tuma_vl32 (vbool8_t mask, vint64m8_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m8_tuma (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*ma\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m8_tuma_vl32 )?} 1 } } */
vint64m8_t
test_vle64ff_v_i64m8_tumu_vl32 (vbool8_t mask, vint64m8_t dest, int64_t *base, size_t *new_vl)
{
  return vle64ff_v_i64m8_tumu (mask, dest, base, new_vl, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu\s+(?:(?!vsetvli|vle..?ff\.v).)*\s+vle64ff\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t\n(?: test_vle64ff_v_i64m8_tumu_vl32 )?} 1 } } */
