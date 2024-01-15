#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042edc0(char param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_0044e290(0,0,DAT_004bfa0c,DAT_004bfa0c >> 8 & 0xff,DAT_004bfa0c >> 0x10 & 0xff,
               DAT_004bfa0c >> 0x18);
  DAT_00e99764 = 1;
  if (param_1 == '_') {
    param_1 = ' ';
  }
  if ((('`' < param_1) && (param_1 < '{')) && (*(byte *)((int)DAT_0050c0c4 + 0x5b) < 0x61)) {
    param_1 = param_1 + -0x20;
  }
  if (DAT_0050c0c4[0x17] != 0) {
    iVar1 = (int)param_1;
    if ((((int)(uint)*(byte *)((int)DAT_0050c0c4 + 0x5a) <= iVar1) &&
        (iVar1 <= (int)(uint)*(byte *)((int)DAT_0050c0c4 + 0x5b))) &&
       (pcVar2 = (char *)((iVar1 - (uint)*(byte *)((int)DAT_0050c0c4 + 0x5a)) * 0x10 +
                         DAT_0050c0c4[0x17]), *(short *)(pcVar2 + 8) != -1)) {
      _DAT_00e99740 = (int)*(short *)(pcVar2 + 6);
      iVar1 = (int)*pcVar2;
      _DAT_00e99708 = (int)*(short *)(pcVar2 + 4);
      _DAT_00e9970c = (int)*(short *)(pcVar2 + 0xc);
      _DAT_00e99704 = (int)*(short *)(pcVar2 + 0xe);
      _DAT_00e99700 = (int)*(short *)(pcVar2 + 8);
      _DAT_00e996fc = (int)*(short *)(pcVar2 + 10);
      if (*DAT_0050c0c4 == 0) {
        _DAT_00e99760 = (int)pcVar2[1];
      }
      else {
        _DAT_00e99760 = 0;
      }
      goto LAB_0042ee99;
    }
  }
  iVar1 = -2;
LAB_0042ee99:
  if (-1 < iVar1) {
    FUN_0042ddf0(DAT_0050c0c4,iVar1);
  }
  return;
}

