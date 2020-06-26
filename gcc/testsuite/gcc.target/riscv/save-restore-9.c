/* { dg-options "-Os -msave-restore" } */

/* With -msave-restore, gcc should keep correct sp offset of load when
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
  return foo (u);
}

/* { dg-final { scan-assembler "lw\[ \t\]*a0,0\\(sp\\)" } } */
