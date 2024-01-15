#include "prototype.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
        FUN_0042f380(((float)(int)local_1e4 * (float)_DAT_004ac740 - (float)_DAT_004ac748) *
                     (float)_DAT_00e22a38 * (float)_DAT_004ac750,local_100 + (int)local_1e4,
                     local_20 + (int)local_1e4 * 4);
        local_1e4 = (float)((int)fVar2 + 1);
      } while ((uint)local_1e4 < 8);
    }
    if (param_3 != 0) {
      fVar2 = *(float *)(&DAT_004c271c + iVar4 * 0x34);
      if ((fVar2 < (float)_DAT_004ac758) || (_DAT_004ac760 < fVar2)) {
        fVar2 = _DAT_004ac764;
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
          FUN_0042fa80(local_174,local_174,local_100[3] * _DAT_004ac768,local_184);
          FUN_0042f7d0(&local_1f0,local_194);
          FUN_0042f9b0(&local_1f0);
          FUN_00431390(local_1a4,local_100[1] * _DAT_004ac760,local_1f0,local_1ec,local_1e8,
                       local_1a4);
        }
        FUN_00431640(iVar3,local_1a4);
        FUN_00431a50(iVar3,2,3,0x10,2);
        iVar3 = param_1[3];
        if (iVar3 != 0) {
          FUN_0042f7d0(&local_164,&DAT_004c7a40);
          FUN_00430980(&local_1f0,&local_164,local_60);
          FUN_0042f830(local_174,local_174,&local_1f0);
          if (param_8 != 0) {
            FUN_0042fa80(local_174,local_174,local_100[3] * _DAT_004ac768,local_184);
            FUN_0042f7d0(&local_1f0,local_194);
            FUN_0042f9b0(&local_1f0);
            FUN_00431390(local_1a4,local_100[1] * _DAT_004ac760,local_1f0,local_1ec,local_1e8,
                         local_1a4);
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
          FUN_0042fa80(local_174,local_174,local_f0 * _DAT_004ac768,local_184);
          FUN_0042f7d0(&local_1f0,local_194);
          FUN_0042f9b0(&local_1f0);
          FUN_00431390(local_1a4,local_100[2] * _DAT_004ac760,local_1f0,local_1ec,local_1e8,
                       local_1a4);
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
            FUN_0042fa80(local_174,local_174,local_100[2] * _DAT_004ac768,local_184);
            FUN_0042f7d0(&local_1f0,local_194);
            FUN_0042f9b0(&local_1f0);
            FUN_00431390(local_1a4,local_100[0] * _DAT_004ac760,local_1f0,local_1ec,local_1e8,
                         local_1a4);
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
          local_16c = param_6 * _DAT_004ac76c + (float)(int)local_1e4 + param_7;
          FUN_0042fa80(local_174,local_174,local_ec * _DAT_004ac770,local_184);
          FUN_0042f7d0(&local_1f0,local_194);
          FUN_0042f9b0(&local_1f0);
          FUN_00431390(local_1a4,local_100[1] * _DAT_004ac774,local_1f0,local_1ec,local_1e8,
                       local_1a4);
        }
        FUN_00431640(iVar3,local_1a4);
        FUN_00431a50(iVar3,2,3,0x10,2);
        if (local_160 == _DAT_004ac778) {
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
        FUN_00431450(local_158,param_4 * _DAT_004ac77c,local_1e4 * _DAT_004ac780,
                     param_6 * _DAT_004ac77c,local_158);
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
        FUN_00431450(local_158,param_4 * _DAT_004ac77c,local_1e4 * _DAT_004ac780,
                     param_6 * _DAT_004ac77c,local_158);
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
        FUN_00431450(local_158,param_4 * _DAT_004ac77c,local_1e4 * _DAT_004ac780,
                     param_6 * _DAT_004ac77c,local_158);
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
        FUN_00431450(local_158,param_4 * _DAT_004ac77c,local_1e4 * _DAT_004ac780,
                     param_6 * _DAT_004ac77c,local_158);
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
        FUN_0042fa80(local_174,local_174,local_100[3] * _DAT_004ac768,local_184);
      }
      FUN_00431640(iVar4,local_1a4);
    }
    FUN_00431a50(iVar4,2,3,0x10,2);
  }
  return;
}

