#include "prototype.h"


void FUN_0045ce90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00445aa0(param_1);
  iVar3 = 0;
  do {
    iVar1 = FUN_00450b30(0x456c6d6f,iVar3);
    if (iVar1 != 0) {
      iVar2 = FUN_00445b50(*(undefined4 *)(iVar1 + 0x30));
      if (iVar2 != 0) {
        iVar2 = FUN_00445b50(*(undefined4 *)(iVar1 + 0x34));
        if (iVar2 != 0) goto LAB_0045ceed;
      }
      if ((*(ushort *)(iVar1 + 6) & 0x100) == 0) {
        *(ushort *)(iVar1 + 6) = *(ushort *)(iVar1 + 6) | 0x100;
      }
    }
LAB_0045ceed:
    iVar3 = iVar3 + 1;
    if (0x3b < iVar3) {
      return;
    }
  } while( true );
}

