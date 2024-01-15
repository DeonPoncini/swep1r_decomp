#include "prototype.h"


void FUN_0041c990(int param_1)

{
  int iVar1;
  
  if ((DAT_004eb1c8 != 0) || (DAT_004b6714 != -1)) {
    iVar1 = (&DAT_00e29c44)[param_1 * 0x22];
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xffffffbf | 0x80;
      *(undefined4 *)(*(int *)(iVar1 + 0x1e70) + 4) = 0x41414949;
      (&DAT_004ea8f0)[param_1] = 0x41414949;
    }
  }
  return;
}

