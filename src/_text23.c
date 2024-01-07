#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_0047f6c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)(&DAT_00e23240 + param_1 * 0x28);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  (&DAT_00e22a60)[param_1 * 2] = 0;
  *(undefined4 *)(&DAT_00e22a64 + param_1 * 8) = 0;
  return;
}



void FUN_0047f6f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined local_1f4 [500];

  DAT_004c7be4 = -1;
  if ((param_1 != 0) && (*(int *)(param_1 + 8) < 0xfb)) {
    if (*(short *)(*(int *)(param_1 + 0xc) + 2) == 0) {
      DAT_004c7be4 = -2;
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        iVar1 = 0;
        do {
          FUN_004270c0();
          if ((DAT_004c7be4 == -3) && (*(short *)(*(int *)(param_1 + 0xc) + iVar1) == 0)) {
            FUN_0047f6c0(iVar2);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x54;
        } while (iVar2 < *(int *)(param_1 + 4));
      }
    }
    else {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 4)) {
        iVar1 = 0;
        do {
          FUN_004270c0();
          if (*(short *)(*(int *)(param_1 + 0xc) + iVar1) == 0) {
            FUN_0047f6c0(iVar2);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x54;
        } while (iVar2 < *(int *)(param_1 + 4));
      }
    }
    FUN_0047f470(param_1,0x42c80000,local_1f4);
    FUN_0047ee20(param_1,0x41200000,param_2,local_1f4,&LAB_0047ea20);
    if (DAT_00e259a0 != 0) {
      FUN_0047ee20(param_1,0x41200000,0,0,&LAB_0047ece0);
    }
  }
  return;
}



float10 FUN_0047f800(void)

{
  return (float10)0.0;
}



float10 FUN_0047f810(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;

  iVar2 = FUN_0044e620(param_1,0);
  fVar1 = *(float *)(param_1 + 8) * *(float *)(&DAT_00e22a64 + iVar2 * 8) +
          (float)(&DAT_00e22a60)[iVar2 * 2];
  if (DAT_004c7be4 < 0) {
    if (fVar1 < 1.0) {
      fVar3 = (float10)fVar1;
    }
    else {
      fVar3 = (float10)0.9999;
    }
  }
  else if (fVar1 <= 1.0) {
    fVar3 = (float10)fVar1;
  }
  else {
    fVar3 = (float10)1.0;
  }
  return fVar3;
}



undefined4 FUN_0047f890(undefined4 param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = __ftol();
  iVar2 = FUN_0044e620(param_1,0);
  return *(undefined4 *)(&DAT_00e23240 + (iVar1 + iVar2 * 10) * 4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0047f8e0(int param_1,float *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  float local_4c;
  float local_48;
  float local_44;
  undefined local_40 [16];
  float local_30;
  float local_2c;
  float local_28;
  float local_10;
  float local_c;
  float local_8;

  iVar1 = param_1 + 0xac;
  *param_3 = 0;
  *param_4 = 0;
  iVar5 = *(int *)(param_1 + 0xbc);
  FUN_0044ed80(iVar1,local_40);
  local_4c = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x16c);
  local_48 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x170);
  local_44 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x174);
  FUN_0042f8c0(&local_4c);
  *param_2 = 0.0;
  do {
    bVar6 = true;
    fVar2 = local_30 * *(float *)(param_1 + 0x50) +
            local_2c * *(float *)(param_1 + 0x54) + local_28 * *(float *)(param_1 + 0x58);
    fVar3 = local_8 * local_28 + local_c * local_2c + local_10 * local_30;
    fVar4 = local_30 * *(float *)(param_1 + 0x16c) +
            local_2c * *(float *)(param_1 + 0x170) + local_28 * *(float *)(param_1 + 0x174);
    if (fVar3 < fVar2) {
      if (*(int *)(param_1 + 0xcc) == 0) {
        *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - -0.01;
        FUN_0044ed80(iVar1,local_40);
        bVar6 = false;
        if (*(int *)(param_1 + 0xbc) != iVar5) {
          if (*(int *)(param_1 + 0xbc) == 0) {
            if (0.01 <= fVar2 - fVar4) {
              *param_2 = ((fVar3 - fVar4) * (float)_DAT_00e22a48) / (fVar2 - fVar4);
            }
            else {
              *param_2 = 0.0;
            }
          }
          iVar5 = *(int *)(param_1 + 0xbc);
        }
      }
      else if (0.01 <= fVar2 - fVar4) {
        *param_2 = ((fVar3 - fVar4) * (float)_DAT_00e22a48) / (fVar2 - fVar4);
      }
      else {
        *param_2 = 0.0;
      }
      *param_3 = 1;
    }
  } while (!bVar6);
  if ((*param_3 == 0) && (*(int *)(param_1 + 0xd0) == 0)) {
    *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - 0.01;
    FUN_0044ed80(iVar1,local_40);
    do {
      bVar6 = true;
      if (local_30 * *(float *)(param_1 + 0x50) +
          local_2c * *(float *)(param_1 + 0x54) + local_28 * *(float *)(param_1 + 0x58) <
          local_8 * local_28 + local_c * local_2c + local_10 * local_30) {
        bVar6 = *(int *)(param_1 + 0xd0) != 0;
        if (!bVar6) {
          *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - 0.01;
          FUN_0044ed80(iVar1,local_40);
        }
        *param_4 = 1;
      }
    } while (!bVar6);
    if (*(int *)(param_1 + 0xd0) == 0) {
      *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - -0.01;
      FUN_0044ed80(iVar1,local_40);
    }
  }
  return;
}



undefined4 FUN_0047fbb0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined local_4 [4];

  iVar3 = param_1;
  uVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x140);
  if ((((*(int *)(param_1 + 0xec) != iVar2) && (*(int *)(param_1 + 0xec) != 0)) && (iVar2 != 0)) &&
     ((*(uint *)(param_1 + 100) & 0x20000000) == 0)) {
    pbVar4 = (byte *)FUN_004318b0(iVar2);
    if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 8) != 0)) {
      return 0xffffffff;
    }
    uVar6 = 1;
    sVar1 = *(short *)(*(int *)(iVar3 + 0x140) + 0x3c);
    if (sVar1 != 0) {
      FUN_0047e8b0(iVar3 + 0xac,(int)sVar1);
      FUN_0047f8e0(iVar3,local_4,&param_1,&param_1);
    }
    iVar2 = iVar3 + 0xac;
    uVar5 = FUN_0047f890(iVar2);
    *(undefined4 *)(iVar3 + 0xec) = uVar5;
    fVar7 = (float10)FUN_0047f800(iVar2);
    *(float *)(iVar3 + 0xdc) = (float)fVar7;
    uVar5 = FUN_0047eb50(iVar2,iVar3 + 0xf4);
    *(undefined4 *)(iVar3 + 0xf8) = uVar5;
    uVar5 = FUN_0047eb50(iVar2,iVar3 + 0xfc);
    *(undefined4 *)(iVar3 + 0x100) = uVar5;
  }
  return uVar6;
}



void FUN_0047fca0(int param_1)

{
  float10 fVar1;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined local_40 [16];
  float local_30;
  float local_2c;
  float local_28;
  float local_10;
  float local_c;
  float local_8;

  FUN_0044ed80(param_1 + 0xac,local_40);
  FUN_0042fa80(&local_4c,&local_10,
               (local_30 * *(float *)(param_1 + 0x50) +
               local_2c * *(float *)(param_1 + 0x54) + local_28 * *(float *)(param_1 + 0x58)) -
               (local_8 * local_28 + local_c * local_2c + local_10 * local_30),&local_30);
  local_58 = *(float *)(param_1 + 0x50) - local_4c;
  local_54 = *(float *)(param_1 + 0x54) - local_48;
  local_50 = *(float *)(param_1 + 0x58) - local_44;
  fVar1 = (float10)FUN_0042f8c0(&local_58);
  *(float *)(param_1 + 0x124) = (float)fVar1;
  if ((float10)0.1 < fVar1) {
    fVar1 = (float10)1.0 / fVar1;
    *(float *)(param_1 + 0x118) = (float)((float10)local_58 * fVar1);
    *(float *)(param_1 + 0x11c) = (float)((float10)local_54 * fVar1);
    *(float *)(param_1 + 0x120) = (float)((float10)local_50 * fVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_0047fdd0(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;

  iVar3 = 1;
  if ((*(uint *)(param_1 + 0x60) & 0x4000) == 0) {
    iVar3 = param_2;
  }
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xe0);
  if ((DAT_004d5e00 != 0) && ((*(uint *)(param_1 + 0x60) & 0x40) != 0)) {
    piVar2 = *(int **)(param_1 + 0x1e70);
    *(undefined4 *)(param_1 + 0xe8) = (&DAT_00ea0420)[*piVar2];
    piVar2[0x1e] = (&DAT_00ea0480)[*piVar2];
  }
  if ((DAT_004d5e00 == 0) || ((*(byte *)(param_1 + 0x60) & 0x40) == 0)) {
    fVar4 = (float10)FUN_0047f810(param_1 + 0xac);
    *(float *)(param_1 + 0xe0) = (float)fVar4;
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = (&DAT_00ea0360)[**(int **)(param_1 + 0x1e70)];
  }
  if (*(int *)(param_1 + 0x114) < 9) {
    *(float *)(param_1 + 0x110) = (float)_DAT_00e22a40 + *(float *)(param_1 + 0x110);
  }
  else {
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if ((iVar3 != 0) && ((*(float *)(param_1 + 0xe0) <= 0.8 || (0.1 <= *(float *)(param_1 + 0xe4)))))
  {
    fVar1 = *(float *)(param_1 + 0xe8);
    if (*(float *)(param_1 + 0xe0) < 0.1) {
      if (0.8 < fVar1) {
        fVar1 = fVar1 - 1.0;
      }
      if (0.8 < *(float *)(param_1 + 0xe4)) {
        *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) - 1.0;
      }
    }
    if (-1 < DAT_004c7be4) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe0);
      return 1.0 <= *(float *)(param_1 + 0xe0);
    }
    if ((fVar1 < *(float *)(param_1 + 0xe0)) && (*(float *)(param_1 + 0xe4) - 0.01 <= fVar1)) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe0);
      return fVar1 < 0.0;
    }
  }
  return false;
}



void FUN_0047ffb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;

  iVar1 = param_1;
  FUN_0047f8e0(param_1,param_2,&param_2,&param_1);
  iVar3 = iVar1 + 0xac;
  *(undefined4 *)(iVar1 + 0xf0) = *(undefined4 *)(iVar1 + 0xec);
  uVar2 = FUN_0047f890(iVar3);
  *(undefined4 *)(iVar1 + 0xec) = uVar2;
  fVar4 = (float10)FUN_0047f800(iVar3);
  *(float *)(iVar1 + 0xdc) = (float)fVar4;
  uVar2 = FUN_0047eb50(iVar3,iVar1 + 0xf4);
  *(undefined4 *)(iVar1 + 0xf8) = uVar2;
  uVar2 = FUN_0047eb50(iVar3,iVar1 + 0xfc);
  *(undefined4 *)(iVar1 + 0x100) = uVar2;
  if (*(int *)(iVar1 + 0xf0) != *(int *)(iVar1 + 0xec)) {
    *(undefined4 *)(iVar1 + 0x1f24) = 0;
  }
  iVar3 = FUN_0047fbb0(iVar1);
  FUN_0047fca0(iVar1);
  if ((param_2 == 0) && (iVar3 != 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_0047fdd0(iVar1,uVar2);
  if (param_1 != 0) {
    *(short *)(iVar1 + 0x10c) = *(short *)(iVar1 + 0x10c) + 1;
    *(undefined4 *)(iVar1 + 0x114) = 0;
  }
  if (((param_2 != 0) && (*(undefined2 *)(iVar1 + 0x10c) = 0, param_1 == 0)) &&
     (*(int *)(iVar1 + 0x114) < 200)) {
    *(int *)(iVar1 + 0x114) = *(int *)(iVar1 + 0x114) + 1;
  }
  *(short *)(iVar1 + 0x10e) = (short)iVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_004800c0(undefined4 *param_1)

{
  if (-1 < DAT_004c7be4) {
    *param_1 = _DAT_00e25960;
    param_1[1] = DAT_00e25964;
    param_1[2] = DAT_00e25968;
    param_1[3] = DAT_00e2596c;
    param_1[4] = DAT_00e25970;
    param_1[5] = DAT_00e25974;
    param_1[6] = DAT_00e25978;
    param_1[7] = DAT_00e2597c;
    param_1[8] = DAT_00e25980;
    param_1[9] = DAT_00e25984;
    param_1[10] = DAT_00e25988;
    param_1[0xb] = DAT_00e2598c;
    param_1[0xc] = DAT_00e25990;
    param_1[0xd] = DAT_00e25994;
    param_1[0xe] = DAT_00e25998;
    param_1[0xf] = DAT_00e2599c;
    return 1;
  }
  return 0;
}



int FUN_00480170(short *param_1,float *param_2,float param_3,int param_4,int param_5,float param_6)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int local_b4;
  float local_ac;
  float local_a8;
  int local_a0;
  int local_9c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  undefined local_70 [48];
  float local_40;
  float local_3c;
  undefined local_30 [48];

  local_b4 = 0;
  if (*param_1 != 1) {
    return 0;
  }
  iVar4 = FUN_0047e880(local_30,param_1);
  bVar3 = false;
  local_9c = 0;
  if (0 < *(int *)(param_1 + 2)) {
    do {
      iVar7 = 0;
      *(int *)(iVar4 + 0x10) = local_9c;
      local_a0 = (int)*(short *)(*(int *)(param_1 + 6) + local_9c * 0x54);
      if (DAT_0050cb58 != 0) {
        bVar3 = false;
        if (local_9c == 1) {
          local_a0 = 1;
        }
        else if (DAT_0050cb58 == 1) {
          if ((0x62 < local_9c) && (local_9c < 0x72)) goto LAB_00480242;
        }
        else if (DAT_0050cb58 == 2) {
          if ((0x66 < local_9c) && (local_9c < 0x74)) {
LAB_00480242:
            bVar3 = true;
          }
        }
        else if (((DAT_0050cb58 == 3) && (0x83 < local_9c)) && (local_9c < 0x91)) goto LAB_00480242;
      }
      if (!bVar3) {
        *(undefined4 *)(iVar4 + 0x2c) = 0;
        FUN_0044e5a0(param_1,local_9c,&local_88);
        local_ac = local_88 - *param_2;
        local_a8 = local_84 - param_2[1];
        if (0 < local_a0) {
          fVar1 = -param_3;
          do {
            uVar6 = *(uint *)(iVar4 + 0x2c) & 0xfffffffe;
            *(uint *)(iVar4 + 0x2c) = uVar6;
            if (iVar7 != 0) {
              *(uint *)(iVar4 + 0x2c) = uVar6 | 1;
            }
            iVar5 = (int)*(short *)(*(int *)(param_1 + 6) + 4 +
                                   (iVar7 + *(int *)(iVar4 + 0x10) * 0x2a) * 2);
            *(int *)(iVar4 + 0x14) = iVar5;
            FUN_0044e5a0(param_1,iVar5,&local_7c);
            if ((((fVar1 <= local_ac) || (fVar1 <= local_7c - *param_2)) &&
                ((local_ac <= param_3 || (local_7c - *param_2 <= param_3)))) &&
               (((fVar1 <= local_a8 || (fVar1 <= local_78 - param_2[1])) &&
                ((local_a8 <= param_3 || (local_78 - param_2[1] <= param_3)))))) {
              *(undefined4 *)(iVar4 + 8) = 0;
              pfVar8 = (float *)(param_5 + local_b4 * 8);
              do {
                FUN_0044ed80(iVar4,local_70);
                local_ac = local_40 - *param_2;
                local_a8 = local_3c - param_2[1];
                if ((((local_ac < param_3) && (-local_ac < param_3)) && (local_a8 < param_3)) &&
                   (-local_a8 < param_3)) {
                  if (local_b4 < param_4) {
                    *pfVar8 = local_ac;
                    pfVar8[1] = local_a8;
                  }
                  local_b4 = local_b4 + 1;
                  pfVar8 = pfVar8 + 2;
                }
                fVar2 = 1.0 / param_6 + *(float *)(iVar4 + 8);
                *(float *)(iVar4 + 8) = fVar2;
              } while (fVar2 < 1.0);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_a0);
        }
      }
      local_9c = local_9c + 1;
    } while (local_9c < *(int *)(param_1 + 2));
  }
  return local_b4;
}



void FUN_00480480(undefined4 param_1,undefined4 param_2)

{
  DAT_0050cb70 = param_1;
  DAT_0050cb74 = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004804a0(void)

{
  _DAT_0050cb78 = 1;
  return;
}



void FUN_004804b0(undefined4 param_1)

{
  DAT_0050cb64 = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004804c0(void)

{
  if ((double)CONCAT44(DAT_0050cb74,DAT_0050cb70) <= 0.0) {
    DAT_0050cb70 = 0x20000000;
    DAT_0050cb74 = 0x3fb11111;
  }
  _DAT_00e22a50 = (float)(double)CONCAT44(DAT_0050cb74,DAT_0050cb70);
  DAT_00e22a40 = DAT_0050cb70;
  DAT_00e22a44 = DAT_0050cb74;
  _DAT_00e22a38 = 0;
  _DAT_00e22a3c = 0;
  DAT_00e22a30 = 0;
  DAT_0050cb64 = 0;
  if (DAT_0050cb68 == 0) {
    DAT_0050cb60 = timeGetTime();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00480540(void)

{
  double dVar1;
  DWORD DVar2;

  dVar1 = (double)CONCAT44(_DAT_00e22a4c,_DAT_00e22a48);
  if (DAT_0050cb68 == 0) {
    DVar2 = timeGetTime();
    dVar1 = (double)(ulonglong)(DVar2 - DAT_0050cb60) * 0.001;
    DAT_0050cb60 = DVar2;
    _DAT_00e22a40 = dVar1;
    if (0.1000000014901161 < dVar1) {
      _DAT_00e22a40 = 0.1000000014901161;
    }
  }
  else {
    _DAT_00e22a40 = (double)CONCAT44(DAT_0050cb74,DAT_0050cb70);
  }
  _DAT_00e22a4c = (undefined4)((ulonglong)dVar1 >> 0x20);
  _DAT_00e22a48 = SUB84(dVar1,0);
  if (DAT_0050cb64 != 0) {
    _DAT_00e22a40 = 0.0;
  }
  if (_DAT_00e22a40 <= 0.0) {
    _DAT_00e22a40 = 0.002000000094994903;
  }
  _DAT_00e22a50 = (float)_DAT_00e22a40;
  _DAT_00e22a38 = _DAT_00e22a38 + _DAT_00e22a40;
  DAT_00e22a30 = DAT_00e22a30 + 1;
  return;
}



float10 FUN_00480650(float param_1,float param_2)

{
  return (float10)1.0 -
         ((float10)param_2 * (float10)33.33334) /
         ((float10)param_2 * (float10)33.33334 + (float10)param_1);
}


// SQRT3
float10 FUN_00480670(float param_1)

{
  return (float10)SQRT(param_1);
}



void FUN_00480690(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_3 * *param_2 + param_3[4] * param_2[1] + param_3[8] * param_2[2] + param_3[0xc];
  param_1[1] = param_3[1] * *param_2 + param_3[5] * param_2[1] + param_3[9] * param_2[2] +
               param_3[0xd];
  param_1[2] = param_3[2] * *param_2 + param_3[6] * param_2[1] + param_3[10] * param_2[2] +
               param_3[0xe];
  param_1[3] = param_3[3] * *param_2 + param_3[7] * param_2[1] + param_3[0xb] * param_2[2] +
               param_3[0xf];
  return;
}



void FUN_00480730(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;

  fVar3 = (float10)FUN_0042f8c0(param_1);
  fVar2 = 1.0 / (float)fVar3;
  *param_4 = (float)fVar3;
  *param_3 = *param_1 * fVar2;
  param_3[1] = param_1[1] * fVar2;
  fVar1 = param_1[2];
  param_3[3] = 0.0;
  param_3[2] = fVar1 * fVar2;
  fVar3 = (float10)FUN_0042f8c0(param_1 + 4);
  fVar2 = 1.0 / (float)fVar3;
  param_4[1] = (float)fVar3;
  param_3[4] = param_1[4] * fVar2;
  param_3[5] = param_1[5] * fVar2;
  fVar1 = param_1[6];
  param_3[7] = 0.0;
  param_3[6] = fVar1 * fVar2;
  fVar3 = (float10)FUN_0042f8c0(param_1 + 8);
  fVar2 = 1.0 / (float)fVar3;
  param_4[2] = (float)fVar3;
  param_3[8] = param_1[8] * fVar2;
  param_3[9] = param_1[9] * fVar2;
  fVar1 = param_1[10];
  param_3[0xb] = 0.0;
  param_3[10] = fVar1 * fVar2;
  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  param_3[0xc] = 0.0;
  param_3[0xd] = 0.0;
  param_3[0xe] = 0.0;
  param_3[0xf] = 1.0;
  return;
}



void FUN_00480850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_0044bb10(param_1,param_3);
  FUN_0042f830(param_1 + 0x30,param_1 + 0x30,param_2);
  FUN_00431450(param_1,*param_4,param_4[1],param_4[2],param_1);
  return;
}



void FUN_00480890(float *param_1,float *param_2,float *param_3)

{
  float fVar1;

  fVar1 = param_1[3] - (*param_2 * *param_1 + param_2[1] * param_1[1] + param_2[2] * param_1[2]);
  *param_3 = fVar1 * *param_1;
  param_3[1] = fVar1 * param_1[1];
  param_3[2] = fVar1 * param_1[2];
  *param_3 = *param_2 + *param_3;
  param_3[1] = param_3[1] + param_2[1];
  param_3[2] = param_3[2] + param_2[2];
  return;
}



void FUN_004808f0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar1 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1;
  if (fVar2 <= 0.001) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    return;
  }
  fVar2 = ((fVar1 * *param_1 + param_1[2] * fVar4 + param_1[1] * fVar3) -
          (fVar3 * param_2[1] + fVar4 * param_2[2] + fVar1 * *param_2)) / fVar2;
  if (fVar2 <= 0.0) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    return;
  }
  if (1.0 <= fVar2) {
    *param_4 = *param_3;
    param_4[1] = param_3[1];
    param_4[2] = param_3[2];
    return;
  }
  *param_4 = fVar1 * fVar2;
  param_4[1] = fVar3 * fVar2;
  param_4[2] = fVar4 * fVar2;
  *param_4 = *param_2 + fVar1 * fVar2;
  param_4[1] = param_2[1] + fVar3 * fVar2;
  param_4[2] = param_2[2] + fVar4 * fVar2;
  return;
}



undefined4
FUN_00480a70(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  float local_48 [6];
  float local_30 [3];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  local_24 = *param_2 - *param_1;
  local_20 = param_2[1] - param_1[1];
  local_1c = param_2[2] - param_1[2];
  local_18 = *param_3 - *param_1;
  local_14 = param_3[1] - param_1[1];
  local_10 = param_3[2] - param_1[2];
  local_c = *param_4 - *param_1;
  local_8 = param_4[1] - param_1[1];
  local_4 = param_4[2] - param_1[2];
  FUN_0042f9f0(local_48,param_5,param_6);
  if (((local_48[0] != 0.0) || (local_48[1] != 0.0)) || (local_48[2] != 0.0)) {
    FUN_0042f9f0(local_48,local_48 + 9,param_5);
    FUN_0042f9f0(local_48 + 3,&local_18,param_6);
    FUN_0042f9f0(local_48 + 6,&local_c,param_7);
    if (0.0 <= local_48[0]) {
      param_3 = (float *)local_48[0];
    }
    else {
      param_3 = (float *)-local_48[0];
    }
    if (0.0 <= local_48[1]) {
      param_2 = (float *)local_48[1];
    }
    else {
      param_2 = (float *)-local_48[1];
    }
    if (local_48[2] < 0.0) {
      local_48[2] = -local_48[2];
    }
    if (local_48[2] + (float)param_2 + (float)param_3 <= 0.0001) {
      if (0.0 <= local_48[3]) {
        param_3 = (float *)local_48[3];
      }
      else {
        param_3 = (float *)-local_48[3];
      }
      if (0.0 <= local_48[4]) {
        param_2 = (float *)local_48[4];
      }
      else {
        param_2 = (float *)-local_48[4];
      }
      if (local_48[5] < 0.0) {
        local_48[5] = -local_48[5];
      }
      if (local_48[5] + (float)param_2 + (float)param_3 < 0.001) {
        return 1;
      }
      if ((float)param_2 <= (float)param_3) {
        if (local_48[5] <= (float)param_3) {
          iVar1 = 0;
        }
        else {
          iVar1 = 2;
        }
      }
      else if (local_48[5] <= (float)param_2) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
      if (0.0 <= local_48[iVar1 + 3]) {
        if (0.0 <= local_48[iVar1 + 6]) {
          return 1;
        }
      }
      else if (local_48[iVar1 + 6] <= 0.0) {
        return 1;
      }
    }
    else {
      if ((float)param_2 <= (float)param_3) {
        if (local_48[2] <= (float)param_3) {
          iVar1 = 0;
        }
        else {
          iVar1 = 2;
        }
      }
      else if (local_48[2] <= (float)param_2) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
      if (0.0 <= local_48[iVar1]) {
        if ((0.0 <= local_48[iVar1 + 3]) && (0.0 <= local_48[iVar1 + 6])) {
          return 1;
        }
      }
      else if ((local_48[iVar1 + 3] <= 0.0) && (local_48[iVar1 + 6] <= 0.0)) {
        return 1;
      }
    }
  }
  return 0;
}



float10 FUN_00480dc0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                    float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
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

  FUN_004314f0(&local_10,param_2,param_3,param_4);
  fVar6 = (*param_1 - *param_2) * local_10;
  fVar4 = (param_1[2] - param_2[2]) * local_8;
  fVar5 = (param_1[1] - param_2[1]) * local_c;
  FUN_00480890(&local_10,param_1,param_6);
  fVar1 = (*param_1 - *param_6) * (*param_1 - *param_6) +
          (param_1[2] - param_6[2]) * (param_1[2] - param_6[2]) +
          (param_1[1] - param_6[1]) * (param_1[1] - param_6[1]);
  if ((0.0 < param_5) && (param_5 < fVar1)) {
    return (float10)-1.0;
  }
  local_34 = *param_3 - *param_2;
  local_30 = param_3[1] - param_2[1];
  local_2c = param_3[2] - param_2[2];
  local_28 = *param_4 - *param_3;
  local_24 = param_4[1] - param_3[1];
  local_20 = param_4[2] - param_3[2];
  local_1c = *param_2 - *param_4;
  local_18 = param_2[1] - param_4[1];
  local_14 = param_2[2] - param_4[2];
  iVar7 = FUN_00480a70(param_6,param_2,param_3,param_4,&local_34,&local_28,&local_1c);
  if (iVar7 == 0) {
    FUN_004808f0(param_6,param_2,param_3,&local_34);
    FUN_004808f0(param_6,param_3,param_4,&local_28);
    FUN_004808f0(param_6,param_4,param_2,&local_1c);
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    *param_6 = local_34;
    param_6[1] = local_30;
    param_6[2] = local_2c;
    fVar9 = ((float10)param_1[2] - (float10)local_20) *
            (float10)(float)((float10)param_1[2] - (float10)local_20) +
            ((float10)param_1[1] - (float10)local_24) * ((float10)param_1[1] - (float10)local_24) +
            ((float10)*param_1 - (float10)local_28) *
            (float10)(float)((float10)*param_1 - (float10)local_28);
    fVar8 = ((float10)fVar3 - (float10)local_2c) *
            (float10)(float)((float10)fVar3 - (float10)local_2c) +
            ((float10)fVar2 - (float10)local_30) *
            (float10)(float)((float10)fVar2 - (float10)local_30) +
            ((float10)fVar1 - (float10)local_34) *
            (float10)(float)((float10)fVar1 - (float10)local_34);
    if (fVar9 < fVar8) {
      *param_6 = local_28;
      fVar8 = (float10)(float)fVar9;
      param_6[1] = local_24;
      param_6[2] = local_20;
    }
    fVar9 = ((float10)param_1[2] - (float10)local_14) *
            (float10)(float)((float10)param_1[2] - (float10)local_14) +
            ((float10)param_1[1] - (float10)local_18) * ((float10)param_1[1] - (float10)local_18) +
            ((float10)*param_1 - (float10)local_1c) *
            (float10)(float)((float10)*param_1 - (float10)local_1c);
    if (fVar9 < fVar8) {
      *param_6 = local_1c;
      fVar8 = (float10)(float)fVar9;
      param_6[1] = local_18;
      param_6[2] = local_14;
    }
  }
  else {
    fVar8 = (float10)fVar1;
  }
  if (fVar5 + fVar4 + fVar6 < 0.0) {
    *param_7 = -local_10;
    param_7[1] = -local_c;
    param_7[2] = -local_8;
    return fVar8;
  }
  *param_7 = local_10;
  param_7[1] = local_c;
  param_7[2] = local_8;
  return fVar8;
}



void FUN_00481100(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float *pfVar1;
  float fVar2;

  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  param_1[0xc] = *param_3 * param_5 + *param_2;
  param_1[0xd] = param_5 * param_3[1] + param_2[1];
  param_1[0xe] = param_5 * param_3[2] + param_2[2];
  fVar2 = param_3[2] * param_4[2] + param_4[1] * param_3[1] + *param_3 * *param_4;
  if ((0.95 <= fVar2) || (fVar2 <= -0.95)) {
    param_1[4] = *param_3 * -1.0;
    param_1[5] = param_3[1] * -1.0;
    fVar2 = param_3[2];
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 1.0;
    param_1[6] = fVar2 * -1.0;
  }
  else {
    param_1[4] = *param_3 * -1.0;
    param_1[5] = param_3[1] * -1.0;
    param_1[6] = param_3[2] * -1.0;
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
  }
  pfVar1 = param_1 + 8;
  FUN_0042f9f0(pfVar1,param_1,param_1 + 4);
  FUN_0042f9f0(param_1,param_1 + 4,pfVar1);
  FUN_0042f9b0(param_1);
  FUN_0042f9b0(pfVar1);
  return;
}



void FUN_00481220(float *param_1,float *param_2,undefined4 param_3,float *param_4,float param_5)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;

  *param_4 = *param_1;
  param_4[1] = param_1[1];
  param_4[2] = param_1[2];
  local_c = *param_2 - *param_1;
  local_8 = param_2[1] - param_1[1];
  local_4 = param_2[2] - param_1[2];
  fVar1 = (float10)FUN_0042f8c0(&local_c);
  if (fVar1 <= (float10)0.0001) {
    FUN_00431100(param_3,*param_1,param_1[1],param_1[2]);
    return;
  }
  FUN_0042fa50(&local_c,(float)((float10)1.0 / fVar1),&local_c);
  fVar1 = (float10)FUN_0042f3e0(local_4);
  param_4[4] = (float)fVar1;
  param_4[5] = param_5;
  if ((0.0001 <= local_8) || (local_8 <= -0.0001)) {
    fVar1 = (float10)FUN_0042f560(-local_c,local_8);
    param_4[3] = (float)fVar1;
    FUN_00431060(param_3,param_4);
    return;
  }
  if (local_c < -0.0001) {
    param_4[3] = 90.0;
    FUN_00431060(param_3,param_4);
    return;
  }
  if (0.0001 < local_c) {
    param_4[3] = -90.0;
    FUN_00431060(param_3,param_4);
    return;
  }
  param_4[3] = 0.0;
  FUN_00431060(param_3,param_4);
  return;
}



void FUN_004813a0(float *param_1,float *param_2,float param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined local_1c [4];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  pfVar3 = param_2;
  param_2 = (float *)(*param_2 * *param_1 +
                     param_2[3] * param_1[3] + param_2[1] * param_1[1] + param_2[2] * param_1[2]);
  if ((float)param_2 < 0.0) {
    local_10 = -*param_1;
    local_c = -param_1[1];
    local_8 = -param_1[2];
    local_4 = -param_1[3];
    FUN_004813a0(&local_10,pfVar3,param_3,param_4);
    return;
  }
  if (1.0 < (float)param_2) {
    param_2 = (float *)0x3f800000;
  }
  fVar6 = (float10)FUN_0042f540(param_2);
  fVar2 = (float)fVar6;
  if ((float10)1e-05 < fVar6) {
    FUN_0042f380(fVar2,&param_2,local_1c);
    local_18 = (float)param_2;
    FUN_0042f380((1.0 - param_3) * fVar2,&param_2,local_1c);
    local_14 = (float)param_2 / local_18;
    FUN_0042f380(fVar2 * param_3,&param_2,local_1c);
    param_3 = (float)param_2 / local_18;
  }
  else {
    local_14 = 1.0 - param_3;
  }
  iVar4 = (int)param_1 - (int)pfVar3;
  param_4 = param_4 - (int)pfVar3;
  iVar5 = 4;
  do {
    pfVar1 = (float *)(iVar4 + (int)pfVar3);
    fVar2 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    iVar5 = iVar5 + -1;
    *(float *)(param_4 + -4 + (int)pfVar3) = param_3 * fVar2 + *pfVar1 * local_14;
  } while (iVar5 != 0);
  return;
}



void FUN_00481520(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  undefined local_4 [4];

  pfVar4 = param_2;
  fVar2 = param_2[1];
  fVar3 = *param_2 * *param_2 + param_2[2] * param_2[2] + fVar2 * fVar2;
  if ((1e-05 <= fVar3) || (1e-05 <= -fVar3)) {
    pfVar1 = param_2 + 3;
    param_2 = (float *)fVar2;
    fVar5 = (float10)FUN_0042f540(*pfVar1);
    fVar2 = (float)fVar5;
    FUN_0042f380(fVar2,&param_2,local_4);
    if (((float)param_2 <= -1e-05) || (1e-05 <= (float)param_2)) {
      param_1[3] = fVar2 + fVar2;
      *param_1 = *pfVar4 / (float)param_2;
      param_1[1] = pfVar4[1] / (float)param_2;
      param_1[2] = pfVar4[2] / (float)param_2;
      FUN_0042f9b0(param_1);
      return;
    }
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 1.0;
  param_1[3] = 0.0;
  return;
}



void FUN_00481620(float *param_1,float *param_2)

{
  float *pfVar1;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  pfVar1 = param_2;
  FUN_0042f380(param_2[3] * 0.5,&param_2,&local_10);
  local_c = *pfVar1;
  local_8 = pfVar1[1];
  local_4 = pfVar1[2];
  FUN_0042f9b0(&local_c);
  param_1[3] = local_10;
  *param_1 = local_c * (float)param_2;
  param_1[1] = local_8 * (float)param_2;
  param_1[2] = local_4 * (float)param_2;
  return;
}



int FUN_004816b0(void)

{
  int iVar1;

  if (DAT_0050cb80 == '\0') {
    DAT_0050cb7c = 0x2750250;
    DAT_0050cb80 = '\x01';
  }
  iVar1 = DAT_0050cb7c * 0x41c64e6d + 0x3039;
  DAT_0050cb7c = iVar1;
  if (iVar1 != -0x80000000) {
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    return iVar1;
  }
  return 0;
}



void FUN_004816f0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;

  if (param_3 != 0) {
    iVar6 = FUN_00431770(param_3);
    FUN_0044bb10(&local_84,param_4);
    if (iVar6 != 0x5064) {
      if ((iVar6 < 0xd064) || (0xd065 < iVar6)) {
        if (param_1 != param_3) {
          return;
        }
        param_2[1] = local_80;
        param_2[2] = local_7c;
        param_2[3] = local_78;
        param_2[4] = local_74;
        param_2[5] = local_70;
        param_2[6] = local_6c;
        param_2[7] = local_68;
        param_2[8] = local_64;
        param_2[9] = local_60;
        *param_2 = local_84;
        param_2[10] = local_5c;
        param_2[0xb] = local_58;
        param_2[0xc] = local_54;
        param_2[0xd] = local_50;
        param_2[0xe] = local_4c;
        param_2[0xf] = local_48[0];
        return;
      }
      iVar9 = local_4;
      if (iVar6 == 0xd065) {
        iVar9 = param_3;
      }
      local_48[1] = *(float *)(undefined4 *)(param_3 + 0x1c);
      local_48[2] = *(float *)(param_3 + 0x20);
      local_48[3] = *(float *)(param_3 + 0x24);
      local_34 = *(undefined4 *)(param_3 + 0x28);
      local_30 = *(undefined4 *)(param_3 + 0x2c);
      local_2c = *(float *)(param_3 + 0x30);
      pfVar7 = (float *)(param_3 + 0x34);
      local_24 = *(undefined4 *)(param_3 + 0x34);
      local_20 = *(undefined4 *)(param_3 + 0x38);
      local_1c = *(undefined4 *)(param_3 + 0x3c);
      local_38 = 0;
      local_14 = *(undefined4 *)(param_3 + 0x40);
      local_10 = *(undefined4 *)(param_3 + 0x44);
      local_c = *(undefined4 *)(param_3 + 0x48);
      local_28 = 0;
      local_18 = 0;
      local_8 = 0x3f800000;
      if ((*(byte *)(param_3 + 0xc) & 0x10) != 0) {
        iVar6 = 3;
        pfVar8 = (float *)(iVar9 + 0x4c);
        do {
          pfVar1 = pfVar7 + -3;
          fVar4 = *pfVar7;
          pfVar2 = pfVar7 + -6;
          pfVar3 = (float *)(((int)&local_2c - (int)(undefined4 *)(param_3 + 0x1c)) + (int)pfVar7);
          pfVar7 = pfVar7 + 1;
          iVar6 = iVar6 + -1;
          *pfVar3 = *pfVar8 + -(*pfVar2 * *(float *)(iVar9 + 0x4c)) +
                              -(*pfVar1 * *(float *)(iVar9 + 0x50)) +
                              -(fVar4 * *(float *)(iVar9 + 0x54)) + *pfVar3;
          pfVar8 = pfVar8 + 1;
        } while (iVar6 != 0);
      }
      FUN_0042fb70(&local_84,(undefined4 *)((int)register0x00000010 + -0x44),param_4);
    }
    if (param_1 == param_3) {
      *param_2 = local_84;
      param_2[1] = local_80;
      param_2[2] = local_7c;
      param_2[3] = local_78;
      param_2[4] = local_74;
      param_2[5] = local_70;
      param_2[6] = local_6c;
      param_2[7] = local_68;
      param_2[8] = local_64;
      param_2[9] = local_60;
      param_2[10] = local_5c;
      param_2[0xb] = local_58;
      param_2[0xc] = local_54;
      param_2[0xd] = local_50;
      param_2[0xe] = local_4c;
      param_2[0xf] = local_48[0];
    }
    iVar6 = FUN_00431780(param_3);
    iVar9 = 0;
    if (0 < iVar6) {
      do {
        iVar5 = *(int *)(*(int *)(param_3 + 0x18) + iVar9 * 4);
        if (iVar5 != 0) {
          FUN_004816f0(param_1,param_2,iVar5,&local_84);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar6);
    }
  }
  return;
}



void FUN_004819b0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10 [4];

  *param_2 = 0x3f800000;
  param_2[5] = 0x3f800000;
  param_2[10] = 0x3f800000;
  param_2[0xf] = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  iVar8 = *param_1;
  puVar9 = param_2;
  while (iVar8 != 0) {
    uVar4 = FUN_00431770(*param_1);
    if ((uVar4 & 0x8000) != 0) {
      puVar2 = (undefined4 *)*param_1;
      if (uVar4 == 0xd065) {
        puVar9 = puVar2;
      }
      local_40 = puVar2[7];
      local_3c = puVar2[8];
      local_38 = puVar2[9];
      local_30 = puVar2[10];
      local_2c = puVar2[0xb];
      local_28 = puVar2[0xc];
      local_20 = puVar2[0xd];
      local_1c = puVar2[0xe];
      local_18 = puVar2[0xf];
      local_10[0] = (float)puVar2[0x10];
      local_10[1] = (float)puVar2[0x11];
      local_10[2] = (float)puVar2[0x12];
      local_34 = 0;
      local_24 = 0;
      local_14 = 0;
      local_10[3] = 1.0;
      if ((*(byte *)(puVar2 + 3) & 0x10) != 0) {
        iVar8 = 3;
        pfVar5 = local_10;
        pfVar6 = (float *)(puVar2 + 0xd);
        pfVar7 = (float *)(puVar9 + 0x13);
        do {
          iVar8 = iVar8 + -1;
          fVar3 = -(pfVar6[-6] * (float)puVar9[0x13]) + *pfVar5;
          *pfVar5 = fVar3;
          fVar3 = -(pfVar6[-3] * (float)puVar9[0x14]) + fVar3;
          *pfVar5 = fVar3;
          fVar3 = -(*pfVar6 * (float)puVar9[0x15]) + fVar3;
          *pfVar5 = fVar3;
          *pfVar5 = *pfVar7 + fVar3;
          pfVar5 = pfVar5 + 1;
          pfVar6 = pfVar6 + 1;
          pfVar7 = pfVar7 + 1;
        } while (iVar8 != 0);
      }
      FUN_0042fb70(param_2,&local_40,param_2);
    }
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar8 = *piVar1;
  }
  return;
}



void FUN_00481b30(int param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;

  if ((param_1 != 0) && (param_2 != (float *)0x0)) {
    uVar1 = FUN_00431770(param_1);
    if (uVar1 == 0x5066) {
      iVar2 = 0;
      fVar4 = *param_2;
      while (0.0 <= fVar4) {
        if (iVar2 == 0) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = param_2[iVar2];
        }
        FUN_00431750(param_1,iVar2,fVar4);
        iVar3 = iVar2 + 1;
        iVar2 = iVar2 + 1;
        fVar4 = param_2[iVar3];
      }
      FUN_00431750(param_1,iVar2,0xbf800000);
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar2 = FUN_00431780(param_1);
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          FUN_00481b30(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 4),param_2);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
    }
  }
  return;
}



void FUN_00481be0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  FUN_0048eb60(param_2 + 0x3c,param_1 + param_3 * 0xc,param_1 + param_4 * 0xc,
               param_1 + param_5 * 0xc);
  **(int **)(param_2 + 0x14) = param_3;
  *(int *)(*(int *)(param_2 + 0x14) + 4) = param_4;
  *(int *)(*(int *)(param_2 + 0x14) + 8) = param_5;
  return;
}



void FUN_00481c30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,float param_7,undefined4 param_8)

{
  int iVar1;
  char *_Str1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int local_8;
  undefined local_4 [4];

  if (DAT_0050ccc8 == 0) {
    local_8 = 0;
    puVar12 = &DAT_0050cbc8;
    do {
      FUN_0042f380((float)local_8 * 360.0 * 0.015625,puVar12,local_4);
      puVar12 = puVar12 + 4;
      local_8 = local_8 + 1;
    } while ((int)puVar12 < 0x50ccc8);
    DAT_0050ccc8 = 1;
  }
  uVar4 = FUN_00431770(param_1);
  if ((uVar4 & 0x4000) == 0) {
    if (uVar4 == 0x3064) {
      _Str1 = *(char **)(**(int **)(param_1 + 0x18) + 0x30);
      iVar5 = _strncmp(_Str1,(char *)&PTR_DAT_004c3c14,3);
      if (iVar5 == 0) {
        puVar2 = *(undefined4 **)(_Str1 + 0x4c);
        puVar6 = *(undefined4 **)(_Str1 + 0x58);
        if (param_6 < param_7) {
          fVar3 = 1.0 - (param_6 / param_7) * (param_6 / param_7);
        }
        else {
          fVar3 = 0.0;
        }
        if (fVar3 < 0.1) {
          puVar6 = puVar2 + 2;
          puVar8 = &DAT_004c7c34;
          do {
            puVar7 = puVar8 + 3;
            puVar6[-2] = puVar8[-1];
            puVar6[-1] = *puVar8;
            *puVar6 = *(undefined4 *)(((int)&DAT_004c7c30 - (int)puVar2) + (int)puVar6);
            puVar6 = puVar6 + 3;
            puVar8 = puVar7;
          } while ((int)puVar7 < 0x4c7c7c);
          return;
        }
        *(undefined4 *)(_Str1 + 0x74) = 0x1b;
        *(undefined4 *)(_Str1 + 0x7c) = 0x30;
        iVar13 = (int)&DAT_004c7c78 - (int)puVar6;
        iVar5 = (int)&DAT_004c7c30 - (int)puVar2;
        param_6 = 1.121039e-44;
        puVar8 = puVar2;
        do {
          iVar11 = 3;
          do {
            iVar9 = 3;
            do {
              *puVar8 = *(undefined4 *)(iVar5 + (int)puVar8);
              puVar8 = puVar8 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            iVar9 = 4;
            do {
              *puVar6 = *(undefined4 *)(iVar13 + (int)puVar6);
              puVar6 = puVar6 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          iVar5 = iVar5 + -0x24;
          iVar13 = iVar13 + -0x30;
          param_6 = (float)((int)param_6 + -1);
        } while (param_6 != 0.0);
        param_6 = 4.203895e-45;
        puVar7 = puVar6;
        puVar10 = puVar8;
        do {
          iVar5 = 3;
          do {
            *puVar10 = *(undefined4 *)(((int)&DAT_004c7c54 - (int)puVar8) + (int)puVar10);
            puVar10 = puVar10 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar5 = 4;
          do {
            *puVar7 = *(undefined4 *)(((int)&DAT_004c7ca8 - (int)puVar6) + (int)puVar7);
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          param_6 = (float)((int)param_6 + -1);
        } while (param_6 != 0.0);
        puVar6 = puVar2 + 9;
        local_8 = 1;
        do {
          iVar5 = __ftol();
          __ftol();
          iVar13 = __ftol();
          iVar11 = 3;
          puVar8 = puVar6;
          do {
            puVar8[1] = (float)iVar5;
            *puVar8 = *puVar8;
            puVar6 = puVar8 + 3;
            iVar11 = iVar11 + -1;
            puVar8[2] = (float)puVar8[2] + (float)iVar13;
            puVar8 = puVar6;
          } while (iVar11 != 0);
          local_8 = local_8 + 1;
        } while (local_8 < 8);
        iVar5 = *(int *)(_Str1 + 0x6c);
        iVar13 = 1;
        do {
          iVar11 = iVar13 + 4;
          iVar9 = iVar13 + 1;
          FUN_00481be0(puVar2,iVar5,iVar13 + -1,iVar9,iVar11);
          FUN_00481be0(puVar2,iVar5 + 0x48,iVar11,iVar13 + 2,iVar13 + -1);
          iVar1 = iVar13 + 3;
          FUN_00481be0(puVar2,iVar5 + 0x90,iVar13 + 2,iVar1,iVar13);
          FUN_00481be0(puVar2,iVar5 + 0xd8,iVar13,iVar13 + -1,iVar13 + 2);
          iVar14 = iVar5 + 0x168;
          FUN_00481be0(puVar2,iVar5 + 0x120,iVar9,iVar13,iVar1);
          iVar5 = iVar5 + 0x1b0;
          FUN_00481be0(puVar2,iVar14,iVar1,iVar11,iVar9);
          iVar13 = iVar1;
        } while (iVar1 < 0x19);
      }
    }
  }
  else {
    iVar5 = FUN_00431780(param_1);
    iVar13 = 0;
    if (0 < iVar5) {
      do {
        FUN_00481c30(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar13 * 4),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8);
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar5);
      return;
    }
  }
  return;
}



undefined4 FUN_00482000(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined local_40 [64];

  if (param_1 == 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    FUN_004313d0(&DAT_0050cb88);
  }
  uVar1 = FUN_00431770(param_1);
  if ((uVar1 & 0x4000) == 0) {
    if (uVar1 == 0x3064) {
      FUN_00431820(**(undefined4 **)(param_1 + 0x18),param_2);
      FUN_00430a00(param_2,param_2,&DAT_0050cb88);
      FUN_00430a00(param_2 + 0xc,param_2 + 0xc,&DAT_0050cb88);
      return 1;
    }
    return 0;
  }
  if (uVar1 == 0xd065) {
    FUN_004316a0(param_1,local_40);
  }
  else {
    if (uVar1 != 0xd064) goto LAB_00482081;
    FUN_004316a0(param_1,local_40);
  }
  FUN_0042ff80(&DAT_0050cb88,local_40);
LAB_00482081:
  iVar2 = FUN_00431780(param_1);
  iVar4 = 0;
  if (iVar2 < 1) {
    return 0;
  }
  do {
    iVar3 = FUN_00482000(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4),param_2,param_3 | 1);
    if (iVar3 != 0) {
      return 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar2);
  return 0;
}



void FUN_00482120(short *param_1,short *param_2,short *param_3,undefined4 param_4,float *param_5,
                 undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined local_64 [12];
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [64];

  local_7c = (float)(int)*param_1;
  local_78 = (float)(int)param_1[1];
  local_74 = (float)(int)param_1[2];
  local_88 = (float)(int)*param_2;
  local_84 = (float)(int)param_2[1];
  local_80 = (float)(int)param_2[2];
  local_70 = (float)(int)*param_3;
  local_6c = (float)(int)param_3[1];
  local_68 = (float)(int)param_3[2];
  FUN_00430a00(local_58,&local_7c,param_4);
  FUN_00430a00(local_4c,&local_88,param_4);
  FUN_00430a00(local_64,&local_70,param_4);
  fVar2 = (float10)FUN_00480dc0(param_6,local_58,local_4c,local_64,*param_5,&local_a0,&local_94);
  if (((float10)0.0 <= fVar2) && (fVar2 < (float10)*param_5)) {
    *param_7 = local_a0;
    param_7[1] = local_9c;
    param_7[2] = local_98;
    *param_8 = local_94;
    param_8[1] = local_90;
    param_8[2] = local_8c;
    *param_5 = (float)fVar2;
    if (-1 < DAT_0050ccd0) {
      iVar1 = 0;
      if (0 < DAT_0050ccd0) {
        do {
          *(undefined4 *)(DAT_00e229dc + iVar1 * 4) = (&DAT_00e229e0)[iVar1];
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_0050ccd0);
      }
      *(undefined4 *)(DAT_00e229dc + DAT_0050ccd0 * 4) = 0;
      FUN_00430810(local_40,param_4);
      FUN_00430a00(&DAT_00e229d0,&local_a0,local_40);
      FUN_00430980(&DAT_00e229c0,&local_94,local_40);
      return;
    }
  }
  return;
}



void FUN_00482320(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined2 *local_58;
  undefined2 *local_54;
  undefined2 *local_50;
  undefined2 *local_4c;
  undefined2 *local_48;
  undefined2 *local_44;
  int local_40;
  undefined2 local_38 [4];
  undefined2 local_30 [4];
  undefined2 local_28 [4];
  undefined2 local_20 [4];
  undefined2 local_18 [4];
  undefined2 local_10 [4];
  undefined4 local_8;
  undefined4 local_4;

  bVar5 = false;
  iVar11 = local_40;
  if (param_1 != (int *)0x0) {
    do {
      iVar10 = *param_1;
      iVar4 = param_1[1];
      local_8 = iVar10;
      iVar10 = local_8;
      local_4 = iVar4;
      iVar4 = local_4;
      uVar6 = iVar10 << 0x18;
      cVar9 = (char)((uint)iVar10 >> 8);
      local_8._2_1_ = (char)((uint)iVar10 >> 0x10);
      local_8._3_1_ = (char)((uint)iVar10 >> 0x18);
      local_8 = iVar10;
      if (uVar6 < 0x5000001) {
        if (uVar6 == 0x5000000) {
          local_54 = (undefined2 *)(iVar11 + local_8._2_1_ * 8);
          local_58 = (undefined2 *)(iVar11 + cVar9 * 8);
          local_50 = (undefined2 *)(iVar11 + local_8._3_1_ * 8);
          iVar10 = 0;
          puVar7 = local_28;
          do {
            puVar8 = local_30 + iVar10;
            *puVar8 = *local_58;
            puVar1 = local_38 + iVar10;
            *puVar1 = *local_54;
            *puVar7 = *local_50;
            *puVar8 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8));
            *puVar1 = CONCAT11((char)*puVar1,(char)((ushort)*puVar1 >> 8));
            *puVar7 = CONCAT11((char)*puVar7,(char)((ushort)*puVar7 >> 8));
            iVar10 = iVar10 + 1;
            local_58 = local_58 + 1;
            local_54 = local_54 + 1;
            local_50 = local_50 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar10 < 3);
          FUN_00482120(local_30,local_38,local_28,param_2,param_3,param_4,param_5,param_6);
        }
        else if (uVar6 == 0x1000000) {
          local_40 = param_1[1];
          iVar11 = local_40;
        }
      }
      else if (uVar6 == 0x6000000) {
        puVar7 = local_28;
        local_4._3_1_ = (char)((uint)iVar4 >> 0x18);
        local_4._2_1_ = (char)((uint)iVar4 >> 0x10);
        local_44 = (undefined2 *)(iVar11 + local_4._3_1_ * 8);
        local_48 = (undefined2 *)(iVar11 + local_4._2_1_ * 8);
        puVar8 = local_20;
        local_4c = (undefined2 *)(iVar11 + (char)((uint)iVar4 >> 8) * 8);
        local_58 = (undefined2 *)(iVar11 + local_8._3_1_ * 8);
        local_50 = (undefined2 *)(iVar11 + cVar9 * 8);
        local_54 = (undefined2 *)(iVar11 + local_8._2_1_ * 8);
        iVar11 = 0;
        local_4 = iVar4;
        do {
          puVar1 = local_10 + iVar11;
          *puVar1 = *local_50;
          puVar2 = local_18 + iVar11;
          *puVar2 = *local_54;
          *puVar8 = *local_58;
          local_30[iVar11] = *local_4c;
          local_38[iVar11] = *local_48;
          *puVar7 = *local_44;
          *puVar1 = CONCAT11((char)*puVar1,(char)((ushort)*puVar1 >> 8));
          *puVar2 = CONCAT11((char)*puVar2,(char)((ushort)*puVar2 >> 8));
          uVar3 = local_30[iVar11];
          *puVar8 = CONCAT11((char)*puVar8,(char)((ushort)*puVar8 >> 8));
          local_30[iVar11] = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
          uVar3 = *puVar7;
          local_38[iVar11] = CONCAT11((char)local_38[iVar11],(char)((ushort)local_38[iVar11] >> 8));
          iVar11 = iVar11 + 1;
          *puVar7 = CONCAT11((char)uVar3,(char)((ushort)uVar3 >> 8));
          local_50 = local_50 + 1;
          local_54 = local_54 + 1;
          local_58 = local_58 + 1;
          local_4c = local_4c + 1;
          local_48 = local_48 + 1;
          local_44 = local_44 + 1;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar11 < 3);
        FUN_00482120(local_10,local_18,local_20,param_2,param_3,param_4,param_5,param_6);
        FUN_00482120(local_30,local_38,local_28,param_2,param_3,param_4,param_5,param_6);
        iVar11 = local_40;
      }
      else if (uVar6 == 0xdf000000) {
        bVar5 = true;
      }
      param_1 = param_1 + 2;
    } while (!bVar5);
  }
  return;
}



void FUN_00482690(int param_1,undefined4 param_2,int param_3,float *param_4,undefined4 param_5,
                 undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  float10 fVar5;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;

  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + local_1c * 4);
      if (param_3 == 0) {
        uVar2 = FUN_0044c9d0(iVar1,param_2,param_4,param_5,param_6,param_7);
        FUN_00482320(uVar2);
      }
      else {
        psVar4 = *(short **)(iVar1 + 0x34);
        iVar3 = 0;
        if (0 < *(short *)(iVar1 + 0x3a)) {
          do {
            local_c = (float)(int)*psVar4;
            local_8 = (float)(int)psVar4[1];
            local_4 = (float)(int)psVar4[2];
            FUN_00430a00(&local_18,&local_c,param_2);
            fVar5 = (float10)FUN_0042f910(&local_18,param_5);
            if (fVar5 < (float10)*param_4) {
              *param_6 = local_18;
              param_6[1] = local_14;
              param_6[2] = local_10;
              *param_4 = (float)fVar5;
            }
            psVar4 = psVar4 + 8;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(short *)(iVar1 + 0x3a));
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x14));
  }
  return;
}



int FUN_004827b0(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;

  iVar1 = FUN_00431780(param_1);
  if (iVar1 < 1) {
    return -1;
  }
  if (20.0 < *(float *)(param_1 + 0x1c)) {
    return -1;
  }
  iVar2 = 1;
  pfVar3 = (float *)(param_1 + 0x20);
  do {
    if ((*pfVar3 == -1.0) || (20.0 <= *pfVar3)) break;
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 8);
  if (iVar1 <= iVar2 + -1) {
    return -1;
  }
  return iVar2 + -1;
}



void FUN_00482820(uint param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  int local_8c;
  float local_84 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [64];

  if (param_2 == 0) {
    return;
  }
  iVar5 = FUN_00431b00(param_2,2);
  if (iVar5 == 0) {
    return;
  }
  uVar6 = FUN_00431770(param_2);
  if (param_2 == param_1) {
    param_4 = 1;
  }
  FUN_0044bb10(local_40,param_3);
  if ((int)uVar6 < 0x5065) {
    if (uVar6 != 0x5064) {
      if (uVar6 != 0x3064) {
        return;
      }
      if (param_4 == 0) {
        return;
      }
      FUN_00482690(param_2,local_40,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  else {
    if (0xd065 < (int)uVar6) {
      return;
    }
    if ((int)uVar6 < 0xd064) {
      if (uVar6 == 0x5065) {
        iVar7 = FUN_00431780(param_2);
        iVar5 = *(int *)(param_2 + 0x1c);
        if (iVar5 == -2) {
          return;
        }
        if (iVar5 == -1) {
          local_8c = 0;
          if (iVar7 < 1) {
            return;
          }
          do {
            iVar5 = *(int *)(*(int *)(param_2 + 0x18) + local_8c * 4);
            if (iVar5 != 0) {
              FUN_00482820(param_1,iVar5,local_40,param_4,param_5,param_6,param_7,param_8,param_9);
            }
            local_8c = local_8c + 1;
          } while (local_8c < iVar7);
          return;
        }
        iVar5 = *(int *)(*(int *)(param_2 + 0x18) + iVar5 * 4);
        if (iVar5 == 0) {
          return;
        }
        FUN_00482820(param_1,iVar5,local_40,param_4,param_5,param_6,param_7,param_8,param_9);
        return;
      }
      if (uVar6 != 0x5066) {
        return;
      }
      iVar5 = FUN_004827b0(param_2);
      if (iVar5 == -1) {
        return;
      }
      iVar5 = *(int *)(*(int *)(param_2 + 0x18) + iVar5 * 4);
      if (iVar5 == 0) {
        return;
      }
      FUN_00482820(param_1,iVar5,local_40,param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  uVar8 = uVar6 & 0x8000;
  if (uVar8 != 0) {
    if (-1 < DAT_0050ccd0) {
      if (DAT_0050ccd0 < DAT_0050cccc + -1) {
        (&DAT_00e229e0)[DAT_0050ccd0] = param_2;
      }
      DAT_0050ccd0 = DAT_0050ccd0 + 1;
    }
    uVar10 = uVar8;
    if (uVar6 == 0xd065) {
      uVar10 = param_2;
    }
    local_84[1] = *(float *)(undefined4 *)(param_2 + 0x1c);
    local_84[2] = *(float *)(param_2 + 0x20);
    local_84[3] = *(float *)(param_2 + 0x24);
    local_70 = *(undefined4 *)(param_2 + 0x28);
    local_6c = *(undefined4 *)(param_2 + 0x2c);
    local_68 = *(float *)(param_2 + 0x30);
    pfVar9 = (float *)(param_2 + 0x34);
    local_60 = *(undefined4 *)(param_2 + 0x34);
    local_5c = *(undefined4 *)(param_2 + 0x38);
    local_58 = *(undefined4 *)(param_2 + 0x3c);
    local_74 = 0;
    local_50 = *(undefined4 *)(param_2 + 0x40);
    local_4c = *(undefined4 *)(param_2 + 0x44);
    local_48 = *(undefined4 *)(param_2 + 0x48);
    local_64 = 0;
    local_54 = 0;
    local_44 = 0x3f800000;
    if ((*(byte *)(param_2 + 0xc) & 0x10) != 0) {
      iVar5 = 3;
      pfVar11 = (float *)(uVar10 + 0x4c);
      do {
        pfVar1 = pfVar9 + -6;
        pfVar2 = pfVar9 + -3;
        fVar4 = *pfVar9;
        pfVar3 = (float *)(((int)&local_68 - (int)(undefined4 *)(param_2 + 0x1c)) + (int)pfVar9);
        pfVar9 = pfVar9 + 1;
        iVar5 = iVar5 + -1;
        *pfVar3 = *pfVar11 +
                  -(fVar4 * *(float *)(uVar10 + 0x54)) +
                  -(*pfVar1 * *(float *)(uVar10 + 0x4c)) + -(*pfVar2 * *(float *)(uVar10 + 0x50)) +
                  *pfVar3;
        pfVar11 = pfVar11 + 1;
      } while (iVar5 != 0);
    }
    FUN_0042fb70(local_40,(undefined4 *)((int)register0x00000010 + -0x80),param_3);
  }
  iVar5 = FUN_00431780(param_2);
  local_8c = 0;
  if (0 < iVar5) {
    do {
      iVar7 = *(int *)(*(int *)(param_2 + 0x18) + local_8c * 4);
      if (iVar7 != 0) {
        FUN_00482820(param_1,iVar7,local_40,param_4,param_5,param_6,param_7,param_8,param_9);
      }
      local_8c = local_8c + 1;
    } while (local_8c < iVar5);
  }
  if ((uVar8 != 0) && (-1 < DAT_0050ccd0)) {
    DAT_0050ccd0 = DAT_0050ccd0 + -1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00482c40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,
                 undefined4 param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  DAT_00e229dc = param_5;
  DAT_0050ccd0 = 0;
  if (0x14 < param_4) {
    param_4 = 0x14;
  }
  local_4c = 0;
  local_48 = 0;
  DAT_00e229d4 = param_3[1];
  DAT_00e229d8 = param_3[2];
  _DAT_00e229d0 = *param_3;
  local_44 = 0x3f800000;
  _DAT_00e229c0 = 0;
  DAT_00e229c4 = 0;
  DAT_00e229c8 = 0x3f800000;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0x3f800000;
  param_5 = 0x4cbebc20;
  DAT_0050cccc = param_4;
  local_58 = _DAT_00e229d0;
  local_54 = DAT_00e229d4;
  local_50 = DAT_00e229d8;
  FUN_00482820(param_2,param_1,&local_40,0,0,&param_5,param_3,&local_58,&local_4c);
  *param_6 = _DAT_00e229d0;
  param_6[1] = DAT_00e229d4;
  param_6[2] = DAT_00e229d8;
  *param_7 = _DAT_00e229c0;
  param_7[1] = DAT_00e229c4;
  param_7[2] = DAT_00e229c8;
  return;
}



void FUN_00482dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined local_40 [64];

  FUN_004819b0(param_3,local_40);
  FUN_00430a00(param_1,param_4,local_40);
  FUN_00430980(param_2,param_5,local_40);
  return;
}



void FUN_00482e20(void)

{
  DAT_00e98244 = DAT_00e98244 + 1;
  if (2 < DAT_00e98244) {
    DAT_00e98244 = 0;
  }
  DAT_00e98228 = '\x01' - DAT_00e98228;
  return;
}



void thunk_FUN_00426910(void)

{
  return;
}



float10 FUN_00482e60(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  float10 fVar4;

  uVar1 = param_1;
  iVar2 = 1;
  if (0 < DAT_0050ccec) {
    fVar4 = (float10)FUN_0042f910(param_1,&DAT_00e22820);
    param_1 = (float)fVar4;
    if (1 < DAT_0050ccec) {
      puVar3 = &DAT_00e2282c;
      do {
        fVar4 = (float10)FUN_0042f910(uVar1,puVar3);
        if (fVar4 < (float10)param_1) {
          param_1 = (float)fVar4;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0xc;
      } while (iVar2 < DAT_0050ccec);
    }
    fVar4 = (float10)FUN_00480670(param_1);
    return fVar4;
  }
  return (float10)-1.0;
}



void FUN_00482ee0(int param_1)

{
  *(float *)(param_1 + 0x154) =
       ((45.0 / *(float *)(param_1 + 0x134) - 1.0) * *(float *)(param_1 + 0x150) - -1.0) *
       *(float *)(param_1 + 0x148);
  return;
}



void FUN_00482f10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;

  fVar2 = ((float)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) *
          *(float *)(param_1 + 0x138)) /
          (float)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24));
  if (0.01 <= fVar2) {
    fVar7 = (float10)FUN_0042f3b0(*(float *)(param_1 + 0x134) * 0.5);
    fVar7 = (float10)FUN_0042f560((float)fVar7,fVar2);
    fVar7 = fVar7 + fVar7;
  }
  else {
    fVar7 = (float10)3.0;
  }
  fVar3 = *(float *)(param_1 + 0x140);
  fVar4 = *(float *)(param_1 + 0x144);
  fVar7 = (float10)FUN_0042f3b0((float)(fVar7 * (float10)0.5));
  fVar1 = (float)(fVar7 * (float10)fVar3);
  fVar7 = fVar7 * (float10)fVar3 * (float10)fVar2;
  fVar2 = (float)fVar7;
  fVar7 = -fVar7;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  fVar5 = fVar2 - (float)fVar7;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xbf800000;
  *(float *)(param_1 + 0xf0) = (fVar3 + fVar3) / fVar5;
  fVar6 = fVar1 - -fVar1;
  *(float *)(param_1 + 0x104) = (fVar3 + fVar3) / fVar6;
  *(float *)(param_1 + 0x110) = (float)((fVar7 + (float10)fVar2) / (float10)fVar5);
  *(float *)(param_1 + 0x114) = (-fVar1 + fVar1) / fVar6;
  *(float *)(param_1 + 0x118) = -((fVar4 + fVar3) / (fVar4 - fVar3));
  *(float *)(param_1 + 0x128) = (fVar4 * fVar3 * -2.0) / (fVar4 - fVar3);
  FUN_00482ee0(param_1);
  return;
}



void FUN_004830e0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;

  sVar1 = __ftol();
  sVar2 = __ftol();
  sVar3 = __ftol();
  sVar4 = __ftol();
  *(short *)(param_1 + 0x10) = (sVar3 - sVar1) * 2 + 8;
  *(short *)(param_1 + 0x18) = (sVar3 + sVar1) * 2;
  *(short *)(param_1 + 0x12) = (sVar4 - sVar2) * 2 + 8;
  *(short *)(param_1 + 0x1a) = (sVar4 + sVar2) * 2;
  if (DAT_0050c058 != 0) {
    *(undefined2 *)(param_1 + 0x10) = 0x500;
    *(undefined2 *)(param_1 + 0x12) = 0x3c0;
    *(ushort *)(param_1 + 0x18) = (-(ushort)((DAT_00e9a9b0 & 1) != 0) & 0xfb00) + 0x500;
    *(ushort *)(param_1 + 0x1a) = (-(ushort)((DAT_00e9a9b0 & 2) != 0) & 0xfc40) + 0x3c0;
  }
  *(undefined2 *)(param_1 + 0x14) = 0x92;
  *(undefined2 *)(param_1 + 0x1c) = 0x36c;
  return;
}



void FUN_004831d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  param_1 = param_1 * 0x16c;
  if (DAT_0050c058 != 0) {
    param_2 = 0;
    param_4 = 0x140;
    param_3 = 0;
    param_5 = 0xf0;
  }
  *(undefined4 *)(&DAT_00dfb060 + param_1) = param_2;
  *(undefined4 *)(&DAT_00dfb064 + param_1) = param_3;
  *(undefined4 *)(&DAT_00dfb068 + param_1) = param_4;
  *(undefined4 *)(&DAT_00dfb06c + param_1) = param_5;
  FUN_004830e0(&DAT_00dfb040 + param_1);
  FUN_00482f10(&DAT_00dfb040 + param_1);
  return;
}



void FUN_00483230(int param_1,int param_2)

{
  uint uVar1;

  uVar1 = *(uint *)(&DAT_00dfb040 + param_1 * 0x16c);
  if (param_2 < 0) {
    (&DAT_00dfb044)[param_1 * 0x5b] = param_2;
    *(uint *)(&DAT_00dfb040 + param_1 * 0x16c) = uVar1 & 0xfffffffe;
    return;
  }
  (&DAT_00dfb044)[param_1 * 0x5b] = param_2;
  *(uint *)(&DAT_00dfb040 + param_1 * 0x16c) = uVar1 | 1;
  return;
}



void FUN_00483270(int param_1)

{
  int iVar1;
  uint *puVar2;

  iVar1 = param_1 * 0x16c;
  puVar2 = (uint *)(&DAT_00dfb040 + iVar1);
  *puVar2 = *(uint *)(&DAT_00dfb040 + param_1 * 0x16c) & 0xfffffffe;
  (&DAT_00dfb044)[param_1 * 0x5b] = 0xffffffff;
  *(undefined4 *)(&DAT_00dfb048 + iVar1) = 0xffffffff;
  *(undefined4 *)(&DAT_00dfb04c + iVar1) = 0xffffffff;
  *(undefined4 *)(&DAT_00dfb050 + iVar1) = DAT_004c7ce0;
  *(undefined4 *)(&DAT_00dfb054 + iVar1) = DAT_004c7ce4;
  *(undefined4 *)(&DAT_00dfb058 + iVar1) = DAT_004c7ce8;
  *(undefined4 *)(&DAT_00dfb05c + iVar1) = DAT_004c7cec;
  *(undefined4 *)(&DAT_00dfb060 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb064 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb068 + iVar1) = 0x140;
  *(undefined4 *)(&DAT_00dfb06c + iVar1) = 0xf0;
  *(undefined4 *)(&DAT_00dfb070 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb074 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb078 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb07c + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb080 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb084 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb088 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb08c + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb090 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb094 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb098 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb09c + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0a0 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0a4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0a8 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0ac + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb0b0 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb0b4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0b8 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0bc + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0c0 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0c4 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb0c8 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0cc + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0d0 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0d4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0d8 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb0dc + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0e0 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0e4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0e8 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0ec + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb0f0 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb0f4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0f8 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb0fc + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb100 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb104 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb108 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb10c + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb110 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb114 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb118 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb11c + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb120 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb124 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb128 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb12c + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb130 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb134 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb138 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb13c + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb140 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb144 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb148 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb14c + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb150 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb154 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb158 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb15c + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb160 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb164 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb168 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb16c + iVar1) = 0x3f800000;
  *(undefined2 *)(&DAT_00dfb170 + iVar1) = 0x10;
  *(undefined4 *)(&DAT_00dfb174 + iVar1) = 0x42b40000;
  *(undefined4 *)(&DAT_00dfb178 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb17c + iVar1) = 0xbf800000;
  *(undefined4 *)(&DAT_00dfb180 + iVar1) = 0x40a00000;
  *(undefined4 *)(&DAT_00dfb184 + iVar1) = 0x459c4000;
  *(undefined4 *)(&DAT_00dfb188 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb18c + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb190 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb194 + iVar1) = 0x3f800000;
  *(undefined4 *)(&DAT_00dfb198 + iVar1) = 6;
  *(undefined4 *)(&DAT_00dfb19c + iVar1) = 0xffffffff;
  *(undefined4 *)(&DAT_00dfb1a0 + iVar1) = 0;
  *(undefined4 *)(&DAT_00dfb1a4 + iVar1) = 0xffffffff;
  *(undefined4 *)(&DAT_00dfb1a8 + iVar1) = 0;
  FUN_004830e0(puVar2);
  FUN_00482f10(puVar2);
  return;
}



void FUN_004834b0(void)

{
  int iVar1;

  FUN_0042d470();
  FUN_0042c3e0();
  FUN_0042c400();
  FUN_0042c460();
  FUN_0042c500();
  iVar1 = 0;
  do {
    FUN_00483270(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  FUN_00483230(0,1);
  FUN_004831d0(0,0,0,0x140,0xf0);
  FUN_004831d0(1,8,8,0x138,0xe8);
  PTR_DAT_004c7cdc = &DAT_00dfb040;
  if ((DAT_00e996dc & 0x400) != 0) {
    FUN_00483230(1,0);
    FUN_004831d0(1,8,8,0x138,0xe8);
  }
  *(uint *)PTR_DAT_004c7cdc = *(uint *)PTR_DAT_004c7cdc & 0xfffffffe;
  FUN_0044fcc0();
  DAT_00e98244 = 0;
  DAT_00e98228 = 0;
  FUN_00445640(3,2);
  FUN_00445640(5,0);
  return;
}



void FUN_00483590(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  if (DAT_00ec86c0 == 3) {
    param_5 = param_5 * 1.5;
  }
  if (DAT_00ec86c0 == 1) {
    param_5 = param_5 * 0.4;
  }
  if (0.0 < param_2) {
    *(float *)(&DAT_00dfb174 + param_1 * 0x16c) = param_2;
  }
  if (0.0 < param_3) {
    *(float *)(&DAT_00dfb178 + param_1 * 0x16c) = param_3;
  }
  if (0.0 < param_4) {
    *(float *)(&DAT_00dfb180 + param_1 * 0x16c) = param_4;
  }
  if (0.0 < param_5) {
    *(float *)(&DAT_00dfb184 + param_1 * 0x16c) = param_5;
  }
  if (0.0 <= param_6) {
    *(float *)(&DAT_00dfb17c + param_1 * 0x16c) = param_6;
  }
  FUN_00482ee0(&DAT_00dfb040 + param_1 * 0x16c);
  return;
}



void FUN_00483690(float *param_1,float *param_2)

{
  *param_1 = *param_2;
  param_1[4] = param_2[1];
  param_1[8] = param_2[2];
  param_1[2] = -param_2[4];
  param_1[6] = -param_2[5];
  param_1[10] = -param_2[6];
  param_1[1] = param_2[8];
  param_1[5] = param_2[9];
  param_1[9] = param_2[10];
  param_1[0xc] = -(param_1[4] * param_2[0xd] + param_1[8] * param_2[0xe] + *param_1 * param_2[0xc]);
  param_1[0xd] = -(param_2[0xd] * param_1[5] + param_2[0xe] * param_1[9] + param_2[0xc] * param_1[1]
                  );
  param_1[0xe] = -(param_1[2] * param_2[0xc] +
                  param_1[10] * param_2[0xe] + param_1[6] * param_2[0xd]);
  param_1[3] = param_2[3];
  param_1[7] = param_2[7];
  param_1[0xb] = param_2[0xb];
  param_1[0xf] = param_2[0xf];
  return;
}



void FUN_00483750(int param_1)

{
  undefined2 uVar1;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined local_c0 [48];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined local_80 [64];
  undefined local_40 [64];

  param_1 = param_1 * 0x16c;
  FUN_004830e0(&DAT_00dfb040 + param_1);
  FUN_00482f10(&DAT_00dfb040 + param_1);
  FUN_0044bb10(local_c0,&DAT_00dfb0b0 + param_1);
  local_cc = local_90;
  local_c8 = local_8c;
  local_c4 = local_88;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  FUN_00483690(local_80,local_c0);
  FUN_0042fb70(local_40,local_80,&DAT_00dfb130 + param_1);
  FUN_0044b690(local_40,&local_cc);
  if (0.0 < *(float *)(&DAT_00dfb17c + param_1)) {
    uVar1 = __ftol();
    *(undefined2 *)(&DAT_00dfb170 + param_1) = uVar1;
  }
  return;
}



void FUN_00483840(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float10 fVar1;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  float local_8;
  float local_4;

  fVar1 = (float10)FUN_0042f8c0(param_4);
  if ((float10)0.01 <= fVar1) {
    local_8 = (float)((float10)*(float *)(param_4 + 4) * ((float10)120.0 / fVar1));
    local_4 = (float)((float10)*(float *)(param_4 + 8) * ((float10)120.0 / fVar1));
  }
  else {
    local_8 = 0.0;
    local_4 = -1.0;
  }
  local_14 = __ftol();
  local_12 = __ftol();
  local_10 = __ftol();
  local_1c = __ftol();
  local_1a = __ftol();
  local_18 = __ftol();
  local_24 = __ftol();
  local_22 = __ftol();
  local_20 = __ftol();
  if (param_1 == -1) {
    FUN_0044e140(&local_14,&local_1c,&local_24);
    return;
  }
  FUN_0044e190(param_1,&local_14,&local_1c,&local_24);
  return;
}



void FUN_00483960(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float10 fVar1;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  float local_8;
  float local_4;

  if (param_2 != 0) {
    fVar1 = (float10)FUN_0042f8c0(param_4);
    if ((float10)0.01 <= fVar1) {
      local_8 = (float)((float10)*(float *)(param_4 + 4) * ((float10)120.0 / fVar1));
      local_4 = (float)((float10)*(float *)(param_4 + 8) * ((float10)120.0 / fVar1));
    }
    else {
      local_8 = 0.0;
      local_4 = -1.0;
    }
    local_14 = __ftol();
    local_12 = __ftol();
    local_10 = __ftol();
    local_1c = __ftol();
    local_1a = __ftol();
    local_18 = __ftol();
  }
  FUN_0044e220(param_1,param_2,&local_14,&local_1c);
  return;
}



void FUN_00483a40(int param_1)

{
  if (param_1 != -1) {
    FUN_0044e1f0(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00483a60(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  _DAT_00e229a8 = param_1;
  _DAT_00e229aa = param_2;
  _DAT_00e229ac = param_3;
  return;
}



void FUN_00483a90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if (DAT_0050ccf0 != 0) {
    if (param_1 == 1) {
      if (DAT_0050ccf8 != 0) {
        FUN_00431a50(DAT_0050ccf8,2,0xfffffffc,0x10,3);
      }
      if (DAT_0050cd00 != 0) {
        FUN_00431a50(DAT_0050cd00,2,0xfffffffc,0x10,3);
      }
      if (DAT_0050ccfc != 0) {
        FUN_00431a50(DAT_0050ccfc,2,3,0x10,2);
      }
      if (DAT_0050cd04 == 0) goto LAB_00483b7a;
      uVar2 = 2;
      uVar1 = 3;
    }
    else {
      if (DAT_0050ccf8 != 0) {
        FUN_00431a50(DAT_0050ccf8,2,3,0x10,2);
      }
      if (DAT_0050cd00 != 0) {
        FUN_00431a50(DAT_0050cd00,2,3,0x10,2);
      }
      if (DAT_0050ccfc != 0) {
        FUN_00431a50(DAT_0050ccfc,2,0xfffffffc,0x10,3);
      }
      if (DAT_0050cd04 == 0) goto LAB_00483b7a;
      uVar2 = 3;
      uVar1 = 0xfffffffc;
    }
    FUN_00431a50(DAT_0050cd04,2,uVar1,0x10,uVar2);
  }
LAB_00483b7a:
  FUN_0044e000(&DAT_00e229b0);
  FUN_0044db70(&DAT_00e229b0,&DAT_00dfb040 + param_1 * 0x16c);
  return;
}



void FUN_00483ba0(void)

{
  FUN_00426910(&DAT_00e229b0);
  return;
}



void FUN_00483bb0(int param_1)

{
  PTR_DAT_004c7cdc = &DAT_00dfb040 + param_1 * 0x16c;
  FUN_00483750(param_1);
  FUN_00483ba0(param_1);
  return;
}



void FUN_00483be0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined local_40 [64];

  if (1 < param_1) {
    __ftol();
    uVar1 = __ftol();
    uVar1 = __ftol(uVar1);
    uVar1 = FUN_00421360(s__r_spos___d__d__d_004c7d40,uVar1);
    FUN_0049eb80(local_40,uVar1);
    FUN_00450590(4,0x11d,0xd6,local_40);
    fVar2 = (float10)FUN_0045d390();
    if ((float10)0.0 < fVar2) {
      uVar1 = FUN_00421360(s__r_scomp____5f_004c7d30,(double)fVar2);
      FUN_0049eb80(local_40,uVar1);
      FUN_00450590(4,300,0xc2,local_40);
      return;
    }
  }
  return;
}



void FUN_00483ca0(void)

{
  FUN_0044de10(&DAT_00dfb1ac);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00483cb0(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *local_4;

  bVar2 = true;
  if (DAT_0050c600 == 1) {
    FUN_00483ca0();
    DAT_0050c600 = 0;
  }
  iVar4 = 0;
  FUN_00426910();
  iVar3 = DAT_0050cce0;
  DAT_0050cd0c = DAT_0050cd0c + 1;
  iVar1 = *(int *)(&DAT_00e34a70 + (uint)DAT_00e98244 * 4);
  _DAT_0050cce4 = DAT_0050cce0;
  DAT_0050cce0 = DAT_00e6b160;
  if (DAT_00e6b160 == 0) {
    DAT_0050cce0 = iVar1;
  }
  if (iVar3 == 0) {
    _DAT_0050cce4 = iVar1;
  }
  DAT_0050ccec = 0;
  _DAT_00e229a0 = &DAT_00dfb600 + (uint)DAT_00e98228 * 80000;
  DAT_00e229b0 = _DAT_00e229a0;
  DAT_00e6b160 = iVar1;
  FUN_00483bb0(0);
  if ((DAT_0050ccf0 == 0) || ((DAT_00dfb318 & 1) == 0)) {
    if (DAT_0050c084 != 0) {
      _DAT_00e229a8 = 0;
      _DAT_00e229aa = 0;
      _DAT_00e229ac = 0;
    }
    thunk_FUN_00426910(DAT_0050c084 == 0 && (DAT_00e996e0 & 2) == 0);
  }
  else {
    thunk_FUN_00426910(0,(int)DAT_00e2270a,(int)DAT_00e22716,DAT_00e22704,
                       CONCAT22(extraout_var,DAT_00e22706),DAT_00e22708,DAT_00e22710,
                       CONCAT22(extraout_var,DAT_00e22712),DAT_00e22714);
  }
  FUN_004283b0(1);
  local_4 = DAT_00e229b0;
  pbVar6 = &DAT_00dfb040;
  puVar5 = &DAT_00e22708;
  do {
    if ((*pbVar6 & 1) != 0) {
      local_4 = DAT_00e229b0;
      FUN_00483bb0(iVar4);
      if (((DAT_0050ccf0 != 0) && (0xe22713 < (int)puVar5)) && ((DAT_00dfb318 & 1) != 0)) {
        if (puVar5[-10] == 0) {
          FUN_0044e0c0(0);
        }
        else {
          FUN_0044e0c0(1);
          FUN_0044e0e0((int)(short)puVar5[-9],1000,(int)(short)puVar5[-8],(int)(short)puVar5[-7],
                       (int)(short)puVar5[-6],0xff);
        }
        if (puVar5[-5] == 0) {
          if (DAT_0050cd08 != 0) {
            uVar8 = 3;
            uVar7 = 0xfffffffc;
            goto LAB_00483ead;
          }
        }
        else if (DAT_0050cd08 != 0) {
          uVar8 = 2;
          uVar7 = 3;
LAB_00483ead:
          FUN_00431a50(DAT_0050cd08,2,uVar7,0x10,uVar8);
        }
      }
      if (DAT_0050c084 == 0) {
        FUN_0042d490(pbVar6,!bVar2);
        FUN_00483a90(iVar4);
      }
      if (DAT_0050ccec < 0x1f) {
        FUN_0042f7d0(&DAT_00e22820 + DAT_0050ccec * 0xc,
                     PTR_DAT_004b91c4 + *(int *)(pbVar6 + 4) * 0x7c + 0x44);
        DAT_0050ccec = DAT_0050ccec + 1;
      }
      bVar2 = false;
    }
    puVar5 = puVar5 + 6;
    iVar4 = iVar4 + 1;
    pbVar6 = pbVar6 + 0x16c;
    if (0xe22737 < (int)puVar5) {
      FUN_00483bb0(0);
      if ((((DAT_0050c048 & 0x200) == 0) || (DAT_0050c040 < 1)) ||
         ((DAT_00e98e90 & 0x1100) != 0x1100)) {
        FUN_004283b0(2);
        FUN_00483be0(DAT_0050c040,(uint)((int)DAT_00e229b0 - (int)local_4) >> 3);
        FUN_00450280();
        FUN_004283b0(3);
        FUN_004502b0();
      }
      FUN_00449270();
      FUN_00484130();
      DAT_0050c084 = 0;
      return;
    }
  } while( true );
}

#endif
