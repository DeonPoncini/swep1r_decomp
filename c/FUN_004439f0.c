#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004439f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  int local_4;
  
  iVar5 = param_1;
  DAT_00e98284 = param_1;
  uVar1 = FUN_004317c0(param_1);
  iVar2 = FUN_004317b0(iVar5);
  iVar4 = 0;
  FUN_004317e0(iVar5,0,&param_1,&local_8);
  if (param_1 != 0) {
    if (local_8 == 0) {
      local_c = 0;
      switch(uVar1) {
      case 3:
        if (0 < iVar2) {
          iVar5 = 0;
          do {
            (*DAT_00e98e20)(param_1 + iVar5,0);
            iVar5 = iVar5 + 0x12;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        break;
      case 4:
        if (0 < iVar2) {
          iVar5 = 0;
          do {
            (*DAT_00e98e20)(param_1 + iVar5,2);
            iVar5 = iVar5 + 0x18;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return (float10)_DAT_004aca50;
        }
        break;
      case 5:
      case 7:
        piVar3 = (int *)FUN_004317d0(iVar5);
        local_4 = iVar2;
        if (0 < iVar2) {
          do {
            iVar5 = 0;
            iVar2 = 0;
            if (*piVar3 != 2 && -1 < *piVar3 + -2) {
              iVar4 = local_c * 6;
              do {
                (*DAT_00e98e20)(param_1 + iVar4,iVar5);
                iVar5 = 1 - iVar5;
                local_c = local_c + 1;
                iVar4 = iVar4 + 6;
                iVar2 = iVar2 + 1;
              } while (iVar2 < *piVar3 + -2);
            }
            local_c = local_c + 2;
            piVar3 = piVar3 + 1;
            local_4 = local_4 + -1;
          } while (local_4 != 0);
          return (float10)_DAT_004aca50;
        }
      }
    }
    else {
      switch(uVar1) {
      case 3:
        if (0 < iVar2) {
          iVar5 = 0;
          do {
            (*DAT_00e985ac)(param_1,0,local_8 + iVar5);
            iVar5 = iVar5 + 6;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return (float10)_DAT_004aca50;
        }
        break;
      case 4:
        if (0 < iVar2) {
          iVar5 = 0;
          do {
            (*DAT_00e985ac)(param_1,2,local_8 + iVar5);
            iVar5 = iVar5 + 8;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return (float10)_DAT_004aca50;
        }
        break;
      case 5:
      case 7:
        piVar3 = (int *)FUN_004317d0(iVar5);
        local_c = iVar2;
        if (0 < iVar2) {
          do {
            iVar5 = 0;
            iVar2 = 0;
            if (*piVar3 != 2 && -1 < *piVar3 + -2) {
              do {
                (*DAT_00e985ac)(param_1,iVar5,local_8 + iVar4 * 2);
                iVar5 = 1 - iVar5;
                iVar4 = iVar4 + 1;
                iVar2 = iVar2 + 1;
              } while (iVar2 < *piVar3 + -2);
            }
            iVar4 = iVar4 + 2;
            piVar3 = piVar3 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
          return (float10)_DAT_004aca50;
        }
      }
    }
  }
  return (float10)_DAT_004aca50;
}

