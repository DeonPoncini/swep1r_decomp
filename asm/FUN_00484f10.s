; FUN_00484f10
MOV ECX,dword ptr [0x0050d560]
TEST ECX,ECX
JZ 0x00484f37
MOV EAX,dword ptr [ESP + 0x4]
PUSH ECX
MOV EDX,dword ptr [ECX]
FLD dword ptr [EAX + 0x4]
FCHS
FSTP dword ptr [ESP]
FLD dword ptr [EAX + 0x8]
MOV EAX,dword ptr [EAX]
PUSH ECX
FSTP dword ptr [ESP]
PUSH EAX
PUSH ECX
CALL dword ptr [EDX + 0x3c]
RET
