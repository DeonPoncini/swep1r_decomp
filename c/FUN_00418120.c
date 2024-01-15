#include "prototype.h"


void FUN_00418120(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 local_400;
  undefined local_1;
  
  if (param_1 == 0) {
    return;
  }
  puVar11 = &local_400;
  for (iVar9 = 0x100; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  if (*(char **)(param_1 + 0x4d4) != (char *)0x0) {
    _strncpy((char *)&local_400,*(char **)(param_1 + 0x4d4),0x3ff);
    local_1 = 0;
  }
  switch(param_2) {
  case 8:
    iVar9 = *(int *)(param_1 + 0x530);
    if (iVar9 == 0) break;
    FUN_0049f4e0(&stack0xfffffbff + iVar9,(int)&local_400 + iVar9,0x400 - iVar9);
    local_1 = 0;
    *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + -1;
    goto LAB_004183dd;
  default:
    if (DAT_004d1f9c < 2) {
      uVar5 = *(ushort *)(PTR_DAT_004d1d90 + param_2 * 2) & 0x107;
    }
    else {
      uVar5 = FUN_0049f440(param_2,0x107);
    }
    if ((uVar5 == 0) && (param_2 != 0x20)) break;
    uVar5 = *(uint *)(param_1 + 0x534);
    if (0x3ff < uVar5) {
      uVar5 = 0x400;
    }
    uVar2 = *(uint *)(param_1 + 0x530);
    if ((uVar5 <= uVar2) || ((param_2 == 0x20 && (uVar2 == 0)))) break;
    FUN_0049f4e0((int)&local_400 + uVar2 + 1,(int)&local_400 + uVar2,0x3ff - uVar2);
    iVar9 = *(int *)(param_1 + 0x530);
    *(char *)((int)&local_400 + iVar9) = (char)param_2;
    *(int *)(param_1 + 0x530) = iVar9 + 1;
LAB_004183dd:
    puVar11 = &local_400;
LAB_004183e4:
    FUN_00414b80(param_1,puVar11,0);
    break;
  case 0xd:
    FUN_00440550(0x46);
    DAT_004d8bd0 = DAT_004d8bd0 | 8;
    FUN_004151a0(param_1,0x49,0,*(undefined4 *)(param_1 + 0x1c));
    FUN_004151a0(*(undefined4 *)(param_1 + 8),0xbb9,*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x4d4));
    if ((*(uint *)(param_1 + 0x52c) & 0x10000) != 0) {
      uVar4 = FUN_004174e0(*(undefined4 *)(param_1 + 0x4d4),0);
      *(undefined4 *)(param_1 + 0x4d4) = uVar4;
      break;
    }
    pcVar10 = *(char **)(param_1 + 0x4d4);
    if (pcVar10 == (char *)0x0) break;
    pcVar3 = (char *)(*(uint *)(param_1 + 0x52c) & 0x20000);
    goto LAB_004182e4;
  case 0x1b:
    FUN_00440550(0x47);
    FUN_00414b80(param_1,&DAT_004d87d0,*(undefined4 *)(param_1 + 0x4d8));
    DAT_004d8bd0 = DAT_004d8bd0 | 8;
    FUN_004151a0(*(undefined4 *)(param_1 + 8),0xbba,*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x4d4));
    break;
  case 0x23:
    pcVar10 = *(char **)(param_1 + 0x4d4);
    pcVar3 = pcVar10;
LAB_004182e4:
    if (pcVar3 != (char *)0x0) {
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      *(uint *)(param_1 + 0x530) = ~uVar5 - 1;
    }
    break;
  case 0x24:
    *(undefined4 *)(param_1 + 0x530) = 0;
    break;
  case 0x25:
    if (*(int *)(param_1 + 0x530) != 0) {
      *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + -1;
    }
    break;
  case 0x27:
    if (*(char **)(param_1 + 0x4d4) != (char *)0x0) {
      uVar5 = 0xffffffff;
      pcVar10 = *(char **)(param_1 + 0x4d4);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (*(uint *)(param_1 + 0x530) < ~uVar5 - 1) {
        *(uint *)(param_1 + 0x530) = *(uint *)(param_1 + 0x530) + 1;
      }
    }
    break;
  case 0x2e:
    if (*(int *)(param_1 + 0x530) == 0) {
      if (*(char **)(param_1 + 0x4d4) == (char *)0x0) break;
      iVar9 = -1;
      pcVar10 = *(char **)(param_1 + 0x4d4);
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (iVar9 == -2) break;
    }
    *(undefined4 *)(param_1 + 0x530) = 0;
    puVar11 = (undefined4 *)0x0;
    goto LAB_004183e4;
  }
  iVar6 = FUN_00418680(*(undefined4 *)(param_1 + 0x4d4),*(undefined4 *)(param_1 + 0x4dc),0,
                       *(undefined4 *)(param_1 + 0x530));
  iVar9 = *(int *)(param_1 + 0x24);
  iVar7 = FUN_0042de30(&DAT_004b51b8,(&DAT_00e99720)[*(int *)(param_1 + 0x4dc)]);
  iVar8 = FUN_0042df70(&DAT_004b6668,(&DAT_00e99720)[*(int *)(param_1 + 0x4dc)]);
  FUN_00411740(iVar7 * 5 + iVar6 + iVar9,
               (((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) + 1 >> 1) -
               ((iVar8 << 1) >> 1)) + *(int *)(param_1 + 0x28),1,iVar8 << 1);
  return;
}

