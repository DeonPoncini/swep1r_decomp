#include "prototype.h"


short * FUN_004188b0(short *param_1,undefined4 param_2)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  short *psVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int local_20;
  int local_14;
  int local_c;
  
  psVar6 = param_1;
  psVar2 = *(short **)(param_1 + 8);
  sVar7 = *psVar2;
  if (sVar7 < 0x21) {
    uVar14 = 0x20;
  }
  else if (sVar7 < 0x41) {
    uVar14 = 0x40;
  }
  else {
    uVar14 = ((0x80 < sVar7) - 1 & 0xffffff80) + 0x100;
  }
  sVar1 = psVar2[1];
  if (sVar1 < 0x21) {
    param_1 = (short *)0x20;
  }
  else if (sVar1 < 0x41) {
    param_1 = (short *)0x40;
  }
  else {
    param_1 = (short *)(((0x80 < sVar1) - 1 & 0xffffff80) + 0x100);
  }
  psVar6[7] = (short)param_1;
  uVar4 = (ulonglong)((uVar14 - 1) + (int)sVar7) / (ulonglong)uVar14;
  iVar8 = (int)uVar4;
  uVar5 = (ulonglong)(((int)param_1 - 1U) + (int)sVar1) / ZEXT48(param_1);
  local_c = (int)uVar5;
  sVar7 = (short)uVar5 * (short)uVar4;
  psVar6[6] = sVar7;
  local_20 = FUN_0049f270((int)sVar7 << 3);
  *(int *)(psVar6 + 8) = local_20;
  uVar3 = *(undefined4 *)(psVar2 + 2);
  if (local_c != 0) {
    iVar9 = (int)param_1 * local_c;
    do {
      uVar11 = (uint)*psVar6;
      if (iVar8 != 0) {
        iVar13 = 0;
        local_14 = iVar8;
        do {
          uVar12 = uVar11;
          if (uVar14 < uVar11) {
            uVar12 = uVar14;
          }
          uVar10 = (int)psVar6[1] - (iVar9 - (int)param_1);
          if (param_1 < uVar10) {
            uVar10 = (uint)param_1;
          }
          FUN_00418a80(local_20,uVar3,iVar13,iVar9 - (int)param_1,uVar12,uVar10,param_2,(int)*psVar6
                      );
          local_20 = local_20 + 8;
          uVar11 = uVar11 - uVar14;
          iVar13 = iVar13 + uVar14;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar9 = iVar9 - (int)param_1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  FUN_0049f200(uVar3);
  FUN_0049f200(psVar2);
  uVar14 = 0;
  if (psVar6[6] != 0) {
    do {
      uVar3 = *(undefined4 *)(*(int *)(psVar6 + 8) + 4 + uVar14 * 8);
      FUN_00446b60(psVar6,*(int *)(psVar6 + 8) + uVar14 * 8);
      FUN_00408f90();
      FUN_0049f200(uVar3);
      uVar14 = uVar14 + 1;
    } while (uVar14 < (uint)(int)psVar6[6]);
  }
  return psVar6;
}

