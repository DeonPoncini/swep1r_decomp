#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cb80(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 local_48 [3];
  undefined local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined local_24 [12];
  undefined local_18 [12];
  undefined local_c [12];
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  FUN_0042f7d0(local_c,&DAT_004c4010 + *(int *)(param_1 + 0x34) * 0x20);
  FUN_0042f7d0(local_18,&DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
  if (*(int *)(param_1 + 0x34) == 0x24) {
    puVar2 = &DAT_004c4490;
  }
  else if (*(int *)(param_1 + 8) == 8) {
    puVar2 = &DAT_004c43dc;
  }
  else if ((((DAT_0050c934 == 0) || (param_2 != 0)) || (*(int *)(param_1 + 8) != 7)) ||
          ((DAT_0050c930 != 0 && (DAT_0050c930 != 5)))) {
    FUN_0042f860(local_48,local_18,local_c);
    if (param_2 == 0) {
      puVar3 = local_48;
      puVar1 = &local_30;
    }
    else {
      puVar3 = &local_30;
      puVar1 = local_48;
    }
    FUN_0042f9f0(local_24,puVar1,puVar3);
    FUN_0042f9b0(local_24);
    FUN_0042f9b0(local_48);
    FUN_0042fa50(local_48,0x40400000,local_48);
    FUN_0042f830(local_3c,local_48,local_24);
    FUN_0042fa50(local_3c,0x42700000,local_3c);
    FUN_0042f830(local_3c,local_c,local_3c);
    puVar2 = local_3c;
  }
  else {
    puVar2 = local_18;
  }
  FUN_0042f7d0(&DAT_00e298a0,puVar2);
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 0:
  case 3:
    _DAT_00e298a8 = 0xc2700000;
    return;
  case 1:
    _DAT_00e298a8 = 0xc3110000;
    break;
  case 2:
    _DAT_00e298a8 = 0xc31d0000;
    return;
  }
  return;
}

