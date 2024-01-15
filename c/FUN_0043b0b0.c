#include "prototype.h"


void FUN_0043b0b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  DAT_00e295c8 = 3;
  DAT_00e295cc = 0;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    if (DAT_00e364af == '\0') {
      DAT_00e295c8 = 2;
    }
    iVar1 = (int)*(char *)(param_1 + 0x5e);
    iVar3 = 0;
    if ('\0' < (char)(&DAT_004bfee0)[iVar1]) {
      do {
        if (((&DAT_00e364ac)[iVar1] & (byte)(1 << ((byte)iVar3 & 0x1f))) != 0) {
          iVar2 = iVar2 + 1;
          DAT_00e295cc = iVar2;
        }
        iVar1 = (int)*(char *)(param_1 + 0x5e);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (char)(&DAT_004bfee0)[iVar1]);
    }
  }
  else {
    if (DAT_00e35a88 == '\0') {
      DAT_00e295c8 = 2;
    }
    iVar1 = (int)*(char *)(param_1 + 0x5e);
    iVar3 = 0;
    if ('\0' < (char)(&DAT_004bfee0)[iVar1]) {
      do {
        if (((&DAT_00e35a85)[iVar1] & (byte)(1 << ((byte)iVar3 & 0x1f))) != 0) {
          iVar2 = iVar2 + 1;
          DAT_00e295cc = iVar2;
        }
        iVar1 = (int)*(char *)(param_1 + 0x5e);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (char)(&DAT_004bfee0)[iVar1]);
    }
  }
  if ((DAT_004d5e00 != 0) && (*(char *)(param_1 + 0x5e) < '\x03')) {
    iVar2 = (int)(char)(&DAT_004bfee0)[*(char *)(param_1 + 0x5e)];
    DAT_00e295cc = iVar2;
  }
  if (iVar2 + -1 < DAT_00e295d0) {
    DAT_00e295d0 = iVar2 + -1;
  }
  DAT_00e295c0 = (uint)('\0' < *(char *)(param_1 + 0x5e));
  DAT_00e295c4 = (uint)(*(char *)(param_1 + 0x5e) < DAT_00e295c8);
  return;
}

