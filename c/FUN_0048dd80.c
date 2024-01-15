#include "prototype.h"


void FUN_0048dd80(void)

{
  int iVar1;
  
  if (DAT_00af30d8 != 0) {
    iVar1 = DAT_00af30d8;
    switch(DAT_00ecc430) {
    case 0:
      break;
    case 1:
    case 2:
      FUN_0048e4c0(DAT_00af30d8,&DAT_006830c8);
      iVar1 = DAT_00af30d8;
      break;
    default:
      FUN_0048df30(DAT_00af30d8,&DAT_006830c8,&LAB_0048e620);
      iVar1 = DAT_00af30d8;
    }
    DAT_00af30d8 = 0;
    DAT_00deb0e8 = DAT_00deb0e8 + iVar1;
    DAT_00deb0fc = 0;
    DAT_00deb100 = 0;
    DAT_00deb104 = 0;
  }
  return;
}

