; FUN_004a6790
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x10]
PUSH ESI
MOV EAX,EBP
DEC EBP
TEST EAX,EAX
PUSH EDI
JLE 0x004a67ca
MOV EDI,dword ptr [ESP + 0x20]
MOV EBX,dword ptr [ESP + 0x1c]
MOV ESI,dword ptr [ESP + 0x14]
MOV AX,word ptr [ESI]
PUSH EDI
PUSH EBX
PUSH EAX
ADD ESI,0x2
CALL 0x004a6720
MOV EAX,dword ptr [EDI]
ADD ESP,0xc
CMP EAX,-0x1
JZ 0x004a67ca
MOV ECX,EBP
DEC EBP
TEST ECX,ECX
JG 0x004a67ab
POP EDI
POP ESI
POP EBP
POP EBX
RET
