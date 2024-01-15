#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468a30(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((iVar1 != -1) ||
     ((((iVar2 = *(int *)(param_1 + 8), iVar2 != 1 && (iVar2 != 2)) && (iVar2 != 6)) && (iVar2 != 3)
      ))) {
    switch(*(undefined4 *)(param_1 + 8)) {
    case 1:
      *param_2 = (float)(int)*(short *)(&DAT_004c25a8 + iVar1 * 4) * _DAT_004ad660;
      *param_3 = (float)(int)*(short *)(&PTR_DAT_004c25aa + *(int *)(param_1 + 0x88)) *
                 _DAT_004ad660;
      return;
    case 2:
      *param_2 = (float)(int)*(short *)(&DAT_004c2620 + iVar1 * 4) * _DAT_004ad664;
      *param_3 = (float)(int)*(short *)(&DAT_004c2622 + *(int *)(param_1 + 0x88) * 4) *
                 _DAT_004ad664;
      return;
    case 3:
      *param_2 = (float)(int)*(short *)(&DAT_004c2658 + iVar1 * 4) * _DAT_004ad664;
      *param_3 = (float)(int)*(short *)(&DAT_004c265a + *(int *)(param_1 + 0x88) * 4) *
                 _DAT_004ad664;
      return;
    case 4:
      *param_2 = 0.03333;
      *param_3 = 14.3333;
      return;
    case 5:
      *param_2 = 0.03333;
      *param_3 = 4.2;
      return;
    default:
      *param_2 = 0.0;
      *param_3 = 0.0;
      break;
    case 7:
      *param_2 = 0.0666;
      *param_3 = 5.0616;
      return;
    case 8:
      *param_2 = (float)(int)*(short *)(&DAT_004c26d0 + iVar1 * 4) * _DAT_004ad664;
      *param_3 = (float)(int)*(short *)(&DAT_004c26d2 + *(int *)(param_1 + 0x88) * 4) *
                 _DAT_004ad664;
      return;
    case 9:
      *param_2 = (float)(int)*(short *)(&DAT_004c26e8 + iVar1 * 4) * _DAT_004ad664;
      *param_3 = (float)(int)*(short *)(&DAT_004c26ea + *(int *)(param_1 + 0x88) * 4) *
                 _DAT_004ad664;
      return;
    case 10:
      *param_2 = (float)(int)*(short *)(&DAT_004c2698 + iVar1 * 4) * _DAT_004ad664;
      *param_3 = (float)(int)*(short *)(&DAT_004c269a + *(int *)(param_1 + 0x88) * 4) *
                 _DAT_004ad664;
      return;
    case 0xb:
      *param_2 = (float)(int)*(short *)(&DAT_004c26b8 + iVar1 * 4) * _DAT_004ad664;
      *param_3 = (float)(int)*(short *)(&DAT_004c26ba + *(int *)(param_1 + 0x88) * 4) *
                 _DAT_004ad664;
      return;
    case 0xc:
      *param_2 = (float)(int)*(short *)(&DAT_004c26a8 + iVar1 * 4) * _DAT_004ad664;
      *param_3 = (float)(int)*(short *)(&DAT_004c26aa + *(int *)(param_1 + 0x88) * 4) *
                 _DAT_004ad664;
      return;
    }
  }
  return;
}

