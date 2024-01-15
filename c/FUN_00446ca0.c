#include "prototype.h"


undefined2 * FUN_00446ca0(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  uint local_14;
  uint *local_10;
  short *local_c;
  uint local_8 [2];
  
  FUN_0042d680(1);
  puVar4 = (undefined2 *)FUN_00445b40();
  FUN_0042d640(1,0,&local_14,4);
  local_14 = (local_14 & 0xff00 | local_14 << 0x10) << 8 |
             (local_14 >> 0x10 | local_14 & 0xff0000) >> 8;
  if ((-1 < param_1) && (param_1 < (int)local_14)) {
    FUN_0042d640(1,param_1 * 4 + 4,local_8,8);
    iVar7 = 2;
    puVar6 = local_8;
    do {
      uVar2 = *puVar6;
      iVar7 = iVar7 + -1;
      *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
      puVar6 = puVar6 + 1;
    } while (iVar7 != 0);
    FUN_0042d640(1,local_8[0],puVar4,0x14);
    *puVar4 = CONCAT11((char)*puVar4,(char)((ushort)*puVar4 >> 8));
    puVar4[1] = CONCAT11((char)puVar4[1],(char)((ushort)puVar4[1] >> 8));
    local_10 = (uint *)(puVar4 + 4);
    psVar8 = puVar4 + 6;
    puVar4[3] = CONCAT11((char)puVar4[3],(char)((ushort)puVar4[3] >> 8));
    uVar2 = *local_10;
    uVar5 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
    puVar6 = (uint *)(puVar4 + 8);
    *local_10 = uVar5;
    *psVar8 = CONCAT11((char)*psVar8,(char)((ushort)*psVar8 >> 8));
    uVar2 = *puVar6;
    puVar4[7] = CONCAT11((char)puVar4[7],(char)((ushort)puVar4[7] >> 8));
    *puVar6 = (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8;
    local_c = psVar8;
    if ((*(char *)(puVar4 + 2) != '\x02') || (puVar11 = puVar4, uVar5 != 0)) {
      puVar11 = puVar4 + 10;
      iVar9 = *psVar8 * 8;
      FUN_0042d640(1,local_8[0] + 0x14,puVar11,iVar9);
      iVar7 = 0;
      *puVar6 = (uint)puVar11;
      if (0 < *psVar8) {
        do {
          uVar1 = *(undefined2 *)(*puVar6 + iVar7 * 8);
          *(ushort *)(*puVar6 + iVar7 * 8) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
          uVar1 = *(undefined2 *)(*puVar6 + 2 + iVar7 * 8);
          *(ushort *)(*puVar6 + 2 + iVar7 * 8) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
          iVar10 = iVar7 * 8;
          uVar2 = *(uint *)(*puVar6 + 4 + iVar7 * 8);
          iVar7 = iVar7 + 1;
          *(uint *)(*puVar6 + 4 + iVar10) =
               (uVar2 & 0xff00 | uVar2 << 0x10) << 8 | (uVar2 >> 0x10 | uVar2 & 0xff0000) >> 8;
          psVar8 = local_c;
        } while (iVar7 < *local_c);
      }
      uVar2 = *local_10;
      if (uVar2 != 0) {
        puVar11 = (undefined2 *)((int)puVar4 + iVar9 + 0x23 & 0xfffffff0);
        iVar9 = *(int *)(*puVar6 + 4) - uVar2;
        FUN_0042d640(1,local_8[0] + uVar2,puVar11,iVar9);
        *local_10 = (uint)puVar11;
      }
      iVar7 = (int)*psVar8;
      iVar10 = 0;
      puVar11 = (undefined2 *)((int)puVar11 + iVar9 + 0xf & 0xfffffff0);
      if (0 < iVar7) {
        do {
          if (iVar10 == iVar7 + -1) {
            iVar9 = local_8[1] - local_8[0];
          }
          else {
            iVar9 = *(int *)(*puVar6 + 0xc + iVar10 * 8);
          }
          iVar7 = iVar10 * 8;
          iVar3 = *(int *)(iVar7 + 4 + *puVar6);
          iVar9 = iVar9 - iVar3;
          FUN_0042d640(1,local_8[0] + iVar3,puVar11,iVar9);
          *(undefined2 **)(iVar7 + 4 + *puVar6) = puVar11;
          if (param_1 != 99) {
            FUN_00446b60(puVar4,iVar7 + *puVar6);
          }
          iVar7 = (int)*local_c;
          puVar11 = (undefined2 *)((int)puVar11 + iVar9 + 0xf & 0xfffffff0);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar7);
      }
      if (param_1 == 99) {
        FUN_00446a20(puVar4);
      }
    }
    FUN_0042d6f0(1);
    FUN_00445b20(puVar11);
    return puVar4;
  }
  return (undefined2 *)0x0;
}

