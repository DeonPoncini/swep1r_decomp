; FUN_0042acf0
MOV EAX,[0x0050c07c]
TEST EAX,EAX
JNZ 0x0042ad0c
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
PUSH EAX
PUSH ECX
CALL 0x0042a9f0
ADD ESP,0x8
RET
CMP EAX,0x1
JNZ 0x0042ad23
MOV EDX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x4]
PUSH EDX
PUSH EAX
CALL 0x0042a110
ADD ESP,0x8
RET
