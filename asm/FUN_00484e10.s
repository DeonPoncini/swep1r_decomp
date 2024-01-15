; FUN_00484e10
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
PUSH ECX
FLD dword ptr [EAX + 0x4]
FCHS
MOV EDX,dword ptr [ECX]
FSTP dword ptr [ESP]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [EAX]
PUSH ECX
FSTP dword ptr [ESP]
PUSH EAX
PUSH ECX
CALL dword ptr [EDX + 0x50]
RET
