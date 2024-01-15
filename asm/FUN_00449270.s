; FUN_00449270
MOV EAX,[0x004c1cb4]
PUSH EBX
PUSH EBP
PUSH ESI
FLD dword ptr [EAX + 0x14]
FSUB qword ptr [0x00e22a40]
PUSH EDI
XOR EDI,EDI
FSTP dword ptr [EAX + 0x14]
MOV EDX,dword ptr [0x004c1cb4]
FLD dword ptr [EDX + 0x14]
FCOMP dword ptr [0x004aca9c]
FNSTSW AX
TEST AH,0x1
JZ 0x004492bd
FLD dword ptr [EDX + 0x10]
FADD dword ptr [EDX + 0x14]
INC EDI
FSTP dword ptr [EDX + 0x14]
MOV EDX,dword ptr [0x004c1cb4]
FLD dword ptr [EDX + 0x14]
FCOMP dword ptr [0x004aca9c]
FNSTSW AX
TEST AH,0x1
JNZ 0x0044929d
MOV EAX,dword ptr [EDX + 0x4]
TEST EAX,EAX
JZ 0x0044931c
TEST EDI,EDI
JLE 0x0044931c
XOR ECX,ECX
CMP word ptr [EDX + 0x18],CX
JLE 0x0044931c
MOV EAX,dword ptr [EDX + 0x20]
LEA ESI,[EAX + ECX*0x1]
XOR EAX,EAX
MOV AL,byte ptr [ESI]
MOV EBX,EAX
MOV EAX,EDI
ADD EAX,EBX
MOVSX EBX,word ptr [EDX + 0xc]
CDQ
IDIV EBX
XOR EBX,EBX
MOV byte ptr [ESI],DL
MOV EAX,[0x004c1cb4]
MOV EDX,dword ptr [EAX + 0x20]
MOV ESI,dword ptr [EAX + 0x1c]
MOV EBP,dword ptr [EAX + 0x8]
MOV EAX,dword ptr [EAX + 0x4]
MOV BL,byte ptr [EDX + ECX*0x1]
XOR EDX,EDX
MOV DL,byte ptr [ESI + ECX*0x1]
INC ECX
MOV SI,word ptr [EBP + EBX*0x2]
MOV word ptr [EAX + EDX*0x2],SI
MOV EDX,dword ptr [0x004c1cb4]
MOVSX EAX,word ptr [EDX + 0x18]
CMP ECX,EAX
JL 0x004492d0
POP EDI
POP ESI
POP EBP
POP EBX
RET
