#include "prototype.h"


void FUN_00486340(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint local_64;
  int **local_60;
  int local_5c;
  undefined4 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint auStack_30 [4];
  char acStack_20 [32];
  
  local_64 = 0;
  if (DAT_0050fec8 != 0) {
    local_5c = 0;
    local_58 = &DAT_0050d56c;
    local_60 = (int **)&DAT_00eca0e4;
    while ((iVar4 = (**(code **)(**local_60 + 100))(*local_60), -1 < iVar4 &&
           (iVar4 = (**(code **)(**local_60 + 0x24))(*local_60,0x50,&uStack_50), -1 < iVar4))) {
      local_58[-1] = uStack_50;
      *local_58 = uStack_4c;
      local_58[1] = uStack_48;
      local_58[2] = uStack_44;
      local_58[3] = uStack_40;
      local_58[4] = uStack_3c;
      uVar8 = 0;
      piVar5 = (int *)((int)&DAT_0050e428 + local_5c);
      iVar4 = local_5c;
      do {
        if (acStack_20[uVar8] == '\0') {
LAB_00486408:
          if (*(int *)((int)&DAT_0050ec68 + iVar4) != 0) {
            iVar2 = *piVar5;
            *(undefined4 *)((int)&DAT_0050ec68 + iVar4) = 0;
            if (iVar2 == 0) {
              *piVar5 = DAT_0050fed8;
            }
            *piVar5 = *piVar5;
          }
        }
        else if (*(int *)((int)&DAT_0050ec68 + iVar4) == 0) {
          iVar2 = *(int *)((int)&DAT_0050fa68 + iVar4);
          *(undefined4 *)((int)&DAT_0050ec68 + iVar4) = 1;
          *piVar5 = 0;
          *(int *)((int)&DAT_0050fa68 + iVar4) = iVar2 + 1;
        }
        else if (acStack_20[uVar8] == '\0') goto LAB_00486408;
        uVar8 = uVar8 + 1;
        iVar4 = iVar4 + 4;
        piVar5 = piVar5 + 1;
      } while (uVar8 < 0x10);
      piVar6 = (int *)0x0;
      piVar5 = local_60[6];
      if (piVar5 != (int *)0x0) {
        puVar7 = auStack_30;
        do {
          if ((int *)0x3 < piVar6) break;
          uVar8 = *puVar7;
          if ((uVar8 < 0x57e4) || (0x7b0c < uVar8)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          iVar4 = (int)(piVar6 + local_64 * 2) * 4 + 0x110;
          if (bVar3) {
            if ((&DAT_0050e868)[iVar4] == 0) {
              (&DAT_0050e868)[iVar4] = 1;
              (&DAT_0050e028)[iVar4] = 0;
              (&DAT_0050f668)[iVar4] = (&DAT_0050f668)[iVar4] + 1;
            }
            else if (!bVar3) goto LAB_004864c0;
          }
          else {
LAB_004864c0:
            if ((&DAT_0050e868)[iVar4] != 0) {
              (&DAT_0050e868)[iVar4] = 0;
              if ((&DAT_0050e028)[iVar4] == 0) {
                (&DAT_0050e028)[iVar4] = DAT_0050fed8;
              }
              (&DAT_0050e028)[iVar4] = (&DAT_0050e028)[iVar4];
            }
          }
          if (((uVar8 < 0x7b0c) && (0x1194 < uVar8)) || ((short)uVar8 == -1)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          piVar1 = piVar6 + local_64 * 2;
          if (bVar3) {
            if (*(int *)(&DAT_0050ecac + (int)piVar1 * 0x10) == 0) {
              *(undefined4 *)(&DAT_0050ecac + (int)piVar1 * 0x10) = 1;
              *(undefined4 *)(&DAT_0050e46c + (int)piVar1 * 0x10) = 0;
              *(int *)(&DAT_0050faac + (int)piVar1 * 0x10) =
                   *(int *)(&DAT_0050faac + (int)piVar1 * 0x10) + 1;
            }
            else if (!bVar3) goto LAB_00486551;
          }
          else {
LAB_00486551:
            if (*(int *)(&DAT_0050ecac + (int)piVar1 * 0x10) != 0) {
              *(undefined4 *)(&DAT_0050ecac + (int)piVar1 * 0x10) = 0;
              if (*(int *)(&DAT_0050e46c + (int)piVar1 * 0x10) == 0) {
                *(int *)(&DAT_0050e46c + (int)piVar1 * 0x10) = DAT_0050fed8;
              }
              *(undefined4 *)(&DAT_0050e46c + (int)piVar1 * 0x10) =
                   *(undefined4 *)(&DAT_0050e46c + (int)piVar1 * 0x10);
            }
          }
          if ((uVar8 < 0x1194) || (0x34bc < uVar8)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (*(int *)(&DAT_0050ecb0 + (int)piVar1 * 0x10) == 0) {
              *(undefined4 *)(&DAT_0050ecb0 + (int)piVar1 * 0x10) = 1;
              *(undefined4 *)(&DAT_0050e470 + (int)piVar1 * 0x10) = 0;
              *(int *)(&DAT_0050fab0 + (int)piVar1 * 0x10) =
                   *(int *)(&DAT_0050fab0 + (int)piVar1 * 0x10) + 1;
            }
            else if (!bVar3) goto LAB_004865d4;
          }
          else {
LAB_004865d4:
            if (*(int *)(&DAT_0050ecb0 + (int)piVar1 * 0x10) != 0) {
              *(undefined4 *)(&DAT_0050ecb0 + (int)piVar1 * 0x10) = 0;
              if (*(int *)(&DAT_0050e470 + (int)piVar1 * 0x10) == 0) {
                *(int *)(&DAT_0050e470 + (int)piVar1 * 0x10) = DAT_0050fed8;
              }
              *(undefined4 *)(&DAT_0050e470 + (int)piVar1 * 0x10) =
                   *(undefined4 *)(&DAT_0050e470 + (int)piVar1 * 0x10);
            }
          }
          if ((uVar8 < 0x34bc) || (0x57e4 < uVar8)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (*(int *)(&DAT_0050ecb4 + (int)piVar1 * 0x10) == 0) {
              *(undefined4 *)(&DAT_0050ecb4 + (int)piVar1 * 0x10) = 1;
              *(undefined4 *)(&DAT_0050e474 + (int)piVar1 * 0x10) = 0;
              *(int *)(&DAT_0050fab4 + (int)piVar1 * 0x10) =
                   *(int *)(&DAT_0050fab4 + (int)piVar1 * 0x10) + 1;
            }
            else if (!bVar3) goto LAB_00486657;
          }
          else {
LAB_00486657:
            if (*(int *)(&DAT_0050ecb4 + (int)piVar1 * 0x10) != 0) {
              *(undefined4 *)(&DAT_0050ecb4 + (int)piVar1 * 0x10) = 0;
              if (*(int *)(&DAT_0050e474 + (int)piVar1 * 0x10) == 0) {
                *(int *)(&DAT_0050e474 + (int)piVar1 * 0x10) = DAT_0050fed8;
              }
              *(undefined4 *)(&DAT_0050e474 + (int)piVar1 * 0x10) =
                   *(undefined4 *)(&DAT_0050e474 + (int)piVar1 * 0x10);
            }
          }
          piVar6 = (int *)((int)piVar6 + 1);
          puVar7 = puVar7 + 1;
        } while (piVar6 < piVar5);
      }
      local_64 = local_64 + 1;
      local_58 = local_58 + 6;
      local_5c = local_5c + 0x80;
      local_60 = local_60 + 0x9d;
      if (DAT_0050fec8 <= local_64) {
        return;
      }
    }
    (**(code **)(*(int *)(&DAT_00eca0e4)[local_64 * 0x9d] + 0x1c))
              ((int *)(&DAT_00eca0e4)[local_64 * 0x9d]);
  }
  return;
}

