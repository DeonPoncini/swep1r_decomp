#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428030(int param_1,uint param_2,float param_3,float param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined3 uVar6;
  
  if (DAT_0050c058 == 0) {
    uVar2 = *(uint *)(param_1 + 0x14);
    if (((uVar2 & 0x20) != 0) && ((uVar2 & param_2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 == 0) {
        cVar1 = *(char *)(param_1 + 0x1b);
        if (cVar1 < 0xff) {
          uVar4 = __ftol(*(float *)(param_1 + 8) * param_3 * _DAT_004ac4e4,
                         *(float *)(param_1 + 0xc) * param_4,0,0,0,2,
                         CONCAT31(cVar1 >> 7,*(undefined *)(param_1 + 0x18)),
                         *(undefined *)(param_1 + 0x19),*(undefined *)(param_1 + 0x1a),cVar1);
          uVar4 = __ftol(uVar4);
          FUN_0044f670(0,uVar4);
          return;
        }
        uVar4 = __ftol(*(float *)(param_1 + 8) * param_3 * _DAT_004ac4e4,
                       *(float *)(param_1 + 0xc) * param_4,0,0,0,0x10000000,
                       *(undefined *)(param_1 + 0x18),*(undefined *)(param_1 + 0x19),
                       CONCAT31(cVar1 >> 7,*(undefined *)(param_1 + 0x1a)),0xffffffff);
        uVar4 = __ftol(uVar4);
        FUN_0044f670(0,uVar4);
        return;
      }
      uVar5 = 0;
      if ((uVar2 & 0x2000) != 0) {
        uVar5 = 0x10;
      }
      if ((param_2 & 1) == 0) {
        uVar5 = 0;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar5 = uVar5 | 0x8000;
      }
      if ((*(char *)(param_1 + 0x1b) != 0xff) || ((uVar2 & 0x400) != 0)) {
        uVar5 = uVar5 | 1;
      }
      if ((uVar2 & 0x1000) != 0) {
        uVar5 = uVar5 | 0x20000;
      }
      if ((uVar2 & 4) != 0) {
        uVar5 = uVar5 | 0x2000;
      }
      if ((uVar2 & 8) != 0) {
        uVar5 = uVar5 | 0x4000;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar5 = uVar5 | 0x10000;
      }
      if ((uVar2 & 0x80) != 0) {
        uVar5 = uVar5 | 0x3000000;
      }
      if ((uVar2 & 0x100) != 0) {
        uVar5 = uVar5 | 0x800000;
      }
      if ((uVar2 & 0x8000) != 0) {
        uVar5 = uVar5 | 0x10000000;
      }
      if ((uVar2 & 0x4000) != 0) {
        uVar5 = uVar5 | 0x400000;
      }
      if ((uVar2 & 0x200) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((uVar2 & 0x10000) != 0) {
        uVar5 = uVar5 | 0x40;
      }
      uVar6 = (undefined3)(uVar2 >> 8);
      uVar4 = __ftol(uVar5,CONCAT31(uVar6,*(undefined *)(param_1 + 0x18)),
                     *(undefined *)(param_1 + 0x19),CONCAT31(uVar6,*(undefined *)(param_1 + 0x1a)),
                     *(char *)(param_1 + 0x1b));
      uVar4 = __ftol(uVar4);
      uVar4 = __ftol(*(float *)(param_1 + 8) * param_3,*(float *)(param_1 + 0xc) * param_4,
                     *(undefined4 *)(param_1 + 0x10),uVar4);
      uVar4 = __ftol(uVar4);
      FUN_0044f670(iVar3,uVar4);
    }
  }
  return;
}

