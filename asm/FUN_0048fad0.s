; FUN_0048fad0
MOV EAX,[0x00ecc428]
PUSH ESI
PUSH 0x878
CALL dword ptr [EAX + 0x20]
MOV ESI,EAX
ADD ESP,0x4
TEST ESI,ESI
JNZ 0x0048fae9
POP ESI
RET
MOV ECX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x10]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x10]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x10]
PUSH EAX
PUSH ECX
PUSH EDX
PUSH ESI
CALL 0x0048fb20
ADD ESP,0x18
NEG EAX
SBB EAX,EAX
AND EAX,ESI
POP ESI
RET
