; FUN_0041aa40
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST ESI,ESI
JZ 0x0041aa8b
PUSH EDI
MOV EDI,dword ptr [ESP + 0x14]
PUSH EBP
MOV EBP,dword ptr [ESP + 0x14]
PUSH EBX
MOV BL,0x40
TEST byte ptr [ESI + 0x20],BL
JZ 0x0041aa81
MOV EAX,dword ptr [ESI + 0xc]
TEST EAX,EAX
JZ 0x0041aa6d
PUSH EDI
PUSH EBP
PUSH EAX
CALL 0x0041aa40
ADD ESP,0xc
MOV EAX,dword ptr [ESI + 0x18]
TEST EAX,EAX
JNZ 0x0041aa81
PUSH EDI
PUSH EBP
PUSH 0x4a
PUSH ESI
CALL 0x004151a0
ADD ESP,0x10
MOV ESI,dword ptr [ESI + 0x4]
TEST ESI,ESI
JNZ 0x0041aa56
POP EBX
POP EBP
POP EDI
POP ESI
RET
