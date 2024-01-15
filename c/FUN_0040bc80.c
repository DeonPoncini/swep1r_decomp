#include "prototype.h"


void FUN_0040bc80(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  char *pcVar7;
  undefined local_40 [64];
  
  uVar1 = FUN_00414d90(param_1,0x2741);
  FUN_00414420(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x2744);
  FUN_00414420(uVar1,DAT_004b6d14);
  uVar1 = FUN_00414d90(param_1,0x2742);
  FUN_00414420(uVar1,DAT_0050d550);
  uVar1 = FUN_00414d90(param_1,0x2743);
  FUN_00414420(uVar1,DAT_004b6d18);
  uVar1 = FUN_00414d90(param_1,0x2746);
  FUN_00414420(uVar1,DAT_004b6d28);
  uVar1 = FUN_00414d90(param_1,0x2747);
  FUN_00414420(uVar1,DAT_004eb45c);
  if (DAT_004eb458 == 0) {
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0243_NO_SOUND_CARD_D_004b4e88);
    FUN_0049eb80(local_40,uVar1);
  }
  else {
    uVar2 = FUN_00485340();
    if (DAT_0050d55c == 0) {
      puVar6 = &DAT_004b3b2c;
    }
    else {
      if ((uVar2 & 8) == 0) {
        pcVar7 = s__MONDOTEXT_H_0242___DIRECTSOUND__004b4f04;
      }
      else {
        pcVar7 = s__MONDOTEXT_H_0241___A3D__004b4f28;
      }
      puVar6 = (undefined2 *)FUN_00421360(pcVar7);
    }
    if (DAT_0050d55c == 0) {
      puVar3 = (undefined1 *)FUN_00421360(s__MONDOTEXT_H_0240_NO_004b4eec);
    }
    else {
      puVar3 = &DAT_004d55cc;
    }
    uVar1 = FUN_00421360(s__MONDOTEXT_H_0239__sHardware_acc_004b4eb4,puVar3,puVar6);
    FUN_0049eb80(local_40,uVar1);
  }
  iVar4 = FUN_00414d90(param_1,0x58);
  if (iVar4 != 0) {
    FUN_00414b80(iVar4,local_40,*(undefined4 *)(iVar4 + 0x4d8));
    FUN_00414be0(iVar4,0xff,0xff,0,200);
    FUN_00418cb0(iVar4,1);
    FUN_004130e0(iVar4,0,DAT_004eb458 == 0);
  }
  uVar1 = FUN_00414d90(param_1,0x273e);
  FUN_00413b60(uVar1,((uint)DAT_00e364a5 * 100) / 0xff);
  uVar1 = FUN_00414d90(param_1,0x273f);
  FUN_00413b60(uVar1,((uint)DAT_00e364a6 * 100) / 0xff);
  uVar1 = FUN_00414d90(param_1,0x2740);
  uVar5 = __ftol();
  FUN_00413b60(uVar1,uVar5);
  uVar5 = __ftol();
  FUN_00413b30(uVar1,uVar5);
  uVar1 = FUN_00414d90(param_1,0x2743);
  if ((DAT_004b6d20 == 0) || (uVar5 = DAT_0050d550, DAT_004eb458 == 0)) {
    uVar5 = 0;
  }
  FUN_00414e60(uVar1,uVar5);
  uVar1 = FUN_00414d90(param_1,0x2740);
  if ((DAT_004b6d20 == 0) || (uVar5 = DAT_0050d550, DAT_004eb458 == 0)) {
    uVar5 = 0;
  }
  FUN_00414e60(uVar1,uVar5);
  uVar1 = FUN_00414d90(param_1,0x2712);
  if ((DAT_004b6d20 == 0) || (uVar5 = DAT_0050d550, DAT_004eb458 == 0)) {
    uVar5 = 0;
  }
  FUN_00414e60(uVar1,uVar5);
  uVar1 = FUN_00414d90(param_1,0x2742);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x2744);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x273e);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x273f);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,10000);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x2711);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x2746);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  uVar1 = FUN_00414d90(param_1,0x2747);
  FUN_00414e60(uVar1,-(uint)(DAT_004eb458 != 0) & DAT_004b6d20);
  return;
}

