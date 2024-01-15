#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045dd80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_40 [16];
  
  FUN_00408800();
  _DAT_004b9578 = 0x44bb8000;
  FUN_00427d70();
  iVar3 = 0;
  do {
    FUN_004276a0(iVar3,0xff0000);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x14);
  FUN_00408640(10);
  DAT_004b91c8 = 1;
  FUN_00428740(0xffffff99,0,0,0,0xffffffff);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1bc)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(DAT_00e28960 + 0x84 + iVar2);
      if (iVar1 != 0) {
        *(undefined4 *)(DAT_00e28960 + 0x80 + iVar2) = *(undefined4 *)(iVar1 + 0x2c4);
      }
      *(undefined4 *)(DAT_00e28960 + 0x84 + iVar2) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x88;
    } while (iVar3 < *(int *)(param_1 + 0x1bc));
  }
  FUN_00408640(0x14);
  FUN_00447350(0x54657374);
  FUN_00447350(0x546f7373);
  FUN_00447350(0x536d6f6b);
  FUN_00447350(0x54726967);
  FUN_00447350(0x43687372);
  FUN_00408640(0x1e);
  thunk_FUN_00449e30(1);
  FUN_0045dad0(param_1,1);
  FUN_00408640(0x28);
  FUN_004269f0(0);
  DAT_0050ccf8 = 0;
  DAT_0050cd00 = 0;
  DAT_0050ccfc = 0;
  DAT_0050cd04 = 0;
  DAT_0050ccf0 = 0;
  FUN_00408640(0x32);
  FUN_0042d500();
  FUN_0042c460();
  FUN_0042d470();
  FUN_00408640(0x3c);
  FUN_0042c3e0();
  FUN_0042c400();
  FUN_00408640(0x46);
  FUN_00428370();
  FUN_00449260();
  DAT_00e996dc = DAT_00e996dc & 0xffffbfff;
  FUN_00483fc0(0);
  FUN_00408640(0x50);
  FUN_00428a60(1,0,0,0);
  FUN_00428a60(5,0,0,0);
  if (((DAT_0050c9f8 & 2) != 0) && (param_2 == 0x46696e69)) {
    FUN_00466bd0(param_1,DAT_00e28960);
    FUN_004804a0();
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff3 | 3;
    return;
  }
  FUN_00408640(0x5a);
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 0x10;
  local_40[0] = 0x52536574;
  FUN_00450c50(0x634d616e,local_40);
  FUN_00408640(0x62);
  if (DAT_0050ca2c != 0) {
    param_2 = 0x41627274;
  }
  local_40[0] = param_2;
  FUN_00450c50(0x416c6c21,local_40);
  return;
}

