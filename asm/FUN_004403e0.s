; FUN_004403e0
PUSH EBX
MOV BL,byte ptr [ESP + 0x18]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x14]
TEST BL,BL
JZ 0x004403ff
CMP BL,0x3
JNZ 0x00440427
PUSH 0x4c13d0
JMP 0x00440404
PUSH 0x4c13ac
CALL 0x00421360
FLD dword ptr [ESP + 0x20]
ADD ESP,0x4
PUSH EAX
CALL 0x0049ed20
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH ESI
PUSH EDI
CALL 0x00450530
ADD ESP,0x1c
ADD ESI,0x7
CMP BL,0x3
MOV EBX,dword ptr [ESP + 0x10]
JZ 0x004404a4
MOVSX EAX,byte ptr [EBX + 0x5d]
MOVSX ECX,byte ptr [EBX + 0x6e]
LEA EDX,[ECX + EAX*0x2]
FLD dword ptr [EDX*0x4 + 0xe365f4]
FST dword ptr [ESP + 0x20]
FCOMP dword ptr [0x004ac900]
FNSTSW AX
TEST AH,0x1
JZ 0x00440528
FLD dword ptr [ESP + 0x1c]
PUSH 0x1
CALL 0x0049ed20
PUSH EAX
MOV EAX,dword ptr [ESP + 0x28]
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EAX
ADD EDI,0x1e
PUSH ESI
PUSH EDI
CALL 0x004505f0
MOVSX ECX,byte ptr [EBX + 0x5d]
MOVSX EDX,byte ptr [EBX + 0x6e]
ADD ESP,0x20
LEA EAX,[EDX + ECX*0x2]
MOV ECX,dword ptr [ESP + 0x1c]
SHL EAX,0x5
ADD EAX,0xe36784
ADD ESI,0x8
MOV dword ptr [ESP + 0x20],ESI
PUSH EAX
FILD dword ptr [ESP + 0x24]
PUSH ECX
JMP 0x00440510
MOVSX EDX,byte ptr [EBX + 0x5d]
MOVSX EAX,byte ptr [EBX + 0x6e]
LEA ECX,[EAX + EDX*0x2]
FLD dword ptr [ECX*0x4 + 0xe366bc]
FST dword ptr [ESP + 0x20]
FCOMP dword ptr [0x004ac900]
FNSTSW AX
TEST AH,0x1
JZ 0x00440528
FLD dword ptr [ESP + 0x1c]
PUSH 0x1
CALL 0x0049ed20
MOV EDX,dword ptr [ESP + 0x24]
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH EDX
ADD EDI,0x1e
PUSH ESI
PUSH EDI
CALL 0x004505f0
MOVSX EAX,byte ptr [EBX + 0x5d]
MOVSX ECX,byte ptr [EBX + 0x6e]
ADD ESP,0x20
LEA EDX,[ECX + EAX*0x2]
MOV EAX,dword ptr [ESP + 0x1c]
SHL EDX,0x5
ADD EDX,0xe36dc4
ADD ESI,0x8
MOV dword ptr [ESP + 0x20],ESI
PUSH EDX
FILD dword ptr [ESP + 0x24]
PUSH EAX
PUSH ECX
FSTP dword ptr [ESP]
FILD dword ptr [ESP + 0x20]
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x00439c70
ADD ESP,0x10
POP EDI
POP ESI
POP EBX
RET
FLD dword ptr [ESP + 0x1c]
PUSH 0x4c1398
CALL 0x0049ed20
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH 0x32
PUSH ESI
PUSH EDI
CALL 0x00450530
ADD ESP,0x1c
POP EDI
POP ESI
POP EBX
RET
