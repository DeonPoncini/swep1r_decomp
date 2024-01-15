#include "prototype.h"


void FUN_0047f470(short *param_1,undefined4 param_2,undefined2 *param_3)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_38;
  int local_34;
  undefined local_30 [48];
  
  psVar2 = param_1;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    puVar5 = &DAT_00e22a60;
    puVar4 = param_3;
    do {
      *puVar4 = 0xffff;
      *puVar5 = 0xbf800000;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  param_1 = (short *)0x0;
  puVar5 = (undefined4 *)FUN_0047e880(local_30,psVar2);
  local_34 = 0;
  if (0 < *(int *)(psVar2 + 2)) {
    do {
      FUN_004270c0();
      iVar3 = FUN_0044e5e0(*puVar5,local_34,0);
      puVar5[4] = iVar3;
      while (iVar3 != -1) {
        iVar3 = puVar5[4];
        puVar5[0xb] = 0;
        local_38 = 0;
        if (0 < *(short *)(*(int *)(psVar2 + 6) + iVar3 * 0x54)) {
          do {
            uVar1 = puVar5[0xb];
            puVar5[0xb] = uVar1 & 0xfffffffe;
            if (local_38 != 0) {
              puVar5[0xb] = uVar1 & 0xfffffffe | 1;
            }
            iVar3 = (int)*(short *)(*(int *)(psVar2 + 6) + 4 + (local_38 + iVar3 * 0x2a) * 2);
            puVar5[5] = iVar3;
            if (*psVar2 == 1) {
              FUN_0047f450(puVar5,param_2,param_3,&param_1);
            }
            else {
              iVar6 = 0;
              if (0 < *(short *)(*(int *)(psVar2 + 6) + iVar3 * 0x54)) {
                do {
                  uVar1 = puVar5[0xb];
                  puVar5[0xb] = uVar1 & 0xfffffffd;
                  if (iVar6 != 0) {
                    puVar5[0xb] = uVar1 & 0xfffffffd | 2;
                  }
                  iVar3 = (int)*(short *)(*(int *)(psVar2 + 6) + 4 + (iVar6 + puVar5[5] * 0x2a) * 2)
                  ;
                  puVar5[6] = iVar3;
                  if ((iVar3 != puVar5[4]) &&
                     (iVar7 = 0, 0 < *(short *)(*(int *)(psVar2 + 6) + iVar3 * 0x54))) {
                    do {
                      uVar1 = puVar5[0xb];
                      puVar5[0xb] = uVar1 & 0xfffffffb;
                      if (iVar7 != 0) {
                        puVar5[0xb] = uVar1 & 0xfffffffb | 4;
                      }
                      iVar3 = (int)*(short *)(*(int *)(psVar2 + 6) + 4 +
                                             (iVar7 + puVar5[6] * 0x2a) * 2);
                      puVar5[7] = iVar3;
                      if (iVar3 != puVar5[5]) {
                        FUN_0047f450(puVar5,param_2,param_3,&param_1);
                      }
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < *(short *)(*(int *)(psVar2 + 6) + puVar5[6] * 0x54));
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(short *)(*(int *)(psVar2 + 6) + puVar5[5] * 0x54));
              }
            }
            iVar3 = puVar5[4];
            local_38 = local_38 + 1;
          } while (local_38 < *(short *)(*(int *)(psVar2 + 6) + iVar3 * 0x54));
        }
        iVar3 = FUN_0044e5e0(*puVar5,local_34,puVar5[4] + 1);
        puVar5[4] = iVar3;
      }
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)(psVar2 + 2));
  }
  return;
}

