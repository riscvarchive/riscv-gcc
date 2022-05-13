
/* { dg-do compile } */
/* { dg-options "-fno-schedule-insns -fno-schedule-insns2" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <riscv_vector.h>

void f (char*);

/*
** stach_check_alloca_1: { target { { any-opts "-march=rv32gv" "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	addi	sp,sp,-48
**	sw	ra,12\(sp\)
**	sw	s0,8\(sp\)
**	addi	s0,sp,16
**	csrr	t0,vlenb
**	sub	sp,sp,t0
**	...
**	addi	a1,a1,23
**	andi	a1,a1,-16
**	sub	sp,sp,a1
**	...
**	addi	sp,s0,-16
**	lw	ra,12\(sp\)
**	lw	s0,8\(sp\)
**	addi	sp,sp,48
**	jr	ra
*/
void stach_check_alloca_1 (vuint8m1_t data, uint8_t *base, int y, ...)
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
  char* pStr = (char*)__builtin_alloca(y);
  f(pStr);
}


