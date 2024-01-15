#include "prototype.h"


void FUN_004aa650(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined2 local_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  undefined *local_4;
  
  ppuVar3 = &PTR_s_November_004d51f0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x4d5350;
    }
    if (param_3 == 0) {
      *param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = param_2 & 7;
      param_2 = (int)param_2 >> 3;
      if (uVar1 != 0) {
        ppuVar2 = ppuVar3 + uVar1 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar1 * 3)) {
          local_c = SUB42(*ppuVar2,0);
          uStack_a._0_2_ = (undefined2)((uint)*ppuVar2 >> 0x10);
          uStack_a._2_2_ = SUB42(ppuVar2[1],0);
          uStack_6 = (undefined2)((uint)ppuVar2[1] >> 0x10);
          local_4 = ppuVar2[2];
          uStack_a = CONCAT22(uStack_a._2_2_,(undefined2)uStack_a) + -1;
          ppuVar2 = (undefined **)&local_c;
        }
        FUN_004aa390(param_1,ppuVar2);
      }
    }
  }
  return;
}

