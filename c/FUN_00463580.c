#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463580(int param_1)

{
  int iVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4 [21];
  undefined local_80 [128];
  
  iVar7 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4[0] = 0;
  if (DAT_0050ca3c == 0) {
    uVar4 = *(uint *)(param_1 + 8) & 0xf;
    if (uVar4 != 6) {
      if ((uVar4 == 1) || (uVar4 == 2)) {
        iVar6 = *(int *)(param_1 + 0x1c8);
        bVar3 = false;
        if (1 < iVar6) {
          if ((DAT_00e2899c != 0) && (iVar6 <= *(int *)(DAT_00e2899c + 0x78) + 1)) {
            bVar3 = true;
          }
          if ((DAT_00e27820 != 0) && (iVar6 <= *(int *)(DAT_00e27820 + 0x78) + 1)) {
            bVar3 = true;
          }
        }
        if (DAT_004eb45c != 0) {
          fVar9 = (float10)FUN_004456a0();
          if (((float10)_DAT_004ad218 < fVar9) || (((byte)*(undefined4 *)(param_1 + 8) & 0xf) == 6))
          {
            FUN_004277f0(0,*(undefined4 *)(param_1 + 0x1ac));
            DAT_0050ca88 = 1;
          }
          else {
            if (DAT_0050ca88 != 0) {
              DAT_0050ca88 = 0;
              FUN_00427ea0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1c0),0);
            }
            if (bVar3) {
LAB_00463745:
              FUN_004277f0(1,*(undefined4 *)(param_1 + 0x1ac));
            }
            else {
              iVar6 = FUN_0045d350();
              if (iVar6 < 1) {
                FUN_004277f0(1,*(undefined4 *)(param_1 + 0x1ac));
              }
              else if (DAT_0050ca10 != 0) {
                FUN_00427ea0(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1c0),1);
                goto LAB_00463745;
              }
            }
          }
        }
      }
      _DAT_0050ca0c = 0;
    }
  }
  else {
    FUN_0045d130(param_1,0);
    if (DAT_0050ca40 == 2) {
      FUN_00426c80(0x90,7,0x3e800000,0x3f800000,1);
    }
    else if (DAT_0050ca40 == 3) {
      FUN_00426c80(0x8e,7,0x3e800000,0x3f800000,1);
    }
    else if (DAT_0050ca40 == 4) {
      FUN_00426c80(0x91,7,0x3e800000,0x3f800000,1);
    }
    else if (DAT_0050ca40 == 5) {
      FUN_00426c80(0x8f,7,0x3e800000,0x3f800000,1);
    }
    else {
      FUN_00426c80(0x8f,7,0x3e800000,0x3f800000,1);
    }
  }
  FUN_00460320();
  uVar4 = *(uint *)(param_1 + 8) & 0xf;
  if (uVar4 == 4) {
    if (*(float *)(param_1 + 0xc) <= _DAT_004ad218) {
LAB_004637ea:
      FUN_00428740(0xffffff99,0,0,0,0);
      goto LAB_004637f8;
    }
  }
  else if (uVar4 == 5) {
    if (*(float *)(param_1 + 0xc) <= _DAT_004ad480) goto LAB_004637ea;
  }
  else {
    if ((uVar4 != 1) || ((*(uint *)(param_1 + 8) & 0x20) == 0)) {
      if (uVar4 == 6) {
        if (_DAT_004ad228 < *(float *)(param_1 + 0xc)) {
          FUN_00428740(0xffffff99,0,0,0,0);
          return;
        }
        if (*(float *)(param_1 + 0xc) <= _DAT_004ad268) {
          FUN_00428740(0xffffff99,0,0,0,0xffffffff);
          return;
        }
        uVar5 = __ftol();
        FUN_00428740(0xffffff99,0,0,0,uVar5);
        return;
      }
      goto LAB_004637f8;
    }
    if (_DAT_004ad258 <= *(float *)(param_1 + 0xc)) {
      FUN_004285d0(0xffffff99,0);
      goto LAB_004637f8;
    }
  }
  uVar5 = __ftol();
  FUN_00428740(0xffffff99,0,0,0,uVar5);
LAB_004637f8:
  DAT_0050ca20 = DAT_0050ca20 == '\0';
  if (((((byte)*(undefined4 *)(param_1 + 8) & 0xf) != 1) && (DAT_0050ca2c != 0)) &&
     ((bool)DAT_0050ca20)) {
    uVar5 = FUN_00421360(s__sLow_Memory___d_Racers_004c705c,DAT_0050ca2c);
    FUN_0049eb80(local_80,uVar5);
    FUN_00450560(100,100,local_80);
  }
  FUN_0045dad0(param_1,0);
  piVar8 = local_d4;
  for (iVar6 = 0x14; piVar8 = piVar8 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    do {
      iVar1 = DAT_00e28960 + iVar7;
      FUN_0042c420(iVar6,&local_dc,0xffffd8f1);
      sVar2 = *(short *)(iVar1 + 0x5c);
      if (0 < sVar2) {
        local_d4[sVar2] = iVar1;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x88;
    } while (iVar6 < *(int *)(param_1 + 0x1bc));
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    do {
      FUN_004285d0(iVar7 + 0x2b,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x1bc));
  }
  FUN_004285d0(0x19,0);
  uVar4 = *(uint *)(param_1 + 8) & 0xf;
  if ((uVar4 != 4) && (1 < DAT_0050ca18)) {
    FUN_004610f0();
  }
  if (((uVar4 != 3) && (uVar4 != 4)) && (uVar4 != 5)) {
    if (DAT_00e2899c != 0) {
      FUN_00462b20(param_1,DAT_00e2899c);
    }
    if (DAT_00e27820 != 0) {
      FUN_00462b20(param_1,DAT_00e27820);
    }
    if (((byte)*(undefined4 *)(param_1 + 8) & 0xf) != 2) {
      FUN_0045f230(param_1);
      FUN_004634a0(param_1);
    }
    FUN_00462da0(param_1);
  }
  return;
}

