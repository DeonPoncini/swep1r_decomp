#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444910(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float local_c;
  float local_8;
  float local_4;
  
  iVar5 = 0;
  if (param_1 == 0) {
    DAT_00e98258 = 0xbf800000;
    return;
  }
  if (DAT_00e98e70 != 0) {
    DAT_00e98e70 = 0;
    FUN_004447b0(param_3,1,&DAT_00e98e40,param_2);
  }
  FUN_0042fa80(&local_c,&DAT_00e98e40,DAT_00e98e58,&DAT_00e98e4c);
  if (_DAT_004aca50 <= _DAT_00e98e4c) {
    _DAT_00e98270 = DAT_00e98e40;
    _DAT_00e98260 = local_c;
  }
  else {
    _DAT_00e98260 = DAT_00e98e40;
    _DAT_00e98270 = local_c;
  }
  if (_DAT_004aca50 <= _DAT_00e98e50) {
    _DAT_00e98274 = DAT_00e98e44;
    _DAT_00e98264 = local_8;
  }
  else {
    _DAT_00e98264 = DAT_00e98e44;
    _DAT_00e98274 = local_8;
  }
  if (_DAT_004aca50 <= _DAT_00e98e54) {
    _DAT_00e98278 = DAT_00e98e48;
    _DAT_00e98268 = local_4;
  }
  else {
    _DAT_00e98268 = DAT_00e98e48;
    _DAT_00e98278 = local_4;
  }
  if (((float *)(param_1 + 0x1c) == (float *)0x0) ||
     (((((*(float *)(param_1 + 0x1c) <= _DAT_00e98260 &&
         (_DAT_00e98270 <= *(float *)(param_1 + 0x28))) &&
        (*(float *)(param_1 + 0x20) <= _DAT_00e98264)) &&
       ((_DAT_00e98274 <= *(float *)(param_1 + 0x2c) &&
        (*(float *)(param_1 + 0x24) <= _DAT_00e98268)))) &&
      (_DAT_00e98278 <= *(float *)(param_1 + 0x30))))) {
    iVar2 = FUN_00431780(param_1);
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar5 * 4);
        if (((*(float *)(iVar1 + 8) <= _DAT_00e98260) && (_DAT_00e98270 <= *(float *)(iVar1 + 0x14))
            ) && ((*(float *)(iVar1 + 0xc) <= _DAT_00e98264 &&
                  (((_DAT_00e98274 <= *(float *)(iVar1 + 0x18) &&
                    (*(float *)(iVar1 + 0x10) <= _DAT_00e98268)) &&
                   (_DAT_00e98278 <= *(float *)(iVar1 + 0x1c))))))) {
          if (DAT_0050c5c8 == 0) {
            uVar3 = FUN_00431770(iVar1,1);
            iVar4 = FUN_00431880(uVar3);
            if ((iVar4 == 1) || (DAT_0050c5cc = 1, iVar4 == 3)) {
              DAT_0050c5cc = 0;
            }
            if ((iVar4 == 2) || (DAT_004c1774 = 1, iVar4 == 3)) {
              DAT_004c1774 = 0;
            }
          }
          else {
            DAT_0050c5cc = 1;
            DAT_004c1774 = 1;
          }
          FUN_004439f0(iVar1);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    if (DAT_00e98250 != 0) {
      FUN_00443e70(param_3);
      DAT_00e98250 = 0;
    }
  }
  return;
}

