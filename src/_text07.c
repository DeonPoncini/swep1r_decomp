#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_00426660(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  if (0 < DAT_0050b5ec) {
    piVar4 = &DAT_00e9edc0;
    do {
      iVar1 = *piVar4;
      if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x100) & 0x80000000) == 0)) &&
         ((*(uint *)(iVar1 + 0x100) & 0x10000000) != 0)) {
        FUN_00426330(iVar1);
        uVar2 = *(uint *)(iVar1 + 0x100) & 0xf;
        switch(uVar2) {
        case 2:
          FUN_00426080(iVar1);
          break;
        case 8:
          FUN_00425f00(iVar1);
          break;
        case 9:
          FUN_00425d10(iVar1);
          break;
        case 10:
          FUN_00425de0(iVar1);
          break;
        case 0xb:
        case 0xc:
          if (uVar2 == 0xb) {
            FUN_004260f0(iVar1,0);
          }
          else {
            FUN_004260f0(iVar1,1);
          }
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < DAT_0050b5ec);
  }
  return;
}



int FUN_00426740(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  if ((param_1 != 0) && (iVar3 = 0, 0 < DAT_0050b5ec)) {
    piVar2 = &DAT_00e9edc0;
    do {
      iVar1 = *piVar2;
      if ((((iVar1 != 0) && ((*(uint *)(iVar1 + 0x100) & 0x80000000) == 0)) &&
          (param_2 == (*(uint *)(iVar1 + 0x100) & 0xf))) && (param_1 == *(int *)(iVar1 + 0x124))) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < DAT_0050b5ec);
  }
  return 0;
}



void FUN_004267a0(int param_1,float param_2,float param_3)

{
  if (param_3 < param_2) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  if (param_3 < 0.0) {
    param_3 = 0.0;
  }
  *(float *)(param_1 + 0xf0) = param_2;
  *(float *)(param_1 + 0xf8) = param_3 - param_2;
  *(float *)(param_1 + 0xf4) = param_3;
  return;
}



void FUN_00426810(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | param_2;
  return;
}



void FUN_00426820(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) & ~param_2;
  return;
}



void FUN_00426840(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  *(undefined4 *)(param_1 + 0x114) = param_2;
  uVar1 = FUN_00426220(param_1);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 0x1000000;
  return;
}



void FUN_00426880(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x110) = param_2;
  return;
}



void FUN_00426890(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;

  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 0x20000000;
  *(undefined4 *)(param_1 + 0xe0) = param_3;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x118);
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0x114) = param_2;
  uVar1 = FUN_00426220(param_1);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  return;
}



void FUN_00426900(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xdc) = param_2;
  return;
}



void FUN_00426910(void)

{
  return;
}



void FUN_00426920(void)

{
  int iVar1;
  int iVar2;

  if ((DAT_004c2584 == 0) && (-1 < DAT_004b8544)) {
    iVar1 = __ftol(DAT_004b8548);
    iVar2 = FUN_00445690(iVar1);
    if (iVar2 != 0) {
      FUN_004456a0((float)iVar1);
      iVar1 = __ftol();
    }
    FUN_00426cc0(DAT_004b8544,7,0x3e800000,(float)iVar1,1);
  }
  return;
}



void thunk_FUN_00449d60(void)

{
  FUN_00449ea0();
  DAT_0050c68c = 1;
  return;
}



void thunk_FUN_00449e30(void)

{
  undefined4 *puVar1;

  puVar1 = &DAT_00e68078;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x11;
  } while ((int)puVar1 < 0xe68298);
  return;
}



bool FUN_004269c0(int param_1)

{
  if ((0x8d < param_1) && (param_1 < 0xa6)) {
    return true;
  }
  return param_1 == 0x22;
}



void FUN_004269f0(undefined param_1)

{
  DAT_0050c688 = param_1;
  return;
}



void FUN_00426a00(int param_1,short param_2,float param_3,float param_4,short param_5,int param_6,
                 int param_7,undefined4 *param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  float local_4;

  if (param_6 == 0) {
    local_4 = 1.0;
  }
  else {
    local_4 = 1.0 - (float)(uint)DAT_0050b704._3_1_ * 0.003921569;
  }
  iVar2 = FUN_004269c0(param_1);
  bVar1 = DAT_00e364a5;
  if (iVar2 != 0) {
    bVar1 = DAT_00e364a6;
  }
  iVar3 = FUN_004269c0(param_1);
  iVar2 = DAT_00e22a30;
  sVar8 = 8;
  if (iVar3 == 0) {
    sVar8 = param_2;
  }
  local_4 = local_4 * (float)(uint)bVar1 * 0.003921569 * param_4;
  if (local_4 != 0.0) {
    if (((DAT_00e364a8 & 1) == 0) && (param_5 != -999)) {
      param_5 = 0x40;
    }
    if (-1 < param_1) {
      if (param_6 != 0) {
        iVar3 = 0;
        piVar4 = &DAT_00e68064;
        do {
          if ((piVar4[1] != 0) && (*piVar4 == param_1)) {
            if ((local_4 * 32767.0 < (float)(&DAT_00e68078)[iVar3 * 0x11]) &&
               ((&DAT_00e6806c)[iVar3 * 0x11] == DAT_00e22a30)) {
              return;
            }
            (&DAT_00e68074)[iVar3 * 0x11] = param_3 + param_3;
            uVar5 = __ftol();
            (&DAT_00e68078)[iVar3 * 0x11] = uVar5;
            (&DAT_00e6807c)[iVar3 * 0x22] = param_5;
            (&DAT_00e68070)[iVar3 * 0x11] = (int)sVar8;
            (&DAT_00e6806c)[iVar3 * 0x11] = iVar2;
            (&DAT_00e6808c)[iVar3 * 0x11] = *param_8;
            (&DAT_00e68090)[iVar3 * 0x11] = param_8[1];
            (&DAT_00e68094)[iVar3 * 0x11] = param_8[2];
            goto LAB_00426bd4;
          }
          piVar4 = piVar4 + 0x11;
          iVar3 = iVar3 + 1;
        } while ((int)piVar4 < 0xe68284);
      }
      iVar3 = -1;
      iVar6 = 0;
      piVar4 = &DAT_00e68060;
      do {
        if ((*piVar4 == -1) && (iVar3 == -1)) {
          iVar3 = iVar6;
        }
        piVar4 = piVar4 + 0x11;
        iVar6 = iVar6 + 1;
      } while ((int)piVar4 < 0xe68280);
      if (iVar3 == -1) {
        iVar6 = (int)sVar8;
        iVar7 = 0;
        piVar4 = &DAT_00e68070;
        do {
          if (*piVar4 < iVar6) {
            iVar6 = *piVar4;
            iVar3 = iVar7;
          }
          piVar4 = piVar4 + 0x11;
          iVar7 = iVar7 + 1;
        } while ((int)piVar4 < 0xe68290);
        if (iVar3 == -1) {
          return;
        }
      }
      (&DAT_00e68064)[iVar3 * 0x11] = param_1;
      (&DAT_00e68060)[iVar3 * 0x11] = 0xfffffffe;
      (&DAT_00e68068)[iVar3 * 0x11] = param_6;
      (&DAT_00e6806c)[iVar3 * 0x11] = iVar2;
      (&DAT_00e68070)[iVar3 * 0x11] = (int)sVar8;
      (&DAT_00e68074)[iVar3 * 0x11] = param_3 + param_3;
      uVar5 = __ftol();
      (&DAT_00e68078)[iVar3 * 0x11] = uVar5;
      (&DAT_00e6807c)[iVar3 * 0x22] = param_5;
      (&DAT_00e6808c)[iVar3 * 0x11] = *param_8;
      (&DAT_00e68090)[iVar3 * 0x11] = param_8[1];
      (&DAT_00e68094)[iVar3 * 0x11] = param_8[2];
      (&DAT_00e68098)[iVar3 * 0x11] = -(uint)(param_7 != 0) & (uint)param_8;
LAB_00426bd4:
      uVar5 = DAT_004b8550;
      (&DAT_00e6809c)[iVar3 * 0x11] = DAT_004b8554;
      (&DAT_00e680a0)[iVar3 * 0x11] = uVar5;
      return;
    }
  }
  return;
}



void FUN_00426c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5)

{
  if (0.0 < param_4) {
    FUN_00426a00(param_1,param_2,param_3,param_4,0x40,param_5,0,&DAT_0050b5f0);
  }
  return;
}



void FUN_00426cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5)

{
  if (param_4 < 1.0) {
    param_4 = 1.0;
  }
  FUN_00426a00(param_1,param_2,param_3,param_4,0x40,param_5,0,&DAT_0050b5f0);
  return;
}



void FUN_00426d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = DAT_004b8554;
  uVar1 = DAT_004b8550;
  DAT_004b8550 = param_8;
  DAT_004b8554 = param_9;
  FUN_00426d80(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  DAT_004b8550 = uVar1;
  DAT_004b8554 = uVar2;
  return;
}



void FUN_00426d80(int param_1,undefined4 param_2,undefined4 param_3,float param_4,float *param_5,
                 int param_6,uint param_7)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_5c [3];
  undefined local_50 [16];
  int local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20 [4];
  float local_10;
  float local_c;
  float local_8;

  local_40[0] = 0x7f;
  local_40[1] = 0x80;
  local_40[2] = 0x72;
  local_40[3] = 0x79;
  local_30 = 0x7a;
  local_2c = 0xaa;
  local_28 = 0xab;
  local_24 = 0xac;
  local_20[0] = 2.424246e-43;
  if (-1 < (int)param_7) {
    uVar2 = 0;
    piVar4 = local_40;
    do {
      if (param_1 == *piVar4) goto LAB_00426dff;
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar2 < 9);
    if (DAT_0050d550 != 0) {
      if (param_4 <= 0.0) {
        return;
      }
      FUN_00426a00(param_1,param_2,param_3,param_4,0xfffffc19,param_6,
                   ~-(uint)(param_6 != 0) & param_7,param_5);
      return;
    }
  }
LAB_00426dff:
  FUN_00429330(local_40,param_5);
  FUN_004315a0(local_50,local_20,&local_10);
  local_68 = *param_5 - local_10;
  local_64 = param_5[1] - local_c;
  fVar1 = (param_5[2] - local_8) * (param_5[2] - local_8) +
          local_64 * local_64 + local_68 * local_68;
  if (DAT_004b8554 * DAT_004b8554 <= fVar1) {
    return;
  }
  if (DAT_004b8550 * DAT_004b8550 < fVar1) {
    fVar5 = (float10)FUN_00480670(fVar1);
    fVar5 = (float10)1.0 -
            (fVar5 - (float10)DAT_004b8550) / ((float10)DAT_004b8554 - (float10)DAT_004b8550);
    local_78 = (float)fVar5;
    if (fVar5 < (float10)0.01) {
      return;
    }
    if (local_78 <= 1.0) goto LAB_00426f00;
  }
  local_78 = 1.0;
LAB_00426f00:
  if (((byte)DAT_00e996dc & 8) != 0) {
    FUN_00480890(local_50,param_5,&local_74);
    local_74 = local_74 - local_10;
    local_70 = local_70 - local_c;
    local_6c = local_6c - local_8;
    if ((((0.01 <= local_74) || (0.01 <= -local_74)) || (0.01 <= local_70)) || (0.01 <= -local_70))
    {
      FUN_0042f9b0(&local_74);
      FUN_0042f9f0(local_5c,&local_74,&local_30);
      FUN_0042f8c0(local_5c);
    }
  }
  uVar3 = __ftol();
  if (local_78 * param_4 <= 0.0) {
    return;
  }
  FUN_00426a00(param_1,param_2,param_3,local_78 * param_4,uVar3,param_6,0,&DAT_0050b5f0);
  return;
}



void FUN_004270c0(void)

{
  if (DAT_0050c68c != 0) {
    FUN_00426910();
    return;
  }
  return;
}



void FUN_004270d0(void)

{
  if ((DAT_00e364a5 == '\0') && (DAT_00e364a6 == '\0')) {
    return;
  }
  FUN_00449ef0();
  return;
}



void FUN_004270f0(undefined4 param_1,undefined4 param_2)

{
  DAT_004b8550 = param_1;
  DAT_004b8554 = param_2;
  return;
}



undefined4 FUN_00427110(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  short sVar2;

  if ((DAT_004eb450 != 0) && (param_3 != 0xffffffff)) {
    switch(param_1) {
    case 0:
      if (param_2 < 0) {
        return 0xffffffff;
      }
      if (0x16 < param_2) {
        return 0xffffffff;
      }
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0x32 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b7fb0 + param_3 * 2);
      break;
    case 1:
      if (param_2 < 0) {
        return 0xffffffff;
      }
      if (0x16 < param_2) {
        return 0xffffffff;
      }
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0x25 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b8018 + param_3 * 2);
      break;
    case 2:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0x38 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b8068 + param_3 * 2);
      break;
    case 3:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (4 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b80e0 + param_3 * 2);
      break;
    case 4:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0x67 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b80f0 + param_3 * 2);
      break;
    case 5:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0xa8 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b81c0 + param_3 * 2);
      break;
    case 6:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0x68 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b8318 + param_3 * 2);
      break;
    case 7:
      if ((int)param_3 < 1) {
        return 0xffffffff;
      }
      if (0xa7 < param_3) {
        return 0xffffffff;
      }
      sVar2 = *(short *)(&DAT_004b83f0 + param_3 * 2);
      break;
    default:
      goto switchD_00427145_caseD_8;
    }
    if (-1 < sVar2) {
                    // WARNING: Could not recover jumptable at 0x00427272. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar1 = (*(code *)(&PTR_LAB_00427344)[(byte)(&DAT_00427350)[param_1]])();
      return uVar1;
    }
  }
switchD_00427145_caseD_8:
  return 0xffffffff;
}



undefined4 FUN_00427360(int param_1,int param_2)

{
  if ((param_1 < 0) || (1 < param_1)) {
    if (0.0 < (float)(&DAT_0050b600)[param_1]) {
      return 1;
    }
  }
  else if (0.0 < (float)(&DAT_0050b620)[param_2]) {
    return 1;
  }
  return 0;
}



int FUN_004273b0(undefined2 param_1)

{
  int iVar1;

  (&DAT_004b85e0)[DAT_0050b6dc] = param_1;
  iVar1 = DAT_0050b6dc + 1;
  DAT_0050b6dc = (short)(iVar1 % 3);
  return iVar1 / 3;
}



undefined4 FUN_004273e0(int param_1)

{
  short *psVar1;

  psVar1 = &DAT_004b85e0;
  do {
    if (*psVar1 == param_1) {
      return 1;
    }
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x4b85e6);
  return 0;
}



void FUN_00427410(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;

  iVar1 = FUN_00450b00(0x54657374);
  if (0 < iVar1) {
    iVar1 = FUN_0045d350();
    if (iVar1 == 0) {
      return;
    }
    if (DAT_004b6d28 == 0) {
      return;
    }
  }
  FUN_00426910(param_1,param_2);
  iVar1 = FUN_00427360(param_1,param_2);
  if (((iVar1 == 0) && (iVar1 = FUN_00427110(param_1,param_2,param_3), iVar1 != -1)) &&
     ((iVar2 = FUN_004273e0(iVar1), iVar2 == 0 || ((param_1 == 6 && (param_3 == 0x27)))))) {
    puVar3 = &DAT_00e67e60;
    do {
      if ((puVar3[-7] == iVar1) && (iVar2 = FUN_004850c0(*puVar3,0), iVar2 == 1)) {
        return;
      }
      puVar3 = puVar3 + 0x11;
    } while ((int)puVar3 < 0xe68080);
    FUN_004273b0(iVar1);
    if (param_4 == 0) {
      FUN_00426c80(iVar1,7,0x3e800000,0x3f800000,0);
    }
    else {
      FUN_00426d10(iVar1,7,0x3e800000,0x3f800000,param_4,0,1,0x41700000,0x469c4000);
    }
    FUN_00427530(param_1,param_2,iVar1,param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00427530(int param_1,int param_2,undefined4 param_3,int param_4)

{
  float10 fVar1;

  fVar1 = (float10)FUN_0044a930(param_3);
  if (-1 < param_1) {
    if (param_1 < 2) {
      (&DAT_0050b620)[param_2] = (float)(fVar1 - (float10)-1.0);
      *(int *)(&DAT_0050b680 + param_2 * 4) = param_1;
      return;
    }
    if (param_1 == 2) {
      _DAT_0050b608 = *(float *)(&DAT_004b85e4 + param_4 * 4) - -0.25;
      return;
    }
  }
  (&DAT_0050b600)[param_1] = (float)(fVar1 - (float10)-1.0);
  return;
}



int FUN_00427590(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  int local_20 [8];

  local_20[0] = param_3;
  iVar1 = FUN_00427110(param_1,param_2,param_3);
  uVar2 = (uint)(iVar1 != -1);
  local_20[uVar2] = param_4;
  iVar1 = FUN_00427110(param_1,param_2,param_4);
  if (iVar1 != -1) {
    uVar2 = uVar2 + 1;
  }
  local_20[uVar2] = param_5;
  iVar1 = FUN_00427110(param_1,param_2,param_5);
  if (iVar1 != -1) {
    uVar2 = uVar2 + 1;
  }
  local_20[uVar2] = param_6;
  iVar1 = FUN_00427110(param_1,param_2,param_6);
  if (iVar1 != -1) {
    uVar2 = uVar2 + 1;
  }
  local_20[uVar2] = param_7;
  iVar1 = FUN_00427110(param_1,param_2,param_7);
  if (iVar1 != -1) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 != 0) {
    FUN_004816b0();
    iVar1 = __ftol();
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar1 = local_20[iVar1 % (int)uVar2];
    FUN_00427410(param_1,param_2,iVar1,param_8);
  }
  return iVar1;
}



uint FUN_00427670(int param_1,uint param_2)

{
  return *(uint *)(&DAT_00e9ed60 + param_1 * 4) & param_2;
}



void FUN_00427690(int param_1,uint param_2)

{
  *(uint *)(&DAT_00e9ed60 + param_1 * 4) = *(uint *)(&DAT_00e9ed60 + param_1 * 4) | param_2;
  return;
}



void FUN_004276a0(int param_1,uint param_2)

{
  *(uint *)(&DAT_00e9ed60 + param_1 * 4) = *(uint *)(&DAT_00e9ed60 + param_1 * 4) & ~param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004276c0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;

  fVar5 = (float10)FUN_004456a0();
  if ((float10)0.0 < fVar5) {
    DAT_004b85d4 = -1;
  }
  pfVar4 = (float *)&DAT_0050b600;
  iVar3 = DAT_004b85d4;
  do {
    if (((0.0 <= *pfVar4) &&
        (fVar1 = *pfVar4, fVar2 = (float)_DAT_00e22a40, *pfVar4 = fVar1 - fVar2,
        fVar1 - fVar2 <= 0.0)) && (iVar3 != -1)) {
      FUN_00427410(DAT_004b85d8,DAT_004b85dc,iVar3,0);
      iVar3 = -1;
      DAT_004b85d4 = -1;
    }
    pfVar4 = pfVar4 + 1;
  } while ((int)pfVar4 < 0x50b620);
  pfVar4 = (float *)&DAT_0050b620;
  do {
    if (((0.0 <= *pfVar4) &&
        (fVar1 = *pfVar4, fVar2 = (float)_DAT_00e22a40, *pfVar4 = fVar1 - fVar2,
        fVar1 - fVar2 <= 0.0)) && (iVar3 != -1)) {
      FUN_00427410(DAT_004b85d8,DAT_004b85dc,iVar3,0);
      iVar3 = -1;
      DAT_004b85d4 = -1;
    }
    pfVar4 = pfVar4 + 1;
  } while ((int)pfVar4 < 0x50b67c);
  return;
}



void FUN_004277b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00427410(param_1,param_2,param_3,0);
  DAT_004b85d8 = param_4;
  DAT_004b85dc = param_5;
  DAT_004b85d4 = param_6;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004277f0(undefined4 param_1)

{
  int iVar1;

  switch(param_1) {
  case 0:
    DAT_0050b6e0 = 0;
    DAT_004b8744 = 0xffffffff;
    return;
  case 1:
    DAT_0050b6e0 = 1;
    iVar1 = FUN_00450b00(0x54657374);
    if (iVar1 < 1) {
      DAT_004b8744 = 0x8f;
      return;
    }
    break;
  case 2:
    DAT_0050b6e0 = 2;
    _DAT_0050b6e8 = 0xbe4ccccd;
    return;
  case 3:
    DAT_0050b6e0 = 3;
    _DAT_0050b6e8 = 0xc0000000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00427880(void)

{
  float fVar1;
  float10 fVar2;
  float local_4;

  FUN_00449d70(1.0 - (float)(uint)DAT_0050b704._3_1_ * 0.003921569);
  fVar2 = (float10)FUN_004456a0();
  local_4 = (float)((float10)1.0 - fVar2 * (float10)0.9);
  fVar2 = (float10)FUN_004456a0();
  if ((float10)0.0 < fVar2) {
    local_4 = 0.1;
  }
  local_4 = local_4 * _DAT_0050b6e4;
  _DAT_0050b6ec = __ftol();
  _DAT_0050b6f4 = _DAT_0050b6f4 + (float)_DAT_00e22a40;
  fVar1 = (float)(uint)(DAT_004b8748 == 0x22);
  if ((_DAT_0050b6f0 <= 0.0) ||
     (_DAT_0050b6f0 = _DAT_0050b6f0 - (float)_DAT_00e22a40, 0.0 < _DAT_0050b6f0)) {
LAB_0042797a:
    if (fVar1 == 0.0) goto LAB_00427a0e;
  }
  else if (fVar1 == 0.0) {
    local_4 = 1.0;
    _DAT_0050b6f0 = fVar1;
    FUN_00426c80(DAT_004b8748,7,0x3e800000,0x3f800000,0);
    goto LAB_0042797a;
  }
  if ((_DAT_0050b6f0 <= 0.0) && (fVar2 = (float10)FUN_004456a0(), fVar2 == (float10)0.0)) {
    if (9.0 <= _DAT_0050b6f4) {
      DAT_004b8748 = -1;
    }
    else {
      local_4 = (9.0 - _DAT_0050b6f4) * 0.5;
      if (1.0 < local_4) {
        local_4 = 1.0;
      }
      FUN_00426c80(DAT_004b8748,7,0x3e800000,local_4,1);
    }
  }
LAB_00427a0e:
  if (DAT_0050b6e0 == 1) {
    _DAT_0050b6e4 = 1.0;
    if (-1 < DAT_004b8744) {
      FUN_00426c80(DAT_004b8744,7,0x3e800000,local_4,1);
    }
    FUN_004277f0(3,DAT_004b8744);
  }
  else if ((1 < DAT_0050b6e0) && (DAT_0050b6e0 < 4)) {
    _DAT_0050b6e4 = _DAT_0050b6e8 * (float)_DAT_00e22a40 + _DAT_0050b6e4;
    if (_DAT_0050b6e4 <= 0.0) {
      FUN_004277f0(0,0xffffffff);
    }
    else if (-1 < DAT_004b8744) {
      FUN_00426c80(DAT_004b8744,7,0x3e800000,local_4,1);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00427ad0(uint param_1)

{
  int iVar1;

  iVar1 = FUN_00450b00(0x54657374);
  if ((0 < iVar1) && (iVar1 = FUN_0045d350(), iVar1 == 0)) {
    return 0;
  }
  _DAT_0050b6f4 = 0;
  _DAT_0050b6f0 = 0x3dcccccd;
  DAT_004b8748 = (int)*(short *)(&DAT_004b8780 + (param_1 % 0xc) * 2);
  return param_1 / 0xc;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00427b20(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;

  bVar4 = false;
  if ((param_1 == 4) && (param_2 < 3)) {
    bVar4 = true;
  }
  if ((bVar4) && (_DAT_004b8798 = _DAT_004b8798 - (float)_DAT_00e22a40, _DAT_004b8798 <= 0.0)) {
    iVar5 = FUN_004816b0();
    _DAT_004b8798 = (float)iVar5 * 4.656613e-10 * 20.0 - -10.0;
    FUN_00426c80(0x24,6,0x3e800000,0x3f800000,0);
  }
  if (param_2 == 3) {
    if (param_1 == 1) {
      pfVar6 = (float *)&DAT_004b8928;
    }
    else {
      pfVar6 = param_3;
      if (param_1 == 4) {
        pfVar6 = (float *)&DAT_004b8cc8;
      }
    }
  }
  else {
    pfVar6 = (float *)(&PTR_DAT_004b8fa8)[param_1 * 3 + param_2];
  }
  if (pfVar6 != (float *)0x0) {
    fVar1 = *pfVar6;
    bVar4 = false;
    while ((0.0 <= fVar1 && (!bVar4))) {
      fVar1 = *pfVar6;
      fVar2 = pfVar6[1];
      pfVar3 = param_3;
      if ((fVar2 < fVar1) && (fVar2 = fVar2 - -1.0, (float)param_3 < fVar1)) {
        pfVar3 = (float *)((float)param_3 - -1.0);
      }
      if (((fVar1 < fVar2) && (fVar1 = ((float)pfVar3 - fVar1) / (fVar2 - fVar1), 0.0 < fVar1)) &&
         (fVar1 < 1.0)) {
        bVar4 = true;
        if ((*(byte *)((int)pfVar6 + 10) & 1) == 0) {
          if (fVar1 < 0.25) {
LAB_00427d07:
            fVar2 = fVar1 * 4.0;
          }
          else {
            fVar2 = 1.0;
            if (0.75 < fVar1) {
              fVar1 = 1.0 - fVar1;
              goto LAB_00427d07;
            }
          }
          if (*(short *)(pfVar6 + 2) == 5) {
            fVar2 = fVar2 * 0.8;
          }
          if (0.0 < fVar2) {
            FUN_00426c80((int)*(short *)(pfVar6 + 2),6,0x3e800000,fVar2,1);
          }
        }
        else {
          _DAT_004b879c = _DAT_004b879c - (float)_DAT_00e22a40;
          if (_DAT_004b879c <= 0.0) {
            iVar5 = FUN_004816b0();
            _DAT_004b879c = (float)iVar5 * 4.656613e-10 * 10.0 - -5.0;
            FUN_00426c80((int)*(short *)(pfVar6 + 2),6,0x3e800000,0x3f800000,0);
          }
        }
      }
      fVar1 = pfVar6[3];
      pfVar6 = pfVar6 + 3;
    }
  }
  return;
}



void FUN_00427d70(void)

{
  FUN_00449e30();
  DAT_004b8748 = 0xffffffff;
  DAT_004b85d4 = 0xffffffff;
  return;
}



void FUN_00427d90(float *param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  int *piVar5;
  float *pfVar6;

  if ((DAT_004b6d2c != 0) && (DAT_004eb450 != 0)) {
    FUN_00449e50();
    FUN_00422da0();
    FUN_00449ea0();
    if (-1 < DAT_004b9008) {
      piVar5 = &DAT_004b9008;
      do {
        if (-1 < *piVar5) {
          uVar4 = FUN_00422a90(*piVar5);
          FUN_00422e30(uVar4,0,0);
        }
        piVar1 = piVar5 + 1;
        piVar5 = piVar5 + 1;
      } while (-1 < *piVar1);
    }
    if (param_2 == 3) {
      if (param_1 == (float *)0x1) {
        pfVar6 = (float *)&DAT_004b8928;
      }
      else {
        pfVar6 = param_1;
        if (param_1 == (float *)0x4) {
          pfVar6 = (float *)&DAT_004b8cc8;
        }
      }
    }
    else {
      pfVar6 = (float *)(&PTR_DAT_004b8fa8)[(int)param_1 * 3 + param_2];
    }
    fVar3 = *pfVar6;
    while (0.0 <= fVar3) {
      if (-1 < *(short *)(pfVar6 + 2)) {
        uVar4 = FUN_00422a90((int)*(short *)(pfVar6 + 2));
        FUN_00422e30(uVar4,0,0);
      }
      pfVar2 = pfVar6 + 3;
      pfVar6 = pfVar6 + 3;
      fVar3 = *pfVar2;
    }
    if (-1 < *(short *)(&DAT_004b8780 + (int)param_1 * 2)) {
      uVar4 = FUN_00422a90((int)*(short *)(&DAT_004b8780 + (int)param_1 * 2));
      FUN_00422e30(uVar4,0,0);
    }
    FUN_00427f10();
  }
  return;
}



void FUN_00427ea0(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    if (param_2 != 3) {
      DAT_004b9090 = (int)*(short *)((int)&PTR_DAT_004b8750 + param_2 * 2 + param_1 * 6);
      DAT_004b8744 = DAT_004b9090;
      return;
    }
    if (param_1 == 1) {
      DAT_004b9090 = 0x92;
      DAT_004b8744 = 0x92;
      return;
    }
    if (param_1 == 4) {
      DAT_004b9090 = 0x96;
      DAT_004b8744 = 0x96;
      return;
    }
  }
  else {
    DAT_004b8744 = DAT_004b9090;
  }
  return;
}



void FUN_00427f10(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;

  iVar2 = FUN_00450b00(0x54657374);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00450b30(0x54657374,iVar4);
      if (iVar3 != 0) {
        puVar5 = &DAT_004b9098;
        uVar1 = **(undefined4 **)(*(int *)(iVar3 + 0x1e70) + 0x18);
        do {
          FUN_00427fb0(1,uVar1,*puVar5,0);
          puVar5 = puVar5 + 1;
        } while (puVar5 < &DAT_004b90c8);
        if ((*(byte *)(iVar3 + 0x60) & 0x20) != 0) {
          puVar5 = &DAT_004b90c8;
          do {
            FUN_00427fb0(1,uVar1,*puVar5,0);
            puVar5 = puVar5 + 1;
          } while (puVar5 < &DAT_004b90f0);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



void FUN_00427fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  iVar1 = FUN_00450b00(0x54657374);
  if (0 < iVar1) {
    iVar1 = FUN_0045d350();
    if (iVar1 == 0) {
      return;
    }
    if (DAT_004b6d28 == 0) {
      return;
    }
  }
  iVar1 = FUN_00427110(param_1,param_2,param_3);
  if ((iVar1 != -1) &&
     ((iVar1 = FUN_00422a90(iVar1),
      (undefined *)(*(int *)(iVar1 + 0x28) + DAT_004eb44c) <= PTR_IMAGE_DOS_HEADER_004b6d10 ||
      ((*(byte *)(iVar1 + 0x24) & 8) != 0)))) {
    FUN_00422e30(iVar1,1,0);
  }
  return;
}



void FUN_00428030(int param_1,uint param_2,float param_3,float param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined3 uVar6;

  if (DAT_0050c058 == 0) {
    uVar2 = *(uint *)(param_1 + 0x14);
    if (((uVar2 & 0x20) != 0) && ((uVar2 & param_2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 == 0) {
        cVar1 = *(char *)(param_1 + 0x1b);
        if (cVar1 < 0xff) {
          uVar4 = __ftol(*(float *)(param_1 + 8) * param_3 * 0.0625,
                         *(float *)(param_1 + 0xc) * param_4,0,0,0,2,
                         CONCAT31(cVar1 >> 7,*(undefined *)(param_1 + 0x18)),
                         *(undefined *)(param_1 + 0x19),*(undefined *)(param_1 + 0x1a),cVar1);
          uVar4 = __ftol(uVar4);
          FUN_0044f670(0,uVar4);
          return;
        }
        uVar4 = __ftol(*(float *)(param_1 + 8) * param_3 * 0.0625,
                       *(float *)(param_1 + 0xc) * param_4,0,0,0,0x10000000,
                       *(undefined *)(param_1 + 0x18),*(undefined *)(param_1 + 0x19),
                       CONCAT31(cVar1 >> 7,*(undefined *)(param_1 + 0x1a)),0xffffffff);
        uVar4 = __ftol(uVar4);
        FUN_0044f670(0,uVar4);
        return;
      }
      uVar5 = 0;
      if ((uVar2 & 0x2000) != 0) {
        uVar5 = 0x10;
      }
      if ((param_2 & 1) == 0) {
        uVar5 = 0;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar5 = uVar5 | 0x8000;
      }
      if ((*(char *)(param_1 + 0x1b) != 0xff) || ((uVar2 & 0x400) != 0)) {
        uVar5 = uVar5 | 1;
      }
      if ((uVar2 & 0x1000) != 0) {
        uVar5 = uVar5 | 0x20000;
      }
      if ((uVar2 & 4) != 0) {
        uVar5 = uVar5 | 0x2000;
      }
      if ((uVar2 & 8) != 0) {
        uVar5 = uVar5 | 0x4000;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar5 = uVar5 | 0x10000;
      }
      if ((uVar2 & 0x80) != 0) {
        uVar5 = uVar5 | 0x3000000;
      }
      if ((uVar2 & 0x100) != 0) {
        uVar5 = uVar5 | 0x800000;
      }
      if ((uVar2 & 0x8000) != 0) {
        uVar5 = uVar5 | 0x10000000;
      }
      if ((uVar2 & 0x4000) != 0) {
        uVar5 = uVar5 | 0x400000;
      }
      if ((uVar2 & 0x200) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((uVar2 & 0x10000) != 0) {
        uVar5 = uVar5 | 0x40;
      }
      uVar6 = (undefined3)(uVar2 >> 8);
      uVar4 = __ftol(uVar5,CONCAT31(uVar6,*(undefined *)(param_1 + 0x18)),
                     *(undefined *)(param_1 + 0x19),CONCAT31(uVar6,*(undefined *)(param_1 + 0x1a)),
                     *(char *)(param_1 + 0x1b));
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(*(float *)(param_1 + 8) * param_3,*(float *)(param_1 + 0xc) * param_4,
                     *(undefined4 *)(param_1 + 0x10),uVar4);
      uVar4 = __ftol(uVar4);
      FUN_0044f670(iVar3,uVar4);
    }
  }
  return;
}



void FUN_00428270(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;

  if (param_1 == 2) {
    iVar1 = 1;
  }
  else if (param_1 == 1) {
    iVar1 = 2;
  }
  else {
    iVar1 = 0x800;
    if (param_1 != 3) {
      iVar1 = param_1;
    }
  }
  iVar2 = 0;
  if (0 < DAT_0050b6fc) {
    puVar3 = &DAT_00e9ec60;
    do {
      FUN_00428030(*puVar3,iVar1,0x3f800000,0x3f800000);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < DAT_0050b6fc);
  }
  if (param_1 == 3) {
    DAT_0050b6fc = 0;
  }
  return;
}



void FUN_004282f0(short param_1,undefined4 param_2)

{
  int iVar1;

  if (param_1 < 400) {
    iVar1 = (int)param_1;
    if (DAT_004b91b8 <= iVar1) {
      DAT_004b91b8 = iVar1 + 1;
    }
    iVar1 = iVar1 * 0x20;
    *(undefined2 *)(&DAT_00e9ba60 + iVar1) = 0;
    *(undefined2 *)(&DAT_00e9ba62 + iVar1) = 0;
    *(undefined4 *)(&DAT_00e9ba68 + iVar1) = 0x3f800000;
    *(undefined4 *)(&DAT_00e9ba6c + iVar1) = 0x3f800000;
    *(undefined4 *)(&DAT_00e9ba70 + iVar1) = 0;
    *(undefined4 *)(&DAT_00e9ba74 + iVar1) = 1;
    (&DAT_00e9ba78)[iVar1] = 0xff;
    (&DAT_00e9ba79)[iVar1] = 0xff;
    (&DAT_00e9ba7a)[iVar1] = 0xff;
    (&DAT_00e9ba7b)[iVar1] = 0xff;
    *(undefined4 *)(&DAT_00e9ba7c + iVar1) = param_2;
  }
  return;
}



void FUN_00428370(void)

{
  int iVar1;

  FUN_00412e20();
  iVar1 = 0;
  if (0 < DAT_004b91b8) {
    do {
      FUN_004282f0(iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_004b91b8);
  }
  DAT_004b91b8 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004283b0(int param_1)

{
  undefined4 uVar1;
  int3 iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  char cVar7;
  float local_8;
  float local_4;

  FUN_0044f600();
  uVar1 = FUN_0044f640(&local_4,&local_8);
  if (param_1 == 2) {
    iVar3 = 1;
  }
  else if (param_1 == 1) {
    iVar3 = 2;
  }
  else {
    iVar3 = 0x800;
    if (param_1 != 3) {
      iVar3 = param_1;
    }
  }
  if (param_1 == 3) {
    iVar2 = (int3)((uint)uVar1 >> 8);
    uVar1 = CONCAT31(iVar2,DAT_0050b708._3_1_);
    if ('\0' < DAT_0050b708._3_1_) {
      if (DAT_0050b708._3_1_ < 0xff) {
        uVar6 = 2;
      }
      else {
        iVar2 = (int3)(DAT_0050b708._3_1_ >> 7);
        uVar1 = 0xffffffff;
        uVar6 = 0;
      }
      FUN_0044f670(0,0,0,local_4 * 20.0,local_8 * 240.0,0,0,0,uVar6,DAT_0050b708,
                   DAT_0050b708 >> 8 & 0xff,CONCAT31(iVar2,DAT_0050b708._2_1_),uVar1);
    }
  }
  iVar4 = 0;
  if (0 < DAT_004b91b8) {
    puVar5 = &DAT_00e9ba60;
    do {
      FUN_00428030(puVar5,iVar3,local_4,local_8);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x20;
    } while (iVar4 < DAT_004b91b8);
  }
  FUN_00428270(param_1);
  if (param_1 == 3) {
    if ('\0' < DAT_0050b704._3_1_) {
      if (DAT_0050b704._3_1_ < 0xff) {
        uVar1 = 2;
        cVar7 = DAT_0050b704._3_1_;
      }
      else {
        cVar7 = -1;
        uVar1 = 0;
      }
      FUN_0044f670(0,0,0,local_4 * 20.0,local_8 * 240.0,0,0,0,uVar1,DAT_0050b704,
                   CONCAT31(DAT_0050b704._3_1_ >> 7,(char)(DAT_0050b704 >> 8)),
                   DAT_0050b704 >> 0x10 & 0xff,cVar7);
    }
    if (DAT_0050b700 != 0) {
      FUN_0044f670(0,0,0,local_4 * 20.0,local_8 * _DAT_004b91bc,0,0,0,2,0,0,0,0xffffffff);
      uVar1 = __ftol(local_4 * 20.0,(240.0 - _DAT_004b91c0) * local_8,0,0,0,2,0,0,0,0xffffffff);
      FUN_0044f670(0,0,uVar1);
    }
  }
  FUN_00426910();
  return;
}



void FUN_004285d0(short param_1,int param_2)

{
  if (param_1 == -0xc9) {
    DAT_0050b700 = (uint)(param_2 != 0);
    return;
  }
  if (param_1 == -0x67) {
    DAT_0050b704._3_1_ = -(param_2 != 0);
    return;
  }
  if (param_1 == -0x68) {
    DAT_0050b708._3_1_ = -(param_2 != 0);
    return;
  }
  if (-1 < param_1) {
    if (param_2 != 0) {
      *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) = *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) | 0x20;
      return;
    }
    *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) =
         *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) & 0xffffffdf;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00428660(short param_1,short param_2,short param_3)

{
  if (param_1 == -0xc9) {
    _DAT_004b91bc = (float)(int)param_2;
    _DAT_004b91c0 = (float)(int)param_3;
    return;
  }
  if (-1 < param_1) {
    *(short *)(&DAT_00e9ba60 + param_1 * 0x20) = param_2;
    *(short *)(&DAT_00e9ba62 + param_1 * 0x20) = param_3;
  }
  return;
}



void FUN_004286c0(short param_1,undefined2 param_2,undefined2 param_3)

{
  if (-1 < param_1) {
    *(undefined2 *)(&DAT_00e9ba64 + param_1 * 0x20) = param_2;
    *(undefined2 *)(&DAT_00e9ba66 + param_1 * 0x20) = param_3;
  }
  return;
}



void FUN_004286f0(short param_1,undefined4 param_2,undefined4 param_3)

{
  if (-1 < param_1) {
    *(undefined4 *)(&DAT_00e9ba68 + param_1 * 0x20) = param_2;
    *(undefined4 *)(&DAT_00e9ba6c + param_1 * 0x20) = param_3;
  }
  return;
}



void FUN_00428720(short param_1,undefined4 param_2)

{
  if (-1 < param_1) {
    *(undefined4 *)(&DAT_00e9ba70 + param_1 * 0x20) = param_2;
  }
  return;
}



void FUN_00428740(short param_1,undefined param_2,undefined param_3,undefined param_4,
                 undefined param_5)

{
  int iVar1;

  if (param_1 == -0x67) {
    DAT_0050b704._0_1_ = param_2;
    DAT_0050b704._1_1_ = param_3;
    DAT_0050b704._2_1_ = param_4;
    DAT_0050b704._3_1_ = param_5;
    return;
  }
  if (param_1 == -0x68) {
    DAT_0050b708._0_1_ = param_2;
    DAT_0050b708._1_1_ = param_3;
    DAT_0050b708._2_1_ = param_4;
    DAT_0050b708._3_1_ = param_5;
    return;
  }
  if (-1 < param_1) {
    iVar1 = param_1 * 0x20;
    (&DAT_00e9ba78)[iVar1] = param_2;
    (&DAT_00e9ba79)[iVar1] = param_3;
    (&DAT_00e9ba7a)[iVar1] = param_4;
    (&DAT_00e9ba7b)[iVar1] = param_5;
  }
  return;
}



void FUN_004287e0(short param_1,uint param_2)

{
  *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) = *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) | param_2;
  return;
}



void FUN_00428800(short param_1,uint param_2)

{
  *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) = *(uint *)(&DAT_00e9ba74 + param_1 * 0x20) & ~param_2;
  return;
}



void FUN_00428820(undefined4 param_1)

{
  FUN_0044f630(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00428830(void)

{
  int iVar1;
  int iVar2;

  iVar2 = 0x20;
  iVar1 = 0;
  do {
    iVar2 = iVar2 + -1;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x14) = 0x3f800000;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x18) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x1c) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x20) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x24) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x28) = 0x3f800000;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x2c) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x30) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x34) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x38) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x40) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x44) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x48) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x4c) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x50) = 0x3f800000;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 8) = 0;
    *(undefined2 *)(PTR_DAT_004b91c4 + iVar1 + 4) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x6c) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x70) = 0;
    *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x74) = 0;
    iVar1 = iVar1 + 0x7c;
  } while (iVar2 != 0);
  DAT_00e9b9c0 = DAT_00e9b9c0 & 0xfffffffe;
  _DAT_0050c034 = PTR_DAT_004b91c4;
  DAT_0050c038 = 0;
  DAT_00e9b9c4 = 0;
  DAT_00e9b9c6 = 0;
  _DAT_00e9b9e0 = 0;
  _DAT_00e9b9e4 = 0x41200000;
  DAT_00e9ba40 = 0;
  DAT_00e9ba44 = 0;
  DAT_00e9b9e8 = 0x3f800000;
  DAT_00e9b9ec = 0;
  DAT_00e9b9f0 = 0;
  DAT_00e9b9f4 = 0;
  DAT_00e9b9f8 = 0;
  DAT_00e9b9fc = 0x3f800000;
  DAT_00e9ba00 = 0;
  DAT_00e9ba04 = 0;
  DAT_00e9ba08 = 0;
  DAT_00e9ba0c = 0;
  DAT_00e9ba10 = 0x3f800000;
  DAT_00e9ba14 = 0;
  DAT_00e9ba18 = 0;
  DAT_00e9ba1c = 0;
  DAT_00e9ba20 = 0;
  DAT_00e9ba24 = 0x3f800000;
  _DAT_00e9ba28 = 0;
  _DAT_00e9ba2c = 0;
  _DAT_00e9ba30 = 0;
  FUN_00428a40(1,4);
  return;
}



void FUN_00428a40(int param_1,uint param_2)

{
  *(uint *)(PTR_DAT_004b91c4 + param_1 * 0x7c) =
       *(uint *)(PTR_DAT_004b91c4 + param_1 * 0x7c) | param_2;
  return;
}



void FUN_00428a60(short param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;

  iVar1 = param_1 * 0x7c;
  *(undefined2 *)(PTR_DAT_004b91c4 + iVar1 + 6) = param_4;
  *(undefined2 *)(PTR_DAT_004b91c4 + iVar1 + 4) = param_2;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 8) = param_3;
  return;
}



void FUN_00428aa0(short param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;

  iVar1 = param_1 * 0x7c;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x54) = param_2;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x58) = param_3;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x5c) = param_4;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x60) = param_5;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 100) = param_6;
  *(undefined4 *)(PTR_DAT_004b91c4 + iVar1 + 0x68) = param_7;
  return;
}



void FUN_00428b10(short param_1,undefined4 param_2,undefined2 param_3)

{
  *(undefined2 *)(PTR_DAT_004b91c4 + param_1 * 0x7c + 0xc) = param_3;
  *(undefined4 *)(PTR_DAT_004b91c4 + param_1 * 0x7c + 0x10) = param_2;
  return;
}



void FUN_00428b40(short param_1,int param_2)

{
  int iVar1;

  if (param_2 != 0) {
    iVar1 = FUN_004318b0(param_2);
    if (iVar1 != -1) {
      iVar1 = FUN_004318b0(param_2);
      *(uint *)(PTR_DAT_004b91c4 + iVar1 * 0x7c) =
           *(uint *)(PTR_DAT_004b91c4 + iVar1 * 0x7c) & 0xfffffffe;
    }
    if (param_1 == -1) {
      DAT_0050c038 = 0xffffffff;
      return;
    }
    FUN_00431b90(param_2,(int)param_1);
    *(uint *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c) =
         *(uint *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c) | 1;
    DAT_0050c03c = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00428bd0(short param_1)

{
  if (DAT_0050c038 != -1) {
    *(uint *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c) =
         *(uint *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c) & 0xfffffffe;
  }
  if (param_1 == -1) {
    DAT_0050c038 = 0xffffffff;
    return;
  }
  DAT_0050c038 = (int)param_1;
  _DAT_0050c034 = (uint *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c);
  *_DAT_0050c034 = *_DAT_0050c034 | 1;
  DAT_0050c03c = 0;
  return;
}



void FUN_00428c40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;

  if (param_1 == 3) {
    FUN_004316a0(param_2,param_3);
    return;
  }
  if (param_1 == 2) {
    FUN_004316a0(param_2,param_3);
    return;
  }
  iVar1 = FUN_00431770(param_2);
  if (iVar1 == 0xd065) {
    FUN_004316a0(param_2,param_3);
    return;
  }
  iVar1 = FUN_00431770(param_2);
  if (iVar1 == 0xd065) {
    FUN_004316a0(param_2,param_3);
    return;
  }
  FUN_004313d0(param_3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00428cd0(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_84;
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

  FUN_00430b80(PTR_DAT_004b91c4 + DAT_00e9b9c4 * 0x7c + 0x14,&local_c0);
  FUN_00430b80(PTR_DAT_004b91c4 + DAT_00e9b9c6 * 0x7c + 0x14,&local_d8);
  local_90 = _DAT_00e9b9e0 / _DAT_00e9b9e4;
  FUN_00430b80(&DAT_00e9b9e8,&local_a8);
  fVar2 = local_90;
  local_a8 = local_d8 - local_c0;
  local_a4 = local_d4 - local_bc;
  local_a0 = local_d0 - local_b8;
  FUN_0042fa80(&local_a8,&local_c0,local_90,&local_a8);
  if (DAT_00e9ba44 == (undefined4 *)0x0) {
    if (local_90 <= 0.0) {
      local_8c = local_cc - local_b4;
      fVar1 = local_c4 - local_ac;
      if (180.0 < local_8c) {
        local_cc = local_cc - 360.0;
      }
      if (local_8c < -180.0) {
        local_cc = local_cc - -360.0;
      }
      _DAT_00e9b9d4 = local_cc;
      _DAT_00e9b9c8 = local_b4;
      _DAT_00e9b9d0 = local_ac;
      if (180.0 < fVar1) {
        local_c4 = local_c4 - 360.0;
      }
    }
    else {
      local_8c = local_b4 - _DAT_00e9b9c8;
      _DAT_00e9b9d0 = local_ac - _DAT_00e9b9d0;
      if (180.0 < local_8c) {
        local_b4 = local_b4 - 360.0;
      }
      if (local_8c < -180.0) {
        local_b4 = local_b4 - -360.0;
      }
      if (180.0 < _DAT_00e9b9d0) {
        local_ac = local_ac - 360.0;
      }
      if (_DAT_00e9b9d0 < -180.0) {
        local_ac = local_ac - -360.0;
      }
      _DAT_00e9b9d4 = local_cc - _DAT_00e9b9d4;
      local_84 = local_c4 - _DAT_00e9b9dc;
      if (180.0 < _DAT_00e9b9d4) {
        local_cc = local_cc - 360.0;
      }
      if (_DAT_00e9b9d4 < -180.0) {
        local_cc = local_cc - -360.0;
      }
      _DAT_00e9b9d4 = local_cc;
      _DAT_00e9b9c8 = local_b4;
      _DAT_00e9b9d0 = local_ac;
      fVar1 = local_84;
      if (180.0 < local_84) {
        local_c4 = local_c4 - 360.0;
      }
    }
    if (fVar1 < -180.0) {
      local_c4 = local_c4 - -360.0;
    }
    local_9c = _DAT_00e9b9d4 - _DAT_00e9b9c8;
    local_98 = local_c8 - local_b0;
    local_94 = local_c4 - _DAT_00e9b9d0;
    _DAT_00e9b9d8 = local_c8;
    _DAT_00e9b9dc = local_c4;
    _DAT_00e9b9cc = local_b0;
    local_cc = _DAT_00e9b9d4;
    local_b4 = _DAT_00e9b9c8;
    local_ac = _DAT_00e9b9d0;
    FUN_0042fa80(&local_9c,&local_b4,fVar2,&local_9c);
    FUN_00431060(&DAT_00e9b9e8,&local_a8);
  }
  else {
    puVar3 = DAT_00e9ba44;
    if (DAT_00e9ba40 != 1) {
      if (DAT_00e9ba40 == 0) {
        local_80 = *DAT_00e9ba44;
        local_7c = DAT_00e9ba44[1];
        local_78 = DAT_00e9ba44[2];
        local_74 = DAT_00e9ba44[3];
        local_70 = DAT_00e9ba44[4];
        local_6c = DAT_00e9ba44[5];
        local_68 = DAT_00e9ba44[6];
        local_64 = DAT_00e9ba44[7];
        local_60 = DAT_00e9ba44[8];
        local_5c = DAT_00e9ba44[9];
        local_58 = DAT_00e9ba44[10];
        local_54 = DAT_00e9ba44[0xb];
        local_50 = DAT_00e9ba44[0xc];
        local_4c = DAT_00e9ba44[0xd];
        local_48 = DAT_00e9ba44[0xe];
        local_44 = DAT_00e9ba44[0xf];
        puVar3 = &local_50;
      }
      else {
        FUN_00428c40((int)DAT_00e9ba40,DAT_00e9ba44,&local_80);
        puVar3 = &local_50;
      }
    }
    FUN_00481220(&local_a8,puVar3,&DAT_00e9b9e8,&local_a8,local_94);
  }
  local_3c = DAT_00e9b9ec;
  local_38 = DAT_00e9b9f0;
  local_40 = DAT_00e9b9e8;
  local_30 = DAT_00e9b9f8;
  local_2c = DAT_00e9b9fc;
  local_34 = DAT_00e9b9f4;
  local_24 = DAT_00e9ba04;
  local_20 = DAT_00e9ba08;
  local_28 = DAT_00e9ba00;
  local_18 = DAT_00e9ba10;
  local_14 = DAT_00e9ba14;
  local_1c = DAT_00e9ba0c;
  local_c = DAT_00e9ba1c;
  local_8 = DAT_00e9ba20;
  local_10 = DAT_00e9ba18;
  local_4 = DAT_00e9ba24;
  FUN_00431950(param_1,&local_40);
  if (*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c4 * 0x7c + 0x78) != 0) {
    FUN_00431a50(*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c4 * 0x7c + 0x78),2,1,0x10,2);
  }
  if (*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c6 * 0x7c + 0x78) != 0) {
    FUN_00431a50(*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c6 * 0x7c + 0x78),2,1,0x10,2);
  }
  _DAT_00e9b9e0 = _DAT_00e9b9e0 + (float)_DAT_00e22a40;
  if (_DAT_00e9b9e4 <= _DAT_00e9b9e0) {
    if (*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c6 * 0x7c + 0x78) != 0) {
      FUN_00431a50(*(int *)(PTR_DAT_004b91c4 + DAT_00e9b9c6 * 0x7c + 0x78),2,0xfffffffe,0x10,3);
    }
    FUN_00428bd0(DAT_00e9b9c6);
    *(uint *)(PTR_DAT_004b91c4 + DAT_00e9b9c4 * 0x7c) =
         *(uint *)(PTR_DAT_004b91c4 + DAT_00e9b9c4 * 0x7c) & 0xfffffffe;
  }
  return;
}



void FUN_004292b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar1 = FUN_004318c0();
  iVar4 = 0;
  if (iVar1 < 1) {
    FUN_004313d0(param_1);
    return;
  }
  do {
    iVar2 = FUN_004318d0(iVar4);
    if (iVar2 != 0) {
      uVar3 = FUN_00431770(iVar2);
      if ((uVar3 & 1) != 0) {
        iVar1 = FUN_004318b0(iVar2);
        FUN_0044bb10(param_1,PTR_DAT_004b91c4 + iVar1 * 0x7c + 0x14);
        return;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar1);
  FUN_004313d0(param_1);
  return;
}



void FUN_00429330(int param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float local_c;

  local_c = -1.0;
  uVar2 = FUN_004318d0(1);
  uVar3 = FUN_004318d0(2);
  uVar4 = FUN_00431770(uVar2);
  uVar5 = FUN_00431770(uVar3);
  iVar6 = param_1;
  if ((uVar4 & 1) != 0) {
    iVar6 = FUN_004318b0(uVar2);
    local_c = (param_2[2] - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x4c)) *
              (param_2[2] - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x4c)) +
              (param_2[1] - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x48)) *
              (param_2[1] - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x48)) +
              (*param_2 - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x44)) *
              (*param_2 - *(float *)(PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x44));
  }
  if ((uVar5 & 1) == 0) {
    fVar1 = -1.0;
    iVar7 = param_1;
  }
  else {
    iVar7 = FUN_004318b0(uVar3);
    fVar1 = (param_2[2] - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x4c)) *
            (param_2[2] - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x4c)) +
            (param_2[1] - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x48)) *
            (param_2[1] - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x48)) +
            (*param_2 - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x44)) *
            (*param_2 - *(float *)(PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x44));
  }
  if ((0.0 <= fVar1) && (fVar1 <= local_c)) {
    FUN_0044bb10(param_1,PTR_DAT_004b91c4 + iVar7 * 0x7c + 0x14);
    return;
  }
  if (0.0 <= local_c) {
    FUN_0044bb10(param_1,PTR_DAT_004b91c4 + iVar6 * 0x7c + 0x14);
    return;
  }
  FUN_004313d0(param_1);
  return;
}



undefined4 FUN_004294e0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar1 = FUN_004318c0();
  iVar4 = 0;
  if (iVar1 < 1) {
    return 0;
  }
  while (((iVar2 = FUN_004318d0(iVar4), iVar2 == 0 ||
          (uVar3 = FUN_00431770(iVar2), (uVar3 & 1) == 0)) ||
         (iVar2 = FUN_004318b0(iVar2), iVar2 != param_1))) {
    iVar4 = iVar4 + 1;
    if (iVar1 <= iVar4) {
      return 0;
    }
  }
  return 1;
}



void FUN_00429540(void)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  short sVar8;
  undefined4 *puVar9;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  int local_ac;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
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
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined local_18 [12];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  iVar5 = 0x20;
  iVar6 = 0;
  iVar3 = 0;
  do {
    iVar5 = iVar5 + -1;
    *(uint *)(PTR_DAT_004b91c4 + iVar3) = *(uint *)(PTR_DAT_004b91c4 + iVar3) & 0xfffffffd;
    iVar3 = iVar3 + 0x7c;
  } while (iVar5 != 0);
  sVar8 = 0;
  iVar3 = FUN_004318c0();
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar6 = FUN_004318d0(iVar3);
      if (iVar6 != 0) {
        iVar3 = FUN_004318b0(iVar6);
        uVar4 = FUN_00431770(iVar6);
        if ((((uVar4 & 1) != 0) && (-1 < iVar3)) && (iVar3 < 0x20)) {
          *(uint *)(PTR_DAT_004b91c4 + iVar3 * 0x7c) =
               *(uint *)(PTR_DAT_004b91c4 + iVar3 * 0x7c) | 2;
        }
      }
      sVar8 = sVar8 + 1;
      iVar3 = (int)sVar8;
      iVar5 = FUN_004318c0();
    } while (iVar3 < iVar5);
  }
  local_ac = 0x20;
  local_a8 = 0;
  do {
    pbVar7 = PTR_DAT_004b91c4 + local_a8;
    if ((*(short *)(pbVar7 + 4) != 0) && ((*pbVar7 & 3) != 0)) {
      sVar8 = *(short *)(pbVar7 + 6);
      if (sVar8 == 0) {
        puVar9 = *(undefined4 **)(pbVar7 + 8);
        *(undefined4 *)(pbVar7 + 0x14) = *puVar9;
        *(undefined4 *)(pbVar7 + 0x18) = puVar9[1];
        *(undefined4 *)(pbVar7 + 0x1c) = puVar9[2];
        *(undefined4 *)(pbVar7 + 0x20) = puVar9[3];
        *(undefined4 *)(pbVar7 + 0x24) = puVar9[4];
        *(undefined4 *)(pbVar7 + 0x28) = puVar9[5];
        *(undefined4 *)(pbVar7 + 0x2c) = puVar9[6];
        *(undefined4 *)(pbVar7 + 0x30) = puVar9[7];
        *(undefined4 *)(pbVar7 + 0x34) = puVar9[8];
        *(undefined4 *)(pbVar7 + 0x38) = puVar9[9];
        *(undefined4 *)(pbVar7 + 0x3c) = puVar9[10];
        *(undefined4 *)(pbVar7 + 0x40) = puVar9[0xb];
        *(undefined4 *)(pbVar7 + 0x44) = puVar9[0xc];
        *(undefined4 *)(pbVar7 + 0x48) = puVar9[0xd];
        *(undefined4 *)(pbVar7 + 0x4c) = puVar9[0xe];
        *(undefined4 *)(pbVar7 + 0x50) = puVar9[0xf];
      }
      else if (sVar8 == 1) {
        FUN_00431060(pbVar7 + 0x14,*(undefined4 *)(pbVar7 + 8));
      }
      else {
        FUN_00428c40((int)sVar8,*(undefined4 *)(pbVar7 + 8),pbVar7 + 0x14);
      }
      puVar9 = (undefined4 *)(pbVar7 + 0x14);
      local_b8 = *(float *)(pbVar7 + 0x54);
      local_b4 = *(float *)(pbVar7 + 0x58);
      local_b0 = *(float *)(pbVar7 + 0x5c);
      if (((local_b8 != 0.0) || (local_b4 != 0.0)) || (local_b0 != 0.0)) {
        FUN_00430980(&local_b8,&local_b8,puVar9);
        *(float *)(pbVar7 + 0x44) = local_b8 + *(float *)(pbVar7 + 0x44);
        *(float *)(pbVar7 + 0x48) = local_b4 + *(float *)(pbVar7 + 0x48);
        *(float *)(pbVar7 + 0x4c) = local_b0 + *(float *)(pbVar7 + 0x4c);
      }
      local_a4 = *(float *)(pbVar7 + 0x60);
      local_a0 = *(float *)(pbVar7 + 100);
      local_9c = *(float *)(pbVar7 + 0x68);
      if (((local_a4 != 0.0) || (local_a0 != 0.0)) || (local_9c != 0.0)) {
        FUN_00431020(&local_98,local_a4,local_a0,local_9c);
        FUN_0042ff80(puVar9,&local_98);
      }
      sVar8 = *(short *)(pbVar7 + 4);
      if (((sVar8 == 2) || (sVar8 == 3)) || (sVar8 == 4)) {
        FUN_00430b80(puVar9,local_18);
        sVar8 = *(short *)(pbVar7 + 0xc);
        if (sVar8 == 1) {
          local_c4 = *(float *)(pbVar7 + 0x6c) + **(float **)(pbVar7 + 0x10);
          local_c0 = *(float *)(pbVar7 + 0x70) + *(float *)(*(int *)(pbVar7 + 0x10) + 4);
          local_bc = *(float *)(pbVar7 + 0x74) + *(float *)(*(int *)(pbVar7 + 0x10) + 8);
        }
        else {
          if (sVar8 == 0) {
            local_58 = **(undefined4 **)(pbVar7 + 0x10);
            local_54 = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 4);
            local_50 = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 8);
            local_4c = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0xc);
            local_48 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x10);
            local_44 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x14);
            local_40 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x18);
            local_3c = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x1c);
            local_38 = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x20);
            local_34 = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x24);
            local_30 = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x28);
            local_2c = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x2c);
            local_28 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x30);
            local_24 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x34);
            local_20 = *(float *)(*(int *)(pbVar7 + 0x10) + 0x38);
            local_1c = *(undefined4 *)(*(int *)(pbVar7 + 0x10) + 0x3c);
          }
          else {
            FUN_00428c40((int)sVar8,*(undefined4 *)(pbVar7 + 0x10),&local_58);
          }
          local_c4 = *(float *)(pbVar7 + 0x6c) + local_28;
          local_c0 = *(float *)(pbVar7 + 0x70) + local_24;
          local_bc = *(float *)(pbVar7 + 0x74) + local_20;
          if (*(short *)(pbVar7 + 4) == 4) {
            fVar1 = local_40;
            if (local_40 < 0.0) {
              fVar1 = -local_40;
            }
            local_c4 = (fVar1 * 40.0 - -1.0) * local_48 + local_c4;
            fVar1 = local_40;
            if (local_40 < 0.0) {
              fVar1 = -local_40;
            }
            local_c0 = (fVar1 * 40.0 - -1.0) * local_44 + local_c0;
            fVar1 = local_40;
            if (local_40 < 0.0) {
              fVar1 = -local_40;
            }
            local_bc = (fVar1 * 40.0 - -1.0) * local_40 + local_bc;
          }
        }
        FUN_00481220(pbVar7 + 0x44,&local_c4,puVar9,local_18,local_4);
        if (*(short *)(pbVar7 + 4) == 3) {
          if (*(short *)(pbVar7 + 6) == 0) {
            **(undefined4 **)(pbVar7 + 8) = *puVar9;
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 4) = *(undefined4 *)(pbVar7 + 0x18);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 8) = *(undefined4 *)(pbVar7 + 0x1c);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0xc) = *(undefined4 *)(pbVar7 + 0x20);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x10) = *(undefined4 *)(pbVar7 + 0x24);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x14) = *(undefined4 *)(pbVar7 + 0x28);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x18) = *(undefined4 *)(pbVar7 + 0x2c);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x1c) = *(undefined4 *)(pbVar7 + 0x30);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x20) = *(undefined4 *)(pbVar7 + 0x34);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x24) = *(undefined4 *)(pbVar7 + 0x38);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x28) = *(undefined4 *)(pbVar7 + 0x3c);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x2c) = *(undefined4 *)(pbVar7 + 0x40);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x30) = *(undefined4 *)(pbVar7 + 0x44);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x34) = *(undefined4 *)(pbVar7 + 0x48);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x38) = *(undefined4 *)(pbVar7 + 0x4c);
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x3c) = *(undefined4 *)(pbVar7 + 0x50);
          }
          else if (*(short *)(pbVar7 + 6) == 1) {
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0xc) = local_c;
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x10) = local_8;
            *(undefined4 *)(*(int *)(pbVar7 + 8) + 0x14) = local_4;
          }
        }
      }
    }
    local_a8 = local_a8 + 0x7c;
    local_ac = local_ac + -1;
  } while (local_ac != 0);
  iVar3 = FUN_004318c0();
  puVar2 = PTR_DAT_004c7cdc;
  if (iVar3 == 0) {
    if (DAT_0050c038 == -1) {
      FUN_00428cd0(PTR_DAT_004c7cdc);
    }
    else {
      if (DAT_0050c03c == 0) {
        DAT_0050c03c = 1;
      }
      local_98 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x14);
      local_94 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x18);
      local_90 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x1c);
      local_8c = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x20);
      local_88 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x24);
      local_84 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x28);
      local_80 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x2c);
      local_7c = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x30);
      local_78 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x34);
      local_74 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x38);
      local_70 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x3c);
      local_6c = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x40);
      local_68 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x44);
      local_64 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x48);
      local_60 = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x4c);
      local_5c = *(undefined4 *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c + 0x50);
      if (PTR_DAT_004c7cdc == (undefined *)0x0) {
        return;
      }
      FUN_00431950(PTR_DAT_004c7cdc,&local_98);
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_00431900(puVar2,&DAT_00e996c0,&DAT_00e996cc);
      return;
    }
  }
  else {
    iVar5 = 0;
    iVar3 = FUN_004318c0();
    if (0 < iVar3) {
      do {
        iVar6 = FUN_004318d0(iVar5);
        if (iVar6 != 0) {
          iVar3 = FUN_004318b0(iVar6);
          uVar4 = FUN_00431770(iVar6);
          if ((uVar4 & 1) != 0) {
            if (iVar3 == -1) {
              FUN_00428cd0(iVar6);
            }
            else {
              if (DAT_0050c03c == 0) {
                DAT_0050c03c = 1;
              }
              local_98 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x14);
              local_94 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x18);
              local_90 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x1c);
              local_8c = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x20);
              local_88 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x24);
              local_84 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x28);
              local_80 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x2c);
              local_7c = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x30);
              local_78 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x34);
              local_74 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x38);
              local_70 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x3c);
              local_6c = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x40);
              local_68 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x44);
              local_64 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x48);
              local_60 = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x4c);
              local_5c = *(undefined4 *)(PTR_DAT_004b91c4 + iVar3 * 0x7c + 0x50);
              FUN_00431950(iVar6,&local_98);
            }
          }
        }
        iVar5 = iVar5 + 1;
        iVar3 = FUN_004318c0();
      } while (iVar5 < iVar3);
    }
    if (iVar6 != 0) {
      FUN_00431900(iVar6,&DAT_00e996c0,&DAT_00e996cc);
    }
  }
  return;
}



void FUN_00429cd0(int param_1)

{
  (&DAT_0050c070)[DAT_0050c07c] = DAT_0050c04c;
  DAT_00e9a9b4 = DAT_00e9a9b4 + 1;
  DAT_0050c07c = param_1;
  DAT_0050c04c = (&DAT_0050c070)[param_1];
  (&DAT_00e9a9c0)[DAT_00e9a9b4] = param_1;
  return;
}



void FUN_00429d10(void)

{
  (&DAT_0050c070)[DAT_0050c07c] = DAT_0050c04c;
  if (0 < DAT_00e9a9b4) {
    DAT_00e9a9b4 = DAT_00e9a9b4 + -1;
  }
  DAT_0050c07c = (&DAT_00e9a9c0)[DAT_00e9a9b4];
  DAT_0050c04c = (&DAT_0050c070)[(&DAT_00e9a9c0)[DAT_00e9a9b4]];
  return;
}



void FUN_00429d50(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;

  fVar1 = param_3 * param_2 + *param_1;
  *param_1 = fVar1;
  if (fVar1 < param_4) {
    *param_1 = param_4;
  }
  if (param_5 < *param_1) {
    *param_1 = param_5;
  }
  return;
}



void FUN_00429d90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;

  iVar1 = __ftol();
  *param_1 = iVar1;
  if (iVar1 < param_4) {
    *param_1 = param_4;
  }
  if (param_5 < *param_1) {
    *param_1 = param_5;
  }
  return;
}



undefined4
FUN_00429dc0(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 *param_4,
            float *param_5)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;

  *param_3 = 0;
  iVar1 = FUN_00450aa0(0x54657374,DAT_0050c050);
  if (iVar1 != 0) {
    *param_4 = 0xffffd8f0;
    switch(param_1) {
    case 0:
      uVar2 = FUN_00421360(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x1e70) + 0x18) + 0x18));
      uVar2 = FUN_00421360(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x1e70) + 0x18) + 0x14),uVar2);
      FUN_0049eb80(param_2,s_Name___s__s_004b92c0,uVar2);
      *param_5 = -99999.0;
      return 1;
    case 1:
      FUN_0049eb80(param_2,s_Anti_Skid_004b92b4);
      *param_5 = *(float *)(iVar1 + 0x6c);
      return 1;
    case 2:
      FUN_0049eb80(param_2,s_Turn_Response_004b92a4);
      *param_5 = *(float *)(iVar1 + 0x70);
      return 1;
    case 3:
      FUN_0049eb80(param_2,s_Max_Turn_Rate_004b9294);
      *param_5 = *(float *)(iVar1 + 0x74);
      return 1;
    case 4:
      FUN_0049eb80(param_2,s_Acceleration_004b9284);
      *param_5 = *(float *)(iVar1 + 0x78);
      return 1;
    case 5:
      FUN_0049eb80(param_2,s_Max_Speed_004b9278);
      *param_5 = *(float *)(iVar1 + 0x7c);
      return 1;
    case 6:
      FUN_0049eb80(param_2,s_AirBrake_Inv_004b9268);
      *param_5 = *(float *)(iVar1 + 0x80);
      return 1;
    case 7:
      FUN_0049eb80(param_2,s_Decel_Inv_004b925c);
      *param_5 = *(float *)(iVar1 + 0x84);
      return 1;
    case 8:
      FUN_0049eb80(param_2,s_Boost_Thrust_004b924c);
      *param_5 = *(float *)(iVar1 + 0x88);
      return 1;
    case 9:
      FUN_0049eb80(param_2,s_Heat_Rate_004b9240);
      *param_5 = *(float *)(iVar1 + 0x8c);
      return 1;
    case 10:
      FUN_0049eb80(param_2,s_Cool_Rate_004b9234);
      *param_5 = *(float *)(iVar1 + 0x90);
      return 1;
    case 0xb:
      FUN_0049eb80(param_2,s_Hover_Height_004b9224);
      *param_5 = *(float *)(iVar1 + 0x94);
      return 1;
    case 0xc:
      FUN_0049eb80(param_2,s_Repair_Rate_004b9218);
      *param_5 = *(float *)(iVar1 + 0x98);
      return 1;
    case 0xd:
      FUN_0049eb80(param_2,s_Bump_Mass_004b920c);
      *param_5 = *(float *)(iVar1 + 0x9c);
      return 1;
    case 0xe:
      FUN_0049eb80(param_2,s_Dmg_Immunity_004b91fc);
      *param_5 = *(float *)(iVar1 + 0xa0);
      return 1;
    case 0xf:
      FUN_0049eb80(param_2,s_ISect_Radius_004b91ec);
      *param_5 = *(float *)(iVar1 + 0xa8);
      return 1;
    case 0x10:
      FUN_0049eb80(param_2,s_AI_Look_Ahead_004b91dc);
      fVar3 = (float10)FUN_00480670(*(undefined4 *)(iVar1 + 0x108));
      *param_5 = (float)fVar3;
      return 1;
    default:
      FUN_0049eb80(param_2,s_Unimplemented_004b91cc);
      *param_5 = 0.0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0042a110(undefined4 param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_4;

  fVar1 = param_2;
  _DAT_0050c080 = 1;
  iVar2 = FUN_00450aa0(0x54657374,DAT_0050c050);
  if (iVar2 != 0) {
    switch(param_1) {
    case 0:
      param_2 = 1.0;
      if (fVar1 <= 0.0) {
        param_2 = -1.0;
      }
      DAT_0050c050 = __ftol();
      iVar2 = FUN_00450aa0(0x54657374,DAT_0050c050);
      if ((iVar2 == 0) || ((*(ushort *)(iVar2 + 6) & 0x100) != 0)) {
        if (0.0 <= param_2) {
          DAT_0050c050 = 0;
          return;
        }
        do {
          DAT_0050c050 = DAT_0050c050 + 1;
          iVar2 = FUN_00450aa0(0x54657374,DAT_0050c050);
          if ((iVar2 == 0) || ((*(ushort *)(iVar2 + 6) & 0x100) != 0)) {
            param_2 = 0.0;
            DAT_0050c050 = DAT_0050c050 + -1;
          }
        } while (param_2 < 0.0);
        return;
      }
      break;
    case 1:
      FUN_00429d50((undefined4 *)(iVar2 + 0x6c),param_2,0x3c23d70a,0x3d4ccccd,0x3f800000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x1c) = *(undefined4 *)(iVar2 + 0x6c);
      return;
    case 2:
      FUN_00429d50((undefined4 *)(iVar2 + 0x70),param_2,0x3f800000,0x41200000,0x447a0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x20) = *(undefined4 *)(iVar2 + 0x70);
      return;
    case 3:
      FUN_00429d50((undefined4 *)(iVar2 + 0x74),param_2,0x3f800000,0x41200000,0x447a0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x24) = *(undefined4 *)(iVar2 + 0x74);
      return;
    case 4:
      FUN_00429d50((undefined4 *)(iVar2 + 0x78),param_2,0x3c23d70a,0x3ca3d70a,0x41200000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x28) = *(undefined4 *)(iVar2 + 0x78);
      return;
    case 5:
      FUN_00429d50((undefined4 *)(iVar2 + 0x7c),param_2,0x3f800000,0x42c80000,0x44fa0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x2c) = *(undefined4 *)(iVar2 + 0x7c);
      return;
    case 6:
      FUN_00429d50((undefined4 *)(iVar2 + 0x80),param_2,0x3f000000,0x40000000,0x447a0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x30) = *(undefined4 *)(iVar2 + 0x80);
      return;
    case 7:
      FUN_00429d50((undefined4 *)(iVar2 + 0x84),param_2,0x3f000000,0x40000000,0x447a0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x34) = *(undefined4 *)(iVar2 + 0x84);
      return;
    case 8:
      FUN_00429d50((undefined4 *)(iVar2 + 0x88),param_2,0x3f800000,0x41200000,0x447a0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x38) = *(undefined4 *)(iVar2 + 0x88);
      return;
    case 9:
      FUN_00429d50((undefined4 *)(iVar2 + 0x8c),param_2,0x3dcccccd,0x3dcccccd,0x41f00000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x3c) = *(undefined4 *)(iVar2 + 0x8c);
      return;
    case 10:
      FUN_00429d50((undefined4 *)(iVar2 + 0x90),param_2,0x3dcccccd,0x3dcccccd,0x41a00000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x40) = *(undefined4 *)(iVar2 + 0x90);
      return;
    case 0xb:
      FUN_00429d50((undefined4 *)(iVar2 + 0x94),param_2,0x3d4ccccd,0x40400000,0x41f00000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x44) = *(undefined4 *)(iVar2 + 0x94);
      return;
    case 0xc:
      FUN_00429d50((undefined4 *)(iVar2 + 0x98),param_2,0x3c23d70a,0,0x3f800000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x48) = *(undefined4 *)(iVar2 + 0x98);
      return;
    case 0xd:
      FUN_00429d50((undefined4 *)(iVar2 + 0x9c),param_2,0x3dcccccd,0x3f800000,0x42c80000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x4c) = *(undefined4 *)(iVar2 + 0x9c);
      return;
    case 0xe:
      FUN_00429d50((undefined4 *)(iVar2 + 0xa0),param_2,0x3c23d70a,0,0x3f800000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x50) = *(undefined4 *)(iVar2 + 0xa0);
      return;
    case 0xf:
      FUN_00429d50((undefined4 *)(iVar2 + 0xa8),param_2,0x3d4ccccd,0x3d4ccccd,0x41a00000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x54) = *(undefined4 *)(iVar2 + 0xa8);
      return;
    case 0x10:
      fVar3 = (float10)FUN_00480670(*(undefined4 *)(iVar2 + 0x108));
      local_4 = (float)fVar3;
      FUN_00429d50(&local_4,param_2,0x3f800000,0x41200000,0x43fa0000);
      *(float *)(iVar2 + 0x108) = local_4 * local_4;
    }
  }
  return;
}



undefined4
FUN_0042a580(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 *param_4,
            float *param_5)

{
  int iVar1;
  char *pcVar2;

  *param_3 = 0;
  *param_4 = 0xffffd8f0;
  *param_5 = -10000.0;
  switch(param_1) {
  case 0:
    FUN_0049eb80(param_2,s_Debug_Level_004b939c);
    *param_4 = DAT_0050c040;
    return 1;
  case 1:
    if (((byte)DAT_0050c048 & 4) == 0) {
      FUN_0049eb80(param_2,s________004b9394);
      return 1;
    }
    if (DAT_0050ca28 != 0) {
      FUN_0049eb80(param_2,s_Invincibility_On_004b9380);
      return 1;
    }
    pcVar2 = s_Invincibility_Off_004b936c;
    break;
  case 2:
    if (((byte)DAT_0050c048 & 8) == 0) {
      FUN_0049eb80(param_2,s________004b9394);
      return 1;
    }
    FUN_0049eb80(param_2,s_AI_Level_x10_004b935c);
    *param_5 = DAT_004c707c * 10.0;
    return 1;
  case 3:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_0049eb80(param_2,s_AI_SPREAD_004b9350);
      *param_5 = DAT_004c7080;
      return 1;
    }
    pcVar2 = s________004b9394;
    break;
  case 4:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_0049eb80(param_2,s_Death_SpeedMin_004b9340);
      *param_5 = DAT_004c7bb8;
      return 1;
    }
    pcVar2 = s________004b9394;
    break;
  case 5:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_0049eb80(param_2,s_Death_SpeedDrop_004b9330);
      *param_5 = DAT_004c7bbc;
      return 1;
    }
    pcVar2 = s________004b9394;
    break;
  case 6:
    if (((byte)DAT_0050c048 & 0x10) != 0) {
      if (DAT_0050ca24 != 0) {
        FUN_0049eb80(param_2,s_Spline_Markers_On_004b931c);
        *param_5 = -99999.0;
        return 1;
      }
      pcVar2 = s_Spline_Markers_Off_004b9308;
LAB_0042a792:
      FUN_0049eb80(param_2,pcVar2);
      *param_5 = -99999.0;
      return 1;
    }
    pcVar2 = s________004b9394;
    break;
  case 7:
    if (((byte)DAT_0050c048 & 0x20) != 0) {
      if ((DAT_00e996dc & 0x4000) != 0) {
        FUN_0049eb80(param_2,s_Mirrored_Mode_On_004b92f4);
        *param_5 = -99999.0;
        return 1;
      }
      pcVar2 = s_Mirrored_Mode_Off_004b92e0;
      goto LAB_0042a792;
    }
    pcVar2 = s________004b9394;
    break;
  case 8:
    if (((byte)DAT_0050c048 & 2) == 0) {
      pcVar2 = s________004b9394;
    }
    else {
      iVar1 = FUN_00450aa0(0x54657374,DAT_0050c050);
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(ushort *)(iVar1 + 6) & 0x100) != 0) {
        return 0;
      }
      pcVar2 = s_Edit_Vehicle_Stats_004b92cc;
    }
    break;
  default:
    FUN_0049eb80(param_2,s_Unimplemented_004b91cc);
    return 0;
  }
  FUN_0049eb80(param_2,pcVar2);
  return 1;
}



undefined4
FUN_0042a840(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;

  *param_3 = 0;
  *param_4 = 0xffffd8f0;
  *param_5 = 0xc61c4000;
  switch(param_1) {
  case 0:
    uVar1 = FUN_00421360(s__SCREENTEXT_535__cContinue_004b9468);
    FUN_0049eb80(param_2,uVar1);
    if (DAT_0050c064 != 0) {
      uVar1 = FUN_00421360(s__SCREENTEXT_366___Are_you_sure__004b9448);
      FUN_0049eb80(param_2,&DAT_004b9440,uVar1);
      return 1;
    }
    break;
  case 1:
    uVar1 = FUN_00421360(s__SCREENTEXT_536__cRestart_Race_004b93ec);
    FUN_0049eb80(param_2,uVar1);
    if (DAT_0050c064 != 0) {
      uVar1 = FUN_00421360(s__SCREENTEXT_367___Yes_004b93d4);
      FUN_0049eb80(param_2,&DAT_004b9440,uVar1);
      return 1;
    }
    break;
  case 2:
    uVar1 = FUN_00421360(s__SCREENTEXT_657__cQuit_Race_004b9424);
    FUN_0049eb80(param_2,uVar1);
    if (DAT_0050c064 != 0) {
      uVar1 = FUN_00421360(s__SCREENTEXT_368___No_004b940c);
      FUN_0049eb80(param_2,&DAT_004b9440,uVar1);
      return 1;
    }
    break;
  case 3:
    uVar1 = FUN_00421360(s__SCREENTEXT_658__cQuit_Game_004b93a8);
    FUN_0049eb80(param_2,uVar1);
    if (DAT_0050c064 != 0) {
      FUN_0049eb80(param_2,&DAT_004d55cc);
    }
    break;
  case 4:
    if (DAT_0050c044 < 1) {
      FUN_0049eb80(param_2,s_Unimplemented_004b91cc);
      return 0;
    }
    FUN_0049eb80(param_2,s__cGame_Cheats_004b93c4);
    return 1;
  default:
    FUN_0049eb80(param_2,s_Unimplemented_004b91cc);
    return 0;
  }
  return 1;
}



void FUN_0042a9f0(undefined4 param_1,undefined4 param_2)

{
  switch(param_1) {
  case 0:
    FUN_00429d90(&DAT_0050c040,param_2,0x3f800000,0,6);
    return;
  case 1:
    if (((byte)DAT_0050c048 & 4) != 0) {
      DAT_0050ca28 = (uint)(DAT_0050ca28 == 0);
      return;
    }
    break;
  case 2:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_00429d50(&DAT_004c707c,param_2,0x3a83126f,0x3e4ccccd,0x40000000);
      return;
    }
    break;
  case 3:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_00429d50(&DAT_004c7080,param_2,0x3f000000,0x40000000,0x43480000);
      return;
    }
    break;
  case 4:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_00429d50(&DAT_004c7bb8,param_2,0x3f800000,0x41a00000,0x447a0000);
      return;
    }
    break;
  case 5:
    if (((byte)DAT_0050c048 & 8) != 0) {
      FUN_00429d50(&DAT_004c7bbc,param_2,0x3f800000,0x41a00000,0x43fa0000);
      return;
    }
    break;
  case 6:
    if (((byte)DAT_0050c048 & 0x10) != 0) {
      DAT_0050ca24 = (uint)(DAT_0050ca24 == 0);
      return;
    }
    break;
  case 7:
    if (((byte)DAT_0050c048 & 0x20) != 0) {
      if ((DAT_00e996dc & 0x4000) != 0) {
        DAT_00e996dc = DAT_00e996dc & 0xffffbfff;
        return;
      }
      DAT_00e996dc = DAT_00e996dc | 0x4000;
    }
  }
  return;
}



void FUN_0042ab60(int param_1)

{
  if ((param_1 == 8) && (((byte)DAT_0050c048 & 2) != 0)) {
    FUN_00429cd0(1);
  }
  return;
}



void FUN_0042ab80(int param_1)

{
  if (param_1 == 0) {
    DAT_0050c054 = param_1;
    DAT_004b2940 = 1;
    FUN_00445780();
  }
  if (param_1 == 2) {
    if (DAT_0050c064 == 0) {
      DAT_0050c064 = 1;
      DAT_0050c068 = param_1;
      DAT_0050c04c = 1;
    }
    else {
      DAT_0050c064 = 0;
      DAT_0050c04c = DAT_0050c068;
    }
  }
  if (param_1 == 1) {
    if (DAT_0050c064 == 0) {
      DAT_004b2940 = 1;
      DAT_0050c054 = 2;
      FUN_00445780();
    }
    else if (DAT_0050c068 == 2) {
      DAT_004b2940 = 1;
      DAT_0050c054 = 1;
      FUN_00445780();
    }
    else if (DAT_0050c068 == 3) {
      FUN_004240d0();
      FUN_0049ea40(0);
    }
  }
  if ((param_1 == 3) && (DAT_0050c064 == 0)) {
    DAT_0050c064 = 1;
    DAT_0050c068 = param_1;
    DAT_0050c04c = 1;
  }
  if (param_1 == 4) {
    FUN_00429cd0(0);
  }
  return;
}
#endif
