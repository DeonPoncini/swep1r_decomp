#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00480170(short *param_1,float *param_2,float param_3,int param_4,int param_5,float param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  int local_b4;
  float local_ac;
  float local_a8;
  int local_a0;
  int local_9c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  undefined local_70 [48];
  float local_40;
  float local_3c;
  undefined local_30 [48];
  
  local_b4 = 0;
  if (*param_1 != 1) {
    return 0;
  }
  param_6 = _DAT_004adf4c / param_6;
  iVar5 = FUN_0047e880(local_30,param_1);
  bVar4 = false;
  local_9c = 0;
  if (0 < *(int *)(param_1 + 2)) {
    do {
      iVar8 = 0;
      *(int *)(iVar5 + 0x10) = local_9c;
      local_a0 = (int)*(short *)(*(int *)(param_1 + 6) + local_9c * 0x54);
      if (DAT_0050cb58 != 0) {
        bVar4 = false;
        if (local_9c == 1) {
          local_a0 = 1;
        }
        else if (DAT_0050cb58 == 1) {
          if ((0x62 < local_9c) && (local_9c < 0x72)) goto LAB_00480242;
        }
        else if (DAT_0050cb58 == 2) {
          if ((0x66 < local_9c) && (local_9c < 0x74)) {
LAB_00480242:
            bVar4 = true;
          }
        }
        else if (((DAT_0050cb58 == 3) && (0x83 < local_9c)) && (local_9c < 0x91)) goto LAB_00480242;
      }
      if (!bVar4) {
        *(undefined4 *)(iVar5 + 0x2c) = 0;
        FUN_0044e5a0(param_1,local_9c,&local_88);
        local_ac = local_88 - *param_2;
        local_a8 = local_84 - param_2[1];
        if (0 < local_a0) {
          fVar2 = -param_3;
          do {
            uVar7 = *(uint *)(iVar5 + 0x2c) & 0xfffffffe;
            *(uint *)(iVar5 + 0x2c) = uVar7;
            if (iVar8 != 0) {
              *(uint *)(iVar5 + 0x2c) = uVar7 | 1;
            }
            iVar6 = (int)*(short *)(*(int *)(param_1 + 6) + 4 +
                                   (iVar8 + *(int *)(iVar5 + 0x10) * 0x2a) * 2);
            *(int *)(iVar5 + 0x14) = iVar6;
            FUN_0044e5a0(param_1,iVar6,&local_7c);
            if ((((fVar2 <= local_ac) || (fVar2 <= local_7c - *param_2)) &&
                ((local_ac <= param_3 || (local_7c - *param_2 <= param_3)))) &&
               (((fVar2 <= local_a8 || (fVar2 <= local_78 - param_2[1])) &&
                ((local_a8 <= param_3 || (local_78 - param_2[1] <= param_3)))))) {
              *(undefined4 *)(iVar5 + 8) = 0;
              pfVar9 = (float *)(param_5 + local_b4 * 8);
              do {
                FUN_0044ed80(iVar5,local_70);
                local_ac = local_40 - *param_2;
                local_a8 = local_3c - param_2[1];
                if ((((local_ac < param_3) && (-local_ac < param_3)) && (local_a8 < param_3)) &&
                   (-local_a8 < param_3)) {
                  if (local_b4 < param_4) {
                    *pfVar9 = local_ac;
                    pfVar9[1] = local_a8;
                  }
                  local_b4 = local_b4 + 1;
                  pfVar9 = pfVar9 + 2;
                }
                fVar3 = param_6 + *(float *)(iVar5 + 8);
                bVar1 = fVar3 < _DAT_004adf4c;
                *(float *)(iVar5 + 8) = fVar3;
              } while (bVar1);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_a0);
        }
      }
      local_9c = local_9c + 1;
    } while (local_9c < *(int *)(param_1 + 2));
  }
  return local_b4;
}

