; FUN_004903d0
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESP + 0xc]
PUSH ESI
MOV dword ptr [ECX + 0x870],EAX
MOV EAX,dword ptr [ECX + 0x6c]
XOR ESI,ESI
MOV dword ptr [ECX + 0x874],EDX
TEST EAX,EAX
JBE 0x00490442
PUSH EDI
LEA EDI,[ECX + 0x70]
MOV EDX,dword ptr [EDI]
FLD dword ptr [EDX + 0x28]
FCOMP dword ptr [0x004af7c4]
FNSTSW AX
TEST AH,0x40
JZ 0x00490417
FLD dword ptr [ECX + 0x870]
FMUL dword ptr [0x004af7c8]
FSTP dword ptr [EDX + 0x28]
FLD dword ptr [EDX + 0x2c]
FCOMP dword ptr [0x004af7c4]
FNSTSW AX
TEST AH,0x40
JZ 0x00490436
FLD dword ptr [ECX + 0x874]
FMUL dword ptr [0x004af7cc]
FSTP dword ptr [EDX + 0x2c]
MOV EAX,dword ptr [ECX + 0x6c]
INC ESI
ADD EDI,0x4
CMP ESI,EAX
JC 0x004903f6
POP EDI
POP ESI
RET
