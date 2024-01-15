#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0046bd20(int param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = __ftol();
  fVar4 = _DAT_004ad7f4;
  uVar1 = *(uint *)(param_1 + 0x60);
  if (((uVar1 & 0x200000) == 0) || ((uVar1 & 0x800000) != 0)) {
    *(uint *)(param_1 + 0x60) = uVar1 & 0xffbfffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x210);
    if (iVar2 == 0) {
      if ((_DAT_00ec884c == _DAT_004ad750) && (DAT_00ec8830 <= (float)_DAT_004ad8c8)) {
        return 0;
      }
      if (_DAT_00ec883c <= _DAT_004ad8b0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x210) = 1;
      *(undefined4 *)(param_1 + 0x214) = 0;
      return 0;
    }
    if (iVar2 == 1) {
      if (((_DAT_00ec884c != _DAT_004ad750) || ((float)_DAT_004ad8c8 < DAT_00ec8830)) &&
         (_DAT_004ad8b0 < _DAT_00ec883c)) {
        fVar3 = *(float *)(param_1 + 0x214) + (float)_DAT_00e22a40;
        *(float *)(param_1 + 0x214) = fVar3;
        if (fVar3 <= fVar4) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x210) = 2;
        return 0;
      }
    }
    else if ((iVar2 == 2) && (_DAT_004ad8b0 <= _DAT_00ec883c)) {
      if (iVar5 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x210) = 0;
      iVar5 = FUN_004816b0();
      FUN_00426d10(0x72,7,(float)iVar5 * _DAT_004ad768 * (float)_DAT_004ad8b8 - (float)_DAT_004ad8c0
                   ,0x3f800000,param_1 + 0x50,0,1,0x41200000,0x43fa0000);
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  return 0;
}

