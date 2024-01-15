#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041da00(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  piVar3 = &DAT_00e29bc4;
  iVar6 = 0;
  iVar4 = 0;
  do {
    if ((*piVar3 == 0x4c6f636c) || (*piVar3 == 0x41414949)) {
      iVar4 = iVar4 + 1;
    }
    piVar3 = piVar3 + 0x22;
  } while ((int)piVar3 < 0xe2a664);
  if (iVar4 != 0) {
    _DAT_00ec7bc0 = &DAT_00ec7bcc;
    local_c = 0;
    local_8 = &DAT_00ea05c0;
    piVar5 = &DAT_00e29bc4;
    local_10 = &DAT_00ea0480;
    local_14 = &DAT_00ea0420;
    piVar3 = &DAT_00ec76b0;
    DAT_00ec7bc8 = iVar4;
    do {
      iVar4 = *piVar5;
      if ((iVar4 == 0x4c6f636c) || (iVar4 == 0x41414949)) {
        iVar1 = piVar3[-4];
        *_DAT_00ec7bc0 = iVar6;
        _DAT_00ec7bc0[1] = iVar1;
        _DAT_00ec7bc0[2] = *piVar3;
        _DAT_00ec7bc0[3] = piVar3[4];
        _DAT_00ec7bc0[4] = piVar3[8];
        _DAT_00ec7bc0[5] = piVar3[-3];
        _DAT_00ec7bc0[6] = piVar3[1];
        _DAT_00ec7bc0[7] = piVar3[5];
        _DAT_00ec7bc0[8] = piVar3[9];
        _DAT_00ec7bc0[9] = piVar3[-2];
        _DAT_00ec7bc0[10] = piVar3[2];
        _DAT_00ec7bc0[0xb] = piVar3[6];
        _DAT_00ec7bc0[0xc] = piVar3[10];
        _DAT_00ec7bc0[0xd] = piVar3[-1];
        _DAT_00ec7bc0[0xe] = piVar3[3];
        _DAT_00ec7bc0[0xf] = piVar3[7];
        _DAT_00ec7bc0[0x10] = piVar3[0xb];
        _DAT_00ec7bc0[0x11] = (&DAT_00ec7640)[iVar6];
        _DAT_00ec7bc0[0x12] = (&DAT_00ea0360)[iVar6];
        _DAT_00ec7bc0[0x13] = *local_14;
        _DAT_00ec7bc0[0x14] = *local_10;
        _DAT_00ec7bc0[0x15] = (int)*(short *)(piVar5 + 0x16);
        iVar2 = piVar5[0x1d];
        iVar1 = (&DAT_00e29c20)[local_c + iVar2];
        _DAT_00ec7bc0[0x16] = iVar2;
        _DAT_00ec7bc0[0x17] = iVar1;
        iVar1 = piVar5[0x20];
        _DAT_00ec7bc0[0x18] = piVar5[0x1c];
        _DAT_00ec7bc0[0x19] = iVar4;
        _DAT_00ec7bc0[0x1a] = *(uint *)(iVar1 + 0x60) & 0x87810;
        _DAT_00ec7bc0[0x1b] = *(uint *)(iVar1 + 100) & 0x1e840000;
        _DAT_00ec7bc0 = _DAT_00ec7bc0 + 0x1c;
        if (*local_8 != 0x29a) {
          *local_8 = (int)*(short *)(piVar5 + 0x16);
          local_8[1] = iVar2;
          local_8[2] = (&DAT_00e29c20)[local_c + iVar2];
          local_8[3] = piVar5[0x1c];
        }
      }
      local_14 = local_14 + 1;
      piVar3 = piVar3 + 0x10;
      local_10 = local_10 + 1;
      iVar6 = iVar6 + 1;
      local_c = local_c + 0x22;
      piVar5 = piVar5 + 0x22;
      local_8 = local_8 + 4;
    } while ((int)piVar3 < 0xec7bb0);
    _DAT_00ec7bc0 = _DAT_00ec7bc0 + -0x3b1ef2;
    _DAT_00ec7ba4 = 0;
    DAT_00ec7bc4 = 0x32;
    FUN_0041b760(&DAT_00ec7ba0,0xffffffff,1,0);
  }
  return;
}

