; FUN_004080c0
MOV AL,[0x004d6b54]
TEST AL,AL
JZ 0x0040811b
PUSH 0x4d5e68
CALL dword ptr [0x004ac0b8]
CMP byte ptr [0x004d5e60],0x40
JNC 0x00408110
MOV EAX,[0x004d5e60]
MOV ECX,dword ptr [ESP + 0x4]
MOV DX,word ptr [ESP + 0x8]
AND EAX,0xff
SHL EAX,0x3
MOV dword ptr [EAX + 0x4d6310],ECX
MOV CL,byte ptr [ESP + 0xc]
MOV word ptr [EAX + 0x4d6314],DX
MOV byte ptr [EAX + 0x4d6316],CL
INC byte ptr [0x004d5e60]
PUSH 0x4d5e68
CALL dword ptr [0x004ac138]
RET
