; FUN_00408120
PUSH ESI
PUSH EDI
XOR ESI,ESI
PUSH 0x0
PUSH ESI
CALL 0x00485880
ADD ESP,0x8
MOV byte ptr [ESI + 0xec88e0],AL
INC ESI
CMP ESI,0x100
JL 0x00408124
PUSH 0x4d5e68
CALL dword ptr [0x004ac0b8]
MOV AL,[0x004d5e60]
MOV ESI,dword ptr [0x004d5e60]
MOV [0x00ec89e0],AL
XOR EAX,EAX
AND ESI,0xff
JLE 0x0040819d
MOV ECX,0x4d6316
MOV EDX,dword ptr [EAX*0x8 + 0x4d6310]
MOV DI,word ptr [EAX*0x8 + 0x4d6314]
MOV dword ptr [EAX*0x8 + 0xec89e4],EDX
MOV DL,byte ptr [ECX]
NEG DL
SBB EDX,EDX
ADD ECX,0x8
AND EDX,0x200
OR DI,DX
MOV word ptr [EAX*0x8 + 0xec89e8],DI
INC EAX
CMP EAX,ESI
JL 0x00408168
PUSH 0x4d5e68
MOV byte ptr [0x004d5e60],0x0
CALL dword ptr [0x004ac138]
POP EDI
POP ESI
RET
