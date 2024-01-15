; FUN_0048cd30
PUSH EBP
MOV EBP,ESP
SUB ESP,0x8
LEA EAX,[EBP + -0x4]
MOV dword ptr [EBP + -0x8],EAX
FLD dword ptr [EBP + 0x8]
MOV EAX,dword ptr [EBP + -0x8]
FRNDINT
FISTP dword ptr [EAX]
MOV EAX,dword ptr [EBP + -0x4]
MOV ESP,EBP
POP EBP
RET
