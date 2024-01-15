#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00475ad0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 *param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  undefined4 *puVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float10 fVar10;
  undefined local_6c [12];
  undefined local_60 [12];
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar4 = param_1;
  *(int *)(param_1 + 0xac) = param_2;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (param_2 != 0) {
    FUN_0044eef0((int *)(param_1 + 0xac),0);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  uVar7 = *(uint *)(param_1 + 0x60) & 0xfffffff0;
  *(uint *)(param_1 + 0x60) = uVar7;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1e70) + 4);
  if (iVar6 == 0x4c6f636c) {
    uVar7 = uVar7 | 0x20;
  }
  else {
    if (iVar6 == 0x52454d4f) {
      *(uint *)(param_1 + 0x60) = uVar7 | 0x40;
      *(undefined4 *)(param_1 + 0x1eb4) = 0xffffffff;
      goto LAB_00475b62;
    }
    if (iVar6 != 0x41414949) goto LAB_00475b62;
    uVar7 = uVar7 | 0x80;
  }
  *(uint *)(param_1 + 0x60) = uVar7;
LAB_00475b62:
  if ((*(byte *)(*(int *)(param_1 + 0x1e70) + 8) & 0x20) == 0) {
    uVar7 = *(uint *)(param_1 + 0x60) & 0xfffffeff;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x60) | 0x100;
  }
  *(uint *)(param_1 + 0x60) = uVar7;
  puVar1 = (undefined4 *)(param_1 + 0x20);
  puVar5 = (undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x1c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x20);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x24);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x28);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x2c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x30);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x34);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x38);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x3c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x40);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x48);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x44);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x4c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x50);
  *(undefined4 *)(param_1 + 0xa4) = 0x40000000;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(*(int *)(param_1 + 0x1e70) + 0x54);
  *puVar1 = *param_6;
  *(undefined4 *)(param_1 + 0x24) = param_6[1];
  *(undefined4 *)(param_1 + 0x28) = param_6[2];
  *(undefined4 *)(param_1 + 0x2c) = param_6[3];
  *(undefined4 *)(param_1 + 0x30) = param_6[4];
  *(undefined4 *)(param_1 + 0x34) = param_6[5];
  *(undefined4 *)(param_1 + 0x38) = param_6[6];
  *(undefined4 *)(param_1 + 0x3c) = param_6[7];
  *(undefined4 *)(param_1 + 0x40) = param_6[8];
  *(undefined4 *)(param_1 + 0x44) = param_6[9];
  *(undefined4 *)(param_1 + 0x48) = param_6[10];
  *(undefined4 *)(param_1 + 0x4c) = param_6[0xb];
  *puVar5 = param_6[0xc];
  *(undefined4 *)(param_1 + 0x54) = param_6[0xd];
  *(undefined4 *)(param_1 + 0x58) = param_6[0xe];
  *(undefined4 *)(param_1 + 0x5c) = param_6[0xf];
  local_3c = *puVar5;
  local_38 = *(undefined4 *)(param_1 + 0x54);
  local_34 = *(undefined4 *)(param_1 + 0x58);
  local_24 = 0x42200000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xbf800000;
  fVar10 = (float10)FUN_00444d10(param_4,&local_3c,local_60,local_6c);
  *(float *)(param_1 + 0x58) =
       (float)((float10)*(float *)(param_1 + 0x58) - (fVar10 - (float10)*(float *)(param_1 + 0x94)))
  ;
  FUN_00430b80(puVar1,param_1 + 8);
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xe4) = 0x3f666666;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x108) = 0x45fd2000;
  *(undefined2 *)(param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x10e) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0x42000000;
  FUN_0042f7b0(param_1 + 0x194,0,0,0xbf800000);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  FUN_0042f7b0(param_1 + 0x1b8,0,0,0);
  *(undefined4 *)(param_1 + 0x1efc) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  FUN_0042f7b0(param_1 + 0x1c4,0,0,0);
  FUN_0042f7b0(param_1 + 0x1d0,0,0,0);
  FUN_0042f7b0(param_1 + 0x1dc,0,0,0);
  FUN_0042f7b0(param_1 + 0x144,0,0,0x3f800000);
  FUN_0042f7b0(param_1 + 0x154,0,0,0);
  FUN_0042f7d0(param_1 + 0x16c,puVar5);
  FUN_0042f7d0(param_1 + 0x178,puVar5);
  FUN_0042f7b0(param_1 + 0x160,0,0,0x3f800000);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x1f18) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x1f00) = 0x42a00000;
  *(undefined4 *)(param_1 + 0x1f04) = 0;
  *(undefined4 *)(param_1 + 0x1f08) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x19b8) = 0;
  *(undefined4 *)(param_1 + 0x1f14) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x1e6c) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x244) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x234) = 0x41200000;
  *(int *)(param_1 + 0x238) = param_7;
  if (param_7 < 0) {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  else {
    *(int *)(param_1 + 0x238) = param_7 + 1;
    if (2 < param_7 + 1) {
      *(int *)(param_1 + 0x238) = param_7;
    }
    if (5 < *(int *)(param_1 + 0x238)) {
      *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x268) = 0x42700000;
  *(undefined4 *)(param_1 + 0x1998) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0xffffff00;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x1f24) = 0;
  *(undefined4 *)(param_1 + 0x1f1c) = 0;
  *(undefined4 *)(param_1 + 0x1f20) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  puVar5 = (undefined4 *)(param_1 + 0x288);
  iVar6 = 6;
  do {
    puVar5[-6] = 0;
    *puVar5 = 0;
    puVar5[6] = 0;
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x1e3c) = 0;
  iVar6 = param_1 + 0x19bc;
  param_1 = 0x12;
  do {
    FUN_0044bb10(iVar6,puVar1);
    iVar6 = iVar6 + 0x40;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *(undefined4 *)(iVar4 + 0x1e40) = 9;
  *(undefined4 *)(iVar4 + 0x1e44) = 6;
  FUN_0042f7b0(iVar4 + 0x1e48,0,0,0);
  FUN_0042f7b0(iVar4 + 0x1e54,0,0,0);
  *(int *)(iVar4 + 0x13c) = param_4;
  *(undefined4 *)(iVar4 + 0x1e60) = 0;
  *(undefined4 *)(iVar4 + 0x344) = param_3;
  *(undefined4 *)(iVar4 + 0x300) = param_5;
  *(undefined4 *)(iVar4 + 0x304) = 0;
  if (((param_10 != 0) && ((*(byte *)(iVar4 + 0x60) & 0x20) != 0)) &&
     (*(char *)(*(int *)(iVar4 + 0x1e70) + 0x10) != '\0')) {
    *(undefined4 *)(iVar4 + 0x304) = 2;
  }
  iVar6 = iVar4 + 0x1610;
  iVar8 = iVar4 + 0x350;
  param_4 = 0x4b;
  do {
    FUN_004313d0(iVar8);
    FUN_0042f7b0(iVar6,0,0,0);
    iVar8 = iVar8 + 0x40;
    iVar6 = iVar6 + 0xc;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  *(undefined4 *)(iVar4 + 0x13c8) = 0xc4fa0000;
  *(undefined4 *)(iVar4 + 0x1408) = 0xc4fa0000;
  iVar6 = 4;
  pfVar9 = (float *)(iVar4 + 0x199c);
  do {
    iVar8 = FUN_004816b0();
    iVar6 = iVar6 + -1;
    *pfVar9 = (float)iVar8 * _DAT_004adbac * _DAT_004adc34;
    pfVar9 = pfVar9 + 1;
  } while (iVar6 != 0);
  *(undefined4 *)(iVar4 + 0x19b0) = 0;
  *(undefined4 *)(iVar4 + 0x19ac) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x19b4) = 0x3f800000;
  local_20 = 0x734c4f44;
  local_1c = (-(uint)(DAT_00ec86bc != 1) & 0xfffffffe) + 2;
  FUN_00450c00(iVar4,&local_20);
  FUN_0046d4c0(iVar4);
  if (*(int *)(iVar4 + 0x344) != 0) {
    iVar6 = *(int *)(*(int *)(iVar4 + 0x344) + 0xf8);
    if (iVar6 != 0) {
      puVar2 = (uint *)(iVar6 + 0x10);
      *puVar2 = *puVar2 | 1;
    }
    iVar6 = *(int *)(*(int *)(iVar4 + 0x344) + 8);
    if (iVar6 != 0) {
      puVar2 = (uint *)(iVar6 + 0x10);
      *puVar2 = *puVar2 | 1;
    }
    iVar6 = *(int *)(*(int *)(iVar4 + 0x344) + 0x10);
    if (iVar6 != 0) {
      puVar2 = (uint *)(iVar6 + 0x10);
      *puVar2 = *puVar2 | 1;
    }
    iVar6 = *(int *)(*(int *)(iVar4 + 0x344) + 0x38);
    if (iVar6 != 0) {
      puVar2 = (uint *)(iVar6 + 0x10);
      *puVar2 = *puVar2 | 1;
    }
  }
  *(undefined4 *)(iVar4 + 0x1e64) = 0x40000000;
  *(undefined4 *)(iVar4 + 0x1e68) = 0x40000000;
  if ((*(int *)(iVar4 + 0x344) != 0) &&
     (iVar6 = *(int *)(*(int *)(iVar4 + 0x344) + 0xf8), iVar6 != 0)) {
    iVar6 = FUN_00482000(iVar6,&local_54,0);
    if (iVar6 != 0) {
      fVar3 = (local_48 - local_54) * _DAT_004adc3c;
      *(float *)(iVar4 + 0x1e68) = (local_44 - local_50) * _DAT_004adc38;
      *(float *)(iVar4 + 0x1e64) = fVar3;
    }
  }
  if (**(int **)(*(int *)(iVar4 + 0x1e70) + 0x18) == 0xe) {
    *(undefined4 *)(iVar4 + 0x1e64) = 0x40400000;
    *(undefined4 *)(iVar4 + 0x1e68) = 0x40a00000;
  }
  if ((*(byte *)(iVar4 + 0x60) & 0x20) != 0) {
    FUN_0040a120(0);
    FUN_0040b110(iVar4);
  }
  if (((*(uint *)(iVar4 + 0x60) & 0x20) != 0) || ((*(uint *)(iVar4 + 0x60) & 0x100) != 0)) {
    FUN_00426910(1,**(undefined4 **)(*(int *)(iVar4 + 0x1e70) + 0x18));
  }
  if ((*(byte *)(iVar4 + 0x60) & 0x20) != 0) {
    FUN_0046d690(iVar4);
  }
  return;
}

