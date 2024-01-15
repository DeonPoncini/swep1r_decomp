#include "prototype.h"


void FUN_0040e6a0(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined local_100 [256];
  
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  uVar2 = FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0248__sRestore_Prev_004b5250,DAT_00e99720);
  FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0292__sVIDEO_SETTIN_004b5418);
  FUN_0049eb80(local_100,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0292__sVIDEO_SETTIN_004b5418,DAT_00e99738,0x80000,1,0,0);
  uVar1 = FUN_0042de30(uVar1);
  uVar1 = FUN_00413fc0(param_1,1,6,local_100,((uVar2 >> 1) + uVar2 >> 2) + 300,0xa0,uVar1);
  FUN_00414be0(uVar1,0xff,0,0,0xff);
  FUN_00411170(param_1,4,0,0x1a4,1);
  FUN_004112f0(param_1,0xcd,0x1a4);
  FUN_00411270(param_1,0x163,0x1a4);
  FUN_00411210(param_1,0x208,0x17c);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0294__sDynamic_Ligh_004b53e8,0);
  iVar3 = FUN_0042de10(uVar1);
  iVar4 = FUN_0042de10(&DAT_004b51b8,0);
  iVar5 = FUN_0042de10(s___X__004b53e0,0);
  iVar5 = iVar5 + iVar3 + iVar4 * 10;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0294__sDynamic_Ligh_004b53e8,DAT_00e99720);
  iVar3 = FUN_0042df70(uVar1);
  iVar3 = iVar3 * 3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0294__sDynamic_Ligh_004b53e8,0,iVar3,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0297__sReflections_E_004b53b4,0x1e,200,uVar1);
  FUN_00413c50(param_1,0x62,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0294__sDynamic_Ligh_004b53e8,0,iVar3,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0301__sSmoke_And_Du_004b5388,0x1e,0xe6,uVar1);
  FUN_00413c50(param_1,0x273c,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0294__sDynamic_Ligh_004b53e8,0,iVar3,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0300__sLens_Flare_E_004b5360,0x1e,0x104,uVar1);
  FUN_00413c50(param_1,0x273b,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0303__sModel_Detail_004b533c,
                       ((int)(iVar5 + (iVar5 >> 0x1f & 0xfU)) >> 4) + 0x3c + iVar5,0xaf,0,0);
  uVar1 = FUN_004131c0(param_1,1,6,uVar1);
  FUN_00414be0(uVar1,0xff,0x7d,0,0xff);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0303__sModel_Detail_004b533c,DAT_00e99738);
  iVar3 = FUN_0042df70(uVar6);
  uVar6 = FUN_00421360(s__MONDOTEXT_H_0303__sModel_Detail_004b533c,6);
  uVar6 = FUN_0042de10(uVar6);
  iVar4 = FUN_0041af00(uVar1,iVar3 + 0xaf,uVar6,3,&local_110);
  iVar3 = iVar3 + 0xaf + iVar4;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,0,iVar4,0x40080,0x80001);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0235_LOW_004b4e28,local_110,iVar3,uVar1);
  FUN_00413c50(param_1,0x67,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,0,iVar4,0x40000,0x80002);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0236_MED_004b4e10,local_10c,iVar3,uVar1);
  FUN_00413c50(param_1,0x67,0,uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,0,iVar4,0x40080,0x80003);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s_B_MONDOTEXT_H_0237_HIGH_004b4df7 + 1,local_108,iVar3,uVar1);
  FUN_00413c50(param_1,0x67,0,uVar1);
  return;
}

