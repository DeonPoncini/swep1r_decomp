#include "prototype.h"


undefined4 FUN_00462d40(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0045e120(0x200);
  iVar2 = FUN_00450b30(0x4a646765,0);
  if ((*(uint *)(iVar2 + 8) & 0x20) != 0) {
    return 0;
  }
  switch(*(uint *)(iVar2 + 8) & 0xf) {
  default:
    return uVar1;
  case 2:
  case 4:
  case 5:
  case 6:
    return 0;
  }
}

