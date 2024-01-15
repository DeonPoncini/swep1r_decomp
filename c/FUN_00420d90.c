#include "prototype.h"


void FUN_00420d90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_400 [128];
  undefined2 local_200 [256];
  
  DAT_004eb1ec = 0;
  FUN_004049e0();
  DAT_004eb388 = 0;
  iVar2 = FUN_00414d90(0,0x186af);
  pcVar8 = *(char **)(iVar2 + 0x4d4);
  uVar4 = 0xffffffff;
  pcVar7 = pcVar8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (~uVar4 - 1 < 0x101) {
    uVar4 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~uVar4 - 1;
  }
  else {
    iVar2 = 0x100;
  }
  FUN_0048c340(local_200,pcVar8,iVar2);
  puVar6 = local_400;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_200[iVar2] = 0;
  iVar2 = FUN_00414d90(0,0x186b1);
  pcVar8 = *(char **)(iVar2 + 0x4d4);
  if (pcVar8 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 < 0x101) {
      uVar4 = 0xffffffff;
      pcVar7 = pcVar8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar2 = ~uVar4 - 1;
    }
    else {
      iVar2 = 0x100;
    }
    FUN_0048c340(local_400,pcVar8,iVar2);
    *(undefined2 *)((int)local_400 + iVar2 * 2) = 0;
  }
  iVar2 = FUN_00404960(DAT_004eb38c,local_200,local_400);
  if (iVar2 != 0) {
    if (iVar2 == -0x7788feb6) {
      uVar3 = FUN_00421360(s__MONDOTEXT_H_0406_OK_004b6a7c,0,0,1);
      pcVar8 = s__MONDOTEXT_H_0408_Your_join_requ_004b6988;
    }
    else if (iVar2 == -0x7788feac) {
      uVar3 = FUN_00421360(s__MONDOTEXT_H_0406_OK_004b6a7c,0,0,1);
      pcVar8 = s__MONDOTEXT_H_0409_Your_password_i_004b69c0;
    }
    else {
      uVar3 = FUN_00421360(s__MONDOTEXT_H_0406_OK_004b6a7c,0,0,1);
      pcVar8 = s__MONDOTEXT_H_0410_An_unknown_net_004b6a04;
    }
    uVar3 = FUN_00421360(pcVar8,uVar3);
    uVar3 = FUN_00421360(s__MONDOTEXT_H_0407_Error_004b69ec,uVar3);
    FUN_004145b0(param_1,0xffffffff,0xffffffff,uVar3);
    FUN_004208c0();
    FUN_00420810();
    DAT_004eb39c = 0;
    FUN_004336d0(1);
    FUN_00414e60(param_1,0);
    FUN_004117e0();
    FUN_00411820(0xb);
    return;
  }
  FUN_0041c4f0();
  FUN_0041c760(0);
  FUN_0041b700();
  FUN_0041cde0(DAT_00ec7620);
  return;
}

