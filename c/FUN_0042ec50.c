#include "prototype.h"


void FUN_0042ec50(char *param_1)

{
  char cVar1;
  bool bVar2;
  uint3 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined3 uVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar8;
  int iVar9;
  
  FUN_0042d8d0(0);
  bVar2 = false;
  DAT_0050c0a0 = 1000;
  DAT_0050c0a8 = -1000;
  DAT_00e99768 = 0;
  cVar1 = *param_1;
  iVar6 = 0;
  while ((cVar1 != '\0' && (!bVar2))) {
    if ((param_1[iVar6] == '~') && (param_1[iVar6 + 1] == 'b')) {
      bVar2 = true;
      DAT_00e99768 = 1;
    }
    cVar1 = param_1[iVar6 + 1];
    iVar6 = iVar6 + 1;
  }
  uVar7 = 0;
  iVar6 = 0;
  if ((*param_1 == '~') && (param_1[1] == 'f')) {
    uVar7 = 0;
    FUN_0042d8d0((ushort)(short)param_1[2] - 0x30);
    iVar6 = 3;
  }
  DAT_0050c0ac = 0;
  if ((*param_1 == '~') && (param_1[1] == 'F')) {
    DAT_0050c0ac = 1;
    uVar3 = (uint3)uVar7 >> 8;
    uVar7 = 0;
    FUN_0042d8d0(CONCAT22((short)uVar3,(short)param_1[2]) + -0x30);
    iVar6 = 3;
  }
  uVar5 = DAT_0050c0ba;
  uVar4 = DAT_0050c0b8;
  FUN_0044e290(0,0,DAT_004bfa0c,CONCAT31(uVar7,(char)(DAT_004bfa0c >> 8)),
               DAT_004bfa0c >> 0x10 & 0xff,DAT_004bfa0c >> 0x18);
  iVar9 = 0;
  uVar8 = extraout_var;
  if (0 < *(int *)(DAT_0050c0c4 + 4)) {
    do {
      DAT_0050c0b8 = uVar4;
      DAT_0050c0ba = uVar5;
      FUN_0042e150(param_1 + iVar6,DAT_0050c0c4,iVar9);
      iVar9 = iVar9 + 1;
      uVar8 = extraout_var_00;
    } while (iVar9 < *(int *)(DAT_0050c0c4 + 4));
  }
  if ((DAT_0050c0a0 < DAT_0050c0a8) && (DAT_0050c09c < DAT_0050c0a4)) {
    FUN_00484020(CONCAT22((short)((uint)iVar9 >> 0x10),DAT_0050c0a0),DAT_0050c09c,
                 CONCAT22(uVar8,DAT_0050c0a8),DAT_0050c0a4);
  }
  DAT_0050c0b8 = DAT_0050c0bc;
  DAT_0050c0ba = DAT_0050c0be;
  return;
}

