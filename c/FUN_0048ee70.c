#include "prototype.h"


void FUN_0048ee70(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint local_8;
  uint local_4;
  
  if (param_1 != 0) {
    puVar2 = (uint *)(param_1 + 0x44);
    local_4 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      do {
        local_8 = 0;
        if (*puVar2 != 0) {
          piVar3 = (int *)(puVar2[1] + 0x50);
          do {
            if (piVar3[-1] != 0) {
              (**(code **)(DAT_00ecc428 + 0x24))(piVar3[-1]);
            }
            if (*piVar3 != 0) {
              (**(code **)(DAT_00ecc428 + 0x24))(*piVar3);
            }
            iVar4 = piVar3[7];
            if (iVar4 != 0) {
              uVar1 = 0;
              if (piVar3[0xb] != 0) {
                do {
                  FUN_00492410(iVar4);
                  iVar4 = iVar4 + 0x48;
                  uVar1 = uVar1 + 1;
                } while (uVar1 < (uint)piVar3[0xb]);
              }
              (**(code **)(DAT_00ecc428 + 0x24))(piVar3[7]);
            }
            if (piVar3[1] != 0) {
              (**(code **)(DAT_00ecc428 + 0x24))(piVar3[1]);
            }
            if (piVar3[2] != 0) {
              (**(code **)(DAT_00ecc428 + 0x24))(piVar3[2]);
            }
            if (piVar3[8] != 0) {
              (**(code **)(DAT_00ecc428 + 0x24))(piVar3[8]);
            }
            piVar3 = piVar3 + 0x25;
            local_8 = local_8 + 1;
          } while (local_8 < *puVar2);
        }
        if (puVar2[1] != 0) {
          (**(code **)(DAT_00ecc428 + 0x24))(puVar2[1]);
        }
        puVar2 = puVar2 + 2;
        local_4 = local_4 + 1;
      } while (local_4 < *(uint *)(param_1 + 100));
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x78));
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      do {
        FUN_0048eac0(*(undefined4 *)(*(int *)(param_1 + 0x68) + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x6c));
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x68));
    }
  }
  return;
}

