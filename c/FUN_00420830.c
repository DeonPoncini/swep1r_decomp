#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00420830(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined local_118 [256];
  char local_18 [24];
  
  if (DAT_004eb398 == 0) {
    uVar1 = FUN_00486c00();
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        FUN_00486c10(uVar3,local_118);
        iVar2 = 0x10;
        bVar6 = true;
        pcVar4 = local_18;
        pcVar5 = "";
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar6 = *pcVar4 == *pcVar5;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          _DAT_004eb390 = uVar3;
          FUN_00404760(uVar3);
          DAT_004eb398 = 1;
          return 1;
        }
        uVar3 = uVar3 + 1;
        if (uVar1 <= uVar3) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

