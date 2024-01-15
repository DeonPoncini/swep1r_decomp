#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004252a0(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined auStack_100 [256];
  
  uVar1 = DAT_004b2940;
  FUN_004804b0(1);
  if ((DAT_00ec8dac < 0x280) || (DAT_00ec8db0 < 0x1e0)) {
    iVar3 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,&DAT_004eb484,&DAT_004eb480,0);
    if (iVar3 != 0) {
      DAT_0050b5bc = 1;
    }
  }
  else {
    DAT_0050b5bc = 1;
  }
  uVar2 = DAT_00ec8db0;
  uVar8 = DAT_00ec8dac;
  if (DAT_0050b5bc == 0) {
    _DAT_00e9f2f0 = 0;
    _DAT_00e9f2f4 = 0;
    uVar7 = 0;
    uVar6 = 0;
    _DAT_00e9f2fc = 0x1e0;
    _DAT_00e9f2f8 = 0x280;
    if (_DAT_004ac448 <= (float)(ulonglong)DAT_00ec8db0 / (float)(ulonglong)DAT_00ec8dac) {
      uVar5 = __ftol();
      uVar6 = uVar2 - uVar5 >> 1;
    }
    else {
      uVar4 = __ftol();
      uVar7 = uVar8 - uVar4 >> 1;
      uVar5 = uVar2;
      uVar8 = uVar4;
    }
    _DAT_00e9f358 = uVar8 + uVar7;
    _DAT_00e9f35c = uVar5 + uVar6;
    _DAT_00e9f350 = uVar7;
    _DAT_00e9f354 = uVar6;
  }
  SmushStartup(DAT_0050b59c,0);
  if (DAT_0050b5c4 == 0) {
    if (DAT_004b6d20 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = ((uint)DAT_00e364a6 * 0x7f) / 0xff;
    }
  }
  else {
    uVar8 = 0x7f;
  }
  SmushSetVolume(uVar8);
  FUN_00488410(&DAT_00ec8da0,0,0);
  FUN_00489ab0();
  if (DAT_0050b560 == 0) {
    FUN_00488410(&DAT_00ec8da0,0,0);
  }
  DAT_004b2940 = 0;
  FUN_00425500();
  FUN_0049eb80(auStack_100,s__s_s_s_004b3e84,&DAT_00e9f300,s___data_anims__004b7da4,param_1);
  SmushPlay(auStack_100,0xf,0,0,0,0x280,0x1e0,0xffffffff,0,&LAB_00425070,1,1000000,1000000);
  DAT_004b2940 = uVar1;
  SmushShutdown();
  if (DAT_0050b5bc == 0) {
    (**(code **)(*DAT_004eb480 + 8))(DAT_004eb480);
  }
  FUN_004804b0(0);
  return 1;
}

