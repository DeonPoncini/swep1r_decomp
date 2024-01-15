#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450100(void)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *local_4;
  
  iVar3 = 0;
  if (0 < DAT_0050c750) {
    puVar4 = &DAT_00e2c380;
    local_4 = &DAT_00e2b680;
    piVar2 = &DAT_00e2be80;
    puVar1 = &DAT_00e34860;
    do {
      FUN_0042d950((short)(char)(&DAT_00e2b480)[iVar3 * 4],(short)(char)(&DAT_00e2b481)[iVar3 * 4],
                   (short)(char)(&DAT_00e2b482)[iVar3 * 4],(short)(char)(&DAT_00e2b483)[iVar3 * 4]);
      FUN_0042d910(CONCAT22(extraout_var_00,*puVar1),
                   CONCAT22(extraout_var,(&DAT_00e34862)[iVar3 * 2]));
      if (*piVar2 != 0) {
        _DAT_0050c0b0 = 1;
        DAT_00e99750 = *local_4;
        DAT_00e99754 = local_4[1];
        DAT_00e99758 = local_4[2];
        DAT_00e9975c = local_4[3];
      }
      FUN_0042ec50(puVar4);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 2;
      piVar2 = piVar2 + 1;
      local_4 = local_4 + 4;
      puVar4 = puVar4 + 0x80;
      _DAT_0050c0b0 = 0;
    } while (iVar3 < DAT_0050c750);
  }
  DAT_0050c750 = 0;
  return;
}

