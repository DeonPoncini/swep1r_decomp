; FUN_00408fb0
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x10]
PUSH ESI
TEST EBP,EBP
PUSH EDI
JZ 0x00409033
MOV EDX,dword ptr [0x004d6c68]
MOV EBX,dword ptr [ESP + 0x14]
TEST EDX,EDX
JNZ 0x00408ff8
PUSH 0x2000
PUSH EBX
CALL 0x00408e60
ADD ESP,0x8
MOV EDX,EAX
XOR ESI,ESI
MOV ECX,0xa
XOR EAX,EAX
MOV EDI,0xec85c0
MOV dword ptr [0x004d6c68],EDX
MOV dword ptr [0x004d6c6c],ESI
STOSD.REP ES:EDI
JMP 0x00408ffe
MOV ESI,dword ptr [0x004d6c6c]
CMP ESI,0x7fe
JG 0x00409033
MOV dword ptr [EDX + ESI*0x4],EBP
MOV EDI,dword ptr [0x004d6c6c]
INC EDI
PUSH EBX
MOV dword ptr [0x004d6c6c],EDI
CALL 0x00445b60
MOV ECX,dword ptr [EAX*0x4 + 0xec85c0]
ADD ESP,0x4
INC ECX
MOV [0x004d6c70],EAX
MOV dword ptr [EAX*0x4 + 0xec85c0],ECX
POP EDI
POP ESI
POP EBP
POP EBX
RET