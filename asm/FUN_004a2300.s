; FUN_004a2300
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x10]
PUSH ESI
MOV EAX,EBP
DEC EBP
TEST EAX,EAX
PUSH EDI
JLE 0x004a2334
MOV ESI,dword ptr [ESP + 0x20]
MOV EDI,dword ptr [ESP + 0x1c]
MOV EBX,dword ptr [ESP + 0x14]
PUSH ESI
PUSH EDI
PUSH EBX
CALL 0x004a22b0
MOV EAX,dword ptr [ESI]
ADD ESP,0xc
CMP EAX,-0x1
JZ 0x004a2334
MOV ECX,EBP
DEC EBP
TEST ECX,ECX
JG 0x004a231b
POP EDI
POP ESI
POP EBP
POP EBX
RET
