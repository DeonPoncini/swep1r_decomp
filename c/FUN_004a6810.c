#include "prototype.h"


uint __thiscall FUN_004a6810(undefined4 param_1_00,ushort **param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort **ppuVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_4;
  
  ppuVar3 = param_1;
  local_4 = param_1_00;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    puVar2 = param_1[4];
    if (puVar2 == (ushort *)0xffffffff) {
      puVar4 = &DAT_004d43a0;
    }
    else {
      puVar4 = (undefined *)((&DAT_00ecd500)[(int)puVar2 >> 5] + ((uint)puVar2 & 0x1f) * 0x24);
    }
    if ((puVar4[4] & 0x80) != 0) {
      puVar2 = param_1[1];
      uVar8 = 1;
      param_1[1] = (ushort *)((int)puVar2 + -1);
      if ((int)(ushort *)((int)puVar2 + -1) < 0) {
        uVar5 = FUN_004a40f0(param_1);
      }
      else {
        uVar5 = (uint)*(byte *)*param_1;
        *param_1 = (ushort *)((int)*param_1 + 1);
      }
      if (uVar5 == 0xffffffff) {
        return 0xffffffff;
      }
      local_4 = CONCAT31(local_4._1_3_,(char)uVar5);
      if ((PTR_DAT_004d1d90[(uVar5 & 0xff) * 2 + 1] & 0x80) != 0) {
        puVar2 = ppuVar3[1];
        ppuVar3[1] = (ushort *)((int)puVar2 + -1);
        if ((int)(ushort *)((int)puVar2 + -1) < 0) {
          uVar5 = FUN_004a40f0(ppuVar3);
        }
        else {
          uVar5 = (uint)*(byte *)*ppuVar3;
          *ppuVar3 = (ushort *)((int)*ppuVar3 + 1);
        }
        if (uVar5 == 0xffffffff) {
          FUN_004a99c0((int)(char)local_4,ppuVar3);
          return 0xffff;
        }
        uVar8 = 2;
      }
      iVar6 = FUN_004a95d0(&param_1,&local_4,uVar8);
      if (iVar6 == -1) {
        puVar7 = (undefined4 *)FUN_004a3dc0();
        *puVar7 = 0x2a;
        return 0xffff;
      }
      return (uint)param_1 & 0xffff;
    }
  }
  puVar2 = param_1[1];
  param_1[1] = puVar2 + -1;
  if (-1 < (int)(puVar2 + -1)) {
    uVar1 = **param_1;
    *param_1 = *param_1 + 1;
    return (uint)uVar1;
  }
  uVar5 = FUN_004a98c0(param_1);
  return uVar5;
}

