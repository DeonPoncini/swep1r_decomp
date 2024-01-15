#include "prototype.h"


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_00dfaac8 == 1) {
    FUN_004a5ab0();
  }
  FUN_004a5af0(param_1);
  (*(code *)PTR___exit_004d1fb0)(0xff);
  return;
}

