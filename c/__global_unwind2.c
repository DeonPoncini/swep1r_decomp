#include "prototype.h"


/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4a58f8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

