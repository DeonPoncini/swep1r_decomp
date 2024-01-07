#include "prototype.h"
#include "constants.h"
#include "global.h"
#include "types.h"

#if 0
void FUN_0042f380(float param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;

  fVar1 = (float10)param_1 * (float10)3.141592653589793 * (float10)0.005555555555555556;
  fVar2 = (float10)fcos(fVar1);
  fVar1 = (float10)fsin(fVar1);
  *param_3 = (float)fVar2;
  *param_2 = (float)fVar1;
  return;
}



float10 FUN_0042f3b0(float param_1)

{
  float local_4;

  FUN_0042f380(param_1,&param_1,&local_4);
  return (float10)param_1 / (float10)local_4;
}



float10 FUN_0042f3e0(float param_1)

{
  float fVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_4;

  if (0.999999 < param_1) {
    return (float10)90.0;
  }
  if (param_1 < -0.999999) {
    return (float10)-90.0;
  }
  if ((0.7071068 <= param_1) || (param_1 <= -0.7071068)) {
    local_4 = param_1;
    bVar2 = true;
    fVar1 = 1.0 - param_1 * param_1;
    if (0.0 <= param_1) {
      fVar3 = (float10)FUN_00480670(fVar1);
    }
    else {
      fVar3 = (float10)FUN_00480670(fVar1);
      fVar3 = -fVar3;
    }
    param_1 = (float)fVar3;
  }
  else {
    bVar2 = false;
  }
  if ((0.001 <= param_1) || (param_1 <= -0.001)) {
    fVar1 = (float)((float10)param_1 * (float10)param_1);
    fVar3 = (float10)param_1 * (float10)param_1 * (float10)param_1;
    fVar4 = fVar3 * (float10)fVar1;
    fVar5 = fVar4 * (float10)fVar1;
    fVar3 = (float10)param_1 -
            ((float10)(float)fVar5 * (float10)-0.04464286 +
            fVar4 * (float10)-0.075 +
            fVar3 * (float10)-0.1666667 + fVar5 * (float10)fVar1 * (float10)-0.047446);
  }
  else {
    fVar3 = (float10)param_1;
  }
  fVar3 = fVar3 * (float10)180.0 * (float10)0.3183098861837907;
  if (bVar2) {
    if (local_4 < 0.0) {
      return (float10)-90.0 - fVar3;
    }
    fVar3 = (float10)90.0 - fVar3;
  }
  return fVar3;
}



float10 FUN_0042f540(undefined4 param_1)

{
  float10 fVar1;

  fVar1 = (float10)FUN_0042f3e0(param_1);
  return (float10)90.0 - fVar1;
}



float10 FUN_0042f560(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;

  if ((0.0001 <= param_2) || (param_2 < -0.0001)) {
    if ((0.0001 <= param_1) || (param_1 < -0.0001)) {
      fVar2 = param_1;
      if (param_1 < 0.0) {
        fVar2 = -param_1;
      }
      fVar4 = param_2;
      if (param_2 < 0.0) {
        fVar4 = -param_2;
      }
      fVar1 = fVar4;
      fVar3 = fVar2;
      if (fVar4 < fVar2) {
        fVar1 = fVar2;
        fVar3 = fVar4;
      }
      fVar3 = fVar3 / fVar1;
      if ((0.0001 <= fVar3) || (fVar3 < -0.0001)) {
        fVar1 = (float)((float10)fVar3 * (float10)fVar3);
        fVar5 = (float10)fVar3 * (float10)fVar3 * (float10)fVar3;
        fVar6 = fVar5 * (float10)fVar1;
        fVar7 = fVar6 * (float10)fVar1;
        fVar5 = (((((float10)fVar3 - fVar5 * (float10)0.3333333) - fVar6 * (float10)-0.2) -
                 (float10)(float)fVar7 * (float10)0.1428571) -
                fVar7 * (float10)fVar1 * (float10)-0.063235) * (float10)180.0 *
                (float10)0.3183098861837907;
      }
      else {
        fVar5 = (float10)0.0;
      }
      if (fVar4 < fVar2) {
        fVar5 = (float10)90.0 - fVar5;
      }
    }
    else {
      fVar5 = (float10)0.0;
    }
  }
  else {
    fVar5 = (float10)90.0;
  }
  if (param_2 < -0.0001) {
    fVar5 = (float10)180.0 - fVar5;
  }
  if (param_1 < -0.0001) {
    fVar5 = -fVar5;
  }
  return fVar5;
}



// rdVector_Add2
void FUN_0042f6e0(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_3 + *param_2;
  param_1[1] = param_2[1] + param_3[1];
  return;
}


// rdVector_Scale2
void FUN_0042f700(float *param_1,float param_2,float *param_3)

{
  *param_1 = *param_3 * param_2;
  param_1[1] = param_3[1] * param_2;
  return;
}


// rdVector_Scale2Add2
void FUN_0042f720(float *param_1,float *param_2,float param_3,float *param_4)

{
  *param_1 = *param_4 * param_3 + *param_2;
  param_1[1] = param_4[1] * param_3 + param_2[1];
  return;
}


// rdVector_Len2 // vector norm
void FUN_0042f750(float *param_1)

{
  FUN_00480670(*param_1 * *param_1 + param_1[1] * param_1[1]);
  return;
}


// rdVector_Normalize2Acc
void FUN_0042f780(float *param_1)

{
  float10 fVar1;

  fVar1 = (float10)FUN_0042f750(param_1);
  if ((float10)0.0001 <= fVar1) {
    *param_1 = (float)((float10)*param_1 / fVar1);
    param_1[1] = (float)((float10)param_1[1] / fVar1);
  }
  return;
}


// rdVector_Copy3
void FUN_0042f7b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}


// rdVector_Copy3
void FUN_0042f7d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


// rdVector_AreSame3
undefined4 FUN_0042f7f0(float *param_1,float *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}


// rdVector_Add3
void FUN_0042f830(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_3 + *param_2;
  param_1[1] = param_3[1] + param_2[1];
  param_1[2] = param_3[2] + param_2[2];
  return;
}


// rdVector_Sub3
void FUN_0042f860(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_2 - *param_3;
  param_1[1] = param_2[1] - param_3[1];
  param_1[2] = param_2[2] - param_3[2];
  return;
}


// rdVector_Dot3
float10 FUN_0042f890(float *param_1,float *param_2)

{
  return (float10)*param_2 * (float10)*param_1 +
         (float10)param_1[2] * (float10)param_2[2] + (float10)param_1[1] * (float10)param_2[1];
}


// rdVector_Len3
void FUN_0042f8c0(float *param_1)

{
  FUN_00480670(*param_1 * *param_1 + param_1[2] * param_1[2] + param_1[1] * param_1[1]);
  return;
}


// rdVector_DistSquared3
float10 FUN_0042f910(float *param_1,float *param_2)

{
  return ((float10)param_1[2] - (float10)param_2[2]) * ((float10)param_1[2] - (float10)param_2[2]) +
         ((float10)param_1[1] - (float10)param_2[1]) *
         (float10)(float)((float10)param_1[1] - (float10)param_2[1]) +
         ((float10)*param_1 - (float10)*param_2) *
         (float10)(float)((float10)*param_1 - (float10)*param_2);
}


// rdVector_Dist3
void FUN_0042f950(float *param_1,float *param_2)

{
  FUN_00480670((param_2[2] - param_1[2]) * (param_2[2] - param_1[2]) +
               (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
               (*param_2 - *param_1) * (*param_2 - *param_1));
  return;
}


// rdVector_Normalize3
void FUN_0042f9b0(float *param_1)

{
  float10 fVar1;

  fVar1 = (float10)FUN_0042f8c0(param_1);
  if ((float10)0.0001 <= fVar1) {
    *param_1 = (float)((float10)*param_1 / fVar1);
    param_1[1] = (float)((float10)param_1[1] / fVar1);
    param_1[2] = (float)((float10)param_1[2] / fVar1);
  }
  return;
}


// rdVector_Cross3
void FUN_0042f9f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar4 = param_3[1];
  fVar5 = param_2[2];
  fVar6 = param_2[1];
  fVar7 = param_2[1];
  fVar8 = param_3[1];
  param_1[1] = *param_3 * param_2[2] - *param_2 * param_3[2];
  param_1[2] = fVar1 * fVar4 - fVar2 * fVar6;
  *param_1 = fVar3 * fVar7 - fVar5 * fVar8;
  return;
}


// rdVector_Scale3
void FUN_0042fa50(float *param_1,float param_2,float *param_3)

{
  *param_1 = *param_3 * param_2;
  param_1[1] = param_3[1] * param_2;
  param_1[2] = param_3[2] * param_2;
  return;
}


// rdVector_SCale3Add3
void FUN_0042fa80(float *param_1,float *param_2,float param_3,float *param_4)

{
  *param_1 = *param_4 * param_3 + *param_2;
  param_1[1] = param_4[1] * param_3 + param_2[1];
  param_1[2] = param_4[2] * param_3 + param_2[2];
  return;
}


// rdVector_Scale3Add3
void FUN_0042fac0(float *param_1,float param_2,float *param_3,float param_4,float *param_5)

{
  *param_1 = *param_5 * param_4 + *param_3 * param_2;
  param_1[1] = param_5[1] * param_4 + param_3[1] * param_2;
  param_1[2] = param_5[2] * param_4 + param_3[2] * param_2;
  return;
}



void FUN_0042fb10(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)(param_2 * 0x10 + param_1);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return;
}



void FUN_0042fb40(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)(param_2 * 0x10 + param_1);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  param_3[2] = puVar1[2];
  return;
}


// rdMatrix_Multiply44
void FUN_0042fb70(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;

  fVar9 = param_2[2];
  fVar10 = param_2[3];
  fVar1 = *param_3;
  fVar11 = param_2[4];
  fVar2 = param_3[1];
  fVar3 = param_3[4];
  fVar12 = param_2[5];
  fVar4 = param_3[5];
  fVar13 = param_2[6];
  fVar5 = *param_2;
  fVar6 = param_3[8];
  fVar14 = param_2[7];
  fVar7 = param_2[1];
  fVar15 = param_2[8];
  fVar16 = param_2[9];
  fVar8 = param_3[9];
  fVar17 = param_2[10];
  fVar18 = param_2[0xb];
  fVar19 = param_2[0xc];
  fVar20 = param_2[0xd];
  fVar21 = param_2[0xe];
  fVar22 = param_3[2];
  fVar23 = param_3[6];
  fVar24 = param_2[0xf];
  fVar25 = param_3[10];
  fVar26 = param_3[3];
  fVar27 = param_3[0xc];
  fVar28 = param_3[7];
  fVar29 = param_3[0xe];
  fVar30 = param_3[0xb];
  fVar31 = param_3[0xd];
  fVar32 = param_3[0xf];
  *param_1 = fVar27 * fVar10 + fVar6 * fVar9 + fVar3 * fVar7 + fVar1 * fVar5;
  param_1[1] = fVar31 * fVar10 + fVar8 * fVar9 + fVar4 * fVar7 + fVar2 * fVar5;
  param_1[2] = fVar29 * fVar10 + fVar25 * fVar9 + fVar23 * fVar7 + fVar22 * fVar5;
  param_1[3] = fVar32 * fVar10 + fVar30 * fVar9 + fVar28 * fVar7 + fVar26 * fVar5;
  param_1[4] = fVar27 * fVar14 + fVar6 * fVar13 + fVar3 * fVar12 + fVar1 * fVar11;
  param_1[5] = fVar31 * fVar14 + fVar8 * fVar13 + fVar4 * fVar12 + fVar2 * fVar11;
  param_1[6] = fVar29 * fVar14 + fVar25 * fVar13 + fVar23 * fVar12 + fVar22 * fVar11;
  param_1[7] = fVar32 * fVar14 + fVar30 * fVar13 + fVar28 * fVar12 + fVar26 * fVar11;
  param_1[8] = fVar27 * fVar18 + fVar6 * fVar17 + fVar3 * fVar16 + fVar1 * fVar15;
  param_1[9] = fVar31 * fVar18 + fVar8 * fVar17 + fVar4 * fVar16 + fVar2 * fVar15;
  param_1[10] = fVar29 * fVar18 + fVar25 * fVar17 + fVar23 * fVar16 + fVar22 * fVar15;
  param_1[0xb] = fVar32 * fVar18 + fVar30 * fVar17 + fVar28 * fVar16 + fVar26 * fVar15;
  param_1[0xc] = fVar27 * fVar24 + fVar6 * fVar21 + fVar3 * fVar20 + fVar1 * fVar19;
  param_1[0xd] = fVar31 * fVar24 + fVar8 * fVar21 + fVar4 * fVar20 + fVar2 * fVar19;
  param_1[0xe] = fVar29 * fVar24 + fVar25 * fVar21 + fVar23 * fVar20 + fVar22 * fVar19;
  param_1[0xf] = fVar32 * fVar24 + fVar30 * fVar21 + fVar28 * fVar20 + fVar26 * fVar19;
  return;
}


// rdMatrix_Multiply44Acc
void FUN_0042ff80(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;

  fVar1 = param_1[8];
  fVar2 = param_1[0xc];
  fVar3 = param_1[4];
  fVar4 = *param_1;
  fVar9 = param_1[9];
  fVar5 = param_1[5];
  fVar10 = param_1[0xd];
  fVar11 = param_1[10];
  *param_1 = *param_2 * fVar4 + fVar3 * param_2[1] + fVar2 * param_2[3] + fVar1 * param_2[2];
  fVar12 = param_1[0xe];
  fVar6 = param_1[1];
  fVar7 = param_1[6];
  fVar13 = param_1[3];
  param_1[1] = *param_2 * fVar6 + fVar5 * param_2[1] + fVar10 * param_2[3] + fVar9 * param_2[2];
  fVar14 = param_1[7];
  fVar8 = param_1[2];
  fVar15 = param_1[0xb];
  fVar16 = param_1[0xf];
  param_1[2] = *param_2 * fVar8 + fVar7 * param_2[1] + fVar12 * param_2[3] + fVar11 * param_2[2];
  param_1[3] = *param_2 * fVar13 + fVar14 * param_2[1] + fVar16 * param_2[3] + fVar15 * param_2[2];
  param_1[4] = fVar4 * param_2[4] + fVar2 * param_2[7] + fVar1 * param_2[6] + fVar3 * param_2[5];
  param_1[5] = fVar6 * param_2[4] + fVar10 * param_2[7] + fVar9 * param_2[6] + fVar5 * param_2[5];
  param_1[6] = fVar8 * param_2[4] + fVar12 * param_2[7] + fVar11 * param_2[6] + fVar7 * param_2[5];
  param_1[7] = fVar13 * param_2[4] + fVar16 * param_2[7] + fVar15 * param_2[6] + fVar14 * param_2[5]
  ;
  param_1[8] = fVar1 * param_2[10] + fVar3 * param_2[9] + fVar4 * param_2[8] + fVar2 * param_2[0xb];
  param_1[9] = fVar9 * param_2[10] + fVar5 * param_2[9] + fVar6 * param_2[8] + fVar10 * param_2[0xb]
  ;
  param_1[10] = fVar11 * param_2[10] +
                fVar7 * param_2[9] + fVar8 * param_2[8] + fVar12 * param_2[0xb];
  param_1[0xb] = fVar15 * param_2[10] +
                 fVar14 * param_2[9] + fVar13 * param_2[8] + fVar16 * param_2[0xb];
  param_1[0xc] = fVar3 * param_2[0xd] +
                 fVar4 * param_2[0xc] + fVar2 * param_2[0xf] + fVar1 * param_2[0xe];
  param_1[0xd] = fVar5 * param_2[0xd] +
                 fVar6 * param_2[0xc] + fVar10 * param_2[0xf] + fVar9 * param_2[0xe];
  param_1[0xe] = fVar7 * param_2[0xd] +
                 fVar8 * param_2[0xc] + fVar12 * param_2[0xf] + fVar11 * param_2[0xe];
  param_1[0xf] = fVar14 * param_2[0xd] +
                 fVar13 * param_2[0xc] + fVar16 * param_2[0xf] + fVar15 * param_2[0xe];
  return;
}



void FUN_00430310(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar4 = param_2[6] * param_2[6] + param_2[5] * param_2[5] + param_2[4] * param_2[4];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar5 = param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8];
  param_1[1] = param_2[4] / fVar4;
  param_1[2] = param_2[8] / fVar5;
  param_1[6] = param_2[9] / fVar5;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  param_1[4] = param_2[1] / fVar1;
  param_1[8] = param_2[2] / fVar1;
  param_1[9] = param_2[6] / fVar4;
  *param_1 = *param_2 / fVar1;
  param_1[5] = param_2[5] / fVar4;
  fVar1 = param_2[10];
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  param_1[10] = fVar1 / fVar5;
  fVar2 = param_2[0xc];
  fVar1 = param_2[0xe];
  fVar3 = param_2[0xd];
  param_1[0xc] = -(*param_1 * fVar2 + fVar3 * param_1[4] + fVar1 * param_1[8]);
  param_1[0xd] = -(fVar3 * param_1[5] + fVar2 * param_1[1] + fVar1 * param_1[9]);
  param_1[0xe] = -(fVar1 * param_1[10] + fVar3 * param_1[6] + fVar2 * param_1[2]);
  return;
}



undefined4 FUN_004304c0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float local_28;
  float *local_24;
  float *local_20;
  int local_18;
  float local_c [3];

  local_20 = local_c;
  iVar8 = 0;
  pfVar10 = param_2;
  do {
    iVar6 = 0;
    local_28 = 0.0;
    pfVar5 = pfVar10;
    do {
      *(float *)(((int)param_1 - (int)param_2) + (int)pfVar5) = *pfVar5;
      fVar1 = *pfVar5;
      if (*pfVar5 < 0.0) {
        fVar1 = -fVar1;
      }
      if (local_28 < fVar1) {
        if (fVar1 == 0.0) {
          return 0;
        }
        *local_20 = 1.0 / fVar1;
        local_28 = fVar1;
      }
      iVar6 = iVar6 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar6 < 3);
    iVar8 = iVar8 + 1;
    pfVar10 = pfVar10 + 4;
    local_20 = local_20 + 1;
  } while (iVar8 < 3);
  iVar6 = 0;
  iVar8 = (int)param_3 - (int)param_1;
  local_20 = param_1;
  local_24 = param_1;
  pfVar10 = param_1;
  while( true ) {
    iVar9 = 0;
    pfVar5 = param_1;
    pfVar3 = pfVar10;
    if (0 < iVar6) {
      do {
        fVar1 = *pfVar3;
        pfVar2 = pfVar10;
        pfVar4 = pfVar5;
        iVar7 = iVar9;
        if (0 < iVar9) {
          do {
            iVar7 = iVar7 + -1;
            fVar1 = fVar1 - *pfVar2 * *pfVar4;
            pfVar2 = pfVar2 + 4;
            pfVar4 = pfVar4 + 1;
          } while (iVar7 != 0);
        }
        *pfVar3 = fVar1;
        iVar9 = iVar9 + 1;
        pfVar5 = pfVar5 + 4;
        pfVar3 = pfVar3 + 4;
      } while (iVar9 < iVar6);
    }
    local_28 = 0.0;
    if (iVar6 < 3) {
      param_3 = (float *)(((int)local_c - (int)param_1) + (int)pfVar10);
      pfVar5 = local_20;
      pfVar3 = local_24;
      iVar9 = iVar6;
      do {
        fVar1 = *pfVar5;
        pfVar2 = pfVar10;
        pfVar4 = pfVar3;
        iVar7 = iVar6;
        if (0 < iVar6) {
          do {
            iVar7 = iVar7 + -1;
            fVar1 = fVar1 - *pfVar2 * *pfVar4;
            pfVar2 = pfVar2 + 4;
            pfVar4 = pfVar4 + 1;
          } while (iVar7 != 0);
        }
        *pfVar5 = fVar1;
        if (fVar1 < 0.0) {
          fVar1 = -fVar1;
        }
        if (local_28 <= fVar1 * *param_3) {
          local_28 = fVar1 * *param_3;
          local_18 = iVar9;
        }
        iVar9 = iVar9 + 1;
        pfVar3 = pfVar3 + 4;
        pfVar5 = pfVar5 + 4;
        param_3 = param_3 + 1;
      } while (iVar9 < 3);
    }
    if (iVar6 != local_18) {
      pfVar3 = param_1 + local_18 * 4;
      iVar9 = 3;
      pfVar5 = local_24;
      do {
        fVar1 = *pfVar3;
        *pfVar3 = *pfVar5;
        pfVar3 = pfVar3 + 1;
        *pfVar5 = fVar1;
        iVar9 = iVar9 + -1;
        pfVar5 = pfVar5 + 1;
      } while (iVar9 != 0);
      local_c[local_18] = *(float *)(((int)local_c - (int)param_1) + (int)pfVar10);
    }
    *(int *)(iVar8 + (int)pfVar10) = local_18;
    if (*local_20 == 0.0) break;
    if (iVar6 != 2) {
      fVar1 = *local_20;
      if (iVar6 + 1 < 3) {
        iVar9 = 3 - (iVar6 + 1);
        pfVar5 = (float *)((int)param_1 * -3 + 0x10 + (int)pfVar10 * 4 + iVar6 * 4);
        do {
          iVar9 = iVar9 + -1;
          *pfVar5 = *pfVar5 * (1.0 / fVar1);
          pfVar5 = pfVar5 + 4;
        } while (iVar9 != 0);
      }
    }
    iVar6 = iVar6 + 1;
    local_24 = local_24 + 4;
    pfVar10 = pfVar10 + 1;
    local_20 = local_20 + 5;
    if (2 < iVar6) {
      return 1;
    }
  }
  return 0;
}



void FUN_00430730(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;

  pfVar4 = param_3;
  iVar6 = -1;
  iVar8 = 0;
  param_2 = param_2 - (int)param_3;
  do {
    iVar5 = *(int *)(param_2 + (int)param_3);
    fVar1 = pfVar4[iVar5];
    pfVar4[iVar5] = *param_3;
    if (iVar6 < 0) {
      if (fVar1 != 0.0) {
        iVar6 = iVar8;
      }
    }
    else if (iVar6 <= iVar8 + -1) {
      pfVar10 = pfVar4 + iVar6;
      pfVar7 = (float *)(param_1 + (iVar6 + iVar8 * 4) * 4);
      iVar5 = ((iVar8 + -1) - iVar6) + 1;
      do {
        fVar2 = *pfVar10;
        fVar3 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar10 = pfVar10 + 1;
        iVar5 = iVar5 + -1;
        fVar1 = fVar1 - fVar2 * fVar3;
      } while (iVar5 != 0);
    }
    *param_3 = fVar1;
    iVar8 = iVar8 + 1;
    param_3 = param_3 + 1;
  } while (iVar8 < 3);
  pfVar10 = (float *)(param_1 + 0x28);
  iVar6 = 3;
  iVar8 = 8;
  do {
    fVar1 = *(float *)((int)pfVar4 + iVar8);
    if (iVar6 < 3) {
      pfVar9 = (float *)((int)pfVar4 + iVar8 + 4);
      pfVar7 = (float *)(param_1 + (iVar6 + iVar8) * 4);
      iVar5 = 3 - iVar6;
      do {
        fVar2 = *pfVar7;
        fVar3 = *pfVar9;
        pfVar7 = pfVar7 + 1;
        pfVar9 = pfVar9 + 1;
        iVar5 = iVar5 + -1;
        fVar1 = fVar1 - fVar2 * fVar3;
      } while (iVar5 != 0);
    }
    fVar2 = *pfVar10;
    pfVar10 = pfVar10 + -5;
    iVar5 = iVar6 + -2;
    *(float *)((int)pfVar4 + iVar8) = fVar1 / fVar2;
    iVar6 = iVar6 + -1;
    iVar8 = iVar8 + -4;
  } while (-1 < iVar5);
  return;
}



void FUN_00430810(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_58 [3];
  undefined local_4c [12];
  float local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;

  iVar5 = FUN_004304c0(param_1,param_2,local_4c);
  if (iVar5 != 0) {
    iVar5 = 0;
    do {
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      *(undefined4 *)((int)local_58 + iVar5) = 0x3f800000;
      FUN_00430730(param_1,local_4c,local_58);
      puVar7 = local_58;
      puVar6 = (undefined4 *)((int)local_40 + iVar5);
      iVar8 = 3;
      do {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar6 = uVar3;
        puVar6 = puVar6 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0xc);
    *param_1 = local_40[0];
    param_1[1] = local_40[1];
    param_1[2] = local_40[2];
    param_1[4] = local_30;
    param_1[0xf] = 1.0;
    param_1[5] = local_2c;
    param_1[6] = local_28;
    param_1[8] = local_20;
    param_1[3] = 0.0;
    param_1[7] = 0.0;
    param_1[9] = local_1c;
    param_1[0xb] = 0.0;
    param_1[10] = local_18;
    fVar1 = *(float *)(param_2 + 0x34);
    fVar2 = *(float *)(param_2 + 0x30);
    fVar4 = *(float *)(param_2 + 0x38);
    param_1[0xc] = -(fVar2 * local_40[0] + fVar4 * local_20 + fVar1 * local_30);
    param_1[0xd] = -(fVar2 * local_40[1] + fVar4 * local_1c + fVar1 * local_2c);
    param_1[0xe] = -(fVar2 * local_40[2] + fVar4 * local_18 + fVar1 * local_28);
  }
  return;
}



void FUN_00430980(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  fVar1 = param_3[6];
  fVar2 = param_3[10];
  fVar3 = param_3[2];
  fVar4 = param_2[1];
  fVar5 = param_3[4];
  fVar6 = param_2[2];
  fVar7 = param_3[8];
  fVar8 = *param_2;
  fVar9 = *param_3;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = *param_2;
  param_1[1] = param_3[1] * *param_2 + param_3[9] * param_2[2] + param_3[5] * param_2[1];
  param_1[2] = fVar3 * fVar8 + fVar2 * fVar6 + fVar1 * fVar4;
  *param_1 = fVar9 * fVar12 + fVar7 * fVar11 + fVar5 * fVar10;
  return;
}



void FUN_00430a00(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  fVar1 = param_3[6];
  fVar2 = param_3[10];
  fVar3 = param_3[2];
  fVar4 = param_2[1];
  fVar5 = param_3[4];
  fVar6 = param_2[2];
  fVar7 = param_3[8];
  fVar8 = *param_2;
  fVar9 = *param_3;
  fVar10 = param_2[1];
  fVar11 = param_3[0xe];
  fVar12 = param_2[2];
  fVar13 = *param_2;
  fVar14 = param_3[0xc];
  param_1[1] = param_3[1] * *param_2 + param_3[9] * param_2[2] + param_3[5] * param_2[1] +
               param_3[0xd];
  param_1[2] = fVar3 * fVar8 + fVar2 * fVar6 + fVar1 * fVar4 + fVar11;
  *param_1 = fVar9 * fVar13 + fVar7 * fVar12 + fVar5 * fVar10 + fVar14;
  return;
}



void FUN_00430a90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_1 = param_2;
  param_1[3] = param_5;
  return;
}



void FUN_00430ab0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;

  fVar1 = param_3[10];
  fVar2 = param_3[0xe];
  fVar3 = param_3[0xb];
  fVar4 = param_3[0xf];
  fVar5 = param_2[2];
  fVar6 = param_3[6];
  fVar7 = param_2[3];
  fVar8 = param_2[2];
  fVar9 = param_3[7];
  fVar10 = param_2[1];
  fVar11 = param_2[3];
  fVar12 = param_3[8];
  fVar13 = param_3[2];
  fVar14 = *param_2;
  fVar15 = param_3[0xc];
  fVar16 = param_2[1];
  fVar17 = param_2[2];
  fVar18 = param_3[3];
  fVar19 = *param_2;
  fVar20 = param_2[3];
  fVar21 = param_3[4];
  fVar22 = param_2[1];
  fVar23 = *param_3;
  fVar24 = *param_2;
  param_1[1] = param_3[1] * *param_2 +
               param_3[5] * param_2[1] + param_3[0xd] * param_2[3] + param_3[9] * param_2[2];
  param_1[2] = fVar13 * fVar14 + fVar6 * fVar10 + fVar2 * fVar7 + fVar1 * fVar5;
  param_1[3] = fVar18 * fVar19 + fVar9 * fVar16 + fVar4 * fVar11 + fVar3 * fVar8;
  *param_1 = fVar23 * fVar24 + fVar21 * fVar22 + fVar15 * fVar20 + fVar12 * fVar17;
  return;
}



void FUN_00430b80(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  *param_2 = param_1[0xc];
  param_2[1] = param_1[0xd];
  param_2[2] = param_1[0xe];
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  local_18 = -*param_1;
  local_14 = -param_1[1];
  local_10 = -param_1[2];
  local_1c = 0.0;
  local_24 = fVar1;
  local_20 = fVar2;
  fVar5 = (float10)FUN_0042f8c0(&local_24);
  fVar4 = (float)fVar5;
  if ((float10)0.001 <= fVar5) {
    if (local_20 / fVar4 <= 1.0) {
      fVar5 = (float10)FUN_0042f540(local_20 / fVar4);
      if (0.0 < fVar1) {
        fVar5 = -fVar5;
      }
    }
    else {
      fVar5 = (float10)0.0;
    }
    param_2[3] = (float)fVar5;
  }
  else {
    fVar5 = (float10)FUN_0042f540(-local_18);
    if (0.0 < local_14 == 0.0 < fVar3) {
      fVar5 = -fVar5;
    }
    param_2[5] = (float)fVar5;
    param_2[3] = 0.0;
  }
  if (0.001 <= fVar4) {
    fVar1 = (local_1c * fVar3 + local_20 * fVar2 + local_24 * fVar1) / fVar4;
    if (fVar1 < 1.0) {
      fVar5 = (float10)FUN_0042f540(fVar1);
      param_2[4] = (float)fVar5;
    }
    else {
      param_2[4] = 0.0;
    }
  }
  else {
    param_2[4] = 90.0;
  }
  if (fVar3 < 0.0) {
    param_2[4] = -param_2[4];
  }
  local_c = -local_20;
  local_8 = local_24;
  local_4 = 0.0;
  fVar5 = (float10)FUN_0042f8c0(&local_c);
  if (0.001 <= fVar4) {
    fVar1 = (float)(((float10)local_4 * (float10)local_10 +
                    (float10)local_8 * (float10)local_14 + (float10)local_c * (float10)local_18) /
                   fVar5);
    if (fVar1 < 1.0) {
      if (-1.0 < fVar1) {
        fVar5 = (float10)FUN_0042f540(fVar1);
        param_2[5] = (float)fVar5;
      }
      else {
        param_2[5] = 180.0;
      }
    }
    else {
      param_2[5] = 0.0;
    }
    if (local_10 < 0.0) {
      param_2[5] = -param_2[5];
      return;
    }
  }
  return;
}



void FUN_00430e00(float *param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  FUN_0042f380(param_2,&local_8,&local_4);
  FUN_0042f380(param_3,&param_2,&local_14);
  FUN_0042f380(param_4,&local_10,&local_c);
  *param_1 = local_c * local_4 - local_10 * local_8 * param_2;
  param_1[1] = local_10 * local_4 * param_2 + local_c * local_8;
  param_1[2] = -(local_10 * local_14);
  param_1[4] = -(local_14 * local_8);
  param_1[5] = local_14 * local_4;
  param_1[6] = param_2;
  param_1[8] = local_c * local_8 * param_2 + local_10 * local_4;
  param_1[9] = local_10 * local_8 - local_c * local_4 * param_2;
  param_1[10] = local_c * local_14;
  return;
}



void FUN_00430f10(float *param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  FUN_0042f380(param_2,&local_8,&local_4);
  FUN_0042f380(param_3,&param_2,&local_14);
  FUN_0042f380(param_4,&local_10,&local_c);
  *param_1 = local_c * local_4 - local_10 * local_8 * param_2;
  param_1[1] = local_10 * local_4 * param_2 + local_c * local_8;
  param_1[2] = -(local_10 * local_14);
  param_1[3] = -(local_14 * local_8);
  param_1[4] = local_14 * local_4;
  param_1[5] = param_2;
  param_1[6] = local_c * local_8 * param_2 + local_10 * local_4;
  param_1[7] = local_10 * local_8 - local_c * local_4 * param_2;
  param_1[8] = local_c * local_14;
  return;
}



void FUN_00431020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  FUN_00430e00(param_1,param_2,param_3,param_4);
  return;
}



void FUN_00431060(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  FUN_00430e00(param_1,param_2[3],param_2[4],param_2[5]);
  return;
}



void FUN_004310b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[5] = param_3;
  *param_1 = param_2;
  param_1[10] = param_4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  return;
}



void FUN_00431100(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  *param_1 = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xe] = param_4;
  param_1[0xf] = 0x3f800000;
  return;
}



void FUN_00431150(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_20 [8];

  FUN_0042f380(param_2,local_20,&param_2);
  if (param_5 < 0.999) {
    if (-0.999 < param_5) {
      fVar4 = param_3 * param_3;
      fVar1 = param_4 * param_4;
      fVar2 = fVar1 * param_2;
      fVar5 = (1.0 - fVar4) - fVar1;
      fVar3 = fVar4 * param_2;
      param_2 = 1.0 - param_2;
      *param_1 = (fVar3 * fVar5 + fVar2) / (1.0 - fVar5) + fVar4;
      fVar4 = param_4 * param_3 * param_2;
      param_1[5] = (fVar2 * fVar5 + fVar3) / (1.0 - fVar5) + fVar1;
      fVar1 = param_5 * param_3 * param_2;
      param_2 = param_5 * param_4 * param_2;
      param_1[10] = fVar3 + fVar2 + fVar5;
      param_1[1] = local_20[0] * param_5 + fVar4;
      param_1[4] = fVar4 - local_20[0] * param_5;
      param_1[2] = fVar1 - local_20[0] * param_4;
      param_1[8] = local_20[0] * param_4 + fVar1;
      param_1[6] = local_20[0] * param_3 + param_2;
      param_1[9] = param_2 - local_20[0] * param_3;
    }
    else {
      *param_1 = param_2;
      param_1[5] = param_2;
      param_1[1] = -local_20[0];
      param_1[4] = local_20[0];
      param_1[2] = 0.0;
      param_1[6] = 0.0;
      param_1[8] = 0.0;
      param_1[9] = 0.0;
      param_1[10] = 1.0;
    }
  }
  else {
    *param_1 = param_2;
    param_1[5] = param_2;
    param_1[4] = -local_20[0];
    param_1[1] = local_20[0];
    param_1[2] = 0.0;
    param_1[6] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 1.0;
  }
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  return;
}



void FUN_00431390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined local_40 [64];

  FUN_00431150(local_40,param_2,param_3,param_4,param_5);
  FUN_0042fb70(param_1,local_40,param_6);
  return;
}



void FUN_004313d0(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  return;
}



void FUN_00431410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined local_40 [64];

  FUN_00431150(local_40,param_3,param_4,param_5,param_6);
  FUN_0042fb70(param_1,param_2,local_40);
  return;
}



void FUN_00431450(float *param_1,float param_2,float param_3,float param_4,float *param_5)

{
  *param_1 = param_2 * *param_5;
  param_1[1] = param_5[1] * param_2;
  param_1[2] = param_5[2] * param_2;
  param_1[3] = param_5[3] * param_2;
  param_1[4] = param_5[4] * param_3;
  param_1[5] = param_5[5] * param_3;
  param_1[6] = param_5[6] * param_3;
  param_1[7] = param_5[7] * param_3;
  param_1[8] = param_5[8] * param_4;
  param_1[9] = param_5[9] * param_4;
  param_1[10] = param_5[10] * param_4;
  param_1[0xb] = param_5[0xb] * param_4;
  param_1[0xc] = param_5[0xc];
  param_1[0xd] = param_5[0xd];
  param_1[0xe] = param_5[0xe];
  param_1[0xf] = param_5[0xf];
  return;
}



void FUN_004314f0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;

  local_18 = *param_3 - *param_2;
  local_c = *param_4 - *param_3;
  local_8 = param_4[1] - param_3[1];
  local_4 = param_4[2] - param_3[2];
  local_14 = param_3[1] - param_2[1];
  local_10 = param_3[2] - param_2[2];
  FUN_0042f9f0(param_1,&local_18,&local_c);
  FUN_0042f9b0(param_1);
  param_1[3] = *param_2 * *param_1 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
  return;
}



void FUN_004315a0(float *param_1,float *param_2,float *param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  FUN_0042f9b0(param_1);
  param_1[3] = *param_3 * *param_1 + param_3[1] * param_1[1] + param_3[2] * param_1[2];
  return;
}



void FUN_004315f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00430f10(param_1 + 0x1c,param_2,param_3,param_4);
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 3;
  return;
}



void FUN_00431620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 3;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  return;
}



void FUN_00431640(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = param_2[1];
  *(undefined4 *)(param_1 + 0x24) = param_2[2];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x2c) = param_2[5];
  *(undefined4 *)(param_1 + 0x30) = param_2[6];
  *(undefined4 *)(param_1 + 0x34) = param_2[8];
  *(undefined4 *)(param_1 + 0x38) = param_2[9];
  *(undefined4 *)(param_1 + 0x3c) = param_2[10];
  *(undefined4 *)(param_1 + 0x40) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x44) = param_2[0xd];
  uVar1 = param_2[0xe];
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 3;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  return;
}



void FUN_004316a0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  param_2[1] = *(undefined4 *)(param_1 + 0x20);
  param_2[2] = *(undefined4 *)(param_1 + 0x24);
  param_2[3] = 0;
  param_2[4] = *(undefined4 *)(param_1 + 0x28);
  param_2[5] = *(undefined4 *)(param_1 + 0x2c);
  param_2[6] = *(undefined4 *)(param_1 + 0x30);
  param_2[7] = 0;
  param_2[8] = *(undefined4 *)(param_1 + 0x34);
  param_2[9] = *(undefined4 *)(param_1 + 0x38);
  param_2[10] = *(undefined4 *)(param_1 + 0x3c);
  param_2[0xb] = 0;
  param_2[0xc] = *(undefined4 *)(param_1 + 0x40);
  param_2[0xd] = *(undefined4 *)(param_1 + 0x44);
  param_2[0xe] = *(undefined4 *)(param_1 + 0x48);
  param_2[0xf] = 0x3f800000;
  return;
}



void FUN_00431710(undefined4 param_1,undefined4 param_2)

{
  undefined local_40 [64];

  FUN_00431060(local_40,param_2);
  FUN_00431640(param_1,local_40);
  return;
}



void FUN_00431740(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



void FUN_00431750(int param_1,int param_2,undefined4 param_3)

{
  if ((param_2 < 8) && (-1 < param_2)) {
    *(undefined4 *)(param_1 + 0x1c + param_2 * 4) = param_3;
  }
  return;
}



undefined4 FUN_00431770(undefined4 *param_1)

{
  return *param_1;
}



undefined4 FUN_00431780(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



int FUN_00431790(int param_1,int param_2)

{
  if (param_1 == 0) {
    return param_1;
  }
  return *(int *)(*(int *)(param_1 + 0x18) + param_2 * 4);
}



int FUN_004317b0(int param_1)

{
  return (int)*(short *)(param_1 + 0x20);
}



int FUN_004317c0(int param_1)

{
  return (int)*(short *)(param_1 + 0x22);
}



undefined4 FUN_004317d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



void FUN_004317e0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x2c);
    *param_4 = *(undefined4 *)(param_1 + 0x28);
    return;
  }
  *param_3 = 0;
  *param_4 = 0;
  return;
}



void FUN_00431820(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 0x10);
  param_2[3] = *(undefined4 *)(param_1 + 0x14);
  param_2[4] = *(undefined4 *)(param_1 + 0x18);
  param_2[5] = *(undefined4 *)(param_1 + 0x1c);
  return;
}



undefined4 FUN_00431850(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4);
}



void FUN_00431860(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 8) = param_3;
  }
  return;
}



uint FUN_00431880(uint *param_1,int param_2)

{
  uint uVar1;

  uVar1 = 0xffffffff;
  if (((param_1 != (uint *)0x0) && (param_2 == 1)) &&
     (uVar1 = ((int)(char)*param_1 & 8U) >> 3, (*param_1 & 0x40) != 0)) {
    uVar1 = (uVar1 != 0) + 2;
  }
  return uVar1;
}



undefined4 FUN_004318b0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



undefined4 FUN_004318c0(void)

{
  return 4;
}



undefined1 * FUN_004318d0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 4)) {
    return &DAT_00dfb040 + param_1 * 0x16c;
  }
  return (undefined1 *)0x0;
}



void FUN_00431900(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;

  FUN_00430b80(param_1 + 0xb0,&local_18);
  *param_2 = local_18;
  param_2[1] = local_14;
  param_2[2] = local_10;
  *param_3 = local_c;
  param_3[1] = local_8;
  param_3[2] = local_4;
  return;
}



void FUN_00431950(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  *(undefined4 *)(param_1 + 0xb4) = param_2[1];
  *(undefined4 *)(param_1 + 0xb8) = param_2[2];
  *(undefined4 *)(param_1 + 0xbc) = param_2[3];
  *(undefined4 *)(param_1 + 0xc0) = param_2[4];
  *(undefined4 *)(param_1 + 0xc4) = param_2[5];
  *(undefined4 *)(param_1 + 200) = param_2[6];
  *(undefined4 *)(param_1 + 0xcc) = param_2[7];
  *(undefined4 *)(param_1 + 0xd0) = param_2[8];
  *(undefined4 *)(param_1 + 0xd4) = param_2[9];
  *(undefined4 *)(param_1 + 0xd8) = param_2[10];
  *(undefined4 *)(param_1 + 0xdc) = param_2[0xb];
  *(undefined4 *)(param_1 + 0xe0) = param_2[0xc];
  *(undefined4 *)(param_1 + 0xe4) = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe8) = param_2[0xe];
  *(undefined4 *)(param_1 + 0xec) = param_2[0xf];
  FUN_0042fb70(param_1 + 0x70,param_1 + 0x30,(undefined4 *)(param_1 + 0xb0));
  return;
}



void FUN_00431a00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x168) = param_2;
  return;
}



void FUN_00431a10(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 4) {
    *(undefined4 *)(param_1 + 0x15c) = param_3;
  }
  if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0x164) = param_3;
  }
  if (param_2 == 6) {
    *(undefined4 *)(param_1 + 0x158) = param_3;
  }
  if (param_2 == 5) {
    *(undefined4 *)(param_1 + 0x160) = param_3;
  }
  return;
}



uint * FUN_00431a50(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;

  if (param_1 == 0) {
LAB_00431af9:
    puVar1 = (uint *)0x0;
  }
  else {
    if (param_2 == 0) {
      puVar1 = (uint *)(param_1 + 8);
    }
    else {
      if (param_2 != 2) goto LAB_00431af9;
      puVar1 = (uint *)(param_1 + 4);
    }
    if ((param_4 & 0x10) != 0) {
      if (param_5 == 2) {
        *puVar1 = *puVar1 | param_3;
      }
      else if (param_5 == 3) {
        *puVar1 = *puVar1 & param_3;
      }
      else if (param_5 == 1) {
        *puVar1 = param_3;
      }
    }
    if ((param_4 & 0x20) != 0) {
      puVar1 = (uint *)FUN_00431770(param_1);
      if (((uint)puVar1 & 0x4000) != 0) {
        iVar3 = 0;
        puVar1 = (uint *)FUN_00431780(param_1);
        if (0 < (int)puVar1) {
          do {
            uVar2 = FUN_00431790(param_1,iVar3,param_2,param_3,param_4 & 0x10,param_5);
            FUN_00431a50(uVar2);
            iVar3 = iVar3 + 1;
            puVar1 = (uint *)FUN_00431780(param_1);
          } while (iVar3 < (int)puVar1);
          return puVar1;
        }
      }
    }
  }
  return puVar1;
}



undefined4 FUN_00431b00(int param_1,int param_2)

{
  if (param_2 == 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  if (param_2 == 2) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}



void FUN_00431b20(uint *param_1,uint param_2)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[4] = 0;
  if ((param_2 & 0x4000) != 0) {
    param_1[5] = 0;
    param_1[6] = 0;
    if (param_2 == 0xd065) {
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[7] = 0x3f800000;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0x3f800000;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0x3f800000;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
    }
  }
  return;
}



void FUN_00431b90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00431ba0(void)

{
  _DAT_00e996c0 = 0;
  _DAT_00e996c4 = 0;
  _DAT_00e996c8 = 0;
  _DAT_00e996cc = 0;
  _DAT_00e996d0 = 0;
  _DAT_00e996d4 = 0;
  _DAT_00e996d8 = 0;
  _DAT_00e996e0 = 0;
  _DAT_00e996e2 = 2;
  DAT_00e996dc = 9;
  _DAT_00e996e8 = 0x3f800000;
  _DAT_00e996e4 = 0x3f800000;
  _DAT_00e996ec = 0;
  _DAT_00e996f0 = 1;
  _DAT_00e996f4 = 0x1e;
  _DAT_00e996f6 = 0;
  _DAT_00e996f8 = 0;
  return;
}



void FUN_00431c40(void)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 *puVar3;
  undefined4 *unaff_retaddr;
  undefined4 local_7c [4];
  undefined4 uStack_6c;
  uint uStack_3c;
  uint *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;

  piVar1 = (int *)FUN_00488a80();
  puVar3 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_7c[0] = 0x7c;
  (**(code **)(*piVar1 + 100))(piVar1,0,local_7c,1,0);
  *puStack_c = unaff_EDI;
  *puStack_10 = uStack_3c >> 3;
  *puStack_8 = uStack_6c;
  *puStack_4 = *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
  *unaff_retaddr = *(undefined4 *)(*(int *)(DAT_00df7f2c + 0x48) + 8);
  return;
}



void FUN_00431cd0(void)

{
  int *piVar1;

  piVar1 = (int *)FUN_00488a80();
  (**(code **)(*piVar1 + 0x80))(piVar1,0);
  return;
}



void FUN_00431cf0(char *param_1)

{
  int iVar1;
  int unaff_EBX;
  int *unaff_EBP;
  undefined4 *puVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 local_80 [2];
  ushort *puStack_78;

  local_80[0] = 0;
  iVar1 = _strncmp(param_1,s_invert_004bfd08,5);
  if (iVar1 != 0) {
    FUN_0049eb80(param_1,s_invert_004bfd08);
    puVar2 = local_80;
    puVar6 = &DAT_004af208;
    (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x90) + 0x7c))
              (*(undefined4 **)(*(int *)(param_1 + 0x90) + 0x7c));
    puVar4 = (undefined4 *)&stack0xffffff78;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    (**(code **)(*unaff_EBP + 100))(unaff_EBP,0,&stack0xffffff78,1);
    if (((uint)puVar6 & 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)unaff_EBP / 2;
    }
    if (0 < (int)puVar2) {
      do {
        puVar3 = puStack_78;
        iVar5 = unaff_EBX;
        if (0 < unaff_EBX) {
          do {
            puStack_78 = puVar3 + 1;
            iVar5 = iVar5 + -1;
            *puVar3 = *puVar3 & 0xfff | ~(*puVar3 & 0xf000);
            puVar3 = puStack_78;
          } while (iVar5 != 0);
        }
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        puStack_78 = puStack_78 + (iVar1 - unaff_EBX);
      } while (puVar2 != (undefined4 *)0x0);
    }
    (**(code **)(iRam00000000 + 0x80))(0,0);
  }
  return;
}



void FUN_00431df0(char *param_1)

{
  int iVar1;
  int unaff_EBX;
  int *unaff_EBP;
  undefined4 *puVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 local_80 [2];
  ushort *puStack_78;

  local_80[0] = 0;
  iVar1 = _strncmp(param_1,s_invcol_004bfd10,5);
  if (iVar1 != 0) {
    FUN_0049eb80(param_1,s_invcol_004bfd10);
    puVar2 = local_80;
    puVar6 = &DAT_004af208;
    (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x90) + 0x7c))
              (*(undefined4 **)(*(int *)(param_1 + 0x90) + 0x7c));
    puVar4 = (undefined4 *)&stack0xffffff78;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    (**(code **)(*unaff_EBP + 100))(unaff_EBP,0,&stack0xffffff78,1);
    if (((uint)puVar6 & 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)unaff_EBP / 2;
    }
    if (0 < (int)puVar2) {
      do {
        puVar3 = puStack_78;
        iVar5 = unaff_EBX;
        if (0 < unaff_EBX) {
          do {
            puStack_78 = puVar3 + 1;
            iVar5 = iVar5 + -1;
            *puVar3 = *puVar3 & 0xf000 | ~(*puVar3 & 0xfff);
            puVar3 = puStack_78;
          } while (iVar5 != 0);
        }
        puVar2 = (undefined4 *)((int)puVar2 + -1);
        puStack_78 = puStack_78 + (iVar1 - unaff_EBX);
      } while (puVar2 != (undefined4 *)0x0);
    }
    (**(code **)(iRam00000000 + 0x80))(0,0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00431f7f)

void FUN_00431ef0(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  int *piVar7;
  int local_80 [2];
  int iStack_78;

  local_80[0] = 0;
  iVar1 = _strncmp(param_1,s_noalpha_004bfd18,7);
  if (iVar1 != 0) {
    FUN_0049eb80(param_1,s_noalpha_004bfd18);
    piVar7 = local_80;
    puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x90) + 0x7c);
    puVar6 = &DAT_004af208;
    (**(code **)*puVar4)();
    puVar3 = (undefined4 *)&stack0xffffff78;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    piVar5 = (int *)&stack0xffffff78;
    (**(code **)(*piVar7 + 100))(piVar7,0,piVar5,1);
    if (0 < (int)puVar4) {
      do {
        puVar2 = puVar6;
        if (0 < (int)puVar6) {
          do {
            *(byte *)(iStack_78 + 1) = *(byte *)(iStack_78 + 1) | 0x80;
            iStack_78 = iStack_78 + 2;
            puVar2 = puVar2 + -1;
          } while (puVar2 != (undefined *)0x0);
        }
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        iStack_78 = iStack_78 + ((int)piVar5 - (int)puVar6) * 2;
      } while (puVar4 != (undefined4 *)0x0);
    }
    (**(code **)(*piVar5 + 0x80))(piVar5,0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0043205f)

void FUN_00431fd0(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  int *piVar7;
  int local_80 [2];
  int iStack_78;

  local_80[0] = 0;
  iVar1 = _strncmp(param_1,s_noalpha_004bfd18,7);
  if (iVar1 != 0) {
    FUN_0049eb80(param_1,s_noalpha_004bfd18);
    piVar7 = local_80;
    puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x90) + 0x7c);
    puVar6 = &DAT_004af208;
    (**(code **)*puVar4)();
    puVar3 = (undefined4 *)&stack0xffffff78;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    piVar5 = (int *)&stack0xffffff78;
    (**(code **)(*piVar7 + 100))(piVar7,0,piVar5,1);
    if (0 < (int)puVar4) {
      do {
        puVar2 = puVar6;
        if (0 < (int)puVar6) {
          do {
            *(byte *)(iStack_78 + 1) = *(byte *)(iStack_78 + 1) | 0xf0;
            iStack_78 = iStack_78 + 2;
            puVar2 = puVar2 + -1;
          } while (puVar2 != (undefined *)0x0);
        }
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        iStack_78 = iStack_78 + ((int)piVar5 - (int)puVar6) * 2;
      } while (puVar4 != (undefined4 *)0x0);
    }
    (**(code **)(*piVar5 + 0x80))(piVar5,0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0043213f)

void FUN_004320b0(char *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined *puVar6;
  int *piVar7;
  int local_80 [2];
  ushort *puStack_78;

  local_80[0] = 0;
  iVar1 = _strncmp(param_1,s_saturate_004bfd20,8);
  if (iVar1 != 0) {
    FUN_0049eb80(param_1,s_saturate_004bfd20);
    piVar7 = local_80;
    puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x90) + 0x7c);
    puVar6 = &DAT_004af208;
    (**(code **)*puVar4)();
    puVar3 = (undefined4 *)&stack0xffffff78;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    piVar5 = (int *)&stack0xffffff78;
    (**(code **)(*piVar7 + 100))(piVar7,0,piVar5,1);
    if (0 < (int)puVar4) {
      do {
        puVar2 = puVar6;
        if (0 < (int)puVar6) {
          do {
            *puStack_78 = *puStack_78 | 0xfff;
            puStack_78 = puStack_78 + 1;
            puVar2 = puVar2 + -1;
          } while (puVar2 != (undefined *)0x0);
        }
        puVar4 = (undefined4 *)((int)puVar4 + -1);
        puStack_78 = puStack_78 + ((int)piVar5 - (int)puVar6);
      } while (puVar4 != (undefined4 *)0x0);
    }
    (**(code **)(*piVar5 + 0x80))(piVar5,0);
  }
  return;
}



void FUN_00432190(undefined4 param_1)

{
  DAT_0050c0cc = 1;
  DAT_00e996a4 = param_1;
  return;
}



void FUN_004321b0(short param_1,short param_2,short param_3,short param_4,float param_5,
                 float param_6,int param_7,int param_8,float param_9)

{
  float fVar1;
  float *pfVar2;
  short sVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 extraout_ST0;
  float10 fVar11;
  float10 extraout_ST0_00;
  float10 fVar12;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  short local_14;

  if ((DAT_0050c9fc == 0) || ((float)DAT_0050c9fc != param_9)) {
    if (DAT_0050ca00 == 0) {
      return;
    }
    if ((float)DAT_0050ca00 != param_9) {
      return;
    }
    param_9 = DAT_0050ca08;
  }
  else {
    param_9 = DAT_0050ca04;
  }
  puVar4 = (undefined4 *)FUN_0048dba0();
  if (param_7 == 1) {
    FUN_004320b0(DAT_00e996a4);
  }
  puVar10 = (undefined4 *)puVar4[6];
  *puVar4 = 0x2e;
  puVar4[1] = 1;
  puVar4[7] = DAT_00e996a4;
  puVar4[8] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  pfVar2 = (float *)puVar4[4];
  puVar9 = (undefined4 *)puVar4[5];
  fVar1 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
  if (param_8 == 1) {
    fVar1 = 100.0;
  }
  iVar5 = (int)param_2;
  iVar8 = (int)param_4;
  iVar6 = (int)param_1;
  param_5 = param_5 / (float)(ulonglong)*(uint *)(puVar4[7] + 0x80);
  param_6 = param_6 / (float)(ulonglong)*(uint *)(puVar4[7] + 0x84);
  if (0.25 <= param_9) {
    if (0.75 <= param_9) {
      puVar4[2] = 5;
      fVar12 = (float10)iVar8;
      pfVar2[6] = (float)iVar6;
      pfVar2[7] = (float)iVar5;
      pfVar2[8] = fVar1;
      pfVar2[9] = (float)iVar6;
      pfVar2[10] = (float)iVar8;
      pfVar2[0xb] = fVar1;
      sVar3 = __ftol();
      pfVar2[0xc] = (float)(sVar3 + iVar6);
      pfVar2[0xd] = (float)extraout_ST1_01;
      pfVar2[0xe] = (float)fVar12;
      puVar9[4] = param_5;
      puVar9[6] = param_5;
      puVar9[5] = 0;
      puVar9[7] = param_6;
      puVar9[9] = param_6;
      puVar9[8] = param_5 - (param_9 - 0.75) * 4.0 * (param_5 - param_5 * 0.5);
      fVar11 = extraout_ST0_01;
    }
    else {
      puVar4[2] = 4;
      pfVar2[6] = (float)iVar6;
      pfVar2[7] = (float)iVar5;
      pfVar2[8] = fVar1;
      pfVar2[9] = (float)iVar6;
      sVar3 = __ftol();
      pfVar2[10] = (float)(sVar3 + iVar5);
      pfVar2[0xb] = (float)extraout_ST1_00;
      puVar9[4] = param_5;
      puVar9[5] = 0;
      puVar9[6] = param_5;
      puVar9[7] = param_6 * ((param_9 + param_9) - 0.5);
      fVar11 = extraout_ST0_00;
      fVar12 = extraout_ST1_00;
    }
  }
  else {
    puVar4[2] = 3;
    sVar3 = __ftol();
    fVar11 = (float10)iVar5;
    pfVar2[6] = (float)((int)param_3 - (int)sVar3);
    pfVar2[7] = (float)iVar5;
    pfVar2[8] = (float)extraout_ST1;
    puVar9[5] = 0;
    puVar9[4] = (float)((float10)param_5 * extraout_ST0);
    fVar12 = extraout_ST1;
  }
  local_14 = (short)(iVar5 + iVar8 >> 1);
  fVar1 = (float)(int)param_3;
  pfVar2[1] = (float)(int)local_14;
  pfVar2[2] = (float)fVar12;
  pfVar2[3] = fVar1;
  pfVar2[4] = (float)fVar11;
  pfVar2[5] = (float)fVar12;
  *pfVar2 = fVar1;
  puVar9[1] = param_6 * 0.5;
  *puVar9 = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  iVar5 = (int)&DAT_00e37530 - (int)puVar10;
  iVar6 = 4;
  do {
    uVar7 = 0;
    puVar9 = puVar10;
    if (puVar4[2] != 0) {
      do {
        uVar7 = uVar7 + 1;
        *puVar9 = *(undefined4 *)(iVar5 + (int)puVar10);
        puVar9 = puVar9 + 4;
      } while (uVar7 < (uint)puVar4[2]);
    }
    puVar10 = puVar10 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_0048de10(puVar4[2],7);
  return;
}



void FUN_00432580(int param_1)

{
  uint uVar1;
  int iVar2;

  uVar1 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar2 = 0;
    do {
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x1c + iVar2) = DAT_00e996a4;
      iVar2 = iVar2 + 0x48;
    } while (uVar1 < *(uint *)(param_1 + 0x7c));
  }
  return;
}



void FUN_004325b0(short param_1,short param_2,short param_3,short param_4,float param_5,
                 float param_6,int param_7,int param_8)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;

  puVar6 = (undefined4 *)FUN_0048dba0();
  if (param_7 == 1) {
    FUN_004320b0(DAT_00e996a4);
  }
  *puVar6 = 0x2e;
  puVar6[1] = 1;
  puVar6[2] = 4;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  pfVar2 = (float *)puVar6[5];
  puVar6[7] = DAT_00e996a4;
  puVar6[8] = 0;
  puVar6[0xd] = 0;
  pfVar3 = (float *)puVar6[4];
  puVar4 = (undefined4 *)puVar6[6];
  fVar1 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
  if (param_8 == 1) {
    fVar1 = 50.0;
  }
  pfVar3[2] = fVar1;
  pfVar3[5] = fVar1;
  pfVar3[8] = fVar1;
  pfVar3[0xb] = fVar1;
  *pfVar3 = (float)(int)param_1;
  pfVar3[1] = (float)(int)param_2;
  pfVar3[3] = (float)(int)param_1;
  pfVar3[4] = (float)(int)param_4;
  pfVar3[6] = (float)(int)param_3;
  pfVar3[7] = (float)(int)param_4;
  pfVar3[9] = (float)(int)param_3;
  pfVar3[10] = (float)(int)param_2;
  puVar4[0xc] = DAT_00e37530;
  puVar4[8] = DAT_00e37530;
  puVar4[4] = DAT_00e37530;
  *puVar4 = DAT_00e37530;
  puVar4[0xd] = DAT_00e37534;
  puVar4[9] = DAT_00e37534;
  puVar4[5] = DAT_00e37534;
  puVar4[1] = DAT_00e37534;
  puVar4[0xe] = DAT_00e37538;
  puVar4[10] = DAT_00e37538;
  puVar4[6] = DAT_00e37538;
  puVar4[2] = DAT_00e37538;
  puVar4[0xf] = DAT_00e3753c;
  puVar4[0xb] = DAT_00e3753c;
  puVar4[7] = DAT_00e3753c;
  puVar4[3] = DAT_00e3753c;
  uVar5 = *(uint *)(puVar6[7] + 0x80);
  pfVar2[1] = 0.0;
  *pfVar2 = param_5 / (float)(ulonglong)uVar5;
  pfVar2[2] = param_5 / (float)(ulonglong)*(uint *)(puVar6[7] + 0x80);
  uVar5 = *(uint *)(puVar6[7] + 0x84);
  pfVar2[4] = 0.0;
  pfVar2[3] = param_6 / (float)(ulonglong)uVar5;
  uVar5 = *(uint *)(puVar6[7] + 0x84);
  pfVar2[6] = 0.0;
  pfVar2[7] = 0.0;
  pfVar2[5] = param_6 / (float)(ulonglong)uVar5;
  FUN_0048de10(puVar6[2],7);
  return;
}



void FUN_004327e0(short param_1,short param_2,short param_3,short param_4,short param_5,
                 short param_6,short param_7,short param_8)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;

  puVar6 = (undefined4 *)FUN_0048dba0();
  *puVar6 = 0x2e;
  puVar6[1] = 1;
  puVar6[2] = 4;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  uVar5 = DAT_00e996a4;
  puVar6[8] = 0;
  puVar6[7] = uVar5;
  puVar6[0xd] = 0;
  pfVar2 = (float *)puVar6[4];
  fVar1 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
  puVar3 = (undefined4 *)puVar6[5];
  puVar4 = (undefined4 *)puVar6[6];
  *pfVar2 = (float)(int)param_1;
  pfVar2[1] = (float)(int)param_2;
  pfVar2[2] = fVar1;
  pfVar2[3] = (float)(int)param_3;
  pfVar2[4] = (float)(int)param_4;
  pfVar2[5] = fVar1;
  pfVar2[6] = (float)(int)param_5;
  pfVar2[7] = (float)(int)param_6;
  pfVar2[8] = fVar1;
  pfVar2[9] = (float)(int)param_7;
  pfVar2[10] = (float)(int)param_8;
  pfVar2[0xb] = fVar1;
  puVar4[0xc] = DAT_00e37530;
  puVar4[8] = DAT_00e37530;
  puVar4[4] = DAT_00e37530;
  *puVar4 = DAT_00e37530;
  puVar4[0xd] = DAT_00e37534;
  puVar4[9] = DAT_00e37534;
  puVar4[5] = DAT_00e37534;
  puVar4[1] = DAT_00e37534;
  puVar4[0xe] = DAT_00e37538;
  puVar4[10] = DAT_00e37538;
  puVar4[6] = DAT_00e37538;
  puVar4[2] = DAT_00e37538;
  puVar4[0xf] = DAT_00e3753c;
  puVar4[0xb] = DAT_00e3753c;
  puVar4[7] = DAT_00e3753c;
  puVar4[3] = DAT_00e3753c;
  *puVar3 = 0x3f800000;
  puVar3[2] = 0x3f800000;
  puVar3[3] = 0x3f800000;
  puVar3[5] = 0x3f800000;
  puVar3[1] = 0;
  puVar3[4] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  FUN_0048de10(puVar6[2],7);
  return;
}



void FUN_004329c0(short param_1,short param_2,short param_3,short param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;

  puVar6 = (undefined4 *)FUN_0048dba0();
  *puVar6 = 0x2e;
  puVar6[1] = 1;
  puVar6[2] = 4;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  uVar5 = DAT_00e996a4;
  puVar6[8] = 0;
  puVar6[7] = uVar5;
  puVar6[0xd] = 0;
  fVar1 = *(float *)(*(int *)(DAT_00df7f2c + 0x48) + 4);
  pfVar2 = (float *)puVar6[4];
  puVar3 = (undefined4 *)puVar6[5];
  puVar4 = (undefined4 *)puVar6[6];
  *pfVar2 = (float)(int)param_1;
  pfVar2[2] = fVar1;
  pfVar2[3] = (float)(int)param_1;
  pfVar2[5] = fVar1;
  pfVar2[1] = (float)(int)param_2;
  pfVar2[6] = (float)(int)param_3;
  pfVar2[7] = (float)(int)param_4;
  pfVar2[4] = (float)(int)param_4;
  pfVar2[8] = fVar1;
  pfVar2[9] = (float)(int)param_3;
  pfVar2[10] = (float)(int)param_2;
  pfVar2[0xb] = fVar1;
  puVar4[0xc] = DAT_00e37530;
  puVar4[8] = DAT_00e37530;
  puVar4[4] = DAT_00e37530;
  *puVar4 = DAT_00e37530;
  puVar4[0xd] = DAT_00e37534;
  puVar4[9] = DAT_00e37534;
  puVar4[5] = DAT_00e37534;
  puVar4[1] = DAT_00e37534;
  puVar4[0xe] = DAT_00e37538;
  puVar4[10] = DAT_00e37538;
  puVar4[6] = DAT_00e37538;
  puVar4[2] = DAT_00e37538;
  puVar4[0xf] = DAT_00e3753c;
  puVar4[0xb] = DAT_00e3753c;
  puVar4[7] = DAT_00e3753c;
  puVar4[3] = DAT_00e3753c;
  puVar3[1] = param_6;
  *puVar3 = param_5;
  puVar3[2] = param_5;
  puVar3[3] = param_8;
  puVar3[5] = param_8;
  puVar3[4] = param_7;
  puVar3[6] = param_7;
  puVar3[7] = param_6;
  FUN_0048de10(puVar6[2],7);
  return;
}



void FUN_00432b80(int param_1,byte **param_2)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  float local_10 [4];

  iVar3 = *(int *)(param_1 + 0x54);
  pfVar4 = *(float **)(param_1 + 0x58);
  iVar9 = *(int *)(param_1 + 0x74);
  pbVar10 = *param_2;
  local_10[3] = 1.0;
  local_10[2] = 1.0;
  local_10[1] = 1.0;
  local_10[0] = 1.0;
  if (pbVar10 != (byte *)0x0) {
    iVar11 = *(int *)(pbVar10 + 0xc);
    if (iVar11 != 0) {
      if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
        local_10[0] = (float)(uint)*(byte *)(iVar11 + 0x22) * 0.003921569;
        local_10[1] = (float)(uint)*(byte *)(iVar11 + 0x23) * 0.003921569;
        local_10[2] = (float)(uint)*(byte *)(iVar11 + 0x24) * 0.003921569;
      }
      if ((*(byte *)(param_1 + 0x88) & 2) != 0) {
        local_10[3] = (float)(uint)*(byte *)(iVar11 + 0x25) * 0.003921569;
      }
    }
    if (((*pbVar10 & 0x11) == 0) && ((*(byte *)(param_1 + 0x88) & 4) == 0)) {
      if (iVar9 != 0) {
        pbVar10 = param_2[0xd] + 0xc;
        pfVar5 = pfVar4;
        param_1 = iVar9;
        do {
          uVar7 = 0;
          pfVar6 = pfVar5;
          pfVar8 = local_10;
          do {
            pbVar1 = pbVar10 + uVar7;
            uVar7 = uVar7 + 1;
            pfVar5 = pfVar6 + 1;
            fVar2 = (float)(uint)*pbVar1 * *pfVar8 * 0.003921569;
            *(float *)((iVar3 - (int)pfVar4) + -4 + (int)pfVar5) = fVar2;
            *pfVar6 = fVar2;
            pfVar6 = pfVar5;
            pfVar8 = pfVar8 + 1;
          } while (uVar7 < 4);
          pbVar10 = pbVar10 + 0x10;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
        return;
      }
    }
    else if (iVar9 != 0) {
      pbVar10 = param_2[0xd] + 0xf;
      pfVar5 = pfVar4 + 3;
      param_2 = (byte **)iVar9;
      do {
        pfVar8 = local_10;
        pfVar6 = pfVar5 + -3;
        iVar9 = iVar3 - (int)pfVar4;
        iVar11 = 4;
        do {
          fVar2 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          *(float *)((int)pfVar6 + iVar9) = fVar2;
          *pfVar6 = fVar2;
          pfVar6 = pfVar6 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        if ((*(byte *)(param_1 + 0x88) & 4) != 0) {
          fVar2 = (float)(uint)*pbVar10 * local_10[3] * 0.003921569;
          *(float *)((int)pfVar5 + iVar9) = fVar2;
          *pfVar5 = fVar2;
        }
        pbVar10 = pbVar10 + 0x10;
        pfVar5 = pfVar5 + 4;
        param_2 = (byte **)((int)param_2 + -1);
      } while (param_2 != (byte **)0x0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00432d30(void)

{
  undefined4 *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  float *pfVar16;
  int *piVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  uint *puVar21;
  undefined2 *puVar22;
  uint *puVar23;
  undefined4 *puVar24;
  float *pfVar25;
  byte bVar26;
  uint param_1;
  float param_2;
  float *param_3;
  float param_4;
  int param_5;
  uint param_7;
  uint param_8;
  char cStack00000026;
  char cStack00000029;
  char cStack0000002a;
  uint param_11;
  int param_12;
  uint param_15;
  uint param_16;
  int *in_stack_00024050;
  int in_stack_00024054;
  byte **in_stack_00024058;
  uint in_stack_0002405c;
  char cVar15;

  FUN_004a0a30();
  uVar18 = 0;
  pbVar3 = *in_stack_00024058;
  bVar7 = false;
  param_5 = 0;
  param_7 = 0;
  param_4 = 1.0;
  param_2 = 1.0;
  param_15 = 0;
  bVar26 = 0;
  param_16 = 1;
  if (pbVar3 == (byte *)0x0) goto LAB_00432f8f;
  iVar9 = *(int *)(pbVar3 + 0xc);
  iVar13 = *(int *)(pbVar3 + 8);
  if (iVar13 == 0) {
    param_15 = FUN_00409040(pbVar3);
  }
  else {
    param_15 = *(uint *)(iVar13 + 0x38);
    if (*(int *)(iVar13 + 0x1c) != 0) {
      bVar2 = *(byte *)(*(int *)(iVar13 + 0x1c) + 3);
      if ((bVar2 & 0x10) != 0) {
        param_4 = 2.0;
      }
      if ((bVar2 & 1) != 0) {
        param_2 = 2.0;
      }
      if (((bVar2 & 0x20) != 0) && ((bVar2 & 2) != 0)) {
        param_5 = 1;
      }
    }
  }
  if (iVar9 != 0) {
    uVar18 = *(uint *)(iVar9 + 0x18) | *(uint *)(iVar9 + 0x1c);
    uVar8 = 0;
    do {
      if ((*(char *)(uVar8 + 6 + iVar9) == '\x03') || (*(char *)(iVar9 + 0xe + uVar8) == '\x03')) {
        bVar26 = 1;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
    uVar8 = 4;
    do {
      if ((*(char *)(uVar8 + 6 + iVar9) == '\x03') || (*(char *)(iVar9 + 0xe + uVar8) == '\x03')) {
        bVar26 = bVar26 | 2;
        in_stack_0002405c = in_stack_0002405c | 2;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 8);
    if (DAT_0050c618 != param_15) {
      if ((uVar18 & 0x30) == 0) {
        in_stack_0002405c = in_stack_0002405c | 0x20;
      }
      if ((uVar18 == 0xc81049f8) || (uVar18 == 0xc8104b50)) {
LAB_00432f36:
        in_stack_0002405c = in_stack_0002405c | 0x21;
      }
      else if (uVar18 == 0xc1841c8) {
        if (param_15 != 0) {
          FUN_00431cf0(param_15);
        }
        in_stack_0002405c = in_stack_0002405c | 0x421;
      }
      else if ((DAT_0050c620 != param_15) && (DAT_0050c624 != param_15)) {
        if ((uVar18 == 0xc81041d8) || (uVar18 == 0xc81049d8)) goto LAB_00432f36;
        if (uVar18 == 0xf0a2008) {
          in_stack_0002405c = in_stack_0002405c | 0x20;
        }
        else if (uVar18 == 0xc184950) {
          in_stack_0002405c = in_stack_0002405c | 0x20;
          bVar26 = bVar26 | 4;
        }
        else if ((((uVar18 != 0xc180079) && (DAT_0050c61c != param_15)) && (uVar18 != 0xc8104340))
                && (((uVar18 & 0x800) == 0 && (param_15 != 0)))) {
          if (*(int *)(param_15 + 0x7c) == 1) {
            FUN_00431ef0(param_15);
          }
          if (*(int *)(param_15 + 0x7c) == 2) {
            FUN_00431fd0(param_15);
          }
        }
      }
    }
    if (uVar18 == 0xf0a2008) {
      param_5 = 1;
    }
    if (param_5 != 0) {
      in_stack_0002405c = in_stack_0002405c | 0xc;
    }
  }
  if ((uVar18 != 0xc81041c8) && ((*pbVar3 & 0x11) != 0)) {
    bVar7 = true;
    param_16 = 3;
  }
LAB_00432f8f:
  puVar22 = (undefined2 *)in_stack_00024058[0xd];
  uVar18 = (uint)*(short *)((int)in_stack_00024058 + 0x3a);
  *(uint *)(in_stack_00024054 + 0x74) = uVar18;
  iVar9 = FUN_00408e60(pbVar3,uVar18 * 0xc);
  *(int *)(in_stack_00024054 + 0x4c) = iVar9;
  *(uint *)(in_stack_00024054 + 0x78) = uVar18;
  pfVar10 = (float *)FUN_00408e60(pbVar3,uVar18 * 8);
  *(float **)(in_stack_00024054 + 0x50) = pfVar10;
  param_3 = (float *)FUN_00408e60(pbVar3,uVar18 << 4);
  *(float **)(in_stack_00024054 + 0x54) = param_3;
  uVar11 = FUN_00408e60(pbVar3,uVar18 << 4);
  *(undefined4 *)(in_stack_00024054 + 0x58) = uVar11;
  uVar11 = FUN_00408e60(pbVar3,uVar18 * 0xc);
  *(undefined4 *)(in_stack_00024054 + 0x70) = uVar11;
  *(undefined4 *)(in_stack_00024054 + 0x44) = 4;
  *(uint *)(in_stack_00024054 + 0x48) = param_16;
  *(byte *)(in_stack_00024054 + 0x88) = bVar26;
  FUN_00430a90(in_stack_00024054 + 0x5c,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  if (uVar18 != 0) {
    fVar5 = param_4 * 4096.0;
    param_4 = 0.0;
    pfVar25 = (float *)(iVar9 + 8);
    fVar6 = param_2 * 4096.0;
    param_2 = 0.0;
    pfVar19 = pfVar10;
    param_8 = uVar18;
    do {
      pfVar25[-2] = (float)(int)CONCAT11((char)*puVar22,(char)((ushort)*puVar22 >> 8));
      pfVar25[-1] = (float)(int)CONCAT11((char)puVar22[1],(char)((ushort)puVar22[1] >> 8));
      *pfVar25 = (float)(int)CONCAT11((char)puVar22[2],(char)((ushort)puVar22[2] >> 8));
      *pfVar19 = (float)(int)CONCAT11((char)puVar22[4],(char)((ushort)puVar22[4] >> 8)) / fVar5;
      pfVar19[1] = (float)(int)CONCAT11((char)puVar22[5],(char)((ushort)puVar22[5] >> 8)) / fVar6;
      if (bVar7) {
        *param_3 = 1.0;
        param_3[1] = 1.0;
        param_3[2] = 1.0;
        param_3[3] = 1.0;
        *(float *)((int)param_2 + *(int *)(in_stack_00024054 + 0x70)) =
             (float)(int)(char)*(byte *)(puVar22 + 6) * 0.0078125;
        *(float *)((int)param_2 + 4 + *(int *)(in_stack_00024054 + 0x70)) =
             (float)(int)(char)*(byte *)((int)puVar22 + 0xd) * 0.0078125;
        *(float *)((int)param_2 + 8 + *(int *)(in_stack_00024054 + 0x70)) =
             (float)(int)(char)*(byte *)(puVar22 + 7) * 0.0078125;
        FUN_00492440((int)param_2 + *(int *)(in_stack_00024054 + 0x70));
      }
      else {
        uVar8 = 0;
        pfVar16 = param_3;
        do {
          iVar9 = uVar8 + 0xc;
          uVar8 = uVar8 + 1;
          *pfVar16 = (float)(uint)*(byte *)(iVar9 + (int)puVar22) * 0.003921569;
          pfVar16 = pfVar16 + 1;
        } while (uVar8 < 4);
      }
      pfVar16 = (float *)((int)param_4 + *(int *)(in_stack_00024054 + 0x58));
      pfVar19 = pfVar19 + 2;
      pfVar25 = pfVar25 + 3;
      *pfVar16 = *param_3;
      pfVar16[1] = param_3[1];
      pfVar16[2] = param_3[2];
      pfVar16[3] = param_3[3];
      param_2 = (float)((int)param_2 + 0xc);
      puVar22 = puVar22 + 8;
      param_4 = (float)((int)param_4 + 0x10);
      param_3 = param_3 + 4;
      param_8 = param_8 - 1;
    } while (param_8 != 0);
  }
  uVar8 = uVar18;
  if (param_5 != 0) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pfVar10 = *pfVar10 - 1.0;
      pfVar10[1] = pfVar10[1] - 1.0;
      pfVar10 = pfVar10 + 2;
    }
  }
  bVar7 = false;
  iVar9 = 0;
  piVar17 = in_stack_00024050;
  do {
    iVar13 = *piVar17 << 0x18;
    if (iVar13 == 0x5000000) {
      iVar9 = iVar9 + 0x18;
    }
    else if (iVar13 == 0x6000000) {
      iVar9 = iVar9 + 0x30;
    }
    else if (iVar13 == -0x21000000) {
      bVar7 = true;
    }
    piVar17 = piVar17 + 2;
  } while (!bVar7);
  uVar8 = FUN_00408e60(pbVar3,iVar9);
  bVar7 = false;
  iVar9 = param_5;
  do {
    iVar13 = *in_stack_00024050;
    iVar4 = in_stack_00024050[1];
    uVar12 = iVar13 << 0x18;
    cVar14 = (char)((uint)iVar13 >> 8) >> 1;
    cStack00000026 = (char)((uint)iVar13 >> 0x10);
    cVar15 = (char)(iVar13 >> 0x19);
    if (uVar12 < 0x5000001) {
      if (uVar12 == 0x5000000) {
        uVar20 = cVar14 + param_5;
        param_3 = (float *)((cStack00000026 >> 1) + param_5);
        uVar12 = cVar15 + param_5;
        if (uVar18 < uVar20) {
          uVar20 = 0;
        }
        if (uVar18 < param_3) {
          param_3 = (float *)0x0;
        }
        if (uVar18 < uVar12) {
          uVar12 = 0;
        }
        iVar9 = param_7 * 0x48;
        FUN_004923c0(&stack0x0000004c + iVar9);
        *(uint *)(&stack0x00000058 + iVar9) = param_16;
        *(uint *)(&stack0x00000060 + iVar9) = uVar8;
        *(uint *)(&stack0x0000004c + iVar9) = param_7;
        *(uint *)(&stack0x00000050 + iVar9) = in_stack_0002405c;
        *(undefined4 *)(&stack0x00000054 + iVar9) = 4;
        *(undefined4 *)(&stack0x0000005c + iVar9) = 3;
        **(uint **)(&stack0x00000060 + iVar9) = uVar20;
        *(float **)(*(int *)(&stack0x00000060 + iVar9) + 4) = param_3;
        *(uint *)(*(int *)(&stack0x00000060 + iVar9) + 8) = uVar12;
        *(uint *)(&stack0x00000064 + iVar9) = uVar8 + 0xc;
        uVar8 = uVar8 + 0x18;
        param_7 = param_7 + 1;
        **(uint **)(&stack0x00000064 + iVar9) = uVar20;
        *(float **)(*(int *)(&stack0x00000064 + iVar9) + 4) = param_3;
        *(uint *)(*(int *)(&stack0x00000064 + iVar9) + 8) = uVar12;
        *(uint *)(&stack0x00000068 + iVar9) = param_15;
        iVar9 = param_5;
      }
      else if (uVar12 == 0x1000000) {
        _DAT_00e996a0 = in_stack_00024050[1] + *(short *)((int)in_stack_00024058 + 0x3e) * -0x10;
        param_5 = (int)((_DAT_00e996a0 - (int)in_stack_00024058[0xd]) +
                       (_DAT_00e996a0 - (int)in_stack_00024058[0xd] >> 0x1f & 0xfU)) >> 4;
        iVar9 = param_5;
      }
    }
    else if (uVar12 == 0x6000000) {
      cStack00000029 = (char)((uint)iVar4 >> 8);
      param_4 = (float)(cVar14 + iVar9);
      cStack0000002a = (char)((uint)iVar4 >> 0x10);
      param_11 = (cStack00000026 >> 1) + iVar9;
      uVar12 = (cStack00000029 >> 1) + iVar9;
      param_8 = cVar15 + iVar9;
      param_3 = (float *)((cStack0000002a >> 1) + iVar9);
      param_1 = (char)(iVar4 >> 0x19) + iVar9;
      if (uVar18 < uVar12) {
        uVar12 = 0;
      }
      if (uVar18 < param_3) {
        param_3 = (float *)0x0;
      }
      if (uVar18 < param_1) {
        param_1 = 0;
      }
      if (uVar18 < (uint)param_4) {
        param_4 = 0.0;
      }
      if (uVar18 < param_11) {
        param_11 = 0;
      }
      if (uVar18 < param_8) {
        param_8 = 0;
      }
      iVar9 = param_7 * 0x48;
      puVar21 = (uint *)(&stack0x0000004c + iVar9);
      if (param_7 < param_7 + 2) {
        param_12 = (param_7 + 2) - param_7;
        puVar23 = puVar21;
        do {
          FUN_004923c0(puVar21);
          puVar23[3] = param_16;
          puVar23[5] = uVar8;
          puVar23[1] = in_stack_0002405c;
          *puVar23 = param_7;
          puVar23[2] = 4;
          puVar23[4] = 3;
          puVar23[6] = uVar8 + 0xc;
          puVar23[7] = param_15;
          uVar8 = uVar8 + 0x18;
          puVar23 = puVar23 + 0x12;
          puVar21 = puVar21 + 0x12;
          param_12 = param_12 + -1;
        } while (param_12 != 0);
      }
      **(uint **)(&stack0x00000060 + iVar9) = (uint)param_4;
      *(uint *)(*(int *)(&stack0x00000060 + iVar9) + 4) = param_11;
      *(uint *)(*(int *)(&stack0x00000060 + iVar9) + 8) = param_8;
      **(uint **)(&stack0x00000064 + iVar9) = (uint)param_4;
      *(uint *)(*(int *)(&stack0x00000064 + iVar9) + 4) = param_11;
      *(uint *)(*(int *)(&stack0x00000064 + iVar9) + 8) = param_8;
      **(uint **)(&stack0x000000a8 + iVar9) = uVar12;
      *(float **)(*(int *)(&stack0x000000a8 + iVar9) + 4) = param_3;
      *(uint *)(*(int *)(&stack0x000000a8 + iVar9) + 8) = param_1;
      **(uint **)(&stack0x000000ac + iVar9) = uVar12;
      *(float **)(*(int *)(&stack0x000000ac + iVar9) + 4) = param_3;
      *(uint *)(*(int *)(&stack0x000000ac + iVar9) + 8) = param_1;
      param_7 = param_7 + 2;
      iVar9 = param_5;
    }
    else if (uVar12 == 0xdf000000) {
      bVar7 = true;
    }
    in_stack_00024050 = in_stack_00024050 + 2;
  } while (!bVar7);
  *(uint *)(in_stack_00024054 + 0x7c) = param_7;
  uVar11 = FUN_00408e60(pbVar3,param_7 * 0x48);
  *(undefined4 *)(in_stack_00024054 + 0x6c) = uVar11;
  if (param_7 != 0) {
    iVar9 = 0;
    do {
      puVar24 = (undefined4 *)(iVar9 + *(int *)(in_stack_00024054 + 0x6c));
      FUN_004923c0(puVar24);
      *puVar24 = *(undefined4 *)(&stack0x0000004c + iVar9);
      puVar24[1] = *(undefined4 *)(&stack0x00000050 + iVar9);
      puVar24[2] = *(undefined4 *)(&stack0x00000054 + iVar9);
      puVar24[3] = *(undefined4 *)(&stack0x00000058 + iVar9);
      puVar24[4] = *(undefined4 *)(&stack0x0000005c + iVar9);
      puVar24[5] = *(undefined4 *)(&stack0x00000060 + iVar9);
      puVar24[6] = *(undefined4 *)(&stack0x00000064 + iVar9);
      puVar1 = (undefined4 *)(&stack0x00000068 + iVar9);
      iVar9 = iVar9 + 0x48;
      param_7 = param_7 - 1;
      puVar24[7] = *puVar1;
    } while (param_7 != 0);
  }
  return;
}

#endif
