#include "prototype.h"


void FUN_0048a5e0(undefined4 *param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  int *unaff_EBP;
  uint uVar6;
  int *unaff_ESI;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_EDI;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int local_1c4;
  undefined *local_1c0;
  int iStack_1bc;
  int local_1b8;
  int local_1b4;
  int *piStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  uint local_19c;
  int local_198;
  undefined4 local_194 [4];
  int aiStack_184 [4];
  undefined4 local_174 [6];
  uint local_15c;
  undefined4 local_12c [8];
  undefined *local_10c;
  uint auStack_108 [4];
  int iStack_f8;
  int iStack_e4;
  int aiStack_8c [4];
  undefined4 local_7c [28];
  int *piStack_c;
  uint uStack_4;
  
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  local_1c4 = 0;
  local_1c0 = (undefined *)0x0;
  if (DAT_0052e61c == 0) {
    return;
  }
  iVar2 = *param_2;
  local_198 = iVar2;
  FUN_0048a9e0(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&local_1b4,&local_1b8);
  local_19c = (uint)(*(int *)(iVar2 + 0x24) * local_1b8 * local_1b4) >> 3;
  if (DAT_0052e614 == 0) {
    param_3 = 1;
  }
  iVar4 = DAT_0052d568;
  if ((param_4 != 1) && (iVar4 = DAT_0052d560, param_4 != 2)) {
    iVar4 = DAT_0052d564;
  }
  puVar7 = (undefined4 *)(&DAT_0052d5b0 + iVar4 * 0x60);
  puVar10 = local_194;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar7 = local_174;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_174[0] = 0x7c;
  local_174[1] = 0x1007;
  local_10c = (undefined *)0x1800;
  local_174[3] = *(undefined4 *)(iVar2 + 0xc);
  uVar6 = 0;
  local_174[2] = *(undefined4 *)(iVar2 + 0x10);
  local_1c4 = 0;
  puVar7 = local_194;
  puVar10 = local_12c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  if (1 < param_3) {
    local_174[1] = 0x21007;
    local_10c = &LAB_00401808;
    local_15c = param_3;
  }
  puVar7 = local_174;
  puVar10 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar2 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,local_174,&local_1c4,0);
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)*unaff_EDI)(unaff_EDI,&DAT_004af328,&stack0xfffffe34), iVar2 == 0)) {
    uVar5 = uStack_4;
    if (uStack_4 != 0) {
      do {
        puVar9 = auStack_108;
        for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        auStack_108[0] = 0x7c;
        iVar2 = (**(code **)(*unaff_EDI + 100))(unaff_EDI,0,auStack_108,1,0);
        if (iVar2 != 0) goto LAB_0048a9bb;
        iVar2 = *(int *)(*param_2 + 0x20);
        if (((iVar2 != 0) && (0 < iVar2)) && (iVar2 < 3)) {
          FUN_00488370(*param_2);
          uVar1 = 0;
          if (auStack_108[2] != 0) {
            do {
              puVar7 = (undefined4 *)(*(int *)(*param_2 + 0x18) * uVar1 + *(int *)(*param_2 + 0x58))
              ;
              puVar10 = (undefined4 *)(iStack_f8 * uVar1 + iStack_e4);
              for (uVar5 = auStack_108[3] * 2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar10 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar10 = puVar10 + 1;
              }
              uVar1 = uVar1 + 1;
              for (uVar5 = auStack_108[3] * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined *)puVar10 = *(undefined *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
                puVar10 = (undefined4 *)((int)puVar10 + 1);
              }
              uVar5 = uStack_4;
            } while (uVar1 < auStack_108[2]);
          }
          FUN_004883c0(*param_2);
        }
        iVar2 = (**(code **)(*unaff_EDI + 0x80))(unaff_EDI,0);
        if (iVar2 != 0) goto LAB_0048a9bb;
        if (uVar6 < uVar5 - 1) {
          local_1c0 = &LAB_00401000;
          iStack_1bc = iVar2;
          local_1b8 = iVar2;
          local_1b4 = iVar2;
          iVar2 = (**(code **)(*unaff_EDI + 0x30))(unaff_EDI,&local_1c0,&stack0xfffffe2c);
          if (iVar2 != 0) goto LAB_0048a9bb;
        }
        uVar6 = uVar6 + 1;
        param_2 = param_2 + 1;
      } while (uVar6 < uVar5);
    }
    if ((local_1c4 != *(int *)(iStack_1a8 + 0xc)) || (unaff_EBX != *(int *)(iStack_1a8 + 0x10))) {
      aiStack_8c[3] = local_1c4;
      iVar2 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,aiStack_8c,&stack0xfffffe30,0);
      if ((iVar2 != 0) ||
         (iVar2 = (**(code **)*unaff_ESI)(unaff_ESI,&DAT_004af328,&piStack_1b0), iVar2 != 0))
      goto LAB_0048a9bb;
      uVar6 = 0;
      if (uStack_4 != 0) {
        do {
          iVar2 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,0,unaff_EDI,0,0x1000000,0);
          if (iVar2 != 0) goto LAB_0048a9bb;
          if (uVar6 < uStack_4 - 1) {
            local_1c0 = &LAB_00401000;
            iStack_1bc = 0;
            local_1b8 = 0;
            local_1b4 = 0;
            iVar2 = (**(code **)(*unaff_ESI + 0x30))(unaff_ESI,&local_1c0,&stack0xfffffe30);
            if (iVar2 != 0) goto LAB_0048a9bb;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uStack_4);
      }
      if (unaff_ESI != (int *)0x0) {
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      piVar8 = aiStack_8c;
      piVar11 = aiStack_184;
      for (iVar2 = 0x1f; unaff_EBP = piStack_1b0, iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar11 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar11 = piVar11 + 1;
      }
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    piStack_c[0x1f] = (int)unaff_EBP;
    piVar8 = aiStack_184;
    piVar11 = piStack_c;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar11 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar11 = piVar11 + 1;
    }
    piStack_c[0x21] = iStack_1ac;
  }
  else {
LAB_0048a9bb:
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      return;
    }
  }
  return;
}

