#include "prototype.h"


void FUN_00486170(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint local_304;
  char acStack_300 [256];
  int local_200 [128];
  
  uVar6 = 0;
  local_304 = 0x20;
  if (DAT_0050febc != 0) {
    do {
      iVar3 = (**(code **)(*(int *)(&DAT_0050d89c)[uVar6 * 0x9d] + 0x28))
                        ((int *)(&DAT_0050d89c)[uVar6 * 0x9d],0x10,local_200,&local_304,0);
      iVar2 = DAT_0050fecc;
      if (iVar3 < -0x7ff8ffe1) {
LAB_004861cd:
        (**(code **)(*(int *)(&DAT_0050d89c)[uVar6 * 0x9d] + 0x1c))
                  ((int *)(&DAT_0050d89c)[uVar6 * 0x9d]);
      }
      else if (iVar3 == 0) {
        uVar6 = 0;
        if (local_304 != 0) {
          piVar4 = local_200 + 1;
          uVar5 = local_304;
          do {
            iVar3 = piVar4[1];
            iVar1 = piVar4[-1];
            if (*piVar4 == 0) {
LAB_004862cc:
              if ((&DAT_0050e868)[iVar1] != 0) {
                (&DAT_0050e868)[iVar1] = 0;
                if ((&DAT_0050e028)[iVar1] == 0) {
                  (&DAT_0050e028)[iVar1] = DAT_0050fed8;
                }
                (&DAT_0050e028)[iVar1] = (&DAT_0050e028)[iVar1] + (iVar3 - iVar2);
              }
            }
            else if ((&DAT_0050e868)[iVar1] == 0) {
              (&DAT_0050e868)[iVar1] = 1;
              (&DAT_0050e028)[iVar1] = iVar2 - iVar3;
              (&DAT_0050f668)[iVar1] = (&DAT_0050f668)[iVar1] + 1;
            }
            else if (*piVar4 == 0) goto LAB_004862cc;
            piVar4 = piVar4 + 4;
            uVar5 = uVar5 - 1;
            uVar6 = local_304;
          } while (uVar5 != 0);
        }
      }
      else {
        if (iVar3 != 1) goto LAB_004861cd;
        iVar3 = (**(code **)(*(int *)(&DAT_0050d89c)[uVar6 * 0x9d] + 0x24))
                          ((int *)(&DAT_0050d89c)[uVar6 * 0x9d],0x100,acStack_300);
        iVar2 = DAT_0050fed8;
        if (-1 < iVar3) {
          uVar6 = 0;
          piVar4 = &DAT_0050e028;
          do {
            if (acStack_300[uVar6] == '\0') {
LAB_00486240:
              if ((&DAT_0050e868)[uVar6] != 0) {
                iVar3 = *piVar4;
                (&DAT_0050e868)[uVar6] = 0;
                if (iVar3 == 0) {
                  *piVar4 = iVar2;
                }
                *piVar4 = *piVar4;
              }
            }
            else if ((&DAT_0050e868)[uVar6] == 0) {
              iVar3 = (&DAT_0050f668)[uVar6];
              (&DAT_0050e868)[uVar6] = 1;
              *piVar4 = 0;
              (&DAT_0050f668)[uVar6] = iVar3 + 1;
            }
            else if (acStack_300[uVar6] == '\0') goto LAB_00486240;
            piVar4 = piVar4 + 1;
            uVar6 = uVar6 + 1;
          } while (piVar4 < &DAT_0050e428);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < DAT_0050febc);
  }
  return;
}

