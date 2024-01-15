#include "prototype.h"


void FUN_0041e880(void)

{
  uint uVar1;
  bool bVar2;
  DWORD DVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  
  DVar3 = timeGetTime();
  uVar9 = DVar3 - DAT_004eb220;
  iVar7 = 0;
  do {
    if ((&DAT_004eb188)[iVar7] != 0) {
      uVar1 = (&DAT_004e9ed8)[iVar7];
      uVar5 = uVar1;
      if (uVar9 <= uVar1) {
        uVar5 = uVar9;
      }
      (&DAT_004e9ed8)[iVar7] = uVar1 - uVar5;
      if (uVar1 - uVar5 == 0) {
        FUN_0041e7c0(iVar7);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xf);
  piVar8 = &DAT_004eb188;
  iVar7 = 1;
  do {
    if ((*piVar8 == 0) && (iVar7 < 0xf)) {
      piVar4 = piVar8 + 1;
      iVar6 = iVar7;
      do {
        if (*piVar4 != 0) {
          *piVar8 = (&DAT_004eb188)[iVar6];
          (&DAT_004eb188)[iVar6] = 0;
          break;
        }
        piVar4 = piVar4 + 1;
        iVar6 = iVar6 + 1;
      } while ((int)piVar4 < 0x4eb1c4);
    }
    piVar8 = piVar8 + 1;
    bVar2 = 0xe < iVar7;
    iVar7 = iVar7 + 1;
    if (bVar2) {
      DAT_004eb220 = DVar3;
      return;
    }
  } while( true );
}

