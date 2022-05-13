/* { dg-do compile } */
/* { dg-options "-fno-schedule-insns -fno-schedule-insns2" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <stdint.h>
#include <riscv_vector.h>

void f (uint8_t *);
void f2 (vuint8m1_t);

/* GPR: 16, local: 16+vlenb, total: 32+vlenb
** stack_offset1_1: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-32
**	sw	ra,28\(sp\)
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	lw	ra,28\(sp\)
**	addi	sp,sp,32
**	jr	ra
*/
void stack_offset1_1 (vuint8m1_t data)
{
  uint8_t local[10];
  f(local);
  vint16m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  f2(data);
}

/* GPR: 16, local: 2016+vlenb, total: 2032+vlenb
** stack_offset1_2: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-2032
**	sw	ra,2028\(sp\)
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	lw	ra,2028\(sp\)
**	addi	sp,sp,2032
**	jr	ra
*/
void stack_offset1_2 (vuint8m1_t data)
{
  uint8_t local[2016];
  f(local);
  vint16m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  f2(data);
}

/* GPR: 16, local: 6000+vlenb, total: 6016+vlenb
** stack_offset2_1: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-1920
**	sw	ra,1916\(sp\)
**	li	t0,4096
**	sub	sp,sp,t0
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	li	t0,4096
**	add	sp,sp,t0
**	lw	ra,1916\(sp\)
**	addi	sp,sp,1920
**	jr	ra
*/
void stack_offset2_1 (vuint8m1_t data)
{
  uint8_t local[6000];
  f(local);
  vint16m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  f2(data);
}

/* GPR: 16, local: 2032+vlenb, total: 2048+vlenb
** stack_offset3_1: { target { { any-opts "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-32
**	sw	ra,28\(sp\)
**	addi	sp,sp,-2016
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	addi	sp,sp,2016
**	lw	ra,28\(sp\)
**	addi	sp,sp,32
**	jr	ra
*/
/*
** stack_offset3_1: { target { { any-opts "-march=rv32gv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-2032
**	sw	ra,2028\(sp\)
**	addi	sp,sp,-16
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	addi	sp,sp,16
**	lw	ra,2028\(sp\)
**	addi	sp,sp,2032
**	jr	ra
*/
void stack_offset3_1 (vuint8m1_t data)
{
  uint8_t local[2017];
  f(local);
  vint16m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  f2(data);
}

/* GPR: 16, local: 2112+vlenb, total: 2128+vlenb
** stack_offset3_2: { target { { any-opts "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-96
**	sw	ra,92\(sp\)
**	addi	sp,sp,-2032
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	addi	sp,sp,2032
**	lw	ra,92\(sp\)
**	addi	sp,sp,96
**	jr	ra
*/
/*
** stack_offset3_2: { target { { any-opts "-march=rv32gv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-2032
**	sw	ra,2028\(sp\)
**	addi	sp,sp,-96
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	addi	sp,sp,96
**	lw	ra,2028\(sp\)
**	addi	sp,sp,2032
**	jr	ra
*/
void stack_offset3_2 (vuint8m1_t data)
{
  uint8_t local[2100];
  f(local);
  vint16m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  f2(data);
}

/* GPR: 16, local: 8000+vlenb, total: 8016+vlenb
** stack_offset4_1: { target { { any-opts  "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-32
**	sw	ra,28\(sp\)
**	li	t0,8192
**	addi	t0,t0,-208
**	sub	sp,sp,t0
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	li	t0,8192
**	addi	t0,t0,-208
**	add	sp,sp,t0
**	lw	ra,28\(sp\)
**	addi	sp,sp,32
**	jr	ra
*/
/*
** stack_offset4_1: { target { { any-opts "-march=rv32gv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-2032
**	sw	ra,2028\(sp\)
**	li	t0,4096
**	addi	t0,t0,1888
**	sub	sp,sp,t0
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	li	t0,4096
**	addi	t0,t0,1888
**	add	sp,sp,t0
**	lw	ra,2028\(sp\)
**	addi	sp,sp,2032
**	jr	ra
*/
void stack_offset4_1 (vuint8m1_t data)
{
  uint8_t local[8000];
  f(local);
  vint16m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  f2(data);
}

/* GPR: 16, local: 3056+vlenb, total: 3072+vlenb
** stack_offset5_1: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-2032
**	sw	ra,2028\(sp\)
**	addi	sp,sp,-1040
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	csrr	t0,vlenb
**	add	sp,sp,t0
**	addi	sp,sp,1040
**	lw	ra,2028\(sp\)
**	addi	sp,sp,2032
**	jr	ra
*/
void stack_offset5_1 (vuint8m1_t data)
{
  uint8_t local[3048];
  f(local);
  vint16m8_t v0, v8, v16, v24;
  asm volatile ("nop"
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)
                :
                :);
  asm volatile ("nop"
                :
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)
                :);
  f2(data);
}
