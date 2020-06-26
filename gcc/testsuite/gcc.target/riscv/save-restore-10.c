/* { dg-options "-Os -msave-restore" } */

/* With -msave-restore, gcc should keep correct sp offset for assignment when
   removing redundant save-restore calls */

extern int
foo (int);

int
#if defined(__riscv_32e)
bar (int a, int b, int c, int d, int e, int f, int u)
#else
bar (int a, int b, int c, int d, int e, int f, int g, int h, int u)
#endif
{
  int *p = &u;
  return foo (p[a]);
}

/* { dg-final { scan-assembler "addi\[ \t\]*a\[0-7\],sp,0" } } */
