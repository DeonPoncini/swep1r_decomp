#include "prototype.h"


void FUN_004a8eb0(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  FUN_004a1670(0xc);
  DAT_00dfaf30 = 0;
  DAT_004d50d8 = 0xffffffff;
  DAT_004d50c8 = 0xffffffff;
  pbVar3 = (byte *)FUN_004aa990(&DAT_004b04c0);
  if (pbVar3 == (byte *)0x0) {
    FUN_004a16f0(0xc);
    DVar4 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00dfaf38);
    if (DVar4 == 0xffffffff) {
      return;
    }
    DAT_00dfaf30 = 1;
    DAT_004d5030 = DAT_00dfaf38 * 0x3c;
    if (DAT_00dfaf7e != 0) {
      DAT_004d5030 = DAT_004d5030 + DAT_00dfaf8c * 0x3c;
    }
    if ((DAT_00dfafd2 == 0) || (DAT_00dfafe0 == 0)) {
      DAT_004d5034 = 0;
      DAT_004d5038 = 0;
    }
    else {
      DAT_004d5034 = 1;
      DAT_004d5038 = (DAT_00dfafe0 - DAT_00dfaf8c) * 0x3c;
    }
    FUN_004aa6e0(PTR_s_Pacific_Standard_Time_004d50c0,&DAT_00dfaf3c,0x40);
    FUN_004aa6e0(PTR_s_Pacific_Daylight_Time_004d50c4,&DAT_00dfaf90,0x40);
    PTR_s_Pacific_Daylight_Time_004d50c4[0x3f] = 0;
    PTR_s_Pacific_Standard_Time_004d50c0[0x3f] = 0;
    return;
  }
  if (*pbVar3 != 0) {
    pbVar8 = pbVar3;
    puVar9 = DAT_00dfafe4;
    if (DAT_00dfafe4 != (undefined4 *)0x0) {
      do {
        bVar1 = *pbVar8;
        bVar12 = bVar1 < *(byte *)puVar9;
        if (bVar1 != *(byte *)puVar9) {
LAB_004a9007:
          iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_004a900c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar12 = bVar1 < *(byte *)((int)puVar9 + 1);
        if (bVar1 != *(byte *)((int)puVar9 + 1)) goto LAB_004a9007;
        pbVar8 = pbVar8 + 2;
        puVar9 = (undefined4 *)((int)puVar9 + 2);
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004a900c:
      if (iVar5 == 0) goto LAB_004a9179;
    }
    FUN_0049f200(DAT_00dfafe4);
    uVar6 = 0xffffffff;
    pbVar8 = pbVar3;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar1 != 0);
    DAT_00dfafe4 = (undefined4 *)FUN_0049f270(~uVar6);
    if (DAT_00dfafe4 != (undefined4 *)0x0) {
      uVar6 = 0xffffffff;
      pbVar8 = pbVar3;
      do {
        pbVar10 = pbVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar10 = pbVar8 + 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar10;
      } while (bVar1 != 0);
      uVar6 = ~uVar6;
      puVar9 = (undefined4 *)(pbVar10 + -uVar6);
      puVar11 = DAT_00dfafe4;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)puVar11 = *(undefined *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_004a16f0(0xc);
      _strncpy(PTR_s_Pacific_Standard_Time_004d50c0,(char *)pbVar3,3);
      pbVar8 = pbVar3 + 3;
      PTR_s_Pacific_Standard_Time_004d50c0[3] = 0;
      bVar1 = *pbVar8;
      if (bVar1 == 0x2d) {
        pbVar8 = pbVar3 + 4;
      }
      iVar5 = FUN_0049f040(pbVar8);
      DAT_004d5030 = iVar5 * 0xe10;
      for (; (bVar2 = *pbVar8, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
          pbVar8 = pbVar8 + 1) {
      }
      if (*pbVar8 == 0x3a) {
        pbVar8 = pbVar8 + 1;
        iVar5 = FUN_0049f040(pbVar8);
        DAT_004d5030 = DAT_004d5030 + iVar5 * 0x3c;
        bVar2 = *pbVar8;
        while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
          pbVar3 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
          bVar2 = *pbVar3;
        }
        if (*pbVar8 == 0x3a) {
          pbVar8 = pbVar8 + 1;
          iVar5 = FUN_0049f040(pbVar8);
          DAT_004d5030 = DAT_004d5030 + iVar5;
          bVar2 = *pbVar8;
          while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
            pbVar3 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            bVar2 = *pbVar3;
          }
        }
      }
      if (bVar1 == 0x2d) {
        DAT_004d5030 = -DAT_004d5030;
      }
      DAT_004d5034 = (int)(char)*pbVar8;
      if (DAT_004d5034 == 0) {
        *PTR_s_Pacific_Daylight_Time_004d50c4 = 0;
        return;
      }
      _strncpy(PTR_s_Pacific_Daylight_Time_004d50c4,(char *)pbVar8,3);
      PTR_s_Pacific_Daylight_Time_004d50c4[3] = 0;
      return;
    }
  }
LAB_004a9179:
  FUN_004a16f0(0xc);
  return;
}

