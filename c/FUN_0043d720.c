#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043d720(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  uint local_8;
  
  iVar6 = 0;
  iVar3 = __ftol();
  if (0x5fa < iVar3) {
    iVar3 = 0x5fa;
  }
  iVar4 = 0;
  do {
    if (*(char *)((int)&DAT_00e35aa0 + iVar4 + 1) != '\0') {
      iVar6 = iVar6 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  if (iVar6 != 0) {
    FUN_004816b0();
    cVar2 = __ftol();
    bVar5 = 0x19 - cVar2;
    uVar7 = (uint)bVar5;
    if ((int)uVar7 <= iVar3) {
      do {
        FUN_004816b0();
        iVar6 = __ftol();
        if (*(char *)((int)&DAT_00e35aa0 + iVar6 + 1) != '\0') {
          if (bVar5 < (byte)(&DAT_00e35aa8)[iVar6]) {
            (&DAT_00e35aa8)[iVar6] = (&DAT_00e35aa8)[iVar6] - bVar5;
          }
          else {
            (&DAT_00e35aa8)[iVar6] = 0;
          }
        }
        iVar3 = iVar3 - uVar7;
        FUN_004816b0();
        cVar2 = __ftol();
        bVar5 = 0x19 - cVar2;
        uVar7 = (uint)bVar5;
      } while ((int)uVar7 <= iVar3);
    }
    iVar3 = 0;
    do {
      if (*(char *)((int)&DAT_00e35aa0 + iVar3 + 1) == '\0') {
        (&DAT_00e35aa8)[iVar3] = 0xff;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
    iVar6 = 0;
    iVar3 = 0;
    do {
      iVar6 = iVar6 + (0xff - (uint)(byte)(&DAT_00e35aa8)[iVar3]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
    local_c = (DAT_00e35aa0 & 0xff) * 0xff;
    if (iVar6 <= (int)local_c) {
      _DAT_00e35aa8 = 0xffffffff;
      _DAT_00e35aac = 0xffff;
      DAT_00e35aae = 0xff;
      FUN_0044e560();
      return;
    }
    FUN_004816b0();
    cVar2 = __ftol();
    bVar5 = 0x19 - cVar2;
    uVar7 = (uint)bVar5;
    local_8 = local_c;
    if (uVar7 <= local_c) {
      do {
        FUN_004816b0();
        iVar3 = __ftol();
        bVar1 = (&DAT_00e35aa8)[iVar3];
        if (bVar1 != 0xff) {
          if ((int)(0xff - (uint)bVar1) < (int)uVar7) {
            (&DAT_00e35aa8)[iVar3] = 0xff;
            bVar5 = bVar5 + bVar1 + 1;
          }
          else {
            (&DAT_00e35aa8)[iVar3] = bVar5 + bVar1;
          }
          local_c = (uint)bVar5;
          local_c = local_8 - local_c;
          local_8 = local_c;
        }
        FUN_004816b0();
        cVar2 = __ftol();
        bVar5 = 0x19 - cVar2;
        uVar7 = (uint)bVar5;
      } while ((int)uVar7 <= (int)local_c);
    }
    FUN_0044e560();
  }
  return;
}

