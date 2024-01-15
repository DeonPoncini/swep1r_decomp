#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440c10(int param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  
  _DAT_00e364a8 = _DAT_00e364a8 | 0x40;
  DAT_0050ca3c = 1;
  bVar8 = 0;
  bVar4 = 0;
  bVar3 = false;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 8;
  iVar5 = FUN_004409d0(&DAT_00e35a60,&DAT_004c0948);
  if ((iVar5 != 0) && (((byte)DAT_0050c908 & 4) != 0)) {
    DAT_00e29890 = *(undefined *)(param_1 + 0x5d);
    bVar8 = 1;
    bVar4 = 1;
    bVar3 = true;
  }
  if (bVar8 < 5) {
    do {
      FUN_004816b0();
      iVar5 = __ftol();
      FUN_004816b0();
      iVar6 = __ftol();
      bVar1 = (&DAT_00e35a85)[iVar5];
      if (bVar3) {
        bVar1 = (&DAT_00e364ac)[iVar5];
      }
      if ((bVar1 & (byte)(1 << ((byte)iVar6 & 0x1f))) != 0) {
        iVar9 = (int)(char)bVar8;
        bVar2 = false;
        iVar7 = 0;
        if (0 < iVar9) {
          do {
            bVar8 = bVar4;
            if (*(int *)(&DAT_004c0018 + (iVar5 * 7 + iVar6) * 4) ==
                (int)(char)(&DAT_00e29890)[iVar7]) {
              bVar2 = true;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar9);
        }
        if (!bVar2) {
          bVar8 = bVar8 + 1;
          (&DAT_00e29890)[iVar9] = (&DAT_004c0018)[(iVar5 * 7 + iVar6) * 4];
          bVar4 = bVar8;
        }
      }
    } while ((char)bVar8 < '\x05');
  }
  return;
}

