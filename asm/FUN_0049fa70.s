; FUN_0049fa70
PUSH EBX
MOV EBX,dword ptr [ESP + 0x8]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x10]
CMP EDI,EBX
JBE 0x0049fac6
PUSH ESI
PUSH EBP
MOV EBP,dword ptr [ESP + 0x1c]
LEA EAX,[EBP + EBX*0x1]
MOV dword ptr [ESP + 0x18],EAX
JMP 0x0049fa92
MOV EBX,dword ptr [ESP + 0x14]
MOV ESI,dword ptr [ESP + 0x18]
CMP ESI,EDI
JA 0x0049faaf
PUSH EBX
PUSH ESI
CALL dword ptr [ESP + 0x28]
ADD ESP,0x8
TEST EAX,EAX
JLE 0x0049faa9
MOV EBX,ESI
ADD ESI,EBP
CMP ESI,EDI
JBE 0x0049fa9a
PUSH EBP
PUSH EDI
PUSH EBX
CALL 0x0049fad0
MOV EAX,dword ptr [ESP + 0x20]
SUB EDI,EBP
ADD ESP,0xc
CMP EDI,EAX
JA 0x0049fa8e
POP EBP
POP ESI
POP EDI
POP EBX
RET