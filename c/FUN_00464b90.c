#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464b90(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = param_1;
  iVar4 = *(int *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x1c0) == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x19;
    }
    if (*(int *)(param_1 + 0x1c0) == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x2d;
    }
  }
  if (iVar4 == 1) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x11;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x1e;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x1f;
    }
    if (iVar6 == 3) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x2e;
    }
  }
  if (iVar4 == 2) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x22;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x52;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x30;
    }
  }
  if (iVar4 == 3) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x24;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x26;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x28;
    }
  }
  if (iVar4 == 4) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x53;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x58;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x59;
    }
    if (iVar6 == 3) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x2f;
    }
  }
  if (iVar4 == 5) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x38;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x39;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x54;
    }
  }
  if (iVar4 == 6) {
    iVar6 = *(int *)(param_1 + 0x1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x29;
    }
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x2a;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x2b;
    }
  }
  if (iVar4 == 7) {
    iVar4 = *(int *)(param_1 + 0x1c0);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x23;
    }
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x3b;
    }
    if (iVar4 == 2) {
      *(undefined4 *)(param_1 + 0x1b8) = 0x3e;
    }
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x1b8) < 0) {
    return;
  }
  iVar4 = FUN_00445b40();
  uVar5 = FUN_004472e0(*(undefined4 *)(param_1 + 0x1b8));
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  iVar6 = FUN_00445b40();
  DAT_00e288b4 = DAT_00e288b4 + (iVar6 - iVar4);
  iVar4 = *(int *)(param_1 + 0x1c0);
  if (iVar4 == 0) {
    param_1 = *(int *)(param_3 + 0xc);
  }
  if (iVar4 == 1) {
    param_1 = *(int *)(param_3 + 0x10);
  }
  if (iVar4 == 2) {
    param_1 = *(int *)(param_3 + 0x14);
  }
  if (iVar4 == 3) {
    param_1 = *(int *)(param_3 + 0xc);
  }
  iVar4 = *(int *)(iVar3 + 0x1a4);
  if (iVar4 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(iVar3 + 0x134);
  *(undefined4 *)(iVar3 + 0x130) = 0;
  *piVar1 = iVar4;
  *(undefined4 *)(iVar3 + 0x138) = 0;
  *(undefined4 *)(iVar3 + 0x13c) = 0;
  *(undefined4 *)(iVar3 + 0x140) = 0;
  *(undefined4 *)(iVar3 + 0x154) = 0;
  *(undefined4 *)(iVar3 + 0x158) = 0;
  *(undefined4 *)(iVar3 + 0x15c) = 0;
  *(undefined4 *)(iVar3 + 0x160) = 0;
  if (iVar4 != 0) {
    FUN_0044eef0(piVar1,0);
  }
  FUN_0044eeb0(piVar1,iVar3 + 0x164,0);
  param_3 = 0;
  if (param_2 != (int *)0x0) {
    iVar4 = *param_2;
    while (iVar4 != 0) {
      iVar4 = *param_2;
      if (*(int *)(iVar4 + 0x124) == param_1) {
        FUN_00426820(iVar4,0x30);
        param_3 = iVar4;
      }
      piVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      iVar4 = *piVar1;
    }
  }
  if (param_3 == 0) {
    *(undefined4 *)(iVar3 + 0x138) = 0x3f800000;
  }
  else {
    *(float *)(iVar3 + 0x138) =
         ((float)*(int *)(*(int *)(iVar3 + 0x1a4) + 4) - _DAT_004ad22c) /
         *(float *)(param_3 + 0x108);
  }
  FUN_00428a60(5,2,iVar3 + 0x164,0);
  FUN_00428b10(5,param_1,2);
  *(int *)(iVar3 + 0x1a8) = param_3;
  DAT_004c4a60 = 0x40a00000;
  DAT_004c4a5c = 0x459c4000;
  iVar4 = 0;
  iVar6 = param_1;
  iVar7 = param_1;
  if (*(int *)(iVar3 + 0x1ac) == 0) {
    DAT_004c4a5c = 0x458ca000;
    iVar4 = 0x3e4;
    param_1 = 0xe5;
    iVar6 = 0xdc;
    iVar7 = 0xea;
  }
  if (*(int *)(iVar3 + 0x1ac) == 1) {
    DAT_004c4a5c = 0x462be000;
    iVar4 = 0x3e4;
    if (*(int *)(iVar3 + 0x1c0) == 3) {
      iVar6 = 0xad;
      iVar7 = 0xb9;
      param_1 = 0xc6;
    }
    else {
      iVar6 = 0xd2;
      iVar7 = 0xd7;
      param_1 = 0xe1;
    }
  }
  if (*(int *)(iVar3 + 0x1ac) == 2) {
    iVar2 = *(int *)(iVar3 + 0x1c0);
    if (iVar2 == 0) {
      DAT_004c4a5c = 0x455ac000;
    }
    else if (iVar2 == 1) {
      iVar6 = 0x78;
      DAT_004c4a5c = 0x455ac000;
      iVar4 = 0x3e4;
      iVar7 = 100;
      param_1 = 0x78;
    }
    else if (iVar2 == 2) {
      DAT_004c4a5c = 0x462be000;
    }
  }
  if (*(int *)(iVar3 + 0x1ac) == 3) {
    iVar7 = 0x81;
    iVar4 = 0x3e2;
    iVar6 = 0x9a;
    param_1 = 0x81;
    DAT_004c4a5c = 0x462be000;
  }
  if (*(int *)(iVar3 + 0x1ac) == 4) {
    iVar2 = *(int *)(iVar3 + 0x1c0);
    if (iVar2 == 3) {
      DAT_004c4a5c = 0x459c4000;
    }
    else if (iVar2 == 0) {
      DAT_004c4a5c = 0x459c4000;
      iVar4 = 0x3e4;
      iVar6 = 0xca;
      iVar7 = 0xb7;
      param_1 = 0xc3;
    }
    else {
      if (iVar2 == 1) {
        DAT_004c4a5c = 0x44960000;
        iVar4 = 0x3e0;
        iVar6 = 0x9b;
        iVar7 = 0x9a;
        param_1 = 0xa7;
      }
      else {
        if (iVar2 != 2) goto LAB_004650a5;
        DAT_004c4a5c = 0x44bb8000;
        iVar4 = 0x3de;
        iVar6 = 0x5a;
        iVar7 = 0x36;
        param_1 = 0x28;
      }
      if (DAT_00e287e0 != 0) {
        FUN_00431a50(DAT_00e287e0,2,0xfffffffc,0x10,3);
      }
    }
  }
LAB_004650a5:
  if (*(int *)(iVar3 + 0x1ac) == 5) {
    iVar2 = *(int *)(iVar3 + 0x1c0);
    iVar6 = 0xbe;
    iVar7 = 0x37;
    param_1 = 10;
    if (iVar2 == 0) {
      DAT_004c4a5c = 0x45fa0000;
      iVar4 = 0x3de;
    }
    else {
      if (iVar2 == 1) {
        DAT_004c4a5c = 0x451c4000;
      }
      else {
        if (iVar2 != 2) goto LAB_00465100;
        DAT_004c4a5c = 0x457a0000;
      }
      iVar4 = 0x3e4;
    }
  }
LAB_00465100:
  if (*(int *)(iVar3 + 0x1ac) == 6) {
    DAT_004c4a5c = 0x462be000;
  }
  if (*(int *)(iVar3 + 0x1ac) != 7) goto LAB_00465146;
  iVar3 = *(int *)(iVar3 + 0x1c0);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      DAT_004c4a5c = 0x451c4000;
      goto LAB_00465146;
    }
    if (iVar3 != 2) goto LAB_00465146;
  }
  DAT_004c4a5c = 0x45bb8000;
LAB_00465146:
  if (iVar4 == 0) {
    FUN_0044e0c0(0);
    DAT_00e996e0 = DAT_00e996e0 | 2;
    return;
  }
  FUN_0044e0c0(1);
  FUN_0044e0e0(iVar4,1000,iVar6,iVar7,param_1,0xff);
  FUN_00483a60(iVar6,iVar7,param_1);
  DAT_00e996e0 = DAT_00e996e0 | 2;
  return;
}

