
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


/* Reinterpret between different type under the same SEW and LMUL */

vuint8mf8_t test_vreinterpret_v_i8mf8_u8mf8(vint8mf8_t src)
{
  vuint8mf8_t a = vreinterpret_v_i8mf8_u8mf8(src);
  return a;
}

vuint8mf4_t test_vreinterpret_v_i8mf4_u8mf4(vint8mf4_t src)
{
  vuint8mf4_t a = vreinterpret_v_i8mf4_u8mf4(src);
  return a;
}

vuint8mf2_t test_vreinterpret_v_i8mf2_u8mf2(vint8mf2_t src)
{
  vuint8mf2_t a = vreinterpret_v_i8mf2_u8mf2(src);
  return a;
}

vuint8m1_t test_vreinterpret_v_i8m1_u8m1(vint8m1_t src)
{
  vuint8m1_t a = vreinterpret_v_i8m1_u8m1(src);
  return a;
}

vuint8m2_t test_vreinterpret_v_i8m2_u8m2(vint8m2_t src)
{
  vuint8m2_t a = vreinterpret_v_i8m2_u8m2(src);
  return a;
}

vuint8m4_t test_vreinterpret_v_i8m4_u8m4(vint8m4_t src)
{
  vuint8m4_t a = vreinterpret_v_i8m4_u8m4(src);
  return a;
}

vuint8m8_t test_vreinterpret_v_i8m8_u8m8(vint8m8_t src)
{
  vuint8m8_t a = vreinterpret_v_i8m8_u8m8(src);
  return a;
}

vint8mf8_t test_vreinterpret_v_u8mf8_i8mf8(vuint8mf8_t src)
{
  vint8mf8_t a = vreinterpret_v_u8mf8_i8mf8(src);
  return a;
}

vint8mf4_t test_vreinterpret_v_u8mf4_i8mf4(vuint8mf4_t src)
{
  vint8mf4_t a = vreinterpret_v_u8mf4_i8mf4(src);
  return a;
}

vint8mf2_t test_vreinterpret_v_u8mf2_i8mf2(vuint8mf2_t src)
{
  vint8mf2_t a = vreinterpret_v_u8mf2_i8mf2(src);
  return a;
}

vint8m1_t test_vreinterpret_v_u8m1_i8m1(vuint8m1_t src)
{
  vint8m1_t a = vreinterpret_v_u8m1_i8m1(src);
  return a;
}

vint8m2_t test_vreinterpret_v_u8m2_i8m2(vuint8m2_t src)
{
  vint8m2_t a = vreinterpret_v_u8m2_i8m2(src);
  return a;
}

vint8m4_t test_vreinterpret_v_u8m4_i8m4(vuint8m4_t src)
{
  vint8m4_t a = vreinterpret_v_u8m4_i8m4(src);
  return a;
}

vint8m8_t test_vreinterpret_v_u8m8_i8m8(vuint8m8_t src)
{
  vint8m8_t a = vreinterpret_v_u8m8_i8m8(src);
  return a;
}

vuint16mf4_t test_vreinterpret_v_i16mf4_u16mf4(vint16mf4_t src)
{
  vuint16mf4_t a = vreinterpret_v_i16mf4_u16mf4(src);
  return a;
}

vuint16mf2_t test_vreinterpret_v_i16mf2_u16mf2(vint16mf2_t src)
{
  vuint16mf2_t a = vreinterpret_v_i16mf2_u16mf2(src);
  return a;
}

vuint16m1_t test_vreinterpret_v_i16m1_u16m1(vint16m1_t src)
{
  vuint16m1_t a = vreinterpret_v_i16m1_u16m1(src);
  return a;
}

vuint16m2_t test_vreinterpret_v_i16m2_u16m2(vint16m2_t src)
{
  vuint16m2_t a = vreinterpret_v_i16m2_u16m2(src);
  return a;
}

vuint16m4_t test_vreinterpret_v_i16m4_u16m4(vint16m4_t src)
{
  vuint16m4_t a = vreinterpret_v_i16m4_u16m4(src);
  return a;
}

vuint16m8_t test_vreinterpret_v_i16m8_u16m8(vint16m8_t src)
{
  vuint16m8_t a = vreinterpret_v_i16m8_u16m8(src);
  return a;
}

vfloat16mf4_t test_vreinterpret_v_i16mf4_f16mf4(vint16mf4_t src)
{
  vfloat16mf4_t a = vreinterpret_v_i16mf4_f16mf4(src);
  return a;
}

vfloat16mf2_t test_vreinterpret_v_i16mf2_f16mf2(vint16mf2_t src)
{
  vfloat16mf2_t a = vreinterpret_v_i16mf2_f16mf2(src);
  return a;
}

vfloat16m1_t test_vreinterpret_v_i16m1_f16m1(vint16m1_t src)
{
  vfloat16m1_t a = vreinterpret_v_i16m1_f16m1(src);
  return a;
}

vfloat16m2_t test_vreinterpret_v_i16m2_f16m2(vint16m2_t src)
{
  vfloat16m2_t a = vreinterpret_v_i16m2_f16m2(src);
  return a;
}

vfloat16m4_t test_vreinterpret_v_i16m4_f16m4(vint16m4_t src)
{
  vfloat16m4_t a = vreinterpret_v_i16m4_f16m4(src);
  return a;
}

vfloat16m8_t test_vreinterpret_v_i16m8_f16m8(vint16m8_t src)
{
  vfloat16m8_t a = vreinterpret_v_i16m8_f16m8(src);
  return a;
}

vint16mf4_t test_vreinterpret_v_u16mf4_i16mf4(vuint16mf4_t src)
{
  vint16mf4_t a = vreinterpret_v_u16mf4_i16mf4(src);
  return a;
}

vint16mf2_t test_vreinterpret_v_u16mf2_i16mf2(vuint16mf2_t src)
{
  vint16mf2_t a = vreinterpret_v_u16mf2_i16mf2(src);
  return a;
}

vint16m1_t test_vreinterpret_v_u16m1_i16m1(vuint16m1_t src)
{
  vint16m1_t a = vreinterpret_v_u16m1_i16m1(src);
  return a;
}

vint16m2_t test_vreinterpret_v_u16m2_i16m2(vuint16m2_t src)
{
  vint16m2_t a = vreinterpret_v_u16m2_i16m2(src);
  return a;
}

vint16m4_t test_vreinterpret_v_u16m4_i16m4(vuint16m4_t src)
{
  vint16m4_t a = vreinterpret_v_u16m4_i16m4(src);
  return a;
}

vint16m8_t test_vreinterpret_v_u16m8_i16m8(vuint16m8_t src)
{
  vint16m8_t a = vreinterpret_v_u16m8_i16m8(src);
  return a;
}

vfloat16mf4_t test_vreinterpret_v_u16mf4_f16mf4(vuint16mf4_t src)
{
  vfloat16mf4_t a = vreinterpret_v_u16mf4_f16mf4(src);
  return a;
}

vfloat16mf2_t test_vreinterpret_v_u16mf2_f16mf2(vuint16mf2_t src)
{
  vfloat16mf2_t a = vreinterpret_v_u16mf2_f16mf2(src);
  return a;
}

vfloat16m1_t test_vreinterpret_v_u16m1_f16m1(vuint16m1_t src)
{
  vfloat16m1_t a = vreinterpret_v_u16m1_f16m1(src);
  return a;
}

vfloat16m2_t test_vreinterpret_v_u16m2_f16m2(vuint16m2_t src)
{
  vfloat16m2_t a = vreinterpret_v_u16m2_f16m2(src);
  return a;
}

vfloat16m4_t test_vreinterpret_v_u16m4_f16m4(vuint16m4_t src)
{
  vfloat16m4_t a = vreinterpret_v_u16m4_f16m4(src);
  return a;
}

vfloat16m8_t test_vreinterpret_v_u16m8_f16m8(vuint16m8_t src)
{
  vfloat16m8_t a = vreinterpret_v_u16m8_f16m8(src);
  return a;
}

vint16mf4_t test_vreinterpret_v_f16mf4_i16mf4(vfloat16mf4_t src)
{
  vint16mf4_t a = vreinterpret_v_f16mf4_i16mf4(src);
  return a;
}

vint16mf2_t test_vreinterpret_v_f16mf2_i16mf2(vfloat16mf2_t src)
{
  vint16mf2_t a = vreinterpret_v_f16mf2_i16mf2(src);
  return a;
}

vint16m1_t test_vreinterpret_v_f16m1_i16m1(vfloat16m1_t src)
{
  vint16m1_t a = vreinterpret_v_f16m1_i16m1(src);
  return a;
}

vint16m2_t test_vreinterpret_v_f16m2_i16m2(vfloat16m2_t src)
{
  vint16m2_t a = vreinterpret_v_f16m2_i16m2(src);
  return a;
}

vint16m4_t test_vreinterpret_v_f16m4_i16m4(vfloat16m4_t src)
{
  vint16m4_t a = vreinterpret_v_f16m4_i16m4(src);
  return a;
}

vint16m8_t test_vreinterpret_v_f16m8_i16m8(vfloat16m8_t src)
{
  vint16m8_t a = vreinterpret_v_f16m8_i16m8(src);
  return a;
}

vuint16mf4_t test_vreinterpret_v_f16mf4_u16mf4(vfloat16mf4_t src)
{
  vuint16mf4_t a = vreinterpret_v_f16mf4_u16mf4(src);
  return a;
}

vuint16mf2_t test_vreinterpret_v_f16mf2_u16mf2(vfloat16mf2_t src)
{
  vuint16mf2_t a = vreinterpret_v_f16mf2_u16mf2(src);
  return a;
}

vuint16m1_t test_vreinterpret_v_f16m1_u16m1(vfloat16m1_t src)
{
  vuint16m1_t a = vreinterpret_v_f16m1_u16m1(src);
  return a;
}

vuint16m2_t test_vreinterpret_v_f16m2_u16m2(vfloat16m2_t src)
{
  vuint16m2_t a = vreinterpret_v_f16m2_u16m2(src);
  return a;
}

vuint16m4_t test_vreinterpret_v_f16m4_u16m4(vfloat16m4_t src)
{
  vuint16m4_t a = vreinterpret_v_f16m4_u16m4(src);
  return a;
}

vuint16m8_t test_vreinterpret_v_f16m8_u16m8(vfloat16m8_t src)
{
  vuint16m8_t a = vreinterpret_v_f16m8_u16m8(src);
  return a;
}

vuint32mf2_t test_vreinterpret_v_i32mf2_u32mf2(vint32mf2_t src)
{
  vuint32mf2_t a = vreinterpret_v_i32mf2_u32mf2(src);
  return a;
}

vuint32m1_t test_vreinterpret_v_i32m1_u32m1(vint32m1_t src)
{
  vuint32m1_t a = vreinterpret_v_i32m1_u32m1(src);
  return a;
}

vuint32m2_t test_vreinterpret_v_i32m2_u32m2(vint32m2_t src)
{
  vuint32m2_t a = vreinterpret_v_i32m2_u32m2(src);
  return a;
}

vuint32m4_t test_vreinterpret_v_i32m4_u32m4(vint32m4_t src)
{
  vuint32m4_t a = vreinterpret_v_i32m4_u32m4(src);
  return a;
}

vuint32m8_t test_vreinterpret_v_i32m8_u32m8(vint32m8_t src)
{
  vuint32m8_t a = vreinterpret_v_i32m8_u32m8(src);
  return a;
}

vfloat32mf2_t test_vreinterpret_v_i32mf2_f32mf2(vint32mf2_t src)
{
  vfloat32mf2_t a = vreinterpret_v_i32mf2_f32mf2(src);
  return a;
}

vfloat32m1_t test_vreinterpret_v_i32m1_f32m1(vint32m1_t src)
{
  vfloat32m1_t a = vreinterpret_v_i32m1_f32m1(src);
  return a;
}

vfloat32m2_t test_vreinterpret_v_i32m2_f32m2(vint32m2_t src)
{
  vfloat32m2_t a = vreinterpret_v_i32m2_f32m2(src);
  return a;
}

vfloat32m4_t test_vreinterpret_v_i32m4_f32m4(vint32m4_t src)
{
  vfloat32m4_t a = vreinterpret_v_i32m4_f32m4(src);
  return a;
}

vfloat32m8_t test_vreinterpret_v_i32m8_f32m8(vint32m8_t src)
{
  vfloat32m8_t a = vreinterpret_v_i32m8_f32m8(src);
  return a;
}

vint32mf2_t test_vreinterpret_v_u32mf2_i32mf2(vuint32mf2_t src)
{
  vint32mf2_t a = vreinterpret_v_u32mf2_i32mf2(src);
  return a;
}

vint32m1_t test_vreinterpret_v_u32m1_i32m1(vuint32m1_t src)
{
  vint32m1_t a = vreinterpret_v_u32m1_i32m1(src);
  return a;
}

vint32m2_t test_vreinterpret_v_u32m2_i32m2(vuint32m2_t src)
{
  vint32m2_t a = vreinterpret_v_u32m2_i32m2(src);
  return a;
}

vint32m4_t test_vreinterpret_v_u32m4_i32m4(vuint32m4_t src)
{
  vint32m4_t a = vreinterpret_v_u32m4_i32m4(src);
  return a;
}

vint32m8_t test_vreinterpret_v_u32m8_i32m8(vuint32m8_t src)
{
  vint32m8_t a = vreinterpret_v_u32m8_i32m8(src);
  return a;
}

vfloat32mf2_t test_vreinterpret_v_u32mf2_f32mf2(vuint32mf2_t src)
{
  vfloat32mf2_t a = vreinterpret_v_u32mf2_f32mf2(src);
  return a;
}

vfloat32m1_t test_vreinterpret_v_u32m1_f32m1(vuint32m1_t src)
{
  vfloat32m1_t a = vreinterpret_v_u32m1_f32m1(src);
  return a;
}

vfloat32m2_t test_vreinterpret_v_u32m2_f32m2(vuint32m2_t src)
{
  vfloat32m2_t a = vreinterpret_v_u32m2_f32m2(src);
  return a;
}

vfloat32m4_t test_vreinterpret_v_u32m4_f32m4(vuint32m4_t src)
{
  vfloat32m4_t a = vreinterpret_v_u32m4_f32m4(src);
  return a;
}

vfloat32m8_t test_vreinterpret_v_u32m8_f32m8(vuint32m8_t src)
{
  vfloat32m8_t a = vreinterpret_v_u32m8_f32m8(src);
  return a;
}

vint32mf2_t test_vreinterpret_v_f32mf2_i32mf2(vfloat32mf2_t src)
{
  vint32mf2_t a = vreinterpret_v_f32mf2_i32mf2(src);
  return a;
}

vint32m1_t test_vreinterpret_v_f32m1_i32m1(vfloat32m1_t src)
{
  vint32m1_t a = vreinterpret_v_f32m1_i32m1(src);
  return a;
}

vint32m2_t test_vreinterpret_v_f32m2_i32m2(vfloat32m2_t src)
{
  vint32m2_t a = vreinterpret_v_f32m2_i32m2(src);
  return a;
}

vint32m4_t test_vreinterpret_v_f32m4_i32m4(vfloat32m4_t src)
{
  vint32m4_t a = vreinterpret_v_f32m4_i32m4(src);
  return a;
}

vint32m8_t test_vreinterpret_v_f32m8_i32m8(vfloat32m8_t src)
{
  vint32m8_t a = vreinterpret_v_f32m8_i32m8(src);
  return a;
}

vuint32mf2_t test_vreinterpret_v_f32mf2_u32mf2(vfloat32mf2_t src)
{
  vuint32mf2_t a = vreinterpret_v_f32mf2_u32mf2(src);
  return a;
}

vuint32m1_t test_vreinterpret_v_f32m1_u32m1(vfloat32m1_t src)
{
  vuint32m1_t a = vreinterpret_v_f32m1_u32m1(src);
  return a;
}

vuint32m2_t test_vreinterpret_v_f32m2_u32m2(vfloat32m2_t src)
{
  vuint32m2_t a = vreinterpret_v_f32m2_u32m2(src);
  return a;
}

vuint32m4_t test_vreinterpret_v_f32m4_u32m4(vfloat32m4_t src)
{
  vuint32m4_t a = vreinterpret_v_f32m4_u32m4(src);
  return a;
}

vuint32m8_t test_vreinterpret_v_f32m8_u32m8(vfloat32m8_t src)
{
  vuint32m8_t a = vreinterpret_v_f32m8_u32m8(src);
  return a;
}

vuint64m1_t test_vreinterpret_v_i64m1_u64m1(vint64m1_t src)
{
  vuint64m1_t a = vreinterpret_v_i64m1_u64m1(src);
  return a;
}

vuint64m2_t test_vreinterpret_v_i64m2_u64m2(vint64m2_t src)
{
  vuint64m2_t a = vreinterpret_v_i64m2_u64m2(src);
  return a;
}

vuint64m4_t test_vreinterpret_v_i64m4_u64m4(vint64m4_t src)
{
  vuint64m4_t a = vreinterpret_v_i64m4_u64m4(src);
  return a;
}

vuint64m8_t test_vreinterpret_v_i64m8_u64m8(vint64m8_t src)
{
  vuint64m8_t a = vreinterpret_v_i64m8_u64m8(src);
  return a;
}

vfloat64m1_t test_vreinterpret_v_i64m1_f64m1(vint64m1_t src)
{
  vfloat64m1_t a = vreinterpret_v_i64m1_f64m1(src);
  return a;
}

vfloat64m2_t test_vreinterpret_v_i64m2_f64m2(vint64m2_t src)
{
  vfloat64m2_t a = vreinterpret_v_i64m2_f64m2(src);
  return a;
}

vfloat64m4_t test_vreinterpret_v_i64m4_f64m4(vint64m4_t src)
{
  vfloat64m4_t a = vreinterpret_v_i64m4_f64m4(src);
  return a;
}

vfloat64m8_t test_vreinterpret_v_i64m8_f64m8(vint64m8_t src)
{
  vfloat64m8_t a = vreinterpret_v_i64m8_f64m8(src);
  return a;
}

vint64m1_t test_vreinterpret_v_u64m1_i64m1(vuint64m1_t src)
{
  vint64m1_t a = vreinterpret_v_u64m1_i64m1(src);
  return a;
}

vint64m2_t test_vreinterpret_v_u64m2_i64m2(vuint64m2_t src)
{
  vint64m2_t a = vreinterpret_v_u64m2_i64m2(src);
  return a;
}

vint64m4_t test_vreinterpret_v_u64m4_i64m4(vuint64m4_t src)
{
  vint64m4_t a = vreinterpret_v_u64m4_i64m4(src);
  return a;
}

vint64m8_t test_vreinterpret_v_u64m8_i64m8(vuint64m8_t src)
{
  vint64m8_t a = vreinterpret_v_u64m8_i64m8(src);
  return a;
}

vfloat64m1_t test_vreinterpret_v_u64m1_f64m1(vuint64m1_t src)
{
  vfloat64m1_t a = vreinterpret_v_u64m1_f64m1(src);
  return a;
}

vfloat64m2_t test_vreinterpret_v_u64m2_f64m2(vuint64m2_t src)
{
  vfloat64m2_t a = vreinterpret_v_u64m2_f64m2(src);
  return a;
}

vfloat64m4_t test_vreinterpret_v_u64m4_f64m4(vuint64m4_t src)
{
  vfloat64m4_t a = vreinterpret_v_u64m4_f64m4(src);
  return a;
}

vfloat64m8_t test_vreinterpret_v_u64m8_f64m8(vuint64m8_t src)
{
  vfloat64m8_t a = vreinterpret_v_u64m8_f64m8(src);
  return a;
}

vint64m1_t test_vreinterpret_v_f64m1_i64m1(vfloat64m1_t src)
{
  vint64m1_t a = vreinterpret_v_f64m1_i64m1(src);
  return a;
}

vint64m2_t test_vreinterpret_v_f64m2_i64m2(vfloat64m2_t src)
{
  vint64m2_t a = vreinterpret_v_f64m2_i64m2(src);
  return a;
}

vint64m4_t test_vreinterpret_v_f64m4_i64m4(vfloat64m4_t src)
{
  vint64m4_t a = vreinterpret_v_f64m4_i64m4(src);
  return a;
}

vint64m8_t test_vreinterpret_v_f64m8_i64m8(vfloat64m8_t src)
{
  vint64m8_t a = vreinterpret_v_f64m8_i64m8(src);
  return a;
}

vuint64m1_t test_vreinterpret_v_f64m1_u64m1(vfloat64m1_t src)
{
  vuint64m1_t a = vreinterpret_v_f64m1_u64m1(src);
  return a;
}

vuint64m2_t test_vreinterpret_v_f64m2_u64m2(vfloat64m2_t src)
{
  vuint64m2_t a = vreinterpret_v_f64m2_u64m2(src);
  return a;
}

vuint64m4_t test_vreinterpret_v_f64m4_u64m4(vfloat64m4_t src)
{
  vuint64m4_t a = vreinterpret_v_f64m4_u64m4(src);
  return a;
}

vuint64m8_t test_vreinterpret_v_f64m8_u64m8(vfloat64m8_t src)
{
  vuint64m8_t a = vreinterpret_v_f64m8_u64m8(src);
  return a;
}

/* Reinterpret between different SEW under the same LMUL */

vint16mf4_t test_vreinterpret_v_i8mf4_i16mf4(vint8mf4_t src)
{
  vint16mf4_t a = vreinterpret_v_i8mf4_i16mf4(src);
  return a;
}

vint16mf2_t test_vreinterpret_v_i8mf2_i16mf2(vint8mf2_t src)
{
  vint16mf2_t a = vreinterpret_v_i8mf2_i16mf2(src);
  return a;
}

vint16m1_t test_vreinterpret_v_i8m1_i16m1(vint8m1_t src)
{
  vint16m1_t a = vreinterpret_v_i8m1_i16m1(src);
  return a;
}

vint16m2_t test_vreinterpret_v_i8m2_i16m2(vint8m2_t src)
{
  vint16m2_t a = vreinterpret_v_i8m2_i16m2(src);
  return a;
}

vint16m4_t test_vreinterpret_v_i8m4_i16m4(vint8m4_t src)
{
  vint16m4_t a = vreinterpret_v_i8m4_i16m4(src);
  return a;
}

vint16m8_t test_vreinterpret_v_i8m8_i16m8(vint8m8_t src)
{
  vint16m8_t a = vreinterpret_v_i8m8_i16m8(src);
  return a;
}

vint32mf2_t test_vreinterpret_v_i8mf2_i32mf2(vint8mf2_t src)
{
  vint32mf2_t a = vreinterpret_v_i8mf2_i32mf2(src);
  return a;
}

vint32m1_t test_vreinterpret_v_i8m1_i32m1(vint8m1_t src)
{
  vint32m1_t a = vreinterpret_v_i8m1_i32m1(src);
  return a;
}

vint32m2_t test_vreinterpret_v_i8m2_i32m2(vint8m2_t src)
{
  vint32m2_t a = vreinterpret_v_i8m2_i32m2(src);
  return a;
}

vint32m4_t test_vreinterpret_v_i8m4_i32m4(vint8m4_t src)
{
  vint32m4_t a = vreinterpret_v_i8m4_i32m4(src);
  return a;
}

vint32m8_t test_vreinterpret_v_i8m8_i32m8(vint8m8_t src)
{
  vint32m8_t a = vreinterpret_v_i8m8_i32m8(src);
  return a;
}

vint64m1_t test_vreinterpret_v_i8m1_i64m1(vint8m1_t src)
{
  vint64m1_t a = vreinterpret_v_i8m1_i64m1(src);
  return a;
}

vint64m2_t test_vreinterpret_v_i8m2_i64m2(vint8m2_t src)
{
  vint64m2_t a = vreinterpret_v_i8m2_i64m2(src);
  return a;
}

vint64m4_t test_vreinterpret_v_i8m4_i64m4(vint8m4_t src)
{
  vint64m4_t a = vreinterpret_v_i8m4_i64m4(src);
  return a;
}

vint64m8_t test_vreinterpret_v_i8m8_i64m8(vint8m8_t src)
{
  vint64m8_t a = vreinterpret_v_i8m8_i64m8(src);
  return a;
}

vint8mf4_t test_vreinterpret_v_i16mf4_i8mf4(vint16mf4_t src)
{
  vint8mf4_t a = vreinterpret_v_i16mf4_i8mf4(src);
  return a;
}

vint8mf2_t test_vreinterpret_v_i16mf2_i8mf2(vint16mf2_t src)
{
  vint8mf2_t a = vreinterpret_v_i16mf2_i8mf2(src);
  return a;
}

vint8m1_t test_vreinterpret_v_i16m1_i8m1(vint16m1_t src)
{
  vint8m1_t a = vreinterpret_v_i16m1_i8m1(src);
  return a;
}

vint8m2_t test_vreinterpret_v_i16m2_i8m2(vint16m2_t src)
{
  vint8m2_t a = vreinterpret_v_i16m2_i8m2(src);
  return a;
}

vint8m4_t test_vreinterpret_v_i16m4_i8m4(vint16m4_t src)
{
  vint8m4_t a = vreinterpret_v_i16m4_i8m4(src);
  return a;
}

vint8m8_t test_vreinterpret_v_i16m8_i8m8(vint16m8_t src)
{
  vint8m8_t a = vreinterpret_v_i16m8_i8m8(src);
  return a;
}

vint32mf2_t test_vreinterpret_v_i16mf2_i32mf2(vint16mf2_t src)
{
  vint32mf2_t a = vreinterpret_v_i16mf2_i32mf2(src);
  return a;
}

vint32m1_t test_vreinterpret_v_i16m1_i32m1(vint16m1_t src)
{
  vint32m1_t a = vreinterpret_v_i16m1_i32m1(src);
  return a;
}

vint32m2_t test_vreinterpret_v_i16m2_i32m2(vint16m2_t src)
{
  vint32m2_t a = vreinterpret_v_i16m2_i32m2(src);
  return a;
}

vint32m4_t test_vreinterpret_v_i16m4_i32m4(vint16m4_t src)
{
  vint32m4_t a = vreinterpret_v_i16m4_i32m4(src);
  return a;
}

vint32m8_t test_vreinterpret_v_i16m8_i32m8(vint16m8_t src)
{
  vint32m8_t a = vreinterpret_v_i16m8_i32m8(src);
  return a;
}

vint64m1_t test_vreinterpret_v_i16m1_i64m1(vint16m1_t src)
{
  vint64m1_t a = vreinterpret_v_i16m1_i64m1(src);
  return a;
}

vint64m2_t test_vreinterpret_v_i16m2_i64m2(vint16m2_t src)
{
  vint64m2_t a = vreinterpret_v_i16m2_i64m2(src);
  return a;
}

vint64m4_t test_vreinterpret_v_i16m4_i64m4(vint16m4_t src)
{
  vint64m4_t a = vreinterpret_v_i16m4_i64m4(src);
  return a;
}

vint64m8_t test_vreinterpret_v_i16m8_i64m8(vint16m8_t src)
{
  vint64m8_t a = vreinterpret_v_i16m8_i64m8(src);
  return a;
}

vint8mf2_t test_vreinterpret_v_i32mf2_i8mf2(vint32mf2_t src)
{
  vint8mf2_t a = vreinterpret_v_i32mf2_i8mf2(src);
  return a;
}

vint8m1_t test_vreinterpret_v_i32m1_i8m1(vint32m1_t src)
{
  vint8m1_t a = vreinterpret_v_i32m1_i8m1(src);
  return a;
}

vint8m2_t test_vreinterpret_v_i32m2_i8m2(vint32m2_t src)
{
  vint8m2_t a = vreinterpret_v_i32m2_i8m2(src);
  return a;
}

vint8m4_t test_vreinterpret_v_i32m4_i8m4(vint32m4_t src)
{
  vint8m4_t a = vreinterpret_v_i32m4_i8m4(src);
  return a;
}

vint8m8_t test_vreinterpret_v_i32m8_i8m8(vint32m8_t src)
{
  vint8m8_t a = vreinterpret_v_i32m8_i8m8(src);
  return a;
}

vint16mf2_t test_vreinterpret_v_i32mf2_i16mf2(vint32mf2_t src)
{
  vint16mf2_t a = vreinterpret_v_i32mf2_i16mf2(src);
  return a;
}

vint16m1_t test_vreinterpret_v_i32m1_i16m1(vint32m1_t src)
{
  vint16m1_t a = vreinterpret_v_i32m1_i16m1(src);
  return a;
}

vint16m2_t test_vreinterpret_v_i32m2_i16m2(vint32m2_t src)
{
  vint16m2_t a = vreinterpret_v_i32m2_i16m2(src);
  return a;
}

vint16m4_t test_vreinterpret_v_i32m4_i16m4(vint32m4_t src)
{
  vint16m4_t a = vreinterpret_v_i32m4_i16m4(src);
  return a;
}

vint16m8_t test_vreinterpret_v_i32m8_i16m8(vint32m8_t src)
{
  vint16m8_t a = vreinterpret_v_i32m8_i16m8(src);
  return a;
}

vint64m1_t test_vreinterpret_v_i32m1_i64m1(vint32m1_t src)
{
  vint64m1_t a = vreinterpret_v_i32m1_i64m1(src);
  return a;
}

vint64m2_t test_vreinterpret_v_i32m2_i64m2(vint32m2_t src)
{
  vint64m2_t a = vreinterpret_v_i32m2_i64m2(src);
  return a;
}

vint64m4_t test_vreinterpret_v_i32m4_i64m4(vint32m4_t src)
{
  vint64m4_t a = vreinterpret_v_i32m4_i64m4(src);
  return a;
}

vint64m8_t test_vreinterpret_v_i32m8_i64m8(vint32m8_t src)
{
  vint64m8_t a = vreinterpret_v_i32m8_i64m8(src);
  return a;
}

vint8m1_t test_vreinterpret_v_i64m1_i8m1(vint64m1_t src)
{
  vint8m1_t a = vreinterpret_v_i64m1_i8m1(src);
  return a;
}

vint8m2_t test_vreinterpret_v_i64m2_i8m2(vint64m2_t src)
{
  vint8m2_t a = vreinterpret_v_i64m2_i8m2(src);
  return a;
}

vint8m4_t test_vreinterpret_v_i64m4_i8m4(vint64m4_t src)
{
  vint8m4_t a = vreinterpret_v_i64m4_i8m4(src);
  return a;
}

vint8m8_t test_vreinterpret_v_i64m8_i8m8(vint64m8_t src)
{
  vint8m8_t a = vreinterpret_v_i64m8_i8m8(src);
  return a;
}

vint16m1_t test_vreinterpret_v_i64m1_i16m1(vint64m1_t src)
{
  vint16m1_t a = vreinterpret_v_i64m1_i16m1(src);
  return a;
}

vint16m2_t test_vreinterpret_v_i64m2_i16m2(vint64m2_t src)
{
  vint16m2_t a = vreinterpret_v_i64m2_i16m2(src);
  return a;
}

vint16m4_t test_vreinterpret_v_i64m4_i16m4(vint64m4_t src)
{
  vint16m4_t a = vreinterpret_v_i64m4_i16m4(src);
  return a;
}

vint16m8_t test_vreinterpret_v_i64m8_i16m8(vint64m8_t src)
{
  vint16m8_t a = vreinterpret_v_i64m8_i16m8(src);
  return a;
}

vint32m1_t test_vreinterpret_v_i64m1_i32m1(vint64m1_t src)
{
  vint32m1_t a = vreinterpret_v_i64m1_i32m1(src);
  return a;
}

vint32m2_t test_vreinterpret_v_i64m2_i32m2(vint64m2_t src)
{
  vint32m2_t a = vreinterpret_v_i64m2_i32m2(src);
  return a;
}

vint32m4_t test_vreinterpret_v_i64m4_i32m4(vint64m4_t src)
{
  vint32m4_t a = vreinterpret_v_i64m4_i32m4(src);
  return a;
}

vint32m8_t test_vreinterpret_v_i64m8_i32m8(vint64m8_t src)
{
  vint32m8_t a = vreinterpret_v_i64m8_i32m8(src);
  return a;
}

vuint16mf4_t test_vreinterpret_v_u8mf4_u16mf4(vuint8mf4_t src)
{
  vuint16mf4_t a = vreinterpret_v_u8mf4_u16mf4(src);
  return a;
}

vuint16mf2_t test_vreinterpret_v_u8mf2_u16mf2(vuint8mf2_t src)
{
  vuint16mf2_t a = vreinterpret_v_u8mf2_u16mf2(src);
  return a;
}

vuint16m1_t test_vreinterpret_v_u8m1_u16m1(vuint8m1_t src)
{
  vuint16m1_t a = vreinterpret_v_u8m1_u16m1(src);
  return a;
}

vuint16m2_t test_vreinterpret_v_u8m2_u16m2(vuint8m2_t src)
{
  vuint16m2_t a = vreinterpret_v_u8m2_u16m2(src);
  return a;
}

vuint16m4_t test_vreinterpret_v_u8m4_u16m4(vuint8m4_t src)
{
  vuint16m4_t a = vreinterpret_v_u8m4_u16m4(src);
  return a;
}

vuint16m8_t test_vreinterpret_v_u8m8_u16m8(vuint8m8_t src)
{
  vuint16m8_t a = vreinterpret_v_u8m8_u16m8(src);
  return a;
}

vuint32mf2_t test_vreinterpret_v_u8mf2_u32mf2(vuint8mf2_t src)
{
  vuint32mf2_t a = vreinterpret_v_u8mf2_u32mf2(src);
  return a;
}

vuint32m1_t test_vreinterpret_v_u8m1_u32m1(vuint8m1_t src)
{
  vuint32m1_t a = vreinterpret_v_u8m1_u32m1(src);
  return a;
}

vuint32m2_t test_vreinterpret_v_u8m2_u32m2(vuint8m2_t src)
{
  vuint32m2_t a = vreinterpret_v_u8m2_u32m2(src);
  return a;
}

vuint32m4_t test_vreinterpret_v_u8m4_u32m4(vuint8m4_t src)
{
  vuint32m4_t a = vreinterpret_v_u8m4_u32m4(src);
  return a;
}

vuint32m8_t test_vreinterpret_v_u8m8_u32m8(vuint8m8_t src)
{
  vuint32m8_t a = vreinterpret_v_u8m8_u32m8(src);
  return a;
}

vuint64m1_t test_vreinterpret_v_u8m1_u64m1(vuint8m1_t src)
{
  vuint64m1_t a = vreinterpret_v_u8m1_u64m1(src);
  return a;
}

vuint64m2_t test_vreinterpret_v_u8m2_u64m2(vuint8m2_t src)
{
  vuint64m2_t a = vreinterpret_v_u8m2_u64m2(src);
  return a;
}

vuint64m4_t test_vreinterpret_v_u8m4_u64m4(vuint8m4_t src)
{
  vuint64m4_t a = vreinterpret_v_u8m4_u64m4(src);
  return a;
}

vuint64m8_t test_vreinterpret_v_u8m8_u64m8(vuint8m8_t src)
{
  vuint64m8_t a = vreinterpret_v_u8m8_u64m8(src);
  return a;
}

vuint8mf4_t test_vreinterpret_v_u16mf4_u8mf4(vuint16mf4_t src)
{
  vuint8mf4_t a = vreinterpret_v_u16mf4_u8mf4(src);
  return a;
}

vuint8mf2_t test_vreinterpret_v_u16mf2_u8mf2(vuint16mf2_t src)
{
  vuint8mf2_t a = vreinterpret_v_u16mf2_u8mf2(src);
  return a;
}

vuint8m1_t test_vreinterpret_v_u16m1_u8m1(vuint16m1_t src)
{
  vuint8m1_t a = vreinterpret_v_u16m1_u8m1(src);
  return a;
}

vuint8m2_t test_vreinterpret_v_u16m2_u8m2(vuint16m2_t src)
{
  vuint8m2_t a = vreinterpret_v_u16m2_u8m2(src);
  return a;
}

vuint8m4_t test_vreinterpret_v_u16m4_u8m4(vuint16m4_t src)
{
  vuint8m4_t a = vreinterpret_v_u16m4_u8m4(src);
  return a;
}

vuint8m8_t test_vreinterpret_v_u16m8_u8m8(vuint16m8_t src)
{
  vuint8m8_t a = vreinterpret_v_u16m8_u8m8(src);
  return a;
}

vuint32mf2_t test_vreinterpret_v_u16mf2_u32mf2(vuint16mf2_t src)
{
  vuint32mf2_t a = vreinterpret_v_u16mf2_u32mf2(src);
  return a;
}

vuint32m1_t test_vreinterpret_v_u16m1_u32m1(vuint16m1_t src)
{
  vuint32m1_t a = vreinterpret_v_u16m1_u32m1(src);
  return a;
}

vuint32m2_t test_vreinterpret_v_u16m2_u32m2(vuint16m2_t src)
{
  vuint32m2_t a = vreinterpret_v_u16m2_u32m2(src);
  return a;
}

vuint32m4_t test_vreinterpret_v_u16m4_u32m4(vuint16m4_t src)
{
  vuint32m4_t a = vreinterpret_v_u16m4_u32m4(src);
  return a;
}

vuint32m8_t test_vreinterpret_v_u16m8_u32m8(vuint16m8_t src)
{
  vuint32m8_t a = vreinterpret_v_u16m8_u32m8(src);
  return a;
}

vuint64m1_t test_vreinterpret_v_u16m1_u64m1(vuint16m1_t src)
{
  vuint64m1_t a = vreinterpret_v_u16m1_u64m1(src);
  return a;
}

vuint64m2_t test_vreinterpret_v_u16m2_u64m2(vuint16m2_t src)
{
  vuint64m2_t a = vreinterpret_v_u16m2_u64m2(src);
  return a;
}

vuint64m4_t test_vreinterpret_v_u16m4_u64m4(vuint16m4_t src)
{
  vuint64m4_t a = vreinterpret_v_u16m4_u64m4(src);
  return a;
}

vuint64m8_t test_vreinterpret_v_u16m8_u64m8(vuint16m8_t src)
{
  vuint64m8_t a = vreinterpret_v_u16m8_u64m8(src);
  return a;
}

vuint8mf2_t test_vreinterpret_v_u32mf2_u8mf2(vuint32mf2_t src)
{
  vuint8mf2_t a = vreinterpret_v_u32mf2_u8mf2(src);
  return a;
}

vuint8m1_t test_vreinterpret_v_u32m1_u8m1(vuint32m1_t src)
{
  vuint8m1_t a = vreinterpret_v_u32m1_u8m1(src);
  return a;
}

vuint8m2_t test_vreinterpret_v_u32m2_u8m2(vuint32m2_t src)
{
  vuint8m2_t a = vreinterpret_v_u32m2_u8m2(src);
  return a;
}

vuint8m4_t test_vreinterpret_v_u32m4_u8m4(vuint32m4_t src)
{
  vuint8m4_t a = vreinterpret_v_u32m4_u8m4(src);
  return a;
}

vuint8m8_t test_vreinterpret_v_u32m8_u8m8(vuint32m8_t src)
{
  vuint8m8_t a = vreinterpret_v_u32m8_u8m8(src);
  return a;
}

vuint16mf2_t test_vreinterpret_v_u32mf2_u16mf2(vuint32mf2_t src)
{
  vuint16mf2_t a = vreinterpret_v_u32mf2_u16mf2(src);
  return a;
}

vuint16m1_t test_vreinterpret_v_u32m1_u16m1(vuint32m1_t src)
{
  vuint16m1_t a = vreinterpret_v_u32m1_u16m1(src);
  return a;
}

vuint16m2_t test_vreinterpret_v_u32m2_u16m2(vuint32m2_t src)
{
  vuint16m2_t a = vreinterpret_v_u32m2_u16m2(src);
  return a;
}

vuint16m4_t test_vreinterpret_v_u32m4_u16m4(vuint32m4_t src)
{
  vuint16m4_t a = vreinterpret_v_u32m4_u16m4(src);
  return a;
}

vuint16m8_t test_vreinterpret_v_u32m8_u16m8(vuint32m8_t src)
{
  vuint16m8_t a = vreinterpret_v_u32m8_u16m8(src);
  return a;
}

vuint64m1_t test_vreinterpret_v_u32m1_u64m1(vuint32m1_t src)
{
  vuint64m1_t a = vreinterpret_v_u32m1_u64m1(src);
  return a;
}

vuint64m2_t test_vreinterpret_v_u32m2_u64m2(vuint32m2_t src)
{
  vuint64m2_t a = vreinterpret_v_u32m2_u64m2(src);
  return a;
}

vuint64m4_t test_vreinterpret_v_u32m4_u64m4(vuint32m4_t src)
{
  vuint64m4_t a = vreinterpret_v_u32m4_u64m4(src);
  return a;
}

vuint64m8_t test_vreinterpret_v_u32m8_u64m8(vuint32m8_t src)
{
  vuint64m8_t a = vreinterpret_v_u32m8_u64m8(src);
  return a;
}

vuint8m1_t test_vreinterpret_v_u64m1_u8m1(vuint64m1_t src)
{
  vuint8m1_t a = vreinterpret_v_u64m1_u8m1(src);
  return a;
}

vuint8m2_t test_vreinterpret_v_u64m2_u8m2(vuint64m2_t src)
{
  vuint8m2_t a = vreinterpret_v_u64m2_u8m2(src);
  return a;
}

vuint8m4_t test_vreinterpret_v_u64m4_u8m4(vuint64m4_t src)
{
  vuint8m4_t a = vreinterpret_v_u64m4_u8m4(src);
  return a;
}

vuint8m8_t test_vreinterpret_v_u64m8_u8m8(vuint64m8_t src)
{
  vuint8m8_t a = vreinterpret_v_u64m8_u8m8(src);
  return a;
}

vuint16m1_t test_vreinterpret_v_u64m1_u16m1(vuint64m1_t src)
{
  vuint16m1_t a = vreinterpret_v_u64m1_u16m1(src);
  return a;
}

vuint16m2_t test_vreinterpret_v_u64m2_u16m2(vuint64m2_t src)
{
  vuint16m2_t a = vreinterpret_v_u64m2_u16m2(src);
  return a;
}

vuint16m4_t test_vreinterpret_v_u64m4_u16m4(vuint64m4_t src)
{
  vuint16m4_t a = vreinterpret_v_u64m4_u16m4(src);
  return a;
}

vuint16m8_t test_vreinterpret_v_u64m8_u16m8(vuint64m8_t src)
{
  vuint16m8_t a = vreinterpret_v_u64m8_u16m8(src);
  return a;
}

vuint32m1_t test_vreinterpret_v_u64m1_u32m1(vuint64m1_t src)
{
  vuint32m1_t a = vreinterpret_v_u64m1_u32m1(src);
  return a;
}

vuint32m2_t test_vreinterpret_v_u64m2_u32m2(vuint64m2_t src)
{
  vuint32m2_t a = vreinterpret_v_u64m2_u32m2(src);
  return a;
}

vuint32m4_t test_vreinterpret_v_u64m4_u32m4(vuint64m4_t src)
{
  vuint32m4_t a = vreinterpret_v_u64m4_u32m4(src);
  return a;
}

vuint32m8_t test_vreinterpret_v_u64m8_u32m8(vuint64m8_t src)
{
  vuint32m8_t a = vreinterpret_v_u64m8_u32m8(src);
  return a;
}

vint8mf4_t test_vlmul_ext_v_i8mf8_i8mf4(vint8mf8_t op1)
{
  vint8mf4_t a = vlmul_ext_v_i8mf8_i8mf4(op1);
  return a;
}

vint8mf2_t test_vlmul_ext_v_i8mf8_i8mf2(vint8mf8_t op1)
{
  vint8mf2_t a = vlmul_ext_v_i8mf8_i8mf2(op1);
  return a;
}

vint8m1_t test_vlmul_ext_v_i8mf8_i8m1(vint8mf8_t op1)
{
  vint8m1_t a = vlmul_ext_v_i8mf8_i8m1(op1);
  return a;
}

vint8m2_t test_vlmul_ext_v_i8mf8_i8m2(vint8mf8_t op1)
{
  vint8m2_t a = vlmul_ext_v_i8mf8_i8m2(op1);
  return a;
}

vint8m4_t test_vlmul_ext_v_i8mf8_i8m4(vint8mf8_t op1)
{
  vint8m4_t a = vlmul_ext_v_i8mf8_i8m4(op1);
  return a;
}

vint8m8_t test_vlmul_ext_v_i8mf8_i8m8(vint8mf8_t op1)
{
  vint8m8_t a = vlmul_ext_v_i8mf8_i8m8(op1);
  return a;
}

vint8mf2_t test_vlmul_ext_v_i8mf4_i8mf2(vint8mf4_t op1)
{
  vint8mf2_t a = vlmul_ext_v_i8mf4_i8mf2(op1);
  return a;
}

vint8m1_t test_vlmul_ext_v_i8mf4_i8m1(vint8mf4_t op1)
{
  vint8m1_t a = vlmul_ext_v_i8mf4_i8m1(op1);
  return a;
}

vint8m2_t test_vlmul_ext_v_i8mf4_i8m2(vint8mf4_t op1)
{
  vint8m2_t a = vlmul_ext_v_i8mf4_i8m2(op1);
  return a;
}

vint8m4_t test_vlmul_ext_v_i8mf4_i8m4(vint8mf4_t op1)
{
  vint8m4_t a = vlmul_ext_v_i8mf4_i8m4(op1);
  return a;
}

vint8m8_t test_vlmul_ext_v_i8mf4_i8m8(vint8mf4_t op1)
{
  vint8m8_t a = vlmul_ext_v_i8mf4_i8m8(op1);
  return a;
}

vint8m1_t test_vlmul_ext_v_i8mf2_i8m1(vint8mf2_t op1)
{
  vint8m1_t a = vlmul_ext_v_i8mf2_i8m1(op1);
  return a;
}

vint8m2_t test_vlmul_ext_v_i8mf2_i8m2(vint8mf2_t op1)
{
  vint8m2_t a = vlmul_ext_v_i8mf2_i8m2(op1);
  return a;
}

vint8m4_t test_vlmul_ext_v_i8mf2_i8m4(vint8mf2_t op1)
{
  vint8m4_t a = vlmul_ext_v_i8mf2_i8m4(op1);
  return a;
}

vint8m8_t test_vlmul_ext_v_i8mf2_i8m8(vint8mf2_t op1)
{
  vint8m8_t a = vlmul_ext_v_i8mf2_i8m8(op1);
  return a;
}

vint8m2_t test_vlmul_ext_v_i8m1_i8m2(vint8m1_t op1)
{
  vint8m2_t a = vlmul_ext_v_i8m1_i8m2(op1);
  return a;
}

vint8m4_t test_vlmul_ext_v_i8m1_i8m4(vint8m1_t op1)
{
  vint8m4_t a = vlmul_ext_v_i8m1_i8m4(op1);
  return a;
}

vint8m8_t test_vlmul_ext_v_i8m1_i8m8(vint8m1_t op1)
{
  vint8m8_t a = vlmul_ext_v_i8m1_i8m8(op1);
  return a;
}

vint8m4_t test_vlmul_ext_v_i8m2_i8m4(vint8m2_t op1)
{
  vint8m4_t a = vlmul_ext_v_i8m2_i8m4(op1);
  return a;
}

vint8m8_t test_vlmul_ext_v_i8m2_i8m8(vint8m2_t op1)
{
  vint8m8_t a = vlmul_ext_v_i8m2_i8m8(op1);
  return a;
}

vint8m8_t test_vlmul_ext_v_i8m4_i8m8(vint8m4_t op1)
{
  vint8m8_t a = vlmul_ext_v_i8m4_i8m8(op1);
  return a;
}

vint16mf2_t test_vlmul_ext_v_i16mf4_i16mf2(vint16mf4_t op1)
{
  vint16mf2_t a = vlmul_ext_v_i16mf4_i16mf2(op1);
  return a;
}

vint16m1_t test_vlmul_ext_v_i16mf4_i16m1(vint16mf4_t op1)
{
  vint16m1_t a = vlmul_ext_v_i16mf4_i16m1(op1);
  return a;
}

vint16m2_t test_vlmul_ext_v_i16mf4_i16m2(vint16mf4_t op1)
{
  vint16m2_t a = vlmul_ext_v_i16mf4_i16m2(op1);
  return a;
}

vint16m4_t test_vlmul_ext_v_i16mf4_i16m4(vint16mf4_t op1)
{
  vint16m4_t a = vlmul_ext_v_i16mf4_i16m4(op1);
  return a;
}

vint16m8_t test_vlmul_ext_v_i16mf4_i16m8(vint16mf4_t op1)
{
  vint16m8_t a = vlmul_ext_v_i16mf4_i16m8(op1);
  return a;
}

vint16m1_t test_vlmul_ext_v_i16mf2_i16m1(vint16mf2_t op1)
{
  vint16m1_t a = vlmul_ext_v_i16mf2_i16m1(op1);
  return a;
}

vint16m2_t test_vlmul_ext_v_i16mf2_i16m2(vint16mf2_t op1)
{
  vint16m2_t a = vlmul_ext_v_i16mf2_i16m2(op1);
  return a;
}

vint16m4_t test_vlmul_ext_v_i16mf2_i16m4(vint16mf2_t op1)
{
  vint16m4_t a = vlmul_ext_v_i16mf2_i16m4(op1);
  return a;
}

vint16m8_t test_vlmul_ext_v_i16mf2_i16m8(vint16mf2_t op1)
{
  vint16m8_t a = vlmul_ext_v_i16mf2_i16m8(op1);
  return a;
}

vint16m2_t test_vlmul_ext_v_i16m1_i16m2(vint16m1_t op1)
{
  vint16m2_t a = vlmul_ext_v_i16m1_i16m2(op1);
  return a;
}

vint16m4_t test_vlmul_ext_v_i16m1_i16m4(vint16m1_t op1)
{
  vint16m4_t a = vlmul_ext_v_i16m1_i16m4(op1);
  return a;
}

vint16m8_t test_vlmul_ext_v_i16m1_i16m8(vint16m1_t op1)
{
  vint16m8_t a = vlmul_ext_v_i16m1_i16m8(op1);
  return a;
}

vint16m4_t test_vlmul_ext_v_i16m2_i16m4(vint16m2_t op1)
{
  vint16m4_t a = vlmul_ext_v_i16m2_i16m4(op1);
  return a;
}

vint16m8_t test_vlmul_ext_v_i16m2_i16m8(vint16m2_t op1)
{
  vint16m8_t a = vlmul_ext_v_i16m2_i16m8(op1);
  return a;
}

vint16m8_t test_vlmul_ext_v_i16m4_i16m8(vint16m4_t op1)
{
  vint16m8_t a = vlmul_ext_v_i16m4_i16m8(op1);
  return a;
}

vint32m1_t test_vlmul_ext_v_i32mf2_i32m1(vint32mf2_t op1)
{
  vint32m1_t a = vlmul_ext_v_i32mf2_i32m1(op1);
  return a;
}

vint32m2_t test_vlmul_ext_v_i32mf2_i32m2(vint32mf2_t op1)
{
  vint32m2_t a = vlmul_ext_v_i32mf2_i32m2(op1);
  return a;
}

vint32m4_t test_vlmul_ext_v_i32mf2_i32m4(vint32mf2_t op1)
{
  vint32m4_t a = vlmul_ext_v_i32mf2_i32m4(op1);
  return a;
}

vint32m8_t test_vlmul_ext_v_i32mf2_i32m8(vint32mf2_t op1)
{
  vint32m8_t a = vlmul_ext_v_i32mf2_i32m8(op1);
  return a;
}

vint32m2_t test_vlmul_ext_v_i32m1_i32m2(vint32m1_t op1)
{
  vint32m2_t a = vlmul_ext_v_i32m1_i32m2(op1);
  return a;
}

vint32m4_t test_vlmul_ext_v_i32m1_i32m4(vint32m1_t op1)
{
  vint32m4_t a = vlmul_ext_v_i32m1_i32m4(op1);
  return a;
}

vint32m8_t test_vlmul_ext_v_i32m1_i32m8(vint32m1_t op1)
{
  vint32m8_t a = vlmul_ext_v_i32m1_i32m8(op1);
  return a;
}

vint32m4_t test_vlmul_ext_v_i32m2_i32m4(vint32m2_t op1)
{
  vint32m4_t a = vlmul_ext_v_i32m2_i32m4(op1);
  return a;
}

vint32m8_t test_vlmul_ext_v_i32m2_i32m8(vint32m2_t op1)
{
  vint32m8_t a = vlmul_ext_v_i32m2_i32m8(op1);
  return a;
}

vint32m8_t test_vlmul_ext_v_i32m4_i32m8(vint32m4_t op1)
{
  vint32m8_t a = vlmul_ext_v_i32m4_i32m8(op1);
  return a;
}

vint64m2_t test_vlmul_ext_v_i64m1_i64m2(vint64m1_t op1)
{
  vint64m2_t a = vlmul_ext_v_i64m1_i64m2(op1);
  return a;
}

vint64m4_t test_vlmul_ext_v_i64m1_i64m4(vint64m1_t op1)
{
  vint64m4_t a = vlmul_ext_v_i64m1_i64m4(op1);
  return a;
}

vint64m8_t test_vlmul_ext_v_i64m1_i64m8(vint64m1_t op1)
{
  vint64m8_t a = vlmul_ext_v_i64m1_i64m8(op1);
  return a;
}

vint64m4_t test_vlmul_ext_v_i64m2_i64m4(vint64m2_t op1)
{
  vint64m4_t a = vlmul_ext_v_i64m2_i64m4(op1);
  return a;
}

vint64m8_t test_vlmul_ext_v_i64m2_i64m8(vint64m2_t op1)
{
  vint64m8_t a = vlmul_ext_v_i64m2_i64m8(op1);
  return a;
}

vint64m8_t test_vlmul_ext_v_i64m4_i64m8(vint64m4_t op1)
{
  vint64m8_t a = vlmul_ext_v_i64m4_i64m8(op1);
  return a;
}

vuint8mf4_t test_vlmul_ext_v_u8mf8_u8mf4(vuint8mf8_t op1)
{
  vuint8mf4_t a = vlmul_ext_v_u8mf8_u8mf4(op1);
  return a;
}

vuint8mf2_t test_vlmul_ext_v_u8mf8_u8mf2(vuint8mf8_t op1)
{
  vuint8mf2_t a = vlmul_ext_v_u8mf8_u8mf2(op1);
  return a;
}

vuint8m1_t test_vlmul_ext_v_u8mf8_u8m1(vuint8mf8_t op1)
{
  vuint8m1_t a = vlmul_ext_v_u8mf8_u8m1(op1);
  return a;
}

vuint8m2_t test_vlmul_ext_v_u8mf8_u8m2(vuint8mf8_t op1)
{
  vuint8m2_t a = vlmul_ext_v_u8mf8_u8m2(op1);
  return a;
}

vuint8m4_t test_vlmul_ext_v_u8mf8_u8m4(vuint8mf8_t op1)
{
  vuint8m4_t a = vlmul_ext_v_u8mf8_u8m4(op1);
  return a;
}

vuint8m8_t test_vlmul_ext_v_u8mf8_u8m8(vuint8mf8_t op1)
{
  vuint8m8_t a = vlmul_ext_v_u8mf8_u8m8(op1);
  return a;
}

vuint8mf2_t test_vlmul_ext_v_u8mf4_u8mf2(vuint8mf4_t op1)
{
  vuint8mf2_t a = vlmul_ext_v_u8mf4_u8mf2(op1);
  return a;
}

vuint8m1_t test_vlmul_ext_v_u8mf4_u8m1(vuint8mf4_t op1)
{
  vuint8m1_t a = vlmul_ext_v_u8mf4_u8m1(op1);
  return a;
}

vuint8m2_t test_vlmul_ext_v_u8mf4_u8m2(vuint8mf4_t op1)
{
  vuint8m2_t a = vlmul_ext_v_u8mf4_u8m2(op1);
  return a;
}

vuint8m4_t test_vlmul_ext_v_u8mf4_u8m4(vuint8mf4_t op1)
{
  vuint8m4_t a = vlmul_ext_v_u8mf4_u8m4(op1);
  return a;
}

vuint8m8_t test_vlmul_ext_v_u8mf4_u8m8(vuint8mf4_t op1)
{
  vuint8m8_t a = vlmul_ext_v_u8mf4_u8m8(op1);
  return a;
}

vuint8m1_t test_vlmul_ext_v_u8mf2_u8m1(vuint8mf2_t op1)
{
  vuint8m1_t a = vlmul_ext_v_u8mf2_u8m1(op1);
  return a;
}

vuint8m2_t test_vlmul_ext_v_u8mf2_u8m2(vuint8mf2_t op1)
{
  vuint8m2_t a = vlmul_ext_v_u8mf2_u8m2(op1);
  return a;
}

vuint8m4_t test_vlmul_ext_v_u8mf2_u8m4(vuint8mf2_t op1)
{
  vuint8m4_t a = vlmul_ext_v_u8mf2_u8m4(op1);
  return a;
}

vuint8m8_t test_vlmul_ext_v_u8mf2_u8m8(vuint8mf2_t op1)
{
  vuint8m8_t a = vlmul_ext_v_u8mf2_u8m8(op1);
  return a;
}

vuint8m2_t test_vlmul_ext_v_u8m1_u8m2(vuint8m1_t op1)
{
  vuint8m2_t a = vlmul_ext_v_u8m1_u8m2(op1);
  return a;
}

vuint8m4_t test_vlmul_ext_v_u8m1_u8m4(vuint8m1_t op1)
{
  vuint8m4_t a = vlmul_ext_v_u8m1_u8m4(op1);
  return a;
}

vuint8m8_t test_vlmul_ext_v_u8m1_u8m8(vuint8m1_t op1)
{
  vuint8m8_t a = vlmul_ext_v_u8m1_u8m8(op1);
  return a;
}

vuint8m4_t test_vlmul_ext_v_u8m2_u8m4(vuint8m2_t op1)
{
  vuint8m4_t a = vlmul_ext_v_u8m2_u8m4(op1);
  return a;
}

vuint8m8_t test_vlmul_ext_v_u8m2_u8m8(vuint8m2_t op1)
{
  vuint8m8_t a = vlmul_ext_v_u8m2_u8m8(op1);
  return a;
}

vuint8m8_t test_vlmul_ext_v_u8m4_u8m8(vuint8m4_t op1)
{
  vuint8m8_t a = vlmul_ext_v_u8m4_u8m8(op1);
  return a;
}

vuint16mf2_t test_vlmul_ext_v_u16mf4_u16mf2(vuint16mf4_t op1)
{
  vuint16mf2_t a = vlmul_ext_v_u16mf4_u16mf2(op1);
  return a;
}

vuint16m1_t test_vlmul_ext_v_u16mf4_u16m1(vuint16mf4_t op1)
{
  vuint16m1_t a = vlmul_ext_v_u16mf4_u16m1(op1);
  return a;
}

vuint16m2_t test_vlmul_ext_v_u16mf4_u16m2(vuint16mf4_t op1)
{
  vuint16m2_t a = vlmul_ext_v_u16mf4_u16m2(op1);
  return a;
}

vuint16m4_t test_vlmul_ext_v_u16mf4_u16m4(vuint16mf4_t op1)
{
  vuint16m4_t a = vlmul_ext_v_u16mf4_u16m4(op1);
  return a;
}

vuint16m8_t test_vlmul_ext_v_u16mf4_u16m8(vuint16mf4_t op1)
{
  vuint16m8_t a = vlmul_ext_v_u16mf4_u16m8(op1);
  return a;
}

vuint16m1_t test_vlmul_ext_v_u16mf2_u16m1(vuint16mf2_t op1)
{
  vuint16m1_t a = vlmul_ext_v_u16mf2_u16m1(op1);
  return a;
}

vuint16m2_t test_vlmul_ext_v_u16mf2_u16m2(vuint16mf2_t op1)
{
  vuint16m2_t a = vlmul_ext_v_u16mf2_u16m2(op1);
  return a;
}

vuint16m4_t test_vlmul_ext_v_u16mf2_u16m4(vuint16mf2_t op1)
{
  vuint16m4_t a = vlmul_ext_v_u16mf2_u16m4(op1);
  return a;
}

vuint16m8_t test_vlmul_ext_v_u16mf2_u16m8(vuint16mf2_t op1)
{
  vuint16m8_t a = vlmul_ext_v_u16mf2_u16m8(op1);
  return a;
}

vuint16m2_t test_vlmul_ext_v_u16m1_u16m2(vuint16m1_t op1)
{
  vuint16m2_t a = vlmul_ext_v_u16m1_u16m2(op1);
  return a;
}

vuint16m4_t test_vlmul_ext_v_u16m1_u16m4(vuint16m1_t op1)
{
  vuint16m4_t a = vlmul_ext_v_u16m1_u16m4(op1);
  return a;
}

vuint16m8_t test_vlmul_ext_v_u16m1_u16m8(vuint16m1_t op1)
{
  vuint16m8_t a = vlmul_ext_v_u16m1_u16m8(op1);
  return a;
}

vuint16m4_t test_vlmul_ext_v_u16m2_u16m4(vuint16m2_t op1)
{
  vuint16m4_t a = vlmul_ext_v_u16m2_u16m4(op1);
  return a;
}

vuint16m8_t test_vlmul_ext_v_u16m2_u16m8(vuint16m2_t op1)
{
  vuint16m8_t a = vlmul_ext_v_u16m2_u16m8(op1);
  return a;
}

vuint16m8_t test_vlmul_ext_v_u16m4_u16m8(vuint16m4_t op1)
{
  vuint16m8_t a = vlmul_ext_v_u16m4_u16m8(op1);
  return a;
}

vuint32m1_t test_vlmul_ext_v_u32mf2_u32m1(vuint32mf2_t op1)
{
  vuint32m1_t a = vlmul_ext_v_u32mf2_u32m1(op1);
  return a;
}

vuint32m2_t test_vlmul_ext_v_u32mf2_u32m2(vuint32mf2_t op1)
{
  vuint32m2_t a = vlmul_ext_v_u32mf2_u32m2(op1);
  return a;
}

vuint32m4_t test_vlmul_ext_v_u32mf2_u32m4(vuint32mf2_t op1)
{
  vuint32m4_t a = vlmul_ext_v_u32mf2_u32m4(op1);
  return a;
}

vuint32m8_t test_vlmul_ext_v_u32mf2_u32m8(vuint32mf2_t op1)
{
  vuint32m8_t a = vlmul_ext_v_u32mf2_u32m8(op1);
  return a;
}

vuint32m2_t test_vlmul_ext_v_u32m1_u32m2(vuint32m1_t op1)
{
  vuint32m2_t a = vlmul_ext_v_u32m1_u32m2(op1);
  return a;
}

vuint32m4_t test_vlmul_ext_v_u32m1_u32m4(vuint32m1_t op1)
{
  vuint32m4_t a = vlmul_ext_v_u32m1_u32m4(op1);
  return a;
}

vuint32m8_t test_vlmul_ext_v_u32m1_u32m8(vuint32m1_t op1)
{
  vuint32m8_t a = vlmul_ext_v_u32m1_u32m8(op1);
  return a;
}

vuint32m4_t test_vlmul_ext_v_u32m2_u32m4(vuint32m2_t op1)
{
  vuint32m4_t a = vlmul_ext_v_u32m2_u32m4(op1);
  return a;
}

vuint32m8_t test_vlmul_ext_v_u32m2_u32m8(vuint32m2_t op1)
{
  vuint32m8_t a = vlmul_ext_v_u32m2_u32m8(op1);
  return a;
}

vuint32m8_t test_vlmul_ext_v_u32m4_u32m8(vuint32m4_t op1)
{
  vuint32m8_t a = vlmul_ext_v_u32m4_u32m8(op1);
  return a;
}

vuint64m2_t test_vlmul_ext_v_u64m1_u64m2(vuint64m1_t op1)
{
  vuint64m2_t a = vlmul_ext_v_u64m1_u64m2(op1);
  return a;
}

vuint64m4_t test_vlmul_ext_v_u64m1_u64m4(vuint64m1_t op1)
{
  vuint64m4_t a = vlmul_ext_v_u64m1_u64m4(op1);
  return a;
}

vuint64m8_t test_vlmul_ext_v_u64m1_u64m8(vuint64m1_t op1)
{
  vuint64m8_t a = vlmul_ext_v_u64m1_u64m8(op1);
  return a;
}

vuint64m4_t test_vlmul_ext_v_u64m2_u64m4(vuint64m2_t op1)
{
  vuint64m4_t a = vlmul_ext_v_u64m2_u64m4(op1);
  return a;
}

vuint64m8_t test_vlmul_ext_v_u64m2_u64m8(vuint64m2_t op1)
{
  vuint64m8_t a = vlmul_ext_v_u64m2_u64m8(op1);
  return a;
}

vuint64m8_t test_vlmul_ext_v_u64m4_u64m8(vuint64m4_t op1)
{
  vuint64m8_t a = vlmul_ext_v_u64m4_u64m8(op1);
  return a;
}

vfloat16mf2_t test_vlmul_ext_v_f16mf4_f16mf2(vfloat16mf4_t op1)
{
  vfloat16mf2_t a = vlmul_ext_v_f16mf4_f16mf2(op1);
  return a;
}

vfloat16m1_t test_vlmul_ext_v_f16mf4_f16m1(vfloat16mf4_t op1)
{
  vfloat16m1_t a = vlmul_ext_v_f16mf4_f16m1(op1);
  return a;
}

vfloat16m2_t test_vlmul_ext_v_f16mf4_f16m2(vfloat16mf4_t op1)
{
  vfloat16m2_t a = vlmul_ext_v_f16mf4_f16m2(op1);
  return a;
}

vfloat16m4_t test_vlmul_ext_v_f16mf4_f16m4(vfloat16mf4_t op1)
{
  vfloat16m4_t a = vlmul_ext_v_f16mf4_f16m4(op1);
  return a;
}

vfloat16m8_t test_vlmul_ext_v_f16mf4_f16m8(vfloat16mf4_t op1)
{
  vfloat16m8_t a = vlmul_ext_v_f16mf4_f16m8(op1);
  return a;
}

vfloat16m1_t test_vlmul_ext_v_f16mf2_f16m1(vfloat16mf2_t op1)
{
  vfloat16m1_t a = vlmul_ext_v_f16mf2_f16m1(op1);
  return a;
}

vfloat16m2_t test_vlmul_ext_v_f16mf2_f16m2(vfloat16mf2_t op1)
{
  vfloat16m2_t a = vlmul_ext_v_f16mf2_f16m2(op1);
  return a;
}

vfloat16m4_t test_vlmul_ext_v_f16mf2_f16m4(vfloat16mf2_t op1)
{
  vfloat16m4_t a = vlmul_ext_v_f16mf2_f16m4(op1);
  return a;
}

vfloat16m8_t test_vlmul_ext_v_f16mf2_f16m8(vfloat16mf2_t op1)
{
  vfloat16m8_t a = vlmul_ext_v_f16mf2_f16m8(op1);
  return a;
}

vfloat16m2_t test_vlmul_ext_v_f16m1_f16m2(vfloat16m1_t op1)
{
  vfloat16m2_t a = vlmul_ext_v_f16m1_f16m2(op1);
  return a;
}

vfloat16m4_t test_vlmul_ext_v_f16m1_f16m4(vfloat16m1_t op1)
{
  vfloat16m4_t a = vlmul_ext_v_f16m1_f16m4(op1);
  return a;
}

vfloat16m8_t test_vlmul_ext_v_f16m1_f16m8(vfloat16m1_t op1)
{
  vfloat16m8_t a = vlmul_ext_v_f16m1_f16m8(op1);
  return a;
}

vfloat16m4_t test_vlmul_ext_v_f16m2_f16m4(vfloat16m2_t op1)
{
  vfloat16m4_t a = vlmul_ext_v_f16m2_f16m4(op1);
  return a;
}

vfloat16m8_t test_vlmul_ext_v_f16m2_f16m8(vfloat16m2_t op1)
{
  vfloat16m8_t a = vlmul_ext_v_f16m2_f16m8(op1);
  return a;
}

vfloat16m8_t test_vlmul_ext_v_f16m4_f16m8(vfloat16m4_t op1)
{
  vfloat16m8_t a = vlmul_ext_v_f16m4_f16m8(op1);
  return a;
}

vfloat32m1_t test_vlmul_ext_v_f32mf2_f32m1(vfloat32mf2_t op1)
{
  vfloat32m1_t a = vlmul_ext_v_f32mf2_f32m1(op1);
  return a;
}

vfloat32m2_t test_vlmul_ext_v_f32mf2_f32m2(vfloat32mf2_t op1)
{
  vfloat32m2_t a = vlmul_ext_v_f32mf2_f32m2(op1);
  return a;
}

vfloat32m4_t test_vlmul_ext_v_f32mf2_f32m4(vfloat32mf2_t op1)
{
  vfloat32m4_t a = vlmul_ext_v_f32mf2_f32m4(op1);
  return a;
}

vfloat32m8_t test_vlmul_ext_v_f32mf2_f32m8(vfloat32mf2_t op1)
{
  vfloat32m8_t a = vlmul_ext_v_f32mf2_f32m8(op1);
  return a;
}

vfloat32m2_t test_vlmul_ext_v_f32m1_f32m2(vfloat32m1_t op1)
{
  vfloat32m2_t a = vlmul_ext_v_f32m1_f32m2(op1);
  return a;
}

vfloat32m4_t test_vlmul_ext_v_f32m1_f32m4(vfloat32m1_t op1)
{
  vfloat32m4_t a = vlmul_ext_v_f32m1_f32m4(op1);
  return a;
}

vfloat32m8_t test_vlmul_ext_v_f32m1_f32m8(vfloat32m1_t op1)
{
  vfloat32m8_t a = vlmul_ext_v_f32m1_f32m8(op1);
  return a;
}

vfloat32m4_t test_vlmul_ext_v_f32m2_f32m4(vfloat32m2_t op1)
{
  vfloat32m4_t a = vlmul_ext_v_f32m2_f32m4(op1);
  return a;
}

vfloat32m8_t test_vlmul_ext_v_f32m2_f32m8(vfloat32m2_t op1)
{
  vfloat32m8_t a = vlmul_ext_v_f32m2_f32m8(op1);
  return a;
}

vfloat32m8_t test_vlmul_ext_v_f32m4_f32m8(vfloat32m4_t op1)
{
  vfloat32m8_t a = vlmul_ext_v_f32m4_f32m8(op1);
  return a;
}

vfloat64m2_t test_vlmul_ext_v_f64m1_f64m2(vfloat64m1_t op1)
{
  vfloat64m2_t a = vlmul_ext_v_f64m1_f64m2(op1);
  return a;
}

vfloat64m4_t test_vlmul_ext_v_f64m1_f64m4(vfloat64m1_t op1)
{
  vfloat64m4_t a = vlmul_ext_v_f64m1_f64m4(op1);
  return a;
}

vfloat64m8_t test_vlmul_ext_v_f64m1_f64m8(vfloat64m1_t op1)
{
  vfloat64m8_t a = vlmul_ext_v_f64m1_f64m8(op1);
  return a;
}

vfloat64m4_t test_vlmul_ext_v_f64m2_f64m4(vfloat64m2_t op1)
{
  vfloat64m4_t a = vlmul_ext_v_f64m2_f64m4(op1);
  return a;
}

vfloat64m8_t test_vlmul_ext_v_f64m2_f64m8(vfloat64m2_t op1)
{
  vfloat64m8_t a = vlmul_ext_v_f64m2_f64m8(op1);
  return a;
}

vfloat64m8_t test_vlmul_ext_v_f64m4_f64m8(vfloat64m4_t op1)
{
  vfloat64m8_t a = vlmul_ext_v_f64m4_f64m8(op1);
  return a;
}

vint8mf8_t test_vlmul_trunc_v_i8mf4_i8mf8(vint8mf4_t op1)
{
  vint8mf8_t a = vlmul_trunc_v_i8mf4_i8mf8(op1);
  return a;
}

vint8mf8_t test_vlmul_trunc_v_i8mf2_i8mf8(vint8mf2_t op1)
{
  vint8mf8_t a = vlmul_trunc_v_i8mf2_i8mf8(op1);
  return a;
}

vint8mf4_t test_vlmul_trunc_v_i8mf2_i8mf4(vint8mf2_t op1)
{
  vint8mf4_t a = vlmul_trunc_v_i8mf2_i8mf4(op1);
  return a;
}

vint8mf8_t test_vlmul_trunc_v_i8m1_i8mf8(vint8m1_t op1)
{
  vint8mf8_t a = vlmul_trunc_v_i8m1_i8mf8(op1);
  return a;
}

vint8mf4_t test_vlmul_trunc_v_i8m1_i8mf4(vint8m1_t op1)
{
  vint8mf4_t a = vlmul_trunc_v_i8m1_i8mf4(op1);
  return a;
}

vint8mf2_t test_vlmul_trunc_v_i8m1_i8mf2(vint8m1_t op1)
{
  vint8mf2_t a = vlmul_trunc_v_i8m1_i8mf2(op1);
  return a;
}

vint8mf8_t test_vlmul_trunc_v_i8m2_i8mf8(vint8m2_t op1)
{
  vint8mf8_t a = vlmul_trunc_v_i8m2_i8mf8(op1);
  return a;
}

vint8mf4_t test_vlmul_trunc_v_i8m2_i8mf4(vint8m2_t op1)
{
  vint8mf4_t a = vlmul_trunc_v_i8m2_i8mf4(op1);
  return a;
}

vint8mf2_t test_vlmul_trunc_v_i8m2_i8mf2(vint8m2_t op1)
{
  vint8mf2_t a = vlmul_trunc_v_i8m2_i8mf2(op1);
  return a;
}

vint8m1_t test_vlmul_trunc_v_i8m2_i8m1(vint8m2_t op1)
{
  vint8m1_t a = vlmul_trunc_v_i8m2_i8m1(op1);
  return a;
}

vint8mf8_t test_vlmul_trunc_v_i8m4_i8mf8(vint8m4_t op1)
{
  vint8mf8_t a = vlmul_trunc_v_i8m4_i8mf8(op1);
  return a;
}

vint8mf4_t test_vlmul_trunc_v_i8m4_i8mf4(vint8m4_t op1)
{
  vint8mf4_t a = vlmul_trunc_v_i8m4_i8mf4(op1);
  return a;
}

vint8mf2_t test_vlmul_trunc_v_i8m4_i8mf2(vint8m4_t op1)
{
  vint8mf2_t a = vlmul_trunc_v_i8m4_i8mf2(op1);
  return a;
}

vint8m1_t test_vlmul_trunc_v_i8m4_i8m1(vint8m4_t op1)
{
  vint8m1_t a = vlmul_trunc_v_i8m4_i8m1(op1);
  return a;
}

vint8m2_t test_vlmul_trunc_v_i8m4_i8m2(vint8m4_t op1)
{
  vint8m2_t a = vlmul_trunc_v_i8m4_i8m2(op1);
  return a;
}

vint8mf8_t test_vlmul_trunc_v_i8m8_i8mf8(vint8m8_t op1)
{
  vint8mf8_t a = vlmul_trunc_v_i8m8_i8mf8(op1);
  return a;
}

vint8mf4_t test_vlmul_trunc_v_i8m8_i8mf4(vint8m8_t op1)
{
  vint8mf4_t a = vlmul_trunc_v_i8m8_i8mf4(op1);
  return a;
}

vint8mf2_t test_vlmul_trunc_v_i8m8_i8mf2(vint8m8_t op1)
{
  vint8mf2_t a = vlmul_trunc_v_i8m8_i8mf2(op1);
  return a;
}

vint8m1_t test_vlmul_trunc_v_i8m8_i8m1(vint8m8_t op1)
{
  vint8m1_t a = vlmul_trunc_v_i8m8_i8m1(op1);
  return a;
}

vint8m2_t test_vlmul_trunc_v_i8m8_i8m2(vint8m8_t op1)
{
  vint8m2_t a = vlmul_trunc_v_i8m8_i8m2(op1);
  return a;
}

vint8m4_t test_vlmul_trunc_v_i8m8_i8m4(vint8m8_t op1)
{
  vint8m4_t a = vlmul_trunc_v_i8m8_i8m4(op1);
  return a;
}

vint16mf4_t test_vlmul_trunc_v_i16mf2_i16mf4(vint16mf2_t op1)
{
  vint16mf4_t a = vlmul_trunc_v_i16mf2_i16mf4(op1);
  return a;
}

vint16mf4_t test_vlmul_trunc_v_i16m1_i16mf4(vint16m1_t op1)
{
  vint16mf4_t a = vlmul_trunc_v_i16m1_i16mf4(op1);
  return a;
}

vint16mf2_t test_vlmul_trunc_v_i16m1_i16mf2(vint16m1_t op1)
{
  vint16mf2_t a = vlmul_trunc_v_i16m1_i16mf2(op1);
  return a;
}

vint16mf4_t test_vlmul_trunc_v_i16m2_i16mf4(vint16m2_t op1)
{
  vint16mf4_t a = vlmul_trunc_v_i16m2_i16mf4(op1);
  return a;
}

vint16mf2_t test_vlmul_trunc_v_i16m2_i16mf2(vint16m2_t op1)
{
  vint16mf2_t a = vlmul_trunc_v_i16m2_i16mf2(op1);
  return a;
}

vint16m1_t test_vlmul_trunc_v_i16m2_i16m1(vint16m2_t op1)
{
  vint16m1_t a = vlmul_trunc_v_i16m2_i16m1(op1);
  return a;
}

vint16mf4_t test_vlmul_trunc_v_i16m4_i16mf4(vint16m4_t op1)
{
  vint16mf4_t a = vlmul_trunc_v_i16m4_i16mf4(op1);
  return a;
}

vint16mf2_t test_vlmul_trunc_v_i16m4_i16mf2(vint16m4_t op1)
{
  vint16mf2_t a = vlmul_trunc_v_i16m4_i16mf2(op1);
  return a;
}

vint16m1_t test_vlmul_trunc_v_i16m4_i16m1(vint16m4_t op1)
{
  vint16m1_t a = vlmul_trunc_v_i16m4_i16m1(op1);
  return a;
}

vint16m2_t test_vlmul_trunc_v_i16m4_i16m2(vint16m4_t op1)
{
  vint16m2_t a = vlmul_trunc_v_i16m4_i16m2(op1);
  return a;
}

vint16mf4_t test_vlmul_trunc_v_i16m8_i16mf4(vint16m8_t op1)
{
  vint16mf4_t a = vlmul_trunc_v_i16m8_i16mf4(op1);
  return a;
}

vint16mf2_t test_vlmul_trunc_v_i16m8_i16mf2(vint16m8_t op1)
{
  vint16mf2_t a = vlmul_trunc_v_i16m8_i16mf2(op1);
  return a;
}

vint16m1_t test_vlmul_trunc_v_i16m8_i16m1(vint16m8_t op1)
{
  vint16m1_t a = vlmul_trunc_v_i16m8_i16m1(op1);
  return a;
}

vint16m2_t test_vlmul_trunc_v_i16m8_i16m2(vint16m8_t op1)
{
  vint16m2_t a = vlmul_trunc_v_i16m8_i16m2(op1);
  return a;
}

vint16m4_t test_vlmul_trunc_v_i16m8_i16m4(vint16m8_t op1)
{
  vint16m4_t a = vlmul_trunc_v_i16m8_i16m4(op1);
  return a;
}

vint32mf2_t test_vlmul_trunc_v_i32m1_i32mf2(vint32m1_t op1)
{
  vint32mf2_t a = vlmul_trunc_v_i32m1_i32mf2(op1);
  return a;
}

vint32mf2_t test_vlmul_trunc_v_i32m2_i32mf2(vint32m2_t op1)
{
  vint32mf2_t a = vlmul_trunc_v_i32m2_i32mf2(op1);
  return a;
}

vint32m1_t test_vlmul_trunc_v_i32m2_i32m1(vint32m2_t op1)
{
  vint32m1_t a = vlmul_trunc_v_i32m2_i32m1(op1);
  return a;
}

vint32mf2_t test_vlmul_trunc_v_i32m4_i32mf2(vint32m4_t op1)
{
  vint32mf2_t a = vlmul_trunc_v_i32m4_i32mf2(op1);
  return a;
}

vint32m1_t test_vlmul_trunc_v_i32m4_i32m1(vint32m4_t op1)
{
  vint32m1_t a = vlmul_trunc_v_i32m4_i32m1(op1);
  return a;
}

vint32m2_t test_vlmul_trunc_v_i32m4_i32m2(vint32m4_t op1)
{
  vint32m2_t a = vlmul_trunc_v_i32m4_i32m2(op1);
  return a;
}

vint32mf2_t test_vlmul_trunc_v_i32m8_i32mf2(vint32m8_t op1)
{
  vint32mf2_t a = vlmul_trunc_v_i32m8_i32mf2(op1);
  return a;
}

vint32m1_t test_vlmul_trunc_v_i32m8_i32m1(vint32m8_t op1)
{
  vint32m1_t a = vlmul_trunc_v_i32m8_i32m1(op1);
  return a;
}

vint32m2_t test_vlmul_trunc_v_i32m8_i32m2(vint32m8_t op1)
{
  vint32m2_t a = vlmul_trunc_v_i32m8_i32m2(op1);
  return a;
}

vint32m4_t test_vlmul_trunc_v_i32m8_i32m4(vint32m8_t op1)
{
  vint32m4_t a = vlmul_trunc_v_i32m8_i32m4(op1);
  return a;
}

vint64m1_t test_vlmul_trunc_v_i64m2_i64m1(vint64m2_t op1)
{
  vint64m1_t a = vlmul_trunc_v_i64m2_i64m1(op1);
  return a;
}

vint64m1_t test_vlmul_trunc_v_i64m4_i64m1(vint64m4_t op1)
{
  vint64m1_t a = vlmul_trunc_v_i64m4_i64m1(op1);
  return a;
}

vint64m2_t test_vlmul_trunc_v_i64m4_i64m2(vint64m4_t op1)
{
  vint64m2_t a = vlmul_trunc_v_i64m4_i64m2(op1);
  return a;
}

vint64m1_t test_vlmul_trunc_v_i64m8_i64m1(vint64m8_t op1)
{
  vint64m1_t a = vlmul_trunc_v_i64m8_i64m1(op1);
  return a;
}

vint64m2_t test_vlmul_trunc_v_i64m8_i64m2(vint64m8_t op1)
{
  vint64m2_t a = vlmul_trunc_v_i64m8_i64m2(op1);
  return a;
}

vint64m4_t test_vlmul_trunc_v_i64m8_i64m4(vint64m8_t op1)
{
  vint64m4_t a = vlmul_trunc_v_i64m8_i64m4(op1);
  return a;
}

vuint8mf8_t test_vlmul_trunc_v_u8mf4_u8mf8(vuint8mf4_t op1)
{
  vuint8mf8_t a = vlmul_trunc_v_u8mf4_u8mf8(op1);
  return a;
}

vuint8mf8_t test_vlmul_trunc_v_u8mf2_u8mf8(vuint8mf2_t op1)
{
  vuint8mf8_t a = vlmul_trunc_v_u8mf2_u8mf8(op1);
  return a;
}

vuint8mf4_t test_vlmul_trunc_v_u8mf2_u8mf4(vuint8mf2_t op1)
{
  vuint8mf4_t a = vlmul_trunc_v_u8mf2_u8mf4(op1);
  return a;
}

vuint8mf8_t test_vlmul_trunc_v_u8m1_u8mf8(vuint8m1_t op1)
{
  vuint8mf8_t a = vlmul_trunc_v_u8m1_u8mf8(op1);
  return a;
}

vuint8mf4_t test_vlmul_trunc_v_u8m1_u8mf4(vuint8m1_t op1)
{
  vuint8mf4_t a = vlmul_trunc_v_u8m1_u8mf4(op1);
  return a;
}

vuint8mf2_t test_vlmul_trunc_v_u8m1_u8mf2(vuint8m1_t op1)
{
  vuint8mf2_t a = vlmul_trunc_v_u8m1_u8mf2(op1);
  return a;
}

vuint8mf8_t test_vlmul_trunc_v_u8m2_u8mf8(vuint8m2_t op1)
{
  vuint8mf8_t a = vlmul_trunc_v_u8m2_u8mf8(op1);
  return a;
}

vuint8mf4_t test_vlmul_trunc_v_u8m2_u8mf4(vuint8m2_t op1)
{
  vuint8mf4_t a = vlmul_trunc_v_u8m2_u8mf4(op1);
  return a;
}

vuint8mf2_t test_vlmul_trunc_v_u8m2_u8mf2(vuint8m2_t op1)
{
  vuint8mf2_t a = vlmul_trunc_v_u8m2_u8mf2(op1);
  return a;
}

vuint8m1_t test_vlmul_trunc_v_u8m2_u8m1(vuint8m2_t op1)
{
  vuint8m1_t a = vlmul_trunc_v_u8m2_u8m1(op1);
  return a;
}

vuint8mf8_t test_vlmul_trunc_v_u8m4_u8mf8(vuint8m4_t op1)
{
  vuint8mf8_t a = vlmul_trunc_v_u8m4_u8mf8(op1);
  return a;
}

vuint8mf4_t test_vlmul_trunc_v_u8m4_u8mf4(vuint8m4_t op1)
{
  vuint8mf4_t a = vlmul_trunc_v_u8m4_u8mf4(op1);
  return a;
}

vuint8mf2_t test_vlmul_trunc_v_u8m4_u8mf2(vuint8m4_t op1)
{
  vuint8mf2_t a = vlmul_trunc_v_u8m4_u8mf2(op1);
  return a;
}

vuint8m1_t test_vlmul_trunc_v_u8m4_u8m1(vuint8m4_t op1)
{
  vuint8m1_t a = vlmul_trunc_v_u8m4_u8m1(op1);
  return a;
}

vuint8m2_t test_vlmul_trunc_v_u8m4_u8m2(vuint8m4_t op1)
{
  vuint8m2_t a = vlmul_trunc_v_u8m4_u8m2(op1);
  return a;
}

vuint8mf8_t test_vlmul_trunc_v_u8m8_u8mf8(vuint8m8_t op1)
{
  vuint8mf8_t a = vlmul_trunc_v_u8m8_u8mf8(op1);
  return a;
}

vuint8mf4_t test_vlmul_trunc_v_u8m8_u8mf4(vuint8m8_t op1)
{
  vuint8mf4_t a = vlmul_trunc_v_u8m8_u8mf4(op1);
  return a;
}

vuint8mf2_t test_vlmul_trunc_v_u8m8_u8mf2(vuint8m8_t op1)
{
  vuint8mf2_t a = vlmul_trunc_v_u8m8_u8mf2(op1);
  return a;
}

vuint8m1_t test_vlmul_trunc_v_u8m8_u8m1(vuint8m8_t op1)
{
  vuint8m1_t a = vlmul_trunc_v_u8m8_u8m1(op1);
  return a;
}

vuint8m2_t test_vlmul_trunc_v_u8m8_u8m2(vuint8m8_t op1)
{
  vuint8m2_t a = vlmul_trunc_v_u8m8_u8m2(op1);
  return a;
}

vuint8m4_t test_vlmul_trunc_v_u8m8_u8m4(vuint8m8_t op1)
{
  vuint8m4_t a = vlmul_trunc_v_u8m8_u8m4(op1);
  return a;
}

vuint16mf4_t test_vlmul_trunc_v_u16mf2_u16mf4(vuint16mf2_t op1)
{
  vuint16mf4_t a = vlmul_trunc_v_u16mf2_u16mf4(op1);
  return a;
}

vuint16mf4_t test_vlmul_trunc_v_u16m1_u16mf4(vuint16m1_t op1)
{
  vuint16mf4_t a = vlmul_trunc_v_u16m1_u16mf4(op1);
  return a;
}

vuint16mf2_t test_vlmul_trunc_v_u16m1_u16mf2(vuint16m1_t op1)
{
  vuint16mf2_t a = vlmul_trunc_v_u16m1_u16mf2(op1);
  return a;
}

vuint16mf4_t test_vlmul_trunc_v_u16m2_u16mf4(vuint16m2_t op1)
{
  vuint16mf4_t a = vlmul_trunc_v_u16m2_u16mf4(op1);
  return a;
}

vuint16mf2_t test_vlmul_trunc_v_u16m2_u16mf2(vuint16m2_t op1)
{
  vuint16mf2_t a = vlmul_trunc_v_u16m2_u16mf2(op1);
  return a;
}

vuint16m1_t test_vlmul_trunc_v_u16m2_u16m1(vuint16m2_t op1)
{
  vuint16m1_t a = vlmul_trunc_v_u16m2_u16m1(op1);
  return a;
}

vuint16mf4_t test_vlmul_trunc_v_u16m4_u16mf4(vuint16m4_t op1)
{
  vuint16mf4_t a = vlmul_trunc_v_u16m4_u16mf4(op1);
  return a;
}

vuint16mf2_t test_vlmul_trunc_v_u16m4_u16mf2(vuint16m4_t op1)
{
  vuint16mf2_t a = vlmul_trunc_v_u16m4_u16mf2(op1);
  return a;
}

vuint16m1_t test_vlmul_trunc_v_u16m4_u16m1(vuint16m4_t op1)
{
  vuint16m1_t a = vlmul_trunc_v_u16m4_u16m1(op1);
  return a;
}

vuint16m2_t test_vlmul_trunc_v_u16m4_u16m2(vuint16m4_t op1)
{
  vuint16m2_t a = vlmul_trunc_v_u16m4_u16m2(op1);
  return a;
}

vuint16mf4_t test_vlmul_trunc_v_u16m8_u16mf4(vuint16m8_t op1)
{
  vuint16mf4_t a = vlmul_trunc_v_u16m8_u16mf4(op1);
  return a;
}

vuint16mf2_t test_vlmul_trunc_v_u16m8_u16mf2(vuint16m8_t op1)
{
  vuint16mf2_t a = vlmul_trunc_v_u16m8_u16mf2(op1);
  return a;
}

vuint16m1_t test_vlmul_trunc_v_u16m8_u16m1(vuint16m8_t op1)
{
  vuint16m1_t a = vlmul_trunc_v_u16m8_u16m1(op1);
  return a;
}

vuint16m2_t test_vlmul_trunc_v_u16m8_u16m2(vuint16m8_t op1)
{
  vuint16m2_t a = vlmul_trunc_v_u16m8_u16m2(op1);
  return a;
}

vuint16m4_t test_vlmul_trunc_v_u16m8_u16m4(vuint16m8_t op1)
{
  vuint16m4_t a = vlmul_trunc_v_u16m8_u16m4(op1);
  return a;
}

vuint32mf2_t test_vlmul_trunc_v_u32m1_u32mf2(vuint32m1_t op1)
{
  vuint32mf2_t a = vlmul_trunc_v_u32m1_u32mf2(op1);
  return a;
}

vuint32mf2_t test_vlmul_trunc_v_u32m2_u32mf2(vuint32m2_t op1)
{
  vuint32mf2_t a = vlmul_trunc_v_u32m2_u32mf2(op1);
  return a;
}

vuint32m1_t test_vlmul_trunc_v_u32m2_u32m1(vuint32m2_t op1)
{
  vuint32m1_t a = vlmul_trunc_v_u32m2_u32m1(op1);
  return a;
}

vuint32mf2_t test_vlmul_trunc_v_u32m4_u32mf2(vuint32m4_t op1)
{
  vuint32mf2_t a = vlmul_trunc_v_u32m4_u32mf2(op1);
  return a;
}

vuint32m1_t test_vlmul_trunc_v_u32m4_u32m1(vuint32m4_t op1)
{
  vuint32m1_t a = vlmul_trunc_v_u32m4_u32m1(op1);
  return a;
}

vuint32m2_t test_vlmul_trunc_v_u32m4_u32m2(vuint32m4_t op1)
{
  vuint32m2_t a = vlmul_trunc_v_u32m4_u32m2(op1);
  return a;
}

vuint32mf2_t test_vlmul_trunc_v_u32m8_u32mf2(vuint32m8_t op1)
{
  vuint32mf2_t a = vlmul_trunc_v_u32m8_u32mf2(op1);
  return a;
}

vuint32m1_t test_vlmul_trunc_v_u32m8_u32m1(vuint32m8_t op1)
{
  vuint32m1_t a = vlmul_trunc_v_u32m8_u32m1(op1);
  return a;
}

vuint32m2_t test_vlmul_trunc_v_u32m8_u32m2(vuint32m8_t op1)
{
  vuint32m2_t a = vlmul_trunc_v_u32m8_u32m2(op1);
  return a;
}

vuint32m4_t test_vlmul_trunc_v_u32m8_u32m4(vuint32m8_t op1)
{
  vuint32m4_t a = vlmul_trunc_v_u32m8_u32m4(op1);
  return a;
}

vuint64m1_t test_vlmul_trunc_v_u64m2_u64m1(vuint64m2_t op1)
{
  vuint64m1_t a = vlmul_trunc_v_u64m2_u64m1(op1);
  return a;
}

vuint64m1_t test_vlmul_trunc_v_u64m4_u64m1(vuint64m4_t op1)
{
  vuint64m1_t a = vlmul_trunc_v_u64m4_u64m1(op1);
  return a;
}

vuint64m2_t test_vlmul_trunc_v_u64m4_u64m2(vuint64m4_t op1)
{
  vuint64m2_t a = vlmul_trunc_v_u64m4_u64m2(op1);
  return a;
}

vuint64m1_t test_vlmul_trunc_v_u64m8_u64m1(vuint64m8_t op1)
{
  vuint64m1_t a = vlmul_trunc_v_u64m8_u64m1(op1);
  return a;
}

vuint64m2_t test_vlmul_trunc_v_u64m8_u64m2(vuint64m8_t op1)
{
  vuint64m2_t a = vlmul_trunc_v_u64m8_u64m2(op1);
  return a;
}

vuint64m4_t test_vlmul_trunc_v_u64m8_u64m4(vuint64m8_t op1)
{
  vuint64m4_t a = vlmul_trunc_v_u64m8_u64m4(op1);
  return a;
}

vfloat16mf4_t test_vlmul_trunc_v_f16mf2_f16mf4(vfloat16mf2_t op1)
{
  vfloat16mf4_t a = vlmul_trunc_v_f16mf2_f16mf4(op1);
  return a;
}

vfloat16mf4_t test_vlmul_trunc_v_f16m1_f16mf4(vfloat16m1_t op1)
{
  vfloat16mf4_t a = vlmul_trunc_v_f16m1_f16mf4(op1);
  return a;
}

vfloat16mf2_t test_vlmul_trunc_v_f16m1_f16mf2(vfloat16m1_t op1)
{
  vfloat16mf2_t a = vlmul_trunc_v_f16m1_f16mf2(op1);
  return a;
}

vfloat16mf4_t test_vlmul_trunc_v_f16m2_f16mf4(vfloat16m2_t op1)
{
  vfloat16mf4_t a = vlmul_trunc_v_f16m2_f16mf4(op1);
  return a;
}

vfloat16mf2_t test_vlmul_trunc_v_f16m2_f16mf2(vfloat16m2_t op1)
{
  vfloat16mf2_t a = vlmul_trunc_v_f16m2_f16mf2(op1);
  return a;
}

vfloat16m1_t test_vlmul_trunc_v_f16m2_f16m1(vfloat16m2_t op1)
{
  vfloat16m1_t a = vlmul_trunc_v_f16m2_f16m1(op1);
  return a;
}

vfloat16mf4_t test_vlmul_trunc_v_f16m4_f16mf4(vfloat16m4_t op1)
{
  vfloat16mf4_t a = vlmul_trunc_v_f16m4_f16mf4(op1);
  return a;
}

vfloat16mf2_t test_vlmul_trunc_v_f16m4_f16mf2(vfloat16m4_t op1)
{
  vfloat16mf2_t a = vlmul_trunc_v_f16m4_f16mf2(op1);
  return a;
}

vfloat16m1_t test_vlmul_trunc_v_f16m4_f16m1(vfloat16m4_t op1)
{
  vfloat16m1_t a = vlmul_trunc_v_f16m4_f16m1(op1);
  return a;
}

vfloat16m2_t test_vlmul_trunc_v_f16m4_f16m2(vfloat16m4_t op1)
{
  vfloat16m2_t a = vlmul_trunc_v_f16m4_f16m2(op1);
  return a;
}

vfloat16mf4_t test_vlmul_trunc_v_f16m8_f16mf4(vfloat16m8_t op1)
{
  vfloat16mf4_t a = vlmul_trunc_v_f16m8_f16mf4(op1);
  return a;
}

vfloat16mf2_t test_vlmul_trunc_v_f16m8_f16mf2(vfloat16m8_t op1)
{
  vfloat16mf2_t a = vlmul_trunc_v_f16m8_f16mf2(op1);
  return a;
}

vfloat16m1_t test_vlmul_trunc_v_f16m8_f16m1(vfloat16m8_t op1)
{
  vfloat16m1_t a = vlmul_trunc_v_f16m8_f16m1(op1);
  return a;
}

vfloat16m2_t test_vlmul_trunc_v_f16m8_f16m2(vfloat16m8_t op1)
{
  vfloat16m2_t a = vlmul_trunc_v_f16m8_f16m2(op1);
  return a;
}

vfloat16m4_t test_vlmul_trunc_v_f16m8_f16m4(vfloat16m8_t op1)
{
  vfloat16m4_t a = vlmul_trunc_v_f16m8_f16m4(op1);
  return a;
}

vfloat32mf2_t test_vlmul_trunc_v_f32m1_f32mf2(vfloat32m1_t op1)
{
  vfloat32mf2_t a = vlmul_trunc_v_f32m1_f32mf2(op1);
  return a;
}

vfloat32mf2_t test_vlmul_trunc_v_f32m2_f32mf2(vfloat32m2_t op1)
{
  vfloat32mf2_t a = vlmul_trunc_v_f32m2_f32mf2(op1);
  return a;
}

vfloat32m1_t test_vlmul_trunc_v_f32m2_f32m1(vfloat32m2_t op1)
{
  vfloat32m1_t a = vlmul_trunc_v_f32m2_f32m1(op1);
  return a;
}

vfloat32mf2_t test_vlmul_trunc_v_f32m4_f32mf2(vfloat32m4_t op1)
{
  vfloat32mf2_t a = vlmul_trunc_v_f32m4_f32mf2(op1);
  return a;
}

vfloat32m1_t test_vlmul_trunc_v_f32m4_f32m1(vfloat32m4_t op1)
{
  vfloat32m1_t a = vlmul_trunc_v_f32m4_f32m1(op1);
  return a;
}

vfloat32m2_t test_vlmul_trunc_v_f32m4_f32m2(vfloat32m4_t op1)
{
  vfloat32m2_t a = vlmul_trunc_v_f32m4_f32m2(op1);
  return a;
}

vfloat32mf2_t test_vlmul_trunc_v_f32m8_f32mf2(vfloat32m8_t op1)
{
  vfloat32mf2_t a = vlmul_trunc_v_f32m8_f32mf2(op1);
  return a;
}

vfloat32m1_t test_vlmul_trunc_v_f32m8_f32m1(vfloat32m8_t op1)
{
  vfloat32m1_t a = vlmul_trunc_v_f32m8_f32m1(op1);
  return a;
}

vfloat32m2_t test_vlmul_trunc_v_f32m8_f32m2(vfloat32m8_t op1)
{
  vfloat32m2_t a = vlmul_trunc_v_f32m8_f32m2(op1);
  return a;
}

vfloat32m4_t test_vlmul_trunc_v_f32m8_f32m4(vfloat32m8_t op1)
{
  vfloat32m4_t a = vlmul_trunc_v_f32m8_f32m4(op1);
  return a;
}

vfloat64m1_t test_vlmul_trunc_v_f64m2_f64m1(vfloat64m2_t op1)
{
  vfloat64m1_t a = vlmul_trunc_v_f64m2_f64m1(op1);
  return a;
}

vfloat64m1_t test_vlmul_trunc_v_f64m4_f64m1(vfloat64m4_t op1)
{
  vfloat64m1_t a = vlmul_trunc_v_f64m4_f64m1(op1);
  return a;
}

vfloat64m2_t test_vlmul_trunc_v_f64m4_f64m2(vfloat64m4_t op1)
{
  vfloat64m2_t a = vlmul_trunc_v_f64m4_f64m2(op1);
  return a;
}

vfloat64m1_t test_vlmul_trunc_v_f64m8_f64m1(vfloat64m8_t op1)
{
  vfloat64m1_t a = vlmul_trunc_v_f64m8_f64m1(op1);
  return a;
}

vfloat64m2_t test_vlmul_trunc_v_f64m8_f64m2(vfloat64m8_t op1)
{
  vfloat64m2_t a = vlmul_trunc_v_f64m8_f64m2(op1);
  return a;
}

vfloat64m4_t test_vlmul_trunc_v_f64m8_f64m4(vfloat64m8_t op1)
{
  vfloat64m4_t a = vlmul_trunc_v_f64m8_f64m4(op1);
  return a;
}

vint8mf8_t test_vundefined_i8mf8()
{
  vint8mf8_t a = vundefined_i8mf8();
  return a;
}

vint8mf4_t test_vundefined_i8mf4()
{
  vint8mf4_t a = vundefined_i8mf4();
  return a;
}

vint8mf2_t test_vundefined_i8mf2()
{
  vint8mf2_t a = vundefined_i8mf2();
  return a;
}

vint8m1_t test_vundefined_i8m1()
{
  vint8m1_t a = vundefined_i8m1();
  return a;
}

vint8m2_t test_vundefined_i8m2()
{
  vint8m2_t a = vundefined_i8m2();
  return a;
}

vint8m4_t test_vundefined_i8m4()
{
  vint8m4_t a = vundefined_i8m4();
  return a;
}

vint8m8_t test_vundefined_i8m8()
{
  vint8m8_t a = vundefined_i8m8();
  return a;
}

vint16mf4_t test_vundefined_i16mf4()
{
  vint16mf4_t a = vundefined_i16mf4();
  return a;
}

vint16mf2_t test_vundefined_i16mf2()
{
  vint16mf2_t a = vundefined_i16mf2();
  return a;
}

vint16m1_t test_vundefined_i16m1()
{
  vint16m1_t a = vundefined_i16m1();
  return a;
}

vint16m2_t test_vundefined_i16m2()
{
  vint16m2_t a = vundefined_i16m2();
  return a;
}

vint16m4_t test_vundefined_i16m4()
{
  vint16m4_t a = vundefined_i16m4();
  return a;
}

vint16m8_t test_vundefined_i16m8()
{
  vint16m8_t a = vundefined_i16m8();
  return a;
}

vint32mf2_t test_vundefined_i32mf2()
{
  vint32mf2_t a = vundefined_i32mf2();
  return a;
}

vint32m1_t test_vundefined_i32m1()
{
  vint32m1_t a = vundefined_i32m1();
  return a;
}

vint32m2_t test_vundefined_i32m2()
{
  vint32m2_t a = vundefined_i32m2();
  return a;
}

vint32m4_t test_vundefined_i32m4()
{
  vint32m4_t a = vundefined_i32m4();
  return a;
}

vint32m8_t test_vundefined_i32m8()
{
  vint32m8_t a = vundefined_i32m8();
  return a;
}

vint64m1_t test_vundefined_i64m1()
{
  vint64m1_t a = vundefined_i64m1();
  return a;
}

vint64m2_t test_vundefined_i64m2()
{
  vint64m2_t a = vundefined_i64m2();
  return a;
}

vint64m4_t test_vundefined_i64m4()
{
  vint64m4_t a = vundefined_i64m4();
  return a;
}

vint64m8_t test_vundefined_i64m8()
{
  vint64m8_t a = vundefined_i64m8();
  return a;
}

vuint8mf8_t test_vundefined_u8mf8()
{
  vuint8mf8_t a = vundefined_u8mf8();
  return a;
}

vuint8mf4_t test_vundefined_u8mf4()
{
  vuint8mf4_t a = vundefined_u8mf4();
  return a;
}

vuint8mf2_t test_vundefined_u8mf2()
{
  vuint8mf2_t a = vundefined_u8mf2();
  return a;
}

vuint8m1_t test_vundefined_u8m1()
{
  vuint8m1_t a = vundefined_u8m1();
  return a;
}

vuint8m2_t test_vundefined_u8m2()
{
  vuint8m2_t a = vundefined_u8m2();
  return a;
}

vuint8m4_t test_vundefined_u8m4()
{
  vuint8m4_t a = vundefined_u8m4();
  return a;
}

vuint8m8_t test_vundefined_u8m8()
{
  vuint8m8_t a = vundefined_u8m8();
  return a;
}

vuint16mf4_t test_vundefined_u16mf4()
{
  vuint16mf4_t a = vundefined_u16mf4();
  return a;
}

vuint16mf2_t test_vundefined_u16mf2()
{
  vuint16mf2_t a = vundefined_u16mf2();
  return a;
}

vuint16m1_t test_vundefined_u16m1()
{
  vuint16m1_t a = vundefined_u16m1();
  return a;
}

vuint16m2_t test_vundefined_u16m2()
{
  vuint16m2_t a = vundefined_u16m2();
  return a;
}

vuint16m4_t test_vundefined_u16m4()
{
  vuint16m4_t a = vundefined_u16m4();
  return a;
}

vuint16m8_t test_vundefined_u16m8()
{
  vuint16m8_t a = vundefined_u16m8();
  return a;
}

vuint32mf2_t test_vundefined_u32mf2()
{
  vuint32mf2_t a = vundefined_u32mf2();
  return a;
}

vuint32m1_t test_vundefined_u32m1()
{
  vuint32m1_t a = vundefined_u32m1();
  return a;
}

vuint32m2_t test_vundefined_u32m2()
{
  vuint32m2_t a = vundefined_u32m2();
  return a;
}

vuint32m4_t test_vundefined_u32m4()
{
  vuint32m4_t a = vundefined_u32m4();
  return a;
}

vuint32m8_t test_vundefined_u32m8()
{
  vuint32m8_t a = vundefined_u32m8();
  return a;
}

vuint64m1_t test_vundefined_u64m1()
{
  vuint64m1_t a = vundefined_u64m1();
  return a;
}

vuint64m2_t test_vundefined_u64m2()
{
  vuint64m2_t a = vundefined_u64m2();
  return a;
}

vuint64m4_t test_vundefined_u64m4()
{
  vuint64m4_t a = vundefined_u64m4();
  return a;
}

vuint64m8_t test_vundefined_u64m8()
{
  vuint64m8_t a = vundefined_u64m8();
  return a;
}

vfloat16mf4_t test_vundefined_f16mf4()
{
  vfloat16mf4_t a = vundefined_f16mf4();
  return a;
}

vfloat16mf2_t test_vundefined_f16mf2()
{
  vfloat16mf2_t a = vundefined_f16mf2();
  return a;
}

vfloat16m1_t test_vundefined_f16m1()
{
  vfloat16m1_t a = vundefined_f16m1();
  return a;
}

vfloat16m2_t test_vundefined_f16m2()
{
  vfloat16m2_t a = vundefined_f16m2();
  return a;
}

vfloat16m4_t test_vundefined_f16m4()
{
  vfloat16m4_t a = vundefined_f16m4();
  return a;
}

vfloat16m8_t test_vundefined_f16m8()
{
  vfloat16m8_t a = vundefined_f16m8();
  return a;
}

vfloat32mf2_t test_vundefined_f32mf2()
{
  vfloat32mf2_t a = vundefined_f32mf2();
  return a;
}

vfloat32m1_t test_vundefined_f32m1()
{
  vfloat32m1_t a = vundefined_f32m1();
  return a;
}

vfloat32m2_t test_vundefined_f32m2()
{
  vfloat32m2_t a = vundefined_f32m2();
  return a;
}

vfloat32m4_t test_vundefined_f32m4()
{
  vfloat32m4_t a = vundefined_f32m4();
  return a;
}

vfloat32m8_t test_vundefined_f32m8()
{
  vfloat32m8_t a = vundefined_f32m8();
  return a;
}

vfloat64m1_t test_vundefined_f64m1()
{
  vfloat64m1_t a = vundefined_f64m1();
  return a;
}

vfloat64m2_t test_vundefined_f64m2()
{
  vfloat64m2_t a = vundefined_f64m2();
  return a;
}

vfloat64m4_t test_vundefined_f64m4()
{
  vfloat64m4_t a = vundefined_f64m4();
  return a;
}

vfloat64m8_t test_vundefined_f64m8()
{
  vfloat64m8_t a = vundefined_f64m8();
  return a;
}
