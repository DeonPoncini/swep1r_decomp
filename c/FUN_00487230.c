#include "prototype.h"


void FUN_00487230(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_50 [6];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_1c;
  
  uVar3 = 0x41;
  if (param_1 != 0) {
    uVar3 = 0x51;
  }
  DAT_00513870 = 0;
  puVar1 = &DAT_005117e8;
  for (iVar2 = 0x820; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = local_50;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_50[0] = 0x50;
  puVar1 = (undefined4 *)FUN_0048c7e0();
  local_38 = *puVar1;
  local_34 = puVar1[1];
  local_30 = puVar1[2];
  local_2c = puVar1[3];
  if (param_2 != 0) {
    iVar2 = FUN_004a1150(param_2);
    if (iVar2 != 0) {
      local_1c = param_2;
    }
  }
  iVar2 = *DAT_00510254;
  uVar3 = FUN_0048c780(uVar3);
  (**(code **)(iVar2 + 0x34))(DAT_00510254,local_50,0,&LAB_00487450,uVar3);
  return;
}

