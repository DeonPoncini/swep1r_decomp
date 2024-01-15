#include "prototype.h"


undefined4 FUN_00440bc0(int param_1)

{
  if (*(char *)(param_1 + 0x6c) == '\0') {
    if ((DAT_00e364a8 & 0x20) != 0) {
      return 1;
    }
  }
  else if ((((DAT_00e35a8a == 0x3fff) && (DAT_00e35a8c == 0x3fff)) && (DAT_00e35a8e == 0x3fff)) &&
          (DAT_00e35a90 == 0xff)) {
    return 1;
  }
  return 0;
}

