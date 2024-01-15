#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ce60(int param_1,undefined4 param_2,byte param_3)

{
  ushort *puVar1;
  uint *puVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_104;
  undefined local_100 [256];
  
  if ((param_3 & 1) == 0) {
    FUN_0047e830(*(undefined4 *)(param_1 + 0x4c),param_2);
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar5 = (int)*(short *)(iVar3 + 0x24);
  if (iVar5 < 0xcb) {
    if (iVar5 < 0xc9) {
      switch(iVar5) {
      case 100:
      case 0x66:
        goto switchD_0047cec0_caseD_64;
      case 0x65:
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
        if ((*(int *)(param_1 + 0x40) != 0) &&
           (puVar2 = (uint *)(*(int *)(param_1 + 0x40) + 0x100), *puVar2 = *puVar2 & 0xffffffef,
           _DAT_004adea8 < *(float *)(param_1 + 0x10))) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          iVar3 = *(int *)(param_1 + 0x40);
          if (_DAT_004ade50 < *(float *)(iVar3 + 0x110)) {
            FUN_00426880(iVar3,0xc1a00000);
            return;
          }
          FUN_00426880(iVar3,0x41a00000);
          return;
        }
        break;
      case 0x67:
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 0x20) != 0) {
            FUN_00431a50(*(int *)(iVar3 + 0x20),2,0xfffffffc,0x10,3);
          }
          FUN_00431a50(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x20),0,0xfffffffd,0x10,3);
          goto LAB_0047d138;
        }
        break;
      case 0x68:
        local_104 = FUN_004816b0();
        if ((float)_DAT_004adeb0 <= (float)local_104 * _DAT_004ade88) {
          FUN_004741d0(param_2,2);
          return;
        }
        FUN_004741d0(param_2,1);
        return;
      case 0x69:
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
        *(ushort *)(iVar3 + 0x26) = *(ushort *)(iVar3 + 0x26) | 1;
        FUN_0047bd80(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x20),0,0x10000000,0x3f19999a);
        goto LAB_0047d25c;
      case 0x6a:
switchD_0047cec0_caseD_6a:
        FUN_0047e450(param_2);
        return;
      case 0x6c:
        FUN_0047c920(param_1,param_2);
        return;
      }
      return;
    }
  }
  else {
    if (0xd4 < iVar5) {
      if (iVar5 < 0x131) {
        if (iVar5 != 0x130) {
          if (iVar5 != 0xd5) {
            return;
          }
          if (iVar3 == 0) {
            return;
          }
          *(ushort *)(iVar3 + 0x26) = *(ushort *)(iVar3 + 0x26) | 1;
          local_114 = 0x5368616b;
          local_110 = 0x3e800000;
          local_10c = 0x41000000;
          FUN_00450c50(0x634d616e,&local_114);
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb | 1;
          *(undefined4 *)(param_1 + 0x10) = 0;
          return;
        }
        if (*(int *)(param_1 + 0x44) != 0) {
          FUN_00426880(*(int *)(param_1 + 0x44),0x3f800000);
        }
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_00426880(*(int *)(param_1 + 0x40),0x3f800000);
        }
LAB_0047d138:
        puVar1 = (ushort *)(*(int *)(param_1 + 0x4c) + 0x26);
        *puVar1 = *puVar1 | 1;
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
        FUN_00450e30(param_1);
        return;
      }
      if (0x138 < iVar5) {
        if (iVar5 == 0x13a) {
          FUN_0047cd90(param_1,0);
          return;
        }
        if (iVar5 != 0x1f5) {
          if (iVar5 != 900) {
            return;
          }
          FUN_0044fce0(local_100,0x40400000);
          FUN_00473f40(param_2,0);
          return;
        }
        FUN_0047cd90(param_1,5);
        return;
      }
      if (iVar5 != 0x138) {
        if (iVar5 == 0x132) {
          if (iVar3 == 0) {
            return;
          }
          *(ushort *)(iVar3 + 0x26) = *(ushort *)(iVar3 + 0x26) | 1;
          local_114 = 0x5368616b;
          local_110 = 0x3e800000;
          local_10c = 0x41000000;
          FUN_00450c50(0x634d616e,&local_114);
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb | 1;
          *(undefined4 *)(param_1 + 0x10) = 0;
          return;
        }
        if (iVar5 != 0x133) {
          return;
        }
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
        if (*(int *)(iVar3 + 0x20) == 0) {
          return;
        }
        if (*(float *)(param_1 + 0x10) <= _DAT_004adea8) {
          return;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        FUN_0047bd80(*(undefined4 *)(iVar3 + 0x20),0x10,0,0x3f800000);
        return;
      }
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
      *(ushort *)(iVar3 + 0x26) = *(ushort *)(iVar3 + 0x26) | 1;
      FUN_0047bd80(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x20),0,0x10000000,0x3f19999a);
LAB_0047d25c:
      local_10c = 0x40800000;
      local_110 = 0x3d4ccccd;
      local_114 = 0x5368616b;
      FUN_00450c50(0x634d616e,&local_114);
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    if (iVar5 != 0xd4) {
      if (iVar5 != 0xcb) {
        return;
      }
      if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0x42c80000;
      }
      fVar4 = _DAT_004adea8;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
      if (*(float *)(param_1 + 0x10) <= fVar4) {
        return;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN_00426c80(0x30,7,0x3e800000,0x3f800000,0);
      goto switchD_0047cec0_caseD_6a;
    }
  }
switchD_0047cec0_caseD_64:
  FUN_0047ca90(param_1,param_2);
  return;
}

