#include "prototype.h"


undefined4 FUN_004114d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined auStack_14 [2];
  byte bStack_12;
  undefined4 uStack_f;
  ushort uStack_8;
  undefined2 uStack_6;
  byte bStack_4;
  
  puVar7 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)0x0;
  iVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(DAT_00ecc420 + 0x30))(param_1,&DAT_004b5c4c);
  if (iVar1 == 0) goto switchD_00411664_caseD_4;
  (**(code **)(DAT_00ecc420 + 0x38))(iVar1,auStack_14,0x12);
  puVar7 = (undefined4 *)FUN_0049f270(0x14);
  if (puVar7 == (undefined4 *)0x0) goto LAB_004116d2;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar4 = (undefined4 *)FUN_0049f270(8);
  if (puVar4 == (undefined4 *)0x0) {
switchD_00411664_caseD_4:
    if (puVar7 != (undefined4 *)0x0) {
      FUN_0049f200(puVar7);
    }
LAB_004116d2:
    if (puVar4 != (undefined4 *)0x0) {
      FUN_0049f200(puVar4);
    }
    if (iVar5 != 0) {
      FUN_0049f200(iVar5);
    }
    if (iVar1 != 0) {
      (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
    }
    return 0;
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  if (uStack_f._2_1_ < 9) {
    iVar5 = 1;
  }
  else if (uStack_f._2_1_ < 0x11) {
    iVar5 = 2;
  }
  else {
    iVar5 = (0x18 < uStack_f._2_1_) + 3;
  }
  (**(code **)(DAT_00ecc420 + 0x4c))(iVar1,(uStack_f & 0xffff) * iVar5,1);
  uVar8 = CONCAT12(bStack_4,uStack_6) & 0xffff;
  if (bStack_4 < 9) {
    iVar6 = 1;
  }
  else if (bStack_4 < 0x11) {
    iVar6 = 2;
  }
  else {
    iVar6 = (0x18 < bStack_4) + 3;
  }
  iVar2 = iVar6 * uVar8 * (uint)uStack_8;
  iVar5 = FUN_0049f270(iVar2);
  if (bStack_12 < 9) {
    (**(code **)(DAT_00ecc420 + 0x38))(iVar1,iVar5,iVar2);
  }
  else {
    FUN_00418700(iVar1,iVar5,iVar6,uVar8 * uStack_8);
  }
  (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
  puVar7[4] = puVar4;
  *(ushort *)puVar7 = uStack_8;
  *(undefined2 *)((int)puVar7 + 2) = uStack_6;
  *(undefined2 *)(puVar7 + 3) = 1;
  *(undefined2 *)((int)puVar7 + 0xe) = uStack_6;
  puVar7[2] = 0;
  *(undefined *)(puVar7 + 1) = 5;
  switch(iVar6) {
  case 1:
    *(undefined *)((int)puVar7 + 5) = 1;
    break;
  case 2:
    *(undefined *)((int)puVar7 + 5) = 2;
    break;
  case 3:
    *(undefined *)((int)puVar7 + 5) = 7;
    break;
  case 4:
    *(undefined *)((int)puVar7 + 5) = 3;
    break;
  default:
    goto switchD_00411664_caseD_4;
  }
  puVar4[1] = iVar5;
  *(ushort *)puVar4 = uStack_8;
  *(undefined2 *)((int)puVar4 + 2) = uStack_6;
  uVar3 = FUN_004188b0(puVar7,iVar6);
  FUN_00416fd0(uVar3,param_2,1);
  return uVar3;
}

