#include "prototype.h"


void FUN_004501f0(void)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = 0;
  if (0 < DAT_0050c758) {
    puVar1 = &DAT_00e303a0;
    puVar3 = &DAT_00e34660;
    do {
      FUN_0042d950((short)(char)(&DAT_00e343a0)[iVar2 * 4],(short)(char)(&DAT_00e343a1)[iVar2 * 4],
                   (short)(char)(&DAT_00e343a2)[iVar2 * 4],(short)(char)(&DAT_00e343a3)[iVar2 * 4]);
      FUN_0042d910(CONCAT22(extraout_var_00,*puVar3),
                   CONCAT22(extraout_var,(&DAT_00e34662)[iVar2 * 2]));
      FUN_0042ec50(puVar1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 2;
      puVar1 = puVar1 + 0x80;
    } while (iVar2 < DAT_0050c758);
  }
  DAT_0050c758 = 0;
  return;
}

