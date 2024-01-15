#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043f8e0(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float local_58;
  float local_54;
  float local_50;
  undefined local_4c [8];
  float local_44;
  undefined local_40 [48];
  undefined local_10 [16];
  
  switch(param_2) {
  case 0x14:
    FUN_0042f7b0(&local_58,0,0,0);
    break;
  case 0x15:
    uVar2 = *(undefined4 *)(DAT_00e2993c + 0x14);
    goto LAB_0043f96e;
  case 0x16:
    uVar2 = *(undefined4 *)(DAT_00e2993c + 4);
    goto LAB_0043f99c;
  case 0x17:
    FUN_004316a0(*(undefined4 *)(DAT_00e2993c + 8),local_40);
    FUN_0042f7d0(&local_58,local_10);
    break;
  case 0x18:
    uVar2 = *(undefined4 *)(DAT_00e2993c + 0xc);
LAB_0043f96e:
    FUN_004316a0(uVar2,local_40);
    FUN_0042f7d0(&local_58,local_10);
    break;
  case 0x19:
    uVar2 = *(undefined4 *)(DAT_00e2993c + 0x10);
LAB_0043f99c:
    FUN_004316a0(uVar2,local_40);
    FUN_0042f7d0(&local_58,local_10);
    break;
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    FUN_0044afb0(*(undefined4 *)(&DAT_00e29968 + param_2 * 4),&local_58);
    if (local_50 == _DAT_004ac890) {
      local_50 = local_50 - _DAT_004ac84c;
    }
    else {
      local_50 = local_50 - _DAT_004ac8ac;
    }
    break;
  case 0x1e:
    FUN_0044afb0(DAT_00e29970,&local_58);
    local_50 = *(float *)(&DAT_004c2720 + *(char *)(param_1 + 0x73) * 0x34) * (float)_DAT_004ac950 -
               (float)_DAT_004ac958;
  }
  if (param_3 != 0) {
    FUN_0045c010(&DAT_00e298f0,&local_58,3,1,0);
    return;
  }
  iVar3 = FUN_004816b0(local_50 - _DAT_004ac9f8);
  iVar3 = FUN_004816b0(((float)iVar3 * _DAT_004ac86c * _DAT_004ac8c4 - _DAT_004ac9fc) + local_54);
  FUN_0042f7b0(local_4c,((float)iVar3 * _DAT_004ac86c * _DAT_004ac8c4 - _DAT_004ac9fc) + local_58);
  if ((0x19 < param_2) && (param_2 < 0x1f)) {
    fVar4 = (float10)FUN_0045cf00(local_50);
    iVar3 = FUN_004816b0();
    fVar4 = (float10)FUN_0045cf00(((float)iVar3 * _DAT_004ac86c * _DAT_004ac904 - _DAT_004ac8f0) *
                                  (float)fVar4 + local_54);
    iVar3 = FUN_004816b0();
    FUN_0042f7b0(local_4c,((float)iVar3 * _DAT_004ac86c * _DAT_004ac904 - _DAT_004ac8f0) *
                          (float)fVar4 + local_58);
    fVar1 = _DAT_004ac9f8;
    if (local_50 == _DAT_004ac998) {
      fVar1 = _DAT_004ac794;
    }
    local_44 = local_44 - fVar1;
  }
  FUN_0045c010(local_4c,&local_58,1,0,0);
  return;
}

