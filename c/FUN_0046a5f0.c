#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0046a5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = FUN_00450d20(0x536d6f6b);
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar3 + 100) = param_2;
  *(undefined4 *)(iVar3 + 0x60) = param_1;
  *(undefined4 *)(iVar3 + 0x68) = param_3;
  FUN_004310b0(iVar3 + 0x20,param_5,param_5,param_5);
  FUN_0042f7d0(iVar3 + 0x50,param_4);
  switch(param_1) {
  case 2:
  case 3:
    fVar1 = (float)_DAT_004ad748;
    *(undefined4 *)(iVar3 + 0x70) = 5;
    FUN_0042f7b0(iVar3 + 0x74,0,0,param_5 * fVar1);
    fVar1 = param_5 * _DAT_004ad740;
    *(float *)(iVar3 + 0x8c) = fVar1;
    fVar2 = param_5 * _DAT_004ad73c;
    *(float *)(iVar3 + 0x88) = param_5;
    *(undefined4 *)(iVar3 + 0x98) = 0x43b40000;
    *(undefined4 *)(iVar3 + 0x9c) = 0xc1100000;
    *(float *)(iVar3 + 0x90) = fVar2;
    *(undefined4 *)(iVar3 + 0xa0) = 0x3fb33333;
    *(undefined4 *)(iVar3 + 0xa4) = 0;
    *(float *)(iVar3 + 0x94) = fVar1;
    *(undefined4 *)(iVar3 + 0xa8) = 0x40400000;
    *(undefined4 *)(iVar3 + 0xac) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xb0) = 0x3f000000;
    FUN_00430a90(iVar3 + 0xb4,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    break;
  default:
    goto switchD_0046a652_caseD_4;
  case 6:
    fVar1 = (float)_DAT_004ad730;
    *(undefined4 *)(iVar3 + 0x70) = 5;
    FUN_0042f7b0(iVar3 + 0x74,0,param_5 * fVar1,0);
    *(float *)(iVar3 + 0x8c) = param_5 * _DAT_004ad738;
    fVar1 = param_5 * _DAT_004ad73c;
    *(float *)(iVar3 + 0x88) = param_5;
    *(undefined4 *)(iVar3 + 0x98) = 0x43b40000;
    *(undefined4 *)(iVar3 + 0x9c) = 0xc1100000;
    *(float *)(iVar3 + 0x90) = fVar1;
    param_5 = param_5 * _DAT_004ad740;
    *(undefined4 *)(iVar3 + 0xa0) = 0x3fb33333;
    *(undefined4 *)(iVar3 + 0xa4) = 0;
    *(undefined4 *)(iVar3 + 0xa8) = 0x40400000;
    *(undefined4 *)(iVar3 + 0xac) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xb0) = 0x3f000000;
    *(float *)(iVar3 + 0x94) = param_5;
    FUN_00430a90(iVar3 + 0xb4,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    break;
  case 8:
    fVar1 = (float)_DAT_004ad730;
    *(undefined4 *)(iVar3 + 0x70) = 5;
    FUN_0042f7b0(iVar3 + 0x74,0,param_5 * fVar1,0);
    *(float *)(iVar3 + 0x8c) = param_5 * _DAT_004ad738;
    fVar1 = param_5 * _DAT_004ad73c;
    *(float *)(iVar3 + 0x88) = param_5;
    *(undefined4 *)(iVar3 + 0x98) = 0x43b40000;
    *(undefined4 *)(iVar3 + 0x9c) = 0xc1100000;
    *(float *)(iVar3 + 0x90) = fVar1;
    param_5 = param_5 * _DAT_004ad740;
    *(undefined4 *)(iVar3 + 0xa0) = 0x4019999a;
    *(undefined4 *)(iVar3 + 0xa4) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0xa8) = 0x40400000;
    *(undefined4 *)(iVar3 + 0xac) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0xb0) = 0x3f000000;
    *(float *)(iVar3 + 0x94) = param_5;
    FUN_00430a90(iVar3 + 0xb4,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  }
  FUN_00430a90(iVar3 + 0xc4,0,0,0,0x3f800000);
  *(undefined4 *)(iVar3 + 0x80) = 0x3dcccccd;
  *(undefined4 *)(iVar3 + 0x84) = 0x3f000000;
  *(undefined4 *)(iVar3 + 0xd4) = 0;
  *(undefined4 *)(iVar3 + 0xd8) = 0;
switchD_0046a652_caseD_4:
  return iVar3;
}

