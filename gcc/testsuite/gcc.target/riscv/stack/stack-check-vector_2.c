/* { dg-do compile } */
/* { dg-options "-fno-schedule-insns -fno-schedule-insns2" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <stdint.h>
#include <riscv_vector.h>

void f (uint8_t *);
void f2 (vuint8m1_t);

/* 1*vlenb
** stack_offset1_1: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**      ...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	jr	ra
*/
void stack_offset1_1 (vuint8m1_t data, uint8_t *base)
{
  vuint8m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  *(vuint8m1_t *)base = data;
}

/* 8*vlenb
** stack_offset1_2: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	csrr	t0,vlenb
**	slli	t1,t0,3
**	sub	sp,sp,t1
**      ...
**	csrr	t0,vlenb
**	slli	t1,t0,3
**	add	sp,sp,t1
**	jr	ra
*/
void stack_offset1_2 (vuint8m8_t data, uint8_t *base)
{
  vuint8m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  *(vuint8m8_t *)base = data;
}

/* 3*vlenb
** stack_offset1_3: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	csrr	t0,vlenb
**	slli	t1,t0,2
**	sub	t1,t1,t0
**	sub	sp,sp,t1
**      ...
**	csrr	t0,vlenb
**	slli	t1,t0,2
**	sub	t1,t1,t0
**	add	sp,sp,t1
**	jr	ra
*/
void stack_offset1_3 (vuint8m1_t data, vuint8m2_t data2, uint8_t *base)
{
  vuint8m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  *(vuint8m2_t *)base = data2; 
  *(vuint8m1_t *)base = data;
}

/* 9*vlenb
** stack_offset1_4: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	csrr	t0,vlenb
**	slli	t1,t0,3
**	add	t1,t1,t0
**	sub	sp,sp,t1
**      ...
**	csrr	t0,vlenb
**	slli	t1,t0,3
**	add	t1,t1,t0
**	add	sp,sp,t1
**	jr	ra
*/
void stack_offset1_4 (vuint8m1_t data, vuint8m8_t data2, uint8_t *base)
{
  vuint8m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  *(vuint8m8_t *)base = data2; 
  *(vuint8m1_t *)base = data;
}

/* 10*vlenb
** stack_offset1_5: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	csrr	t0,vlenb
**	li	t1,10
**	mul	t1,t1,t0
**	sub	sp,sp,t1
**      ...
**	csrr	t0,vlenb
**	li	t1,10
**	mul	t1,t1,t0
**	add	sp,sp,t1
**	jr	ra
*/
void stack_offset1_5 (vuint8m2_t data, vuint8m8_t data2, uint8_t *base)
{
  vuint8m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  *(vuint8m8_t *)base = data2; 
  *(vuint8m2_t *)base = data;
}
