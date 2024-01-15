; FUN_00481220
SUB ESP,0xc
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x24]
MOV EAX,dword ptr [ESI]
MOV dword ptr [EDI],EAX
MOV ECX,dword ptr [ESI + 0x4]
MOV EAX,dword ptr [ESP + 0x1c]
MOV dword ptr [EDI + 0x4],ECX
MOV EDX,dword ptr [ESI + 0x8]
MOV dword ptr [EDI + 0x8],EDX
FLD dword ptr [EAX]
FSUB dword ptr [ESI]
FSTP dword ptr [ESP + 0x8]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [ESI + 0x4]
FSTP dword ptr [ESP + 0xc]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [ESI + 0x8]
LEA EAX,[ESP + 0x8]
PUSH EAX
FSTP dword ptr [ESP + 0x14]
CALL 0x0042f8c0
FCOM dword ptr [0x004adfbc]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x00481379
FLD dword ptr [0x004adfa8]
FDIV ST0,ST1
LEA ECX,[ESP + 0x8]
LEA EDX,[ESP + 0x8]
PUSH ECX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EDX
FSTP ST0
CALL 0x0042fa50
MOV EAX,dword ptr [ESP + 0x1c]
ADD ESP,0xc
PUSH EAX
CALL 0x0042f3e0
FSTP dword ptr [EDI + 0x10]
FLD dword ptr [ESP + 0x10]
FCOMP qword ptr [0x004adfd8]
MOV ECX,dword ptr [ESP + 0x2c]
ADD ESP,0x4
MOV dword ptr [EDI + 0x14],ECX
FNSTSW AX
TEST AH,0x1
JZ 0x0048134b
FLD dword ptr [ESP + 0xc]
FCOMP qword ptr [0x004adfe0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0048134b
FLD dword ptr [ESP + 0x8]
FCOMP qword ptr [0x004adfe0]
FNSTSW AX
TEST AH,0x1
JZ 0x00481304
MOV EAX,dword ptr [ESP + 0x20]
PUSH EDI
PUSH EAX
MOV dword ptr [EDI + 0xc],0x42b40000
CALL 0x00431060
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0xc
RET
FLD dword ptr [ESP + 0x8]
FCOMP qword ptr [0x004adfd8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00481330
MOV EAX,dword ptr [ESP + 0x20]
PUSH EDI
PUSH EAX
MOV dword ptr [EDI + 0xc],0xc2b40000
CALL 0x00431060
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0xc
RET
MOV EAX,dword ptr [ESP + 0x20]
PUSH EDI
PUSH EAX
MOV dword ptr [EDI + 0xc],0x0
CALL 0x00431060
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0xc
RET
MOV EDX,dword ptr [ESP + 0xc]
FLD dword ptr [ESP + 0x8]
PUSH EDX
PUSH ECX
FCHS
FSTP dword ptr [ESP]
CALL 0x0042f560
MOV EAX,dword ptr [ESP + 0x28]
ADD ESP,0x8
FSTP dword ptr [EDI + 0xc]
PUSH EDI
PUSH EAX
CALL 0x00431060
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0xc
RET
MOV ECX,dword ptr [ESI + 0x8]
MOV EDX,dword ptr [ESI + 0x4]
MOV EAX,dword ptr [ESI]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x24]
PUSH EDX
PUSH EAX
PUSH ECX
FSTP ST0
CALL 0x00431100
ADD ESP,0x10
POP EDI
POP ESI
ADD ESP,0xc
RET
