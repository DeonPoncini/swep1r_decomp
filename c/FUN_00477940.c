#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477940(float param_1,undefined4 param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_48;
  float local_44;
  float local_40;
  undefined local_3c [12];
  undefined local_30 [12];
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];
  
  iVar3 = (int)param_1;
  fVar2 = *(float *)((int)param_1 + 0x208);
  if (*(float *)((int)param_1 + 0x208) < _DAT_004adc48) {
    fVar2 = -fVar2;
  }
  param_1 = *(float *)((int)param_1 + 0xa8) -
            *(float *)((int)param_1 + 0xa8) * _DAT_004adcb8 * fVar2;
  if (param_1 < _DAT_004add20) {
    param_1 = 1.5;
  }
  pfVar1 = (float *)(iVar3 + 0x40);
  iVar5 = 0;
  iVar4 = FUN_00444740(*(undefined4 *)(iVar3 + 0x13c),param_2,param_1,pfVar1,0x3f800000,0xbf800000,
                       &local_48,local_3c,local_30);
  if (iVar4 != 0) {
    iVar5 = 1;
    FUN_00441030();
    iVar4 = FUN_00444740(*(undefined4 *)(iVar3 + 0x13c),param_2,param_1,pfVar1,0x3f800000,0xbf800000
                         ,local_18,local_3c,local_24);
    if (iVar4 != 0) {
      iVar5 = 2;
      FUN_00441030();
    }
  }
  if ((((iVar5 != 0) && (_DAT_004add24 < *(float *)(iVar3 + 0x1a0))) &&
      (fVar2 = *(float *)(iVar3 + 0x48) * local_40 +
               *(float *)(iVar3 + 0x44) * local_44 + local_48 * *pfVar1, fVar2 < _DAT_004adc60)) &&
     (-fVar2 < _DAT_004adc60)) {
    FUN_00477850(iVar3,*(float *)(iVar3 + 0x1a0) * _DAT_004add28,0x3e99999a,local_30,&local_48,1);
  }
  FUN_0044abc0(param_2,param_3,*(undefined4 *)(iVar3 + 0x13c),local_c);
  return;
}

