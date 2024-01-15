#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a53d0(undefined4 param_1)

{
  BYTE *pBVar1;
  byte bVar2;
  byte bVar3;
  UINT CodePage;
  UINT *pUVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  BYTE *pBVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  _cpinfo local_14;
  
  FUN_004a1670(0x19);
  CodePage = FUN_004a5600(param_1);
  if (CodePage == DAT_00dfae90) {
    FUN_004a16f0(0x19);
    return 0;
  }
  if (CodePage == 0) {
    FUN_004a56b0();
    FUN_004a56f0();
    FUN_004a16f0(0x19);
    return 0;
  }
  iVar9 = 0;
  pUVar4 = &DAT_004d4458;
  do {
    if (*pUVar4 == CodePage) {
      puVar13 = (undefined4 *)&DAT_00dfac88;
      for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined *)puVar13 = 0;
      uVar6 = 0;
      pbVar11 = &DAT_004d4468 + iVar9 * 0x30;
      do {
        bVar2 = *pbVar11;
        for (pbVar12 = pbVar11; (bVar2 != 0 && (bVar2 = pbVar12[1], bVar2 != 0));
            pbVar12 = pbVar12 + 2) {
          uVar7 = (uint)*pbVar12;
          if (uVar7 <= bVar2) {
            bVar3 = (&DAT_004d4450)[uVar6];
            do {
              (&DAT_00dfac89)[uVar7] = (&DAT_00dfac89)[uVar7] | bVar3;
              uVar7 = uVar7 + 1;
            } while (uVar7 <= bVar2);
          }
          bVar2 = pbVar12[2];
        }
        uVar6 = uVar6 + 1;
        pbVar11 = pbVar11 + 8;
      } while (uVar6 < 4);
      _DAT_00ecd4e4 = 1;
      DAT_00dfae90 = CodePage;
      DAT_00dfae94 = FUN_004a5650(CodePage);
      _DAT_00dfae98 = (&DAT_004d445c)[iVar9 * 0xc];
      _DAT_00dfae9c = (&DAT_004d4460)[iVar9 * 0xc];
      _DAT_00dfaea0 = (&DAT_004d4464)[iVar9 * 0xc];
      goto LAB_004a5522;
    }
    pUVar4 = pUVar4 + 0xc;
    iVar9 = iVar9 + 1;
  } while (pUVar4 < &DAT_004d4548);
  BVar5 = GetCPInfo(CodePage,&local_14);
  if (BVar5 == 1) {
    puVar13 = (undefined4 *)&DAT_00dfac88;
    for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined *)puVar13 = 0;
    DAT_00dfae94 = 0;
    if (local_14.MaxCharSize < 2) {
      _DAT_00ecd4e4 = 0;
      DAT_00dfae90 = CodePage;
    }
    else {
      DAT_00dfae90 = CodePage;
      if (local_14.LeadByte[0] != '\0') {
        pBVar10 = local_14.LeadByte + 1;
        do {
          bVar2 = *pBVar10;
          if (bVar2 == 0) break;
          for (uVar6 = (uint)pBVar10[-1]; uVar6 <= bVar2; uVar6 = uVar6 + 1) {
            (&DAT_00dfac89)[uVar6] = (&DAT_00dfac89)[uVar6] | 4;
          }
          pBVar1 = pBVar10 + 1;
          pBVar10 = pBVar10 + 2;
        } while (*pBVar1 != 0);
      }
      uVar6 = 1;
      do {
        (&DAT_00dfac89)[uVar6] = (&DAT_00dfac89)[uVar6] | 8;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0xff);
      DAT_00dfae94 = FUN_004a5650(CodePage);
      _DAT_00ecd4e4 = 1;
    }
    _DAT_00dfae98 = 0;
    _DAT_00dfae9c = 0;
    _DAT_00dfaea0 = 0;
  }
  else {
    if (DAT_00dfaea4 == 0) {
      FUN_004a16f0(0x19);
      return 0xffffffff;
    }
    FUN_004a56b0();
  }
LAB_004a5522:
  FUN_004a56f0();
  FUN_004a16f0(0x19);
  return 0;
}

