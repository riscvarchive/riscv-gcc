#include "tconfig.h"
#include "tsystem.h"
#include "coretypes.h"
#include "tm.h"
#include "libgcc_tm.h"
#define LIBGCC2_UNITS_PER_WORD (__riscv_xlen / 8)

#include "libgcc2.h"

#if __riscv_xlen == 32
  #define __multi3 __muldi3
#endif

DWtype
__multi3 (DWtype u, DWtype v)
{
  const DWunion uu = {.ll = u};
  const DWunion vv = {.ll = v};
  DWunion w = {.ll = __umulsidi3 (uu.s.low, vv.s.low)};

  w.s.high += (__muluw3((UWtype) uu.s.low, (UWtype) vv.s.high)
               + __muluw3((UWtype) uu.s.high, (UWtype) vv.s.low));

  return w.ll;
}
