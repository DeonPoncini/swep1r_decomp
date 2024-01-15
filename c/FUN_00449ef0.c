#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449ef0(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  bool bVar15;
  float *pfVar16;
  float *pfVar17;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (DAT_004eb450 != 0) {
    if (DAT_0050d550 != 0) {
      _DAT_0050c678 = DAT_0050c668;
      _DAT_0050c67c = DAT_0050c66c;
      _DAT_0050c680 = DAT_0050c670;
      FUN_004292b0(&DAT_0050c638);
    }
    bVar15 = DAT_0050c684 != DAT_0050c688;
    if (bVar15) {
      DAT_0050c684 = DAT_0050c688;
    }
    local_30 = (uint)bVar15;
    if (DAT_004eb454 < 1) {
      DAT_004eb454 = 0;
    }
    else {
      DAT_004eb454 = DAT_004eb454 + -1;
    }
    local_38 = 0;
    do {
      iVar10 = local_38 * 0x44;
      piVar11 = (int *)(&DAT_00e67e40 + iVar10);
      if ((((-1 < *(int *)(&DAT_00e67e40 + iVar10)) && (*(int *)(&DAT_00e67e68 + iVar10) == 0)) &&
          (DAT_004eb454 != 0)) &&
         (iVar6 = FUN_00422a90((&DAT_00e67e44)[local_38 * 0x11]),
         *(int *)(iVar6 + 0x48) != (&DAT_00e67e60)[local_38 * 0x11])) {
        FUN_00449e00(piVar11);
      }
      if ((&DAT_00e67c40)[local_38 * 0x11] != 0) {
        local_34 = __ftol();
        *(uint *)(&DAT_00e67c38 + iVar10) = local_34;
        if (_DAT_004acba0 < (double)local_34) {
          FUN_00484d90((&DAT_00e67c40)[local_38 * 0x11],(float)local_34 * _DAT_004acba8);
        }
        else {
          FUN_00485070((&DAT_00e67c40)[local_38 * 0x11]);
          if ((&DAT_00e67c44)[local_38 * 0x11] != 0) {
            FUN_004850a0((&DAT_00e67c40)[local_38 * 0x11]);
          }
          (&DAT_00e67c40)[local_38 * 0x11] = 0;
          (&DAT_00e67c44)[local_38 * 0x11] = 1;
        }
      }
      if ((((&DAT_00e68068)[local_38 * 0x11] != 0) &&
          ((&DAT_00e6806c)[local_38 * 0x11] != DAT_00e22a30)) &&
         ((&DAT_00e6806c)[local_38 * 0x11] != DAT_00e22a30 + -1)) {
        iVar6 = __ftol();
        local_28 = (double)CONCAT44(local_28._4_4_,iVar6);
        (&DAT_00e68078)[local_38 * 0x11] = iVar6;
        if ((double)iVar6 <= _DAT_004acba0) {
          (&DAT_00e68078)[local_38 * 0x11] = 0;
          FUN_00449e00(&DAT_00e68060 + local_38 * 0x11);
        }
      }
      if (*piVar11 != -1) {
        uVar2 = (&DAT_00e67e60)[local_38 * 0x11];
        iVar6 = FUN_004850c0(uVar2,0);
        if (iVar6 == 0) {
          if ((&DAT_00e68060)[local_38 * 0x11] == *piVar11) {
            FUN_00449e00(&DAT_00e68060 + local_38 * 0x11);
          }
          iVar6 = FUN_00422a90((&DAT_00e67e44)[local_38 * 0x11]);
          if (((*(byte *)(iVar6 + 0x24) & 8) == 0) && (*(int *)(&DAT_00e67e68 + iVar10) != 0)) {
            FUN_004850a0(uVar2);
          }
          FUN_00449e00(piVar11);
        }
        else if ((*(int *)(&DAT_00e67e78 + iVar10) != 0) &&
                (uVar8 = FUN_00485040(uVar2), (uVar8 & 0x20) == 0)) {
          FUN_00484e10(uVar2,*(undefined4 *)(&DAT_00e67e78 + iVar10));
          if (DAT_004b6d18 == 0) {
            pfVar17 = (float *)&DAT_0050c690;
          }
          else {
            local_c = (float)_DAT_004acbb8 / (float)_DAT_00e22a40;
            pfVar16 = *(float **)(&DAT_00e67e78 + iVar10);
            pfVar17 = &local_14;
            local_28 = (double)local_c;
            local_14 = (*pfVar16 - *(float *)(&DAT_00e67e6c + iVar10)) * local_c;
            local_10 = (pfVar16[1] - *(float *)(&DAT_00e67e70 + iVar10)) * local_c;
            local_c = (pfVar16[2] - *(float *)(&DAT_00e67e74 + iVar10)) * local_c;
          }
          FUN_00484e40(uVar2,pfVar17);
          *(undefined4 *)(&DAT_00e67e6c + iVar10) = **(undefined4 **)(&DAT_00e67e78 + iVar10);
          *(undefined4 *)(&DAT_00e67e70 + iVar10) =
               *(undefined4 *)(*(int *)(&DAT_00e67e78 + iVar10) + 4);
          uVar2 = *(undefined4 *)(*(int *)(&DAT_00e67e78 + iVar10) + 8);
          *(undefined4 *)(&DAT_00e67e74 + iVar10) = uVar2;
          uVar3 = *(undefined4 *)(&DAT_00e67e70 + iVar10);
          (&DAT_00e6808c)[local_38 * 0x11] = *(undefined4 *)(&DAT_00e67e6c + iVar10);
          (&DAT_00e68090)[local_38 * 0x11] = uVar3;
          (&DAT_00e68094)[local_38 * 0x11] = uVar2;
        }
      }
      iVar6 = *piVar11;
      if ((&DAT_00e68060)[local_38 * 0x11] == iVar6) {
        if (-1 < iVar6) {
          uVar2 = (&DAT_00e67e60)[local_38 * 0x11];
          if ((local_30 != 0) && (DAT_004eb460 != 0)) {
            iVar6 = FUN_00422a90((&DAT_00e67e44)[local_38 * 0x11]);
            local_28 = (double)CONCAT44(local_28._4_4_,iVar6);
            if ((*(byte *)(iVar6 + 0x24) & 8) == 0) {
              local_34 = (uint)(DAT_0050c688 != '\0');
              iVar7 = FUN_00422e30(iVar6,0,&local_34);
              if (local_34 == (DAT_0050c688 != '\0')) {
                piVar13 = (int *)(&DAT_00e67c20 + iVar10);
                for (iVar9 = 0x11; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *piVar13 = *piVar11;
                  piVar11 = piVar11 + 1;
                  piVar13 = piVar13 + 1;
                }
                (&DAT_00e67c44)[local_38 * 0x11] =
                     (uint)((&DAT_00e67c40)[local_38 * 0x11] != *(int *)(iVar6 + 0x48));
                (&DAT_00e68080)[local_38 * 0x11] = iVar7;
                *(uint *)(&DAT_00e68088 + iVar10) = (uint)(iVar7 != *(int *)(iVar6 + 0x48));
                goto LAB_0044a671;
              }
              if (iVar7 != *(int *)(iVar6 + 0x48)) {
                FUN_004850a0(iVar7);
              }
            }
          }
          iVar6 = (&DAT_00e68078)[local_38 * 0x11];
          local_28 = (double)CONCAT44(local_28._4_4_,*(int *)(&DAT_00e67e58 + iVar10));
          if (*(int *)(&DAT_00e67e58 + iVar10) != iVar6) {
            if (*(int *)(&DAT_00e67e48 + iVar10) == 0) {
LAB_0044a394:
              *(int *)(&DAT_00e67e58 + iVar10) = iVar6;
            }
            else if ((*(int *)(&DAT_00e67e4c + iVar10) != DAT_00e22a30) &&
                    (*(int *)(&DAT_00e67e4c + iVar10) != DAT_00e22a30 + -1)) {
              iVar7 = __ftol();
              *(int *)(&DAT_00e67e58 + iVar10) = iVar7;
              if (iVar6 < iVar7) goto LAB_0044a394;
            }
            FUN_00484d90(uVar2,(float)*(int *)(&DAT_00e67e58 + iVar10) * _DAT_004acba8);
          }
          if (*(float *)(&DAT_00e67e54 + iVar10) != (float)(&DAT_00e68074)[local_38 * 0x11]) {
            iVar6 = FUN_00422a90((&DAT_00e67e44)[local_38 * 0x11]);
            if ((float)_DAT_004acbc8 <= (float)(&DAT_00e68074)[local_38 * 0x11]) {
              fVar1 = (float)(&DAT_00e68074)[local_38 * 0x11];
            }
            else {
              fVar1 = (float)_DAT_004acbc8;
            }
            FUN_00484dd0(uVar2,*(undefined4 *)(iVar6 + 0x2c),fVar1 + fVar1);
            *(undefined4 *)(&DAT_00e67e54 + iVar10) = (&DAT_00e68074)[local_38 * 0x11];
          }
          sVar5 = (&DAT_00e6807c)[local_38 * 0x22];
          if (*(short *)(&DAT_00e67e5c + iVar10) != sVar5) {
            if (sVar5 != -999) {
              local_28 = (double)CONCAT44(local_28._4_4_,(int)sVar5);
              FUN_00484c30(uVar2,((float)(int)sVar5 - _DAT_004acbd8) * _DAT_004acbdc);
              uVar8 = FUN_00485040(uVar2);
              if ((uVar8 & 0x20) == 0) {
                FUN_00485020(uVar2,0x20);
              }
            }
            sVar5 = (&DAT_00e6807c)[local_38 * 0x22];
            *(short *)(&DAT_00e67e5c + iVar10) = sVar5;
          }
          if ((sVar5 == -999) &&
             (((uVar8 = FUN_00485040(uVar2), (uVar8 & 0x20) != 0 ||
               (*(float *)(&DAT_00e67e6c + iVar10) != (float)(&DAT_00e6808c)[local_38 * 0x11])) ||
              ((*(float *)(&DAT_00e67e70 + iVar10) != (float)(&DAT_00e68090)[local_38 * 0x11] ||
               (*(float *)(&DAT_00e67e74 + iVar10) != (float)(&DAT_00e68094)[local_38 * 0x11]))))))
          {
            FUN_00485020(uVar2,0);
            pfVar17 = (float *)(&DAT_00e6808c + local_38 * 0x11);
            FUN_00484e10(uVar2,pfVar17);
            if ((&DAT_00e68068)[local_38 * 0x11] != 0) {
              if (DAT_004b6d18 == 0) {
                pfVar16 = (float *)&DAT_0050c690;
              }
              else {
                local_18 = (float)_DAT_004acbb8 / (float)_DAT_00e22a40;
                pfVar16 = &local_20;
                local_28 = (double)local_18;
                local_20 = (*pfVar17 - *(float *)(&DAT_00e67e6c + iVar10)) * local_18;
                local_1c = ((float)(&DAT_00e68090)[local_38 * 0x11] -
                           *(float *)(&DAT_00e67e70 + iVar10)) * local_18;
                local_18 = ((float)(&DAT_00e68094)[local_38 * 0x11] -
                           *(float *)(&DAT_00e67e74 + iVar10)) * local_18;
              }
              FUN_00484e40(uVar2,pfVar16);
            }
            uVar2 = (&DAT_00e68090)[local_38 * 0x11];
            uVar3 = (&DAT_00e68094)[local_38 * 0x11];
            *(float *)(&DAT_00e67e6c + iVar10) = *pfVar17;
            *(undefined4 *)(&DAT_00e67e70 + iVar10) = uVar2;
            *(undefined4 *)(&DAT_00e67e74 + iVar10) = uVar3;
          }
        }
      }
      else if (iVar6 == -1) {
        iVar6 = (&DAT_00e68064)[local_38 * 0x11];
        if ((iVar6 != -1) && ((&DAT_00e68060)[local_38 * 0x11] = iVar6, iVar6 != -1)) {
          if ((DAT_0050c688 == '\0') || (local_2c = 1, DAT_004eb460 == 0)) {
            local_2c = 0;
          }
          iVar6 = FUN_00422a90((&DAT_00e68064)[local_38 * 0x11]);
          local_28 = (double)CONCAT44(local_28._4_4_,iVar6);
          iVar7 = FUN_00422e30(iVar6,(&DAT_00e68068)[local_38 * 0x11],&local_2c);
          (&DAT_00e68080)[local_38 * 0x11] = iVar7;
          *(uint *)(&DAT_00e68088 + iVar10) = (uint)(iVar7 != *(int *)(iVar6 + 0x48));
LAB_0044a671:
          fVar1 = (float)(&DAT_00e68074)[local_38 * 0x11];
          fVar4 = (float)_DAT_004acbc8;
          piVar11 = (int *)(&DAT_00e68080)[local_38 * 0x11];
          puVar12 = &DAT_00e68060 + local_38 * 0x11;
          puVar14 = (undefined4 *)(&DAT_00e67e40 + iVar10);
          for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          }
          if (fVar4 <= fVar1) {
            fVar1 = (float)(&DAT_00e68074)[local_38 * 0x11];
          }
          else {
            fVar1 = (float)_DAT_004acbc8;
          }
          FUN_00484dd0(piVar11,*(undefined4 *)((int)local_28 + 0x2c),fVar1 + fVar1);
          if ((&DAT_00e68068)[local_38 * 0x11] != 0) {
            iVar7 = __ftol();
            iVar6 = (&DAT_00e68078)[local_38 * 0x11];
            *(int *)(&DAT_00e67e58 + iVar10) = iVar7;
            if (iVar6 < iVar7) {
              *(int *)(&DAT_00e67e58 + iVar10) = iVar6;
            }
          }
          FUN_00484d90(piVar11,(float)*(int *)(&DAT_00e67e58 + iVar10) * _DAT_004acba8);
          sVar5 = (&DAT_00e6807c)[local_38 * 0x22];
          if (sVar5 != -999) {
            local_28 = (double)CONCAT44(local_28._4_4_,(int)sVar5);
            FUN_00484c30(piVar11,((float)(int)sVar5 - (float)_DAT_004acbe8) * _DAT_004acbdc);
          }
          if ((&DAT_00e6807c)[local_38 * 0x22] == -999) {
            FUN_00485020(piVar11,0);
            (**(code **)(*piVar11 + 0xf4))(piVar11,0);
            FUN_00484df0(piVar11,(float)(&DAT_00e680a0)[local_38 * 0x11] * (float)_DAT_004acbf0,
                         (float)(&DAT_00e6809c)[local_38 * 0x11] * (float)_DAT_004acbf0);
            FUN_00484e10(piVar11,&DAT_00e6808c + local_38 * 0x11);
            if ((&DAT_00e68068)[local_38 * 0x11] != 0) {
              FUN_00484e40(piVar11,&DAT_0050c690);
            }
            if ((int)(&DAT_00e68064)[local_38 * 0x11] < DAT_00e9f360) {
              if ((DAT_00e2899c == 0) ||
                 (((iVar10 = *(int *)(DAT_00e2899c + 0x84),
                   (float)(&DAT_00e6808c)[local_38 * 0x11] == *(float *)(iVar10 + 0x50) &&
                   ((float)(&DAT_00e68090)[local_38 * 0x11] == *(float *)(iVar10 + 0x54))) &&
                  ((float)(&DAT_00e68094)[local_38 * 0x11] == *(float *)(iVar10 + 0x58))))) {
                (**(code **)(*piVar11 + 0xb0))(piVar11,0);
              }
              else {
                (**(code **)(*piVar11 + 0xb0))(piVar11,0x3f800000);
              }
            }
            else {
              (**(code **)(*piVar11 + 0xb0))(piVar11,0);
            }
          }
          else {
            FUN_00485020(piVar11,0x20);
          }
          FUN_00484be0(piVar11,(&DAT_00e68068)[local_38 * 0x11]);
        }
      }
      else if (*(int *)(&DAT_00e67e50 + iVar10) != 0) {
        uVar2 = (&DAT_00e67e60)[local_38 * 0x11];
        iVar6 = FUN_00422a90((&DAT_00e67e44)[local_38 * 0x11]);
        if (((*(byte *)(iVar6 + 0x24) & 8) == 0) || (iVar6 = FUN_00423190(iVar6), iVar6 != 0)) {
          FUN_00485070(uVar2);
        }
        *(undefined4 *)(&DAT_00e67e50 + iVar10) = 0;
      }
      local_38 = local_38 + 1;
    } while (local_38 < 8);
    if (DAT_0050d550 != 0) {
      if (DAT_004b6d18 == 0) {
        pfVar17 = (float *)&DAT_0050c690;
      }
      else {
        local_18 = (float)_DAT_004acbb8 / (float)_DAT_00e22a40;
        pfVar17 = &local_20;
        local_28 = (double)local_18;
        local_20 = (DAT_0050c668 - _DAT_0050c678) * local_18;
        local_1c = (DAT_0050c66c - _DAT_0050c67c) * local_18;
        local_18 = (DAT_0050c670 - _DAT_0050c680) * local_18;
      }
      FUN_00484f10(pfVar17);
      FUN_00484f40(&DAT_0050c668,&DAT_0050c648,&DAT_0050c658);
    }
    FUN_00484fa0();
  }
  return;
}

