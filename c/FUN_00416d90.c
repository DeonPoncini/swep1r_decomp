#include "prototype.h"


undefined4 *
FUN_00416d90(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,int param_7,code *param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar3 = (param_7 + param_6) * 4 + 0x15c0;
  puVar1 = (undefined4 *)FUN_0049f270(uVar3);
  puVar5 = puVar1;
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  if (param_8 == (code *)0x0) {
    param_8 = FUN_00415850;
  }
  uVar2 = FUN_004174e0(puVar1[0x135],param_4);
  puVar1[0x135] = uVar2;
  puVar1[7] = param_2;
  puVar1[8] = param_5;
  puVar1[0x10] = param_6;
  puVar1[0xf] = param_7;
  puVar1[0x11] = puVar1 + param_7 + 0x15c;
  puVar1[4] = param_8;
  puVar1[5] = param_9;
  puVar1[0x137] = 0;
  FUN_00415810(puVar1,0,0,0x27f,0x1df);
  FUN_00414be0(puVar1,0xb7,0xf5,0xff,0xff);
  FUN_00414ca0(puVar1,0xb7,0xf5,0xff,0xff);
  FUN_00414c10(puVar1,0xb7,0xf5,0xff,0xff);
  FUN_00414c40(puVar1,0xff,0xff,0xff,0xff);
  FUN_00414c70(puVar1,0xff,0xff,0xff,0xff);
  FUN_00414b80(puVar1,param_4,0);
  if (param_3 == -1) {
    param_3 = 0;
  }
  FUN_004157d0(puVar1,param_3);
  FUN_00416840(param_1,puVar1);
  FUN_004151a0(puVar1,0xf,0,0);
  return puVar1;
}

