#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00474d80(float param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_20;
  uint local_18 [6];
  
  iVar8 = (int)param_1;
  iVar6 = *param_2;
  local_20 = 0xffffffff;
  if (iVar6 < 0x46726566) {
    if (iVar6 == 0x46726565) {
      return 1;
    }
    if (iVar6 != 0x416c6f63) {
      return 0;
    }
    return 1;
  }
  if (0x48697474 < iVar6) {
    if (iVar6 < 0x5165727a) {
      if (iVar6 != 0x51657279) {
        if (iVar6 != 0x4c6f6164) {
          return 0;
        }
        FUN_00450e30(param_1);
        return 1;
      }
      piVar10 = param_2 + 1;
      if (param_2[1] == 0x51657279) {
        return 1;
      }
      do {
        piVar3 = (int *)piVar10[1];
        if ((*piVar10 == 0x3173743f) && (*(short *)(*(int *)((int)param_1 + 0x1e70) + 0x5c) == 1)) {
          *piVar3 = (int)param_1;
        }
        if ((*piVar10 == 0x326e643f) && (*(short *)(*(int *)((int)param_1 + 0x1e70) + 0x5c) == 2)) {
          *piVar3 = (int)param_1;
        }
        if ((*piVar10 == 0x3372643f) && (*(short *)(*(int *)((int)param_1 + 0x1e70) + 0x5c) == 3)) {
          *piVar3 = (int)param_1;
        }
        if (*piVar10 == 0x43616d50) {
          FUN_00473e40(piVar10[1],param_1);
        }
        piVar3 = piVar10 + 2;
        piVar10 = piVar10 + 2;
      } while (*piVar3 != 0x51657279);
      return 1;
    }
    if (iVar6 < 0x526d436f) {
      if (iVar6 != 0x526d436e) {
        if (iVar6 != 0x52536574) {
          return 0;
        }
        FUN_00450e30(param_1);
        return 1;
      }
      if ((*(byte *)((int)param_1 + 0x60) & 0x40) == 0) {
        return 1;
      }
      if (*(int *)((int)param_1 + 0x1eb4) != param_2[1]) {
        return 1;
      }
      *(undefined4 *)((int)param_1 + 0x1eb8) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)((int)param_1 + 0x1ebc) = *(undefined4 *)(param_3 + 0xc);
      *(int *)((int)param_1 + 0x1ec0) = param_2[4];
      return 1;
    }
    if (iVar6 < 0x526d4c64) {
      if (iVar6 == 0x526d4c63) {
        if ((*(byte *)((int)param_1 + 0x60) & 0x40) == 0) {
          return 1;
        }
        if (*(int *)((int)param_1 + 0x1eb4) != param_2[1]) {
          return 1;
        }
        puVar11 = (undefined4 *)(param_3 + 8);
        puVar13 = (undefined4 *)((int)param_1 + 0x1ecc);
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        return 1;
      }
      if (iVar6 != 0x526d4869) {
        return 0;
      }
      if ((*(byte *)((int)param_1 + 0x60) & 0x40) == 0) {
        return 1;
      }
      if (-1 < *(int *)((int)param_1 + 0x1eb4)) {
        return 1;
      }
      *(int *)((int)param_1 + 0x1eb4) = param_2[1];
      *(undefined4 *)((int)param_1 + 0x1ebc) = 0;
      *(undefined4 *)((int)param_1 + 0x1eb8) = 0;
      *(undefined4 *)((int)param_1 + 0x1ec0) = 0;
      puVar11 = (undefined4 *)((int)param_1 + 8);
      puVar13 = (undefined4 *)((int)param_1 + 0x1ecc);
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      return 2;
    }
    if (iVar6 == 0x526d5468) {
      if ((*(byte *)((int)param_1 + 0x60) & 0x40) == 0) {
        return 1;
      }
      if (*(int *)((int)param_1 + 0x1eb4) != param_2[1]) {
        return 1;
      }
      *(undefined4 *)((int)param_1 + 0x1ec8) = *(undefined4 *)(param_3 + 0xc);
      return 1;
    }
    if (iVar6 != 0x536e6170) {
      if (iVar6 != 0x734c4f44) {
        return 0;
      }
      iVar6 = *(int *)((int)param_1 + 0x344);
      if (iVar6 == 0) {
        return 1;
      }
      if ((*(byte *)((int)param_1 + 0x60) & 0x20) != 0) {
        iVar8 = param_2[1] * 0x20;
        FUN_00481b30(*(undefined4 *)(iVar6 + 0x14),&DAT_004c7ab8 + iVar8);
        puVar1 = &DAT_004c7abc + iVar8;
        FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 4),puVar1);
        FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 8),puVar1);
        FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 0xc),puVar1);
        FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 0x10),puVar1);
        return 1;
      }
      iVar8 = param_2[1] * 0x20;
      FUN_00481b30(*(undefined4 *)(iVar6 + 0x14),&DAT_004c7b38 + iVar8);
      puVar1 = &DAT_004c7b3c + iVar8;
      FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 4),puVar1);
      FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 8),puVar1);
      FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 0xc),puVar1);
      FUN_00481b30(*(undefined4 *)(*(int *)((int)param_1 + 0x344) + 0x10),puVar1);
      return 1;
    }
    iVar6 = param_2[1];
    if (iVar6 < 0) {
      FUN_00473f40(param_1,0xbdcccccd);
      return 1;
    }
    if (0 < iVar6) {
      if (1 < iVar6) {
        FUN_00473f40(param_1,0x3c23d70a);
        return 1;
      }
      FUN_00473f40(param_1,0x3dcccccd);
      return 1;
    }
    FUN_00473f40(param_1,0);
    return 1;
  }
  if (iVar6 != 0x48697474) {
    if (iVar6 != 0x476f2121) {
      return 0;
    }
    *(uint *)((int)param_1 + 0x60) = *(uint *)((int)param_1 + 0x60) & 0xfffffff2 | 2;
    return 1;
  }
  if (*(int *)((int)param_1 + 0x1e70) == 0) {
    return 1;
  }
  iVar6 = param_2[1];
  fVar2 = *(float *)(param_3 + 8);
  if ((*(uint *)((int)param_1 + 0x60) & 0x40000000) != 0) {
    fVar2 = fVar2 * _DAT_004adbfc;
  }
  fVar2 = fVar2 * _DAT_004adc00;
  if ((*(uint *)((int)param_1 + 0x60) & 0x20) != 0) {
    (&DAT_004c7ab0)[DAT_0050cb38] = (char)iVar6;
    *(float *)(&DAT_0050cb18 + DAT_0050cb38 * 4) = fVar2;
    DAT_0050cb38 = DAT_0050cb38 + 1;
    if (7 < DAT_0050cb38) {
      DAT_0050cb38 = 0;
    }
  }
  if (iVar6 < 0x426f746e) {
    if (iVar6 != 0x426f746d) {
      if (iVar6 != 0x42697473) {
        return 1;
      }
      *(undefined4 *)((int)param_1 + 0x324) = 0xffffffff;
      return 1;
    }
    param_1 = (float)__ftol();
    if (6 < (int)param_1) {
      param_1 = 8.407791e-45;
    }
    if ((int)param_1 < 1) {
      param_1 = 1.401298e-45;
    }
    *(undefined4 *)(iVar8 + 0x2b8) = 0x3f800000;
    if (0 < (int)param_1) {
      fVar4 = (float)(int)param_1;
      do {
        uVar5 = FUN_004816b0();
        FUN_00474cd0(iVar8,uVar5 % 6,fVar2 / fVar4);
        param_1 = (float)((int)param_1 + -1);
      } while (param_1 != 0.0);
    }
    if (_DAT_004adc08 <= (double)*(int *)(iVar8 + 0x1998)) {
      return 1;
    }
    iVar6 = FUN_004816b0();
    param_1 = *(float *)(iVar8 + 0x1a0) * _DAT_004adc14 - _DAT_004adc18;
    fVar2 = (float)iVar6 * _DAT_004adbac * _DAT_004adc10 - _DAT_004adbe8;
    if (_DAT_004adbdc < param_1) {
      param_1 = 1.0;
    }
    if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
      uVar14 = 0;
    }
    else {
      FUN_00409ee0(0x13,0xffffffff,0xffffffff,0xffffffff,0);
      uVar14 = DAT_004c7aa8;
    }
    FUN_00426d10(0x37,6,fVar2,param_1,iVar8 + 0x50,0,uVar14,0x41200000,0x43480000);
    if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
      return 1;
    }
    iVar6 = FUN_004816b0();
    if (_DAT_004adc1c <= (float)iVar6 * _DAT_004adbac) {
      return 1;
    }
    uVar18 = 8;
    uVar17 = 8;
    uVar16 = 7;
    uVar15 = 7;
    uVar14 = 7;
  }
  else {
    if (iVar6 < 0x4c744675) {
      if (iVar6 == 0x4c744674) goto LAB_0047537d;
      if (iVar6 != 0x4b506f77) {
        return 1;
      }
      iVar9 = 1;
      *(undefined4 *)((int)param_1 + 0x2b8) = 0x3f800000;
      param_1 = 1.401298e-45;
      local_18[0] = 3;
      iVar6 = FUN_004816b0();
      if ((float)iVar6 * _DAT_004adbac < (float)_DAT_004adbf0) {
        iVar9 = 2;
        local_18[1] = 0;
        param_1 = 2.802597e-45;
      }
      iVar6 = FUN_004816b0();
      if ((float)iVar6 * _DAT_004adbac < (float)_DAT_004adc20) {
        local_18[iVar9] = 4;
        iVar9 = iVar9 + 1;
        param_1 = (float)iVar9;
      }
      iVar6 = FUN_004816b0();
      if ((float)iVar6 * _DAT_004adbac < (float)_DAT_004adc20) {
        local_18[iVar9] = 1;
        iVar9 = iVar9 + 1;
        param_1 = (float)iVar9;
      }
      if (iVar9 != 0) {
        puVar12 = local_18;
        do {
          FUN_00474cd0(iVar8,*puVar12,fVar2 / (float)(int)param_1);
          puVar12 = puVar12 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (_DAT_004adc08 <= (double)*(int *)(iVar8 + 0x1998)) {
        return 1;
      }
      iVar6 = FUN_004816b0();
      param_1 = *(float *)(iVar8 + 0x1a0) * _DAT_004adc14 - _DAT_004adc18;
      fVar2 = (float)iVar6 * _DAT_004adbac * _DAT_004adc10 - _DAT_004adbe8;
      if (_DAT_004adbdc < param_1) {
        param_1 = 1.0;
      }
      if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
        uVar14 = 0;
      }
      else {
        FUN_00409ee0(0x14,0xffffffff,0,0xffffffff,0);
        uVar14 = DAT_004c7aa8;
      }
      FUN_00426d10(0x37,6,fVar2,param_1,iVar8 + 0x50,0,uVar14,0x41200000,0x43480000);
      if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
        return 1;
      }
      iVar6 = FUN_004816b0();
    }
    else {
      if (iVar6 < 0x52744675) {
        if ((iVar6 != 0x52744674) && (iVar6 != 0x4c745364)) {
          return 1;
        }
LAB_0047537d:
        *(undefined4 *)((int)param_1 + 0x2b8) = 0x3f800000;
        if (iVar6 == 0x52744674) {
          iVar9 = 1;
          local_18[0] = 3;
          param_1 = 1.401298e-45;
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * _DAT_004adbac < (float)_DAT_004adbf0) {
            iVar9 = 2;
            local_18[1] = 0;
            param_1 = 2.802597e-45;
          }
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * _DAT_004adbac < (float)_DAT_004adc20) {
            local_18[iVar9] = 4;
            iVar9 = iVar9 + 1;
            param_1 = (float)iVar9;
          }
          local_20 = 0x2d;
        }
        else if (iVar6 == 0x4c744674) {
          iVar9 = 1;
          local_18[0] = 0;
          param_1 = 1.401298e-45;
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * _DAT_004adbac < (float)_DAT_004adbf0) {
            iVar9 = 2;
            local_18[1] = 3;
            param_1 = 2.802597e-45;
          }
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * _DAT_004adbac < (float)_DAT_004adc20) {
            local_18[iVar9] = 1;
            iVar9 = iVar9 + 1;
            param_1 = (float)iVar9;
          }
          local_20 = 0x13b;
        }
        else if (iVar6 == 0x52745364) {
          iVar9 = 1;
          local_18[0] = 3;
          param_1 = 1.401298e-45;
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * _DAT_004adbac < (float)_DAT_004adbf0) {
            iVar9 = 2;
            local_18[1] = 4;
            param_1 = 2.802597e-45;
          }
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * _DAT_004adbac < (float)_DAT_004adc20) {
            local_18[iVar9] = 5;
            iVar9 = iVar9 + 1;
            param_1 = (float)iVar9;
          }
          local_20 = 0x5a;
        }
        else if (iVar6 == 0x4c745364) {
          iVar9 = 1;
          local_18[0] = 0;
          param_1 = 1.401298e-45;
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * _DAT_004adbac < (float)_DAT_004adbf0) {
            local_18[1] = 1;
            iVar9 = 2;
            param_1 = 2.802597e-45;
          }
          iVar7 = FUN_004816b0();
          if ((float)iVar7 * _DAT_004adbac < (float)_DAT_004adc20) {
            local_18[iVar9] = 2;
            iVar9 = iVar9 + 1;
            param_1 = (float)iVar9;
          }
          local_20 = 0x10e;
        }
        else {
          iVar9 = (int)param_1;
          if (iVar6 == 0x56684c74) {
            param_1 = 5.605194e-45;
            iVar9 = 4;
            puVar12 = local_18;
            do {
              uVar5 = FUN_004816b0();
              iVar9 = iVar9 + -1;
              *puVar12 = uVar5 % 6;
              puVar12 = puVar12 + 1;
            } while (iVar9 != 0);
            iVar9 = FUN_004816b0();
            *(float *)(iVar8 + 0x308) = (float)iVar9 * _DAT_004adbac * _DAT_004adc2c - _DAT_004adbb0
            ;
            iVar9 = 4;
          }
        }
        if (0 < iVar9) {
          puVar12 = local_18;
          do {
            FUN_00474cd0(iVar8,*puVar12,fVar2 / (float)(int)param_1);
            puVar12 = puVar12 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (((((double)*(int *)(iVar8 + 0x1998) < _DAT_004adc08) &&
             ((*(byte *)(iVar8 + 0x60) & 0x20) != 0)) &&
            (FUN_00409ee0(0x14,0xffffffff,local_20,0xffffffff,0),
            (*(byte *)(iVar8 + 0x60) & 0x20) != 0)) &&
           (iVar9 = FUN_004816b0(), (float)iVar9 * _DAT_004adbac < _DAT_004adc1c)) {
          if (iVar6 == 0x56684c74) {
            FUN_00427590(1,**(undefined4 **)(*(int *)(iVar8 + 0x1e70) + 0x18),1,6,5,6,5,iVar8 + 0x50
                        );
            return 1;
          }
          FUN_00427590(1,**(undefined4 **)(*(int *)(iVar8 + 0x1e70) + 0x18),5,6,5,6,7,iVar8 + 0x50);
          return 1;
        }
        return 1;
      }
      if (iVar6 == 0x52745364) goto LAB_0047537d;
      if (iVar6 != 0x54323031) {
        if (iVar6 != 0x56684c74) {
          return 1;
        }
        goto LAB_0047537d;
      }
      fVar2 = fVar2 * _DAT_004adc28;
      *(undefined4 *)((int)param_1 + 0x2b8) = 0x3f800000;
      iVar6 = 3;
      do {
        uVar5 = FUN_004816b0();
        FUN_00474cd0(param_1,uVar5 % 6,fVar2);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (_DAT_004adc08 <= (double)*(int *)((int)param_1 + 0x1998)) {
        return 1;
      }
      iVar6 = FUN_004816b0();
      param_1 = *(float *)((int)param_1 + 0x1a0) * _DAT_004adc14 - _DAT_004adc18;
      fVar2 = (float)iVar6 * _DAT_004adbac * _DAT_004adc10 - _DAT_004adbe8;
      if (_DAT_004adbdc < param_1) {
        param_1 = 1.0;
      }
      if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
        uVar14 = 0;
      }
      else {
        FUN_00409ee0(0x13,0xffffffff,0xffffffff,0xffffffff,0);
        uVar14 = DAT_004c7aa8;
      }
      FUN_00426d10(0x37,6,fVar2,param_1,iVar8 + 0x50,0,uVar14,0x41200000,0x43480000);
      if ((*(byte *)(iVar8 + 0x60) & 0x20) == 0) {
        return 1;
      }
      iVar6 = FUN_004816b0();
    }
    if (_DAT_004adc1c <= (float)iVar6 * _DAT_004adbac) {
      return 1;
    }
    uVar18 = 7;
    uVar17 = 6;
    uVar16 = 5;
    uVar15 = 6;
    uVar14 = 5;
  }
  FUN_00427590(1,**(undefined4 **)(*(int *)(iVar8 + 0x1e70) + 0x18),uVar14,uVar15,uVar16,uVar17,
               uVar18,iVar8 + 0x50);
  return 1;
}

