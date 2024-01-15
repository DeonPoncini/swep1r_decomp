; FUN_0048c8f0
PUSH EBP
MOV EBP,ESP
PUSH ECX
FLDCW word ptr [0x00ec8c82]
FLD dword ptr [EBP + 0x8]
FRNDINT
FSTP dword ptr [EBP + -0x4]
FLDCW word ptr [0x00ec8c80]
FLD dword ptr [EBP + -0x4]
MOV ESP,EBP
POP EBP
RET
