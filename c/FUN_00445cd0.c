#include "prototype.h"


void FUN_00445cd0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int *param_6,
                 undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_e4;
  undefined4 local_e0 [56];
  
  local_e4 = local_e0;
  iVar1 = FUN_0048e680(s___data_default_mat_004b48cc);
  FUN_00408fb0(param_5,iVar1);
  FUN_0049eb80(iVar1,s_Rovermatic_004b48c0);
  *(float *)(iVar1 + 10) = (float)param_1 / (float)param_3;
  *(float *)(iVar1 + 0xe) = (float)param_2 / (float)param_4;
  *(undefined4 *)(iVar1 + 0x4c) = 5;
  *(undefined4 *)(iVar1 + 0x50) = 5;
  *(undefined4 *)(iVar1 + 0x54) = 5;
  *(undefined4 *)(iVar1 + 100) = 3;
  *(undefined4 *)(iVar1 + 0x68) = 3;
  *(undefined4 *)(iVar1 + 0x6c) = 3;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 2;
  *(undefined4 *)(iVar1 + 0x48) = 0x10;
  *(undefined4 *)(iVar1 + 0x70) = 1;
  *(undefined4 *)(iVar1 + 0x58) = 0xb;
  *(undefined4 *)(iVar1 + 0x5c) = 6;
  *(undefined4 *)(iVar1 + 0x60) = 1;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 7;
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  *(int *)(iVar1 + 0x80) = param_3;
  *(int *)(iVar1 + 0x84) = param_4;
  *(undefined4 *)(iVar1 + 0x88) = 1;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *local_e4 = 0;
  local_e4[1] = 0;
  local_e4[2] = 0;
  local_e4[3] = param_3;
  local_e4[4] = param_4;
  local_e4[5] = param_4 * param_3 * 2;
  local_e4[6] = param_3 * 2;
  local_e4[7] = param_3;
  puVar3 = (undefined4 *)(iVar1 + 0x44);
  puVar4 = local_e4 + 8;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_e4[0x16] = param_7;
  local_e4[0x17] = 0;
  FUN_0048aa40(*(undefined4 *)(iVar1 + 0x90));
  FUN_0048a5e0(*(undefined4 *)(iVar1 + 0x90),&local_e4,1,*(undefined4 *)(iVar1 + 0x7c));
  *param_6 = iVar1;
  return;
}

