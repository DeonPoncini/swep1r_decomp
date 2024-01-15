#include "prototype.h"


uint FUN_004a02f0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 local_20 [8];
  
  iVar3 = FUN_004a3cc0();
  puVar6 = local_20;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *(byte *)((int)local_20 + (uint)(bVar1 >> 3)) =
         *(byte *)((int)local_20 + (uint)(bVar1 >> 3)) | '\x01' << (bVar1 & 7);
  } while (bVar1 != 0);
  if (param_1 == (byte *)0x0) {
    param_1 = *(byte **)(iVar3 + 0x18);
  }
  bVar1 = *param_1;
  bVar2 = *(byte *)((int)local_20 + (uint)(bVar1 >> 3)) & (byte)(1 << (bVar1 & 7));
  while ((bVar2 != 0 && (bVar1 != 0))) {
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
    bVar2 = *(byte *)((int)local_20 + (uint)(bVar1 >> 3)) & (byte)(1 << (bVar1 & 7));
  }
  bVar1 = *param_1;
  pbVar5 = param_1;
  do {
    if (bVar1 == 0) {
LAB_004a03bf:
      *(byte **)(iVar3 + 0x18) = pbVar5;
      return -(uint)(param_1 != pbVar5) & (uint)param_1;
    }
    if ((*(byte *)((int)local_20 + (uint)(bVar1 >> 3)) & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      goto LAB_004a03bf;
    }
    bVar1 = pbVar5[1];
    pbVar5 = pbVar5 + 1;
  } while( true );
}

