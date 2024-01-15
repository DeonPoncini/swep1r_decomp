#include "prototype.h"


void FUN_00485c40(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *unaff_ESI;
  int **ppiVar4;
  int **ppiStack_54;
  int *piStack_50;
  int **ppiStack_4c;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int **ppiStack_8;
  undefined4 uStack_4;
  
  local_34 = 0;
  local_30 = 0;
  if (DAT_0050fec8 != 0) {
    puVar3 = &DAT_0050f0c0;
    ppiVar4 = (int **)&DAT_00eca0e4;
    local_38 = 2;
    do {
      piStack_50 = &local_34;
      ppiStack_4c = (int **)0x0;
      ppiStack_54 = ppiVar4 + -0x90;
      (**(code **)(*DAT_0050feb8 + 0xc))(DAT_0050feb8);
      iVar2 = (**(code **)*unaff_ESI)(unaff_ESI,&DAT_004aefb8,ppiVar4);
      (**(code **)(*piStack_50 + 8))(piStack_50);
      local_34 = 0;
      if (iVar2 < 0) {
LAB_00485e9b:
        ppiStack_4c = (int **)*ppiVar4;
        if (ppiStack_4c != (int **)0x0) {
          piStack_50 = (int *)0x485ea7;
          (**(code **)((int)*ppiStack_4c + 8))();
        }
        uVar1 = puVar3[-6];
        *ppiVar4 = (int *)0x0;
        puVar3[-6] = uVar1 & 0xfffffffe;
        *puVar3 = *puVar3 & 0xfffffffe;
        puVar3[6] = puVar3[6] & 0xfffffffe;
        puVar3[0xc] = puVar3[0xc] & 0xfffffffe;
        puVar3[0x12] = puVar3[0x12] & 0xfffffffe;
        puVar3[0x18] = puVar3[0x18] & 0xfffffffe;
      }
      else {
        ppiStack_4c = ppiVar4 + 1;
        *ppiStack_4c = (int *)0x2c;
        piStack_50 = *ppiVar4;
        ppiStack_54 = (int **)0x485cc1;
        iVar2 = (**(code **)(*piStack_50 + 0xc))();
        if (iVar2 < 0) goto LAB_00485e9b;
        piStack_50 = *ppiVar4;
        ppiStack_4c = (int **)&LAB_0049d670;
        ppiStack_54 = (int **)0x485cd6;
        iVar2 = (**(code **)(*piStack_50 + 0x2c))();
        if (iVar2 < 0) goto LAB_00485e9b;
        ppiStack_4c = (int **)0x9;
        iVar2 = **ppiVar4;
        piStack_50 = (int *)0x485ce9;
        piStack_50 = (int *)FUN_0048c780();
        ppiStack_54 = (int **)*ppiVar4;
        iVar2 = (**(code **)(iVar2 + 0x34))();
        if (iVar2 < 0) goto LAB_00485e9b;
        ppiStack_54 = (int **)*ppiVar4;
        ppiStack_4c = (int **)&uStack_18;
        uStack_18 = 0x18;
        uStack_14 = 0x10;
        uStack_10 = 0;
        uStack_c = 1;
        piStack_50 = (int *)0x4;
        iVar2 = (*(code *)(*ppiStack_54)[5])();
        if (-1 < iVar2) {
          FUN_00486970((int)unaff_ESI + -2,uStack_14,uStack_10,0x3e19999a);
        }
        uStack_1c = 4;
        iVar2 = (**(code **)(**ppiVar4 + 0x14))(*ppiVar4,4,&uStack_24);
        if (-1 < iVar2) {
          FUN_00486970((int)unaff_ESI + -1,uStack_20,uStack_1c,0x3e19999a);
        }
        uStack_28 = 8;
        iVar2 = (**(code **)(**ppiVar4 + 0x14))(*ppiVar4,4,&local_30);
        if (-1 < iVar2) {
          FUN_00486970(unaff_ESI,uStack_2c,uStack_28,0x3e19999a);
        }
        local_34 = 0xc;
        iVar2 = (**(code **)(**ppiVar4 + 0x14))(*ppiVar4,4,&stack0xffffffc4);
        if (-1 < iVar2) {
          FUN_00486970((int)unaff_ESI + 1,local_38,local_34,0x3e19999a);
        }
        iVar2 = (**(code **)(**ppiVar4 + 0x14))(*ppiVar4,4,&stack0xffffffb8);
        if (-1 < iVar2) {
          FUN_00486970((int)unaff_ESI + 2,unaff_ESI,0x10,0x3e19999a);
        }
        ppiStack_4c = (int **)0x14;
        iVar2 = (**(code **)(**ppiVar4 + 0x14))(*ppiVar4,4,&ppiStack_54);
        if (-1 < iVar2) {
          ppiStack_4c = (int **)0x3e19999a;
          piStack_50 = (int *)uStack_4;
          ppiStack_54 = ppiStack_8;
          FUN_00486970(local_38 + 3);
        }
        if (((uint)ppiVar4[2] & 0x100) != 0) {
          ppiStack_54 = (int **)*ppiVar4;
          ppiStack_4c = (int **)&uStack_2c;
          uStack_2c = 0x14;
          uStack_28 = 0x10;
          uStack_24 = 0;
          uStack_20 = 0;
          uStack_1c = 0;
          piStack_50 = (int *)0x9;
          iVar2 = (*(code *)(*ppiStack_54)[6])();
          if (iVar2 < 0) goto LAB_00485e9b;
        }
        ppiStack_4c = (int **)*ppiVar4;
        piStack_50 = (int *)0x485e97;
        iVar2 = (**(code **)((int)*ppiStack_4c + 0x1c))();
        if (iVar2 < 0) goto LAB_00485e9b;
      }
      local_38 = local_38 + 6;
      local_30 = local_30 + 1;
      ppiVar4 = ppiVar4 + 0x9d;
      puVar3 = puVar3 + 0x24;
    } while (local_30 < DAT_0050fec8);
  }
  return;
}

