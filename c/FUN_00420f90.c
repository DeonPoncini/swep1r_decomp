#include "prototype.h"


int FUN_00420f90(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar1 = 0;
  if (DAT_004eb3b8 != 0) {
    pbVar2 = &DAT_00e9f444;
    iVar3 = DAT_004eb3b8;
    do {
      if ((*pbVar2 & 1) != 0) {
        iVar1 = iVar1 + 1;
      }
      pbVar2 = pbVar2 + 0xb0;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

