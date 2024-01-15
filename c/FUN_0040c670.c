#include "prototype.h"


void FUN_0040c670(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  byte local_40 [64];
  
  iVar5 = param_3;
  bVar2 = false;
  iVar3 = FUN_00414d90(param_2,param_3);
  FUN_00406a50(param_1,param_4,param_5,param_6,param_7,local_40,&param_3);
  if (iVar5 == 0x3c) {
    uVar7 = 0xffffffff;
    pbVar4 = local_40;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    if (3 < ~uVar7 - 1) {
      bVar2 = true;
    }
  }
  pbVar8 = &DAT_004b38f8;
  pbVar4 = local_40;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_0040c702:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0040c707;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_0040c702;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0040c707:
  if (iVar5 == 0) {
    uVar6 = FUN_00421360(s__MONDOTEXT_H_0247_tilde_004b4f80);
    FUN_0049eb80(local_40,uVar6);
  }
  pbVar8 = &DAT_004b3bd4;
  pbVar4 = local_40;
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_0040c753:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0040c758;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_0040c753;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0040c758:
  if (iVar5 == 0) {
    FUN_0049eb80(local_40,&DAT_004b3ecc);
  }
  if (iVar3 != 0) {
    pbVar4 = local_40 + 1;
    if (!bVar2) {
      pbVar4 = local_40;
    }
    FUN_00414ab0(iVar3,pbVar4,0);
  }
  return;
}

