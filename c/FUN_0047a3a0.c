#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047a3a0(int param_1,undefined4 param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float local_38;
  int local_34 [2];
  undefined4 local_2c [2];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar2 = _DAT_004adc48;
  local_38 = 1.0;
  if ((*(uint *)(param_1 + 100) & 0x10) != 0) {
    fVar3 = (float)_DAT_00e22a40;
    *(undefined4 *)(param_1 + 0x24c) = 0x3e800000;
    if (*(float *)(param_1 + 0x1fc) <= fVar2) {
      *(float *)(param_1 + 0x1fc) = *(float *)(param_1 + 0x1fc) - fVar3 * _DAT_004addf0;
      if (*(float *)(param_1 + 0x1fc) <= _DAT_004adc48) goto LAB_0047a438;
    }
    else {
      *(float *)(param_1 + 0x1fc) = *(float *)(param_1 + 0x1fc) - fVar3 * _DAT_004add5c;
      if (_DAT_004adc48 <= *(float *)(param_1 + 0x1fc)) goto LAB_0047a438;
    }
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffffffef;
  }
LAB_0047a438:
  iVar5 = FUN_00450e70(0x536d6f6b,param_2,0x45afc800,0,1,local_2c,&local_18,local_34);
  if (0 < iVar5) {
    fVar6 = (float10)FUN_00480670(local_2c[0]);
    if (*(int *)(local_34[0] + 0x60) != 1) {
      if (*(int *)(local_34[0] + 0x60) != 2) {
        return;
      }
      if (*(float *)(local_34[0] + 0x68) < _DAT_004adc9c) {
        return;
      }
      local_38 = -1.0;
      if (((float)fVar6 < _DAT_004adcf0) &&
         (iVar5 = FUN_004816b0(), (float)iVar5 * _DAT_004add18 < (float)_DAT_004addf8)) {
        FUN_004816b0();
        iVar5 = __ftol();
        if (5 < iVar5) {
          iVar5 = 0;
        }
        puVar1 = (uint *)(param_1 + 0x2a0 + iVar5 * 4);
        *puVar1 = *puVar1 | 8;
      }
    }
    fVar3 = (_DAT_004adcb0 - (float)fVar6) * _DAT_004ade04;
    fVar2 = *(float *)(param_1 + 0x74);
    local_20 = -local_18;
    local_1c = _DAT_004adc48;
    local_24 = local_14;
    fVar6 = (float10)FUN_0042f9b0(&local_24);
    fVar4 = _DAT_004adc50;
    if ((float10)_DAT_004adcbc <= fVar6) {
      fVar4 = -(*(float *)(param_1 + 0x28) * local_1c +
               *(float *)(param_1 + 0x24) * local_20 + *(float *)(param_1 + 0x20) * local_24) *
              fVar3 * fVar2;
    }
    if ((*(uint *)(param_1 + 100) & 0x10) == 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10;
      *(float *)(param_1 + 0x1fc) = local_38 * fVar4;
      return;
    }
    fVar2 = fVar4;
    if (fVar4 < _DAT_004adc48) {
      fVar2 = -fVar4;
    }
    fVar3 = *(float *)(param_1 + 0x1fc);
    if (*(float *)(param_1 + 0x1fc) < _DAT_004adc48) {
      fVar3 = -fVar3;
    }
    if (fVar3 < fVar2) {
      *(float *)(param_1 + 0x1fc) = local_38 * fVar4;
      return;
    }
  }
  return;
}

