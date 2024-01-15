#include "prototype.h"


bool FUN_004a91c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  
  if (DAT_004d5034 == 0) {
    return false;
  }
  iVar6 = param_1[5];
  if ((iVar6 == DAT_004d50c8) && (iVar6 == DAT_004d50d8)) goto LAB_004a9394;
  if (DAT_00dfaf30 == 0) {
    FUN_004a9430(1,1,iVar6,4,1,0,0,2,0,0,0);
    iVar6 = param_1[5];
    uVar8 = 0;
    uVar3 = 0;
    uVar10 = 0;
    uVar4 = 2;
    uVar1 = 0;
    uVar9 = 5;
    uVar7 = 10;
LAB_004a9388:
    uVar5 = 1;
    uVar11 = 0;
  }
  else {
    if (DAT_00dfafd0 != 0) {
      uVar3 = 0;
      uVar8 = 0;
      uVar10 = DAT_00dfafd4._2_2_;
    }
    else {
      uVar3 = DAT_00dfafd4 & 0xffff;
      uVar8 = DAT_00dfafd4._2_2_;
      uVar10 = 0;
    }
    FUN_004a9430(1,DAT_00dfafd0 == 0,iVar6,DAT_00dfafd2,uVar8,uVar3,uVar10,DAT_00dfafd8 & 0xffff,
                 DAT_00dfafd8 >> 0x10,DAT_00dfafdc & 0xffff,DAT_00dfafdc >> 0x10);
    uVar8 = DAT_00dfaf88._2_2_;
    uVar10 = DAT_00dfaf84._2_2_;
    uVar7 = DAT_00dfaf7e;
    if (DAT_00dfaf7c == 0) {
      uVar3 = DAT_00dfaf88 & 0xffff;
      uVar4 = DAT_00dfaf84 & 0xffff;
      uVar1 = DAT_00dfaf80 & 0xffff;
      iVar6 = param_1[5];
      uVar9 = DAT_00dfaf80._2_2_;
      goto LAB_004a9388;
    }
    uVar3 = DAT_00dfaf88 & 0xffff;
    uVar4 = DAT_00dfaf84 & 0xffff;
    iVar6 = param_1[5];
    uVar1 = 0;
    uVar9 = 0;
    uVar5 = 0;
    uVar11 = DAT_00dfaf80._2_2_;
  }
  FUN_004a9430(0,uVar5,iVar6,uVar7,uVar9,uVar1,uVar11,uVar4,uVar10,uVar3,uVar8);
LAB_004a9394:
  iVar6 = param_1[7];
  if (DAT_004d50cc < DAT_004d50dc) {
    if ((iVar6 < DAT_004d50cc) || (DAT_004d50dc < iVar6)) {
      return false;
    }
    if ((DAT_004d50cc < iVar6) && (iVar6 < DAT_004d50dc)) {
      return true;
    }
  }
  else {
    if ((iVar6 < DAT_004d50dc) || (DAT_004d50cc < iVar6)) {
      return true;
    }
    if ((DAT_004d50dc < iVar6) && (iVar6 < DAT_004d50cc)) {
      return false;
    }
  }
  iVar2 = (*param_1 + (param_1[1] + param_1[2] * 0x3c) * 0x3c) * 1000;
  if (iVar6 != DAT_004d50cc) {
    return iVar2 < DAT_004d50e0;
  }
  return (int)PTR_DAT_004d50d0 <= iVar2;
}

