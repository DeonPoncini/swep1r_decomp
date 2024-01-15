#include "prototype.h"


void FUN_00421070(int param_1)

{
  DAT_004eb3b4 = param_1;
  DAT_004eb3c0 = &DAT_00e9f3c0 + param_1 * 0xb0;
  FUN_0049ef50(&DAT_00e9f3c4 + param_1 * 0xb0,&DAT_00e9f380,0x1f);
  *(undefined2 *)(DAT_004eb3c0 + 0x42) = 0;
  FUN_0049ef50(DAT_004eb3c0 + 0x44,&DAT_00ec8c00,0x1f);
  *(undefined2 *)(DAT_004eb3c0 + 0x82) = 0;
  return;
}

