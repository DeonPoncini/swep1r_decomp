#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  param_3 = param_3 - _DAT_004acf70;
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
  local_8 = CONCAT22((short)((uint)param_3 >> 0x10),uVar3);
  do {
    iVar8 = DAT_0050c928 + 0x82;
    DAT_0050c928 = DAT_0050c928 + 1;
    FUN_004285d0(iVar8,1);
    uVar3 = __ftol();
    iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),uVar3);
    FUN_00428660(iVar8,local_8,iVar7);
    uVar2 = uVar1;
    if ((float)(&DAT_00e2aec0)[iVar6] == (float)(&DAT_00e2af40)[iVar6]) {
      FUN_004286f0(iVar8,(float)(&DAT_00e2aec0)[iVar6] * _DAT_004acfa0,0x3f200000);
      uVar10 = 0xffffffff;
      uVar9 = 0xffffffff;
      uVar5 = 0x32;
LAB_00455698:
      FUN_00428740(iVar8,uVar5,uVar9,uVar10,uVar2);
    }
    else {
      if ((float)(&DAT_00e2aec0)[iVar6] < (float)(&DAT_00e2af40)[iVar6]) {
        FUN_004286f0(iVar8,(float)(&DAT_00e2aec0)[iVar6] * _DAT_004acfa0,0x3f200000);
        FUN_00428740(iVar8,0x32,0xffffffff,0xffffffff,uVar1);
        iVar8 = DAT_0050c928 + 0x82;
        DAT_0050c928 = DAT_0050c928 + 1;
        FUN_004285d0(iVar8,1);
        uVar5 = __ftol(iVar7);
        FUN_00428660(iVar8,uVar5);
        FUN_004286f0(iVar8,((float)(&DAT_00e2af40)[iVar6] - (float)(&DAT_00e2aec0)[iVar6]) *
                           _DAT_004acfa0,0x3f200000);
        FUN_004816b0();
        uVar2 = __ftol();
LAB_00455692:
        uVar10 = 0x11;
        uVar9 = 0xffffffbe;
        uVar5 = 0xffffffa3;
        goto LAB_00455698;
      }
      FUN_004286f0(iVar8,(float)(&DAT_00e2af40)[iVar6] * _DAT_004acfa0,0x3f200000);
      FUN_00428740(iVar8,0x32,0xffffffff,0xffffffff,uVar1);
      iVar8 = DAT_0050c928 + 0x82;
      DAT_0050c928 = DAT_0050c928 + 1;
      FUN_004285d0(iVar8,1);
      uVar5 = __ftol(iVar7);
      FUN_00428660(iVar8,uVar5);
      FUN_004286f0(iVar8,((float)(&DAT_00e2aec0)[iVar6] - (float)(&DAT_00e2af40)[iVar6]) *
                         _DAT_004acfa0,0x3f200000);
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

