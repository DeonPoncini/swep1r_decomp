#include "prototype.h"


void FUN_0040ea70(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined local_100 [256];
  
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0252__sReset_Defaul_004b5630,DAT_00e99720);
  FUN_0042de30(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0252__sReset_Defaul_004b5630,DAT_00e99720);
  FUN_0042df70(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0305__sAUDIO_SETTIN_004b560c);
  FUN_0049eb80(local_100,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0305__sAUDIO_SETTIN_004b560c,DAT_00e99738,0x80000,1,0,0);
  uVar1 = FUN_0042de30(uVar1);
  uVar1 = FUN_00413fc0(param_1,1,6,local_100,500,0x3c,uVar1);
  FUN_00414be0(uVar1,0xff,0,0,0xff);
  FUN_00411170(param_1,4,0,0x1a4,1);
  FUN_004112f0(param_1,0xcd,0x1a4);
  FUN_00411270(param_1,0x163,0x1a4);
  FUN_00411210(param_1,0x208,0x17c);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0);
  FUN_0042de10(uVar1);
  FUN_0042de10(&DAT_004b51b8,0);
  FUN_0042de10(s___X__004b53e0,0);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0306__s3D_Spatializ_004b55a4,DAT_00e99720);
  iVar2 = FUN_0042df70(uVar1);
  iVar2 = iVar2 * 3;
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0308__sSound_System_004b5578,0xf,0x73,uVar1);
  iVar3 = FUN_00413c50(param_1,0x2741,0,uVar1);
  uVar1 = FUN_004131c0(param_1,0x58,0,&DAT_004d55cc,0xf,
                       ((*(int *)(iVar3 + 0x30) - *(int *)(iVar3 + 0x28)) + 1) / 2 + 0x82,0x100000,0
                      );
  FUN_00414be0(uVar1,0xff,0xff,0,200);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0309__sUse_Hi_Res___004b5548,0xf,0xac,uVar1);
  FUN_00413c50(param_1,0x2744,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0502__sIn_Race_Voic_004b551c,0xf,0xd1,uVar1);
  FUN_00413c50(param_1,0x2746,0,uVar1);
  iVar3 = FUN_00413a90(param_1,0x273e,0x13b,199,300,0x80000,0);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0310_Sound_Effects_V_004b54f4,0x171,
                       ((*(int *)(iVar3 + 0x30) - *(int *)(iVar3 + 0x28)) + 1) / 2 + 0xc4,0x100000,0
                      );
  uVar1 = FUN_004131c0(param_1,10000,0,uVar1);
  FUN_00414be0(uVar1,0xff,0xff,0,0xb9);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0503__sIn_Race_Musi_004b54c8,0xf,0xf6,uVar1);
  FUN_00413c50(param_1,0x2747,0,uVar1);
  iVar3 = FUN_00413a90(param_1,0x273f,0x13b,0xec,300,0x80000,0);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0311_Music_Cutscene_004b54a0,0x16d,
                       ((*(int *)(iVar3 + 0x30) - *(int *)(iVar3 + 0x28)) + 1) / 2 + 0xe9,0x100000,0
                      );
  uVar1 = FUN_004131c0(param_1,0x2711,0,uVar1);
  FUN_00414be0(uVar1,0xff,0xff,0,0xb9);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0306__s3D_Spatializ_004b55a4,0xf,0x132,uVar1);
  FUN_00413c50(param_1,0x2742,0,uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0517__s3D_Spatializ_004b55d8,0,iVar2,0x20000,0);
  uVar1 = FUN_0042de10(uVar1);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0312__sDoppler_Effe_004b5470,0xf,0x15f,uVar1);
  FUN_00413c50(param_1,0x2743,0,uVar1);
  iVar2 = FUN_00413a90(param_1,0x2740,0x13b,0x155,300,0x1080000,0);
  uVar1 = FUN_00421360(s__MONDOTEXT_H_0313_2D_3D_Relative_004b543c,0x159,
                       0x169 - ((*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x28)) + 1) / 2,0x100000,
                       0);
  uVar1 = FUN_004131c0(param_1,0x2712,0,uVar1);
  FUN_00414be0(uVar1,0xff,0xff,0,0xb9);
  return;
}

