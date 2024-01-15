#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004485d0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar3 = *param_1;
  puVar5 = param_1 + 1;
  uVar4 = (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 >> 0x10 | uVar3 & 0xff0000) >> 8;
  *param_1 = uVar4;
  DAT_00e6b168 = 0;
  _DAT_00e981e8 = 0;
  uVar3 = *puVar5;
  while (uVar3 != 0xffffffff) {
    if (uVar3 != 0) {
      FUN_004476b0(uVar3);
    }
    puVar6 = puVar5 + 1;
    puVar5 = puVar5 + 1;
    uVar3 = *puVar6;
  }
  uVar3 = puVar5[1];
  puVar6 = puVar5 + 1;
  if (((uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8) ==
      0x44617461) {
    *puVar6 = 0x44617461;
    uVar3 = puVar5[2];
    puVar6 = puVar5 + 3;
    uVar3 = (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8;
    puVar5[2] = uVar3;
    puVar5 = puVar6;
    if (0 < (int)uVar3) {
      do {
        uVar2 = *puVar5;
        puVar6 = puVar5 + 1;
        uVar3 = uVar3 - 1;
        *puVar5 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
        puVar5 = puVar6;
      } while (uVar3 != 0);
    }
  }
  uVar3 = *puVar6;
  if (((uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8) ==
      0x416e696d) {
    *puVar6 = 0x416e696d;
    puVar5 = puVar6 + 1;
    uVar3 = puVar6[1];
    puVar6 = puVar5;
    while (uVar3 != 0) {
      FUN_00448180(uVar3);
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      uVar3 = *puVar1;
    }
    puVar6 = puVar6 + 1;
  }
  uVar3 = *puVar6;
  if (((uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8) ==
      0x416c744e) {
    *puVar6 = 0x416c744e;
    puVar6 = puVar6 + 1;
    if (uVar4 == 0x4d416c74) {
      uVar3 = *puVar6;
      while (uVar3 != 0) {
        FUN_004476b0(uVar3);
        puVar5 = puVar6 + 1;
        puVar6 = puVar6 + 1;
        uVar3 = *puVar5;
      }
    }
  }
  return;
}

