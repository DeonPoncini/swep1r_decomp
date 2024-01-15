#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004744b0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined local_30 [4];
  undefined local_2c [4];
  undefined local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = param_3;
  if (param_3 == 0) {
    iVar4 = __ftol();
    bVar1 = _DAT_004adbdc <= (float)-iVar4 * _DAT_004adbd8;
    *(float *)(param_1 + 0xb4) = (float)-iVar4 * _DAT_004adbd8;
    if (bVar1) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      FUN_0044eaa0(*(undefined4 *)(param_1 + 0xac),1,(undefined4 *)(param_1 + 0xac));
    }
  }
  local_10 = 0;
  local_c = 0;
  local_8 = 0xbf800000;
  local_4 = 0x459c4000;
  iVar4 = param_3;
  do {
    bVar1 = true;
    if (iVar4 == 0) {
      iVar5 = FUN_0047f890(param_1 + 0xac);
    }
    else {
      local_1c = *(undefined4 *)(param_2 + 0x30);
      local_18 = *(undefined4 *)(param_2 + 0x34);
      local_14 = *(undefined4 *)(param_2 + 0x38);
      iVar5 = FUN_00444e40(*(undefined4 *)(param_1 + 0x13c),&local_1c);
    }
    if ((iVar5 == 0) ||
       ((iVar5 = FUN_004318b0(iVar5), iVar5 != 0 && ((*(uint *)(iVar5 + 0x2c) & 0x16000) != 0)))) {
      bVar1 = false;
    }
    if (bVar1) {
      iVar5 = FUN_00450e70(0x54657374,param_2 + 0x30,0x44610000,param_1,1,local_2c,local_28,local_30
                          );
      if (0 < iVar5) {
        bVar1 = false;
      }
      if (!bVar1) goto LAB_004745e9;
      if ((iVar4 == 0) && (iVar3 != 0)) {
        iVar4 = 1;
        *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - _DAT_004adbec;
        FUN_0044ed80(param_1 + 0xac,param_2);
        bVar1 = false;
      }
    }
    else {
LAB_004745e9:
      if (param_3 == 0) {
        fVar2 = _DAT_004adbe8;
        if (iVar4 != 0) {
          fVar2 = _DAT_004adbe4;
        }
        *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - fVar2;
      }
      else {
        param_3 = 0;
        iVar5 = __ftol();
        iVar4 = 0;
        *(float *)(param_1 + 0xb4) = (float)-iVar5 * _DAT_004adbd8;
      }
      FUN_0044ed80(param_1 + 0xac,param_2);
    }
    if (bVar1) {
      return;
    }
  } while( true );
}

