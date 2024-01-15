#include "prototype.h"


undefined4 FUN_00487ae0(void)

{
  int iVar1;
  
  iVar1 = FUN_00487b20();
  if (iVar1 != 0) {
    while( true ) {
      iVar1 = FUN_00487a50(DAT_00ec9e84);
      if (iVar1 != 0) break;
      if (DAT_00ec8e80 != 0) {
        return 1;
      }
      iVar1 = FUN_00487b20();
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 0;
}

