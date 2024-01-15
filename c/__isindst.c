#include "prototype.h"


/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 1998 Release */

int __cdecl __isindst(tm *_Time)

{
  int iVar1;
  
  FUN_004a1670(0xb);
  iVar1 = FUN_004a91c0(_Time);
  FUN_004a16f0(0xb);
  return iVar1;
}

