#include "prototype.h"


LPSTR FUN_004a6b10(LPSTR param_1,WCHAR param_2)

{
  LPSTR pCVar1;
  undefined4 *puVar2;
  
  pCVar1 = param_1;
  if (param_1 == (LPSTR)0x0) {
    return param_1;
  }
  if (DAT_00dfab38 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return (LPSTR)0x1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    pCVar1 = (LPSTR)WideCharToMultiByte(DAT_00dfab48,0x220,&param_2,1,pCVar1,DAT_004d1f9c,
                                        (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((pCVar1 != (LPSTR)0x0) && (param_1 == (LPSTR)0x0)) {
      return pCVar1;
    }
  }
  puVar2 = (undefined4 *)FUN_004a3dc0();
  *puVar2 = 0x2a;
  return (LPSTR)0xffffffff;
}

