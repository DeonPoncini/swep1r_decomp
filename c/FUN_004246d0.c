#include "prototype.h"


void FUN_004246d0(HWND param_1,LPARAM param_2)

{
  HINSTANCE hInstance;
  
  hInstance = (HINSTANCE)GetWindowLongA(param_1,-6);
  DialogBoxParamA(hInstance,(LPCSTR)0x65,param_1,(DLGPROC)&LAB_00424700,param_2);
  return;
}

