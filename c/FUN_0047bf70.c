#include "prototype.h"


void FUN_0047bf70(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 100) {
    iVar3 = 0;
  }
  else if (iVar2 == 0x66) {
    iVar3 = 0;
  }
  else if (iVar2 == 0xc9) {
    iVar3 = 0;
  }
  else if (iVar2 == 0xca) {
    iVar3 = 1;
  }
  else if (iVar2 == 0xd4) {
    iVar3 = 0;
  }
  else if (iVar2 == 0x13a) {
    iVar3 = 0;
  }
  else if (iVar2 == 0x1f5) {
    iVar3 = 5;
  }
  if ((iVar2 == 0x13a) || (iVar2 == 0x1f5)) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4c) + 0x26);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  else {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4c) + 0x26);
    *pbVar1 = *pbVar1 | 1;
  }
  if (iVar3 != -1) {
    FUN_0047bee0(iVar3);
    if ((&DAT_00e26fe0)[iVar3] != 0) {
      FUN_00431a50((&DAT_00e26fe0)[iVar3],2,0xfffffffc,0x10,3);
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
    FUN_00450e30(param_1);
  }
  if (*(int *)(param_1 + 8) == 0x6c) {
    FUN_0047bee0(2);
    if (DAT_00e26fe8 != 0) {
      FUN_00431a50(DAT_00e26fe8,2,0xfffffffc,0x10,3);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00431a50(*(int *)(param_1 + 0x48),2,3,0x10,2);
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
    FUN_00450e30(param_1);
  }
  return;
}

