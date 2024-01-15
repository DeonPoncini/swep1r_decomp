#include "prototype.h"


int FUN_0042df70(int param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  uint local_4;
  
  iVar3 = param_2;
  local_c = 0;
  local_8 = 0;
  bVar2 = false;
  iVar7 = 0;
  do {
    bVar5 = *(byte *)(iVar7 + param_1);
    if (bVar5 == 0) {
      bVar2 = true;
    }
    if (bVar5 == 0x7e) {
      cVar1 = *(char *)(iVar7 + 1 + param_1);
      iVar7 = iVar7 + 1;
      if (cVar1 == 'n') {
        bVar2 = true;
      }
      else {
        bVar5 = (cVar1 != '~') - 1U & 0x7e;
      }
    }
    if ((bVar5 != 0) && (!bVar2)) {
      param_2 = (uint)bVar5;
      if (bVar5 == 0x5f) {
        bVar5 = 0x20;
        param_2 = 0x20;
      }
      if (((0x60 < bVar5) && (bVar5 < 0x7b)) && (*(byte *)(iVar3 + 0x5b) < 0x61)) {
        bVar5 = bVar5 - 0x20;
        param_2 = (uint)bVar5;
      }
      iVar4 = 0;
      if (((0x96 < bVar5) && (*(int *)(iVar3 + 0x60) != 0)) && ((&DAT_004bf9c2)[param_2] != 0xff)) {
        iVar6 = (uint)(byte)(&DAT_004bf9c2)[param_2] * 2;
        local_4 = (uint)(byte)(&DAT_004bfa10)[iVar6];
        bVar5 = (&DAT_004bfa11)[iVar6];
        param_2 = (uint)bVar5;
        if (bVar5 == 0xff) {
          iVar4 = local_4 * 0x10 + *(int *)(iVar3 + 0x60);
          bVar5 = 0;
          param_2 = 0;
        }
      }
      if (((*(int *)(iVar3 + 0x5c) != 0) && (*(byte *)(iVar3 + 0x5a) <= bVar5)) &&
         (bVar5 <= *(byte *)(iVar3 + 0x5b))) {
        iVar4 = (param_2 - *(byte *)(iVar3 + 0x5a)) * 0x10 + *(int *)(iVar3 + 0x5c);
      }
      if (iVar4 != 0) {
        local_8 = local_8 + *(short *)(iVar4 + 0xe);
        local_c = local_c + 1;
      }
    }
    iVar7 = iVar7 + 1;
  } while (!bVar2);
  if (local_c != 0) {
    return local_8 / local_c;
  }
  return 0;
}

