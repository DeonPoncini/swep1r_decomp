#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
float10 FUN_0048ec50(float *param_1,float *param_2,float *param_3)

{
  return ((float10)*param_1 - (float10)*param_3) * (float10)*param_2 +
         ((float10)param_1[2] - (float10)param_3[2]) * (float10)param_2[2] +
         ((float10)param_1[1] - (float10)param_3[1]) * (float10)param_2[1];
}



void FUN_0048ec90(float *param_1,float param_2)

{
  float fVar1;

  fVar1 = *param_1;
  if (*param_1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (param_2 <= fVar1) {
    fVar1 = *param_1;
  }
  else {
    fVar1 = 0.0;
  }
  *param_1 = fVar1;
  fVar1 = param_1[1];
  if (param_1[1] < 0.0) {
    fVar1 = -fVar1;
  }
  if (param_2 <= fVar1) {
    fVar1 = param_1[1];
  }
  else {
    fVar1 = 0.0;
  }
  param_1[1] = fVar1;
  fVar1 = param_1[2];
  if (param_1[2] < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar1 < param_2) {
    param_1[2] = 0.0;
    return;
  }
  param_1[2] = param_1[2];
  return;
}



undefined4 FUN_0048ed20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  local_c = *param_2 - *param_1;
  local_18 = *param_3 - *param_1;
  local_8 = param_2[1] - param_1[1];
  local_4 = param_2[2] - param_1[2];
  local_14 = param_3[1] - param_1[1];
  local_10 = param_3[2] - param_1[2];
  FUN_00492440(&local_c);
  FUN_00492440(&local_18);
  fVar1 = local_10 * local_4 + local_14 * local_8 + local_18 * local_c;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if ((0.999 <= fVar1) && (fVar1 <= 1.001)) {
    return 1;
  }
  return 0;
}



void FUN_0048ee10(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = param_1;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _strncpy((char *)param_1,s_UNKNOWN_004d1a98,0x3f);
  *(undefined *)((int)param_1 + 0x3f) = 0;
  param_1[0x1c] = 0;
  return;
}



void FUN_0048ee40(int param_1)

{
  if (param_1 != 0) {
    if (DAT_00df7f04 != (code *)0x0) {
      (*DAT_00df7f04)();
      return;
    }
    FUN_0048ee70(param_1);
    (**(code **)(DAT_00ecc428 + 0x24))(param_1);
  }
  return;
}



void FUN_0048ee70(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint local_8;
  uint local_4;

  if (param_1 != 0) {
    puVar2 = (uint *)(param_1 + 0x44);
    local_4 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      do {
        local_8 = 0;
        if (*puVar2 != 0) {
          piVar3 = (int *)(puVar2[1] + 0x50);
          do {
            if (piVar3[-1] != 0) {
              (**(code **)(DAT_00ecc428 + 0x24))(piVar3[-1]);
            }
            if (*piVar3 != 0) {
              (**(code **)(DAT_00ecc428 + 0x24))(*piVar3);
            }
            iVar4 = piVar3[7];
            if (iVar4 != 0) {
              uVar1 = 0;
              if (piVar3[0xb] != 0) {
                do {
                  FUN_00492410(iVar4);
                  iVar4 = iVar4 + 0x48;
                  uVar1 = uVar1 + 1;
                } while (uVar1 < (uint)piVar3[0xb]);
              }
              (**(code **)(DAT_00ecc428 + 0x24))(piVar3[7]);
            }
            if (piVar3[1] != 0) {
              (**(code **)(DAT_00ecc428 + 0x24))(piVar3[1]);
            }
            if (piVar3[2] != 0) {
              (**(code **)(DAT_00ecc428 + 0x24))(piVar3[2]);
            }
            if (piVar3[8] != 0) {
              (**(code **)(DAT_00ecc428 + 0x24))(piVar3[8]);
            }
            piVar3 = piVar3 + 0x25;
            local_8 = local_8 + 1;
          } while (local_8 < *puVar2);
        }
        if (puVar2[1] != 0) {
          (**(code **)(DAT_00ecc428 + 0x24))(puVar2[1]);
        }
        puVar2 = puVar2 + 2;
        local_4 = local_4 + 1;
      } while (local_4 < *(uint *)(param_1 + 100));
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x78));
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      do {
        FUN_0048eac0(*(undefined4 *)(*(int *)(param_1 + 0x68) + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x6c));
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x68));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0048efe0(uint param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  DAT_00df7ef8 = param_1;
  _DAT_00ecc474 = 0;
  DAT_00ecc470 = 0;
  DAT_00df7cec = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x38) == 2) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  if (iVar5 == -1) {
    iVar5 = *(int *)(DAT_00df7cec + 0x70);
  }
  DAT_00deb110 = DAT_00df7cec + 0x44 + iVar5 * 8;
  iVar5 = FUN_0048db80();
  if ((*(int *)(DAT_00df7ef8 + 0x18) != iVar5) ||
     (*(int *)(*(int *)(*(int *)(DAT_00df7f2c + 4) + 4) + 0x24) == 8)) {
    FUN_00493310(DAT_00df7ef8,param_2);
  }
  DAT_00df7cf0 = *(int *)(DAT_00df7ef8 + 0x34);
  if (DAT_00ecc424 <= *(int *)(DAT_00df7ef8 + 0x34)) {
    DAT_00df7cf0 = DAT_00ecc424;
  }
  if (1 < DAT_00df7cf0) {
    DAT_00df7f08 = 0;
    param_1 = 0;
    if (*(int *)(DAT_00df7f2c + 0x6c) != 0) {
      iVar6 = 0;
      iVar7 = 0x70;
      iVar5 = DAT_00df7f2c;
      do {
        iVar1 = *(int *)(iVar5 + iVar7);
        if (*(int *)(iVar1 + 8) == 1) {
          if (*(int *)(iVar1 + 4) == 1) {
            fVar2 = *(float *)(iVar5 + 0x270 + iVar6) - *(float *)(param_2 + 0x24);
            fVar4 = *(float *)(iVar5 + 0x274 + iVar6) - *(float *)(param_2 + 0x28);
            fVar3 = *(float *)(iVar5 + 0x278 + iVar6) - *(float *)(param_2 + 0x2c);
            iVar5 = DAT_00df7f2c;
            if (SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) <
                *(float *)(iVar1 + 0x28) + *(float *)(DAT_00df7cec + 0x80)) {
              (&DAT_00deb4e8)[DAT_00df7f08] = iVar1;
              DAT_00df7f08 = DAT_00df7f08 + 1;
              iVar5 = DAT_00df7f2c;
            }
          }
          else if (*(int *)(iVar1 + 4) == 0) {
            (&DAT_00deb4e8)[DAT_00df7f08] = iVar1;
            DAT_00df7f08 = DAT_00df7f08 + 1;
          }
        }
        param_1 = param_1 + 1;
        iVar7 = iVar7 + 4;
        iVar6 = iVar6 + 0xc;
      } while (param_1 < *(uint *)(iVar5 + 0x6c));
    }
  }
  FUN_0048f180(*(undefined4 *)(DAT_00df7cec + 0x78));
  return 1;
}



void FUN_0048f180(int param_1)

{
  int iVar1;
  uint uVar2;

  if (*(int *)(param_1 + 0x88) != -1) {
    FUN_0048f210(*(int *)(DAT_00deb110 + 4) + *(int *)(param_1 + 0x88) * 0x94,param_1 + 0xc0,
                 param_1 + 0xf4,*(undefined4 *)(param_1 + 0xf0));
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar1 = *(int *)(param_1 + 0x94);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      do {
        if ((*(int *)(DAT_00df7ef8 + 0x24) == 0) ||
           (*(int *)(*(int *)(DAT_00df7ef8 + 0x24) + *(int *)(iVar1 + 0x80) * 4) == 0)) {
          FUN_0048f180(iVar1);
        }
        iVar1 = *(int *)(iVar1 + 0x98);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x90));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0048f210(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int **ppiVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined local_74 [48];
  undefined local_44 [48];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;

  iVar11 = param_2;
  DAT_00df7ce8 = param_1;
  cVar2 = *(char *)(param_1 + 0x89);
  if ((int)cVar2 != (DAT_00df7f1c & 0xff)) {
    DAT_00df7f1c = CONCAT31(DAT_00df7f1c._1_3_,cVar2);
    uVar14 = DAT_0050c708;
    uVar15 = DAT_004c3c10;
    if (cVar2 == '\0') {
      uVar14 = 0;
      uVar15 = 1;
    }
    FUN_00409510(uVar14,uVar15);
  }
  if (*(short *)(DAT_00df7ce8 + 0x84) == 0) {
    *(undefined2 *)(DAT_00df7ce8 + 0x86) = 0;
    return;
  }
  iVar9 = DAT_00df7ce8;
  if (*(int *)(DAT_00df7ce8 + 0x44) != 0) {
    uVar14 = *(undefined4 *)(DAT_00df7ce8 + 0x4c);
    uVar15 = *(undefined4 *)(DAT_00df7ce8 + 0x74);
    FUN_00492b70(local_74,DAT_00df7f2c + 8,param_2);
    FUN_00493270(local_74,uVar14,&DAT_00debce8,uVar15);
    if (0 < param_4) {
      FUN_00492b70(local_74,DAT_00df7f2c + 8,param_3);
      FUN_00493270(local_74,uVar14,&DAT_00debce8,param_4);
    }
    FUN_00492680(local_44,param_2);
    DAT_00df7efc = *(int *)(DAT_00df7ce8 + 0x48);
    if (DAT_00df7cf0 <= *(int *)(DAT_00df7ce8 + 0x48)) {
      DAT_00df7efc = DAT_00df7cf0;
    }
    _DAT_00ecc4ac = &DAT_00debce8;
    DAT_00ecc48c = &DAT_00deb128;
    _DAT_00ecc4b0 = *(undefined4 *)(DAT_00df7ce8 + 0x50);
    _DAT_00ecc4b4 = *(undefined4 *)(DAT_00df7ce8 + 0x58);
    _DAT_00ecc4b8 = 0;
    if (DAT_00df7efc == 2) {
      DAT_00df7f0c = 0;
      param_2 = 0;
      if (DAT_00df7f08 != 0) {
        ppiVar12 = (int **)&DAT_00deb4e8;
        do {
          iVar4 = DAT_00df7f2c;
          iVar1 = DAT_00df7f0c;
          piVar3 = *ppiVar12;
          iVar9 = *piVar3;
          fVar6 = *(float *)(DAT_00df7f2c + (iVar9 + 0x34) * 0xc) - *(float *)(iVar11 + 0x24);
          fVar8 = *(float *)(DAT_00df7f2c + 0x274 + iVar9 * 0xc) - *(float *)(iVar11 + 0x28);
          fVar7 = *(float *)(DAT_00df7f2c + 0x278 + iVar9 * 0xc) - *(float *)(iVar11 + 0x2c);
          local_8 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
          if (local_8 < (float)piVar3[10] + *(float *)(DAT_00df7ce8 + 0x80)) {
            (&DAT_00df7cf8)[DAT_00df7f0c] = piVar3;
            FUN_00493200(&DAT_00deb6e8 + iVar1 * 0xc,iVar4 + (*piVar3 + 0x34) * 0xc,local_44);
            DAT_00df7f0c = DAT_00df7f0c + 1;
          }
          param_2 = param_2 + 1;
          ppiVar12 = ppiVar12 + 1;
        } while (param_2 < DAT_00df7f08);
      }
    }
    else if (DAT_00df7efc == 3) {
      DAT_00df7f0c = 0;
      param_2 = 0;
      if (DAT_00df7f08 != 0) {
        ppiVar12 = (int **)&DAT_00deb4e8;
        do {
          iVar1 = DAT_00df7f2c;
          iVar9 = DAT_00df7f0c;
          piVar3 = *ppiVar12;
          if (piVar3[1] == 0) {
            (&DAT_00df7cf8)[DAT_00df7f0c] = piVar3;
            FUN_00493190(&DAT_00deb6e8 + iVar9 * 0xc,DAT_00df7f2c + (*piVar3 + 0x34) * 0xc,local_44)
            ;
            FUN_00492440(&DAT_00deb6e8 + DAT_00df7f0c * 0xc);
LAB_0048f47a:
            DAT_00df7f0c = DAT_00df7f0c + 1;
          }
          else if (piVar3[1] == 1) {
            iVar4 = *piVar3;
            fVar6 = *(float *)(DAT_00df7f2c + (iVar4 + 0x34) * 0xc) - *(float *)(iVar11 + 0x24);
            fVar8 = *(float *)(DAT_00df7f2c + 0x274 + iVar4 * 0xc) - *(float *)(iVar11 + 0x28);
            fVar7 = *(float *)(DAT_00df7f2c + 0x278 + iVar4 * 0xc) - *(float *)(iVar11 + 0x2c);
            local_8 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6);
            if (local_8 < (float)piVar3[10] + *(float *)(DAT_00df7ce8 + 0x80)) {
              (&DAT_00df7cf8)[DAT_00df7f0c] = piVar3;
              FUN_00493200(&DAT_00deb6e8 + iVar9 * 0xc,iVar1 + (*piVar3 + 0x34) * 0xc,local_44);
              goto LAB_0048f47a;
            }
          }
          param_2 = param_2 + 1;
          ppiVar12 = ppiVar12 + 1;
        } while (param_2 < DAT_00df7f08);
      }
      FUN_00490550(DAT_00df7f2c + 0x70,&DAT_00deb6e8,*(undefined4 *)(DAT_00df7f2c + 0x6c),
                   *(undefined4 *)(DAT_00df7ce8 + 0x70),*(undefined4 *)(DAT_00df7ce8 + 0x4c),
                   *(undefined4 *)(DAT_00df7ce8 + 0x54),*(undefined4 *)(DAT_00df7ce8 + 0x58),
                   *(undefined4 *)(DAT_00df7ce8 + 0x74),*(undefined4 *)(DAT_00df7f2c + 0x870));
    }
    local_14 = DAT_00ecc464;
    local_10 = DAT_00ecc468;
    local_c = DAT_00ecc46c;
    FUN_00493200(&DAT_00deb118,&local_14,local_44);
    uVar10 = 0;
    iVar11 = *(int *)(param_1 + 0x6c);
    iVar9 = DAT_00df7ce8;
    if (*(int *)(param_1 + 0x7c) != 0) {
      do {
        iVar1 = *(int *)(iVar9 + 0x4c) + **(int **)(iVar11 + 0x14) * 0xc;
        bVar13 = (_DAT_00deb11c - *(float *)(iVar1 + 4)) * *(float *)(iVar11 + 0x40) +
                 (_DAT_00deb120 - *(float *)(iVar1 + 8)) * *(float *)(iVar11 + 0x44) +
                 (_DAT_00deb118 -
                 *(float *)(*(int *)(iVar9 + 0x4c) + **(int **)(iVar11 + 0x14) * 0xc)) *
                 *(float *)(iVar11 + 0x3c) <= 0.0;
        if (1 < *(short *)(iVar9 + 0x86)) {
          bVar13 = !bVar13;
        }
        if (bVar13 == false) {
          uVar5 = *(uint *)(iVar11 + 4);
        }
        else {
          uVar5 = *(uint *)(iVar11 + 4);
        }
        if ((((uVar5 & 0x800) == 0) && ((*(uint *)(iVar11 + 4) & 1) == 0)) &&
           ((DAT_0050c530 != 1 || ((*(uint *)(iVar11 + 4) & 0x800) == 0)))) {
          if (0 < param_4) {
            uVar14 = *(undefined4 *)(param_1 + 0x90);
            uVar15 = *(undefined4 *)(param_1 + 0x8c);
            goto LAB_0048f6b9;
          }
        }
        else {
          uVar14 = *(undefined4 *)(param_1 + 0x90);
          uVar15 = *(undefined4 *)(param_1 + 0x8c);
LAB_0048f6b9:
          FUN_0048f700(iVar11,bVar13,param_1 + 0x5c,uVar15,uVar14);
          iVar9 = DAT_00df7ce8;
        }
        iVar11 = iVar11 + 0x48;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x7c));
    }
  }
  *(short *)(iVar9 + 0x84) = *(short *)(iVar9 + 0x84) + -1;
  if (*(short *)(DAT_00df7ce8 + 0x84) == 0) {
    *(undefined2 *)(DAT_00df7ce8 + 0x86) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0048f700(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  puVar4 = (uint *)FUN_0048dba0();
  if (puVar4 != (uint *)0x0) {
    uVar7 = *(uint *)(param_1 + 0xc);
    if ((int)DAT_00df7efc < (int)*(uint *)(param_1 + 0xc)) {
      uVar7 = DAT_00df7efc;
    }
    puVar4[1] = uVar7;
    DAT_00ecc49c = puVar4[4];
    _DAT_00ecc490 = puVar4[5];
    _DAT_00ecc494 = puVar4[6];
    _DAT_00ecc4a0 = *(undefined4 *)(param_1 + 0x10);
    _DAT_00ecc4a4 = *(undefined4 *)(param_1 + 0x14);
    _DAT_00ecc4a8 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(*(int *)(*(int *)(DAT_00df7f2c + 4) + 4) + 0x24) == 8) {
      FUN_00491ac0(*(undefined4 *)(param_1 + 8),puVar4[1],&DAT_00ecc4a0,&DAT_00ecc480,param_1 + 0x24
                  );
    }
    else {
      FUN_00493b80(*(undefined4 *)(DAT_00df7f2c + 0x48),&DAT_00ecc4a0,&DAT_00ecc480,param_1 + 0x24);
    }
    if (2 < DAT_00ecc480) {
      pfVar1 = (float *)(puVar4 + 9);
      *pfVar1 = *(float *)(param_1 + 0x2c);
      puVar4[10] = *(uint *)(param_1 + 0x30);
      puVar4[0xb] = *(uint *)(param_1 + 0x34);
      puVar4[0xc] = *(uint *)(param_1 + 0x38);
      if (puVar4[1] == 2) {
        if (param_2 == 0) {
          uVar5 = *(undefined4 *)(DAT_00df7f2c + 0x870);
          uVar6 = *(undefined4 *)(DAT_00df7ce8 + 0x4c);
          pfVar11 = (float *)(param_1 + 0x3c);
          uVar10 = *(undefined4 *)(DAT_00df7f2c + 0x6c);
        }
        else {
          local_1c = -*(float *)(param_1 + 0x3c);
          local_18 = -*(float *)(param_1 + 0x40);
          local_14 = -*(float *)(param_1 + 0x44);
          uVar5 = *(undefined4 *)(DAT_00df7f2c + 0x870);
          uVar6 = *(undefined4 *)(DAT_00df7ce8 + 0x4c);
          pfVar11 = &local_1c;
          uVar10 = *(undefined4 *)(DAT_00df7f2c + 0x6c);
        }
        FUN_00490750(DAT_00df7f2c + 0x70,&DAT_00deb6e8,uVar10,param_1,pfVar11,uVar6,uVar5,&local_10)
        ;
        *pfVar1 = local_10 + *pfVar1;
        puVar4[10] = (uint)(local_c + (float)puVar4[10]);
        puVar4[0xb] = (uint)(local_8 + (float)puVar4[0xb]);
        puVar4[0xc] = (uint)(local_4 + (float)puVar4[0xc]);
      }
      (**(code **)(DAT_00df7f2c + 0x50))(DAT_00ecc49c,DAT_00ecc48c,DAT_00ecc480);
      if ((DAT_00ecc438 & 2) != 0) {
        *pfVar1 = *(float *)(DAT_00df7f2c + 0x5c) + *pfVar1;
        puVar4[10] = (uint)(*(float *)(DAT_00df7f2c + 0x60) + (float)puVar4[10]);
        puVar4[0xb] = (uint)(*(float *)(DAT_00df7f2c + 100) + (float)puVar4[0xb]);
        puVar4[0xc] = (uint)(*(float *)(DAT_00df7f2c + 0x68) + (float)puVar4[0xc]);
      }
      if (*(int *)(param_3 + 0xc) != 0x3f800000) {
        uVar7 = 0;
        puVar4[0xc] = (uint)((float)puVar4[0xc] * *(float *)(param_3 + 0xc) * 0.5);
        if (DAT_00ecc480 != 0) {
          iVar9 = 0;
          do {
            uVar7 = uVar7 + 1;
            iVar2 = iVar9 + 0xc;
            iVar3 = iVar9 + 0xc;
            iVar9 = iVar9 + 0x10;
            *(float *)(iVar3 + puVar4[6]) =
                 *(float *)(iVar2 + puVar4[6]) * *(float *)(param_3 + 0xc) * 0.5;
          } while (uVar7 < DAT_00ecc480);
        }
      }
      puVar4[8] = *(uint *)(param_1 + 0x20);
      uVar7 = 3;
      if (2 < (int)puVar4[1]) {
        uVar7 = 7;
      }
      uVar8 = *(uint *)(param_1 + 4);
      *puVar4 = uVar8;
      *puVar4 = DAT_00df7f18 | uVar8;
      if ((*(uint *)(param_1 + 4) & 0x400) != 0) {
        uVar5 = *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
        uVar8 = 0;
        if (DAT_00ecc480 != 0) {
          iVar9 = 0;
          do {
            uVar8 = uVar8 + 1;
            *(undefined4 *)(iVar9 + 8 + puVar4[4]) = uVar5;
            iVar9 = iVar9 + 0xc;
          } while (uVar8 < DAT_00ecc480);
        }
      }
      if (*(int *)(param_3 + 0xc) != 0x3f800000) {
        *puVar4 = *puVar4 | 2;
      }
      puVar4[7] = *(uint *)(param_1 + 0x1c);
      puVar4[0xe] = param_4;
      puVar4[0xf] = param_5;
      if (*(int *)(*(int *)(*(int *)(DAT_00df7f2c + 4) + 4) + 0x24) != 8) {
        DAT_00ecc470 = DAT_00ecc470 + 1;
        FUN_0048de10(DAT_00ecc480,uVar7 | 4);
        return 1;
      }
      uVar7 = 0;
      if (DAT_00ecc480 != 0) {
        do {
          iVar9 = DAT_00df7f2c;
          if (uVar7 < DAT_00ecc480 - 1) {
            uVar5 = __ftol(0,0xffffffff);
            uVar5 = __ftol(uVar5);
            uVar5 = __ftol(uVar5);
            uVar6 = __ftol(uVar5);
            uVar5 = *(undefined4 *)(iVar9 + 4);
          }
          else {
            uVar5 = __ftol(0,0xffffffff);
            uVar5 = __ftol(uVar5);
            uVar5 = __ftol(uVar5);
            uVar6 = __ftol(uVar5);
            uVar5 = *(undefined4 *)(iVar9 + 4);
          }
          FUN_00490e10(uVar5,uVar6);
          uVar7 = uVar7 + 1;
        } while (uVar7 < DAT_00ecc480);
        return 0;
      }
    }
  }
  return 0;
}



void FUN_0048fab0(int param_1)

{
  if (param_1 == 0) {
    DAT_00df7f18 = param_1;
    return;
  }
  DAT_00df7f18 = (-(uint)(param_1 != 1) & 0xffffff00) + 0x200;
  return;
}



uint FUN_0048fad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;

  uVar1 = (**(code **)(DAT_00ecc428 + 0x20))(0x878);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_0048fb20(uVar1,param_1,param_2,param_3,param_4,param_5);
  return -(uint)(iVar2 != 0) & uVar1;
}



undefined4
FUN_0048fb20(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)(**(code **)(DAT_00ecc428 + 0x20))(100);
  *(undefined4 **)(param_1 + 0x48) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    if (param_2 < 5.0) {
      param_2 = 5.0;
    }
    else if (179.0 < param_2) {
      param_2 = 179.0;
    }
    *(float *)(param_1 + 0x38) = param_2;
    *puVar2 = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 4) = param_4;
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 8) = param_5;
    *(undefined4 *)(param_1 + 0x40) = param_6;
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x870) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0x874) = 0x3dcccccd;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    FUN_0048fc90(param_1,1);
    return 1;
  }
  return 0;
}



void FUN_0048fc10(int param_1)

{
  if (param_1 != 0) {
    FUN_0048fc30(param_1);
    (**(code **)(DAT_00ecc428 + 0x24))(param_1);
  }
  return;
}



void FUN_0048fc30(int param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x48));
  }
  return;
}



undefined4 FUN_0048fc50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  FUN_0048fdc0(param_1);
  return 1;
}



undefined4 FUN_0048fc70(int param_1)

{
  if (DAT_00df7f2c != param_1) {
    DAT_00df7f2c = param_1;
  }
  return 1;
}



undefined4 FUN_0048fc90(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    if (param_1[0x10] == 0x3f800000) {
      param_1[0x13] = (int)&LAB_00490160;
      param_1[0x14] = (int)&LAB_004901a0;
    }
    else {
      param_1[0x13] = (int)&LAB_004900a0;
      param_1[0x14] = (int)&LAB_004900e0;
    }
  }
  else if (param_2 == 1) {
    if (param_1[0x10] == 0x3f800000) {
      param_1[0x13] = (int)&LAB_004902d0;
      param_1[0x14] = (int)&LAB_00490310;
    }
    else {
      param_1[0x13] = (int)&LAB_00490210;
      param_1[0x14] = (int)&LAB_00490250;
    }
  }
  if (param_1[1] != 0) {
    FUN_0048fdc0(param_1);
  }
  return 1;
}



undefined4 FUN_0048fd10(int *param_1,float param_2)

{
  param_1[0x10] = (int)param_2;
  if (*param_1 == 0) {
    if (param_2 == 1.0) {
      param_1[0x13] = (int)&LAB_00490160;
      param_1[0x14] = (int)&LAB_004901a0;
      FUN_0048fdc0(param_1);
      return 1;
    }
    param_1[0x13] = (int)&LAB_004900a0;
    param_1[0x14] = (int)&LAB_004900e0;
  }
  else if (*param_1 == 1) {
    if (param_2 == 1.0) {
      param_1[0x13] = (int)&LAB_004902d0;
      param_1[0x14] = (int)&LAB_00490310;
      FUN_0048fdc0(param_1);
      return 1;
    }
    param_1[0x13] = (int)&LAB_00490210;
    param_1[0x14] = (int)&LAB_00490250;
    FUN_0048fdc0(param_1);
    return 1;
  }
  FUN_0048fdc0(param_1);
  return 1;
}



undefined4 FUN_0048fdc0(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;

  iVar1 = param_1[1];
  if (iVar1 == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    fVar2 = (float)(*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x10)) * 0.5;
    fVar3 = (float)(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x14)) * 0.5;
    *(float *)(param_1[0x12] + 0xc) = -(fVar2 / (float)param_1[0x11]);
    *(float *)(param_1[0x12] + 0x10) = (fVar3 / (float)param_1[0x11]) / (float)param_1[0x10];
    *(float *)(param_1[0x12] + 0x14) = fVar2 / (float)param_1[0x11];
    *(float *)(param_1[0x12] + 0x18) = -(fVar3 / (float)param_1[0x11]) / (float)param_1[0x10];
    param_1[0xf] = 0;
    *(undefined4 *)(param_1[0x12] + 0x1c) = 0;
    *(undefined4 *)(param_1[0x12] + 0x20) = 0;
    *(undefined4 *)(param_1[0x12] + 0x24) = 0;
    *(undefined4 *)(param_1[0x12] + 0x28) = 0;
  }
  else if (*param_1 == 1) {
    fVar2 = (float)(*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x10)) * 0.5;
    fVar3 = (float)(*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x14)) * 0.5;
    fVar6 = (float10)FUN_0048cd50((float)param_1[0xe] * 0.5);
    fVar4 = fVar2 / (float)fVar6;
    iVar1 = param_1[0x12];
    param_1[0xf] = (int)fVar4;
    fVar5 = fVar4 / *(float *)(iVar1 + 4);
    param_1[0x15] = (int)fVar5;
    param_1[0x16] = (int)(1.0 / (fVar4 / *(float *)(iVar1 + 8) - fVar5));
    *(float *)(iVar1 + 0x1c) = (float)param_1[0x10] / (fVar3 / fVar4);
    *(float *)(param_1[0x12] + 0x24) = -fVar2 / (float)param_1[0xf];
    *(float *)(param_1[0x12] + 0x20) = (-fVar3 / (float)param_1[0xf]) / (float)param_1[0x10];
    *(float *)(param_1[0x12] + 0x28) = fVar2 / (float)param_1[0xf];
    *(float *)(param_1[0x12] + 0x2c) = ((fVar3 - -1.0) / (float)param_1[0xf]) / (float)param_1[0x10]
    ;
    *(float *)(param_1[0x12] + 0x30) = -(fVar2 - -1.0) / (float)param_1[0xf];
    FUN_0048ffc0(param_1,param_1[0x12],fVar2 + fVar2,fVar3 + fVar3);
    return 1;
  }
  return 1;
}



undefined4 FUN_0048ffc0(int param_1,int param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;

  pfVar1 = (float *)(param_2 + 0x34);
  *pfVar1 = -*(float *)(param_1 + 0x3c);
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(float *)(param_2 + 0x38) = -(param_3 * 0.5);
  FUN_00492440(pfVar1);
  pfVar2 = (float *)(param_2 + 0x40);
  *pfVar2 = *pfVar1;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x3c);
  *pfVar2 = -*pfVar2;
  *(float *)(param_2 + 0x50) = -(param_4 * 0.5);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  FUN_00492440((undefined4 *)(param_2 + 0x4c));
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x54);
  *(float *)(param_2 + 0x60) = -*(float *)(param_2 + 0x60);
  return 1;
}



void FUN_00490060(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  FUN_004925d0(DAT_00df7f2c + 8,param_1);
  puVar2 = &DAT_00ecc440;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00492960(&DAT_00ecc440,&DAT_00df7f20);
  return;
}



void FUN_004903a0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = *param_2;
  *(undefined4 *)(param_1 + 0x60) = param_2[1];
  *(undefined4 *)(param_1 + 100) = param_2[2];
  *(undefined4 *)(param_1 + 0x68) = param_2[3];
  return;
}



void FUN_004903d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;

  *(undefined4 *)(param_1 + 0x870) = param_2;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x874) = param_3;
  if (*(int *)(param_1 + 0x6c) != 0) {
    piVar3 = (int *)(param_1 + 0x70);
    do {
      iVar1 = *piVar3;
      if (*(float *)(iVar1 + 0x28) == 0.0) {
        *(float *)(iVar1 + 0x28) = *(float *)(param_1 + 0x870) * 40.0;
      }
      if (*(float *)(iVar1 + 0x2c) == 0.0) {
        *(float *)(iVar1 + 0x2c) = *(float *)(param_1 + 0x874) * 50.0;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x6c));
  }
  return;
}



undefined4 FUN_00490450(int param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  float10 fVar2;

  if (0x80 < *(uint *)(param_1 + 0x6c)) {
    return 0;
  }
  *param_2 = *(uint *)(param_1 + 0x6c);
  *(uint **)(param_1 + 0x70 + *(int *)(param_1 + 0x6c) * 4) = param_2;
  puVar1 = (undefined4 *)(param_1 + (*(int *)(param_1 + 0x6c) + 0x34) * 0xc);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  if ((float)param_2[10] == 0.0) {
    fVar2 = (float10)FUN_00490930(param_2 + 6);
    param_2[10] = (uint)(float)(fVar2 / (float10)*(float *)(param_1 + 0x870));
  }
  if ((float)param_2[0xb] == 0.0) {
    fVar2 = (float10)FUN_00490930(param_2 + 6);
    param_2[0xb] = (uint)(float)(fVar2 / (float10)*(float *)(param_1 + 0x874));
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return 1;
}



undefined4 FUN_004904f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return 1;
}



undefined4 FUN_00490510(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 1;
}



void FUN_00490550(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
                 int param_7,int param_8,float param_9)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  float *local_8;

  iVar3 = param_8 + -1;
  if (-1 < iVar3) {
    pfVar9 = (float *)(iVar3 * 0x10 + param_7);
    local_8 = (float *)((int)param_5 + iVar3 * 0xc);
    iVar7 = (int)param_5 - param_4;
    pfVar6 = (float *)(param_4 + 8 + iVar3 * 0xc);
    local_14 = param_8;
    local_10 = iVar7;
    do {
      iVar3 = 0x5c;
      pfVar8 = pfVar9;
      do {
        iVar3 = iVar3 + 4;
        *pfVar8 = *(float *)(DAT_00df7f2c + -4 + iVar3);
        pfVar8 = pfVar8 + 1;
      } while (iVar3 < 0x68);
      pfVar9[3] = 1.0;
      iVar3 = param_3 + -1;
      if (-1 < iVar3) {
        param_5 = (int *)(param_1 + iVar3 * 4);
        pfVar8 = (float *)(param_2 + 8 + iVar3 * 0xc);
        local_c = param_3;
        do {
          iVar3 = *param_5;
          if (*(int *)(iVar3 + 4) == 0) {
            fVar2 = *pfVar6 * *pfVar8 + pfVar6[-1] * pfVar8[-1] + pfVar6[-2] * pfVar8[-2];
            if (0.0 < fVar2) {
              pfVar5 = (float *)(iVar3 + 0x18);
              iVar3 = 3;
              pfVar4 = pfVar9;
              do {
                fVar1 = *pfVar5;
                pfVar5 = pfVar5 + 1;
                iVar3 = iVar3 + -1;
                *pfVar4 = fVar1 * fVar2 + *pfVar4;
                pfVar4 = pfVar4 + 1;
              } while (iVar3 != 0);
            }
          }
          else if (*(int *)(iVar3 + 4) == 1) {
            local_24 = pfVar8[-2] - *local_8;
            local_20 = pfVar8[-1] - *(float *)(iVar7 + -4 + (int)pfVar6);
            local_1c = *pfVar8 - *(float *)(iVar7 + (int)pfVar6);
            fVar2 = SQRT(local_1c * local_1c + local_20 * local_20 + local_24 * local_24);
            if (fVar2 < *(float *)(iVar3 + 0x28)) {
              local_18 = fVar2;
              FUN_00492440(&local_24);
              fVar1 = *pfVar6 * local_1c + pfVar6[-1] * local_20 + pfVar6[-2] * local_24;
              if (0.0 < fVar1) {
                fVar2 = fVar2 * param_9;
                *pfVar9 = (*(float *)(iVar3 + 0x18) - fVar2) * fVar1 + *pfVar9;
                pfVar9[1] = (*(float *)(iVar3 + 0x1c) - fVar2) * fVar1 + pfVar9[1];
                pfVar9[2] = (*(float *)(iVar3 + 0x20) - fVar2) * fVar1 + pfVar9[2];
              }
            }
          }
          iVar3 = 4;
          pfVar5 = pfVar9;
          do {
            iVar3 = iVar3 + -1;
            *pfVar5 = *(float *)((param_6 - param_7) + (int)pfVar5) * *pfVar5;
            pfVar5 = pfVar5 + 1;
          } while (iVar3 != 0);
          param_5 = param_5 + -1;
          pfVar8 = pfVar8 + -3;
          local_c = local_c + -1;
          iVar7 = local_10;
        } while (local_c != 0);
      }
      pfVar6 = pfVar6 + -3;
      local_8 = local_8 + -3;
      pfVar9 = pfVar9 + -4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}



void FUN_00490750(int *param_1,float *param_2,int param_3,int param_4,float *param_5,int param_6,
                 float param_7,float *param_8)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float10 fVar6;
  float local_c;
  float local_8;
  float local_4;

  pfVar5 = param_8;
  *param_8 = 0.0;
  param_8[1] = 0.0;
  param_8[2] = 0.0;
  param_8[3] = 0.0;
  if (param_3 != 0) {
    param_8 = (float *)param_1;
    do {
      iVar1 = (int)*param_8;
      if (*(int *)(iVar1 + 8) != 0) {
        if (*(int *)(iVar1 + 4) == 0) {
          local_c = *param_2;
          local_8 = param_2[1];
          local_4 = param_2[2];
          FUN_00492440(&local_c);
          fVar3 = local_c * *param_5 + param_5[2] * local_4 + param_5[1] * local_8;
          if (0.0 < fVar3) {
            *pfVar5 = *(float *)(iVar1 + 0x18) * fVar3 + *pfVar5;
            pfVar5[1] = *(float *)(iVar1 + 0x1c) * fVar3 + pfVar5[1];
            pfVar5[2] = *(float *)(iVar1 + 0x20) * fVar3 + pfVar5[2];
          }
        }
        else if (*(int *)(iVar1 + 4) == 1) {
          piVar2 = *(int **)(param_4 + 0x14);
          local_c = *param_2 - *(float *)(param_6 + *piVar2 * 0xc);
          local_8 = param_2[1] - *(float *)(param_6 + 4 + *piVar2 * 0xc);
          local_4 = param_2[2] - *(float *)(param_6 + 8 + *piVar2 * 0xc);
          fVar6 = (float10)FUN_0048ec50(param_2,param_5,param_6 + *piVar2 * 0xc);
          if (fVar6 < (float10)*(float *)(iVar1 + 0x28)) {
            FUN_00492440(&local_c);
            fVar3 = local_c * *param_5 + param_5[2] * local_4 + param_5[1] * local_8;
            if (0.0 < fVar3) {
              fVar4 = (float)fVar6 * param_7;
              *pfVar5 = (*(float *)(iVar1 + 0x18) - fVar4) * fVar3 + *pfVar5;
              pfVar5[1] = (*(float *)(iVar1 + 0x1c) - fVar4) * fVar3 + pfVar5[1];
              pfVar5[2] = (*(float *)(iVar1 + 0x20) - fVar4) * fVar3 + pfVar5[2];
            }
          }
        }
      }
      param_8 = param_8 + 1;
      param_2 = param_2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



float10 FUN_00490930(float *param_1)

{
  return ((float10)param_1[1] + (float10)param_1[2] + (float10)*param_1) * (float10)0.3333333;
}



undefined4 FUN_00490950(undefined4 param_1)

{
  int iVar1;

  if (DAT_00df7f30 != 0) {
    return 1;
  }
  DAT_00ecc428 = param_1;
  FUN_0048db40();
  iVar1 = FUN_00493df0();
  if (iVar1 != 0) {
    return 0;
  }
  DAT_00df7f30 = 1;
  return 1;
}



void FUN_00490990(void)

{
  if (DAT_00df7f30 == 1) {
    FUN_00493e10();
    DAT_00df7f30 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004909b0(void)

{
  int iVar1;

  if (DAT_00df7f30 == 0) {
    return 0;
  }
  if (DAT_00df7f34 != 0) {
    return 1;
  }
  iVar1 = FUN_00493e40();
  if (iVar1 != 0) {
    return 0;
  }
  DAT_00ecc430 = 4;
  DAT_00ecc424 = 3;
  _DAT_00ecc438 = 1;
  DAT_00df7f34 = 1;
  return 1;
}



void FUN_00490a00(void)

{
  if (DAT_00df7f34 != 0) {
    FUN_00493e60();
    DAT_00df7f34 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00490a20(undefined4 param_1)

{
  _DAT_00ecc438 = param_1;
  return;
}



void FUN_00490a30(undefined4 param_1)

{
  DAT_00ecc430 = param_1;
  return;
}



void FUN_00490a40(undefined4 param_1)

{
  DAT_00ecc424 = param_1;
  return;
}



int FUN_00490a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;

  iVar1 = (**(code **)(DAT_00ecc428 + 0x20))(0x20);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00490aa0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}



undefined4
FUN_00490aa0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 & 1) == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = *(int *)(param_3 + 0xc) - 1;
    param_1[7] = *(int *)(param_3 + 0x10) - 1;
  }
  else {
    param_1[4] = param_4;
    param_1[5] = param_5;
    param_1[6] = param_6;
    param_1[7] = param_7;
  }
  param_1[2] = (uint)((float)param_1[4] + (float)((param_1[6] - param_1[4]) + 1) * 0.5);
  param_1[3] = (uint)((float)param_1[5] + (float)((param_1[7] - param_1[5]) + 1) * 0.5);
  return 1;
}



void FUN_00490b50(int param_1)

{
  if (param_1 != 0) {
    FUN_00426910(param_1);
    (**(code **)(DAT_00ecc428 + 0x24))(param_1);
  }
  return;
}



uint FUN_00490b70(undefined4 param_1)

{
  uint uVar1;
  int iVar2;

  uVar1 = (**(code **)(DAT_00ecc428 + 0x20))(0x40);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00490ba0(uVar1,param_1);
  return -(uint)(iVar2 != 0) & uVar1;
}



undefined4 FUN_00490ba0(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[7] = 0;
  param_1[2] = 4;
  param_1[3] = 3;
  param_1[0xc] = 4;
  param_1[0xd] = 3;
  param_1[0xf] = param_2;
  return 1;
}



void FUN_00490bf0(int param_1)

{
  if (param_1 != 0) {
    FUN_00490c10(param_1);
    (**(code **)(DAT_00ecc428 + 0x24))(param_1);
  }
  return;
}



void FUN_00490c10(int *param_1)

{
  if (*param_1 == 1) {
    if (param_1[7] != 0) {
      (**(code **)(DAT_00ecc428 + 0x24))(param_1[7]);
      param_1[7] = 0;
    }
    if (param_1[8] != 0) {
      (**(code **)(DAT_00ecc428 + 0x24))(param_1[8]);
      param_1[8] = 0;
    }
    if (param_1[9] != 0) {
      (**(code **)(DAT_00ecc428 + 0x24))(param_1[9]);
      param_1[9] = 0;
    }
  }
  if (param_1[4] != 0) {
    FUN_00490b50(param_1[4]);
    param_1[4] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 *
FUN_00490c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;

  DAT_00ecc434 = param_3;
  _DAT_00ecc42c = param_4;
  if (DAT_00ecc430 != 0) {
    switch(*param_1) {
    case 0:
    case 2:
    case 3:
      return (undefined4 *)0x0;
    case 1:
      puVar1 = (undefined4 *)FUN_0048efe0(param_1,param_2);
      return puVar1;
    case 4:
      puVar1 = (undefined4 *)FUN_004945e0(param_1,param_2);
      return puVar1;
    case 5:
      puVar1 = (undefined4 *)FUN_00494330(param_1,param_2);
      return puVar1;
    case 6:
      param_1 = (undefined4 *)FUN_00493e80(param_1,param_2);
    }
    return param_1;
  }
  return (undefined4 *)0x0;
}



void FUN_00490d10(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  float local_3c;
  float local_38;
  float local_34;
  undefined local_30 [48];

  FUN_00492930(local_30,param_2 + 0x9c);
  FUN_00492f40(local_30,*(int *)(param_2 + 0x80) * 0x30 + *(int *)(param_1 + 0x1c));
  iVar2 = *(int *)(param_2 + 0x8c);
  if (iVar2 != 0) {
    local_3c = -*(float *)(iVar2 + 0x9c);
    local_38 = -*(float *)(iVar2 + 0xa0);
    local_34 = -*(float *)(iVar2 + 0xa4);
    FUN_00493160(local_30,&local_3c);
  }
  FUN_00492b70(*(int *)(param_2 + 0x80) * 0x30 + *(int *)(param_1 + 0x1c),param_3,local_30);
  if (*(int *)(param_2 + 0x90) != 0) {
    iVar2 = *(int *)(param_2 + 0x94);
    uVar1 = 0;
    if (*(int *)(param_2 + 0x90) != 0) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x24) + *(int *)(iVar2 + 0x80) * 4) == 0) {
          FUN_00490d10(param_1,iVar2,*(int *)(param_2 + 0x80) * 0x30 + *(int *)(param_1 + 0x1c));
        }
        iVar2 = *(int *)(iVar2 + 0x98);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_2 + 0x90));
    }
  }
  return;
}



undefined4
FUN_00490e10(int param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6,
            uint param_7)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_18;
  int local_14;
  uint local_10;

  iVar3 = FUN_00494980(param_1,&param_2,&param_3,&param_4,&param_5);
  if (iVar3 != 0) {
    piVar2 = *(int **)(param_1 + 4);
    if (piVar2[9] == 8) {
      local_18 = param_5 - param_3;
      local_14 = param_4 - param_2;
      local_10 = 0x80000000;
      iVar3 = ((local_14 < 1) - 1 & 2) - 1;
      iVar4 = ((local_18 < 1) - 1 & 2) - 1;
      if (iVar3 < 0) {
        local_18 = -local_18;
      }
      if (0 < iVar4) {
        local_14 = -local_14;
      }
      if ((param_7 & 0x80000000) != 0) {
        *(undefined *)(piVar2[6] * param_3 + piVar2[0x16] + param_2) = (undefined)param_6;
      }
      uVar7 = 0;
      while ((param_2 != param_4 || (param_3 != param_5))) {
        local_10 = local_10 >> 1;
        if (local_10 == 0) {
          local_10 = 0x80000000;
        }
        uVar1 = uVar7 + local_18;
        uVar7 = uVar7 + local_14;
        if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
            (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
          param_2 = param_2 + iVar3;
          uVar7 = uVar1;
        }
        else {
          param_3 = param_3 + iVar4;
        }
        if ((param_7 & local_10) != 0) {
          *(undefined *)
           (*(int *)(*(int *)(param_1 + 4) + 0x18) * param_3 +
            *(int *)(*(int *)(param_1 + 4) + 0x58) + param_2) = (undefined)param_6;
        }
      }
    }
    else {
      iVar3 = *piVar2;
      if (iVar3 == 1) {
        FUN_00488370(piVar2);
      }
      local_18 = param_5 - param_3;
      local_14 = param_4 - param_2;
      local_10 = 0x80000000;
      iVar4 = ((local_14 < 1) - 1 & 2) - 1;
      iVar5 = ((local_18 < 1) - 1 & 2) - 1;
      if (iVar4 < 0) {
        local_18 = -local_18;
      }
      if (0 < iVar5) {
        local_14 = -local_14;
      }
      if ((param_7 & 0x80000000) != 0) {
        *(undefined2 *)
         (*(int *)(*(int *)(param_1 + 4) + 0x58) +
         (*(int *)(*(int *)(param_1 + 4) + 0x1c) * param_3 + param_2) * 2) = param_6;
      }
      uVar7 = 0;
      iVar6 = param_2;
      iVar8 = param_3;
      while ((iVar6 != param_4 || (iVar8 != param_5))) {
        local_10 = local_10 >> 1;
        if (local_10 == 0) {
          local_10 = 0x80000000;
        }
        uVar1 = uVar7 + local_18;
        uVar7 = uVar7 + local_14;
        if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
            (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
          iVar6 = iVar6 + iVar4;
          uVar7 = uVar1;
        }
        else {
          iVar8 = iVar8 + iVar5;
        }
        if ((param_7 & local_10) != 0) {
          *(undefined2 *)
           (*(int *)(*(int *)(param_1 + 4) + 0x58) +
           (*(int *)(*(int *)(param_1 + 4) + 0x1c) * iVar8 + iVar6) * 2) = param_6;
        }
      }
      if (iVar3 == 1) {
        FUN_004883c0(*(undefined4 *)(param_1 + 4));
      }
    }
    return 1;
  }
  return 0;
}



void FUN_004910a0(undefined4 param_1,undefined4 param_2,uint param_3,uint *param_4,
                 undefined4 *param_5,float *param_6)

{
  undefined4 *puVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;

  puVar1 = param_5;
  puVar3 = param_4;
  switch(param_2) {
  case 0:
    uVar7 = 0;
    if (*param_4 != 0) {
      iVar5 = 0;
      do {
        puVar1 = (undefined4 *)(param_4[3] + *(int *)(param_4[1] + uVar7 * 4) * 0xc);
        puVar9 = (undefined4 *)(iVar5 + param_5[3]);
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 0xc;
        *puVar9 = *puVar1;
        puVar9[1] = puVar1[1];
        puVar9[2] = puVar1[2];
      } while (uVar7 < *param_4);
    }
    break;
  case 1:
  case 2:
    uVar7 = 0;
    if (*param_4 != 0) {
      iVar5 = 0;
      do {
        puVar1 = (undefined4 *)(param_4[3] + *(int *)(param_4[1] + uVar7 * 4) * 0xc);
        puVar9 = (undefined4 *)(param_5[3] + iVar5);
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 0xc;
        *puVar9 = *puVar1;
        puVar9[1] = puVar1[1];
        puVar9[2] = puVar1[2];
      } while (uVar7 < *param_4);
    }
    if (*DAT_00df7f2c == 1) {
      uVar6 = FUN_00494c60();
      *param_5 = uVar6;
      return;
    }
    uVar6 = FUN_00495600(param_1,param_5[3],*param_4);
    *param_5 = uVar6;
    return;
  case 3:
    switch(param_3) {
    case 0:
    case 1:
      uVar7 = 0;
      if (*param_4 != 0) {
        iVar5 = 0;
        do {
          puVar1 = (undefined4 *)(param_4[3] + *(int *)(param_4[1] + uVar7 * 4) * 0xc);
          puVar9 = (undefined4 *)(iVar5 + param_5[3]);
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 0xc;
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          puVar9[2] = puVar1[2];
        } while (uVar7 < *param_4);
      }
      break;
    case 2:
      uVar7 = 0;
      if (*param_4 != 0) {
        iVar5 = 0;
        do {
          puVar1 = (undefined4 *)(param_4[3] + *(int *)(param_4[1] + uVar7 * 4) * 0xc);
          puVar9 = (undefined4 *)(iVar5 + param_5[3]);
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 0xc;
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          puVar9[2] = puVar1[2];
        } while (uVar7 < *param_4);
      }
      break;
    case 3:
      iVar5 = 0;
      if (param_4[6] == 0) {
        uVar7 = 0;
        if (*param_4 != 0) {
          param_4 = (uint *)0x0;
          do {
            puVar1 = (undefined4 *)(puVar3[3] + *(int *)(puVar3[1] + uVar7 * 4) * 0xc);
            puVar9 = (undefined4 *)((int)param_4 + param_5[3]);
            *puVar9 = *puVar1;
            puVar9[1] = puVar1[1];
            puVar9[2] = puVar1[2];
            pfVar11 = (float *)(puVar3[5] + *(int *)(puVar3[1] + uVar7 * 4) * 0x10);
            if (*pfVar11 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            *(float *)(iVar5 + param_5[5]) = fVar2;
            iVar4 = *(int *)(puVar3[1] + uVar7 * 4) * 0x10;
            pfVar11 = (float *)(iVar4 + 4 + puVar3[5]);
            if (*(float *)(iVar4 + 4 + puVar3[5]) < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            *(float *)(iVar5 + 4 + param_5[5]) = fVar2;
            iVar4 = *(int *)(puVar3[1] + uVar7 * 4) * 0x10;
            pfVar11 = (float *)(iVar4 + 8 + puVar3[5]);
            if (*(float *)(iVar4 + 8 + puVar3[5]) < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            *(float *)(iVar5 + 8 + param_5[5]) = fVar2;
            iVar4 = *(int *)(puVar3[1] + uVar7 * 4) * 0x10;
            pfVar11 = (float *)(iVar4 + 0xc + puVar3[5]);
            if (*(float *)(iVar4 + 0xc + puVar3[5]) < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            uVar7 = uVar7 + 1;
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)(iVar5 + 0xc + param_5[5]) = fVar2;
            iVar5 = iVar5 + 0x10;
          } while (uVar7 < *puVar3);
        }
      }
      else {
        uVar7 = 0;
        if (*param_4 != 0) {
          param_4 = (uint *)0x0;
          do {
            puVar1 = (undefined4 *)(puVar3[3] + *(int *)(puVar3[1] + uVar7 * 4) * 0xc);
            puVar9 = (undefined4 *)((int)param_4 + param_5[3]);
            *puVar9 = *puVar1;
            puVar9[1] = puVar1[1];
            puVar9[2] = puVar1[2];
            fVar2 = *(float *)(*(int *)(puVar3[1] + uVar7 * 4) * 0x10 + puVar3[5]) +
                    *(float *)(iVar5 + puVar3[6]);
            if (fVar2 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            *(float *)(param_5[5] + iVar5) = fVar2;
            fVar2 = *(float *)(*(int *)(puVar3[1] + uVar7 * 4) * 0x10 + 4 + puVar3[5]) +
                    *(float *)(iVar5 + 4 + puVar3[6]);
            if (fVar2 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            *(float *)(param_5[5] + 4 + iVar5) = fVar2;
            fVar2 = *(float *)(*(int *)(puVar3[1] + uVar7 * 4) * 0x10 + 8 + puVar3[5]) +
                    *(float *)(iVar5 + 8 + puVar3[6]);
            if (fVar2 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            *(float *)(param_5[5] + 8 + iVar5) = fVar2;
            iVar4 = *(int *)(puVar3[1] + uVar7 * 4) * 0x10;
            pfVar11 = (float *)(iVar4 + 0xc + puVar3[5]);
            if (*(float *)(iVar4 + 0xc + puVar3[5]) < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            uVar7 = uVar7 + 1;
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)(param_5[5] + 0xc + iVar5) = fVar2;
            iVar5 = iVar5 + 0x10;
          } while (uVar7 < *puVar3);
        }
      }
      if (*DAT_00df7f2c == 1) {
        uVar6 = FUN_00496e40(param_1,param_5[3],param_5[5],*puVar3);
        *param_5 = uVar6;
        return;
      }
      uVar6 = FUN_00497da0(param_1,param_5[3],param_5[5],*puVar3);
      *param_5 = uVar6;
      return;
    default:
      goto switchD_004910b1_caseD_5;
    }
    break;
  case 4:
    if (-1 < (int)param_3) {
      if ((int)param_3 < 3) {
        param_3 = 0;
        if (*param_4 != 0) {
          param_4 = (uint *)0x0;
          do {
            iVar8 = param_3 * 8;
            puVar1 = (undefined4 *)(puVar3[3] + *(int *)(puVar3[1] + param_3 * 4) * 0xc);
            puVar9 = (undefined4 *)((int)param_4 + param_5[3]);
            *puVar9 = *puVar1;
            puVar9[1] = puVar1[1];
            puVar9[2] = puVar1[2];
            iVar5 = param_5[4];
            iVar4 = *(int *)(puVar3[2] + param_3 * 4);
            uVar7 = puVar3[4];
            *(undefined4 *)(iVar5 + iVar8) = *(undefined4 *)(uVar7 + iVar4 * 8);
            *(undefined4 *)(iVar5 + 4 + iVar8) = *(undefined4 *)(uVar7 + 4 + iVar4 * 8);
            *(float *)(param_5[4] + iVar8) = *param_6 + *(float *)(param_5[4] + iVar8);
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)(param_5[4] + 4 + iVar8) = *(float *)(param_5[4] + 4 + iVar8) + param_6[1];
            param_3 = param_3 + 1;
          } while (param_3 < *puVar3);
        }
        if (*DAT_00df7f2c == 1) {
          uVar6 = FUN_00498a60(param_1,param_5[3],param_5[4],*puVar3);
          *param_5 = uVar6;
          return;
        }
        uVar6 = FUN_00499840(param_1,param_5[3],param_5[4],*puVar3);
        *param_5 = uVar6;
      }
      else if (param_3 == 3) {
        param_3 = 0;
        if (param_4[6] == 0) {
          if (*param_4 != 0) {
            param_5 = (undefined4 *)0x0;
            param_4 = (uint *)0x0;
            do {
              puVar9 = (undefined4 *)(puVar3[3] + *(int *)(puVar3[1] + param_3 * 4) * 0xc);
              puVar10 = (undefined4 *)((int)param_4 + puVar1[3]);
              *puVar10 = *puVar9;
              puVar10[1] = puVar9[1];
              puVar10[2] = puVar9[2];
              iVar4 = puVar1[4];
              iVar5 = param_3 * 8;
              iVar8 = *(int *)(puVar3[2] + param_3 * 4);
              uVar7 = puVar3[4];
              *(undefined4 *)(iVar4 + iVar5) = *(undefined4 *)(uVar7 + iVar8 * 8);
              *(undefined4 *)(iVar4 + 4 + iVar5) = *(undefined4 *)(uVar7 + 4 + iVar8 * 8);
              *(float *)(puVar1[4] + iVar5) = *param_6 + *(float *)(puVar1[4] + iVar5);
              *(float *)(puVar1[4] + 4 + iVar5) = *(float *)(puVar1[4] + 4 + iVar5) + param_6[1];
              pfVar11 = (float *)(puVar3[5] + *(int *)(puVar3[1] + param_3 * 4) * 0x10);
              if (*pfVar11 < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < *pfVar11) {
                fVar2 = 1.0;
              }
              else {
                fVar2 = *pfVar11;
              }
              *(float *)((int)param_5 + puVar1[5]) = fVar2;
              iVar5 = *(int *)(puVar3[1] + param_3 * 4) * 0x10;
              pfVar11 = (float *)(iVar5 + 4 + puVar3[5]);
              if (*(float *)(iVar5 + 4 + puVar3[5]) < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < *pfVar11) {
                fVar2 = 1.0;
              }
              else {
                fVar2 = *pfVar11;
              }
              *(float *)((int)param_5 + 4 + puVar1[5]) = fVar2;
              iVar5 = *(int *)(puVar3[1] + param_3 * 4) * 0x10;
              pfVar11 = (float *)(iVar5 + 8 + puVar3[5]);
              if (*(float *)(iVar5 + 8 + puVar3[5]) < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < *pfVar11) {
                fVar2 = 1.0;
              }
              else {
                fVar2 = *pfVar11;
              }
              *(float *)((int)param_5 + 8 + puVar1[5]) = fVar2;
              iVar5 = *(int *)(puVar3[1] + param_3 * 4) * 0x10;
              pfVar11 = (float *)(iVar5 + 0xc + puVar3[5]);
              if (*(float *)(iVar5 + 0xc + puVar3[5]) < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < *pfVar11) {
                fVar2 = 1.0;
              }
              else {
                fVar2 = *pfVar11;
              }
              param_3 = param_3 + 1;
              param_4 = (uint *)((int)param_4 + 0xc);
              *(float *)((int)param_5 + 0xc + puVar1[5]) = fVar2;
              param_5 = (undefined4 *)((int)param_5 + 0x10);
            } while (param_3 < *puVar3);
          }
        }
        else if (*param_4 != 0) {
          param_5 = (undefined4 *)0x0;
          param_4 = (uint *)0x0;
          do {
            puVar9 = (undefined4 *)(puVar3[3] + *(int *)(puVar3[1] + param_3 * 4) * 0xc);
            puVar10 = (undefined4 *)((int)param_4 + puVar1[3]);
            *puVar10 = *puVar9;
            puVar10[1] = puVar9[1];
            puVar10[2] = puVar9[2];
            iVar4 = puVar1[4];
            iVar5 = param_3 * 8;
            iVar8 = *(int *)(puVar3[2] + param_3 * 4);
            uVar7 = puVar3[4];
            *(undefined4 *)(iVar4 + iVar5) = *(undefined4 *)(uVar7 + iVar8 * 8);
            *(undefined4 *)(iVar4 + 4 + iVar5) = *(undefined4 *)(uVar7 + 4 + iVar8 * 8);
            *(float *)(puVar1[4] + iVar5) = *param_6 + *(float *)(puVar1[4] + iVar5);
            *(float *)(puVar1[4] + 4 + iVar5) = *(float *)(puVar1[4] + 4 + iVar5) + param_6[1];
            fVar2 = *(float *)(*(int *)(puVar3[1] + param_3 * 4) * 0x10 + puVar3[5]) +
                    *(float *)((int)param_5 + puVar3[6]);
            if (fVar2 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            *(float *)((int)param_5 + puVar1[5]) = fVar2;
            fVar2 = *(float *)(*(int *)(puVar3[1] + param_3 * 4) * 0x10 + 4 + puVar3[5]) +
                    *(float *)((int)param_5 + 4 + puVar3[6]);
            if (fVar2 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            *(float *)((int)param_5 + 4 + puVar1[5]) = fVar2;
            fVar2 = *(float *)(*(int *)(puVar3[1] + param_3 * 4) * 0x10 + 8 + puVar3[5]) +
                    *(float *)((int)param_5 + 8 + puVar3[6]);
            if (fVar2 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            *(float *)((int)param_5 + 8 + puVar1[5]) = fVar2;
            iVar5 = *(int *)(puVar3[1] + param_3 * 4) * 0x10;
            pfVar11 = (float *)(iVar5 + 0xc + puVar3[5]);
            if (*(float *)(iVar5 + 0xc + puVar3[5]) < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            param_3 = param_3 + 1;
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)((int)param_5 + 0xc + puVar1[5]) = fVar2;
            param_5 = (undefined4 *)((int)param_5 + 0x10);
          } while (param_3 < *puVar3);
        }
        if (*DAT_00df7f2c == 1) {
          uVar6 = FUN_0049a390(param_1,puVar1[3],puVar1[4],puVar1[5],*puVar3);
          *puVar1 = uVar6;
          return;
        }
        uVar6 = FUN_0049b7d0(param_1,puVar1[3],puVar1[4],puVar1[5],*puVar3);
        *puVar1 = uVar6;
        return;
      }
    }
  default:
switchD_004910b1_caseD_5:
    return;
  }
  if (*DAT_00df7f2c == 1) {
    uVar6 = FUN_00495d50();
    *param_5 = uVar6;
    return;
  }
  uVar6 = FUN_004966f0(param_1,param_5[3],*param_4);
  *param_5 = uVar6;
  return;
}



void FUN_00491ac0(undefined4 param_1,int param_2,uint *param_3,uint *param_4,float *param_5)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  float *pfVar11;

  puVar6 = param_4;
  puVar5 = param_3;
  switch(param_1) {
  case 0:
    uVar9 = 0;
    if (*param_3 != 0) {
      iVar8 = 0;
      do {
        puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar9 * 4) * 0xc);
        puVar10 = (undefined4 *)(param_4[3] + iVar8);
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 0xc;
        *puVar10 = *puVar1;
        puVar10[1] = puVar1[1];
        puVar10[2] = puVar1[2];
      } while (uVar9 < *param_3);
      *param_4 = *param_3;
      return;
    }
    break;
  case 1:
  case 2:
    uVar9 = 0;
    if (*param_3 != 0) {
      iVar8 = 0;
      do {
        puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar9 * 4) * 0xc);
        puVar10 = (undefined4 *)(param_4[3] + iVar8);
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 0xc;
        *puVar10 = *puVar1;
        puVar10[1] = puVar1[1];
        puVar10[2] = puVar1[2];
      } while (uVar9 < *param_3);
      *param_4 = *param_3;
      return;
    }
    break;
  case 3:
    switch(param_2) {
    case 0:
    case 1:
      uVar9 = 0;
      if (*param_3 != 0) {
        iVar8 = 0;
        do {
          puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar9 * 4) * 0xc);
          puVar10 = (undefined4 *)(param_4[3] + iVar8);
          uVar9 = uVar9 + 1;
          iVar8 = iVar8 + 0xc;
          *puVar10 = *puVar1;
          puVar10[1] = puVar1[1];
          puVar10[2] = puVar1[2];
        } while (uVar9 < *param_3);
        goto LAB_00491bc6;
      }
      break;
    case 2:
      uVar9 = 0;
      if (*param_3 != 0) {
        iVar8 = 0;
        do {
          puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar9 * 4) * 0xc);
          puVar10 = (undefined4 *)(param_4[3] + iVar8);
          uVar9 = uVar9 + 1;
          iVar8 = iVar8 + 0xc;
          *puVar10 = *puVar1;
          puVar10[1] = puVar1[1];
          puVar10[2] = puVar1[2];
        } while (uVar9 < *param_3);
      }
      break;
    case 3:
      uVar9 = 0;
      if (param_3[6] == 0) {
        if (*param_3 != 0) {
          iVar8 = 0;
          param_4 = (uint *)0x0;
          do {
            puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar9 * 4) * 0xc);
            puVar10 = (undefined4 *)((int)param_4 + puVar6[3]);
            *puVar10 = *puVar1;
            puVar10[1] = puVar1[1];
            puVar10[2] = puVar1[2];
            pfVar11 = (float *)(param_3[5] + *(int *)(param_3[1] + uVar9 * 4) * 0x10);
            if (*pfVar11 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            *(float *)(iVar8 + puVar6[5]) = fVar2;
            iVar7 = *(int *)(param_3[1] + uVar9 * 4) * 0x10;
            pfVar11 = (float *)(iVar7 + 4 + param_3[5]);
            if (*(float *)(iVar7 + 4 + param_3[5]) < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            *(float *)(iVar8 + 4 + puVar6[5]) = fVar2;
            iVar7 = *(int *)(param_3[1] + uVar9 * 4) * 0x10;
            pfVar11 = (float *)(iVar7 + 8 + param_3[5]);
            if (*(float *)(iVar7 + 8 + param_3[5]) < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            *(float *)(iVar8 + 8 + puVar6[5]) = fVar2;
            iVar7 = *(int *)(param_3[1] + uVar9 * 4) * 0x10;
            pfVar11 = (float *)(iVar7 + 0xc + param_3[5]);
            if (*(float *)(iVar7 + 0xc + param_3[5]) < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            uVar9 = uVar9 + 1;
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)(iVar8 + 0xc + puVar6[5]) = fVar2;
            iVar8 = iVar8 + 0x10;
          } while (uVar9 < *param_3);
          *puVar6 = *param_3;
          return;
        }
      }
      else {
        uVar9 = 0;
        if (*param_3 != 0) {
          iVar8 = 0;
          param_4 = (uint *)0x0;
          do {
            puVar1 = (undefined4 *)(param_3[3] + *(int *)(param_3[1] + uVar9 * 4) * 0xc);
            puVar10 = (undefined4 *)((int)param_4 + puVar6[3]);
            *puVar10 = *puVar1;
            puVar10[1] = puVar1[1];
            puVar10[2] = puVar1[2];
            fVar2 = *(float *)(*(int *)(param_3[1] + uVar9 * 4) * 0x10 + param_3[5]) +
                    *(float *)(iVar8 + param_3[6]);
            if (fVar2 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            *(float *)(iVar8 + puVar6[5]) = fVar2;
            fVar2 = *(float *)(*(int *)(param_3[1] + uVar9 * 4) * 0x10 + 4 + param_3[5]) +
                    *(float *)(iVar8 + 4 + param_3[6]);
            if (fVar2 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            *(float *)(iVar8 + 4 + puVar6[5]) = fVar2;
            fVar2 = *(float *)(*(int *)(param_3[1] + uVar9 * 4) * 0x10 + 8 + param_3[5]) +
                    *(float *)(iVar8 + 8 + param_3[6]);
            if (fVar2 < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            *(float *)(iVar8 + 8 + puVar6[5]) = fVar2;
            iVar7 = *(int *)(param_3[1] + uVar9 * 4) * 0x10;
            pfVar11 = (float *)(iVar7 + 0xc + param_3[5]);
            if (*(float *)(iVar7 + 0xc + param_3[5]) < 0.0) {
              fVar2 = 0.0;
            }
            else if (1.0 < *pfVar11) {
              fVar2 = 1.0;
            }
            else {
              fVar2 = *pfVar11;
            }
            uVar9 = uVar9 + 1;
            param_4 = (uint *)((int)param_4 + 0xc);
            *(float *)(iVar8 + 0xc + puVar6[5]) = fVar2;
            iVar8 = iVar8 + 0x10;
          } while (uVar9 < *param_3);
          *puVar6 = *param_3;
          return;
        }
      }
LAB_004922f3:
      *puVar6 = *puVar5;
      return;
    default:
      return;
    }
    *param_4 = *param_3;
    return;
  case 4:
    if (-1 < param_2) {
      if (param_2 < 3) {
        uVar9 = 0;
        if (*param_3 != 0) {
          param_3 = (uint *)0x0;
          do {
            puVar1 = (undefined4 *)(puVar5[3] + *(int *)(puVar5[1] + uVar9 * 4) * 0xc);
            puVar10 = (undefined4 *)((int)param_3 + param_4[3]);
            *puVar10 = *puVar1;
            puVar10[1] = puVar1[1];
            puVar10[2] = puVar1[2];
            uVar3 = puVar5[4];
            uVar4 = param_4[4];
            iVar8 = *(int *)(puVar5[2] + uVar9 * 4);
            *(undefined4 *)(uVar4 + uVar9 * 8) = *(undefined4 *)(uVar3 + iVar8 * 8);
            *(undefined4 *)(uVar4 + 4 + uVar9 * 8) = *(undefined4 *)(uVar3 + 4 + iVar8 * 8);
            *(float *)(param_4[4] + uVar9 * 8) = *param_5 + *(float *)(param_4[4] + uVar9 * 8);
            iVar8 = uVar9 * 8;
            iVar7 = uVar9 * 8;
            uVar9 = uVar9 + 1;
            param_3 = (uint *)((int)param_3 + 0xc);
            *(float *)(param_4[4] + 4 + iVar7) = *(float *)(param_4[4] + 4 + iVar8) + param_5[1];
          } while (uVar9 < *puVar5);
        }
        *param_4 = *puVar5;
      }
      else if (param_2 == 3) {
        if (param_3[6] == 0) {
          param_4 = (uint *)0x0;
          if (*param_3 != 0) {
            param_2 = 0;
            param_3 = (uint *)0x0;
            do {
              puVar1 = (undefined4 *)(puVar5[3] + *(int *)(puVar5[1] + (int)param_4 * 4) * 0xc);
              puVar10 = (undefined4 *)((int)param_3 + puVar6[3]);
              *puVar10 = *puVar1;
              puVar10[1] = puVar1[1];
              puVar10[2] = puVar1[2];
              uVar9 = puVar6[4];
              iVar8 = (int)param_4 * 8;
              iVar7 = *(int *)(puVar5[2] + (int)param_4 * 4);
              uVar3 = puVar5[4];
              *(undefined4 *)(uVar9 + iVar8) = *(undefined4 *)(uVar3 + iVar7 * 8);
              *(undefined4 *)(uVar9 + 4 + iVar8) = *(undefined4 *)(uVar3 + 4 + iVar7 * 8);
              *(float *)(puVar6[4] + iVar8) = *param_5 + *(float *)(puVar6[4] + iVar8);
              *(float *)(puVar6[4] + 4 + iVar8) = *(float *)(puVar6[4] + 4 + iVar8) + param_5[1];
              pfVar11 = (float *)(puVar5[5] + *(int *)(puVar5[1] + (int)param_4 * 4) * 0x10);
              if (*pfVar11 < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < *pfVar11) {
                fVar2 = 1.0;
              }
              else {
                fVar2 = *pfVar11;
              }
              *(float *)(param_2 + puVar6[5]) = fVar2;
              iVar8 = *(int *)(puVar5[1] + (int)param_4 * 4) * 0x10;
              pfVar11 = (float *)(iVar8 + 4 + puVar5[5]);
              if (*(float *)(iVar8 + 4 + puVar5[5]) < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < *pfVar11) {
                fVar2 = 1.0;
              }
              else {
                fVar2 = *pfVar11;
              }
              *(float *)(param_2 + 4 + puVar6[5]) = fVar2;
              iVar8 = *(int *)(puVar5[1] + (int)param_4 * 4) * 0x10;
              pfVar11 = (float *)(iVar8 + 8 + puVar5[5]);
              if (*(float *)(iVar8 + 8 + puVar5[5]) < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < *pfVar11) {
                fVar2 = 1.0;
              }
              else {
                fVar2 = *pfVar11;
              }
              *(float *)(param_2 + 8 + puVar6[5]) = fVar2;
              iVar8 = *(int *)(puVar5[1] + (int)param_4 * 4) * 0x10;
              pfVar11 = (float *)(iVar8 + 0xc + puVar5[5]);
              if (*(float *)(iVar8 + 0xc + puVar5[5]) < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < *pfVar11) {
                fVar2 = 1.0;
              }
              else {
                fVar2 = *pfVar11;
              }
              param_4 = (uint *)((int)param_4 + 1);
              param_3 = (uint *)((int)param_3 + 0xc);
              *(float *)(param_2 + 0xc + puVar6[5]) = fVar2;
              param_2 = param_2 + 0x10;
            } while (param_4 < *puVar5);
          }
        }
        else {
          param_4 = (uint *)0x0;
          if (*param_3 != 0) {
            param_2 = 0;
            param_3 = (uint *)0x0;
            do {
              puVar1 = (undefined4 *)(puVar5[3] + *(int *)(puVar5[1] + (int)param_4 * 4) * 0xc);
              puVar10 = (undefined4 *)((int)param_3 + puVar6[3]);
              *puVar10 = *puVar1;
              puVar10[1] = puVar1[1];
              puVar10[2] = puVar1[2];
              uVar9 = puVar6[4];
              iVar8 = (int)param_4 * 8;
              iVar7 = *(int *)(puVar5[2] + (int)param_4 * 4);
              uVar3 = puVar5[4];
              *(undefined4 *)(uVar9 + iVar8) = *(undefined4 *)(uVar3 + iVar7 * 8);
              *(undefined4 *)(uVar9 + 4 + iVar8) = *(undefined4 *)(uVar3 + 4 + iVar7 * 8);
              *(float *)(puVar6[4] + iVar8) = *param_5 + *(float *)(puVar6[4] + iVar8);
              *(float *)(puVar6[4] + 4 + iVar8) = *(float *)(puVar6[4] + 4 + iVar8) + param_5[1];
              fVar2 = *(float *)(*(int *)(puVar5[1] + (int)param_4 * 4) * 0x10 + puVar5[5]) +
                      *(float *)(param_2 + puVar5[6]);
              if (fVar2 < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < fVar2) {
                fVar2 = 1.0;
              }
              *(float *)(param_2 + puVar6[5]) = fVar2;
              fVar2 = *(float *)(*(int *)(puVar5[1] + (int)param_4 * 4) * 0x10 + 4 + puVar5[5]) +
                      *(float *)(param_2 + 4 + puVar5[6]);
              if (fVar2 < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < fVar2) {
                fVar2 = 1.0;
              }
              *(float *)(param_2 + 4 + puVar6[5]) = fVar2;
              fVar2 = *(float *)(*(int *)(puVar5[1] + (int)param_4 * 4) * 0x10 + 8 + puVar5[5]) +
                      *(float *)(param_2 + 8 + puVar5[6]);
              if (fVar2 < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < fVar2) {
                fVar2 = 1.0;
              }
              *(float *)(param_2 + 8 + puVar6[5]) = fVar2;
              iVar8 = *(int *)(puVar5[1] + (int)param_4 * 4) * 0x10;
              pfVar11 = (float *)(iVar8 + 0xc + puVar5[5]);
              if (*(float *)(iVar8 + 0xc + puVar5[5]) < 0.0) {
                fVar2 = 0.0;
              }
              else if (1.0 < *pfVar11) {
                fVar2 = 1.0;
              }
              else {
                fVar2 = *pfVar11;
              }
              param_4 = (uint *)((int)param_4 + 1);
              param_3 = (uint *)((int)param_3 + 0xc);
              *(float *)(param_2 + 0xc + puVar6[5]) = fVar2;
              param_2 = param_2 + 0x10;
            } while (param_4 < *puVar5);
            *puVar6 = *puVar5;
            return;
          }
        }
        goto LAB_004922f3;
      }
    }
    return;
  default:
    return;
  }
LAB_00491bc6:
  *param_4 = *param_3;
  return;
}



undefined4 FUN_004923c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return 1;
}



void FUN_00492410(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x18));
  }
  return;
}


// rdVector_Normalize3Acc
void FUN_00492440(float *param_1)

{
  float fVar1;

  fVar1 = SQRT(*param_1 * *param_1 + param_1[2] * param_1[2] + param_1[1] * param_1[1]);
  if (fVar1 != 0.0) {
    fVar1 = 1.0 / fVar1;
    *param_1 = fVar1 * *param_1;
    param_1[1] = param_1[1] * fVar1;
    param_1[2] = param_1[2] * fVar1;
  }
  return;
}



void FUN_004924b0(float *param_1,undefined4 *param_2,float *param_3)

{
  undefined4 *puVar1;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];

  puVar1 = param_2;
  FUN_0048c950(*param_2,&param_2,&local_1c);
  FUN_0048c950(puVar1[1],&local_14,&local_10);
  FUN_0048c950(puVar1[2],&local_18,local_c);
  *param_1 = -(local_18 * local_14) * (float)param_2 + local_c[0] * local_10;
  param_1[1] = local_18 * local_10 * (float)param_2 + local_c[0] * local_14;
  param_1[2] = -local_18 * local_1c;
  param_1[3] = -local_14 * local_1c;
  param_1[4] = local_10 * local_1c;
  param_1[5] = (float)param_2;
  param_1[6] = local_c[0] * local_14 * (float)param_2 + local_18 * local_10;
  param_1[7] = -(float)param_2 * local_c[0] * local_10 + local_18 * local_14;
  param_1[8] = local_c[0] * local_1c;
  param_1[9] = *param_3;
  param_1[10] = param_3[1];
  param_1[0xb] = param_3[2];
  return;
}



void FUN_004925d0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;

  param_1[1] = param_2[3];
  param_1[2] = param_2[6];
  param_1[5] = param_2[7];
  param_1[3] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[5];
  *param_1 = *param_2;
  param_1[4] = param_2[4];
  param_1[8] = param_2[8];
  fVar1 = param_2[10];
  fVar2 = param_2[0xb];
  fVar3 = param_2[9];
  param_1[9] = -(fVar3 * *param_2 + param_2[2] * fVar2 + param_2[1] * fVar1);
  param_1[10] = -(param_2[5] * fVar2 + param_2[3] * fVar3 + param_2[4] * fVar1);
  param_1[0xb] = -(param_2[6] * fVar3 + param_2[7] * fVar1 + param_2[8] * fVar2);
  return;
}



void FUN_00492680(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar4 = param_2[5] * param_2[5] + param_2[4] * param_2[4] + param_2[3] * param_2[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar5 = param_2[8] * param_2[8] + param_2[7] * param_2[7] + param_2[6] * param_2[6];
  param_1[1] = param_2[3] / fVar4;
  param_1[2] = param_2[6] / fVar5;
  param_1[5] = param_2[7] / fVar5;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  param_1[3] = param_2[1] / fVar1;
  param_1[6] = param_2[2] / fVar1;
  param_1[7] = param_2[5] / fVar4;
  *param_1 = *param_2 / fVar1;
  param_1[4] = param_2[4] / fVar4;
  param_1[8] = param_2[8] / fVar5;
  fVar3 = param_2[9];
  fVar1 = param_2[10];
  fVar2 = param_2[0xb];
  param_1[9] = -(fVar3 * *param_1 + fVar1 * param_1[3] + fVar2 * param_1[6]);
  param_1[10] = -(fVar2 * param_1[7] + fVar1 * param_1[4] + fVar3 * param_1[1]);
  param_1[0xb] = -(fVar2 * param_1[8] + fVar1 * param_1[5] + fVar3 * param_1[2]);
  return;
}



void FUN_00492810(float *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];

  puVar1 = param_2;
  FUN_0048c950(*param_2,&param_2,&local_1c);
  FUN_0048c950(puVar1[1],&local_14,&local_10);
  FUN_0048c950(puVar1[2],&local_18,local_c);
  *param_1 = -(local_18 * local_14) * (float)param_2 + local_c[0] * local_10;
  param_1[1] = local_18 * local_10 * (float)param_2 + local_c[0] * local_14;
  param_1[2] = -local_18 * local_1c;
  param_1[3] = -local_14 * local_1c;
  param_1[4] = local_10 * local_1c;
  param_1[5] = (float)param_2;
  param_1[6] = local_c[0] * local_14 * (float)param_2 + local_18 * local_10;
  param_1[7] = -(float)param_2 * local_c[0] * local_10 + local_18 * local_14;
  param_1[8] = local_c[0] * local_1c;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  return;
}



void FUN_00492930(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  puVar2 = &DAT_004af880;
  puVar3 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[9] = *param_2;
  param_1[10] = param_2[1];
  param_1[0xb] = param_2[2];
  return;
}



void FUN_00492960(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;

  fVar1 = *param_1;
  fVar3 = param_1[3];
  fVar4 = param_1[4];
  fVar6 = -param_1[1];
  fVar2 = param_1[2];
  fVar5 = param_1[5];
  fVar7 = fVar4 * fVar4 + fVar3 * fVar3;
  fVar8 = SQRT(fVar7);
  if (0.001 <= fVar8) {
    fVar9 = (float10)FUN_0048d010(fVar4 / fVar8);
    fVar9 = (float10)90.0 - fVar9;
    if (0.0 < fVar3) {
      fVar9 = -fVar9;
    }
    param_2[1] = (float)fVar9;
  }
  else {
    fVar9 = (float10)FUN_0048d010(--fVar1);
    fVar9 = (float10)90.0 - fVar9;
    if (((0.0 < fVar6) && (0.0 < fVar5)) || ((fVar6 < 0.0 && (fVar5 < 0.0)))) {
      fVar9 = -fVar9;
    }
    param_2[2] = (float)fVar9;
    param_2[1] = 0.0;
  }
  if (0.001 <= fVar8) {
    fVar7 = fVar7 / fVar8;
    if (fVar7 < 1.0) {
      fVar9 = (float10)FUN_0048d010(fVar7);
      *param_2 = (float)((float10)90.0 - fVar9);
    }
    else {
      *param_2 = 0.0;
    }
  }
  else {
    *param_2 = 90.0;
  }
  if (fVar5 < 0.0) {
    *param_2 = -*param_2;
  }
  fVar4 = -fVar4;
  if (0.001 <= fVar8) {
    fVar1 = (fVar4 * -fVar1 + fVar6 * fVar3) / SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    if (fVar1 < 1.0) {
      if (-1.0 < fVar1) {
        fVar9 = (float10)FUN_0048d010(fVar1);
        param_2[2] = (float)((float10)90.0 - fVar9);
      }
      else {
        param_2[2] = 180.0;
      }
    }
    else {
      param_2[2] = 0.0;
    }
    if (-fVar2 < 0.0) {
      param_2[2] = -param_2[2];
      return;
    }
  }
  return;
}



void FUN_00492b70(float *param_1,float *param_2,float *param_3)

{
  *param_1 = param_2[6] * param_3[2] + param_2[3] * param_3[1] + *param_3 * *param_2;
  param_1[1] = param_3[1] * param_2[4] + param_3[2] * param_2[7] + param_2[1] * *param_3;
  param_1[2] = param_3[1] * param_2[5] + param_3[2] * param_2[8] + param_2[2] * *param_3;
  param_1[3] = param_2[3] * param_3[4] + param_2[6] * param_3[5] + param_3[3] * *param_2;
  param_1[4] = param_2[1] * param_3[3] + param_2[7] * param_3[5] + param_2[4] * param_3[4];
  param_1[5] = param_2[2] * param_3[3] + param_3[4] * param_2[5] + param_2[8] * param_3[5];
  param_1[6] = param_2[6] * param_3[8] + param_2[3] * param_3[7] + param_3[6] * *param_2;
  param_1[7] = param_2[7] * param_3[8] + param_2[4] * param_3[7] + param_2[1] * param_3[6];
  param_1[8] = param_2[5] * param_3[7] + param_2[2] * param_3[6] + param_2[8] * param_3[8];
  param_1[9] = param_2[6] * param_3[0xb] + param_2[3] * param_3[10] + param_3[9] * *param_2 +
               param_2[9];
  param_1[10] = param_2[4] * param_3[10] + param_2[7] * param_3[0xb] + param_2[1] * param_3[9] +
                param_2[10];
  param_1[0xb] = param_2[8] * param_3[0xb] + param_2[2] * param_3[9] + param_2[5] * param_3[10] +
                 param_2[0xb];
  return;
}



void FUN_00492d50(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  fVar1 = param_2[1];
  fVar2 = param_2[2];
  pfVar4 = param_1;
  pfVar5 = local_30;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  *param_1 = local_30[0] * *param_2 + fVar2 * local_18 + fVar1 * local_30[3];
  param_1[1] = local_30[1] * *param_2 + param_2[2] * local_14 + param_2[1] * local_20;
  param_1[2] = local_30[2] * *param_2 + param_2[2] * local_10 + param_2[1] * local_1c;
  param_1[3] = param_2[5] * local_18 + param_2[3] * local_30[0] + param_2[4] * local_30[3];
  param_1[4] = param_2[5] * local_14 + param_2[3] * local_30[1] + param_2[4] * local_20;
  param_1[5] = param_2[5] * local_10 + param_2[3] * local_30[2] + param_2[4] * local_1c;
  param_1[6] = param_2[6] * local_30[0] + param_2[7] * local_30[3] + param_2[8] * local_18;
  param_1[7] = param_2[6] * local_30[1] + param_2[7] * local_20 + param_2[8] * local_14;
  param_1[8] = param_2[6] * local_30[2] + param_2[7] * local_1c + param_2[8] * local_10;
  param_1[9] = param_2[9] * local_30[0] + param_2[10] * local_30[3] + param_2[0xb] * local_18 +
               local_c;
  param_1[10] = param_2[9] * local_30[1] + param_2[10] * local_20 + param_2[0xb] * local_14 +
                local_8;
  param_1[0xb] = param_2[9] * local_30[2] + param_2[10] * local_1c + param_2[0xb] * local_10 +
                 local_4;
  return;
}



void FUN_00492f40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  fVar1 = param_2[6];
  fVar2 = param_2[3];
  pfVar4 = param_1;
  pfVar5 = local_30;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  *param_1 = local_30[0] * *param_2 + fVar2 * local_30[1] + fVar1 * local_30[2];
  param_1[1] = param_2[4] * local_30[1] + param_2[7] * local_30[2] + param_2[1] * local_30[0];
  param_1[2] = param_2[2] * local_30[0] + param_2[8] * local_30[2] + param_2[5] * local_30[1];
  param_1[3] = local_30[3] * *param_2 + param_2[3] * local_20 + param_2[6] * local_1c;
  param_1[4] = param_2[4] * local_20 + param_2[7] * local_1c + param_2[1] * local_30[3];
  param_1[5] = param_2[2] * local_30[3] + param_2[8] * local_1c + param_2[5] * local_20;
  param_1[6] = local_18 * *param_2 + param_2[3] * local_14 + param_2[6] * local_10;
  param_1[7] = param_2[4] * local_14 + param_2[7] * local_10 + param_2[1] * local_18;
  param_1[8] = param_2[2] * local_18 + param_2[8] * local_10 + param_2[5] * local_14;
  param_1[9] = local_c * *param_2 + param_2[3] * local_8 + param_2[6] * local_4 + param_2[9];
  param_1[10] = param_2[4] * local_8 + param_2[7] * local_4 + param_2[1] * local_c + param_2[10];
  param_1[0xb] = param_2[2] * local_c + param_2[8] * local_4 + param_2[5] * local_8 + param_2[0xb];
  return;
}



void FUN_00493130(undefined4 param_1,undefined4 param_2)

{
  undefined local_30 [48];

  FUN_00492810(local_30,param_2);
  FUN_00492d50(param_1,local_30);
  return;
}



void FUN_00493160(int param_1,float *param_2)

{
  *(float *)(param_1 + 0x24) = *param_2 + *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) = param_2[1] + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x2c) = param_2[2] + *(float *)(param_1 + 0x2c);
  return;
}



void FUN_00493190(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_2 * *param_3 + param_2[1] * param_3[3] + param_2[2] * param_3[6];
  param_1[1] = param_3[1] * *param_2 + param_3[7] * param_2[2] + param_2[1] * param_3[4];
  param_1[2] = param_3[2] * *param_2 + param_3[8] * param_2[2] + param_2[1] * param_3[5];
  return;
}



void FUN_00493200(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_2 * *param_3 + param_2[2] * param_3[6] + param_2[1] * param_3[3] + param_3[9];
  param_1[1] = param_3[1] * *param_2 + param_3[7] * param_2[2] + param_2[1] * param_3[4] +
               param_3[10];
  param_1[2] = param_3[2] * *param_2 + param_3[8] * param_2[2] + param_2[1] * param_3[5] +
               param_3[0xb];
  return;
}



void FUN_00493270(float *param_1,float *param_2,float *param_3,int param_4)

{
  if (param_4 != 0) {
    do {
      *param_3 = *param_2 * *param_1 + param_2[2] * param_1[6] + param_2[1] * param_1[3] +
                 param_1[9];
      param_3[1] = param_2[2] * param_1[7] + param_2[1] * param_1[4] + param_1[1] * *param_2 +
                   param_1[10];
      param_3[2] = param_2[2] * param_1[8] + param_2[1] * param_1[5] + param_1[2] * *param_2 +
                   param_1[0xb];
      param_3 = param_3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return;
}



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
                    ((local_64 <= iVar10 || (local_70 < 1.0)))) &&
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
                  if ((float)piVar12[6] < 1.0) {
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
          if ((1.0 <= local_70) || (local_6c <= 0.0)) {
            if (1.0 < local_70) {
              local_70 = 1.0 / local_70;
              local_3c = local_70 * local_3c;
              local_38 = local_70 * local_38;
              local_34 = local_70 * local_34;
              local_48 = local_70 * local_48;
              local_44 = local_70 * local_44;
              local_40 = local_70 * local_40;
            }
          }
          else {
            if (1.0 < local_6c) {
              local_6c = 1.0 / local_6c;
              local_18 = local_6c * local_18;
              local_14 = local_6c * local_14;
              local_10 = local_6c * local_10;
              local_c = local_6c * local_c;
              local_8 = local_6c * local_8;
              local_4 = local_6c * local_4;
            }
            local_70 = 1.0 - local_70;
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
          if (((*pfVar9 != 0.0) || (pfVar9[1] != 0.0)) || (pfVar9[2] != 0.0)) {
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

#endif
