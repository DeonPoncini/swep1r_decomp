; FUN_00484f40
MOV ECX,dword ptr [0x0050d560]
TEST ECX,ECX
JZ 0x00484f9a
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ECX]
PUSH ESI
PUSH ECX
FLD dword ptr [EAX + 0x4]
MOV ESI,dword ptr [EAX + 0x8]
MOV EAX,dword ptr [EAX]
FCHS
FSTP dword ptr [ESP]
PUSH ESI
PUSH EAX
PUSH ECX
CALL dword ptr [EDX + 0xc]
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [0x0050d560]
PUSH ECX
FLD dword ptr [EAX + 0x4]
MOV ESI,dword ptr [EAX + 0x8]
MOV EAX,dword ptr [EAX]
FCHS
FSTP dword ptr [ESP]
PUSH ESI
PUSH EAX
MOV EAX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ECX]
PUSH ECX
FLD dword ptr [EAX + 0x4]
MOV ESI,dword ptr [EAX + 0x8]
MOV EAX,dword ptr [EAX]
FCHS
FSTP dword ptr [ESP]
PUSH ESI
PUSH EAX
PUSH ECX
CALL dword ptr [EDX + 0x2c]
POP ESI
RET
