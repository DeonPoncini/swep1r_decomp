; FUN_00469070
SUB ESP,0x24
LEA ECX,[ESP + 0x18]
PUSH EBX
MOV EBX,dword ptr [ESP + 0x2c]
PUSH ESI
PUSH EDI
LEA ESI,[EBX + 0x44]
LEA EAX,[EBX + 0x50]
PUSH ESI
PUSH EAX
PUSH ECX
CALL 0x0042f860
ADD ESP,0xc
LEA EDX,[ESP + 0x18]
PUSH 0xe298f0
PUSH 0xe2af90
PUSH EDX
CALL 0x0042f860
ADD ESP,0xc
LEA EAX,[ESP + 0xc]
PUSH 0xe298f0
PUSH ESI
PUSH EAX
CALL 0x0042f860
ADD ESP,0xc
LEA ECX,[ESP + 0x24]
PUSH ECX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EDX,[ESP + 0x18]
FSTP ST0
PUSH EDX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EAX,[ESP + 0xc]
FSTP ST0
PUSH EAX
CALL 0x0042f9b0
ADD ESP,0x4
LEA ECX,[ESP + 0xc]
LEA EDX,[ESP + 0x18]
XOR EDI,EDI
PUSH ECX
PUSH EDX
FSTP ST0
CALL 0x0042f890
FCOMP qword ptr [0x004ad688]
ADD ESP,0x8
FNSTSW AX
TEST AH,0x1
JZ 0x0046919f
CMP EDI,0x28
JGE 0x0046919f
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ad63c]
LEA EAX,[ESP + 0x24]
PUSH EAX
PUSH ECX
FSTP dword ptr [ESP]
PUSH ESI
PUSH ESI
CALL 0x0042fa80
ADD ESP,0x10
LEA ECX,[ESP + 0x18]
PUSH 0xe298f0
PUSH 0xe2af90
PUSH ECX
CALL 0x0042f860
ADD ESP,0xc
LEA EDX,[ESP + 0xc]
PUSH 0xe298f0
PUSH ESI
PUSH EDX
CALL 0x0042f860
ADD ESP,0xc
LEA EAX,[ESP + 0x18]
PUSH EAX
CALL 0x0042f9b0
ADD ESP,0x4
LEA ECX,[ESP + 0xc]
FSTP ST0
PUSH ECX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EDX,[ESP + 0xc]
LEA EAX,[ESP + 0x18]
INC EDI
PUSH EDX
PUSH EAX
FSTP ST0
CALL 0x0042f890
FCOMP qword ptr [0x004ad688]
ADD ESP,0x8
FNSTSW AX
TEST AH,0x1
JNZ 0x0046910b
TEST EDI,EDI
JLE 0x004691b0
MOV ECX,dword ptr [EBX + 0x30]
PUSH ESI
PUSH ECX
CALL 0x0044b270
ADD ESP,0x8
POP EDI
POP ESI
POP EBX
ADD ESP,0x24
RET
