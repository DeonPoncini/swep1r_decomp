#include "prototype.h"


void FUN_004509b0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;
  
  iVar2 = *(int *)PTR_PTR_DAT_004bfec0;
  puVar4 = PTR_PTR_DAT_004bfec0;
  while (iVar2 != 0) {
    pcVar3 = *(code **)(iVar2 + 0x1c);
    if ((pcVar3 != (code *)0x0) && ((*(uint *)(iVar2 + 4) & (int)DAT_0050c87c) == 0)) {
      iVar6 = *(int *)(iVar2 + 0x10);
      sVar5 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        do {
          if ((*(ushort *)(iVar6 + 6) & 0x1100) == 0) {
            (*pcVar3)(iVar6);
          }
          iVar6 = iVar6 + *(int *)(iVar2 + 0xc);
          FUN_004270c0();
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < *(int *)(iVar2 + 8));
      }
    }
    piVar1 = (int *)(puVar4 + 4);
    puVar4 = puVar4 + 4;
    iVar2 = *piVar1;
  }
  return;
}

