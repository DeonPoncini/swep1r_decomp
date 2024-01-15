#include "prototype.h"


undefined4 FUN_00425500(void)

{
  char cVar1;
  DWORD dwLen;
  LPCVOID lpData;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 *puVar13;
  ushort *local_38c;
  uint local_388;
  DWORD local_384;
  char acStack_380 [128];
  undefined auStack_300 [128];
  CHAR aCStack_280 [128];
  undefined4 auStack_200 [4];
  undefined4 local_1ef;
  CHAR local_100 [256];
  
  puVar8 = &local_1ef;
  for (iVar5 = 0x3b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined *)((int)puVar8 + 2) = 0;
  if (DAT_004b79fc == 0) {
    FUN_0049eb80(&DAT_00e9f300,&DAT_004d55cc);
    return 0;
  }
  dwLen = GetFileVersionInfoSizeA(s_swep1rcr_exe_004b7f24,&local_384);
  if (dwLen != 0) {
    lpData = (LPCVOID)FUN_0049f270(dwLen);
    BVar2 = GetFileVersionInfoA(s_swep1rcr_exe_004b7f24,0,dwLen,lpData);
    if ((BVar2 != 0) &&
       (BVar2 = VerQueryValueA(lpData,s__VarFileInfo_Translation_004b7f08,&local_38c,&local_388),
       BVar2 != 0)) {
      wsprintfA(local_100,s__StringFileInfo__04X_04X_FileVer_004b7ee0,(uint)*local_38c,
                (uint)local_38c[1]);
      BVar2 = VerQueryValueA(lpData,local_100,&local_38c,&local_388);
      if (BVar2 != 0) {
        uVar6 = 0xffffffff;
        do {
          puVar9 = local_38c;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          puVar9 = (ushort *)((int)local_38c + 1);
          cVar1 = *(char *)local_38c;
          local_38c = puVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        puVar8 = (undefined4 *)((int)puVar9 - uVar6);
        puVar13 = auStack_200;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar13 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined *)puVar13 = *(undefined *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
      }
    }
    FUN_0049f200(lpData);
  }
  iVar5 = FUN_0049d2e0(s_CD_Path_004b7ed8,&DAT_00e9f300,0x50,&DAT_004d55cc);
  if (iVar5 == 0) {
    GetDriveTypeA(&DAT_00e9f300);
    FUN_0049eb80(auStack_300,s__s__swheel_map_004b7ec0,&DAT_00e9f300,
                 s___data_config_default__004b3e8c);
    FUN_0049f1e0(auStack_300,&DAT_004b7ebc);
    FUN_0049eb80(acStack_380,s_racer_s_004b7e4c,s_100_0_004b7e54);
    do {
      GetVolumeInformationA
                (&DAT_00e9f300,aCStack_280,0x80,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPSTR)0x0,0)
      ;
      uVar6 = 0xffffffff;
      pcVar11 = acStack_380;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      _strncmp(aCStack_280,acStack_380,~uVar6 - 2);
      FUN_0049eb80(auStack_300,s__s__swheel_map_004b7ec0,&DAT_00e9f300,
                   s___data_config_default__004b3e8c);
      FUN_0049eb80(auStack_200,&DAT_004b2524,&DAT_00e9f300,s__Data_Anims_PlanetG_znm_004b7e2c);
      iVar5 = FUN_004a0590(auStack_200,0);
      if (iVar5 != -1) {
        iVar4 = FUN_004a04e0(iVar5);
        if (iVar4 == 0x11214e7) {
          FUN_004a03e0(iVar5);
          uVar6 = 0xffffffff;
          pcVar11 = &DAT_004b7db4;
          goto code_r0x004257ed;
        }
        FUN_004a03e0(iVar5);
      }
      FUN_0049eb80(local_100,s_Error__Please_insert_CD_ROM___s__004b7dc8,acStack_380);
      iVar5 = MessageBoxA(DAT_0050b59c,local_100,s_CD_ERROR_004b7dbc,0x31);
    } while (iVar5 != 2);
  }
  else {
    MessageBoxA(DAT_0050b59c,s_Error__Please_reinstall_program__004b7e5c,s_BAD_INSTALL_004b7eb0,0x10
               );
  }
  FUN_004240d0();
  uVar3 = FUN_0049ea40(0);
  return uVar3;
  while( true ) {
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar10;
    if (cVar1 == '\0') break;
code_r0x004257ed:
    pcVar10 = pcVar11;
    if (uVar6 == 0) break;
  }
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar11 = &DAT_00e9f300;
  do {
    pcVar12 = pcVar11;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  puVar8 = (undefined4 *)(pcVar10 + -uVar6);
  puVar13 = (undefined4 *)(pcVar12 + -1);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar13 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined *)puVar13 = *(undefined *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  return 0;
}

