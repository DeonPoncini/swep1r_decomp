#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435700(int param_1)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  undefined local_14c [48];
  undefined local_11c [16];
  undefined local_10c [12];
  undefined local_100 [256];
  
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    FUN_0043e5b0(0x431d0000);
    DAT_0050c4a0 = 0;
    DAT_0050c49c = 0;
    DAT_00e295d4 = 0;
    DAT_004c00b4 = -1;
    DAT_004c00c0 = 1;
    FUN_0045bee0(param_1,0x24,0xffffffff,0);
    FUN_0043da10(param_1);
    iVar3 = 0;
    DAT_00e295d0 = 0;
    iVar7 = DAT_00e295d0;
    if (0 < DAT_00e295cc) {
      piVar5 = &DAT_00e99240;
      do {
        iVar7 = iVar3;
        if (*piVar5 == (int)(char)(&DAT_00e35a84)[*(char *)(param_1 + 0x6f) * 0x50]) break;
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 2;
        iVar7 = DAT_00e295d0;
      } while (iVar3 < DAT_00e295cc);
    }
    DAT_00e295d0 = iVar7;
    FUN_0045cf60((&DAT_00e99240)[DAT_00e295d0 * 2],0xffffffff,0,0xff);
    FUN_004584a0(param_1,0);
    DAT_00e99384 = 360.0;
  }
  bVar2 = false;
  if (DAT_0050c930 == 0) {
    DAT_0050c118 = (&DAT_00e99240)[DAT_00e295d0 * 2];
    if (DAT_00e295a0 <= _DAT_004ac778) {
      if (DAT_0050c118 != -1) {
        fVar10 = _DAT_004ac7b8 - (float)DAT_0050c118 * _DAT_004ac7b4;
        FUN_0044b360(DAT_00e2afb8,fVar10,fVar10,fVar10,0,0,0);
      }
    }
    else {
      fVar10 = _DAT_004ac7b8 - (float)(&DAT_00e99240)[DAT_00e295d4 * 2] * _DAT_004ac7b4;
      FUN_0044b360(DAT_00e2afb8,fVar10,fVar10,fVar10,0,0,0);
      FUN_00457350(DAT_00e295d4);
    }
    if ((DAT_0050c49c == 5) &&
       (fVar8 = (float10)FUN_00469b90(0xc0533333), fVar8 == (float10)_DAT_004ac778)) {
      FUN_00468fe0(0x1c,0);
      FUN_0044e560();
      if (DAT_004d5e00 == 0) {
        FUN_00454d40(param_1,DAT_004bfedc);
        return;
      }
      FUN_004118b0(0);
      return;
    }
    if (DAT_0050c49c == 0) {
      DAT_00e295ac = DAT_00e295ac - _DAT_00e22a50 * _DAT_004ac7bc;
      if (DAT_00e295ac < _DAT_004ac778) {
        DAT_00e295ac = 0.0;
      }
      if (DAT_004c00c0 != 0) {
        FUN_004550d0(param_1,0x42d20000,0x43070000);
      }
    }
    uVar4 = FUN_00421360(s__SCREENTEXT_525__c_sSelect_Vehic_004c08e4);
    FUN_00450560(0xa0,0x19,uVar4);
    uVar4 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)[DAT_0050c118 * 0xd]);
    uVar4 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)[DAT_0050c118 * 0xd],uVar4);
    uVar4 = FUN_00421360(s__c_s_s__s_004c08d8,uVar4);
    FUN_0049eb80(local_100,uVar4);
    FUN_00450530(0xa0,0x2a,0,0xffffffff,0,0xffffffff,local_100);
    uVar4 = FUN_0042de10(local_100,0);
    FUN_0042de10(local_100,0,0x2b,uVar4);
    uVar4 = __ftol();
    FUN_00440150(uVar4);
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 4;
    if ((DAT_00e295dc == 0) && (DAT_004c00b4 != (&DAT_00e99240)[DAT_00e295d4 * 2])) {
      bVar2 = true;
    }
    if ((DAT_0050c118 != -1) && ((DAT_00e2993c == 0 || (bVar2)))) {
      FUN_004258e0();
      FUN_0045ce90(3);
      DAT_00e99384 = 0.0;
      FUN_00454bc0(*(undefined4 *)(&DAT_004c2704 + DAT_0050c118 * 0x34),
                   *(undefined4 *)(&DAT_004c2708 + DAT_0050c118 * 0x34),0xf,0);
      if (DAT_00e2993c != 0) {
        FUN_004337d0();
        *(int *)(DAT_00e2993c + 0xf0) = DAT_0050c118;
        FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + DAT_0050c118 * 0x34),0x1c,2,
                     *(undefined4 *)(&DAT_004c2720 + DAT_0050c118 * 0x34));
      }
      DAT_004c00b4 = DAT_0050c118;
      FUN_00454c90();
      FUN_0043e620(param_1);
      FUN_0045cf60(DAT_0050c118,0xffffffff,0xffffffff,0xff);
    }
    if (DAT_0050c4a0 == 0) {
      DAT_0050c4a0 = 1;
    }
    DAT_00e99384 = DAT_00e99384 - _DAT_00e22a50 * _DAT_004ac7d0;
    if (_DAT_004ac7d4 < DAT_00e99384) {
      DAT_00e99384 = DAT_00e99384 - _DAT_004ac7d4;
    }
    if ((DAT_0050c49c == 1) &&
       (fVar8 = (float10)FUN_00469b90(0xc0533333), fVar8 == (float10)_DAT_004ac778)) {
      DAT_0050c49c = 2;
    }
    DAT_004c00b8 = DAT_00e295a0 * _DAT_004ac7d8;
    if (DAT_004c00b8 < _DAT_004ac7dc) {
      DAT_004c00b8 = 0.001;
    }
    if ((DAT_00e2993c != 0) && (_DAT_004ac778 < DAT_00e295a0)) {
      FUN_0043e210();
      if (_DAT_004ac7e0 <= DAT_00e99384) {
        if (_DAT_004ac7e8 <= DAT_00e99384) {
          if ((DAT_00e99384 < _DAT_004ac7e8) || (_DAT_004ac7f0 <= DAT_00e99384)) {
            fVar8 = (float10)FUN_0045a420(DAT_00e99384 - _DAT_004ac7f0,0x43b40000);
            fVar10 = (float)-fVar8;
            uVar4 = 0;
            fVar9 = 100.08;
          }
          else {
            fVar10 = 0.0;
            uVar4 = 0;
            fVar8 = (float10)FUN_0045a420(DAT_00e99384 - _DAT_004ac7e8,0x44070000,0,0);
            fVar9 = (float)((float10)_DAT_004ac7f4 - fVar8);
          }
        }
        else {
          fVar8 = (float10)FUN_0045a420(DAT_00e99384 - _DAT_004ac7e0,0x43b40000);
          fVar10 = (float)((float10)_DAT_004ac7ec - fVar8);
          uVar4 = 0x43340000;
          fVar9 = 100.08;
        }
      }
      else {
        fVar10 = 0.0;
        uVar4 = 0;
        fVar8 = (float10)FUN_0045a420(DAT_00e99384,0x44070000,0,0);
        fVar9 = (float)((float10)_DAT_004ac7e4 - fVar8);
      }
      FUN_00431020(local_14c,fVar9,uVar4,fVar10);
      FUN_0042f7d0(local_11c,&DAT_004c449c);
      DAT_004c00b8 = DAT_004c00b8 * _DAT_004ac788;
      FUN_0042fac0(local_11c,0x3f000000,&DAT_004c449c,0x3f000000,&DAT_004c4490);
      FUN_004337e0(DAT_00e2993c,local_14c,1,DAT_004c00b8,DAT_004c00b8,DAT_004c00b8,0xc490a000,0,
                   0x3f800000,0x3f800000);
      if (*(int *)(DAT_00e2993c + 0xec) != 0) {
        FUN_00431a50(*(int *)(DAT_00e2993c + 0xec),2,3,0x10,2);
      }
    }
    if (DAT_0050c49c == 0) {
      iVar7 = (int)*(char *)(param_1 + 0x6f);
      if (iVar7 < iVar7 + 1) {
        puVar6 = &DAT_0050c918 + iVar7;
        do {
          iVar3 = DAT_00e295d0;
          if (DAT_0050c930 != 0) break;
          FUN_00469c30(iVar7,0x3f800000,1);
          if (iVar3 != DAT_00e295d0) {
            FUN_0045cf60((&DAT_00e99240)[DAT_00e295d0 * 2],0xffffffff,0,0xff);
          }
          if ((_DAT_004ac764 <= DAT_00e295a0) && (DAT_004d6b44 != 0)) {
            FUN_004118b0(0);
            FUN_00440550(0x4d);
            if (*(int *)(param_1 + 0xc) == 3) {
              DAT_004bfedc = 3;
              DAT_0050c49c = 1;
              return;
            }
            FUN_00440550(0x4d);
            if (*(char *)(param_1 + 0x6f) < '\x01') {
              DAT_0050c4a4 = 0;
              DAT_0050c49c = 1;
              DAT_004c00b4 = 0xffffffff;
              DAT_004bfedc = 1;
              DAT_0050c944 = 0xffffffff;
              FUN_0044e560();
              return;
            }
            DAT_0050c49c = 1;
            *(char *)(param_1 + 0x6f) = *(char *)(param_1 + 0x6f) + -1;
            DAT_004bfedc = 9;
            return;
          }
          if ((_DAT_004ac764 <= DAT_00e295a0) && (DAT_004d6b48 != 0)) {
            FUN_00440550(0x54);
            DAT_0050c49c = 1;
          }
          if ((*(byte *)puVar6 & 8) != 0) {
            FUN_00440550(0x54);
            DAT_004c00c0 = (uint)(DAT_004c00c0 == 0);
          }
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar7 < *(char *)(param_1 + 0x6f) + 1);
      }
      if (DAT_0050c49c == 1) {
        FUN_0043e5b0(*(undefined4 *)(&DAT_004c2720 + (&DAT_00e99240)[DAT_00e295d0 * 2] * 0x34));
        iVar7 = (int)*(char *)(param_1 + 0x6f);
        if (iVar7 < iVar7 + 1) {
          puVar6 = &DAT_00e35aa0 + iVar7 * 0x14;
          do {
            *(undefined *)(iVar7 + 0x73 + param_1) =
                 *(undefined *)(&DAT_00e99240 + DAT_00e295d0 * 2);
            iVar3 = DAT_0050c4a4;
            uVar1 = *(undefined *)(&DAT_00e99240 + DAT_00e295d0 * 2);
            *(undefined *)(puVar6 + -7) = uVar1;
            if (iVar3 < 4) {
              if (*(char *)(&DAT_00e364b4 + iVar3 * 0x14) == '\0') {
                *(undefined *)puVar6 = 1;
                puVar6[-2] = 400;
              }
              else {
                (&DAT_00e364d8)[iVar3 * 0x50] = uVar1;
              }
            }
            iVar3 = FUN_0041d6b0();
            if (iVar3 != 0) {
              FUN_0041dc30((&DAT_00e99240)[DAT_00e295d0 * 2]);
            }
            iVar7 = iVar7 + 1;
            puVar6 = puVar6 + 0x14;
          } while (iVar7 < *(char *)(param_1 + 0x6f) + 1);
        }
        FUN_0045cd50(param_1);
        if (*(int *)(param_1 + 0xc) != 3) {
          if ((*(char *)(&DAT_00e364b4 + DAT_0050c4a4 * 0x14) == '\0') && (DAT_0050c4a4 < 4)) {
            DAT_004bfedc = 2;
            return;
          }
          if (*(char *)(param_1 + 0x70) + -1 <= (int)*(char *)(param_1 + 0x6f)) {
            DAT_004bfedc = 0xc;
            FUN_0042f7d0(local_10c,&DAT_004c457c + *(char *)(param_1 + 0x50) * 0xc);
            FUN_004816b0();
            return;
          }
          *(char *)(param_1 + 0x6f) = *(char *)(param_1 + 0x6f) + '\x01';
          DAT_004bfedc = 9;
          return;
        }
        DAT_004bfedc = 3;
        return;
      }
      if (DAT_0050c49c == 2) {
        DAT_0050c49c = 3;
      }
    }
    else if (DAT_00e295a0 == _DAT_004ac778) {
      DAT_0050c49c = DAT_0050c49c + 1;
      return;
    }
  }
  return;
}

