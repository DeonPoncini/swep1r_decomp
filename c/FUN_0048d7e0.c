#include "prototype.h"


ushort * FUN_0048d7e0(uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort **ppuVar9;
  
  if (0x1000 < param_1) {
    puVar3 = (ushort *)FUN_0048db10(param_1);
    return puVar3;
  }
  ppuVar9 = (ushort **)&DAT_0052ee98;
  puVar3 = (ushort *)(param_1 + 3 & 0xfffffffc);
  iVar4 = 0;
  do {
    if ((ppuVar9[3] == (ushort *)0x0) || (puVar3 <= ppuVar9[2])) break;
    iVar4 = iVar4 + 1;
    ppuVar9 = ppuVar9 + 4;
  } while (iVar4 < 0x421);
  if ((iVar4 == 0x421) || (ppuVar9[3] == (ushort *)0x0)) {
    iVar4 = 0;
    ppuVar9 = (ushort **)&DAT_0052ee98;
    do {
      if ((ppuVar9[3] == (ushort *)0x0) || (*ppuVar9 == (ushort *)0x0)) break;
      iVar4 = iVar4 + 1;
      ppuVar9 = ppuVar9 + 4;
    } while (iVar4 < 0x421);
    if (iVar4 == 0x421) {
      puVar3 = (ushort *)FUN_0048db10(puVar3);
      return puVar3;
    }
    puVar5 = (ushort *)FUN_0049f270(0x7c00);
    if (puVar5 == (ushort *)0x0) {
      puVar3 = (ushort *)FUN_0048db10(puVar3);
      return puVar3;
    }
    ppuVar9[1] = puVar5;
    *ppuVar9 = puVar5;
    ppuVar9[2] = (ushort *)0x7bf0;
    ppuVar9[3] = (ushort *)0x1;
    *puVar5 = 0x7bf8;
    puVar5[1] = 0;
    *(ushort ***)(puVar5 + 2) = ppuVar9;
    puVar5[0x3dfc] = 0;
    puVar5[0x3dfd] = 0x7bf8;
    *(ushort ***)(puVar5 + 0x3dfe) = ppuVar9;
  }
  puVar5 = *ppuVar9;
  puVar8 = (ushort *)0x0;
  puVar3 = puVar3 + 4;
  iVar4 = 0x7c00;
  uVar1 = *puVar5;
  while (uVar1 != 0) {
    uVar7 = (uint)uVar1;
    if ((uVar1 & 0x8000) == 0) {
      if ((ushort)(uVar7 - (int)puVar3) < (ushort)iVar4) {
        puVar8 = puVar5;
        iVar4 = uVar7 - (int)puVar3;
      }
    }
    else {
      uVar7 = uVar7 & 0x7fff;
    }
    puVar5 = (ushort *)((int)puVar5 + uVar7);
    uVar1 = *puVar5;
  }
  uVar1 = *puVar8;
  uVar2 = (ushort)puVar3;
  *puVar8 = uVar2 | 0x8000;
  if ((ushort *)(uint)uVar1 != puVar3) {
    *(ushort *)((int)(puVar8 + 1) + (int)puVar3) = uVar2;
    *(ushort *)((int)puVar8 + (int)puVar3) = uVar1 - uVar2;
    *(ushort *)((int)(puVar8 + 1) + (int)(ushort *)(uint)uVar1) = uVar1 - uVar2;
  }
  *(ushort ***)(puVar8 + 2) = ppuVar9;
  if (puVar8 == ppuVar9[1]) {
    puVar3 = *ppuVar9;
    puVar5 = (ushort *)0x0;
    uVar7 = 8;
    uVar1 = *puVar3;
    while (uVar1 != 0) {
      uVar6 = (uint)uVar1;
      if ((uVar1 & 0x8000) == 0) {
        if ((ushort)uVar7 < uVar1) {
          uVar7 = uVar6;
          puVar5 = puVar3;
        }
      }
      else {
        uVar6 = uVar6 & 0x7fff;
      }
      puVar3 = (ushort *)((int)puVar3 + uVar6);
      uVar1 = *puVar3;
    }
    if (8 < (ushort)uVar7) {
      ppuVar9[1] = puVar5;
      ppuVar9[2] = (ushort *)(uVar7 + 0xfff8 & 0xffff);
      return puVar8 + 4;
    }
    ppuVar9[1] = puVar5;
    ppuVar9[2] = (ushort *)0x0;
  }
  return puVar8 + 4;
}

