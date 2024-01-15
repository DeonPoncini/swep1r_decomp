#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048ffc0(int param_1,int param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)(param_2 + 0x34);
  *pfVar1 = -*(float *)(param_1 + 0x3c);
  param_3 = param_3 * _DAT_004af7b8;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(float *)(param_2 + 0x38) = -param_3;
  FUN_00492440(pfVar1);
  pfVar2 = (float *)(param_2 + 0x40);
  *pfVar2 = *pfVar1;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x3c);
  *pfVar2 = -*pfVar2;
  *(float *)(param_2 + 0x50) = -(param_4 * _DAT_004af7b8);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  FUN_00492440((undefined4 *)(param_2 + 0x4c));
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 0x54);
  *(float *)(param_2 + 0x60) = -*(float *)(param_2 + 0x60);
  return 1;
}

