#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042cca0(float param_1)

{
  byte *pbVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar8;
  undefined4 uVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int *piVar12;
  float *pfVar13;
  float local_3c;
  float local_38;
  int local_34;
  float local_30;
  int *local_2c;
  int local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined local_8 [4];
  undefined local_4 [4];
  
  iVar5 = (int)param_1;
  if (DAT_004b9520 != '\0') {
    FUN_00431c40(&local_28,&local_14,&local_10,local_4,local_8);
    switch(local_28) {
    case 1:
      local_30 = DAT_004b94b0;
      break;
    case 2:
      local_30 = DAT_004b94b4;
      break;
    case 3:
      local_30 = DAT_004b94bc;
      break;
    case 4:
      local_30 = DAT_004b94b8;
    }
    local_34 = 0;
    if (0 < DAT_004b9534) {
      local_18 = (float *)&DAT_00e9a000;
      local_2c = (int *)&DAT_00e9a280;
      pfVar13 = (float *)&DAT_00e99868;
      do {
        pfVar10 = local_18;
        piVar12 = local_2c;
        if (*local_2c != -1) {
          if ((&DAT_00e9a960)[local_34] == '\0') {
            FUN_004285d0(*(undefined2 *)local_2c,0);
            iVar6 = FUN_004816b0();
            fVar4 = _DAT_0050c6f0;
            fVar2 = _DAT_0050c6ec;
            if (_DAT_004ac58c < (float)iVar6 * _DAT_004ac600) {
              pfVar13[-2] = _DAT_0050c6e8;
              pfVar13[-1] = fVar2;
              (&DAT_00e9a960)[local_34] = 1;
              *pfVar13 = fVar4;
              iVar6 = FUN_004816b0();
              pfVar13[-2] = ((float)iVar6 * _DAT_004ac600 * _DAT_004ac604 - _DAT_004ac5d0) *
                            *(float *)(iVar5 + 0x70) + pfVar13[-2];
              iVar6 = FUN_004816b0();
              pfVar13[-1] = ((float)iVar6 * _DAT_004ac600 * _DAT_004ac604 - _DAT_004ac5d0) *
                            *(float *)(iVar5 + 0x74) + pfVar13[-1];
              iVar6 = FUN_004816b0();
              *pfVar13 = ((float)iVar6 * _DAT_004ac600 * _DAT_004ac604 - _DAT_004ac5d0) *
                         *(float *)(iVar5 + 0x78) + *pfVar13;
              iVar6 = FUN_004816b0();
              fVar2 = (float)iVar6 * _DAT_004ac600 * _DAT_004ac608 - _DAT_004ac60c;
              pfVar13[-2] = *(float *)(iVar5 + 0x80) * fVar2 + pfVar13[-2];
              pfVar13[-1] = *(float *)(iVar5 + 0x84) * fVar2 + pfVar13[-1];
              *pfVar13 = *(float *)(iVar5 + 0x88) * fVar2 + *pfVar13;
              iVar6 = FUN_004816b0();
              pfVar13[-2] = ((float)iVar6 * _DAT_004ac600 * _DAT_004ac610 - _DAT_004ac60c) *
                            *(float *)(iVar5 + 0x90) + pfVar13[-2];
              iVar6 = FUN_004816b0();
              pfVar13[-1] = ((float)iVar6 * _DAT_004ac600 * _DAT_004ac610 - _DAT_004ac60c) *
                            *(float *)(iVar5 + 0x94) + pfVar13[-1];
              iVar6 = FUN_004816b0();
              fVar4 = (float)iVar6 * _DAT_004ac600 * _DAT_004ac610 - _DAT_004ac60c;
              fVar2 = *(float *)(iVar5 + 0x98);
              *pfVar10 = -1.0;
              pfVar10[1] = -1.0;
              *pfVar13 = fVar4 * fVar2 + *pfVar13;
            }
          }
          else {
            fVar2 = _DAT_004b9528 * (float)_DAT_00e22a40;
            *pfVar13 = *pfVar13 - _DAT_004b952c * (float)_DAT_00e22a40;
            pfVar13[-2] = pfVar13[-2] - fVar2;
          }
          if ((&DAT_00e9a960)[local_34] != '\0') {
            if ((&DAT_00e9a960)[local_34] == '\x02') {
              (&DAT_00e9a960)[local_34] = 0;
            }
            FUN_0042b710(iVar5,pfVar13 + -2,&local_3c,&local_38,&local_24,&local_20,0);
            if ((((local_3c <= _DAT_004ac5b8) || (local_38 <= _DAT_004ac5b8)) ||
                ((float)DAT_00ec86c4 <= local_3c)) || ((float)DAT_00ec85e8 <= local_38)) {
              uVar8 = (undefined2)((uint)-DAT_00ec86c4 >> 0x10);
              if (((local_3c < (float)-DAT_00ec86c4) || ((float)(DAT_00ec86c4 * 2) < local_3c)) ||
                 (uVar8 = (undefined2)((uint)(DAT_00ec85e8 * 2) >> 0x10),
                 (float)(DAT_00ec85e8 * 2) < local_38)) {
                (&DAT_00e9a960)[local_34] = 0;
              }
            }
            else {
              iVar6 = __ftol();
              iVar11 = local_14 * iVar6 + local_10;
              iVar6 = __ftol();
              fVar2 = _DAT_004ac5b8;
              if (0 < local_28) {
                iVar11 = local_28 + iVar11 + iVar6;
                iVar6 = local_28 * 8;
                iVar9 = local_28;
                do {
                  cVar3 = (char)iVar6;
                  pbVar1 = (byte *)(iVar11 + -1);
                  iVar6 = iVar6 + -8;
                  iVar11 = iVar11 + -1;
                  iVar9 = iVar9 + -1;
                  fVar2 = fVar2 + (float)((uint)*pbVar1 << (cVar3 - 8U & 0x1f));
                  pfVar10 = local_18;
                } while (iVar9 != 0);
              }
              uVar8 = (undefined2)((uint)iVar6 >> 0x10);
              piVar12 = local_2c;
              if ((_DAT_004ac5b8 < local_24) && (fVar2 * local_30 < local_24)) {
                (&DAT_00e9a960)[local_34] = 2;
              }
            }
            param_1 = _DAT_004ac5f4;
            if (_DAT_004ac614 < local_20) {
              param_1 = _DAT_004ac5f4 / local_20;
            }
            if (param_1 < _DAT_004ac614) {
              param_1 = _DAT_004ac614;
            }
            param_1 = param_1 * _DAT_004ac618;
            if (_DAT_004b952c <= _DAT_004ac5f4) {
              if (_DAT_004b952c <= _DAT_004ac620) {
                if (_DAT_004ac618 < param_1) {
                  param_1 = 0.15;
                }
              }
              else if (_DAT_004ac5ec < param_1) {
                param_1 = 0.1;
              }
            }
            else if (_DAT_004ac61c < param_1) {
              param_1 = 0.04;
            }
            local_18 = (float *)CONCAT22(local_18._2_2_,(short)DAT_004b9524._3_1_);
            FUN_004285d0(CONCAT22(uVar8,*(undefined2 *)piVar12),1);
            uVar7 = __ftol();
            uVar7 = __ftol(uVar7);
            FUN_0042bb00(CONCAT22(extraout_var,*(undefined2 *)piVar12),uVar7);
            if (_DAT_004ac5b8 <= *pfVar10) {
              local_1c = __ftol();
              local_2c = (int *)__ftol();
              local_c = __ftol();
              iVar6 = __ftol();
              if ((local_c < 3) && (iVar6 < 3)) {
                FUN_00428800(*(undefined2 *)piVar12,0x4000);
                uVar8 = extraout_var_03;
              }
              else {
                FUN_0042d330(*(undefined2 *)piVar12,local_1c,local_2c);
                FUN_004287e0(CONCAT22(extraout_var_00,*(undefined2 *)piVar12),0x4000);
                uVar8 = extraout_var_04;
              }
            }
            else {
              FUN_004285d0(CONCAT22(extraout_var_01,*(undefined2 *)piVar12),0);
              uVar8 = extraout_var_02;
            }
            FUN_004286f0(CONCAT22(uVar8,*(undefined2 *)piVar12),param_1,param_1);
            iVar6 = FUN_00445690();
            uVar7 = local_18;
            if (iVar6 != 0) {
              uVar7 = __ftol();
            }
            FUN_00428740(*(undefined2 *)piVar12,DAT_004b9524,DAT_004b9524 >> 8 & 0xff,
                         DAT_004b9524 >> 0x10 & 0xff,uVar7);
            *pfVar10 = local_3c;
            pfVar10[1] = local_38;
          }
        }
        local_34 = local_34 + 1;
        pfVar13 = pfVar13 + 3;
        local_2c = piVar12 + 1;
        local_18 = pfVar10 + 2;
      } while (local_34 < DAT_004b9534);
    }
    FUN_00431cd0();
  }
  return;
}

