; FUN_00489ab0
MOV EAX,[0x0050b5cc]
SUB ESP,0x28
CMP EAX,0x1
PUSH ESI
PUSH EDI
JNZ 0x00489ad1
MOV dword ptr [0x0050b5cc],0x0
XOR EAX,EAX
POP EDI
POP ESI
ADD ESP,0x28
RET
MOV EDI,dword ptr [0x004ac228]
XOR ESI,ESI
CMP dword ptr [0x0052d458],ESI
JZ 0x00489af0
MOV EAX,[0x00ec8d00]
PUSH ESI
PUSH ESI
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0x2c]
JMP 0x00489b5f
CALL 0x0048c780
LEA EDX,[ESP + 0x8]
MOV dword ptr [ESP + 0xc],ESI
PUSH EDX
PUSH EAX
MOV dword ptr [ESP + 0x10],ESI
CALL EDI
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [0x00ec8dac]
MOV EAX,dword ptr [ESP + 0xc]
MOV dword ptr [ESP + 0x20],ECX
ADD ECX,EDX
MOV dword ptr [ESP + 0x18],EDX
MOV dword ptr [ESP + 0x28],ECX
MOV ECX,dword ptr [0x00ec8db0]
PUSH ESI
LEA EDX,[ESP + 0x14]
MOV dword ptr [ESP + 0x28],EAX
PUSH 0x1000000
ADD EAX,ECX
PUSH EDX
MOV EDX,dword ptr [0x00ec8e00]
MOV dword ptr [ESP + 0x38],EAX
MOV EAX,[0x00ec8d00]
PUSH EDX
LEA EDX,[ESP + 0x30]
MOV dword ptr [ESP + 0x20],ESI
MOV dword ptr [ESP + 0x24],ESI
MOV dword ptr [ESP + 0x2c],ECX
MOV ECX,dword ptr [EAX]
PUSH EDX
PUSH EAX
CALL dword ptr [ECX + 0x14]
CMP EAX,ESI
JZ 0x00489bae
CMP EAX,0x887601c2
JNZ 0x00489b90
MOV EAX,[0x00ec8d00]
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0x6c]
CMP EAX,ESI
JNZ 0x00489ba3
CMP dword ptr [0x0052d458],ESI
JNZ 0x00489b90
MOV EAX,[0x00ec8e00]
PUSH EAX
MOV EDX,dword ptr [EAX]
CALL dword ptr [EDX + 0x6c]
CMP EAX,ESI
JNZ 0x00489ba3
CMP EAX,0x8876021c
JZ 0x00489ad9
CMP EAX,ESI
JZ 0x00489ad9
MOV EAX,0x1
POP EDI
POP ESI
ADD ESP,0x28
RET
POP EDI
XOR EAX,EAX
POP ESI
ADD ESP,0x28
RET
