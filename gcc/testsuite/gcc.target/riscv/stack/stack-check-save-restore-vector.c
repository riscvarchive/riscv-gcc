
/* { dg-do compile } */
/* { dg-options "-msave-restore -fno-schedule-insns -fno-schedule-insns2" } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <riscv_vector.h>

void fn2 (float a1, float a2, float a3, float a4,
          float a5, float a6, float a7, float a8);
void fn3 (char*);

/*
** stack_save_restore_2: { target { { any-opts "-march=rv32gcv" } && { { any-opts "-O1" "-O2" "-O3" "-Os" } && { no-opts "-flto" } } } }
**	call	t0,__riscv_save_0
**	addi	sp,sp,-32
**	fs(w|d)	fs0,24\(sp\)
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
**	fl(w|d)	fs0,24\(sp\)
**	addi	sp,sp,32
**	tail	__riscv_restore_0
*/
int stack_save_restore_2 (float a1, float a2, float a3, float a4,
                      float a5, float a6, float a7, float a8,
                      vuint8m1_t data, uint8_t *base)
{
  char d[8000];
  float f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13;
  asm volatile ("nop"
                : "=f" (f1), "=f" (f2), "=f" (f3), "=f" (f4), "=f" (f5), "=f" (f6),
                  "=f" (f7), "=f" (f8), "=f" (f9),  "=f" (f10), "=f" (f11),
                  "=f" (f12), "=f" (f13)
                :
                :);
  asm volatile ("nop"
                :
                : "f" (f1), "f" (f2), "f" (f3), "f" (f4), "f" (f5), "f" (f6),
                  "f" (f7), "f" (f8), "f" (f9), "f" (f10), "f" (f11),
                  "f" (f12), "f" (f13)
                :);
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
  fn2 (a1, a2, a3, a4, a5, a6, a7, a8);
  fn3(d);
  return 0;
}
