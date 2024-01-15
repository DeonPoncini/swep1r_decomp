#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
            FUN_00431410(local_b0,local_b0,_DAT_0050c8f0 * _DAT_004acf68,local_50,local_4c,local_48)
            ;
            FUN_00431410(local_b0,local_b0,0x42340000,local_60,local_5c,local_58);
            FUN_00431410(local_b0,local_b0,_DAT_0050c8f0 * _DAT_004acfc8,local_50,local_4c,local_48)
            ;
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
    FUN_00431410(local_b0,local_b0,_DAT_0050c8f0 * _DAT_004acf68,local_50,local_4c,local_48);
    FUN_00431410(local_b0,local_b0,0x42340000,local_60,local_5c,local_58);
    FUN_00431410(local_b0,local_b0,_DAT_0050c8f0 * _DAT_004acfc8,local_50,local_4c,local_48);
    FUN_00431450(local_b0,0x3b83126f,0x3b83126f,0x3b83126f,local_b0);
    FUN_0042f7d0(local_80,local_c0);
    FUN_00431640(iVar2,local_b0);
    FUN_00431a50(iVar2,2,3,0x10,2);
  }
  return;
}

