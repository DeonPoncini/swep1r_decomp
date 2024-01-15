#include "prototype.h"


undefined4 FUN_004a3120(void)

{
  int iVar1;
  
  DAT_00ecd604 = HeapCreate(0,0x1000,0);
  if (DAT_00ecd604 == (HANDLE)0x0) {
    return 0;
  }
  iVar1 = FUN_004a3160();
  if (iVar1 == 0) {
    HeapDestroy(DAT_00ecd604);
    return 0;
  }
  return 1;
}

