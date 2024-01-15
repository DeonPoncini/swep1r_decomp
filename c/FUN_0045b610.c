#include "prototype.h"


undefined4 * FUN_0045b610(int param_1,int *param_2)

{
  undefined uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  undefined1 *local_54;
  int local_50 [20];
  
  if (param_2 != (int *)0x0) {
    puVar2 = &DAT_00e29bc4;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0x22;
    } while ((int)puVar2 < 0xe2a664);
    iVar5 = (int)*(char *)(param_1 + 0x70);
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ('\0' < *(char *)(param_1 + 0x72)) {
      param_2 = local_50;
      local_54 = &DAT_00e35a60;
      iVar5 = 0;
      piVar7 = &DAT_00e29bc4;
      do {
        uVar1 = FUN_0041c4d0(iVar5);
        *(undefined *)(iVar5 + 0x73 + param_1) = uVar1;
        piVar7[-1] = iVar5;
        *param_2 = iVar5;
        iVar3 = FUN_0041d6c0();
        if (iVar3 == 0) {
          if (iVar5 == DAT_004eb3b4) {
            *piVar7 = 0x4c6f636c;
            piVar7[2] = (int)local_54;
          }
          else {
            *piVar7 = 0x52454d4f;
            piVar7[2] = 0;
          }
        }
        else if (iVar5 == DAT_004eb3b4) {
          *piVar7 = 0x4c6f636c;
          piVar7[2] = (int)local_54;
          FUN_0041de50(iVar5,*piVar7);
        }
        else {
          iVar3 = FUN_00420f70(iVar5);
          piVar7[2] = 0;
          iVar3 = (-(uint)(iVar3 != 0) & 0x11040406) + 0x41414949;
          *piVar7 = iVar3;
          FUN_0041de50(iVar5,iVar3);
        }
        *(undefined *)(piVar7 + 3) = 0;
        *(undefined *)((int)piVar7 + 0xd) = 0;
        piVar7[4] = iVar5;
        iVar6 = iVar5 + 1;
        piVar7[5] = (int)(&DAT_004c2700 + *(char *)(iVar5 + 0x73 + param_1) * 0x34);
        local_54 = local_54 + 0x50;
        piVar8 = (int *)(&DAT_004c2bb0 + *(char *)(iVar5 + 0x73 + param_1) * 0x3c);
        piVar9 = piVar7 + 6;
        for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        param_2 = param_2 + 1;
        iVar5 = iVar6;
        piVar7 = piVar7 + 0x22;
      } while (iVar6 < *(char *)(param_1 + 0x72));
    }
    iVar5 = FUN_0045bab0(param_1);
    iVar3 = 0;
    if ('\0' < *(char *)(param_1 + 0x72)) {
      puVar4 = &DAT_00e29bc8;
      do {
        if (iVar5 == iVar3) {
          uVar10 = *puVar4 | 0x20;
        }
        else {
          uVar10 = *puVar4 & 0xffffffdf;
        }
        *puVar4 = uVar10;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 0x22;
      } while (iVar3 < *(char *)(param_1 + 0x72));
    }
    FUN_00411370();
    return &DAT_00e29bc0;
  }
  return &DAT_00e29bc0;
}

