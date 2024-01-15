#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437f70(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  short *psVar12;
  undefined *puVar13;
  float10 fVar14;
  float10 fVar15;
  short *local_e4;
  float local_d8;
  float local_d4;
  float local_d0;
  int local_cc;
  undefined2 *local_c8;
  undefined2 *local_c4;
  double local_c0;
  double local_b8;
  undefined local_b0 [8];
  float local_a8;
  undefined local_a4 [12];
  undefined local_98 [12];
  undefined local_8c [12];
  undefined local_80 [48];
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined local_40 [48];
  undefined local_10 [16];
  
  local_c4 = (undefined2 *)0x3dcccccd;
  local_c8 = (undefined2 *)0x3dcccccd;
  if (*(char *)(param_1 + 0x60) == '\0') {
    *(undefined *)(param_1 + 0x60) = 1;
    return;
  }
  if ((*(int *)(param_1 + 8) == 3) || (*(int *)(param_1 + 8) == 8)) {
    if (DAT_004c4000 != 0) {
      DAT_004c0214 = -1;
    }
    local_cc = 0;
    if ('\0' < *(char *)(param_1 + 0x70)) {
      piVar9 = (int *)&DAT_00e2993c;
      pfVar10 = (float *)&DAT_00e99368;
      do {
        iVar11 = local_cc;
        if (*piVar9 != 0) {
          pfVar10[-1] = (float)local_cc * (float)_DAT_004ac860;
          *pfVar10 = 50.0;
          *pfVar10 = (float)((char)(&DAT_004c2724)[*(char *)(local_cc + 0x73 + param_1) * 0x34] * 10
                            ) - _DAT_004ac868;
          FUN_00431020(local_40,0,0,0);
          FUN_0042f7b0(local_10,pfVar10[-2],pfVar10[-1],*pfVar10);
          if (DAT_004c0214 != -1) {
            iVar6 = FUN_00450b30(0x456c6d6f,DAT_004c0214);
            iVar6 = *(int *)(iVar6 + 0x14);
            if (iVar6 == 0xd) {
LAB_004380b1:
              DAT_004c0218 = (undefined2 *)((float)DAT_004c0218 - _DAT_00e22a50);
            }
            else if (iVar6 == 0xe) {
              iVar6 = FUN_004816b0();
              DAT_004c0218 = (undefined2 *)
                             (((float)iVar6 * _DAT_004ac86c * (float)_DAT_004ac870 -
                              (float)_DAT_004ac878) + (float)DAT_004c0218);
            }
            else if (iVar6 == 0xf) goto LAB_004380b1;
            if ((float)DAT_004c0218 < (float)_DAT_004ac880) {
              DAT_004c0218 = (undefined2 *)0x3dcccccd;
            }
            if ((float)_DAT_004ac888 < (float)DAT_004c0218) {
              DAT_004c0218 = (undefined2 *)0x3fc00000;
            }
            if (DAT_004c0210 == 2) {
              local_c4 = DAT_004c0218;
            }
            else {
              local_c8 = DAT_004c0218;
            }
          }
          FUN_004337e0(*piVar9,local_40,0,0x428c0000,0x428c0000,0x428c0000,0xc31d0000,1,local_c4,
                       local_c8);
        }
        local_cc = iVar11 + 1;
        pfVar10 = pfVar10 + 10;
        piVar9 = piVar9 + 1;
      } while (local_cc < *(char *)(param_1 + 0x70));
    }
    iVar11 = 0;
    do {
      iVar6 = *(int *)(&DAT_00e29a54)[iVar11];
      if (iVar6 != 0) {
        FUN_00431a50(iVar6,2,0xfffffffc,0x10,3);
        FUN_0042f7b0(local_98,0x44434000,(float)(iVar11 * 100 + -0x20a),0xc31d0000);
        FUN_0042f7b0(local_8c,0,0,0);
        if (iVar11 == 3) {
          FUN_0042f7b0(local_98,0x44434000,0xc3c28000,0xc2ce0000);
          FUN_0042f7b0(local_8c,0,0x42340000,0);
        }
        FUN_00431060(local_80,local_98);
        FUN_00431450(local_80,0x3f000000,0x3f000000,0x3f000000,local_80);
        FUN_00431640(iVar6,local_80);
        FUN_00431a50(iVar6,2,3,0x10,2);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
    if ((DAT_004c4000 != 0) && (*(int *)(param_1 + 0x3c) != 2)) {
      iVar11 = 0;
      if ('\0' < *(char *)(param_1 + 0x70)) {
        local_cc = 0;
        do {
          FUN_0042f7d0(&local_d8,&DAT_004c43d0);
          local_d0 = -157.0;
          FUN_0042f7d0(&DAT_00e298a0,&DAT_004c43dc);
          _DAT_00e298a4 = _DAT_00e298a4 - (float)local_cc;
          fVar14 = (float10)FUN_0042f560(local_d8 - _DAT_004c43dc,_DAT_004c43e0 - local_d4);
          iVar6 = *(int *)(param_1 + 0x34) * 0x20;
          fVar15 = (float10)FUN_0042f560(_DAT_00e298a0 - *(float *)(&DAT_004c401c + iVar6),
                                         *(float *)(&DAT_004c4020 + iVar6) - _DAT_00e298a4);
          FUN_00468800(iVar11 + 0x1c,0x14,&local_d8,&DAT_00e298a0,(float)fVar14,(float)fVar15);
          iVar11 = iVar11 + 1;
          local_cc = local_cc + 0x9c4;
        } while (iVar11 < *(char *)(param_1 + 0x70));
      }
      FUN_004816b0();
      DAT_0050c138 = __ftol();
      iVar11 = 1;
      psVar12 = &DAT_0050c13a;
      do {
        do {
          FUN_004816b0();
          sVar5 = __ftol();
          *psVar12 = sVar5;
          if (0x50c138 < (int)psVar12) {
            psVar7 = &DAT_0050c138;
            iVar6 = iVar11;
            do {
              if (*psVar12 == *psVar7) {
                *psVar12 = -1;
              }
              psVar7 = psVar7 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          puVar4 = DAT_00e2993c;
        } while (*psVar12 == -1);
        psVar12 = psVar12 + 1;
        iVar11 = iVar11 + 1;
      } while ((int)psVar12 < 0x50c140);
      DAT_004bfed4 = 1;
      DAT_004bfed8 = 2;
      local_c4 = (undefined2 *)0x11;
      local_c8 = (undefined2 *)0x1f;
      if (DAT_00e2993c[1] == 0) {
        DAT_004bfed4 = 5;
        local_c4 = (undefined2 *)0x2d;
      }
      if (DAT_00e2993c[2] == 0) {
        DAT_004bfed8 = 5;
        local_c8 = (undefined2 *)0x2d;
      }
      if ((char)DAT_00e35aa0 != '\0') {
        local_cc = 0x34;
        local_e4 = &DAT_0050c138;
        puVar13 = &DAT_0050c230;
        iVar11 = 0;
        do {
          switch(*local_e4) {
          case 0:
            sVar5 = 0;
            do {
              local_c0 = (double)_DAT_00e99310;
              local_b8 = (double)((_DAT_00e99310 - _DAT_00e99304 * (float)_DAT_004ac898) *
                                 (float)_DAT_004ac8a0);
              iVar6 = FUN_004816b0();
              iVar6 = FUN_004816b0(((float)local_c0 - (float)local_b8) *
                                   (float)iVar6 * _DAT_004ac86c + (float)local_b8,0xc31d0000);
              fVar2 = (_DAT_00e9930c - _DAT_00e99300) * (float)iVar6 * _DAT_004ac86c + _DAT_00e99300
              ;
              fVar14 = (float10)FUN_0045cf00();
              FUN_0042f7b0(&local_d8,(float)(fVar14 * (float10)fVar2));
              if (_DAT_004ac778 <= local_d8) {
                DAT_004c0210 = DAT_004bfed4;
                _DAT_0050c534 = local_c8;
              }
              else {
                DAT_004c0210 = DAT_004bfed8;
                _DAT_0050c534 = local_c4;
              }
              FUN_00482c40(*puVar4,puVar4[(int)_DAT_0050c534],&local_d8,10,puVar13,
                           &DAT_0050c148 + iVar11,&DAT_0050c0e0 + iVar11);
              FUN_00482dd0(local_b0,local_a4,puVar13,&DAT_0050c148 + iVar11,&DAT_0050c0e0 + iVar11);
            } while (((local_a8 - _DAT_004ac800) - _DAT_004ac8a8 <= _DAT_004ac890) &&
                    (bVar1 = sVar5 < 0x14, sVar5 = sVar5 + 1, bVar1));
            FUN_004316a0(puVar4[DAT_004c0210],local_80);
            FUN_0042f7d0(&local_d8,local_b0);
            fVar14 = (float10)FUN_0042f560(local_d8 - local_50,local_4c - local_d4);
            iVar6 = local_cc;
            FUN_00468800(local_cc,0xe,&local_d8,&local_d8,(float)fVar14,(float)fVar14);
            DAT_004c0214 = iVar6;
            break;
          case 1:
            FUN_004316a0(puVar4[5],local_80);
            iVar6 = FUN_004816b0(local_48);
            fVar14 = (float10)FUN_0045cf00((_DAT_00e99350 - _DAT_00e99344) *
                                           (float)iVar6 * _DAT_004ac86c + _DAT_00e99344);
            FUN_0042f7b0(&local_d8,
                         (float)(((float10)_DAT_00e99340 - (float10)_DAT_004ac794) * fVar14));
            FUN_00482c40(*puVar4,puVar4[0x2d],&local_d8,10,puVar13,&DAT_0050c148 + iVar11,
                         &DAT_0050c0e0 + iVar11);
            FUN_00482dd0(local_b0,local_a4,puVar13,&DAT_0050c148 + iVar11,&DAT_0050c0e0 + iVar11);
            FUN_0042f7d0(&local_d8,local_b0);
            if (_DAT_004ac778 <= local_d8) goto LAB_004388f8;
            local_d8 = local_d8 - _DAT_004ac794;
            break;
          case 2:
            FUN_004316a0(puVar4[DAT_004bfed8],local_80);
            local_c0 = (double)_DAT_00e99310;
            local_b8 = (double)((_DAT_00e99310 - _DAT_00e99304 * (float)_DAT_004ac898) *
                               (float)_DAT_004ac8a0);
            iVar6 = FUN_004816b0();
            FUN_0042f7b0(&local_d8,_DAT_00e99300 - _DAT_004ac794,
                         ((float)local_c0 - (float)local_b8) * (float)iVar6 * _DAT_004ac86c +
                         (float)local_b8,local_48);
            FUN_00482c40(*puVar4,puVar4[(int)local_c4],&local_d8,10,puVar13,&DAT_0050c148 + iVar11,
                         &DAT_0050c0e0 + iVar11);
            FUN_00482dd0(local_b0,local_a4,puVar13,&DAT_0050c148 + iVar11,&DAT_0050c0e0 + iVar11);
            FUN_0042f7d0(&local_d8,local_b0);
            local_d8 = local_d8 - _DAT_004ac794;
            break;
          case 3:
            FUN_004316a0(puVar4[DAT_004bfed4],local_80);
            local_c0 = (double)_DAT_00e99310;
            local_b8 = (double)((_DAT_00e99310 - _DAT_00e99304 * (float)_DAT_004ac898) *
                               (float)_DAT_004ac8a0);
            iVar6 = FUN_004816b0();
            FUN_0042f7b0(&local_d8,_DAT_00e9932c - _DAT_004ac8ac,
                         ((float)local_c0 - (float)local_b8) * (float)iVar6 * _DAT_004ac86c +
                         (float)local_b8,local_48);
            FUN_00482c40(*puVar4,puVar4[(int)local_c8],&local_d8,10,puVar13,&DAT_0050c148 + iVar11,
                         &DAT_0050c0e0 + iVar11);
            FUN_00482dd0(local_b0,local_a4,puVar13,&DAT_0050c148 + iVar11,&DAT_0050c0e0 + iVar11);
            FUN_0042f7d0(&local_d8,local_b0);
LAB_004388f8:
            local_d8 = local_d8 - _DAT_004ac8ac;
          }
          if ((0 < *local_e4) && (*local_e4 < 4)) {
            local_d0 = local_d0 - _DAT_004ac8b0;
            FUN_0042f7d0(&DAT_00e298a0,&local_d8);
            _DAT_00e298a0 = _DAT_00e298a0 * _DAT_004ac85c;
            fVar14 = (float10)FUN_0042f560(local_d8 - _DAT_00e298a0,_DAT_00e298a4 - local_d4);
            FUN_00468800(local_cc,8,&local_d8,&local_d8,(float)fVar14,(float)fVar14);
          }
          iVar11 = iVar11 + 0xc;
          puVar13 = puVar13 + 0x28;
          local_e4 = local_e4 + 1;
          iVar6 = local_cc + 1;
          iVar8 = local_cc + -0x33;
          local_cc = iVar6;
        } while (iVar8 < (int)(DAT_00e35aa0 & 0xff));
      }
      fVar2 = _DAT_00e99310 - _DAT_004ac8b4;
      iVar11 = FUN_004816b0(0xc31d0000);
      iVar11 = FUN_004816b0(((_DAT_00e99310 - _DAT_004ac8b8) - fVar2) *
                            (float)iVar11 * _DAT_004ac86c + fVar2);
      FUN_0042f7b0(&local_d8,(float)iVar11 * _DAT_004ac86c * _DAT_004ac8bc - _DAT_004ac8c0);
      iVar11 = FUN_004816b0();
      fVar2 = (float)iVar11 * _DAT_004ac86c * _DAT_004ac7b0;
      FUN_00468800(0x14,0x29,&local_d8,&local_d8,fVar2,fVar2);
      fVar2 = _DAT_00e99300 - _DAT_004ac8c4;
      iVar11 = FUN_004816b0(0xc31d0000);
      iVar11 = FUN_004816b0((_DAT_00e99310 - _DAT_004ac8c8) * (float)iVar11 * _DAT_004ac86c -
                            _DAT_004ac8c0);
      FUN_0042f7b0(&local_d8,
                   ((_DAT_00e99300 - _DAT_004ac8c0) - fVar2) * (float)iVar11 * _DAT_004ac86c + fVar2
                  );
      iVar11 = FUN_004816b0();
      fVar2 = (float)iVar11 * _DAT_004ac86c * _DAT_004ac7b0;
      FUN_00468800(0x13,0x28,&local_d8,&local_d8,fVar2,fVar2);
    }
    iVar11 = 0;
    if ((char)DAT_00e35aa0 != '\0') {
      local_c4 = &DAT_0050c138;
      local_c8 = (undefined2 *)&DAT_0050c230;
      iVar6 = 0;
      do {
        iVar8 = FUN_00450b30(0x456c6d6f,iVar11 + 0x34);
        FUN_00482dd0(local_b0,local_a4,local_c8,&DAT_0050c148 + iVar6,&DAT_0050c0e0 + iVar6);
        pfVar10 = (float *)(iVar8 + 0x44);
        FUN_0042f7d0(pfVar10,local_b0);
        switch(*local_c4) {
        case 0:
          fVar3 = *(float *)(iVar8 + 0x4c) - _DAT_004ac800;
          break;
        case 1:
          if (_DAT_004ac778 <= *pfVar10) {
            *pfVar10 = *pfVar10 - _DAT_004ac8ac;
            fVar3 = *(float *)(iVar8 + 0x4c) - _DAT_004ac8b0;
          }
          else {
            *pfVar10 = *pfVar10 - _DAT_004ac794;
            fVar3 = *(float *)(iVar8 + 0x4c) - _DAT_004ac8b0;
          }
          break;
        case 2:
          fVar2 = *pfVar10 - _DAT_004ac794;
          goto LAB_00438bfb;
        case 3:
          fVar2 = *pfVar10 - _DAT_004ac8ac;
LAB_00438bfb:
          fVar3 = *(float *)(iVar8 + 0x4c) - _DAT_004ac8b0;
          *pfVar10 = fVar2;
          break;
        default:
          goto switchD_00438ba0_caseD_4;
        }
        *(float *)(iVar8 + 0x4c) = fVar3;
switchD_00438ba0_caseD_4:
        FUN_0044b270(*(undefined4 *)(iVar8 + 0x30),pfVar10);
        iVar11 = iVar11 + 1;
        iVar6 = iVar6 + 0xc;
        local_c8 = local_c8 + 0x14;
        local_c4 = local_c4 + 1;
      } while (iVar11 < (int)(DAT_00e35aa0 & 0xff));
    }
    FUN_00456200(param_1);
    if ((DAT_004c4000 != 0) && (DAT_0050c47c == 1)) {
      DAT_0050c47c = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    if (*(int *)(param_1 + 0x10) == 1) {
      _DAT_0050c958 = _DAT_0050c958 + _DAT_00e22a50;
      if (_DAT_004ac8cc < _DAT_0050c958) {
        _DAT_0050c958 = 0.4;
      }
      if (*(int *)(param_1 + 8) == 8) {
        FUN_004396d0(param_1);
      }
    }
    else {
      _DAT_0050c958 = _DAT_0050c958 - _DAT_00e22a50;
      if (_DAT_0050c958 < _DAT_004ac778) {
        _DAT_0050c958 = 0.0;
      }
      if (*(int *)(param_1 + 8) == 8) {
        FUN_00438d20(param_1);
        return;
      }
    }
  }
  return;
}

