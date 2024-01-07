#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_0046dcd0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;

  iVar4 = (int)param_1;
  fVar1 = 0.0;
  if (*(float *)((int)param_1 + 0x2fc) < 0.0) {
    fVar1 = *(float *)((int)param_1 + 0x2fc) * -15.0;
  }
  if (*(float *)((int)param_1 + 0x1a0) < 100.0) {
    fVar1 = 0.0;
  }
  fVar3 = *(float *)((int)param_1 + 0x204) * 0.02222222;
  fVar1 = (fVar1 - *(float *)((int)param_1 + 0x19b8)) * 0.1 + *(float *)((int)param_1 + 0x19b8);
  fVar2 = -fVar3;
  *(float *)((int)param_1 + 0x19b8) = fVar1;
  if ((fVar3 < 0.0) || (2.0 < fVar3)) {
    param_1 = 0.0;
  }
  else {
    param_1 = fVar3;
    if (1.0 < fVar3) {
      param_1 = 2.0 - fVar3;
    }
  }
  if ((fVar2 < 0.0) || (2.0 < fVar2)) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    fVar2 = 2.0 - fVar2;
  }
  if (*(int *)(*(int *)(iVar4 + 0x344) + 4) != 0) {
    FUN_00431390(iVar4 + 0x390,(param_1 * 0.5 - -1.0) * fVar1,0x3f800000,0,0,iVar4 + 0x390);
    *(float *)(iVar4 + 0x3c8) = fVar1 * 0.01 + *(float *)(iVar4 + 0x3c8);
  }
  if (*(int *)(*(int *)(iVar4 + 0x344) + 8) != 0) {
    FUN_00431390(iVar4 + 0x3d0,(fVar2 * 0.5 - -1.0) * fVar1,0x3f800000,0,0,iVar4 + 0x3d0);
    *(float *)(iVar4 + 0x408) = fVar1 * 0.01 + *(float *)(iVar4 + 0x408);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046dea0(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined local_4c [12];
  undefined local_40 [16];
  undefined local_30 [48];

  iVar3 = (int)param_1;
  if (((*(byte *)((int)param_1 + 0x60) & 0x20) != 0) ||
     ((*(uint *)((int)param_1 + 100) & 0x4000000) != 0)) {
    if ((*(uint *)((int)param_1 + 100) & 0x8000) == 0) {
      if ((*(uint *)((int)param_1 + 100) & 0x10000) == 0) {
        param_1 = 0.0;
        *(undefined4 *)(iVar3 + 0x340) = 0;
        *(undefined4 *)(iVar3 + 0x33c) = 0;
        *(undefined4 *)(iVar3 + 0x338) = 0;
      }
      else {
        param_1 = 1.0;
      }
    }
    else {
      param_1 = -1.0;
    }
    if (param_1 != 0.0) {
      fVar4 = *(float *)(iVar3 + 0x340) - (float)_DAT_00e22a40 * -0.5;
      *(float *)(iVar3 + 0x340) = fVar4;
      if (1.0 < fVar4) {
        *(undefined4 *)(iVar3 + 0x340) = 0x3f800000;
      }
      iVar5 = 1;
      if (param_1 <= 0.0) {
        iVar5 = 2;
      }
      iVar2 = iVar5 * 0x40 + 0x350 + iVar3;
      *(float *)(iVar3 + 0x338) =
           *(float *)(iVar3 + 0x338) -
           param_1 * (float)_DAT_00e22a40 * *(float *)(iVar3 + 0x340) * -360.0;
      FUN_0044bb10(local_40,iVar2);
      FUN_0042fa80(&local_64,local_30,0,local_40);
      FUN_0042f7d0(&local_64,local_30);
      FUN_0042f7b0(&local_64,0,0x3f800000,0);
      FUN_0042f9b0(&local_64);
      iVar1 = (iVar5 + 0xe) * 0x40 + iVar3;
      FUN_0042f7d0(local_4c,iVar1);
      FUN_00431390(iVar2,*(undefined4 *)(iVar3 + 0x338),local_64,local_60,local_5c,iVar2);
      FUN_0042f7d0(iVar1,local_4c);
      iVar5 = *(int *)(*(int *)(iVar3 + 0x344) + iVar5 * 4);
      if (iVar5 != 0) {
        FUN_00431640(iVar5,iVar2);
      }
      iVar5 = iVar3 + 0x490;
      *(float *)(iVar3 + 0x33c) =
           *(float *)(iVar3 + 0x33c) -
           param_1 * (float)_DAT_00e22a40 * *(float *)(iVar3 + 0x340) * -600.0;
      FUN_0044bb10(local_40,iVar5);
      FUN_0042fa80(&local_58,local_30,0,local_40);
      FUN_0042f7d0(&local_58,local_30);
      FUN_0042f7b0(&local_58,param_1 * 0.5,0x3f800000,0);
      FUN_0042f9b0(&local_58);
      FUN_0042f7d0(local_4c,iVar3 + 0x4c0);
      FUN_00431390(iVar5,*(undefined4 *)(iVar3 + 0x33c),local_58,local_54,local_50,iVar5);
      FUN_0042f7d0(iVar3 + 0x4c0,local_4c);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x344) + 0x14);
      if (iVar3 != 0) {
        FUN_00431640(iVar3,iVar5);
      }
    }
  }
  return;
}



void FUN_0046e150(int param_1)

{
  int iVar1;

  if (((*(byte *)(param_1 + 0x60) & 0x20) != 0) || ((*(uint *)(param_1 + 100) & 0x4000000) != 0)) {
    if ((*(uint *)(param_1 + 100) & 0x8000) == 0) {
      if ((*(uint *)(param_1 + 100) & 0x10000) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 8);
        if (iVar1 != 0) {
          FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x18);
        if (iVar1 != 0) {
          FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x2c);
        if (iVar1 != 0) {
          FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0xfc);
        if (iVar1 != 0) {
          FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x110);
        if (iVar1 != 0) {
          FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        }
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 4);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x18);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x28);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0xf8);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x10c);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046e2c0(float param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float local_24;
  undefined local_20 [4];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  fVar4 = param_1;
  if (*(int *)((int)param_1 + 0x344) != 0) {
    pfVar1 = (float *)((int)param_1 + 0x199c);
    iVar3 = **(int **)(*(int *)((int)param_1 + 0x1e70) + 0x18);
    iVar6 = 4;
    pfVar5 = pfVar1;
    do {
      iVar6 = iVar6 + -1;
      *pfVar5 = (float)_DAT_00e22a40 + *pfVar5;
      pfVar5 = pfVar5 + 1;
    } while (iVar6 != 0);
    if ((*(uint *)((int)param_1 + 0x60) & 0x1000000) != 0) {
      *(undefined4 *)((int)param_1 + 0x19ac) = 0x3f800000;
    }
    if (*(float *)((int)param_1 + 0x1a0) <= 200.0) {
      fVar2 = -0.5;
    }
    else {
      fVar2 = 0.5;
    }
    *(float *)((int)param_1 + 0x19ac) =
         *(float *)((int)param_1 + 0x19ac) - (float)_DAT_00e22a40 * fVar2;
    if (0.4 <= *(float *)((int)param_1 + 0x19ac)) {
      if (1.0 < *(float *)((int)param_1 + 0x19ac)) {
        *(undefined4 *)((int)param_1 + 0x19ac) = 0x3f800000;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x19ac) = 0x3ecccccd;
    }
    local_18 = *(float *)((int)param_1 + 0x1d0) + *(float *)((int)param_1 + 0x1dc);
    local_14 = *(float *)((int)param_1 + 0x1d4) + *(float *)((int)param_1 + 0x1e0);
    local_10 = *(float *)((int)param_1 + 0x1d8) + *(float *)((int)param_1 + 0x1e4);
    local_24 = local_10 * local_10 + local_14 * local_14 + local_18 * local_18;
    if (local_24 <= 0.5) {
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = 0.0;
    }
    else {
      FUN_0042f9b0(&local_18);
    }
    fVar2 = *(float *)((int)fVar4 + 0x19ac) * 0.4;
    if (*(int *)(*(int *)((int)fVar4 + 0x344) + 4) != 0) {
      FUN_0042f380(*pfVar1 * 72.0,&param_1,local_20);
      iVar6 = (int)fVar4 + 0x3c0;
      FUN_0042fa80(iVar6,iVar6,param_1 * fVar2,(int)fVar4 + 0x3b0);
      if (*(float *)((int)fVar4 + 0x398) * local_10 +
          *(float *)((int)fVar4 + 0x390) * local_18 + *(float *)((int)fVar4 + 0x394) * local_14 <
          0.0) {
        FUN_0042fa80(iVar6,iVar6,local_24 / (local_24 - -30.0),&local_18);
      }
      local_1c = param_1 * fVar2;
    }
    fVar2 = *(float *)((int)fVar4 + 0x19ac) * 0.4;
    if (*(int *)(*(int *)((int)fVar4 + 0x344) + 8) != 0) {
      FUN_0042f380(*(float *)((int)fVar4 + 0x19a0) * 79.2,&param_1,local_20);
      iVar6 = (int)fVar4 + 0x400;
      FUN_0042fa80(iVar6,iVar6,param_1 * fVar2,(int)fVar4 + 0x3f0);
      if (0.0 < *(float *)((int)fVar4 + 0x3d8) * local_10 +
                *(float *)((int)fVar4 + 0x3d4) * local_14 +
                *(float *)((int)fVar4 + 0x3d0) * local_18) {
        FUN_0042fa80(iVar6,iVar6,local_24 / (local_24 - -30.0),&local_18);
      }
      local_24 = param_1 * fVar2;
    }
    fVar2 = *(float *)((int)fVar4 + 0x19ac);
    if (*(int *)(*(int *)((int)fVar4 + 0x344) + 0x14) != 0) {
      FUN_0042f380(*(float *)((int)fVar4 + 0x19a4) * 86.4,&param_1,local_20);
      FUN_0042fa80((int)fVar4 + 0x4c0,(int)fVar4 + 0x4c0,param_1 * fVar2 * 0.2,(int)fVar4 + 0x4b0);
    }
    if (*(int *)(*(int *)((int)fVar4 + 0x344) + 0xc) != 0) {
      FUN_0042fa80((int)fVar4 + 0x440,(int)fVar4 + 0x440,(local_1c + local_1c + local_24) * 0.5,
                   (int)fVar4 + 0x430);
    }
    if (*(int *)(*(int *)((int)fVar4 + 0x344) + 0x10) != 0) {
      FUN_0042fa80((int)fVar4 + 0x480,(int)fVar4 + 0x480,(local_24 + local_24 + local_1c) * 0.5,
                   (int)fVar4 + 0x470);
    }
    FUN_0046dcd0(fVar4);
    FUN_0046dea0(fVar4);
    if (**(int **)(*(int *)((int)fVar4 + 0x1e70) + 0x18) != 0xe) {
      fVar2 = *(float *)(&DAT_004c708c + iVar3 * 0x6c) * 1.5;
      if (fVar2 < 0.0) {
        fVar2 = -fVar2;
      }
      if (*(int *)(*(int *)((int)fVar4 + 0x344) + 0x14) != 0) {
        local_c = *(float *)((int)fVar4 + 0x50) - *(float *)((int)fVar4 + 0x4c0);
        local_8 = *(float *)((int)fVar4 + 0x54) - *(float *)((int)fVar4 + 0x4c4);
        local_4 = *(float *)((int)fVar4 + 0x58) - *(float *)((int)fVar4 + 0x4c8);
        if (fVar2 * fVar2 < local_4 * local_4 + local_8 * local_8 + local_c * local_c) {
          fVar7 = (float10)FUN_0042f9b0(&local_c);
          FUN_0042fa80((int)fVar4 + 0x4c0,(int)fVar4 + 0x4c0,(float)(fVar7 - (float10)fVar2),
                       &local_c);
        }
      }
    }
  }
  return;
}



void FUN_0046e750(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;

  iVar3 = param_1;
  if ((DAT_00e27130 < 10) && (param_1 != 0)) {
    iVar2 = FUN_00431770(param_1);
    if (iVar2 == 0x3064) {
      piVar5 = (int *)(param_1 + 0x14);
      param_1 = 0;
      uVar6 = DAT_00e27130;
      if (0 < *piVar5) {
        while (uVar6 < 10) {
          iVar2 = **(int **)(*(int *)(iVar3 + 0x18) + param_1 * 4);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
            bVar1 = false;
            iVar4 = 0;
            piVar5 = &DAT_00e27140;
            do {
              if ((int)uVar6 <= iVar4) break;
              if (*(int *)(*piVar5 + 8) == *(int *)(iVar2 + 8)) {
                bVar1 = true;
              }
              iVar4 = iVar4 + 1;
              piVar5 = piVar5 + 1;
              uVar6 = DAT_00e27130;
            } while (!bVar1);
            if (!bVar1) {
              (&DAT_00e27140)[uVar6] = iVar2;
              uVar6 = uVar6 + 1;
              DAT_00e27130 = uVar6;
            }
          }
          param_1 = param_1 + 1;
          if (*(int *)(iVar3 + 0x14) <= param_1) {
            return;
          }
        }
      }
    }
    else {
      uVar6 = FUN_00431770(param_1);
      if ((uVar6 & 0x4000) != 0) {
        iVar2 = 0;
        iVar3 = FUN_00431780(param_1);
        if (0 < iVar3) {
          do {
            FUN_0046e750(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4));
            iVar2 = iVar2 + 1;
            iVar3 = FUN_00431780(param_1);
          } while (iVar2 < iVar3);
        }
      }
    }
  }
  return;
}



void FUN_0046e850(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  if ((DAT_00e27134 < 5) && (param_1 != 0)) {
    iVar2 = FUN_00431770(param_1);
    if (iVar2 == 0x3064) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          piVar1 = *(int **)(*(int *)(param_1 + 0x18) + iVar2 * 4);
          if (*piVar1 != 0) {
            DAT_0050cb10 = (DAT_0050cb10 + 1) % DAT_00e27130;
            *piVar1 = (&DAT_00e27140)[DAT_0050cb10];
            DAT_00e27134 = DAT_00e27134 + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x14));
        return;
      }
    }
    else {
      uVar3 = FUN_00431770(param_1);
      if ((uVar3 & 0x4000) != 0) {
        iVar4 = 0;
        iVar2 = FUN_00431780(param_1);
        if (0 < iVar2) {
          do {
            FUN_0046e850(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 4));
            iVar4 = iVar4 + 1;
            iVar2 = FUN_00431780(param_1);
          } while (iVar4 < iVar2);
        }
      }
    }
  }
  return;
}



void FUN_0046e910(undefined4 param_1,undefined4 param_2)

{
  DAT_00e27130 = 0;
  DAT_00e27134 = 0;
  FUN_0046e750(param_2);
  if (0 < DAT_00e27130) {
    FUN_0046e850(param_1);
  }
  return;
}



void FUN_0046e950(int param_1,undefined4 param_2,int param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 local_50 [4];
  float local_40 [4];
  float local_30 [4];
  undefined local_20 [16];
  undefined local_10 [16];

  if (((DAT_00e28a00 != 0) && (DAT_00e28764 != 0)) &&
     (iVar2 = FUN_0046d650(DAT_00e28764), iVar2 != 0)) {
    local_50[0] = 0x42697473;
    FUN_00450c50(0x54657374,local_50);
    *(undefined4 *)(param_1 + 0x324) = param_2;
    FUN_004313d0(local_40);
    pfVar5 = local_30;
    iVar2 = 3;
    do {
      iVar3 = FUN_004816b0();
      pfVar5[-4] = (float)iVar3 * 4.656613e-10 * 0.99 - -0.01;
      uVar4 = FUN_004816b0();
      if ((uVar4 & 1) != 0) {
        pfVar5[-4] = -pfVar5[-4];
      }
      iVar3 = FUN_004816b0();
      *pfVar5 = (float)iVar3 * 4.656613e-10 * 0.99 - -0.01;
      uVar4 = FUN_004816b0();
      if ((uVar4 & 1) != 0) {
        *pfVar5 = -*pfVar5;
      }
      pfVar5 = pfVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_0042f9f0(local_20,local_40,local_30);
    FUN_0042f9f0(local_30,local_20,local_40);
    FUN_0042f9b0(local_40);
    FUN_0042f9b0(local_30);
    FUN_0042f9b0(local_20);
    fVar1 = param_4 * 1.5 - param_4;
    iVar2 = FUN_004816b0(local_40);
    FUN_0042fa50(local_40,(float)iVar2 * 4.656613e-10 * fVar1 + param_4);
    iVar2 = FUN_004816b0(local_30);
    FUN_0042fa50(local_30,(float)iVar2 * 4.656613e-10 * fVar1 + param_4);
    iVar2 = FUN_004816b0(local_20);
    FUN_0042fa50(local_20,(float)iVar2 * 4.656613e-10 * fVar1 + param_4);
    FUN_0046d610(DAT_00e28764);
    FUN_0046d5c0(DAT_00e28764,0x40400000);
    if (-1 < *(int *)(param_1 + 0x324)) {
      param_3 = (*(int *)(param_1 + 0x324) + 0xe) * 0x40 + param_1;
    }
    FUN_0042f7d0(local_10,param_3);
    if (*(int *)(param_1 + 0x344) == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x348);
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x344) + 4);
    }
    FUN_0046e910(DAT_00e28a00,uVar6);
    FUN_0044bb10(&DAT_00e289c0,local_40);
    FUN_00431640(DAT_00e28a00,local_40);
    if (DAT_00e28a00 != 0) {
      FUN_00431a50(DAT_00e28a00,2,3,0x10,2);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046ebf0(int param_1)

{
  int iVar1;
  undefined local_40 [48];
  undefined local_10 [16];

  if ((DAT_00e28a00 != 0) && (DAT_00e28764 != 0)) {
    iVar1 = FUN_0046d650(DAT_00e28764);
    if (iVar1 != 0) {
      if (DAT_00e28a00 != 0) {
        FUN_00431a50(DAT_00e28a00,2,0xfffffffc,0x10,3);
      }
      *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
      _DAT_00e289f8 = 0xc7435000;
      return;
    }
    FUN_0044bb10(local_40,&DAT_00e289c0);
    if (-1 < *(int *)(param_1 + 0x324)) {
      FUN_0042f7d0(local_10,(*(int *)(param_1 + 0x324) + 0xe) * 0x40 + param_1);
    }
    FUN_0044bb10(&DAT_00e289c0,local_40);
    FUN_00431640(DAT_00e28a00,local_40);
    if (DAT_00e28a00 != 0) {
      FUN_00431a50(DAT_00e28a00,2,3,0x10,2);
    }
  }
  return;
}



void FUN_0046ecd0(float param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  if (**(int **)(*(int *)((int)param_1 + 0x1e70) + 0x18) != 0xe) {
    local_24 = *param_2;
    local_20 = param_2[1];
    local_1c = param_2[2];
    FUN_0042f860(&local_18,&local_24,(int)param_1 + 0x3c0);
    FUN_0042f860(&local_c,&local_24,(int)param_1 + 0x400);
    iVar4 = (int)param_1 + 0x390;
    iVar1 = (int)param_1 + 0x3d0;
    fVar2 = *(float *)((int)param_1 + 0x398) * local_10 +
            *(float *)((int)param_1 + 0x394) * local_14 +
            local_18 * *(float *)((int)param_1 + 0x390);
    fVar3 = *(float *)((int)param_1 + 0x3d8) * local_4 +
            *(float *)((int)param_1 + 0x3d4) * local_8 + local_c * *(float *)((int)param_1 + 0x3d0);
    if (fVar3 * fVar3 <= fVar2 * fVar2) {
      param_1 = -(*(float *)((int)param_1 + 0x1e64) * 0.5 + fVar3);
      iVar4 = iVar1;
      if (param_1 <= 0.0) {
        return;
      }
    }
    else {
      param_1 = -(fVar2 - *(float *)((int)param_1 + 0x1e64) * 0.5);
      if (0.0 <= param_1) {
        return;
      }
    }
    FUN_0042fa80(param_3,&local_24,param_1,iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046ee20(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x344);
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0x60) & 0x10000000) == 0) {
      if (*(int *)(iVar1 + 0x104) != 0) {
        FUN_00431a50(*(int *)(iVar1 + 0x104),2,0xfffffffc,0x10,3);
      }
    }
    else {
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_0046ecd0(param_1,param_1 + 0x13c0,param_1 + 0x13c0);
        iVar1 = param_1 + 0x1390;
        FUN_00431450(iVar1,0x40400000,0x40400000,0x40400000,iVar1);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x104),iVar1);
      }
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xefffffff;
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x104);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      if (_DAT_00e22a38 - -0.75 < (double)_DAT_0050cb14) {
        iVar1 = FUN_004816b0();
        _DAT_0050cb14 = ((float)iVar1 * 4.656613e-10 * 0.25 - -0.5) + (float)_DAT_00e22a38;
      }
      if (_DAT_0050cb14 < (float)_DAT_00e22a38) {
        iVar1 = FUN_004816b0(0x3f19999a,param_1 + 0x50,0,0,0x41200000,0x43fa0000);
        FUN_00426d10(0x3c,5,(float)iVar1 * 4.656613e-10 * 0.2 - -0.3);
        iVar1 = FUN_004816b0();
        _DAT_0050cb14 = ((float)iVar1 * 4.656613e-10 * 0.25 - -0.5) + (float)_DAT_00e22a38;
      }
    }
    if ((*(uint *)(param_1 + 0x60) & 0x20000000) == 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x108);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
    }
    else {
      if (*(int *)(*(int *)(param_1 + 0x344) + 4) != 0) {
        FUN_0046ecd0(param_1,param_1 + 0x1400,param_1 + 0x1400);
        iVar1 = param_1 + 0x13d0;
        FUN_00431450(iVar1,0x40000000,0x40000000,0x40000000,iVar1);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x108),iVar1);
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x344) + 0x108);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xdfffffff;
      if (_DAT_0050cb14 < (float)_DAT_00e22a38) {
        iVar1 = FUN_004816b0(0x3f19999a,param_1 + 0x50,0,0,0x41200000,0x43fa0000);
        FUN_00426d10(0x3c,5,(float)iVar1 * 4.656613e-10 * 0.2 - -0.3);
        iVar1 = FUN_004816b0();
        _DAT_0050cb14 = ((float)iVar1 * 4.656613e-10 * 0.25 - -0.5) + (float)_DAT_00e22a38;
        return;
      }
    }
  }
  return;
}



void FUN_0046f0e0(int param_1,int param_2,float param_3,float param_4,int param_5,undefined4 param_6
                 )

{
  float10 fVar1;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [32];

  FUN_0042f7d0(&local_7c,param_1 + 0x30);
  FUN_0042f7d0(local_58,param_2 + 0x30);
  param_5 = param_5 * 0x6c;
  local_70 = *(float *)(&DAT_004c70ac + param_5) * param_3;
  local_6c = *(undefined4 *)(&DAT_004c70b0 + param_5);
  local_68 = *(undefined4 *)(&DAT_004c70b4 + param_5);
  local_60 = *(undefined4 *)(&DAT_004c70bc + param_5);
  local_64 = *(float *)(&DAT_004c70b8 + param_5) * param_3;
  local_5c = *(float *)(&DAT_004c70c0 + param_5) * param_4;
  FUN_00430980(&local_70,&local_70,param_1);
  FUN_0042f830(&local_7c,&local_70,&local_7c);
  FUN_00430980(&local_64,&local_64,param_2);
  FUN_0042f830(local_58,&local_64,local_58);
  FUN_0042f860(local_4c,&local_7c,local_58);
  fVar1 = (float10)FUN_0042f8c0(local_4c);
  FUN_0042f9b0(local_4c);
  FUN_00431100(local_40,local_7c,local_78,local_74);
  FUN_0042f7d0(local_30,local_4c);
  FUN_0042f7b0(local_20,0,0,0x3f800000);
  FUN_0042f9f0(local_40,local_30,local_20);
  FUN_0042f9f0(local_20,local_40,local_30);
  FUN_00431450(local_40,0x3b83126f,(float)fVar1 * 0.01,0x3b83126f,local_40);
  FUN_0044bb10(param_6,local_40);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0046f2c0(int param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  float local_48;
  float local_44;
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [32];

  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (param_1 == 0) {
    uVar9 = *(undefined4 *)(param_2 + 0xf0);
  }
  else {
    param_2 = *(int *)(param_1 + 0x344);
    if (param_2 == 0) {
      return;
    }
    uVar9 = **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18);
    if (((*(uint *)(param_1 + 0x60) & 0x800000) != 0) || ((*(uint *)(param_1 + 100) & 0x2000) != 0))
    {
      bVar5 = true;
    }
    iVar6 = 0;
    pbVar11 = (byte *)(param_1 + 0x2a0);
    do {
      if ((*pbVar11 & 4) != 0) {
        if (iVar6 < 3) {
          bVar3 = true;
        }
        else {
          bVar4 = true;
        }
      }
      iVar6 = iVar6 + 1;
      pbVar11 = pbVar11 + 4;
    } while (iVar6 < 6);
  }
  local_48 = 0.0;
  local_44 = 0.0;
  if (0.0 <= param_3) {
    local_48 = param_3;
  }
  if (0.0 <= param_4) {
    local_44 = param_4;
  }
  if ((((DAT_0050c048 & 0x100) != 0) && (DAT_0050c040 != 0)) && ((DAT_00e98e94 & 0x1000) != 0)) {
    local_48 = 1.0;
    local_44 = 1.0;
    bVar5 = false;
  }
  if (param_1 != 0) {
    fVar1 = *(float *)(param_1 + 0x18c);
    fVar2 = *(float *)(param_1 + 0x18c);
    if ((*(byte *)(param_1 + 100) & 8) != 0) {
      fVar1 = fVar1 * 0.5;
      fVar2 = fVar2 * 0.5;
    }
    if (bVar3) {
      fVar1 = fVar1 * 0.2;
    }
    if (bVar4) {
      fVar2 = fVar2 * 0.2;
    }
    local_48 = (fVar1 + *(float *)(param_1 + 0x330)) * 0.5;
    local_44 = (fVar2 + *(float *)(param_1 + 0x334)) * 0.5;
    *(float *)(param_1 + 0x330) = local_48;
    *(float *)(param_1 + 0x334) = local_44;
  }
  iVar6 = *(int *)(param_2 + 0x70);
  if (iVar6 != 0) {
    iVar7 = FUN_004816b0();
    param_3 = (float)iVar7 * 4.656613e-10 * 0.2 - -1.0;
    FUN_004816b0();
    param_4 = (float)_DAT_00e22a38 * 30.0;
    if (local_48 < 0.25) {
      param_3 = local_48 * param_3;
    }
    switch(uVar9) {
    case 4:
    case 6:
    case 0x10:
      param_3 = 1.0;
      param_4 = 0.0;
      FUN_004816b0();
      break;
    case 8:
    case 10:
      param_4 = 0.0;
    }
    FUN_00431020(local_40,0,0,param_4);
    FUN_0042fa50(local_40,param_3,local_40);
    FUN_0042fa50(local_20,param_3,local_20);
    if (param_1 != 0) {
      FUN_0044bb10(param_1 + 0xa50,local_40);
    }
    FUN_00431640(iVar6,local_40);
    FUN_00431a50(iVar6,2,3,0x10,2);
    uVar8 = __ftol();
    FUN_0042b640(iVar6,0,0,0xff,0xff,0xff,uVar8);
  }
  iVar6 = *(int *)(param_2 + 0xa8);
  if (iVar6 != 0) {
    iVar7 = FUN_004816b0();
    param_3 = (float)iVar7 * 4.656613e-10 * 0.2 - -1.0;
    FUN_004816b0();
    param_4 = (float)_DAT_00e22a38 * 30.0;
    if (local_44 < 0.25) {
      param_3 = local_44 * param_3;
    }
    switch(uVar9) {
    case 4:
    case 6:
    case 0x10:
      param_3 = 1.0;
      param_4 = 0.0;
      FUN_004816b0();
      break;
    case 8:
    case 10:
      param_4 = 0.0;
    }
    FUN_00431020(local_40,0,0,param_4);
    FUN_0042fa50(local_40,param_3,local_40);
    FUN_0042fa50(local_20,param_3,local_20);
    if (param_1 != 0) {
      FUN_0044bb10(param_1 + 0xa50,local_40);
    }
    FUN_00431640(iVar6,local_40);
    FUN_00431a50(iVar6,2,3,0x10,2);
    uVar9 = __ftol();
    FUN_0042b640(iVar6,0,0,0xff,0xff,0xff,uVar9);
  }
  iVar6 = *(int *)(param_2 + 0x74);
  if (iVar6 != 0) {
    iVar7 = FUN_0042b560(iVar6);
    FUN_004816b0();
    iVar10 = FUN_004816b0();
    FUN_004816b0();
    param_3 = local_48 * ((float)iVar10 * 4.656613e-10 * 0.25 - -1.0);
    if (bVar5) {
      iVar10 = FUN_004816b0();
      param_3 = (float)iVar10 * 4.656613e-10 * 0.6999998 - -3.5;
    }
    FUN_004816b0();
    FUN_00431020(local_40,0,0,0);
    FUN_0042fa50(local_30,param_3,local_30);
    if (param_1 != 0) {
      FUN_0044bb10(param_1 + 0xa90,local_40);
    }
    FUN_00431640(iVar6,local_40);
    FUN_00431a50(iVar6,2,3,0x10,2);
    if (iVar7 != 0) {
      FUN_0042b5e0(iVar7,0,0,0xff,0xff,0xff,0xff);
      FUN_0044fc00(iVar7,0x3de147ae,0);
    }
  }
  iVar6 = *(int *)(param_2 + 0xac);
  if (iVar6 != 0) {
    iVar7 = FUN_0042b560(iVar6);
    FUN_004816b0();
    iVar10 = FUN_004816b0();
    FUN_004816b0();
    param_3 = local_44 * ((float)iVar10 * 4.656613e-10 * 0.25 - -1.0);
    if (bVar5) {
      iVar10 = FUN_004816b0();
      param_3 = (float)iVar10 * 4.656613e-10 * 0.6999998 - -3.5;
    }
    FUN_004816b0();
    FUN_00431020(local_40,0,0,0);
    FUN_0042fa50(local_30,param_3,local_30);
    if (param_1 != 0) {
      FUN_0044bb10(param_1 + 0xe10,local_40);
    }
    FUN_00431640(iVar6,local_40);
    FUN_00431a50(iVar6,2,3,0x10,2);
    if (iVar7 != 0) {
      FUN_0042b5e0(iVar7,0,0,0xff,0xff,0xff,0xff);
      FUN_0044fc00(iVar7,0x3de147ae,0);
    }
  }
  return;
}



void FUN_0046f9a0(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8 [3];
  undefined local_ac [12];
  int local_a0 [8];
  undefined local_80 [32];
  undefined local_60 [96];

  iVar6 = 0;
  local_b8[1] = 0;
  local_b8[0] = 0;
  if (*(int *)(param_1 + 0x344) != 0) {
    pbVar7 = (byte *)(param_1 + 0x2a0);
    do {
      if ((*pbVar7 & 8) != 0) {
        local_b8[iVar6 / 3] = 1;
      }
      iVar6 = iVar6 + 1;
      pbVar7 = pbVar7 + 4;
    } while (iVar6 < 6);
    iVar6 = 0;
    do {
      if ((local_b8[iVar6] != 0) || (*(int *)(param_1 + 0x314 + iVar6 * 4) != 0)) {
        iVar3 = (-iVar6 + 2) * 0x40;
        local_c4 = *(undefined4 *)(iVar3 + 900 + param_1);
        iVar3 = iVar3 + param_1;
        local_c8 = *(undefined4 *)((-iVar6 + 0x10) * 0x40 + param_1);
        local_c0 = *(undefined4 *)(iVar3 + 0x388);
        FUN_0042fa80(&local_c8,&local_c8,0xc0000000,iVar3 + 0x360);
        if (**(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 0xe) {
          local_bc = 0xc0000000;
          if (iVar6 != 0) {
            local_bc = 0x40000000;
          }
          FUN_0042fa80(&local_c8,&local_c8,local_bc,iVar3 + 0x350);
        }
        FUN_0042fa50(local_ac,0xc1a00000,iVar3 + 0x360);
        if (local_b8[iVar6] != 0) {
          iVar3 = *(int *)(param_1 + 0x314 + iVar6 * 4);
          puVar1 = (undefined4 *)(param_1 + 0x314 + iVar6 * 4);
          if (iVar3 == 0) {
            uVar4 = FUN_0046a5f0(6,0,0x447a0000,&local_c8,0x3f800000);
            *puVar1 = uVar4;
            FUN_0046a970(uVar4,puVar1);
          }
          else {
            FUN_0046a960(iVar3,0x40a00000);
          }
        }
        iVar3 = *(int *)(param_1 + 0x314 + iVar6 * 4);
        if (iVar3 != 0) {
          FUN_0046a920(iVar3,&local_c8);
          FUN_0046a940(*(undefined4 *)(param_1 + 0x314 + iVar6 * 4),local_ac);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    if (((*(uint *)(param_1 + 0x60) & 0x87800) != 0) || ((*(uint *)(param_1 + 100) & 0x4000) != 0))
    {
      piVar8 = (int *)(param_1 + 0x314);
      iVar6 = 2;
      do {
        if (*piVar8 != 0) {
          FUN_0046a960(*piVar8,0);
        }
        piVar8 = piVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  iVar6 = *(int *)(param_1 + 0x31c);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x60) == 8)) && (3.0 < *(float *)(iVar6 + 0x68))) {
    if (*(int *)(param_1 + 0x344) == 0) {
      local_c8 = *(undefined4 *)(param_1 + 0x50);
      local_c4 = *(undefined4 *)(param_1 + 0x54);
      local_c0 = *(undefined4 *)(param_1 + 0x58);
      FUN_0042fa80(&local_c8,&local_c8,0x3f800000,param_1 + 0x30);
      iVar3 = param_1 + 0x20;
      uVar4 = 0x41700000;
    }
    else {
      local_c8 = *(undefined4 *)(param_1 + 0x3c0);
      local_c4 = *(undefined4 *)(param_1 + 0x3c4);
      local_c0 = *(undefined4 *)(param_1 + 0x3c8);
      FUN_0042fa80(&local_c8,&local_c8,0x3f800000,param_1 + 0x3a0);
      iVar3 = param_1 + 0x390;
      uVar4 = 0x41400000;
    }
    FUN_0042fa80(&local_c8,&local_c8,uVar4,iVar3);
    FUN_0042fa50(local_ac,0x41200000,iVar3);
    FUN_0046a920(iVar6,&local_c8);
    FUN_0046a940(iVar6,local_ac);
    FUN_0042fa80(local_b8,&local_c8,0x3f000000,local_ac);
    iVar6 = FUN_00450e70(0x54657374,local_b8,0x42800000,0,2,local_80,local_60,local_a0);
    if (0 < iVar6) {
      piVar8 = local_a0;
      do {
        iVar3 = *piVar8;
        if (((iVar3 != param_1) && ((*(uint *)(iVar3 + 0x60) & 0x7800) == 0)) &&
           ((*(uint *)(iVar3 + 100) & 0x2000000) == 0)) {
          local_bc = FUN_004816b0();
          iVar5 = __ftol();
          iVar3 = *piVar8;
          if (*(float *)(param_1 + 0x38) * *(float *)(iVar3 + 0x38) +
              *(float *)(param_1 + 0x34) * *(float *)(iVar3 + 0x34) +
              *(float *)(param_1 + 0x30) * *(float *)(iVar3 + 0x30) < 0.0) {
            iVar5 = iVar5 + 3;
          }
          puVar2 = (uint *)(iVar3 + 0x2a0 + iVar5 * 4);
          *puVar2 = *puVar2 | 8;
        }
        piVar8 = piVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if ((((*(uint *)(param_1 + 0x60) & 0x87800) != 0) || ((*(uint *)(param_1 + 100) & 0x4000) != 0))
       && (*(int *)(param_1 + 0x31c) != 0)) {
      FUN_0046a960(*(int *)(param_1 + 0x31c),0);
    }
  }
  return;
}



void FUN_0046fd60(float param_1,float *param_2,float param_3,float param_4,float param_5,
                 float param_6,int param_7)

{
  uint uVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float local_5c;
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;

  bVar9 = false;
  bVar2 = false;
  bVar12 = false;
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  bVar10 = false;
  bVar11 = false;
  if (param_1 == 0.0) {
    return;
  }
  if ((*(uint *)((int)param_1 + 0x60) & 0x2007800) != 0) {
    return;
  }
  if (0.5 < *(float *)((int)param_1 + 0x1e8)) {
    return;
  }
  if ((*(int *)((int)param_1 + 0x140) != 0) &&
     (pbVar3 = (byte *)FUN_004318b0(*(int *)((int)param_1 + 0x140)), pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 0x20) != 0) {
      return;
    }
    uVar1 = *(uint *)(pbVar3 + 0x2c);
    bVar6 = (uVar1 & 0x2000) != 0;
    if ((uVar1 & 0x4000) != 0) {
      return;
    }
    bVar7 = (uVar1 & 0x8000) != 0;
    bVar8 = (uVar1 & 0x100) != 0;
    bVar9 = (uVar1 & 0x200) != 0;
    bVar10 = (uVar1 & 0x400) != 0;
    bVar11 = (uVar1 & 0x1000) != 0;
    bVar12 = (uVar1 & 0x80) != 0;
    if ((uVar1 & 0x40) != 0) {
      bVar2 = true;
    }
  }
  if (param_7 != 0) {
    local_44 = local_44 | 1;
  }
  FUN_004313d0(&local_40);
  local_10 = param_2[0xc];
  local_c = param_2[0xd];
  local_8 = param_2[0xe];
  local_30 = param_2[8];
  local_2c = param_2[9];
  local_28 = param_2[10];
  local_40 = param_2[4];
  local_3c = param_2[5];
  local_38 = param_2[6];
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  FUN_0042f9b0(&local_40);
  FUN_0042f9b0(&local_30);
  FUN_0042f9b0(&local_20);
  local_5c = (*(float *)((int)param_1 + 0x1a0) - 200.0) * 0.005;
  if (local_5c <= 0.0) {
    return;
  }
  if (1.0 < local_5c) {
    local_5c = 1.0;
  }
  param_1 = 0.0;
  switch(DAT_0050ca8c) {
  case 0:
    if (!bVar2) {
      if (bVar9) {
        param_1 = 255.0;
        break;
      }
      if (!bVar10) {
        param_1 = 200.0;
        break;
      }
    }
    goto LAB_0047005f;
  case 1:
    if (bVar12) {
      param_1 = 255.0;
      break;
    }
    if (bVar2) {
      param_1 = 150.0;
      break;
    }
    if (bVar11) {
      param_1 = 0.0;
      break;
    }
    if (bVar7) {
      param_1 = 0.0;
      break;
    }
    goto LAB_004701ce;
  case 2:
    if (!bVar8) {
      if (bVar2) {
        param_1 = 64.0;
      }
      else {
        param_1 = 16.0;
      }
      break;
    }
LAB_0047005f:
    param_1 = 255.0;
    break;
  case 4:
    if (bVar2) {
      param_1 = 255.0;
      break;
    }
    if (bVar9) {
      param_1 = 255.0;
      break;
    }
    if (bVar10) {
      param_1 = 255.0;
      break;
    }
    if (bVar8) {
      param_1 = 255.0;
      break;
    }
    if (bVar6) {
      param_1 = 255.0;
      break;
    }
LAB_004701ce:
    param_1 = 50.0;
    break;
  case 5:
    if (bVar2) {
      param_1 = 200.0;
    }
    else if (bVar9) {
      param_1 = 255.0;
    }
    else {
      param_1 = 16.0;
    }
    break;
  case 6:
    if (bVar2) {
      param_1 = 150.0;
    }
    else if (bVar9) {
      param_1 = 255.0;
    }
    else {
      param_1 = 75.0;
    }
    break;
  case 7:
    if (bVar8) {
      param_1 = 255.0;
    }
    else {
      param_1 = 255.0;
      if (!bVar9) {
        param_1 = 128.0;
      }
    }
  }
  if (0.8 < local_28) {
    if (bVar8) {
      param_6 = 0.0;
    }
    FUN_0042fa80(&local_10,&local_10,-param_6,&local_40);
    param_1 = param_1 * local_5c;
    local_40 = local_40 * param_3;
    local_3c = local_3c * param_3;
    local_38 = local_38 * param_3;
    local_30 = local_30 * param_4;
    local_2c = local_2c * param_4;
    local_28 = local_28 * param_4;
    local_20 = local_20 * param_5;
    local_1c = local_1c * param_5;
    local_18 = local_18 * param_5;
    if (param_1 < 1.0) {
      param_1 = 1.0;
    }
    else if (254.0 < param_1) {
      param_1 = 254.0;
    }
    if (0.0 < param_1) {
      uVar4 = __ftol(0x3e4ccccd,local_44);
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(uVar4);
      iVar5 = FUN_0047bc40(&local_40,uVar4);
      if ((iVar5 != 0) && (bVar10 || bVar8)) {
        FUN_00426c80(0x45,7,local_5c * 0.1 * 0.25,0x3f800000,1);
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00470510(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
                 undefined4 param_7,undefined4 param_8)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;

  param_6 = param_6 * (float)_DAT_00e22a40;
  pfVar1 = (float *)(param_1 + ((int)param_2 + 0x1d7) * 0xc);
  param_2 = param_3;
  fVar2 = *pfVar1;
  if ((*(uint *)(param_1 + 0x60) & 0x800000) != 0) {
    param_2 = param_3 * 0.5;
  }
  if ((*(uint *)(param_1 + 0x60) & 0x200) != 0) {
    param_6 = param_6 + param_6;
    param_2 = param_4;
  }
  fVar3 = (float10)FUN_0046d730(param_2,fVar2,param_7,param_8,param_6,param_5 * (float)_DAT_00e22a40
                               );
  if ((*(uint *)(param_1 + 100) & 0x2000000) != 0) {
    fVar3 = (fVar3 + (float10)fVar2) * (float10)0.5;
  }
  *pfVar1 = (float)fVar3;
  return;
}



void FUN_004705d0(int param_1,int param_2,undefined4 param_3,float param_4)

{
  FUN_0044bb10(param_2,param_3);
  FUN_0042fa80(param_2 + 0x30,param_2 + 0x30,*(float *)(param_1 + 0x1a0) * param_4,param_2 + 0x10);
  return;
}



void FUN_00470610(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  float10 extraout_ST0;
  float local_24;
  float fStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;

  FUN_0046d4c0(param_1);
  if ((*(uint *)(param_1 + 0x60) & 0x800) == 0) {
    iVar3 = FUN_0041d6b0();
    if (iVar3 != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1e70) + 4);
      if ((iVar3 == 0x4c6f636c) || (iVar3 == 0x41414949)) {
        FUN_0041d930(param_1);
      }
      if (*(int *)(*(int *)(param_1 + 0x1e70) + 4) == 0x52454d4f) {
        DVar4 = timeGetTime();
        piVar1 = *(int **)(param_1 + 0x1e70);
        fStack_20 = 0.0;
        local_24 = (float)(DVar4 - *(int *)(&DAT_00ea0200 + *piVar1 * 4));
        *(uint *)(param_1 + 0x60) =
             *(uint *)(&DAT_00ea03c0 + *piVar1 * 4) | *(uint *)(param_1 + 0x60) & 0xfff787ef | 0x40;
        *(uint *)(param_1 + 100) =
             *(uint *)(&DAT_00ea01a0 + *piVar1 * 4) | *(uint *)(param_1 + 100) & 0xf17bffff |
             0x10000000;
        *(undefined4 *)(param_1 + 0x1a0) = (&DAT_00ec7640)[*piVar1];
        FUN_004705d0(param_1,param_1 + 0x20,&DAT_00ea0720 + *piVar1 * 0x1f28,
                     (float)(ulonglong)(uint)local_24 * 0.001);
      }
    }
    FUN_00470ae0(param_1);
    if (**(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 0xe) {
      FUN_0044bb10(param_1 + 0x390,param_1 + 0x490);
      FUN_0044bb10(param_1 + 0x3d0,param_1 + 0x490);
    }
    if (*(int *)(param_1 + 0x344) != 0) {
      FUN_00471760(param_1);
      FUN_00472a50(param_1);
      FUN_0046f2c0(param_1,0,0xbf800000,0xbf800000);
      FUN_0046ee20(param_1);
    }
    FUN_0046f9a0(param_1);
    if (*(int *)(param_1 + 0x344) != 0) {
      FUN_0046d6a0(param_1);
      FUN_0046ebf0(param_1);
    }
    FUN_004709a0(param_1);
    FUN_00470a40(param_1);
    FUN_0046e150(param_1);
  }
  if (*(int *)(param_1 + 0x344) == 0) {
    if (*(int *)(param_1 + 0x348) != 0) {
      FUN_00431640(*(int *)(param_1 + 0x348),param_1 + 0x15d0);
    }
    iVar3 = *(int *)(param_1 + 0x34c);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x1998) < 0x65) {
        FUN_00431740(iVar3,0);
      }
      else {
        FUN_00431740(iVar3,1);
      }
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x344) + 0x14);
    if (iVar3 != 0) {
      FUN_00431640(iVar3,param_1 + 0x490);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x344) + 4);
    if (iVar3 != 0) {
      FUN_00431640(iVar3,param_1 + 0x390);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x344) + 8);
    if (iVar3 != 0) {
      FUN_00431640(iVar3,param_1 + 0x3d0);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x344) + 0xc);
    if (iVar3 != 0) {
      FUN_00431640(iVar3,param_1 + 0x410);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x344) + 0x10);
    if (iVar3 != 0) {
      FUN_00431640(iVar3,param_1 + 0x450);
    }
    iVar5 = 0xf8;
    iVar3 = param_1 + 0x12d0;
    do {
      iVar2 = *(int *)(iVar5 + *(int *)(param_1 + 0x344));
      if (iVar2 != 0) {
        FUN_00431640(iVar2,iVar3);
      }
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 + 0x40;
    } while (iVar5 < 0x101);
  }
  if (((*(uint *)(param_1 + 0x60) & 0x6000) != 0) && (iVar3 = *(int *)(param_1 + 0x300), -1 < iVar3)
     ) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0xbf800000;
    iVar5 = __ftol();
    local_1c = 0x437f0000;
    local_24 = (float)((extraout_ST0 - (float10)iVar5) * (float10)255.0);
    local_4 = 0x437f0000;
    fStack_20 = local_24;
    local_c = local_24;
    local_8 = local_24;
    FUN_00483840(iVar3,&local_24,&local_c,&local_18);
  }
  return;
}



void FUN_004709a0(int param_1)

{
  int iVar1;
  bool bVar2;

  iVar1 = *(int *)(param_1 + 0x1994);
  if (iVar1 != 0) {
    if (((*(byte *)(param_1 + 100) & 0x40) == 0) || ((*(uint *)(param_1 + 0x60) & 0x84000) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((((DAT_0050c048 & 0x100) != 0) && (DAT_0050c040 != 0)) && ((DAT_00e98e90 & 0x1000) != 0)) {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      return;
    }
    FUN_00431a50(iVar1,2,3,0x10,2);
    FUN_00431620(*(undefined4 *)(param_1 + 0x1994),0,0,
                 (*(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x188)) - 3.0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00470a40(int param_1)

{
  int iVar1;

  if (((*(uint *)(param_1 + 0x60) & 0x20) == 0) && ((*(uint *)(param_1 + 100) & 0x4000000) == 0)) {
    if ((*(uint *)(param_1 + 0x60) & 0x100) != 0) {
      iVar1 = FUN_0045d350();
      if (iVar1 == 0) goto LAB_00470ac7;
    }
    if ((double)*(int *)(param_1 + 0x1998) < 500.0) {
      _DAT_0050cb08 = 0;
      FUN_00426d10((int)(short)((**(byte **)(*(int *)(param_1 + 0x1e70) + 0x18) & 1) + 0xa6 +
                               (short)DAT_0050cb04),4,0x3e800000,0x3f800000,param_1 + 0x50,1,0,
                   0x41200000,0x459c4000);
      return;
    }
  }
  else {
LAB_00470ac7:
    FUN_0046d7a0(param_1,0x3f333333);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00470ae0(int param_1)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  float local_13c;
  float local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined local_12c [48];
  undefined local_fc [8];
  float local_f4;
  float local_ec;
  int local_e8;
  undefined local_e4 [16];
  float local_d4;
  float local_d0;
  float local_cc;
  undefined local_c4 [16];
  undefined local_b4 [16];
  undefined local_a4 [12];
  undefined local_98 [12];
  undefined local_8c [12];
  undefined local_80 [16];
  undefined local_70 [16];
  undefined local_60 [32];
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [32];

  local_e8 = 0;
  FUN_0044bb10(local_e4,param_1 + 0x20);
  if (DAT_0050ca3c != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x80000;
  }
  uVar6 = *(uint *)(param_1 + 0x60) & 0x84000;
  if ((((DAT_0050c048 & 0x100) != 0) && (DAT_0050c040 != 0)) && ((DAT_00e98e90 & 0x1000) != 0)) {
    uVar6 = 1;
  }
  iVar4 = (int)local_ec;
  if (DAT_0050ccf0 != 0) {
    iVar4 = FUN_0045d350();
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = FUN_0045d3d0(*(undefined4 *)(param_1 + 0x1e70));
    }
  }
  if (*(int **)(param_1 + 0x344) == (int *)0x0) {
    FUN_00431450(param_1 + 0x15d0,0x3b83126f,0x3b83126f,0x3b83126f,local_e4);
    if ((uVar6 == 0) || ((*(uint *)(param_1 + 0x60) & 0x5800) == 0)) {
      if (*(int *)(param_1 + 0x348) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x348),2,3,0x10,2);
      }
      iVar5 = *(int *)(param_1 + 0x34c);
      if (iVar5 == 0) goto LAB_00470c11;
      uVar10 = 2;
      uVar9 = 3;
    }
    else {
      if (*(int *)(param_1 + 0x348) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x348),2,0xfffffffc,0x10,3);
      }
      iVar5 = *(int *)(param_1 + 0x34c);
      if (iVar5 == 0) goto LAB_00470c11;
      uVar10 = 3;
      uVar9 = 0xfffffffc;
    }
    FUN_00431a50(iVar5,2,uVar9,0x10,uVar10);
LAB_00470c11:
    if ((DAT_0050ccf0 != 0) && (-1 < iVar4)) {
      if ((*(uint *)(param_1 + 0x60) & 0x84000) == 0x80000) {
        (&DAT_0050ccf8)[iVar4] = *(undefined4 *)(param_1 + 0x348);
        (&DAT_0050cd00)[iVar4] = *(undefined4 *)(param_1 + 0x34c);
      }
      else {
        (&DAT_0050ccf8)[iVar4] = 0;
        (&DAT_0050cd00)[iVar4] = 0;
      }
    }
    iVar4 = FUN_0041d6b0();
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x348) != 0) {
      FUN_00431a50(*(int *)(param_1 + 0x348),2,3,0x10,2);
    }
    if (*(int *)(param_1 + 0x34c) == 0) {
      return;
    }
    FUN_00431a50(*(int *)(param_1 + 0x34c),2,3,0x10,2);
    return;
  }
  iVar5 = **(int **)(param_1 + 0x344);
  if (uVar6 == 0) {
    if (iVar5 != 0) {
      uVar10 = 2;
      uVar9 = 3;
      goto LAB_00470cc6;
    }
  }
  else if (iVar5 != 0) {
    uVar10 = 3;
    uVar9 = 0xfffffffc;
LAB_00470cc6:
    FUN_00431a50(iVar5,2,uVar9,0x10,uVar10);
  }
  if (DAT_0050ccf0 != 0) {
    if ((*(uint *)(param_1 + 0x60) & 0x84000) == 0x80000) {
      (&DAT_0050ccf8)[iVar4] = **(undefined4 **)(param_1 + 0x344);
    }
    else {
      (&DAT_0050ccf8)[iVar4] = 0;
    }
  }
  local_ec = 1.0 - *(float *)(param_1 + 0x1a0) * 0.005;
  if ((*(uint *)(param_1 + 0x60) & 0x6000000) != 0) {
    local_ec = 0.0;
  }
  if (local_ec < 0.0) {
    local_ec = 0.0;
  }
  if (1.0 < local_ec) {
    local_ec = 1.0;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x344) + 0xec);
  local_ec = local_ec * local_ec;
  if (iVar4 != 0) {
    FUN_00431a50(iVar4,2,3,0x10,2);
  }
  bVar7 = **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 0xe;
  piVar3 = *(int **)(param_1 + 0x344);
  if ((piVar3[3] != 0) && (piVar3[4] != 0)) {
    local_e8 = 1;
  }
  if (*piVar3 != 0) {
    FUN_00431740(*piVar3,0);
  }
  uVar6 = (*(int *)(param_1 + 0x1e3c) + 1U) % 0x12;
  *(undefined4 *)(param_1 + 0x1e40) = 0x10;
  *(undefined4 *)(param_1 + 0x1e44) = 10;
  *(uint *)(param_1 + 0x1e3c) = uVar6;
  FUN_0044bb10(uVar6 * 0x40 + 0x19bc + param_1,local_e4);
  if (((0x4b < *(int *)(param_1 + 0x1998)) || (*(int *)(param_1 + 0x344) == 0)) || (bVar7)) {
    FUN_0044bb10(local_40,local_e4);
    FUN_0044bb10(local_80,local_e4);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1e3c) - *(int *)(param_1 + 0x1e40);
    if (iVar4 < 0) {
      iVar4 = iVar4 + ((0x11U - iVar4) / 0x12) * 0x12;
    }
    FUN_0044bb10(local_40,iVar4 * 0x40 + 0x19bc + param_1);
    iVar4 = *(int *)(param_1 + 0x1e3c) - *(int *)(param_1 + 0x1e44);
    if (iVar4 < 0) {
      iVar4 = iVar4 + ((0x11U - iVar4) / 0x12) * 0x12;
    }
    FUN_0044bb10(local_80,iVar4 * 0x40 + 0x19bc + param_1);
    uVar6 = (*(int *)(param_1 + 0x1e3c) + 1U) % 0x12;
    *(uint *)(param_1 + 0x1e3c) = uVar6;
    FUN_0044bb10(uVar6 * 0x40 + 0x19bc + param_1,local_e4);
    iVar4 = *(int *)(param_1 + 0x1e3c) - *(int *)(param_1 + 0x1e40);
    if (iVar4 < 0) {
      iVar4 = iVar4 + ((0x11U - iVar4) / 0x12) * 0x12;
    }
    FUN_0044bb10(local_40,iVar4 * 0x40 + 0x19bc + param_1);
    iVar4 = *(int *)(param_1 + 0x1e3c) - *(int *)(param_1 + 0x1e44);
    if (iVar4 < 0) {
      iVar4 = iVar4 + ((0x11U - iVar4) / 0x12) * 0x12;
    }
    FUN_0044bb10(local_80,iVar4 * 0x40 + 0x19bc + param_1);
    FUN_0042fa80(local_40,local_40,0x3dcccccd,local_e4);
    FUN_0042fa80(local_30,local_30,0x3dcccccd,&local_d4);
    FUN_0042fa80(local_20,local_20,0x3dcccccd,local_c4);
    FUN_0042f9f0(local_40,local_30,local_20);
    FUN_0042f9f0(local_20,local_40,local_30);
    FUN_0042f9b0(local_40);
    FUN_0042f9b0(local_30);
    FUN_0042f9b0(local_20);
    FUN_0042fa80(local_80,local_80,0x3e4ccccd,local_e4);
    FUN_0042fa80(local_70,local_70,0x3e4ccccd,&local_d4);
    FUN_0042fa80(local_60,local_60,0x3e4ccccd,local_c4);
    FUN_0042f9f0(local_80,local_70,local_60);
    FUN_0042f9f0(local_60,local_80,local_70);
    FUN_0042f9b0(local_80);
    FUN_0042f9b0(local_70);
    FUN_0042f9b0(local_60);
  }
  if (bVar7) {
    puVar11 = local_e4;
    iVar4 = param_1 + 0x490;
  }
  else {
    iVar5 = **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c;
    FUN_0042f7d0(&local_138,&DAT_004c7088 + iVar5);
    FUN_0042f830(&local_138,&local_138,param_1 + 0x164c);
    FUN_0044bb10(local_12c,local_80);
    FUN_0042f7d0(local_fc,local_b4);
    FUN_0042fa80(local_fc,local_fc,local_138,local_e4);
    FUN_0042fa80(local_fc,local_fc,local_134,&local_d4);
    FUN_0042fa80(local_fc,local_fc,local_130,local_c4);
    fVar2 = local_d0 * *(float *)(param_1 + 0x198) +
            local_cc * *(float *)(param_1 + 0x19c) + local_d4 * *(float *)(param_1 + 0x194);
    FUN_0042fa80(local_fc,local_fc,(fVar2 - *(float *)(param_1 + 0x1e60)) * 50.0,local_c4);
    *(float *)(param_1 + 0x1e60) = fVar2;
    FUN_0042f860(local_a4,local_fc,local_b4);
    iVar4 = param_1 + 0x1e48;
    FUN_0042f860(local_8c,local_a4,iVar4);
    fVar8 = (float10)FUN_0042f8c0(local_8c);
    FUN_0042f9b0(local_8c);
    pfVar1 = (float *)(param_1 + 0x1e54);
    FUN_0042fa80(pfVar1,pfVar1,(float)_DAT_00e22a40 * (float)fVar8 * 20.0,local_8c);
    fVar8 = (float10)FUN_00480650(0x41200000,(float)_DAT_00e22a40,pfVar1);
    FUN_0042fa50(pfVar1,(float)fVar8);
    FUN_0042fa80(local_98,iVar4,(float)_DAT_00e22a40,pfVar1);
    if ((*(byte *)(param_1 + 0x60) & 2) == 0) {
      FUN_0042f7d0(local_98,local_a4);
      FUN_0042f7b0(pfVar1,0,0,0);
    }
    FUN_0042f860(local_fc,local_fc,local_a4);
    FUN_0042f830(local_fc,local_fc,local_98);
    FUN_0042f7d0(iVar4,local_98);
    local_13c = (*pfVar1 * *(float *)(param_1 + 0x194) +
                *(float *)(param_1 + 0x1e5c) * *(float *)(param_1 + 0x19c) +
                *(float *)(param_1 + 0x1e58) * *(float *)(param_1 + 0x198)) * -2.0;
    if (50.0 < local_13c) {
      local_13c = 50.0;
    }
    if (local_13c < -50.0) {
      local_13c = -50.0;
    }
    FUN_00431390(local_12c,local_13c,0x3f800000,0,0,local_12c);
    fVar2 = (*(float *)(param_1 + 0x12c8) - local_f4) * local_ec;
    if (12.0 < fVar2) {
      fVar2 = 12.0;
    }
    if (fVar2 < -12.0) {
      fVar2 = -12.0;
    }
    local_f4 = fVar2 * 0.5 + local_f4;
    *(float *)(param_1 + 0x19b4) = fVar2 * 0.5;
    FUN_0044bb10(param_1 + 0x490,local_12c);
    FUN_0042f7d0(&local_138,&DAT_004c7094 + iVar5);
    FUN_0042f830(&local_138,&local_138,param_1 + 0x161c);
    fVar2 = *(float *)(param_1 + 0x204);
    FUN_0044bb10(local_12c,local_e4);
    FUN_00431390(local_12c,fVar2 * -0.5,0,0x3f800000,0,local_12c);
    FUN_0042fa80(local_fc,local_fc,local_138,local_e4);
    FUN_0042fa80(local_fc,local_fc,local_134,&local_d4);
    FUN_0042fa80(local_fc,local_fc,local_130,local_c4);
    FUN_0044bb10(param_1 + 0x390,local_12c);
    iVar4 = local_e8;
    if (local_e8 != 0) {
      FUN_0042fa80(local_fc,local_fc,DAT_004c7a40,local_e4);
      FUN_0042fa80(local_fc,local_fc,DAT_004c7a44,&local_d4);
      FUN_0042fa80(local_fc,local_fc,DAT_004c7a48,local_c4);
      FUN_0044bb10(param_1 + 0x410,local_12c);
    }
    FUN_0042f7d0(&local_138,&DAT_004c7094 + iVar5);
    local_138 = -local_138;
    FUN_0042f830(&local_138,&local_138,param_1 + 0x1628);
    fVar2 = *(float *)(param_1 + 0x204);
    FUN_0044bb10(local_12c,local_e4);
    FUN_00431390(local_12c,fVar2 * -0.5,0,0x3f800000,0,local_12c);
    FUN_0042fa80(local_fc,local_fc,local_138,local_e4);
    FUN_0042fa80(local_fc,local_fc,local_134,&local_d4);
    FUN_0042fa80(local_fc,local_fc,local_130,local_c4);
    FUN_0044bb10(param_1 + 0x3d0,local_12c);
    if (iVar4 == 0) goto LAB_0047174a;
    FUN_0042fa80(local_fc,local_fc,-DAT_004c7a40,local_e4);
    FUN_0042fa80(local_fc,local_fc,DAT_004c7a44,&local_d4);
    FUN_0042fa80(local_fc,local_fc,DAT_004c7a48,local_c4);
    puVar11 = local_12c;
    iVar4 = param_1 + 0x450;
  }
  FUN_0044bb10(iVar4,puVar11);
LAB_0047174a:
  FUN_0046e2c0(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00471760(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  float local_ec;
  float local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined local_bc [8];
  float local_b4;
  undefined local_b0 [8];
  float local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined local_98 [16];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [64];

  bVar7 = false;
  local_a4 = 0;
  if (*(int *)(param_1 + 0x344) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0xec);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,3,0x10,2);
    }
    FUN_0044bb10(local_40,param_1 + 0x20);
    bVar8 = **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) == 0xe;
    if (bVar8) {
      local_a4 = 1;
    }
    if ((*(int *)(*(int *)(param_1 + 0x344) + 0xc) != 0) &&
       (*(int *)(*(int *)(param_1 + 0x344) + 0x10) != 0)) {
      bVar7 = true;
    }
    if (!bVar8) {
      FUN_0042f7d0(local_bc,param_1 + 0x3c0);
      FUN_0042f7d0(&local_d8,&DAT_004c70c4 + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c);
      local_d8 = -local_d8;
      FUN_00430980(&local_d8,&local_d8,param_1 + 0x390);
      FUN_0042f830(local_bc,&local_d8,local_bc);
      if (bVar7) {
        FUN_0042f7d0(local_b0,param_1 + 0x480);
        FUN_0042f7d0(&local_d8,&DAT_004c70c4 + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c)
        ;
        FUN_00430980(&local_d8,&local_d8,param_1 + 0x450);
        FUN_0042f830(local_b0,&local_d8,local_b0);
        local_b4 = local_b4 + *(float *)(param_1 + 0x250);
        local_a8 = local_a8 + *(float *)(param_1 + 0x250);
        FUN_00472750(param_1,2,local_bc,local_b0);
        FUN_0042f7d0(local_bc,param_1 + 0x440);
        FUN_0042f7d0(&local_d8,&DAT_004c70c4 + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c)
        ;
        local_d8 = -local_d8;
        FUN_00430980(&local_d8,&local_d8,param_1 + 0x410);
        FUN_0042f830(local_bc,&local_d8,local_bc);
      }
      FUN_0042f7d0(local_b0,param_1 + 0x400);
      FUN_0042f7d0(&local_d8,&DAT_004c70c4 + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c);
      FUN_00430980(&local_d8,&local_d8,param_1 + 0x3d0);
      FUN_0042f830(local_b0,&local_d8,local_b0);
      local_b4 = local_b4 + *(float *)(param_1 + 0x250);
      local_a8 = local_a8 + *(float *)(param_1 + 0x250);
      FUN_00472750(param_1,1,local_bc,local_b0);
    }
    local_cc = *(float *)(param_1 + 0x1a0) * 0.001;
    if (1.0 < local_cc) {
      local_cc = 1.0;
    }
    if (local_cc < 0.0) {
      local_cc = 0.0;
    }
    local_a0 = FUN_0042b560(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x114));
    local_9c = FUN_0042b560(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x118));
    FUN_0044bb10(local_98,param_1 + 0x390);
    FUN_0042f7d0(&local_d8,&DAT_004c70dc + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c);
    FUN_00430980(&local_d8,&local_d8,local_98);
    local_68 = local_d8 + local_68;
    local_64 = local_d4 + local_64;
    local_60 = local_d0 + local_60;
    local_88 = *(undefined4 *)(param_1 + 0x3b0);
    local_84 = *(undefined4 *)(param_1 + 0x3b4);
    local_80 = *(undefined4 *)(param_1 + 0x3b8);
    local_78 = *(undefined4 *)(param_1 + 0x3a0);
    local_74 = *(undefined4 *)(param_1 + 0x3a4);
    local_70 = *(undefined4 *)(param_1 + 0x3a8);
    FUN_0044bb10(param_1 + 0x1410,local_98);
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x10c);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,3,0x10,2);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x10c);
    if (iVar2 != 0) {
      FUN_00431640(iVar2,param_1 + 0x1410);
    }
    FUN_0044bb10(local_98,param_1 + 0x3d0);
    FUN_0042f7d0(&local_d8,&DAT_004c70dc + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c);
    local_d8 = local_d8 * -1.0;
    FUN_00430980(&local_d8,&local_d8,local_98);
    local_68 = local_d8 + local_68;
    local_64 = local_d4 + local_64;
    local_60 = local_d0 + local_60;
    local_88 = *(undefined4 *)(param_1 + 0x3f0);
    local_84 = *(undefined4 *)(param_1 + 0x3f4);
    local_80 = *(undefined4 *)(param_1 + 0x3f8);
    local_78 = *(undefined4 *)(param_1 + 0x3e0);
    local_74 = *(undefined4 *)(param_1 + 0x3e4);
    local_70 = *(undefined4 *)(param_1 + 1000);
    FUN_0044bb10(param_1 + 0x1450,local_98);
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x110);
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,3,0x10,2);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x110);
    if (iVar2 != 0) {
      FUN_00431640(iVar2,param_1 + 0x1450);
    }
    fVar3 = *(float *)(&DAT_004c70e8 + **(int **)(*(int *)(param_1 + 0x1e70) + 0x18) * 0x6c) * 0.01;
    fVar1 = -((local_cc * 3.0 - -9.0) * 0.01);
    local_c0 = fVar1;
    FUN_004310b0(param_1 + 0x1490,fVar3,fVar3,fVar1);
    FUN_004310b0(param_1 + 0x14d0,fVar3,fVar3,fVar1);
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x114);
    if (iVar2 != 0) {
      FUN_00431640(iVar2,param_1 + 0x1490);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x118);
    if (iVar2 != 0) {
      FUN_00431640(iVar2,param_1 + 0x14d0);
    }
    iVar2 = local_a0;
    pfVar5 = (float *)(param_1 + 0x294);
    iVar6 = 3;
    fVar1 = 1.0 - *(float *)(param_1 + 0x218) * 0.01;
    local_e8 = fVar1;
    do {
      if (local_e8 < pfVar5[-3]) {
        local_e8 = pfVar5[-3];
      }
      if (fVar1 < *pfVar5) {
        fVar1 = *pfVar5;
      }
      if ((*(byte *)(pfVar5 + 3) & 8) != 0) {
        local_e8 = 1.0;
      }
      if ((*(byte *)(pfVar5 + 6) & 8) != 0) {
        fVar1 = 1.0;
      }
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_e8 = (local_e8 - 0.5) + (local_e8 - 0.5);
    if (local_e8 < 0.0) {
      local_e8 = 0.0;
    }
    else if (1.0 < local_e8) {
      local_e8 = 1.0;
    }
    local_e8 = local_e8 * 4.0;
    if (1.0 < local_e8) {
      local_e8 = 1.0;
    }
    local_c0 = *(float *)(param_1 + 0x1a0) * 0.02;
    local_c4 = local_e8 * -255.0 - -255.0;
    if ((*(uint *)(param_1 + 100) & 0x4000) != 0) {
      local_c4 = 0.0;
    }
    local_c8 = local_c4;
    if (0.0 <= local_c4) {
      if (255.0 < local_c4) {
        local_c4 = 255.0;
      }
    }
    else {
      local_c4 = 0.0;
    }
    if (local_c8 < 0.0) {
      local_c8 = 0.0;
    }
    else if (255.0 < local_c8) {
      local_c8 = 255.0;
    }
    if (local_a0 != 0) {
      uVar4 = __ftol();
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(uVar4);
      FUN_0042b5e0(iVar2,0,0,uVar4);
      FUN_0044fc00(iVar2,0,(local_cc * 3.5 - -0.5) * (float)_DAT_00e22a40);
    }
    iVar2 = local_9c;
    if (local_9c != 0) {
      uVar4 = __ftol();
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(uVar4);
      FUN_0042b5e0(iVar2,0,0,uVar4);
      FUN_0044fc00(iVar2,0,(local_cc * 3.5 - -0.5) * (float)_DAT_00e22a40);
    }
    if (DAT_00ec86b4 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x10c);
      if (iVar2 != 0) {
        FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x110);
      if (iVar2 != 0) {
        FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
      }
    }
    if (DAT_00ec86b4 == 1) {
      bVar7 = (*(uint *)(param_1 + 0x60) & 0x80) != 0;
      FUN_0046fd60(param_1,param_1 + 0x1310,0x3dcccccd,0xbdcccccd,0xbdcccccd,0x41200000,bVar7);
      FUN_0046fd60(param_1,param_1 + 0x12d0,0x3dcccccd,0xbdcccccd,0x3dcccccd,0x41200000,bVar7);
    }
    if (((local_a4 == 0) && (*(int *)(param_1 + 0x1998) < 0x4c)) && (*(int *)(param_1 + 0x344) != 0)
       ) {
      if (*(int *)(*(int *)(param_1 + 0x344) + 0x28) != 0) {
        FUN_0046f0e0(param_1 + 0x490,param_1 + 0x390,0x3f800000,0x3f800000,
                     **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),param_1 + 0x5d0);
        *(float *)(param_1 + 0x608) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x608);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x28),param_1 + 0x5d0);
      }
      if (*(int *)(*(int *)(param_1 + 0x344) + 0x2c) != 0) {
        FUN_0046f0e0(param_1 + 0x490,param_1 + 0x3d0,0xbf800000,0x3f800000,
                     **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),param_1 + 0x610);
        *(float *)(param_1 + 0x648) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x648);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x2c),param_1 + 0x610);
      }
      if (*(int *)(*(int *)(param_1 + 0x344) + 0x30) != 0) {
        FUN_0046f0e0(param_1 + 0x490,param_1 + 0x410,0x3f800000,0xbf800000,
                     **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),param_1 + 0x650);
        *(float *)(param_1 + 0x688) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x688);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x30),param_1 + 0x650);
      }
      if (*(int *)(*(int *)(param_1 + 0x344) + 0x34) != 0) {
        FUN_0046f0e0(param_1 + 0x490,param_1 + 0x450,0xbf800000,0xbf800000,
                     **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),param_1 + 0x690);
        *(float *)(param_1 + 0x6c8) = *(float *)(param_1 + 0x250) + *(float *)(param_1 + 0x6c8);
        FUN_00431640(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x34),param_1 + 0x690);
      }
      if ((*(int *)(param_1 + 0x1998) < 0x33) && (*(int *)(param_1 + 0x344) != 0)) {
        *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x1000000;
        FUN_0042f7b0(local_4c,0,0,0);
        FUN_0042f7b0(local_58,0,0,0);
        fVar1 = *(float *)(param_1 + 0x1ec) * -0.03;
        local_ec = 0.3;
        if (1.0 < fVar1) {
          local_ec = fVar1 * 0.3;
        }
        if (1.0 < local_ec) {
          local_ec = 1.0;
        }
        FUN_00481c30(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x28),local_4c,local_58,local_ec,
                     0x3f800000,(float)*(int *)(param_1 + 0x1998),0x42480000,0);
        FUN_0042f7b0(local_4c,0,0,0);
        FUN_0042f7b0(local_58,0,0,0);
        fVar1 = *(float *)(param_1 + 0x1ec) * 0.03;
        local_ec = 0.3;
        if (1.0 < fVar1) {
          local_ec = fVar1 * 0.3;
        }
        if (1.0 < local_ec) {
          local_ec = 1.0;
        }
        FUN_00481c30(*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x2c),local_4c,local_58,local_ec,
                     0x3f800000,(float)*(int *)(param_1 + 0x1998),0x42480000,0);
        return;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x28);
      if (iVar2 != 0) {
        FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x344) + 0x2c);
      if (iVar2 != 0) {
        FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00472750(int param_1,float param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined local_40 [12];
  undefined4 local_34;
  undefined local_30 [12];
  undefined4 local_24;
  undefined local_20 [12];
  undefined4 local_14;
  undefined local_10 [12];
  undefined4 local_4;

  iVar3 = param_1;
  if (*(int *)(param_1 + 0x344) != 0) {
    if (param_2 == 1.401298e-45) {
      iVar5 = 7;
      iVar4 = 6;
      param_1 = 7;
    }
    else {
      param_1 = 9;
      iVar4 = 8;
      iVar5 = 9;
    }
    if (((byte)*(undefined4 *)(iVar3 + 0x60) & 0xf) == 2) {
      _DAT_0050caf8 = 1000.0;
    }
    param_2 = _DAT_0050caf8 - (float)(int)*(short *)(iVar3 + 4) * 0.1;
    if (0.0 < param_2) {
      param_2 = param_2 * param_2;
    }
    if (param_2 < 0.01) {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x344) + iVar4 * 4);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
      }
      FUN_00431100(iVar4 * 0x40 + 0x350 + iVar3,0,0,0xc7c35000);
      FUN_004313d0(iVar5 * 0x40 + 0x350 + iVar3);
      return;
    }
    local_5c = param_2 * 8.0;
    if (1.0 < local_5c) {
      local_5c = 1.0;
    }
    param_2 = param_2 * 0.1;
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
    local_58 = *param_3 - *param_4;
    local_54 = param_3[1] - param_4[1];
    local_50 = param_3[2] - param_4[2];
    fVar6 = (float10)FUN_0042f8c0(&local_58);
    FUN_0042fa50(&local_58,1.0 / (float)fVar6,&local_58);
    local_48 = -local_58;
    local_4c = local_54;
    local_44 = 0;
    FUN_0042f9b0(&local_4c);
    FUN_0042f9f0(local_40,&local_58,&local_4c);
    FUN_0042f7d0(local_20,&local_58);
    FUN_0042f7d0(local_30,&local_4c);
    local_34 = 0;
    local_24 = 0;
    local_14 = 0;
    local_4 = 0x3f800000;
    FUN_0042fa50(local_10,0x3f000000,param_3);
    FUN_0042fa80(local_10,local_10,0x3f000000,param_4);
    iVar5 = iVar4 * 0x40 + 0x350 + iVar3;
    FUN_0044bb10(iVar5,local_40);
    FUN_004310b0(local_40,param_2 * 0.2,param_2,local_5c * (float)fVar6 * 0.05);
    iVar1 = param_1 * 0x40 + 0x350 + iVar3;
    FUN_0044bb10(iVar1,local_40);
    iVar2 = *(int *)(iVar4 * 4 + *(int *)(iVar3 + 0x344));
    if (iVar2 != 0) {
      FUN_00431a50(iVar2,2,3,0x10,2);
    }
    iVar2 = *(int *)(*(int *)(iVar3 + 0x344) + param_1 * 4);
    if (iVar2 != 0) {
      FUN_00431640(iVar2,iVar1);
    }
    iVar3 = *(int *)(iVar4 * 4 + *(int *)(iVar3 + 0x344));
    if (iVar3 != 0) {
      FUN_00431640(iVar3,iVar5);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00472a50(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float local_a0;
  undefined local_94 [64];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined local_40 [64];

  if (*(int *)(param_1 + 0x344) == 0) {
    return;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xec);
  uVar3 = **(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18);
  if (iVar6 != 0) {
    FUN_00431a50(iVar6,2,3,0x10,2);
  }
  FUN_0044bb10(local_40,param_1 + 0x20);
  fVar1 = *(float *)(param_1 + 0x1f0) * -0.05;
  local_50 = *(float *)(param_1 + 0x1e70);
  if (fVar1 < -1.0) {
    fVar1 = -1.0;
  }
  else if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  local_48 = (fVar1 - -1.0) * -0.5;
  local_44 = (1.0 - fVar1) * -0.5;
  if (0x4b < *(int *)(param_1 + 0x1998)) {
    return;
  }
  if (*(int *)(param_1 + 0x344) == 0) {
    return;
  }
  fVar4 = local_44 - local_48;
  fVar7 = (float10)FUN_00470510(param_1,0x2e,fVar4 * 40.0,0,0x42960000,0x42960000,0xc2200000,
                                0x42200000);
  local_54 = (float)fVar7;
  fVar7 = (float10)FUN_00470510(param_1,0x2f,0,0x42340000,0x41a00000,0x42480000,0,0x41f00000);
  local_50 = (float)fVar7;
  fVar4 = fVar4 * 30.0;
  local_4c = fVar4;
  fVar7 = (float10)FUN_00470510(param_1,0x20,fVar4,0x42340000,0x41a00000,0x42480000,0,0x41f00000);
  fVar1 = (float)fVar7;
  fVar5 = (local_48 - local_44) * 30.0;
  local_4c = fVar5;
  fVar7 = (float10)FUN_00470510(param_1,0x12,fVar5,0x42340000,0x41a00000,0x42480000,0,0x41f00000);
  fVar2 = (float)fVar7;
  fVar7 = (float10)FUN_00470510(param_1,0x23,fVar4,0x42340000,0x42a00000,0x42a00000,0,0x41f00000);
  local_48 = (float)fVar7;
  fVar7 = (float10)FUN_00470510(param_1,0x15,fVar5,0x42340000,0x42a00000,0x42a00000,0,0x41f00000);
  fVar4 = *(float *)(param_1 + 0x1a0) + *(float *)(param_1 + 0x1a0);
  local_4c = (float)fVar7;
  if (fVar4 < 100.0) {
    fVar4 = 100.0;
  }
  if (700.0 < fVar4) {
    fVar4 = 700.0;
  }
  local_a0 = (float)_DAT_00e22a40 * fVar4 + *(float *)(param_1 + 0x17a0);
  if (local_a0 < -180.0) {
    local_a0 = local_a0 - -360.0;
  }
  if (180.0 < local_a0) {
    local_a0 = local_a0 - 360.0;
  }
  *(float *)(param_1 + 0x17a0) = local_a0;
  switch(uVar3) {
  case 0:
    FUN_00431020(local_94,0,fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,-local_48,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,local_48,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x58);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xbc);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,-local_4c,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xb8);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,local_4c,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x90);
    if (iVar6 == 0) {
      return;
    }
    FUN_00431640(iVar6,local_94);
    return;
  case 1:
    FUN_00431020(local_94,0,0,local_a0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,local_54,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xb8);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xbc);
    break;
  case 2:
    FUN_00431020(local_94,0,-fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    goto joined_r0x00473387;
  case 3:
    FUN_00431020(local_94,0,0,local_a0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xb8);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xbc);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,local_54,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xc0);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xc4);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 200);
    goto LAB_00473367;
  case 4:
    fVar1 = -fVar1;
    local_50 = fVar1;
    FUN_00431020(local_94,fVar1,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    fVar2 = -fVar2;
    local_50 = fVar2;
    FUN_00431020(local_94,fVar2,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,0,-local_54);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xb8);
LAB_00473367:
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xcc);
joined_r0x00473387:
    if (iVar6 == 0) {
      return;
    }
    goto LAB_00473dbf;
  case 5:
    FUN_00431020(local_94,0,0,local_a0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x90);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x58);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x58);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 100);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x90);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x9c);
    break;
  case 6:
    FUN_00431020(local_94,local_54,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 200);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xd0);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,0,-local_54);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xcc);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xd4);
    break;
  case 7:
    FUN_00431020(local_94,0,fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    break;
  case 8:
    FUN_00431020(local_94,0,0,local_a0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2 * -2.0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar1 * -2.0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    break;
  default:
    goto switchD_00472cfa_caseD_9;
  case 10:
    FUN_00431020(local_94,-fVar1,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,fVar1,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,-fVar2,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,fVar2,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,local_50,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 200);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xcc);
    break;
  case 0xc:
    FUN_00431020(local_94,0,local_50,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xd0);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xd8);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,local_54 * 0.5,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 200);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xd4);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-local_54 * 0.5,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xcc);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xdc);
    break;
  case 0xd:
    FUN_00431020(local_94,0,0,local_a0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    break;
  case 0xe:
    FUN_00431020(local_94,0,-fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x90);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x94);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x98);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x9c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xa0);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xa4);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x58);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x5c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x60);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 100);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x68);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x6c);
    break;
  case 0xf:
    FUN_00431020(local_94,0,-fVar1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x80);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x84);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x88);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x8c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    FUN_00431020(local_94,0,-fVar2,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x48);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x4c);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x50);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0x54);
    break;
  case 0x16:
    FUN_00431020(local_94,local_54,0,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xc0);
    if (iVar6 != 0) {
      FUN_00431640(iVar6,local_94);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x344) + 0xc4);
  }
  if (iVar6 != 0) {
LAB_00473dbf:
    FUN_00431640(iVar6,local_94);
  }
switchD_00472cfa_caseD_9:
  return;
}



void FUN_00473e40(undefined4 *param_1,int param_2)

{
  float10 fVar1;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined local_68 [12];
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  FUN_0044eeb0(param_2 + 0xac,local_40,0x3f800000);
  FUN_0042fa80(&local_80,&local_10,0x42480000,local_40);
  local_78 = local_78 - -1000.0;
  local_5c = local_80;
  local_58 = local_7c;
  local_44 = 0x44bb8000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0xbf800000;
  local_54 = local_78;
  fVar1 = (float10)FUN_00444d10(*(undefined4 *)(param_2 + 0x13c),&local_5c,&local_74,local_68);
  if (fVar1 < (float10)0.0) {
    *param_1 = local_10;
    param_1[1] = local_c;
    param_1[2] = local_8;
    return;
  }
  *param_1 = local_74;
  param_1[1] = local_70;
  param_1[2] = local_6c - -20.0;
  return;
}



void FUN_00473f40(int param_1,float param_2)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [64];

  FUN_0044eeb0(param_1 + 0xac,local_40,param_2);
  FUN_00430b80(local_40,&local_58);
  *(undefined4 *)(param_1 + 8) = local_58;
  *(undefined4 *)(param_1 + 0xc) = local_54;
  *(undefined4 *)(param_1 + 0x10) = local_50;
  *(undefined4 *)(param_1 + 0x14) = local_4c;
  *(undefined4 *)(param_1 + 0x18) = local_48;
  *(undefined4 *)(param_1 + 0x1c) = local_44;
  FUN_00431060(param_1 + 0x20,(undefined4 *)(param_1 + 8));
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff65fdef;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xff3fffff;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfbffffff;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x10e) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe0);
  }
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0x42000000;
  FUN_0042f7b0(param_1 + 0x194,0,0,0xbf800000);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0x42c80000;
  FUN_0042f7b0(param_1 + 0x1b8,0,0,0);
  *(undefined4 *)(param_1 + 0x1efc) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  FUN_0042f7b0(param_1 + 0x1c4,0,0,0);
  FUN_0042f7b0(param_1 + 0x1d0,0,0,0);
  FUN_0042f7b0(param_1 + 0x1dc,0,0,0);
  FUN_0042f7b0(param_1 + 0x154,0,0,0);
  FUN_0042f7b0(param_1 + 0x144,0,0,0x3f800000);
  FUN_0042f7d0(param_1 + 0x16c,param_1 + 0x50);
  FUN_0042f7d0(param_1 + 0x178,param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x1f18) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x1f14) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x19b0) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0x42700000;
  *(undefined4 *)(param_1 + 0x19ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19b4) = 0x3f800000;
  return;
}



void FUN_004741d0(int param_1,byte param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  bVar2 = false;
  uVar1 = *(uint *)(param_1 + 0x60);
  if (((uVar1 & 0x20) == 0) && ((*(uint *)(param_1 + 100) & 0x4000000) == 0)) {
    return;
  }
  if ((*(uint *)(param_1 + 100) & 0x4000) != 0) {
    return;
  }
  if ((uVar1 & 0x7000) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x60) = uVar1 & 0xff5fffff;
  iVar3 = FUN_004816b0();
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x4000;
  *(float *)(param_1 + 0x310) = (float)iVar3 * 4.656613e-10 - -2.0;
  if ((*(byte *)(param_1 + 0x60) & 0x20) != 0) {
    FUN_0040a120(0);
  }
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) == 0) goto LAB_004742fe;
    local_18 = *(undefined4 *)(param_1 + 0x400);
    local_10 = *(undefined4 *)(param_1 + 0x408);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10000;
    local_14 = *(undefined4 *)(param_1 + 0x404);
    uVar4 = 2;
  }
  else {
    local_14 = *(undefined4 *)(param_1 + 0x3c4);
    local_10 = *(undefined4 *)(param_1 + 0x3c8);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x8000;
    local_18 = *(undefined4 *)(param_1 + 0x3c0);
    uVar4 = 1;
  }
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  bVar2 = true;
  FUN_0046e950(param_1,uVar4,&local_c,0x3e99999a);
LAB_004742fe:
  if (!bVar2) {
    FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),0xd,0xe,0xd,0xe,0xd,
                 param_1 + 0x50);
    return;
  }
  FUN_0046a5f0(3,0,0x40000000,&local_18,0x3f800000);
  FUN_0046a5f0(3,0,0x400ccccd,&local_18,0x40400000);
  iVar3 = FUN_004816b0();
  if (0.33 <= (float)iVar3 * 4.656613e-10) {
    uVar4 = 0x35;
    if (0.66 <= (float)iVar3 * 4.656613e-10) {
      uVar4 = 0x36;
    }
  }
  else {
    uVar4 = 0x34;
  }
  iVar3 = FUN_004816b0();
  FUN_00426d10(uVar4,7,(float)iVar3 * 4.656613e-10 * 0.2 - -0.1,0x3f800000,&local_18,0,0,0x41200000,
               0x43fa0000);
  iVar3 = FUN_004816b0();
  if (0.33 <= (float)iVar3 * 4.656613e-10) {
    uVar4 = 0x35;
    if (0.66 <= (float)iVar3 * 4.656613e-10) {
      uVar4 = 0x36;
    }
  }
  else {
    uVar4 = 0x34;
  }
  iVar3 = FUN_004816b0();
  FUN_00426d10(uVar4,7,(float)iVar3 * 4.656613e-10 * 0.2 - -0.1,0x3f800000,&local_18,0,0,0x41200000,
               0x43fa0000);
  FUN_00427590(1,**(undefined4 **)(*(int *)(param_1 + 0x1e70) + 0x18),9,9,9,9,9,param_1 + 0x50);
  return;
}

#endif
