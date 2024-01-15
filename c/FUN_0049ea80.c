#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ea80(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  code **ppcVar1;
  code **ppcVar2;
  UINT uExitCode;
  
  FUN_0049eb40();
  if (DAT_00dfaab4 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00dfaab0 = 1;
  DAT_00dfaaac = (undefined)param_3;
  if (param_2 == 0) {
    if ((DAT_00ecd618 != (code **)0x0) &&
       (ppcVar2 = (code **)(DAT_00ecd614 + -4), ppcVar1 = DAT_00ecd618, DAT_00ecd618 <= ppcVar2)) {
      do {
        if (*ppcVar2 != (code *)0x0) {
          (**ppcVar2)();
          ppcVar1 = DAT_00ecd618;
        }
        ppcVar2 = ppcVar2 + -1;
      } while (ppcVar1 <= ppcVar2);
    }
    FUN_0049eb60(&DAT_004b2014,&DAT_004b201c);
  }
  FUN_0049eb60(&DAT_004b2020,&DAT_004b2024);
  if (param_3 != 0) {
    FUN_0049eb50();
    return;
  }
  DAT_00dfaab4 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

