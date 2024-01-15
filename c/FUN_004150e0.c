#include "prototype.h"


undefined * FUN_004150e0(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  do {
    if (((param_1[0x20] & 0x40) != 0) && (*(int *)(param_1 + 0x18) != 8)) {
      if ((*(int *)(param_1 + 0xc) != 0) &&
         (puVar1 = (undefined *)FUN_004150e0(*(int *)(param_1 + 0xc),param_2,param_3),
         puVar1 != (undefined *)0x0)) {
        return puVar1;
      }
      if ((*(uint *)(param_1 + 0x20) & 0x400) == 0) {
        local_10 = *(undefined4 *)(param_1 + 0x24);
        local_c = *(undefined4 *)(param_1 + 0x28);
        local_8 = *(undefined4 *)(param_1 + 0x2c);
        local_4 = *(undefined4 *)(param_1 + 0x30);
        FUN_00417f00(&local_10,param_1 + 0x4e0);
        if ((param_1 != PTR_DAT_004b5d74) &&
           (iVar2 = FUN_004172c0(&local_10,param_2,param_3), iVar2 != 0)) {
          return param_1;
        }
      }
    }
    param_1 = *(undefined **)(param_1 + 4);
    if (param_1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
  } while( true );
}

