#include "prototype.h"


undefined4 * FUN_004a8cc0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint dwBytes;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  dwBytes = param_2 * param_1;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    puVar3 = (undefined4 *)0x0;
    if (dwBytes < 0xffffffe1) {
      if (DAT_004d422c < dwBytes) {
LAB_004a8d34:
        if (puVar3 != (undefined4 *)0x0) {
          return puVar3;
        }
      }
      else {
        FUN_004a1670(9);
        puVar3 = (undefined4 *)FUN_004a34c0(dwBytes >> 4);
        FUN_004a16f0(9);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = puVar3;
          for (uVar2 = dwBytes >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          for (uVar2 = dwBytes & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          goto LAB_004a8d34;
        }
      }
      puVar3 = (undefined4 *)HeapAlloc(DAT_00ecd604,8,dwBytes);
    }
    if ((puVar3 != (undefined4 *)0x0) || (DAT_00dfab64 == 0)) {
      return puVar3;
    }
    iVar1 = FUN_004a3950(dwBytes);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
  } while( true );
}

