#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456200(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int **ppiVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined local_64 [8];
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [48];
  float local_10 [2];
  float local_8;
  
  fVar7 = (float10)FUN_0042f560(_DAT_00e298f0 - _DAT_00e2af90,_DAT_00e2af94 - _DAT_00e298f4);
  local_70 = _DAT_004acff8;
  local_6c = _DAT_004acffc;
  iVar6 = 0;
  local_68 = _DAT_004ad000;
  if ((char)DAT_00e35aa0 != '\0') {
    ppiVar5 = (int **)&DAT_00e29a74;
    do {
      iVar3 = FUN_004816b0();
      fVar1 = (float)iVar3 * _DAT_004acfa8 * (float)_DAT_004ad008 - (float)_DAT_004ad010;
      FUN_0044afb0(ppiVar5[-0x29],local_64);
      if (_DAT_004ad018 < local_5c) {
        if (*ppiVar5 == (int *)0x0) {
          return;
        }
        iVar3 = **ppiVar5;
        if (iVar3 != 0) {
          FUN_00431a50(iVar3,2,0xfffffffc,0x10,3);
          FUN_0042b640(iVar3,0,0,200,200,0xff,0xff);
          iVar4 = FUN_00450b30(0x456c6d6f,iVar6 + 0x34);
          fVar8 = (float10)FUN_0044b470(*(undefined4 *)(iVar4 + 0x34));
          if (((float10)(int)DAT_004c25f8 * (float10)_DAT_004ad01c <= fVar8) &&
             (fVar8 = (float10)FUN_0044b470(*(undefined4 *)(iVar4 + 0x34)),
             fVar8 <= (float10)(int)DAT_004c25fa * (float10)_DAT_004ad01c)) {
            local_70 = 0x42a00000;
            local_6c = 0x42960000;
            iVar4 = FUN_004816b0();
            local_68 = ((float)iVar4 * _DAT_004acfa8 * (float)_DAT_004ad020 - (float)_DAT_004ad028)
                       - _DAT_004ad030;
            FUN_00431020(local_40,(float)fVar7,0,0xc2b40000);
            FUN_0042f7d0(local_10,local_64);
            fVar2 = _DAT_004ad038;
            if (local_10[0] < _DAT_004acf50) {
              fVar2 = _DAT_004ad034;
            }
            local_10[0] = local_10[0] - fVar2;
            local_8 = local_8 - _DAT_004ad03c;
            FUN_00431450(local_40,fVar1,fVar1,fVar1,local_40);
            FUN_00431640(iVar3,local_40);
            FUN_00431a50(iVar3,2,3,0x10,2);
          }
        }
        iVar3 = *ppiVar5[-4];
        if (iVar3 != 0) {
          FUN_00431a50(iVar3,2,0xfffffffc,0x10,3);
          FUN_00431020(local_40,0,0,0);
          FUN_0042f7d0(local_10,local_64);
          FUN_00431450(local_40,0x3e99999a,0x3e99999a,0x3e99999a,local_40);
          local_8 = local_8 - _DAT_004ad040;
          FUN_00431640(iVar3,local_40);
          FUN_00431a50(iVar3,2,3,0x10,2);
          iVar3 = *ppiVar5[-0x52];
          if (iVar3 != 0) {
            FUN_00431a50(iVar3,2,0xfffffffc,0x10,3);
            FUN_00431020(local_40,0,0,0);
            FUN_0042f7d0(local_10,local_64);
            FUN_00431450(local_40,0x3e99999a,0x3e99999a,0x3e99999a,local_40);
            local_8 = -157.0;
            FUN_00431640(iVar3,local_40);
            FUN_00431a50(iVar3,2,3,0x10,2);
          }
        }
      }
      iVar6 = iVar6 + 1;
      ppiVar5 = ppiVar5 + 1;
    } while (iVar6 < (int)(DAT_00e35aa0 & 0xff));
  }
  local_4c = 0x437f0000;
  local_48 = 0x437f0000;
  local_44 = 0x43480000;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0xc71c4000;
  FUN_00483840(0xffffffff,&local_70,&local_4c,&local_58);
  return;
}

