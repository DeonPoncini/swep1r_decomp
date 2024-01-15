#include "prototype.h"


void FUN_00465980(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                 int param_6,undefined4 param_7,undefined4 param_8)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *local_84;
  undefined local_80 [40];
  undefined4 local_58;
  undefined local_40 [64];
  
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined2 *)(param_2 + 0x5c) = 0xffff;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0xbf800000;
  *(undefined4 *)(param_2 + 100) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x68) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x6c) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x70) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffc;
  iVar4 = FUN_00450d20(0x54657374);
  *(int *)(param_2 + 0x84) = iVar4;
  *(int *)(iVar4 + 0x1e70) = param_2;
  if (param_4 == (int *)0x0) {
    if (param_6 != 0) {
      *(int *)(DAT_00e27818 + DAT_00e27814 * 4) = param_6;
      DAT_00e27814 = DAT_00e27814 + 1;
      FUN_00431a50(param_6,2,3,0x10,2);
      local_84 = (undefined *)0x0;
    }
  }
  else {
    *(int *)(DAT_00e27818 + DAT_00e27814 * 4) = *param_4;
    iVar3 = DAT_00e28674;
    DAT_00e27814 = DAT_00e27814 + 1;
    iVar2 = DAT_00e28674 * 0x58;
    local_84 = &DAT_00e28a80 + iVar2;
    FUN_00431b20(local_84,0xd065);
    *(undefined **)(DAT_00e28678 + iVar3 * 4) = local_84;
    *(undefined4 *)(&DAT_00e28a94 + iVar2) = 1;
    *(undefined **)(&DAT_00e28a98 + iVar2) = &DAT_00e28680 + iVar3 * 4;
    *(undefined4 *)(&DAT_00e28a98 + iVar2) = *(undefined4 *)(*param_4 + 0x18);
    FUN_004313d0(local_80);
    local_58 = 0xbf800000;
    FUN_00431640(local_84,local_80);
    *(uint *)(&DAT_00e28a90 + iVar2) = *(uint *)(&DAT_00e28a90 + iVar2) | 1;
    DAT_00e28674 = DAT_00e28674 + 1;
    FUN_00465820(param_4[7],&DAT_00e277e0);
    FUN_00465820(param_4[9],&DAT_00e277e0);
    if (param_4[0x48] != 0) {
      FUN_00431a50(param_4[0x48],2,0xfffffffc,0x10,3);
    }
    if (param_4[0x49] != 0) {
      FUN_00431a50(param_4[0x49],2,0xfffffffc,0x10,3);
    }
    FUN_00465820(param_4[0x41],&DAT_00e28964);
    FUN_00465820(param_4[0x42],&DAT_00e28964);
  }
  FUN_00465840(param_1,local_40,*(undefined4 *)(*(int *)(iVar4 + 0x1e70) + 0x14));
  uVar5 = FUN_0045d350(param_8);
  FUN_00475ad0(iVar4,*(undefined4 *)(param_1 + 0x2c),param_4,*(undefined4 *)(param_1 + 0x30),
               (int)*(short *)(iVar4 + 4),local_40,param_3,*(undefined4 *)(param_1 + 0x1bc),uVar5);
  *(undefined **)(iVar4 + 0x1994) = local_84;
  *(int *)(iVar4 + 0x348) = param_6;
  *(undefined4 *)(iVar4 + 0x34c) = param_7;
  if ((param_4 != (int *)0x0) && ((*(byte *)(iVar4 + 0x60) & 0x20) != 0)) {
    *(uint *)(*param_4 + 0x10) = *(uint *)(*param_4 + 0x10) | 0xc;
    *(undefined2 *)(*param_4 + 0xe) = *(undefined2 *)(iVar4 + 0x300);
    if (DAT_0050ca18 < 2) {
      if (param_4[1] != 0) {
        puVar1 = (uint *)(param_4[1] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[2] != 0) {
        puVar1 = (uint *)(param_4[2] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[3] != 0) {
        puVar1 = (uint *)(param_4[3] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[4] != 0) {
        puVar1 = (uint *)(param_4[4] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[5] != 0) {
        puVar1 = (uint *)(param_4[5] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[0x47] != 0) {
        puVar1 = (uint *)(param_4[0x47] + 0x10);
        *puVar1 = *puVar1 | 0x10;
      }
      if (param_4[0x2a] != 0) {
        puVar1 = (uint *)(param_4[0x2a] + 0x10);
        *puVar1 = *puVar1 | 0x100;
      }
      if (param_4[0x2b] != 0) {
        puVar1 = (uint *)(param_4[0x2b] + 0x10);
        *puVar1 = *puVar1 | 0x100;
      }
      if (param_4[0x1c] != 0) {
        puVar1 = (uint *)(param_4[0x1c] + 0x10);
        *puVar1 = *puVar1 | 0x100;
      }
      if (param_4[0x1d] != 0) {
        puVar1 = (uint *)(param_4[0x1d] + 0x10);
        *puVar1 = *puVar1 | 0x100;
      }
    }
  }
  FUN_00483a40(*(undefined4 *)(iVar4 + 0x300));
  if ((*(uint *)(iVar4 + 0x60) & 0x100) != 0) {
    FUN_00428a60(1,1,iVar4 + 0x20,0);
  }
  return;
}

