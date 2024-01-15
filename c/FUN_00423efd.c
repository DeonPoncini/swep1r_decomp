#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00423efd(void)

{
  int iVar1;
  int iVar2;
  code *unaff_EBX;
  undefined4 *puVar3;
  
  FUN_00408640(0x14);
  iVar1 = FUN_00404b10();
  if (iVar1 != 0) {
    FUN_0049eb80(s_Unknown_error_004b75f8,s_ERROR__elfControl_Initialize_fai_004b7af8,&DAT_00ecbc20)
    ;
    FUN_00424150();
    return 0;
  }
  FUN_00408640(0x19);
  FUN_0049d210(s_FullScreen_004b7b58,DAT_0050b560);
  FUN_0049d210(s_Fix_Flicker_004b7b4c,DAT_0050b564);
  FUN_0049d210(s_DevMode_004b7af0,DAT_0050b568);
  FUN_0049d210(s_UseFett_004b7b44,DAT_0050b56c);
  FUN_00409800(&DAT_0050b560);
  FUN_00408640(0x26);
  FUN_0049ce90(&LAB_00423900);
  FUN_00408640(0x28);
  FUN_00445960();
  FUN_00408640(0x2d);
  FUN_00445a50();
  FUN_00408640(0x32);
  FUN_00411950();
  FUN_00408640(0x3c);
  FUN_00421810();
  FUN_00408640(0x41);
  DAT_0050b558 = (undefined *)0x0;
  iVar1 = 0x1f;
  if (((DAT_00ec8e5c == 0x7c00) && (DAT_00ec8e60 == 0x3e0)) && (DAT_00ec8e64 == 0x1f)) {
    DAT_0050b558 = &DAT_004eb558;
    iVar2 = 0xffff;
    do {
      *(ushort *)(DAT_0050b558 + iVar2 * 2) = (ushort)iVar2 & 0x1f | (ushort)(iVar2 >> 1) & 0x7fe0;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  puVar3 = &DAT_004eb484;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_004eb484 = 0x7c;
  _DAT_004eb488 = 7;
  _DAT_004eb490 = 0x280;
  _DAT_004eb48c = 0x1e0;
  _DAT_004eb4ec = 0x800;
  if ((DAT_0050b560 == 0) && (DAT_0050b568 == 0)) {
    (*unaff_EBX)(DAT_0050b59c,3);
  }
  FUN_00408640(0x5a);
  return 1;
}

