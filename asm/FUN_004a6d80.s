; FUN_004a6d80
MOV EDX,dword ptr [ESP + 0x4]
XOR EAX,EAX
TEST DL,0x10
JZ 0x004a6d90
MOV EAX,0x1
TEST DL,0x8
JZ 0x004a6d97
OR AL,0x4
TEST DL,0x4
JZ 0x004a6d9e
OR AL,0x8
TEST DL,0x2
JZ 0x004a6da5
OR AL,0x10
TEST DL,0x1
JZ 0x004a6dac
OR AL,0x20
TEST EDX,0x80000
JZ 0x004a6db6
OR AL,0x2
MOV ECX,EDX
AND ECX,0x300
CMP ECX,0x100
JA 0x004a6dcd
JNZ 0x004a6de5
OR AH,0x4
JMP 0x004a6de5
CMP ECX,0x200
JZ 0x004a6de2
CMP ECX,0x300
JNZ 0x004a6de5
OR AH,0xc
JMP 0x004a6de5
OR AH,0x8
MOV ECX,EDX
AND ECX,0x30000
JZ 0x004a6dfc
CMP ECX,0x10000
JNZ 0x004a6dff
OR AH,0x2
JMP 0x004a6dff
OR AH,0x3
TEST EDX,0x40000
JZ 0x004a6e0a
OR AH,0x10
RET