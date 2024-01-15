#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473f40(int param_1,float param_2)

{
  bool bVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [64];
  
  FUN_0044eeb0(param_1 + 0xac,local_40,param_2);
  FUN_00430b80(local_40,&local_58);
  *(undefined4 *)(param_1 + 8) = local_58;
  *(undefined4 *)(param_1 + 0xc) = local_54;
  *(undefined4 *)(param_1 + 0x10) = local_50;
  *(undefined4 *)(param_1 + 0x14) = local_4c;
  *(undefined4 *)(param_1 + 0x18) = local_48;
  *(undefined4 *)(param_1 + 0x1c) = local_44;
  FUN_00431060(param_1 + 0x20,(undefined4 *)(param_1 + 8));
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff65fdef;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xff3fffff;
  bVar1 = param_2 < _DAT_004adba0;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfbffffff;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x10e) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe0);
  }
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0x42000000;
  FUN_0042f7b0(param_1 + 0x194,0,0,0xbf800000);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0x42c80000;
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
  FUN_0042f7b0(param_1 + 0x154,0,0,0);
  FUN_0042f7b0(param_1 + 0x144,0,0,0x3f800000);
  FUN_0042f7d0(param_1 + 0x16c,param_1 + 0x50);
  FUN_0042f7d0(param_1 + 0x178,param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x1f18) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x1f14) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x19b0) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0x42700000;
  *(undefined4 *)(param_1 + 0x19ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19b4) = 0x3f800000;
  return;
}

