; FUN_00490aa0
MOV EDX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ESP + 0xc]
PUSH ESI
TEST DL,0x1
PUSH EDI
MOV dword ptr [ECX],EDX
MOV dword ptr [ECX + 0x4],EAX
JZ 0x00490ad6
MOV EAX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x1c]
MOV dword ptr [ECX + 0x10],EAX
MOV EAX,dword ptr [ESP + 0x20]
MOV dword ptr [ECX + 0x14],EDX
MOV EDX,dword ptr [ESP + 0x24]
MOV dword ptr [ECX + 0x18],EAX
MOV dword ptr [ECX + 0x1c],EDX
JMP 0x00490aec
XOR EDX,EDX
MOV dword ptr [ECX + 0x10],EDX
MOV dword ptr [ECX + 0x14],EDX
MOV EDX,dword ptr [EAX + 0xc]
DEC EDX
MOV dword ptr [ECX + 0x18],EDX
MOV EAX,dword ptr [EAX + 0x10]
DEC EAX
MOV dword ptr [ECX + 0x1c],EAX
MOV EAX,dword ptr [ECX + 0x10]
MOV ESI,dword ptr [ECX + 0x18]
MOV EDX,dword ptr [ECX + 0x14]
MOV EDI,dword ptr [ECX + 0x1c]
SUB ESI,EAX
SUB EDI,EDX
INC ESI
INC EDI
MOV dword ptr [ESP + 0x10],ESI
MOV dword ptr [ESP + 0xc],EDI
FILD dword ptr [ESP + 0x10]
FILD dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [ESP + 0x18],EDX
FILD dword ptr [ESP + 0x14]
FXCH ST2
FMUL dword ptr [0x004af900]
FXCH
FMUL dword ptr [0x004af900]
FILD dword ptr [ESP + 0x18]
FXCH ST3
FADDP ST2,ST0
FXCH ST2
FADDP ST2,ST0
POP EDI
MOV EAX,0x1
FSTP dword ptr [ECX + 0x8]
FSTP dword ptr [ECX + 0xc]
POP ESI
RET
