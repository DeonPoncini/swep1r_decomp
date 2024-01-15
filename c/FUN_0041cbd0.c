#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041cbd0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *_Dest;
  uint *puVar4;
  uint *puVar5;
  char local_20 [15];
  undefined local_11;
  
  DAT_00ec7bc8 = DAT_00ec7620;
  DAT_00ec7bcc._0_2_ = (undefined2)DAT_004eb3b8;
  uVar3 = 0;
  _Dest = (uint *)((int)&DAT_00ec7bcc + 2);
  if (DAT_004eb3b8 != 0) {
    puVar5 = (uint *)&DAT_00e9f444;
    uVar2 = DAT_004eb3b8;
    puVar4 = _Dest;
    do {
      uVar1 = *puVar5;
      *puVar4 = uVar1;
      _Dest = puVar4 + 1;
      if ((uVar1 & 4) != 0) {
        FUN_0048c380(local_20,puVar5 + -0x20,0xf);
        local_11 = 0;
        _strncpy((char *)_Dest,local_20,0xf);
        *(undefined *)((int)puVar4 + 0x13) = 0;
        FUN_0048c380(local_20,puVar5 + -0x10,0xf);
        local_11 = 0;
        _strncpy((char *)(puVar4 + 5),local_20,0xf);
        uVar2 = puVar5[1];
        uVar1 = puVar5[2];
        *(undefined *)((int)puVar4 + 0x23) = 0;
        puVar4[9] = uVar2;
        uVar2 = DAT_004eb3b8;
        puVar4[10] = uVar1;
        _Dest = puVar4 + 0xb;
      }
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 0x2c;
      puVar4 = _Dest;
    } while (uVar3 < uVar2);
  }
  _DAT_00ec7bc0 = _Dest + -0x3b1ef2;
  _DAT_00ec7ba4 = 0;
  DAT_00ec7bc4 = 0x20;
  FUN_0041b760(&DAT_00ec7ba0,param_1,1,param_2);
  return;
}

