#include "prototype.h"


bool FUN_00440aa0(int param_1,char param_2,byte param_3)

{
  byte bVar1;
  
  bVar1 = (&DAT_00e35a85)[param_2];
  if ((DAT_004d5e00 != 0) && (param_2 < '\x03')) {
    return true;
  }
  if (*(char *)(param_1 + 0x6c) == '\0') {
    bVar1 = (&DAT_00e364ac)[param_2];
  }
  return ((byte)(1 << (param_3 & 0x1f)) & bVar1) != 0;
}

