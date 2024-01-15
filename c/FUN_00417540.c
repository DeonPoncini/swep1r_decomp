#include "prototype.h"


void FUN_00417540(int param_1,int param_2,int *param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = FUN_0042de30(param_2,(&DAT_00e99720)[param_1]);
  iVar2 = FUN_0042df70(param_2,(&DAT_00e99720)[param_1]);
  uVar4 = (uint)*(ushort *)param_3;
  uVar3 = (uint)*(ushort *)(param_3 + 1);
  if ((param_4 & 0x40000) == 0) {
    if ((param_4 & 0x10000) == 0) {
      if ((param_4 & 0x20000) == 0) {
        if ((param_4 & 0x80000) != 0) {
          uVar4 = (uint)(ushort)(*(ushort *)(param_3 + 2) - (short)iVar1);
        }
      }
      else {
        uVar3 = uVar3 + (((param_3[3] - iVar2) - param_3[1]) + 1U >> 1);
      }
    }
    else {
      uVar4 = uVar4 + (((param_3[2] - iVar1) - *param_3) + 1U >> 1);
    }
  }
  else {
    uVar4 = uVar4 + (((param_3[2] - iVar1) - *param_3) + 1U >> 1);
    uVar3 = uVar3 + (((param_3[3] - iVar2) - param_3[1]) + 1U >> 1);
  }
  if ((param_4 & 0x100000) == 0) {
    if ((param_4 & 0x200000) == 0) goto LAB_00417633;
    iVar1 = FUN_0042de30(&DAT_004b51b8,(&DAT_00e99720)[param_1]);
  }
  else {
    iVar1 = FUN_0042de30(&DAT_004b51b8,(&DAT_00e99720)[param_1]);
    iVar1 = iVar1 * 5;
  }
  uVar4 = uVar4 + iVar1;
LAB_00417633:
  FUN_004173c0(param_1,uVar4,uVar3,param_5,param_6,param_7,param_8,param_2,param_9,param_10,param_11
              );
  return;
}

