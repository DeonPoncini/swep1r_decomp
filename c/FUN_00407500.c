#include "prototype.h"


int FUN_00407500(byte *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int local_10;
  byte local_c [4];
  undefined4 local_8;
  int local_4;
  
  pbVar3 = param_1;
  iVar7 = 0;
  iVar8 = -1;
  local_10 = 0;
  local_c[0] = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_004d5fc0;
  }
  else if (param_1 == (byte *)0x1) {
    param_1 = &DAT_004d6518;
  }
  else if (param_1 == (byte *)0x2) {
    param_1 = &DAT_004d6828;
  }
  iVar4 = FUN_00407cd0(local_c,param_2,1);
  if (iVar4 == 0) {
    return -1;
  }
  if (param_3 == 0) {
    local_c[0] = local_c[0] | 8;
  }
  else {
    local_c[0] = local_c[0] | 4;
  }
  bVar2 = *param_1;
  pbVar5 = param_1;
  while (bVar2 != 0xff) {
    if (-1 < iVar8) goto LAB_004075d3;
    if (((*(int *)(pbVar5 + 8) == local_4) && ((local_c[0] & *pbVar5) == local_c[0])) &&
       (local_10 = local_10 + 1, local_10 == param_4)) {
      iVar8 = iVar7;
    }
    pbVar1 = pbVar5 + 0xc;
    pbVar5 = pbVar5 + 0xc;
    iVar7 = iVar7 + 1;
    bVar2 = *pbVar1;
  }
  if (iVar8 < 0) {
    return -1;
  }
LAB_004075d3:
  if (param_5 != 0) {
    if (iVar8 <= (&DAT_004d5e20)[(int)pbVar3] + -1) {
      puVar6 = (undefined4 *)(param_1 + iVar8 * 0xc);
      iVar7 = iVar8;
      do {
        iVar7 = iVar7 + 1;
        *puVar6 = puVar6[3];
        puVar6[1] = puVar6[4];
        puVar6[2] = puVar6[5];
        puVar6 = puVar6 + 3;
      } while (iVar7 <= (&DAT_004d5e20)[(int)pbVar3] + -1);
    }
    (&DAT_004d5e20)[(int)pbVar3] = (&DAT_004d5e20)[(int)pbVar3] + -1;
  }
  return iVar8;
}

