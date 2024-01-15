#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d720(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 local_4;
  
  iVar1 = 0;
  local_4 = 0;
  if (0 < DAT_004bf91c) {
    puVar2 = &DAT_004bf920;
    do {
      FUN_00445ee0(3,0,0x40,0x80,0x40,0x80,puVar2,&local_4,1,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < DAT_004bf91c);
  }
  iVar1 = 0;
  if (0 < DAT_004bf7e4) {
    puVar2 = &DAT_004bf7e8;
    do {
      FUN_00445ee0(3,0,0x40,0x80,0x40,0x80,puVar2,&local_4,1,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < DAT_004bf7e4);
  }
  iVar1 = 0;
  if (0 < DAT_004bf84c) {
    puVar2 = &DAT_004bf850;
    do {
      FUN_00445ee0(3,0,0x40,0x80,0x40,0x80,puVar2,&local_4,1,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < DAT_004bf84c);
  }
  iVar1 = 0;
  if (0 < DAT_004bf8b4) {
    puVar2 = &DAT_004bf8b8;
    do {
      FUN_00445ee0(3,0,0x40,0x80,0x40,0x80,puVar2,&local_4,1,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < DAT_004bf8b4);
  }
  iVar1 = 0;
  if (0 < DAT_004bf984) {
    puVar2 = &DAT_004bf988;
    do {
      FUN_00445ee0(3,0,0x40,0x80,0x40,0x80,puVar2,&local_4,1,0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 < DAT_004bf984);
  }
  DAT_0050c0c0 = 7;
  DAT_00e99720 = &DAT_004bf918;
  _DAT_00e99724 = &DAT_004bf8b0;
  _DAT_00e99728 = &DAT_004bf848;
  _DAT_00e9972c = &DAT_004bf8b0;
  _DAT_00e99730 = &DAT_004bf980;
  _DAT_00e99734 = &DAT_004bf918;
  DAT_00e99738 = &DAT_004bf7e0;
  DAT_0050c0c4 = &DAT_004bf918;
  return;
}

