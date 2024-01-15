#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00409ee0(float param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar2 = FUN_0040a160(param_1);
  param_1 = DAT_004b493c;
  puVar1 = &DAT_004d6da0 + iVar2 * 0x174;
  if (DAT_004b2910 != 0) {
    if ((((float)(&DAT_00ec8400)[iVar5 * 3] < _DAT_004ac378) ||
        (*(float *)(&DAT_00ec8404 + iVar5 * 0xc) < _DAT_004ac378)) ||
       (*(float *)(&DAT_00ec8408 + iVar5 * 0xc) < _DAT_004ac378)) {
      if (iVar5 != 0) {
        return 1;
      }
      if (_DAT_00ec84cc < _DAT_004ac378) {
        return 1;
      }
      if (DAT_00ec84d0 < _DAT_004ac378) {
        return 1;
      }
      if (_DAT_00ec84d4 < _DAT_004ac378) {
        return 1;
      }
      iVar5 = 0x11;
    }
    iVar2 = FUN_0040a240(iVar5,0);
    if (((&DAT_004d6ce8)[iVar5] != 0) && (iVar3 = FUN_00404280(puVar1), iVar3 == 0)) {
      FUN_00404230(puVar1);
      (&DAT_004d6ce8)[iVar5] = 0;
      (&DAT_004d6c78)[iVar5] = 0;
    }
    if (iVar2 == 0) {
      return 0;
    }
    if (_DAT_004ac378 < *(float *)(&DAT_00ec8404 + iVar5 * 0xc)) {
      param_1 = param_1 * *(float *)(&DAT_00ec8404 + iVar5 * 0xc);
    }
    if ((-1 < param_2) || (param_1 < _DAT_004ac37c)) {
      uVar4 = __ftol(0);
      FUN_00404400(puVar1,uVar4);
    }
    if (-1 < param_3) {
      FUN_00404330(puVar1,param_3,1);
    }
    if (-1 < param_4) {
      FUN_004044e0(puVar1,param_4,0);
    }
    iVar2 = FUN_004041c0(puVar1,0);
    if (iVar2 < 0) {
      return 0;
    }
    (&DAT_004d6ce8)[iVar5] = 1;
  }
  return 1;
}

