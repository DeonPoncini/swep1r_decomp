#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ca30(int param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  undefined local_40 [48];
  undefined local_10 [16];
  
  iVar1 = param_1;
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    _DAT_0050c110 = 5.0;
    DAT_0050c20c = 0;
    DAT_0050c120 = 0;
    FUN_0044afb0(DAT_00e29970,&DAT_0050c2f8);
    FUN_0042f7d0(&DAT_0050c440,&DAT_0050c2f8);
    _DAT_0050c300 =
         *(float *)(&DAT_004c2720 + *(char *)(param_1 + 0x73) * 0x34) * (float)_DAT_004ac950 -
         (float)_DAT_004ac958;
    _DAT_0050c448 = _DAT_004c2788 * (float)_DAT_004ac950 - (float)_DAT_004ac958;
    _DAT_0050c440 = _DAT_0050c440 - _DAT_004ac84c;
    _DAT_0050c444 = _DAT_0050c444 - _DAT_004ac8d0;
    FUN_0044afb0(DAT_00e29974,&DAT_0050c128);
    FUN_0042f7d0(&DAT_0050c318,&DAT_0050c128);
    _DAT_0050c130 = _DAT_004c2788 * (float)_DAT_004ac950 - (float)_DAT_004ac958;
    _DAT_0050c320 =
         *(float *)(&DAT_004c2720 + *(char *)(param_1 + 0x73) * 0x34) * (float)_DAT_004ac950 -
         (float)_DAT_004ac958;
    _DAT_0050c318 = _DAT_0050c318 - _DAT_004ac84c;
    _DAT_0050c31c = _DAT_0050c31c - _DAT_004ac81c;
    FUN_0042f7b0(&DAT_0050c440,0x43940000,0xc34e0000,0xc2880000);
    FUN_0042f7b0(&DAT_0050c2f8,0xc39d8000,0x43b68000,0xc2a40000);
    FUN_0042f7b0(&DAT_0050c318,0x439d8000,0xc40d8000,0xc28c0000);
    FUN_0042f7b0(&DAT_0050c128,0,0xc42a0000,0xc2880000);
    FUN_0042f7d0(&DAT_00e298f0,&DAT_0050c440);
    FUN_0042f7d0(&DAT_00e2af90,&DAT_0050c128);
  }
  FUN_00426c80(0x1b,7,0x3d4ccccd,0x3f4ccccd,1);
  if (_DAT_004ac778 <= _DAT_0050c110) {
    _DAT_0050c110 = _DAT_0050c110 - _DAT_00e22a50 * _DAT_004ac788;
    if (_DAT_0050c110 <= _DAT_004ac778) {
      DAT_0050c944 = 0xffffffff;
    }
  }
  param_1 = 0;
  piVar3 = &DAT_00e2993c;
  pfVar2 = (float *)&DAT_00e99364;
  do {
    if (*piVar3 != 0) {
      pfVar2[-1] = 0.0;
      *pfVar2 = (float)param_1 * (float)_DAT_004ac860;
      pfVar2[1] = 50.0;
      if (*(char *)(iVar1 + 0x73) == '\a') {
        DAT_00e99364 = 0x43480000;
      }
      if (*(char *)(iVar1 + 0x73) == '\x11') {
        DAT_00e99364 = 0x43c80000;
      }
      FUN_00431020(local_40,0,0,0);
      FUN_0042f7b0(local_10,pfVar2[-1],*pfVar2,pfVar2[1]);
      FUN_004337e0(*piVar3,local_40,0,0x428c0000,0x428c0000,0x428c0000,0xc31d0000,1,0x3f800000,
                   0x3f800000);
    }
    pfVar2 = pfVar2 + 10;
    param_1 = param_1 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)pfVar2 < 0xe993b4);
  if ((DAT_004d6b48 != 0) || (DAT_004d6b44 != 0)) {
    _DAT_0050c110 = 0.0;
    DAT_0050c944 = 0xffffffff;
  }
  if ((_DAT_0050c110 < _DAT_004ac968) && (_DAT_004ac96c < _DAT_0050c110)) {
    if (DAT_0050c20c == 0) {
      DAT_0050c20c = 1;
      FUN_00468fe0(0x1d,0x18);
      FUN_00426c80((char)(&DAT_004bfef2)[*(char *)(iVar1 + 0x5d) * 0xc] + 0xb7,7,0x3e800000,
                   0x3f800000,0);
    }
    FUN_00450530(0xa0,200,0x78,0xffffffaa,0xffffffaa,0xffffffff,
                 (&PTR_s__f4_o_cI_could_run_faster_than_y_004c0238)
                 [(char)(&DAT_004bfef2)[*(char *)(iVar1 + 0x5d) * 0xc]]);
  }
  if ((_DAT_0050c110 < _DAT_004ac78c) && (_DAT_004ac970 < _DAT_0050c110)) {
    if (DAT_0050c120 == 0) {
      DAT_0050c120 = 1;
      FUN_00468fe0(0x1c,0x18);
      FUN_0042f7d0(&DAT_00e298f0,&DAT_0050c318);
      FUN_0042f7d0(&DAT_00e2af90,&DAT_0050c2f8);
      FUN_00426c80(DAT_00e35a84 + 0xb7,7,0x3e800000,0x3f800000,0);
    }
    FUN_00450530(0xa0,200,0xffffffaa,0xffffffaa,0,0xffffffff,
                 (&PTR_s__f4_o_cI_could_run_faster_than_y_004c0238)[DAT_00e35a84]);
  }
  return;
}

