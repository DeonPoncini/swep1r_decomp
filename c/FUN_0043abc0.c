#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043abc0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  char local_109;
  int local_108;
  undefined local_100 [256];
  
  bVar1 = false;
  local_109 = '\0';
  iVar2 = FUN_0043da90(param_1,DAT_004c4000,0x14);
  if (iVar2 == 0) {
    if (DAT_004c4000 != 0) {
      DAT_004c4000 = 0;
      DAT_0050c544 = 0;
      DAT_0050c548 = 0;
      _DAT_00e99358 = 0xc3960000;
      DAT_0050c470 = 0;
      DAT_0050c954 = 0;
      DAT_0050c934 = 0;
      FUN_0045a840(param_1);
      DAT_00e295d0 = (int)(char)(&DAT_00e29860)[(*(int *)(param_1 + 0x34) + -4) * 3];
      FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                   (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (int)(char)(&DAT_004c1cb9)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (&DAT_00e2a6c1)[DAT_00e295d0 * 0x38]);
      FUN_0043eb50();
      iVar2 = FUN_00440b50(param_1);
      if (iVar2 == 0) {
        DAT_0050c930 = 5;
      }
      else {
        FUN_0045bee0(param_1,*(undefined4 *)(param_1 + 0x34),0xffffffff,0);
      }
    }
    iVar2 = FUN_00427670(0,0x10);
    if ((iVar2 != 0) && (iVar2 = FUN_00427670(0,0x20), iVar2 != 0)) {
      FUN_004276a0(0,0x20);
      iVar2 = FUN_00427670(0,4);
      if (iVar2 == 0) {
        FUN_00427690(0,4);
        FUN_00427410(2,0,0x35,0);
      }
      else {
        FUN_00427590(2,0,0x1f,0x25,0x2f,0x33,0x37,0);
      }
    }
    FUN_0043ec10(param_1);
    if (*(int *)(param_1 + 0x34) != 3) {
      FUN_004550d0(param_1,0x41a00000,0x43070000);
    }
    if (((DAT_0050c934 == 0) || (DAT_0050c940 != 0)) && (*(int *)(param_1 + 0x34) != 3)) {
      uVar3 = FUN_00421360((&PTR_s__SCREENTEXT_280___R_20_Repulsorg_004c1cc4)
                           [(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 4]);
      uVar3 = FUN_00421360(s__c_s_s_004c0bc0,uVar3);
      FUN_0049eb80(local_100,uVar3);
      FUN_00450530(0xa0,0x19,0x32,0xffffffff,0xffffffff,0xffffffff,local_100);
      DAT_00e295bc = 1;
      DAT_00e295b8 = 1;
      uVar3 = FUN_0042de10(local_100,0);
      FUN_0042de10(local_100,0,0x1a,uVar3);
      uVar3 = __ftol();
      FUN_00440150(uVar3);
    }
    FUN_0043dba0(param_1);
    FUN_00455dc0(param_1);
    if (((DAT_0050c934 != 0) && (DAT_0050c940 == 0)) && ((DAT_0050c470 == 0 && (DAT_0050c548 == 0)))
       ) {
      DAT_0050c544 = 1;
    }
    if (DAT_0050c544 != 0) {
      DAT_0050c474 = 1;
      DAT_0050c470 = 1;
      DAT_00e99400 = 0;
      DAT_0050c544 = 0;
    }
    if (((DAT_0050c934 != 0) && (DAT_0050c46c == 0)) && (DAT_0050c548 != 0)) {
      DAT_0050c548 = 0;
      FUN_0045c9d0(param_1,0);
    }
    local_108 = 0;
    if ('\0' < *(char *)(param_1 + 0x70)) {
      puVar4 = &DAT_0050c908;
      do {
        if (DAT_0050c940 != 0) {
          return;
        }
        if (DAT_0050c468 != 0) {
          return;
        }
        if (DAT_004d6b48 != 0) {
          FUN_00440550(0x54);
          if (DAT_0050c934 == 0) {
            FUN_0045c9d0(param_1,1);
            if (*(int *)(param_1 + 0x34) == 3) {
              DAT_004bfedc = 7;
              DAT_0050c944 = 0xffffffff;
              return;
            }
          }
          else {
            if (DAT_00e99400 == 0) {
              FUN_00440800(param_1);
            }
            DAT_0050c474 = 1;
            DAT_00e99400 = 0;
            DAT_0050c470 = 0;
            DAT_0050c954 = 1;
            DAT_0050c468 = -1;
            DAT_0050c548 = 1;
          }
        }
        if ((DAT_004eb39c == 0) && (DAT_004d6b44 != 0)) {
          FUN_00440550(0x4d);
          if (DAT_0050c470 == 0) {
            FUN_00454d40(param_1,3);
          }
          else {
            DAT_0050c474 = 1;
            DAT_0050c470 = 0;
            DAT_0050c954 = 1;
            DAT_00e99400 = 0;
            DAT_0050c468 = -1;
            DAT_0050c548 = 1;
          }
        }
        DAT_00e295b4 = 0;
        DAT_00e295b0 = 0;
        if ((DAT_0050c934 == 0) && (DAT_0050c470 == 0)) {
          if ((*puVar4 & 0x10000) != 0) {
            if ((DAT_0050c930 == 5) || (DAT_0050c930 == 0)) {
              local_109 = -1;
            }
            DAT_00e295b0 = 1;
          }
          if ((*puVar4 & 0x20000) != 0) {
            if ((DAT_0050c930 == 5) || (DAT_0050c930 == 0)) {
              local_109 = '\x01';
            }
            DAT_00e295b4 = 1;
          }
        }
        if (local_109 != '\0') {
          FUN_0045bde0(param_1,(short)local_109,1);
          if (*(int *)(param_1 + 0x34) != 3) {
            bVar1 = true;
          }
          FUN_00440550(0x58);
        }
        if (bVar1) {
          DAT_00e295d0 = (int)(char)(&DAT_00e29860)[(*(int *)(param_1 + 0x34) + -4) * 3];
          FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                       (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10]
                       ,(int)(char)(&DAT_004c1cb9)
                                   [(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                       (&DAT_00e2a6c1)[DAT_00e295d0 * 0x38]);
          FUN_0043eb50();
        }
        puVar4 = puVar4 + 1;
        local_108 = local_108 + 1;
      } while (local_108 < *(char *)(param_1 + 0x70));
      return;
    }
  }
  return;
}

