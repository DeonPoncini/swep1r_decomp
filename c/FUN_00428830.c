#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428830(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x20;
  iVar1 = 0;
  do {
    iVar2 = iVar2 + -1;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x14) = 0x3f800000;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x18) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x1c) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x20) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x24) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x28) = 0x3f800000;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x2c) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x30) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x34) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x38) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x40) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x44) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x48) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x4c) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x50) = 0x3f800000;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 8) = 0;
    *(undefined2 *)(PTR_DAT_004b91c4 + iVar1 + 4) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x6c) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x70) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x74) = 0;
    iVar1 = iVar1 + 0x7c;
  } while (iVar2 != 0);
  DAT_00e9b9c0 = DAT_00e9b9c0 & 0xfffffffe;
  _DAT_0050c034 = PTR_DAT_004b91c4;
  DAT_0050c038 = 0;
  DAT_00e9b9c4 = 0;
  DAT_00e9b9c6 = 0;
  _DAT_00e9b9e0 = 0;
  _DAT_00e9b9e4 = 0x41200000;
  DAT_00e9ba40 = 0;
  DAT_00e9ba44 = 0;
  DAT_00e9b9e8 = 0x3f800000;
  DAT_00e9b9ec = 0;
  DAT_00e9b9f0 = 0;
  DAT_00e9b9f4 = 0;
  DAT_00e9b9f8 = 0;
  DAT_00e9b9fc = 0x3f800000;
  DAT_00e9ba00 = 0;
  DAT_00e9ba04 = 0;
  DAT_00e9ba08 = 0;
  DAT_00e9ba0c = 0;
  DAT_00e9ba10 = 0x3f800000;
  DAT_00e9ba14 = 0;
  DAT_00e9ba18 = 0;
  DAT_00e9ba1c = 0;
  DAT_00e9ba20 = 0;
  DAT_00e9ba24 = 0x3f800000;
  _DAT_00e9ba28 = 0;
  _DAT_00e9ba2c = 0;
  _DAT_00e9ba30 = 0;
  FUN_00428a40(1,4);
  return;
}

