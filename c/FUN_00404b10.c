#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00404b10(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_00485360();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00485570();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_00407de0();
  iVar1 = 0;
  DAT_00ec8824 = 0;
  DAT_00ec879c = 0;
  _DAT_00ec887c = 0;
  DAT_00ec87a0 = 0;
  do {
    iVar2 = FUN_004855f0(iVar1 + DAT_004d6b3c * 6);
    if (iVar2 != 0) {
      _DAT_00ec887c = _DAT_00ec887c | 1 << ((byte)iVar1 & 0x1f);
      DAT_00ec87a0 = DAT_00ec87a0 + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  if (DAT_00ec87a0 == 0) {
    DAT_004b294c = 0;
    DAT_004b2944 = 0;
  }
  else {
    DAT_00ec879c = *(undefined4 *)(&DAT_00eca0f8 + DAT_004d6b3c * 0x274);
    DAT_00ec8824 = *(undefined4 *)(&DAT_00eca0fc + DAT_004d6b3c * 0x274);
  }
  DAT_00ec8770 = 0;
  DAT_00ec8808 = 0;
  DAT_00ec878c = 0;
  iVar1 = 0;
  do {
    iVar2 = FUN_004855f0(iVar1 + 0x30);
    if (iVar2 != 0) {
      DAT_00ec8808 = DAT_00ec8808 | 1 << ((byte)iVar1 & 0x1f);
      DAT_00ec878c = DAT_00ec878c + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (DAT_00ec878c == 0) {
    DAT_004b2950 = 0;
    DAT_004d6b38 = 0;
  }
  else {
    DAT_00ec8770 = DAT_00ecb498;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004d5e68);
  _DAT_00ec8810 = 0;
  DAT_004d5e60._0_1_ = 0;
  _DAT_00ec8814 = 0;
  DAT_004d6b54 = 1;
  _DAT_00ec8818 = 0;
  DAT_004d6300 = 0;
  _DAT_00ec881c = 0;
  DAT_004d6824 = 0;
  DAT_00ec881e = 0;
  DAT_004d6304 = 1;
  DAT_004d5fb8 = 1;
  DAT_004d6308 = 0;
  FUN_00407800(0xffffffff);
  FUN_0040a120(0);
  FUN_00409d70(0);
  FUN_00409ee0(0x11,0xffffffff,0xffffffff,0xffffffff,0);
  iVar1 = FUN_0040ae40(s_current_004b2640);
  if (iVar1 < 0) {
    FUN_0040ab60();
    FUN_0040ab80(s_current_004b2640);
  }
  iVar1 = FUN_00406470(0xffffffff,&DAT_004d55cc,1);
  if (iVar1 < 0) {
    FUN_00405ea0(0);
    FUN_00405ea0(1);
    FUN_00405ea0(2);
  }
  if (DAT_004d55d4 != 0) {
    FUN_00406470(0,&DAT_004b2638,1);
    DAT_004b297c = 0;
    DAT_00ec876c = 0;
  }
  uVar3 = FUN_00406470(0xffffffff,s_current_004b2640,0);
  if (0x7fffffff < uVar3) {
    FUN_00406080(s_current_004b2640);
  }
  FUN_00407630(0);
  FUN_00407630(1);
  return 0;
}

