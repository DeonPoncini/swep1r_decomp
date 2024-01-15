#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e6f0(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  iVar2 = DAT_00e2993c;
  iVar1 = FUN_00482000(*(undefined4 *)(DAT_00e2993c + 0x100),&DAT_00e99340,0);
  if (iVar1 == 0) {
    FUN_0042f7b0(&DAT_00e99340,0,0,0);
    uVar6 = 0xc1200000;
    fVar5 = -10.0;
    fVar4 = -10.0;
    puVar3 = &DAT_00e9934c;
  }
  else {
    fVar5 = (_DAT_00e99344 + _DAT_00e99350) * (float)_DAT_004ac7c0;
    fVar4 = _DAT_00e9934c - _DAT_004ac8fc;
    uVar6 = 0xc31d0000;
    puVar3 = &DAT_004c43dc;
  }
  FUN_0042f7b0(puVar3,fVar4,fVar5,uVar6);
  iVar1 = FUN_00482000(*(undefined4 *)(iVar2 + 0xf8),&DAT_00e99320,0);
  if (iVar1 == 0) {
    FUN_0042f7d0(&DAT_00e99320,&DAT_00e99340);
    FUN_0042f7d0(&DAT_00e9932c,&DAT_00e9934c);
  }
  iVar2 = FUN_00482000(*(undefined4 *)(iVar2 + 0xfc),&DAT_00e99300,0);
  if (iVar2 == 0) {
    FUN_0042f7d0(&DAT_00e99300,&DAT_00e99340);
    FUN_0042f7d0(&DAT_00e9930c,&DAT_00e9934c);
    _DAT_00e99310 = (_DAT_00e99344 + _DAT_00e99350) * _DAT_004ac788;
    _DAT_00e99344 = (_DAT_00e99344 - _DAT_00e99350 * _DAT_004ac9d0) * _DAT_004ac9d4;
    _DAT_00e99330 = _DAT_00e99310;
  }
  return;
}

