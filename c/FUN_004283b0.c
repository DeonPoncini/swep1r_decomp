#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004283b0(int param_1)

{
  undefined4 uVar1;
  int3 iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  char cVar7;
  float local_8;
  float local_4;
  
  FUN_0044f600();
  uVar1 = FUN_0044f640(&local_4,&local_8);
  if (param_1 == 2) {
    iVar3 = 1;
  }
  else if (param_1 == 1) {
    iVar3 = 2;
  }
  else {
    iVar3 = 0x800;
    if (param_1 != 3) {
      iVar3 = param_1;
    }
  }
  if (param_1 == 3) {
    iVar2 = (int3)((uint)uVar1 >> 8);
    uVar1 = CONCAT31(iVar2,DAT_0050b708._3_1_);
    if ('\0' < DAT_0050b708._3_1_) {
      if (DAT_0050b708._3_1_ < 0xff) {
        uVar6 = 2;
      }
      else {
        iVar2 = (int3)(DAT_0050b708._3_1_ >> 7);
        uVar1 = 0xffffffff;
        uVar6 = 0;
      }
      FUN_0044f670(0,0,0,local_4 * _DAT_004ac4ec,local_8 * _DAT_004ac4e8,0,0,0,uVar6,DAT_0050b708,
                   DAT_0050b708 >> 8 & 0xff,CONCAT31(iVar2,DAT_0050b708._2_1_),uVar1);
    }
  }
  iVar4 = 0;
  if (0 < DAT_004b91b8) {
    puVar5 = &DAT_00e9ba60;
    do {
      FUN_00428030(puVar5,iVar3,local_4,local_8);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x20;
    } while (iVar4 < DAT_004b91b8);
  }
  FUN_00428270(param_1);
  if (param_1 == 3) {
    if ('\0' < DAT_0050b704._3_1_) {
      if (DAT_0050b704._3_1_ < 0xff) {
        uVar1 = 2;
        cVar7 = DAT_0050b704._3_1_;
      }
      else {
        cVar7 = -1;
        uVar1 = 0;
      }
      FUN_0044f670(0,0,0,local_4 * _DAT_004ac4ec,local_8 * _DAT_004ac4e8,0,0,0,uVar1,DAT_0050b704,
                   CONCAT31(DAT_0050b704._3_1_ >> 7,(char)(DAT_0050b704 >> 8)),
                   DAT_0050b704 >> 0x10 & 0xff,cVar7);
    }
    if (DAT_0050b700 != 0) {
      FUN_0044f670(0,0,0,local_4 * _DAT_004ac4ec,local_8 * _DAT_004b91bc,0,0,0,2,0,0,0,0xffffffff);
      uVar1 = __ftol(local_4 * _DAT_004ac4ec,(_DAT_004ac4e8 - _DAT_004b91c0) * local_8,0,0,0,2,0,0,0
                     ,0xffffffff);
      FUN_0044f670(0,0,uVar1);
    }
  }
  FUN_00426910();
  return;
}

