#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043dba0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  undefined *puVar10;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  undefined local_c [12];
  
  local_18 = 0.2;
  if ((_DAT_0050c93c < _DAT_004ac778) &&
     (_DAT_0050c93c = _DAT_0050c93c + _DAT_00e22a50, _DAT_004ac778 < _DAT_0050c93c)) {
    _DAT_0050c93c = 0.0;
  }
  if ((_DAT_004ac778 < _DAT_0050c93c) &&
     (_DAT_0050c93c = _DAT_0050c93c - _DAT_00e22a50, _DAT_0050c93c < _DAT_004ac778)) {
    _DAT_0050c93c = 0.0;
  }
  if ((_DAT_004ac778 < _DAT_0050c938) &&
     (_DAT_0050c938 = _DAT_0050c938 - _DAT_00e22a50, _DAT_0050c938 < _DAT_004ac778)) {
    _DAT_0050c938 = 0.0;
  }
  iVar4 = 0;
  iVar2 = DAT_00e295d0;
  iVar7 = DAT_00e295cc;
  if (0 < DAT_00e295cc) {
    pfVar5 = (float *)&DAT_00e2a6c4;
    do {
      if (*(int *)(param_1 + 0x38) == 0) {
        if (iVar4 != iVar2) {
          fVar9 = (float10)FUN_0042f560(*pfVar5 - _DAT_004ac7ac,_DAT_004ac850 - pfVar5[1]);
          iVar2 = DAT_00e295d0;
          iVar7 = DAT_00e295cc;
          pfVar5[9] = (float)(fVar9 - (float10)_DAT_004ac800);
        }
        if (pfVar5[2] == 106.0) {
          FUN_0042f380(((float)_DAT_004ac888 - _DAT_0050c938) * (float)_DAT_004ac750,&local_14,
                       &local_1c);
          iVar2 = DAT_00e295d0;
          iVar7 = DAT_00e295cc;
          pfVar5[10] = local_1c * _DAT_0050c93c * (float)_DAT_004ac920;
        }
      }
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 0xe;
    } while (iVar4 < iVar7);
  }
  if (DAT_0050c474 == 0) goto LAB_0043e101;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    if (0 < iVar7) {
      puVar6 = &DAT_00e2a6e4;
      do {
        local_10 = ((iVar2 - iVar4) + 9) * 10;
        FUN_0042f380((float)local_10,&local_14,&local_1c);
        pfVar5 = (float *)(puVar6 + -2);
        bVar8 = iVar4 != DAT_00e295d0;
        *pfVar5 = _DAT_004ac7ac - local_1c * _DAT_004ac9bc;
        puVar6[-1] = _DAT_004ac850 - local_14 * _DAT_004ac9bc;
        *puVar6 = 0x42d40000;
        if (bVar8) {
          fVar9 = (float10)FUN_0042f560((float)puVar6[-8] - _DAT_004ac7ac,
                                        _DAT_004ac850 - (float)puVar6[-7]);
          puVar6[1] = (float)(fVar9 - (float10)_DAT_004ac800);
        }
        FUN_0042f380(((float)_DAT_004ac888 - _DAT_0050c938) * (float)_DAT_004ac750,&local_14,
                     &local_1c);
        bVar8 = iVar4 == DAT_00e295d0;
        puVar6[2] = local_1c * _DAT_0050c93c * (float)_DAT_004ac920;
        if (bVar8) {
          if (DAT_0050c470 == 0) {
            FUN_0042f7d0(pfVar5,&DAT_004c4558);
            fVar1 = _DAT_004ac850 - _DAT_004c455c;
            puVar6[2] = 0;
            fVar9 = (float10)FUN_0042f560(_DAT_004c4558 - _DAT_004ac7ac,fVar1);
            bVar8 = DAT_0050c954 == 0;
            puVar6[1] = (float)(fVar9 - (float10)_DAT_004ac800);
            if (bVar8) goto LAB_0043df33;
          }
          else {
            FUN_0043e210();
            FUN_0042f7d0(local_c,&DAT_00e298f0);
            FUN_0042fa80(local_c,local_c,DAT_004c4564,&DAT_00e298c0);
            FUN_0042fa80(local_c,local_c,DAT_004c4568,&DAT_00e298d0);
            FUN_0042fa80(local_c,local_c,DAT_004c456c,&DAT_00e298e0);
            FUN_0042f7d0(pfVar5,local_c);
            pfVar5 = (float *)(puVar6 + -8);
          }
          FUN_0042fac0(pfVar5,0x3e4ccccd,pfVar5,0x3f4ccccd,&DAT_00e298f0);
        }
LAB_0043df33:
        FUN_0042f7d0(puVar6 + -5,puVar6 + -8);
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 0xe;
        iVar2 = DAT_00e295d0;
        iVar7 = DAT_00e295cc;
      } while (iVar4 < DAT_00e295cc);
    }
  }
  else if (*(int *)(param_1 + 0x38) == 1) {
    DAT_00e295d0 = (int)(char)(&DAT_00e29860)[(*(int *)(param_1 + 0x34) + -4) * 3];
    if ((DAT_00e295d0 < 0) || (*(int *)(param_1 + 0x34) + -4 < 0)) {
      DAT_0050c474 = 0;
      return;
    }
    if (DAT_0050c470 == 0) {
      FUN_0042f7d0(&DAT_00e2a6dc + DAT_00e295d0 * 0xe,
                   &DAT_004c401c + *(int *)(param_1 + 0x34) * 0x20);
      if (DAT_0050c954 != 0) {
        puVar6 = &DAT_00e2a6dc + DAT_00e295d0 * 0xe;
        goto LAB_0043e09d;
      }
    }
    else {
      FUN_0043e210();
      FUN_0042f7d0(local_c,&DAT_00e298f0);
      FUN_0042fa80(local_c,local_c,DAT_004c4564,&DAT_00e298c0);
      FUN_0042fa80(local_c,local_c,DAT_004c4568,&DAT_00e298d0);
      FUN_0042fa80(local_c,local_c,DAT_004c456c,&DAT_00e298e0);
      FUN_0042f7d0(&DAT_00e2a6dc + DAT_00e295d0 * 0xe,local_c);
      puVar6 = &DAT_00e2a6c4 + DAT_00e295d0 * 0xe;
LAB_0043e09d:
      FUN_0042fac0(puVar6,0x3e4ccccd,puVar6,0x3f4ccccd,&DAT_00e298f0);
    }
    FUN_0042f7d0(&DAT_00e2a6d0 + DAT_00e295d0 * 0xe,&DAT_00e2a6c4 + DAT_00e295d0 * 0xe);
    iVar2 = DAT_00e295d0;
    iVar7 = DAT_00e295cc;
  }
  DAT_0050c474 = 0;
  DAT_0050c46c = 1;
  _DAT_0050c56c = 0.0;
LAB_0043e101:
  if (DAT_0050c940 != 0) {
    local_18 = 0.5;
  }
  if ((DAT_0050c46c != 0) && (_DAT_0050c56c < local_18)) {
    _DAT_0050c56c = _DAT_0050c56c + _DAT_00e22a50;
    if (local_18 <= _DAT_0050c56c) {
      _DAT_0050c56c = local_18;
      DAT_0050c46c = 0;
    }
    iVar4 = DAT_0050c46c;
    iVar3 = 0;
    if (0 < iVar7) {
      pfVar5 = (float *)&DAT_00e2a6d0;
      do {
        if ((*(int *)(param_1 + 0x38) != 1) || (iVar2 == iVar3)) {
          fVar1 = _DAT_0050c56c / local_18;
          pfVar5[-3] = (pfVar5[3] - *pfVar5) * fVar1 + *pfVar5;
          pfVar5[-2] = (pfVar5[4] - pfVar5[1]) * fVar1 + pfVar5[1];
          pfVar5[-1] = (pfVar5[5] - pfVar5[2]) * fVar1 + pfVar5[2];
        }
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 0xe;
      } while (iVar3 < iVar7);
    }
    if ((iVar4 == 0) && (DAT_0050c954 != 0)) {
      DAT_0050c954 = 0;
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar10 = &DAT_004c4558;
      }
      else {
        puVar10 = &DAT_00e2af90;
      }
      FUN_0042f7d0(&DAT_00e2a6c4 + iVar2 * 0xe,puVar10);
      (&DAT_00e2a6ec)[DAT_00e295d0 * 0xe] = 0;
    }
  }
  return;
}

