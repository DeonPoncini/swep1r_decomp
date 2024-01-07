#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"
#if 0

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004550d0(int param_1,undefined4 param_2,float param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined2 uVar3;
  short *psVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_8;

  iVar7 = -1;
  iVar6 = 0;
  psVar4 = &DAT_00e2a6b0;
  do {
    if (*psVar4 != 0) {
      iVar7 = iVar6;
    }
    psVar4 = psVar4 + 1;
    iVar6 = iVar6 + 1;
  } while ((int)psVar4 < 0xe2a6be);
  FUN_004285d0(0x57,1);
  uVar5 = __ftol();
  uVar5 = __ftol(uVar5);
  FUN_00428660(0x57,uVar5);
  uVar1 = __ftol();
  FUN_00428740(0x57,0xffffffa3,0xffffffbe,0x11,uVar1);
  uVar3 = __ftol();
  uVar5 = FUN_00421360(s__SCREENTEXT_475__f4_sVehicle_Sta_004c4820);
  uVar5 = __ftol(0x32,0xffffffff,0xffffffff,uVar1,uVar5);
  FUN_00450530(uVar3,uVar5);
  iVar6 = 0x58;
  do {
    FUN_004285d0(iVar6,1);
    uVar5 = __ftol();
    FUN_00428660(iVar6,uVar3,uVar5);
    FUN_00428740(iVar6,0x32,0xffffffff,0xffffffff,uVar1);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x5f);
  uVar5 = FUN_00421360(s__SCREENTEXT_403__f4_sTraction_004c4800);
  uVar5 = __ftol(0x32,0xffffffff,0xffffffff,uVar1,uVar5);
  FUN_00450530(uVar3,uVar5);
  uVar5 = FUN_00421360(s__SCREENTEXT_404__f4_sTurning_004c47e0);
  uVar5 = __ftol(0x32,0xffffffff,0xffffffff,uVar1,uVar5);
  FUN_00450530(uVar3,uVar5);
  uVar5 = FUN_00421360(s__SCREENTEXT_405__f4_sAccel__004c47c4);
  uVar5 = __ftol(0x32,0xffffffff,0xffffffff,uVar1,uVar5);
  FUN_00450530(uVar3,uVar5);
  uVar5 = FUN_00421360(s__SCREENTEXT_406__f4_sTop_Speed_004c47a4);
  uVar5 = __ftol(0x32,0xffffffff,0xffffffff,uVar1,uVar5);
  FUN_00450530(uVar3,uVar5);
  uVar5 = FUN_00421360(s__SCREENTEXT_407__f4_sAir_Brake_004c4784);
  uVar5 = __ftol(0x32,0xffffffff,0xffffffff,uVar1,uVar5);
  FUN_00450530(uVar3,uVar5);
  uVar5 = FUN_00421360(s__SCREENTEXT_408__f4_sCooling_004c4764);
  uVar5 = __ftol(0x32,0xffffffff,0xffffffff,uVar1,uVar5);
  FUN_00450530(uVar3,uVar5);
  uVar5 = FUN_00421360(s__SCREENTEXT_409__f4_sRepair_004c4748);
  uVar5 = __ftol(0x32,0xffffffff,0xffffffff,uVar1,uVar5);
  FUN_00450530(uVar3,uVar5);
  FUN_004285d0(0x5f,1);
  uVar5 = __ftol();
  uVar5 = __ftol(uVar5);
  FUN_00428660(0x5f,uVar5);
  FUN_00428740(0x5f,0x32,0xffffffff,0xffffffff,uVar1);
  FUN_004285d0(0x60,1);
  uVar5 = __ftol();
  uVar5 = __ftol(uVar5);
  FUN_00428660(0x60,uVar5);
  FUN_00428740(0x60,0x32,0xffffffff,0xffffffff,uVar1);
  if (-1 < iVar7) {
    FUN_004285d0(0x61,1);
    uVar5 = __ftol();
    uVar5 = __ftol(uVar5);
    FUN_00428660(0x61,uVar5);
    FUN_00428740(0x61,0x32,0xffffffff,0xffffffff,uVar1);
  }
  iVar6 = 0;
  uVar3 = __ftol();
  local_8 = CONCAT22((short)((uint)(param_3 - -7.0) >> 0x10),uVar3);
  do {
    iVar8 = DAT_0050c928 + 0x82;
    DAT_0050c928 = DAT_0050c928 + 1;
    FUN_004285d0(iVar8,1);
    uVar3 = __ftol();
    iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),uVar3);
    FUN_00428660(iVar8,local_8,iVar7);
    uVar2 = uVar1;
    if ((float)(&DAT_00e2aec0)[iVar6] == (float)(&DAT_00e2af40)[iVar6]) {
      FUN_004286f0(iVar8,(float)(&DAT_00e2aec0)[iVar6] * 12.0,0x3f200000);
      uVar10 = 0xffffffff;
      uVar9 = 0xffffffff;
      uVar5 = 0x32;
LAB_00455698:
      FUN_00428740(iVar8,uVar5,uVar9,uVar10,uVar2);
    }
    else {
      if ((float)(&DAT_00e2aec0)[iVar6] < (float)(&DAT_00e2af40)[iVar6]) {
        FUN_004286f0(iVar8,(float)(&DAT_00e2aec0)[iVar6] * 12.0,0x3f200000);
        FUN_00428740(iVar8,0x32,0xffffffff,0xffffffff,uVar1);
        iVar8 = DAT_0050c928 + 0x82;
        DAT_0050c928 = DAT_0050c928 + 1;
        FUN_004285d0(iVar8,1);
        uVar5 = __ftol(iVar7);
        FUN_00428660(iVar8,uVar5);
        FUN_004286f0(iVar8,((float)(&DAT_00e2af40)[iVar6] - (float)(&DAT_00e2aec0)[iVar6]) * 12.0,
                     0x3f200000);
        FUN_004816b0();
        uVar2 = __ftol();
LAB_00455692:
        uVar10 = 0x11;
        uVar9 = 0xffffffbe;
        uVar5 = 0xffffffa3;
        goto LAB_00455698;
      }
      FUN_004286f0(iVar8,(float)(&DAT_00e2af40)[iVar6] * 12.0,0x3f200000);
      FUN_00428740(iVar8,0x32,0xffffffff,0xffffffff,uVar1);
      iVar8 = DAT_0050c928 + 0x82;
      DAT_0050c928 = DAT_0050c928 + 1;
      FUN_004285d0(iVar8,1);
      uVar5 = __ftol(iVar7);
      FUN_00428660(iVar8,uVar5);
      FUN_004286f0(iVar8,((float)(&DAT_00e2aec0)[iVar6] - (float)(&DAT_00e2af40)[iVar6]) * 12.0,
                   0x3f200000);
      FUN_004816b0();
      uVar5 = __ftol();
      FUN_00428740(iVar8,0xffffffff,100,100,uVar5);
      if (*(int *)(param_1 + 8) == 8) goto LAB_00455692;
    }
    iVar6 = iVar6 + 1;
    if (6 < iVar6) {
      return;
    }
  } while( true );
}



void FUN_004556c0(void)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;

  iVar2 = 0;
  if (0 < DAT_00e295cc) {
    ppiVar3 = (int **)&DAT_00e29b38;
    do {
      iVar1 = **ppiVar3;
      if (iVar1 != 0) {
        if (iVar2 == DAT_0050c950) {
          *(undefined2 *)(iVar1 + 0xe) = 0;
          *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 4;
        }
        else {
          *(undefined2 *)(iVar1 + 0xe) = 1;
          *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 4;
        }
      }
      iVar2 = iVar2 + 1;
      ppiVar3 = ppiVar3 + 1;
    } while (iVar2 < DAT_00e295cc);
  }
  return;
}



void FUN_00455720(void)

{
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];

  FUN_0042f7b0(local_18,0x437f0000,0x437f0000,0x437f0000);
  FUN_0042f7b0(local_24,0x437f0000,0x437f0000,0x437f0000);
  FUN_0042f7b0(local_c,0,0x42f00000,0);
  FUN_00483840(0,local_18,local_24,local_c);
  FUN_0042f7b0(local_18,0,0,0);
  FUN_0042f7b0(local_24,0x43000000,0x43000000,0x43000000);
  FUN_00483840(1,local_18,local_24,local_c);
  return;
}



void FUN_004557e0(float param_1,int param_2,int param_3,float param_4,undefined4 param_5,
                 float param_6,float param_7)

{
  int iVar1;
  undefined uVar2;
  undefined4 uVar3;

  if (*(int *)((int)param_1 + 8) == 8) {
    param_6 = 0.375;
    param_1 = 3.75;
  }
  else {
    param_1 = param_7 * 0.125;
    param_6 = (param_6 - 2.0) * 0.125;
    param_2 = param_2 + 3;
    param_3 = param_3 + 1;
  }
  iVar1 = DAT_0050c92c + 0x90;
  DAT_0050c92c = DAT_0050c92c + 1;
  FUN_004285d0(iVar1,1);
  FUN_00428660(iVar1,param_2,param_3);
  FUN_004286f0(iVar1,param_6,param_1 * (1.0 - param_4));
  uVar2 = __ftol();
  FUN_00428740(iVar1,0,0,0,uVar2);
  iVar1 = DAT_0050c92c + 0x90;
  DAT_0050c92c = DAT_0050c92c + 1;
  FUN_004285d0(iVar1,1);
  uVar3 = __ftol();
  FUN_00428660(iVar1,param_2,uVar3);
  FUN_004286f0(iVar1,param_6,param_1 * param_4);
  uVar3 = __ftol(0,uVar2);
  uVar3 = __ftol(uVar3);
  FUN_00428740(iVar1,uVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00455930(undefined4 param_1)

{
  int iVar1;
  undefined uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  undefined4 *puVar7;
  int **ppiVar8;
  int iVar9;
  float local_98;
  undefined local_90 [12];
  uint local_84;
  undefined local_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined local_50 [16];
  undefined local_40 [48];
  undefined local_10 [16];

  local_98 = _DAT_0050c958 * 2.5 * 255.0;
  if (254.0 < local_98) {
    local_98 = 254.0;
  }
  FUN_004550d0(param_1,0x41a00000,0x43070000);
  iVar9 = 0;
  if (DAT_00e295cc != -1 && -1 < DAT_00e295cc + 1) {
    uVar2 = __ftol();
    do {
      iVar5 = iVar9 + 0x62;
      FUN_004285d0(iVar5,1);
      uVar3 = __ftol();
      uVar4 = __ftol();
      FUN_00428660(iVar5,uVar3,uVar4);
      if (iVar9 == DAT_00e295cc) {
        uVar4 = __ftol();
        FUN_00428660(iVar5,uVar3,uVar4);
      }
      FUN_00428740(iVar5,0x32,0xffffffff,0xffffffff,uVar2);
      iVar5 = iVar9 + 0x6a;
      FUN_004285d0(iVar5,1);
      uVar4 = __ftol();
      uVar4 = __ftol(uVar4);
      FUN_00428660(iVar5,uVar4);
      FUN_00428740(iVar5,0xffffffa3,0xffffffbe,0x11,uVar2);
      if (iVar9 == DAT_0050c950) {
        cVar6 = (DAT_00e295cc <= iVar9) + 'r';
        FUN_004285d0(cVar6,1);
        uVar3 = __ftol();
        uVar4 = __ftol();
        FUN_00428660(cVar6,uVar3,uVar4);
        if (iVar9 == DAT_00e295cc) {
          uVar4 = __ftol();
          FUN_00428660(cVar6,uVar3,uVar4);
        }
        FUN_00428740(cVar6,0x32,0xffffffff,0xffffffff,uVar2);
      }
      if (iVar9 < DAT_00e295cc) {
        local_84 = (uint)(byte)(&DAT_00e35aa8)[iVar9];
        uVar4 = __ftol((float)local_84 * 0.003921568,local_98,0x40400000,0x41f00000);
        uVar4 = __ftol(uVar4);
        FUN_004557e0(param_1,uVar4);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < DAT_00e295cc + 1);
  }
  iVar9 = 0;
  if (DAT_00e295cc != -1 && -1 < DAT_00e295cc + 1) {
    puVar7 = &DAT_00e2b228;
    ppiVar8 = (int **)&DAT_00e29b38;
    iVar5 = DAT_00e295cc;
    do {
      iVar1 = **ppiVar8;
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        if ((iVar9 == DAT_00e295cc) && ((*ppiVar8)[3] != 0)) {
          FUN_00431a50((*ppiVar8)[3],2,0xfffffffc,0x10,3);
        }
        FUN_0043e210();
        FUN_0044bb10(local_80,&DAT_00e298c0);
        FUN_0042f7d0(local_90,&DAT_00e298f0);
        FUN_0042fa80(local_90,local_90,puVar7[-1],&DAT_00e298c0);
        FUN_0042fa80(local_90,local_90,*puVar7,&DAT_00e298d0);
        FUN_0042fa80(local_90,local_90,puVar7[1],&DAT_00e298e0);
        FUN_0042f7d0(local_50,local_90);
        FUN_0044bb10(local_40,local_80);
        if ((iVar9 == DAT_0050c950) && (iVar9 != DAT_00e295cc)) {
          FUN_00431410(local_40,local_40,_DAT_0050c8f0 * 4.0,local_60,local_5c,local_58);
          FUN_00431410(local_40,local_40,0x42340000,local_70,local_6c,local_68);
          FUN_00431410(local_40,local_40,_DAT_0050c8f0 * -1.0,local_60,local_5c,local_58);
        }
        local_98 = _DAT_0050c958 * 2.5 * 0.003;
        if (iVar9 == DAT_00e295cc) {
          local_98 = local_98 * 5.5;
        }
        FUN_00431450(local_40,local_98,local_98,local_98,local_40);
        FUN_0042f7d0(local_10,local_90);
        FUN_00431640(iVar1,local_40);
        FUN_00431a50(iVar1,2,3,0x10,2);
        iVar5 = DAT_00e295cc;
      }
      iVar9 = iVar9 + 1;
      ppiVar8 = ppiVar8 + 1;
      puVar7 = puVar7 + 0xe;
    } while (iVar9 < iVar5 + 1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00455dc0(void)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined local_c0 [12];
  undefined4 local_b4;
  undefined local_b0 [48];
  undefined local_80 [16];
  undefined local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined local_30 [12];
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];

  iVar2 = 0;
  if (0 < DAT_00e295cc) {
    puVar4 = &DAT_00e2a6c4;
    ppiVar3 = (int **)&DAT_00e29a88;
    do {
      iVar1 = **ppiVar3;
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        local_b4 = 0x3d4ccccd;
        FUN_0042f7d0(local_30,puVar4);
        FUN_0042f7b0(local_24,puVar4[9],puVar4[10],0);
        FUN_00431060(local_b0,local_30);
        if ((iVar2 == DAT_00e295d0) && ((DAT_0050c470 != 0 || (DAT_0050c954 != 0)))) {
          FUN_0044bb10(local_70,&DAT_00e298c0);
          FUN_0044bb10(local_b0,&DAT_00e298c0);
          FUN_0042f7d0(local_80,puVar4);
          if (DAT_0050c470 == 0) {
            if (DAT_0050c954 != 0) goto LAB_00455f61;
          }
          else if (DAT_0050c954 == 0) {
            FUN_00431410(local_b0,local_b0,_DAT_0050c8f0 * 4.0,local_50,local_4c,local_48);
            FUN_00431410(local_b0,local_b0,0x42340000,local_60,local_5c,local_58);
            FUN_00431410(local_b0,local_b0,_DAT_0050c8f0 * -1.0,local_50,local_4c,local_48);
          }
          else {
LAB_00455f61:
            FUN_00431020(local_b0,puVar4[9],0,0);
          }
          local_b4 = 0x3c23d70b;
          FUN_0042f7d0(local_80,puVar4);
        }
        FUN_00431450(local_b0,local_b4,local_b4,local_b4,local_b0);
        FUN_00431640(iVar1,local_b0);
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      iVar2 = iVar2 + 1;
      ppiVar3 = ppiVar3 + 1;
      puVar4 = puVar4 + 0xe;
    } while (iVar2 < DAT_00e295cc);
  }
  if ((((DAT_0050c470 != 0) && (DAT_0050c934 != 0)) && (DAT_0050c468 == 0)) &&
     (iVar2 = *(int *)(&DAT_00e29b38)
                      [(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10]],
     iVar2 != 0)) {
    FUN_00431a50(iVar2,2,0xfffffffc,0x10,3);
    FUN_0043e210();
    FUN_0044bb10(local_70,&DAT_00e298c0);
    FUN_0042f7d0(local_c0,&DAT_00e298f0);
    FUN_0042fa80(local_c0,local_c0,0x40c00000,&DAT_00e298c0);
    FUN_0042fa80(local_c0,local_c0,0x41f00000,&DAT_00e298d0);
    FUN_0042fa80(local_c0,local_c0,0x40600000,&DAT_00e298e0);
    FUN_0042f7d0(local_18,local_c0);
    FUN_0042f7b0(local_c,0,0,0);
    FUN_00431060(local_b0,local_18);
    FUN_00431410(local_b0,local_b0,_DAT_0050c8f0 * 4.0,local_50,local_4c,local_48);
    FUN_00431410(local_b0,local_b0,0x42340000,local_60,local_5c,local_58);
    FUN_00431410(local_b0,local_b0,_DAT_0050c8f0 * -1.0,local_50,local_4c,local_48);
    FUN_00431450(local_b0,0x3b83126f,0x3b83126f,0x3b83126f,local_b0);
    FUN_0042f7d0(local_80,local_c0);
    FUN_00431640(iVar2,local_b0);
    FUN_00431a50(iVar2,2,3,0x10,2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00456200(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int **ppiVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined local_64 [8];
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [48];
  float local_10 [2];
  float local_8;

  fVar7 = (float10)FUN_0042f560(_DAT_00e298f0 - _DAT_00e2af90,_DAT_00e2af94 - _DAT_00e298f4);
  local_70 = 0x42a00000;
  local_6c = 0x42960000;
  iVar6 = 0;
  local_68 = 50.0;
  if ((char)DAT_00e35aa0 != '\0') {
    ppiVar5 = (int **)&DAT_00e29a74;
    do {
      iVar3 = FUN_004816b0();
      fVar1 = (float)iVar3 * 4.656613e-10 * 2.5 - -2.0;
      FUN_0044afb0(ppiVar5[-0x29],local_64);
      if (-157.0 < local_5c) {
        if (*ppiVar5 == (int *)0x0) {
          return;
        }
        iVar3 = **ppiVar5;
        if (iVar3 != 0) {
          FUN_00431a50(iVar3,2,0xfffffffc,0x10,3);
          FUN_0042b640(iVar3,0,0,200,200,0xff,0xff);
          iVar4 = FUN_00450b30(0x456c6d6f,iVar6 + 0x34);
          fVar8 = (float10)FUN_0044b470(*(undefined4 *)(iVar4 + 0x34));
          if (((float10)(int)DAT_004c25f8 * (float10)0.0666 <= fVar8) &&
             (fVar8 = (float10)FUN_0044b470(*(undefined4 *)(iVar4 + 0x34)),
             fVar8 <= (float10)(int)DAT_004c25fa * (float10)0.0666)) {
            local_70 = 0x42a00000;
            local_6c = 0x42960000;
            iVar4 = FUN_004816b0();
            local_68 = ((float)iVar4 * 4.656613e-10 * 120.0 - 30.0) - -50.0;
            FUN_00431020(local_40,(float)fVar7,0,0xc2b40000);
            FUN_0042f7d0(local_10,local_64);
            if (0.0 <= local_10[0]) {
              fVar2 = 30.0;
            }
            else {
              fVar2 = -30.0;
            }
            local_10[0] = local_10[0] - fVar2;
            local_8 = local_8 - -13.0;
            FUN_00431450(local_40,fVar1,fVar1,fVar1,local_40);
            FUN_00431640(iVar3,local_40);
            FUN_00431a50(iVar3,2,3,0x10,2);
          }
        }
        iVar3 = *ppiVar5[-4];
        if (iVar3 != 0) {
          FUN_00431a50(iVar3,2,0xfffffffc,0x10,3);
          FUN_00431020(local_40,0,0,0);
          FUN_0042f7d0(local_10,local_64);
          FUN_00431450(local_40,0x3e99999a,0x3e99999a,0x3e99999a,local_40);
          local_8 = local_8 - 30.0;
          FUN_00431640(iVar3,local_40);
          FUN_00431a50(iVar3,2,3,0x10,2);
          iVar3 = *ppiVar5[-0x52];
          if (iVar3 != 0) {
            FUN_00431a50(iVar3,2,0xfffffffc,0x10,3);
            FUN_00431020(local_40,0,0,0);
            FUN_0042f7d0(local_10,local_64);
            FUN_00431450(local_40,0x3e99999a,0x3e99999a,0x3e99999a,local_40);
            local_8 = -157.0;
            FUN_00431640(iVar3,local_40);
            FUN_00431a50(iVar3,2,3,0x10,2);
          }
        }
      }
      iVar6 = iVar6 + 1;
      ppiVar5 = ppiVar5 + 1;
    } while (iVar6 < (int)(DAT_00e35aa0 & 0xff));
  }
  local_4c = 0x437f0000;
  local_48 = 0x437f0000;
  local_44 = 0x43480000;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0xc71c4000;
  FUN_00483840(0xffffffff,&local_70,&local_4c,&local_58);
  return;
}



void FUN_004565e0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_38;
  float local_34;
  int local_30;
  undefined local_2c [4];
  int local_28 [4];
  undefined4 local_18;
  float local_14 [4];
  undefined4 local_4;

  local_28[0] = -1;
  local_28[1] = 0xffffffff;
  local_28[2] = 0xffffffff;
  local_28[3] = 0xffffffff;
  local_14[1] = 0.0;
  local_18 = 0xffffffff;
  local_14[2] = 0.0;
  local_14[3] = 0.0;
  local_4 = 0;
  iVar8 = 0;
  local_14[0] = 0.0;
  iVar10 = (&DAT_00e98f40)[param_1 * 0x17];
  iVar4 = (&DAT_00e98f44)[param_1 * 0x17] - iVar10;
  iVar1 = iVar4 + 3;
  local_38 = iVar4 + 2;
  local_30 = local_38;
  if (iVar10 <= (int)(&DAT_00e98f44)[param_1 * 0x17]) {
    pfVar7 = (float *)(&DAT_00e293d4 + iVar10 * 0x18);
    do {
      FUN_0042f380(pfVar7[-2],local_2c,&local_34);
      if (local_34 * pfVar7[-4] <= 0.0) {
        local_14[local_38] = *pfVar7;
        local_28[local_38] = (iVar10 - (&DAT_00e98f40)[param_1 * 0x17]) + 0x46;
        local_38 = local_38 + -1;
      }
      else {
        local_14[iVar8] = *pfVar7;
        local_28[iVar8] = (iVar10 - (&DAT_00e98f40)[param_1 * 0x17]) + 0x46;
        iVar8 = iVar8 + 1;
      }
      iVar10 = iVar10 + 1;
      pfVar7 = pfVar7 + 6;
    } while (iVar10 <= (int)(&DAT_00e98f44)[param_1 * 0x17]);
  }
  local_28[iVar8] = param_1 + 0x3d;
  local_28[iVar8 + 1] = 0x45;
  if (0 < iVar8 + -1) {
    iVar10 = 1;
    iVar9 = 0;
    iVar11 = iVar10;
    do {
      for (; iVar10 < iVar8; iVar10 = iVar10 + 1) {
        if (*(float *)((int)local_14 + iVar9) < local_14[iVar10]) {
          iVar2 = *(int *)((int)local_28 + iVar9);
          *(int *)((int)local_28 + iVar9) = local_28[iVar10];
          local_28[iVar10] = iVar2;
        }
      }
      iVar10 = iVar11 + 1;
      iVar9 = iVar9 + 4;
      bVar3 = iVar11 < iVar8 + -1;
      iVar11 = iVar10;
    } while (bVar3);
  }
  if (local_38 < local_30) {
    iVar10 = local_38 * 4;
    do {
      local_38 = local_38 + 1;
      for (iVar8 = local_38; iVar8 < iVar1; iVar8 = iVar8 + 1) {
        if (local_14[iVar8] < *(float *)((int)local_14 + iVar10)) {
          iVar11 = *(int *)((int)local_28 + iVar10);
          *(int *)((int)local_28 + iVar10) = local_28[iVar8];
          local_28[iVar8] = iVar11;
        }
      }
      iVar10 = iVar10 + 4;
    } while (local_38 < local_30);
    iVar10 = 0;
    piVar6 = &DAT_00e29160;
  }
  else {
    iVar10 = 0;
    piVar6 = &DAT_00e29160;
  }
  do {
    iVar8 = 0;
    if (0 < iVar1) {
      piVar5 = local_28 + iVar10;
      do {
        if (*(int *)(&DAT_00e29900)[local_28[iVar8]] == *piVar6) {
          iVar8 = *piVar5;
          iVar10 = iVar10 + 1;
          piVar5 = piVar5 + 1;
          *piVar6 = *(int *)(&DAT_00e29900)[iVar8];
          iVar8 = iVar4 + 4;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
    piVar6 = piVar6 + 1;
  } while ((int)piVar6 < 0xe293bc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00456800(undefined4 param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int **ppiVar5;
  float local_54;
  float local_50;
  undefined local_4c [12];
  undefined local_40 [48];
  undefined local_10 [16];

  ppiVar5 = (int **)&DAT_00e299f4;
  pfVar4 = (float *)&DAT_00e98f4c;
  do {
    fVar2 = pfVar4[1] * _DAT_00e22a50 + *pfVar4;
    *pfVar4 = fVar2;
    if (360.0 < fVar2) {
      *pfVar4 = fVar2 - 360.0;
    }
    if (*pfVar4 < 0.0) {
      *pfVar4 = *pfVar4 - -360.0;
    }
    fVar2 = pfVar4[3] * _DAT_00e22a50 + pfVar4[2];
    pfVar4[2] = fVar2;
    if (360.0 < fVar2) {
      pfVar4[2] = fVar2 - 360.0;
    }
    if (pfVar4[2] < 0.0) {
      pfVar4[2] = pfVar4[2] - -360.0;
    }
    if ((*ppiVar5 != (int *)0x0) && (iVar3 = **ppiVar5, iVar3 != 0)) {
      FUN_00431a50(iVar3,2,0xfffffffc,0x10,3);
    }
    pfVar4 = pfVar4 + 0x17;
    ppiVar5 = ppiVar5 + 1;
  } while ((int)pfVar4 < 0xe9922c);
  pfVar4 = (float *)&DAT_00e293cc;
  do {
    fVar2 = _DAT_00e22a50 * pfVar4[1] + *pfVar4;
    *pfVar4 = fVar2;
    if (360.0 < fVar2) {
      *pfVar4 = fVar2 - 360.0;
    }
    if (*pfVar4 < 0.0) {
      *pfVar4 = *pfVar4 - -360.0;
    }
    fVar2 = _DAT_00e22a50 * pfVar4[1] + *pfVar4;
    *pfVar4 = fVar2;
    if (360.0 < fVar2) {
      *pfVar4 = fVar2 - 360.0;
    }
    if (*pfVar4 < 0.0) {
      *pfVar4 = *pfVar4 - -360.0;
    }
    pfVar4 = pfVar4 + 6;
  } while ((int)pfVar4 < 0xe29594);
  FUN_004565e0(param_2);
  FUN_0043e210();
  iVar3 = *(int *)(&DAT_00e299f4)[param_2];
  if (iVar3 != 0) {
    FUN_00431a50(iVar3,2,0xfffffffc,0x10,3);
    FUN_0044bb10(local_40,&DAT_00e2af60);
    FUN_0042f7d0(local_4c,&DAT_004c449c);
    FUN_00431410(local_40,local_40,(&DAT_00e98f4c)[param_2 * 0x17],DAT_00e298e0,DAT_00e298e4,
                 DAT_00e298e8);
    FUN_00431410(local_40,local_40,(&DAT_00e98f48)[param_2 * 0x17],DAT_00e298d0,DAT_00e298d4,
                 DAT_00e298d8);
    if (param_2 == 6) {
      fVar2 = param_3 * 0.1 * 1.5;
    }
    else {
      fVar2 = _DAT_004c45d0 * param_3 * 0.1;
    }
    FUN_00431450(local_40,fVar2,fVar2,fVar2,local_40);
    FUN_0042f7d0(local_10,local_4c);
    FUN_00431640(iVar3,local_40);
    FUN_00431a50(iVar3,2,3,0x10,2);
  }
  iVar3 = (&DAT_00e98f40)[param_2 * 0x17];
  if (iVar3 <= (int)(&DAT_00e98f44)[param_2 * 0x17]) {
    pfVar4 = (float *)(&DAT_00e293c4 + iVar3 * 0x18);
    do {
      iVar1 = **(int **)(&DAT_00e29a18 + (iVar3 - (&DAT_00e98f40)[param_2 * 0x17]) * 4);
      if (iVar1 != 0) {
        FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
        FUN_0044bb10(local_40,&DAT_00e2af60);
        FUN_0042f7d0(local_4c,&DAT_004c449c);
        FUN_0042f380(pfVar4[2],&local_50,&local_54);
        FUN_0042fa80(local_4c,local_4c,pfVar4[-1] * local_50 * param_3,&DAT_00e298c0);
        FUN_0042fa80(local_4c,local_4c,local_54 * param_3 * *pfVar4,&DAT_00e298d0);
        FUN_0042fa80(local_4c,local_4c,pfVar4[1] * local_54 * param_3,&DAT_00e298e0);
        FUN_00431410(local_40,local_40,pfVar4[2],DAT_00e298e0,DAT_00e298e4,DAT_00e298e8);
        FUN_00431410(local_40,local_40,(&DAT_00e98f48)[param_2 * 0x17],DAT_00e298d0,DAT_00e298d4,
                     DAT_00e298d8);
        fVar2 = pfVar4[4] * param_3;
        FUN_00431450(local_40,fVar2,fVar2,fVar2,local_40);
        FUN_0042f7d0(local_10,local_4c);
        FUN_00431640(iVar1,local_40);
        FUN_00431a50(iVar1,2,3,0x10,2);
      }
      iVar3 = iVar3 + 1;
      pfVar4 = pfVar4 + 6;
    } while (iVar3 <= (int)(&DAT_00e98f44)[param_2 * 0x17]);
  }
  return;
}



void FUN_00456c70(undefined4 param_1,int param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined local_4c [12];
  undefined local_40 [48];
  undefined local_10 [16];

  param_3 = param_3 * 0.0018;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  iVar1 = *(int *)(&DAT_00e29a88)[param_2];
  if (iVar1 == 0) {
    return;
  }
  FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
  FUN_004313d0(local_40);
  FUN_0042fac0(local_4c,0x3f2aacda,&DAT_00e298f0,0x3eaaa64c,&DAT_00e2af90);
  FUN_00431410(local_40,local_40,0x42b40000,DAT_00e298c0,DAT_00e298c4,DAT_00e298c8);
  FUN_00431410(local_40,local_40,0x43200000,DAT_00e298d0,DAT_00e298d4,DAT_00e298d8);
  switch(param_2) {
  case 0:
  case 1:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xc:
    param_3 = param_3 * 1.5;
    break;
  case 2:
  case 5:
  case 0x11:
  case 0x12:
    param_3 = param_3 * 1.2;
    break;
  case 4:
    param_3 = param_3 * 0.8;
    break;
  case 8:
  case 0x13:
    param_3 = param_3 * 1.3;
    break;
  case 0xb:
    param_3 = param_3 * 1.7;
    break;
  case 0xd:
    param_3 = param_3 * 2.2;
    break;
  case 0xe:
    param_3 = param_3 * 1.8;
    break;
  case 0xf:
  case 0x16:
    param_3 = param_3 * 2.3;
    break;
  case 0x10:
    param_3 = param_3 * 5.0;
    break;
  case 0x17:
  case 0x18:
    param_3 = param_3 * 2.5;
  }
  FUN_004816b0();
  uVar2 = __ftol();
  FUN_0042b640(iVar1,0,0,0,0xff,0,uVar2);
  FUN_00431450(local_40,param_3,param_3,param_3,local_40);
  FUN_0042f7d0(local_10,local_4c);
  FUN_00431640(iVar1,local_40);
  if ((DAT_004c45d4 != param_2) || (DAT_0050c930 != 0)) {
    DAT_004c45d4 = param_2;
    iVar3 = FUN_00482000(iVar1,&DAT_0050c8c8,0);
    if (iVar3 == 0) {
      FUN_0042f7b0(&DAT_0050c8c8,0,0,0);
      FUN_0042f7b0(&DAT_0050c8d4,0xc1200000,0xc1200000,0xc1200000);
    }
  }
  switch(param_2) {
  case 0:
  case 3:
  case 0xc:
    uVar4 = 0;
    uVar2 = 0;
    break;
  case 1:
  case 0xd:
    uVar4 = 0;
    uVar2 = 0;
    break;
  case 2:
    uVar4 = 0;
    uVar2 = 0;
    break;
  case 4:
    uVar4 = 0x40000000;
    uVar2 = 0;
    break;
  case 5:
    uVar4 = 0;
    uVar2 = 0;
    break;
  case 6:
    uVar4 = 0xc0000000;
    uVar2 = 0xc0800000;
    break;
  case 7:
    uVar4 = 0;
    uVar2 = 0xc0800000;
    break;
  case 8:
    uVar4 = 0xbf800000;
    uVar2 = 0;
    break;
  case 9:
    uVar4 = 0;
    uVar2 = 0xc0800000;
    break;
  case 10:
    uVar4 = 0x40000000;
    uVar2 = 0xc0000000;
    break;
  case 0xb:
    uVar4 = 0x40800000;
    uVar2 = 0xc0000000;
    break;
  case 0xe:
    uVar4 = 0x3f800000;
    uVar2 = 0xbf800000;
    break;
  case 0xf:
    uVar4 = 0xc1400000;
    uVar2 = 0;
    break;
  case 0x10:
    uVar4 = 0x3f800000;
    uVar2 = 0xc0800000;
    break;
  case 0x11:
    uVar4 = 0x40000000;
    uVar2 = 0;
    break;
  case 0x12:
    uVar4 = 0x40000000;
    uVar2 = 0;
    break;
  case 0x13:
    uVar4 = 0xc0000000;
    uVar2 = 0xc0800000;
    break;
  case 0x14:
    uVar4 = 0xc0a00000;
    uVar2 = 0;
    break;
  case 0x15:
    uVar4 = 0xc0c00000;
    uVar2 = 0;
    break;
  case 0x16:
    uVar4 = 0xc0c00000;
    uVar2 = 0xc0800000;
    break;
  case 0x17:
    uVar4 = 0x40000000;
    uVar2 = 0x41800000;
    break;
  case 0x18:
    uVar4 = 0x41400000;
    uVar2 = 0xc0c00000;
    break;
  default:
    goto switchD_00456ea8_caseD_19;
  }
  FUN_0042f7b0(&local_58,uVar2,0,uVar4);
switchD_00456ea8_caseD_19:
  FUN_0042f830(local_10,local_10,&local_58);
  FUN_00431640(iVar1,local_40);
  FUN_00431a50(iVar1,2,3,0x10,2);
  return;
}



void FUN_00457140(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  undefined local_a8 [12];
  float local_9c;
  undefined local_98 [48];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_18 [12];
  undefined local_c [12];

  local_9c = param_4 * 0.01 * 4.0;
  iVar1 = **(int **)(&DAT_00e29a4c + param_1 * 4);
  if (iVar1 != 0) {
    FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
    FUN_0043e210();
    FUN_0044bb10(local_58,&DAT_00e298c0);
    FUN_0042f7d0(local_a8,&DAT_00e298f0);
    FUN_0042fa80(local_a8,local_a8,param_2 - -18.0,&DAT_00e298c0);
    FUN_0042fa80(local_a8,local_a8,0x42fc0000,&DAT_00e298d0);
    FUN_0042fa80(local_a8,local_a8,param_3 - 20.0,&DAT_00e298e0);
    FUN_0042f7d0(local_18,local_a8);
    FUN_0042f7b0(local_c,0,0,0);
    FUN_00431060(local_98,local_18);
    FUN_00431410(local_98,local_98,0,local_38,local_34,local_30);
    FUN_00431410(local_98,local_98,0,local_48,local_44,local_40);
    FUN_00431410(local_98,local_98,0,local_38,local_34,local_30);
    FUN_00431450(local_98,local_9c,local_9c,local_9c,local_98);
    FUN_0042f7d0(local_68,local_a8);
    FUN_00431640(iVar1,local_98);
    FUN_00431a50(iVar1,2,3,0x10,2);
  }
  return;
}



void FUN_00457350(void)

{
  int iVar1;
  float fVar2;
  undefined local_4c [12];
  undefined local_40 [48];
  undefined local_10 [16];

  iVar1 = *DAT_00e29918;
  if (iVar1 != 0) {
    FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
    FUN_0043e210();
    FUN_00431020(local_40,0x412147b0,0,0x43340000);
    FUN_0042f7d0(local_4c,&DAT_00e2af90);
    FUN_0042f7d0(local_10,local_4c);
    fVar2 = DAT_00e295a0 * 0.05;
    FUN_00431450(local_40,fVar2,fVar2,fVar2,local_40);
    FUN_00431640(iVar1,local_40);
    FUN_00431a50(iVar1,2,3,0x10,2);
  }
  return;
}



void FUN_00457410(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20 [8];

  DAT_004b2940 = 1;
  FUN_00405cf0(1);
  FUN_0040a0b0(0x11);
  FUN_00408800();
  FUN_00450db0(0x456c6d6f);
  FUN_00408640(10);
  FUN_00447350(0x456c6d6f);
  FUN_00408640(0x14);
  FUN_0044fcc0();
  FUN_00408640(0x1e);
  FUN_004285d0(0xffffff99,0);
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  FUN_00428370();
  FUN_00408640(0x28);
  FUN_00454c60();
  FUN_00408640(0x32);
  FUN_00483fc0(0);
  FUN_0045b290(param_1,param_2,param_3);
  FUN_00408640(0x62);
  local_20[0] = 0x53746f70;
  FUN_00450c50(0x48616e67,local_20);
  local_20[0] = 0x57616b65;
  if (*(int *)(param_1 + 0x68) < 0) {
    if (((((1 << ((&DAT_004bfef1)[*(char *)(param_1 + 0x5d) * 0xc] & 0x1f) & DAT_00e364f0) == 0) &&
         (DAT_004d5e00 == 0)) && (DAT_0050ca3c == 0)) && (*(int *)(param_1 + 100) == 0)) {
      FUN_004252a0((&PTR_s_PlanetTAT_znm_004b7a08)
                   [(char)(&DAT_004bfef1)[*(char *)(param_1 + 0x5d) * 0xc]]);
      DAT_00e35a9c = DAT_00e35a9c | 1 << ((&DAT_004bfef1)[*(char *)(param_1 + 0x5d) * 0xc] & 0x1f);
    }
    FUN_00450c50(0x4a646765,local_20);
    return;
  }
  FUN_00450c50(0x5363656e,local_20);
  return;
}



void FUN_004575a0(void)

{
  int iVar1;
  int **ppiVar2;

  ppiVar2 = (int **)&DAT_00e29900;
  do {
    if ((*ppiVar2 != (int *)0x0) && (iVar1 = **ppiVar2, iVar1 != 0)) {
      FUN_00431a50(iVar1,2,0xfffffffc,0x10,3);
    }
    ppiVar2 = ppiVar2 + 1;
  } while ((int)ppiVar2 < 0xe29b5c);
  return;
}



void FUN_004575d0(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x28),2,3,0x10,2);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x30),2,3,0x10,2);
  }
  if (DAT_0050c930 == 5) {
    DAT_0050c930 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00457620(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    FUN_004270c0();
    if ((*(uint *)(param_1 + 0x14) & 2) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffd;
    }
    *(undefined *)(param_1 + 0x60) = 0;
    FUN_00469010();
    DAT_004b2940 = 0;
    FUN_00409ee0(0x11,0xffffffff,0xffffffff,0xffffffff,0);
    iVar2 = 0;
    do {
      FUN_0045a460(iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    if (DAT_004d5e00 != 0) {
      DAT_0050c458 = 1;
    }
    if (DAT_004d8bdc != 0) {
      DAT_0050c908 = DAT_004d8bdc;
      DAT_004d8bdc = 0;
    }
    if (DAT_004d8be0 != 0) {
      DAT_0050c918 = DAT_004d8be0;
      DAT_004d8be0 = 0;
    }
    DAT_0050c928 = 0;
    DAT_0050c92c = 0;
    FUN_004270c0();
    FUN_004575a0(param_1);
    iVar2 = 0;
    do {
      FUN_004285d0(iVar2,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xb8);
    if ((DAT_004d79d4 != 0) || (((byte)DAT_0050c048 & 0x40) != 0)) {
      FUN_0043d9a0(param_1);
    }
    _DAT_0050c8f0 = _DAT_00e22a50 * 40.0 + _DAT_0050c8f0;
    if (360.0 < _DAT_0050c8f0) {
      _DAT_0050c8f0 = _DAT_0050c8f0 - 360.0;
    }
    FUN_004270c0();
    for (_DAT_0050c8f4 = _DAT_0050c8f4 + _DAT_00e22a50; 1.0 < _DAT_0050c8f4;
        _DAT_0050c8f4 = _DAT_0050c8f4 - 1.0) {
    }
    switch(*(undefined4 *)(param_1 + 8)) {
    case 0:
      FUN_00434ec0(param_1);
      break;
    case 1:
      FUN_00435240(param_1);
      break;
    case 2:
      FUN_004575d0(param_1);
      FUN_004367c0(param_1);
      break;
    case 3:
      switch(*(undefined4 *)(param_1 + 0x38)) {
      case 0:
        if (*(int *)(param_1 + 0x24) != 0) {
          FUN_00431a50(*(int *)(param_1 + 0x24),2,3,0x10,2);
        }
        FUN_0043dba0(param_1);
        FUN_00455dc0(param_1);
        FUN_00436860(param_1);
        break;
      case 1:
        if (*(int *)(param_1 + 0x2c) != 0) {
          FUN_00431a50(*(int *)(param_1 + 0x2c),2,3,0x10,2);
        }
        FUN_00455dc0(param_1);
        FUN_00436860(param_1);
        break;
      case 2:
        if (*(int *)(param_1 + 0x20) != 0) {
          FUN_00431a50(*(int *)(param_1 + 0x20),2,3,0x10,2);
        }
        FUN_00437f70(param_1);
        FUN_00436860(param_1);
        break;
      case 3:
        FUN_004575d0(param_1);
      default:
        FUN_00436860(param_1);
      }
      break;
    case 4:
      if (*(int *)(param_1 + 0x2c) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x2c),2,3,0x10,2);
      }
      FUN_0043abc0(param_1);
      break;
    case 5:
      FUN_004575d0(param_1);
      FUN_00439ce0(param_1);
      break;
    case 7:
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x24),2,3,0x10,2);
      }
      FUN_004376c0(param_1);
      break;
    case 8:
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x20),2,3,0x10,2);
      }
      FUN_00437f70(param_1);
      break;
    case 9:
      FUN_004575d0(param_1);
      FUN_00435700(param_1);
      break;
    case 0xc:
      FUN_004575d0(param_1);
      FUN_0043b240(param_1);
      break;
    case 0xd:
      FUN_004575d0(param_1);
      FUN_0043b880(param_1);
      break;
    case 0xe:
      FUN_00434ea0(param_1);
      return;
    case 0xf:
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x20),2,3,0x10,2);
      }
      FUN_0043ca30(param_1);
      break;
    case 0x10:
      FUN_0043ceb0(param_1);
      break;
    case 0x11:
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_00431a50(*(int *)(param_1 + 0x20),2,3,0x10,2);
      }
      FUN_0043d4e0(param_1);
      break;
    case 0x12:
      FUN_004575d0(param_1);
      FUN_0043c6f0(param_1);
    }
    FUN_004270c0();
    if ((*(int *)(param_1 + 0x38) == 2) && (*(int *)(DAT_00e29908 + 8) != 0)) {
      FUN_00431a50(*(int *)(DAT_00e29908 + 8),2,0xfffffffc,0x10,3);
    }
    FUN_004270c0();
    if ((DAT_0050c944 == 1) && (iVar2 = FUN_0043e490(), iVar2 != 0)) {
      FUN_00427690(0,0x10);
    }
    FUN_004270c0();
    if (DAT_0050c944 == -1) {
      FUN_004276a0(0,0x10);
      iVar1 = FUN_0043e330(param_1);
    }
    FUN_004270c0();
    if (DAT_0050c468 == 0) {
      switch(DAT_0050c930) {
      case 1:
      case 2:
        FUN_0045c3c0(param_1);
        break;
      case 3:
        FUN_0045c0b0(param_1);
        break;
      case 5:
        FUN_0045c810(param_1);
      }
    }
    FUN_004270c0();
    FUN_00469bf0();
    if (((*(int *)(param_1 + 0x38) == 3) &&
        (FUN_00469380(*(undefined4 *)(param_1 + 8)), 0.0 < DAT_00e295a0)) &&
       (*(int *)(param_1 + 8) != 1)) {
      FUN_00440550(0x4f);
    }
  }
  if (iVar1 != 0) {
    FUN_00457410(param_1,1,0);
  }
  FUN_004270c0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00457b00(int param_1)

{
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    if ((5.0 <= _DAT_0050c95c) && (*(int *)(param_1 + 8) == 8)) {
      FUN_0043f770(param_1);
    }
    if ((0.0 < _DAT_0050c958) && (*(int *)(param_1 + 8) == 8)) {
      FUN_0043fbc0(param_1,*(undefined4 *)(param_1 + 0x34));
      if (*(int *)(param_1 + 0x10) == 1) {
        FUN_00455930(param_1);
      }
    }
    if (*(int *)(param_1 + 0x40) != -1) {
      FUN_0044afb0((&DAT_00e29900)[*(int *)(param_1 + 0x40)],param_1 + 0x44);
    }
  }
  return;
}



void FUN_00457bd0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;

  iVar3 = 0;
  puVar2 = &DAT_004c2728;
  do {
    uVar1 = FUN_00446fb0(*puVar2);
    FUN_004282f0(iVar3,uVar1);
    FUN_004282f0(iVar3 + 0x17,uVar1);
    FUN_004282f0(iVar3 + 0x2e,uVar1);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0xd;
  } while ((short)iVar3 < 0x17);
  return;
}



void FUN_00457c20(void)

{
  FUN_00454bc0(0x4f,0xffffffff,0x3d,0);
  FUN_00454bc0(0x75,0xffffffff,0x3e,0);
  FUN_00454bc0(0x76,0xffffffff,0x3f,0);
  FUN_00454bc0(0xfd,0xffffffff,0x40,0);
  FUN_00454bc0(0x77,0xffffffff,0x41,0);
  FUN_00454bc0(0x74,0xffffffff,0x42,0);
  FUN_00454bc0(0x52,0xffffffff,0x43,0);
  FUN_00454bc0(0x79,0xffffffff,0x44,0);
  FUN_00454bc0(0x4d,0xffffffff,0x45,0);
  FUN_00454bc0(0x51,0xffffffff,0x46,0);
  FUN_00454bc0(0x51,0xffffffff,0x47,0);
  FUN_00454bc0(0x51,0xffffffff,0x48,0);
  return;
}



void FUN_00457cf0(void)

{
  FUN_00454bc0(0x117,0xffffffff,0x62,0);
  FUN_00454bc0(0x118,0xffffffff,99,0);
  FUN_00454bc0(0xb1,0xffffffff,100,0);
  FUN_00454bc0(0xb2,0xffffffff,0x65,0);
  FUN_00454bc0(0xb3,0xffffffff,0x66,0);
  FUN_00454bc0(0x7a,0xffffffff,0x67,0);
  FUN_00454bc0(0xb4,0xffffffff,0x68,0);
  FUN_00454bc0(0xb5,0xffffffff,0x69,0);
  FUN_00454bc0(0xb9,0xffffffff,0x6a,0);
  FUN_00454bc0(0xba,0xffffffff,0x6b,0);
  FUN_00454bc0(0xbb,0xffffffff,0x6c,0);
  FUN_00454bc0(0xbc,0xffffffff,0x6d,0);
  FUN_00454bc0(0xec,0xffffffff,0x6e,0);
  FUN_00454bc0(0xf9,0xffffffff,0x6f,0);
  FUN_00454bc0(0xfa,0xffffffff,0x70,0);
  FUN_00454bc0(0xbf,0xffffffff,0x71,0);
  FUN_00454bc0(0xbd,0xffffffff,0x72,0);
  FUN_00454bc0(0xbe,0xffffffff,0x73,0);
  FUN_00454bc0(0xc0,0xffffffff,0x74,0);
  FUN_00454bc0(0xc1,0xffffffff,0x75,0);
  FUN_00454bc0(0xc2,0xffffffff,0x76,0);
  FUN_00454bc0(0xc3,0xffffffff,0x77,0);
  FUN_00454bc0(0xb6,0xffffffff,0x78,0);
  FUN_00454bc0(0xb7,0xffffffff,0x79,0);
  FUN_00454bc0(0xb8,0xffffffff,0x7a,0);
  return;
}



void FUN_00457ed0(void)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = FUN_00446fb0(0x1a);
  iVar2 = 0x82;
  do {
    FUN_004282f0(iVar2,uVar1);
    iVar2 = iVar2 + 1;
  } while ((short)iVar2 < 0x90);
  uVar1 = FUN_00446fb0(0x1a);
  iVar2 = 0x90;
  do {
    FUN_004282f0(iVar2,uVar1);
    FUN_004287e0(iVar2,0x2000);
    iVar2 = iVar2 + 1;
  } while ((short)iVar2 < 0xa2);
  uVar1 = FUN_00446fb0(0x91);
  FUN_004282f0(0x57,uVar1);
  uVar1 = FUN_00446fb0(0x93);
  iVar2 = 0x58;
  do {
    FUN_004282f0(iVar2,uVar1);
    iVar2 = iVar2 + 1;
  } while ((short)iVar2 < 0x5f);
  uVar1 = FUN_00446fb0(0x94);
  FUN_004282f0(0x5f,uVar1);
  uVar1 = FUN_00446fb0(0x8a);
  FUN_004282f0(0x60,uVar1);
  uVar1 = FUN_00446fb0(0x92);
  FUN_004282f0(0x61,uVar1);
  iVar2 = 0x57;
  do {
    FUN_004287e0(iVar2,0x8000);
    iVar2 = iVar2 + 1;
  } while ((short)iVar2 < 0x62);
  return;
}



void FUN_00457fd0(void)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = FUN_00446fb0(0x1a);
  iVar2 = 0x90;
  do {
    FUN_004282f0(iVar2,uVar1);
    FUN_004287e0(iVar2,0x2000);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xa2);
  uVar1 = FUN_00446fb0(0x8f);
  iVar2 = 0x62;
  do {
    FUN_004282f0(iVar2,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x69);
  uVar1 = FUN_00446fb0(0x90);
  iVar2 = 0x6a;
  do {
    FUN_004282f0(iVar2,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x71);
  uVar1 = FUN_00446fb0(0x8b);
  FUN_004282f0(0x69,uVar1);
  uVar1 = FUN_00446fb0(0x8d);
  FUN_004282f0(0x71,uVar1);
  uVar1 = FUN_00446fb0(0x8e);
  FUN_004282f0(0x72,uVar1);
  uVar1 = FUN_00446fb0(0x8c);
  FUN_004282f0(0x73,uVar1);
  iVar2 = 0x62;
  do {
    FUN_004287e0(iVar2,0x2000);
    FUN_004287e0(iVar2,0x8000);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x74);
  return;
}



void FUN_004580e0(void)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = FUN_00446fb0(0x95);
  FUN_004282f0(0x74,uVar1);
  FUN_004282f0(0x75,uVar1);
  uVar1 = FUN_00446fb0(0x96);
  FUN_004282f0(0x76,uVar1);
  FUN_004282f0(0x77,uVar1);
  uVar1 = FUN_00446fb0(0x97);
  FUN_004282f0(0x78,uVar1);
  uVar1 = FUN_00446fb0(0x98);
  FUN_004282f0(0x79,uVar1);
  uVar1 = FUN_00446fb0(0x99);
  FUN_004282f0(0x7a,uVar1);
  uVar1 = FUN_00446fb0(0x9a);
  FUN_004282f0(0x7b,uVar1);
  uVar1 = FUN_00446fb0(0x9b);
  FUN_004282f0(0x7c,uVar1);
  uVar1 = FUN_00446fb0(0x9c);
  FUN_004282f0(0x7d,uVar1);
  uVar1 = FUN_00446fb0(0x9d);
  FUN_004282f0(0x7e,uVar1);
  uVar1 = FUN_00446fb0(0x9e);
  FUN_004282f0(0x7f,uVar1);
  uVar1 = FUN_00446fb0(0x9f);
  FUN_004282f0(0x80,uVar1);
  FUN_004282f0(0x81,uVar1);
  iVar2 = 0x74;
  do {
    FUN_004287e0(iVar2,0x2000);
    FUN_004287e0(iVar2,0x8000);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x82);
  return;
}



void FUN_004584a0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8;
  ushort local_4;

  iVar2 = param_1;
  local_8 = 0x82;
  do {
    FUN_004282f0(local_8,*(undefined4 *)(param_1 + 200));
    local_8 = local_8 + 1;
  } while ((short)local_8 < 0xa2);
  if (param_2 != 0) {
    param_1 = 0;
    do {
      param_2 = 0;
      do {
        local_8._0_1_ = (byte)(param_2 << 1);
        local_4 = (short)(&DAT_00e35a8a)[param_1] >> ((byte)local_8 & 0x1f) & 3;
        iVar1 = param_1 * 7 + 99 + param_2;
        FUN_004282f0(iVar1,*(undefined4 *)(iVar2 + 0xc0));
        FUN_004287e0(iVar1,0x8000);
        switch(param_1) {
        case 0:
          uVar6 = 0xffffffff;
          uVar5 = 0xffffffff;
          uVar4 = 0x32;
          break;
        case 1:
          uVar6 = 0x3e;
          uVar5 = 0xffffffff;
          uVar4 = 0x44;
          break;
        case 2:
          uVar6 = 0x11;
          uVar5 = 0xffffffbe;
          uVar4 = 0xffffffa3;
          break;
        case 3:
          uVar6 = 0x20;
          uVar5 = 0x59;
          uVar4 = 0xffffff9d;
          break;
        default:
          goto switchD_00458591_caseD_4;
        }
        FUN_00428740(iVar1,uVar4,uVar5,uVar6,0xfffffffe);
switchD_00458591_caseD_4:
        iVar3 = FUN_00440aa0(iVar2,param_1 & 0xff,param_2 & 0xff);
        if (iVar3 == 0) {
          FUN_00428740(iVar1,0xffffff80,0xffffff80,0xffffff80,0xfffffffe);
        }
        if (*(char *)(iVar2 + 0x6c) != '\0') {
          switch(local_4) {
          default:
            goto switchD_00458610_caseD_0;
          case 1:
            uVar4 = *(undefined4 *)(iVar2 + 0xbc);
            break;
          case 2:
            uVar4 = *(undefined4 *)(iVar2 + 0xb8);
            break;
          case 3:
            uVar4 = *(undefined4 *)(iVar2 + 0xb4);
          }
          FUN_004282f0(iVar1,uVar4);
        }
switchD_00458610_caseD_0:
        FUN_004282f0(iVar1 + 0x1c,*(undefined4 *)(iVar2 + 0xc4));
        FUN_004287e0(iVar1 + 0x1c,0x8000);
        FUN_00428740(iVar1 + 0x1c,0xffffffa3,0xffffffbe,0x11,0xfffffffe);
        param_2 = param_2 + 1;
      } while ((int)param_2 < 7);
      param_1 = param_1 + 1;
    } while ((int)param_1 < 4);
  }
  return;
}



void FUN_004586e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  switch(*(undefined4 *)(param_1 + 8)) {
  default:
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    break;
  case 1:
  case 2:
  case 3:
  case 5:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x12:
    *(undefined4 *)(param_1 + 0x38) = 3;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x38) = 1;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x38) = 0;
    break;
  case 8:
  case 0xf:
  case 0x11:
    *(undefined4 *)(param_1 + 0x38) = 2;
    break;
  case 0xe:
    goto switchD_004586f5_caseD_e;
  case 0x10:
    *(undefined4 *)(param_1 + 0x38) = 0x4c;
  }
  if ((*(int *)(param_1 + 0x3c) != 3) || (*(int *)(param_1 + 0x38) != 3)) {
    if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x38)) {
      DAT_0050b5cc = 1;
    }
    FUN_0045ce90(2);
    iVar3 = 0;
    iVar5 = 0;
    do {
      if ((((iVar5 < 0xa2) || (0xb7 < iVar5)) && (iVar5 != 0xf9)) && (iVar5 != 0xfa)) {
        FUN_004282f0(iVar5,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xb8);
    FUN_004258e0();
    FUN_00454cc0();
    if (*(int *)(param_1 + 0x38) == 3) {
      DAT_0050c96c = 1;
      uVar2 = FUN_004114d0(s_data_images_greyedsplash_tga_004c4924,0x50);
      DAT_0050c96c = 0;
      FUN_004282f0(0x50,uVar2);
      uVar2 = FUN_004114d0(s_data_images_settings_btn_strch_s_004c48fc,0x4d);
      FUN_004282f0(0x4d,uVar2);
      uVar2 = FUN_004114d0(s_data_images_podhangar_backdrop_t_004c48d8,0x4e);
      FUN_004282f0(0x4e,uVar2);
      uVar2 = FUN_004114d0(s_data_images_podhangar_backdrop2__004c48b4,0x4f);
      FUN_004282f0(0x4f,uVar2);
      uVar2 = FUN_004114d0(s_data_images_episode1_tga_004c4898,0x51);
      FUN_004282f0(0x51,uVar2);
      uVar2 = FUN_004114d0(s_data_images_racer_tga_004c4880,0x54);
      FUN_004282f0(0x54,uVar2);
      uVar2 = FUN_004114d0(s_data_images_star_tga_004c4868,0x52);
      FUN_004282f0(0x52,uVar2);
      uVar2 = FUN_004114d0(s_data_images_wars_tga_004c4850,0x53);
      FUN_004282f0(0x53,uVar2);
      FUN_00457ed0();
      FUN_00457c20();
      FUN_00457cf0();
      uVar2 = FUN_00446fb0(0x89);
      FUN_004282f0(0x45,uVar2);
      uVar2 = FUN_00446fb0(0x82);
      FUN_004282f0(0x46,uVar2);
      uVar2 = FUN_00446fb0(0x83);
      FUN_004282f0(0x47,uVar2);
      uVar2 = FUN_00446fb0(0x84);
      FUN_004282f0(0x48,uVar2);
      uVar2 = FUN_00446fb0(0x85);
      FUN_004282f0(0x49,uVar2);
      uVar2 = FUN_00446fb0(0x86);
      FUN_004282f0(0x4a,uVar2);
      uVar2 = FUN_00446fb0(0x87);
      FUN_004282f0(0x4b,uVar2);
      uVar2 = FUN_00446fb0(0x88);
      FUN_004282f0(0x4c,uVar2);
      FUN_00454bc0(0x78,0xffffffff,0x53,0);
      FUN_00457bd0();
      FUN_00454bc0(0x30,0xffffffff,6,0);
      do {
        FUN_004816b0();
        iVar3 = __ftol();
      } while ((1 << ((byte)(1 - iVar3) & 0x1f) & DAT_00e364b0) == 0);
      iVar3 = (1 - iVar3) * 0x34;
      FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + iVar3),0x38,2,
                   *(undefined4 *)(&DAT_004c2720 + iVar3));
      if ((DAT_00e364b0 & 0x7ffff) == 0) {
        do {
          FUN_004816b0();
          iVar3 = __ftol();
        } while ((DAT_00e364b0 & 1 << ((byte)iVar3 & 0x1f)) != 0);
        uVar2 = *(undefined4 *)(&DAT_004c2720 + iVar3 * 0x34);
        uVar8 = *(undefined4 *)(&DAT_004c2730 + iVar3 * 0x34);
        uVar9 = 2;
      }
      else {
        uVar2 = 0xbf800000;
        uVar9 = 1;
        uVar8 = 0x6d;
      }
      FUN_0045ce10(uVar8,0x39,uVar9,uVar2);
      FUN_0045ce10(0xf4,0x16,7,0xbf800000);
      FUN_0045ce10(0xf7,0x17,10,0xbf800000);
      uVar2 = FUN_00446fb0(0x1a);
      *(undefined4 *)(param_1 + 200) = uVar2;
      iVar3 = 0;
      do {
        FUN_004282f0(iVar3 + 0x82,*(undefined4 *)(param_1 + 200));
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      uVar2 = FUN_00446fb0(0x5c);
      *(undefined4 *)(param_1 + 0xb4) = uVar2;
      uVar2 = FUN_00446fb0(0x5d);
      *(undefined4 *)(param_1 + 0xb8) = uVar2;
      uVar2 = FUN_00446fb0(0x5e);
      *(undefined4 *)(param_1 + 0xbc) = uVar2;
      uVar2 = FUN_00446fb0(0x5f);
      *(undefined4 *)(param_1 + 0xc0) = uVar2;
      uVar2 = FUN_00446fb0(0x61);
      *(undefined4 *)(param_1 + 0xc4) = uVar2;
      uVar2 = FUN_00446fb0(0x60);
      FUN_004282f0(0x62,uVar2);
      FUN_004287e0(0x62,0x8000);
      FUN_00428740(0x62,0x32,0xffffffff,0xffffffff,0xfffffffe);
      FUN_0045ce90(3);
      pcVar6 = (char *)(param_1 + 0x73);
      do {
        FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + *pcVar6 * 0x34),pcVar6 + (-0x57 - param_1),2,
                     *(undefined4 *)(&DAT_004c2720 + *pcVar6 * 0x34));
        pcVar6 = pcVar6 + 1;
      } while ((int)(pcVar6 + (-0x73 - param_1)) < 1);
      FUN_00445b90();
      return;
    }
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
    case 7:
      FUN_00457ed0();
      FUN_004580e0();
      FUN_00454bc0(0x78,0xffffffff,0x53,0);
      FUN_0043e840(param_1);
      FUN_0045ce10(0x6e,0x15,3,0xbf800000);
      if ('\0' < *(char *)(param_1 + 0x70)) {
        pcVar6 = (char *)(param_1 + 0x73);
        do {
          FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + *pcVar6 * 0x34),pcVar6 + (-0x57 - param_1),2,
                       *(undefined4 *)(&DAT_004c2720 + *pcVar6 * 0x34));
          pcVar6 = pcVar6 + 1;
        } while ((int)(pcVar6 + (-0x73 - param_1)) < (int)*(char *)(param_1 + 0x70));
      }
      iVar3 = 0;
      if (-(DAT_00e35aa0 & 0xff) != -4 && -1 < (int)(-(DAT_00e35aa0 & 0xff) + 4)) {
        do {
          FUN_0045ce10(0x6d,iVar3 + 0x34,1,0xbf800000);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(4 - (DAT_00e35aa0 & 0xff)));
      }
      iVar3 = 0;
      do {
        FUN_00454bc0(0x141,0xffffffff,iVar3 + 0xb,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      FUN_0045ce10(0xf7,0x17,10,0xbf800000);
      FUN_0045ce10(0xf6,0x1b,9,0xbf800000);
      FUN_0045ce10(0x13f,0x19,0xb,0xbf800000);
      FUN_0045ce10(0xf8,0x18,0xc,0xbf800000);
      FUN_0045ce10(0xf5,0x1a,8,0xbf800000);
      iVar3 = FUN_004409d0(&DAT_00e35a60,&DAT_004c484c);
      if (iVar3 != 0) {
        FUN_0045ce10(0x6f,0x13,4,0xbf800000);
        FUN_00445b90();
        return;
      }
      iVar3 = FUN_004409d0(&DAT_00e35a60,&DAT_004c4848);
      if (iVar3 != 0) {
        FUN_0045ce10(0x70,0x14,5,0xbf800000);
        FUN_00445b90();
        return;
      }
      break;
    case 8:
      FUN_00457ed0();
      FUN_00457fd0();
      iVar3 = 0;
      if ('\0' < *(char *)(param_1 + 0x70)) {
        piVar4 = &DAT_00e2993c;
        do {
          iVar7 = (int)*(char *)(iVar3 + 0x73 + param_1);
          iVar5 = iVar7 * 0x34;
          FUN_00454bc0(*(undefined4 *)(&DAT_004c2704 + iVar5),*(undefined4 *)(&DAT_004c2708 + iVar5)
                       ,iVar3 + 0xf,0);
          if (*piVar4 != 0) {
            *(int *)(*piVar4 + 0xf0) = iVar7;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar3 < *(char *)(param_1 + 0x70));
      }
      FUN_00454bc0(0x3c,0xffffffff,0x55,0);
      FUN_00454bc0(0x44,0xffffffff,0x56,0);
      FUN_00454bc0(0x45,0xffffffff,0x57,0);
      FUN_00454bc0(0x44,0xffffffff,0x58,0);
      iVar3 = 7;
      do {
        FUN_00454bc0(0x46,0xffffffff,iVar3 + 0x52,0);
        FUN_00454bc0(0x140,0xffffffff,iVar3,0);
        FUN_00454bc0(0x141,0xffffffff,iVar3 + 4,0);
        iVar5 = iVar3 + -6;
        iVar3 = iVar3 + 1;
      } while (iVar5 < 4);
      FUN_00454bc0(0x92,0xffffffff,0x61,1);
      iVar3 = 0;
      do {
        FUN_00454bc0(0x31,0xffffffff,iVar3 + 0x5d,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      if ('\0' < *(char *)(param_1 + 0x70)) {
        pcVar6 = (char *)(param_1 + 0x73);
        do {
          FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + *pcVar6 * 0x34),pcVar6 + (-0x57 - param_1),2,
                       *(undefined4 *)(&DAT_004c2720 + *pcVar6 * 0x34));
          pcVar6 = pcVar6 + 1;
        } while ((int)(pcVar6 + (-0x73 - param_1)) < (int)*(char *)(param_1 + 0x70));
      }
      iVar3 = 0;
      if ((char)DAT_00e35aa0 != '\0') {
        do {
          FUN_0045ce10(0x6d,iVar3 + 0x34,1,0xbf800000);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(DAT_00e35aa0 & 0xff));
      }
      FUN_0043e840(param_1);
      FUN_00454bc0(0x6d,0xffffffff,0x95,0);
      FUN_0045ce10(0x6f,0x13,4,0xbf800000);
      FUN_0045ce10(0x70,0x14,5,0xbf800000);
      FUN_00445b90();
      return;
    case 0xf:
      uVar2 = FUN_00446fb0(0x1a);
      do {
        FUN_004282f0(iVar3 + 0x82,uVar2);
        if (iVar3 == 0) {
          cVar1 = *(char *)(param_1 + 0x73);
        }
        else {
          cVar1 = (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc];
        }
        iVar5 = cVar1 * 0x34;
        FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + iVar5),iVar3 + 0x1c,2,
                     *(undefined4 *)(&DAT_004c2720 + iVar5));
        FUN_00454bc0(*(undefined4 *)(&DAT_004c2704 + iVar5),*(undefined4 *)(&DAT_004c2708 + iVar5),
                     iVar3 + 0xf,0);
        if ((&DAT_00e2993c)[iVar3] != 0) {
          *(int *)((&DAT_00e2993c)[iVar3] + 0xf0) = (int)cVar1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      FUN_00445b90();
      return;
    case 0x10:
      pcVar6 = (char *)(param_1 + 0xcc);
      iVar3 = 0x4d;
      do {
        FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + *pcVar6 * 0x34),iVar3 + -0x31,2,
                     *(undefined4 *)(&DAT_004c2720 + *pcVar6 * 0x34));
        FUN_00454bc0(0x7c,0xffffffff,iVar3,0);
        pcVar6 = pcVar6 + 1;
        iVar5 = iVar3 + -0x4c;
        iVar3 = iVar3 + 1;
      } while (iVar5 < 3);
      FUN_00454bc0(0x7b,0xffffffff,0x50,0);
      FUN_00454bc0(0x7d,0xffffffff,0x51,0);
      FUN_00454bc0(0x7e,0xffffffff,0x52,0);
      FUN_00454bc0(0x7f,0xffffffff,0x4c,0);
      FUN_00445b90();
      return;
    case 0x11:
      uVar2 = FUN_00446fb0(0x1a);
      iVar3 = 0;
      do {
        FUN_004282f0(iVar3 + 0x82,uVar2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      cVar1 = (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc];
      iVar3 = cVar1 * 0x34;
      FUN_00454bc0(*(undefined4 *)(&DAT_004c2704 + iVar3),*(undefined4 *)(&DAT_004c2708 + iVar3),0xf
                   ,0);
      if (DAT_00e2993c != 0) {
        *(int *)(DAT_00e2993c + 0xf0) = (int)cVar1;
      }
      FUN_0045ce10(0x6d,0x34,1,0xbf800000);
    }
    FUN_00445b90();
  }
switchD_004586f5_caseD_e:
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00459150(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  short sVar5;
  bool bVar6;
  float10 fVar7;
  undefined4 uVar8;
  float local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
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
  undefined local_30 [12];
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];

  local_7c = 0x462be000;
  local_70 = 0x41200000;
  local_64 = _DAT_004c3fb8;
  FUN_00428820(0x3800);
  DAT_0050c930 = 0;
  DAT_00e295a4 = 0;
  DAT_00e295a8 = 0;
  DAT_00e295ac = 0;
  DAT_00e295a0 = 0;
  DAT_00e295b0 = 0;
  DAT_00e295b4 = 0;
  DAT_00e295b8 = 0;
  DAT_00e295bc = 0;
  DAT_00e295c0 = 0;
  DAT_00e295c4 = 0;
  local_54 = 0x42a00000;
  local_50 = 0x42960000;
  local_4c = 0x42480000;
  local_3c = 0x437f0000;
  local_38 = 0x437f0000;
  local_34 = 0x43480000;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0xc71c4000;
  FUN_0042f7b0(local_30,0,0x3f800000,0);
  FUN_0042f7b0(local_24,0,0,0);
  FUN_0042f7b0(local_18,0,0x3f800000,0);
  FUN_0042f7b0(local_c,0,0,0);
  FUN_00431060(&DAT_00e2af00,local_30);
  FUN_00431060(&DAT_00e298c0,local_30);
  FUN_00431060(&DAT_00e2af60,local_18);
  FUN_0044e0c0(0);
  *(undefined4 *)(param_1 + 0x34) = 0x24;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  sVar5 = 0;
  if ('\0' < *(char *)(param_1 + 0x70)) {
    do {
      iVar2 = FUN_00450b30(0x456c6d6f,sVar5 + 0x1c);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x14) = 0;
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 < *(char *)(param_1 + 0x70));
  }
  if ((*(int *)(param_1 + 0x38) == 3) && (*(int *)(param_1 + 0x3c) != 3)) {
    FUN_0042f7d0(&local_60,&DAT_004c457c);
    iVar2 = FUN_004816b0();
    fVar1 = (float)iVar2 * 4.656613e-10 * 360.0;
    FUN_00468800(0x38,0x11,&local_60,&local_60,fVar1,fVar1);
    FUN_004816b0();
    iVar2 = __ftol();
    FUN_0042f7d0(&local_60,&DAT_004c4510 + (10 - iVar2) * 3);
    iVar3 = FUN_00450b30(0x456c6d6f,0x39);
    if (*(int *)(iVar3 + 8) == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x11;
    }
    FUN_00468800(0x39,uVar8,&local_60,&local_60,fVar1,fVar1);
    do {
      FUN_004816b0();
      iVar3 = __ftol();
      iVar3 = 10 - iVar3;
    } while (iVar3 == 10 - iVar2);
    *(char *)(param_1 + 0x50) = (char)iVar3 + -9;
    FUN_0042f7d0(&local_60,&DAT_004c4510 + iVar3 * 3);
    iVar2 = FUN_004816b0();
    fVar1 = (float)iVar2 * 4.656613e-10 * 360.0;
    FUN_00468800(0x17,0x2e,&local_60,&local_60,fVar1,fVar1);
    FUN_0042f7d0(&local_60,&DAT_004c4570);
    FUN_00468800(0x16,0x2a,&local_60,&local_60,0x433e147b,0x433e147b);
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 4:
    local_70 = 0x3f4ccccd;
    local_54 = 0x42f00000;
    local_50 = 0x43070000;
    local_4c = 0x430c0000;
    *(undefined4 *)(param_1 + 0x34) = 4;
    sVar5 = 4;
    do {
      if ((&DAT_004c4028)[sVar5 * 0x10] == 4) {
        *(int *)(param_1 + 0x34) = (int)sVar5;
        break;
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 < 0x13);
    sVar5 = 0;
    if ('\0' < *(char *)(param_1 + 0x70)) {
      do {
        iVar3 = (int)sVar5;
        FUN_0042f7b0(&local_60,-214.0 - (float)iVar3 * -50.0,0xc40e4000,0xc3110000);
        FUN_0045cb80(param_1,iVar3);
        iVar2 = *(int *)(param_1 + 0x34) * 0x20;
        fVar7 = (float10)FUN_0042f560(*(float *)(&DAT_004c401c + iVar2) -
                                      *(float *)(&DAT_004c4010 + iVar2),
                                      *(float *)(iVar2 + 0x4c4014) -
                                      *(float *)(&DAT_004c4020 + iVar2));
        FUN_00468800(iVar3 + 0x1c,0x14,&local_60,&DAT_00e298a0,(float)fVar7,
                     (float)(fVar7 - (float10)-180.0));
        sVar5 = sVar5 + 1;
      } while (sVar5 < *(char *)(param_1 + 0x70));
    }
    FUN_0042f7d0(&local_60,&DAT_004c407c);
    local_58 = 0xc2fa0000;
    FUN_0042f7d0(&DAT_00e298a0,&DAT_004c454c);
    fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
    FUN_00468800(0x15,0x1e,&local_60,&DAT_00e298a0,(float)fVar7,(float)(fVar7 - (float10)-90.0));
    FUN_0042f7b0(&local_60,0,0,0);
    sVar5 = 0;
    if (-(DAT_00e35aa0 & 0xff) != -4 && -1 < (int)(-(DAT_00e35aa0 & 0xff) + 4)) {
      iVar2 = 0;
      do {
        FUN_00468800(iVar2 + 0x34,0,&local_60,&local_60,0,0);
        sVar5 = sVar5 + 1;
        iVar2 = (int)sVar5;
      } while (iVar2 < (int)(4 - (DAT_00e35aa0 & 0xff)));
    }
    FUN_0042f7d0(&local_60,&DAT_004c45c4);
    iVar2 = FUN_004409d0(&DAT_00e35a60,&DAT_004c484c);
    if (iVar2 == 0) {
      iVar2 = FUN_004409d0(&DAT_00e35a60,&DAT_004c4848);
      if (iVar2 != 0) {
        local_5c = local_5c - 20.0;
        FUN_00468800(0x14,0x29,&local_60,&local_60,0x43400000,0x43400000);
      }
    }
    else {
      FUN_00468800(0x13,0x28,&local_60,&local_60,0x43340000,0x43340000);
    }
    break;
  case 7:
    local_70 = 0x40a00000;
    if (DAT_0050c47c == 2) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else if (DAT_0050c47c == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0x34) = 1;
    if (*(int *)(param_1 + 0x10) == 1) {
      *(undefined4 *)(param_1 + 0x34) = 2;
    }
    FUN_0042f7d0(&local_60,&DAT_004c4540);
    FUN_0042f7d0(&DAT_00e298a0,&local_60);
    fVar7 = (float10)FUN_0042f560(local_60 - 12.0,-116.0 - local_5c);
    fVar1 = (float)fVar7;
    uVar8 = 0x1d;
    if (*(int *)(param_1 + 0xc) == 4) {
      FUN_0042f7d0(&local_60,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
      local_58 = 0xc2200000;
      fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
      uVar8 = 0x1e;
    }
    local_80 = (float)fVar7;
    FUN_00468800(0x15,uVar8,&local_60,&DAT_00e298a0,local_80,fVar1);
    FUN_0042f7d0(&DAT_00e298a0,&DAT_004c4540);
    FUN_004816b0();
    iVar2 = __ftol();
    if (iVar2 == 0) {
      FUN_0042f7d0(&local_60,&DAT_004c45ac);
      fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
      iVar2 = FUN_004816b0();
      fVar7 = (float10)(float)fVar7 - (float10)iVar2 * (float10)4.656613e-10 * (float10)90.0;
    }
    else {
      FUN_0042f7d0(&local_60,&DAT_004c45b8);
      fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
    }
    FUN_004816b0();
    iVar2 = __ftol();
    if ((uint)-iVar2 < 5) {
                    // WARNING: Could not recover jumptable at 0x004596e3. Too many branches
                    // WARNING: Treating indirect jump as call
      (*(code *)(&PTR_LAB_0045a028)[-iVar2])();
      return;
    }
    FUN_00468800(-iVar2 + 0x17,uVar8,&local_60,&local_60,(float)fVar7,(float)fVar7);
    sVar5 = 0;
    if ('\0' < *(char *)(param_1 + 0x70)) {
      do {
        FUN_0042f7b0(&local_60,200.0 - (float)(int)sVar5 * -50.0,0xc3480000,0xc2700000);
        if (*(int *)(param_1 + 0xc) == 4) {
          FUN_0042f7d0(&local_60,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
        }
        local_58 = 0xc2700000;
        FUN_0042f7b0(&local_60,0xc1a00000,0xc2c80000,0xc2700000);
        FUN_0042f7b0(&DAT_00e298a0,0,0,0xc2700000);
        fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
        FUN_00468800(sVar5 + 0x1c,0x13,&local_60,&DAT_00e298a0,(float)fVar7,(float)fVar7);
        sVar5 = sVar5 + 1;
      } while (sVar5 < *(char *)(param_1 + 0x70));
    }
    sVar5 = 0;
    if (-(DAT_00e35aa0 & 0xff) != -4 && -1 < (int)(-(DAT_00e35aa0 & 0xff) + 4)) {
      iVar2 = 0;
      do {
        FUN_0042f380((float)((0x1d - iVar2) * 10),&local_6c,&local_68);
        FUN_0042f7b0(&local_60,12.0 - local_68 * -281.6,-116.0 - local_6c * -281.6,0xc2700000);
        fVar7 = (float10)FUN_0042f560(local_60 - 12.0,-116.0 - local_5c);
        FUN_00468800(iVar2 + 0x34,5,&local_60,&local_60,(float)fVar7,(float)fVar7);
        sVar5 = sVar5 + 1;
        iVar2 = (int)sVar5;
      } while (iVar2 < (int)(4 - (DAT_00e35aa0 & 0xff)));
    }
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x34) = 0x14;
    local_7c = 0x47a41000;
    DAT_00e295cc = 7;
    break;
  case 9:
    if (*(int *)(param_1 + 0xc) == 0xc) {
      *(undefined4 *)(param_1 + 0x34) = 0x25;
    }
    DAT_00e295a4 = 1;
    DAT_00e295a8 = 1;
    break;
  case 0xc:
    bVar6 = *(int *)(param_1 + 0xc) == 0xd;
    goto LAB_004594aa;
  case 0xd:
    bVar6 = *(int *)(param_1 + 0xc) == 0xc;
LAB_004594aa:
    if (bVar6) {
      *(undefined4 *)(param_1 + 0x34) = 0x25;
      DAT_00e295a0 = 0x3f800000;
    }
    DAT_00e295a4 = 1;
    break;
  case 0xf:
    local_7c = 0x47a41000;
    *(undefined4 *)(param_1 + 0x34) = 0x14;
    iVar3 = 0x1c;
    local_78 = 0;
    local_74 = 0xb4;
    iVar2 = 2;
    do {
      FUN_0042f7b0(&DAT_00e298a0,0x43480000,0xc3960000,0xc31d0000);
      _DAT_00e298a4 = _DAT_00e298a4 - (float)local_78;
      FUN_00468800(iVar3,0x14,&DAT_00e298a0,&DAT_00e298a0,(float)local_74,(float)local_74);
      local_78 = local_78 + 200;
      local_74 = local_74 + -0xb4;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    break;
  case 0x10:
    local_7c = 0x47a41000;
    sVar5 = 0;
    do {
      FUN_0042f7b0(&DAT_00e298a0,0,(float)(int)sVar5 * -150.0,0);
      if (sVar5 == 2) {
        _DAT_00e298a4 = _DAT_00e298a4 - -450.0;
      }
      FUN_00468800(sVar5 + 0x1c,0x1c,&DAT_00e298a0,&DAT_00e298a0,0xc2b40000,0xc2b40000);
      sVar5 = sVar5 + 1;
    } while (sVar5 < 3);
    break;
  case 0x11:
    local_7c = 0x47a41000;
    *(undefined4 *)(param_1 + 0x34) = 0x1a;
    FUN_0042f7b0(&local_60,0,0xc47a0000,0xc31d0000);
    FUN_00468800(0x34,0x10,&local_60,&local_60,0,0);
    break;
  case 0x12:
    if (*(char *)(param_1 + 0x6c) == '\0') {
      uVar4 = 0x38;
      uVar8 = 0x39;
    }
    else {
      uVar4 = 0x39;
      uVar8 = 0x38;
    }
    *(undefined4 *)(param_1 + 0x34) = 0x27;
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    DAT_00e295a0 = 0x3f800000;
    DAT_00e295a4 = 1;
    FUN_0042f7d0(&local_60,&DAT_004c4490);
    FUN_0042fac0(&local_60,0x3f19999a,&DAT_004c4490,0x3ecccccd,&DAT_004c449c);
    local_58 = 0xc2700000;
    FUN_0042f7d0(&DAT_00e298a0,&DAT_004c449c);
    fVar7 = (float10)FUN_0042f560(local_60 - _DAT_00e298a0,_DAT_00e298a4 - local_5c);
    fVar1 = (float)fVar7;
    iVar2 = FUN_00450b30(0x456c6d6f,uVar4);
    if (*(int *)(iVar2 + 8) == 1) {
      FUN_00468800(uVar4,2,&local_60,&local_60,fVar1,fVar1);
    }
    else {
      FUN_00468800(uVar4,0x11,&local_60,&local_60,fVar1,fVar1);
      *(undefined4 *)(iVar2 + 0xac) = 0x42c80000;
    }
    FUN_0042f7d0(&local_60,&DAT_004c457c);
    iVar2 = FUN_004816b0();
    fVar1 = (float)iVar2 * 4.656613e-10 * 360.0;
    iVar2 = FUN_00450b30(0x456c6d6f,uVar8);
    if (*(int *)(iVar2 + 8) == 1) {
      FUN_00468800(uVar8,0,&local_60,&local_60,fVar1,fVar1);
    }
    else {
      FUN_00468800(uVar8,0x11,&local_60,&local_60,fVar1,fVar1);
    }
  }
  FUN_004831d0(0,8,8,0x138,0xe8);
  FUN_004831d0(DAT_004c3fb0,8,8,0x138,0xe8);
  uVar8 = local_64;
  FUN_00483230(DAT_004c3fb0,local_64);
  uVar4 = FUN_004318d0(DAT_004c3fb0);
  FUN_00428b40(uVar8,uVar4);
  FUN_00428a60(CONCAT22(extraout_var,DAT_004c3fb4),1,&DAT_00e2af00,0);
  FUN_00428a60(CONCAT22(extraout_var_00,DAT_004c3fb8),2,&DAT_00e298c0,0);
  FUN_00428b10(CONCAT22(extraout_var_01,DAT_004c3fb8),&DAT_00e2af60,0);
  FUN_00483590(DAT_004c3fb0,0x42340000,0xbf800000,local_70,local_7c,0xbf800000);
  if (*(int *)(param_1 + 0x34) != -1) {
    FUN_0042f7d0(&DAT_00e298f0,&DAT_004c4010 + *(int *)(param_1 + 0x34) * 0x20);
    FUN_0042f7d0(&DAT_00e2af90,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
  }
  FUN_0044bb10(&DAT_00e2ae80,&DAT_00e298c0);
  FUN_0044bb10(&DAT_00e29b60,&DAT_00e298c0);
  FUN_0044bb10(&DAT_00e2b3e0,&DAT_00e2af60);
  FUN_0044bb10(&DAT_00e2b440,&DAT_00e2af60);
  FUN_00430b80(&DAT_00e2af00,&DAT_00e29ba0);
  FUN_00430b80(&DAT_00e2af00,&DAT_00e2b420);
  FUN_00430b80(&DAT_00e2af00,&DAT_00e2b200);
  if (*(int *)(param_1 + 0x38) != 3) {
    FUN_00483840(0xffffffff,&local_54,&local_3c,&local_48);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045a3e0(void)

{
  DAT_0050c918 = 0;
  DAT_0050c908 = 0xffffffff;
  DAT_0050c91c = 0;
  _DAT_0050c90c = 0xffffffff;
  _DAT_0050c920 = 0;
  _DAT_0050c910 = 0xffffffff;
  _DAT_0050c924 = 0;
  _DAT_0050c914 = 0xffffffff;
  return;
}



float10 FUN_0045a420(float param_1,float param_2)

{
  undefined local_4 [4];

  FUN_0042f380((param_1 / param_2) * 180.0,local_4,&param_1);
  return ((float10)1.0 - (float10)param_1) * (float10)0.5 * (float10)param_2;
}



void FUN_0045a460(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;

  bVar3 = DAT_004c4008 != 0;
  (&DAT_0050c918)[param_1] = 0;
  if (bVar3) {
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 1,1);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 2,2);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 4,4);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 8,8);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x10,0x10);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x20,0x20);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x40,0x40);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x80,0x80);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x100,0x100);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x200,0x200);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x400,0x400);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x800,0x800);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x1000,0x1000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x2000,0x2000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x4000,0x4000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x8000,0x8000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x10000,0x10000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x20000,0x20000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x40000,0x40000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x80000,0x80000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x100000,0x100000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x200000,0x200000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x400000,0x400000);
    FUN_0045a7f0(param_1,(&DAT_00e98e90)[param_1] & 0x800000,0x800000);
    uVar1 = (&DAT_0050c908)[param_1];
    if ((uVar1 & 0x40000) == 0) {
      if ((uVar1 & 0x10000) == 0) {
        if ((uVar1 & 0x20000) != 0) {
          *(undefined4 *)(&DAT_0050c970 + param_1 * 4) = 1;
        }
      }
      else {
        *(undefined4 *)(&DAT_0050c970 + param_1 * 4) = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)(&DAT_0050c970 + param_1 * 4) = 0;
    }
    if ((uVar1 & 0x80000) == 0) {
      if ((uVar1 & 0x4000) == 0) {
        if ((uVar1 & 0x8000) != 0) {
          *(undefined4 *)(&DAT_0050c980 + param_1 * 4) = 1;
        }
      }
      else {
        *(undefined4 *)(&DAT_0050c980 + param_1 * 4) = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)(&DAT_0050c980 + param_1 * 4) = 0;
    }
    uVar2 = (&DAT_0050c918)[param_1];
    if (((uVar2 & 0x100000) != 0) && (*(int *)(&DAT_0050c970 + param_1 * 4) == -1)) {
      (&DAT_0050c908)[param_1] = uVar1 | 0x10000;
    }
    if (((uVar2 & 0x200000) != 0) && (*(int *)(&DAT_0050c970 + param_1 * 4) == 1)) {
      (&DAT_0050c908)[param_1] = (&DAT_0050c908)[param_1] | 0x20000;
    }
    if (((uVar2 & 0x400000) != 0) && (*(int *)(&DAT_0050c980 + param_1 * 4) == -1)) {
      (&DAT_0050c908)[param_1] = (&DAT_0050c908)[param_1] | 0x4000;
    }
    if (((uVar2 & 0x800000) != 0) && (*(int *)(&DAT_0050c980 + param_1 * 4) == 1)) {
      (&DAT_0050c908)[param_1] = (&DAT_0050c908)[param_1] | 0x8000;
    }
  }
  return;
}



void FUN_0045a7f0(int param_1,int param_2,uint param_3)

{
  if (param_2 != 0) {
    if (((&DAT_0050c908)[param_1] & param_3) == 0) {
      (&DAT_0050c918)[param_1] = (&DAT_0050c918)[param_1] | param_3;
    }
    (&DAT_0050c908)[param_1] = param_3 | (&DAT_0050c908)[param_1];
    return;
  }
  (&DAT_0050c908)[param_1] = (&DAT_0050c908)[param_1] & ~param_3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045a840(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float local_c;
  float local_8;
  int local_4;

  iVar7 = 0;
  iVar9 = 0;
  do {
    FUN_0042f7b0((int)&DAT_00e2a6c4 + iVar9,0,0,0);
    if (iVar9 < 0x1c0) {
      FUN_0042f7b0((int)&DAT_00e2b224 + iVar9,0,0,0);
    }
    uVar11 = DAT_00e295cc;
    iVar9 = iVar9 + 0x38;
  } while (iVar9 < 0x7a8);
  if (*(int *)(param_1 + 0x38) == 0) {
    local_4 = DAT_00e295cc + 1;
    iVar9 = __ftol();
    if (uVar11 == 0) {
      DAT_00e295d0 = 0xffffffff;
      return;
    }
    DAT_00e295d0 = iVar9;
    if (DAT_0050c47c == 1) {
      iVar2 = 0;
      if (0 < (int)(uVar11 - 1)) {
        pcVar4 = &DAT_00e2a6c0;
        do {
          DAT_00e295d0 = iVar2;
          if ((char)(&DAT_004c1cbb)[*pcVar4 * 0x10] == DAT_0050c950) break;
          iVar2 = iVar2 + 1;
          pcVar4 = pcVar4 + 0x38;
          DAT_00e295d0 = iVar9;
        } while (iVar2 < (int)(uVar11 - 1));
      }
    }
    if (0 < (int)uVar11) {
      iVar9 = (iVar9 + 9) * 10;
      pfVar3 = (float *)&DAT_00e2a6c8;
      do {
        local_4 = iVar9;
        FUN_0042f380((float)iVar9,&local_8,&local_c);
        pfVar3[-1] = 12.0 - local_c * -256.0;
        *pfVar3 = -116.0 - local_8 * -256.0;
        pfVar3[1] = 106.0;
        FUN_0042f7d0(pfVar3 + 2,pfVar3 + -1);
        fVar12 = (float10)FUN_0042f560(pfVar3[-1] - 12.0,-116.0 - *pfVar3);
        fVar1 = 1.5 - _DAT_0050c938;
        pfVar3[8] = (float)(fVar12 - (float10)90.0);
        FUN_0042f380(fVar1 * 360.0,&local_8,&local_c);
        uVar11 = DAT_00e295cc;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -10;
        pfVar3[9] = local_c * _DAT_0050c93c * 45.0;
        pfVar3 = pfVar3 + 0xe;
        local_4 = iVar9;
      } while (iVar7 < (int)uVar11);
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    puVar5 = &DAT_004c40a0;
    pcVar4 = &DAT_00e29860;
    do {
      if (*pcVar4 != -1) {
        iVar7 = (int)*pcVar4;
        (&DAT_00e2a6c4)[iVar7 * 0xe] = puVar5[-1];
        (&DAT_00e2a6c8)[iVar7 * 0xe] = *puVar5;
        (&DAT_00e2a6cc)[iVar7 * 0xe] = 0xc3020000;
        (&DAT_00e2a6ec)[iVar7 * 0xe] = 0;
        (&DAT_00e2a6e8)[iVar7 * 0xe] = 0;
      }
      pcVar4 = pcVar4 + 3;
      puVar5 = puVar5 + 8;
    } while ((int)pcVar4 < 0xe29890);
  }
  if (*(int *)(param_1 + 0x38) == 2) {
    uVar10 = 0;
    if (0 < (int)(uVar11 + 1)) {
      pfVar3 = (float *)&DAT_00e2b22c;
      do {
        uVar6 = (int)uVar10 >> 0x1f;
        pfVar3[-2] = 7.7 - (float)(((uVar10 ^ uVar6) - uVar6 & 1 ^ uVar6) - uVar6) * -4.3;
        pfVar3[-1] = 40.0;
        *pfVar3 = 9.0 - (float)((int)uVar10 / 2) * 3.8;
        pfVar3[8] = 0.0;
        pfVar3[7] = 0.0;
        if (uVar10 == uVar11) {
          *pfVar3 = *pfVar3 - 4.1;
          pfVar3[7] = 90.0;
        }
        uVar10 = uVar10 + 1;
        pfVar3 = pfVar3 + 0xe;
      } while ((int)uVar10 < (int)(uVar11 + 1));
    }
  }
  puVar8 = &DAT_00e2b23c;
  puVar5 = &DAT_00e2a6c4;
  iVar7 = 0;
  do {
    FUN_0042f7d0((int)&DAT_00e2a6d0 + iVar7,puVar5);
    FUN_0042f7d0((int)&DAT_00e2a6dc + iVar7,puVar5);
    if ((int)puVar5 < 0xe2a884) {
      FUN_0042f7d0(&DAT_00e2b230 + iVar7,puVar5);
      FUN_0042f7d0(puVar8,puVar5);
    }
    puVar5 = puVar5 + 0xe;
    iVar7 = iVar7 + 0x38;
    puVar8 = puVar8 + 0x38;
  } while ((int)puVar5 < 0xe2ae6c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045ab50(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  float10 fVar12;
  int local_44;
  int local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;

  local_28[1] = 1;
  local_28[2] = 1;
  local_28[0] = 2;
  local_28[3] = 2;
  local_18 = 3;
  local_14 = 3;
  local_c = 3;
  puVar2 = &DAT_00e29600;
  for (iVar8 = 0x97; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00e2afa0;
  for (iVar8 = 0x97; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00e29900;
  for (iVar8 = 0x97; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_00e29160;
  for (iVar8 = 0x97; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  DAT_00e295a0 = 0;
  DAT_00e295a4 = 0;
  DAT_00e295a8 = 0;
  DAT_00e295ac = 0;
  DAT_00e295b0 = 0;
  DAT_00e295b4 = 0;
  DAT_00e295cc = 0;
  DAT_00e295d0 = 0;
  DAT_00e295d4 = 0;
  _DAT_00e295d8 = 0;
  DAT_00e295dc = 0;
  DAT_00e295e0 = 0;
  DAT_00e295c0 = 0;
  DAT_00e295c4 = 0;
  DAT_00e295c8 = 0;
  FUN_0043d970(param_1);
  FUN_0044e320(&DAT_00e364a0);
  FUN_0044e4e0();
  FUN_00454d10();
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  FUN_0042f7b0(param_1 + 0x44,0,0,0);
  *(undefined *)(param_1 + 0x50) = 0;
  *(undefined *)(param_1 + 0x51) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x5c) = 1;
  *(undefined2 *)(param_1 + 0x98) = 100;
  *(undefined2 *)(param_1 + 0xa0) = 100;
  *(undefined2 *)(param_1 + 0x92) = 800;
  *(undefined2 *)(param_1 + 0x94) = 700;
  *(undefined2 *)(param_1 + 0x96) = 600;
  *(undefined2 *)(param_1 + 0x9a) = 0x4b0;
  *(undefined2 *)(param_1 + 0x9c) = 600;
  *(undefined2 *)(param_1 + 0x9e) = 300;
  *(undefined2 *)(param_1 + 0xa2) = 0x898;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined *)(param_1 + 0x5d) = 0;
  *(undefined *)(param_1 + 0x5e) = 0;
  *(undefined *)(param_1 + 0x5f) = 0;
  *(undefined *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x8a) = 4;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  iVar8 = 0;
  do {
    *(char *)(iVar8 + 0xcc + param_1) = (char)iVar8;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  FUN_0045bd90(param_1);
  puVar2 = &DAT_00e29bc4;
  do {
    puVar2[-1] = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0;
    *(undefined *)(puVar2 + 3) = 0xff;
    *(undefined *)((int)puVar2 + 0xd) = 0xff;
    puVar2[4] = 0xffffffff;
    puVar2[5] = 0;
    puVar2[0x20] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    *(undefined2 *)(puVar2 + 0x16) = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x17] = 0;
    puVar3 = puVar2 + 0x22;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2 = puVar3;
  } while ((int)puVar3 < 0xe2a664);
  iVar8 = 0;
  piVar4 = &DAT_00e98f44;
  piVar10 = local_28;
  do {
    iVar6 = *piVar10;
    piVar4[-1] = iVar8;
    iVar5 = iVar8 + -1;
    iVar8 = iVar8 + iVar6;
    *piVar4 = iVar5 + iVar6;
    if (iVar6 == 0) {
      piVar4[-1] = -1;
      *piVar4 = -2;
    }
    piVar4 = piVar4 + 0x17;
    piVar10 = piVar10 + 1;
  } while ((int)piVar4 < 0xe99224);
  local_44 = 0;
  do {
    iVar8 = FUN_004816b0();
    fVar1 = (float)iVar8 * 4.656613e-10 * 360.0;
    (&DAT_00e98f48)[local_44 * 0x17] = fVar1;
    if ((local_44 != 6) &&
       (((45.0 < fVar1 && (fVar1 < 135.0)) || ((225.0 < fVar1 && (fVar1 < 315.0)))))) {
      (&DAT_00e98f48)[local_44 * 0x17] = fVar1 - -90.0;
    }
    iVar8 = FUN_004816b0();
    (&DAT_00e98f4c)[local_44 * 0x17] = (float)iVar8 * 4.656613e-10 * 360.0;
    iVar8 = FUN_004816b0();
    (&DAT_00e98f54)[local_44 * 0x17] = (float)iVar8 * 4.656613e-10 * 360.0;
    fVar12 = (float10)FUN_0045cf00();
    iVar8 = FUN_004816b0();
    fVar1 = ((float)iVar8 * 4.656613e-10 * 10.0 - -5.0) * (float)fVar12;
    (&DAT_00e98f50)[local_44 * 0x17] = fVar1;
    if (local_44 == 6) {
      _DAT_00e99178 = fVar1 * 5.0;
    }
    fVar12 = (float10)FUN_0045cf00();
    iVar8 = FUN_004816b0();
    (&DAT_00e98f58)[local_44 * 0x17] =
         ((float)iVar8 * 4.656613e-10 * 5.0 - -10.0) * (float)fVar12 +
         (float)(&DAT_00e98f50)[local_44 * 0x17];
    iVar8 = (&DAT_00e98f40)[local_44 * 0x17];
    iVar5 = (&DAT_00e98f44)[local_44 * 0x17];
    if (iVar8 <= iVar5) {
      pfVar11 = (float *)(&DAT_00e293d0 + iVar8 * 6);
      do {
        iVar9 = iVar8 - (&DAT_00e98f40)[local_44 * 0x17];
        iVar5 = (iVar5 - (&DAT_00e98f40)[local_44 * 0x17]) + 1;
        iVar6 = FUN_004816b0();
        pfVar11[-1] = (360.0 / (float)iVar5) * (float)iVar6 * 4.656613e-10 -
                      ((float)iVar9 * -360.0) / (float)iVar5;
        iVar5 = FUN_004816b0();
        fVar12 = (float10)FUN_0045cf00();
        fVar1 = (float)iVar9 * -40.0;
        *pfVar11 = (float)(fVar12 * (float10)(((float)iVar5 * 4.656613e-10 * 15.0 - -45.0) -
                                             (float)iVar9 * 20.0));
        iVar5 = FUN_004816b0();
        fVar12 = (float10)FUN_0045cf00();
        pfVar11[-4] = (float)(fVar12 * (float10)(((float)iVar5 * 4.656613e-10 * 10.0 - -65.0) -
                                                fVar1));
        iVar5 = FUN_004816b0();
        fVar12 = (float10)FUN_0045cf00();
        pfVar11[-3] = (float)(fVar12 * (float10)(((float)iVar5 * 4.656613e-10 * 10.0 - -65.0) -
                                                fVar1));
        fVar12 = (float10)FUN_0045cf00();
        iVar5 = FUN_004816b0();
        pfVar11[-2] = ((float)iVar5 * 4.656613e-10 * 40.0 - -5.0) * (float)fVar12;
        iVar6 = FUN_004816b0();
        iVar5 = (&DAT_00e98f44)[local_44 * 0x17];
        iVar8 = iVar8 + 1;
        pfVar11[1] = (((float)iVar6 * 4.656613e-10 * 0.01 - -0.005) - (float)iVar9 * -0.01) * 15.0;
        pfVar11 = pfVar11 + 6;
      } while (iVar8 <= iVar5);
    }
    local_44 = local_44 + 1;
  } while (local_44 < 8);
  uVar7 = FUN_00421360(s__SCREENTEXT_578__f4_c_sTatooine_004c4a38);
  FUN_0049eb80(&DAT_00e98f5c,uVar7);
  uVar7 = FUN_00421360(s__SCREENTEXT_579__f4_c_sAndo_Prim_004c4a14);
  FUN_0049eb80(&DAT_00e98fb8,uVar7);
  uVar7 = FUN_00421360(s__SCREENTEXT_580__f4_c_sAquilaris_004c49f0);
  FUN_0049eb80(&DAT_00e99014,uVar7);
  uVar7 = FUN_00421360(s__SCREENTEXT_581__f4_c_sOrd_Ibann_004c49cc);
  FUN_0049eb80(&DAT_00e99070,uVar7);
  uVar7 = FUN_00421360(s__SCREENTEXT_582__f4_c_sBaroonda_004c49ac);
  FUN_0049eb80(&DAT_00e990cc,uVar7);
  uVar7 = FUN_00421360(s__SCREENTEXT_583__f4_c_sMon_Gazza_004c4988);
  FUN_0049eb80(&DAT_00e99128,uVar7);
  uVar7 = FUN_00421360(s__SCREENTEXT_576__f4_c_sOovo_IV_004c4968);
  FUN_0049eb80(&DAT_00e99184,uVar7);
  uVar7 = FUN_00421360(s__SCREENTEXT_584__f4_c_sMalastare_004c4944);
  FUN_0049eb80(&DAT_00e991e0,uVar7);
  DAT_0050c950 = 0;
  return;
}



void FUN_0045b210(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;

  iVar4 = 0;
  if ('\0' < *(char *)(param_1 + 0x72)) {
    puVar5 = &DAT_00e29bc8;
    iVar1 = 0;
    do {
      if ((puVar5[-1] == 0x4c6f636c) || (iVar3 = iVar1, (*(byte *)puVar5 & 0x20) != 0)) {
        local_18 = puVar5[0x1f];
        iVar3 = iVar1 + 1;
        local_20 = 0x4e41736e;
        local_1c = iVar3;
        uVar2 = FUN_00450aa0(0x634d616e,iVar1,&local_20);
        FUN_00450c00(uVar2);
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x22;
      iVar1 = iVar3;
    } while (iVar4 < *(char *)(param_1 + 0x72));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045b290(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;

  FUN_0045bb60();
  FUN_0045b5d0(param_1);
  FUN_00408640(0x3c);
  if (*(int *)(param_1 + 100) == 2) {
    *(undefined *)(param_1 + 0x70) = 1;
    *(undefined *)(param_1 + 0x72) = 3;
    do {
      do {
        FUN_004816b0();
        cVar3 = __ftol();
        *(char *)(param_1 + 0x5d) = cVar3;
      } while (cVar3 == '\x13');
    } while ((*(int *)(&DAT_004bfee8 + cVar3 * 0xc) == -1) || ((&DAT_004bfef0)[cVar3 * 0xc] != '\0')
            );
  }
  if (DAT_0050ca3c != 0) {
    if ((*(byte *)(param_1 + 0x14) & 8) != 0) {
      *(undefined1 *)(param_1 + 0x5d) = (&DAT_00e29890)[DAT_0050c960];
    }
    *(undefined4 *)(param_1 + 100) = 1;
    _DAT_00e364a8 = _DAT_00e364a8 | 0x40;
  }
  iVar5 = FUN_0041d6b0();
  if (iVar5 != 0) {
    FUN_0041bd90(1,10,0x78);
    *(undefined *)(param_1 + 0x6c) = 0;
    uVar4 = FUN_00420f90();
    *(undefined *)(param_1 + 0x70) = uVar4;
    cVar3 = FUN_00420f90();
    *(char *)(param_1 + 0x72) = cVar3 + (char)DAT_00ea02b4;
    *(undefined *)(param_1 + 0x5d) = (undefined)DAT_00ea02b0;
    *(undefined *)(param_1 + 0x8f) = (undefined)DAT_00ea02b8;
  }
  if (DAT_0050ca3c != 0) {
    uVar4 = (&DAT_00e29890)[DAT_0050c960];
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined *)(param_1 + 0x5d) = uVar4;
    _DAT_00e364a8 = _DAT_00e364a8 | 0x40;
  }
  FUN_00408640(0x46);
  iVar5 = FUN_0041d6b0();
  if (iVar5 == 0) {
    local_3c = FUN_0045b7d0(param_1,param_2);
  }
  else {
    local_3c = FUN_0045b610(param_1,param_2);
  }
  local_38 = (int)*(char *)(param_1 + 0x72);
  if (*(int *)(param_1 + 100) == 2) {
    local_38 = 3;
  }
  else if (DAT_0050ca3c != 0) {
    local_38 = 2;
  }
  local_28 = 0xffffffff;
  local_20 = 0;
  iVar5 = *(char *)(param_1 + 0x5d) * 0xc;
  local_2c = *(int *)(&DAT_004bfeec + iVar5);
  local_30 = *(int *)(&DAT_004bfee8 + iVar5);
  if (*(int *)(param_1 + 100) == 2) {
    local_20 = 0x1e;
  }
  else if (DAT_0050ca3c != 0) {
    local_20 = 1000000;
  }
  local_1c = (int)*(char *)(param_1 + 0x8f);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    local_1c = 3;
  }
  local_c = (int)*(char *)(param_1 + 0x6e);
  iVar1 = local_c + *(char *)(param_1 + 0x5d) * 2;
  local_18 = *(undefined4 *)(&DAT_00e366bc + iVar1 * 4);
  local_14 = *(undefined4 *)(&DAT_00e365f4 + iVar1 * 4);
  local_10 = *(char *)(param_1 + 0x90) + -2;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    local_10 = 0;
  }
  local_8 = (int)(char)(&DAT_00e37404)[iVar1];
  if ((local_30 == -1) ||
     (cVar3 = (&DAT_004bfef1)[iVar5], cVar2 = (&DAT_004bfef0)[iVar5], local_2c == -1)) {
    local_30 = DAT_004bffa8;
    local_2c = DAT_004bffac;
    cVar3 = DAT_004bffb1;
    cVar2 = DAT_004bffb0;
  }
  local_24 = (int)cVar2;
  local_34 = (int)cVar3;
  if (param_3 == 0) {
    iVar5 = FUN_0041d6b0();
    if ((iVar5 != 0) && (*(int *)(param_1 + 100) != 2)) {
      iVar5 = FUN_0041d6c0();
      if (iVar5 != 0) {
        FUN_0041dd50(param_1,&local_40);
      }
    }
  }
  FUN_00408640(0x50);
  FUN_0041bd50(1);
  local_40 = 0x4265676e;
  FUN_00408640(0x5a);
  if (*(int *)(param_1 + 0x68) < 0) {
    thunk_FUN_00449e30((char)(&DAT_004bfef1)[*(char *)(param_1 + 0x5d) * 0xc] + 8);
    FUN_00450c50(0x4a646765,&local_40);
    FUN_0045b210(param_1);
    return;
  }
  FUN_00445aa0(1);
  FUN_00447300(0x5363656e,1);
  local_3c = *(undefined4 *)(param_1 + 0x68);
  FUN_00450c50(0x5363656e,&local_40);
  return;
}


#endif
