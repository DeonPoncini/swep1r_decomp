#include "prototype.h"


int FUN_004a5600(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_00dfaea4 = 1;
                    /* WARNING: Could not recover jumptable at 0x004a561d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_00dfaea4 = 1;
                    /* WARNING: Could not recover jumptable at 0x004a5632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_00dfab48;
  }
  DAT_00dfaea4 = (uint)bVar2;
  return param_1;
}

