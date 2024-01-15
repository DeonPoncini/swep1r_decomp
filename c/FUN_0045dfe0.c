#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045dfe0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  
  DAT_004b2940 = 1;
  FUN_00427ea0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1c0),0);
  FUN_004277f0(1,*(undefined4 *)(param_1 + 0x1ac));
  DAT_0050ca10 = 1;
  _DAT_004b9578 = 0x44bb8000;
  local_40 = 0x53776565;
  local_3c = 0;
  FUN_00450c50(0x634d616e,&local_40);
  uVar2 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar2 & 0xfffffff0;
  *(undefined4 *)(param_1 + 0xc) = 0x404ccccd;
  if ((uVar2 & 0x20) == 0) {
    uVar2 = uVar2 & 0xfffffff0 | 0xf00;
  }
  else {
    uVar2 = uVar2 & 0xfffff0f0;
  }
  *(uint *)(param_1 + 8) = uVar2;
  if ((*(byte *)(param_1 + 8) & 0x20) == 0) {
    FUN_004457b0();
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  }
  FUN_0045dad0(param_1,4);
  if ((*(byte *)(param_1 + 8) & 0x20) == 0) {
    FUN_00428740(0xffffff99,0,0,0,0);
  }
  iVar3 = FUN_0041d6b0();
  if ((iVar3 != 0) && ((*(byte *)(param_1 + 8) & 0x60) == 0)) {
    FUN_0041d3b0(1);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(DAT_00e28960 + 0x84 + iVar4);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 100) = *(uint *)(iVar1 + 100) & 0xffffefff;
        *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xfffffff1 | 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x88;
    } while (iVar3 < *(int *)(param_1 + 0x1bc));
  }
  return;
}

