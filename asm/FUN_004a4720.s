; FUN_004a4720
SUB ESP,0x8
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
PUSH 0x12
MOV dword ptr [ESP + 0x14],0xffffffff
CALL 0x004a1670
XOR EDI,EDI
ADD ESP,0x4
MOV dword ptr [ESP + 0x14],EDI
XOR EBX,EBX
MOV EBP,0xecd500
MOV ESI,dword ptr [EBP]
TEST ESI,ESI
JZ 0x004a4807
LEA EAX,[ESI + 0x480]
CMP ESI,EAX
JNC 0x004a47df
TEST byte ptr [ESI + 0x4],0x1
JNZ 0x004a47ab
MOV EAX,dword ptr [ESI + 0x8]
TEST EAX,EAX
JNZ 0x004a4794
PUSH 0x11
CALL 0x004a1670
MOV EAX,dword ptr [ESI + 0x8]
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x004a478a
LEA ECX,[ESI + 0xc]
PUSH ECX
CALL dword ptr [0x004ac0d4]
INC dword ptr [ESI + 0x8]
PUSH 0x11
CALL 0x004a16f0
ADD ESP,0x4
LEA EDI,[ESI + 0xc]
PUSH EDI
CALL dword ptr [0x004ac0b8]
TEST byte ptr [ESI + 0x4],0x1
JZ 0x004a47bd
PUSH EDI
CALL dword ptr [0x004ac138]
MOV EDX,dword ptr [EBP]
ADD ESI,0x24
ADD EDX,0x480
CMP ESI,EDX
JC 0x004a475f
JMP 0x004a47df
MOV dword ptr [ESI],0xffffffff
MOV EAX,dword ptr [EBP]
SUB ESI,EAX
MOV EAX,0x38e38e39
IMUL ESI
SAR EDX,0x3
MOV EAX,EDX
SHR EAX,0x1f
ADD EDX,EAX
ADD EDX,EBX
MOV dword ptr [ESP + 0x10],EDX
CMP dword ptr [ESP + 0x10],-0x1
JNZ 0x004a4872
MOV EDI,dword ptr [ESP + 0x14]
ADD EBP,0x4
INC EDI
ADD EBX,0x20
CMP EBP,0xecd600
MOV dword ptr [ESP + 0x14],EDI
JL 0x004a4746
JMP 0x004a4872
PUSH 0x480
CALL 0x0049f270
XOR EDX,EDX
ADD ESP,0x4
CMP EAX,EDX
JZ 0x004a4872
MOV EBX,dword ptr [0x00ecd600]
LEA ECX,[EAX + 0x480]
ADD EBX,0x20
CMP EAX,ECX
MOV dword ptr [EDI*0x4 + 0xecd500],EAX
MOV dword ptr [0x00ecd600],EBX
JNC 0x004a4860
MOV CL,0xa
MOV byte ptr [EAX + 0x4],0x0
MOV dword ptr [EAX],0xffffffff
MOV byte ptr [EAX + 0x5],CL
MOV dword ptr [EAX + 0x8],EDX
MOV ESI,dword ptr [EDI*0x4 + 0xecd500]
ADD EAX,0x24
ADD ESI,0x480
CMP EAX,ESI
JC 0x004a483c
SHL EDI,0x5
MOV EAX,EDI
PUSH EAX
MOV dword ptr [ESP + 0x14],EAX
CALL 0x004a4a30
ADD ESP,0x4
PUSH 0x12
CALL 0x004a16f0
MOV EAX,dword ptr [ESP + 0x14]
ADD ESP,0x4
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x8
RET