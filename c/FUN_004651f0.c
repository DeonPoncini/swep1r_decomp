#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004651f0(int param_1)

{
  FUN_00447300(0x54726967,0x1e);
  FUN_00450db0(0x54726967);
  _DAT_00e287f0 =
       FUN_0047ddc0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1c0),
                    *(undefined4 *)(param_1 + 0x30));
  return;
}

