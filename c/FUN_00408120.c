#include "prototype.h"


void FUN_00408120(void)

{
  char cVar1;
  ushort uVar2;
  undefined uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  do {
    uVar3 = FUN_00485880(iVar5,0);
    (&DAT_00ec88e0)[iVar5] = uVar3;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004d5e68);
  DAT_00ec89e0 = (undefined)DAT_004d5e60;
  iVar5 = 0;
  uVar6 = DAT_004d5e60 & 0xff;
  if (uVar6 != 0) {
    pcVar4 = &DAT_004d6316;
    do {
      uVar2 = (&DAT_004d6314)[iVar5 * 4];
      (&DAT_00ec89e4)[iVar5 * 2] = (&DAT_004d6310)[iVar5 * 2];
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 8;
      (&DAT_00ec89e8)[iVar5 * 4] = uVar2 | -(ushort)(cVar1 != '\0') & 0x200;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar6);
  }
  DAT_004d5e60 = DAT_004d5e60 & 0xffffff00;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004d5e68);
  return;
}

