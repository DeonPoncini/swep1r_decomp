#include "prototype.h"


/* WARNING: Removing unreachable block (ram,0x0049d045) */

UINT FUN_0049cfd0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LPARAM lParam;
  WPARAM wParam;
  int iVar1;
  UINT UVar2;
  
  lParam = param_4;
  wParam = param_3;
  UVar2 = param_2;
  if (param_2 == 2) {
    FUN_004240d0();
    PostQuitMessage(0);
    lParam = param_4;
    wParam = param_3;
  }
  else if ((DAT_00dfaa30 != (code *)0x0) &&
          (iVar1 = (*DAT_00dfaa30)(param_1,param_2,param_3,param_4,&param_2), iVar1 != 0)) {
    return param_2;
  }
  UVar2 = DefWindowProcA(param_1,UVar2,wParam,lParam);
  return UVar2;
}

