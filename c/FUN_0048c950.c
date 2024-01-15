#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048c950(undefined4 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_1c;
  float local_8;
  
  fVar5 = (float10)FUN_0048c830(param_1);
  fVar1 = (float)fVar5;
  if ((float10)_DAT_004af6d8 <= fVar5) {
    if (_DAT_004af6d0 <= fVar1) {
      if (_DAT_004af6dc <= fVar1) {
        local_1c = 3;
      }
      else {
        local_1c = 2;
      }
    }
    else {
      local_1c = 1;
    }
  }
  else {
    local_1c = 0;
  }
  fVar1 = fVar1 * _DAT_004af6e0;
  fVar5 = (float10)FUN_0048c8f0(fVar1);
  fVar2 = (float)((float10)fVar1 - fVar5);
  iVar3 = FUN_0048cd30(fVar1);
  iVar4 = iVar3 + 1;
  switch(local_1c) {
  case 0:
    if (iVar4 < 0x1000) {
      local_8 = *(float *)(&DAT_004c98e8 + iVar4 * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0xfff)) * 4);
    }
    *param_2 = (local_8 - *(float *)(&DAT_004c98e8 + iVar3 * 4)) * fVar2 +
               *(float *)(&DAT_004c98e8 + iVar3 * 4);
    if (iVar4 < 0x1000) {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - iVar4) * 4);
    }
    else {
      local_8 = -*(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar4 * 4 + 0xc);
    }
    *param_3 = (local_8 - *(float *)(&DAT_004c98e8 + (0xfff - iVar3) * 4)) * fVar2 +
               *(float *)(&DAT_004c98e8 + (0xfff - iVar3) * 4);
    break;
  case 1:
    if (iVar4 < 0x2000) {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0xfff)) * 4);
    }
    else {
      local_8 = -*(float *)(&DAT_004c18e8 + iVar4 * 4);
    }
    *param_2 = (local_8 - *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x1000)) * 4)) * fVar2 +
               *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x1000)) * 4);
    if (iVar4 < 0x2000) {
      local_8 = *(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar4 * 4 + 0xc);
    }
    else {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x1fff)) * 4);
    }
    local_8 = -local_8;
    *param_3 = (local_8 - -*(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar3 * 4 + 0xc))
               * fVar2 + -*(float *)(s_Director_of_Sales_and_Marketing_004c58dc + iVar3 * 4 + 0xc);
    break;
  case 2:
    if (iVar4 < 0x3000) {
      local_8 = *(float *)(&DAT_004c18e8 + iVar4 * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x2fff)) * 4);
    }
    local_8 = -local_8;
    *param_2 = (local_8 - -*(float *)(&DAT_004c18e8 + iVar3 * 4)) * fVar2 +
               -*(float *)(&DAT_004c18e8 + iVar3 * 4);
    if (iVar4 < 0x3000) {
      local_8 = -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x1fff)) * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004bd8e8 + iVar4 * 4);
    }
    *param_3 = (local_8 - -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x2000)) * 4)) * fVar2 +
               -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x2000)) * 4);
    break;
  case 3:
    if (iVar4 < 0x4000) {
      local_8 = -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x2fff)) * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004b98e8 + iVar4 * 4);
    }
    *param_2 = (local_8 - -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x3000)) * 4)) * fVar2 +
               -*(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x3000)) * 4);
    if (iVar4 < 0x4000) {
      local_8 = *(float *)(&DAT_004bd8e8 + iVar4 * 4);
    }
    else {
      local_8 = *(float *)(&DAT_004c98e8 + (0xfff - (iVar3 + -0x3fff)) * 4);
    }
    *param_3 = (local_8 - *(float *)(&DAT_004bd8e8 + iVar3 * 4)) * fVar2 +
               *(float *)(&DAT_004bd8e8 + iVar3 * 4);
  }
  return;
}

