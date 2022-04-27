/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vmv8r_v_i8m8:
**  ...
**	vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vint8m8_t 
test_vmv8r_v_i8m8(vint8m8_t src1, vint8m8_t src2)
{
  vint8m8_t dest = src2;
  return dest;
}


/*
** test_vmv8r_v_i16m8:
**  ...
**	vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vint16m8_t 
test_vmv8r_v_i16m8(vint16m8_t src1, vint16m8_t src2)
{
  vint16m8_t dest = src2;
  return dest;
}


/*
** test_vmv8r_v_i32m8:
**  ...
**	vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vint32m8_t 
test_vmv8r_v_i32m8(vint32m8_t src1, vint32m8_t src2)
{
  vint32m8_t dest = src2;
  return dest;
}


/*
** test_vmv8r_v_i64m8:
**  ...
**	vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vint64m8_t 
test_vmv8r_v_i64m8(vint64m8_t src1, vint64m8_t src2)
{
  vint64m8_t dest = src2;
  return dest;
}


/*
** test_vmv8r_v_u8m8:
**  ...
**	vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint8m8_t 
test_vmv8r_v_u8m8(vuint8m8_t src1, vuint8m8_t src2)
{
  vuint8m8_t dest = src2;
  return dest;
}


/*
** test_vmv8r_v_u16m8:
**  ...
**	vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint16m8_t 
test_vmv8r_v_u16m8(vuint16m8_t src1, vuint16m8_t src2)
{
  vuint16m8_t dest = src2;
  return dest;
}


/*
** test_vmv8r_v_u32m8:
**  ...
**	vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint32m8_t 
test_vmv8r_v_u32m8(vuint32m8_t src1, vuint32m8_t src2)
{
  vuint32m8_t dest = src2;
  return dest;
}


/*
** test_vmv8r_v_u64m8:
**  ...
**	vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
extern "C" vuint64m8_t 
test_vmv8r_v_u64m8(vuint64m8_t src1, vuint64m8_t src2)
{
  vuint64m8_t dest = src2;
  return dest;
}

