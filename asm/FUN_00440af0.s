; FUN_00440af0
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x14]
OR EBX,0xffffffff
XOR ESI,ESI
MOV AL,byte ptr [EDI + 0x5e]
MOVSX ECX,AL
MOV DL,byte ptr [ECX + 0x4bfee0]
TEST DL,DL
JLE 0x00440b46
MOV EBP,dword ptr [ESP + 0x18]
PUSH ESI
PUSH EAX
PUSH EDI
CALL 0x00440aa0
ADD ESP,0xc
TEST EAX,EAX
JZ 0x00440b25
INC EBX
CMP EBX,EBP
JZ 0x00440b3f
MOV AL,byte ptr [EDI + 0x5e]
INC ESI
MOVSX EDX,AL
MOVSX ECX,byte ptr [EDX + 0x4bfee0]
CMP ESI,ECX
JL 0x00440b11
OR EAX,0xffffffff
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
RET
POP EDI
POP ESI
POP EBP
OR EAX,0xffffffff
POP EBX
RET
