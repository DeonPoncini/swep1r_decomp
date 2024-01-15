#include "prototype.h"


void FUN_0045cd50(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined2 *puVar5;
  
  pcVar4 = &DAT_00e29861;
  puVar5 = &DAT_004c40a8;
  do {
    pcVar4[-1] = -1;
    *puVar5 = 0xffff;
    FUN_004816b0();
    cVar1 = __ftol();
    *pcVar4 = '\x01' - cVar1;
    FUN_004816b0();
    cVar1 = __ftol();
    puVar5 = puVar5 + 0x10;
    pcVar4[1] = 'f' - cVar1;
    pcVar4 = pcVar4 + 3;
  } while ((int)puVar5 < 0x4c42a8);
  iVar3 = 0;
  do {
    if (0xf < iVar3) {
      return;
    }
    do {
      FUN_004816b0();
      iVar2 = __ftol();
    } while ((&DAT_00e29860)[iVar2 * 3] != -1);
    (&DAT_00e29860)[iVar2 * 3] = (char)iVar3;
    iVar3 = iVar3 + 1;
    (&DAT_004c40a8)[iVar2 * 0x10] = 4;
  } while (iVar3 < 7);
  return;
}

