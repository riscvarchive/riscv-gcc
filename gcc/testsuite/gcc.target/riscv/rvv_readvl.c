/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32gcv -mabi=ilp32f" } */

#include <riscv_vector.h>
#include <stddef.h>
#include "rvv-common.h"


int x()
{
  return rvv_readvl ();
}

/* { dg-final { scan-assembler-times "csrr" 1 } } */
