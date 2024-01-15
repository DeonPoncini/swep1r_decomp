#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ceb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint **ppuVar2;
  uint *_Str1;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 extraout_EDX;
  uint uVar10;
  int iVar11;
  float10 fVar12;
  uint *local_8;
  int local_4;
  
  if ((DAT_004c3c04 != 0) && (DAT_004c3c0c != 0)) {
    FUN_0044bc20();
  }
  param_1[0xd] = DAT_00e3752c;
  param_1[0xe] = DAT_00e37520;
  puVar8 = param_1;
  if (DAT_004c3c04 != 0) {
    _DAT_0050c6f8 = 0;
    puVar8 = (undefined4 *)(&DAT_00e375c0 + DAT_0050c6f4 * 0x30);
  }
  if (param_1[5] != 0) {
    iVar9 = *(int *)(DAT_0050c6b0 + 0x74);
    iVar6 = *(int *)(DAT_0050c6b0 + 0x78);
    iVar11 = param_1[5] + iVar9;
    *(int *)(iVar6 + 0x90) = iVar11 + -1;
    puVar1 = (undefined4 *)(iVar6 + iVar9 * 0x124);
    if (puVar1 + -0x49 == *(undefined4 **)(DAT_0050c6b0 + 0x78)) {
      puVar1[-0x24] = puVar1;
    }
    else {
      puVar1[-0x23] = puVar1;
    }
    puVar4 = puVar1;
    for (iVar9 = *(int *)(DAT_0050c6b0 + 0x74); iVar9 < iVar11; iVar9 = iVar9 + 1) {
      puVar4[0x20] = iVar9;
      puVar4[0x22] = 0xffffffff;
      *puVar4 = DAT_004c3c18;
      puVar4[1] = PTR_DAT_004c3c1c;
      puVar4[0x23] = *(undefined4 *)(DAT_0050c6b0 + 0x78);
      if (iVar9 < iVar11 + -1) {
        puVar4[0x26] = puVar4 + 0x49;
      }
      else {
        puVar4[0x26] = 0;
      }
      puVar4[0x25] = 0;
      puVar4[0x24] = 0;
      puVar4[0x21] = 1;
      puVar4[0x30] = *puVar8;
      puVar4[0x31] = puVar8[1];
      puVar4[0x32] = puVar8[2];
      puVar4[0x33] = puVar8[3];
      puVar4[0x34] = puVar8[4];
      puVar4[0x35] = puVar8[5];
      puVar4[0x36] = puVar8[6];
      puVar4[0x37] = puVar8[7];
      puVar4[0x38] = puVar8[8];
      puVar4[0x39] = puVar8[9];
      puVar4[0x3a] = puVar8[10];
      puVar4[0x3b] = puVar8[0xb];
      puVar4 = puVar4 + 0x49;
    }
    *(int *)(DAT_0050c6b0 + 0x74) = iVar11;
    local_4 = 0;
    if (0 < (int)param_1[5]) {
      local_8 = puVar1 + 0x22;
      do {
        ppuVar2 = *(uint ***)(param_1[6] + local_4 * 4);
        _Str1 = ppuVar2[0xc];
        if (_Str1 != (uint *)0x0) {
          iVar9 = 0;
          FUN_00433680(DAT_00e996dc & 0x2000,*ppuVar2);
          puVar3 = *ppuVar2;
          if ((puVar3 != (uint *)0x0) && ((*puVar3 & 8) == 0)) {
            iVar9 = (-(uint)((*puVar3 & 0x40) != 0) & 0x7ff) + 1;
          }
          if (((((DAT_00e996dc & 0x10) == 0) && (puVar3 != (uint *)0x0)) &&
              (uVar7 = puVar3[2], uVar7 != 0)) && (iVar6 = *(int *)(uVar7 + 0x1c), iVar6 != 0)) {
            uVar5 = CONCAT31((int3)((uint)iVar6 >> 8),*(undefined *)(iVar6 + 3)) & 0xfffffff0;
            uVar10 = CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined *)(iVar6 + 3)) &
                     0xffffff0f;
            FUN_00432190(*(undefined4 *)(uVar7 + 0x38),
                         CONCAT22((short)(uVar5 >> 0x10),(ushort)(byte)uVar5),
                         CONCAT22((short)(uVar10 >> 0x10),(ushort)(byte)uVar10));
          }
          else {
            FUN_00432190(0,0,0);
          }
          iVar6 = _strncmp((char *)_Str1,(char *)&PTR_DAT_004c3c14,3);
          if (iVar6 == 0) {
            *local_8 = _Str1[0x10];
          }
          else {
            uVar7 = FUN_00409230(_Str1);
            iVar6 = *(int *)(DAT_00e37bf0 + 4);
            *(undefined4 *)(iVar6 + 0x44 + uVar7 * 0x94) = 3;
            puVar3 = (uint *)(iVar6 + uVar7 * 0x94);
            *local_8 = uVar7;
            puVar3[0x10] = uVar7;
            *(undefined *)puVar3 = 0x61;
            *(undefined *)((int)puVar3 + 1) = 0x65;
            *(undefined *)((int)puVar3 + 2) = 0x73;
            *(undefined2 *)(puVar3 + 0x21) = 0;
            *(undefined2 *)((int)puVar3 + 0x86) = 0;
            FUN_00432d30(_Str1,puVar3,ppuVar2,iVar9);
            *(uint **)((int)puVar3 + 10) = ppuVar2[0xc];
            ppuVar2[0xc] = puVar3;
            fVar12 = (float10)FUN_0042f950(ppuVar2 + 2,ppuVar2 + 5);
            puVar3[0x20] = (uint)(float)(fVar12 * (float10)_DAT_004acc94);
            FUN_00409290(puVar3);
          }
        }
        local_4 = local_4 + 1;
        local_8 = local_8 + 0x49;
      } while (local_4 < (int)param_1[5]);
    }
  }
  return;
}

