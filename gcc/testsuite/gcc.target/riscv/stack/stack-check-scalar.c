/* { dg-do compile } */
/* { dg-options "-fno-schedule-insns -fno-schedule-insns2" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <stdint.h>

void f (uint8_t *);

/* GPR: 16, local: 16, total: 32
** stack_offset1_1: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-32
**	sw	ra,28\(sp\)
**	addi	a0,sp,4
**	call	f
**	lw	ra,28\(sp\)
**	addi	sp,sp,32
**	jr	ra
*/
void stack_offset1_1 ()
{
  uint8_t local[10];
  f(local);
}

/* GPR: 16, local: 2016, total: 2032
** stack_offset1_2: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-2032
**	sw	ra,2028\(sp\)
**	mv	a0,sp
**	call	f
**	lw	ra,2028\(sp\)
**	addi	sp,sp,2032
**	jr	ra
*/
void stack_offset1_2 ()
{
  uint8_t local[2016];
  f(local);
}

/* GPR: 16, local: 6000, total: 6016
** stack_offset2_1: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-1920
**	sw	ra,1916\(sp\)
**	li	t0,4096
**	sub	sp,sp,t0
**	li	a0,-4096
**	addi	a0,a0,-1904
**	li	a5,4096
**	addi	a5,a5,1904
**	add	a5,a5,a0
**	add	a0,a5,sp
**	call	f
**	li	t0,4096
**	add	sp,sp,t0
**	lw	ra,1916\(sp\)
**	addi	sp,sp,1920
**	jr	ra
*/
void stack_offset2_1 ()
{
  uint8_t local[6000];
  f(local);
}

/* GPR: 16, local: 2032, total: 2048
** stack_offset3_1: { target { { any-opts "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-32
**	sw	ra,28\(sp\)
**	addi	sp,sp,-2016
**	addi	a0,sp,12
**	call	f
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
**	addi	a0,sp,12
**	call	f
**	addi	sp,sp,16
**	lw	ra,2028\(sp\)
**	addi	sp,sp,2032
**	jr	ra
*/
void stack_offset3_1 ()
{
  uint8_t local[2017];
  f(local);
}

/* GPR: 16, local: 2112, total: 2128
** stack_offset3_2: { target { { any-opts "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-96
**	sw	ra,92\(sp\)
**	addi	sp,sp,-2032
**	li	a0,-4096
**	addi	a0,a0,1996
**	li	a5,4096
**	addi	a5,a5,-1984
**	add	a5,a5,a0
**	add	a0,a5,sp
**	call	f
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
**	li	a0,-4096
**	addi	a0,a0,1996
**	li	a5,4096
**	addi	a5,a5,-1984
**	add	a5,a5,a0
**	add	a0,a5,sp
**	call	f
**	addi	sp,sp,96
**	lw	ra,2028\(sp\)
**	addi	sp,sp,2032
**	jr	ra
*/
void stack_offset3_2 ()
{
  uint8_t local[2100];
  f(local);
}

/* GPR: 16, local: 8000, total: 8016
** stack_offset4_1: { target { { any-opts "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-32
**	sw	ra,28\(sp\)
**	li	t0,8192
**	addi	t0,t0,-208
**	sub	sp,sp,t0
**	li	a0,-8192
**	addi	a0,a0,192
**	li	a5,8192
**	addi	a5,a5,-192
**	add	a5,a5,a0
**	add	a0,a5,sp
**	call	f
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
**	li	a0,-8192
**	addi	a0,a0,192
**	li	a5,8192
**	addi	a5,a5,-192
**	add	a5,a5,a0
**	add	a0,a5,sp
**	call	f
**	li	t0,4096
**	addi	t0,t0,1888
**	add	sp,sp,t0
**	lw	ra,2028\(sp\)
**	addi	sp,sp,2032
**	jr	ra
*/
void stack_offset4_1 ()
{
  uint8_t local[8000];
  f(local);
}

/* GPR: 16, local: 3056, total: 3072
** stack_offset5_1: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-2032
**	sw	ra,2028\(sp\)
**	addi	sp,sp,-1040
**	li	a0,-4096
**	addi	a0,a0,1048
**	li	a5,4096
**	addi	a5,a5,-1040
**	add	a5,a5,a0
**	add	a0,a5,sp
**	call	f
**	addi	sp,sp,1040
**	lw	ra,2028\(sp\)
**	addi	sp,sp,2032
**	jr	ra
*/
void stack_offset5_1 ()
{
  uint8_t local[3048];
  f(local);
}
