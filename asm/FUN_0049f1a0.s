; FUN_0049f1a0
PUSH ESI
CALL 0x004a3040
MOV ESI,EAX
TEST ESI,ESI
JNZ 0x0049f1ae
POP ESI
RET
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x8]
PUSH EDI
PUSH ESI
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x004a2e70
ADD ESP,0x10
MOV EDI,EAX
PUSH ESI
CALL 0x004a1780
ADD ESP,0x4
MOV EAX,EDI
POP EDI
POP ESI
RET
