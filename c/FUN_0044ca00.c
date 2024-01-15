#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ca00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint **ppuVar3;
  uint *_Str1;
  float fVar4;
  float fVar5;
  short sVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  float10 fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint local_1c;
  short local_18;
  float local_c;
  float local_8;
  int local_4;
  
  local_c = 0.0;
  local_8 = 0.0;
  local_1c = 0;
  if ((DAT_004c3c04 != 0) && (DAT_004c3c0c != 0)) {
    FUN_0044bc20();
  }
  param_1[0xd] = DAT_00e3752c;
  param_1[0xe] = DAT_00e37520;
  if (DAT_004c3b98 == 0) {
    local_18 = 2;
  }
  else {
    local_18 = FUN_0044c510(param_1 + 7,1);
  }
  if (local_18 != 0) {
    puVar10 = param_1;
    if (DAT_004c3c04 != 0) {
      _DAT_0050c6f8 = 0;
      puVar10 = (undefined4 *)(&DAT_00e375c0 + DAT_0050c6f4 * 0x30);
    }
    iVar11 = *(int *)(DAT_0050c6b0 + 0x74);
    iVar2 = *(int *)(DAT_0050c6b0 + 0x78);
    iVar14 = iVar11 + param_1[5];
    *(int *)(iVar2 + 0x90) = iVar14 + -1;
    puVar1 = (undefined4 *)(iVar2 + iVar11 * 0x124);
    if (puVar1 + -0x49 == *(undefined4 **)(DAT_0050c6b0 + 0x78)) {
      puVar1[-0x24] = puVar1;
    }
    else {
      puVar1[-0x23] = puVar1;
    }
    puVar7 = puVar1;
    for (iVar11 = *(int *)(DAT_0050c6b0 + 0x74); iVar11 < iVar14; iVar11 = iVar11 + 1) {
      puVar7[0x20] = iVar11;
      puVar7[0x22] = 0xffffffff;
      *puVar7 = DAT_004c3c18;
      puVar7[1] = PTR_DAT_004c3c1c;
      puVar7[0x23] = *(undefined4 *)(DAT_0050c6b0 + 0x78);
      if (iVar11 < iVar14 + -1) {
        puVar7[0x26] = puVar7 + 0x49;
      }
      else {
        puVar7[0x26] = 0;
      }
      puVar7[0x25] = 0;
      puVar7[0x24] = 0;
      puVar7[0x3c] = 0;
      puVar7[0x21] = 1;
      puVar7[0x30] = *puVar10;
      puVar7[0x31] = puVar10[1];
      puVar7[0x32] = puVar10[2];
      puVar7[0x33] = puVar10[3];
      puVar7[0x34] = puVar10[4];
      puVar7[0x35] = puVar10[5];
      puVar7[0x36] = puVar10[6];
      puVar7[0x37] = puVar10[7];
      puVar7[0x38] = puVar10[8];
      puVar7[0x39] = puVar10[9];
      puVar7[0x3a] = puVar10[10];
      puVar7[0x3b] = puVar10[0xb];
      puVar7 = puVar7 + 0x49;
    }
    *(int *)(DAT_0050c6b0 + 0x74) = iVar14;
    local_4 = 0;
    if (0 < (int)param_1[5]) {
      puVar13 = puVar1 + 0x22;
      do {
        ppuVar3 = *(uint ***)(param_1[6] + local_4 * 4);
        if ((local_18 == 2) || (sVar6 = FUN_0044c510(ppuVar3 + 2,0), sVar6 != 0)) {
          _Str1 = ppuVar3[0xc];
          FUN_00433680(DAT_00e996dc & 0x2000,*ppuVar3);
          puVar15 = *ppuVar3;
          if ((puVar15 != (uint *)0x0) && ((*puVar15 & 8) == 0)) {
            if ((*puVar15 & 0x40) == 0) {
              local_1c = local_1c | 1;
            }
            else {
              local_1c = local_1c | 0x800;
            }
          }
          if ((((DAT_00e996dc & 0x10) == 0) && (puVar15 != (uint *)0x0)) &&
             (uVar9 = puVar15[2], uVar9 != 0)) {
            local_c = (float)(int)*(short *)(uVar9 + 4) / (float)(int)*(short *)(puVar15 + 1);
            iVar11 = *(int *)(uVar9 + 0x1c);
            local_8 = (float)(int)*(short *)((int)puVar15 + 6) / (float)(int)*(short *)(uVar9 + 6);
            if (iVar11 == 0) {
              uVar18 = 0;
              uVar17 = 0;
              uVar8 = FUN_00409040(puVar15,0,0);
            }
            else {
              uVar8 = *(undefined4 *)(uVar9 + 0x38);
              uVar12 = CONCAT31((int3)((uint)iVar11 >> 8),*(undefined *)(iVar11 + 3)) & 0xffffff0f;
              uVar9 = CONCAT31((int3)((uint)puVar15 >> 8),*(undefined *)(iVar11 + 3)) & 0xfffffff0;
              uVar18 = CONCAT22((short)(uVar12 >> 0x10),(ushort)(byte)uVar12);
              uVar17 = CONCAT22((short)(uVar9 >> 0x10),(ushort)(byte)uVar9);
            }
            FUN_00432190(uVar8,uVar17,uVar18);
          }
          else {
            uVar8 = FUN_00409040(ppuVar3,0,0);
            FUN_00432190(uVar8);
          }
          iVar11 = _strncmp((char *)_Str1,(char *)&PTR_DAT_004c3c14,3);
          if (iVar11 == 0) {
            uVar9 = _Str1[0x10];
            puVar13[0x1a] = 0;
            *puVar13 = uVar9;
            puVar15 = _Str1;
            if (DAT_0050c0cc != 0) {
              FUN_00432580(_Str1);
            }
          }
          else {
            uVar9 = FUN_00409230(_Str1);
            iVar11 = *(int *)(DAT_00e37bf0 + 4);
            *(undefined4 *)(iVar11 + 0x44 + uVar9 * 0x94) = 3;
            *puVar13 = uVar9;
            *(uint *)(iVar11 + 0x40 + uVar9 * 0x94) = uVar9;
            puVar15 = (uint *)(iVar11 + uVar9 * 0x94);
            *(char *)puVar15 = 'a';
            *(char *)((int)puVar15 + 1) = 'e';
            *(char *)((int)puVar15 + 2) = 's';
            FUN_00432d30(_Str1,puVar15,ppuVar3,local_1c);
            *(uint **)((int)puVar15 + 10) = ppuVar3[0xc];
            ppuVar3[0xc] = puVar15;
            fVar16 = (float10)FUN_0042f950(ppuVar3 + 2,ppuVar3 + 5);
            puVar15[0x20] = (uint)(float)(fVar16 * (float10)_DAT_004acc94);
            FUN_00409290(puVar15);
          }
          fVar5 = _DAT_004acc98 - local_c;
          fVar4 = _DAT_004acc98 - local_8;
          *(short *)(puVar15 + 0x21) = *(short *)(puVar15 + 0x21) + 1;
          *(short *)((int)puVar15 + 0x86) = *(short *)((int)puVar15 + 0x86) + 1;
          puVar15[0x23] = (uint)fVar5;
          puVar15[0x24] = (uint)fVar4;
          if (DAT_0050c70c == 0) {
            *(char *)((int)puVar15 + 0x89) = '\0';
          }
          else {
            *(char *)((int)puVar15 + 0x89) = '\x01';
          }
          if (DAT_0050c530 != 0) {
            *(char *)((int)puVar15 + 0x89) = '\0';
          }
          DAT_0050c0cc = 0;
          if (*(char *)(puVar15 + 0x22) != '\0') {
            FUN_00432b80(puVar15,ppuVar3);
          }
          if ((_Str1 != (uint *)0x0) && (sVar6 = *(short *)((int)ppuVar3 + 0x3e), sVar6 != 0)) {
            if (ppuVar3[10] == (uint *)0x0) {
              FUN_0044bfb0(puVar13 + -0x22,(int)sVar6);
            }
            else {
              FUN_0044c3b0(ppuVar3[10],puVar13 + -0x22,(int)sVar6);
            }
          }
        }
        local_4 = local_4 + 1;
        puVar13 = puVar13 + 0x49;
      } while (local_4 < (int)param_1[5]);
    }
  }
  return;
}

