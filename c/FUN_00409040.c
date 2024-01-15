#include "prototype.h"


int FUN_00409040(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_e4;
  undefined4 local_e0 [56];
  
  if (DAT_004d6c60 == 0) {
    DAT_004d6c60 = FUN_0048e680(s___data_default_mat_004b48cc);
    local_e4 = local_e0;
    puVar1 = (undefined4 *)FUN_00408e60(param_1,0x200);
    FUN_0049eb80(DAT_004d6c60,s_Rovermatic_004b48c0);
    *(undefined4 *)(DAT_004d6c60 + 10) = 0x3f800000;
    *(undefined4 *)(DAT_004d6c60 + 0xe) = 0x3f800000;
    *(undefined4 *)(DAT_004d6c60 + 0x44) = 1;
    *(undefined4 *)(DAT_004d6c60 + 0x48) = 0x10;
    *(undefined4 *)(DAT_004d6c60 + 0x4c) = 5;
    *(undefined4 *)(DAT_004d6c60 + 0x50) = 6;
    *(undefined4 *)(DAT_004d6c60 + 0x54) = 5;
    *(undefined4 *)(DAT_004d6c60 + 0x70) = 0;
    *(undefined4 *)(DAT_004d6c60 + 0x58) = 0xb;
    *(undefined4 *)(DAT_004d6c60 + 0x5c) = 5;
    *(undefined4 *)(DAT_004d6c60 + 0x60) = 0;
    *(undefined4 *)(DAT_004d6c60 + 0x74) = 0;
    *(undefined4 *)(DAT_004d6c60 + 100) = 3;
    *(undefined4 *)(DAT_004d6c60 + 0x68) = 2;
    *(undefined4 *)(DAT_004d6c60 + 0x6c) = 3;
    *(undefined4 *)(DAT_004d6c60 + 0x78) = 0;
    *(undefined4 *)(DAT_004d6c60 + 0x7c) = 0;
    *(undefined4 *)(DAT_004d6c60 + 0x88) = 1;
    *(undefined4 *)(DAT_004d6c60 + 0x8c) = 0;
    *local_e4 = 0;
    local_e4[1] = 0;
    local_e4[2] = 0;
    local_e4[3] = 0x10;
    local_e4[4] = 0x10;
    local_e4[5] = 0x200;
    local_e4[6] = 0x20;
    local_e4[7] = 0x10;
    puVar3 = (undefined4 *)(DAT_004d6c60 + 0x44);
    puVar4 = local_e4 + 8;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_e4[0x16] = puVar1;
    local_e4[0x17] = 0;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
    }
    FUN_0048aa40(*(undefined4 *)(DAT_004d6c60 + 0x90));
    FUN_0048a5e0(*(undefined4 *)(DAT_004d6c60 + 0x90),&local_e4,1,
                 *(undefined4 *)(DAT_004d6c60 + 0x7c));
  }
  return DAT_004d6c60;
}

