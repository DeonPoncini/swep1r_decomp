#include "prototype.h"


void FUN_004156a0(uint param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((DAT_004d8bd8 != 0) && (param_1 != 0)) {
    DAT_004d87a8 = 1;
    FUN_004151a0(param_1,0x48,1,0);
    iVar3 = *(int *)(param_1 + 0xc);
    if (param_2 == -1) {
      param_1 = FUN_004816b0();
      param_2 = __ftol();
    }
    if (param_2 == 1) {
      iVar1 = 0;
      for (puVar2 = (undefined4 *)FUN_00414e10(iVar3); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        if ((puVar2[8] & 0x200) == 0) {
          FUN_004151a0(puVar2,0x48,1,1);
          puVar2[0x13] = puVar2[10];
          puVar2[0x12] = puVar2[9];
          FUN_00416f50(puVar2,puVar2[9],(puVar2[10] - puVar2[0xc]) + -1);
          puVar2[0x14] = iVar1;
          iVar1 = iVar1 + 0xfa;
          puVar2[8] = puVar2[8] | 1;
        }
      }
    }
    else if (iVar3 != 0) {
      do {
        if ((*(uint *)(iVar3 + 0x20) & 0x200) == 0) {
          FUN_004151a0(iVar3,0x48,1,1);
          uVar4 = *(undefined4 *)(iVar3 + 0x28);
          *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x24);
          *(undefined4 *)(iVar3 + 0x4c) = uVar4;
          if (param_1 == 0) {
            uVar4 = *(undefined4 *)(iVar3 + 0x4c);
            iVar1 = 0x280;
          }
          else {
            iVar1 = (*(int *)(iVar3 + 0x24) - *(int *)(iVar3 + 0x2c)) + -1;
          }
          FUN_00416f50(iVar3,iVar1,uVar4);
          *(uint *)(iVar3 + 0x20) = *(uint *)(iVar3 + 0x20) | 1;
        }
        iVar3 = *(int *)(iVar3 + 4);
        param_1 = (uint)(param_1 == 0);
      } while (iVar3 != 0);
      return;
    }
  }
  return;
}

