#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c800(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float *local_8;
  float local_4;
  
  iVar5 = 0;
  do {
    FUN_004285d0(*(undefined2 *)((int)&DAT_00e9a5a0 + iVar5),0);
    FUN_004285d0(CONCAT22(extraout_var_00,*(undefined2 *)((int)&DAT_00e9a400 + iVar5)),0);
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x28);
  iVar5 = 0;
  local_8 = (float *)&DAT_00e99d80;
  puVar4 = &DAT_00e99e20;
  iVar6 = 0;
  do {
    pfVar7 = local_8;
    (&DAT_00e99ce0)[iVar5] = 0xfffffc18;
    (&DAT_00e99c40)[iVar5] = 0xfffffc18;
    if (((&DAT_00e9a6e0)[iVar5] != '\0') &&
       (fVar8 = (float10)FUN_0042f950(puVar4,&DAT_0050c6e8), fVar8 < (float10)_DAT_004b9578)) {
      iVar2 = FUN_00445690();
      local_14 = 0x43000000;
      if (iVar2 == 0) {
        local_14 = 0x437f0000;
      }
      FUN_0042b710(param_1,puVar4,&local_20,&local_1c,&local_c,&local_10,0);
      if (_DAT_004ac5b8 < local_20) {
        local_18 = _DAT_004ac5f0;
        if (_DAT_004ac5ec < local_10) {
          local_18 = _DAT_004ac5f4 / local_10;
        }
        if (_DAT_004ac5b0 < local_18) {
          local_18 = 2.0;
        }
        if (((local_20 < (float)DAT_00ec86c4) && (_DAT_004ac5b8 < local_1c)) &&
           (local_1c < (float)DAT_00ec85e8)) {
          uVar3 = __ftol();
          (&DAT_00e99ce0)[iVar5] = uVar3;
          uVar3 = __ftol();
          (&DAT_00e99c40)[iVar5] = uVar3;
          if (((*pfVar7 != -1000.0) && ((local_c < _DAT_004ac5b8 || (local_c < *pfVar7)))) &&
             (fVar1 = (_DAT_004ac5f8 - local_20) * _DAT_004ac5fc, local_4 = fVar1, iVar6 < 0x28)) {
            if (*(int *)((int)&DAT_00e9a5a0 + iVar6) != -1) {
              FUN_004285d0(CONCAT22(extraout_var_01,*(undefined2 *)((int)&DAT_00e9a5a0 + iVar6)),1);
              uVar3 = __ftol();
              uVar3 = __ftol(uVar3);
              FUN_0042bb00(CONCAT22(extraout_var_05,*(undefined2 *)((int)&DAT_00e9a5a0 + iVar6)),
                           uVar3);
              FUN_00428720(CONCAT22(extraout_var,*(undefined2 *)((int)&DAT_00e9a5a0 + iVar6)),fVar1)
              ;
              FUN_004286f0(CONCAT22(extraout_var_02,*(undefined2 *)((int)&DAT_00e9a5a0 + iVar6)),
                           0x3f800000,0x3f800000);
              uVar3 = __ftol();
              FUN_00428740(CONCAT22(extraout_var_06,*(undefined2 *)((int)&DAT_00e9a5a0 + iVar6)),
                           0xffffffff,0xffffffff,0xffffffff,uVar3);
            }
            if (*(int *)((int)&DAT_00e9a400 + iVar6) != -1) {
              FUN_004285d0(*(undefined2 *)((int)&DAT_00e9a400 + iVar6),1);
              uVar3 = __ftol();
              uVar3 = __ftol(uVar3);
              FUN_0042bb00(CONCAT22(extraout_var_03,*(undefined2 *)((int)&DAT_00e9a400 + iVar6)),
                           uVar3);
              FUN_00428720(CONCAT22(extraout_var_07,*(undefined2 *)((int)&DAT_00e9a400 + iVar6)),
                           fVar1);
              FUN_004286f0(*(undefined2 *)((int)&DAT_00e9a400 + iVar6),local_18,local_18);
              uVar3 = __ftol();
              FUN_00428740(CONCAT22(extraout_var_04,*(undefined2 *)((int)&DAT_00e9a400 + iVar6)),
                           0xffffffff,0xffffffff,0xffffffff,uVar3);
            }
            iVar6 = iVar6 + 4;
            pfVar7 = local_8;
          }
        }
      }
    }
    puVar4 = puVar4 + 0xc;
    iVar5 = iVar5 + 1;
    local_8 = pfVar7 + 1;
  } while ((int)puVar4 < 0xe9a000);
  return;
}

