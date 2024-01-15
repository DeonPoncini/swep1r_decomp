#include "prototype.h"


void FUN_0045bde0(int param_1,short param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_2;
  iVar2 = *(int *)(param_1 + 0x34);
  bVar1 = false;
  iVar4 = iVar2 + iVar3;
  if (param_3 == 0) {
    if (iVar4 < 0) {
      return;
    }
    if (0x27 < iVar4) {
      return;
    }
    if ((&DAT_004c4028)[iVar4 * 0x10] != (&DAT_004c4028)[iVar2 * 0x10]) {
      return;
    }
  }
  iVar4 = iVar4 - iVar3;
  do {
    iVar4 = iVar4 + iVar3;
    if (iVar4 < 0) {
      iVar4 = 0x27;
    }
    else if (0x27 < iVar4) {
      iVar4 = 0;
    }
  } while ((&DAT_004c4028)[iVar4 * 0x10] != (&DAT_004c4028)[iVar2 * 0x10]);
  iVar3 = iVar4 * 0x20;
  if (*(int *)(iVar3 + 0x4c402c) != 0) {
    iVar2 = FUN_0042f7f0(&DAT_004c4010 + iVar3,&DAT_004c4010 + iVar2 * 0x20);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_0042f7f0(&DAT_004c401c + iVar3,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20),
       iVar2 == 0)) {
      bVar1 = true;
      FUN_0045c010(&DAT_004c4010 + iVar3,&DAT_004c401c + iVar3,1,0,0);
    }
  }
  *(int *)(param_1 + 0x34) = iVar4;
  if (bVar1) {
    FUN_0045bf20(param_1);
  }
  return;
}

