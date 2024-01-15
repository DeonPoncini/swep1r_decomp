#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f670(short *param_1,short param_2,int param_3,float param_4,float param_5,int param_6,
                 short param_7,short param_8,uint param_9,undefined4 param_10,int param_11,
                 float param_12,int param_13)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short local_48;
  short *local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined local_4 [4];
  
  if ((((param_9 & 8) == 0) && (_DAT_004acce8 < param_4)) && (_DAT_004acce8 < param_5)) {
    if ((param_4 == _DAT_004accec) && (param_5 == _DAT_004accec)) {
      param_9 = param_9 | 0x20;
    }
    else {
      param_9 = param_9 & 0xffffffdf;
    }
    if (param_1 != (short *)0x0) {
      local_40 = *(short **)(param_1 + 8);
      if ((param_9 & 0x800000) == 0) {
        local_30 = 0;
        local_34 = 0x3f800000;
      }
      else {
        FUN_0042f380(param_6,&local_30,&local_34);
      }
      if ((param_9 & 0x20000) == 0) {
        local_38 = 0.0;
        local_3c = 0.0;
      }
      else {
        local_1c = (int)param_1[1];
        local_38 = (float)(int)*param_1 * _DAT_004accc8 * param_4;
        local_3c = (float)local_1c * _DAT_004accc8 * param_5;
      }
      _DAT_0050c748 = param_9;
      FUN_0044e290(0,0,param_10,param_11,param_12,param_13);
      uVar2 = __ftol();
      local_8 = uVar2;
      local_18 = __ftol();
      local_10 = param_9 & 0x5000000;
      local_28 = 0x400;
      if (local_10 == 0) {
        local_28 = uVar2;
      }
      local_14 = param_9 & 0xa000000;
      local_2c = 0x400;
      if (local_14 == 0) {
        local_2c = local_18;
      }
      if (local_40 != (short *)0x0) {
        iVar6 = -1;
        iVar5 = -1;
        param_11 = -1;
        param_13 = 9000;
        param_6 = 9000;
        local_1c = 0;
        iVar7 = param_3;
        if (0 < param_1[6]) {
          while (0 < *local_40) {
            local_48 = (short)(param_9 & 0x2000);
            iVar4 = (int)*local_40;
            if (local_48 == 0) {
              param_13 = iVar6 + iVar4;
            }
            else {
              iVar6 = param_13 - iVar4;
              param_11 = iVar6;
            }
            if ((iVar6 < 0) || (fVar1 = param_12, *param_1 < param_13)) {
              if (iVar5 == -1) {
                if ((param_9 & 0x4000) == 0) {
                  param_12 = 0.0;
                  if (local_40[1] == 0) {
                    param_6 = (int)param_1[7];
                  }
                  else {
                    param_6 = (int)local_40[1];
                  }
                }
                else {
                  param_6 = (int)param_1[1];
                  if (local_40[1] == 0) {
                    param_12 = (float)(param_6 - param_1[7]);
                  }
                  else {
                    param_12 = (float)(param_6 - local_40[1]);
                  }
                }
              }
              else if ((param_9 & 0x4000) == 0) {
                param_12 = (float)param_6;
                if (local_40[1] == 0) {
                  param_6 = param_6 + param_1[7];
                }
                else {
                  param_6 = param_6 + local_40[1];
                }
              }
              else {
                param_6 = iVar5;
                if (local_40[1] == 0) {
                  param_12 = (float)(iVar5 - param_1[7]);
                }
                else {
                  param_12 = (float)(iVar5 - local_40[1]);
                }
              }
              if ((int)param_12 < 0) {
                return;
              }
              if (param_1[1] < param_6) {
                return;
              }
              if (local_48 == 0) {
                param_11 = 0;
                param_13 = iVar4;
              }
              else {
                param_11 = *param_1 - iVar4;
                param_13 = (int)*param_1;
              }
              fVar1 = (float)(int)param_12 * param_5 + ((float)(int)(short)param_3 - local_3c);
              local_24 = (float)param_6 * param_5 + ((float)(int)(short)param_3 - local_3c);
              __ftol();
              iVar5 = (int)param_12;
              iVar6 = param_11;
              if ((param_9 & 0x4000) == 0) {
                iVar7 = ((param_6 - (int)param_12) + -1) * 0x20;
              }
              else {
                iVar7 = __ftol();
                iVar7 = iVar7 + 0x10 >> 5;
                if ((param_9 & 0x100) != 0) {
                  iVar7 = iVar7 + 0x10;
                }
                if (local_14 != 0) {
                  iVar4 = __ftol();
                  iVar7 = iVar7 + iVar4;
                }
              }
            }
            param_12 = fVar1;
            local_20 = (float)param_13 * param_4 + ((float)(int)param_2 - local_38);
            local_c = __ftol();
            if (local_48 == 0) {
              iVar4 = __ftol();
              iVar4 = iVar4 + 0x10 >> 5;
              if ((param_9 & 0x100) != 0) {
                iVar4 = iVar4 + 0x10;
              }
            }
            else {
              iVar4 = ((param_13 - iVar6) + -1) * 0x20;
              if (local_10 != 0) {
                iVar3 = __ftol();
                iVar4 = iVar4 + iVar3;
              }
            }
            if (*(int *)(local_40 + 2) != 0) {
              FUN_0044f160(local_4,param_1,local_40,
                           (float)param_11 * param_4 + ((float)(int)param_2 - local_38),param_12,
                           local_20,local_24,(int)param_7,(int)param_8,iVar4,iVar7,local_28,local_2c
                           ,param_9 & 0x2000,(param_9 & 0x4000) == 0,local_30,local_34,param_9);
            }
            if (local_48 == 0) {
              iVar6 = iVar6 + *local_40;
              param_11 = iVar6;
            }
            else {
              param_13 = param_13 - *local_40;
            }
            local_40 = local_40 + 4;
            local_1c = local_1c + 1;
            if (param_1[6] <= local_1c) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}

