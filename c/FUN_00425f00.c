#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425f00(int param_1)

{
  int iVar1;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined local_d8 [12];
  undefined local_cc [12];
  undefined local_c0 [16];
  undefined local_b0 [16];
  undefined local_a0 [16];
  undefined local_90 [16];
  undefined local_80 [64];
  undefined local_40 [64];
  
  FUN_00425ba0(&local_e8,param_1,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118));
  if ((*(uint *)(param_1 + 0x100) & 0x20000000) != 0) {
    FUN_00425ba0(local_a0,param_1,(float)*(int *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xe8));
    FUN_00481620(local_90,local_a0);
    FUN_00481620(local_c0,&local_e8);
    FUN_004813a0(local_90,local_c0,*(undefined4 *)(param_1 + 0xe4),local_b0);
    FUN_00481520(&local_e8,local_b0);
  }
  iVar1 = *(int *)(param_1 + 0x124);
  if (iVar1 != 0) {
    if ((local_dc < (float)_DAT_004ac458) && ((float)_DAT_004ac460 < local_dc)) {
      FUN_004315f0(iVar1,0,0,0);
      return;
    }
    FUN_004316a0(iVar1,local_80);
    FUN_00480730(local_80,local_d8,local_40,local_cc);
    FUN_00431150(local_40,local_dc,local_e8,local_e4,local_e0);
    FUN_00480850(local_80,local_d8,local_40,local_cc);
    FUN_00431640(*(undefined4 *)(param_1 + 0x124),local_80);
  }
  return;
}

