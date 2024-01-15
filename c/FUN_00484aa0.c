#include "prototype.h"


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_00484aa0(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  byte bVar2;
  ushort unaff_retaddr;
  byte param_5;
  undefined2 uStack_20;
  ushort uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  int local_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  int iStack_4;
  
  uStack_1c = (undefined2)unaff_EBX;
  uStack_1a = (undefined2)((uint)unaff_EBX >> 0x10);
  uStack_20 = (undefined2)unaff_ESI;
  uStack_1e = (ushort)((uint)unaff_ESI >> 0x10);
  local_18 = 0;
  if (DAT_0050d548 == (int *)0x0) {
    return (int *)0x0;
  }
  bVar2 = param_1 != 0;
  if ((param_5 & 4) != 0) {
    bVar2 = bVar2 | 4;
  }
  iVar1 = (**(code **)(*DAT_0050d548 + 0x44))(DAT_0050d548,bVar2);
  if (-1 < iVar1) {
    if (DAT_0050d550 == 0) {
      iVar1 = (**(code **)(local_18 + 0xd0))(&local_18,0x20);
      if (iVar1 < 0) goto LAB_00484b8b;
    }
    uStack_1e = (param_1 != 0) + 1;
    uStack_1c = (undefined2)iStack_4;
    uStack_1a = (undefined2)((uint)iStack_4 >> 0x10);
    uStack_20 = 1;
    local_18 = (int)((uint)uStack_1e * (uint)unaff_retaddr) >> 3;
    uStack_14 = CONCAT22(unaff_retaddr,(short)local_18);
    uStack_10 = 0;
    local_18 = local_18 * iStack_4;
    iVar1 = (**(code **)(local_18 + 0x1c))(&local_18,&uStack_20);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(local_18 + 0x14))(&local_18,param_1);
      if (-1 < iVar1) {
        return &local_18;
      }
    }
  }
LAB_00484b8b:
  if (&local_18 != (int *)0x0) {
    (**(code **)(local_18 + 8))(&local_18);
  }
  return (int *)0x0;
}

