#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482f10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  
  fVar2 = ((float)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) *
          *(float *)(param_1 + 0x138)) /
          (float)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24));
  if (_DAT_004ae094 <= fVar2) {
    fVar8 = (float10)FUN_0042f3b0(*(float *)(param_1 + 0x134) * _DAT_004ae09c);
    fVar8 = (float10)FUN_0042f560((float)fVar8,fVar2);
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float10)_DAT_004ae098;
  }
  fVar3 = *(float *)(param_1 + 0x140);
  fVar4 = *(float *)(param_1 + 0x144);
  fVar8 = (float10)FUN_0042f3b0((float)(fVar8 * (float10)_DAT_004ae09c));
  fVar1 = (float)(fVar8 * (float10)fVar3);
  fVar8 = fVar8 * (float10)fVar3 * (float10)fVar2;
  fVar2 = (float)fVar8;
  fVar8 = -fVar8;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  fVar5 = fVar2 - (float)fVar8;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xbf800000;
  *(float *)(param_1 + 0xf0) = (fVar3 + fVar3) / fVar5;
  fVar6 = fVar1 - -fVar1;
  fVar7 = fVar4 * fVar3 * _DAT_004ae0a4;
  *(float *)(param_1 + 0x104) = (fVar3 + fVar3) / fVar6;
  *(float *)(param_1 + 0x110) = (float)((fVar8 + (float10)fVar2) / (float10)fVar5);
  *(float *)(param_1 + 0x114) = (-fVar1 + fVar1) / fVar6;
  *(float *)(param_1 + 0x118) = -((fVar4 + fVar3) / (fVar4 - fVar3));
  *(float *)(param_1 + 0x128) = fVar7 / (fVar4 - fVar3);
  FUN_00482ee0(param_1);
  return;
}

