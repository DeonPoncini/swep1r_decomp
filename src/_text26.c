#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_0048aa80(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *local_8c;
  int *local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c [26];
  uint local_14;

  local_8c = (int *)0x0;
  local_88 = (int *)0x0;
  if (param_1[0x1f] != 0) {
    if (*(uint *)(DAT_0052e618 + 0x138) < (uint)param_1[0x21]) {
      FUN_0048bb50(param_1[0x21]);
    }
    puVar2 = param_1;
    puVar3 = local_7c;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_14 = local_14 & 0xfffff7ff | 0x4004000;
    iVar1 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,local_7c,&local_8c,0);
    while (iVar1 == -0x7789fe84) {
      iVar1 = FUN_0048bb50(param_1[0x21]);
      if (iVar1 == 0) {
        local_8c = (int *)0x0;
        goto LAB_0048abd7;
      }
      iVar1 = (**(code **)(*DAT_0052e638 + 0x18))(DAT_0052e638,local_7c,&local_8c,0);
    }
    if (iVar1 == 0) {
      if (*(int *)(&DAT_0052d5a8 + param_2 * 0x60) != 0) {
        uStack_84 = *(undefined4 *)(&DAT_0052d5ac + param_2 * 0x60);
        uStack_80 = uStack_84;
        (**(code **)(*local_8c + 0x74))(local_8c,8,&uStack_84);
      }
      iVar1 = (**(code **)*local_8c)(local_8c,&DAT_004af328,&local_88);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*local_88 + 0x14))(local_88,param_1[0x1f]);
        while (iVar1 == -0x7789fe84) {
          iVar1 = FUN_0048bb50(param_1[0x21]);
          if (iVar1 == 0) goto LAB_0048abd7;
          iVar1 = (**(code **)(*local_88 + 0x14))(local_88,param_1[0x1f]);
        }
        if (iVar1 == 0) {
          param_1[0x20] = local_88;
          (**(code **)(*local_8c + 8))(local_8c);
          param_1[0x22] = DAT_004c98b4;
          FUN_0048ba20(param_1);
          return;
        }
      }
      else {
        local_88 = (int *)0x0;
      }
    }
  }
LAB_0048abd7:
  if (local_8c != (int *)0x0) {
    (**(code **)(*local_8c + 8))(local_8c);
  }
  if (local_88 != (int *)0x0) {
    (**(code **)(*local_88 + 8))(local_88);
  }
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  return;
}



void FUN_0048ac50(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  iVar3 = DAT_0052e630;
  if (DAT_0052e630 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + 0x80);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(iVar3 + 0x80) = 0;
      }
      iVar2 = *(int *)(iVar3 + 0x90);
      *(undefined4 *)(iVar3 + 0x88) = 0;
      *(int *)(iVar3 + 0x90) = 0;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      iVar3 = iVar2;
    } while (iVar2 != 0);
  }
  DAT_0052e630 = 0;
  DAT_0052e634 = 0;
  DAT_0052e62c = 0;
  if (DAT_0052e618 != 0) {
    *(undefined4 *)(DAT_0052e618 + 0x138) = *(undefined4 *)(DAT_0052e618 + 0x134);
  }
  if (DAT_0052e644 != (int *)0x0) {
    (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,1,0);
  }
  DAT_004c98b4 = 1;
  return;
}



void FUN_0048ace0(int param_1)

{
  *(undefined4 *)(param_1 + 0x88) = DAT_004c98b4;
  FUN_0048ba90(param_1);
  FUN_0048ba20(param_1);
  return;
}



undefined4 FUN_0048ad10(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;

  if ((DAT_0052d56c != 0) && (param_1 < DAT_0052d56c)) {
    puVar2 = &DAT_0052d870 + param_1 * 0xda;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  }
  return 0;
}



uint FUN_0048ad50(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint local_4;

  uVar1 = 0;
  if (DAT_0052d56c == 0) {
    return uVar1;
  }
  uVar3 = 0;
  local_4 = 0;
  if (DAT_0052d56c != 0) {
    piVar4 = &DAT_0052d878;
    do {
      uVar2 = 0;
      if ((param_1[1] == 0) || (piVar4[-1] == param_1[1])) {
        uVar2 = 1;
        if (((param_1[2] == 0) || (*piVar4 == param_1[2])) && (uVar2 = 2, piVar4[-2] == *param_1)) {
          return uVar1;
        }
      }
      if (uVar3 < uVar2) {
        uVar3 = uVar2;
        local_4 = uVar1;
      }
      piVar4 = piVar4 + 0xda;
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_0052d56c);
  }
  return local_4;
}



uint FUN_0048add0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint local_8;
  uint local_4;

  uVar2 = 0;
  if (DAT_0052e61c == 0) {
    return uVar2;
  }
  local_8 = 0;
  local_4 = 0;
  if (DAT_0052e61c != 0) {
    piVar3 = &DAT_0052d578;
    iVar1 = *param_1;
    do {
      uVar4 = 0;
      if ((piVar3[-2] == iVar1) && (uVar4 = 1, piVar3[-1] == param_1[1])) {
        uVar4 = 2;
        if (iVar1 == 1) {
          if (((*piVar3 == param_1[2]) && (piVar3[1] == param_1[3])) && (piVar3[2] == param_1[4])) {
            return uVar2;
          }
        }
        else {
          if (iVar1 != 2) {
            return uVar2;
          }
          if (piVar3[-2] == 2) {
            uVar4 = 3;
          }
          if (((*piVar3 == param_1[2]) && (piVar3[1] == param_1[3])) &&
             ((piVar3[2] == param_1[4] && (piVar3[9] == param_1[0xb])))) {
            return uVar2;
          }
        }
      }
      if (local_8 < uVar4) {
        local_8 = uVar4;
        local_4 = uVar2;
      }
      piVar3 = piVar3 + 0x18;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_0052e61c);
  }
  return local_4;
}



bool FUN_0048aeb0(void)

{
  int iVar1;

  DAT_0052e610 = 0;
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,7,1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0xe,1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x17,4);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,4,1);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052e610 = DAT_0052e610 | 1;
  iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x10,2);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x11,2);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x12,1);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052e610 = DAT_0052e610 | 0x80;
  DAT_0052e614 = 0;
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1f,1);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052e610 = DAT_0052e610 | 0x10;
  iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xd,1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0xe,1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1b,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x15,2);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x13,5);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x14,6);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052e610 = DAT_0052e610 | 0x200;
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0xf,1);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x19,6);
  if (iVar1 != 0) {
    return false;
  }
  if ((*(int *)(&DAT_0052d5a8 + DAT_0052d568 * 0x60) != 0) ||
     (*(int *)(&DAT_0052d5a8 + DAT_0052d560 * 0x60) != 0)) {
    iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x29,1);
    if (iVar1 != 0) {
      return false;
    }
  }
  if (*(int *)(DAT_0052e618 + 0x14) == 0) {
    iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x21,0);
    if (iVar1 != 0) {
      return false;
    }
  }
  else {
    iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x21,1);
    if (iVar1 != 0) {
      return false;
    }
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,9,2);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0xb,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1d,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1c,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,8,3);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x1a,1);
  if (iVar1 != 0) {
    return false;
  }
  DAT_0052e610 = DAT_0052e610 | 2;
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,2,0);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x16,1);
  return iVar1 == 0;
}



void FUN_0048b1b0(void)

{
  int iVar1;
  int iVar2;

  if (((byte)DAT_0052e610 & 0x80) == 0) {
    iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x10,1);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = 0;
    iVar2 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x11,1);
    if (iVar2 != 0) {
      return;
    }
  }
  else {
    iVar1 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x10,2);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = 0;
    iVar2 = (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x11,2);
    if (iVar2 != 0) {
      return;
    }
  }
  DAT_0052e614 = iVar1;
  if (DAT_0052e614 == 1) {
    (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x12,2);
    return;
  }
  if (DAT_0052e614 == 2) {
    (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x12,3);
    return;
  }
  (**(code **)(*DAT_0052e644 + 0xa0))(DAT_0052e644,0,0x12,1);
  return;
}



undefined4 FUN_0048b260(float param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float local_40 [5];
  float local_2c;
  float local_18;
  undefined4 local_14;
  float local_8;

  if (ABS(param_4 - param_3) < 0.01) {
    return 0x80070057;
  }
  fVar4 = (float10)fsin((float10)param_1 * (float10)0.5);
  if (ABS(fVar4) < (float10)0.009999999776482582) {
    return 0x80070057;
  }
  fVar5 = (float10)fcos((float10)param_1 * (float10)0.5);
  pfVar3 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 1;
  }
  local_18 = param_4 / (param_4 - param_3);
  local_40[0] = param_2 * (float)(fVar5 / fVar4);
  local_2c = (float)(fVar5 / fVar4);
  local_8 = -(local_18 * param_3);
  local_14 = 0x3f800000;
  uVar1 = (**(code **)(*DAT_0052e644 + 100))(DAT_0052e644,3,local_40);
  return uVar1;
}



void FUN_0048b340(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_EBX;

  piVar1 = DAT_0052e644;
  iVar5 = *DAT_0052e644;
  uVar2 = __ftol();
  uVar3 = __ftol();
  uVar4 = __ftol();
  iVar5 = (**(code **)(iVar5 + 0x58))(piVar1,0x22,(uVar2 | (uVar3 | 0xffffff00) << 8) << 8 | uVar4);
  if (iVar5 == 0) {
    iVar5 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x24,param_1);
    if (iVar5 == 0) {
      (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x25,unaff_EBX);
    }
  }
  return;
}



bool FUN_0048b3c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_40;
  undefined4 uStack_34;

  uStack_40 = 0;
  iVar1 = (**(code **)(*DAT_0052e640 + 0x18))(DAT_0052e640,&DAT_0052e648);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x14))(DAT_0052e644,DAT_0052e648);
  if (iVar1 != 0) {
    return false;
  }
  puVar2 = &uStack_40;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uStack_34 = DAT_00ec8dac;
  uStack_40 = 0x2c;
  iVar1 = (**(code **)(*DAT_0052e648 + 0x44))(DAT_0052e648,&uStack_40);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_0052e644 + 0x30))(DAT_0052e644,DAT_0052e648);
  return iVar1 == 0;
}



void FUN_0048b4b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  if (((param_1 != (undefined4 *)0x0) && (DAT_0052e640 != (int *)0x0)) && (DAT_0052e618 != 0)) {
    puVar2 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1[3] = 0xffffffff;
    (**(code **)(*DAT_0052e640 + 0x28))(DAT_0052e640,DAT_0052e618 + 0x238,FUN_0048b500,param_1);
  }
  return;
}



undefined4 FUN_0048b500(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;

  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    if (((param_1[1] == 0x400) && (0xf < (uint)param_1[3])) && ((uint)param_1[3] < (uint)param_2[3])
       ) {
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *param_1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
    }
    return 1;
  }
  return 0;
}



void FUN_0048ba20(int param_1)

{
  if (DAT_0052e630 == 0) {
    DAT_0052e634 = param_1;
    DAT_0052e630 = param_1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    *(int *)(DAT_0052e634 + 0x90) = param_1;
    *(int *)(param_1 + 0x8c) = DAT_0052e634;
    *(undefined4 *)(param_1 + 0x90) = 0;
    DAT_0052e634 = param_1;
  }
  DAT_0052e62c = DAT_0052e62c + 1;
  *(int *)(DAT_0052e618 + 0x138) = *(int *)(DAT_0052e618 + 0x138) - *(int *)(param_1 + 0x84);
  return;
}



void FUN_0048ba90(int param_1)

{
  int iVar1;

  if (param_1 == DAT_0052e630) {
    DAT_0052e630 = *(int *)(param_1 + 0x90);
    if (DAT_0052e630 == 0) {
      DAT_0052e634 = 0;
    }
    else {
      *(undefined4 *)(DAT_0052e630 + 0x8c) = 0;
      if (*(int *)(DAT_0052e630 + 0x90) == 0) {
        DAT_0052e634 = DAT_0052e630;
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (param_1 == DAT_0052e634) {
      DAT_0052e634 = iVar1;
      *(undefined4 *)(iVar1 + 0x90) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
    }
  }
  DAT_0052e62c = DAT_0052e62c + -1;
  *(int *)(DAT_0052e618 + 0x138) = *(int *)(DAT_0052e618 + 0x138) + *(int *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}



bool FUN_0048bb50(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  uVar4 = 0;
  iVar3 = DAT_0052e630;
  if (DAT_0052e630 != 0) {
    do {
      if (*(int *)(iVar3 + 0x88) == DAT_004c98b4) break;
      piVar1 = (int *)(iVar3 + 0x90);
      if (*(uint *)(iVar3 + 0x84) == param_1) {
        (**(code **)(**(int **)(iVar3 + 0x80) + 8))(*(int **)(iVar3 + 0x80));
        *(undefined4 *)(iVar3 + 0x80) = 0;
        FUN_0048ba90(iVar3);
        return true;
      }
      iVar3 = *piVar1;
    } while (*piVar1 != 0);
  }
  iVar3 = DAT_004c98b4;
  iVar5 = DAT_0052e630;
  if (DAT_0052e630 != 0) {
    do {
      if (param_1 <= uVar4) break;
      iVar2 = *(int *)(iVar5 + 0x90);
      if (*(int *)(iVar5 + 0x88) != iVar3) {
        (**(code **)(**(int **)(iVar5 + 0x80) + 8))(*(int **)(iVar5 + 0x80));
        *(undefined4 *)(iVar5 + 0x80) = 0;
        uVar4 = uVar4 + *(int *)(iVar5 + 0x84);
        FUN_0048ba90(iVar5);
        iVar3 = DAT_004c98b4;
      }
      iVar5 = iVar2;
    } while (iVar2 != 0);
  }
  return uVar4 != 0;
}



uint FUN_0048bc10(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;

  puVar1 = (uint *)(**(code **)(DAT_00ecc420 + 0x20))(8);
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar2 = FUN_00487d20();
  uVar8 = 0;
  if (iVar2 == 0) {
    FUN_0048be20(puVar1);
    return 0;
  }
  uVar3 = FUN_00488070();
  *puVar1 = uVar3;
  puVar1[1] = 0;
  if (uVar3 != 0) {
    puVar4 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(uVar3 * 0x2b4);
    puVar1[1] = (uint)puVar4;
    if (*puVar1 != 0) {
      do {
        puVar7 = puVar4;
        for (iVar2 = 0xad; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        iVar2 = FUN_00488080(uVar8,puVar4);
        if ((iVar2 != 0) || (iVar2 = FUN_00487e00(uVar8), iVar2 == 0)) {
          FUN_0048be20(puVar1);
          return 0;
        }
        iVar2 = FUN_00489d40();
        puVar4[0xa9] = iVar2;
        puVar4[0xaa] = 0;
        if (iVar2 != 0) {
          iVar2 = (**(code **)(DAT_00ecc420 + 0x20))(iVar2 * 0x50);
          puVar4[0xaa] = iVar2;
          uVar3 = 0;
          if (puVar4[0xa9] != 0) {
            do {
              iVar5 = FUN_00489d50(uVar3,iVar2);
              if (iVar5 == 0) {
                iVar2 = iVar2 + 0x50;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < (uint)puVar4[0xa9]);
          }
          if (puVar4[0x41] == 0) {
            puVar4[0xab] = 0;
            puVar4[0xac] = 0;
          }
          else {
            iVar2 = FUN_00489dc0();
            if (iVar2 == 0) {
              FUN_0048be20(puVar1);
              return 0;
            }
            iVar2 = FUN_00489ea0();
            puVar4[0xab] = iVar2;
            puVar4[0xac] = 0;
            if (iVar2 != 0) {
              uVar6 = (**(code **)(DAT_00ecc420 + 0x20))(iVar2 * 0x368);
              puVar4[0xac] = uVar6;
              iVar2 = puVar4[0xab];
              puVar7 = (undefined4 *)FUN_00489eb0();
              puVar9 = (undefined4 *)puVar4[0xac];
              for (uVar3 = (uint)(iVar2 * 0x368) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(undefined *)puVar9 = *(undefined *)puVar7;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
                puVar9 = (undefined4 *)((int)puVar9 + 1);
              }
            }
            FUN_00489e40();
          }
        }
        FUN_00487e80();
        puVar4 = puVar4 + 0xad;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *puVar1);
    }
  }
  FUN_00487da0();
  return -(uint)(*puVar1 != 0) & (uint)puVar1;
}



void FUN_0048be20(uint *param_1)

{
  int *piVar1;
  uint uVar2;

  if (param_1[1] != 0) {
    uVar2 = 0;
    if (*param_1 != 0) {
      piVar1 = (int *)(param_1[1] + 0x2a8);
      do {
        if (piVar1[2] != 0) {
          (**(code **)(DAT_00ecc420 + 0x24))(piVar1[2]);
          piVar1[2] = 0;
        }
        if (*piVar1 != 0) {
          (**(code **)(DAT_00ecc420 + 0x24))(*piVar1);
          *piVar1 = 0;
        }
        piVar1 = piVar1 + 0xad;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    if (param_1[1] != 0) {
      (**(code **)(DAT_00ecc420 + 0x24))(param_1[1]);
      param_1[1] = 0;
    }
  }
  (**(code **)(DAT_00ecc420 + 0x24))(param_1);
  return;
}



int * FUN_0048bee0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;

  piVar1 = (int *)(**(code **)(DAT_00ecc420 + 0x20))(0xc);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  iVar2 = FUN_0048bf50(param_1);
  *piVar1 = iVar2;
  puVar3 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(iVar2 << 4);
  piVar1[1] = (int)puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return (int *)0x0;
  }
  for (uVar4 = (uint)(*piVar1 << 4) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  piVar1[2] = (int)&LAB_0048bea0;
  return piVar1;
}



int FUN_0048bf50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  piVar1 = &DAT_004aeeb0;
  do {
    if (param_1 < *piVar1) {
      iVar2 = (&DAT_004aeeb0)[iVar3];
      break;
    }
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + 1;
    iVar2 = param_1;
  } while ((int)piVar1 < 0x4aef30);
  if (1999 < param_1) {
    iVar2 = FUN_0048bf90(param_1);
  }
  return iVar2;
}



int FUN_0048bf90(int param_1)

{
  int iVar1;

  iVar1 = FUN_0048bfc0(param_1);
  while (iVar1 == 0) {
    param_1 = param_1 + 1;
    iVar1 = FUN_0048bfc0(param_1);
  }
  return param_1;
}



undefined4 FUN_0048bfc0(int param_1)

{
  int iVar1;

  iVar1 = 2;
  if (param_1 + -1 < 3) {
    return 1;
  }
  do {
    if (param_1 % iVar1 == 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_1 + -1);
  return 1;
}



void FUN_0048c000(int param_1)

{
  int iVar1;

  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}



void FUN_0048c020(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 4);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    (**(code **)(DAT_00ecc420 + 0x24))(iVar2);
    iVar2 = iVar1;
  }
  return;
}



void FUN_0048c050(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  if (0 < *param_1) {
    iVar1 = 0;
    do {
      FUN_0048c020(param_1[1] + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < *param_1);
  }
  (**(code **)(DAT_00ecc420 + 0x24))(param_1[1]);
  (**(code **)(DAT_00ecc420 + 0x24))(param_1);
  return;
}



undefined4 FUN_0048c0a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;

  iVar1 = FUN_0048c160(param_1,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = (*(code *)param_1[2])(param_2,*param_1);
  iVar1 = iVar1 * 0x10;
  iVar2 = FUN_0048c000(param_1[1] + iVar1);
  if (*(int *)(iVar2 + 8) == 0) {
    puVar3 = (undefined4 *)(param_1[1] + iVar1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(param_1[1] + 8 + iVar1) = param_2;
    *(undefined4 *)(param_1[1] + 0xc + iVar1) = param_3;
    return 1;
  }
  puVar3 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[2] = param_2;
  puVar3[3] = param_3;
  FUN_0048d790(iVar2,puVar3);
  return 1;
}



undefined4 FUN_0048c160(undefined4 param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0048c190(param_1,param_2,&param_2);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



int FUN_0048c190(undefined4 *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;

  if (param_1 != (undefined4 *)0x0) {
    iVar2 = (*(code *)param_1[2])(param_2,*param_1);
    *param_3 = iVar2;
    iVar2 = param_1[1] + iVar2 * 0x10;
    if (iVar2 != 0) {
      while (pbVar3 = *(byte **)(iVar2 + 8), pbVar5 = param_2, pbVar3 != (byte *)0x0) {
        do {
          bVar1 = *pbVar3;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_0048c1eb:
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_0048c1f0;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_0048c1eb;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0048c1f0:
        if (iVar4 == 0) {
          return iVar2;
        }
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_0048c210(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;

  puVar3 = (undefined4 *)FUN_0048c190(param_1,param_2,&param_2);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)puVar3[1];
  FUN_0048d7b0(puVar3);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x10);
  if (puVar4 == puVar3) {
    if (puVar1 == (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      return 1;
    }
    *puVar4 = *puVar1;
    puVar4[1] = puVar1[1];
    puVar4[2] = puVar1[2];
    puVar4[3] = puVar1[3];
    iVar5 = param_2 * 0x10 + *(int *)(param_1 + 4);
    piVar2 = *(int **)(iVar5 + 4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar5;
    }
    (**(code **)(DAT_00ecc420 + 0x24))(puVar1);
    return 1;
  }
  (**(code **)(DAT_00ecc420 + 0x24))(puVar3);
  return 1;
}



char * FUN_0048c2d0(char *param_1,char *param_2,int param_3,char *param_4)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;

  if (param_2 != (char *)0x0) {
    *param_2 = '\0';
  }
  sVar2 = _strspn(param_1,param_4);
  param_1 = param_1 + sVar2;
  pcVar3 = _strpbrk(param_1,param_4);
  if (pcVar3 == (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar5 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
  }
  else {
    uVar4 = (int)pcVar3 - (int)param_1;
  }
  if (param_3 - 1U <= uVar4) {
    uVar4 = param_3 - 1U;
  }
  if (param_2 != (char *)0x0) {
    _strncpy(param_2,param_1,uVar4);
    param_2[uVar4] = '\0';
  }
  return pcVar3;
}



void FUN_0048c340(ushort *param_1,byte *param_2,int param_3)

{
  int iVar1;

  iVar1 = 0;
  if (0 < param_3) {
    do {
      if (*param_2 == 0) break;
      *param_1 = (ushort)*param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  if (iVar1 < param_3) {
    *param_1 = 0;
  }
  return;
}



void FUN_0048c380(undefined *param_1,ushort *param_2,int param_3)

{
  int iVar1;

  iVar1 = 0;
  if (0 < param_3) {
    do {
      if (*param_2 == 0) break;
      if (*param_2 < 0x100) {
        *param_1 = *(undefined *)param_2;
      }
      else {
        *param_1 = 0x3f;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  if (iVar1 < param_3) {
    *param_1 = 0;
  }
  return;
}



void FUN_0048c3d0(undefined4 *param_1)

{
  param_1[2] = &LAB_0048c570;
  param_1[1] = &LAB_0048c570;
  param_1[3] = &LAB_0048c570;
  param_1[4] = &LAB_0048c570;
  *param_1 = 0x447a0000;
  param_1[5] = 0;
  param_1[6] = &LAB_0048c4a0;
  param_1[7] = 0;
  param_1[8] = FUN_0048d7e0;
  param_1[9] = FUN_0048d9a0;
  param_1[10] = FUN_0048da80;
  param_1[0xb] = timeGetTime;
  param_1[0xc] = FUN_0048c5f0;
  param_1[0xd] = FUN_0048c610;
  param_1[0xe] = &LAB_0048c620;
  param_1[0xf] = &LAB_0048c660;
  param_1[0x10] = FUN_0048c640;
  param_1[0x11] = &LAB_0048c6a0;
  param_1[0x12] = FUN_0048c6b0;
  param_1[0x13] = FUN_0048c6c0;
  param_1[0x14] = &LAB_0048c6e0;
  param_1[0x15] = &LAB_0048c730;
  param_1[0x16] = &LAB_0048c680;
  param_1[0x17] = &LAB_0048c5a0;
  param_1[0x18] = &LAB_0048c5b0;
  param_1[0x19] = &LAB_0048c5c0;
  param_1[0x1a] = &LAB_0048c5e0;
  param_1[0x1b] = FUN_00423cb0;
  return;
}



DWORD timeGetTime(void)

{
  DWORD DVar1;

                    // WARNING: Could not recover jumptable at 0x0048c490. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = timeGetTime();
  return DVar1;
}



void FUN_0048c5f0(undefined4 param_1,undefined4 param_2)

{
  FUN_0049f1e0(param_1,param_2);
  return;
}



undefined4 FUN_0048c610(undefined4 param_1)

{
  FUN_0049f0f0(param_1);
  return 0;
}



void FUN_0048c640(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004a0160(param_2,1,param_3,param_1);
  return;
}



void FUN_0048c6b0(undefined4 param_1)

{
  FUN_0049fbd0(param_1);
  return;
}



void FUN_0048c6c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004a0950(param_1,param_2,param_3);
  return;
}



// Window_SetHWND
void FUN_0048c770(undefined4 param_1)

{
  DAT_0052ee70 = param_1;
  return;
}

// Window_GetHWND
undefined4 FUN_0048c780(void)

{
    // this would be type HWND
  return DAT_0052ee70;
}


// Window_SetHINSTANCE
void FUN_0048c790(undefined4 param_1)

{
  DAT_0052ee74 = param_1;
  return;
}


// Window_GetHINSTANCE
undefined4 FUN_0048c7a0(void)

{
    // type HINSTANCE
  return DAT_0052ee74;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/// Window_SetGUID
void FUN_0048c7b0(undefined4 *param_1)

{
  _DAT_0052ee60 = *param_1;
  _DAT_0052ee64 = param_1[1];
  _DAT_0052ee68 = param_1[2];
  _DAT_0052ee6c = param_1[3];
  return;
}


// Window_GetGUID
undefined * FUN_0048c7e0(void)

{
    // this would be a GUID
  return &DAT_0052ee60;
}



float10 FUN_0048c7f0(float param_1,int param_2)

{
  int local_c;
  float local_8;

  local_8 = param_1;
  for (local_c = 0; local_c < param_2 + -1; local_c = local_c + 1) {
    local_8 = local_8 * param_1;
  }
  return (float10)local_8;
}



float10 FUN_0048c830(float param_1)

{
  float10 fVar1;
  float local_c;

  if (0.0 <= param_1) {
    if (param_1 < 360.0) goto LAB_0048c8e1;
    fVar1 = (float10)FUN_0048c8f0(param_1 / 360.0);
    local_c = (float)((float10)param_1 - fVar1 * (float10)360.0);
  }
  else {
    param_1 = -param_1;
    if (360.0 <= param_1) {
      fVar1 = (float10)FUN_0048c8f0(param_1 / 360.0);
      local_c = (float)((float10)360.0 - ((float10)param_1 - fVar1 * (float10)360.0));
    }
    else {
      local_c = 360.0 - param_1;
    }
  }
  param_1 = local_c;
  if (local_c == 360.0) {
    local_c = 0.0;
    param_1 = local_c;
  }
LAB_0048c8e1:
  return (float10)param_1;
}



float10 FUN_0048c8f0(float param_1)

{
  return (float10)ROUND(param_1);
}



float10 __thiscall FUN_0048c910(undefined4 param_1_00,undefined4 param_1)

{
  float10 fVar1;
  float fVar2;

  fVar1 = (float10)FUN_0048c830(param_1,param_1_00);
  fVar2 = (float)fVar1;
  if ((float10)180.0 < fVar1) {
    fVar2 = -(360.0 - fVar2);
  }
  return (float10)fVar2;
}



void FUN_0048c950(undefined4 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_1c;
  float local_8;

  fVar5 = (float10)FUN_0048c830(param_1);
  fVar1 = (float)fVar5;
  if ((float10)90.0 <= fVar5) {
    if (180.0 <= fVar1) {
      if (270.0 <= fVar1) {
        local_1c = 3;
      }
      else {
        local_1c = 2;
      }
    }
    else {
      local_1c = 1;
    }
  }
  else {
    local_1c = 0;
  }
  fVar1 = fVar1 * 45.51111;
  fVar5 = (float10)FUN_0048c8f0(fVar1);
  fVar2 = (float)((float10)fVar1 - fVar5);
  iVar3 = FUN_0048cd30(fVar1);
  iVar4 = iVar3 + 1;
  switch(local_1c) {
  case 0:
    if (iVar4 < 0x1000) {
      local_8 = *(float *)(&DAT_004c98e8 + iVar4 * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0xfff)) * 4);
    }
    *param_2 = (local_8 - *(float *)(&DAT_004c98e8 + iVar3 * 4)) * fVar2 +
               *(float *)(&DAT_004c98e8 + iVar3 * 4);
    if (iVar4 < 0x1000) {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - iVar4) * 4);
    }
    else {
      local_8 = -*(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar4 * 4 + 0xc);
    }
    *param_3 = (local_8 - *(float *)(&DAT_004c98e8 + (0xfff - iVar3) * 4)) * fVar2 +
               *(float *)(&DAT_004c98e8 + (0xfff - iVar3) * 4);
    break;
  case 1:
    if (iVar4 < 0x2000) {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0xfff)) * 4);
    }
    else {
      local_8 = -*(float *)(&DAT_004c18e8 + iVar4 * 4);
    }
    *param_2 = (local_8 - *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x1000)) * 4)) * fVar2 +
               *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x1000)) * 4);
    if (iVar4 < 0x2000) {
      local_8 = *(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar4 * 4 + 0xc);
    }
    else {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x1fff)) * 4);
    }
    local_8 = -local_8;
    *param_3 = (local_8 - -*(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar3 * 4 + 0xc))
               * fVar2 + -*(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar3 * 4 + 0xc);
    break;
  case 2:
    if (iVar4 < 0x3000) {
      local_8 = *(float *)(&DAT_004c18e8 + iVar4 * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x2fff)) * 4);
    }
    local_8 = -local_8;
    *param_2 = (local_8 - -*(float *)(&DAT_004c18e8 + iVar3 * 4)) * fVar2 +
               -*(float *)(&DAT_004c18e8 + iVar3 * 4);
    if (iVar4 < 0x3000) {
      local_8 = -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x1fff)) * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004bd8e8 + iVar4 * 4);
    }
    *param_3 = (local_8 - -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x2000)) * 4)) * fVar2 +
               -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x2000)) * 4);
    break;
  case 3:
    if (iVar4 < 0x4000) {
      local_8 = -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x2fff)) * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004b98e8 + iVar4 * 4);
    }
    *param_2 = (local_8 - -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x3000)) * 4)) * fVar2 +
               -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x3000)) * 4);
    if (iVar4 < 0x4000) {
      local_8 = *(float *)(&DAT_004bd8e8 + iVar4 * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x3fff)) * 4);
    }
    *param_3 = (local_8 - *(float *)(&DAT_004bd8e8 + iVar3 * 4)) * fVar2 +
               *(float *)(&DAT_004bd8e8 + iVar3 * 4);
  }
  return;
}



int FUN_0048cd30(float param_1)

{
  return (int)ROUND(ROUND(param_1));
}



float10 FUN_0048cd50(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_1c;
  float local_10;
  float local_8;

  fVar5 = (float10)FUN_0048c830(param_1);
  fVar1 = (float)fVar5;
  if ((float10)90.0 <= fVar5) {
    if (180.0 <= fVar1) {
      if (270.0 <= fVar1) {
        local_1c = 3;
      }
      else {
        local_1c = 2;
      }
    }
    else {
      local_1c = 1;
    }
  }
  else {
    local_1c = 0;
  }
  fVar2 = (fVar1 / 360.0) * 16384.0;
  fVar5 = (float10)FUN_0048c8f0(fVar2);
  fVar1 = (float)((float10)fVar2 - fVar5);
  iVar3 = FUN_0048cd30(fVar2);
  iVar4 = iVar3 + 1;
  switch(local_1c) {
  case 0:
    if (iVar4 < 0x1000) {
      local_8 = *(float *)(&DAT_004cd8e8 + iVar4 * 4);
    }
    else {
      local_8 = -*(float *)(&DAT_004cd8e8 + (0xfff - (iVar3 + -0xfff)) * 4);
    }
    local_10 = (local_8 - *(float *)(&DAT_004cd8e8 + iVar3 * 4)) * fVar1 +
               *(float *)(&DAT_004cd8e8 + iVar3 * 4);
    break;
  case 1:
    if (iVar4 < 0x2000) {
      local_8 = -*(float *)(&DAT_004cd8e8 + (0xfff - (iVar3 + -0xfff)) * 4);
    }
    else {
      local_8 = *(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar4 * 4 + 0xc);
    }
    local_10 = (local_8 - -*(float *)(&DAT_004cd8e8 + (0xfff - (iVar3 + -0x1000)) * 4)) * fVar1 +
               -*(float *)(&DAT_004cd8e8 + (0xfff - (iVar3 + -0x1000)) * 4);
    break;
  case 2:
    if (iVar4 < 0x3000) {
      local_8 = *(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar4 * 4 + 0xc);
    }
    else {
      local_8 = -*(float *)(&DAT_004cd8e8 + (0xfff - (iVar3 + -0x2fff)) * 4);
    }
    local_10 = (local_8 - *(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar3 * 4 + 0xc))
               * fVar1 + *(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar3 * 4 + 0xc);
    break;
  case 3:
    if (iVar4 < 0x4000) {
      local_8 = -*(float *)(&DAT_004cd8e8 + (0xfff - (iVar3 + -0x2fff)) * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004bd8e8 + iVar4 * 4);
    }
    local_10 = (local_8 - -*(float *)(&DAT_004cd8e8 + (0xfff - (iVar3 + -0x3000)) * 4)) * fVar1 +
               -*(float *)(&DAT_004cd8e8 + (0xfff - (iVar3 + -0x3000)) * 4);
  }
  return (float10)local_10;
}



float10 FUN_0048cff0(float param_1)

{
  return (float10)SQRT(param_1);
}



float10 FUN_0048d010(float param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_18;
  float local_8;

  if (0.0 <= param_1) {
    local_18 = param_1;
  }
  else {
    local_18 = -param_1;
  }
  if (local_18 <= 0.7071068) {
    fVar2 = (float10)FUN_0048c7f0(local_18,3);
    fVar3 = (float10)FUN_0048c7f0(local_18,5);
    fVar4 = (float10)FUN_0048c7f0(local_18,7);
    fVar2 = (fVar4 * (float10)0.066797 +
            (float10)(float)(fVar3 * (float10)0.075 +
                            (float10)(float)(fVar2 / (float10)6.0 + (float10)local_18))) *
            (float10)57.29578;
  }
  else {
    fVar2 = (float10)FUN_0048cff0(1.0 - local_18 * local_18);
    fVar1 = (float)fVar2;
    fVar2 = (float10)FUN_0048c7f0(fVar1,3);
    fVar3 = (float10)FUN_0048c7f0(fVar1,5);
    fVar4 = (float10)FUN_0048c7f0(fVar1,7);
    fVar2 = (float10)90.0 -
            (fVar4 * (float10)0.066797 +
            (float10)(float)(fVar3 * (float10)0.075 +
                            (float10)(float)(fVar2 / (float10)6.0 + (float10)fVar1))) *
            (float10)57.29578;
  }
  local_8 = (float)fVar2;
  if (0.0 <= param_1) {
    fVar2 = (float10)local_8;
  }
  else {
    fVar2 = -(float10)local_8;
  }
  return fVar2;
}



void FUN_0048d160(WORD param_1)

{
  DAT_0052ee7c = param_1;
  SetConsoleTextAttribute(DAT_0052ee78,param_1);
  return;
}



void FUN_0048d180(char *param_1,DWORD param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;

  if (DAT_0052ee7c != (short)param_2) {
    FUN_0048d160(param_2);
  }
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  WriteConsoleA(DAT_0052ee78,param_1,~uVar2 - 1,&param_2,(LPVOID)0x0);
  return;
}



void FUN_0048d1c0(byte **param_1,int param_2,byte **param_3,uint param_4,int param_5,int param_6,
                 byte **param_7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte **ppbVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint local_20;
  uint local_10;
  int local_4;

  iVar4 = param_4;
  iVar1 = *(int *)(param_4 + 8);
  iVar2 = *(int *)(param_4 + 0xc);
  cVar3 = (char)*(undefined4 *)(param_4 + 0x10);
  uVar6 = *(uint *)(param_4 + 0x2c);
  if (uVar6 != 0) {
    local_10 = 0xffffffff >> (0x20U - (char)uVar6 & 0x1f);
    uVar11 = 0xff >> ((byte)*(undefined4 *)(param_4 + 0x34) & 0x1f);
    if ((int)(uVar11 & 0xfffffffe) < 3) {
      local_20 = 1;
    }
    else {
      local_20 = (int)uVar11 >> 1;
    }
  }
  iVar5 = iVar1 - *(int *)(param_2 + 8);
  iVar10 = iVar2 - *(int *)(param_2 + 0xc);
  bVar8 = cVar3 - (char)*(undefined4 *)(param_2 + 0x10);
  if (uVar6 != 0) {
    local_4 = uVar6 - *(int *)(param_2 + 0x2c);
  }
  ppbVar7 = param_3;
  param_4 = uVar6;
  if (0 < param_5) {
    do {
      switch(*(undefined4 *)(iVar4 + 4)) {
      case 8:
        ppbVar7 = (byte **)(uint)*(byte *)param_3;
        break;
      default:
        (**(code **)(DAT_00ecc420 + 0x18))
                  (s__EUnsupported_pixel_depth__Only_8_004d18e6 + 2,
                   s_D__devel_QA5_pc_gnome_SpecPlat_r_004d1940,0x108);
        break;
      case 0x10:
        ppbVar7 = (byte **)(uint)*(ushort *)param_3;
        break;
      case 0x18:
        ppbVar7 = (byte **)(uint)CONCAT21(CONCAT11(*(byte *)param_3,*(byte *)((int)param_3 + 1)),
                                          *(byte *)((int)param_3 + 2));
        break;
      case 0x20:
        ppbVar7 = (byte **)*param_3;
      }
      uVar12 = (uint)ppbVar7 >> ((byte)*(undefined4 *)(iVar4 + 0x14) & 0x1f) &
               0xffffffffU >> (0x20U - (char)iVar1 & 0x1f);
      uVar6 = (uint)ppbVar7 >> ((byte)*(undefined4 *)(iVar4 + 0x18) & 0x1f) &
              0xffffffffU >> (0x20U - (char)iVar2 & 0x1f);
      uVar11 = (uint)ppbVar7 >> ((byte)*(undefined4 *)(iVar4 + 0x1c) & 0x1f) &
               0xffffffffU >> (0x20U - cVar3 & 0x1f);
      if (*(int *)(iVar4 + 0x2c) != 0) {
        param_4 = (uint)ppbVar7 >> ((byte)*(undefined4 *)(iVar4 + 0x30) & 0x1f) & local_10;
      }
      if (iVar5 < 1) {
        uVar12 = uVar12 << (-(byte)iVar5 & 0x1f);
      }
      else {
        uVar12 = uVar12 >> ((byte)iVar5 & 0x1f);
      }
      bVar9 = (byte)iVar10;
      if (iVar10 < 1) {
        uVar6 = uVar6 << (-bVar9 & 0x1f);
      }
      else {
        uVar6 = uVar6 >> (bVar9 & 0x1f);
      }
      if (iVar5 < 1) {
        uVar11 = uVar11 << (-bVar8 & 0x1f);
      }
      else {
        uVar11 = uVar11 >> (bVar8 & 0x1f);
      }
      ppbVar7 = (byte **)(uVar6 << ((byte)*(undefined4 *)(param_2 + 0x18) & 0x1f) |
                          uVar11 << ((byte)*(undefined4 *)(param_2 + 0x1c) & 0x1f) |
                         uVar12 << ((byte)*(undefined4 *)(param_2 + 0x14) & 0x1f));
      if (*(int *)(iVar4 + 0x2c) != 0) {
        if (param_6 == 0) {
          if (local_4 < 1) {
            param_4 = param_4 << (-(byte)local_4 & 0x1f);
          }
          else {
            param_4 = param_4 >> ((byte)local_4 & 0x1f);
          }
          ppbVar7 = (byte **)((uint)ppbVar7 |
                             param_4 << ((byte)*(undefined4 *)(param_2 + 0x30) & 0x1f));
        }
        else if (param_4 < local_20) {
          ppbVar7 = param_7;
        }
      }
      switch(*(undefined4 *)(param_2 + 4)) {
      case 8:
        *(char *)param_1 = (char)ppbVar7;
        break;
      case 0x10:
        *(short *)param_1 = (short)ppbVar7;
        break;
      case 0x18:
        *(char *)param_1 = (char)((uint)ppbVar7 >> 0x10);
        *(char *)((int)param_1 + 1) = (char)((uint)ppbVar7 >> 8);
        *(char *)((int)param_1 + 2) = (char)ppbVar7;
        break;
      case 0x20:
        *param_1 = (byte *)ppbVar7;
      }
      param_3 = (byte **)((int)param_3 + (*(uint *)(iVar4 + 4) >> 3));
      param_1 = (byte **)((int)param_1 + (*(uint *)(param_2 + 4) >> 3));
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



undefined4 FUN_0048d4a0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined2 local_70;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined2 local_64;
  int local_60 [3];
  undefined2 local_54;
  undefined2 local_52;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;

  if (*(int *)(param_2 + 0x20) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0xc);
  uVar7 = (uint)(*(int *)(param_2 + 0x24) * iVar1 * iVar2) >> 3;
  uStack_6e = uVar7 + 0x36;
  uStack_6a = 0;
  local_68 = 0;
  piVar8 = local_60;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_50 = 0;
  local_70 = 0x4d42;
  uStack_66 = 0x36;
  local_64 = 0;
  local_60[0] = 0x28;
  local_54 = 1;
  local_52 = 0x18;
  local_48 = 0xb12;
  local_44 = 0xb12;
  local_60[1] = iVar2;
  local_60[2] = iVar1;
  local_4c = uVar7;
  iVar1 = (**(code **)(DAT_00ecc420 + 0x30))(param_1,&DAT_004b6cfc);
  if (iVar1 == 0) {
    FUN_00484780(*(undefined4 *)(DAT_00ecc420 + 0x10),s_D__devel_QA5_pc_gnome_SpecPlat_r_004d19c4,
                 0x1fa,s_Unable_to_open_file___s__for_wri_004d1a14,param_1,0,0,0);
    return 1;
  }
  iVar2 = (**(code **)(DAT_00ecc420 + 0x40))(iVar1,&local_70,0xe);
  if (iVar2 != 0xe) {
    FUN_00484780(*(undefined4 *)(DAT_00ecc420 + 0x10),s_D__devel_QA5_pc_gnome_SpecPlat_r_004d19c4,
                 0x203,s_Error_attempting_to_write__d_byt_004d1990,0xe,param_1,0,0);
    (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
    return 1;
  }
  iVar2 = (**(code **)(DAT_00ecc420 + 0x40))(iVar1,local_60,0x28);
  if (iVar2 != 0x28) {
    FUN_00484780(*(undefined4 *)(DAT_00ecc420 + 0x10),s_D__devel_QA5_pc_gnome_SpecPlat_r_004d19c4,
                 0x20d,s_Error_attempting_to_write__d_byt_004d1990,0x28,param_1,0,0);
LAB_0048d770:
    (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
    return 1;
  }
  uVar7 = *(int *)(param_2 + 0xc) * 3;
  puVar3 = (undefined4 *)(**(code **)(DAT_00ecc420 + 0x20))(uVar7);
  if (puVar3 == (undefined4 *)0x0) {
    (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
    return 1;
  }
  puVar9 = puVar3;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  uStack_38 = 1;
  uStack_34 = 0x18;
  uStack_30 = 8;
  uStack_2c = 8;
  uStack_28 = 8;
  uStack_24 = 0;
  uStack_20 = 8;
  uStack_1c = 0x10;
  FUN_00488370(param_2);
  iVar2 = *(int *)(param_2 + 0x10) + -1;
  if (-1 < iVar2) {
    iVar5 = *(int *)(param_2 + 0xc);
    do {
      FUN_0048d1c0(puVar3,&uStack_38,iVar2 * *(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x58),
                   param_2 + 0x20,iVar5,0,0);
      iVar4 = (**(code **)(DAT_00ecc420 + 0x40))(iVar1,puVar3,uVar7);
      iVar5 = *(int *)(param_2 + 0xc);
      if (iVar4 != iVar5 * 3) {
        FUN_00484780(*(undefined4 *)(DAT_00ecc420 + 0x10),
                     s_D__devel_QA5_pc_gnome_SpecPlat_r_004d19c4,0x230,
                     s_Error_attempting_to_write__d_byt_004d1990,uVar7,param_1,0,0);
        (**(code **)(DAT_00ecc420 + 0x24))(puVar3);
        goto LAB_0048d770;
      }
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  (**(code **)(DAT_00ecc420 + 0x24))(puVar3);
  FUN_004883c0(param_2);
  (**(code **)(DAT_00ecc420 + 0x34))(iVar1);
  return 0;
}



void FUN_0048d790(int param_1,int *param_2)

{
  int **ppiVar1;

  ppiVar1 = *(int ***)(param_1 + 4);
  *param_2 = param_1;
  param_2[1] = (int)ppiVar1;
  *(int **)(param_1 + 4) = param_2;
  if (ppiVar1 != (int **)0x0) {
    *ppiVar1 = param_2;
  }
  return;
}



void FUN_0048d7b0(int *param_1)

{
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



ushort * FUN_0048d7e0(uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort **ppuVar9;

  if (0x1000 < param_1) {
    puVar3 = (ushort *)FUN_0048db10(param_1);
    return puVar3;
  }
  ppuVar9 = (ushort **)&DAT_0052ee98;
  puVar3 = (ushort *)(param_1 + 3 & 0xfffffffc);
  iVar4 = 0;
  do {
    if ((ppuVar9[3] == (ushort *)0x0) || (puVar3 <= ppuVar9[2])) break;
    iVar4 = iVar4 + 1;
    ppuVar9 = ppuVar9 + 4;
  } while (iVar4 < 0x421);
  if ((iVar4 == 0x421) || (ppuVar9[3] == (ushort *)0x0)) {
    iVar4 = 0;
    ppuVar9 = (ushort **)&DAT_0052ee98;
    do {
      if ((ppuVar9[3] == (ushort *)0x0) || (*ppuVar9 == (ushort *)0x0)) break;
      iVar4 = iVar4 + 1;
      ppuVar9 = ppuVar9 + 4;
    } while (iVar4 < 0x421);
    if (iVar4 == 0x421) {
      puVar3 = (ushort *)FUN_0048db10(puVar3);
      return puVar3;
    }
    puVar5 = (ushort *)FUN_0049f270(0x7c00);
    if (puVar5 == (ushort *)0x0) {
      puVar3 = (ushort *)FUN_0048db10(puVar3);
      return puVar3;
    }
    ppuVar9[1] = puVar5;
    *ppuVar9 = puVar5;
    ppuVar9[2] = (ushort *)0x7bf0;
    ppuVar9[3] = (ushort *)0x1;
    *puVar5 = 0x7bf8;
    puVar5[1] = 0;
    *(ushort ***)(puVar5 + 2) = ppuVar9;
    puVar5[0x3dfc] = 0;
    puVar5[0x3dfd] = 0x7bf8;
    *(ushort ***)(puVar5 + 0x3dfe) = ppuVar9;
  }
  puVar5 = *ppuVar9;
  puVar8 = (ushort *)0x0;
  puVar3 = puVar3 + 4;
  iVar4 = 0x7c00;
  uVar1 = *puVar5;
  while (uVar1 != 0) {
    uVar7 = (uint)uVar1;
    if ((uVar1 & 0x8000) == 0) {
      if ((ushort)(uVar7 - (int)puVar3) < (ushort)iVar4) {
        puVar8 = puVar5;
        iVar4 = uVar7 - (int)puVar3;
      }
    }
    else {
      uVar7 = uVar7 & 0x7fff;
    }
    puVar5 = (ushort *)((int)puVar5 + uVar7);
    uVar1 = *puVar5;
  }
  uVar1 = *puVar8;
  uVar2 = (ushort)puVar3;
  *puVar8 = uVar2 | 0x8000;
  if ((ushort *)(uint)uVar1 != puVar3) {
    *(ushort *)((int)(puVar8 + 1) + (int)puVar3) = uVar2;
    *(ushort *)((int)puVar8 + (int)puVar3) = uVar1 - uVar2;
    *(ushort *)((int)(puVar8 + 1) + (int)(ushort *)(uint)uVar1) = uVar1 - uVar2;
  }
  *(ushort ***)(puVar8 + 2) = ppuVar9;
  if (puVar8 == ppuVar9[1]) {
    puVar3 = *ppuVar9;
    puVar5 = (ushort *)0x0;
    uVar7 = 8;
    uVar1 = *puVar3;
    while (uVar1 != 0) {
      uVar6 = (uint)uVar1;
      if ((uVar1 & 0x8000) == 0) {
        if ((ushort)uVar7 < uVar1) {
          uVar7 = uVar6;
          puVar5 = puVar3;
        }
      }
      else {
        uVar6 = uVar6 & 0x7fff;
      }
      puVar3 = (ushort *)((int)puVar3 + uVar6);
      uVar1 = *puVar3;
    }
    if (8 < (ushort)uVar7) {
      ppuVar9[1] = puVar5;
      ppuVar9[2] = (ushort *)(uVar7 + 0xfff8 & 0xffff);
      return puVar8 + 4;
    }
    ppuVar9[1] = puVar5;
    ppuVar9[2] = (ushort *)0x0;
  }
  return puVar8 + 4;
}



void FUN_0048d9a0(int param_1)

{
  undefined4 *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;

  puVar2 = (ushort *)(param_1 + -8);
  puVar1 = *(undefined4 **)(param_1 + -4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0049f200(puVar2);
    return;
  }
  if (((*puVar2 & 0x8000) == 0) || (0x420 < (ushort)((int)(puVar1 + -0x14bba6) >> 4))) {
    (**(code **)(DAT_00ecc420 + 0xc))(s_Attempting_to_dispose_a_bogus_or_004d1a3c);
  }
  else {
    uVar4 = *puVar2 & 0x7fff;
    if ((*(ushort *)((int)puVar2 + uVar4) & 0x8000) == 0) {
      uVar4 = uVar4 + *(ushort *)((int)puVar2 + uVar4);
    }
    puVar5 = (ushort *)((int)puVar2 - (uint)*(ushort *)(param_1 + -6));
    uVar3 = *puVar5;
    if ((uVar3 & 0x8000) == 0) {
      uVar4 = uVar4 + uVar3;
      puVar2 = puVar5;
    }
    uVar3 = (ushort)uVar4;
    *puVar2 = uVar3;
    *(ushort *)((int)puVar2 + (uVar4 & 0xffff) + 2) = uVar3;
    uVar4 = (uVar4 & 0xffff) - 8;
    if ((uint)puVar1[2] < uVar4) {
      if (uVar3 == 0x7bf8) {
        FUN_0049f200(*puVar1);
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1[1] = 0;
        return;
      }
      puVar1[2] = uVar4;
      puVar1[1] = puVar2;
      return;
    }
  }
  return;
}



undefined4 * FUN_0048da80(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_0048d7e0(param_2);
    return puVar1;
  }
  if (param_2 == 0) {
    FUN_0048d9a0(param_1);
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_0048d7e0(param_2);
  if (param_1[-1] == 0) {
    uVar2 = param_1[-2];
  }
  else {
    uVar2 = *(ushort *)(param_1 + -2) & 0xffff7fff;
  }
  if (puVar1 != (undefined4 *)0x0) {
    if (uVar2 - 8 <= param_2) {
      param_2 = uVar2 - 8;
    }
    puVar3 = param_1;
    puVar4 = puVar1;
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined *)puVar4 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_0048d9a0(param_1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}



int * FUN_0048db10(int param_1)

{
  int *piVar1;

  piVar1 = (int *)FUN_0049f270(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = param_1 + 8;
  piVar1[1] = 0;
  return piVar1 + 2;
}



void FUN_0048db40(void)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = &DAT_00b6b0e8;
  for (iVar1 = 0x5000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00deb0ec = 0;
  return;
}



void FUN_0048db60(void)

{
  DAT_00deb0e8 = 0;
  DAT_00deb0ec = DAT_00deb0ec + 1;
  return;
}



undefined4 FUN_0048db80(void)

{
  return DAT_00deb0ec;
}



undefined4 FUN_0048db90(void)

{
  return DAT_00deb0e8;
}



undefined * FUN_0048dba0(void)

{
  int iVar1;

  if (0x3ff < DAT_006930c8) {
    FUN_0048dce0();
  }
  if (0x14000U - DAT_00deb0f0 < 0x50) {
    return (undefined *)0x0;
  }
  if (0x14000U - DAT_00deb0f4 < 0x50) {
    return (undefined *)0x0;
  }
  if (0x14000U - DAT_00deb0f8 < 0x50) {
    return (undefined *)0x0;
  }
  iVar1 = DAT_006930c8 * 0x40;
  *(undefined **)(&DAT_005330d0 + iVar1) = &DAT_009630d0 + DAT_00deb0f0 * 0xc;
  *(undefined **)(&DAT_005330d4 + iVar1) = &DAT_00a530d8 + DAT_00deb0f4 * 8;
  *(undefined **)(&DAT_005330d8 + iVar1) = &DAT_005430c8 + DAT_00deb0f8 * 0x10;
  return &DAT_005330c0 + iVar1;
}



undefined * FUN_0048dc40(void)

{
  int iVar1;
  int iVar2;

  if (0x3ff < DAT_00af30d8) {
    FUN_0048dce0();
    FUN_0048dd80();
  }
  if (0x14000U - DAT_00deb0fc < 0x50) {
    return (undefined *)0x0;
  }
  if (0x14000U - DAT_00deb100 < 0x50) {
    return (undefined *)0x0;
  }
  if (0x14000U - DAT_00deb104 < 0x50) {
    return (undefined *)0x0;
  }
  iVar1 = DAT_00af30d8 * 0x40;
  *(undefined **)(&DAT_006830d8 + iVar1) = &DAT_008730d0 + DAT_00deb0fc * 0xc;
  *(undefined **)(&DAT_006830dc + iVar1) = &DAT_007d30d0 + DAT_00deb100 * 8;
  iVar2 = DAT_00deb104 * 0x10;
  *(undefined4 *)(&DAT_006830d4 + iVar1) = 0;
  *(undefined **)(&DAT_006830e0 + iVar1) = &DAT_006930d0 + iVar2;
  return &DAT_006830c8 + iVar1;
}



void FUN_0048dce0(void)

{
  if (DAT_006930c8 != 0) {
    FUN_0048a300();
    switch(DAT_00ecc430) {
    case 0:
      break;
    case 1:
    case 2:
      FUN_0048e4c0(DAT_006930c8,&DAT_005330c0);
      break;
    default:
      FUN_0048df30(DAT_006930c8,&DAT_005330c0,&LAB_0048e640);
    }
    DAT_00deb0e8 = DAT_00deb0e8 + DAT_006930c8;
    DAT_006930c8 = 0;
    DAT_00deb0f0 = 0;
    DAT_00deb0f4 = 0;
    DAT_00deb0f8 = 0;
    FUN_0048a330();
  }
  return;
}



void FUN_0048dd80(void)

{
  int iVar1;

  if (DAT_00af30d8 != 0) {
    iVar1 = DAT_00af30d8;
    switch(DAT_00ecc430) {
    case 0:
      break;
    case 1:
    case 2:
      FUN_0048e4c0(DAT_00af30d8,&DAT_006830c8);
      iVar1 = DAT_00af30d8;
      break;
    default:
      FUN_0048df30(DAT_00af30d8,&DAT_006830c8,&LAB_0048e620);
      iVar1 = DAT_00af30d8;
    }
    DAT_00af30d8 = 0;
    DAT_00deb0e8 = DAT_00deb0e8 + iVar1;
    DAT_00deb0fc = 0;
    DAT_00deb100 = 0;
    DAT_00deb104 = 0;
  }
  return;
}



undefined4 FUN_0048de10(float param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;

  iVar1 = (int)param_1;
  if (DAT_006930c8 < 0x400) {
    iVar2 = DAT_006930c8 * 0x40;
    param_1 = 3.402823e+38;
    *(int *)(&DAT_005330c8 + iVar2) = iVar1;
    if (iVar1 != 0) {
      pfVar3 = (float *)(*(int *)(&DAT_005330d0 + iVar2) + 8);
      iVar4 = iVar1;
      do {
        if (*pfVar3 < param_1) {
          param_1 = *pfVar3;
        }
        pfVar3 = pfVar3 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(float *)(&DAT_005330f4 + iVar2) = param_1;
    if ((param_2 & 1) != 0) {
      DAT_00deb0f0 = DAT_00deb0f0 + iVar1;
    }
    if ((param_2 & 2) != 0) {
      DAT_00deb0f4 = DAT_00deb0f4 + iVar1;
    }
    if ((param_2 & 4) != 0) {
      DAT_00deb0f8 = DAT_00deb0f8 + iVar1;
    }
    DAT_006930c8 = DAT_006930c8 + 1;
    return 1;
  }
  return 0;
}



undefined4 FUN_0048dea0(float param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;

  iVar1 = (int)param_1;
  if (DAT_00af30d8 < 0x400) {
    iVar2 = DAT_00af30d8 * 0x40;
    param_1 = 3.402823e+38;
    *(int *)(&DAT_006830d0 + iVar2) = iVar1;
    if (iVar1 != 0) {
      pfVar3 = (float *)(*(int *)(&DAT_006830d8 + iVar2) + 8);
      iVar4 = iVar1;
      do {
        if (*pfVar3 < param_1) {
          param_1 = *pfVar3;
        }
        pfVar3 = pfVar3 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(float *)(&DAT_006830fc + iVar2) = param_1;
    if ((param_2 & 1) != 0) {
      DAT_00deb0fc = DAT_00deb0fc + iVar1;
    }
    if ((param_2 & 2) != 0) {
      DAT_00deb100 = DAT_00deb100 + iVar1;
    }
    if ((param_2 & 4) != 0) {
      DAT_00deb104 = DAT_00deb104 + iVar1;
    }
    DAT_00af30d8 = DAT_00af30d8 + 1;
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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
            if ((float)puVar9[2] == 0.0) {
              fVar1 = 0.0;
            }
            else {
              fVar1 = (2.0 - (float)puVar9[2] * (float)(0x7f000000 - puVar9[2])) *
                      (float)(0x7f000000 - puVar9[2]);
            }
            if ((float)puVar9[2] == _DAT_005430c0) {
              (&DAT_00b6b0f0)[iVar8 * 8] = 0;
            }
            else {
              (&DAT_00b6b0f0)[iVar8 * 8] = 1.0 - fVar1 * _DAT_005430c0;
            }
            (&DAT_00b6b0f4)[iVar8 * 8] = fVar1;
            if ((uVar2 & 0x200) != 0) {
              if (DAT_00ec8578 < (float)puVar9[2]) {
                if ((float)puVar9[2] < DAT_00ec857c) {
                  (&DAT_00b6b0fc)[iVar8 * 8] =
                       (int)ROUND(ROUND((1.0 - ((float)puVar9[2] - DAT_00ec8578) * _DAT_00ec8574) *
                                        255.0)) << 0x18 | 0xffffff;
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
            if (1.0 < local_14) {
              local_14 = 1.0;
            }
            if (1.0 < local_18) {
              local_18 = 1.0;
            }
            if (1.0 < local_1c) {
              local_1c = 1.0;
            }
            if (1.0 < fVar1) {
              fVar1 = 1.0;
            }
            if ((uVar2 & 2) == 0) {
              (&DAT_00b6b0f8)[iVar8 * 8] =
                   (((int)ROUND(ROUND(local_14 * 255.0)) | 0xffffff00U) << 8 |
                   (int)ROUND(ROUND(local_18 * 255.0))) << 8 | (int)ROUND(ROUND(local_1c * 255.0));
            }
            else {
              (&DAT_00b6b0f8)[iVar8 * 8] =
                   (((int)ROUND(ROUND(fVar1 * 255.0)) << 8 | (int)ROUND(ROUND(local_14 * 255.0))) <<
                    8 | (int)ROUND(ROUND(local_18 * 255.0))) << 8 |
                   (int)ROUND(ROUND(local_1c * 255.0));
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



void FUN_0048e4c0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;

  puVar5 = &DAT_00b6b0e8;
  for (iVar2 = 0x5000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_0048a3c0();
  if (param_1 != 0) {
    puVar4 = (uint *)(param_2 + 8);
    do {
      uVar3 = 0;
      if (*puVar4 != 0) {
        iVar2 = 0;
        pfVar1 = (float *)&DAT_00b6b0ec;
        do {
          pfVar1[-1] = ROUND(*(float *)(puVar4[2] + iVar2));
          *pfVar1 = ROUND(*(float *)(puVar4[2] + 4 + iVar2));
          pfVar1[3] = -NAN;
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 0xc;
          pfVar1 = pfVar1 + 8;
        } while (uVar3 < *puVar4);
      }
      if (DAT_00ecc430 == 1) {
        FUN_0048a420(&DAT_00b6b0e8,*puVar4);
      }
      else if (DAT_00ecc430 == 2) {
        (&DAT_00b6b0e8)[uVar3 * 8] = ROUND(*(float *)puVar4[2]);
        (&DAT_00b6b0ec)[uVar3 * 8] = ROUND(*(float *)(puVar4[2] + 4));
        (&DAT_00b6b0f8)[uVar3 * 8] = 0xffffffff;
        FUN_0048a3f0(&DAT_00b6b0e8,*puVar4 + 1);
      }
      puVar4 = puVar4 + 0x10;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



void FUN_0048e5f0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x80) == 0) {
    FUN_0048aa80(param_1,param_2);
    return;
  }
  FUN_0048ace0(param_1);
  return;
}



int FUN_0048e680(undefined4 param_1)

{
  int iVar1;
  int iVar2;

  if (DAT_00deb108 != (code *)0x0) {
    iVar1 = (*DAT_00deb108)(param_1);
    return iVar1;
  }
  iVar1 = (**(code **)(DAT_00ecc428 + 0x20))(0x94);
  if (iVar1 != 0) {
    iVar2 = FUN_0048e6d0(param_1,iVar1);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  FUN_0048eac0(iVar1);
  return 0;
}



undefined4 FUN_0048e6d0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *_Source;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  size_t _Count;
  int *piStack_128;
  int iStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  uint uStack_110;
  int iStack_100;
  int iStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined4 auStack_e4 [14];
  char acStack_ac [4];
  int iStack_a8;
  byte bStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 auStack_98 [14];
  byte abStack_60 [24];
  undefined auStack_48 [16];
  undefined auStack_38 [56];

  puVar3 = param_2;
  for (iVar6 = 0x25; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar6 = (**(code **)(DAT_00ecc428 + 0x30))(param_1,&DAT_004b5c4c);
  if (iVar6 == 0) {
    return 1;
  }
  iVar1 = (**(code **)(DAT_00ecc428 + 0x38))(iVar6,acStack_ac,0x4c);
  if ((((iVar1 == 0x4c) && (iVar1 = _strncmp(acStack_ac,&DAT_004d1a78,4), iVar1 == 0)) &&
      (iStack_a8 == 0x32)) && (iStack_a0 == iStack_9c)) {
    param_2[0x22] = iStack_a0;
    puVar3 = auStack_98;
    puVar9 = param_2 + 0x11;
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar9 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
    }
    param_2[0x23] = 0;
    uVar2 = FUN_0048a2d0(param_2 + 0x11);
    param_2[0x1f] = uVar2;
    FUN_0048a230(uVar2,auStack_38,&uStack_11c,&uStack_118);
    uVar8 = 0;
    if (param_2[0x22] != 0) {
      do {
        iVar1 = (**(code **)(DAT_00ecc428 + 0x38))(iVar6,abStack_60,0x18);
        if ((iVar1 != 0x18) ||
           (((abStack_60[0] & 8) != 0 &&
            (iVar1 = (**(code **)(DAT_00ecc428 + 0x38))(iVar6,auStack_48,0x10), iVar1 != 0x10))))
        goto LAB_0048ea56;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)param_2[0x22]);
    }
    param_2[0x24] = 0;
    if (param_2[0x22] != 0) {
      puVar3 = (undefined4 *)(**(code **)(DAT_00ecc428 + 0x20))(param_2[0x22] * 0x94);
      param_2[0x24] = puVar3;
      if (puVar3 == (undefined4 *)0x0) goto LAB_0048ea56;
      for (uVar8 = param_2[0x22] * 0x25 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    uStack_120 = 0;
    if (param_2[0x22] != 0) {
      iStack_124 = 0;
      do {
        iVar1 = (**(code **)(DAT_00ecc428 + 0x38))(iVar6,&uStack_114,0x18);
        if (iVar1 != 0x18) goto LAB_0048ea56;
        param_2[0x21] = uStack_110;
        uStack_f4 = uStack_110;
        uStack_f8 = uStack_114;
        param_2[0x20] = uStack_114;
        puVar3 = param_2 + 0x11;
        puVar9 = auStack_e4;
        for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar9 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        }
        piStack_128 = (int *)0x0;
        if (iStack_100 != 0) {
          piStack_128 = (int *)(**(code **)(DAT_00ecc428 + 0x20))(iStack_100 * 4);
          iVar1 = iStack_100;
          piVar7 = piStack_128;
          if (piStack_128 == (int *)0x0) goto LAB_0048ea56;
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar7 = 0;
            piVar7 = piVar7 + 1;
          }
        }
        iVar1 = 0;
        piVar7 = piStack_128;
        if (0 < iStack_100) {
          do {
            iVar4 = FUN_004881c0(&uStack_f8,0,0);
            *piVar7 = iVar4;
            if (iVar4 == 0) goto LAB_0048ea56;
            FUN_00488370(iVar4);
            iVar4 = *piVar7;
            iStack_fc = iVar4;
            iVar5 = (**(code **)(DAT_00ecc428 + 0x38))
                              (iVar6,*(undefined4 *)(iVar4 + 0x58),*(undefined4 *)(iVar4 + 0x14));
            if (*(int *)(iVar4 + 0x14) != iVar5) goto LAB_0048ea56;
            FUN_004883c0(iVar4);
            if ((*(int *)(*piVar7 + 0x20) != 0) && (iVar4 = FUN_0048a2f0(), iVar4 != 0)) {
              iVar4 = FUN_00488670(auStack_38,*piVar7,uStack_11c,uStack_118);
              *piVar7 = iVar4;
            }
            uStack_f4 = uStack_f4 >> 1;
            uStack_f8 = uStack_f8 >> 1;
            iVar1 = iVar1 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar1 < iStack_100);
        }
        FUN_0048a5e0(iStack_124 + param_2[0x24],piStack_128,iStack_100,param_2[0x1f]);
        iVar1 = 0;
        piVar7 = piStack_128;
        if (0 < iStack_100) {
          do {
            FUN_00488310(*piVar7);
            iVar1 = iVar1 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar1 < iStack_100);
        }
        (**(code **)(DAT_00ecc428 + 0x24))(piStack_128);
        uStack_120 = uStack_120 + 1;
        iStack_124 = iStack_124 + 0x94;
      } while (uStack_120 < (uint)param_2[0x22]);
    }
    if ((bStack_a4 & 1) == 0) {
      _Count = 0x3f;
      _Source = (char *)FUN_00484860(param_1);
      _strncpy((char *)param_2,_Source,_Count);
      *(undefined *)((int)param_2 + 0x3f) = 0;
      (**(code **)(DAT_00ecc428 + 0x34))(iVar6);
      return 0;
    }
  }
LAB_0048ea56:
  if (iVar6 != 0) {
    (**(code **)(DAT_00ecc428 + 0x34))(iVar6);
  }
  return 1;
}



void FUN_0048eac0(undefined4 param_1)

{
  if (DAT_00deb10c != (code *)0x0) {
    (*DAT_00deb10c)(param_1);
    return;
  }
  FUN_0048eb00(param_1);
  (**(code **)(DAT_00ecc428 + 0x24))(param_1);
  return;
}



void FUN_0048eb00(int param_1)

{
  uint uVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 0x90);
  if ((iVar2 != 0) && (uVar1 = 0, *(int *)(param_1 + 0x88) != 0)) {
    do {
      FUN_0048aa40(iVar2);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x94;
    } while (uVar1 < *(uint *)(param_1 + 0x88));
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    (**(code **)(DAT_00ecc428 + 0x24))(*(int *)(param_1 + 0x90));
  }
  return;
}



void FUN_0048eb60(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  local_c = *param_3 - *param_2;
  local_18 = *param_4 - *param_2;
  local_8 = param_3[1] - param_2[1];
  local_4 = param_3[2] - param_2[2];
  local_14 = param_4[1] - param_2[1];
  local_10 = param_4[2] - param_2[2];
  FUN_00492440(&local_c);
  FUN_00492440(&local_18);
  *param_1 = local_10 * local_8 - local_14 * local_4;
  param_1[1] = local_18 * local_4 - local_10 * local_c;
  param_1[2] = local_14 * local_c - local_18 * local_8;
  FUN_00492440(param_1);
  FUN_0048ec90(param_1,0x358637bd);
  return;
}

#endif
