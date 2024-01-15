#include "prototype.h"


int FUN_004a4ad0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  HANDLE hFile;
  BOOL BVar6;
  DWORD DVar7;
  DWORD *pDVar8;
  int iVar9;
  int iVar10;
  undefined4 in_stack_00001008;
  int in_stack_0000100c;
  
  FUN_004a0a30();
  iVar10 = 0;
  iVar1 = FUN_004a4070(in_stack_00001008,0,1);
  if ((iVar1 == -1) || (iVar2 = FUN_004a4070(in_stack_00001008,0,2), iVar2 == -1)) {
    return -1;
  }
  iVar2 = in_stack_0000100c - iVar2;
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      FUN_004a4070(in_stack_00001008,in_stack_0000100c,0);
      hFile = (HANDLE)FUN_004a49e0(in_stack_00001008);
      BVar6 = SetEndOfFile(hFile);
      iVar10 = (BVar6 != 0) - 1;
      if (iVar10 == -1) {
        puVar5 = (undefined4 *)FUN_004a3dc0();
        *puVar5 = 0xd;
        DVar7 = GetLastError();
        pDVar8 = (DWORD *)FUN_004a3dd0();
        *pDVar8 = DVar7;
      }
    }
    FUN_004a4070(in_stack_00001008,iVar1,0);
    return iVar10;
  }
  puVar5 = (undefined4 *)&stack0x00000004;
  for (iVar9 = 0x400; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar3 = FUN_004a8d70(in_stack_00001008,0x8000);
  while( true ) {
    iVar9 = 0x1000;
    if (iVar2 < 0x1000) {
      iVar9 = iVar2;
    }
    iVar9 = FUN_004a4510(in_stack_00001008,&stack0x00000004,iVar9);
    if (iVar9 == -1) break;
    iVar2 = iVar2 - iVar9;
    if (iVar2 < 1) {
LAB_004a4b8a:
      FUN_004a8d70(in_stack_00001008,uVar3);
      FUN_004a4070(in_stack_00001008,iVar1,0);
      return iVar10;
    }
  }
  piVar4 = (int *)FUN_004a3dd0();
  if (*piVar4 == 5) {
    puVar5 = (undefined4 *)FUN_004a3dc0();
    *puVar5 = 0xd;
  }
  iVar10 = -1;
  goto LAB_004a4b8a;
}

