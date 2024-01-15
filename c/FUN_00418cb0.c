#include "prototype.h"


void FUN_00418cb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = param_1;
  uVar5 = 0;
  uVar1 = *(uint *)(param_1 + 0x4f0);
  local_18 = 0;
  if (uVar1 == 0) {
    return;
  }
  bVar6 = (uVar1 & 0x20000) != 0;
  if (bVar6) {
    uVar5 = 0x200000;
  }
  if ((uVar1 & 0x40000) != 0) {
    uVar5 = uVar5 | 0x400000;
  }
  if ((uVar1 & 0x200000) == 0) {
    if ((uVar1 & 0x400000) == 0) {
      if ((uVar1 & 0x800000) == 0) {
        if ((uVar1 & 0x1010000) == 0) {
          if ((uVar1 & 0x80000) == 0) {
            iVar3 = param_2;
            iVar4 = param_2;
            if ((uVar1 & 0x100000) != 0) {
              local_18 = -0x14;
              if (param_2 == 0) {
                local_1c = 0x7d1;
                iVar3 = 2000;
                iVar4 = 2000;
              }
              else {
                local_1c = 0x7d3;
                iVar3 = 0x7d2;
                iVar4 = 0x7d2;
              }
            }
          }
          else {
            local_18 = -7;
            if (param_2 == 0) {
              local_1c = 0x7d5;
              iVar3 = 0x7d4;
              iVar4 = 0x7d4;
            }
            else {
              local_1c = 0x7d7;
              iVar3 = 0x7d6;
              iVar4 = 0x7d6;
            }
          }
        }
        else {
          local_18 = (-(uint)bVar6 & 0xc) - 0x1a;
          if (param_2 == 0) {
            local_1c = 0x7d9;
            iVar3 = (-(uint)((uVar1 & 0x1000000) != 0) & 6) + 0x7d8;
            iVar4 = 0x7da;
          }
          else {
            local_1c = 0x7dc;
            iVar3 = 0x7db;
            iVar4 = 0x7dd;
          }
        }
        FUN_00417120(iVar3,&local_20,&param_1);
        FUN_00417120(iVar4,&local_14,&param_1);
        local_10 = *(int *)(iVar2 + 0x24);
        local_c = *(int *)(iVar2 + 0x28);
        local_8 = local_20 + -1 + local_10;
        local_4 = param_1 + -1 + local_c;
        FUN_00412fb0(iVar2,0,iVar3,&local_10,1,uVar5);
        iVar3 = local_18;
        FUN_00419030(iVar2,0,0,local_18);
        local_10 = local_20 + *(int *)(iVar2 + 0x24);
        local_c = *(int *)(iVar2 + 0x28);
        local_8 = *(int *)(iVar2 + 0x2c) - local_14;
        local_4 = param_1 + -1 + local_c;
        FUN_00412fb0(iVar2,1,local_1c,&local_10,1,uVar5);
        FUN_00419030(iVar2,1,0,iVar3);
        local_8 = *(int *)(iVar2 + 0x2c);
        local_10 = (local_8 - local_14) + 1;
        local_c = *(int *)(iVar2 + 0x28);
        local_4 = param_1 + -1 + local_c;
        FUN_00412fb0(iVar2,2,iVar4,&local_10,1,uVar5 | 0x400000);
        FUN_00419030(iVar2,2,0,iVar3);
        FUN_00414e30(iVar2,param_2);
        return;
      }
      FUN_00417120(0xbc3,&local_20,&param_1);
      local_10 = *(int *)(iVar2 + 0x24);
      local_c = *(int *)(iVar2 + 0x28);
      local_8 = local_20 + -1 + local_10;
      local_4 = param_1 + -1 + local_c;
      uVar7 = 0xbc3;
    }
    else {
      FUN_00417120(0xbc1,&local_20,&param_1);
      local_10 = *(int *)(iVar2 + 0x24);
      local_c = *(int *)(iVar2 + 0x28);
      local_8 = local_20 + -1 + local_10;
      local_4 = param_1 + -1 + local_c;
      uVar7 = 0xbc1;
    }
    FUN_00412fb0(iVar2,0,uVar7,&local_10,1,uVar5);
    uVar7 = 0xfffffffc;
  }
  else {
    FUN_00417120(0x3f8,&local_20,&param_1);
    local_10 = *(int *)(iVar2 + 0x24);
    local_c = *(int *)(iVar2 + 0x28);
    local_8 = local_20 + -1 + local_10;
    local_4 = param_1 + -1 + local_c;
    FUN_00412fb0(iVar2,0,0x3f8,&local_10,1,uVar5);
    uVar7 = 0;
  }
  FUN_00419030(iVar2,0,0,uVar7);
  FUN_00414e30(iVar2,param_2);
  return;
}

