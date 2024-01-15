#include "prototype.h"


void FUN_00409290(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int local_8;
  uint local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    puVar6 = (uint *)(*(int *)(param_1 + 0x6c) + 0x10);
    uVar4 = param_1;
    do {
      uVar3 = *puVar6;
      uVar5 = 0;
      if (0 < (int)uVar3) {
        do {
          local_8 = uVar5 - 1;
          if (local_8 < 0) {
            local_8 = uVar3 - 1;
          }
          uVar1 = uVar5 + 1;
          uVar4 = uVar1 % uVar3;
          uVar3 = puVar6[1];
          iVar2 = *(int *)(param_1 + 0x4c);
          iVar2 = FUN_0048ed20(iVar2 + *(int *)(uVar3 + uVar5 * 4) * 0xc,
                               iVar2 + *(int *)(uVar3 + uVar4 * 4) * 0xc,
                               iVar2 + *(int *)(uVar3 + local_8 * 4) * 0xc);
        } while ((iVar2 != 0) && (uVar3 = *puVar6, uVar5 = uVar1, (int)uVar1 < (int)uVar3));
      }
      if ((int)uVar5 < (int)*puVar6) {
        uVar3 = puVar6[1];
        iVar2 = *(int *)(param_1 + 0x4c);
        FUN_0048eb60(puVar6 + 0xb,iVar2 + *(int *)(uVar3 + uVar5 * 4) * 0xc,
                     iVar2 + *(int *)(uVar3 + uVar4 * 4) * 0xc,
                     iVar2 + *(int *)(uVar3 + local_8 * 4) * 0xc);
      }
      puVar6 = puVar6 + 0x12;
      local_4 = local_4 + 1;
    } while (local_4 < *(uint *)(param_1 + 0x7c));
  }
  return;
}

