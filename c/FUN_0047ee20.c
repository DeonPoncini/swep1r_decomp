#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ee20(short *param_1,float param_2,undefined4 param_3,undefined4 param_4,code *param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_3c;
  int local_34;
  undefined local_30 [48];
  
  psVar4 = param_1;
  fVar2 = _DAT_004adf4c / param_2;
  iVar5 = FUN_0047e880(local_30,param_1);
  piVar1 = (int *)(param_1 + 2);
  param_1 = (short *)0x0;
  if (0 < *piVar1) {
    local_3c = 0;
    do {
      FUN_004270c0();
      *(short **)(iVar5 + 0x10) = param_1;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      local_34 = 0;
      if (0 < *(short *)(local_3c + *(int *)(psVar4 + 6))) {
        do {
          iVar8 = 0;
          uVar7 = *(uint *)(iVar5 + 0x2c) & 0xfffffffe;
          *(uint *)(iVar5 + 0x2c) = uVar7;
          if (local_34 != 0) {
            *(uint *)(iVar5 + 0x2c) = uVar7 | 1;
          }
          iVar6 = (int)*(short *)(*(int *)(psVar4 + 6) + 4 +
                                 (local_34 + *(int *)(iVar5 + 0x10) * 0x2a) * 2);
          *(int *)(iVar5 + 0x14) = iVar6;
          if (*psVar4 == 1) {
            *(undefined4 *)(iVar5 + 8) = 0;
            do {
              (*param_5)(iVar5,param_2,param_3,param_4);
              fVar3 = fVar2 + *(float *)(iVar5 + 8);
              *(float *)(iVar5 + 8) = fVar3;
            } while (fVar3 < _DAT_004adf4c);
          }
          else if (0 < *(short *)(*(int *)(psVar4 + 6) + iVar6 * 0x54)) {
            do {
              uVar7 = *(uint *)(iVar5 + 0x2c) & 0xfffffffd;
              *(uint *)(iVar5 + 0x2c) = uVar7;
              if (iVar8 != 0) {
                *(uint *)(iVar5 + 0x2c) = uVar7 | 2;
              }
              iVar6 = (int)*(short *)(*(int *)(psVar4 + 6) + 4 +
                                     (iVar8 + *(int *)(iVar5 + 0x14) * 0x2a) * 2);
              *(int *)(iVar5 + 0x18) = iVar6;
              if ((iVar6 != *(int *)(iVar5 + 0x10)) &&
                 (iVar9 = 0, 0 < *(short *)(*(int *)(psVar4 + 6) + iVar6 * 0x54))) {
                do {
                  uVar7 = *(uint *)(iVar5 + 0x2c) & 0xfffffffb;
                  *(uint *)(iVar5 + 0x2c) = uVar7;
                  if (iVar9 != 0) {
                    *(uint *)(iVar5 + 0x2c) = uVar7 | 4;
                  }
                  iVar6 = (int)*(short *)(*(int *)(psVar4 + 6) + 4 +
                                         (iVar9 + *(int *)(iVar5 + 0x18) * 0x2a) * 2);
                  *(int *)(iVar5 + 0x1c) = iVar6;
                  if (iVar6 != *(int *)(iVar5 + 0x14)) {
                    *(undefined4 *)(iVar5 + 8) = 0;
                    do {
                      (*param_5)(iVar5,param_2,param_3,param_4);
                      fVar3 = fVar2 + *(float *)(iVar5 + 8);
                      *(float *)(iVar5 + 8) = fVar3;
                    } while (fVar3 < _DAT_004adf4c);
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar9 < *(short *)(*(int *)(psVar4 + 6) + *(int *)(iVar5 + 0x18) * 0x54));
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(short *)(*(int *)(psVar4 + 6) + *(int *)(iVar5 + 0x14) * 0x54));
          }
          local_34 = local_34 + 1;
        } while (local_34 < *(short *)(*(int *)(psVar4 + 6) + *(int *)(iVar5 + 0x10) * 0x54));
      }
      param_1 = (short *)((int)param_1 + 1);
      local_3c = local_3c + 0x54;
    } while ((int)param_1 < *(int *)(psVar4 + 2));
  }
  return;
}

