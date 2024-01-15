#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440df0(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  FUN_00440d90();
  pcVar6 = &DAT_00e98ef2;
  iVar7 = 0;
  do {
    uVar4 = (uint)(pcVar6[1] != '\0');
    if (*pcVar6 != '\0') {
      uVar4 = uVar4 | 2;
    }
    if (pcVar6[-0xb] != '\0') {
      uVar4 = uVar4 | 4;
    }
    if (pcVar6[-0xc] != '\0') {
      uVar4 = uVar4 | 8;
    }
    if (pcVar6[-0xd] != '\0') {
      uVar4 = uVar4 | 0x10;
    }
    if (pcVar6[-0xe] != '\0') {
      uVar4 = uVar4 | 0x20;
    }
    if (pcVar6[-9] != '\0') {
      uVar4 = uVar4 | 0x40;
    }
    if (pcVar6[-10] != '\0') {
      uVar4 = uVar4 | 0x80;
    }
    if (pcVar6[-1] != '\0') {
      uVar4 = uVar4 | 0x100;
    }
    if (pcVar6[-2] != '\0') {
      uVar4 = uVar4 | 0x200;
    }
    if (pcVar6[-3] != '\0') {
      uVar4 = uVar4 | 0x400;
    }
    if (pcVar6[-4] != '\0') {
      uVar4 = uVar4 | 0x800;
    }
    if (pcVar6[-5] != '\0') {
      uVar4 = uVar4 | 0x1000;
    }
    if (pcVar6[-6] != '\0') {
      uVar4 = uVar4 | 0x2000;
    }
    fVar2 = (float)(int)*(short *)(pcVar6 + -0x10) * _DAT_004aca28;
    if ((float)_DAT_004aca30 < fVar2) {
      uVar4 = uVar4 | 0x4000;
    }
    if (fVar2 < (float)_DAT_004aca38) {
      uVar4 = uVar4 | 0x8000;
    }
    fVar3 = (float)(int)*(short *)(pcVar6 + -0x12) * _DAT_004aca28;
    if (fVar3 < (float)_DAT_004aca38) {
      uVar4 = uVar4 | 0x10000;
    }
    if ((float)_DAT_004aca30 < fVar3) {
      uVar4 = uVar4 | 0x20000;
    }
    if (((float)_DAT_004aca40 < fVar3) && (fVar3 < (float)_DAT_004aca48)) {
      uVar4 = uVar4 | 0x40000;
    }
    if (((float)_DAT_004aca40 < fVar2) && (fVar2 < (float)_DAT_004aca48)) {
      uVar4 = uVar4 | 0x80000;
    }
    if ((fVar3 <= (float)_DAT_004aca40) && ((float)_DAT_004aca38 <= fVar3)) {
      uVar4 = uVar4 | 0x100000;
    }
    if (((float)_DAT_004aca48 <= fVar3) && (fVar3 <= (float)_DAT_004aca30)) {
      uVar4 = uVar4 | 0x200000;
    }
    if (((float)_DAT_004aca48 <= fVar2) && (fVar2 <= (float)_DAT_004aca30)) {
      uVar4 = uVar4 | 0x400000;
    }
    if ((fVar2 <= (float)_DAT_004aca40) && ((float)_DAT_004aca38 <= fVar2)) {
      uVar4 = uVar4 | 0x800000;
    }
    uVar1 = *(uint *)((int)&DAT_00e98e90 + iVar7);
    *(float *)((int)&DAT_00e98ea0 + iVar7) = fVar3;
    *(uint *)((int)&DAT_00e98e90 + iVar7) = uVar4;
    *(float *)((int)&DAT_00e98e80 + iVar7) = fVar2;
    uVar5 = uVar1 ^ uVar4;
    pcVar6 = pcVar6 + 0x18;
    *(uint *)((int)&DAT_00e98eb0 + iVar7) = uVar4 & uVar5;
    *(uint *)((int)&DAT_00e98ec0 + iVar7) = uVar1 & uVar5;
    iVar7 = iVar7 + 4;
  } while ((int)pcVar6 < 0xe98f52);
  return;
}

