#include "prototype.h"


void FUN_0044b750(undefined4 *param_1)

{
  int iVar1;
  
  DAT_004c3c0c = 1;
  if (DAT_0050c6f4 < 0x20) {
    DAT_0050c6f4 = DAT_0050c6f4 + 1;
    iVar1 = DAT_0050c6f4 * 0x30;
    *(undefined4 *)(&DAT_00e375c0 + iVar1) = *param_1;
    *(undefined4 *)(&DAT_00e375c4 + iVar1) = param_1[1];
    *(undefined4 *)(&DAT_00e375c8 + iVar1) = param_1[2];
    *(undefined4 *)(&DAT_00e375cc + iVar1) = param_1[3];
    *(undefined4 *)(&DAT_00e375d0 + iVar1) = param_1[4];
    *(undefined4 *)(&DAT_00e375d4 + iVar1) = param_1[5];
    *(undefined4 *)(&DAT_00e375d8 + iVar1) = param_1[6];
    *(undefined4 *)(&DAT_00e375dc + iVar1) = param_1[7];
    *(undefined4 *)(&DAT_00e375e0 + iVar1) = param_1[8];
    *(undefined4 *)(&DAT_00e375e4 + iVar1) = param_1[9];
    *(undefined4 *)(&DAT_00e375e8 + iVar1) = param_1[10];
    *(undefined4 *)(&DAT_00e375ec + iVar1) = param_1[0xb];
  }
  return;
}

