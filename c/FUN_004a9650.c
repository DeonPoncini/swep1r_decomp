#include "prototype.h"


uint FUN_004a9650(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_00dfab38 == 0) {
        if (param_1 == (LPWSTR)0x0) {
          return 1;
        }
        *param_1 = (ushort)bVar1;
        return 1;
      }
      if ((PTR_DAT_004d1d90[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_00dfab48,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (((1 < (int)DAT_004d1f9c) && ((int)DAT_004d1f9c <= (int)param_3)) &&
           (iVar2 = MultiByteToWideChar(DAT_00dfab48,9,(LPCSTR)param_2,DAT_004d1f9c,param_1,
                                        (uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) {
          return DAT_004d1f9c;
        }
        if (DAT_004d1f9c <= param_3) {
          if (param_2[1] != 0) {
            return DAT_004d1f9c;
          }
          puVar3 = (undefined4 *)FUN_004a3dc0();
          *puVar3 = 0x2a;
          return 0xffffffff;
        }
      }
      puVar3 = (undefined4 *)FUN_004a3dc0();
      *puVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
      return 0;
    }
  }
  return 0;
}

