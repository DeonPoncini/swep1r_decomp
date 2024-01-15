#include "prototype.h"


void FUN_0042c1a0(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined local_10 [4];
  undefined local_c [4];
  undefined local_8 [4];
  undefined local_4 [4];
  
  iVar6 = 0;
  FUN_004285d0(0xffffff98,0);
  if ((((DAT_0050c048 & 0x200) == 0) || (DAT_0050c040 < 1)) || ((DAT_00e98e90 & 0x1100) != 0x1100))
  {
    DAT_00e9a830 = 0;
    bVar1 = false;
    puVar4 = &DAT_00e9a3e0;
    puVar5 = &DAT_00e9a590;
    do {
      if (-1 < (int)(&DAT_004b94c8)[iVar6]) {
        uVar2 = (&DAT_00e99c20)[iVar6];
        (&DAT_00e9a598)[iVar6] = (&DAT_00e9a480)[iVar6];
        uVar3 = (&DAT_00e99c28)[iVar6];
        *puVar5 = (&DAT_00e9a488)[iVar6];
        (&DAT_00e9a480)[iVar6] = uVar2;
        (&DAT_00e9a488)[iVar6] = uVar3;
        bVar1 = true;
        FUN_0042b710(param_1,puVar4,local_10,local_c,local_4,local_8,1);
        uVar2 = __ftol();
        (&DAT_00e99c20)[iVar6] = uVar2;
        uVar3 = __ftol();
        (&DAT_00e99c28)[iVar6] = uVar3;
        FUN_0042bb50(uVar2,uVar3,iVar6);
      }
      puVar4 = puVar4 + 0xc;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while ((int)puVar4 < 0xe9a3f8);
    if (bVar1) {
      uVar2 = __ftol();
      FUN_00428740(0xffffff98,0xffffffff,0xffffffff,0xffffffc8,uVar2);
    }
  }
  return;
}

