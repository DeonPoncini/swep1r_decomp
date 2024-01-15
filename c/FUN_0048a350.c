#include "prototype.h"


void FUN_0048a350(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  
  if (param_4 <= DAT_0052e624) {
    FUN_0048a450(param_2);
    if (param_1 != DAT_0052e628) {
      iVar1 = (**(code **)(*DAT_0052e644 + 0x98))(DAT_0052e644,0,param_1);
      if (iVar1 == 0) {
        DAT_0052e628 = param_1;
      }
    }
    (**(code **)(*DAT_0052e644 + 0x74))(DAT_0052e644,4,0x1c4,param_3,param_4,param_5,param_6,0x18);
  }
  return;
}

