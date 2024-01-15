#include "prototype.h"


void FUN_00407de0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  OLECHAR *pOVar4;
  size_t _MaxCount;
  uint uVar5;
  GUID *rguid;
  char local_300 [256];
  OLECHAR local_200 [128];
  char local_100 [256];
  
  uVar5 = 0;
  DAT_004d6b3c = 0;
  iVar3 = FUN_0049d2e0(s_JoystickGUID_004b4304,local_100,0x100,&DAT_004d55cc);
  uVar2 = DAT_004d6b3c;
  if ((iVar3 == 0) && (DAT_0050fec8 != 0)) {
    rguid = (GUID *)&DAT_00ec9ea4;
    while( true ) {
      StringFromGUID2(rguid,local_200,0x100);
      _MaxCount = 0;
      pOVar4 = local_200;
      do {
        if (*(char *)pOVar4 != '\0') {
          local_300[_MaxCount] = *(char *)pOVar4;
          _MaxCount = _MaxCount + 1;
        }
        cVar1 = *(char *)pOVar4;
        pOVar4 = (OLECHAR *)((int)pOVar4 + 1);
      } while (cVar1 != '}');
      iVar3 = _strncmp(local_100,local_300,_MaxCount);
      uVar2 = uVar5;
      if (iVar3 == 0) break;
      uVar5 = uVar5 + 1;
      rguid = (GUID *)&rguid[0x27].Data2;
      if (DAT_0050fec8 <= uVar5) {
        return;
      }
    }
  }
  DAT_004d6b3c = uVar2;
  return;
}

