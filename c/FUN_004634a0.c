#include "prototype.h"


void FUN_004634a0(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  if ((((byte)*(uint *)(param_1 + 8) & 0xf) == 1) && ((*(uint *)(param_1 + 8) & 0x20) == 0)) {
    iVar5 = 0;
    local_4 = 0;
    if (0 < *(int *)(param_1 + 0x1bc)) {
      do {
        iVar3 = *(int *)(DAT_00e28960 + 0x84 + iVar5);
        iVar4 = DAT_00e28960 + iVar5;
        FUN_0042c420((int)*(short *)(iVar3 + 4),iVar3 + 0x50,0xffffd8f1);
        if ((((*(uint *)(iVar3 + 0x60) & 0x5000) == 0) &&
            ((*(uint *)(iVar3 + 100) & 0x2000000) == 0)) &&
           (sVar1 = *(short *)(iVar4 + 0x5c), 0 < sVar1)) {
          if ((iVar4 == DAT_00e2899c) || (iVar4 == DAT_00e27820)) {
            if (DAT_0050ca18 < 2) goto LAB_0046354e;
            sVar2 = *(short *)(iVar3 + 4);
            iVar4 = -(int)sVar1;
          }
          else {
            iVar4 = (int)sVar1;
            sVar2 = *(short *)(iVar3 + 4);
          }
          FUN_0042c420((int)sVar2,iVar3 + 0x50,iVar4);
        }
LAB_0046354e:
        local_4 = local_4 + 1;
        iVar5 = iVar5 + 0x88;
      } while (local_4 < *(int *)(param_1 + 0x1bc));
    }
  }
  return;
}

