#include "prototype.h"


void FUN_0040ffe0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_120;
  int local_11c;
  undefined4 local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined4 local_108;
  int local_104;
  undefined local_100 [256];
  
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0339__sRemove_004b5bb0,DAT_00e99720);
  iVar3 = FUN_0042de30(uVar2);
  iVar3 = iVar3 * 3;
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0339__sRemove_004b5bb0,DAT_00e99720);
  iVar4 = FUN_0042df70(uVar2);
  iVar1 = iVar4 * 3;
  FUN_00411170(param_1,3,0,0x1a9,1);
  local_120 = 0xc3;
  local_11c = 0x8c;
  local_118 = 0x1bc;
  local_114 = 0x153;
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0340__sLOAD_SAVE_SE_004b5b88);
  FUN_0049eb80(local_100,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0340__sLOAD_SAVE_SE_004b5b88,DAT_00e99738,0x80000,1,0,0);
  uVar2 = FUN_0042de30(uVar2);
  uVar2 = FUN_00413fc0(param_1,1,6,local_100,500,0x3c,uVar2);
  FUN_00414be0(uVar2,0xff,0,0,0xff);
  uVar2 = FUN_00413520(param_1,0x2732,&local_120,0,0,0);
  FUN_004138b0(uVar2,0xff,100,0,0xff);
  local_110 = local_120;
  local_108 = local_118;
  local_10c = local_114 + 0x14;
  local_104 = local_114 + 0x13 + iVar4 * 6;
  uVar2 = FUN_00413430(param_1,0x2731,&local_110,0,0x20000,0);
  FUN_00413500(uVar2,0x18);
  FUN_00414ca0(uVar2,0xff,100,0,0xff);
  FUN_00414e60(uVar2,0);
  iVar4 = local_11c;
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0341__sLoad_004b5b6c,local_120 + -0x96,local_11c + 0x28,iVar3,
                       iVar1,0x100000,0);
  FUN_004132a0(param_1,0x2735,0xffffffff,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0339__sRemove_004b5bb0,local_120 + -0x96,iVar4 + 0x46,iVar3,
                       iVar1,0x100000,0);
  FUN_004132a0(param_1,0x2738,0xffffffff,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0342__sSave_004b5b50,local_120 + -0x96,iVar4 + 100,iVar3,iVar1
                       ,0x100000,0);
  FUN_004132a0(param_1,0x2734,0xffffffff,uVar2);
  return;
}

