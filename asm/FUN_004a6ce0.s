; FUN_004a6ce0
PUSH EBX
MOV EBX,dword ptr [ESP + 0x8]
XOR EAX,EAX
TEST BL,0x1
JZ 0x004a6cf1
MOV EAX,0x10
TEST BL,0x4
JZ 0x004a6cf8
OR AL,0x8
TEST BL,0x8
JZ 0x004a6cff
OR AL,0x4
TEST BL,0x10
JZ 0x004a6d06
OR AL,0x2
TEST BL,0x20
JZ 0x004a6d0d
OR AL,0x1
TEST BL,0x2
JZ 0x004a6d17
OR EAX,0x80000
MOV EDX,EBX
AND EDX,0xffff
MOV ECX,EDX
AND ECX,0xc00
CMP ECX,0x400
JG 0x004a6d36
JNZ 0x004a6d4e
OR AH,0x1
JMP 0x004a6d4e
CMP ECX,0x800
JZ 0x004a6d4b
CMP ECX,0xc00
JNZ 0x004a6d4e
OR AH,0x3
JMP 0x004a6d4e
OR AH,0x2
AND EDX,0x300
JZ 0x004a6d65
CMP EDX,0x200
JNZ 0x004a6d6a
OR EAX,0x10000
JMP 0x004a6d6a
OR EAX,0x20000
TEST BH,0x10
JZ 0x004a6d74
OR EAX,0x40000
POP EBX
RET