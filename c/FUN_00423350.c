#include "prototype.h"


void FUN_00423350(void)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint local_8 [2];
  
  piVar1 = DAT_004eb414;
  local_8[0] = DAT_004eb410 >> 1;
  local_8[1] = DAT_004eb410 - 1;
  puVar3 = local_8;
  iVar2 = 2;
  do {
    (**(code **)(*piVar1 + 0xec))(piVar1,*puVar3,DAT_004eb400);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

