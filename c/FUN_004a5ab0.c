#include "prototype.h"


void FUN_004a5ab0(void)

{
  if ((DAT_00dfaac8 == 1) || ((DAT_00dfaac8 == 0 && (DAT_004d1fb4 == 1)))) {
    FUN_004a5af0(0xfc);
    if (DAT_00dfaea8 != (code *)0x0) {
      (*DAT_00dfaea8)();
    }
    FUN_004a5af0(0xff);
  }
  return;
}

