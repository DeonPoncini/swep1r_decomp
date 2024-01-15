#include "prototype.h"


void FUN_0043e840(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  int local_4;
  
  cVar3 = '\0';
  iVar9 = 0;
  DAT_00e295cc = 0;
  iVar4 = 0;
  do {
    iVar2 = 0;
    if (0 < (char)(&DAT_004bfee0)[iVar4]) {
      do {
        if (((uint)(byte)(&DAT_00e35a85)[iVar4] & 1 << ((byte)iVar2 & 0x1f)) != 0) {
          cVar3 = cVar3 + '\x01';
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (char)(&DAT_004bfee0)[iVar4]);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = 0;
  puVar8 = &DAT_00e2b221;
  do {
    puVar6 = puVar8 + 0x38;
    puVar8[-1] = (char)iVar4 * '\x06' + *(char *)((int)&DAT_00e35aa0 + iVar4 + 1);
    *puVar8 = (&DAT_00e35aa8)[iVar4];
    iVar4 = iVar4 + 1;
    puVar8 = puVar6;
  } while ((int)puVar6 < 0xe2b3a9);
  if (*(int *)(param_1 + 8) == 7) {
    pcVar7 = &DAT_004c1cba;
    cVar1 = '\0';
    local_4 = 0;
    pcVar5 = &DAT_00e2b220;
    do {
      iVar4 = 0;
      do {
        if (((int)*pcVar5 != iVar4 + local_4) && ((int)*pcVar7 <= cVar3 + -3)) {
          iVar2 = iVar9 * 0x38;
          iVar9 = iVar9 + 1;
          (&DAT_00e2a6c0)[iVar2] = cVar1 * '\x06' + (char)iVar4;
          (&DAT_00e2a6c1)[iVar2] = 0xff;
        }
        iVar4 = iVar4 + 1;
        pcVar7 = pcVar7 + 0x10;
      } while (iVar4 < 6);
      pcVar5 = pcVar5 + 0x38;
      cVar1 = cVar1 + '\x01';
      local_4 = local_4 + 6;
      DAT_00e295cc = iVar9;
    } while ((int)pcVar5 < 0xe2b3a8);
  }
  else if (*(int *)(param_1 + 8) == 4) {
    cVar3 = '\0';
    puVar8 = &DAT_00e29862;
    do {
      iVar4 = iVar9 * 0x38;
      iVar9 = iVar9 + 1;
      puVar6 = puVar8 + 3;
      (&DAT_00e2a6c0)[iVar4] = cVar3 * '\x06' + puVar8[-1];
      cVar3 = cVar3 + '\x01';
      (&DAT_00e2a6c1)[iVar4] = *puVar8;
      puVar8 = puVar6;
      DAT_00e295cc = iVar9;
    } while ((int)puVar6 < 0xe29877);
  }
  iVar4 = 0;
  if (0 < iVar9) {
    pcVar5 = &DAT_00e2a6c0;
    do {
      FUN_00454bc0(*(undefined4 *)(&DAT_004c1cc0 + *pcVar5 * 0x10),0xffffffff,iVar4 + 0x62,0);
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 0x38;
    } while (iVar4 < DAT_00e295cc);
  }
  iVar4 = 0;
  pcVar5 = &DAT_00e2b220;
  do {
    FUN_00454bc0(*(undefined4 *)(&DAT_004c1cc0 + *pcVar5 * 0x10),0xffffffff,iVar4 + 0x8e,0);
    pcVar5 = pcVar5 + 0x38;
    iVar4 = iVar4 + 1;
  } while ((int)pcVar5 < 0xe2b3a8);
  return;
}

