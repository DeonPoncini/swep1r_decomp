#include "prototype.h"


void FUN_00428b40(short param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_004318b0(param_2);
    if (iVar1 != -1) {
      iVar1 = FUN_004318b0(param_2);
      *(uint *)(PTR_DAT_004b91c4 + iVar1 * 0x7c) =
           *(uint *)(PTR_DAT_004b91c4 + iVar1 * 0x7c) & 0xfffffffe;
    }
    if (param_1 == -1) {
      DAT_0050c038 = 0xffffffff;
      return;
    }
    FUN_00431b90(param_2,(int)param_1);
    *(uint *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c) =
         *(uint *)(PTR_DAT_004b91c4 + DAT_0050c038 * 0x7c) | 1;
    DAT_0050c03c = 0;
  }
  return;
}

