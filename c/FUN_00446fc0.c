#include "prototype.h"


void FUN_00446fc0(int param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  uint local_10;
  int local_c;
  uint local_8 [2];
  
  piVar3 = param_2;
  FUN_0042d680(2);
  FUN_0042d640(2,0,&local_10,4);
  local_10 = (local_10 & 0xff00 | local_10 << 0x10) << 8 |
             (local_10 & 0xff0000 | local_10 >> 0x10) >> 8;
  if ((-1 < param_1) && (param_1 < (int)local_10)) {
    FUN_0042d640(2,param_1 * 4 + 4,local_8,8);
    iVar7 = 2;
    puVar6 = local_8;
    do {
      uVar2 = *puVar6;
      iVar7 = iVar7 + -1;
      *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
      uVar2 = local_8[0];
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0);
    iVar4 = FUN_00445b40();
    iVar10 = local_8[1] - local_8[0];
    local_c = iVar10;
    FUN_0042d640(2,uVar2,iVar4,iVar10);
    iVar7 = FUN_00445b40();
    *param_2 = iVar7;
    iVar5 = FUN_00445b40();
    iVar7 = *param_2;
    param_2 = (int *)0x0;
    *(int *)(iVar7 + 0xc) = iVar5 + 0x10;
    uVar1 = *(undefined2 *)*piVar3;
    *(undefined2 *)*piVar3 = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
    uVar2 = *(uint *)(*piVar3 + 4);
    *(uint *)(*piVar3 + 4) =
         (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
    uVar2 = *(uint *)(*piVar3 + 8);
    *(uint *)(*piVar3 + 8) =
         (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
    puVar8 = *(undefined2 **)(*piVar3 + 0xc);
    if (0 < *(int *)(*piVar3 + 4)) {
      do {
        iVar7 = 2;
        *puVar8 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8));
        puVar8[1] = CONCAT11((char)puVar8[1],(char)((ushort)puVar8[1] >> 8));
        puVar9 = puVar8 + 2;
        do {
          iVar7 = iVar7 + -1;
          *puVar9 = CONCAT11((char)*puVar9,(char)((ushort)*puVar9 >> 8));
          puVar9 = puVar9 + 1;
        } while (iVar7 != 0);
        iVar7 = 4;
        puVar9 = puVar8 + 4;
        do {
          iVar7 = iVar7 + -1;
          *puVar9 = CONCAT11((char)*puVar9,(char)((ushort)*puVar9 >> 8));
          puVar9 = puVar9 + 1;
        } while (iVar7 != 0);
        iVar7 = 3;
        puVar6 = (uint *)(puVar8 + 8);
        do {
          uVar2 = *puVar6;
          iVar7 = iVar7 + -1;
          *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
          puVar6 = puVar6 + 1;
        } while (iVar7 != 0);
        iVar7 = 3;
        puVar6 = (uint *)(puVar8 + 0xe);
        do {
          uVar2 = *puVar6;
          iVar7 = iVar7 + -1;
          *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
          puVar6 = puVar6 + 1;
        } while (iVar7 != 0);
        iVar7 = 3;
        puVar6 = (uint *)(puVar8 + 0x14);
        do {
          uVar2 = *puVar6;
          iVar7 = iVar7 + -1;
          *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
          puVar6 = puVar6 + 1;
        } while (iVar7 != 0);
        iVar7 = 3;
        puVar6 = (uint *)(puVar8 + 0x1a);
        do {
          uVar2 = *puVar6;
          iVar7 = iVar7 + -1;
          *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
          puVar6 = puVar6 + 1;
        } while (iVar7 != 0);
        iVar7 = 8;
        puVar8[0x20] = CONCAT11((char)puVar8[0x20],(char)((ushort)puVar8[0x20] >> 8));
        puVar9 = puVar8 + 0x21;
        do {
          iVar7 = iVar7 + -1;
          *puVar9 = CONCAT11((char)*puVar9,(char)((ushort)*puVar9 >> 8));
          puVar9 = puVar9 + 1;
        } while (iVar7 != 0);
        puVar8 = puVar8 + 0x2a;
        param_2 = (int *)((int)param_2 + 1);
        iVar10 = local_c;
      } while ((int)param_2 < *(int *)(*piVar3 + 4));
    }
    FUN_00445b20(iVar4 + iVar10);
    FUN_0042d6f0(2);
    return;
  }
  *param_2 = 0;
  return;
}

