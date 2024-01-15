#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046f0e0(int param_1,int param_2,float param_3,float param_4,int param_5,undefined4 param_6
                 )

{
  float10 fVar1;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  undefined local_58 [12];
  undefined local_4c [12];
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [32];
  
  FUN_0042f7d0(&local_7c,param_1 + 0x30);
  FUN_0042f7d0(local_58,param_2 + 0x30);
  param_5 = param_5 * 0x6c;
  local_70 = *(float *)(&DAT_004c70ac + param_5) * param_3;
  local_6c = *(undefined4 *)(&DAT_004c70b0 + param_5);
  local_68 = *(undefined4 *)(&DAT_004c70b4 + param_5);
  local_60 = *(undefined4 *)(&DAT_004c70bc + param_5);
  local_64 = *(float *)(&DAT_004c70b8 + param_5) * param_3;
  local_5c = *(float *)(&DAT_004c70c0 + param_5) * param_4;
  FUN_00430980(&local_70,&local_70,param_1);
  FUN_0042f830(&local_7c,&local_70,&local_7c);
  FUN_00430980(&local_64,&local_64,param_2);
  FUN_0042f830(local_58,&local_64,local_58);
  FUN_0042f860(local_4c,&local_7c,local_58);
  fVar1 = (float10)FUN_0042f8c0(local_4c);
  FUN_0042f9b0(local_4c);
  FUN_00431100(local_40,local_7c,local_78,local_74);
  FUN_0042f7d0(local_30,local_4c);
  FUN_0042f7b0(local_20,0,0,0x3f800000);
  FUN_0042f9f0(local_40,local_30,local_20);
  FUN_0042f9f0(local_20,local_40,local_30);
  FUN_00431450(local_40,0x3b83126f,(float)fVar1 * _DAT_004ada18,0x3b83126f,local_40);
  FUN_0044bb10(param_6,local_40);
  return;
}

