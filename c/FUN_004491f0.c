#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004491f0(undefined4 param_1,undefined4 param_2)

{
  FUN_0042d720();
  FUN_00447420();
  thunk_FUN_00449e30();
  if ((DAT_00e996dc & 0x200) == 0) {
    _DAT_00e996ec = (int)(short)param_1;
  }
  FUN_00449040(param_1,param_2);
  FUN_004490a0();
  FUN_004285d0(0xffffff37,0);
  FUN_00426910(&DAT_004c17fc);
  FUN_00480480(0,0xbff00000);
  FUN_004804c0();
  return;
}

