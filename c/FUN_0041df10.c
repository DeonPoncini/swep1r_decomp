#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041df10(undefined4 param_1,undefined4 param_2,int param_3,int param_4,float param_5,
                 float param_6_00,double param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 param_9)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined local_400 [1024];
  
  iVar4 = DAT_004eb3b4;
  if (DAT_004d5e00 != 0) {
    DAT_00ec7bc8 = DAT_004eb3b4;
    DAT_00ec7bcc = param_3;
    piVar3 = &DAT_00ec7bd0;
    if (param_3 < 0x6374726d) {
      if (param_3 != 0x6374726c) {
        if (param_3 != 0x5370726b) {
          DAT_00ec7bc8 = iVar4;
          return;
        }
        DAT_00ec7bd0 = param_4;
        DAT_00ec7bd4 = (float)(double)CONCAT44(param_6_00,param_5);
        DAT_00ec7bd8 = (float)param_6;
        DAT_00ec7bdc = *param_7;
        DAT_00ec7be0 = param_7[1];
        DAT_00ec7be4 = param_7[2];
        DAT_00ec7be8 = *param_8;
        DAT_00ec7bec = param_8[1];
        DAT_00ec7bf0 = param_8[2];
        DAT_00ec7bf4 = param_9;
        piVar3 = &DAT_00ec7bf8;
      }
    }
    else if (param_3 < 0x666c616e) {
      if (param_3 == 0x666c616d) {
        piVar3 = (int *)&DAT_00ec7bd4;
        DAT_00ec7bd0 = param_4;
      }
      else {
        if (param_3 != 0x66696e69) {
          DAT_00ec7bc8 = iVar4;
          return;
        }
        (&DAT_00ea02c0)[DAT_004eb3b4] = 1;
      }
    }
    else if (param_3 < 0x6c6f7375) {
      if (param_3 == 0x6c6f7374) {
        DAT_00ec7bd0 = param_4;
        piVar3 = (int *)&DAT_00ec7bd4;
      }
      else {
        if (param_3 != 0x68656c6c) {
          DAT_00ec7bc8 = iVar4;
          return;
        }
        piVar3 = (int *)&DAT_00ec7bd4;
        DAT_00ec7bd0 = param_4;
      }
    }
    else if (param_3 < 0x7072787a) {
      if (param_3 == 0x70727879) {
        DAT_00ec7bd0 = 0;
        piVar3 = &DAT_00e29bc4;
        do {
          if ((*piVar3 == 0x41414949) || (*piVar3 == 0x4c6f636c)) {
            DAT_00ec7bd0 = DAT_00ec7bd0 + 1;
          }
          piVar3 = piVar3 + 0x22;
        } while ((int)piVar3 < 0xe2a664);
        piVar3 = (int *)&DAT_00ec7bd4;
        iVar4 = 0;
        piVar1 = &DAT_00e29bc4;
        do {
          if ((*piVar1 == 0x41414949) || (*piVar1 == 0x4c6f636c)) {
            *piVar3 = iVar4;
            piVar3 = piVar3 + 1;
          }
          piVar1 = piVar1 + 0x22;
          iVar4 = iVar4 + 1;
        } while ((int)piVar1 < 0xe2a664);
      }
      else {
        if (param_3 != 0x706c6170) {
          DAT_00ec7bc8 = iVar4;
          return;
        }
        DAT_00ec7bd0 = param_4;
        piVar3 = (int *)&DAT_00ec7bd8;
        DAT_00ec7bd4 = (float)(double)CONCAT44(param_6_00,param_5);
      }
    }
    else if (param_3 < 0x72656a6f) {
      if (param_3 != 0x72656a6e) {
        if (param_3 != 0x71756974) {
          DAT_00ec7bc8 = iVar4;
          return;
        }
        (&DAT_00ea04e0)[DAT_004eb3b4] = 1;
        (&DAT_00ea05c0)[iVar4 * 4] = 0x29a;
        (&DAT_00ea05c4)[iVar4 * 4] = 0;
        (&DAT_00ea05c8)[iVar4 * 4] = 0;
        (&DAT_00ea05cc)[iVar4 * 4] = 0;
      }
    }
    else if (param_3 == 0x7461756e) {
      DAT_00ec7bd4 = param_5;
      DAT_00ec7bd0 = param_4;
      DAT_00ec7bd8 = param_6_00;
      piVar3 = &DAT_00ec7bdc;
    }
    else {
      if (param_3 != 0x74726967) {
        DAT_00ec7bc8 = iVar4;
        return;
      }
      DAT_00ec7bd0 = param_4;
      DAT_00ec7bd4 = param_5;
      piVar3 = (int *)&DAT_00ec7bd8;
    }
    _DAT_00ec7bc0 = piVar3 + -0x3b1ef2;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x17;
    FUN_0041b760(&DAT_00ec7ba0,param_1,1,param_2);
    if (param_3 == 0x71756974) {
      if ((DAT_004eb1c8 != 0) || (DAT_004b6714 == DAT_004eb3b4)) {
        FUN_0041c8e0();
      }
      iVar4 = DAT_004eb3b4;
      (&DAT_00ea04e0)[DAT_004eb3b4] = 1;
      uVar2 = FUN_0041bce0(iVar4);
      uVar2 = FUN_00421360(s__MONDOTEXT_H_0500__s_has_left_th_004b67ec,uVar2);
      FUN_0049eb80(local_400,uVar2);
      FUN_0041c190(local_400);
    }
  }
  return;
}

