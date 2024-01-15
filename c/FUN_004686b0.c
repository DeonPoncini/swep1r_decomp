#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004686b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
    *(undefined4 *)(param_1 + 0x30) = param_2;
    *(undefined4 *)(param_1 + 0x34) = param_3;
    FUN_0042f7b0(param_1 + 0x44,0,0,0);
    FUN_0042f7b0(param_1 + 0x50,0,0,0);
    FUN_0042f7b0(param_1 + 0x5c,0,0,0);
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = param_4;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar2 = FUN_004816b0();
    *(float *)(param_1 + 0x1c) = (float)iVar2 * _DAT_004ad594 * _DAT_004ad598 - _DAT_004ad608;
    FUN_0042f7b0(param_1 + 0x20,0,0,0);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_0042f7b0(param_1 + 0x38,0,0,0);
    *(undefined4 *)(param_1 + 0x68) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x6c) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x70) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x84) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    iVar2 = FUN_004816b0();
    fVar1 = (float)iVar2 * _DAT_004ad594;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
    *(float *)(param_1 + 0xac) = (fVar1 + fVar1) - _DAT_004ad608;
  }
  return;
}

