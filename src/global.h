#ifndef GLOBAL_H
#define GLOBAL_H

#include "types.h"

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

extern code (*DAT_004b2014)(void); // function pointer in exit // never referenced, has value 0x004a69f0 - maybe pointing at FUN_004a98c0
extern code (*DAT_004b2018)(void);
// this is just a boundary marker to terminate looping
extern code *DAT_004b201c;
// another function pointer at cleanup - appears null
extern code (*DAT_004b2020)(void);
// this is just a boundary marker to terminate looping
extern code *DAT_004b2024;
extern bool DAT_004b4758; // flag in WNDPROC handling
extern char DAT_004b2524[5]; // format string for sprintf
extern int DAT_004b6c90;
extern char DAT_004b6cfc[3]; // file format string write binary
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
typedef struct DAT_004d6be0_s {
    int32_t unk1; // byte 0-3
    int32_t unk2; // byte 4-7
    code (*unk3)(struct DAT_004d6be0_s *); // byte 0x8-0xB
    int32_t unk4; // byte 0xC-0xF
    int32_t unk5; // byte 0x10-0x13
    code (*unk6)(struct DAT_004d6be0_s* , int, int, int, int, int*); // offset 0x14
} DAT_004d6be0_s;
extern DAT_004d6be0_s *DAT_004d6be0;
extern char DAT_004d55cc;
extern char DAT_004eb3d0;
// WNDPROC flag - appears to be 8 bytes in memory
extern long long _DAT_0050b5a0;
extern int _DAT_0050c75c;
extern char DAT_004bfef2[182];
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
extern int DAT_00e35a60[8];
extern bool (*DAT_00dfab68)(undefined4); // function pointer involved in malloc
extern char DAT_00e35a80[8]; // some sort of character array
extern char DAT_00e35a81; // points at second character of array
extern char DAT_00e35a82; // points at third character of array
extern char DAT_00e35a83; // points at character of array
extern char DAT_00e35a84; // points at character of array
extern char DAT_00e35a85; // points at character of array
extern char DAT_00e35a86; // points at character of array
extern char DAT_00e35a87; // points at character of array
extern uint DAT_00e364a0; // bitfield
extern int DAT_00e364b0; // bitfield something to do with player properties
// this is the name of the player
extern char DAT_00e364b4[32];
extern HANDLE DAT_00ecd604; // system heap allocation handle
extern code (**DAT_00ecd614)(void); // never used
extern code (**DAT_00ecd618)(void); // never used

#ifdef __cplusplus
}
#endif
#endif
