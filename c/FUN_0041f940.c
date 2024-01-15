#include "prototype.h"


undefined4 FUN_0041f940(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0041c260();
  local_10 = 0x82;
  local_c = 0x73;
  local_8 = 0x26b;
  local_4 = 0x1cb;
  iVar1 = FUN_00413130(0,&local_10,0x186b8,&LAB_0041fc70);
  if (iVar1 == 0) {
    return 0;
  }
  local_10 = 0x78;
  local_c = 0x73;
  local_8 = 0x141;
  local_4 = 0x11c;
  FUN_00413520(iVar1,0x186b3,&local_10,0,0,0);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0411__sRacer_004b6b5c,0x138,0x7d,0,0);
  FUN_004131c0(iVar1,0,6,uVar2);
  FUN_004131c0(iVar1,0x186b9,0,&DAT_004d55cc,0x172,0x82,0,0);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0412__sTrack_004b6b40,0x138,0x96,0,0);
  FUN_004131c0(iVar1,0,6,uVar2);
  FUN_004131c0(iVar1,0x186ba,0,&DAT_004d55cc,0x172,0x9b,0,0);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0414__sLaps_004b6b24,0x138,0xb9,0,0);
  FUN_004131c0(iVar1,0,6,uVar2);
  uVar2 = FUN_00413a90(iVar1,0x8b,0x172,0xaf,200,0x1000000,0);
  FUN_00413b30(uVar2,DAT_00ea02b8);
  FUN_00413fc0(iVar1,0x30d54,6,0,0x14a,0x32,0xdc,0x80000,0,0x40004,0);
  local_10 = 0x8c;
  local_c = 0x131;
  local_8 = 599;
  local_4 = 0x1a8;
  FUN_00413520(iVar1,0x186b4,&local_10,0,0x100000,0);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0416__sRetire_004b6b08,0,0x18b,0x8c,0x19,0x100000,0);
  FUN_004132a0(iVar1,0x186b6,6,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0417__sRace_004b6aec,0,0x1ae,0x8c,0x19,0x100000,0);
  FUN_004132a0(iVar1,0x186b5,6,uVar2);
  local_10 = 0x8c;
  local_c = 0x1ae;
  local_8 = 599;
  local_4 = 0x1d5;
  uVar2 = FUN_00413430(iVar1,0x186bb,&local_10,0,0x10000,0);
  FUN_00413500(uVar2,0x32);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0418__sPodracer_004b6acc,0,0x73,0x8c,0x19,0x100000,0);
  FUN_004132a0(iVar1,0x7e,6,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0419__sTracks_004b6ab0,0,0x91,0x8c,0x19,0x100000,0);
  FUN_004132a0(iVar1,0x7d,6,uVar2);
  uVar2 = FUN_00421360(s__MONDOTEXT_H_0421__sBoot_004b6a94,0,0xaf,0x8c,0x19,0x100000,0);
  FUN_004132a0(iVar1,0x80,6,uVar2);
  return 1;
}

