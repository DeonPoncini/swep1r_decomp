; FUN_00490450
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESI + 0x6c]
CMP EAX,0x80
JBE 0x00490463
XOR EAX,EAX
POP ESI
RET
PUSH EDI
MOV EDI,dword ptr [ESP + 0x10]
MOV dword ptr [EDI],EAX
MOV EAX,dword ptr [ESI + 0x6c]
MOV dword ptr [ESI + EAX*0x4 + 0x70],EDI
MOV EAX,dword ptr [ESI + 0x6c]
ADD EAX,0x34
LEA ECX,[EAX + EAX*0x2]
MOV EAX,dword ptr [ESP + 0x14]
LEA EDX,[ESI + ECX*0x4]
MOV ECX,dword ptr [EAX]
MOV dword ptr [EDX],ECX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [EDX + 0x4],ECX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [EDX + 0x8],EAX
FLD dword ptr [EDI + 0x28]
FCOMP dword ptr [0x004af7c4]
FNSTSW AX
TEST AH,0x40
JZ 0x004904b6
LEA ECX,[EDI + 0x18]
PUSH ECX
CALL 0x00490930
FDIV dword ptr [ESI + 0x870]
ADD ESP,0x4
FSTP dword ptr [EDI + 0x28]
FLD dword ptr [EDI + 0x2c]
FCOMP dword ptr [0x004af7c4]
FNSTSW AX
TEST AH,0x40
JZ 0x004904db
LEA EDX,[EDI + 0x18]
PUSH EDX
CALL 0x00490930
FDIV dword ptr [ESI + 0x874]
ADD ESP,0x4
FSTP dword ptr [EDI + 0x2c]
MOV EAX,dword ptr [ESI + 0x6c]
POP EDI
INC EAX
MOV dword ptr [ESI + 0x6c],EAX
MOV EAX,0x1
POP ESI
RET
