
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8m2_t
test_vset_v_i8m1_i8m2 (vint8m2_t dest, vint8m1_t val)
{
  return vset_v_i8m1_i8m2(dest, 1, val);
}

vint8m4_t
test_vset_v_i8m1_i8m4 (vint8m4_t dest, vint8m1_t val)
{
  return vset_v_i8m1_i8m4(dest, 1, val);
}

vint8m4_t
test_vset_v_i8m2_i8m4 (vint8m4_t dest, vint8m2_t val)
{
  return vset_v_i8m2_i8m4(dest, 1, val);
}

vint8m8_t
test_vset_v_i8m1_i8m8 (vint8m8_t dest, vint8m1_t val)
{
  return vset_v_i8m1_i8m8(dest, 1, val);
}

vint8m8_t
test_vset_v_i8m2_i8m8 (vint8m8_t dest, vint8m2_t val)
{
  return vset_v_i8m2_i8m8(dest, 1, val);
}

vint8m8_t
test_vset_v_i8m4_i8m8 (vint8m8_t dest, vint8m4_t val)
{
  return vset_v_i8m4_i8m8(dest, 1, val);
}

vint8m1_t
test_vget_v_i8m2_i8m1 (vint8m2_t src)
{
  return vget_v_i8m2_i8m1(src, 1);
}

vint8m1_t
test_vget_v_i8m4_i8m1 (vint8m4_t src)
{
  return vget_v_i8m4_i8m1(src, 1);
}

vint8m1_t
test_vget_v_i8m8_i8m1 (vint8m8_t src)
{
  return vget_v_i8m8_i8m1(src, 1);
}

vint8m2_t
test_vget_v_i8m4_i8m2 (vint8m4_t src)
{
  return vget_v_i8m4_i8m2(src, 1);
}

vint8m2_t
test_vget_v_i8m8_i8m2 (vint8m8_t src)
{
  return vget_v_i8m8_i8m2(src, 1);
}

vint8m4_t
test_vget_v_i8m8_i8m4 (vint8m8_t src)
{
  return vget_v_i8m8_i8m4(src, 1);
}

vint16m2_t
test_vset_v_i16m1_i16m2 (vint16m2_t dest, vint16m1_t val)
{
  return vset_v_i16m1_i16m2(dest, 1, val);
}

vint16m4_t
test_vset_v_i16m1_i16m4 (vint16m4_t dest, vint16m1_t val)
{
  return vset_v_i16m1_i16m4(dest, 1, val);
}

vint16m4_t
test_vset_v_i16m2_i16m4 (vint16m4_t dest, vint16m2_t val)
{
  return vset_v_i16m2_i16m4(dest, 1, val);
}

vint16m8_t
test_vset_v_i16m1_i16m8 (vint16m8_t dest, vint16m1_t val)
{
  return vset_v_i16m1_i16m8(dest, 1, val);
}

vint16m8_t
test_vset_v_i16m2_i16m8 (vint16m8_t dest, vint16m2_t val)
{
  return vset_v_i16m2_i16m8(dest, 1, val);
}

vint16m8_t
test_vset_v_i16m4_i16m8 (vint16m8_t dest, vint16m4_t val)
{
  return vset_v_i16m4_i16m8(dest, 1, val);
}

vint16m1_t
test_vget_v_i16m2_i16m1 (vint16m2_t src)
{
  return vget_v_i16m2_i16m1(src, 1);
}

vint16m1_t
test_vget_v_i16m4_i16m1 (vint16m4_t src)
{
  return vget_v_i16m4_i16m1(src, 1);
}

vint16m1_t
test_vget_v_i16m8_i16m1 (vint16m8_t src)
{
  return vget_v_i16m8_i16m1(src, 1);
}

vint16m2_t
test_vget_v_i16m4_i16m2 (vint16m4_t src)
{
  return vget_v_i16m4_i16m2(src, 1);
}

vint16m2_t
test_vget_v_i16m8_i16m2 (vint16m8_t src)
{
  return vget_v_i16m8_i16m2(src, 1);
}

vint16m4_t
test_vget_v_i16m8_i16m4 (vint16m8_t src)
{
  return vget_v_i16m8_i16m4(src, 1);
}

vint32m2_t
test_vset_v_i32m1_i32m2 (vint32m2_t dest, vint32m1_t val)
{
  return vset_v_i32m1_i32m2(dest, 1, val);
}

vint32m4_t
test_vset_v_i32m1_i32m4 (vint32m4_t dest, vint32m1_t val)
{
  return vset_v_i32m1_i32m4(dest, 1, val);
}

vint32m4_t
test_vset_v_i32m2_i32m4 (vint32m4_t dest, vint32m2_t val)
{
  return vset_v_i32m2_i32m4(dest, 1, val);
}

vint32m8_t
test_vset_v_i32m1_i32m8 (vint32m8_t dest, vint32m1_t val)
{
  return vset_v_i32m1_i32m8(dest, 1, val);
}

vint32m8_t
test_vset_v_i32m2_i32m8 (vint32m8_t dest, vint32m2_t val)
{
  return vset_v_i32m2_i32m8(dest, 1, val);
}

vint32m8_t
test_vset_v_i32m4_i32m8 (vint32m8_t dest, vint32m4_t val)
{
  return vset_v_i32m4_i32m8(dest, 1, val);
}

vint32m1_t
test_vget_v_i32m2_i32m1 (vint32m2_t src)
{
  return vget_v_i32m2_i32m1(src, 1);
}

vint32m1_t
test_vget_v_i32m4_i32m1 (vint32m4_t src)
{
  return vget_v_i32m4_i32m1(src, 1);
}

vint32m1_t
test_vget_v_i32m8_i32m1 (vint32m8_t src)
{
  return vget_v_i32m8_i32m1(src, 1);
}

vint32m2_t
test_vget_v_i32m4_i32m2 (vint32m4_t src)
{
  return vget_v_i32m4_i32m2(src, 1);
}

vint32m2_t
test_vget_v_i32m8_i32m2 (vint32m8_t src)
{
  return vget_v_i32m8_i32m2(src, 1);
}

vint32m4_t
test_vget_v_i32m8_i32m4 (vint32m8_t src)
{
  return vget_v_i32m8_i32m4(src, 1);
}

vint64m2_t
test_vset_v_i64m1_i64m2 (vint64m2_t dest, vint64m1_t val)
{
  return vset_v_i64m1_i64m2(dest, 1, val);
}

vint64m4_t
test_vset_v_i64m1_i64m4 (vint64m4_t dest, vint64m1_t val)
{
  return vset_v_i64m1_i64m4(dest, 1, val);
}

vint64m4_t
test_vset_v_i64m2_i64m4 (vint64m4_t dest, vint64m2_t val)
{
  return vset_v_i64m2_i64m4(dest, 1, val);
}

vint64m8_t
test_vset_v_i64m1_i64m8 (vint64m8_t dest, vint64m1_t val)
{
  return vset_v_i64m1_i64m8(dest, 1, val);
}

vint64m8_t
test_vset_v_i64m2_i64m8 (vint64m8_t dest, vint64m2_t val)
{
  return vset_v_i64m2_i64m8(dest, 1, val);
}

vint64m8_t
test_vset_v_i64m4_i64m8 (vint64m8_t dest, vint64m4_t val)
{
  return vset_v_i64m4_i64m8(dest, 1, val);
}

vint64m1_t
test_vget_v_i64m2_i64m1 (vint64m2_t src)
{
  return vget_v_i64m2_i64m1(src, 1);
}

vint64m1_t
test_vget_v_i64m4_i64m1 (vint64m4_t src)
{
  return vget_v_i64m4_i64m1(src, 1);
}

vint64m1_t
test_vget_v_i64m8_i64m1 (vint64m8_t src)
{
  return vget_v_i64m8_i64m1(src, 1);
}

vint64m2_t
test_vget_v_i64m4_i64m2 (vint64m4_t src)
{
  return vget_v_i64m4_i64m2(src, 1);
}

vint64m2_t
test_vget_v_i64m8_i64m2 (vint64m8_t src)
{
  return vget_v_i64m8_i64m2(src, 1);
}

vint64m4_t
test_vget_v_i64m8_i64m4 (vint64m8_t src)
{
  return vget_v_i64m8_i64m4(src, 1);
}

vuint8m2_t
test_vset_v_u8m1_u8m2 (vuint8m2_t dest, vuint8m1_t val)
{
  return vset_v_u8m1_u8m2(dest, 1, val);
}

vuint8m4_t
test_vset_v_u8m1_u8m4 (vuint8m4_t dest, vuint8m1_t val)
{
  return vset_v_u8m1_u8m4(dest, 1, val);
}

vuint8m4_t
test_vset_v_u8m2_u8m4 (vuint8m4_t dest, vuint8m2_t val)
{
  return vset_v_u8m2_u8m4(dest, 1, val);
}

vuint8m8_t
test_vset_v_u8m1_u8m8 (vuint8m8_t dest, vuint8m1_t val)
{
  return vset_v_u8m1_u8m8(dest, 1, val);
}

vuint8m8_t
test_vset_v_u8m2_u8m8 (vuint8m8_t dest, vuint8m2_t val)
{
  return vset_v_u8m2_u8m8(dest, 1, val);
}

vuint8m8_t
test_vset_v_u8m4_u8m8 (vuint8m8_t dest, vuint8m4_t val)
{
  return vset_v_u8m4_u8m8(dest, 1, val);
}

vuint8m1_t
test_vget_v_u8m2_u8m1 (vuint8m2_t src)
{
  return vget_v_u8m2_u8m1(src, 1);
}

vuint8m1_t
test_vget_v_u8m4_u8m1 (vuint8m4_t src)
{
  return vget_v_u8m4_u8m1(src, 1);
}

vuint8m1_t
test_vget_v_u8m8_u8m1 (vuint8m8_t src)
{
  return vget_v_u8m8_u8m1(src, 1);
}

vuint8m2_t
test_vget_v_u8m4_u8m2 (vuint8m4_t src)
{
  return vget_v_u8m4_u8m2(src, 1);
}

vuint8m2_t
test_vget_v_u8m8_u8m2 (vuint8m8_t src)
{
  return vget_v_u8m8_u8m2(src, 1);
}

vuint8m4_t
test_vget_v_u8m8_u8m4 (vuint8m8_t src)
{
  return vget_v_u8m8_u8m4(src, 1);
}

vuint16m2_t
test_vset_v_u16m1_u16m2 (vuint16m2_t dest, vuint16m1_t val)
{
  return vset_v_u16m1_u16m2(dest, 1, val);
}

vuint16m4_t
test_vset_v_u16m1_u16m4 (vuint16m4_t dest, vuint16m1_t val)
{
  return vset_v_u16m1_u16m4(dest, 1, val);
}

vuint16m4_t
test_vset_v_u16m2_u16m4 (vuint16m4_t dest, vuint16m2_t val)
{
  return vset_v_u16m2_u16m4(dest, 1, val);
}

vuint16m8_t
test_vset_v_u16m1_u16m8 (vuint16m8_t dest, vuint16m1_t val)
{
  return vset_v_u16m1_u16m8(dest, 1, val);
}

vuint16m8_t
test_vset_v_u16m2_u16m8 (vuint16m8_t dest, vuint16m2_t val)
{
  return vset_v_u16m2_u16m8(dest, 1, val);
}

vuint16m8_t
test_vset_v_u16m4_u16m8 (vuint16m8_t dest, vuint16m4_t val)
{
  return vset_v_u16m4_u16m8(dest, 1, val);
}

vuint16m1_t
test_vget_v_u16m2_u16m1 (vuint16m2_t src)
{
  return vget_v_u16m2_u16m1(src, 1);
}

vuint16m1_t
test_vget_v_u16m4_u16m1 (vuint16m4_t src)
{
  return vget_v_u16m4_u16m1(src, 1);
}

vuint16m1_t
test_vget_v_u16m8_u16m1 (vuint16m8_t src)
{
  return vget_v_u16m8_u16m1(src, 1);
}

vuint16m2_t
test_vget_v_u16m4_u16m2 (vuint16m4_t src)
{
  return vget_v_u16m4_u16m2(src, 1);
}

vuint16m2_t
test_vget_v_u16m8_u16m2 (vuint16m8_t src)
{
  return vget_v_u16m8_u16m2(src, 1);
}

vuint16m4_t
test_vget_v_u16m8_u16m4 (vuint16m8_t src)
{
  return vget_v_u16m8_u16m4(src, 1);
}

vuint32m2_t
test_vset_v_u32m1_u32m2 (vuint32m2_t dest, vuint32m1_t val)
{
  return vset_v_u32m1_u32m2(dest, 1, val);
}

vuint32m4_t
test_vset_v_u32m1_u32m4 (vuint32m4_t dest, vuint32m1_t val)
{
  return vset_v_u32m1_u32m4(dest, 1, val);
}

vuint32m4_t
test_vset_v_u32m2_u32m4 (vuint32m4_t dest, vuint32m2_t val)
{
  return vset_v_u32m2_u32m4(dest, 1, val);
}

vuint32m8_t
test_vset_v_u32m1_u32m8 (vuint32m8_t dest, vuint32m1_t val)
{
  return vset_v_u32m1_u32m8(dest, 1, val);
}

vuint32m8_t
test_vset_v_u32m2_u32m8 (vuint32m8_t dest, vuint32m2_t val)
{
  return vset_v_u32m2_u32m8(dest, 1, val);
}

vuint32m8_t
test_vset_v_u32m4_u32m8 (vuint32m8_t dest, vuint32m4_t val)
{
  return vset_v_u32m4_u32m8(dest, 1, val);
}

vuint32m1_t
test_vget_v_u32m2_u32m1 (vuint32m2_t src)
{
  return vget_v_u32m2_u32m1(src, 1);
}

vuint32m1_t
test_vget_v_u32m4_u32m1 (vuint32m4_t src)
{
  return vget_v_u32m4_u32m1(src, 1);
}

vuint32m1_t
test_vget_v_u32m8_u32m1 (vuint32m8_t src)
{
  return vget_v_u32m8_u32m1(src, 1);
}

vuint32m2_t
test_vget_v_u32m4_u32m2 (vuint32m4_t src)
{
  return vget_v_u32m4_u32m2(src, 1);
}

vuint32m2_t
test_vget_v_u32m8_u32m2 (vuint32m8_t src)
{
  return vget_v_u32m8_u32m2(src, 1);
}

vuint32m4_t
test_vget_v_u32m8_u32m4 (vuint32m8_t src)
{
  return vget_v_u32m8_u32m4(src, 1);
}

vuint64m2_t
test_vset_v_u64m1_u64m2 (vuint64m2_t dest, vuint64m1_t val)
{
  return vset_v_u64m1_u64m2(dest, 1, val);
}

vuint64m4_t
test_vset_v_u64m1_u64m4 (vuint64m4_t dest, vuint64m1_t val)
{
  return vset_v_u64m1_u64m4(dest, 1, val);
}

vuint64m4_t
test_vset_v_u64m2_u64m4 (vuint64m4_t dest, vuint64m2_t val)
{
  return vset_v_u64m2_u64m4(dest, 1, val);
}

vuint64m8_t
test_vset_v_u64m1_u64m8 (vuint64m8_t dest, vuint64m1_t val)
{
  return vset_v_u64m1_u64m8(dest, 1, val);
}

vuint64m8_t
test_vset_v_u64m2_u64m8 (vuint64m8_t dest, vuint64m2_t val)
{
  return vset_v_u64m2_u64m8(dest, 1, val);
}

vuint64m8_t
test_vset_v_u64m4_u64m8 (vuint64m8_t dest, vuint64m4_t val)
{
  return vset_v_u64m4_u64m8(dest, 1, val);
}

vuint64m1_t
test_vget_v_u64m2_u64m1 (vuint64m2_t src)
{
  return vget_v_u64m2_u64m1(src, 1);
}

vuint64m1_t
test_vget_v_u64m4_u64m1 (vuint64m4_t src)
{
  return vget_v_u64m4_u64m1(src, 1);
}

vuint64m1_t
test_vget_v_u64m8_u64m1 (vuint64m8_t src)
{
  return vget_v_u64m8_u64m1(src, 1);
}

vuint64m2_t
test_vget_v_u64m4_u64m2 (vuint64m4_t src)
{
  return vget_v_u64m4_u64m2(src, 1);
}

vuint64m2_t
test_vget_v_u64m8_u64m2 (vuint64m8_t src)
{
  return vget_v_u64m8_u64m2(src, 1);
}

vuint64m4_t
test_vget_v_u64m8_u64m4 (vuint64m8_t src)
{
  return vget_v_u64m8_u64m4(src, 1);
}

vfloat16m2_t
test_vset_v_f16m1_f16m2 (vfloat16m2_t dest, vfloat16m1_t val)
{
  return vset_v_f16m1_f16m2(dest, 1, val);
}

vfloat16m4_t
test_vset_v_f16m1_f16m4 (vfloat16m4_t dest, vfloat16m1_t val)
{
  return vset_v_f16m1_f16m4(dest, 1, val);
}

vfloat16m4_t
test_vset_v_f16m2_f16m4 (vfloat16m4_t dest, vfloat16m2_t val)
{
  return vset_v_f16m2_f16m4(dest, 1, val);
}

vfloat16m8_t
test_vset_v_f16m1_f16m8 (vfloat16m8_t dest, vfloat16m1_t val)
{
  return vset_v_f16m1_f16m8(dest, 1, val);
}

vfloat16m8_t
test_vset_v_f16m2_f16m8 (vfloat16m8_t dest, vfloat16m2_t val)
{
  return vset_v_f16m2_f16m8(dest, 1, val);
}

vfloat16m8_t
test_vset_v_f16m4_f16m8 (vfloat16m8_t dest, vfloat16m4_t val)
{
  return vset_v_f16m4_f16m8(dest, 1, val);
}

vfloat16m1_t
test_vget_v_f16m2_f16m1 (vfloat16m2_t src)
{
  return vget_v_f16m2_f16m1(src, 1);
}

vfloat16m1_t
test_vget_v_f16m4_f16m1 (vfloat16m4_t src)
{
  return vget_v_f16m4_f16m1(src, 1);
}

vfloat16m1_t
test_vget_v_f16m8_f16m1 (vfloat16m8_t src)
{
  return vget_v_f16m8_f16m1(src, 1);
}

vfloat16m2_t
test_vget_v_f16m4_f16m2 (vfloat16m4_t src)
{
  return vget_v_f16m4_f16m2(src, 1);
}

vfloat16m2_t
test_vget_v_f16m8_f16m2 (vfloat16m8_t src)
{
  return vget_v_f16m8_f16m2(src, 1);
}

vfloat16m4_t
test_vget_v_f16m8_f16m4 (vfloat16m8_t src)
{
  return vget_v_f16m8_f16m4(src, 1);
}

vfloat32m2_t
test_vset_v_f32m1_f32m2 (vfloat32m2_t dest, vfloat32m1_t val)
{
  return vset_v_f32m1_f32m2(dest, 1, val);
}

vfloat32m4_t
test_vset_v_f32m1_f32m4 (vfloat32m4_t dest, vfloat32m1_t val)
{
  return vset_v_f32m1_f32m4(dest, 1, val);
}

vfloat32m4_t
test_vset_v_f32m2_f32m4 (vfloat32m4_t dest, vfloat32m2_t val)
{
  return vset_v_f32m2_f32m4(dest, 1, val);
}

vfloat32m8_t
test_vset_v_f32m1_f32m8 (vfloat32m8_t dest, vfloat32m1_t val)
{
  return vset_v_f32m1_f32m8(dest, 1, val);
}

vfloat32m8_t
test_vset_v_f32m2_f32m8 (vfloat32m8_t dest, vfloat32m2_t val)
{
  return vset_v_f32m2_f32m8(dest, 1, val);
}

vfloat32m8_t
test_vset_v_f32m4_f32m8 (vfloat32m8_t dest, vfloat32m4_t val)
{
  return vset_v_f32m4_f32m8(dest, 1, val);
}

vfloat32m1_t
test_vget_v_f32m2_f32m1 (vfloat32m2_t src)
{
  return vget_v_f32m2_f32m1(src, 1);
}

vfloat32m1_t
test_vget_v_f32m4_f32m1 (vfloat32m4_t src)
{
  return vget_v_f32m4_f32m1(src, 1);
}

vfloat32m1_t
test_vget_v_f32m8_f32m1 (vfloat32m8_t src)
{
  return vget_v_f32m8_f32m1(src, 1);
}

vfloat32m2_t
test_vget_v_f32m4_f32m2 (vfloat32m4_t src)
{
  return vget_v_f32m4_f32m2(src, 1);
}

vfloat32m2_t
test_vget_v_f32m8_f32m2 (vfloat32m8_t src)
{
  return vget_v_f32m8_f32m2(src, 1);
}

vfloat32m4_t
test_vget_v_f32m8_f32m4 (vfloat32m8_t src)
{
  return vget_v_f32m8_f32m4(src, 1);
}

vfloat64m2_t
test_vset_v_f64m1_f64m2 (vfloat64m2_t dest, vfloat64m1_t val)
{
  return vset_v_f64m1_f64m2(dest, 1, val);
}

vfloat64m4_t
test_vset_v_f64m1_f64m4 (vfloat64m4_t dest, vfloat64m1_t val)
{
  return vset_v_f64m1_f64m4(dest, 1, val);
}

vfloat64m4_t
test_vset_v_f64m2_f64m4 (vfloat64m4_t dest, vfloat64m2_t val)
{
  return vset_v_f64m2_f64m4(dest, 1, val);
}

vfloat64m8_t
test_vset_v_f64m1_f64m8 (vfloat64m8_t dest, vfloat64m1_t val)
{
  return vset_v_f64m1_f64m8(dest, 1, val);
}

vfloat64m8_t
test_vset_v_f64m2_f64m8 (vfloat64m8_t dest, vfloat64m2_t val)
{
  return vset_v_f64m2_f64m8(dest, 1, val);
}

vfloat64m8_t
test_vset_v_f64m4_f64m8 (vfloat64m8_t dest, vfloat64m4_t val)
{
  return vset_v_f64m4_f64m8(dest, 1, val);
}

vfloat64m1_t
test_vget_v_f64m2_f64m1 (vfloat64m2_t src)
{
  return vget_v_f64m2_f64m1(src, 1);
}

vfloat64m1_t
test_vget_v_f64m4_f64m1 (vfloat64m4_t src)
{
  return vget_v_f64m4_f64m1(src, 1);
}

vfloat64m1_t
test_vget_v_f64m8_f64m1 (vfloat64m8_t src)
{
  return vget_v_f64m8_f64m1(src, 1);
}

vfloat64m2_t
test_vget_v_f64m4_f64m2 (vfloat64m4_t src)
{
  return vget_v_f64m4_f64m2(src, 1);
}

vfloat64m2_t
test_vget_v_f64m8_f64m2 (vfloat64m8_t src)
{
  return vget_v_f64m8_f64m2(src, 1);
}

vfloat64m4_t
test_vget_v_f64m8_f64m4 (vfloat64m8_t src)
{
  return vget_v_f64m8_f64m4(src, 1);
}
/* { dg-final { scan-assembler-times {vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])} 66 } } */
/* { dg-final { scan-assembler-times {vmv2r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])} 44 } } */
/* { dg-final { scan-assembler-times {vmv4r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])} 22 } } */
