#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00433680(int param_1)

{
  if (param_1 != 0) {
    _DAT_0050c0d0 = 0;
  }
  return;
}



void FUN_004336a0(void)

{
  if (DAT_0050c454 == 0) {
    FUN_00454d40(0,1);
  }
  else if (*(int *)(DAT_0050c454 + 8) != 1) {
    FUN_00454d40(DAT_0050c454,1);
    return;
  }
  return;
}



void FUN_004336d0(undefined4 param_1)

{
  if (DAT_0050c454 != 0) {
    FUN_00454d40(DAT_0050c454,param_1);
  }
  return;
}



void FUN_004336f0(undefined4 param_1)

{
  DAT_0050c454 = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00433700(void)

{
  if (DAT_0050c454 != 0) {
    _DAT_004bfec8 = *(undefined4 *)(DAT_0050c454 + 8);
  }
  DAT_004bfecc = 0xffffffff;
  return;
}



void FUN_00433720(void)

{
  FUN_00454d40(DAT_0050c454,9);
  DAT_004d6b6c = 1;
  return;
}



void FUN_00433740(void)

{
  FUN_00433700();
  FUN_00454d40(DAT_0050c454,0xc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00433760(void)

{
  undefined4 uVar1;

  if (DAT_004d5e00 != 0) {
    uVar1 = FUN_00414d90(0,0x186b8);
    FUN_00414e60(uVar1,0);
    FUN_00411820(0x30d41);
    uVar1 = FUN_00414d90(0,0x30d41);
    FUN_00414e60(uVar1,0);
    _DAT_00ea0180 = 0;
  }
  DAT_004bfedc = 0xffffffff;
  DAT_0050c944 = 0xffffffff;
  return;
}



void FUN_004337d0(void)

{
  DAT_0050c478 = 5;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004337e0(int *param_1,undefined4 param_2,int param_3,float param_4,float param_5,
                 float param_6,float param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  float local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  float local_1d4 [3];
  float local_1c8 [3];
  undefined local_1bc [12];
  undefined local_1b0 [12];
  undefined local_1a4 [16];
  undefined local_194 [16];
  undefined local_184 [16];
  undefined local_174 [8];
  float local_16c;
  float local_164;
  float local_160;
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [32];
  undefined local_118 [12];
  undefined local_10c [12];
  float local_100 [4];
  float local_f0;
  float local_ec;
  undefined local_e0 [48];
  undefined local_b0 [16];
  undefined local_a0 [48];
  undefined local_70 [16];
  undefined local_60 [64];
  undefined local_20 [32];

  if (param_1 != (int *)0x0) {
    iVar4 = param_1[0x3c];
    if (param_8 != 0) {
      local_1e4 = 0.0;
      do {
        fVar2 = local_1e4;
        FUN_0042f380(((float)(int)local_1e4 * 0.01 - -0.1) * (float)_DAT_00e22a38 * 360.0,
                     local_100 + (int)local_1e4,local_20 + (int)local_1e4 * 4);
        local_1e4 = (float)((int)fVar2 + 1);
      } while ((uint)local_1e4 < 8);
    }
    if (param_3 != 0) {
      fVar2 = *(float *)(&DAT_004c271c + iVar4 * 0x34);
      if ((fVar2 < 0.3) || (5.0 < fVar2)) {
        fVar2 = 1.0;
      }
      param_4 = fVar2 * param_4;
      param_5 = fVar2 * param_5;
      param_6 = fVar2 * param_6;
    }
    FUN_00481b30(param_1[5],&DAT_004c0088);
    FUN_00481b30(param_1[1],&DAT_004c0098);
    FUN_00481b30(param_1[2],&DAT_004c0098);
    FUN_00481b30(param_1[3],&DAT_004c0098);
    FUN_00481b30(param_1[4],&DAT_004c0098);
    if (param_1[0x3e] != 0) {
      puVar1 = (uint *)(param_1[0x3e] + 0x10);
      *puVar1 = *puVar1 | 1;
    }
    if (param_1[2] != 0) {
      puVar1 = (uint *)(param_1[2] + 0x10);
      *puVar1 = *puVar1 | 1;
    }
    if (param_1[4] != 0) {
      puVar1 = (uint *)(param_1[4] + 0x10);
      *puVar1 = *puVar1 | 1;
    }
    FUN_0044bb10(local_60,param_2);
    FUN_00431450(local_60,param_4,param_5,param_6,local_60);
    iVar3 = *param_1;
    if (iVar3 != 0) {
      FUN_00431740(iVar3,0);
      FUN_00431a50(iVar3,2,3,0x10,2);
    }
    if ((((byte)DAT_0050c048 & 0x80) == 0) || ((DAT_00e98e94 & 0x400) == 0)) {
      iVar3 = param_1[1];
      if (iVar3 != 0) {
        FUN_0044bb10(local_1a4,local_60);
        FUN_0042f7d0(&local_164,&DAT_004c7094 + iVar4 * 0x6c);
        FUN_00430980(&local_1f0,&local_164,local_1a4);
        FUN_0042f830(local_174,local_174,&local_1f0);
        if (param_8 != 0) {
          FUN_0042fa80(local_174,local_174,local_100[3] * 0.2,local_184);
          FUN_0042f7d0(&local_1f0,local_194);
          FUN_0042f9b0(&local_1f0);
          FUN_00431390(local_1a4,local_100[1] * 5.0,local_1f0,local_1ec,local_1e8,local_1a4);
        }
        FUN_00431640(iVar3,local_1a4);
        FUN_00431a50(iVar3,2,3,0x10,2);
        iVar3 = param_1[3];
        if (iVar3 != 0) {
          FUN_0042f7d0(&local_164,&DAT_004c7a40);
          FUN_00430980(&local_1f0,&local_164,local_60);
          FUN_0042f830(local_174,local_174,&local_1f0);
          if (param_8 != 0) {
            FUN_0042fa80(local_174,local_174,local_100[3] * 0.2,local_184);
            FUN_0042f7d0(&local_1f0,local_194);
            FUN_0042f9b0(&local_1f0);
            FUN_00431390(local_1a4,local_100[1] * 5.0,local_1f0,local_1ec,local_1e8,local_1a4);
          }
          FUN_00431640(iVar3,local_1a4);
          FUN_00431a50(iVar3,2,3,0x10,2);
        }
        iVar3 = param_1[0x3e];
        if (iVar3 != 0) {
          FUN_0042f7d0(&local_1f0,local_174);
          FUN_004310b0(local_1a4,param_4,param_5,param_6);
          FUN_0042f7d0(local_174,&local_1f0);
          local_16c = param_7;
          FUN_00431450(local_1a4,0x3b83126f,0x3b83126f,0x3b83126f,local_1a4);
          FUN_00431640(iVar3,local_1a4);
          FUN_00431a50(iVar3,2,3,0x10,2);
        }
      }
      iVar3 = param_1[2];
      if (iVar3 != 0) {
        FUN_0044bb10(local_1a4,local_60);
        FUN_0042f7d0(&local_164,&DAT_004c7094 + iVar4 * 0x6c);
        local_164 = -local_164;
        FUN_00430980(&local_1f0,&local_164,local_1a4);
        FUN_0042f830(local_174,local_174,&local_1f0);
        if (param_8 != 0) {
          FUN_0042fa80(local_174,local_174,local_f0 * 0.2,local_184);
          FUN_0042f7d0(&local_1f0,local_194);
          FUN_0042f9b0(&local_1f0);
          FUN_00431390(local_1a4,local_100[2] * 5.0,local_1f0,local_1ec,local_1e8,local_1a4);
        }
        FUN_00431640(iVar3,local_1a4);
        FUN_00431a50(iVar3,2,3,0x10,2);
        iVar3 = param_1[4];
        if (iVar3 != 0) {
          FUN_0042f7d0(&local_164,&DAT_004c7a40);
          local_164 = -local_164;
          FUN_00430980(&local_1f0,&local_164,local_60);
          FUN_0042f830(local_174,local_174,&local_1f0);
          if (param_8 != 0) {
            FUN_0042fa80(local_174,local_174,local_100[2] * 0.2,local_184);
            FUN_0042f7d0(&local_1f0,local_194);
            FUN_0042f9b0(&local_1f0);
            FUN_00431390(local_1a4,local_100[0] * 5.0,local_1f0,local_1ec,local_1e8,local_1a4);
          }
          FUN_00431640(iVar3,local_1a4);
          FUN_00431a50(iVar3,2,3,0x10,2);
        }
        iVar3 = param_1[0x3f];
        if (iVar3 != 0) {
          FUN_0042f7d0(&local_1f0,local_174);
          FUN_004310b0(local_1a4,param_4,param_5,param_6);
          FUN_0042f7d0(local_174,&local_1f0);
          local_16c = param_7;
          FUN_00431450(local_1a4,0x3b83126f,0x3b83126f,0x3b83126f,local_1a4);
          FUN_00431640(iVar3,local_1a4);
          FUN_00431a50(iVar3,2,3,0x10,2);
        }
      }
      iVar3 = param_1[5];
      if (iVar3 != 0) {
        FUN_0044bb10(local_1a4,local_60);
        FUN_0042f7d0(&local_164,&DAT_004c7088 + iVar4 * 0x6c);
        FUN_00430980(&local_1f0,&local_164,local_1a4);
        FUN_0042f830(local_174,local_174,&local_1f0);
        if (param_8 != 0) {
          local_1e4 = (float)((char)(&DAT_004c2724)[iVar4 * 0x34] * 10);
          local_16c = param_6 * 1.5 + (float)(int)local_1e4 + param_7;
          FUN_0042fa80(local_174,local_174,local_ec * 0.1,local_184);
          FUN_0042f7d0(&local_1f0,local_194);
          FUN_0042f9b0(&local_1f0);
          FUN_00431390(local_1a4,local_100[1] * 10.0,local_1f0,local_1ec,local_1e8,local_1a4);
        }
        FUN_00431640(iVar3,local_1a4);
        FUN_00431a50(iVar3,2,3,0x10,2);
        if (local_160 == 0.0) {
          if (param_1[1] != 0) {
            FUN_00431640(param_1[1],local_1a4);
          }
          if (param_1[2] != 0) {
            FUN_00431640(param_1[2],local_1a4);
          }
        }
        iVar3 = param_1[0x40];
        if (iVar3 != 0) {
          FUN_0042f7d0(&local_1f0,local_174);
          FUN_004310b0(local_1a4,param_4,param_5,param_6);
          FUN_0042f7d0(local_174,&local_1f0);
          local_16c = param_7;
          FUN_00431450(local_1a4,0x3b83126f,0x3b83126f,0x3b83126f,local_1a4);
          FUN_00431640(iVar3,local_1a4);
          FUN_00431a50(iVar3,2,3,0x10,2);
        }
      }
      FUN_0046f2c0(0,param_1,param_9,param_10);
      if (param_1[6] != 0) {
        FUN_00431a50(param_1[6],2,0xfffffffc,0x10,3);
      }
      if (param_1[7] != 0) {
        FUN_00431a50(param_1[7],2,0xfffffffc,0x10,3);
      }
      if (param_1[8] != 0) {
        FUN_00431a50(param_1[8],2,0xfffffffc,0x10,3);
      }
      if (param_1[9] != 0) {
        FUN_00431a50(param_1[9],2,0xfffffffc,0x10,3);
      }
      if (param_1[10] != 0) {
        FUN_00431a50(param_1[10],2,0xfffffffc,0x10,3);
      }
      if (param_1[0xb] != 0) {
        FUN_00431a50(param_1[0xb],2,0xfffffffc,0x10,3);
      }
      if (param_1[0xc] != 0) {
        FUN_00431a50(param_1[0xc],2,0xfffffffc,0x10,3);
      }
      if (param_1[0xd] != 0) {
        FUN_00431a50(param_1[0xd],2,0xfffffffc,0x10,3);
      }
      if (0 < DAT_0050c478) {
        DAT_0050c478 = DAT_0050c478 + -1;
      }
      if (param_1[10] != 0) {
        FUN_004316a0(param_1[5],local_e0);
        FUN_0042f7d0(&local_1e0,local_b0);
        FUN_004316a0(param_1[1],local_a0);
        FUN_0042f7d0(local_1bc,local_70);
        FUN_0042f7d0(local_1d4,&DAT_004c70ac + iVar4 * 0x6c);
        FUN_00430980(local_1d4,local_1d4,local_e0);
        FUN_0042f830(&local_1e0,local_1d4,&local_1e0);
        FUN_0042f7d0(local_1c8,&DAT_004c70b8 + iVar4 * 0x6c);
        FUN_00430980(local_1c8,local_1c8,local_a0);
        FUN_0042f830(local_1bc,local_1c8,local_1bc);
        FUN_0042f860(local_1b0,&local_1e0,local_1bc);
        fVar5 = (float10)FUN_0042f8c0(local_1b0);
        local_1e4 = (float)fVar5;
        FUN_0042f9b0(local_1b0);
        FUN_00431100(local_158,local_1e0,local_1dc,local_1d8);
        FUN_0042f7d0(local_148,local_1b0);
        FUN_0042f7b0(local_138,0,0,0x3f800000);
        FUN_0042f9f0(local_158,local_148,local_138);
        FUN_0042f9f0(local_138,local_158,local_148);
        FUN_00431450(local_158,param_4 * 0.004,local_1e4 * 0.01,param_6 * 0.004,local_158);
        FUN_00431640(param_1[10],local_158);
        if (0 < DAT_0050c478) {
          FUN_0042f7b0(local_10c,0,0,0);
          FUN_0042f7b0(local_118,0,0,0);
          local_1f4 = 0x3fa66666;
          if (param_8 == 0) {
            local_1f4 = 0x3f000000;
          }
          FUN_00481c30(param_1[10],local_10c,local_118,local_1f4,0x3f800000,0,0x42480000,0);
        }
        if (param_1[10] != 0) {
          FUN_00431a50(param_1[10],2,3,0x10,2);
        }
      }
      if (param_1[0xb] != 0) {
        FUN_004316a0(param_1[5],local_e0);
        FUN_0042f7d0(&local_1e0,local_b0);
        FUN_004316a0(param_1[2],local_a0);
        FUN_0042f7d0(local_1bc,local_70);
        FUN_0042f7d0(local_1d4,&DAT_004c70ac + iVar4 * 0x6c);
        local_1d4[0] = -local_1d4[0];
        FUN_00430980(local_1d4,local_1d4,local_e0);
        FUN_0042f830(&local_1e0,local_1d4,&local_1e0);
        FUN_0042f7d0(local_1c8,&DAT_004c70b8 + iVar4 * 0x6c);
        local_1c8[0] = -local_1c8[0];
        FUN_00430980(local_1c8,local_1c8,local_a0);
        FUN_0042f830(local_1bc,local_1c8,local_1bc);
        FUN_0042f860(local_1b0,&local_1e0,local_1bc);
        fVar5 = (float10)FUN_0042f8c0(local_1b0);
        local_1e4 = (float)fVar5;
        FUN_0042f9b0(local_1b0);
        FUN_00431100(local_158,local_1e0,local_1dc,local_1d8);
        FUN_0042f7d0(local_148,local_1b0);
        FUN_0042f7b0(local_138,0,0,0x3f800000);
        FUN_0042f9f0(local_158,local_148,local_138);
        FUN_0042f9f0(local_138,local_158,local_148);
        FUN_00431450(local_158,param_4 * 0.004,local_1e4 * 0.01,param_6 * 0.004,local_158);
        FUN_00431640(param_1[0xb],local_158);
        if (0 < DAT_0050c478) {
          FUN_0042f7b0(local_10c,0,0,0);
          FUN_0042f7b0(local_118,0,0,0);
          local_1f4 = 0x3fa66666;
          if (param_8 == 0) {
            local_1f4 = 0x3f000000;
          }
          FUN_00481c30(param_1[0xb],local_10c,local_118,local_1f4,0x3f800000,0,0x42480000,0);
        }
        if (param_1[0xb] != 0) {
          FUN_00431a50(param_1[0xb],2,3,0x10,2);
        }
      }
      if (param_1[0xc] != 0) {
        FUN_004316a0(param_1[5],local_e0);
        FUN_0042f7d0(&local_1e0,local_b0);
        FUN_004316a0(param_1[3],local_a0);
        FUN_0042f7d0(local_1bc,local_70);
        FUN_0042f7d0(local_1d4,&DAT_004c70ac + iVar4 * 0x6c);
        FUN_00430980(local_1d4,local_1d4,local_e0);
        FUN_0042f830(&local_1e0,local_1d4,&local_1e0);
        FUN_0042f7d0(local_1c8,&DAT_004c70b8 + iVar4 * 0x6c);
        FUN_00430980(local_1c8,local_1c8,local_a0);
        FUN_0042f830(local_1bc,local_1c8,local_1bc);
        FUN_0042f860(local_1b0,&local_1e0,local_1bc);
        fVar5 = (float10)FUN_0042f8c0(local_1b0);
        local_1e4 = (float)fVar5;
        FUN_0042f9b0(local_1b0);
        FUN_00431100(local_158,local_1e0,local_1dc,local_1d8);
        FUN_0042f7d0(local_148,local_1b0);
        FUN_0042f7b0(local_138,0,0,0x3f800000);
        FUN_0042f9f0(local_158,local_148,local_138);
        FUN_0042f9f0(local_138,local_158,local_148);
        FUN_00431450(local_158,param_4 * 0.004,local_1e4 * 0.01,param_6 * 0.004,local_158);
        FUN_00431640(param_1[0xc],local_158);
        if (0 < DAT_0050c478) {
          FUN_0042f7b0(local_10c,0,0,0);
          FUN_0042f7b0(local_118,0,0,0);
          local_1f4 = 0x3fa66666;
          if (param_8 == 0) {
            local_1f4 = 0x3f000000;
          }
          FUN_00481c30(param_1[0xc],local_10c,local_118,local_1f4,0x3f800000,0,0x42480000,0);
        }
        if (param_1[0xc] != 0) {
          FUN_00431a50(param_1[0xc],2,3,0x10,2);
        }
      }
      if (param_1[0xd] != 0) {
        FUN_004316a0(param_1[5],local_e0);
        FUN_0042f7d0(&local_1e0,local_b0);
        FUN_004316a0(param_1[4],local_a0);
        FUN_0042f7d0(local_1bc,local_70);
        FUN_0042f7d0(local_1d4,&DAT_004c70ac + iVar4 * 0x6c);
        local_1d4[0] = -local_1d4[0];
        FUN_00430980(local_1d4,local_1d4,local_e0);
        FUN_0042f830(&local_1e0,local_1d4,&local_1e0);
        FUN_0042f7d0(local_1c8,&DAT_004c70b8 + iVar4 * 0x6c);
        local_1c8[0] = -local_1c8[0];
        FUN_00430980(local_1c8,local_1c8,local_a0);
        FUN_0042f830(local_1bc,local_1c8,local_1bc);
        FUN_0042f860(local_1b0,&local_1e0,local_1bc);
        fVar5 = (float10)FUN_0042f8c0(local_1b0);
        local_1e4 = (float)fVar5;
        FUN_0042f9b0(local_1b0);
        FUN_00431100(local_158,local_1e0,local_1dc,local_1d8);
        FUN_0042f7d0(local_148,local_1b0);
        FUN_0042f7b0(local_138,0,0,0x3f800000);
        FUN_0042f9f0(local_158,local_148,local_138);
        FUN_0042f9f0(local_138,local_158,local_148);
        FUN_00431450(local_158,param_4 * 0.004,local_1e4 * 0.01,param_6 * 0.004,local_158);
        FUN_00431640(param_1[0xd],local_158);
        if (0 < DAT_0050c478) {
          FUN_0042f7b0(local_10c,0,0,0);
          FUN_0042f7b0(local_118,0,0,0);
          local_1f4 = 0x3fa66666;
          if (param_8 == 0) {
            local_1f4 = 0x3f000000;
          }
          FUN_00481c30(param_1[0xd],local_10c,local_118,local_1f4,0x3f800000,0,0x42480000,0);
        }
        if (param_1[0xd] != 0) {
          FUN_00431a50(param_1[0xd],2,3,0x10,2);
        }
      }
      if (DAT_0050c478 == 4) {
        FUN_0043e6f0();
      }
      if (param_1[0x3b] != 0) {
        FUN_00431a50(param_1[0x3b],2,0xfffffffc,0x10,3);
      }
      if (((byte)DAT_0050c048 & 0x80) == 0) {
        return;
      }
      if ((DAT_00e98e94 & 0x1000) == 0) {
        return;
      }
      iVar4 = param_1[0x3b];
      if (iVar4 == 0) {
        return;
      }
    }
    else {
      iVar4 = *param_1;
      if (iVar4 != 0) {
        FUN_00431740(iVar4,1);
        FUN_00431a50(iVar4,2,3,0x10,2);
      }
      iVar4 = param_1[0x4a];
      if (iVar4 == 0) {
        return;
      }
      FUN_0044bb10(local_1a4,local_60);
      FUN_00431450(local_1a4,0x3b83126f,0x3b83126f,0x3b83126f,local_1a4);
      if (param_8 != 0) {
        FUN_0042fa80(local_174,local_174,local_100[3] * 0.2,local_184);
      }
      FUN_00431640(iVar4,local_1a4);
    }
    FUN_00431a50(iVar4,2,3,0x10,2);
  }
  return;
}



void FUN_00434ea0(int param_1)

{
  FUN_00457410(param_1,*(int *)(param_1 + 0x68) != 0,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00434ec0(int param_1)

{
  undefined4 uVar1;

  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    DAT_004c00a4 = DAT_004c00a4 + '\x01';
    if (DAT_004c00a4 == '\x02') {
      FUN_00426c80(0x74,6,0x3e800000,0x3f000000,0);
      _DAT_004c00a8 = 2.5;
    }
    _DAT_004c00ac = 255.0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0x15;
  DAT_004bfedc = 0xe;
  if (DAT_004c00a4 == '\0') {
    if (0 < DAT_004c00b0) {
      DAT_004c00b0 = DAT_004c00b0 + -1;
      goto LAB_004351ca;
    }
    uVar1 = FUN_00421360(s__SCREENTEXT_476__f4_sStar_Wars___004c08a4);
    FUN_00450560(0x1e,0x1e,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_477__f4_s_LucasArts_E_004c0868);
    FUN_00450560(0x1e,0x32,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_478__f4_s_Lucasfilm_L_004c0824);
    FUN_00450560(0x1e,0x3c,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_479__f4_sUsed_under_a_004c07f4);
    FUN_00450560(0x1e,0x46,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_600__f4_sThe_LucasAr_004c07bc);
    FUN_00450560(0x1e,0x5a,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_601__f4_strademark_o_004c0788);
    FUN_00450560(0x1e,100,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_481__f4_sused_under_a_004c0758);
    FUN_00450560(0x1e,0x6e,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_602__f4_sLicensed_to_004c072c);
    FUN_00450560(0x1e,0x82,uVar1);
    uVar1 = FUN_00421360(s__SCREENTEXT_482__sExpansion_Pak_e_004c0700);
    FUN_00450560(0x1e,0xb4,uVar1);
    FUN_00428660(0x52,0xb4,100);
    FUN_004286f0(0x52,0x3f800000,0x3f800000);
    uVar1 = 0x52;
  }
  else {
    if (DAT_004c00a4 != '\x01') {
      if (DAT_004c00a4 == '\x02') {
        if ((((DAT_0050c944 != 1) || (DAT_0050c484 != '\0')) &&
            (_DAT_004c00ac = _DAT_004c00ac - _DAT_00e22a50 * 255.0, _DAT_004c00ac < 0.0)) &&
           (_DAT_004c00ac = 0.0, DAT_0050c484 != '\0')) {
          FUN_00428740(0xffffff99,0,0,0,0xffffffff);
          FUN_00454d40(param_1,DAT_004bfedc);
          return;
        }
        FUN_00428660(0x56,0x34,0);
        FUN_004286f0(0x56,0x3f800000,0x3f800000);
        if (DAT_0050c484 == '\0') {
          FUN_004285d0(0x56,1);
        }
        uVar1 = __ftol();
        FUN_00428740(0x56,0xffffffff,0xffffffff,0xffffffff,uVar1);
        if (DAT_0050c944 != 1) {
          FUN_00428660(0x55,0x52,0xf);
          FUN_004286f0(0x55,0x3f800000,0x3f800000);
          FUN_004285d0(0x55,1);
          if (DAT_0050c484 == '\0') {
            uVar1 = 0xffffffff;
          }
          else {
            uVar1 = __ftol();
          }
          FUN_00428740(0x55,0xffffffff,0xffffffff,0xffffffff,uVar1);
        }
      }
      goto LAB_004351ca;
    }
    FUN_00428660(0x50,0x57,0x2e);
    FUN_004286f0(0x50,0x3f800000,0x3f800000);
    uVar1 = 0x50;
  }
  FUN_004285d0(uVar1,1);
LAB_004351ca:
  if ((DAT_0050c944 == 0) && (0.0 < _DAT_004c00a8)) {
    _DAT_004c00a8 = _DAT_004c00a8 - _DAT_00e22a50;
  }
  if (_DAT_004c00a8 <= 0.0) {
    _DAT_004c00a8 = 1.3;
    if (DAT_004c00a4 < '\x02') {
      DAT_0050c944 = 0xffffffff;
      return;
    }
    DAT_0050c484 = '\x01';
    _DAT_004c00ac = 255.0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00435240(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;

  DAT_0050c494 = DAT_0050c494 + 1;
  if (0x1e < DAT_0050c494) {
    DAT_0050c494 = 0;
  }
  uVar1 = FUN_00411480(1);
  FUN_00414e60(uVar1);
  iVar2 = FUN_00411800();
  if (iVar2 == 0) {
    FUN_00411820(0xb);
  }
  *(undefined *)(param_1 + 0x6c) = DAT_0050c450;
  if (DAT_0050c44c == 0) {
    if (DAT_0050c488 == 0) {
      DAT_0050c488 = 1;
      FUN_00459150(param_1);
    }
    if (DAT_004c4000 != 0) {
      DAT_004c4000 = 0;
      DAT_0050c944 = 1;
      FUN_00426910();
      _DAT_004c0014 = 30.0;
      _DAT_0050c21c = 0xffffffff;
      _DAT_0050c1d8 = 2.0;
      _DAT_0050c1dc = 1.0;
      _DAT_0050c1e0 = 1.0;
      _DAT_0050c220 = 0xffffffff;
      _DAT_0050c218 = 0xff020100;
      DAT_0050c490 = '\x03';
      iVar2 = FUN_00440de0(1);
      if (iVar2 != 0) {
        iVar2 = (int)DAT_0050c490;
        DAT_0050c490 = DAT_0050c490 + '\x01';
        (&DAT_0050c218)[iVar2] = 3;
      }
    }
    _DAT_0050c1d8 = _DAT_0050c1d8 - _DAT_00e22a50;
    if (_DAT_0050c1d8 <= 0.0) {
      _DAT_0050c1d8 = 0.0;
    }
    if ((_DAT_0050c1d8 <= 0.0) &&
       (_DAT_0050c1dc = _DAT_0050c1dc - _DAT_00e22a50, _DAT_0050c1dc <= 0.0)) {
      _DAT_0050c1dc = 0.0;
    }
    if ((_DAT_0050c1dc <= 0.5) &&
       (_DAT_0050c1e0 = _DAT_0050c1e0 - _DAT_00e22a50 * 5.0, _DAT_0050c1e0 <= 0.0)) {
      _DAT_0050c1e0 = 0.0;
    }
    if (DAT_0050c944 == 0) {
      if (_DAT_004c0014 <= 0.0) {
        _DAT_004c0014 = 30.0;
        *(undefined4 *)(param_1 + 100) = 2;
        DAT_0050c944 = -1;
      }
      FUN_004277f0(1,0);
    }
    iVar2 = FUN_00411810();
    if (((*(int *)(iVar2 + 0x1c) == 0xb) && (((byte)DAT_0050c908 & 4) != 0)) &&
       (((byte)DAT_0050c918 & 0x80) != 0)) {
      *(bool *)(param_1 + 0x51) = *(char *)(param_1 + 0x51) == '\0';
      DAT_0050c454 = param_1;
    }
    cVar5 = 'P';
    if (*(char *)(param_1 + 0x51) != '\0') {
      cVar5 = 'M';
    }
    if (*(int *)(iVar2 + 0x1c) != 0xb) {
      cVar5 = (*(byte *)(iVar2 + 0x1c) & 1) + 0x4e;
    }
    if (*(int *)(iVar2 + 0x1c) == 0x81) {
      cVar5 = 'N';
    }
    FUN_00428660(cVar5,0,0);
    FUN_004286f0(cVar5,0x3f000000,0x3f800000);
    if (*(char *)(param_1 + 0x51) != '\0') {
      FUN_004286f0(cVar5,0x3f800000,0x3f800000);
    }
    FUN_004285d0(cVar5,1);
    FUN_00428740(cVar5,0xffffffff,0xffffffff,0xffffffff,0xfffffffe);
    FUN_004287e0(cVar5,0x10000);
    FUN_004286f0(cVar5,0x3f800000,0x3f800000);
    uVar1 = FUN_00414d90(iVar2,0x272a);
    FUN_00414e60(uVar1,0);
    uVar3 = FUN_00414d90(iVar2,0x272b);
    FUN_00414e60(uVar3,0);
    if (*(char *)(param_1 + 0x51) == '\0') {
      uVar4 = __ftol();
      FUN_00428660(0x52,0xc,uVar4);
      FUN_004285d0(0x52,1);
      FUN_00428740(0x52,0xffffffff,0xffffffff,0xffffffff,0xfffffffe);
      FUN_004287e0(0x52,0x10000);
      uVar4 = __ftol();
      FUN_00428660(0x53,0x9b,uVar4);
      FUN_004285d0(0x53,1);
      FUN_00428740(0x53,0xffffffff,0xffffffff,0xffffffff,0xfffffffe);
      if (_DAT_0050c1d8 <= 0.0) {
        FUN_00414e60(uVar1,1);
      }
      FUN_004287e0(0x53,0x10000);
      FUN_00428660(0x51,0xe,0x33);
      FUN_004285d0(0x51,1);
      uVar1 = __ftol();
      FUN_00428740(0x51,0xffffffff,0xffffffff,0xffffffff,uVar1);
      FUN_004287e0(0x51,0x10000);
      uVar1 = __ftol(0x46);
      FUN_00428660(0x54,uVar1);
      FUN_004285d0(0x54,1);
      FUN_00428740(0x54,0xffffffff,0xffffffff,0xffffffff,0xfffffffe);
      if (_DAT_0050c1e0 <= 0.0) {
        FUN_00414e60(uVar3,1);
      }
      FUN_004287e0(0x54,0x10000);
    }
    return;
  }
  DAT_0050c44c = 0;
  *(undefined *)(param_1 + 0x70) = 1;
  DAT_004bfedc = 0x12;
  DAT_0050c944 = 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00435700(int param_1)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  undefined local_14c [48];
  undefined local_11c [16];
  undefined local_10c [12];
  undefined local_100 [256];

  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    FUN_0043e5b0(0x431d0000);
    DAT_0050c4a0 = 0;
    DAT_0050c49c = 0;
    DAT_00e295d4 = 0;
    DAT_004c00b4 = -1;
    DAT_004c00c0 = 1;
    FUN_0045bee0(param_1,0x24,0xffffffff,0);
    FUN_0043da10(param_1);
    iVar3 = 0;
    DAT_00e295d0 = 0;
    iVar7 = DAT_00e295d0;
    if (0 < DAT_00e295cc) {
      piVar5 = &DAT_00e99240;
      do {
        iVar7 = iVar3;
        if (*piVar5 == (int)(char)(&DAT_00e35a84)[*(char *)(param_1 + 0x6f) * 0x50]) break;
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 2;
        iVar7 = DAT_00e295d0;
      } while (iVar3 < DAT_00e295cc);
    }
    DAT_00e295d0 = iVar7;
    FUN_0045cf60((&DAT_00e99240)[DAT_00e295d0 * 2],0xffffffff,0,0xff);
    FUN_004584a0(param_1,0);
    DAT_00e99384 = 360.0;
  }
  bVar2 = false;
  if (DAT_0050c930 == 0) {
    DAT_0050c118 = (&DAT_00e99240)[DAT_00e295d0 * 2];
    if (DAT_00e295a0 <= 0.0) {
      if (DAT_0050c118 != -1) {
        fVar10 = 0.025 - (float)DAT_0050c118 * -0.05;
        FUN_0044b360(DAT_00e2afb8,fVar10,fVar10,fVar10,0,0,0);
      }
    }
    else {
      fVar10 = 0.025 - (float)(&DAT_00e99240)[DAT_00e295d4 * 2] * -0.05;
      FUN_0044b360(DAT_00e2afb8,fVar10,fVar10,fVar10,0,0,0);
      FUN_00457350(DAT_00e295d4);
    }
    if ((DAT_0050c49c == 5) && (fVar8 = (float10)FUN_00469b90(0xc0533333), fVar8 == (float10)0.0)) {
      FUN_00468fe0(0x1c,0);
      FUN_0044e560();
      if (DAT_004d5e00 == 0) {
        FUN_00454d40(param_1,DAT_004bfedc);
        return;
      }
      FUN_004118b0(0);
      return;
    }
    if (DAT_0050c49c == 0) {
      DAT_00e295ac = DAT_00e295ac - _DAT_00e22a50 * 3.3;
      if (DAT_00e295ac < 0.0) {
        DAT_00e295ac = 0.0;
      }
      if (DAT_004c00c0 != 0) {
        FUN_004550d0(param_1,0x42d20000,0x43070000);
      }
    }
    uVar4 = FUN_00421360(s__SCREENTEXT_525__c_sSelect_Vehic_004c08e4);
    FUN_00450560(0xa0,0x19,uVar4);
    uVar4 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)[DAT_0050c118 * 0xd]);
    uVar4 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)[DAT_0050c118 * 0xd],uVar4);
    uVar4 = FUN_00421360(s__c_s_s__s_004c08d8,uVar4);
    FUN_0049eb80(local_100,uVar4);
    FUN_00450530(0xa0,0x2a,0,0xffffffff,0,0xffffffff,local_100);
    uVar4 = FUN_0042de10(local_100,0);
    FUN_0042de10(local_100,0,0x2b,uVar4);
    uVar4 = __ftol();
    FUN_00440150(uVar4);
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 4;
    if ((DAT_00e295dc == 0) && (DAT_004c00b4 != (&DAT_00e99240)[DAT_00e295d4 * 2])) {
      bVar2 = true;
    }
    if ((DAT_0050c118 != -1) && ((DAT_00e2993c == 0 || (bVar2)))) {
      FUN_004258e0();
      FUN_0045ce90(3);
      DAT_00e99384 = 0.0;
      FUN_00454bc0(*(undefined4 *)(&DAT_004c2704 + DAT_0050c118 * 0x34),
                   *(undefined4 *)(&DAT_004c2708 + DAT_0050c118 * 0x34),0xf,0);
      if (DAT_00e2993c != 0) {
        FUN_004337d0();
        *(int *)(DAT_00e2993c + 0xf0) = DAT_0050c118;
        FUN_0045ce10(*(undefined4 *)(&DAT_004c2730 + DAT_0050c118 * 0x34),0x1c,2,
                     *(undefined4 *)(&DAT_004c2720 + DAT_0050c118 * 0x34));
      }
      DAT_004c00b4 = DAT_0050c118;
      FUN_00454c90();
      FUN_0043e620(param_1);
      FUN_0045cf60(DAT_0050c118,0xffffffff,0xffffffff,0xff);
    }
    if (DAT_0050c4a0 == 0) {
      DAT_0050c4a0 = 1;
    }
    DAT_00e99384 = DAT_00e99384 - _DAT_00e22a50 * -90.0;
    if (1800.0 < DAT_00e99384) {
      DAT_00e99384 = DAT_00e99384 - 1800.0;
    }
    if ((DAT_0050c49c == 1) && (fVar8 = (float10)FUN_00469b90(0xc0533333), fVar8 == (float10)0.0)) {
      DAT_0050c49c = 2;
    }
    DAT_004c00b8 = DAT_00e295a0 * 4.0;
    if (DAT_004c00b8 < 0.001) {
      DAT_004c00b8 = 0.001;
    }
    if ((DAT_00e2993c != 0) && (0.0 < DAT_00e295a0)) {
      FUN_0043e210();
      if (540.0 <= DAT_00e99384) {
        if (900.0 <= DAT_00e99384) {
          if ((DAT_00e99384 < 900.0) || (1440.0 <= DAT_00e99384)) {
            fVar8 = (float10)FUN_0045a420(DAT_00e99384 - 1440.0,0x43b40000);
            fVar10 = (float)-fVar8;
            uVar4 = 0;
            fVar9 = 100.08;
          }
          else {
            fVar10 = 0.0;
            uVar4 = 0;
            fVar8 = (float10)FUN_0045a420(DAT_00e99384 - 900.0,0x44070000,0,0);
            fVar9 = (float)((float10)280.08 - fVar8);
          }
        }
        else {
          fVar8 = (float10)FUN_0045a420(DAT_00e99384 - 540.0,0x43b40000);
          fVar10 = (float)((float10)180.0 - fVar8);
          uVar4 = 0x43340000;
          fVar9 = 100.08;
        }
      }
      else {
        fVar10 = 0.0;
        uVar4 = 0;
        fVar8 = (float10)FUN_0045a420(DAT_00e99384,0x44070000,0,0);
        fVar9 = (float)((float10)100.08 - fVar8);
      }
      FUN_00431020(local_14c,fVar9,uVar4,fVar10);
      FUN_0042f7d0(local_11c,&DAT_004c449c);
      DAT_004c00b8 = DAT_004c00b8 * 0.5;
      FUN_0042fac0(local_11c,0x3f000000,&DAT_004c449c,0x3f000000,&DAT_004c4490);
      FUN_004337e0(DAT_00e2993c,local_14c,1,DAT_004c00b8,DAT_004c00b8,DAT_004c00b8,0xc490a000,0,
                   0x3f800000,0x3f800000);
      if (*(int *)(DAT_00e2993c + 0xec) != 0) {
        FUN_00431a50(*(int *)(DAT_00e2993c + 0xec),2,3,0x10,2);
      }
    }
    if (DAT_0050c49c == 0) {
      iVar7 = (int)*(char *)(param_1 + 0x6f);
      if (iVar7 < iVar7 + 1) {
        puVar6 = &DAT_0050c918 + iVar7;
        do {
          iVar3 = DAT_00e295d0;
          if (DAT_0050c930 != 0) break;
          FUN_00469c30(iVar7,0x3f800000,1);
          if (iVar3 != DAT_00e295d0) {
            FUN_0045cf60((&DAT_00e99240)[DAT_00e295d0 * 2],0xffffffff,0,0xff);
          }
          if ((1.0 <= DAT_00e295a0) && (DAT_004d6b44 != 0)) {
            FUN_004118b0(0);
            FUN_00440550(0x4d);
            if (*(int *)(param_1 + 0xc) == 3) {
              DAT_004bfedc = 3;
              DAT_0050c49c = 1;
              return;
            }
            FUN_00440550(0x4d);
            if (*(char *)(param_1 + 0x6f) < '\x01') {
              DAT_0050c4a4 = 0;
              DAT_0050c49c = 1;
              DAT_004c00b4 = 0xffffffff;
              DAT_004bfedc = 1;
              DAT_0050c944 = 0xffffffff;
              FUN_0044e560();
              return;
            }
            DAT_0050c49c = 1;
            *(char *)(param_1 + 0x6f) = *(char *)(param_1 + 0x6f) + -1;
            DAT_004bfedc = 9;
            return;
          }
          if ((1.0 <= DAT_00e295a0) && (DAT_004d6b48 != 0)) {
            FUN_00440550(0x54);
            DAT_0050c49c = 1;
          }
          if ((*(byte *)puVar6 & 8) != 0) {
            FUN_00440550(0x54);
            DAT_004c00c0 = (uint)(DAT_004c00c0 == 0);
          }
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar7 < *(char *)(param_1 + 0x6f) + 1);
      }
      if (DAT_0050c49c == 1) {
        FUN_0043e5b0(*(undefined4 *)(&DAT_004c2720 + (&DAT_00e99240)[DAT_00e295d0 * 2] * 0x34));
        iVar7 = (int)*(char *)(param_1 + 0x6f);
        if (iVar7 < iVar7 + 1) {
          puVar6 = &DAT_00e35aa0 + iVar7 * 0x14;
          do {
            *(undefined *)(iVar7 + 0x73 + param_1) =
                 *(undefined *)(&DAT_00e99240 + DAT_00e295d0 * 2);
            iVar3 = DAT_0050c4a4;
            uVar1 = *(undefined *)(&DAT_00e99240 + DAT_00e295d0 * 2);
            *(undefined *)(puVar6 + -7) = uVar1;
            if (iVar3 < 4) {
              if (*(char *)(&DAT_00e364b4 + iVar3 * 0x14) == '\0') {
                *(undefined *)puVar6 = 1;
                puVar6[-2] = 400;
              }
              else {
                (&DAT_00e364d8)[iVar3 * 0x50] = uVar1;
              }
            }
            iVar3 = FUN_0041d6b0();
            if (iVar3 != 0) {
              FUN_0041dc30((&DAT_00e99240)[DAT_00e295d0 * 2]);
            }
            iVar7 = iVar7 + 1;
            puVar6 = puVar6 + 0x14;
          } while (iVar7 < *(char *)(param_1 + 0x6f) + 1);
        }
        FUN_0045cd50(param_1);
        if (*(int *)(param_1 + 0xc) != 3) {
          if ((*(char *)(&DAT_00e364b4 + DAT_0050c4a4 * 0x14) == '\0') && (DAT_0050c4a4 < 4)) {
            DAT_004bfedc = 2;
            return;
          }
          if (*(char *)(param_1 + 0x70) + -1 <= (int)*(char *)(param_1 + 0x6f)) {
            DAT_004bfedc = 0xc;
            FUN_0042f7d0(local_10c,&DAT_004c457c + *(char *)(param_1 + 0x50) * 0xc);
            FUN_004816b0();
            return;
          }
          *(char *)(param_1 + 0x6f) = *(char *)(param_1 + 0x6f) + '\x01';
          DAT_004bfedc = 9;
          return;
        }
        DAT_004bfedc = 3;
        return;
      }
      if (DAT_0050c49c == 2) {
        DAT_0050c49c = 3;
      }
    }
    else if (DAT_00e295a0 == 0.0) {
      DAT_0050c49c = DAT_0050c49c + 1;
      return;
    }
  }
  return;
}



void FUN_004360e0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined local_20;
  uint local_1c;
  undefined local_10;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined local_1;

  iVar2 = param_1;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_1 = 0;
  uVar3 = 0;
  uVar4 = (uint)param_2;
  iVar5 = uVar4 + 1;
  local_10 = DAT_004d55cc;
  do {
    if (iVar5 <= (int)uVar4) {
      return;
    }
    local_1c = 0;
    if ('\0' < (char)(&DAT_004bfee0)[uVar4]) {
      do {
        if (*(char *)(iVar2 + 0x6c) != '\0') {
          param_1._0_1_ = (byte)(local_1c << 1);
          uVar3 = (short)(&DAT_00e35a8a)[uVar4] >> ((byte)param_1 & 0x1f) & 3;
        }
        iVar8 = uVar4 * 7 + 99 + local_1c;
        iVar1 = local_1c * 0x23;
        FUN_004285d0(iVar8,1);
        FUN_00428660(iVar8,iVar1 + 0x37,0x5e);
        FUN_004286f0(iVar8,0x3f2aacda,0x3f2aacda);
        switch(uVar4) {
        case 0:
          uVar7 = __ftol();
          uVar13 = 0xffffffff;
          uVar12 = 0xffffffff;
          uVar11 = 0x32;
          break;
        case 1:
          uVar7 = __ftol();
          uVar13 = 0x3e;
          uVar12 = 0xffffffff;
          uVar11 = 0x44;
          break;
        case 2:
          uVar7 = __ftol();
          uVar13 = 0x11;
          uVar12 = 0xffffffbe;
          uVar11 = 0xffffffa3;
          break;
        case 3:
          uVar7 = __ftol();
          uVar13 = 0x20;
          uVar12 = 0x59;
          uVar11 = 0xffffff9d;
          break;
        default:
          goto switchD_00436239_caseD_4;
        }
        FUN_00428740(iVar8,uVar11,uVar12,uVar13,uVar7);
switchD_00436239_caseD_4:
        local_20 = (undefined)uVar4;
        iVar6 = FUN_00440aa0(iVar2,uVar4 & 0xff,local_1c & 0xff);
        if (iVar6 == 0) {
          uVar7 = __ftol();
          uVar13 = 0xffffff80;
          uVar12 = 0xffffff80;
          uVar11 = 0xffffff80;
LAB_004362e7:
          FUN_00428740(iVar8,uVar11,uVar12,uVar13,uVar7);
        }
        else if (uVar3 != 0) {
          uVar7 = __ftol();
          uVar13 = 0xffffffff;
          uVar12 = 0xffffffff;
          uVar11 = 0xffffffff;
          goto LAB_004362e7;
        }
        uVar10 = FUN_0049eb80(&local_10,s__f2_s_d_004c0940,local_1c + 1);
        uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if (*(char *)(iVar2 + 0x6c) == '\0') {
LAB_00436328:
          iVar8 = FUN_00440aa0(iVar2,CONCAT31((int3)((uint)uVar7 >> 8),local_20),local_1c & 0xff);
          if (iVar8 == 0) {
            uVar7 = __ftol(&local_10);
            FUN_00450530(iVar1 + 0x3c,0x6d,0xffffff80,0xffffff80,0xffffff80,uVar7);
            uVar7 = FUN_00421360(s__SCREENTEXT_585__f4_c_sRace_004c0924);
            uVar7 = __ftol(uVar7);
            uVar13 = 0xffffff80;
            uVar12 = 0xffffff80;
            uVar11 = 0xffffff80;
          }
          else {
            switch(uVar4) {
            case 0:
              uVar7 = __ftol(&local_10);
              FUN_00450530(iVar1 + 0x3c,0x6d,0x32,0xffffffff,0xffffffff,uVar7);
              uVar7 = FUN_00421360(s__SCREENTEXT_585__f4_c_sRace_004c0924);
              uVar7 = __ftol(uVar7);
              uVar13 = 0xffffffff;
              uVar12 = 0xffffffff;
              uVar11 = 0x32;
              break;
            case 1:
              uVar7 = __ftol(&local_10);
              FUN_00450530(iVar1 + 0x3c,0x6d,0x44,0xffffffff,0x3e,uVar7);
              uVar7 = FUN_00421360(s__SCREENTEXT_585__f4_c_sRace_004c0924);
              uVar7 = __ftol(uVar7);
              uVar13 = 0x3e;
              uVar12 = 0xffffffff;
              uVar11 = 0x44;
              break;
            case 2:
              uVar7 = __ftol(&local_10);
              FUN_00450530(iVar1 + 0x3c,0x6d,0xffffffa3,0xffffffbe,0x11,uVar7);
              uVar7 = FUN_00421360(s__SCREENTEXT_585__f4_c_sRace_004c0924);
              uVar7 = __ftol(uVar7);
              uVar13 = 0x11;
              uVar12 = 0xffffffbe;
              uVar11 = 0xffffffa3;
              break;
            case 3:
              uVar7 = __ftol(&local_10);
              FUN_00450530(iVar1 + 0x3c,0x6d,0xffffff9d,0x59,0x20,uVar7);
              uVar7 = FUN_00421360(s__SCREENTEXT_585__f4_c_sRace_004c0924);
              uVar7 = __ftol(uVar7);
              uVar13 = 0x20;
              uVar12 = 0x59;
              uVar11 = 0xffffff9d;
              break;
            default:
              goto switchD_0043639c_caseD_4;
            }
          }
          FUN_00450530(iVar1 + 0x43,0x6f,uVar11,uVar12,uVar13,uVar7);
        }
        else {
          uVar10 = FUN_00440a20(uVar4 & 0xff,local_1c & 0xff);
          uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if ((int)uVar10 != 0) goto LAB_00436328;
        }
switchD_0043639c_caseD_4:
        if (((*(char *)(iVar2 + 0x6c) != '\0') && (uVar3 == 0)) &&
           (iVar8 = FUN_00440a20(uVar4 & 0xff,local_1c & 0xff), iVar8 == 0)) {
          switch(uVar4) {
          case 0:
            uVar7 = FUN_00421360(s__SCREENTEXT_229__f4_s4th_004c0908);
            uVar7 = __ftol(uVar7);
            uVar13 = 0xffffffff;
            uVar12 = 0xffffffff;
            uVar11 = 0x32;
            break;
          case 1:
            uVar7 = FUN_00421360(s__SCREENTEXT_229__f4_s4th_004c0908);
            uVar7 = __ftol(uVar7);
            uVar13 = 0x3e;
            uVar12 = 0xffffffff;
            uVar11 = 0x44;
            break;
          case 2:
            uVar7 = FUN_00421360(s__SCREENTEXT_229__f4_s4th_004c0908);
            uVar7 = __ftol(uVar7);
            uVar13 = 0x11;
            uVar12 = 0xffffffbe;
            uVar11 = 0xffffffa3;
            break;
          case 3:
            uVar7 = FUN_00421360(s__SCREENTEXT_229__f4_s4th_004c0908);
            uVar7 = __ftol(uVar7);
            uVar13 = 0x20;
            uVar12 = 0x59;
            uVar11 = 0xffffff9d;
            break;
          default:
            goto switchD_0043654e_caseD_4;
          }
          FUN_00450530(iVar1 + 0x3a,0x6f,uVar11,uVar12,uVar13,uVar7);
        }
switchD_0043654e_caseD_4:
        iVar8 = uVar4 * 7 + 0x7f + local_1c;
        FUN_004285d0(iVar8,1);
        FUN_00428660(iVar8,iVar1 + 0x35,0x5c);
        FUN_004286f0(iVar8,0x3f2aacda,0x3f2aacda);
        uVar7 = __ftol();
        FUN_00428740(iVar8,0xffffffa3,0xffffffbe,0x11,uVar7);
        iVar6 = FUN_00440aa0(iVar2,uVar4 & 0xff,local_1c & 0xff);
        if (iVar6 == 0) {
          uVar7 = __ftol();
          FUN_00428740(iVar8,0xffffff80,0xffffff80,0xffffff80,uVar7);
        }
        if ((param_2 == *(char *)(iVar2 + 0x5e)) &&
           (uVar9 = FUN_00440af0(iVar2,DAT_00e295d0), local_1c == uVar9)) {
          FUN_004285d0(iVar8,0);
          FUN_004285d0(0x62,1);
          FUN_00428660(0x62,iVar1 + 0x32,0x59);
          FUN_004286f0(0x62,0x3f2aacda,0x3f2aacda);
          uVar7 = __ftol();
          FUN_00428740(0x62,0x32,0xffffffff,0xffffffff,uVar7);
        }
        local_1c = local_1c + 1;
      } while ((int)local_1c < (int)(char)(&DAT_004bfee0)[uVar4]);
    }
    uVar4 = uVar4 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004367c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6b [26];

  puVar2 = local_6b;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined *)puVar2 = 0;
  if (*(int *)(param_1 + 0xc) == 9) {
    (&DAT_00e35a84)[*(char *)(param_1 + 0x6f) * 0x50] = 0;
  }
  iVar1 = *(char *)(param_1 + 0x6f) * 0x50;
  if ((&DAT_00e35a81)[iVar1] == '\x01') {
    FUN_0044e530((int)(char)(&DAT_00e35a82)[iVar1],(int)*(char *)(param_1 + 0x6f));
  }
  FUN_0044e560();
  _DAT_004c0204 = 0xffffffff;
  puVar2 = &DAT_0050c4c0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_0050c4b8 = 0;
  _DAT_0050c4b4 = 0;
  FUN_00454d40(param_1,*(undefined4 *)(param_1 + 0xc));
  return;
}



void FUN_00436860(int param_1)

{
  if (DAT_004c4000 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (DAT_004bfedc == -1)) {
    FUN_00436fa0(param_1);
    return;
  }
  FUN_004368a0(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004368a0(int param_1)

{
  bool bVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  float10 fVar9;
  char *pcVar10;
  char local_71;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined local_60 [32];
  undefined local_40 [16];
  undefined local_30 [48];

  iVar8 = -1;
  _DAT_0050c480 = 0;
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    if (*(int *)(param_1 + 0xc) == 0xd) {
      *(undefined *)(param_1 + 0x5f) = 0;
    }
    FUN_0042f860(&local_6c,&DAT_00e298f0,&DAT_00e2af90);
    fVar9 = (float10)FUN_0042f8c0(&local_6c);
    DAT_0050c11c = (float)fVar9;
    FUN_0042f9b0(&local_6c);
    fVar9 = (float10)FUN_0042f560(-local_6c,local_68);
    DAT_0050c2ec = (float)fVar9;
    fVar9 = (float10)FUN_0042f3e0(local_64);
    DAT_0050c2e8 = (float)fVar9;
    if (DAT_0050c2ec < 0.0) {
      DAT_0050c2ec = DAT_0050c2ec - -360.0;
    }
    if (360.0 < DAT_0050c2ec) {
      DAT_0050c2ec = DAT_0050c2ec - 360.0;
    }
    if (DAT_0050c2e8 < -90.0) {
      DAT_0050c2e8 = DAT_0050c2e8 - -180.0;
    }
    if (90.0 < DAT_0050c2e8) {
      DAT_0050c2e8 = DAT_0050c2e8 - 180.0;
    }
    cVar7 = '\x01';
    _DAT_0050c308 = 0xffffff00;
    _DAT_0050c30c = 0xffffffff;
    _DAT_0050c310 = 0xffffffff;
    if (*(char *)(param_1 + 0x70) == '\x01') {
      _DAT_0050c308 = 0xffff0100;
      cVar7 = '\x02';
    }
    cVar3 = cVar7;
    if (*(char *)(param_1 + 0x6c) != '\0') {
      (&DAT_0050c308)[cVar7] = 2;
      (&DAT_0050c308)[(char)(cVar7 + '\x01')] = 3;
      cVar3 = cVar7 + '\x03';
      (&DAT_0050c308)[(char)(cVar7 + '\x02')] = 4;
      if ((byte)DAT_00e35aa0 < 4) {
        iVar6 = (int)cVar3;
        cVar3 = cVar7 + '\x04';
        (&DAT_0050c308)[iVar6] = 5;
      }
    }
    DAT_0050c524 = cVar3 + '\x01';
    (&DAT_0050c308)[cVar3] = 6;
  }
  uVar4 = FUN_00421360(s__SCREENTEXT_474__c_sMain_Menu_004c0a60);
  FUN_00450560(0xa0,0x19,uVar4);
  cVar7 = '\0';
  if ('\0' < DAT_0050c524) {
    do {
      switch((&DAT_0050c308)[cVar7]) {
      case 0:
        pcVar10 = s__SCREENTEXT_69__f4_sStart_Race_004c0a40;
        break;
      case 1:
        pcVar10 = s__SCREENTEXT_523__f4_sInspect_Veh_004c0a18;
        goto LAB_00436af1;
      case 2:
        pcVar10 = s__SCREENTEXT_524__f4_sVehicle_Upg_004c09f0;
        goto LAB_00436ac7;
      case 3:
        pcVar10 = s__SCREENTEXT_102__f4_sBuy_Parts_004c09d0;
        break;
      case 4:
        pcVar10 = s__SCREENTEXT_103__f4_sJunkyard_004c09b0;
        goto LAB_00436af1;
      case 5:
        pcVar10 = s__SCREENTEXT_587__f4_sBuy_Pit_Dro_004c098c;
LAB_00436ac7:
        uVar4 = FUN_00421360(pcVar10);
        goto LAB_00436aff;
      case 6:
        pcVar10 = s__SCREENTEXT_473__f4_sChange_Vehi_004c0968;
        break;
      case 7:
        pcVar10 = s__SCREENTEXT_73__f4_sOptions_004c094c;
LAB_00436af1:
        uVar4 = FUN_00421360(pcVar10);
        goto LAB_00436aff;
      default:
        goto switchD_00436a98_caseD_8;
      }
      uVar4 = FUN_00421360(pcVar10);
LAB_00436aff:
      FUN_0049eb80(local_60,uVar4);
switchD_00436a98_caseD_8:
      FUN_0043fce0(param_1,0x3c,0x50,10,(int)*(char *)(param_1 + 0x5f),(int)cVar7,local_60);
      cVar7 = cVar7 + '\x01';
    } while (cVar7 < DAT_0050c524);
  }
  local_71 = '\0';
  if ('\0' < *(char *)(param_1 + 0x70)) {
    do {
      iVar6 = (int)local_71;
      if (((&DAT_0050c918)[iVar6] & 0x8000) != 0) {
        cVar7 = *(char *)(param_1 + 0x5f) + '\x01';
        *(char *)(param_1 + 0x5f) = cVar7;
        if (DAT_0050c524 + -1 < (int)cVar7) {
          *(undefined *)(param_1 + 0x5f) = 0;
        }
        FUN_00440550(0x58);
      }
      if (((&DAT_0050c918)[iVar6] & 0x4000) != 0) {
        cVar7 = *(char *)(param_1 + 0x5f) + -1;
        *(char *)(param_1 + 0x5f) = cVar7;
        if (cVar7 < '\0') {
          *(char *)(param_1 + 0x5f) = DAT_0050c524 + -1;
        }
        FUN_00440550(0x58);
      }
      iVar5 = FUN_00485880(0x38,0);
      if ((((iVar5 != 0) || (iVar5 = FUN_00485880(0xb8,0), iVar5 != 0)) ||
          (iVar5 = FUN_00485880(0x2a,0), iVar5 != 0)) || (iVar5 = FUN_00485880(0x36,0), iVar5 != 0))
      {
        fVar2 = DAT_0050c11c;
        bVar1 = false;
        DAT_0050c930 = 0;
        if ((0.1 < (float)(&DAT_00e98ea0)[iVar6]) || ((float)(&DAT_00e98ea0)[iVar6] < -0.1)) {
          bVar1 = true;
          DAT_0050c2ec = DAT_0050c2ec - (float)(&DAT_00e98ea0)[iVar6] * _DAT_00e22a50 * 105.0;
        }
        if ((0.1 < (float)(&DAT_00e98e80)[iVar6]) || ((float)(&DAT_00e98e80)[iVar6] < -0.1)) {
          DAT_0050c2e8 = DAT_0050c2e8 - (float)(&DAT_00e98e80)[iVar6] * _DAT_00e22a50 * -67.5;
          if (45.0 < DAT_0050c2e8) {
            DAT_0050c2e8 = 45.0;
          }
          if (DAT_0050c2e8 < -45.0) {
            DAT_0050c2e8 = -45.0;
          }
          bVar1 = true;
        }
        if (bVar1) {
          FUN_00431020(local_40,DAT_0050c2ec,DAT_0050c2e8,0);
          FUN_0042fa80(&DAT_00e2af90,&DAT_00e298f0,-DAT_0050c11c,local_30);
          if (DAT_0050c11c != fVar2) {
            fVar9 = (float10)FUN_0042f950(&DAT_00e298f0,&DAT_00e2af90);
            DAT_0050c11c = (float)fVar9;
          }
          FUN_0044bb10(&DAT_00e2ae80,&DAT_00e298c0);
        }
      }
      if (DAT_004d6b44 != 0) {
        FUN_00440550(0x4d);
        iVar8 = 3;
        DAT_004bfedc = 0xd;
      }
      if (DAT_004d6b48 != 0) {
        FUN_00440550(0x54);
        if (*(char *)(param_1 + 0x5f) == '\0') {
          iVar8 = -1;
          FUN_0040a120(0);
          FUN_00409d70(0xffffffff);
          FUN_00409d70(0);
          iVar6 = *(char *)(param_1 + 0x5d) * 0xc;
          FUN_00427d90((int)(char)(&DAT_004bfef1)[iVar6],(int)(char)(&DAT_004bfef0)[iVar6]);
          iVar6 = FUN_0041d6b0();
          if ((iVar6 == 0) || (iVar6 = FUN_0041d6c0(), iVar6 != 0)) {
            if ((*(char *)(param_1 + 0x6c) != '\0') &&
               (((DAT_00e35a84 != (&DAT_004bfef2)[*(char *)(param_1 + 0x5d) * 0xc] &&
                 (_DAT_00ec8854 != 0.0)) && (DAT_0050c458 == 0)))) {
              DAT_004bfedc = 0xf;
            }
            DAT_0050c944 = 0xffffffff;
            iVar8 = FUN_004409d0(&DAT_00e35a60,&DAT_004c0948);
            if ((iVar8 != 0) && (((byte)DAT_0050c908 & 4) != 0)) {
              FUN_00440c10(param_1);
            }
            FUN_0041e660();
            return;
          }
        }
        else {
          switch((&DAT_0050c308)[*(char *)(param_1 + 0x5f)]) {
          case 1:
            DAT_004bfedc = 8;
            iVar8 = 2;
            *(undefined4 *)(param_1 + 0x10) = 0;
            FUN_0045a3e0();
            break;
          case 2:
            DAT_004bfedc = 8;
            iVar8 = 2;
            *(undefined4 *)(param_1 + 0x10) = 1;
            FUN_0045a3e0();
            break;
          case 3:
            DAT_004bfedc = 7;
            iVar8 = 0;
            *(undefined4 *)(param_1 + 0x10) = 0;
            break;
          case 4:
            iVar8 = 1;
            DAT_004bfedc = 4;
            break;
          case 5:
            DAT_004bfedc = 7;
            iVar8 = 0;
            *(undefined4 *)(param_1 + 0x10) = 1;
            break;
          case 6:
            DAT_004bfedc = 9;
            *(char *)(param_1 + 0x6f) = local_71;
            iVar8 = 3;
            _DAT_0050c480 = 1;
            break;
          case 7:
            *(undefined4 *)(param_1 + 0x10) = 1;
            return;
          }
        }
      }
      local_71 = local_71 + '\x01';
    } while (local_71 < *(char *)(param_1 + 0x70));
  }
  if (iVar8 != -1) {
    if (*(int *)(param_1 + 0x38) == iVar8) {
      FUN_00454d40(param_1,DAT_004bfedc);
      return;
    }
    DAT_0050c944 = 0xffffffff;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00436fa0(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;

  bVar2 = false;
  iVar4 = DAT_0050c928 + 0x82;
  DAT_0050c928 = DAT_0050c928 + 1;
  _DAT_0050c224 = 0x43250000;
  _DAT_0050c43c = 0x428c0000;
  if (DAT_00e364a6 == 0) {
    uVar3 = FUN_00421360(s__SCREENTEXT_91__sOFF_004c0ba8);
    uVar3 = __ftol(0xf,DAT_0050c528,0,uVar3);
    FUN_0043fce0(param_1,0xa5,uVar3);
  }
  else {
    FUN_004285d0(iVar4,1);
    uVar3 = __ftol();
    uVar3 = __ftol(uVar3);
    FUN_00428660(iVar4,uVar3);
    FUN_004286f0(iVar4,0.125 - (float)(uint)DAT_00e364a6 * -0.03921569,0x3f800000);
    FUN_00428740(iVar4,0x32,0xffffffff,0xffffffff,0xffffffff);
    uVar3 = __ftol();
    uVar3 = __ftol(uVar3);
    uVar3 = __ftol(uVar3);
    uVar3 = __ftol(uVar3);
    FUN_00484020(uVar3);
  }
  uVar3 = FUN_00421360(s__SCREENTEXT_81__r_sMusic__004c0b8c);
  uVar3 = __ftol(0xf,DAT_0050c528,0,uVar3);
  FUN_0043fce0(param_1,0x9b,uVar3);
  iVar4 = DAT_0050c928 + 0x82;
  DAT_0050c928 = DAT_0050c928 + 1;
  if (DAT_00e364a5 == 0) {
    uVar3 = FUN_00421360(s__SCREENTEXT_91__sOFF_004c0ba8);
    uVar3 = __ftol(0xf,DAT_0050c528,1,uVar3);
    FUN_0043fce0(param_1,0xa5,uVar3);
  }
  else {
    FUN_004285d0(iVar4,1);
    uVar3 = __ftol();
    uVar3 = __ftol(uVar3);
    FUN_00428660(iVar4,uVar3);
    FUN_004286f0(iVar4,0.125 - (float)(uint)DAT_00e364a5 * -0.03921569,0x3f800000);
    FUN_00428740(iVar4,0x32,0xffffffff,0xffffffff,0xffffffff);
    uVar3 = __ftol();
    uVar3 = __ftol(uVar3);
    uVar3 = __ftol(uVar3);
    uVar3 = __ftol(uVar3);
    FUN_00484020(uVar3);
  }
  uVar3 = FUN_00421360(s__SCREENTEXT_82__r_sSound__004c0b70);
  uVar3 = __ftol(0xf,DAT_0050c528,1,uVar3);
  FUN_0043fce0(param_1,0x9b,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_83__r_sAudio__004c0b54);
  uVar3 = __ftol(0xf,DAT_0050c528,2,uVar3);
  FUN_0043fce0(param_1,0x9b,uVar3);
  if ((_DAT_00e364a8 & 1) == 0) {
    uVar3 = FUN_00421360(s__SCREENTEXT_85__sMONO_004c0b24);
  }
  else {
    uVar3 = FUN_00421360(s__SCREENTEXT_84__sSTEREO_004c0b3c);
  }
  uVar3 = __ftol(0xf,DAT_0050c528,2,uVar3);
  FUN_0043fce0(param_1,0xa5,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_89__r_sLens_flares__004c0b04);
  uVar3 = __ftol(0xf,DAT_0050c528,3,uVar3);
  FUN_0043fce0(param_1,0x9b,uVar3);
  if ((_DAT_00e364a8 & 2) == 0) {
    uVar3 = FUN_00421360(s__SCREENTEXT_91__sOFF_004c0ba8);
  }
  else {
    uVar3 = FUN_00421360(s__SCREENTEXT_90__sON_004c0af0);
  }
  uVar3 = __ftol(0xf,DAT_0050c528,3,uVar3);
  FUN_0043fce0(param_1,0xa5,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_467__r_sResolution__004c0ad0);
  uVar3 = __ftol(0xf,DAT_0050c528,4,uVar3);
  FUN_0043fce0(param_1,0x9b,uVar3);
  if ((_DAT_00e364a8 & 0x10) == 0) {
    uVar3 = FUN_00421360(s__SCREENTEXT_469__sLo_res_004c0a98);
  }
  else {
    uVar3 = FUN_00421360(s__SCREENTEXT_468__sHi_res_004c0ab4);
  }
  uVar3 = __ftol(0xf,DAT_0050c528,4,uVar3);
  FUN_0043fce0(param_1,0xa5,uVar3);
  uVar3 = FUN_00421360(s__SCREENTEXT_92__c_sExit_004c0a80);
  uVar3 = __ftol(0xf,DAT_0050c528,5,uVar3);
  FUN_0043fce0(param_1,0xa0,uVar3);
  iVar5 = 0;
  iVar4 = DAT_0050c528;
  if ('\0' < *(char *)(param_1 + 0x70)) {
    while( true ) {
      if (DAT_004d6b48 != 0) {
        FUN_00440550(0x4d);
        bVar2 = true;
        iVar4 = DAT_0050c528;
      }
      if (DAT_004d6b44 != 0) {
        FUN_00440550(0x4d);
        bVar2 = true;
        iVar4 = DAT_0050c528;
      }
      if (bVar2) break;
      if (((&DAT_0050c918)[iVar5] & 0x8000) != 0) {
        DAT_0050c528 = iVar4 + 1;
        if (DAT_004c0208 < DAT_0050c528) {
          DAT_0050c528 = 0;
        }
        FUN_00440550(0x58);
        iVar4 = DAT_0050c528;
      }
      if (((&DAT_0050c918)[iVar5] & 0x4000) != 0) {
        DAT_0050c528 = iVar4 + -1;
        if (DAT_0050c528 < 0) {
          DAT_0050c528 = DAT_004c0208;
        }
        FUN_00440550(0x58);
        iVar4 = DAT_0050c528;
      }
      if (((&DAT_0050c918)[iVar5] & 0x30000) != 0) {
        if (iVar4 == 2) {
          _DAT_00e364a8 = _DAT_00e364a8 ^ 1;
        }
        if (iVar4 == 3) {
          _DAT_00e364a8 = _DAT_00e364a8 ^ 2;
        }
        if (iVar4 == 4) {
          _DAT_00e364a8 = _DAT_00e364a8 ^ 0x10;
        }
        if ((1 < iVar4) && (iVar4 != 5)) {
          FUN_00440550(0x58);
          iVar4 = DAT_0050c528;
        }
      }
      if (iVar4 == 0) {
        uVar1 = (&DAT_0050c908)[iVar5];
        if (((uVar1 & 0x20000) != 0) && (DAT_00e364a6 != 0xff)) {
          if ((float)(uint)DAT_00e364a6 + _DAT_00e22a50 * 255.0 <= 255.0) {
            DAT_00e364a6 = __ftol();
          }
          else {
            DAT_00e364a6 = 0xff;
          }
        }
        if (((uVar1 & 0x10000) != 0) && (DAT_00e364a6 != 0)) {
          if (0.0 <= (float)(uint)DAT_00e364a6 - _DAT_00e22a50 * 255.0) {
            DAT_00e364a6 = __ftol();
          }
          else {
            DAT_00e364a6 = 0;
          }
        }
        uVar6 = 0x3e800000;
        uVar3 = 0x9b;
LAB_00437679:
        FUN_00426c80(uVar3,6,uVar6,0x3f800000,1);
        iVar4 = DAT_0050c528;
      }
      else if (iVar4 == 1) {
        uVar1 = (&DAT_0050c908)[iVar5];
        if (((uVar1 & 0x20000) != 0) && (DAT_00e364a5 != 0xff)) {
          if ((float)(uint)DAT_00e364a5 + _DAT_00e22a50 * 255.0 <= 255.0) {
            DAT_00e364a5 = __ftol();
          }
          else {
            DAT_00e364a5 = 0xff;
          }
        }
        if (((uVar1 & 0x10000) != 0) && (DAT_00e364a5 != 0)) {
          if (0.0 <= (float)(uint)DAT_00e364a5 - _DAT_00e22a50 * 255.0) {
            DAT_00e364a5 = __ftol();
          }
          else {
            DAT_00e364a5 = 0;
          }
        }
        uVar6 = 0x3e000000;
        uVar3 = 0x4f;
        goto LAB_00437679;
      }
      iVar5 = iVar5 + 1;
      if (*(char *)(param_1 + 0x70) <= iVar5) {
        return;
      }
    }
    FUN_0044e560();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



undefined4 FUN_004376b0(void)

{
  return DAT_00ec86b0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004376c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  int local_124;
  uint *local_120;
  float local_118;
  float local_114;
  undefined local_10c [8];
  undefined4 local_104;
  undefined local_100 [256];

  FUN_0043da90(param_1,DAT_004c4000,0x14);
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    _DAT_00e99358 = -300.0;
    DAT_0050c468 = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_0045a840(param_1);
    }
    DAT_0050c46c = 0;
    DAT_0050c1f8 = 4 - (DAT_00e35aa0 & 0xff);
    DAT_0050c52c = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_0045bee0(param_1,1,0xffffffff,0);
      DAT_0050c934 = 0;
      FUN_0045c9d0(param_1,1);
      DAT_0050c474 = 1;
      FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                   (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (int)(char)(&DAT_004c1cb9)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (&DAT_00e2a6c1)[DAT_00e295d0 * 0x38]);
      DAT_004c020c = DAT_00e295d0;
    }
    else {
      DAT_00e99400 = (ushort)(DAT_00e35a98 < 1000);
      DAT_0050c52c = (uint)(DAT_0050c1f8 != 0);
      iVar1 = FUN_00440b50(param_1);
      if (iVar1 != 0) {
        FUN_0045bee0(param_1,2,0xffffffff,0);
      }
    }
  }
  FUN_00437ea0(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (DAT_004c020c != DAT_00e295d0) {
      DAT_004c020c = DAT_00e295d0;
      DAT_0050c474 = 1;
      FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                   (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (int)(char)(&DAT_004c1cb9)[(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 0x10],
                   (&DAT_00e2a6c1)[DAT_00e295d0 * 0x38]);
      FUN_0043eb50();
    }
  }
  else if (((0 < DAT_0050c1f8) && (DAT_0050c930 != 1)) && (_DAT_00e99358 == -300.0)) {
    DAT_0050c468 = 1;
    DAT_0050c930 = 5;
    FUN_00468fe0(DAT_0050c1f8 + 0x33,3);
  }
  if (*(int *)(param_1 + 0x34) == 1) {
    FUN_0043ec10();
    FUN_004550d0(param_1,0x41a00000,0x43070000);
  }
  else {
    FUN_0043f380(param_1);
  }
  if (((DAT_0050c470 == 0) && (DAT_0050c468 == 0)) &&
     ((*(int *)(param_1 + 0x34) == 1 && ((DAT_0050c930 == 0 || (DAT_0050c930 == 5)))))) {
    uVar2 = FUN_00421360((&PTR_s__SCREENTEXT_280___R_20_Repulsorg_004c1cc4)
                         [(char)(&DAT_00e2a6c0)[DAT_00e295d0 * 0x38] * 4]);
    uVar2 = FUN_00421360(s__c_s_s_004c0bc0,uVar2);
    FUN_0049eb80(local_100,uVar2);
    FUN_00450530(0xa0,0x19,0x32,0xffffffff,0xffffffff,0xffffffff,local_100);
    uVar2 = FUN_0042de10(local_100,0);
    FUN_0042de10(local_100,0,0x1a,uVar2);
    uVar2 = __ftol();
    FUN_00440150(uVar2);
  }
  FUN_0043dba0(param_1);
  FUN_00455dc0(param_1);
  DAT_0050c474 = 0;
  if ((*(int *)(param_1 + 8) == 3) || (local_124 = 0, *(char *)(param_1 + 0x70) < '\x01')) {
    return;
  }
  local_120 = &DAT_0050c908;
  do {
    if ((DAT_0050c468 == 0) && (DAT_004eb39c == 0)) {
      if (DAT_004d6b48 != 0) {
        FUN_00440550(0x54);
        if (*(int *)(param_1 + 0x10) == 0) {
          if (DAT_00e295d0 != -1) {
            if (DAT_0050c470 == 0) {
              if ((DAT_0050c930 == 0) || (DAT_0050c930 == 5)) {
                DAT_0050c474 = 1;
                DAT_0050c470 = 1;
                DAT_00e99400 = 0;
                DAT_0050c468 = 1;
                FUN_0043eb50();
              }
            }
            else {
              if (DAT_00e99400 == 0) {
                FUN_00468fe0(0x1c,0x19);
                FUN_00440800(param_1);
              }
              else {
                FUN_00468fe0(0x1c,0x1a);
              }
              DAT_0050c474 = 1;
              DAT_00e99400 = 0;
              DAT_0050c470 = 0;
              DAT_0050c954 = 1;
              DAT_0050c468 = -1;
            }
          }
        }
        else if (*(int *)(param_1 + 0x10) == 1) {
          if (DAT_0050c52c == 0) {
            if (0 < DAT_0050c1f8) {
              DAT_0050c52c = 1;
              DAT_0050c468 = 1;
              DAT_00e99400 = 0;
              FUN_00468fe0(DAT_0050c1f8 + 0x33,3);
            }
          }
          else if (DAT_00e99400 == 1) {
            DAT_00e99400 = 0;
            DAT_0050c52c = 0;
            DAT_0050c468 = -1;
            FUN_00468fe0(DAT_0050c1f8 + 0x33,4);
            if (DAT_0050c47c != 2) goto LAB_00437e79;
            DAT_0050c47c = 0;
            DAT_004bfedc = 8;
            DAT_0050c944 = 0xffffffff;
          }
          else if (999 < DAT_00e35a98) {
            FUN_0044afb0(*(undefined4 *)(&DAT_00e299cc + DAT_0050c1f8 * 4),&local_118);
            FUN_0042f7d0(local_10c,&DAT_004c401c);
            local_104 = 0xc2700000;
            fVar3 = (float10)FUN_0042f560(local_118 - 12.0,-116.0 - local_114);
            FUN_00468800(DAT_0050c1f8 + 0x33,10,&local_118,local_10c,(float)fVar3,(float)fVar3);
            DAT_00e35a98 = DAT_00e35a98 + -1000;
            DAT_0050c1f8 = DAT_0050c1f8 + -1;
            DAT_00e35aa0 = CONCAT31(DAT_00e35aa0._1_3_,(char)DAT_00e35aa0 + '\x01');
            FUN_0044e560();
            if (DAT_0050c1f8 < 1) {
              DAT_0050c52c = 0;
              DAT_0050c468 = 0xffff;
              if (DAT_0050c47c == 2) {
                DAT_004bfedc = 8;
                DAT_0050c468 = 0xffff;
                DAT_0050c47c = 0;
                DAT_0050c52c = 0;
                DAT_0050c944 = 0xffffffff;
                return;
              }
              *(undefined *)(param_1 + 0x5f) = 1;
              FUN_00454d40(param_1,3);
              return;
            }
            FUN_00468fe0(DAT_0050c1f8 + 0x33,3);
          }
        }
      }
      if (DAT_004d6b44 != 0) {
        FUN_00440550(0x4d);
        if (DAT_0050c52c == 0) {
          if (DAT_0050c470 == 0) {
            DAT_0050c474 = 1;
            if (DAT_0050c47c == 1) {
              DAT_004bfedc = 8;
              DAT_0050c474 = 1;
              DAT_0050c944 = 0xffffffff;
              return;
            }
            FUN_00454d40(param_1,3);
          }
          else {
            FUN_00468fe0(0x1c,0x1a);
            DAT_0050c474 = 1;
            DAT_0050c470 = 0;
            DAT_0050c954 = 1;
            DAT_00e99400 = 0;
            DAT_0050c468 = -1;
          }
        }
        else {
          DAT_00e99400 = 0;
          DAT_0050c468 = -1;
          if (DAT_0050c47c != 2) {
LAB_00437e79:
            DAT_0050c52c = 0;
            FUN_00454d40(param_1,3);
            return;
          }
          DAT_0050c47c = 0;
          DAT_004bfedc = 8;
          DAT_0050c944 = 0xffffffff;
        }
      }
    }
    if ((*(int *)(param_1 + 0x10) == 0) && (FUN_00469c30(0,0x3f800000,0), DAT_0050c470 == 0)) {
      if (((*local_120 & 0x20000) != 0) && (DAT_00e295d0 < DAT_00e295cc + -1)) {
        _DAT_0050c938 = _DAT_00e22a50 * 50.0 + _DAT_0050c938;
        if (1.5 < _DAT_0050c938) {
          _DAT_0050c938 = 1.5;
        }
        _DAT_0050c93c = _DAT_0050c93c - _DAT_00e22a50 * 5.5;
        if (_DAT_0050c93c < -1.0) {
          _DAT_0050c93c = -1.0;
        }
      }
      if (((*local_120 & 0x10000) != 0) && (0 < DAT_00e295d0)) {
        _DAT_0050c938 = _DAT_00e22a50 * 50.0 + _DAT_0050c938;
        if (1.5 < _DAT_0050c938) {
          _DAT_0050c938 = 1.5;
        }
        _DAT_0050c93c = _DAT_00e22a50 * 5.5 + _DAT_0050c93c;
        if (1.0 < _DAT_0050c93c) {
          _DAT_0050c93c = 1.0;
        }
      }
    }
    local_120 = local_120 + 1;
    local_124 = local_124 + 1;
    if (*(char *)(param_1 + 0x70) <= local_124) {
      return;
    }
  } while( true );
}



void FUN_00437ea0(int param_1)

{
  int iVar1;

  iVar1 = FUN_00427670(0,0x10);
  if (iVar1 != 0) {
    iVar1 = FUN_00427670(0,0x20);
    if (iVar1 != 0) {
      FUN_004276a0(0,0x20);
      if (*(int *)(param_1 + 0x10) == 0) {
        iVar1 = FUN_00427670(0,2);
        if (iVar1 == 0) {
          FUN_00427690(0,2);
          FUN_00427410(2,0,1,0);
          return;
        }
        FUN_00427590(2,0,0x16,0x17,0x1e,0x1f,0x38,0);
        return;
      }
      iVar1 = FUN_00427670(0,8);
      if (iVar1 == 0) {
        FUN_00427690(0,8);
        FUN_00427410(2,0,0xf,0);
        return;
      }
      FUN_00427590(2,0,0x29,0x2e,0x2f,0x30,0xc,0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00437f70(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  short *psVar12;
  undefined *puVar13;
  float10 fVar14;
  float10 fVar15;
  short *local_e4;
  float local_d8;
  float local_d4;
  float local_d0;
  int local_cc;
  undefined2 *local_c8;
  undefined2 *local_c4;
  double local_c0;
  double local_b8;
  undefined local_b0 [8];
  float local_a8;
  undefined local_a4 [12];
  undefined local_98 [12];
  undefined local_8c [12];
  undefined local_80 [48];
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined local_40 [48];
  undefined local_10 [16];

  local_c4 = (undefined2 *)0x3dcccccd;
  local_c8 = (undefined2 *)0x3dcccccd;
  if (*(char *)(param_1 + 0x60) == '\0') {
    *(undefined *)(param_1 + 0x60) = 1;
    return;
  }
  if ((*(int *)(param_1 + 8) == 3) || (*(int *)(param_1 + 8) == 8)) {
    if (DAT_004c4000 != 0) {
      DAT_004c0214 = -1;
    }
    local_cc = 0;
    if ('\0' < *(char *)(param_1 + 0x70)) {
      piVar9 = (int *)&DAT_00e2993c;
      pfVar10 = (float *)&DAT_00e99368;
      do {
        iVar11 = local_cc;
        if (*piVar9 != 0) {
          pfVar10[-1] = (float)local_cc * -2500.0;
          *pfVar10 = 50.0;
          *pfVar10 = (float)((char)(&DAT_004c2724)[*(char *)(local_cc + 0x73 + param_1) * 0x34] * 10
                            ) - -50.0;
          FUN_00431020(local_40,0,0,0);
          FUN_0042f7b0(local_10,pfVar10[-2],pfVar10[-1],*pfVar10);
          if (DAT_004c0214 != -1) {
            iVar6 = FUN_00450b30(0x456c6d6f,DAT_004c0214);
            iVar6 = *(int *)(iVar6 + 0x14);
            if (iVar6 == 0xd) {
LAB_004380b1:
              DAT_004c0218 = (undefined2 *)((float)DAT_004c0218 - _DAT_00e22a50);
            }
            else if (iVar6 == 0xe) {
              iVar6 = FUN_004816b0();
              DAT_004c0218 = (undefined2 *)
                             (((float)iVar6 * 4.656613e-10 * 0.4 - 0.2) + (float)DAT_004c0218);
            }
            else if (iVar6 == 0xf) goto LAB_004380b1;
            if ((float)DAT_004c0218 < 0.1) {
              DAT_004c0218 = (undefined2 *)0x3dcccccd;
            }
            if (1.5 < (float)DAT_004c0218) {
              DAT_004c0218 = (undefined2 *)0x3fc00000;
            }
            if (DAT_004c0210 == 2) {
              local_c4 = DAT_004c0218;
            }
            else {
              local_c8 = DAT_004c0218;
            }
          }
          FUN_004337e0(*piVar9,local_40,0,0x428c0000,0x428c0000,0x428c0000,0xc31d0000,1,local_c4,
                       local_c8);
        }
        local_cc = iVar11 + 1;
        pfVar10 = pfVar10 + 10;
        piVar9 = piVar9 + 1;
      } while (local_cc < *(char *)(param_1 + 0x70));
    }
    iVar11 = 0;
    do {
      iVar6 = *(int *)(&DAT_00e29a54)[iVar11];
      if (iVar6 != 0) {
        FUN_00431a50(iVar6,2,0xfffffffc,0x10,3);
        FUN_0042f7b0(local_98,0x44434000,(float)(iVar11 * 100 + -0x20a),0xc31d0000);
        FUN_0042f7b0(local_8c,0,0,0);
        if (iVar11 == 3) {
          FUN_0042f7b0(local_98,0x44434000,0xc3c28000,0xc2ce0000);
          FUN_0042f7b0(local_8c,0,0x42340000,0);
        }
        FUN_00431060(local_80,local_98);
        FUN_00431450(local_80,0x3f000000,0x3f000000,0x3f000000,local_80);
        FUN_00431640(iVar6,local_80);
        FUN_00431a50(iVar6,2,3,0x10,2);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
    if ((DAT_004c4000 != 0) && (*(int *)(param_1 + 0x3c) != 2)) {
      iVar11 = 0;
      if ('\0' < *(char *)(param_1 + 0x70)) {
        local_cc = 0;
        do {
          FUN_0042f7d0(&local_d8,&DAT_004c43d0);
          local_d0 = -157.0;
          FUN_0042f7d0(&DAT_00e298a0,&DAT_004c43dc);
          _DAT_00e298a4 = _DAT_00e298a4 - (float)local_cc;
          fVar14 = (float10)FUN_0042f560(local_d8 - _DAT_004c43dc,_DAT_004c43e0 - local_d4);
          iVar6 = *(int *)(param_1 + 0x34) * 0x20;
          fVar15 = (float10)FUN_0042f560(_DAT_00e298a0 - *(float *)(&DAT_004c401c + iVar6),
                                         *(float *)(&DAT_004c4020 + iVar6) - _DAT_00e298a4);
          FUN_00468800(iVar11 + 0x1c,0x14,&local_d8,&DAT_00e298a0,(float)fVar14,(float)fVar15);
          iVar11 = iVar11 + 1;
          local_cc = local_cc + 0x9c4;
        } while (iVar11 < *(char *)(param_1 + 0x70));
      }
      FUN_004816b0();
      DAT_0050c138 = __ftol();
      iVar11 = 1;
      psVar12 = &DAT_0050c13a;
      do {
        do {
          FUN_004816b0();
          sVar5 = __ftol();
          *psVar12 = sVar5;
          if (0x50c138 < (int)psVar12) {
            psVar7 = &DAT_0050c138;
            iVar6 = iVar11;
            do {
              if (*psVar12 == *psVar7) {
                *psVar12 = -1;
              }
              psVar7 = psVar7 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          puVar4 = DAT_00e2993c;
        } while (*psVar12 == -1);
        psVar12 = psVar12 + 1;
        iVar11 = iVar11 + 1;
      } while ((int)psVar12 < 0x50c140);
      DAT_004bfed4 = 1;
      DAT_004bfed8 = 2;
      local_c4 = (undefined2 *)0x11;
      local_c8 = (undefined2 *)0x1f;
      if (DAT_00e2993c[1] == 0) {
        DAT_004bfed4 = 5;
        local_c4 = (undefined2 *)0x2d;
      }
      if (DAT_00e2993c[2] == 0) {
        DAT_004bfed8 = 5;
        local_c8 = (undefined2 *)0x2d;
      }
      if ((char)DAT_00e35aa0 != '\0') {
        local_cc = 0x34;
        local_e4 = &DAT_0050c138;
        puVar13 = &DAT_0050c230;
        iVar11 = 0;
        do {
          switch(*local_e4) {
          case 0:
            sVar5 = 0;
            do {
              local_c0 = (double)_DAT_00e99310;
              local_b8 = (double)((_DAT_00e99310 - _DAT_00e99304 * -2.0) * 0.3333333);
              iVar6 = FUN_004816b0();
              iVar6 = FUN_004816b0(((float)local_c0 - (float)local_b8) * (float)iVar6 * 4.656613e-10
                                   + (float)local_b8,0xc31d0000);
              fVar2 = (_DAT_00e9930c - _DAT_00e99300) * (float)iVar6 * 4.656613e-10 + _DAT_00e99300;
              fVar14 = (float10)FUN_0045cf00();
              FUN_0042f7b0(&local_d8,(float)(fVar14 * (float10)fVar2));
              if (0.0 <= local_d8) {
                DAT_004c0210 = DAT_004bfed4;
                _DAT_0050c534 = local_c8;
              }
              else {
                DAT_004c0210 = DAT_004bfed8;
                _DAT_0050c534 = local_c4;
              }
              FUN_00482c40(*puVar4,puVar4[(int)_DAT_0050c534],&local_d8,10,puVar13,
                           &DAT_0050c148 + iVar11,&DAT_0050c0e0 + iVar11);
              FUN_00482dd0(local_b0,local_a4,puVar13,&DAT_0050c148 + iVar11,&DAT_0050c0e0 + iVar11);
            } while (((local_a8 - 90.0) - 32.0 <= -157.0) &&
                    (bVar1 = sVar5 < 0x14, sVar5 = sVar5 + 1, bVar1));
            FUN_004316a0(puVar4[DAT_004c0210],local_80);
            FUN_0042f7d0(&local_d8,local_b0);
            fVar14 = (float10)FUN_0042f560(local_d8 - local_50,local_4c - local_d4);
            iVar6 = local_cc;
            FUN_00468800(local_cc,0xe,&local_d8,&local_d8,(float)fVar14,(float)fVar14);
            DAT_004c0214 = iVar6;
            break;
          case 1:
            FUN_004316a0(puVar4[5],local_80);
            iVar6 = FUN_004816b0(local_48);
            fVar14 = (float10)FUN_0045cf00((_DAT_00e99350 - _DAT_00e99344) *
                                           (float)iVar6 * 4.656613e-10 + _DAT_00e99344);
            FUN_0042f7b0(&local_d8,(float)(((float10)_DAT_00e99340 - (float10)30.0) * fVar14));
            FUN_00482c40(*puVar4,puVar4[0x2d],&local_d8,10,puVar13,&DAT_0050c148 + iVar11,
                         &DAT_0050c0e0 + iVar11);
            FUN_00482dd0(local_b0,local_a4,puVar13,&DAT_0050c148 + iVar11,&DAT_0050c0e0 + iVar11);
            FUN_0042f7d0(&local_d8,local_b0);
            if (0.0 <= local_d8) goto LAB_004388f8;
            local_d8 = local_d8 - 30.0;
            break;
          case 2:
            FUN_004316a0(puVar4[DAT_004bfed8],local_80);
            local_c0 = (double)_DAT_00e99310;
            local_b8 = (double)((_DAT_00e99310 - _DAT_00e99304 * -2.0) * 0.3333333);
            iVar6 = FUN_004816b0();
            FUN_0042f7b0(&local_d8,_DAT_00e99300 - 30.0,
                         ((float)local_c0 - (float)local_b8) * (float)iVar6 * 4.656613e-10 +
                         (float)local_b8,local_48);
            FUN_00482c40(*puVar4,puVar4[(int)local_c4],&local_d8,10,puVar13,&DAT_0050c148 + iVar11,
                         &DAT_0050c0e0 + iVar11);
            FUN_00482dd0(local_b0,local_a4,puVar13,&DAT_0050c148 + iVar11,&DAT_0050c0e0 + iVar11);
            FUN_0042f7d0(&local_d8,local_b0);
            local_d8 = local_d8 - 30.0;
            break;
          case 3:
            FUN_004316a0(puVar4[DAT_004bfed4],local_80);
            local_c0 = (double)_DAT_00e99310;
            local_b8 = (double)((_DAT_00e99310 - _DAT_00e99304 * -2.0) * 0.3333333);
            iVar6 = FUN_004816b0();
            FUN_0042f7b0(&local_d8,_DAT_00e9932c - -30.0,
                         ((float)local_c0 - (float)local_b8) * (float)iVar6 * 4.656613e-10 +
                         (float)local_b8,local_48);
            FUN_00482c40(*puVar4,puVar4[(int)local_c8],&local_d8,10,puVar13,&DAT_0050c148 + iVar11,
                         &DAT_0050c0e0 + iVar11);
            FUN_00482dd0(local_b0,local_a4,puVar13,&DAT_0050c148 + iVar11,&DAT_0050c0e0 + iVar11);
            FUN_0042f7d0(&local_d8,local_b0);
LAB_004388f8:
            local_d8 = local_d8 - -30.0;
          }
          if ((0 < *local_e4) && (*local_e4 < 4)) {
            local_d0 = local_d0 - 20.0;
            FUN_0042f7d0(&DAT_00e298a0,&local_d8);
            _DAT_00e298a0 = _DAT_00e298a0 * -1.0;
            fVar14 = (float10)FUN_0042f560(local_d8 - _DAT_00e298a0,_DAT_00e298a4 - local_d4);
            FUN_00468800(local_cc,8,&local_d8,&local_d8,(float)fVar14,(float)fVar14);
          }
          iVar11 = iVar11 + 0xc;
          puVar13 = puVar13 + 0x28;
          local_e4 = local_e4 + 1;
          iVar6 = local_cc + 1;
          iVar8 = local_cc + -0x33;
          local_cc = iVar6;
        } while (iVar8 < (int)(DAT_00e35aa0 & 0xff));
      }
      fVar2 = _DAT_00e99310 - -500.0;
      iVar11 = FUN_004816b0(0xc31d0000);
      iVar11 = FUN_004816b0(((_DAT_00e99310 - -1500.0) - fVar2) * (float)iVar11 * 4.656613e-10 +
                            fVar2);
      FUN_0042f7b0(&local_d8,(float)iVar11 * 4.656613e-10 * 2000.0 - 1000.0);
      iVar11 = FUN_004816b0();
      fVar2 = (float)iVar11 * 4.656613e-10 * 360.0;
      FUN_00468800(0x14,0x29,&local_d8,&local_d8,fVar2,fVar2);
      fVar2 = _DAT_00e99300 - 500.0;
      iVar11 = FUN_004816b0(0xc31d0000);
      iVar11 = FUN_004816b0((_DAT_00e99310 - -1000.0) * (float)iVar11 * 4.656613e-10 - 1000.0);
      FUN_0042f7b0(&local_d8,
                   ((_DAT_00e99300 - 1000.0) - fVar2) * (float)iVar11 * 4.656613e-10 + fVar2);
      iVar11 = FUN_004816b0();
      fVar2 = (float)iVar11 * 4.656613e-10 * 360.0;
      FUN_00468800(0x13,0x28,&local_d8,&local_d8,fVar2,fVar2);
    }
    iVar11 = 0;
    if ((char)DAT_00e35aa0 != '\0') {
      local_c4 = &DAT_0050c138;
      local_c8 = (undefined2 *)&DAT_0050c230;
      iVar6 = 0;
      do {
        iVar8 = FUN_00450b30(0x456c6d6f,iVar11 + 0x34);
        FUN_00482dd0(local_b0,local_a4,local_c8,&DAT_0050c148 + iVar6,&DAT_0050c0e0 + iVar6);
        pfVar10 = (float *)(iVar8 + 0x44);
        FUN_0042f7d0(pfVar10,local_b0);
        switch(*local_c4) {
        case 0:
          fVar3 = *(float *)(iVar8 + 0x4c) - 90.0;
          break;
        case 1:
          if (0.0 <= *pfVar10) {
            *pfVar10 = *pfVar10 - -30.0;
            fVar3 = *(float *)(iVar8 + 0x4c) - 20.0;
          }
          else {
            *pfVar10 = *pfVar10 - 30.0;
            fVar3 = *(float *)(iVar8 + 0x4c) - 20.0;
          }
          break;
        case 2:
          fVar2 = *pfVar10 - 30.0;
          goto LAB_00438bfb;
        case 3:
          fVar2 = *pfVar10 - -30.0;
LAB_00438bfb:
          fVar3 = *(float *)(iVar8 + 0x4c) - 20.0;
          *pfVar10 = fVar2;
          break;
        default:
          goto switchD_00438ba0_caseD_4;
        }
        *(float *)(iVar8 + 0x4c) = fVar3;
switchD_00438ba0_caseD_4:
        FUN_0044b270(*(undefined4 *)(iVar8 + 0x30),pfVar10);
        iVar11 = iVar11 + 1;
        iVar6 = iVar6 + 0xc;
        local_c8 = local_c8 + 0x14;
        local_c4 = local_c4 + 1;
      } while (iVar11 < (int)(DAT_00e35aa0 & 0xff));
    }
    FUN_00456200(param_1);
    if ((DAT_004c4000 != 0) && (DAT_0050c47c == 1)) {
      DAT_0050c47c = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    if (*(int *)(param_1 + 0x10) == 1) {
      _DAT_0050c958 = _DAT_0050c958 + _DAT_00e22a50;
      if (0.4 < _DAT_0050c958) {
        _DAT_0050c958 = 0.4;
      }
      if (*(int *)(param_1 + 8) == 8) {
        FUN_004396d0(param_1);
      }
    }
    else {
      _DAT_0050c958 = _DAT_0050c958 - _DAT_00e22a50;
      if (_DAT_0050c958 < 0.0) {
        _DAT_0050c958 = 0.0;
      }
      if (*(int *)(param_1 + 8) == 8) {
        FUN_00438d20(param_1);
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00438d20(uint *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  char *pcVar11;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [16];
  undefined local_30 [48];

  iVar5 = (int)param_1;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (DAT_004c021c == 0) {
    if (DAT_004c4000 != 0) goto LAB_00438d57;
    if (DAT_0050c930 == 4) goto LAB_00438d53;
  }
  else {
LAB_00438d53:
    if (DAT_004c4000 != 0) {
LAB_00438d57:
      FUN_0049eb80(&DAT_0050c328,&DAT_004d55cc);
      if (DAT_004c4000 != 0) {
        FUN_0042f7b0(&DAT_00e2af90,0,0,0);
      }
    }
    *(undefined4 *)((int)param_1 + 0x34) = 0x14;
    FUN_0043f8e0(param_1,0x14,0);
    FUN_0042f860(&local_4c,&DAT_00e298f0,&DAT_00e2af90);
    fVar10 = (float10)FUN_0042f8c0(&local_4c);
    DAT_0050c210 = (float)fVar10;
    FUN_0042f9b0(&local_4c);
    fVar10 = (float10)FUN_0042f560(-local_4c,local_48);
    DAT_0050c1fc = (float)fVar10;
    fVar10 = (float10)FUN_0042f3e0(local_44);
    DAT_0050c2f0 = (float)fVar10;
    if (DAT_0050c1fc < 0.0) {
      DAT_0050c1fc = DAT_0050c1fc - -360.0;
    }
    if (360.0 < DAT_0050c1fc) {
      DAT_0050c1fc = DAT_0050c1fc - 360.0;
    }
    if (DAT_0050c2f0 < -90.0) {
      DAT_0050c2f0 = DAT_0050c2f0 - -180.0;
    }
    if (90.0 < DAT_0050c2f0) {
      DAT_0050c2f0 = DAT_0050c2f0 - 180.0;
    }
    DAT_004c0220 = 1;
    _DAT_0050c95c = 0.0;
    DAT_004c021c = 0;
    DAT_004c4000 = 0;
    DAT_0050c930 = 0;
  }
  if ((DAT_004c0220 != 0) && (_DAT_0050c95c = _DAT_0050c95c + _DAT_00e22a50, 5.0 <= _DAT_0050c95c))
  {
    _DAT_0050c95c = 5.0;
  }
  switch(*(undefined4 *)((int)param_1 + 0x34)) {
  case 0x14:
    puVar7 = &DAT_004d55cc;
    goto LAB_00438fa9;
  case 0x15:
    pcVar11 = s__SCREENTEXT_152__c_sCockpit_004c0cb8;
    break;
  case 0x16:
    pcVar11 = s__SCREENTEXT_153__c_sEngine_1_004c0c98;
    break;
  case 0x17:
    pcVar11 = s__SCREENTEXT_154__c_sEngine_2_004c0c78;
    break;
  case 0x18:
    pcVar11 = s__SCREENTEXT_155__c_sEngine_3_004c0c58;
    break;
  case 0x19:
    pcVar11 = s__SCREENTEXT_156__c_sEngine_4_004c0c38;
    break;
  case 0x1a:
    pcVar11 = s__SCREENTEXT_158__c_sPT01_004c0c1c;
    break;
  case 0x1b:
    pcVar11 = s__SCREENTEXT_159__c_sPT02_004c0c00;
    break;
  case 0x1c:
    pcVar11 = s__SCREENTEXT_160__c_sPT03_004c0be4;
    break;
  case 0x1d:
    pcVar11 = s__SCREENTEXT_161__c_sPT04_004c0bc8;
    break;
  case 0x1e:
    uVar6 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)
                         [*(char *)((int)param_1 + 0x73) * 0xd]);
    uVar6 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)
                         [*(char *)((int)param_1 + 0x73) * 0xd],uVar6);
    uVar6 = FUN_00421360(s__c_s_s__s_004c08d8,uVar6);
    FUN_0049eb80(&DAT_0050c328,uVar6);
  default:
    goto switchD_00438ef9_caseD_b;
  }
  puVar7 = (undefined1 *)FUN_00421360(pcVar11);
LAB_00438fa9:
  FUN_0049eb80(&DAT_0050c328,puVar7);
switchD_00438ef9_caseD_b:
  FUN_00450530(0xa0,0xc3,0,0xffffffff,0,0xffffffff,&DAT_0050c328);
  iVar9 = 0;
  if ('\0' < *(char *)((int)param_1 + 0x70)) {
    param_1 = &DAT_0050c908;
    do {
      fVar4 = DAT_0050c210;
      if (DAT_004eb39c == 0) {
        if (DAT_004d6b48 != 0) {
          FUN_00440550(0x54);
          DAT_004c021c = 1;
          return;
        }
        if (DAT_004d6b44 != 0) {
          FUN_00440550(0x4d);
          DAT_004c021c = 1;
          _DAT_0050c958 = 0;
          FUN_00454d40(iVar5,3);
          return;
        }
      }
      if ((0.1 < (float)(&DAT_00e98ea0)[iVar9]) || ((float)(&DAT_00e98ea0)[iVar9] < -0.1)) {
        if (DAT_004c0220 == 0) {
          bVar2 = true;
          DAT_0050c1fc = DAT_0050c1fc - (float)(&DAT_00e98ea0)[iVar9] * _DAT_00e22a50 * -70.0 * 1.5;
        }
        if (_DAT_0050c95c == 5.0) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
      }
      if ((0.1 < (float)(&DAT_00e98e80)[iVar9]) || ((float)(&DAT_00e98e80)[iVar9] < -0.1)) {
        if (DAT_004c0220 == 0) {
          DAT_0050c2f0 = DAT_0050c2f0 - (float)(&DAT_00e98e80)[iVar9] * _DAT_00e22a50 * -45.0 * 1.5;
          if (89.0 < DAT_0050c2f0) {
            DAT_0050c2f0 = 89.0;
          }
          if (DAT_0050c2f0 < -89.0) {
            DAT_0050c2f0 = -89.0;
          }
          bVar2 = true;
        }
        if (_DAT_0050c95c == 5.0) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
      }
      if ((*param_1 & 4) != 0) {
        if (DAT_004c0220 == 0) {
          DAT_0050c210 = DAT_0050c210 - _DAT_00e22a50 * 800.0;
          if (DAT_0050c210 < 100.0) {
            DAT_0050c210 = 100.0;
          }
          bVar2 = true;
        }
        if (_DAT_0050c95c == 5.0) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
      }
      if ((*param_1 & 8) != 0) {
        if (DAT_004c0220 == 0) {
          DAT_0050c210 = DAT_0050c210 - _DAT_00e22a50 * -800.0;
          if (1336.0 < DAT_0050c210) {
            DAT_0050c210 = 1336.0;
          }
          bVar2 = true;
        }
        if (_DAT_0050c95c == 5.0) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
      }
      if ((((byte)DAT_0050c908 & 0x10) != 0) && (DAT_0050c930 != 3)) {
        iVar8 = *(int *)(iVar5 + 0x34) + 1;
        *(int *)(iVar5 + 0x34) = iVar8;
        if ((iVar8 == 0x16) &&
           (*(int *)(&DAT_004c2704 + *(char *)(iVar9 + 0x73 + iVar5) * 0x34) == 0x1e)) {
          *(undefined4 *)(iVar5 + 0x34) = 0x1a;
        }
        if ((*(int *)(iVar5 + 0x34) == 0x18) &&
           (*(int *)(&DAT_004c2704 + *(char *)(iVar9 + 0x73 + iVar5) * 0x34) != 0x28)) {
          *(undefined4 *)(iVar5 + 0x34) = 0x1a;
        }
        if ((*(int *)(iVar5 + 0x34) < 0x1e) &&
           ((int)(DAT_00e35aa0 & 0xff) < *(int *)(iVar5 + 0x34) + -0x19)) {
          *(undefined4 *)(iVar5 + 0x34) = 0x1e;
        }
        if (0x1e < *(int *)(iVar5 + 0x34)) {
          *(undefined4 *)(iVar5 + 0x34) = 0x14;
        }
        bVar1 = true;
        if (_DAT_0050c95c == 5.0) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
        _DAT_0050c95c = 0.0;
      }
      if ((((byte)DAT_0050c908 & 0x20) != 0) && (DAT_0050c930 != 3)) {
        iVar8 = *(int *)(iVar5 + 0x34) + -1;
        *(int *)(iVar5 + 0x34) = iVar8;
        if (iVar8 == 0x19) {
          if (*(int *)(&DAT_004c2704 + *(char *)(iVar9 + 0x73 + iVar5) * 0x34) == 0x1e) {
            *(undefined4 *)(iVar5 + 0x34) = 0x15;
          }
          if ((*(int *)(iVar5 + 0x34) == 0x19) &&
             (*(int *)(&DAT_004c2704 + *(char *)(iVar9 + 0x73 + iVar5) * 0x34) != 0x28)) {
            *(undefined4 *)(iVar5 + 0x34) = 0x17;
          }
        }
        if ((int)(DAT_00e35aa0 & 0xff) < *(int *)(iVar5 + 0x34) + -0x19) {
          *(uint *)(iVar5 + 0x34) = (DAT_00e35aa0 & 0xff) + 0x19;
        }
        if (*(int *)(iVar5 + 0x34) < 0x14) {
          *(undefined4 *)(iVar5 + 0x34) = 0x1e;
        }
        bVar1 = true;
        if (_DAT_0050c95c == 5.0) {
          bVar3 = true;
        }
        DAT_004c0220 = 0;
        _DAT_0050c95c = 0.0;
      }
      if ((!bVar1) || (bVar3)) {
        FUN_0043fbc0(iVar5,*(undefined4 *)(iVar5 + 0x34));
      }
      else {
        FUN_0043f8e0(iVar5,*(undefined4 *)(iVar5 + 0x34),1);
        bVar1 = false;
      }
      if ((bVar2) || (DAT_0050c930 == 3)) {
        FUN_00431020(local_40,DAT_0050c1fc,DAT_0050c2f0,0);
        FUN_0042fa80(&DAT_00e298f0,&DAT_00e2af90,DAT_0050c210,local_30);
        if (_DAT_00e298f8 < -147.0) {
          FUN_0042fa80(&DAT_00e298f0,&DAT_00e2af90,
                       ((_DAT_00e2af98 - -147.0) / (_DAT_00e2af98 - _DAT_00e298f8)) * DAT_0050c210,
                       local_30);
        }
        if (1066.0 < _DAT_00e298f8) {
          FUN_0042fa80(&DAT_00e298f0,&DAT_00e2af90,
                       ((_DAT_00e2af98 - 1066.0) / (_DAT_00e2af98 - _DAT_00e298f8)) * DAT_0050c210,
                       local_30);
        }
        if (DAT_0050c210 != fVar4) {
          fVar10 = (float10)FUN_0042f950(&DAT_00e298f0,&DAT_00e2af90);
          DAT_0050c210 = (float)fVar10;
        }
        if (bVar2) {
          FUN_0044bb10(&DAT_00e2b3e0,&DAT_00e2af60);
        }
        bVar2 = false;
      }
      iVar9 = iVar9 + 1;
      param_1 = param_1 + 1;
    } while (iVar9 < *(char *)(iVar5 + 0x70));
  }
  if (bVar3) {
    DAT_004c0220 = 0;
    _DAT_0050c95c = 0.0;
    FUN_0043f8e0(iVar5,*(undefined4 *)(iVar5 + 0x34),1);
    FUN_0042f860(&local_4c,&DAT_00e298f0,&DAT_00e2af90);
    fVar10 = (float10)FUN_0042f8c0(&local_4c);
    DAT_0050c210 = (float)fVar10;
    FUN_0042f9b0(&local_4c);
    fVar10 = (float10)FUN_0042f560(-local_4c,local_48);
    DAT_0050c1fc = (float)fVar10;
    fVar10 = (float10)FUN_0042f3e0(local_44);
    DAT_0050c2f0 = (float)fVar10;
    if (DAT_0050c1fc < 0.0) {
      DAT_0050c1fc = DAT_0050c1fc - -360.0;
    }
    if (360.0 < DAT_0050c1fc) {
      DAT_0050c1fc = DAT_0050c1fc - 360.0;
    }
    if (DAT_0050c2f0 < -90.0) {
      DAT_0050c2f0 = DAT_0050c2f0 - -180.0;
    }
    if (90.0 < DAT_0050c2f0) {
      DAT_0050c2f0 = DAT_0050c2f0 - 180.0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004396d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined local_70 [48];
  undefined local_40 [48];
  undefined local_10 [16];

  if ((DAT_004c0228 != 0) || (DAT_004c4000 != 0)) {
    DAT_0050c538 = 0;
    if (DAT_004c4000 == 0) {
      DAT_0050c950 = 0;
    }
    FUN_0045a840(param_1);
    FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                 (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2b220)[DAT_0050c950 * 0x38] * 0x10],0,
                 0xff);
    FUN_00455720();
    FUN_004556c0();
    DAT_0050c930 = 0;
    DAT_004c4000 = 0;
    DAT_004c0228 = 0;
  }
  if (DAT_0050c538 == 1) {
    DAT_0050c538 = 2;
    FUN_004316a0(*(undefined4 *)(DAT_00e2993c + DAT_004bfed4 * 4),local_40);
    FUN_0042f7d0(&DAT_004c43fc,local_10);
    FUN_0042f7d0(&DAT_004c43f0,local_10);
    _DAT_004c43f0 = _DAT_00e9932c - -200.0;
    _DAT_004c43fc = 0;
    _DAT_004c43f4 = _DAT_00e99330 - -300.0;
    _DAT_004c43f8 = _DAT_004c43f8 - -200.0;
    FUN_004316a0(*(undefined4 *)(DAT_00e2993c + 0x14),local_40);
    FUN_0042f7d0(&DAT_004c441c,local_10);
    FUN_0042f7d0(&DAT_004c4410,local_10);
    _DAT_004c4410 = _DAT_004c4410 - -50.0;
    _DAT_004c4418 = 0xc3180000;
    _DAT_004c4414 = _DAT_004c4414 - 300.0;
    FUN_004316a0(*(undefined4 *)(DAT_00e2993c + 0x14),local_40);
    FUN_0042f7d0(&DAT_004c443c,local_10);
    FUN_0042f7d0(&DAT_004c4430,local_10);
    _DAT_004c4430 = _DAT_004c4430 - 100.0;
    _DAT_004c4434 = _DAT_004c4434 - 500.0;
    _DAT_004c4438 = _DAT_004c4438 - -100.0;
    FUN_004316a0(*(undefined4 *)(DAT_00e2993c + DAT_004bfed8 * 4),local_40);
    FUN_0042f7d0(&DAT_004c445c,local_10);
    FUN_0042f7d0(&DAT_004c4450,local_10);
    _DAT_004c4450 = _DAT_00e99300 - 300.0;
    _DAT_004c4458 = 0xc3180000;
    _DAT_004c4454 = _DAT_00e99310 - -300.0;
    if ((int)DAT_0050c950 < 7) {
      uVar3 = (int)DAT_0050c950 >> 0x1f;
      FUN_0045bee0(param_1,(((DAT_0050c950 ^ uVar3) - uVar3 & 3 ^ uVar3) - uVar3) + 0x1f,0xffffffff,
                   0);
    }
    else {
      DAT_0050c45c = 1;
    }
  }
  uVar1 = FUN_00421360((&PTR_s__SCREENTEXT_280___R_20_Repulsorg_004c1cc4)
                       [(char)(&DAT_00e2b220)[DAT_0050c950 * 0x38] * 4]);
  uVar1 = FUN_00421360(&DAT_004b6c00,uVar1);
  FUN_0049eb80(local_70,uVar1);
  if (DAT_0050c950 == 7) {
    if ((byte)DAT_00e35aa0 < 4) {
      uVar1 = FUN_00421360(s__SCREENTEXT_588__sPit_Droid_Mana_004c0cfc);
    }
    else {
      uVar1 = FUN_00421360(s__SCREENTEXT_99__sNo_more_pit_dro_004c0cd4);
    }
    FUN_0049eb80(local_70,uVar1);
  }
  uVar1 = __ftol(local_70);
  FUN_00450530(0x1e,0x2c,0xffffffff,0xffffffff,0xffffffff,uVar1);
  if (DAT_004bfed0 != 0) {
    DAT_0050c45c = 1;
    _DAT_004c0224 = 1;
    DAT_004bfed0 = 0;
  }
  if ((DAT_004eb39c == 0) && (DAT_004d6b44 != 0)) {
    FUN_00440550(0x4d);
    DAT_004c0228 = 1;
    FUN_00454d40(param_1,3);
    return;
  }
  if ((((&DAT_0050c918)[*(char *)(param_1 + 0x6f)] & 0x10000) != 0) && (0 < (int)DAT_0050c950)) {
    DAT_0050c950 = DAT_0050c950 - 1;
    DAT_0050c45c = 1;
    FUN_00440550(0x58);
  }
  if ((((&DAT_0050c918)[*(char *)(param_1 + 0x6f)] & 0x20000) != 0) && ((int)DAT_0050c950 < 7)) {
    DAT_0050c950 = DAT_0050c950 + 1;
    DAT_0050c45c = 1;
    FUN_00440550(0x58);
  }
  if ((((&DAT_0050c918)[*(char *)(param_1 + 0x6f)] & 0x4000) != 0) && (1 < (int)DAT_0050c950)) {
    DAT_0050c950 = DAT_0050c950 - 2;
    DAT_0050c45c = 1;
    FUN_00440550(0x58);
  }
  if ((((&DAT_0050c918)[*(char *)(param_1 + 0x6f)] & 0x8000) != 0) && ((int)DAT_0050c950 < 6)) {
    DAT_0050c950 = DAT_0050c950 + 2;
    DAT_0050c45c = 1;
    FUN_00440550(0x58);
  }
  if ((DAT_0050c45c != 0) && (DAT_0050c950 != 0xffffffff)) {
    DAT_0050c45c = 0;
    FUN_004556c0();
    if ((int)DAT_0050c950 < 7) {
      FUN_0045cf60((int)*(char *)(param_1 + 0x73),
                   (int)(char)(&DAT_004c1cbb)[(char)(&DAT_00e2b220)[DAT_0050c950 * 0x38] * 0x10],0,
                   0xff);
      uVar3 = (int)DAT_0050c950 >> 0x1f;
      iVar2 = (((DAT_0050c950 ^ uVar3) - uVar3 & 3 ^ uVar3) - uVar3) + 0x1f;
      if (iVar2 != *(int *)(param_1 + 0x34)) {
        FUN_0045bee0(param_1,iVar2,0xffffffff,0);
      }
    }
    else {
      FUN_0045cf60((int)*(char *)(param_1 + 0x73),DAT_0050c950,0,0xff);
      DAT_0050c930 = 1;
      *(undefined4 *)(param_1 + 0x34) = 0x1a;
      FUN_0043f8e0(param_1,0x1a,0);
    }
  }
  if (((DAT_004eb39c == 0) && (DAT_004d6b48 != 0)) &&
     ((DAT_0050c950 != 7 || ((byte)DAT_00e35aa0 != 4)))) {
    FUN_00440550(0x54);
    DAT_004bfedc = 7;
    DAT_0050c47c = 1;
    if (DAT_0050c950 == 7) {
      DAT_0050c47c = 2;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    DAT_0050c944 = 0xffffffff;
    _DAT_0050c958 = 0x3ecccccd;
  }
  if (DAT_0050c538 < 2) {
    DAT_0050c538 = DAT_0050c538 + 1;
  }
  return;
}



void FUN_00439c70(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *param_4;
  undefined4 local_60 [8];
  undefined local_40 [64];

  puVar3 = local_60;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0049eb80(local_40,s__f4_c_s_s_004c0d24,local_60);
  uVar1 = __ftol(local_40);
  uVar1 = __ftol(0x32,0xffffffff,0xffffffff,uVar1);
  uVar1 = __ftol(uVar1);
  FUN_00450530(uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00439ce0(int param_1)

{
  undefined2 *puVar1;
  float fVar2;
  ushort uVar3;
  char cVar4;
  undefined uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  float *pfVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined2 uVar23;
  undefined4 uVar22;
  int local_168;
  undefined4 local_164;
  byte local_160;
  undefined local_159;
  float local_158 [2];
  int local_150 [20];
  undefined local_100 [256];

  local_159 = *(undefined *)(param_1 + 0x5e);
  local_158[0] = 3599.99;
  local_158[1] = 3599.99;
  DAT_00e295c8 = __ftol();
  local_160 = *(byte *)(param_1 + 0x8f);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    local_160 = 3;
  }
  uVar7 = FUN_00421360(s__SCREENTEXT_189__c_sResults_004c0d74);
  FUN_00450560(0xa0,0x14,uVar7);
  piVar19 = local_150;
  for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
    *piVar19 = 0;
    piVar19 = piVar19 + 1;
  }
  if (DAT_004c4000 != 0) {
    DAT_004c4000 = 0;
    _DAT_0050c1f4 = 2.0;
    iVar12 = 0;
    if (0 < (char)(&DAT_004bfee0)[*(char *)(param_1 + 0x5e)]) {
      piVar19 = (int *)(&DAT_004c0018 + *(char *)(param_1 + 0x5e) * 0x1c);
      do {
        if ((int)*(char *)(param_1 + 0x5d) == *piVar19) {
          DAT_0050c228 = (byte)iVar12;
          break;
        }
        iVar12 = iVar12 + 1;
        piVar19 = piVar19 + 1;
      } while (iVar12 < (char)(&DAT_004bfee0)[*(char *)(param_1 + 0x5e)]);
    }
    _DAT_0050c114 = 0.0;
    DAT_0050c53c = 0;
    local_168 = 0;
    puVar15 = &DAT_0050c180;
    for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    if ('\0' < *(char *)(param_1 + 0x72)) {
      puVar15 = &DAT_00e29bc0;
      do {
        local_150[local_168] = (int)puVar15;
        if (puVar15 == (undefined4 *)0x0) {
          *(char *)(param_1 + 0x72) = (char)local_168;
          break;
        }
        if ((3599.99 < (float)puVar15[0x1d]) || ((float)puVar15[0x1d] < 0.0)) {
          puVar15[0x1d] = 0x4560ffd7;
        }
        uVar18 = (uint)local_160;
        if (local_160 != 0) {
          pfVar17 = (float *)(puVar15 + 0x18);
          do {
            if ((3599.99 < *pfVar17) || (*pfVar17 < 0.0)) {
              *pfVar17 = 3599.99;
            }
            pfVar17 = pfVar17 + 1;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        (&DAT_0050c180)[local_168] = puVar15;
        local_168 = local_168 + 1;
        puVar15 = puVar15 + 0x22;
      } while (local_168 < *(char *)(param_1 + 0x72));
    }
    local_168 = 1;
    if ('\x01' < *(char *)(param_1 + 0x72)) {
      piVar19 = &DAT_0050c184;
      do {
        if (0x50c180 < (int)piVar19) {
          piVar8 = &DAT_0050c180;
          iVar12 = local_168;
          do {
            iVar20 = *piVar19;
            if (*(short *)(iVar20 + 0x5c) < *(short *)(*piVar8 + 0x5c)) {
              *piVar19 = *piVar8;
              *piVar8 = iVar20;
            }
            piVar8 = piVar8 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        local_168 = local_168 + 1;
        piVar19 = piVar19 + 1;
      } while (local_168 < *(char *)(param_1 + 0x72));
    }
    cVar4 = *(char *)(param_1 + 0x70);
    iVar12 = 0;
    local_164 = (int)cVar4;
    if (0 < local_164) {
      do {
        pfVar17 = local_158 + iVar12;
        *pfVar17 = *(float *)(local_150[iVar12] + 0x60);
        iVar20 = 1;
        if (1 < local_160) {
          pfVar13 = (float *)(local_150[iVar12] + 100);
          do {
            if (*pfVar13 <= 0.0) break;
            if (*pfVar13 < *pfVar17) {
              *pfVar17 = *pfVar13;
            }
            iVar20 = iVar20 + 1;
            pfVar13 = pfVar13 + 1;
          } while (iVar20 < (int)(uint)local_160);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_164);
    }
    if ((((_DAT_0050c540 & 1) == 0) && (DAT_00e35a81 == '\0')) &&
       ((((local_160 == 3 &&
          (*(float *)(local_150[0] + 0x74) <
           *(float *)(&DAT_00e365f4 +
                     ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4))) &&
         ((cVar4 == '\x01' || (*(float *)(local_150[0] + 0x74) < *(float *)(local_150[1] + 0x74)))))
        || ((local_158[0] <
             *(float *)(&DAT_00e366bc +
                       ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4) &&
            ((cVar4 == '\x01' || (local_158[0] < local_158[1])))))))) {
      _DAT_0050c540 = _DAT_0050c540 | 1;
      *(undefined *)(param_1 + 0x6f) = 0;
      FUN_00454d40(param_1,2);
      return;
    }
    if (((('\x01' < cVar4) && ((_DAT_0050c540 & 2) == 0)) && (DAT_00e35ad1 == '\0')) &&
       ((((local_160 == 3 &&
          (*(float *)(local_150[1] + 0x74) <
           *(float *)(&DAT_00e365f4 +
                     ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4))) &&
         (*(float *)(local_150[1] + 0x74) < *(float *)(local_150[0] + 0x74))) ||
        ((local_158[1] <
          *(float *)(&DAT_00e366bc +
                    ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 4) &&
         (local_158[1] < local_158[0])))))) {
      _DAT_0050c540 = _DAT_0050c540 | 2;
      *(undefined *)(param_1 + 0x6f) = 1;
      FUN_00454d40(param_1,2);
      return;
    }
    if (((_DAT_0050c540 & 4) == 0) && (iVar20 = 0, 0 < local_164)) {
      puVar21 = &DAT_00e35a84;
      do {
        if (((local_160 == 3) && (iVar10 = local_150[iVar20], *(float *)(iVar10 + 0x74) < 3599.99))
           && (iVar16 = (int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2,
              *(float *)(iVar10 + 0x74) < *(float *)(&DAT_00e365f4 + iVar16 * 4))) {
          iVar9 = 0;
          *(undefined4 *)(&DAT_00e365f4 + iVar16 * 4) = *(undefined4 *)(iVar10 + 0x74);
          do {
            (&DAT_00e36784)
            [iVar9 + ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 0x20] =
                 puVar21[iVar9 + -0x24];
            iVar9 = iVar9 + 1;
          } while (iVar9 < 0x20);
          (&DAT_00e37404)[*(char *)(param_1 + 0x5d) * 2 + (int)*(char *)(param_1 + 0x6e)] = *puVar21
          ;
        }
        if ((local_158[iVar20] < 3599.99) &&
           (iVar10 = (int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2,
           local_158[iVar20] < *(float *)(&DAT_00e366bc + iVar10 * 4))) {
          *(float *)(&DAT_00e366bc + iVar10 * 4) = local_158[iVar20];
          iVar10 = 0;
          do {
            (&DAT_00e36dc4)
            [iVar10 + ((int)*(char *)(param_1 + 0x6e) + *(char *)(param_1 + 0x5d) * 2) * 0x20] =
                 puVar21[iVar10 + -0x24];
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x20);
          (&DAT_00e37436)[*(char *)(param_1 + 0x5d) * 2 + (int)*(char *)(param_1 + 0x6e)] = *puVar21
          ;
        }
        iVar20 = iVar20 + 1;
        puVar21 = puVar21 + 0x50;
      } while (iVar20 < *(char *)(param_1 + 0x70));
    }
    _DAT_0050c540 = _DAT_0050c540 | 4;
    DAT_004c022c = *(char *)(local_150[0] + 0x5c);
    DAT_004c0230 = -1;
    iVar12 = CONCAT31((int3)((uint)iVar12 >> 8),*(char *)(param_1 + 0x70));
    cVar4 = DAT_004c022c;
    if ('\x01' < *(char *)(param_1 + 0x70)) {
      DAT_004c0230 = *(char *)(local_150[1] + 0x5c);
      iVar12 = CONCAT31((int3)((uint)local_150[1] >> 8),DAT_004c0230);
      if (DAT_004c0230 < DAT_004c022c) {
        cVar4 = DAT_004c0230;
      }
    }
    if ('\x03' < cVar4) {
      _DAT_0050c114 = (float)(cVar4 + -3) * -30.0;
      iVar12 = (int)*(char *)(param_1 + 0x72);
      fVar2 = 150.0 - (float)iVar12 * 30.0;
      local_164 = iVar12;
      if (_DAT_0050c114 < fVar2) {
        _DAT_0050c114 = fVar2;
      }
    }
    if (((*(char *)(param_1 + 0x70) == '\x01') && (*(char *)(param_1 + 0x6c) != '\0')) &&
       ('\x03' < *(char *)(param_1 + 0x72))) {
      iVar20 = 0;
      uVar18 = (int)*(char *)(param_1 + 0x72) - 1;
      if (0 < (int)uVar18) {
        piVar19 = &DAT_0050c184;
        do {
          iVar12 = piVar19[-1];
          if (*(float *)(*piVar19 + 0x74) == *(float *)(iVar12 + 0x74)) {
            puVar1 = (undefined2 *)(iVar12 + 0x5c);
            iVar12 = CONCAT22((short)((uint)iVar12 >> 0x10),*puVar1);
            *(undefined2 *)(*piVar19 + 0x5c) = *puVar1;
          }
          iVar20 = iVar20 + 1;
          piVar19 = piVar19 + 1;
          uVar18 = (int)*(char *)(param_1 + 0x72) - 1;
        } while (iVar20 < (int)uVar18);
      }
      if (((DAT_004c022c == '\x01') &&
          (uVar18 = CONCAT31((int3)(uVar18 >> 8),*(char *)(param_1 + 0x6c)),
          *(char *)(param_1 + 0x6c) != '\0')) && ((_DAT_0050c540 & 8) == 0)) {
        cVar4 = *(char *)(param_1 + 0x5d);
        iVar12 = CONCAT31((int3)((uint)iVar12 >> 8),cVar4);
        uVar18 = (uint)cVar4;
        bVar11 = (&DAT_004bfef2)[uVar18 * 0xc];
        if ((bVar11 == 2) && (cVar4 != '\x01')) {
          bVar11 = 0;
        }
        if (('\0' < (char)bVar11) && (uVar18 = 1 << (bVar11 & 0x1f), (uVar18 & DAT_00e35a94) == 0))
        {
          DAT_00e35a94 = DAT_00e35a94 | uVar18;
          DAT_00e364b0 = DAT_00e364b0 | DAT_00e35a94;
          FUN_0044e560();
          _DAT_0050c540 = _DAT_0050c540 | 8;
          FUN_00454d40(param_1,0x11);
          return;
        }
      }
      cVar4 = FUN_00440a00(CONCAT31((int3)(uVar18 >> 8),*(undefined *)(param_1 + 0x5e)),
                           CONCAT31((int3)((uint)iVar12 >> 8),DAT_0050c228));
      if (DAT_004c022c <= cVar4) {
        local_164 = CONCAT31(local_164._1_3_,*(char *)(param_1 + 0x5e));
        iVar12 = (int)(&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] >> ((DAT_0050c228 & 0xf) << 1);
        uVar3 = (ushort)(iVar12 >> 0x1f);
        iVar20 = FUN_00440a20(local_164,CONCAT31((int3)(iVar12 >> 0x1f),DAT_0050c228));
        if (iVar20 != 0) {
          DAT_0050c53c = (int)*(short *)(param_1 +
                                        (DAT_004c022c + 0x44 + *(char *)(param_1 + 0x91) * 4) * 2);
          DAT_0050c53c = __ftol();
          DAT_00e35a98 = DAT_00e35a98 + DAT_0050c53c;
          bVar11 = *(byte *)(param_1 + 0x5e);
          if ((char)bVar11 < '\x03') {
            iVar20 = (int)(char)bVar11;
            iVar10 = (int)(char)DAT_0050c228;
            if ((iVar10 == (char)(&DAT_004bfee0)[iVar20] + -1) &&
               ((DAT_00e35a88 & (byte)(1 << (bVar11 & 0x1f))) == 0)) {
              local_159 = 3;
              DAT_00e35a88 = DAT_00e35a88 | '\x01' << (bVar11 & 0x1f);
              iVar20 = (int)*(char *)(param_1 + 0x5e);
              *(undefined1 *)(param_1 + 0x5d) = (&DAT_004c006c)[iVar20 * 4];
            }
            else if ((iVar10 < (char)(&DAT_004bfee0)[iVar20] + -1) &&
                    (((&DAT_00e35a85)[iVar20] & (byte)(1 << (DAT_0050c228 + 1 & 0x1f))) == 0)) {
              *(undefined *)(param_1 + 0x5d) = (&DAT_004c001c)[(iVar20 * 7 + iVar10) * 4];
            }
            (&DAT_00e35a85)[iVar20] = (&DAT_00e35a85)[iVar20] | '\x01' << (DAT_0050c228 + 1 & 0x1f);
          }
          FUN_0043d720(param_1,&DAT_00e29bc0);
        }
        if (((int)(char)DAT_0050c228 == (char)(&DAT_004bfee0)[*(char *)(param_1 + 0x5e)] + -1) &&
           (*(char *)(param_1 + 0x5e) == '\x02')) {
          FUN_00440c10(param_1);
        }
        cVar4 = DAT_004c022c;
        if ((int)(short)((((ushort)iVar12 ^ uVar3) - uVar3 & 3 ^ uVar3) - uVar3) < 4 - DAT_004c022c)
        {
          bVar11 = (byte)((char)DAT_0050c228 * 2);
          iVar12 = (char)DAT_0050c228 * 2 + 1;
          (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] =
               (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] & ~(ushort)(1 << (bVar11 & 0x1f));
          (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] =
               (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] & ~(ushort)(1 << ((byte)iVar12 & 0x1f));
          (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] =
               (&DAT_00e35a8a)[*(char *)(param_1 + 0x5e)] |
               (ushort)(4 - CONCAT22((short)((uint)iVar12 >> 0x10),(short)cVar4) << (bVar11 & 0x1f))
          ;
          if (((DAT_00e35a8a == 0x3fff) && (DAT_00e35a8c == 0x3fff)) && (DAT_00e35a8e == 0x3fff)) {
            if ((DAT_00e35a88 & 8) == 0) {
              DAT_00e35a88 = DAT_00e35a88 | 8;
              local_159 = 3;
              *(undefined *)(param_1 + 0x5d) = DAT_004c0078;
            }
            else if ((DAT_00e35a90 == 0xff) && ((_DAT_00e364a8 & 0x20) == 0)) {
              _DAT_00e364a8 = _DAT_00e364a8 | 0x20;
            }
          }
        }
      }
      iVar12 = 0;
      do {
        if ((byte)(&DAT_00e364ac)[iVar12] < (byte)(&DAT_00e35a85)[iVar12]) {
          (&DAT_00e364ac)[iVar12] = (&DAT_00e35a85)[iVar12];
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 4);
    }
    *(undefined *)(param_1 + 0x5e) = local_159;
    FUN_0044e560();
  }
  if ((0.0 < _DAT_0050c1f4) && (_DAT_0050c1f4 = _DAT_0050c1f4 - _DAT_00e22a50, _DAT_0050c1f4 <= 0.0)
     ) {
    FUN_00426c80(0xb6,7,0x3e800000,0x3f800000,0);
  }
  iVar12 = 0;
  if ('\0' < *(char *)(param_1 + 0x72)) {
    piVar19 = &DAT_0050c180;
    local_164 = 0x1e;
    do {
      iVar20 = **(int **)(*piVar19 + 0x18);
      iVar10 = iVar20;
      if (0x1e < local_164) {
        piVar8 = &DAT_0050c180;
        iVar16 = iVar12;
        do {
          if (iVar20 == **(int **)(*piVar8 + 0x18)) {
            iVar10 = iVar10 + 0x17;
          }
          piVar8 = piVar8 + 1;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      FUN_004285d0(iVar10,1);
      uVar7 = __ftol();
      FUN_00428660(iVar10,0x1e,uVar7);
      FUN_004286f0(iVar10,0x3f000000,0x3f000000);
      uVar5 = __ftol();
      FUN_00428740(iVar10,0xffffffff,0xffffffff,0xffffffff,uVar5);
      uVar23 = (undefined2)((uint)iVar10 >> 0x10);
      if ((iVar12 == DAT_004c022c + -1) || (iVar12 == DAT_004c0230 + -1)) {
        uVar7 = FUN_00421360(s__r_s_d__004c0d6c,(int)*(short *)(*piVar19 + 0x5c));
        FUN_0049eb80(local_100,uVar7);
        uVar6 = __ftol();
        uVar22 = CONCAT22(uVar23,uVar6);
        FUN_00450530(0x58,uVar22,0xffffffa3,0xffffffbe,0x11,uVar5,local_100);
        uVar7 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)
                             [**(int **)(*piVar19 + 0x18) * 0xd]);
        uVar7 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)
                             [**(int **)(*piVar19 + 0x18) * 0xd],uVar7);
        uVar7 = FUN_00421360(s__f4_s_s__s_004c0d60,uVar7);
        FUN_0049eb80(local_100,uVar7);
        uVar7 = __ftol(0xffffffa3,0xffffffbe,0x11,uVar5,local_100);
        FUN_00450530(0x5c,uVar7);
        FUN_004505f0(0x109,uVar22,*(undefined4 *)(*piVar19 + 0x74),0xffffffa3,0xffffffbe,0x11,uVar5,
                     1);
        if (iVar12 == DAT_004c022c + -1) {
          puVar21 = &DAT_00e35a60;
        }
        else {
          puVar21 = &DAT_00e35ab0;
        }
        FUN_0049eb80(local_100,s__f4_s_s_004c0d58,puVar21);
        uVar7 = __ftol(0xffffffa3,0xffffffbe,0x11,uVar5,local_100);
        FUN_00450530(100,uVar7);
      }
      else {
        uVar7 = FUN_00421360(s__r_s_d__004c0d6c,(int)*(short *)(*piVar19 + 0x5c));
        FUN_0049eb80(local_100,uVar7);
        uVar6 = __ftol();
        uVar22 = CONCAT22(uVar23,uVar6);
        FUN_00450530(0x58,uVar22,0x32,0xffffffff,0xffffffff,uVar5,local_100);
        uVar7 = FUN_00421360((&PTR_s__SCREENTEXT_323___Skywalker_004c2718)
                             [**(int **)(*piVar19 + 0x18) * 0xd]);
        uVar7 = FUN_00421360((&PTR_s__SCREENTEXT_322___Anakin_004c2714)
                             [**(int **)(*piVar19 + 0x18) * 0xd],uVar7);
        uVar7 = FUN_00421360(s__f4_s_s__s_004c0d60,uVar7);
        FUN_0049eb80(local_100,uVar7);
        uVar7 = __ftol(0x32,0xffffffff,0xffffffff,uVar5,local_100);
        FUN_00450530(0x5c,uVar7);
        FUN_004505f0(0x109,uVar22,*(undefined4 *)(*piVar19 + 0x74),0x32,0xffffffff,0xffffffff,uVar5,
                     1);
      }
      iVar12 = iVar12 + 1;
      local_164 = local_164 + 0x1e;
      piVar19 = piVar19 + 1;
    } while (iVar12 < *(char *)(param_1 + 0x72));
  }
  if ('\x04' < *(char *)(param_1 + 0x72)) {
    FUN_0043fe90(0x122,0x1e,0x90);
  }
  if (0 < DAT_0050c53c) {
    uVar7 = FUN_00421360(s__SCREENTEXT_575__c_sYou_won__d_T_004c0d30,DAT_0050c53c);
    FUN_0049eb80(local_100,uVar7);
    FUN_00450560(0x87,0xcd,local_100);
    FUN_00457140(0,0x40e00000,0xc0e00000,0x3f800000);
  }
  local_168 = 0;
  iVar12 = DAT_004bfedc;
  if ('\0' < *(char *)(param_1 + 0x70)) {
    pfVar17 = (float *)&DAT_00e98e80;
    do {
      if ((DAT_004d6b40 != 0) || (DAT_004d6b44 != 0)) {
        uVar7 = FUN_00411480(1);
        FUN_00414e60(uVar7);
        FUN_00440550(0x54);
        if (*(char *)(param_1 + 0x6c) == '\0') {
          iVar12 = FUN_0041d6b0();
          iVar12 = (-(uint)(iVar12 != 0) & 0xfffffff5) + 0xc;
          DAT_004bfedc = iVar12;
        }
        else if ((DAT_004c022c < '\x04') && (DAT_0050c228 == 6)) {
          piVar19 = &DAT_0050c180;
          puVar14 = (undefined *)(param_1 + 0xcc);
          do {
            iVar12 = *piVar19;
            piVar19 = piVar19 + 1;
            *puVar14 = **(undefined **)(iVar12 + 0x18);
            puVar14 = puVar14 + 1;
          } while ((int)piVar19 < 0x50c18c);
          iVar12 = 0x10;
          DAT_004bfedc = iVar12;
        }
        else {
          iVar12 = 0xc;
          DAT_004bfedc = iVar12;
        }
      }
      DAT_00e295c4 = 0;
      DAT_00e295c0 = 0;
      if ('\x04' < *(char *)(param_1 + 0x72)) {
        if ((*pfVar17 < -0.1) || (0.1 < *pfVar17)) {
          _DAT_0050c114 = _DAT_0050c114 - *pfVar17 * _DAT_00e22a50 * -300.0;
          if (0.0 < _DAT_0050c114) {
            _DAT_0050c114 = 0.0;
          }
          fVar2 = 150.0 - (float)(int)*(char *)(param_1 + 0x72) * 30.0;
          if (_DAT_0050c114 < fVar2) {
            _DAT_0050c114 = fVar2;
          }
        }
        DAT_00e295c0 = (uint)(_DAT_0050c114 < 0.0);
        if ((float)DAT_00e295c8 < _DAT_0050c114) {
          DAT_00e295c4 = 1;
        }
      }
      pfVar17 = pfVar17 + 1;
      local_168 = local_168 + 1;
    } while (local_168 < *(char *)(param_1 + 0x70));
  }
  if (iVar12 != -1) {
    _DAT_0050c540 = 0;
    DAT_0050c944 = 0xffffffff;
  }
  return;
}
#endif
