; FUN_004692a0
SUB ESP,0xc
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
LEA EDX,[ESP + 0x4]
LEA EAX,[ESI + 0x44]
LEA ECX,[ESI + 0x50]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042f860
ADD ESP,0xc
LEA EAX,[ESP + 0x4]
MOV dword ptr [ESP + 0xc],0x0
PUSH EAX
CALL 0x0042f8c0
MOV ECX,dword ptr [ESP + 0xc]
ADD ESP,0x4
FSTP ST0
FLD dword ptr [ESP + 0x4]
PUSH ECX
PUSH ECX
FCHS
FSTP dword ptr [ESP]
CALL 0x0042f560
FSTP dword ptr [ESP + 0x1c]
FLD dword ptr [ESP + 0x1c]
FSUB dword ptr [ESI + 0x68]
MOV EDX,dword ptr [ESP + 0x1c]
ADD ESP,0x8
MOV dword ptr [ESI + 0x6c],EDX
FCOM dword ptr [0x004ad5b8]
FNSTSW AX
TEST AH,0x1
JZ 0x00469310
FSUB dword ptr [0x004ad5bc]
FCOM dword ptr [0x004ad5c0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00469323
FSUB dword ptr [0x004ad5c4]
FCOM dword ptr [0x004ad598]
FNSTSW AX
TEST AH,0x41
JZ 0x0046934b
FCOM dword ptr [0x004ad5c8]
FNSTSW AX
TEST AH,0x1
JNZ 0x0046934b
MOV EAX,dword ptr [ESP + 0x14]
FSTP ST0
MOV dword ptr [ESI + 0x68],EAX
POP ESI
ADD ESP,0xc
RET
FCOMP dword ptr [0x004ad590]
FLD dword ptr [0x00e22a50]
FNSTSW AX
TEST AH,0x1
JZ 0x0046936f
FMUL dword ptr [0x004ad690]
FSUBR dword ptr [ESI + 0x68]
FSTP dword ptr [ESI + 0x68]
POP ESI
ADD ESP,0xc
RET
FMUL dword ptr [0x004ad694]
FSUBR dword ptr [ESI + 0x68]
FSTP dword ptr [ESI + 0x68]
POP ESI
ADD ESP,0xc
RET
