#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a0a60(void)

{
  byte bVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  HMODULE pHVar5;
  byte *pbVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar8;
  _STARTUPINFOA local_60;
  undefined *local_1c;
  undefined4 local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  byte *pbVar7;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004af9c8;
  puStack_10 = &LAB_004a59d8;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  local_1c = &stack0xffffff88;
  DVar2 = GetVersion();
  _DAT_00dfaa84 = DVar2 >> 8 & 0xff;
  _DAT_00dfaa80 = DVar2 & 0xff;
  _DAT_00dfaa7c = _DAT_00dfaa80 * 0x100 + _DAT_00dfaa84;
  _DAT_00dfaa78 = DVar2 >> 0x10;
  iVar3 = FUN_004a3120();
  if (iVar3 == 0) {
    FUN_004a0c40(0x1c);
  }
  iVar3 = FUN_004a3c40();
  if (iVar3 == 0) {
    FUN_004a0c40(0x10);
  }
  local_8 = 0;
  FUN_004a3de0();
  FUN_004a58d0();
  DAT_00ecd610 = (byte *)GetCommandLineA();
  DAT_00dfaac0 = FUN_004a5270();
  if ((DAT_00dfaac0 == 0) || (DAT_00ecd610 == (byte *)0x0)) {
    FUN_0049ea40(0xffffffff);
  }
  FUN_004a4fc0();
  FUN_004a4ed0();
  FUN_0049ea10();
  pbVar6 = DAT_00ecd610;
  if (*DAT_00ecd610 == 0x22) {
    while( true ) {
      pbVar7 = pbVar6;
      pbVar6 = pbVar7 + 1;
      bVar1 = *pbVar6;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar3 = FUN_004a4e70(bVar1);
      if (iVar3 != 0) {
        pbVar6 = pbVar7 + 2;
      }
    }
    if (*pbVar6 == 0x22) {
      pbVar6 = pbVar7 + 2;
    }
  }
  else {
    for (; 0x20 < *pbVar6; pbVar6 = pbVar6 + 1) {
    }
  }
  for (; (*pbVar6 != 0 && (*pbVar6 < 0x21)); pbVar6 = pbVar6 + 1) {
  }
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = local_60._48_4_ & 0xffff;
  }
  uVar8 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar8 = FUN_004238d0(pHVar5,uVar8,pbVar6,uVar4);
  FUN_0049ea40(uVar8);
  *unaff_FS_OFFSET = local_14;
  return;
}

