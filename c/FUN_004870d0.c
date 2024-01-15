#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004870d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  int local_1c;
  
  puVar2 = local_50;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_50[0] = 0x50;
  iVar1 = param_1 * 0x104;
  local_50[2] = (&DAT_005117e8)[param_1 * 0x41];
  local_50[3] = *(undefined4 *)(&DAT_005117ec + iVar1);
  local_40 = *(undefined4 *)(&DAT_005117f0 + iVar1);
  local_3c = *(undefined4 *)(&DAT_005117f4 + iVar1);
  if (param_2 != 0) {
    iVar1 = FUN_004a1150(param_2);
    if (iVar1 != 0) {
      local_1c = param_2;
    }
  }
  iVar1 = (**(code **)(*DAT_00510254 + 0x60))(DAT_00510254,local_50,1);
  if (iVar1 < 0) {
    (**(code **)(*DAT_00510254 + 0x10))(DAT_00510254);
    return iVar1;
  }
  _DAT_00510258 = 0;
  DAT_0051386c = 1;
  return 0;
}

