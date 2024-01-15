#include "prototype.h"


void FUN_00447420(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0042d680(3);
  FUN_0042d640(3,0,&DAT_00e9823c,4);
  DAT_00e9823c = (DAT_00e9823c & 0xff00 | DAT_00e9823c << 0x10) << 8 |
                 (DAT_00e9823c >> 0x10 | DAT_00e9823c & 0xff0000) >> 8;
  if (0x6a4 < (int)DAT_00e9823c) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar2 = &DAT_00e93860;
  for (iVar1 = 0x6a4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0042d6f0(3);
  return;
}

