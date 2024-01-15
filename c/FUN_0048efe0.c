#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048efe0(uint param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  DAT_00df7ef8 = param_1;
  _DAT_00ecc474 = 0;
  DAT_00ecc470 = 0;
  DAT_00df7cec = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x38) == 2) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  if (iVar5 == -1) {
    iVar5 = *(int *)(DAT_00df7cec + 0x70);
  }
  DAT_00deb110 = DAT_00df7cec + 0x44 + iVar5 * 8;
  iVar5 = FUN_0048db80();
  if ((*(int *)(DAT_00df7ef8 + 0x18) != iVar5) ||
     (*(int *)(*(int *)(*(int *)(DAT_00df7f2c + 4) + 4) + 0x24) == 8)) {
    FUN_00493310(DAT_00df7ef8,param_2);
  }
  DAT_00df7cf0 = *(int *)(DAT_00df7ef8 + 0x34);
  if (DAT_00ecc424 <= *(int *)(DAT_00df7ef8 + 0x34)) {
    DAT_00df7cf0 = DAT_00ecc424;
  }
  if (1 < DAT_00df7cf0) {
    DAT_00df7f08 = 0;
    param_1 = 0;
    if (*(int *)(DAT_00df7f2c + 0x6c) != 0) {
      iVar6 = 0;
      iVar7 = 0x70;
      iVar5 = DAT_00df7f2c;
      do {
        iVar1 = *(int *)(iVar5 + iVar7);
        if (*(int *)(iVar1 + 8) == 1) {
          if (*(int *)(iVar1 + 4) == 1) {
            fVar2 = *(float *)(iVar5 + 0x270 + iVar6) - *(float *)(param_2 + 0x24);
            fVar4 = *(float *)(iVar5 + 0x274 + iVar6) - *(float *)(param_2 + 0x28);
            fVar3 = *(float *)(iVar5 + 0x278 + iVar6) - *(float *)(param_2 + 0x2c);
            iVar5 = DAT_00df7f2c;
            if (SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) <
                *(float *)(iVar1 + 0x28) + *(float *)(DAT_00df7cec + 0x80)) {
              (&DAT_00deb4e8)[DAT_00df7f08] = iVar1;
              DAT_00df7f08 = DAT_00df7f08 + 1;
              iVar5 = DAT_00df7f2c;
            }
          }
          else if (*(int *)(iVar1 + 4) == 0) {
            (&DAT_00deb4e8)[DAT_00df7f08] = iVar1;
            DAT_00df7f08 = DAT_00df7f08 + 1;
          }
        }
        param_1 = param_1 + 1;
        iVar7 = iVar7 + 4;
        iVar6 = iVar6 + 0xc;
      } while (param_1 < *(uint *)(iVar5 + 0x6c));
    }
  }
  FUN_0048f180(*(undefined4 *)(DAT_00df7cec + 0x78));
  return 1;
}

