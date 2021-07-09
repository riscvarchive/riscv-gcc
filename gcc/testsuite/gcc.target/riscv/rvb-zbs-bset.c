/* { dg-do compile } */
/* { dg-options "-march=rv64gc_zbs -mabi=lp64 -O2" } */

/* bset */
long
sub0 (long i, long j)
{
  return i | (1L << j);
}

/* bset_mask */
long
sub1 (long i, long j)
{
  return i | (1L << (j & 0x3f));
}

/* bset_1 */
long
sub2 (long i)
{
  return 1L << i;
}

/* bset_1_mask */
long
sub3 (long i)
{
  return 1L << (i & 0x3f);
}

/* bseti */
long
sub4 (long i)
{
  return i | (1L << 20);
}

/* bsetw */
int
sub5 (int i, int j)
{
  return i | (1 << j);
}

/* bsetw_mask */
int
sub6 (int i, int j)
{
  return i | (1 << (j & 0x1f));
}

/* bsetiw */
int
sub7 (long i)
{
  return (int)i | (1 << 20);
}

/* { dg-final { scan-assembler-times "bset" 9 } } */
/* { dg-final { scan-assembler-times "bseti" 2 } } */
/* { dg-final { scan-assembler-times "bsetw" 2 } } */
/* { dg-final { scan-assembler-times "bsetiw" 1 } } */
/* { dg-final { scan-assembler-not "andi" } } */
