#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004403e0(int param_1,int param_2,int param_3,undefined4 param_4,char param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_5 == '\0') {
    pcVar5 = s__SCREENTEXT_545__f4_c_s3_Lap_Rec_004c13ac;
LAB_00440404:
    uVar2 = FUN_00421360(pcVar5);
    uVar2 = __ftol(uVar2);
    FUN_00450530(param_2,param_3,0x32,0xffffffff,0xffffffff,uVar2);
  }
  else if (param_5 == '\x03') {
    pcVar5 = s__SCREENTEXT_546__f4_c_sBest_Lap_004c13d0;
    goto LAB_00440404;
  }
  iVar4 = param_3 + 7;
  if (param_5 == '\x03') {
    fVar1 = *(float *)(&DAT_00e366bc +
                      ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4);
    if (_DAT_004ac900 <= fVar1) goto LAB_00440528;
    uVar2 = __ftol(1);
    FUN_004505f0(param_2 + 0x1e,iVar4,fVar1,0x32,0xffffffff,0xffffffff,uVar2);
    puVar3 = &DAT_00e36dc4 + ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 0x20
    ;
  }
  else {
    fVar1 = *(float *)(&DAT_00e365f4 +
                      ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4);
    if (_DAT_004ac900 <= fVar1) {
LAB_00440528:
      uVar2 = __ftol(s__c_s______________004c1398);
      FUN_00450530(param_2,iVar4,0x32,0xffffffff,0xffffffff,uVar2);
      return;
    }
    uVar2 = __ftol(1);
    FUN_004505f0(param_2 + 0x1e,iVar4,fVar1,0x32,0xffffffff,0xffffffff,uVar2);
    puVar3 = &DAT_00e36784 + ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 0x20
    ;
  }
  FUN_00439c70((float)param_2,(float)(param_3 + 0xf),param_4,puVar3);
  return;
}

