#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004173c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,char *param_8,undefined4 param_9,
                 undefined4 param_10,int param_11)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char local_400 [1024];
  
  if (param_8 != (char *)0x0) {
    if (param_11 != 0) {
      param_7 = 100;
    }
    FUN_0049eb80(local_400,&DAT_004b6670,param_1);
    uVar2 = 0xffffffff;
    do {
      pcVar6 = param_8;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = param_8 + 1;
      cVar1 = *param_8;
      param_8 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar3 = -1;
    pcVar7 = local_400;
    do {
      pcVar8 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    puVar5 = (undefined4 *)(pcVar6 + -uVar2);
    puVar9 = (undefined4 *)(pcVar8 + -1);
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)puVar9 = *(undefined *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    if (param_1 == 6) {
      param_3 = param_3 + 6;
    }
    FUN_00450530(param_2,param_3,param_4,param_5,param_6,param_7,local_400);
    FUN_00450310(param_10);
    _DAT_004b5d88 = _DAT_004b5d8c + _DAT_004b5d88;
    if (_DAT_004ac3f4 < _DAT_004b5d88) {
      _DAT_004b5d8c = -1.0;
    }
    if (_DAT_004b5d88 < _DAT_004ac3f8) {
      _DAT_004b5d8c = 0.5;
    }
  }
  return;
}

