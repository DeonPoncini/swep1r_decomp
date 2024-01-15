#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00493310(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint *puVar16;
  undefined4 *puVar17;
  float10 fVar18;
  float local_70;
  float local_6c;
  int *local_68;
  int local_64;
  uint local_60;
  int local_58;
  uint local_54;
  int local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) == 0) {
    if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
      uVar13 = 0;
      if (*(int *)(iVar1 + 0x74) != 0) {
        iVar11 = 0;
        puVar5 = (undefined4 *)(*(int *)(iVar1 + 0x78) + 0xc0);
        do {
          puVar14 = puVar5;
          puVar17 = (undefined4 *)(iVar11 + *(int *)(param_1 + 0x1c));
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar17 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar17 = puVar17 + 1;
          }
          uVar13 = uVar13 + 1;
          iVar11 = iVar11 + 0x30;
          puVar5 = puVar5 + 0x49;
        } while (uVar13 < *(uint *)(iVar1 + 0x74));
      }
    }
    else {
      local_64 = 8;
      piVar12 = piVar2 + 2;
      do {
        if (*piVar12 != 0) {
          iVar11 = piVar12[0x177a];
          local_68 = piVar12 + 8;
          local_60 = 0;
          if (*(int *)(iVar11 + 0x58) != 0) {
            piVar15 = (int *)(*(int *)(iVar11 + 0x5c) + 0x44);
            do {
              bVar4 = false;
              if (*piVar15 != 0) {
                iVar7 = *piVar15 + -1;
                iVar10 = piVar12[piVar15[-1] + 8];
                if (iVar10 != iVar7) {
                  iVar8 = iVar10 + 1;
                  if (*(float *)(piVar15[1] + iVar8 * 0x38) <= (float)piVar12[0x1778]) {
                    pfVar9 = (float *)(piVar15[1] + (iVar10 + 2) * 0x38);
                    do {
                      if (iVar8 == iVar7) {
                        bVar4 = true;
                      }
                      else if (*pfVar9 <= (float)piVar12[0x1778]) {
                        iVar8 = iVar8 + 1;
                        pfVar9 = pfVar9 + 0xe;
                      }
                      else {
                        bVar4 = true;
                      }
                    } while (!bVar4);
                    *local_68 = iVar8;
                  }
                }
              }
              local_60 = local_60 + 1;
              local_68 = local_68 + 1;
              piVar15 = piVar15 + 0x13;
            } while (local_60 < *(uint *)(iVar11 + 0x58));
          }
        }
        piVar12 = piVar12 + 0x177d;
        local_64 = local_64 + -1;
      } while (local_64 != 0);
      local_54 = 0;
      if (*(int *)(iVar1 + 0x74) != 0) {
        local_50 = 0;
        local_60 = 0;
        puVar16 = (uint *)(*(int *)(iVar1 + 0x78) + 0x80);
        do {
          local_64 = 0;
          local_68 = (int *)0x0;
          local_70 = 0.0;
          local_6c = 0.0;
          local_3c = 0.0;
          local_38 = 0.0;
          local_34 = 0.0;
          local_48 = 0.0;
          local_18 = 0.0;
          local_c = 0.0;
          local_44 = 0.0;
          local_14 = 0.0;
          local_8 = 0.0;
          local_40 = 0.0;
          local_10 = 0.0;
          local_4 = 0.0;
          local_58 = 8;
          piVar12 = piVar2 + 2;
          do {
            iVar11 = piVar12[0x177a];
            if (iVar11 != 0) {
              if ((puVar16[1] & *(uint *)(iVar11 + 0x4c)) == 0) {
                iVar10 = piVar12[2];
              }
              else {
                iVar10 = piVar12[3];
              }
              if ((*(byte *)piVar12 & 2) != 0) {
                uVar13 = *puVar16;
                iVar7 = *(int *)(iVar11 + 0x5c) + uVar13 * 0x4c;
                if ((((*(int *)(iVar7 + 0x44) != 0) && ((int)local_68 <= iVar10)) &&
                    ((local_64 <= iVar10 || (local_70 < _DAT_004af964)))) &&
                   (uVar13 < *(uint *)(iVar11 + 0x58))) {
                  iVar11 = *(int *)(iVar7 + 0x48);
                  fVar3 = (float)piVar12[0x1778] - *(float *)(iVar11 + piVar12[uVar13 + 8] * 0x38);
                  iVar11 = iVar11 + piVar12[uVar13 + 8] * 0x38;
                  if ((*(uint *)(iVar11 + 4) & 1) == 0) {
                    local_24 = *(float *)(iVar11 + 8);
                    local_20 = *(float *)(iVar11 + 0xc);
                    local_1c = *(float *)(iVar11 + 0x10);
                  }
                  else {
                    local_24 = *(float *)(iVar11 + 0x20) * fVar3 + *(float *)(iVar11 + 8);
                    local_20 = *(float *)(iVar11 + 0x24) * fVar3 + *(float *)(iVar11 + 0xc);
                    local_1c = *(float *)(iVar11 + 0x28) * fVar3 + *(float *)(iVar11 + 0x10);
                  }
                  if ((*(uint *)(iVar11 + 4) & 2) == 0) {
                    local_30 = *(float *)(iVar11 + 0x14);
                    local_2c = *(float *)(iVar11 + 0x18);
                    local_28 = *(float *)(iVar11 + 0x1c);
                  }
                  else {
                    local_30 = *(float *)(iVar11 + 0x2c) * fVar3 + *(float *)(iVar11 + 0x14);
                    local_2c = *(float *)(iVar11 + 0x30) * fVar3 + *(float *)(iVar11 + 0x18);
                    local_28 = *(float *)(iVar11 + 0x34) * fVar3 + *(float *)(iVar11 + 0x1c);
                  }
                  local_24 = local_24 - (float)puVar16[10];
                  local_20 = local_20 - (float)puVar16[0xb];
                  local_1c = local_1c - (float)puVar16[0xc];
                  local_2c = local_2c - (float)puVar16[0xe];
                  local_28 = local_28 - (float)puVar16[0xf];
                  fVar18 = (float10)FUN_0048c910(local_30 - (float)puVar16[0xd]);
                  local_30 = (float)fVar18;
                  fVar18 = (float10)FUN_0048c910(local_2c);
                  local_2c = (float)fVar18;
                  fVar18 = (float10)FUN_0048c910(local_28);
                  local_28 = (float)fVar18;
                  if ((float)piVar12[6] < _DAT_004af964) {
                    local_24 = (float)piVar12[6] * local_24;
                    local_20 = (float)piVar12[6] * local_20;
                    local_1c = (float)piVar12[6] * local_1c;
                    local_30 = (float)piVar12[6] * local_30;
                    local_2c = (float)piVar12[6] * local_2c;
                    local_28 = (float)piVar12[6] * local_28;
                  }
                  if (iVar10 == local_64) {
                    local_3c = local_3c + local_24;
                    local_38 = local_38 + local_20;
                    local_34 = local_34 + local_1c;
                    local_48 = local_48 + local_30;
                    local_44 = local_44 + local_2c;
                    local_40 = local_40 + local_28;
                    local_70 = local_70 + (float)piVar12[6];
                  }
                  else if (local_64 < iVar10) {
                    local_18 = local_3c;
                    local_14 = local_38;
                    local_10 = local_34;
                    local_c = local_48;
                    local_8 = local_44;
                    local_4 = local_40;
                    local_6c = local_70;
                    local_68 = (int *)local_64;
                    local_3c = local_24;
                    local_38 = local_20;
                    local_34 = local_1c;
                    local_48 = local_30;
                    local_70 = (float)piVar12[6];
                    local_44 = local_2c;
                    local_40 = local_28;
                    local_64 = iVar10;
                  }
                  else if ((int)local_68 < iVar10) {
                    local_18 = local_24;
                    local_14 = local_20;
                    local_10 = local_1c;
                    local_c = local_30;
                    local_6c = (float)piVar12[6];
                    local_8 = local_2c;
                    local_4 = local_28;
                    local_68 = (int *)iVar10;
                  }
                  else {
                    local_18 = local_18 + local_24;
                    local_14 = local_14 + local_20;
                    local_10 = local_10 + local_1c;
                    local_c = local_c + local_30;
                    local_8 = local_8 + local_2c;
                    local_4 = local_4 + local_28;
                    local_6c = local_6c + (float)piVar12[6];
                  }
                }
              }
            }
            piVar12 = piVar12 + 0x177d;
            local_58 = local_58 + -1;
          } while (local_58 != 0);
          if ((_DAT_004af964 <= local_70) || (local_6c <= _DAT_004af960)) {
            if (_DAT_004af964 < local_70) {
              local_70 = _DAT_004af964 / local_70;
              local_3c = local_70 * local_3c;
              local_38 = local_70 * local_38;
              local_34 = local_70 * local_34;
              local_48 = local_70 * local_48;
              local_44 = local_70 * local_44;
              local_40 = local_70 * local_40;
            }
          }
          else {
            if (_DAT_004af964 < local_6c) {
              local_6c = _DAT_004af964 / local_6c;
              local_18 = local_6c * local_18;
              local_14 = local_6c * local_14;
              local_10 = local_6c * local_10;
              local_c = local_6c * local_c;
              local_8 = local_6c * local_8;
              local_4 = local_6c * local_4;
            }
            local_70 = _DAT_004af964 - local_70;
            local_3c = local_70 * local_18 + local_3c;
            local_38 = local_70 * local_14 + local_38;
            local_34 = local_70 * local_10 + local_34;
            local_48 = local_70 * local_c + local_48;
            local_44 = local_70 * local_8 + local_44;
            local_40 = local_70 * local_4 + local_40;
          }
          fVar18 = (float10)FUN_0048c910(local_48);
          local_48 = (float)fVar18;
          fVar18 = (float10)FUN_0048c910(local_44);
          local_44 = (float)fVar18;
          fVar18 = (float10)FUN_0048c910(local_40);
          local_3c = (float)puVar16[10] + local_3c;
          local_38 = (float)puVar16[0xb] + local_38;
          local_34 = (float)puVar16[0xc] + local_34;
          local_48 = (float)puVar16[0xd] + local_48;
          local_44 = (float)puVar16[0xe] + local_44;
          local_40 = (float)puVar16[0xf] + (float)fVar18;
          FUN_004924b0(local_50 + *(int *)(param_1 + 0x1c),&local_48,&local_3c);
          pfVar9 = (float *)(*(int *)(param_1 + 0x20) + local_60);
          if (((*pfVar9 != _DAT_004af960) || (pfVar9[1] != _DAT_004af960)) ||
             (pfVar9[2] != _DAT_004af960)) {
            FUN_00493130(local_50 + *(int *)(param_1 + 0x1c),pfVar9);
          }
          local_60 = local_60 + 0xc;
          local_54 = local_54 + 1;
          local_50 = local_50 + 0x30;
          puVar16 = puVar16 + 0x49;
        } while (local_54 < *(uint *)(iVar1 + 0x74));
      }
    }
    FUN_00490d10(param_1,*(undefined4 *)(iVar1 + 0x78),param_2);
    uVar6 = FUN_0048db80();
    *(undefined4 *)(param_1 + 0x18) = uVar6;
  }
  return;
}

