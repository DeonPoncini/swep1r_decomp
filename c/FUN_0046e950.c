#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e950(int param_1,undefined4 param_2,int param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 local_50 [4];
  float local_40 [4];
  float local_30 [4];
  undefined local_20 [16];
  undefined local_10 [16];
  
  if (((DAT_00e28a00 != 0) && (DAT_00e28764 != 0)) &&
     (iVar2 = FUN_0046d650(DAT_00e28764), iVar2 != 0)) {
    local_50[0] = 0x42697473;
    FUN_00450c50(0x54657374,local_50);
    *(undefined4 *)(param_1 + 0x324) = param_2;
    FUN_004313d0(local_40);
    pfVar5 = local_30;
    iVar2 = 3;
    do {
      iVar3 = FUN_004816b0();
      pfVar5[-4] = (float)iVar3 * _DAT_004ad970 * _DAT_004ad9fc - _DAT_004ada00;
      uVar4 = FUN_004816b0();
      if ((uVar4 & 1) != 0) {
        pfVar5[-4] = -pfVar5[-4];
      }
      iVar3 = FUN_004816b0();
      *pfVar5 = (float)iVar3 * _DAT_004ad970 * _DAT_004ad9fc - _DAT_004ada00;
      uVar4 = FUN_004816b0();
      if ((uVar4 & 1) != 0) {
        *pfVar5 = -*pfVar5;
      }
      pfVar5 = pfVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_0042f9f0(local_20,local_40,local_30);
    FUN_0042f9f0(local_30,local_20,local_40);
    FUN_0042f9b0(local_40);
    FUN_0042f9b0(local_30);
    FUN_0042f9b0(local_20);
    fVar1 = param_4 * _DAT_004ad978 - param_4;
    iVar2 = FUN_004816b0(local_40);
    FUN_0042fa50(local_40,(float)iVar2 * _DAT_004ad970 * fVar1 + param_4);
    iVar2 = FUN_004816b0(local_30);
    FUN_0042fa50(local_30,(float)iVar2 * _DAT_004ad970 * fVar1 + param_4);
    iVar2 = FUN_004816b0(local_20);
    FUN_0042fa50(local_20,(float)iVar2 * _DAT_004ad970 * fVar1 + param_4);
    FUN_0046d610(DAT_00e28764);
    FUN_0046d5c0(DAT_00e28764,0x40400000);
    if (-1 < *(int *)(param_1 + 0x324)) {
      param_3 = (*(int *)(param_1 + 0x324) + 0xe) * 0x40 + param_1;
    }
    FUN_0042f7d0(local_10,param_3);
    if (*(int *)(param_1 + 0x344) == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x348);
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x344) + 4);
    }
    FUN_0046e910(DAT_00e28a00,uVar6);
    FUN_0044bb10(&DAT_00e289c0,local_40);
    FUN_00431640(DAT_00e28a00,local_40);
    if (DAT_00e28a00 != 0) {
      FUN_00431a50(DAT_00e28a00,2,3,0x10,2);
    }
  }
  return;
}

