#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00443110(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = -_DAT_00e985b0;
  if ((((((fVar1 <= *param_1 - _DAT_00e98e30) || (fVar1 <= *param_2 - _DAT_00e98e30)) ||
        (fVar1 <= *param_3 - _DAT_00e98e30)) || (fVar1 <= *param_4 - _DAT_00e98e30)) &&
      (((*param_1 - _DAT_00e98e30 <= _DAT_00e985b0 || (*param_2 - _DAT_00e98e30 <= _DAT_00e985b0))
       || ((*param_3 - _DAT_00e98e30 <= _DAT_00e985b0 || (*param_4 - _DAT_00e98e30 <= _DAT_00e985b0)
           ))))) &&
     ((((fVar1 <= param_1[1] - _DAT_00e98e34 || (fVar1 <= param_2[1] - _DAT_00e98e34)) ||
       ((fVar1 <= param_3[1] - _DAT_00e98e34 || (fVar1 <= param_4[1] - _DAT_00e98e34)))) &&
      (((((param_1[1] - _DAT_00e98e34 <= _DAT_00e985b0 ||
          (param_2[1] - _DAT_00e98e34 <= _DAT_00e985b0)) ||
         (param_3[1] - _DAT_00e98e34 <= _DAT_00e985b0)) ||
        (param_4[1] - _DAT_00e98e34 <= _DAT_00e985b0)) &&
       (((fVar1 <= param_1[2] - _DAT_00e98e38 || (fVar1 <= param_2[2] - _DAT_00e98e38)) ||
        ((fVar1 <= param_3[2] - _DAT_00e98e38 || (fVar1 <= param_4[2] - _DAT_00e98e38)))))))))) {
    if (((_DAT_00e985b0 < param_1[2] - _DAT_00e98e38) &&
        (_DAT_00e985b0 < param_2[2] - _DAT_00e98e38)) &&
       ((_DAT_00e985b0 < param_3[2] - _DAT_00e98e38 && (_DAT_00e985b0 < param_4[2] - _DAT_00e98e38))
       )) {
      return 0;
    }
    return 1;
  }
  return 0;
}

