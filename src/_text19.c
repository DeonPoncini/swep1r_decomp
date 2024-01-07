#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_00467c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;

  iVar1 = FUN_00427670(0,0x10);
  if (iVar1 != 0) {
    iVar1 = FUN_00427670(0,0x20);
    if (iVar1 == 0) {
      FUN_00427590(2,0,param_1,param_2,param_3,param_4,param_5,0);
    }
  }
  return;
}



void FUN_00468570(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;

  if (*(int *)(param_1 + 8) == 6) {
    return;
  }
  if (((DAT_00e295a8 != 0) && (DAT_00e295a0 == 0.0)) && (*(int *)(param_1 + 0x14) == 0x1b)) {
    return;
  }
  iVar1 = **(int **)(param_1 + 0x30);
  if (iVar1 == 0) {
    return;
  }
  FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xb4);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 8) != 1) goto LAB_0046864b;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    fVar3 = (float)iVar2 + *(float *)(param_1 + 0x68);
    *(float *)(param_1 + 0x68) = fVar3;
    *(float *)(param_1 + 0x70) = fVar3;
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0xc);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if (((iVar2 != 7) && (iVar2 != 8)) &&
       ((iVar2 != 9 && (iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0x10), iVar2 != 0)))) {
      FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    }
  }
LAB_0046864b:
  FUN_00431a50(iVar1,2,3,0x10,2);
  return;
}



void FUN_004686b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  if (param_1 != 0) {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
    *(undefined4 *)(param_1 + 0x30) = param_2;
    *(undefined4 *)(param_1 + 0x34) = param_3;
    FUN_0042f7b0(param_1 + 0x44,0,0,0);
    FUN_0042f7b0(param_1 + 0x50,0,0,0);
    FUN_0042f7b0(param_1 + 0x5c,0,0,0);
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = param_4;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar1 = FUN_004816b0();
    *(float *)(param_1 + 0x1c) = (float)iVar1 * 4.656613e-10 * 5.0 - -3.0;
    FUN_0042f7b0(param_1 + 0x20,0,0,0);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_0042f7b0(param_1 + 0x38,0,0,0);
    *(undefined4 *)(param_1 + 0x68) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x6c) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x70) = 0x42b40000;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x84) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    iVar1 = FUN_004816b0();
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
    *(float *)(param_1 + 0xac) = ((float)iVar1 * 4.656613e-10 + (float)iVar1 * 4.656613e-10) - -3.0;
  }
  return;
}



void FUN_00468800(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [64];

  iVar2 = FUN_00450b30(0x456c6d6f,param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar1 = iVar2 + 0x44;
  FUN_0042f7d0(iVar1,param_3);
  FUN_0042f7d0(iVar2 + 0x50,param_4);
  FUN_0042f7d0(iVar2 + 0x5c,param_3);
  *(undefined4 *)(iVar2 + 0x68) = param_5;
  *(undefined4 *)(iVar2 + 0x6c) = param_6;
  iVar3 = **(int **)(iVar2 + 0x30);
  if (iVar3 != 0) {
    FUN_00431a50(iVar3,2,0xfffffffc,0x10,3);
    FUN_0042f7d0(local_58,iVar1);
    FUN_0042f7b0(local_4c,*(undefined4 *)(iVar2 + 0x68),0,0);
    FUN_00431060(local_40,local_58);
    FUN_00431640(iVar3,local_40);
  }
  switch(*(undefined4 *)(iVar2 + 8)) {
  case 1:
    if (param_1 < 0x37) {
      iVar3 = FUN_004816b0();
      *(undefined4 *)(iVar2 + 0x94) = 0x3e99999a;
      *(float *)(iVar2 + 0x78) = (float)iVar3 * 4.656613e-10 * 0.4 - -0.8;
      break;
    }
    goto LAB_00468939;
  case 2:
    if (param_2 == 0x1b) {
      *(undefined4 *)(iVar2 + 0x94) = 0x3dcccccd;
      break;
    }
    if (param_2 == 0x1c) {
      *(undefined4 *)(iVar2 + 0x94) = 0x3dcccccd;
      break;
    }
LAB_00468939:
    *(undefined4 *)(iVar2 + 0x94) = 0x3e99999a;
    break;
  case 3:
    *(undefined4 *)(iVar2 + 0x94) = 0x3e75c28f;
    break;
  case 4:
    *(undefined4 *)(iVar2 + 0x94) = 0x40200000;
    break;
  case 5:
    *(undefined4 *)(iVar2 + 0x94) = 0x3ecccccd;
    break;
  case 6:
    *(undefined4 *)(iVar2 + 0x94) = 0x3e4ccccd;
    break;
  case 7:
    *(undefined4 *)(iVar2 + 0x94) = 0x3e6b851f;
    break;
  case 8:
    *(undefined4 *)(iVar2 + 0x94) = 0x3fe66666;
    break;
  case 9:
  case 0xc:
    *(undefined4 *)(iVar2 + 0x94) = 0x3fd9999a;
    break;
  case 10:
    *(undefined4 *)(iVar2 + 0x94) = 0x3fc00000;
    break;
  case 0xb:
    *(undefined4 *)(iVar2 + 0x94) = 0x40000000;
  }
  FUN_0044b270(*(undefined4 *)(iVar2 + 0x30),iVar1);
  FUN_0044b180(*(undefined4 *)(iVar2 + 0x30),*(undefined4 *)(iVar2 + 0x94),
               *(undefined4 *)(iVar2 + 0x68));
  FUN_0044b330(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x78));
  FUN_00466ec0(iVar2,param_2);
  return;
}



void FUN_00468a30(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)(param_1 + 0x88);
  if ((iVar1 != -1) ||
     ((((iVar2 = *(int *)(param_1 + 8), iVar2 != 1 && (iVar2 != 2)) && (iVar2 != 6)) && (iVar2 != 3)
      ))) {
    switch(*(undefined4 *)(param_1 + 8)) {
    case 1:
      *param_2 = (float)(int)*(short *)(&DAT_004c25a8 + iVar1 * 4) * 0.0666;
      *param_3 = (float)(int)*(short *)(&PTR_DAT_004c25aa + *(int *)(param_1 + 0x88)) * 0.0666;
      return;
    case 2:
      *param_2 = (float)(int)*(short *)(&DAT_004c2620 + iVar1 * 4) * 0.0333;
      *param_3 = (float)(int)*(short *)(&DAT_004c2622 + *(int *)(param_1 + 0x88) * 4) * 0.0333;
      return;
    case 3:
      *param_2 = (float)(int)*(short *)(&DAT_004c2658 + iVar1 * 4) * 0.0333;
      *param_3 = (float)(int)*(short *)(&DAT_004c265a + *(int *)(param_1 + 0x88) * 4) * 0.0333;
      return;
    case 4:
      *param_2 = 0.03333;
      *param_3 = 14.3333;
      return;
    case 5:
      *param_2 = 0.03333;
      *param_3 = 4.2;
      return;
    default:
      *param_2 = 0.0;
      *param_3 = 0.0;
      break;
    case 7:
      *param_2 = 0.0666;
      *param_3 = 5.0616;
      return;
    case 8:
      *param_2 = (float)(int)*(short *)(&DAT_004c26d0 + iVar1 * 4) * 0.0333;
      *param_3 = (float)(int)*(short *)(&DAT_004c26d2 + *(int *)(param_1 + 0x88) * 4) * 0.0333;
      return;
    case 9:
      *param_2 = (float)(int)*(short *)(&DAT_004c26e8 + iVar1 * 4) * 0.0333;
      *param_3 = (float)(int)*(short *)(&DAT_004c26ea + *(int *)(param_1 + 0x88) * 4) * 0.0333;
      return;
    case 10:
      *param_2 = (float)(int)*(short *)(&DAT_004c2698 + iVar1 * 4) * 0.0333;
      *param_3 = (float)(int)*(short *)(&DAT_004c269a + *(int *)(param_1 + 0x88) * 4) * 0.0333;
      return;
    case 0xb:
      *param_2 = (float)(int)*(short *)(&DAT_004c26b8 + iVar1 * 4) * 0.0333;
      *param_3 = (float)(int)*(short *)(&DAT_004c26ba + *(int *)(param_1 + 0x88) * 4) * 0.0333;
      return;
    case 0xc:
      *param_2 = (float)(int)*(short *)(&DAT_004c26a8 + iVar1 * 4) * 0.0333;
      *param_3 = (float)(int)*(short *)(&DAT_004c26aa + *(int *)(param_1 + 0x88) * 4) * 0.0333;
      return;
    }
  }
  return;
}



void FUN_00468d00(int param_1)

{
  float10 fVar1;

  if (*(int *)(param_1 + 8) == 2) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x4c);
  }
  fVar1 = (float10)FUN_0042f950(param_1 + 0x50,param_1 + 0x44);
  if (fVar1 <= (float10)10.0) {
    *(undefined4 *)(param_1 + 0xa0) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00468d50(float param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;

  iVar5 = (int)param_1;
  if (0 < DAT_0050cad4) {
    DAT_0050cad4 = DAT_0050cad4 + -1;
    return;
  }
  pfVar1 = (float *)((int)param_1 + 0x50);
  FUN_0042f860(&local_c,pfVar1,(int)param_1 + 0x44);
  if (*(int *)((int)param_1 + 8) == 2) {
    local_4 = 0;
  }
  fVar6 = (float10)FUN_0042f8c0(&local_c);
  if ((fVar6 <= (float10)35.0) && (*(int *)((int)param_1 + 0x4c) == -0x3cef0000)) {
    *(undefined4 *)((int)param_1 + 0xa0) = 1;
  }
  if (*(int *)((int)param_1 + 0xa0) == 0) {
    fVar6 = (float10)FUN_0042f560(-local_c,local_8);
    FUN_00468d00(param_1);
    param_1 = (float)fVar6;
  }
  else {
    param_1 = *(float *)((int)param_1 + 0x6c);
  }
  fVar3 = param_1 - *(float *)(iVar5 + 0x68);
  if (fVar3 < -180.0) {
    fVar3 = fVar3 - -360.0;
  }
  if (180.0 < fVar3) {
    fVar3 = fVar3 - 360.0;
  }
  if (*(int *)(iVar5 + 0x4c) == -0x3d900000) {
    fVar4 = 2.0;
  }
  else {
    fVar4 = 1.0;
  }
  if ((5.0 < fVar3) || (fVar3 < -5.0)) {
    fVar4 = fVar4 * fVar3 * 0.01111111;
    *(float *)(iVar5 + 0x98) = fVar4;
    if (fVar4 < 0.0) {
      *(float *)(iVar5 + 0x98) = -fVar4;
    }
    *(undefined4 *)(iVar5 + 0x9c) = 0;
    *(float *)(iVar5 + 0x70) = *(float *)(iVar5 + 0x68);
    *(float *)(iVar5 + 0x74) = fVar3;
    fVar4 = _DAT_00e22a50;
    if (0.0 < *(float *)(iVar5 + 0x98)) {
      *(float *)(iVar5 + 0x9c) = _DAT_00e22a50;
      if (*(float *)(iVar5 + 0x98) < fVar4) {
        *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(iVar5 + 0x98);
      }
      fVar3 = (*(float *)(iVar5 + 0x9c) / *(float *)(iVar5 + 0x98)) * fVar3 +
              *(float *)(iVar5 + 0x68);
      *(float *)(iVar5 + 0x68) = fVar3;
      if (fVar3 < -180.0) {
        *(float *)(iVar5 + 0x68) = fVar3 - -360.0;
      }
      if (180.0 < *(float *)(iVar5 + 0x68)) {
        *(float *)(iVar5 + 0x68) = *(float *)(iVar5 + 0x68) - 360.0;
        return;
      }
    }
  }
  else {
    iVar2 = *(int *)(iVar5 + 8);
    *(float *)(iVar5 + 0x68) = param_1;
    if (iVar2 == 2) {
      if (*(int *)(iVar5 + 0xa0) == 0) {
        FUN_00466ec0(iVar5,0x13);
        return;
      }
      FUN_00466ec0(iVar5,0x11);
      return;
    }
    if (iVar2 == 3) {
      if (*(int *)(iVar5 + 0xa0) == 0) {
        FUN_00466ec0(iVar5,0x1e);
        return;
      }
      if (*pfVar1 != _DAT_004c4534) {
        FUN_00466ec0(iVar5,0x1d);
        return;
      }
      FUN_00466ec0(iVar5,0x1f);
      return;
    }
    if (iVar2 == 1) {
      FUN_00466ec0(iVar5,10);
      return;
    }
  }
  return;
}



void FUN_00468fe0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00450b30(0x456c6d6f,param_1);
  if (iVar1 != 0) {
    FUN_00466ec0(iVar1,param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00469010(void)

{
  float10 fVar1;

  DAT_0050cad8 = DAT_0050cad8 + _DAT_00e22a50;
  if (6.26666 < DAT_0050cad8) {
    DAT_0050cad8 = DAT_0050cad8 - 6.26666;
  }
  fVar1 = (float10)FUN_0045a420(DAT_0050cad8,0x4048887b);
  DAT_004c7074 = (float)(fVar1 * (float10)0.1595746 - (float10)-0.5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00469070(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];

  iVar1 = param_1 + 0x44;
  FUN_0042f860(local_c,param_1 + 0x50,iVar1);
  FUN_0042f860(local_18,&DAT_00e2af90,&DAT_00e298f0);
  FUN_0042f860(local_24,iVar1,&DAT_00e298f0);
  FUN_0042f9b0(local_c);
  FUN_0042f9b0(local_18);
  FUN_0042f9b0(local_24);
  iVar2 = 0;
  fVar3 = (float10)FUN_0042f890(local_18,local_24);
  if (fVar3 < (float10)0.5) {
    do {
      if (0x27 < iVar2) break;
      FUN_0042fa80(iVar1,iVar1,_DAT_00e22a50 * 130.0,local_c);
      FUN_0042f860(local_18,&DAT_00e2af90,&DAT_00e298f0);
      FUN_0042f860(local_24,iVar1,&DAT_00e298f0);
      FUN_0042f9b0(local_18);
      FUN_0042f9b0(local_24);
      iVar2 = iVar2 + 1;
      fVar3 = (float10)FUN_0042f890(local_18,local_24);
    } while (fVar3 < (float10)0.5);
  }
  if (0 < iVar2) {
    FUN_0044b270(*(undefined4 *)(param_1 + 0x30),iVar1);
  }
  return;
}



int FUN_004691c0(int param_1)

{
  float *pfVar1;
  int iVar2;

  iVar2 = 0;
  pfVar1 = (float *)&DAT_004c4514;
  do {
    if (*(float *)(param_1 + 0x50) == pfVar1[-1]) {
      if (*(float *)(param_1 + 0x54) == *pfVar1) {
        return iVar2;
      }
    }
    pfVar1 = pfVar1 + 3;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar1 < 0x4c45d4);
  return -1;
}



void FUN_00469200(int param_1,int param_2)

{
  FUN_0042f7d0(param_1 + 0x50,&DAT_004c4510 + param_2 * 3);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



undefined4 FUN_00469230(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_004691c0(param_1);
  if (iVar1 == -1) {
    return 0;
  }
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      FUN_00466ec0(param_1,0);
      *(undefined4 *)(param_1 + 0xb8) = 2;
      return 1;
    }
    uVar2 = 2;
  }
  FUN_00469200(param_1,uVar2);
  *(int *)(param_1 + 0xb8) = iVar1;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004692a0(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;

  FUN_0042f860(&local_c,param_1 + 0x50,param_1 + 0x44);
  local_4 = 0;
  FUN_0042f8c0(&local_c);
  fVar3 = (float10)FUN_0042f560(-local_c,local_8);
  fVar1 = (float)fVar3;
  fVar2 = fVar1 - *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0x6c) = fVar1;
  if (fVar2 < -180.0) {
    fVar2 = fVar2 - -360.0;
  }
  if (180.0 < fVar2) {
    fVar2 = fVar2 - 360.0;
  }
  if ((fVar2 <= 5.0) && (-5.0 <= fVar2)) {
    *(float *)(param_1 + 0x68) = fVar1;
    return;
  }
  if (fVar2 < 0.0) {
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - _DAT_00e22a50 * 90.0;
    return;
  }
  *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - _DAT_00e22a50 * -90.0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00469380(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float local_f4;
  float local_f0;
  undefined local_ec [48];
  undefined local_bc [8];
  float local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
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
  undefined local_70 [8];
  undefined4 local_68;
  undefined local_64 [12];
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [48];
  undefined local_10 [8];
  float local_8;

  local_f4 = DAT_00e295a0;
  local_f0 = 0.0;
  if (DAT_00e295a4 == 0) {
    local_f4 = 0.0;
  }
  local_94 = 0x42a00000;
  local_90 = 0x42960000;
  local_8c = 0x42480000;
  local_ac = 0x436b0000;
  local_a8 = 0x42c80000;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0xc2c80000;
  local_98 = 0x43c80000;
  local_7c = 0x41a00000;
  local_78 = 0x42820000;
  local_74 = 0x42200000;
  local_88 = 0x437f0000;
  local_84 = 0x437f0000;
  local_80 = 0x43480000;
  FUN_0042f860(local_70,&DAT_00e2af90,&DAT_00e298f0);
  fVar6 = 1.0 - local_f4;
  local_68 = 0x43c80000;
  FUN_0042fac0(local_4c,fVar6,&local_94,local_f4,&local_7c);
  FUN_0042fac0(local_58,fVar6,&local_ac,local_f4,&local_88);
  FUN_0042fac0(local_64,fVar6,&local_a0,local_f4,local_70);
  FUN_00483840(0xffffffff,local_4c,local_58,local_64);
  fVar6 = DAT_00e295a0;
  local_f4 = DAT_00e295a0;
  iVar1 = FUN_00450b30(0x456c6d6f,4);
  if (DAT_004c7078 == -1) {
    DAT_004c7078 = param_1;
    FUN_00469b50(&DAT_0050cab8,iVar1,2);
    FUN_00469b50(&DAT_0050ca98,iVar1,8);
    FUN_00469b50(&DAT_0050cac8,iVar1,4);
    FUN_00469b50(&DAT_0050caa8,iVar1,5);
  }
  DAT_0050cadc = DAT_0050cadc - _DAT_00e22a50 * -9.0;
  if (360.0 < DAT_0050cadc) {
    DAT_0050cadc = DAT_0050cadc - 360.0;
  }
  if (fVar6 == 0.0) {
    DAT_0050cadc = 0.0;
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 8);
  if (iVar4 != 0) {
    if (DAT_00e295a4 == 0) {
      local_f4 = 0.0;
    }
    FUN_00431020(local_ec,DAT_0050cadc,0,0);
    FUN_00431450(local_ec,0x3fc00000,0x3fc00000,0x3fc00000,local_ec);
    if (0.5 <= local_f4) {
      fVar6 = 1.0;
      fVar5 = (local_f4 - 0.5) + (local_f4 - 0.5);
    }
    else {
      fVar6 = local_f4 + local_f4;
      fVar5 = 0.1;
    }
    FUN_00431450(local_ec,fVar5,fVar5,fVar6,local_ec);
    FUN_0042f7d0(local_bc,&DAT_0050cab8);
    FUN_00431640(iVar4,local_ec);
    FUN_004816b0();
    uVar2 = __ftol();
    FUN_0042b640(iVar4,0,0,0,0xff,0,uVar2);
    iVar3 = FUN_0042b560(iVar4);
    if (iVar3 != 0) {
      FUN_0044fc00(iVar3,0x3de147ae,0x3de147ae);
    }
    if (local_f4 <= 0.0) {
      uVar7 = 3;
      uVar2 = 0xfffffffc;
    }
    else {
      uVar7 = 2;
      uVar2 = 3;
    }
    FUN_00431a50(iVar4,2,uVar2,0x10,uVar7);
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x20);
  if (iVar4 != 0) {
    if (DAT_00e295a8 == 0) {
      local_f4 = 0.0;
    }
    FUN_00431020(local_ec,DAT_0050cadc,0,0);
    FUN_00431450(local_ec,0x3fc00000,0x3fc00000,0x3fc00000,local_ec);
    if (0.5 <= local_f4) {
      fVar6 = 1.0;
      fVar5 = (local_f4 - 0.5) + (local_f4 - 0.5);
    }
    else {
      fVar6 = local_f4 + local_f4;
      fVar5 = 0.1;
    }
    FUN_00431450(local_ec,fVar5,fVar5,fVar6,local_ec);
    FUN_0042f7d0(local_bc,&DAT_0050ca98);
    FUN_00431640(iVar4,local_ec);
    FUN_004816b0();
    uVar2 = __ftol();
    FUN_0042b640(iVar4,0,0,0,0xff,0,uVar2);
    iVar3 = FUN_0042b560(iVar4);
    if (iVar3 != 0) {
      FUN_0044fc00(iVar3,0x3de147ae,0x3de147ae);
    }
    if (local_f4 <= 0.0) {
      uVar7 = 3;
      uVar2 = 0xfffffffc;
    }
    else {
      uVar7 = 2;
      uVar2 = 3;
    }
    FUN_00431a50(iVar4,2,uVar2,0x10,uVar7);
  }
  if (DAT_00e295a8 != 0) {
    local_f0 = DAT_00e295a0;
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x14);
  if (iVar4 != 0) {
    FUN_004313d0(local_ec);
    FUN_0042f7d0(local_bc,&DAT_0050caa8);
    local_b4 = local_b4 - (1.0 - local_f0) * 117.0;
    FUN_00431640(iVar4,local_ec);
    iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x18);
    if (iVar4 != 0) {
      if (local_f0 <= 0.0) {
        uVar7 = 3;
        uVar2 = 0xfffffffc;
      }
      else {
        FUN_004816b0();
        uVar2 = __ftol();
        FUN_0042b640(iVar4,0,0,0,0xff,0,uVar2);
        iVar3 = FUN_0042b560(iVar4);
        if (iVar3 != 0) {
          FUN_0044fc00(iVar3,0x3de147ae,0x3de147ae);
        }
        uVar7 = 2;
        uVar2 = 3;
      }
      FUN_00431a50(iVar4,2,uVar2,0x10,uVar7);
    }
    iVar4 = FUN_00450b30(0x456c6d6f,0x1c);
    FUN_004313d0(local_40);
    FUN_004816f0((*(undefined4 **)(iVar1 + 0x30))[5],local_40,**(undefined4 **)(iVar1 + 0x30),
                 local_40);
    local_8 = local_8 - -10.0;
    if (local_f0 == 1.0) {
      FUN_0042fac0(local_10,0x3f400000,&DAT_004c4490,0x3e800000,local_10);
      local_f0 = local_f0 * 0.25;
    }
    FUN_0044b270(*(undefined4 *)(iVar4 + 0x30),local_10);
    FUN_0044b180(*(undefined4 *)(iVar4 + 0x30),*(float *)(iVar4 + 0x94) * local_f0,
                 DAT_0050cadc * 4.0);
  }
  fVar6 = DAT_00e295ac;
  iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x10);
  if (iVar4 != 0) {
    FUN_004313d0(local_ec);
    FUN_0042f7d0(local_bc,&DAT_0050cac8);
    local_b4 = local_b4 - (1.0 - fVar6) * 117.0;
    FUN_00431640(iVar4,local_ec);
    iVar1 = *(int *)(*(int *)(iVar1 + 0x30) + 0x1c);
    if (iVar1 != 0) {
      if (0.0 < fVar6) {
        FUN_004816b0();
        uVar2 = __ftol();
        FUN_0042b640(iVar1,0,0,0,0xff,0,uVar2);
        iVar4 = FUN_0042b560(iVar1);
        if (iVar4 != 0) {
          FUN_0044fc00(iVar4,0x3de147ae,0x3de147ae);
        }
        FUN_00431a50(iVar1,2,3,0x10,2);
        return;
      }
      FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
    }
  }
  return;
}



void FUN_00469b50(undefined4 param_1,int param_2,int param_3)

{
  undefined local_40 [48];
  undefined local_10 [16];

  FUN_004316a0(*(undefined4 *)(*(int *)(param_2 + 0x30) + param_3 * 4),local_40);
  FUN_0042f7d0(param_1,local_10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_00469b90(float param_1)

{
  DAT_00e295a0 = param_1 * _DAT_00e22a50 + DAT_00e295a0;
  if (1.0 < DAT_00e295a0) {
    DAT_00e295a0 = 1.0;
  }
  if (DAT_00e295a0 < 0.0) {
    DAT_00e295a0 = 0.0;
  }
  return (float10)DAT_00e295a0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00469bf0(void)

{
  if ((0.0 < _DAT_00e295d8) && (_DAT_00e295d8 = _DAT_00e295d8 - _DAT_00e22a50, _DAT_00e295d8 < 0.0))
  {
    _DAT_00e295d8 = 0.0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00469c30(int param_1,float param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;

  bVar1 = false;
  DAT_00e295b0 = 0;
  DAT_00e295b4 = 0;
  DAT_00e295b8 = (uint)(0 < DAT_00e295d0);
  DAT_00e295bc = (uint)(DAT_00e295d0 < DAT_00e295cc + -1);
  if (((&DAT_0050c908)[param_1] & 0x20000) != 0) {
    if (DAT_00e295d0 < DAT_00e295cc + -1) {
      DAT_00e295b4 = 1;
      if ((_DAT_00e295d8 == 0.0) || (((&DAT_0050c918)[param_1] & 0x20000) != 0)) {
        bVar1 = true;
        DAT_00e295e0 = 1;
        _DAT_00e295d8 = 0.6;
        if (0 < DAT_00e295dc) {
          _DAT_00e295d8 = 0.1 / param_2;
        }
      }
    }
    else if (DAT_00e295a0 == 1.0) {
      FUN_00440550(0x4b);
    }
  }
  if (((&DAT_0050c908)[param_1] & 0x10000) != 0) {
    if (DAT_00e295d0 < 1) {
      if (DAT_00e295a0 == 1.0) {
        FUN_00440550(0x4b);
      }
    }
    else {
      DAT_00e295b0 = 1;
      if ((_DAT_00e295d8 == 0.0) || (((&DAT_0050c918)[param_1] & 0x10000) != 0)) {
        bVar1 = true;
        DAT_00e295e0 = -1;
        _DAT_00e295d8 = 0.6;
        if (DAT_00e295dc < 0) {
          _DAT_00e295d8 = 0.1 / param_2;
        }
      }
    }
  }
  iVar3 = DAT_00e295d0;
  iVar2 = DAT_00e295b0;
  if ((DAT_00e295b0 != 0) || (DAT_00e295b4 != 0)) {
    (&DAT_0050c918)[param_1] = (&DAT_0050c918)[param_1] & 0xfffffffc;
  }
  if (bVar1) {
    if (DAT_00e295dc * DAT_00e295e0 < 0) {
      DAT_00e295dc = 0;
    }
    DAT_00e295d0 = iVar3 + DAT_00e295e0;
    DAT_00e295dc = DAT_00e295dc + DAT_00e295e0;
    FUN_00440550(0x58);
    iVar2 = DAT_00e295b0;
    iVar3 = DAT_00e295d0;
  }
  if ((DAT_00e295b4 == 0) && (iVar2 == 0)) {
    DAT_00e295dc = 0;
  }
  if (((DAT_00e295d4 == iVar3) && (iVar2 == 0)) && (DAT_00e295b4 == 0)) {
    if (param_3 != 0) {
      FUN_00469b90(param_2 * 3.3);
      return;
    }
  }
  else {
    FUN_00469b90(param_2 * -3.3);
    if (DAT_00e295a0 == 0.0) {
      DAT_00e295d4 = DAT_00e295d0;
    }
  }
  return;
}



void FUN_0046a5e0(undefined4 param_1)

{
  DAT_00e27168 = param_1;
  return;
}



int FUN_0046a5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                float param_5)

{
  int iVar1;

  iVar1 = FUN_00450d20(0x536d6f6b);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 100) = param_2;
  *(undefined4 *)(iVar1 + 0x60) = param_1;
  *(undefined4 *)(iVar1 + 0x68) = param_3;
  FUN_004310b0(iVar1 + 0x20,param_5,param_5,param_5);
  FUN_0042f7d0(iVar1 + 0x50,param_4);
  switch(param_1) {
  case 2:
  case 3:
    *(undefined4 *)(iVar1 + 0x70) = 5;
    FUN_0042f7b0(iVar1 + 0x74,0,0,param_5 * 10.0);
    *(float *)(iVar1 + 0x8c) = param_5 * 5.0;
    *(float *)(iVar1 + 0x88) = param_5;
    *(undefined4 *)(iVar1 + 0x98) = 0x43b40000;
    *(undefined4 *)(iVar1 + 0x9c) = 0xc1100000;
    *(float *)(iVar1 + 0x90) = param_5 * 10.0;
    *(undefined4 *)(iVar1 + 0xa0) = 0x3fb33333;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    *(float *)(iVar1 + 0x94) = param_5 * 5.0;
    *(undefined4 *)(iVar1 + 0xa8) = 0x40400000;
    *(undefined4 *)(iVar1 + 0xac) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
    FUN_00430a90(iVar1 + 0xb4,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    break;
  default:
    goto switchD_0046a652_caseD_4;
  case 6:
    *(undefined4 *)(iVar1 + 0x70) = 5;
    FUN_0042f7b0(iVar1 + 0x74,0,param_5 * -10.0,0);
    *(float *)(iVar1 + 0x8c) = param_5 * 3.0;
    *(float *)(iVar1 + 0x88) = param_5;
    *(undefined4 *)(iVar1 + 0x98) = 0x43b40000;
    *(undefined4 *)(iVar1 + 0x9c) = 0xc1100000;
    *(float *)(iVar1 + 0x90) = param_5 * 10.0;
    *(undefined4 *)(iVar1 + 0xa0) = 0x3fb33333;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    *(undefined4 *)(iVar1 + 0xa8) = 0x40400000;
    *(undefined4 *)(iVar1 + 0xac) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
    *(float *)(iVar1 + 0x94) = param_5 * 5.0;
    FUN_00430a90(iVar1 + 0xb4,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    break;
  case 8:
    *(undefined4 *)(iVar1 + 0x70) = 5;
    FUN_0042f7b0(iVar1 + 0x74,0,param_5 * -10.0,0);
    *(float *)(iVar1 + 0x8c) = param_5 * 3.0;
    *(float *)(iVar1 + 0x88) = param_5;
    *(undefined4 *)(iVar1 + 0x98) = 0x43b40000;
    *(undefined4 *)(iVar1 + 0x9c) = 0xc1100000;
    *(float *)(iVar1 + 0x90) = param_5 * 10.0;
    *(undefined4 *)(iVar1 + 0xa0) = 0x4019999a;
    *(undefined4 *)(iVar1 + 0xa4) = 0x3f000000;
    *(undefined4 *)(iVar1 + 0xa8) = 0x40400000;
    *(undefined4 *)(iVar1 + 0xac) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
    *(float *)(iVar1 + 0x94) = param_5 * 5.0;
    FUN_00430a90(iVar1 + 0xb4,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  }
  FUN_00430a90(iVar1 + 0xc4,0,0,0,0x3f800000);
  *(undefined4 *)(iVar1 + 0x80) = 0x3dcccccd;
  *(undefined4 *)(iVar1 + 0x84) = 0x3f000000;
  *(undefined4 *)(iVar1 + 0xd4) = 0;
  *(undefined4 *)(iVar1 + 0xd8) = 0;
switchD_0046a652_caseD_4:
  return iVar1;
}



void FUN_0046a920(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_0042f7d0(param_1 + 0x50,param_2);
  }
  return;
}



void FUN_0046a940(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_0042f7d0(param_1 + 0x74,param_2);
  }
  return;
}



void FUN_0046a960(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = param_2;
  }
  return;
}



void FUN_0046a970(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xf0) = param_2;
  }
  return;
}



void FUN_0046a990(int param_1,int param_2)

{
  if (((&DAT_00e98e90)[param_2] & 0x2000) != 0) {
    if ((*(uint *)(param_1 + 0x60) & 0x1000) == 0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
    }
  }
  return;
}



uint FUN_0046a9c0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;

  uVar1 = 0;
  iVar2 = 0;
  pbVar3 = (byte *)(param_1 + 0x2a0);
  do {
    if ((*pbVar3 & 0x14) != 0) {
      if (iVar2 < 3) {
        uVar1 = uVar1 | 1;
      }
      else {
        uVar1 = uVar1 | 2;
      }
    }
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 4;
  } while (iVar2 < 6);
  return uVar1;
}



float10 FUN_0046a9f0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;

  iVar1 = 0;
  fVar3 = (float10)0.0;
  pfVar2 = (float *)(param_1 + 0x288);
  do {
    if (0.8 < *pfVar2) {
      if (iVar1 < 3) {
        fVar3 = fVar3 - (float10)0.33;
      }
      else {
        fVar3 = fVar3 - (float10)-0.33;
      }
    }
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar1 < 6);
  return fVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046aa30(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;

  iVar1 = -1;
  iVar3 = 0;
  pbVar4 = (byte *)(param_1 + 0x2a0);
  do {
    if ((*pbVar4 & 8) != 0) {
      iVar1 = FUN_004816b0();
      FUN_00474cd0(param_1,iVar3,((float)iVar1 * 4.656613e-10 * 0.1 - -0.1) * (float)_DAT_00e22a40);
      iVar1 = iVar3;
    }
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar4 + 4;
  } while (iVar3 < 6);
  if (iVar1 < 0) {
    FUN_004276a0(0,0x40000);
  }
  else {
    iVar1 = FUN_00427670();
    if (iVar1 == 0) {
      FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),0xc,0xc,0xc,0xc,0xc,
                   param_1 + 0x50);
      FUN_00427690(0,0x40000);
      if (iVar3 < 3) {
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)(iVar3 < 6);
      }
      FUN_00409ee0(0x15,0xffffffff,uVar2 * 0xb4 + 0x5a,0xffffffff,0);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046ab10(int param_1)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  float *pfVar8;
  uint *puVar9;
  int iVar10;
  undefined4 local_14;

  local_14 = 0;
  *(float *)(param_1 + 700) = *(float *)(param_1 + 700) - (float)_DAT_00e22a40;
  bVar4 = false;
  bVar5 = false;
  bVar3 = false;
  if ((*(uint *)(param_1 + 0x60) & 0x400) != 0) {
    *(undefined4 *)(param_1 + 700) = 0x3dcccccd;
  }
  puVar9 = (uint *)(param_1 + 0x2a0);
  iVar10 = -1;
  iVar7 = 0;
  puVar6 = puVar9;
  do {
    uVar2 = *puVar6;
    *puVar6 = uVar2 & 0xffffffef;
    if ((uVar2 & 4) != 0) {
      iVar10 = iVar7;
    }
    iVar7 = iVar7 + 1;
    *puVar6 = uVar2 & 0xffffffeb;
    puVar6 = puVar6 + 1;
  } while (iVar7 < 6);
  if (0.0 < *(float *)(param_1 + 700)) {
    if (iVar10 < 0) {
      fVar1 = 0.0;
      iVar7 = 0;
      pfVar8 = (float *)(param_1 + 0x288);
      do {
        if ((fVar1 < *pfVar8) && (0.5 < *pfVar8)) {
          fVar1 = *pfVar8;
          iVar10 = iVar7;
        }
        iVar7 = iVar7 + 1;
        pfVar8 = pfVar8 + 1;
      } while (iVar7 < 6);
      if (-1 < iVar10) goto LAB_0046abcd;
    }
    else {
LAB_0046abcd:
      if (*(float *)(param_1 + 0x270 + iVar10 * 4) * 0.5 < *(float *)(param_1 + 0x288 + iVar10 * 4))
      {
        *(uint *)(param_1 + 0x2a0 + iVar10 * 4) = *(uint *)(param_1 + 0x2a0 + iVar10 * 4) | 4;
      }
    }
    if ((*(uint *)(param_1 + 100) & 0x40000) == 0) {
      iVar10 = 6;
      puVar6 = puVar9;
      do {
        if ((*puVar6 & 8) != 0) {
          *puVar6 = *puVar6 | 0x10;
        }
        puVar6 = puVar6 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  iVar10 = 6;
  do {
    if ((*(byte *)puVar9 & 4) != 0) {
      bVar3 = true;
      puVar9[-6] = (uint)((float)_DAT_00e22a40 *
                          ((float)puVar9[-0xc] * 0.5 - (float)puVar9[-0xc]) *
                          *(float *)(param_1 + 0x98) * 0.5 + (float)puVar9[-6]);
    }
    if (((*(byte *)puVar9 & 0x10) != 0) &&
       (iVar7 = FUN_004816b0(), (float)iVar7 * 4.656613e-10 < 0.03)) {
      *puVar9 = *puVar9 & 0xfffffff7;
    }
    puVar9 = puVar9 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
    if (bVar3) {
      FUN_00409ee0(0xb,0xffffffff,0xffffffff,0xffffffff,0);
    }
    else {
      FUN_0040a0b0(0xb);
    }
    if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
      if (bVar3) {
        iVar10 = FUN_004816b0();
        if (((float)iVar10 * 4.656613e-10 < 0.15) &&
           (iVar10 = FUN_00427670((int)*(char *)(*(int *)(param_1 + 0x1e70) + 0x10),0x10000),
           iVar10 == 0)) {
          FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),10,10,10,10,10,
                       param_1 + 0x50);
          FUN_00427690((int)*(char *)(*(int *)(param_1 + 0x1e70) + 0x10),0x10000);
        }
      }
      else {
        iVar10 = FUN_00427670((int)*(char *)(*(int *)(param_1 + 0x1e70) + 0x10),0x10000);
        if (iVar10 != 0) {
          FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),0xb,0xb,0xb,0xb,0xb,
                       param_1 + 0x50);
          FUN_004276a0((int)*(char *)(*(int *)(param_1 + 0x1e70) + 0x10),0x10000);
        }
      }
    }
  }
  iVar10 = 0;
  pfVar8 = (float *)(param_1 + 0x288);
  do {
    if (1.0 <= *pfVar8) {
      if (iVar10 < 3) {
        bVar4 = true;
      }
      else {
        bVar5 = true;
      }
    }
    iVar10 = iVar10 + 1;
    pfVar8 = pfVar8 + 1;
  } while (iVar10 < 6);
  if ((bVar4) || (bVar5)) {
    *(float *)(param_1 + 0x2c0) = *(float *)(param_1 + 0x2c0) - (float)_DAT_00e22a40;
    if ((*(uint *)(param_1 + 0x60) & 0x40000000) != 0) {
      *(undefined4 *)(param_1 + 0x2c0) = 0;
    }
  }
  else {
    iVar10 = FUN_004816b0();
    *(float *)(param_1 + 0x2c0) = (float)iVar10 * 4.656613e-10 * 4.0 - -6.0;
  }
  if (0.0 < *(float *)(param_1 + 0x2c0)) {
    return;
  }
  if (bVar4) {
    if (!bVar5) {
      if (bVar4) {
        local_14 = 1;
        goto LAB_0046aea1;
      }
      goto LAB_0046ae95;
    }
    iVar10 = FUN_004816b0();
    if ((float)iVar10 * 4.656613e-10 < 0.5) {
      local_14 = 1;
      goto LAB_0046aea1;
    }
  }
  else {
LAB_0046ae95:
    if (!bVar5) goto LAB_0046aea1;
  }
  local_14 = 2;
LAB_0046aea1:
  FUN_004741d0(param_1,local_14);
  return;
}



void FUN_0046aec0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  float fVar1;

  if (*(float *)(param_1 + 0x58) <= *(float *)(param_3 + 8)) {
    if (((*(uint *)(param_1 + 100) & 0x200) == 0) && (param_4 != 0)) {
      fVar1 = *(float *)(param_1 + 0x184);
    }
    else {
      fVar1 = 500.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  if (400.0 < fVar1) {
    *(undefined4 *)(param_1 + 0x2fc) = 0xbf800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  return;
}



void FUN_0046af20(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined local_40 [48];
  float local_10;
  float local_c;
  float local_8;

  if ((*(byte *)(param_1 + 0x60) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x18c) = 0x3ef5c28f;
  }
  else {
    *(undefined4 *)(param_1 + 0x18c) = 0x3f7ae148;
  }
  if (*(float *)(param_1 + 0x104) < 0.01) {
    *(undefined4 *)(param_1 + 0x104) = 0x3c23d70a;
  }
  if (2.0 < *(float *)(param_1 + 0x104)) {
    *(undefined4 *)(param_1 + 0x104) = 0x40000000;
  }
  iVar5 = FUN_004816b0();
  if (0.0 <= (float)iVar5 * 4.656613e-10 + (float)iVar5 * 4.656613e-10) {
    FUN_004816b0();
  }
  else {
    FUN_004816b0();
  }
  uVar6 = __ftol();
  *(undefined4 *)(param_1 + 0xd4) = uVar6;
  if (0 < DAT_004c7084) {
    if (DAT_004c7084 == 1) {
      if (*(float *)(param_1 + 0xe8) < 0.01) {
LAB_0046b0da:
        *(undefined4 *)(param_1 + 0xd4) = 0;
      }
      else if (0.07 < *(float *)(param_1 + 0xe0)) {
        bVar1 = *(float *)(param_1 + 0xe0) < 0.14;
        goto LAB_0046b0d3;
      }
    }
    else if (DAT_004c7084 == 2) {
      if ((0.53 < *(float *)(param_1 + 0xe0)) && (*(float *)(param_1 + 0xe0) < 0.54))
      goto LAB_0046b0da;
      if (0.55 < *(float *)(param_1 + 0xe0)) {
        bVar1 = *(float *)(param_1 + 0xe0) < 0.57;
        goto LAB_0046b0d3;
      }
    }
    else if (DAT_004c7084 == 3) {
      if (0.27 < *(float *)(param_1 + 0xe0)) {
        bVar1 = *(float *)(param_1 + 0xe0) < 0.29;
LAB_0046b0d3:
        if (bVar1) goto LAB_0046b0da;
      }
    }
    else if (DAT_004c7084 == 4) {
      if (0.72 < *(float *)(param_1 + 0xe0)) {
        bVar1 = *(float *)(param_1 + 0xe0) < 0.73;
        goto LAB_0046b0d3;
      }
    }
    else if (DAT_004c7084 == 5) {
      if ((0.063 < *(float *)(param_1 + 0xe0)) && (*(float *)(param_1 + 0xe0) < 0.072)) {
LAB_0046b13a:
        *(undefined4 *)(param_1 + 0xd4) = 1;
      }
    }
    else if (((DAT_004c7084 == 6) && (0.093 < *(float *)(param_1 + 0xe0))) &&
            (*(float *)(param_1 + 0xe0) < 0.108)) goto LAB_0046b13a;
  }
  FUN_0044eeb0(param_1 + 0xac,local_40,0);
  local_70 = local_10;
  local_6c = local_c;
  local_68 = local_8;
  FUN_0044eeb0(param_1 + 0xac,local_40,*(undefined4 *)(param_1 + 0x104));
  if (((((float)*(int *)(param_1 + 0x1998) - 400.0) * 0.001666667 < 1.0) ||
      ((*(byte *)(param_1 + 0x60) & 0x20) != 0)) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  FUN_0046aec0(param_1,&local_10,&local_70,uVar6);
  fVar2 = (local_68 - local_8) * (local_68 - local_8) +
          (local_6c - local_c) * (local_6c - local_c) +
          (local_70 - local_10) * (local_70 - local_10);
  if (*(float *)(param_1 + 0x108) <= fVar2) {
    if (*(float *)(param_1 + 0x108) < fVar2) {
      fVar2 = *(float *)(param_1 + 0x104) - 0.01;
      goto LAB_0046b258;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x104) - -0.01;
LAB_0046b258:
    *(float *)(param_1 + 0x104) = fVar2;
  }
  local_70 = local_10;
  local_6c = local_c;
  local_68 = local_8;
  FUN_0042fa80(&local_58,&local_70,
               (*(float *)(param_1 + 0x54) - local_c) * *(float *)(param_1 + 0x198) +
               (*(float *)(param_1 + 0x58) - local_8) * *(float *)(param_1 + 0x19c) +
               (*(float *)(param_1 + 0x50) - local_10) * *(float *)(param_1 + 0x194),
               (float *)(param_1 + 0x194));
  local_64 = local_58 - *(float *)(param_1 + 0x50);
  local_60 = local_54 - *(float *)(param_1 + 0x54);
  local_5c = local_50 - *(float *)(param_1 + 0x58);
  fVar7 = (float10)FUN_0042f8c0(&local_64);
  if (fVar7 <= (float10)0.01) {
    return;
  }
  fVar7 = (float10)1.0 / fVar7;
  local_64 = (float)((float10)local_64 * fVar7);
  local_60 = (float)((float10)local_60 * fVar7);
  local_5c = (float)((float10)local_5c * fVar7);
  FUN_0042f9f0(&local_4c,param_1 + 0x30,&local_64);
  fVar2 = local_48 * *(float *)(param_1 + 0x198) +
          local_4c * *(float *)(param_1 + 0x194) + local_44 * *(float *)(param_1 + 0x19c);
  if (fVar2 <= 0.02) {
    fVar3 = 0.0;
    if ((-0.02 <= fVar2) || (fVar3 = fVar2 * -1.428571, -0.3 <= fVar2)) goto LAB_0046b414;
    fVar4 = fVar2 - -1.0;
  }
  else {
    fVar3 = fVar2 * -1.428571;
    if (fVar2 <= 0.3) goto LAB_0046b414;
    fVar4 = 1.0 - fVar2;
  }
  fVar3 = fVar2 * -1.428571;
  *(float *)(param_1 + 0x18c) = fVar4 * 0.5 * *(float *)(param_1 + 0x18c);
LAB_0046b414:
  *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x22c) * *(float *)(param_1 + 0x74) * fVar3;
  return;
}



void FUN_0046b430(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50 [4];
  int local_40 [4];
  float local_30;
  float local_2c;
  float local_28;

  local_60 = 1.0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  iVar3 = FUN_00450e70(0x54657374,param_1 + 0x50,0x451c4000,param_1,4,local_50,&local_30,local_40);
  if (0 < iVar3) {
    FUN_0042f9f0(&local_5c,(float *)(param_1 + 0x30),&local_30);
    fVar4 = (float10)FUN_00480670(local_50[0]);
    fVar1 = (50.0 - (float)fVar4) * 0.2;
    fVar1 = fVar1 * fVar1 * 0.1 * 8.0;
    fVar2 = *(float *)(param_1 + 0x198) * local_58 +
            *(float *)(param_1 + 0x19c) * local_54 + *(float *)(param_1 + 0x194) * local_5c;
    if (((iVar3 == 1) && ((*(byte *)(local_40[0] + 0x60) & 0x20) != 0)) &&
       (*(float *)(param_1 + 0x38) * local_28 +
        *(float *)(param_1 + 0x34) * local_2c + local_30 * *(float *)(param_1 + 0x30) < 0.0)) {
      local_60 = -1.0;
    }
    if (0.0 < fVar2) {
      *(float *)(param_1 + 0x1f0) = local_60 * fVar1 + *(float *)(param_1 + 0x1f0);
      return;
    }
    if (fVar2 < 0.0) {
      *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x1f0) - local_60 * fVar1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046b5a0(int param_1,float param_2)

{
  float fVar1;

  if (*(float *)(param_1 + 0x1a0) < 200.0) {
    param_2 = 0.0;
  }
  if (param_2 <= *(float *)(param_1 + 0x208)) {
    if ((*(float *)(param_1 + 0x208) <= param_2) ||
       (fVar1 = *(float *)(param_1 + 0x208) - (float)_DAT_00e22a40 * 3.2,
       *(float *)(param_1 + 0x208) = fVar1, param_2 <= fVar1)) goto LAB_0046b627;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x208) - (float)_DAT_00e22a40 * -3.2;
    *(float *)(param_1 + 0x208) = fVar1;
    if (fVar1 <= param_2) goto LAB_0046b627;
  }
  *(float *)(param_1 + 0x208) = param_2;
LAB_0046b627:
  if (param_2 == 0.0) {
    fVar1 = *(float *)(param_1 + 0x208);
    if (*(float *)(param_1 + 0x208) < 0.0) {
      fVar1 = -fVar1;
    }
    if (fVar1 < 0.1) {
      *(float *)(param_1 + 0x208) = *(float *)(param_1 + 0x208) * 0.5;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046b670(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;

  *(undefined4 *)(param_1 + 0x230) = DAT_004c707c;
  if ((*(uint *)(param_1 + 100) & 0x2000000) != 0) {
    *(undefined4 *)(param_1 + 0x230) = 0x3f266666;
    if (*(float *)(param_1 + 0x108) <= 5625.0) {
      *(undefined4 *)(param_1 + 0x108) = 0x45afc800;
      *(undefined4 *)(param_1 + 0x70) = 0x44bb8000;
      *(undefined4 *)(param_1 + 0x74) = 0x43c80000;
    }
    else {
      fVar1 = (float)_DAT_00e22a40;
      *(undefined4 *)(param_1 + 0x70) = 0x44bb8000;
      *(undefined4 *)(param_1 + 0x74) = 0x43c80000;
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) - fVar1 * 100.0;
    }
    goto LAB_0046b989;
  }
  fVar7 = (float10)FUN_0047e870();
  fVar2 = DAT_004c7080 * 0.0001;
  fVar1 = (float)((float10)500000.0 / fVar7);
  fVar3 = fVar2 * fVar1;
  if ((*(uint *)(param_1 + 0x60) & 0x100) == 0) {
    if (*(short *)(*(int *)(param_1 + 0x1e70) + 0x5c) == 1) {
      *(undefined4 *)(param_1 + 0x138) = 0;
      goto LAB_0046b989;
    }
    fVar4 = *(float *)(param_1 + 0x234) - (float)_DAT_00e22a40;
    *(float *)(param_1 + 0x234) = fVar4;
    if (fVar4 < 0.0) {
      iVar5 = FUN_004816b0();
      *(float *)(param_1 + 0x234) = (float)iVar5 * 4.656613e-10 * 10.0 - -8.0;
      iVar5 = FUN_004816b0();
      if (0.15 <= (float)iVar5 * 4.656613e-10) {
        if ((float)iVar5 * 4.656613e-10 <= 0.85) goto LAB_0046b86c;
        iVar5 = *(int *)(param_1 + 0x23c);
        iVar6 = iVar5 + 1;
        *(int *)(param_1 + 0x23c) = iVar6;
        if (iVar6 - *(int *)(param_1 + 0x238) < 3) {
          iVar6 = *(int *)(param_1 + 0x238) - iVar6;
          goto joined_r0x0046b863;
        }
      }
      else {
        iVar5 = *(int *)(param_1 + 0x23c);
        iVar6 = iVar5 + -1;
        *(int *)(param_1 + 0x23c) = iVar6;
        if ((1 < iVar6) && (iVar6 - *(int *)(param_1 + 0x238) < 3)) {
          iVar6 = *(int *)(param_1 + 0x238) - iVar6;
joined_r0x0046b863:
          if (iVar6 < 3) goto LAB_0046b86c;
        }
      }
      *(int *)(param_1 + 0x23c) = iVar5;
    }
LAB_0046b86c:
    if (0.0 < _DAT_0050cae0) {
      fVar1 = *(float *)(param_1 + 0x230) * 1.06;
      *(float *)(param_1 + 0x230) = fVar1;
      *(float *)(param_1 + 0x230) =
           (1.0 - ((float)*(int *)(param_1 + 0x23c) - 1.0) * _DAT_0050cae0) * fVar1;
      goto LAB_0046b989;
    }
    fVar2 = (((float)*(int *)(param_1 + 0x23c) - 1.0) * fVar2 - 0.0008) * fVar1;
    *(float *)(param_1 + 0x138) = fVar2;
    if ((*(float *)(param_1 + 300) <= fVar3 * 0.25) || ((*(uint *)(param_1 + 0x60) & 0x18000) == 0))
    {
      fVar2 = (*(float *)(param_1 + 300) - fVar2) * 10.0;
    }
    else {
      if ((*(uint *)(param_1 + 0x60) & 0x8000) == 0) {
        fVar2 = *(float *)(param_1 + 0x134);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x130);
      }
      if (fVar2 <= 0.0) {
        fVar2 = fVar2 * 10.02;
      }
      else {
        fVar2 = fVar2 * 10.3;
      }
    }
    fVar1 = (fVar2 * 40.0) / fVar1 - -1.045;
    if (1.6 < fVar1) {
      fVar1 = 1.6;
    }
    if (fVar1 < 0.5) {
      fVar1 = 0.5;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(short *)(*(int *)(param_1 + 0x1e70) + 0x5c) == 1) {
      fVar1 = *(float *)(param_1 + 0x230) * 1.06;
    }
    else if (*(float *)(param_1 + 0x130) <= fVar3 * 3.0) {
      fVar1 = *(float *)(param_1 + 0x230) * 1.1;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x230) * 1.4;
    }
  }
  *(float *)(param_1 + 0x230) = fVar1;
LAB_0046b989:
  if (*(float *)(param_1 + 0x230) <= *(float *)(param_1 + 0x22c)) {
    if ((*(float *)(param_1 + 0x230) < *(float *)(param_1 + 0x22c)) &&
       (fVar1 = *(float *)(param_1 + 0x22c) - (float)_DAT_00e22a40 * 0.2,
       *(float *)(param_1 + 0x22c) = fVar1, fVar1 < *(float *)(param_1 + 0x230))) {
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x230);
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x22c) + (float)_DAT_00e22a40 * 0.2;
    *(float *)(param_1 + 0x22c) = fVar1;
    if (*(float *)(param_1 + 0x230) < fVar1) {
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x230);
      return;
    }
  }
  return;
}



void FUN_0046ba30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined local_c [12];

  if (((*(uint *)(param_1 + 0x60) & 0x6000) == 0) && (*(int *)(param_1 + 0x31c) == 0)) {
    iVar1 = param_1 + 0x50;
    iVar2 = FUN_004816b0(0x3f800000,iVar1,0,1,0x42480000,0x43fa0000);
    FUN_00426d10(0x87,6,(float)iVar2 * 4.656613e-10 * 0.04 - -0.23);
    iVar2 = FUN_004816b0(0x3f800000,iVar1,0,1,0x42480000,0x43fa0000);
    FUN_00426d10(0x88,7,(float)iVar2 * 4.656613e-10 * 0.04 - -0.23);
    *(undefined4 *)(param_1 + 0x268) = 0x41700000;
    FUN_0042f7d0(local_c,iVar1);
    uVar3 = FUN_0046a5f0(8,0,0x41000000,local_c,0x40000000);
    *(undefined4 *)(param_1 + 0x31c) = uVar3;
    FUN_0046a970(uVar3,(undefined4 *)(param_1 + 0x31c));
  }
  return;
}



void FUN_0046bb30(undefined4 param_1)

{
  FUN_0041df10(0xffffffff,0,0x666c616d,param_1);
  return;
}



void FUN_0046bb50(int param_1)

{
  FUN_0046ba30((&DAT_00e29c44)[param_1 * 0x22]);
  return;
}



void FUN_0046bb70(int param_1)

{
  undefined4 local_20;
  int local_1c;

  if (DAT_0050ca3c != 0) {
    local_20 = 0x536e6170;
    local_1c = 2;
    FUN_00450c00(param_1,&local_20);
  }
  if (((DAT_0050c048 & 0x100) != 0) && (DAT_0050c040 != 0)) {
    FUN_0046a990(param_1,1);
    if (((DAT_00e98e90 & 0x800) != 0) || ((DAT_00e98e90 & 0x400) != 0)) {
      local_1c = (-(uint)((DAT_00e98e90 & 0x800) != 0) & 0xfffffffe) + 1;
      local_20 = 0x536e6170;
      FUN_00450c00(param_1,&local_20);
    }
  }
  if (((byte)*(undefined4 *)(param_1 + 0x60) & 0xf) == 2) {
    FUN_0046af20(param_1);
    if ((*(uint *)(param_1 + 0x60) & 0x4000) != 0) {
      *(undefined4 *)(param_1 + 0x18c) = 0;
      return;
    }
    if ((*(byte *)(param_1 + 100) & 0x20) != 0) {
      FUN_0046b5a0(param_1,0x3f800000);
      return;
    }
    FUN_0046b5a0(param_1,0);
  }
  return;
}



void FUN_0046bc50(int param_1,undefined *param_2,undefined *param_3,float *param_4)

{
  int iVar1;
  float fVar2;

  *param_2 = 0;
  param_2[1] = 0xff;
  param_2[2] = 0;
  *param_3 = 0xff;
  param_3[1] = 0xff;
  param_3[2] = 0xff;
  param_3[3] = 100;
  *param_4 = 0.0;
  iVar1 = *(int *)(param_1 + 0x210);
  if (iVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0xff;
    param_2[2] = 0;
    *param_3 = 0xff;
    param_3[1] = 0xff;
    param_3[2] = 0xff;
    param_3[3] = 100;
    fVar2 = *(float *)(param_1 + 0x1a0) / (*(float *)(param_1 + 0x7c) * 0.75);
    *param_4 = fVar2;
    if (1.0 < fVar2) {
      *param_4 = 1.0;
    }
  }
  else {
    if (iVar1 == 1) {
      *param_2 = 0;
      param_2[1] = 0xff;
      param_2[2] = 0;
      *param_3 = 0xff;
      param_3[1] = 0x80;
      param_3[2] = 0;
      param_3[3] = 200;
      *param_4 = *(float *)(param_1 + 0x214);
      return;
    }
    if (iVar1 == 2) {
      *param_2 = 0xff;
      param_2[1] = 0xff;
      param_2[2] = 0;
      *param_3 = 0xff;
      param_3[1] = 0x80;
      param_3[2] = 0;
      param_3[3] = 200;
      *param_4 = 1.0;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0046bd20(int param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;

  iVar4 = __ftol();
  uVar1 = *(uint *)(param_1 + 0x60);
  if (((uVar1 & 0x200000) == 0) || ((uVar1 & 0x800000) != 0)) {
    *(uint *)(param_1 + 0x60) = uVar1 & 0xffbfffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x210);
    if (iVar2 == 0) {
      if ((_DAT_00ec884c == 0.0) && (DAT_00ec8830 <= 0.6)) {
        return 0;
      }
      if (_DAT_00ec883c <= 0.7) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x210) = 1;
      *(undefined4 *)(param_1 + 0x214) = 0;
      return 0;
    }
    if (iVar2 == 1) {
      if (((_DAT_00ec884c != 0.0) || (0.6 < DAT_00ec8830)) && (0.7 < _DAT_00ec883c)) {
        fVar3 = *(float *)(param_1 + 0x214) + (float)_DAT_00e22a40;
        *(float *)(param_1 + 0x214) = fVar3;
        if (fVar3 <= 1.0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x210) = 2;
        return 0;
      }
    }
    else if ((iVar2 == 2) && (0.7 <= _DAT_00ec883c)) {
      if (iVar4 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x210) = 0;
      iVar4 = FUN_004816b0();
      FUN_00426d10(0x72,7,(float)iVar4 * 4.656613e-10 * 0.1 - -0.18,0x3f800000,param_1 + 0x50,0,1,
                   0x41200000,0x43fa0000);
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046bec0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float10 extraout_ST0;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float local_60;
  float local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  float local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_20;
  int local_1c;

  local_48 = 0;
  local_40 = 0.0;
  local_5c = 0.0;
  local_60 = 0.0;
  local_4c = 0;
  bVar6 = false;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  iVar8 = *(int *)(param_1 + 0x1e70);
  uVar13 = (uint)*(char *)(iVar8 + 0x10);
  iVar11 = (int)*(char *)(*(int *)(iVar8 + 0xc) + 0x23);
  *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) & 0xfffffffb;
  *(uint *)(*(int *)(param_1 + 0x1e70) + 8) = *(uint *)(*(int *)(param_1 + 0x1e70) + 8) & 0xfffffff7
  ;
  uVar5 = *(uint *)(param_1 + 0x60);
  uVar9 = (&DAT_00e98e90)[uVar13];
  switch(iVar11) {
  case 0:
  case 9:
    if ((DAT_00e996dc & 0x4000) == 0) {
      local_5c = DAT_00ec8838;
      local_54 = __ftol();
      local_58 = __ftol();
    }
    else {
      local_5c = -DAT_00ec8838;
      local_58 = __ftol();
      local_54 = __ftol();
    }
    local_48 = __ftol();
    local_50 = __ftol();
    local_34 = __ftol();
    local_38 = __ftol();
    local_3c = __ftol();
    if ((_DAT_00ec8864 == 0.0) || (bVar6 = true, _DAT_00ec88c4 <= 0.5)) {
      bVar6 = false;
    }
    local_4c = __ftol();
    local_40 = DAT_00ec8830;
    if (((DAT_00ec8820 == 0) && (local_50 != 0)) || (local_48 != 0)) {
      iVar8 = *(int *)(param_1 + 0x1e70);
      uVar12 = *(uint *)(iVar8 + 8) & 0xfffffff7;
LAB_0046c1e4:
      *(uint *)(iVar8 + 8) = uVar12;
    }
    else if (DAT_00ec8830 != 0.0) {
      iVar8 = *(int *)(param_1 + 0x1e70);
      uVar12 = *(uint *)(iVar8 + 8) | 8;
      goto LAB_0046c1e4;
    }
    if (((local_48 != 0) && (DAT_00ec8820 != 0)) && (local_50 != 0)) {
      local_50 = 0;
    }
    local_60 = (float)(extraout_ST0 * (float10)0.8);
    if ((float10)0.8 < extraout_ST0 * (float10)0.8) {
      local_60 = 0.8;
    }
    if (local_60 < -0.8) {
      local_60 = 0.8;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    local_5c = (float)(&DAT_00e98ea0)[uVar13];
    if ((DAT_00e996dc & 0x4000) == 0) {
      local_54 = uVar9 & 0x10;
      local_58 = uVar9 & 0x20;
    }
    else {
      local_58 = uVar9 & 0x10;
      local_5c = -local_5c;
      local_54 = uVar9 & 0x20;
    }
    local_60 = (float)(&DAT_00e98e80)[uVar13];
    local_48 = __ftol();
    local_50 = uVar9 & 2;
    local_38 = uVar9 & 8;
    local_34 = (&DAT_00e98eb0)[uVar13] & 4;
    if (((&DAT_00e98eb0)[uVar13] & 0x80) != 0) {
      if (0.25 < (float)_DAT_00e22a38 - *(float *)(param_1 + 0x2f4)) {
        *(undefined *)(param_1 + 0x2f9) = 0;
      }
      cVar10 = *(char *)(param_1 + 0x2f9) + '\x01';
      *(float *)(param_1 + 0x2f4) = (float)_DAT_00e22a38;
      *(char *)(param_1 + 0x2f9) = cVar10;
      if ('\x01' < cVar10) {
        local_3c = 1;
      }
    }
    if ((*(byte *)(&DAT_00e98ec0 + uVar13) & 0x80) != 0) {
      *(float *)(param_1 + 0x2f4) = (float)_DAT_00e22a38;
    }
    if ((((&DAT_00e98e90)[uVar13] & 0x80) != 0) &&
       (0.5 < (float)_DAT_00e22a38 - *(float *)(param_1 + 0x2f4))) {
      bVar6 = true;
    }
    local_4c = (uint)(((&DAT_00e98e90)[uVar13] & 0x100) != 0);
    if (iVar11 == 1) {
      local_4c = (uint)(local_48 == 0);
    }
  }
  local_30 = FUN_0046bd20(param_1,uVar13);
  uVar12 = local_34;
  if ((DAT_0050c048 & 0x2000000) != 0) {
    uVar13 = (uint)(*(char *)(*(int *)(param_1 + 0x1e70) + 0x10) != '\0');
    fVar1 = (float)(&DAT_00e98ea0)[uVar13];
    fVar2 = (float)(&DAT_00e98e80)[uVar13];
    fVar3 = *(float *)(&DAT_00e98ea8 + uVar13 * 4);
    fVar4 = *(float *)(&DAT_00e98e88 + uVar13 * 4);
    if ((0.3 < fVar2) || (0.3 < fVar4)) {
      local_48 = 1;
    }
    else {
      local_48 = 0;
    }
    if ((DAT_00e996dc & 0x4000) == 0) {
      local_5c = (fVar2 - fVar4) * 0.5;
      if ((-0.5 <= fVar1) || (local_54 = 1, -0.5 <= fVar3)) {
        local_54 = 0;
      }
      if ((fVar1 <= 0.5) || (local_58 = 1, fVar3 <= 0.5)) {
        local_58 = 0;
      }
    }
    else {
      local_5c = (fVar2 - fVar4) * -0.5;
      if ((-0.5 <= fVar1) || (local_58 = 1, -0.5 <= fVar3)) {
        local_58 = 0;
      }
      if ((fVar1 <= 0.5) || (fVar3 <= 0.5)) {
        local_54 = 0;
      }
      else {
        local_54 = 1;
      }
    }
    local_60 = (*(float *)(&DAT_00e98e88 + uVar13 * 4) + (float)(&DAT_00e98e80)[uVar13]) * 0.5;
    if ((-0.6 <= fVar2) || (local_50 = 1, -0.6 <= fVar4)) {
      local_50 = 0;
    }
    uVar12 = (&DAT_00e98eb0)[uVar13] & 4;
    local_38 = (&DAT_00e98e90)[uVar13] & 8;
    if (((&DAT_00e98eb0)[uVar13] & 0x80) != 0) {
      if (0.25 < (float)_DAT_00e22a38 - *(float *)(param_1 + 0x2f4)) {
        *(undefined *)(param_1 + 0x2f9) = 0;
      }
      cVar10 = *(char *)(param_1 + 0x2f9) + '\x01';
      *(float *)(param_1 + 0x2f4) = (float)_DAT_00e22a38;
      *(char *)(param_1 + 0x2f9) = cVar10;
      if ('\x01' < cVar10) {
        local_3c = 1;
      }
    }
    if ((*(byte *)(&DAT_00e98ec0 + uVar13) & 0x80) != 0) {
      *(float *)(param_1 + 0x2f4) = (float)_DAT_00e22a38;
    }
    if (((*(byte *)(&DAT_00e98e90 + uVar13) & 0x80) != 0) &&
       (0.5 < (float)_DAT_00e22a38 - *(float *)(param_1 + 0x2f4))) {
      bVar6 = true;
    }
    if ((fVar1 <= 0.5) || (-0.5 <= fVar3)) {
      local_4c = 0;
    }
    else {
      local_4c = 1;
    }
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (0 < DAT_004c7084) {
    if (((DAT_004c7084 == 5) && (0.063 < *(float *)(param_1 + 0xe0))) &&
       (*(float *)(param_1 + 0xe0) < 0.072)) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
    if (((DAT_004c7084 == 6) && (0.093 < *(float *)(param_1 + 0xe0))) &&
       (*(float *)(param_1 + 0xe0) < 0.108)) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
  }
  local_34 = FUN_0046a9c0(param_1);
  if (local_34 != 0) {
    local_34 = 1;
    local_54 = 0;
    local_58 = 0;
    local_30 = 0;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
  }
  if ((((*(uint *)(param_1 + 0x60) & 0x10) != 0) && ((*(uint *)(param_1 + 0x60) & 0x200) == 0)) &&
     ((*(uint *)(param_1 + 100) & 0x2000000) == 0)) {
    fVar14 = (float10)FUN_0046a9f0(param_1);
    if ((local_34 & 1) == 0) {
      if ((local_34 & 2) != 0) {
        fVar14 = fVar14 - (float10)0.2;
      }
    }
    else {
      fVar14 = fVar14 - (float10)-0.2;
    }
    fVar1 = (float)(fVar14 * (float10)1.5);
    if (fVar14 * (float10)1.5 == (float10)0.0) {
      FUN_0040a0b0(1);
    }
    else {
      uVar7 = __ftol((uint)(0.0 <= fVar1) * 0xb4 + 0x5a,0xffffffff,0);
      FUN_00409ee0(1,uVar7);
      DAT_004d78a0 = 1;
    }
    local_5c = local_5c - fVar1 * -0.6;
    _DAT_0050cae4 = fVar1;
  }
  if ((DAT_0050c048 & 0x100) != 0) {
    if ((DAT_0050c040 != 0) && (((uVar9 & 0x800) != 0 || ((uVar9 & 0x400) != 0)))) {
      local_1c = (-(uint)((uVar9 & 0x800) != 0) & 0xfffffffe) + 1;
      local_20 = 0x536e6170;
      FUN_00450c00(param_1,&local_20);
    }
    if (((DAT_0050c048 & 0x100) != 0) && (DAT_0050c040 != 0)) {
      FUN_0046a990(param_1,uVar13);
    }
  }
  if ((local_3c != 0) || (DAT_004d79e0 != 0)) {
    DAT_004d79e0 = 0;
    if ((((byte)*(uint *)(param_1 + 0x60) & 0xf) == 2) &&
       (((*(uint *)(param_1 + 0x60) & 0x5800) == 0 && ((*(uint *)(param_1 + 100) & 0x4000) == 0))))
    {
      if (**(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 2) {
        FUN_0046ba30(param_1);
        FUN_0046bb30(**(undefined4 **)(param_1 + 0x1e70));
      }
      iVar8 = FUN_004816b0();
      if (0.5 <= (float)iVar8 * 4.656613e-10) {
        uVar19 = 0x19;
        uVar18 = 0x18;
        uVar17 = 0x17;
        uVar16 = 0x16;
        uVar7 = **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18);
        uVar15 = 0x15;
LAB_0046c78f:
        uVar15 = FUN_00427590(1,uVar7,uVar15,uVar16,uVar17,uVar18,uVar19,param_1 + 0x50);
        uVar7 = **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18);
        uVar16 = 0xffffffff;
      }
      else {
        iVar8 = **(int **)(*(int *)(param_1 + 0x1e70) + 0x18);
        if (iVar8 == 0xe) {
          uVar19 = 0x14;
          uVar18 = 0x13;
          uVar17 = 0x12;
          uVar16 = 0x12;
          uVar15 = 3;
          uVar7 = 0xe;
          goto LAB_0046c78f;
        }
        uVar15 = FUN_00427590(1,iVar8,3,0x11,0x12,0x13,0x14,param_1 + 0x50);
        uVar7 = **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18);
        uVar16 = 1;
      }
      FUN_0041df10(uVar16,0,0x7461756e,1,uVar7,uVar15);
    }
  }
  if (local_38 == 0) {
    uVar9 = *(uint *)(param_1 + 0x60) & 0xffefffff;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x60) | 0x100000;
  }
  *(uint *)(param_1 + 0x60) = uVar9;
  if (bVar6) {
    uVar9 = *(uint *)(param_1 + 0x60) | 0x400;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x60) & 0xfffffbff;
  }
  *(uint *)(param_1 + 0x60) = uVar9;
  *(uint *)(param_1 + 0x60) = uVar9 & 0x7fffffff;
  if (((uVar9 & 0xf) != 0) && ((uVar9 & 0x4000) == 0)) {
    if (uVar12 == 0) {
      if (DAT_00ec83d0 != 0) {
        local_20 = DAT_00ec83d0;
        local_1c = param_1;
        FUN_00450c50(0x634d616e,&local_20);
        DAT_00ec83d0 = 0;
      }
    }
    else {
      local_20 = 0x43427574;
      local_1c = param_1;
      FUN_00450c50(0x634d616e,&local_20);
    }
  }
  FUN_0046aa30(param_1);
  FUN_0046ab10(param_1);
  if ((*(uint *)(param_1 + 0x60) & 0x2000000) != 0) {
    if ((0.05 <= local_60) || (0.05 <= -local_60)) {
      fVar1 = local_60 * 1.25 * local_60 * 1.25;
      if (local_60 < 0.0) {
        fVar1 = -fVar1;
      }
      *(float *)(param_1 + 0x224) = -(*(float *)(param_1 + 0x74) * fVar1 * 0.8) * 0.5;
    }
    else {
      *(undefined4 *)(param_1 + 0x224) = 0;
    }
    local_60 = 0.0;
  }
  if (((((_DAT_00ec884c != 0.0) && (_DAT_00ec88ac < 0.2)) && (0.0 < _DAT_00ec88ac)) ||
      (((0.6 < DAT_00ec8830 && (_DAT_00ec8850 != 0.0)) &&
       ((_DAT_00ec88b0 < 0.2 && (0.0 < _DAT_00ec88b0)))))) &&
     (uVar9 = *(uint *)(param_1 + 100), (uVar9 & 0x1000) == 0)) {
    *(uint *)(param_1 + 100) = uVar9 | 0x1000;
    if ((uVar9 & 0x800) != 0) {
      *(uint *)(param_1 + 100) =
           CONCAT22((short)(uVar9 >> 0x10),CONCAT11((char)((uVar9 | 0x1000) >> 8),(char)uVar9)) |
           0x2000;
    }
  }
  if ((*(uint *)(param_1 + 100) & 0x2000) != 0) {
    iVar8 = FUN_00427670(0,0x80000);
    if (iVar8 == 0) {
      FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),2,2,2,2,2,param_1 + 0x50);
      FUN_00427690(0,0x80000);
    }
    if (((_DAT_00ec884c == 0.0) && (DAT_00ec8830 <= 0.6)) || (290.0 < *(float *)(param_1 + 0x1a0)))
    {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffffdfff;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x60);
  if (((byte)uVar9 & 0xf) != 2) {
    return;
  }
  if ((uVar9 & 0x4000) != 0) {
    return;
  }
  if (local_50 == 0) {
    *(uint *)(param_1 + 0x60) = uVar9 & 0xfffffdff;
  }
  else {
    *(uint *)(param_1 + 0x60) = uVar9 | 0x200;
    if (*(float *)(param_1 + 0x1a0) < 70.0) {
      *(uint *)(param_1 + 0x60) = uVar9 & 0xffffffef | 0x200;
    }
  }
  if ((*(byte *)(*(int *)(param_1 + 0x1e70) + 8) & 8) == 0) {
    if (local_48 == 0) {
      if ((-0.5 <= local_60) || (20.0 <= *(float *)(param_1 + 0x1a0))) {
        *(undefined4 *)(param_1 + 0x18c) = 0x3dcccccd;
      }
      else {
        *(float *)(param_1 + 0x18c) = local_60 * 0.4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
      if (local_34 != 0) {
        *(undefined4 *)(param_1 + 0x18c) = 0x3f000000;
      }
    }
  }
  else {
    fVar1 = (local_40 - -1.0) * 0.5 * 1.176471;
    *(float *)(param_1 + 0x18c) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x18c) < -1.0) {
      *(undefined4 *)(param_1 + 0x18c) = 0xbf800000;
    }
  }
  if ((*(float *)(param_1 + 0x264) <= 0.0) && (0.3 < *(float *)(param_1 + 0x18c))) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x10;
  }
  uVar9 = *(uint *)(param_1 + 100);
  uVar13 = 1;
  if ((uVar9 & 0x200) == 0) {
    uVar13 = local_4c;
  }
  if (uVar13 == 0) {
    uVar9 = uVar9 & 0xfffffff7;
  }
  else {
    uVar9 = uVar9 | 8;
  }
  *(uint *)(param_1 + 100) = uVar9;
  if ((local_48 != 0) || (0.5 < local_40)) {
    uVar9 = *(uint *)(param_1 + 100) & 0xfffffffb;
  }
  else {
    uVar9 = *(uint *)(param_1 + 100) | 4;
  }
  *(uint *)(param_1 + 100) = uVar9;
  if ((uVar13 == 0) || (*(float *)(param_1 + 0x1a0) <= 100.0)) {
    fVar1 = *(float *)(param_1 + 0x1e8) - (float)_DAT_00e22a40 * 0.5;
    *(float *)(param_1 + 0x1e8) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x1e8) = 0;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1e8) - (float)_DAT_00e22a40 * -0.5;
    *(float *)(param_1 + 0x1e8) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
    }
  }
  if ((local_30 != 0) && ((uVar5 & 0x200000) != 0)) {
    FUN_004816b0();
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x800000;
  }
  if ((((*(uint *)(param_1 + 0x60) & 0x800000) != 0) && (local_48 == 0)) && (local_40 <= 0.5)) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff7fffff;
  }
  *(float *)(param_1 + 0x1f14) = *(float *)(param_1 + 0x1f14) - (float)_DAT_00e22a40;
  if (((local_54 != 0) || (local_58 != 0)) && ((*(uint *)(param_1 + 100) & 0x400) != 0)) {
    FUN_00426c80(0x4b,7,0x3f000000,0x3f800000,1);
  }
  if (local_54 == 0) {
    if (local_58 != 0) goto LAB_0046cca5;
  }
  else {
    if (local_58 == 0) {
      uVar7 = 0xbf800000;
      goto LAB_0046ccae;
    }
LAB_0046cca5:
    if (local_54 == 0) {
      uVar7 = 0x3f800000;
      goto LAB_0046ccae;
    }
  }
  uVar7 = 0;
LAB_0046ccae:
  FUN_0046b5a0(param_1,uVar7);
  if ((0.05 <= local_5c) || (0.05 <= -local_5c)) {
    fVar1 = local_5c * 1.25 * local_5c * 1.25;
    if (local_5c < 0.0) {
      fVar1 = -fVar1;
    }
    *(float *)(param_1 + 0x1f0) = -(*(float *)(param_1 + 0x74) * fVar1 * 0.8);
  }
  else {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
  }
  *(float *)(param_1 + 0x2fc) = local_60;
  if ((0.1 < local_60) &&
     (*(float *)(param_1 + 0x1f0) = (1.0 - local_60 * 0.4) * *(float *)(param_1 + 0x1f0),
     0.5 < *(float *)(param_1 + 0x18c))) {
    *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0x18c) - local_60 * -0.4;
  }
  if (((local_60 < -0.1) &&
      (*(float *)(param_1 + 0x1f0) = (1.0 - local_60 * 0.4) * *(float *)(param_1 + 0x1f0),
      (*(uint *)(param_1 + 100) & 0x200) == 0)) && (0.5 < *(float *)(param_1 + 0x18c))) {
    *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0x18c) - local_60 * -0.4;
  }
  if (((*(uint *)(param_1 + 0x60) & 0x400000) != 0) && (*(float *)(param_1 + 0x18c) < 1.2)) {
    *(undefined4 *)(param_1 + 0x18c) = 0x3f99999a;
  }
  *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  return;
}



void FUN_0046ce30(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;

  if (((*(uint *)(param_1 + 0x60) & 0x20) == 0) || (*(int *)(*(int *)(param_1 + 0x1e70) + 0xc) == 0)
     ) {
    if ((*(uint *)(param_1 + 0x60) & 0x80) != 0) {
      FUN_0046b670(param_1);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x22c);
      return;
    }
    *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  }
  else {
    *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
    iVar2 = FUN_0045d350();
    if ((1 < iVar2) && (0.0 < *(float *)(param_1 + 0x130))) {
      fVar3 = (float10)FUN_0047e870();
      fVar1 = (*(float *)(param_1 + 0x130) * 100.0) / (float)((float10)500000.0 / fVar3) - -1.0;
      *(float *)(param_1 + 0x22c) = fVar1;
      if (1.25 < fVar1) {
        *(undefined4 *)(param_1 + 0x22c) = 0x3fa00000;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x22c);
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x22c);
  return;
}



void FUN_0046cf00(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;

  uVar1 = *(uint *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (((uVar1 & 0x20) == 0) || (*(int *)(*(int *)(param_1 + 0x1e70) + 0xc) == 0)) {
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x80) != 0) {
        FUN_0046bb70(param_1);
        if ((*(uint *)(param_1 + 100) & 0x4000000) != 0) {
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x400;
          FUN_0046ab10(param_1);
        }
        if (((byte)*(undefined4 *)(param_1 + 0x60) & 0xf) == 2) {
          FUN_0046b430(param_1);
        }
      }
    }
    else {
      if (((byte)uVar1 & 0xf) != 2) {
        return;
      }
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1ec8);
    }
  }
  else {
    FUN_0046bec0(param_1);
  }
  if (((byte)*(undefined4 *)(param_1 + 0x60) & 0xf) == 2) {
    FUN_0046ce30(param_1);
  }
  if ((*(byte *)(param_1 + 0x60) & 0x80) != 0) {
    *(float *)(param_1 + 0x18c) = *(float *)(param_1 + 0x1ac) * *(float *)(param_1 + 0x18c);
  }
  if (0.0 < *(float *)(param_1 + 0x264)) {
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  fVar3 = *(float *)(param_1 + 0x1f0) * *(float *)(param_1 + 0x22c);
  fVar2 = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x22c);
  *(float *)(param_1 + 0x1f0) = fVar3;
  if (fVar2 < fVar3) {
    *(float *)(param_1 + 0x1f0) = fVar2;
  }
  if (-fVar2 <= *(float *)(param_1 + 0x1f0)) {
    return;
  }
  *(float *)(param_1 + 0x1f0) = -fVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046d040(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 local_20 [8];

  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffffef;
  fVar1 = *(float *)(param_1 + 0x310) - (float)_DAT_00e22a40;
  *(float *)(param_1 + 0x310) = fVar1;
  if (fVar1 <= 0.0) {
    local_20[0] = 0x536e6170;
    FUN_00450c00(param_1,local_20);
    pfVar2 = (float *)(param_1 + 0x288);
    iVar3 = 6;
    do {
      pfVar2[6] = (float)((uint)pfVar2[6] & 0xfffffff7);
      if (0.1 < *pfVar2) {
        *pfVar2 = 0.1;
      }
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffff7ff;
    if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
      FUN_00405cf0(1);
      FUN_0040a120(0);
      FUN_0040b110(param_1);
    }
  }
  return;
}



void FUN_0046d100(int param_1)

{
  uint uVar1;

  uVar1 = *(uint *)(param_1 + 0x60);
  if ((uVar1 & 0x1000) != 0) {
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffe3fff;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xffffefff;
    if (((byte)(uVar1 & 0xffffefff) & 0xf) == 2) {
      if ((uVar1 & 0x4000) == 0) {
        FUN_00474970(param_1,0);
      }
      if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
        FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),0xe,0xe,0xe,0xe,0xe,
                     param_1 + 0x50);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046d170(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  float local_f0;
  float local_ec;
  float local_e8;
  int local_e4;
  int local_e0 [8];
  undefined local_c0 [48];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined local_80 [32];
  undefined local_60 [96];

  uVar2 = *(uint *)(param_1 + 0x60);
  if ((uVar2 & 0x80) != 0) {
    if ((((byte)uVar2 & 0xf) == 2) && ((uVar2 & 0x6000) == 0)) {
      if ((5.0 < *(float *)(param_1 + 0x110)) ||
         (((uVar2 & 0x100) != 0 && (2.0 < *(float *)(param_1 + 0x110))))) {
        *(uint *)(param_1 + 0x60) = uVar2 | 0x1000;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x60) & 0x20000) != 0) {
    FUN_00473f40(param_1,0x3f000000);
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffdffff;
  }
  if (((((*(byte *)(param_1 + 0x60) & 0x80) != 0) &&
       (**(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 2)) &&
      (200.0 < *(float *)(param_1 + 0x1a0))) &&
     (2 < *(int *)(*(int *)(param_1 + 0x1e70) + 0x78) + 1)) {
    local_f0 = *(float *)(param_1 + 0x50);
    local_ec = *(float *)(param_1 + 0x54);
    local_e8 = *(float *)(param_1 + 0x58);
    iVar1 = FUN_00450e70(0x54657374,&local_f0,0x461c4000,0,2,local_80,local_60,local_e0);
    if (0 < iVar1) {
      piVar4 = local_e0;
      do {
        if (*piVar4 != param_1) {
          FUN_0042f860(&local_f0,*piVar4 + 0x50,param_1 + 0x50);
          if (0.0 < *(float *)(param_1 + 0x20) * local_f0 +
                    *(float *)(param_1 + 0x24) * local_ec + *(float *)(param_1 + 0x28) * local_e8) {
            FUN_0046ba30(param_1);
          }
        }
        piVar4 = piVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  if (*(float *)(*(int *)(param_1 + 0x1e70) + 0x74) < 10.0) {
    *(undefined4 *)(param_1 + 0x268) = 0x40a00000;
  }
  if (*(int *)(param_1 + 0x31c) == 0) {
    *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x268) - (float)_DAT_00e22a40;
  }
  else if (*(float *)(param_1 + 0x268) < 5.0) {
    *(undefined4 *)(param_1 + 0x268) = 0x40a00000;
  }
  FUN_00482e60((undefined4 *)(param_1 + 0x50));
  local_e4 = __ftol();
  *(int *)(param_1 + 0x1998) = local_e4;
  if ((((((float)local_e4 - 400.0) * 0.001666667 < 1.0) || ((*(byte *)(param_1 + 0x60) & 0x20) != 0)
       ) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0)) && ((*(uint *)(param_1 + 100) & 2) != 0))
  {
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffffffd;
    FUN_0044eeb0(param_1 + 0xac,local_c0,0);
    *(undefined4 *)(param_1 + 0x50) = local_90;
    *(undefined4 *)(param_1 + 0x54) = local_8c;
    *(undefined4 *)(param_1 + 0x58) = local_88;
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10000000;
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar3 = uVar2 & 0xfff7ffff;
  *(uint *)(param_1 + 0x60) = uVar3;
  if (((uVar2 & 0x20) == 0) && (*(float *)(param_1 + 0x264) <= 0.0)) {
    *(uint *)(param_1 + 0x60) = uVar3 | 0x10;
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar3 = uVar2 & 0xffdfffff;
  *(uint *)(param_1 + 0x60) = uVar3;
  if (((*(float *)(param_1 + 0x7c) * 0.75 < *(float *)(param_1 + 0x1a0)) && ((uVar2 & 0x7000) == 0))
     && ((*(uint *)(param_1 + 100) & 0x4000) == 0)) {
    *(uint *)(param_1 + 0x60) = uVar3 | 0x200000;
  }
  if ((*(float *)(param_1 + 0x1a0) <= *(float *)(param_1 + 0x7c)) ||
     ((*(uint *)(param_1 + 0x60) & 0x800000) == 0)) {
    uVar2 = *(uint *)(param_1 + 0x60) & 0xbfffffff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x60) | 0x40000000;
  }
  *(uint *)(param_1 + 0x60) = uVar2;
  FUN_0046cf00(param_1);
  if (0.0 < *(float *)(param_1 + 0x264)) {
    *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x264) - (float)_DAT_00e22a40;
  }
  FUN_00426910(param_1);
  if ((*(uint *)(param_1 + 0x60) & 0x800) != 0) {
    FUN_0046d040(param_1);
  }
  FUN_0046d100(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046d4c0(int param_1)

{
  int iVar1;
  int iVar2;

  if (*(int *)(param_1 + 0x344) != 0) {
    _DAT_004c7a50 = 0;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + iVar2);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 300);
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0xf4);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    }
    iVar2 = 0xf8;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + iVar2);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x101);
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x40);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x38);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x3c);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    }
  }
  return;
}



void FUN_0046d5c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;

  iVar2 = *param_1;
  while (iVar2 != 0) {
    FUN_00426810(iVar2,0x10000000);
    FUN_00426840(*param_1,0);
    FUN_00426880(*param_1,param_2);
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar2 = *piVar1;
  }
  return;
}



void FUN_0046d610(int *param_1)

{
  int *piVar1;
  int iVar2;

  iVar2 = *param_1;
  while (iVar2 != 0) {
    FUN_00426820(iVar2,0x10000000);
    FUN_00426840(*param_1,0);
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar2 = *piVar1;
  }
  return;
}



int FUN_0046d650(int *param_1)

{
  int iVar1;

  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  while (((*(uint *)(iVar1 + 0x100) & 0x10000000) != 0 &&
         (*(float *)(iVar1 + 0x114) < *(float *)(iVar1 + 0x108)))) {
    iVar1 = param_1[1];
    param_1 = param_1 + 1;
    if (iVar1 == 0) {
      return iVar1;
    }
  }
  return 1;
}



undefined4 FUN_0046d690(void)

{
  return 0;
}



void FUN_0046d6a0(int param_1)

{
  float fVar1;
  int iVar2;

  fVar1 = *(float *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x344);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 0) {
      *(float *)(param_1 + 0x3c8) = fVar1 + *(float *)(param_1 + 0x3c8);
    }
    if (*(int *)(iVar2 + 8) != 0) {
      *(float *)(param_1 + 0x408) = fVar1 + *(float *)(param_1 + 0x408);
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      *(float *)(param_1 + 0x448) = fVar1 + *(float *)(param_1 + 0x448);
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      *(float *)(param_1 + 0x488) = fVar1 + *(float *)(param_1 + 0x488);
    }
    if (*(int *)(iVar2 + 0x14) != 0) {
      *(float *)(param_1 + 0x4c8) = fVar1 + *(float *)(param_1 + 0x4c8);
    }
  }
  return;
}



float10 FUN_0046d730(float param_1,float param_2,float param_3,float param_4,float param_5,
                    float param_6)

{
  float10 fVar1;

  fVar1 = (float10)param_1;
  if ((float10)(param_5 + param_2) < fVar1) {
    fVar1 = (float10)(param_5 + param_2);
  }
  if (fVar1 < (float10)(param_2 - param_6)) {
    fVar1 = (float10)(param_2 - param_6);
  }
  if (fVar1 < (float10)param_3) {
    fVar1 = (float10)param_3;
  }
  if ((float10)param_4 < fVar1) {
    fVar1 = (float10)param_4;
  }
  return fVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046d7a0(float param_1,float param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  short sVar6;
  float fVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  float10 fVar15;
  float local_18;

  iVar8 = (int)param_1;
  fVar7 = (1.0 - (*(float *)(&DAT_004c2be0 +
                            **(int **)(*(int *)((int)param_1 + 0x1e70) + 0x18) * 0x3c) - 50.0) *
                 0.04347826) * 0.5 - -0.75;
  fVar15 = (float10)FUN_0047f810((int)param_1 + 0xac);
  FUN_00427b20(DAT_0050ca8c,DAT_0050ca90,(float)fVar15,*(undefined4 *)((int)param_1 + 0x1a0));
  bVar14 = (*(uint *)((int)param_1 + 0x60) & 0x5800) == 0;
  iVar13 = *(int *)((int)param_1 + 0x1e70);
  iVar10 = FUN_0045d350();
  if (iVar10 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = FUN_0045d3d0(iVar13);
    if (iVar12 < 0) {
      return;
    }
  }
  fVar3 = *(float *)((int)param_1 + 0x1a0) / *(float *)(iVar13 + 0x2c);
  if (((byte)*(undefined4 *)((int)param_1 + 0x60) & 0xf) != 2) {
    (&DAT_0050cae8)[iVar12] = 0;
    (&DAT_004c7a58)[iVar12] = 0x3f800000;
    DAT_0050cb00 = 0;
  }
  iVar13 = (&DAT_0050cae8)[iVar12];
  fVar4 = (float)(&DAT_004c7a70)[iVar13] - 0.1;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  sVar5 = *(short *)(&DAT_0050cae8 + iVar12);
  fVar2 = (float)(&DAT_004c7a74)[iVar13];
  if (fVar3 < fVar4) {
    (&DAT_0050cae8)[iVar12] = iVar13 + -1;
  }
  if (fVar2 - -0.1 < fVar3) {
    (&DAT_0050cae8)[iVar12] = (&DAT_0050cae8)[iVar12] + 1;
  }
  if ((int)(&DAT_0050cae8)[iVar12] < 0) {
    (&DAT_0050cae8)[iVar12] = 0;
  }
  if (3 < (int)(&DAT_0050cae8)[iVar12]) {
    (&DAT_0050cae8)[iVar12] = 3;
  }
  sVar6 = *(short *)(&DAT_0050cae8 + iVar12);
  if (iVar12 == 0) {
    sVar9 = (short)(&DAT_0050cae8)[iVar12] + 0xaa;
  }
  else {
    sVar9 = (short)(&DAT_0050cae8)[iVar12] + 0xb0;
  }
  iVar13 = (int)sVar9;
  if (-1 < iVar13) {
    fVar3 = *(float *)(&DAT_004c7a88 + sVar6 * 8);
    fVar4 = *(float *)(&DAT_004c7a8c + sVar6 * 8);
    iVar11 = FUN_004816b0();
    if ((float)iVar11 * 4.656613e-10 < 0.05) {
      FUN_004816b0();
    }
    fVar3 = fVar7 * (fVar3 + fVar4) * 0.5;
    puVar1 = (uint *)((int)param_1 + 100);
    if ((*puVar1 & 0x4000) == 0) {
      param_1 = fVar3;
      if ((*puVar1 & 0x200) != 0) {
        param_1 = 0.25;
        iVar13 = (-(uint)(iVar12 != 0) & 6) + 0xaf;
      }
    }
    else {
      param_1 = fVar3 * 1.5;
    }
    if (bVar14) {
      FUN_00426d10(iVar13,6,param_1,param_2,iVar8 + 0x50,1,0,0x41a00000,0x43fa0000);
    }
  }
  if (((*(uint *)(iVar8 + 100) & 0x2000) != 0) && (DAT_0050cb00 == 0)) {
    DAT_0050cb00 = 1;
    FUN_004816b0();
    if (bVar14) {
      FUN_00426d10(0x72,7,0x3e800000,param_2,iVar8 + 0x50,0,1,0x41200000,0x43fa0000);
    }
  }
  if ((0.5 < *(float *)(iVar8 + 0x18c)) && (iVar10 == 1)) {
    local_18 = param_2 * 1.3;
    if (1.0 < local_18) {
      local_18 = 1.0;
    }
    if ((*(uint *)(iVar8 + 100) & 0x200) != 0) {
      local_18 = local_18 * 0.3;
    }
    if (bVar14) {
      FUN_00426d10((-(uint)(iVar12 != 0) & 6) + 0xae,6,fVar7 * 0.2,local_18,iVar8 + 0x50,1,0,
                   0x41200000,0x43fa0000);
    }
  }
  if ((*(uint *)(iVar8 + 0x60) & 0x200) == 0) {
    if (((float)(&DAT_004c7a58)[iVar12] == 0.0) && (bVar14)) {
      FUN_00426d10(0x7f,6,fVar7 * 0.25,param_2,iVar8 + 0x50,0,1,0x41200000,0x43fa0000);
    }
    fVar3 = (float)(&DAT_004c7a58)[iVar12];
    fVar4 = (float)_DAT_00e22a40;
    (&DAT_004c7a58)[iVar12] = fVar3 + fVar4;
    if (1.0 < fVar3 + fVar4) {
      (&DAT_004c7a58)[iVar12] = 0x3f800000;
    }
  }
  else {
    if (((&DAT_004c7a58)[iVar12] == 0x3f800000) && (bVar14)) {
      FUN_00426d10(0x80,6,fVar7 * 0.25,param_2,iVar8 + 0x50,0,1,0x41200000,0x43fa0000);
    }
    fVar3 = (float)(&DAT_004c7a58)[iVar12];
    fVar4 = (float)_DAT_00e22a40;
    (&DAT_004c7a58)[iVar12] = fVar3 - fVar4;
    if (fVar3 - fVar4 < 0.0) {
      (&DAT_004c7a58)[iVar12] = 0;
    }
  }
  if (sVar5 <= sVar6) {
    if (sVar5 < sVar6) {
      iVar13 = FUN_004816b0();
      iVar10 = FUN_004816b0();
      if (bVar14) {
        FUN_00426d10(0x7a,6,fVar7 * ((float)iVar13 * 4.656613e-10 * 0.1 - -0.15),
                     ((float)iVar10 * 4.656613e-10 * 0.3 - -0.5) * param_2,iVar8 + 0x50,0,1,
                     0x41200000,0x43fa0000);
      }
    }
    return;
  }
  FUN_004816b0();
  FUN_004816b0();
  return;
}

#endif
