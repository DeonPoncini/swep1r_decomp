#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d7a0(float param_1,float param_2)

{
  uint *puVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  float10 fVar16;
  float local_18;
  
  iVar9 = (int)param_1;
  fVar6 = (_DAT_004ad958 -
          (*(float *)(&DAT_004c2be0 + **(int **)(*(int *)((int)param_1 + 0x1e70) + 0x18) * 0x3c) -
          _DAT_004ad950) * _DAT_004ad954) * _DAT_004ad95c - _DAT_004ad960;
  fVar16 = (float10)FUN_0047f810((int)param_1 + 0xac);
  FUN_00427b20(DAT_0050ca8c,DAT_0050ca90,(float)fVar16,*(undefined4 *)((int)param_1 + 0x1a0));
  bVar15 = (*(uint *)((int)param_1 + 0x60) & 0x5800) == 0;
  iVar14 = *(int *)((int)param_1 + 0x1e70);
  iVar11 = FUN_0045d350();
  if (iVar11 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = FUN_0045d3d0(iVar14);
    if (iVar13 < 0) {
      return;
    }
  }
  fVar2 = *(float *)((int)param_1 + 0x1a0) / *(float *)(iVar14 + 0x2c);
  if (((byte)*(undefined4 *)((int)param_1 + 0x60) & 0xf) != 2) {
    (&DAT_0050cae8)[iVar13] = 0;
    (&DAT_004c7a58)[iVar13] = 0x3f800000;
    DAT_0050cb00 = 0;
  }
  iVar14 = (&DAT_0050cae8)[iVar13];
  fVar8 = (float)(&DAT_004c7a70)[iVar14] - _DAT_004ad964;
  if ((float)(&DAT_004c7a70)[iVar14] - _DAT_004ad964 < _DAT_004ad968) {
    fVar8 = _DAT_004ad968;
  }
  sVar3 = *(short *)(&DAT_0050cae8 + iVar13);
  fVar7 = (float)(&DAT_004c7a74)[iVar14] - _DAT_004ad96c;
  if (fVar2 < fVar8) {
    (&DAT_0050cae8)[iVar13] = iVar14 + -1;
  }
  if (fVar7 < fVar2) {
    (&DAT_0050cae8)[iVar13] = (&DAT_0050cae8)[iVar13] + 1;
  }
  if ((int)(&DAT_0050cae8)[iVar13] < 0) {
    (&DAT_0050cae8)[iVar13] = 0;
  }
  if (3 < (int)(&DAT_0050cae8)[iVar13]) {
    (&DAT_0050cae8)[iVar13] = 3;
  }
  sVar4 = *(short *)(&DAT_0050cae8 + iVar13);
  if (iVar13 == 0) {
    sVar10 = (short)(&DAT_0050cae8)[iVar13] + 0xaa;
  }
  else {
    sVar10 = (short)(&DAT_0050cae8)[iVar13] + 0xb0;
  }
  iVar14 = (int)sVar10;
  if (-1 < iVar14) {
    fVar2 = (*(float *)(&DAT_004c7a88 + sVar4 * 8) + *(float *)(&DAT_004c7a8c + sVar4 * 8)) *
            _DAT_004ad95c;
    iVar12 = FUN_004816b0();
    if ((float)iVar12 * _DAT_004ad970 < _DAT_004ad974) {
      FUN_004816b0();
    }
    fVar2 = fVar6 * fVar2;
    puVar1 = (uint *)((int)param_1 + 100);
    if ((*puVar1 & 0x4000) == 0) {
      param_1 = fVar2;
      if ((*puVar1 & 0x200) != 0) {
        param_1 = 0.25;
        iVar14 = (-(uint)(iVar13 != 0) & 6) + 0xaf;
      }
    }
    else {
      param_1 = fVar2 * _DAT_004ad978;
    }
    if (bVar15) {
      FUN_00426d10(iVar14,6,param_1,param_2,iVar9 + 0x50,1,0,0x41a00000,0x43fa0000);
    }
  }
  if (((*(uint *)(iVar9 + 100) & 0x2000) != 0) && (DAT_0050cb00 == 0)) {
    DAT_0050cb00 = 1;
    FUN_004816b0();
    if (bVar15) {
      FUN_00426d10(0x72,7,0x3e800000,param_2,iVar9 + 0x50,0,1,0x41200000,0x43fa0000);
    }
  }
  if ((_DAT_004ad95c < *(float *)(iVar9 + 0x18c)) && (iVar11 == 1)) {
    local_18 = param_2 * _DAT_004ad984;
    if (_DAT_004ad958 < local_18) {
      local_18 = 1.0;
    }
    if ((*(uint *)(iVar9 + 100) & 0x200) != 0) {
      local_18 = local_18 * _DAT_004ad988;
    }
    if (bVar15) {
      FUN_00426d10((-(uint)(iVar13 != 0) & 6) + 0xae,6,fVar6 * _DAT_004ad980,local_18,iVar9 + 0x50,1
                   ,0,0x41200000,0x43fa0000);
    }
  }
  if ((*(uint *)(iVar9 + 0x60) & 0x200) == 0) {
    if (((float)(&DAT_004c7a58)[iVar13] == _DAT_004ad968) && (bVar15)) {
      FUN_00426d10(0x7f,6,fVar6 * _DAT_004ad97c,param_2,iVar9 + 0x50,0,1,0x41200000,0x43fa0000);
    }
    fVar7 = _DAT_004ad958;
    fVar2 = (float)(&DAT_004c7a58)[iVar13];
    fVar8 = (float)_DAT_00e22a40;
    (&DAT_004c7a58)[iVar13] = fVar2 + fVar8;
    if (fVar7 < fVar2 + fVar8) {
      (&DAT_004c7a58)[iVar13] = 0x3f800000;
    }
  }
  else {
    if (((&DAT_004c7a58)[iVar13] == 0x3f800000) && (bVar15)) {
      FUN_00426d10(0x80,6,fVar6 * _DAT_004ad97c,param_2,iVar9 + 0x50,0,1,0x41200000,0x43fa0000);
    }
    bVar5 = (float)(&DAT_004c7a58)[iVar13] - (float)_DAT_00e22a40 < _DAT_004ad968;
    (&DAT_004c7a58)[iVar13] = (float)(&DAT_004c7a58)[iVar13] - (float)_DAT_00e22a40;
    if (bVar5) {
      (&DAT_004c7a58)[iVar13] = 0;
    }
  }
  if (sVar3 <= sVar4) {
    if (sVar3 < sVar4) {
      iVar14 = FUN_004816b0();
      fVar7 = (float)iVar14 * _DAT_004ad970;
      fVar8 = (float)_DAT_004ad990;
      fVar2 = (float)_DAT_004ad998;
      iVar14 = FUN_004816b0();
      if (bVar15) {
        FUN_00426d10(0x7a,6,fVar6 * (fVar7 * fVar8 - fVar2),
                     ((float)iVar14 * _DAT_004ad970 * (float)_DAT_004ad9a0 - (float)_DAT_004ad9a8) *
                     param_2,iVar9 + 0x50,0,1,0x41200000,0x43fa0000);
      }
    }
    return;
  }
  FUN_004816b0();
  FUN_004816b0();
  return;
}

