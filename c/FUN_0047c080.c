#include "prototype.h"


void FUN_0047c080(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00450b00(0x54726967);
  iVar3 = 0;
  if (0 < iVar1) {
    while ((((iVar2 = FUN_00450b30(0x54726967,iVar3), iVar2 == 0 ||
             ((*(ushort *)(iVar2 + 6) & 0x100) != 0)) || ((*(byte *)(iVar2 + 0xc) & 1) == 0)) ||
           (*(short *)(*(int *)(iVar2 + 0x4c) + 0x24) != param_1))) {
      iVar3 = iVar3 + 1;
      if (iVar1 <= iVar3) {
        return;
      }
    }
    FUN_0047bf70(iVar2);
  }
  return;
}

