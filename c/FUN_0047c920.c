#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047c920(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_30;
  float local_2c;
  float local_10;
  float local_c;
  float local_8;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x3c),2,0xfffffffc,0x10,3);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  iVar2 = FUN_0047bf20(2);
  if (iVar2 == 0) {
    FUN_0047c080(0x6c);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  FUN_004313d0(&local_40);
  pfVar1 = *(float **)(param_1 + 0x4c);
  local_c = pfVar1[1];
  local_10 = *pfVar1 - _DAT_004ade74;
  local_4c = *(float *)(param_2 + 0x50) - *(float *)(param_2 + 0x16c);
  local_48 = *(float *)(param_2 + 0x54) - *(float *)(param_2 + 0x170);
  local_44 = *(float *)(param_2 + 0x58) - *(float *)(param_2 + 0x174);
  local_8 = pfVar1[2] - _DAT_004ade70;
  fVar3 = (float10)FUN_0042f780(&local_4c);
  if ((float10)_DAT_004ade78 < fVar3) {
    local_3c = -local_4c;
    local_30 = local_4c;
    local_2c = local_48;
    local_40 = local_48;
  }
  FUN_00431640(DAT_00e26fe8,&local_40);
  if (DAT_00e26fe8 != 0) {
    FUN_00431a50(DAT_00e26fe8,2,3,0x10,2);
  }
  iVar2 = FUN_0047c0f0(*(undefined4 *)(param_1 + 0x4c));
  *(int *)(param_1 + 0x48) = iVar2;
  if (iVar2 != 0) {
    FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    FUN_00431640(iVar2,&local_40);
    *(undefined **)(iVar2 + 0x18) = &DAT_00e26fd0;
  }
  FUN_0047bea0(2);
  return;
}

