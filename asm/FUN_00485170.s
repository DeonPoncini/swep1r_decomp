; FUN_00485170
MOV EDX,dword ptr [ESP + 0xc]
MOV EAX,dword ptr [ESP + 0x4]
PUSH 0x0
PUSH 0x0
MOV ECX,dword ptr [EAX]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x14]
PUSH EDX
PUSH EAX
CALL dword ptr [ECX + 0x30]
XOR ECX,ECX
TEST EAX,EAX
SETZ CL
MOV EAX,ECX
RET