#include "prototype.h"


void FUN_004282f0(short param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 < 400) {
    iVar1 = (int)param_1;
    if (DAT_004b91b8 <= iVar1) {
      DAT_004b91b8 = iVar1 + 1;
    }
    iVar1 = iVar1 * 0x20;
    *(undefined2 *)(&DAT_00e9ba60 + iVar1) = 0;
    *(undefined2 *)(&DAT_00e9ba62 + iVar1) = 0;
    *(undefined4 *)(&DAT_00e9ba68 + iVar1) = 0x3f800000;
    *(undefined4 *)(&DAT_00e9ba6c + iVar1) = 0x3f800000;
    *(undefined4 *)(&DAT_00e9ba70 + iVar1) = 0;
    *(undefined4 *)(&DAT_00e9ba74 + iVar1) = 1;
    (&DAT_00e9ba78)[iVar1] = 0xff;
    (&DAT_00e9ba79)[iVar1] = 0xff;
    (&DAT_00e9ba7a)[iVar1] = 0xff;
    (&DAT_00e9ba7b)[iVar1] = 0xff;
    *(undefined4 *)(&DAT_00e9ba7c + iVar1) = param_2;
  }
  return;
}

