#include "prototype.h"


uint FUN_00422f60(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_004eb470;
  local_8 = 0;
  uVar3 = 0;
  while( true ) {
    iVar4 = *(int *)(PTR_DAT_004b6d34 + 0x28) + DAT_004eb46c * 0x4c;
    uVar5 = DAT_004eb46c;
    if (DAT_004eb46c < *(uint *)(PTR_DAT_004b6d34 + 0x20)) {
      do {
        uVar1 = *(uint *)(iVar4 + 0x24);
        if (((((uVar1 & 1) != 0) && ((uVar1 & 8) == 0)) &&
            ((DAT_004b6d2c != 0 || ((uVar1 & 6) == 0)))) && (*(int *)(iVar4 + 0x40) == 0)) {
          iVar2 = FUN_004850c0(*(undefined4 *)(iVar4 + 0x48),0);
          if (iVar2 == 0) {
            if (*(int *)(iVar4 + 0x44) == 0) {
              uVar3 = uVar3 + *(int *)(iVar4 + 0x28);
              FUN_00422d10(iVar4);
              DAT_004eb454 = 2;
              if (param_1 <= uVar3) {
                DAT_004eb470 = local_4;
                DAT_004eb46c = uVar5 + 1;
                return uVar3;
              }
            }
            else {
              *(undefined4 *)(iVar4 + 0x44) = 0;
            }
          }
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x4c;
      } while (uVar5 < *(uint *)(PTR_DAT_004b6d34 + 0x20));
    }
    if (1 < local_8) break;
    local_8 = local_8 + 1;
    local_4 = (uint)(local_4 == 0);
    DAT_004eb46c = 0;
  }
  return 0;
}

