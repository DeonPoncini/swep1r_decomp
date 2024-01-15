#include "prototype.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f230(int param_1)

{
  int iVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  int local_640;
  int local_638;
  float local_634;
  float local_630;
  float local_62c;
  undefined4 local_628;
  undefined local_624 [16];
  float local_614;
  float local_610;
  float local_608;
  float local_604;
  undefined4 local_600;
  int local_5fc;
  float local_5f4;
  undefined local_5f0 [1520];
  
  iVar13 = 0;
  local_5fc = 0;
  if (DAT_0050ca18 != 0) {
    if (DAT_0050ca18 < 2) {
      if (4 < *(int *)(param_1 + 0x124)) {
        *(undefined4 *)(param_1 + 0x124) = 2;
      }
    }
    else if (*(int *)(param_1 + 0x124) < 4) {
      *(undefined4 *)(param_1 + 0x124) = 5;
    }
    iVar12 = *(int *)(param_1 + 0x124);
    if (iVar12 == 0) {
      iVar12 = *(int *)(param_1 + 0x1bc);
      local_634 = 0.0;
      if (1 < iVar12) {
        if (0 < iVar12) {
          puVar8 = (uint *)(DAT_00e28960 + 8);
          do {
            if ((((*puVar8 & 1) != 0) && ((*puVar8 & 2) == 0)) && (puVar8[-1] == 0x4c6f636c)) {
              local_634 = *(float *)(puVar8[0x1f] + 0xe0);
            }
            puVar8 = puVar8 + 0x22;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        fVar14 = (float10)FUN_0047e870();
        if (((float10)_DAT_004ad218 < fVar14) && (0 < *(int *)(param_1 + 0x1bc))) {
          iVar12 = 0x2b;
          do {
            iVar1 = DAT_00e28960 + iVar13;
            if ((((float)_DAT_004ad278 < (float)fVar14) && ((*(uint *)(iVar1 + 8) & 1) != 0)) &&
               ((*(uint *)(iVar1 + 8) & 2) == 0)) {
              fVar4 = local_634 - *(float *)(*(int *)(iVar1 + 0x84) + 0xe0);
              if (_DAT_004ad228 < fVar4) {
                fVar4 = fVar4 - _DAT_004ad22c;
              }
              if (fVar4 < _DAT_004ad280) {
                fVar4 = fVar4 - _DAT_004ad224;
              }
              fVar4 = fVar4 * (float)fVar14 * _DAT_004ad284 - _DAT_004ad288;
              if (((**(int **)(iVar1 + 0x18) != -1) && (fVar4 <= _DAT_004ad28c)) &&
                 (_DAT_004ad290 <= fVar4)) {
                if (iVar1 == DAT_00e2899c) {
                  FUN_004285d0(iVar12,1);
                  uVar9 = __ftol();
                  FUN_00428660(iVar12,0x112,uVar9);
                  FUN_004286f0(iVar12,0x3f400000,0x3f400000);
                  uVar9 = 0xffffffdc;
                }
                else {
                  FUN_004285d0(iVar12,1);
                  uVar9 = __ftol();
                  FUN_00428660(iVar12,0x114,uVar9);
                  FUN_004286f0(iVar12,0x3f000000,0x3f000000);
                  uVar9 = 0xffffff80;
                }
                FUN_00428740(iVar12,0xffffffff,0xffffffff,0xffffffff,uVar9);
                sVar2 = *(short *)(iVar1 + 0x5c);
                if (0 < sVar2) {
                  if (iVar1 == DAT_00e2899c) {
                    FUN_0049eb80(local_624,s__f4_s_d_004c6dd4,(int)sVar2);
                    uVar9 = 0;
                  }
                  else {
                    FUN_0049eb80(local_624,s__f4_s_d_004c6dd4,(int)sVar2);
                    uVar9 = 0xffffffff;
                  }
                  uVar9 = __ftol(0xffffffff,0xffffffff,uVar9,0xffffffff,local_624);
                  FUN_00450530(0x11c,uVar9);
                }
              }
            }
            iVar13 = iVar13 + 0x88;
            iVar1 = iVar12 + -0x2a;
            iVar12 = iVar12 + 1;
          } while (iVar1 < *(int *)(param_1 + 0x1bc));
        }
      }
    }
    else if (iVar12 == 1) {
      if (0 < *(int *)(param_1 + 0x1bc)) {
        local_638 = 0;
        iVar13 = 0x2b;
        do {
          iVar12 = DAT_00e28960 + local_638;
          uVar10 = *(uint *)(DAT_00e28960 + 8 + local_638);
          if ((((uVar10 & 1) != 0) && ((uVar10 & 2) == 0)) && (**(int **)(iVar12 + 0x18) != -1)) {
            FUN_00428740(iVar13,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
            FUN_004285d0(iVar13,1);
            uVar7 = __ftol();
            uVar10 = (uint)uVar7;
            uVar7 = __ftol();
            uVar11 = (uint)uVar7;
            FUN_00428660(iVar13,uVar11,uVar10);
            FUN_004286f0(iVar13,0x3f800000,0x3f800000);
            if ((1 < *(int *)(param_1 + 0x1bc)) && (sVar2 = *(short *)(iVar12 + 0x5c), 0 < sVar2)) {
              if (iVar12 == DAT_00e2899c) {
                FUN_0049eb80(local_624,s__f3_o_d_004c6dcc,(int)sVar2);
                puVar18 = local_624;
                uVar17 = 0xffffffff;
                uVar16 = 0;
                uVar15 = 0xffffffff;
                uVar9 = 0xffffffff;
                uVar10 = __ftol(0xffffffff,0xffffffff,0,0xffffffff,puVar18);
                uVar11 = __ftol(uVar10);
              }
              else {
                FUN_0049eb80(local_624,s__f4_o_d_004c6dc4,(int)sVar2);
                puVar18 = local_624;
                uVar17 = 0xffffffff;
                uVar16 = 0xffffffff;
                uVar15 = 0xffffffff;
                uVar9 = 0xffffffff;
              }
              FUN_00450530(uVar11,uVar10,uVar9,uVar15,uVar16,uVar17,puVar18);
            }
          }
          local_638 = local_638 + 0x88;
          iVar12 = iVar13 + -0x2a;
          iVar13 = iVar13 + 1;
        } while (iVar12 < *(int *)(param_1 + 0x1bc));
      }
    }
    else if ((iVar12 == 2) || (iVar12 == 3)) {
      local_600 = DAT_00dfb254;
      local_608 = DAT_00dfb24c;
      local_604 = DAT_00dfb250;
      local_5fc = 1;
      local_630 = DAT_00dfb22c;
      local_62c = DAT_00dfb230;
      local_628 = 0;
      FUN_0042f9b0(&local_630);
      local_610 = -local_630;
      local_614 = local_62c;
      if (*(int *)(param_1 + 0x124) == 2) {
        local_634 = _DAT_004ad238;
        if ((*(int *)(param_1 + 0x1ac) == 1) && (*(int *)(param_1 + 0x1c0) == 3)) {
          local_640 = 0x40400000;
        }
        else {
          local_640 = 0x40a00000;
        }
      }
      else {
        local_640 = 0x41000000;
        local_634 = _DAT_004ad2f4;
      }
      fVar4 = local_634;
      if ((DAT_00e996dc & 0x4000) != 0) {
        fVar4 = -local_634;
      }
      iVar13 = FUN_00480170(*(undefined4 *)(param_1 + 0x2c),&local_608,local_634,0xaa,local_5f0,
                            local_640);
      if (0 < iVar13) {
        if (0xaa < iVar13) {
          iVar13 = 0xaa;
        }
        if (0 < iVar13) {
          do {
            uVar9 = __ftol();
            uVar9 = __ftol(uVar9);
            FUN_0044fef0(0,uVar9);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      local_640 = 0;
      do {
        fVar3 = ((float)local_640 - _DAT_004ad308) * local_634 * _DAT_004ad30c;
        local_5f4 = (fVar3 * *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xd8)) - local_604;
        fVar6 = (((fVar3 * *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xd4)) - local_608) *
                _DAT_004ad2fc) / fVar4;
        fVar3 = (local_5f4 * _DAT_004ad2fc) / local_634;
        fVar5 = fVar3 * local_610 + fVar6 * local_614;
        fVar3 = fVar6 * local_630 + fVar3 * local_62c;
        if ((((fVar5 < _DAT_004ad2fc) && (-fVar5 < _DAT_004ad2fc)) && (fVar3 < _DAT_004ad2fc)) &&
           (-fVar3 < _DAT_004ad2fc)) {
          uVar9 = __ftol();
          uVar9 = __ftol(uVar9);
          FUN_0044fef0(1,uVar9);
        }
        local_640 = local_640 + 1;
      } while (local_640 < 4);
      iVar13 = 0;
      if (0 < *(int *)(param_1 + 0x1bc)) {
        iVar12 = 0;
        do {
          iVar1 = DAT_00e28960 + iVar12;
          if (((iVar1 != DAT_00e2899c) && ((*(uint *)(iVar1 + 8) & 1) != 0)) &&
             ((*(uint *)(iVar1 + 8) & 2) == 0)) {
            fVar6 = ((*(float *)(*(int *)(iVar1 + 0x84) + 0x50) - local_608) * _DAT_004ad2fc) /
                    fVar4;
            fVar3 = ((*(float *)(*(int *)(iVar1 + 0x84) + 0x54) - local_604) * _DAT_004ad2fc) /
                    local_634;
            fVar5 = fVar3 * local_610 + fVar6 * local_614;
            fVar3 = fVar6 * local_630 + fVar3 * local_62c;
            if (((fVar5 < _DAT_004ad2fc) && (-fVar5 < _DAT_004ad2fc)) &&
               ((fVar3 < _DAT_004ad2fc && (-fVar3 < _DAT_004ad2fc)))) {
              if (*(int *)(param_1 + 0x124) == 2) {
                uVar9 = __ftol();
                uVar9 = __ftol(uVar9);
                uVar15 = 2;
              }
              else {
                uVar9 = __ftol();
                uVar9 = __ftol(uVar9);
                uVar15 = 3;
              }
              FUN_0044fef0(uVar15,uVar9);
            }
          }
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + 0x88;
        } while (iVar13 < *(int *)(param_1 + 0x1bc));
      }
      if ((DAT_00e2899c != 0) && ((*(byte *)(DAT_00e2899c + 8) & 1) != 0)) {
        fVar4 = ((*(float *)(*(int *)(DAT_00e2899c + 0x84) + 0x50) - local_608) * _DAT_004ad2fc) /
                fVar4;
        local_634 = ((*(float *)(*(int *)(DAT_00e2899c + 0x84) + 0x54) - local_604) * _DAT_004ad2fc)
                    / local_634;
        fVar3 = local_634 * local_610 + fVar4 * local_614;
        fVar4 = fVar4 * local_630 + local_634 * local_62c;
        if ((fVar3 < _DAT_004ad2fc) &&
           (((-fVar3 < _DAT_004ad2fc && (fVar4 < _DAT_004ad2fc)) && (-fVar4 < _DAT_004ad2fc)))) {
          uVar9 = __ftol();
          uVar9 = __ftol(uVar9);
          FUN_0044fef0(4,uVar9);
        }
      }
    }
    else if ((((iVar12 != 4) && (iVar12 != 6)) && ((iVar12 == 5 || (iVar12 == 7)))) &&
            (0 < *(int *)(param_1 + 0x1bc))) {
      iVar12 = 0;
      iVar13 = 0x2b;
      do {
        uVar10 = *(uint *)(DAT_00e28960 + 8 + iVar12);
        iVar1 = DAT_00e28960 + iVar12;
        if (((uVar10 & 1) != 0) && ((uVar10 & 2) == 0)) {
          FUN_0045d410(iVar1);
          if ((**(int **)(iVar1 + 0x18) != -1) &&
             ((*(uint *)(*(int *)(iVar1 + 0x84) + 100) & 0x4040000) == 0)) {
            FUN_004285d0(iVar13,1);
            uVar9 = __ftol();
            uVar9 = __ftol(uVar9);
            FUN_00428660(iVar13,uVar9);
            FUN_004286f0(iVar13,0x3f800000,0x3f800000);
          }
          sVar2 = *(short *)(iVar1 + 0x5c);
          if (0 < sVar2) {
            if (iVar1 == DAT_00e2899c) {
              FUN_0049eb80(local_624,s__f3_o_d_004c6dcc,(int)sVar2);
              uVar9 = __ftol(0xffffffff,0xffffffff,0,0xffffffff,local_624);
            }
            else if (iVar1 == DAT_00e27820) {
              FUN_0049eb80(local_624,s__f3_o_d_004c6dcc,(int)sVar2);
              uVar9 = __ftol(0,0xffffffff,0xffffffff,0xffffffff,local_624);
            }
            else {
              FUN_0049eb80(local_624,s__f3_o_d_004c6dcc,(int)sVar2);
              uVar9 = __ftol(0xffffffbe,0xffffffbe,0xffffffbe,0xffffffff,local_624);
            }
            uVar9 = __ftol(uVar9);
            FUN_00450530(uVar9);
          }
        }
        iVar12 = iVar12 + 0x88;
        iVar1 = iVar13 + -0x2a;
        iVar13 = iVar13 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x1bc));
    }
    fVar4 = (float)_DAT_00e22a40;
    if (local_5fc == 0) {
      DAT_004c5298 = DAT_004c5298 - (fVar4 + fVar4);
      if (DAT_004c5298 < _DAT_004ad218) {
        DAT_004c5298 = 0.0;
      }
    }
    else {
      DAT_004c5298 = DAT_004c5298 - fVar4 * (float)_DAT_004ad310;
      if (_DAT_004ad22c < DAT_004c5298) {
        DAT_004c5298 = 1.0;
        return;
      }
    }
  }
  return;
}

