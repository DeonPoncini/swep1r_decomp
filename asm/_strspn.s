; _strspn
PUSH EBP
MOV EBP,ESP
PUSH ESI
XOR EAX,EAX
PUSH EAX
PUSH EAX
PUSH EAX
PUSH EAX
PUSH EAX
PUSH EAX
PUSH EAX
PUSH EAX
MOV EDX,dword ptr [EBP + 0xc]
MOV EAX,EAX
MOV AL,byte ptr [EDX]
OR AL,AL
JZ 0x004a1361
INC EDX
BTS [ESP],EAX
JMP 0x004a1354
MOV ESI,dword ptr [EBP + 0x8]
OR ECX,0xffffffff
NOP
INC ECX
MOV AL,byte ptr [ESI]
OR AL,AL
JZ 0x004a1376
INC ESI
BT [ESP],EAX
JC 0x004a1368
MOV EAX,ECX
ADD ESP,0x20
POP ESI
LEAVE
RET