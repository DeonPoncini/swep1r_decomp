#include "prototype.h"


undefined4 FUN_00412e90(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined local_400 [1024];
  
  iVar1 = FUN_00417010(param_1);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      FUN_0049eb80(local_400,s__s__s_tga_004b6650,s_data_images_004b665c,param_2);
      FUN_004114d0(local_400,param_1);
      return 1;
    }
    iVar1 = FUN_00446fb0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00416fd0(iVar1,param_1,0);
  }
  return 1;
}

