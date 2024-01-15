#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00462a70(int param_1,int param_2)

{
  byte *pbVar1;
  
  if ((((((*(int *)(param_1 + 0x1ac) == 1) && (*(int *)(param_1 + 0x1c0) == 3)) &&
        (_DAT_004ad464 < *(float *)(param_2 + 0x50))) &&
       ((*(float *)(param_2 + 0x50) < _DAT_004ad468 && (_DAT_004ad46c < *(float *)(param_2 + 0x54)))
       )) && ((*(float *)(param_2 + 0x54) < _DAT_004ad470 &&
              ((*(int *)(param_2 + 0x140) != 0 &&
               (pbVar1 = (byte *)FUN_004318b0(*(int *)(param_2 + 0x140)), pbVar1 != (byte *)0x0)))))
      ) && ((*pbVar1 & 8) != 0)) {
    return 0;
  }
  if (((*(uint *)(param_2 + 100) & 0x2000000) == 0) &&
     ((4 < *(short *)(param_2 + 0x10c) || (*(float *)(param_2 + 0x1a0) < (float)_DAT_004ad478)))) {
    return 1;
  }
  return 0;
}

