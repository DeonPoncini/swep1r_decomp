#include "prototype.h"


undefined * FUN_00414d90(undefined *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_DAT_004b5d74;
  }
  if (*(int *)(param_1 + 0x1c) != param_2) {
    puVar2 = *(undefined **)(param_1 + 0xc);
    if (puVar2 != (undefined *)0x0) {
      do {
        if (*(int *)(puVar2 + 0x18) != 0xc) {
          if ((*(int *)(puVar2 + 0xc) != 0) &&
             (puVar1 = (undefined *)FUN_00414d90(puVar2,param_2), puVar1 != (undefined *)0x0)) {
            return puVar1;
          }
          if (*(int *)(puVar2 + 0x1c) == param_2) {
            return puVar2;
          }
        }
        puVar2 = *(undefined **)(puVar2 + 4);
        if (puVar2 == (undefined *)0x0) {
          return (undefined *)0x0;
        }
      } while( true );
    }
    param_1 = (undefined *)0x0;
  }
  return param_1;
}

