; FUN_00470510
MOV EAX,dword ptr [ESP + 0x8]
PUSH ESI
FLD dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x18]
FMUL qword ptr [0x00e22a40]
FXCH
FMUL qword ptr [0x00e22a40]
FXCH
FSTP dword ptr [ESP + 0x18]
MOV ESI,dword ptr [ESP + 0x8]
ADD EAX,0x1d7
FSTP dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [ESI + 0x60]
LEA EDX,[EAX + EAX*0x2]
MOV EAX,dword ptr [ESP + 0x10]
PUSH EDI
LEA EDI,[ESI + EDX*0x4]
MOV dword ptr [ESP + 0x10],EAX
TEST ECX,0x800000
MOV EDX,dword ptr [EDI]
MOV dword ptr [ESP + 0xc],EDX
JZ 0x0047056c
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [0x004ad95c]
FSTP dword ptr [ESP + 0x10]
TEST CH,0x2
JZ 0x00470583
FLD dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x18]
FADD ST0,ST0
MOV dword ptr [ESP + 0x10],EAX
FSTP dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x28]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x28]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x14]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x1c]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0046d730
MOV EAX,dword ptr [ESI + 0x64]
ADD ESP,0x18
TEST EAX,0x2000000
JZ 0x004705bd
FADD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004ad95c]
FST dword ptr [EDI]
POP EDI
POP ESI
RET
