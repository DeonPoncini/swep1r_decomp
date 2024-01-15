#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045d130(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  float10 extraout_ST0;
  char *local_108;
  undefined **local_104;
  char local_100 [256];
  
  iVar3 = __ftol();
  uVar4 = 0x49;
  _DAT_0050ca48 = (float)(extraout_ST0 + (float10)_DAT_00e22a40);
  if (DAT_0050ca40 == 2) {
    uVar4 = 0x6f;
  }
  if (DAT_0050ca40 == 3) {
    uVar4 = 0x3b;
  }
  if (DAT_0050ca40 == 4) {
    uVar4 = 0xb1;
  }
  if (DAT_0050ca40 == 5) {
    uVar4 = 0x4b;
  }
  iVar9 = DAT_0050ca40;
  if (1 < uVar4) {
    iVar10 = 0;
    pcVar5 = (char *)(uVar4 - 1);
    local_104 = &PTR_s_Lead_Tester_004c4db4;
    pcVar11 = pcVar5;
    local_108 = pcVar5;
    do {
      if (iVar9 == 1) {
        pcVar5 = *(char **)((int)&PTR_DAT_004c4ac8 + iVar10);
        pcVar11 = *(char **)((int)&PTR_s_Project_Leaders_Design_004c4acc + iVar10);
      }
      if (iVar9 == 2) {
        pcVar5 = *(char **)((int)&PTR_DAT_004c4bf0 + iVar10);
        pcVar11 = *(char **)((int)&PTR_s_Voice_Department_Manager_004c4bf4 + iVar10);
      }
      if (iVar9 == 3) {
        pcVar5 = local_104[-1];
        pcVar11 = *local_104;
      }
      if (iVar9 == 4) {
        pcVar5 = *(char **)((int)&PTR_DAT_004c4ea0 + iVar10);
        pcVar11 = *(char **)((int)&PTR_s_Production_Manager_004c4ea4 + iVar10);
      }
      if (iVar9 == 5) {
        pcVar5 = *(char **)((int)&PTR_DAT_004c5168 + iVar10);
        pcVar11 = *(char **)((int)&PTR_s_Lucas_Licensing_004c516c + iVar10);
      }
      cVar2 = *pcVar5;
      if (cVar2 == '\0') {
        iVar3 = iVar3 + 0x28;
      }
      else if (cVar2 == '\\') {
        iVar3 = iVar3 + 0x18;
      }
      else {
        iVar3 = iVar3 + 0xc;
      }
      if ((-10 < iVar3) && (iVar3 < 0xfa)) {
        if (cVar2 == '\0') {
          FUN_0049eb80(local_100,s__f4_o_c_s_004c6d70,pcVar11);
          pcVar6 = local_100;
          cVar2 = local_100[0];
          while (cVar2 != '\0') {
            if (*pcVar6 == '\\') {
              *pcVar6 = ' ';
            }
            pcVar1 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            cVar2 = *pcVar1;
          }
          uVar7 = 0xbe;
          uVar8 = 0xbe;
        }
        else {
          FUN_0049eb80(local_100,s__k_c_s_004c6d68,pcVar11);
          pcVar6 = local_100;
          cVar2 = local_100[0];
          while (cVar2 != '\0') {
            if (*pcVar6 == '\\') {
              *pcVar6 = ' ';
            }
            pcVar1 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            cVar2 = *pcVar1;
          }
          uVar7 = 0xff;
          uVar8 = 0xff;
        }
        FUN_00450530(0xa0,iVar3,uVar8,uVar7,0xffffffff,0xffffffff,local_100);
        iVar9 = DAT_0050ca40;
      }
      iVar10 = iVar10 + 4;
      local_104 = local_104 + 1;
      local_108 = local_108 + -1;
    } while (local_108 != (char *)0x0);
  }
  if (iVar3 < 1) {
    if ((iVar9 != 5) && (DAT_0050ca44 == 0)) {
      FUN_0045d0b0(param_1,0x46696e69);
      return;
    }
    FUN_0045d0b0(param_1,0x41627274);
  }
  return;
}

