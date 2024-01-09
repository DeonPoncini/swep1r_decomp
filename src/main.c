#define _SIZE_T_DEFINED
#include "types.h"

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

#include "commctrl.h"
#include "user32.h"
#include "winreg.h"

#include "constants.h"
#include "global.h"
#include "main.h"
#include "prototype.h"

#ifdef __linux__

char* joinstr(char **s, char *sep) {
    char* joined = NULL; // the final joined string with separator
    uint64_t lensep = strlen(sep); // length of separator
    uint64_t sz = 0; // how much is stored
    int first = 1; // the first term in the list

    while (*s) {
        uint64_t len = strlen(*s);
        void *tmp = realloc(joined, sz+len + (first ? 0 : lensep) + 1);
        if (!tmp) {
            exit (EXIT_FAILURE);
        }
        joined = (char *)tmp; // assign allocated block to join
        if (!first) {
            strcpy(joined + sz, sep); // copy the separator
            sz += lensep; // update stored size
        }
        strcpy(joined + sz, *s++); // copy string to be joined
        first = 0;
        sz += len;
    }

    return joined;
}

int main(int argc, char* argv[]) {
    // this is given by the OS, just give it a unique ID
    // put in a unique value here as a reference
    HINSTANCE__ hInstance__ = { 0x905a4d };
    HINSTANCE hInstance = &hInstance__; // take a pointer to this structure
    HINSTANCE hPrevInstance = NULL; // this is always NULL on Windows
    // command line arguments are all arguments except the first one
    // represented as a single string
    char* sep = " ";
    LPSTR lpCmdLine = joinstr(&argv[1], sep);
    printf("Command line: %s\n", lpCmdLine);
    int nShowCmd = 10; // empirically derived by testing on windows
    return WinMain(hInstance, hPrevInstance, lpCmdLine, nShowCmd);
}
#endif

/// THIS is WINMAIN
/// at address 0x004238d0
//undefined4 FUN_004238d0(undefined4 param_1,undefined4 param_2,
//  undefined4 param_3,undefined4 param_4)
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    printf("hInstance: 0x%08x, hPrevInstance: 0x%p, lpCmdLine: %s, nShowCmd: %d\n",
            hInstance->unused, hPrevInstance, lpCmdLine, nShowCmd);
    /// calling MAIN
    FUN_0049cd40(hInstance,hPrevInstance,lpCmdLine,nShowCmd,s_Episode_I_Racer_004b7ae0);
    return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
//WPARAM FUN_0049cd40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
//                   undefined4 param_5)
WPARAM FUN_0049cd40(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd, LPCSTR title)
{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  tagMSG tStack_1c;

  _DAT_00dfaa2c = nShowCmd;
  FUN_0049cea0(hInstance,nShowCmd,title);
#if 0
  FUN_0048c770(DAT_00dfaa28);
  FUN_0048c790(hInstance);
  FUN_0048c7b0(&DAT_004af9b0);
#endif
  InitCommonControls();
  iVar1 = GetSystemMetrics(0x20);
  DAT_00dfaa34 = iVar1 << 1;
  iVar1 = GetSystemMetrics(0x20);
  iVar2 = GetSystemMetrics(0xf);
  DAT_00dfaa38 = iVar2 + iVar1 * 2;
#if 0
  iVar1 = FUN_00423cc0(lpCmdLine);
#else
  iVar1 = 0;
#endif
  if (iVar1 == 0) {
    return 0;
  }
  do {
    while (BVar3 = PeekMessageA(&tStack_1c,(HWND)0x0,0,0,0), BVar3 == 0) {
#if 0
      thunk_FUN_00423cb0();
#endif
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

