#include "prototype.h"


uint FUN_004a9750(uint param_1,byte **param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_8;
  byte bStack_7;
  
  if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
    pbVar4 = param_2[4];
    if (pbVar4 == (byte *)0xffffffff) {
      puVar1 = &DAT_004d43a0;
    }
    else {
      puVar1 = (undefined *)((&DAT_00ecd500)[(int)pbVar4 >> 5] + ((uint)pbVar4 & 0x1f) * 0x24);
    }
    if ((puVar1[4] & 0x80) != 0) {
      iVar2 = FUN_004a6aa0(&local_8,param_1);
      if (iVar2 == -1) {
        puVar3 = (undefined4 *)FUN_004a3dc0();
        *puVar3 = 0x2a;
        return 0xffff;
      }
      if (iVar2 == 1) {
        pbVar4 = param_2[1] + -1;
        param_2[1] = pbVar4;
        if ((int)pbVar4 < 0) {
          uVar5 = FUN_004a17f0((int)(char)local_8,param_2);
        }
        else {
          **param_2 = local_8;
          uVar5 = CONCAT11(bStack_7,local_8) & 0xff;
          *param_2 = *param_2 + 1;
        }
        if (uVar5 == 0xffffffff) {
          return 0xffffffff;
        }
LAB_004a9868:
        return param_1 & 0xffff;
      }
      pbVar4 = param_2[1] + -1;
      param_2[1] = pbVar4;
      if ((int)pbVar4 < 0) {
        uVar5 = FUN_004a17f0((int)(char)local_8,param_2);
      }
      else {
        **param_2 = local_8;
        uVar5 = CONCAT11(bStack_7,local_8) & 0xff;
        *param_2 = *param_2 + 1;
      }
      if (uVar5 != 0xffffffff) {
        pbVar4 = param_2[1];
        param_2[1] = pbVar4 + -1;
        if ((int)(pbVar4 + -1) < 0) {
          uVar5 = FUN_004a17f0((int)(char)bStack_7,param_2);
        }
        else {
          **param_2 = bStack_7;
          uVar5 = (uint)bStack_7;
          *param_2 = *param_2 + 1;
        }
        if (uVar5 != 0xffffffff) goto LAB_004a9868;
      }
      return 0xffff;
    }
  }
  pbVar4 = param_2[1];
  param_2[1] = pbVar4 + -2;
  if (-1 < (int)(pbVar4 + -2)) {
    *(short *)*param_2 = (short)param_1;
    *param_2 = *param_2 + 2;
    return param_1;
  }
  uVar5 = FUN_004aaa20(param_1 & 0xffff,param_2);
  return uVar5;
}

