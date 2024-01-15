#include "prototype.h"


void FUN_0043e620(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined local_c [12];
  
  FUN_0042f7b0(local_c,0,0,0);
  FUN_00468800(0x1c,0x1b,local_c,local_c,0,0);
  FUN_00468fe0(4,0x43);
  FUN_00468fe0(0x16,0x2a);
  FUN_00468fe0(0x17,0x2e);
  iVar3 = 0x38;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    *(undefined4 *)(param_1 + 0x40) = 0x38;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x39;
  }
  piVar4 = &DAT_00e299e0;
  iVar2 = 3;
  do {
    iVar1 = FUN_00450b30(0x456c6d6f,iVar3);
    if (iVar1 != 0) {
      if ((iVar3 == *(int *)(param_1 + 0x40)) || (*(int *)(iVar1 + 8) == 1)) {
        if (*piVar4 != 0) {
          uVar5 = 0;
          goto LAB_0043e6cb;
        }
      }
      else if (*piVar4 != 0) {
        uVar5 = 0x11;
LAB_0043e6cb:
        FUN_00468fe0(iVar3,uVar5);
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
  } while( true );
}

