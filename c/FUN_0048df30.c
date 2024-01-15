#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048df30(uint param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  float *pfVar13;
  int iVar14;
  undefined4 local_5c;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_40;
  uint local_3c;
  uint local_2c;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_0048b260(*(undefined4 *)(DAT_00df7f2c + 0x38),*(undefined4 *)(DAT_00df7f2c + 0x40),
               *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x48) + 4),
               *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x48) + 8));
  FUN_0049ea00();
  local_2c = 0;
  puVar11 = param_2;
  if (param_1 != 0) {
    do {
      uVar2 = *puVar11;
      param_2 = (uint *)0x13;
      if ((uVar2 & 2) != 0) {
        param_2 = (uint *)0x213;
      }
      if ((uVar2 & 4) != 0) {
        param_2 = (uint *)((uint)param_2 | 0x800);
      }
      if ((uVar2 & 8) != 0) {
        param_2 = (uint *)((uint)param_2 | 0x1000);
      }
      if ((uVar2 & 0x10) == 0) {
        param_2 = (uint *)((uint)param_2 | 0x80);
      }
      if ((uVar2 & 0x20) != 0) {
        param_2 = (uint *)((uint)param_2 | 0x2000);
      }
      if ((uVar2 & 0x300) != 0) {
        param_2 = (uint *)((uint)param_2 | 0x8000);
      }
      uVar3 = puVar11[7];
      if (uVar3 == 0) {
        local_5c = 0;
      }
      else {
        if (*(int *)(uVar3 + 0x7c) != 0) {
          param_2 = (uint *)((uint)param_2 | 0x400);
        }
        iVar7 = *(int *)(uVar3 + 0x90);
        FUN_0048e5f0(iVar7,*(int *)(uVar3 + 0x7c));
        local_5c = *(undefined4 *)(iVar7 + 0x80);
      }
      local_20 = 0;
      DAT_00a530d0 = 0;
      _DAT_005430c0 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
      iVar7 = 0;
      do {
        uVar4 = puVar11[2];
        DAT_005430c4 = puVar11[4];
        DAT_00af30dc = puVar11[6];
        local_48 = puVar11[1];
        if ((int)DAT_00ecc424 <= (int)local_48) {
          local_48 = DAT_00ecc424;
        }
        local_4c = 0;
        iVar8 = iVar7;
        if (uVar4 != 0) {
          local_40 = 0;
          local_3c = 0;
          do {
            puVar9 = (undefined4 *)(DAT_005430c4 + local_3c);
            pfVar13 = (float *)(local_40 + DAT_00af30dc);
            (&DAT_00b6b0e8)[iVar8 * 8] = *puVar9;
            (&DAT_00b6b0ec)[iVar8 * 8] = puVar9[1];
            fVar1 = _DAT_004af768;
            if ((float)puVar9[2] != _DAT_004af768) {
              fVar1 = (_DAT_004af76c - (float)puVar9[2] * (float)(0x7f000000 - puVar9[2])) *
                      (float)(0x7f000000 - puVar9[2]);
            }
            if ((float)puVar9[2] == _DAT_005430c0) {
              (&DAT_00b6b0f0)[iVar8 * 8] = 0;
            }
            else {
              (&DAT_00b6b0f0)[iVar8 * 8] = _DAT_004af770 - fVar1 * _DAT_005430c0;
            }
            (&DAT_00b6b0f4)[iVar8 * 8] = fVar1;
            if ((uVar2 & 0x200) != 0) {
              if (DAT_00ec8578 < (float)puVar9[2]) {
                if ((float)puVar9[2] < DAT_00ec857c) {
                  (&DAT_00b6b0fc)[iVar8 * 8] =
                       (int)ROUND(ROUND((_DAT_004af770 -
                                        ((float)puVar9[2] - DAT_00ec8578) * _DAT_00ec8574) *
                                        _DAT_004af774)) << 0x18 | 0xffffff;
                }
                else {
                  (&DAT_00b6b0fc)[iVar8 * 8] = 0xffffff;
                }
              }
              else {
                (&DAT_00b6b0fc)[iVar8 * 8] = 0xffffffff;
              }
            }
            if ((int)local_48 < 1) {
LAB_0048e1cd:
              local_1c = 1.0;
              local_18 = 1.0;
              local_14 = 1.0;
              fVar1 = *(float *)(DAT_00af30dc + 0xc);
            }
            else if ((int)local_48 < 3) {
              local_14 = *pfVar13;
              local_18 = pfVar13[1];
              fVar1 = pfVar13[3];
              local_1c = pfVar13[2];
            }
            else {
              if (local_48 != 3) goto LAB_0048e1cd;
              local_14 = (float)puVar11[9] + *pfVar13;
              local_18 = (float)puVar11[10] + pfVar13[1];
              local_1c = (float)puVar11[0xb] + pfVar13[2];
              fVar1 = pfVar13[3];
              if (puVar11[0xc] != 0x3f800000) {
                fVar1 = fVar1 + (float)puVar11[0xc];
              }
            }
            if (_DAT_004af770 < local_14) {
              local_14 = 1.0;
            }
            if (_DAT_004af770 < local_18) {
              local_18 = 1.0;
            }
            if (_DAT_004af770 < local_1c) {
              local_1c = 1.0;
            }
            if (_DAT_004af770 < fVar1) {
              fVar1 = _DAT_004af770;
            }
            if ((uVar2 & 2) == 0) {
              (&DAT_00b6b0f8)[iVar8 * 8] =
                   (((int)ROUND(ROUND(local_14 * _DAT_004af774)) | 0xffffff00U) << 8 |
                   (int)ROUND(ROUND(local_18 * _DAT_004af774))) << 8 |
                   (int)ROUND(ROUND(local_1c * _DAT_004af774));
            }
            else {
              (&DAT_00b6b0f8)[iVar8 * 8] =
                   (((int)ROUND(ROUND(fVar1 * _DAT_004af774)) << 8 |
                    (int)ROUND(ROUND(local_14 * _DAT_004af774))) << 8 |
                   (int)ROUND(ROUND(local_18 * _DAT_004af774))) << 8 |
                   (int)ROUND(ROUND(local_1c * _DAT_004af774));
            }
            local_3c = local_3c + 0xc;
            local_40 = local_40 + 0x10;
            (&DAT_00b6b100)[iVar8 * 8] = *(float *)(puVar11[5] + local_4c * 8) + (float)puVar11[0xe]
            ;
            (&DAT_00b6b104)[iVar8 * 8] =
                 *(float *)(puVar11[5] + 4 + local_4c * 8) + (float)puVar11[0xf];
            iVar8 = DAT_00a530d0 + 1;
            local_4c = local_4c + 1;
            DAT_00a530d0 = iVar8;
          } while (local_4c < uVar4);
        }
        uVar4 = puVar11[2];
        sVar5 = (short)iVar7;
        if (uVar4 < 4) {
          *(short *)(&DAT_00af30e8 + local_20 * 2) = sVar5;
          *(short *)(&DAT_00af30ea + local_20 * 2) = sVar5 + 1;
          *(short *)(&DAT_00af30ec + local_20 * 2) = sVar5 + 2;
          local_20 = local_20 + 3;
        }
        else {
          iVar7 = uVar4 - 2;
          iVar10 = 0;
          local_50 = uVar4 - 1;
          local_40 = 1;
          local_3c = 0;
          if (0 < iVar7) {
            iVar14 = iVar7 * 3 + local_20;
            psVar6 = (short *)(&DAT_00af30ea + local_20 * 2);
            do {
              psVar6[-1] = (short)iVar10 + sVar5;
              *psVar6 = (short)local_40 + sVar5;
              psVar6[1] = (short)local_50 + sVar5;
              psVar6 = psVar6 + 3;
              if ((~local_3c & 1) == 0) {
                iVar10 = local_50;
                local_50 = local_50 + -1;
              }
              else {
                iVar10 = local_40;
                local_40 = local_40 + 1;
              }
              local_3c = local_3c + 1;
              local_20 = iVar14;
            } while ((int)local_3c < iVar7);
          }
        }
        puVar12 = puVar11 + 0x10;
        local_2c = local_2c + 1;
      } while ((((puVar11[0x12] * 3 + -6 + local_20 < DAT_0052e624) && (local_2c < param_1)) &&
               (uVar3 == puVar11[0x17])) && (iVar7 = iVar8, puVar11 = puVar12, uVar2 == *puVar12));
      FUN_0048a350(local_5c,param_2,&DAT_00b6b0e8,iVar8,&DAT_00af30e8,local_20);
      puVar11 = puVar12;
    } while (local_2c < param_1);
  }
  return;
}

