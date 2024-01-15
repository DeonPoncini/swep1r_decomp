#include "prototype.h"


/* Library Function - Single Match
    _strncat
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (_Count != 0) {
    uVar4 = (uint)_Dest & 3;
    puVar5 = (uint *)_Dest;
    while (uVar4 != 0) {
      bVar1 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      if (bVar1 == 0) goto LAB_004a100b;
      uVar4 = (uint)puVar5 & 3;
    }
    do {
      do {
        puVar6 = puVar5;
        puVar5 = puVar6 + 1;
      } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
      uVar4 = *puVar6;
      if ((char)uVar4 == '\0') goto LAB_004a101b;
      if ((char)(uVar4 >> 8) == '\0') {
        puVar6 = (uint *)((int)puVar6 + 1);
        goto LAB_004a101b;
      }
      if ((uVar4 & 0xff0000) == 0) {
        puVar6 = (uint *)((int)puVar6 + 2);
        goto LAB_004a101b;
      }
    } while ((uVar4 & 0xff000000) != 0);
LAB_004a100b:
    puVar6 = (uint *)((int)puVar5 + -1);
LAB_004a101b:
    if (((uint)_Source & 3) == 0) {
      uVar3 = _Count >> 2;
    }
    else {
      do {
        bVar1 = *_Source;
        uVar4 = (uint)bVar1;
        _Source = (char *)((int)_Source + 1);
        if (bVar1 == 0) goto LAB_004a106a;
        *(byte *)puVar6 = bVar1;
        puVar6 = (uint *)((int)puVar6 + 1);
        _Count = _Count - 1;
        if (_Count == 0) goto LAB_004a1060;
      } while (((uint)_Source & 3) != 0);
      uVar3 = _Count >> 2;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar2 = *(uint *)_Source;
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar4 == '\0') {
LAB_004a106a:
          *(byte *)puVar6 = (byte)uVar4;
          return _Dest;
        }
        if ((char)(uVar4 >> 8) == '\0') {
          *(short *)puVar6 = (short)uVar4;
          return _Dest;
        }
        if ((uVar4 & 0xff0000) == 0) {
          *(short *)puVar6 = (short)uVar4;
          *(byte *)((int)puVar6 + 2) = 0;
          return _Dest;
        }
        if ((uVar4 & 0xff000000) == 0) {
          *puVar6 = uVar4;
          return _Dest;
        }
      }
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
    }
    for (_Count = _Count & 3; _Count != 0; _Count = _Count - 1) {
      bVar1 = *_Source;
      _Source = (char *)((int)_Source + 1);
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      if (bVar1 == 0) {
        return _Dest;
      }
    }
LAB_004a1060:
    *(byte *)puVar6 = (byte)_Count;
  }
  return _Dest;
}

