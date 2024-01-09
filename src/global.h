#ifndef GLOBAL_H
#define GLOBAL_H

#include "types.h"

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

// stores critical sections - this goes until 0x004d2080
extern _RTL_CRITICAL_SECTION DAT_004d1fc0[192];
// pointers into the above array
extern LPCRITICAL_SECTION PTR_DAT_004d1fc4;
extern LPCRITICAL_SECTION PTR_DAT_004d1fe4;
extern LPCRITICAL_SECTION PTR_DAT_004d1ff4;
extern LPCRITICAL_SECTION PTR_DAT_004d2004;
extern undefined* PTR_LOOP_004d2208; // pointer to previously allocated memory?
extern undefined* PTR_LOOP_004d220c; // pointer to previously allocated memory?
extern int32_t DAT_004d2218; // when -1, use a buffer instead of heap for memory
extern undefined* PTR_LOOP_004d4228; // pointer to previously allocated memory?
extern uint DAT_004d422c; // heap size for malloc
extern HWND DAT_00dfaa28;
extern int _DAT_00dfaa2c;
// WNDPROC function pointer
extern int (*DAT_00dfaa30)(HWND, UINT, WPARAM, LPARAM, UINT*);
extern int DAT_00dfaa34;
extern int DAT_00dfaa38;
extern int _DAT_00dfaab0;
extern int DAT_00dfaab4;
extern bool DAT_00dfaaac;
extern int DAT_00dfab60; // some sort of malloc counter
extern bool DAT_00dfab64; // malloc second parameter flag
// function pointer involved in malloc process, doesn't appear to be used
// after a failed allocation, this function is called to see if we can
// allocate more memory
extern bool (*DAT_00dfab68)(undefined4); // function pointer involved in malloc
extern HANDLE DAT_00ecd604; // system heap allocation handle
extern code (**DAT_00ecd614)(void); // never used
extern code (**DAT_00ecd618)(void); // never used

#ifdef __cplusplus
}
#endif
#endif
