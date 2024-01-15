#include "prototype.h"


void FUN_00486710(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int **ppiVar7;
  uint uVar8;
  uint uVar9;
  int **ppiVar10;
  int local_220;
  int **local_21c;
  int **local_218;
  int *local_214;
  undefined local_210 [4];
  undefined auStack_20c [8];
  char acStack_204 [4];
  uint auStack_200 [128];
  
  uVar8 = 0;
  local_214 = (int *)0x20;
  if ((DAT_004c8170 != 0) && (DAT_0050fec0 != 0)) {
    local_220 = 0;
    local_21c = (int **)&DAT_00ecb484;
    local_218 = (int **)&DAT_0050d628;
    do {
      ppiVar7 = local_218;
      ppiVar10 = local_21c;
      piVar6 = *local_21c;
      if (piVar6 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar6 + 0x24))(piVar6,0x10,local_210);
        if (((iVar3 == -0x7ff8fff4) || (iVar3 == -0x7ff8ffe2)) || (iVar3 != 0)) {
          (**(code **)(**ppiVar10 + 0x1c))(*ppiVar10);
        }
        else {
          *ppiVar7 = (int *)local_21c;
          ppiVar7[1] = (int *)local_218;
          ppiVar7[2] = local_214;
          if (DAT_0050fed8 < 0x19) {
            *ppiVar7 = (int *)((&DAT_0050f648)[uVar8] + (int)local_21c >> 1);
            ppiVar7[1] = (int *)((&DAT_0050f658)[uVar8] + (int)local_218 >> 1);
          }
          (&DAT_0050f648)[uVar8] = local_21c;
          (&DAT_0050f658)[uVar8] = local_218;
        }
        iVar4 = (**(code **)(**ppiVar10 + 0x28))(*ppiVar10,0x10,auStack_20c,&local_220,0);
        uVar2 = DAT_0050fed8;
        iVar3 = DAT_0050fecc;
        if (iVar4 == 0) {
          puVar5 = auStack_200;
          for (piVar6 = local_214; piVar6 != (int *)0x0; piVar6 = (int *)((int)piVar6 + -1)) {
            uVar2 = *puVar5;
            if ((0xb < uVar2) && (uVar2 < 0x10)) {
              uVar9 = puVar5[2];
              iVar4 = uVar2 + 500 + uVar8 * 4;
              if (puVar5[1] == 0) {
LAB_004868e7:
                if ((&DAT_0050e868)[iVar4] != 0) {
                  (&DAT_0050e868)[iVar4] = 0;
                  if ((&DAT_0050e028)[iVar4] == 0) {
                    (&DAT_0050e028)[iVar4] = DAT_0050fed8;
                  }
                  (&DAT_0050e028)[iVar4] = (&DAT_0050e028)[iVar4] + (uVar9 - iVar3);
                }
              }
              else if ((&DAT_0050e868)[iVar4] == 0) {
                (&DAT_0050e868)[iVar4] = 1;
                (&DAT_0050e028)[iVar4] = iVar3 - uVar9;
                (&DAT_0050f668)[iVar4] = (&DAT_0050f668)[iVar4] + 1;
              }
              else if (puVar5[1] == 0) goto LAB_004868e7;
            }
            puVar5 = puVar5 + 4;
            ppiVar10 = local_21c;
            ppiVar7 = local_218;
          }
        }
        else if (iVar4 == 1) {
          uVar9 = 0;
          puVar5 = (uint *)((int)&DAT_0050e828 + local_220);
          iVar3 = local_220;
          do {
            if (acStack_204[uVar9] == '\0') {
LAB_00486844:
              if (*(int *)((int)&DAT_0050f068 + iVar3) != 0) {
                uVar1 = *puVar5;
                *(undefined4 *)((int)&DAT_0050f068 + iVar3) = 0;
                if (uVar1 == 0) {
                  *puVar5 = uVar2;
                }
                *puVar5 = *puVar5;
              }
            }
            else if (*(int *)((int)&DAT_0050f068 + iVar3) == 0) {
              iVar4 = *(int *)(&DAT_0050fe68 + iVar3);
              *(undefined4 *)((int)&DAT_0050f068 + iVar3) = 1;
              *puVar5 = 0;
              *(int *)(&DAT_0050fe68 + iVar3) = iVar4 + 1;
            }
            else if (acStack_204[uVar9] == '\0') goto LAB_00486844;
            uVar9 = uVar9 + 1;
            iVar3 = iVar3 + 4;
            puVar5 = puVar5 + 1;
            ppiVar7 = local_218;
            ppiVar10 = local_21c;
          } while (uVar9 < 4);
        }
        else {
          (**(code **)(**ppiVar10 + 0x1c))(*ppiVar10);
        }
      }
      uVar8 = uVar8 + 1;
      local_218 = ppiVar7 + 3;
      local_21c = ppiVar10 + 0x9d;
      local_220 = local_220 + 0x10;
    } while (uVar8 < DAT_0050fec0);
  }
  return;
}

