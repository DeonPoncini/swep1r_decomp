#include "prototype.h"


void FUN_0043da10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar2 = DAT_004d5e00;
  DAT_00e295cc = 0;
  puVar3 = &DAT_00e99244;
  uVar1 = (&DAT_00e35a94)[*(char *)(param_1 + 0x6f) * 0x14];
  iVar4 = 0;
  do {
    if ((((uVar1 | 0x22e01) & 1 << ((byte)iVar4 & 0x1f)) != 0) || (iVar2 != 0)) {
      *(int *)(puVar3 + -4) = iVar4;
      *puVar3 = 0xff;
      puVar3[1] = 0;
      DAT_00e295cc = DAT_00e295cc + 1;
      puVar3 = puVar3 + 8;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x17);
  if (DAT_00e295cc < 0x17) {
    puVar3 = &DAT_00e99244 + DAT_00e295cc * 8;
    do {
      *(undefined4 *)(puVar3 + -4) = 0xffffffff;
      *puVar3 = 0xff;
      puVar3[1] = 0;
      puVar3 = puVar3 + 8;
    } while ((int)puVar3 < 0xe992fc);
  }
  return;
}

