#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00407700(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = -1;
  iVar8 = 0;
  uVar6 = -(uint)(param_1 != 1) & 3;
  if (uVar6 != 0xfffffffd) {
    iVar7 = param_1 * 0x18;
    fVar2 = _DAT_004ac308;
    do {
      fVar3 = *(float *)(&DAT_004d62d0 + iVar7) - *(float *)((int)&DAT_00ec87c0 + iVar7);
      if (fVar3 < _DAT_004ac308) {
        fVar3 = -fVar3;
      }
      fVar1 = *(float *)((int)&DAT_00ec87c0 + iVar7);
      if (*(float *)((int)&DAT_00ec87c0 + iVar7) < _DAT_004ac308) {
        fVar1 = -fVar1;
      }
      dVar4 = _DAT_004ac338;
      if (param_1 == 0) {
        dVar4 = _DAT_004ac330;
      }
      if ((((float)dVar4 < fVar1) && ((float)_DAT_004ac340 < fVar3)) && (fVar2 < fVar3)) {
        if (_DAT_004ac308 <= *(float *)((int)&DAT_00ec87c0 + iVar7)) {
          if (*(float *)((int)&DAT_00ec87c0 + iVar7) <= _DAT_004ac308) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 0xffffffff;
        }
        *param_2 = uVar5;
        iVar9 = iVar8;
        fVar2 = fVar3;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar8 < (int)(uVar6 + 3));
  }
  return iVar9;
}

