#include "prototype.h"


undefined4 FUN_00404880(int param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar1 = param_1;
  local_4 = 0x804;
  if (DAT_004d5e00 != 0) {
    iVar2 = FUN_00486cd0(&param_1,param_1 + 0x24,&local_4);
    if (iVar2 != -1) {
      DAT_004d5e18 = DAT_004d5e18 + 1;
      if (iVar2 == 0) {
        DAT_004d5e14 = DAT_004d5e14 + local_4;
        *(int *)(iVar1 + 0x20) = local_4 + -4;
        *(int *)(iVar1 + 0x1c) = param_1;
        return 1;
      }
      if (iVar2 == 2) {
        FUN_0041c780(param_1);
      }
      else if (iVar2 == 5) {
        if (DAT_004eb1c8 != 0) {
          FUN_0041cbd0(param_1,1);
          return 0;
        }
      }
      else if (iVar2 == 8) {
        DAT_004eb1c8 = 1;
        DAT_00ec7620 = DAT_004d5e08;
        FUN_0041ca50(DAT_004d5e08);
        return 0;
      }
    }
  }
  return 0;
}

