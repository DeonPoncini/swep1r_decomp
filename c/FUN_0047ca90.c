#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ca90(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_50 = 0x48697474;
  local_4c = 0x54323031;
  iVar12 = param_1;
  if (*(int *)(param_1 + 8) == 0xc9) {
    fVar13 = (float10)FUN_00480650(0x41c80000,(float)_DAT_00e22a40);
    local_48 = 0x42c80000;
    *(float *)(param_2 + 0x1a4) = (float)(fVar13 * (float10)*(float *)(param_2 + 0x1a4));
    FUN_00450c00(param_2,&local_50);
    iVar12 = 0;
  }
  if (*(int *)(param_1 + 8) == 0xca) {
    fVar13 = (float10)FUN_00480650(0x40200000,(float)_DAT_00e22a40);
    local_48 = 0x44160000;
    *(float *)(param_2 + 0x1a4) = (float)(fVar13 * (float10)*(float *)(param_2 + 0x1a4));
    FUN_00450c00(param_2,&local_50);
    iVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 100) {
    iVar12 = 0;
  }
  if (*(int *)(param_1 + 8) == 0x66) {
    fVar13 = (float10)FUN_00480650(0x40200000,(float)_DAT_00e22a40);
    local_48 = 0x43960000;
    *(float *)(param_2 + 0x1a4) = (float)(fVar13 * (float10)*(float *)(param_2 + 0x1a4));
    FUN_00450c00(param_2,&local_50);
    iVar12 = 0;
  }
  if (*(int *)(param_1 + 8) == 0xd4) {
    iVar12 = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00431a50(*(int *)(param_1 + 0x3c),2,0xfffffffc,0x10,3);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 3;
  FUN_00431a50(*(undefined4 *)(param_1 + 0x3c),0,0xfffffffd,0x10,3);
  if (*(int *)(param_1 + 8) == 0x66) {
    if ((*(byte *)(param_2 + 0x60) & 0x80) != 0) {
      FUN_004310b0(local_40,0x41000000,0x41000000,0x41000000);
      puVar7 = *(undefined4 **)(param_1 + 0x4c);
      local_10 = *puVar7;
      local_c = puVar7[1];
      local_8 = puVar7[2];
      FUN_00431640((&DAT_00e26fe0)[iVar12],local_40);
      goto LAB_0047cc59;
    }
    puVar7 = *(undefined4 **)(param_1 + 0x4c);
    uVar11 = puVar7[2];
    uVar16 = puVar7[1];
    uVar15 = *puVar7;
    uVar14 = (&DAT_00e26fe0)[iVar12];
  }
  else {
    puVar7 = *(undefined4 **)(param_1 + 0x4c);
    uVar11 = puVar7[2];
    uVar16 = puVar7[1];
    uVar15 = *puVar7;
    uVar14 = (&DAT_00e26fe0)[iVar12];
  }
  FUN_00431620(uVar14,uVar15,uVar16,uVar11);
LAB_0047cc59:
  if ((&DAT_00e26fe0)[iVar12] != 0) {
    FUN_00431a50((&DAT_00e26fe0)[iVar12],2,3,0x10,2);
  }
  FUN_0047bea0(iVar12);
  iVar10 = FUN_004816b0();
  FUN_00426d10(0x39,6,(float)iVar10 * _DAT_004ade88 * (float)_DAT_004ade90 - (float)_DAT_004ade98,
               0x3f800000,(float *)(param_2 + 0x50),0,0,0x41200000,0x43fa0000);
  fVar1 = *(float *)(param_2 + 0x50);
  fVar2 = *(float *)(param_2 + 0x54);
  fVar3 = *(float *)(param_2 + 0x58);
  fVar4 = *(float *)(param_2 + 0x16c);
  fVar5 = *(float *)(param_2 + 0x170);
  fVar6 = *(float *)(param_2 + 0x174);
  puVar7 = *(undefined4 **)(param_1 + 0x4c);
  fVar8 = (float)_DAT_004adea0;
  *(undefined4 *)(param_1 + 0x24) = *puVar7;
  *(undefined4 *)(param_1 + 0x28) = puVar7[1];
  *(undefined4 *)(param_1 + 0x2c) = puVar7[2];
  fVar9 = (float)_DAT_004adea0;
  *(float *)(param_1 + 0x18) = (fVar1 - fVar4) * (fVar8 / (float)_DAT_00e22a40);
  fVar1 = (float)_DAT_004adea0;
  *(float *)(param_1 + 0x1c) = (fVar2 - fVar5) * (fVar9 / (float)_DAT_00e22a40);
  *(float *)(param_1 + 0x20) = (fVar3 - fVar6) * (fVar1 / (float)_DAT_00e22a40);
  if ((*(int *)(param_1 + 8) == 0x66) && ((*(byte *)(param_2 + 0x60) & 0x80) != 0)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    *(int *)(param_1 + 0x50) = param_2 + 0x20;
  }
  uVar11 = FUN_0047bce0((&DAT_00e26fe0)[iVar12]);
  *(undefined4 *)(param_1 + 0x54) = uVar11;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

