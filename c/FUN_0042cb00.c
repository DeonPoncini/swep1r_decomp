#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042cb00(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined *puVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float local_10;
  float local_c;
  float local_8;
  undefined local_4 [4];
  
  iVar6 = 0;
  if (0 < DAT_0050c088) {
    piVar5 = &DAT_00e9a5a0;
    pfVar4 = (float *)&DAT_00e9a8e0;
    puVar3 = &DAT_00e997c0;
    do {
      (&DAT_00e9a8a0)[iVar6] = 0xfffffc18;
      (&DAT_00e9a920)[iVar6] = 0xfffffc18;
      fVar7 = (float10)FUN_0042f950(puVar3,&DAT_0050c6e8);
      if ((((fVar7 < (float10)_DAT_004ac5cc) &&
           (FUN_0042b710(param_1,puVar3,&local_c,&local_10,&local_8,local_4,0),
           _DAT_004ac5dc < local_c)) && (local_c < (float)DAT_00ec86c4)) &&
         ((_DAT_004ac5b8 < local_10 && (local_10 < (float)DAT_00ec85e8)))) {
        uVar2 = __ftol();
        (&DAT_00e9a8a0)[iVar6] = uVar2;
        uVar2 = __ftol();
        bVar1 = local_8 < _DAT_004ac5b8;
        (&DAT_00e9a920)[iVar6] = uVar2;
        if (((bVar1) || (local_8 < *pfVar4)) && (*piVar5 != -1)) {
          FUN_004285d0(CONCAT22(extraout_var_01,*(undefined2 *)piVar5),1);
          uVar2 = __ftol();
          uVar2 = __ftol(uVar2);
          FUN_0042bb00(*(undefined2 *)piVar5,uVar2);
          FUN_00428720(CONCAT22(extraout_var_00,*(undefined2 *)piVar5),0);
          FUN_004286f0(CONCAT22(extraout_var_02,*(undefined2 *)piVar5),0x3f800000,0x3f800000);
          FUN_00428740(CONCAT22(extraout_var,*(undefined2 *)piVar5),0xffffffff,0xffffffff,0xffffffff
                       ,0xffffffff);
        }
      }
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 0xc;
      pfVar4 = pfVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < DAT_0050c088);
  }
  return;
}

