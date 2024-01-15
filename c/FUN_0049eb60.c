#include "prototype.h"


void FUN_0049eb60(code **param_1,code **param_2)

{
  if (param_1 < param_2) {
    do {
      if (*param_1 != (code *)0x0) {
        (**param_1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}

