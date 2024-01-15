#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c510(undefined4 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  float10 fVar9;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined local_c [4];
  undefined local_8 [8];
  
  fVar3 = param_2;
  puVar7 = &DAT_00e9a4a0;
  iVar8 = 0;
  do {
    if (fVar3 == 0.0) {
      *(undefined4 *)((int)&DAT_00e9a720 + iVar8) = 0xfffffc18;
      *(undefined4 *)((int)&DAT_00e9a780 + iVar8) = 0xfffffc18;
    }
    else {
      *(undefined4 *)((int)&DAT_00e9a5e0 + iVar8) = 0xfffffc18;
      *(undefined4 *)((int)&DAT_00e9a640 + iVar8) = 0xfffffc18;
    }
    if (*(int *)((int)&DAT_00e9a840 + iVar8) != -9999) {
      fVar9 = (float10)FUN_0042f950(puVar7,&DAT_0050c6e8);
      local_14 = (float)fVar9;
      if (((float10)_DAT_004ac5c8 < fVar9) && (local_14 < _DAT_004ac5cc)) {
        if (_DAT_004ac5d0 <= local_14) {
          local_18 = (_DAT_004ac5cc - local_14) * _DAT_004ac5a4 * _DAT_004ac5d4;
        }
        else {
          local_18 = 255.0;
        }
        if (_DAT_004ac5d8 < local_18) {
          local_18 = 128.0;
        }
        iVar5 = FUN_00445690();
        if (iVar5 != 0) {
          local_18 = local_18 * _DAT_004ac568;
        }
        FUN_0042b710(param_1,puVar7,&local_1c,&param_2,&local_10,local_c,0);
        if (_DAT_004ac5dc < local_1c) {
          iVar5 = *(int *)((int)&DAT_00e9a840 + iVar8);
          fVar1 = _DAT_004ac580;
          fVar2 = _DAT_004ac5e8;
          if (-1 < iVar5) {
            fVar1 = _DAT_004ac5e4;
            fVar2 = _DAT_004ac5e0;
          }
          param_2 = param_2 - fVar2;
          local_1c = local_1c - fVar1;
          if (((local_1c < (float)DAT_00ec86c4) && (_DAT_004ac5b8 < param_2)) &&
             (param_2 < (float)DAT_00ec85e8)) {
            if (fVar3 == 0.0) {
              uVar6 = __ftol();
              *(undefined4 *)((int)&DAT_00e9a720 + iVar8) = uVar6;
              uVar6 = __ftol();
              *(undefined4 *)((int)&DAT_00e9a780 + iVar8) = uVar6;
            }
            else {
              uVar6 = __ftol();
              *(undefined4 *)((int)&DAT_00e9a5e0 + iVar8) = uVar6;
              uVar6 = __ftol();
              *(undefined4 *)((int)&DAT_00e9a640 + iVar8) = uVar6;
            }
            if ((local_10 < _DAT_004ac5b8) || (local_10 < *(float *)((int)&DAT_00e9a7e0 + iVar8))) {
              if (iVar5 < 0) {
                FUN_0049eb80(local_8,s__f1_s_d_004b957c,-iVar5);
                cVar4 = __ftol(local_8);
                cVar4 = cVar4 + '(';
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_00421360(&DAT_004b9584,iVar5);
                FUN_0049eb80(local_8,uVar6);
                cVar4 = __ftol(local_8);
                uVar6 = 0xffffffff;
              }
              uVar6 = __ftol(0xffffffff,0xffffffff,uVar6,cVar4);
              uVar6 = __ftol(uVar6);
              FUN_0042c7a0(uVar6);
            }
          }
        }
      }
    }
    puVar7 = puVar7 + 0xc;
    iVar8 = iVar8 + 4;
  } while ((int)puVar7 < 0xe9a590);
  return;
}

