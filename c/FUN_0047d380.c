#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047d380(float *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (param_1 != (float *)0x0) {
    do {
      FUN_0047e760(param_1);
      if ((*(short *)(param_1 + 9) == 0x6c) && (iVar2 = FUN_0047d310(param_1,param_2,3), iVar2 != 0)
         ) {
        FUN_00431620(iVar2,*param_1 - _DAT_004ade74,param_1[1],param_1[2] - _DAT_004ade70);
      }
      if (*(short *)(param_1 + 9) == 100) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 2;
      }
      if (*(short *)(param_1 + 9) == 0x69) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x20;
        FUN_0047bd80(param_1[8],0x10000010,0,0x3f19999a);
      }
      if (*(short *)(param_1 + 9) == 0x68) {
        DAT_0050cb48 = param_1;
      }
      if (*(short *)(param_1 + 9) == 0xc9) {
        FUN_00431a50(param_1[8],0,0xfffffffd,0x10,3);
      }
      if (*(short *)(param_1 + 9) == 0xca) {
        FUN_00431a50(param_1[8],0,0xfffffffb,0x10,3);
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 2;
        if (DAT_0050cb4c == 1) {
          DAT_0050cb48 = param_1;
        }
      }
      if (*(short *)(param_1 + 9) == 0xcb) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x20;
      }
      if (*(short *)(param_1 + 9) == 0xd0) {
        iVar2 = FUN_0047d310(param_1,param_2,2);
        iVar3 = FUN_0047c7d0(param_1);
        *(int *)(iVar3 + 0x48) = iVar2;
        *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 1;
        if (*(int *)(iVar3 + 0x44) != 0) {
          FUN_00426880(*(int *)(iVar3 + 0x44),0x3f800000);
        }
        if (*(int *)(iVar3 + 0x40) != 0) {
          FUN_00426880(*(int *)(iVar3 + 0x40),0x3f800000);
        }
        if ((iVar2 != 0) && (param_1[8] != 0.0)) {
          FUN_004316a0(*(undefined4 *)(*(int *)(iVar3 + 0x4c) + 0x20),&local_40);
          if (*(int *)(iVar3 + 0x48) != 0) {
            FUN_00431a50(*(int *)(iVar3 + 0x48),2,3,0x10,2);
            FUN_00431640(*(undefined4 *)(iVar3 + 0x48),&local_40);
          }
        }
      }
      if (*(short *)(param_1 + 9) == 0xd4) {
        FUN_00431a50(param_1[8],0,0xfffffffb,0x10,3);
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 2;
      }
      if (*(short *)(param_1 + 9) == 0xd3) {
        iVar2 = FUN_0047d310(param_1,param_2,2);
        if (iVar2 != 0) {
          local_3c = _DAT_004ade50;
          local_38 = _DAT_004ade50;
          local_34 = _DAT_004ade50;
          local_24 = _DAT_004ade50;
          local_20 = _DAT_004ade50;
          local_1c = _DAT_004ade50;
          local_18 = _DAT_004adec4;
          local_14 = _DAT_004ade50;
          local_10 = (float)_DAT_004ade50;
          local_40 = 0x3f800000;
          local_c = (float)_DAT_004ade50;
          local_8 = (float)_DAT_004ade50;
          local_4 = _DAT_004adec4;
          local_30 = param_1[3];
          local_2c = param_1[4];
          local_28 = param_1[5];
          FUN_0042f9f0(&local_40,&local_30,&local_20);
          FUN_0042f9f0(&local_20,&local_40,&local_30);
          FUN_0042f9b0(&local_40);
          FUN_0042f9b0(&local_30);
          local_10 = *param_1;
          local_c = param_1[1];
          local_8 = param_1[2] - param_1[7] * _DAT_004ade58;
          FUN_00431640(iVar2,&local_40);
          if (param_1[8] != 0.0) {
            FUN_00431a50(param_1[8],2,0xfffffffc,0x10,3);
          }
        }
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 1;
      }
      if (*(short *)(param_1 + 9) == 0xd5) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x24;
      }
      if (*(short *)(param_1 + 9) == 0x132) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x24;
        iVar2 = FUN_004816b0();
        if (_DAT_004ade58 < (float)iVar2 * _DAT_004ade88) {
          *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 8;
        }
      }
      if (*(short *)(param_1 + 9) == 0x133) {
        FUN_0047bd80(param_1[8],0x10,0,0x3f800000);
      }
      if (*(short *)(param_1 + 9) == 0x134) {
        iVar2 = FUN_0047d310(param_1,param_2,0);
        iVar3 = FUN_0047c7d0(param_1);
        *(int *)(iVar3 + 0x48) = iVar2;
        *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 1;
        if (*(int *)(iVar3 + 0x44) != 0) {
          FUN_00426880(*(int *)(iVar3 + 0x44),0x3f800000);
        }
        if (*(int *)(iVar3 + 0x40) != 0) {
          FUN_00426880(*(int *)(iVar3 + 0x40),0x3f800000);
        }
        if ((iVar2 != 0) && (param_1[8] != 0.0)) {
          FUN_004316a0(*(undefined4 *)(*(int *)(iVar3 + 0x4c) + 0x20),&local_40);
          if (*(int *)(iVar3 + 0x48) != 0) {
            FUN_00431a50(*(int *)(iVar3 + 0x48),2,3,0x10,2);
            FUN_00431640(*(undefined4 *)(iVar3 + 0x48),&local_40);
          }
        }
      }
      if (*(short *)(param_1 + 9) == 0x136) {
        iVar2 = FUN_0047d310(param_1,param_2,0);
        if ((iVar2 != 0) && (param_1[8] != 0.0)) {
          FUN_004316a0(param_1[8],&local_40);
          FUN_00431a50(iVar2,2,3,0x10,2);
          FUN_00431640(iVar2,&local_40);
        }
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 1;
      }
      if (*(short *)(param_1 + 9) == 0x138) {
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x20;
        FUN_0047bd80(param_1[8],0x10000010,0,0x3f800000);
      }
      if (*(short *)(param_1 + 9) == 0x13a) {
        fVar1 = param_1[8];
        *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x20;
        if ((fVar1 != 0.0) && (fVar1 != 0.0)) {
          FUN_00431a50(fVar1,2,0xfffffffc,0x10,3);
        }
      }
      if ((*(short *)(param_1 + 9) == 0x1f5) && (param_1[8] != 0.0)) {
        FUN_00431a50(param_1[8],2,0xfffffffc,0x10,3);
      }
      param_1 = (float *)param_1[10];
    } while (param_1 != (float *)0x0);
  }
  return;
}

