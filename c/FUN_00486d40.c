#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00486d40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint local_150 [6];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined *local_120;
  int local_11c;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined local_100 [256];
  
  puVar3 = local_150;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_150[0] = 0x50;
  local_150[1] = local_150[1] | 0xe0e4;
  puVar1 = (undefined4 *)FUN_0048c7e0();
  local_138 = *puVar1;
  local_134 = puVar1[1];
  local_130 = puVar1[2];
  local_12c = puVar1[3];
  local_128 = *(undefined4 *)(param_1 + 0x10);
  FUN_004a1170(local_100,0x80,u__s__S_004c8680,param_1 + 0x58,param_1 + 0x98);
  local_120 = local_100;
  iVar2 = FUN_004a1150(param_1 + 0xb8);
  if (iVar2 != 0) {
    local_11c = param_1 + 0xb8;
  }
  local_108 = *(undefined4 *)(param_1 + 0xfc);
  local_104 = *(undefined4 *)(param_1 + 0x100);
  local_110 = *(undefined4 *)(param_1 + 0xf8);
  iVar2 = (**(code **)(*DAT_00510254 + 0x60))(DAT_00510254,local_150,2);
  if (iVar2 < 0) {
    (**(code **)(*DAT_00510254 + 0x10))(DAT_00510254);
    _DAT_00510258 = 0;
    DAT_0051386c = 0;
    return iVar2;
  }
  _DAT_00510258 = 1;
  DAT_0051386c = 1;
  return 0;
}

