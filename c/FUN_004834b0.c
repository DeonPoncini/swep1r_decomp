#include "prototype.h"


void FUN_004834b0(void)

{
  int iVar1;
  
  FUN_0042d470();
  FUN_0042c3e0();
  FUN_0042c400();
  FUN_0042c460();
  FUN_0042c500();
  iVar1 = 0;
  do {
    FUN_00483270(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  FUN_00483230(0,1);
  FUN_004831d0(0,0,0,0x140,0xf0);
  FUN_004831d0(1,8,8,0x138,0xe8);
  PTR_DAT_004c7cdc = &DAT_00dfb040;
  if ((DAT_00e996dc & 0x400) != 0) {
    FUN_00483230(1,0);
    FUN_004831d0(1,8,8,0x138,0xe8);
  }
  *(uint *)PTR_DAT_004c7cdc = *(uint *)PTR_DAT_004c7cdc & 0xfffffffe;
  FUN_0044fcc0();
  DAT_00e98244 = 0;
  DAT_00e98228 = 0;
  FUN_00445640(3,2);
  FUN_00445640(5,0);
  return;
}

