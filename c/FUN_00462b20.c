#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462b20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined local_40 [48];
  undefined local_10 [16];
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x84);
    iVar3 = (param_2 != DAT_00e2899c) + 0xd;
    if ((*(uint *)(iVar1 + 100) & 0x2000000) != 0) {
      FUN_00462320(param_1,param_2,iVar1);
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xf7ffffff;
      if ((&DAT_00e287e0)[iVar3] != 0) {
        FUN_00431a50((&DAT_00e287e0)[iVar3],2,0xfffffffc,0x10,3);
      }
      FUN_00461150(param_2);
      return;
    }
    if (((byte)*(undefined4 *)(param_1 + 8) & 0xf) == 1) {
      iVar2 = FUN_00462a70(param_1,iVar1);
      if (iVar2 == 0) {
        *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xf7ffffff;
        if ((&DAT_00e287e0)[iVar3] != 0) {
          FUN_00431a50((&DAT_00e287e0)[iVar3],2,0xfffffffc,0x10,3);
        }
      }
      else {
        if ((&DAT_00e287e0)[iVar3] != 0) {
          FUN_00431a50((&DAT_00e287e0)[iVar3],2,3,0x10,2);
        }
        *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x8000000;
        FUN_0044eeb0(iVar1 + 0xac,local_40,0x3f000000);
        FUN_0042f7d0(iVar1 + 600,local_10);
        *(undefined4 *)(iVar1 + 0x254) = (&DAT_00e287e0)[iVar3];
      }
    }
    FUN_00460950(param_2,param_1);
    iVar3 = FUN_0045d350();
    if ((iVar3 == 2) && (param_2 != DAT_00e27820)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    FUN_004611f0(param_2,uVar4);
    if ((*(uint *)(iVar1 + 0x60) & 0x800) != 0) {
      if (DAT_0050c5f0 == 0) {
        FUN_004816b0();
      }
      uVar4 = FUN_00421360(s__c_sKa_pow__004c7050);
      uVar4 = __ftol(0,0xffffffff,uVar4);
      FUN_00450530(0xa0,0x50,0xffffffff,uVar4);
    }
  }
  return;
}

