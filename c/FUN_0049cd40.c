#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

WPARAM FUN_0049cd40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  tagMSG tStack_1c;
  
  _DAT_00dfaa2c = param_4;
  FUN_0049cea0(param_1,param_4,param_5);
  FUN_0048c770(DAT_00dfaa28);
  FUN_0048c790(param_1);
  FUN_0048c7b0(&DAT_004af9b0);
  Ordinal_17();
  iVar1 = GetSystemMetrics(0x20);
  DAT_00dfaa34 = iVar1 << 1;
  iVar1 = GetSystemMetrics(0x20);
  iVar2 = GetSystemMetrics(0xf);
  DAT_00dfaa38 = iVar2 + iVar1 * 2;
  iVar1 = FUN_00423cc0(param_3);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    while (BVar3 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,0), BVar3 == 0) {
      thunk_FUN_00423cb0();
    }
    do {
      BVar3 = GetMessageA(&tStack_1c,(HWND)0x0,0,0);
      if (BVar3 == -1) {
        return 0xffffffff;
      }
      if (BVar3 == 0) {
        return tStack_1c.wParam;
      }
      TranslateMessage(&tStack_1c);
      DispatchMessageA(&tStack_1c);
      BVar3 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,0);
    } while (BVar3 != 0);
  } while( true );
}

