#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4fc0(void)

{
  int iVar1;
  char *pcVar2;
  int iStack_8;
  int iStack_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_00dfab78,0x104);
  _DAT_00dfaaa4 = &DAT_00dfab78;
  pcVar2 = DAT_00ecd610;
  if (*DAT_00ecd610 == '\0') {
    pcVar2 = &DAT_00dfab78;
  }
  FUN_004a5060(pcVar2,0,0,&iStack_8,&iStack_4);
  iVar1 = FUN_0049f270(iStack_4 + iStack_8 * 4);
  if (iVar1 == 0) {
    __amsg_exit(8);
  }
  FUN_004a5060(pcVar2,iVar1,iVar1 + iStack_8 * 4,&iStack_8,&iStack_4);
  _DAT_00dfaa8c = iVar1;
  _DAT_00dfaa88 = iStack_8 + -1;
  return;
}

