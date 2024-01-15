#include "prototype.h"


void FUN_00443c50(byte param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  undefined local_80 [48];
  float local_50;
  float local_4c;
  float local_48;
  undefined local_40 [48];
  float local_10;
  float local_c;
  float local_8;
  
  if ((param_1 & 1) == 0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    if (DAT_00e98e1c == 3) {
      *param_4 = *param_5;
      param_4[1] = param_5[1];
      param_4[2] = param_5[2];
      DAT_00e9827c = DAT_00e9826c;
      DAT_00e98e00 = DAT_00e98280;
    }
  }
  else {
    FUN_00445500(local_80);
    if ((param_1 & 2) == 0) {
      *param_2 = *param_3 - local_50;
      param_2[1] = param_3[1] - local_4c;
      param_2[2] = param_3[2] - local_48;
      if (DAT_00e98e1c == 3) {
        *param_4 = *param_5;
        param_4[1] = param_5[1];
        fVar1 = param_5[2];
        param_4[2] = fVar1;
        DAT_00e9827c = DAT_00e9826c -
                       (*param_4 * local_50 + local_48 * fVar1 + local_4c * param_4[1]);
        DAT_00e98e00 = DAT_00e98280 -
                       (*param_4 * local_50 + local_4c * param_4[1] + local_48 * param_4[2]);
        return;
      }
    }
    else {
      FUN_00430310(local_40,local_80);
      FUN_00430a00(param_2,param_3,local_40);
      if (DAT_00e98e1c == 3) {
        FUN_00430980(param_4,param_5,local_40);
        DAT_00e9827c = *param_4 * local_10 + local_8 * param_4[2] + local_c * param_4[1] +
                       DAT_00e9826c;
        DAT_00e98e00 = *param_4 * local_10 + local_8 * param_4[2] + local_c * param_4[1] +
                       DAT_00e98280;
        return;
      }
    }
  }
  return;
}

