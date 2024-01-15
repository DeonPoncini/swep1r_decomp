#include "prototype.h"


void FUN_00409cf1(void)

{
  LPCRITICAL_SECTION unaff_retaddr;
  
  EnterCriticalSection(unaff_retaddr);
  FUN_0040b731();
  return;
}

