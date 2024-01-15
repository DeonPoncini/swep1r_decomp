#include "prototype.h"


void FUN_004490a0(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = 7;
  FUN_00428830();
  FUN_00428a60(0,1,&DAT_00e99420,0);
  FUN_00428a60(1,1,&DAT_00e99460,0);
  FUN_00428a60(2,1,&DAT_00e994a0,0);
  FUN_00428a60(3,1,&DAT_00e994e0,0);
  FUN_00428a60(4,1,&DAT_00e99520,0);
  FUN_00428a60(5,1,&DAT_00e99560,0);
  FUN_00428a60(6,1,&DAT_00e995a0,0);
  FUN_00428a60(7,1,&DAT_00e995e0,0);
  FUN_00428a60(8,1,&DAT_00e99620,0);
  FUN_00428a60(9,1,&DAT_00e99660,0);
  do {
    sVar3 = (short)iVar4;
    iVar2 = sVar3 + -7;
    iVar1 = FUN_00450b00(0x634d616e);
    if (iVar1 <= iVar2) break;
    iVar2 = FUN_00450aa0(0x634d616e,iVar2);
    FUN_00428a60(iVar4,3,iVar2 + 0x20,0);
    FUN_00428b10(iVar4,iVar2 + 0x108,0);
    FUN_00428aa0(iVar4,0,0,0,0,0,0);
    iVar4 = iVar4 + 1;
    *(int *)(iVar2 + 0x78) = (int)sVar3;
  } while ((short)iVar4 < 0x20);
  FUN_00428bd0(8);
  return;
}

