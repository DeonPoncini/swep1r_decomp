; FUN_0044ec40
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
XOR EDI,EDI
FLD dword ptr [ESI + 0x4]
FCOMP dword ptr [0x004accac]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044ec5d
CMP dword ptr [ESI + 0x20],EDI
JZ 0x0044ec72
FLD dword ptr [ESI + 0x4]
FCOMP dword ptr [0x004accac]
FNSTSW AX
TEST AH,0x1
JZ 0x0044eca7
CMP dword ptr [ESI + 0x24],EDI
JNZ 0x0044eca7
FLD dword ptr [ESI + 0x4]
FMUL qword ptr [0x00e22a40]
FCOM dword ptr [0x004accac]
FLD ST0
FADD dword ptr [ESI + 0x8]
FNSTSW AX
FSTP dword ptr [ESI + 0x8]
TEST AH,0x1
JZ 0x0044ec97
FSTP ST0
MOV dword ptr [ESI + 0x20],EDI
JMP 0x0044eca7
FCOMP dword ptr [0x004accac]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044eca7
MOV dword ptr [ESI + 0x24],EDI
FLD dword ptr [ESI + 0x8]
FCOMP dword ptr [0x004acca8]
FNSTSW AX
TEST AH,0x1
JNZ 0x0044ece6
CMP dword ptr [ESI + 0x20],EDI
JNZ 0x0044ece6
FLD dword ptr [ESI + 0x8]
FSUB dword ptr [0x004acca8]
MOV EAX,dword ptr [ESI]
PUSH ESI
PUSH 0x1
PUSH EAX
FSTP dword ptr [ESI + 0x8]
CALL 0x0044eaa0
FLD dword ptr [ESI + 0x8]
FCOMP dword ptr [0x004acca8]
ADD ESP,0xc
FNSTSW AX
TEST AH,0x1
JZ 0x0044ecb7
FLD dword ptr [ESI + 0x8]
FCOMP dword ptr [0x004accac]
FNSTSW AX
TEST AH,0x1
JZ 0x0044ed25
CMP dword ptr [ESI + 0x24],EDI
JNZ 0x0044ed25
FLD dword ptr [ESI + 0x8]
FSUB dword ptr [0x004accb0]
MOV ECX,dword ptr [ESI]
PUSH ESI
PUSH 0x2
PUSH ECX
FSTP dword ptr [ESI + 0x8]
CALL 0x0044eaa0
FLD dword ptr [ESI + 0x8]
FCOMP dword ptr [0x004accac]
ADD ESP,0xc
FNSTSW AX
TEST AH,0x1
JNZ 0x0044ecf6
FLD dword ptr [ESI + 0x8]
FCOMP dword ptr [0x004accac]
FNSTSW AX
TEST AH,0x1
JZ 0x0044ed38
MOV dword ptr [ESI + 0x8],EDI
FLD dword ptr [ESI + 0x8]
FCOMP dword ptr [0x004acca8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044ed4f
MOV dword ptr [ESI + 0x8],0x3f800000
MOV EDI,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESI + 0x8]
MOV ECX,dword ptr [ESI]
LEA EDX,[ESI + 0x10]
PUSH EDI
PUSH EDX
PUSH EAX
PUSH 0xb
PUSH ECX
CALL 0x0044e660
ADD ESP,0x14
ADD EDI,0xc
PUSH EDI
CALL 0x0042f8c0
FSTP dword ptr [ESI + 0xc]
ADD ESP,0x4
POP EDI
POP ESI
RET
