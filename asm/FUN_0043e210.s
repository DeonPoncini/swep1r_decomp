; FUN_0043e210
SUB ESP,0x20
LEA EAX,[ESP + 0x14]
PUSH 0xe298f0
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
LEA ECX,[ESP + 0x8]
PUSH 0xe298f0
PUSH 0xe2af90
PUSH ECX
CALL 0x0042f860
ADD ESP,0xc
LEA EDX,[ESP + 0x8]
PUSH EDX
CALL 0x0042f9b0
MOV EAX,dword ptr [ESP + 0x10]
ADD ESP,0x4
FSTP ST0
FLD dword ptr [ESP + 0x8]
PUSH EAX
PUSH ECX
FCHS
FSTP dword ptr [ESP]
CALL 0x0042f560
MOV ECX,dword ptr [ESP + 0x18]
ADD ESP,0x8
FSTP dword ptr [ESP + 0x4]
PUSH ECX
CALL 0x0042f3e0
FSTP dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x004ac778]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x0043e296
FLD dword ptr [ESP + 0x4]
FSUB dword ptr [0x004ac7f8]
FSTP dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x4]
FCOMP dword ptr [0x004ac7b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0043e2b5
FLD dword ptr [ESP + 0x4]
FSUB dword ptr [0x004ac7b0]
FSTP dword ptr [ESP + 0x4]
FLD dword ptr [ESP]
FCOMP dword ptr [0x004ac7d0]
FNSTSW AX
TEST AH,0x1
JZ 0x0043e2d4
FLD dword ptr [ESP]
FSUB dword ptr [0x004ac7fc]
FSTP dword ptr [ESP]
FLD dword ptr [ESP]
FCOMP dword ptr [0x004ac800]
FNSTSW AX
TEST AH,0x41
JNZ 0x0043e2f3
FLD dword ptr [ESP]
FSUB dword ptr [0x004ac7ec]
FSTP dword ptr [ESP]
MOV EDX,dword ptr [ESP]
MOV EAX,dword ptr [ESP + 0x4]
PUSH 0x0
PUSH EDX
PUSH EAX
PUSH 0xe298c0
CALL 0x00431020
ADD ESP,0x10
LEA ECX,[ESP + 0x14]
PUSH ECX
PUSH 0xe298f0
CALL 0x0042f7d0
ADD ESP,0x8
ADD ESP,0x20
RET
