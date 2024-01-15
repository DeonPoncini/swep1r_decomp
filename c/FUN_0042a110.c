#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a110(undefined4 param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_4;
  
  fVar1 = param_2;
  _DAT_0050c080 = 1;
  iVar2 = FUN_00450aa0(0x54657374,DAT_0050c050);
  if (iVar2 != 0) {
    switch(param_1) {
    case 0:
      param_2 = 1.0;
      if (fVar1 <= _DAT_004ac520) {
        param_2 = -1.0;
      }
      DAT_0050c050 = __ftol();
      iVar2 = FUN_00450aa0(0x54657374,DAT_0050c050);
      if ((iVar2 == 0) || ((*(ushort *)(iVar2 + 6) & 0x100) != 0)) {
        if (_DAT_004ac520 <= param_2) {
          DAT_0050c050 = 0;
          return;
        }
        do {
          DAT_0050c050 = DAT_0050c050 + 1;
          iVar2 = FUN_00450aa0(0x54657374,DAT_0050c050);
          if ((iVar2 == 0) || ((*(ushort *)(iVar2 + 6) & 0x100) != 0)) {
            param_2 = 0.0;
            DAT_0050c050 = DAT_0050c050 + -1;
          }
        } while (param_2 < _DAT_004ac520);
        return;
      }
      break;
    case 1:
      FUN_00429d50((undefined4 *)(iVar2 + 0x6c),param_2,0x3c23d70a,0x3d4ccccd,0x3f800000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x1c) = *(undefined4 *)(iVar2 + 0x6c);
      return;
    case 2:
      FUN_00429d50((undefined4 *)(iVar2 + 0x70),param_2,0x3f800000,0x41200000,0x447a0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x20) = *(undefined4 *)(iVar2 + 0x70);
      return;
    case 3:
      FUN_00429d50((undefined4 *)(iVar2 + 0x74),param_2,0x3f800000,0x41200000,0x447a0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x24) = *(undefined4 *)(iVar2 + 0x74);
      return;
    case 4:
      FUN_00429d50((undefined4 *)(iVar2 + 0x78),param_2,0x3c23d70a,0x3ca3d70a,0x41200000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x28) = *(undefined4 *)(iVar2 + 0x78);
      return;
    case 5:
      FUN_00429d50((undefined4 *)(iVar2 + 0x7c),param_2,0x3f800000,0x42c80000,0x44fa0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x2c) = *(undefined4 *)(iVar2 + 0x7c);
      return;
    case 6:
      FUN_00429d50((undefined4 *)(iVar2 + 0x80),param_2,0x3f000000,0x40000000,0x447a0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x30) = *(undefined4 *)(iVar2 + 0x80);
      return;
    case 7:
      FUN_00429d50((undefined4 *)(iVar2 + 0x84),param_2,0x3f000000,0x40000000,0x447a0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x34) = *(undefined4 *)(iVar2 + 0x84);
      return;
    case 8:
      FUN_00429d50((undefined4 *)(iVar2 + 0x88),param_2,0x3f800000,0x41200000,0x447a0000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x38) = *(undefined4 *)(iVar2 + 0x88);
      return;
    case 9:
      FUN_00429d50((undefined4 *)(iVar2 + 0x8c),param_2,0x3dcccccd,0x3dcccccd,0x41f00000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x3c) = *(undefined4 *)(iVar2 + 0x8c);
      return;
    case 10:
      FUN_00429d50((undefined4 *)(iVar2 + 0x90),param_2,0x3dcccccd,0x3dcccccd,0x41a00000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x40) = *(undefined4 *)(iVar2 + 0x90);
      return;
    case 0xb:
      FUN_00429d50((undefined4 *)(iVar2 + 0x94),param_2,0x3d4ccccd,0x40400000,0x41f00000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x44) = *(undefined4 *)(iVar2 + 0x94);
      return;
    case 0xc:
      FUN_00429d50((undefined4 *)(iVar2 + 0x98),param_2,0x3c23d70a,0,0x3f800000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x48) = *(undefined4 *)(iVar2 + 0x98);
      return;
    case 0xd:
      FUN_00429d50((undefined4 *)(iVar2 + 0x9c),param_2,0x3dcccccd,0x3f800000,0x42c80000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x4c) = *(undefined4 *)(iVar2 + 0x9c);
      return;
    case 0xe:
      FUN_00429d50((undefined4 *)(iVar2 + 0xa0),param_2,0x3c23d70a,0,0x3f800000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x50) = *(undefined4 *)(iVar2 + 0xa0);
      return;
    case 0xf:
      FUN_00429d50((undefined4 *)(iVar2 + 0xa8),param_2,0x3d4ccccd,0x3d4ccccd,0x41a00000);
      *(undefined4 *)(*(int *)(iVar2 + 0x1e70) + 0x54) = *(undefined4 *)(iVar2 + 0xa8);
      return;
    case 0x10:
      fVar3 = (float10)FUN_00480670(*(undefined4 *)(iVar2 + 0x108));
      local_4 = (float)fVar3;
      FUN_00429d50(&local_4,param_2,0x3f800000,0x41200000,0x43fa0000);
      *(float *)(iVar2 + 0x108) = local_4 * local_4;
    }
  }
  return;
}

