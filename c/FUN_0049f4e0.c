#include "prototype.h"


undefined4 * FUN_0049f4e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    param_2 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar2 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar2 & 3) == 0) {
      uVar1 = param_3 >> 2;
      param_3 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar2 = *param_2;
          param_2 = param_2 + -1;
          puVar2 = puVar2 + -1;
        }
        switch(param_3) {
        case 0:
          return param_1;
        case 2:
          goto switchD_0049f697_caseD_2;
        case 3:
          goto switchD_0049f697_caseD_3;
        }
        goto switchD_0049f697_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_0049f697_caseD_0;
      case 1:
        goto switchD_0049f697_caseD_1;
      case 2:
        goto switchD_0049f697_caseD_2;
      case 3:
        goto switchD_0049f697_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar2 & 3);
        switch((uint)puVar2 & 3) {
        case 1:
          param_3 = uVar1 & 3;
          *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
          param_2 = (undefined4 *)((int)param_2 + -1);
          uVar1 = uVar1 >> 2;
          puVar2 = (undefined4 *)((int)puVar2 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0049f697_caseD_2;
            case 3:
              goto switchD_0049f697_caseD_3;
            }
            goto switchD_0049f697_caseD_1;
          }
          break;
        case 2:
          param_3 = uVar1 & 3;
          *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar2 + 2) = *(undefined *)((int)param_2 + 2);
          param_2 = (undefined4 *)((int)param_2 + -2);
          puVar2 = (undefined4 *)((int)puVar2 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0049f697_caseD_2;
            case 3:
              goto switchD_0049f697_caseD_3;
            }
            goto switchD_0049f697_caseD_1;
          }
          break;
        case 3:
          param_3 = uVar1 & 3;
          *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
          *(undefined *)((int)puVar2 + 2) = *(undefined *)((int)param_2 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar2 + 1) = *(undefined *)((int)param_2 + 1);
          param_2 = (undefined4 *)((int)param_2 + -3);
          puVar2 = (undefined4 *)((int)puVar2 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar2 = *param_2;
              param_2 = param_2 + -1;
              puVar2 = puVar2 + -1;
            }
            switch(param_3) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0049f697_caseD_2;
            case 3:
              goto switchD_0049f697_caseD_3;
            }
            goto switchD_0049f697_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar2[7 - uVar1] = param_2[7 - uVar1];
    case 6:
      puVar2[6 - uVar1] = param_2[6 - uVar1];
    case 5:
      puVar2[5 - uVar1] = param_2[5 - uVar1];
    case 4:
      puVar2[4 - uVar1] = param_2[4 - uVar1];
    case 3:
      puVar2[3 - uVar1] = param_2[3 - uVar1];
    case 2:
      puVar2[2 - uVar1] = param_2[2 - uVar1];
    case 1:
      puVar2[1 - uVar1] = param_2[1 - uVar1];
      param_2 = param_2 + -uVar1;
      puVar2 = puVar2 + -uVar1;
    }
    switch(param_3) {
    case 1:
switchD_0049f697_caseD_1:
      *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
      return param_1;
    case 2:
switchD_0049f697_caseD_2:
      *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
      *(undefined *)((int)puVar2 + 2) = *(undefined *)((int)param_2 + 2);
      return param_1;
    case 3:
switchD_0049f697_caseD_3:
      *(undefined *)((int)puVar2 + 3) = *(undefined *)((int)param_2 + 3);
      *(undefined *)((int)puVar2 + 2) = *(undefined *)((int)param_2 + 2);
      *(undefined *)((int)puVar2 + 1) = *(undefined *)((int)param_2 + 1);
      return param_1;
    }
switchD_0049f697_caseD_0:
    return param_1;
  }
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    param_3 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      switch(param_3) {
      case 0:
        return param_1;
      case 2:
        goto switchD_0049f515_caseD_2;
      case 3:
        goto switchD_0049f515_caseD_3;
      }
      goto switchD_0049f515_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_0049f515_caseD_0;
    case 1:
      goto switchD_0049f515_caseD_1;
    case 2:
      goto switchD_0049f515_caseD_2;
    case 3:
      goto switchD_0049f515_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        param_3 = uVar1 & 3;
        *(undefined *)param_1 = *(undefined *)param_2;
        *(undefined *)((int)param_1 + 1) = *(undefined *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)param_1 + 2) = *(undefined *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar2 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0049f515_caseD_2;
          case 3:
            goto switchD_0049f515_caseD_3;
          }
          goto switchD_0049f515_caseD_1;
        }
        break;
      case 2:
        param_3 = uVar1 & 3;
        *(undefined *)param_1 = *(undefined *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)param_1 + 1) = *(undefined *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar2 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0049f515_caseD_2;
          case 3:
            goto switchD_0049f515_caseD_3;
          }
          goto switchD_0049f515_caseD_1;
        }
        break;
      case 3:
        param_3 = uVar1 & 3;
        *(undefined *)param_1 = *(undefined *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar2 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar2 = *param_2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
          }
          switch(param_3) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0049f515_caseD_2;
          case 3:
            goto switchD_0049f515_caseD_3;
          }
          goto switchD_0049f515_caseD_1;
        }
      }
    }
  }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar2[uVar1 - 7] = param_2[uVar1 - 7];
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar2[uVar1 - 6] = param_2[uVar1 - 6];
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar2[uVar1 - 5] = param_2[uVar1 - 5];
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar2[uVar1 - 4] = param_2[uVar1 - 4];
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar2[uVar1 - 3] = param_2[uVar1 - 3];
  case 8:
  case 9:
  case 10:
  case 0xb:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar2[uVar1 - 2] = param_2[uVar1 - 2];
  case 4:
  case 5:
  case 6:
  case 7:
    puVar2[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar2 = puVar2 + uVar1;
  }
  switch(param_3) {
  case 1:
switchD_0049f515_caseD_1:
    *(undefined *)puVar2 = *(undefined *)param_2;
    return param_1;
  case 2:
switchD_0049f515_caseD_2:
    *(undefined *)puVar2 = *(undefined *)param_2;
    *(undefined *)((int)puVar2 + 1) = *(undefined *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_0049f515_caseD_3:
    *(undefined *)puVar2 = *(undefined *)param_2;
    *(undefined *)((int)puVar2 + 1) = *(undefined *)((int)param_2 + 1);
    *(undefined *)((int)puVar2 + 2) = *(undefined *)((int)param_2 + 2);
    return param_1;
  }
switchD_0049f515_caseD_0:
  return param_1;
}

