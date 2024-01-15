#include "prototype.h"


void FUN_004a32d0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_004d4228 == param_1) {
    PTR_LOOP_004d4228 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_004d2208) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_00ecd604,0,param_1);
    return;
  }
  DAT_004d2218 = 0xffffffff;
  return;
}

