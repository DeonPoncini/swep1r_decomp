#include "prototype.h"


uint FUN_004a7f90(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar1 = DAT_00dfaeec;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_004aa0d0(1,DAT_00dfaeec,0x15,param_1 + 0xc);
  uVar3 = FUN_004aa0d0(1,uVar1,0x14,param_1 + 0x10);
  uVar4 = FUN_004aa0d0(1,uVar1,0x16,param_1 + 0x14);
  uVar5 = FUN_004aa0d0(1,uVar1,0x17,param_1 + 0x18);
  uVar6 = FUN_004aa0d0(1,uVar1,0x18,(undefined4 *)(param_1 + 0x1c));
  FUN_004a80e0(*(undefined4 *)(param_1 + 0x1c));
  uVar7 = FUN_004aa0d0(1,uVar1,0x50,param_1 + 0x20);
  uVar8 = FUN_004aa0d0(1,uVar1,0x51,param_1 + 0x24);
  uVar9 = FUN_004aa0d0(0,uVar1,0x1a,param_1 + 0x28);
  uVar10 = FUN_004aa0d0(0,uVar1,0x19,param_1 + 0x29);
  uVar11 = FUN_004aa0d0(0,uVar1,0x54,param_1 + 0x2a);
  uVar12 = FUN_004aa0d0(0,uVar1,0x55,param_1 + 0x2b);
  uVar13 = FUN_004aa0d0(0,uVar1,0x56,param_1 + 0x2c);
  uVar14 = FUN_004aa0d0(0,uVar1,0x57,param_1 + 0x2d);
  uVar15 = FUN_004aa0d0(0,uVar1,0x52,param_1 + 0x2e);
  uVar16 = FUN_004aa0d0(0,uVar1,0x53,param_1 + 0x2f);
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16;
}

