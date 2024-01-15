#include "prototype.h"


int * FUN_004a34c0(uint param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int *local_4;
  
  local_4 = (int *)PTR_LOOP_004d4228;
  do {
    if (local_4[4] != -1) {
      piVar9 = (int *)local_4[2];
      iVar8 = ((int)piVar9 + (-0x18 - (int)local_4) >> 3) * 0x1000 + local_4[4];
      for (; piVar9 < local_4 + 0x806; piVar9 = piVar9 + 2) {
        if (((int)param_1 <= *piVar9) && (param_1 < (uint)piVar9[1])) {
          piVar3 = (int *)FUN_004a3700(iVar8,*piVar9,param_1);
          if (piVar3 != (int *)0x0) {
            PTR_LOOP_004d4228 = (undefined *)local_4;
            *piVar9 = *piVar9 - param_1;
            local_4[2] = (int)piVar9;
            return piVar3;
          }
          piVar9[1] = param_1;
        }
        iVar8 = iVar8 + 0x1000;
      }
      piVar3 = (int *)local_4[2];
      iVar8 = local_4[4];
      for (piVar9 = local_4 + 6; piVar9 < piVar3; piVar9 = piVar9 + 2) {
        if (((int)param_1 <= *piVar9) && (param_1 < (uint)piVar9[1])) {
          piVar4 = (int *)FUN_004a3700(iVar8,*piVar9,param_1);
          if (piVar4 != (int *)0x0) {
            PTR_LOOP_004d4228 = (undefined *)local_4;
            *piVar9 = *piVar9 - param_1;
            local_4[2] = (int)piVar9;
            return piVar4;
          }
          piVar9[1] = param_1;
        }
        iVar8 = iVar8 + 0x1000;
      }
    }
    local_4 = (int *)*local_4;
  } while (local_4 != (int *)PTR_LOOP_004d4228);
  ppuVar7 = &PTR_LOOP_004d2208;
  while ((ppuVar7[4] == (undefined *)0xffffffff || (ppuVar7[3] == (undefined *)0x0))) {
    ppuVar7 = (undefined **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_004d2208) {
      puVar5 = (undefined *)FUN_004a3160();
      if (puVar5 == (undefined *)0x0) {
        return (int *)0x0;
      }
      piVar9 = *(int **)(puVar5 + 0x10);
      *(char *)(piVar9 + 2) = (char)param_1;
      PTR_LOOP_004d4228 = puVar5;
      *piVar9 = (int)piVar9 + param_1 + 8;
      piVar9[1] = 0xf0 - param_1;
      *(uint *)(puVar5 + 0x18) = *(int *)(puVar5 + 0x18) - (param_1 & 0xff);
      return piVar9 + 0x40;
    }
  }
  ppuVar2 = (undefined **)ppuVar7[3];
  puVar5 = *ppuVar2;
  piVar9 = (int *)(ppuVar7[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar7) >> 3) * 0x1000);
  ppuVar6 = ppuVar2;
  for (iVar8 = 0; (puVar5 == (undefined *)0xffffffff && (iVar8 < 0x10)); iVar8 = iVar8 + 1) {
    puVar5 = ppuVar6[2];
    ppuVar6 = ppuVar6 + 2;
  }
  piVar3 = (int *)VirtualAlloc(piVar9,iVar8 << 0xc,0x1000,4);
  if (piVar3 != piVar9) {
    return (int *)0x0;
  }
  ppuVar6 = ppuVar2;
  if (0 < iVar8) {
    piVar3 = piVar9 + 1;
    do {
      *piVar3 = 0xf0;
      piVar3[-1] = (int)(piVar3 + 1);
      *(undefined *)(piVar3 + 0x3d) = 0xff;
      *ppuVar6 = (undefined *)0xf0;
      ppuVar6[1] = (undefined *)0xf1;
      piVar3 = piVar3 + 0x400;
      ppuVar6 = ppuVar6 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  ppuVar1 = ppuVar7 + 0x806;
  bVar10 = ppuVar6 < ppuVar1;
  if (bVar10) {
    do {
      if (*ppuVar6 == (undefined *)0xffffffff) break;
      ppuVar6 = ppuVar6 + 2;
    } while (ppuVar6 < ppuVar1);
    bVar10 = ppuVar6 < ppuVar1;
  }
  PTR_LOOP_004d4228 = (undefined *)ppuVar7;
  ppuVar7[3] = (undefined *)(-(uint)bVar10 & (uint)ppuVar6);
  *(char *)(piVar9 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar2;
  *ppuVar2 = *ppuVar2 + -param_1;
  piVar9[1] = piVar9[1] - param_1;
  *piVar9 = (int)piVar9 + param_1 + 8;
  return piVar9 + 0x40;
}

