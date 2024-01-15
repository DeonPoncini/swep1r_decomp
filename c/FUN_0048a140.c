#include "prototype.h"


undefined4 FUN_0048a140(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((DAT_0052d4cc & 0x100) != 0) {
    iVar1 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x23,3);
    if (iVar1 == 0) {
      return 2;
    }
  }
  if ((DAT_0052d4cc & 0x80) != 0) {
    uVar2 = (**(code **)(*DAT_0052e644 + 0x60))(DAT_0052e644,4,0);
    uVar3 = (**(code **)(*DAT_0052e644 + 0x58))(DAT_0052e644,0x23,0);
    if ((uVar2 | uVar3) == 0) {
      return 1;
    }
  }
  return 0;
}

