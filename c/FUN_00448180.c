#include "prototype.h"


void FUN_00448180(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = *(uint *)(param_1 + 0xdc);
  iVar7 = 0;
  *(uint *)(param_1 + 0xdc) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0xe0) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0xe4);
  uVar3 = *(uint *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xe4) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0xec);
  *(uint *)(param_1 + 0xe8) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 >> 0x10 | uVar3 & 0xff0000) >> 8;
  uVar3 = *(uint *)(param_1 + 0xf0);
  *(uint *)(param_1 + 0xec) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0xf4);
  *(uint *)(param_1 + 0xf0) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 >> 0x10 | uVar3 & 0xff0000) >> 8;
  uVar3 = *(uint *)(param_1 + 0xf8);
  *(uint *)(param_1 + 0xf4) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0xfc);
  *(uint *)(param_1 + 0xf8) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 >> 0x10 | uVar3 & 0xff0000) >> 8;
  *(uint *)(param_1 + 0xfc) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar2 = *(uint *)(param_1 + 0x100);
  uVar3 = *(uint *)(param_1 + 0x104);
  *(uint *)(param_1 + 0x100) =
       (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
  uVar4 = *(uint *)(param_1 + 0x108);
  uVar6 = (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 >> 0x10 | uVar3 & 0xff0000) >> 8;
  *(uint *)(param_1 + 0x104) = uVar6;
  uVar3 = *(uint *)(param_1 + 0x10c);
  *(uint *)(param_1 + 0x108) =
       (uVar4 & 0xff00 | uVar4 << 0x10) << 8 | (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8;
  uVar4 = *(uint *)(param_1 + 0x110);
  *(uint *)(param_1 + 0x10c) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8;
  uVar3 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x110) =
       (uVar4 & 0xff00 | uVar4 << 0x10) << 8 | (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8;
  uVar4 = *(uint *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x114) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8;
  uVar3 = *(uint *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x118) =
       (uVar4 & 0xff00 | uVar4 << 0x10) << 8 | (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8;
  *(uint *)(param_1 + 0x128) =
       (uVar3 & 0xff00 | uVar3 << 0x10) << 8 | (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8;
  switch((uVar2 >> 0x10 & 0xf00) >> 8) {
  case 1:
  case 0xb:
  case 0xc:
    iVar7 = 1;
    break;
  case 4:
    iVar7 = 2;
    break;
  case 6:
  case 8:
    iVar7 = 4;
    break;
  case 7:
  case 9:
  case 10:
    iVar7 = 3;
  }
  if ((*(int *)(param_1 + 0x11c) != 0) && (iVar5 = 0, 0 < (int)uVar6)) {
    do {
      iVar1 = iVar5 * 4;
      uVar2 = *(uint *)(*(int *)(param_1 + 0x11c) + iVar5 * 4);
      iVar5 = iVar5 + 1;
      *(uint *)(*(int *)(param_1 + 0x11c) + iVar1) =
           (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
    } while (iVar5 < *(int *)(param_1 + 0x104));
  }
  if (((*(int *)(param_1 + 0x120) != 0) && (iVar7 != 0)) &&
     (iVar5 = 0, 0 < iVar7 * *(int *)(param_1 + 0x104))) {
    do {
      iVar1 = iVar5 * 4;
      uVar2 = *(uint *)(*(int *)(param_1 + 0x120) + iVar5 * 4);
      iVar5 = iVar5 + 1;
      *(uint *)(*(int *)(param_1 + 0x120) + iVar1) =
           (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
    } while (iVar5 < iVar7 * *(int *)(param_1 + 0x104));
  }
  return;
}

