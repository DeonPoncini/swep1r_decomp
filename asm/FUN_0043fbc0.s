; FUN_0043fbc0
MOV EAX,dword ptr [ESP + 0x8]
SUB ESP,0x18
CMP EAX,0x1a
JL 0x0043fcdb
CMP EAX,0x1d
JLE 0x0043fc15
CMP EAX,0x1e
JNZ 0x0043fcdb
MOV ECX,dword ptr [0x00e29970]
LEA EAX,[ESP]
PUSH EAX
PUSH ECX
CALL 0x0044afb0
MOV EDX,dword ptr [ESP + 0x24]
ADD ESP,0x8
MOVSX EAX,byte ptr [EDX + 0x73]
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
FLD dword ptr [EDX*0x4 + 0x4c2720]
FMUL qword ptr [0x004ac950]
FSUB qword ptr [0x004ac958]
JMP 0x0043fc4d
MOV EDX,dword ptr [EAX*0x4 + 0xe29968]
LEA ECX,[ESP]
PUSH ECX
PUSH EDX
CALL 0x0044afb0
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ac890]
FLD dword ptr [ESP + 0x10]
ADD ESP,0x8
FNSTSW AX
TEST AH,0x40
JZ 0x0043fc47
FSUB dword ptr [0x004ac84c]
JMP 0x0043fc4d
FSUB dword ptr [0x004ac8ac]
MOV AX,[0x0050c930]
FSTP dword ptr [ESP + 0x8]
CMP AX,0x1
JNZ 0x0043fc79
PUSH 0x1
PUSH 0x0
LEA EAX,[ESP + 0x8]
PUSH 0x1
PUSH EAX
PUSH 0xe29b90
CALL 0x0045c010
ADD ESP,0x14
ADD ESP,0x18
RET
CMP AX,0x3
JNZ 0x0043fc9b
PUSH 0x1
PUSH 0x1
LEA ECX,[ESP + 0x8]
PUSH 0x3
PUSH ECX
PUSH 0xe298f0
CALL 0x0045c010
ADD ESP,0x14
ADD ESP,0x18
RET
PUSH 0xe2af90
LEA EDX,[ESP + 0x10]
PUSH 0xe298f0
PUSH EDX
CALL 0x0042f860
ADD ESP,0xc
LEA EAX,[ESP]
PUSH EAX
PUSH 0xe2af90
CALL 0x0042f7d0
ADD ESP,0x8
LEA ECX,[ESP + 0xc]
PUSH ECX
PUSH 0xe2af90
PUSH 0xe298f0
CALL 0x0042f830
ADD ESP,0xc
ADD ESP,0x18
RET
