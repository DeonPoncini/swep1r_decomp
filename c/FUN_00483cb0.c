#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483cb0(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *local_4;
  
  bVar2 = true;
  if (DAT_0050c600 == 1) {
    FUN_00483ca0();
    DAT_0050c600 = 0;
  }
  iVar4 = 0;
  FUN_00426910();
  iVar3 = DAT_0050cce0;
  DAT_0050cd0c = DAT_0050cd0c + 1;
  iVar1 = *(int *)(&DAT_00e34a70 + (uint)DAT_00e98244 * 4);
  _DAT_0050cce4 = DAT_0050cce0;
  DAT_0050cce0 = DAT_00e6b160;
  if (DAT_00e6b160 == 0) {
    DAT_0050cce0 = iVar1;
  }
  if (iVar3 == 0) {
    _DAT_0050cce4 = iVar1;
  }
  DAT_0050ccec = 0;
  _DAT_00e229a0 = &DAT_00dfb600 + (uint)DAT_00e98228 * 80000;
  DAT_00e229b0 = _DAT_00e229a0;
  DAT_00e6b160 = iVar1;
  FUN_00483bb0(0);
  if ((DAT_0050ccf0 == 0) || ((DAT_00dfb318 & 1) == 0)) {
    if (DAT_0050c084 != 0) {
      _DAT_00e229a8 = 0;
      _DAT_00e229aa = 0;
      _DAT_00e229ac = 0;
    }
    thunk_FUN_00426910(DAT_0050c084 == 0 && (DAT_00e996e0 & 2) == 0);
  }
  else {
    thunk_FUN_00426910(0,(int)DAT_00e2270a,(int)DAT_00e22716,DAT_00e22704,
                       CONCAT22(extraout_var,DAT_00e22706),DAT_00e22708,DAT_00e22710,
                       CONCAT22(extraout_var,DAT_00e22712),DAT_00e22714);
  }
  FUN_004283b0(1);
  local_4 = DAT_00e229b0;
  pbVar6 = &DAT_00dfb040;
  puVar5 = &DAT_00e22708;
  do {
    if ((*pbVar6 & 1) != 0) {
      local_4 = DAT_00e229b0;
      FUN_00483bb0(iVar4);
      if (((DAT_0050ccf0 != 0) && (0xe22713 < (int)puVar5)) && ((DAT_00dfb318 & 1) != 0)) {
        if (puVar5[-10] == 0) {
          FUN_0044e0c0(0);
        }
        else {
          FUN_0044e0c0(1);
          FUN_0044e0e0((int)(short)puVar5[-9],1000,(int)(short)puVar5[-8],(int)(short)puVar5[-7],
                       (int)(short)puVar5[-6],0xff);
        }
        if (puVar5[-5] == 0) {
          if (DAT_0050cd08 != 0) {
            uVar8 = 3;
            uVar7 = 0xfffffffc;
            goto LAB_00483ead;
          }
        }
        else if (DAT_0050cd08 != 0) {
          uVar8 = 2;
          uVar7 = 3;
LAB_00483ead:
          FUN_00431a50(DAT_0050cd08,2,uVar7,0x10,uVar8);
        }
      }
      if (DAT_0050c084 == 0) {
        FUN_0042d490(pbVar6,!bVar2);
        FUN_00483a90(iVar4);
      }
      if (DAT_0050ccec < 0x1f) {
        FUN_0042f7d0(&DAT_00e22820 + DAT_0050ccec * 0xc,
                     PTR_DAT_004b91c4 + *(int *)(pbVar6 + 4) * 0x7c + 0x44);
        DAT_0050ccec = DAT_0050ccec + 1;
      }
      bVar2 = false;
    }
    puVar5 = puVar5 + 6;
    iVar4 = iVar4 + 1;
    pbVar6 = pbVar6 + 0x16c;
    if (0xe22737 < (int)puVar5) {
      FUN_00483bb0(0);
      if ((((DAT_0050c048 & 0x200) == 0) || (DAT_0050c040 < 1)) ||
         ((DAT_00e98e90 & 0x1100) != 0x1100)) {
        FUN_004283b0(2);
        FUN_00483be0(DAT_0050c040,(uint)((int)DAT_00e229b0 - (int)local_4) >> 3);
        FUN_00450280();
        FUN_004283b0(3);
        FUN_004502b0();
      }
      FUN_00449270();
      FUN_00484130();
      DAT_0050c084 = 0;
      return;
    }
  } while( true );
}

