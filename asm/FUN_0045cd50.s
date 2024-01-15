; FUN_0045cd50
PUSH ECX
PUSH EBX
PUSH ESI
PUSH EDI
MOV ESI,0xe29861
MOV EDI,0x4c40a8
MOV byte ptr [ESI + -0x1],0xff
MOV word ptr [EDI],0xffff
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004acf64]
CALL 0x0049ed20
MOV CL,0x1
SUB CL,AL
MOV byte ptr [ESI],CL
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad204]
CALL 0x0049ed20
MOV DL,0x66
ADD EDI,0x20
SUB DL,AL
MOV byte ptr [ESI + 0x1],DL
ADD ESI,0x3
CMP EDI,0x4c42a8
JL 0x0045cd5e
XOR EBX,EBX
MOV ESI,0x4
CMP EBX,0x10
JGE 0x0045ce09
CALL 0x004816b0
MOV dword ptr [ESP + 0xc],EAX
FILD dword ptr [ESP + 0xc]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad208]
CALL 0x0049ed20
CMP byte ptr [EAX + EAX*0x2 + 0xe29860],0xff
JNZ 0x0045cdca
MOV byte ptr [EAX + EAX*0x2 + 0xe29860],BL
SHL EAX,0x5
INC EBX
CMP EBX,0x7
MOV word ptr [EAX + 0x4c40a8],SI
JL 0x0045cdc5
POP EDI
POP ESI
POP EBX
POP ECX
RET
