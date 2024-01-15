#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00489ec0(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined local_51c [284];
  undefined local_400 [1024];
  
  if ((DAT_0052e650 == 0) && (param_1 < DAT_0052d56c)) {
    _DAT_0052d55c = param_1;
    DAT_0052e618 = &DAT_0052d870 + param_1 * 0xda;
    if ((&DAT_0052d878)[param_1 * 0xda] != 0) {
      FUN_0048b4b0(local_51c);
      iVar1 = FUN_004888d0(local_51c,*DAT_0052e618 == 0,(DAT_0052d4cc & 0x8000) != 0);
      if (iVar1 == 0) {
        puVar2 = local_400 + 2;
        iVar1 = 0x100;
        do {
          puVar2[1] = 0x80;
          *puVar2 = 0xfe;
          puVar2[-1] = 0xfe;
          puVar2[-2] = 0xfe;
          puVar2 = puVar2 + 4;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = (**(code **)(*DAT_0052e638 + 0x14))(DAT_0052e638,0x4c,local_400,&DAT_0052e63c,0);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(*DAT_0052e640 + 0x20))
                              (DAT_0052e640,DAT_0052e618 + 0x8e,DAT_00ec8e00,&DAT_0052e644,0),
           iVar1 == 0)) {
          _DAT_0052d460 = 0xfc;
          iVar1 = (**(code **)(*DAT_0052e644 + 0xc))(DAT_0052e644,&DAT_0052d460,&stack0xfffffadc);
          if (iVar1 == 0) {
            DAT_0052e61c = 0;
            DAT_0052e620 = 0;
            iVar1 = (**(code **)(*DAT_0052e644 + 0x20))(DAT_0052e644,&LAB_0048b770,0);
            if ((((iVar1 == 0) && (DAT_0052e61c != 0)) && (DAT_0052e620 != 0)) &&
               (iVar1 = FUN_0048b3c0(), iVar1 != 0)) {
              DAT_0052e624 = 0x200;
              if (DAT_0052e618[0xc] != 0) {
                DAT_0052e624 = DAT_0052e618[0xc];
              }
              DAT_004c98b4 = 1;
              DAT_0052e62c = 0;
              DAT_0052e630 = 0;
              DAT_0052e634 = 0;
              DAT_0052d564 = FUN_0048add0(&DAT_004ae850);
              DAT_0052d568 = FUN_0048add0(&DAT_004ae888);
              iVar1 = DAT_0052d568 * 0x60;
              if (((&DAT_0052d59c)[DAT_0052d568 * 0x18] == 0) && (DAT_0052e618[3] != 0)) {
                *(undefined4 *)(&DAT_0052d5a8 + iVar1) = 1;
                *(undefined4 *)(&DAT_0052d5ac + iVar1) = 0;
              }
              DAT_0052d560 = FUN_0048add0(&DAT_004ae8c0);
              iVar1 = DAT_0052d560 * 0x60;
              if (((&DAT_0052d59c)[DAT_0052d560 * 0x18] == 0) && (DAT_0052e618[3] != 0)) {
                *(undefined4 *)(&DAT_0052d5a8 + iVar1) = 1;
                *(undefined4 *)(&DAT_0052d5ac + iVar1) = 0;
              }
              iVar1 = FUN_0048aeb0();
              if ((iVar1 != 0) &&
                 (iVar1 = FUN_00488880(DAT_0052e618 + 0x4d,DAT_0052e618 + 0x4e), iVar1 == 0)) {
                DAT_0052e650 = 1;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

