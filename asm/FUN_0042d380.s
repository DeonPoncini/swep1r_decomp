; FUN_0042d380
PUSH EBX
PUSH ESI
PUSH EDI
XOR EBX,EBX
XOR EDI,EDI
MOV ESI,0xe9a280
CMP dword ptr [ESI],-0x1
JZ 0x0042d39e
MOV AX,word ptr [ESI]
PUSH EBX
PUSH EAX
CALL 0x004285d0
ADD ESP,0x8
MOV byte ptr [EDI + 0xe9a960],BL
ADD ESI,0x4
INC EDI
CMP ESI,0xe9a3c0
JL 0x0042d38c
POP EDI
POP ESI
POP EBX
RET