; FUN_00485f20
MOV EAX,[0x0050feb8]
SUB ESP,0x18
PUSH EBX
XOR EBX,EBX
CMP EAX,EBX
JZ 0x00486006
MOV ECX,dword ptr [0x0050febc]
MOV dword ptr [ESP + 0x4],EBX
CMP ECX,EBX
JBE 0x00486006
PUSH EDI
PUSH ESI
PUSH EBP
MOV ESI,0x50d89c
MOV EBP,0x20
JMP 0x00485f59
MOV EAX,[0x0050feb8]
MOV ECX,dword ptr [EAX]
LEA EDI,[ESI + 0x4]
PUSH EBX
PUSH ESI
LEA EDX,[EDI + 0xfffffdbc]
PUSH EDX
PUSH EAX
CALL dword ptr [ECX + 0xc]
CMP EAX,EBX
JL 0x00485fd8
MOV dword ptr [EDI],0x2c
MOV EAX,dword ptr [ESI]
PUSH EDI
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0xc]
CMP EAX,EBX
JL 0x00485fd8
MOV EAX,dword ptr [ESI]
PUSH 0x49e690
PUSH EAX
MOV EDX,dword ptr [EAX]
CALL dword ptr [EDX + 0x2c]
CMP EAX,EBX
JL 0x00485fd8
MOV EAX,dword ptr [ESI]
PUSH 0x6
MOV EDI,dword ptr [EAX]
CALL 0x0048c780
MOV ECX,dword ptr [ESI]
PUSH EAX
PUSH ECX
CALL dword ptr [EDI + 0x34]
CMP EAX,EBX
JL 0x00485fd8
MOV EAX,dword ptr [ESI]
LEA ECX,[ESP + 0x14]
MOV dword ptr [ESP + 0x14],0x14
MOV dword ptr [ESP + 0x18],0x10
MOV dword ptr [ESP + 0x1c],EBX
MOV dword ptr [ESP + 0x20],EBX
MOV dword ptr [ESP + 0x24],EBP
MOV EDX,dword ptr [EAX]
PUSH ECX
PUSH 0x1
PUSH EAX
CALL dword ptr [EDX + 0x18]
CMP EAX,EBX
JGE 0x00485fe6
MOV EAX,dword ptr [ESI]
CMP EAX,EBX
JZ 0x00485fe4
MOV EDX,dword ptr [EAX]
PUSH EAX
CALL dword ptr [EDX + 0x8]
MOV dword ptr [ESI],EBX
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [0x0050febc]
INC EAX
ADD ESI,0x274
CMP EAX,ECX
MOV dword ptr [ESP + 0x10],EAX
JC 0x00485f54
POP EBP
POP ESI
POP EDI
POP EBX
ADD ESP,0x18
RET
