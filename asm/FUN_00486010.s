; FUN_00486010
MOV EAX,[0x0050feb8]
SUB ESP,0x14
PUSH EBX
XOR EBX,EBX
PUSH EBP
PUSH ESI
CMP EAX,EBX
PUSH EDI
JZ 0x0048612f
MOV ECX,dword ptr [0x0050fec0]
XOR EBP,EBP
CMP ECX,EBX
JBE 0x004860ea
MOV ESI,0xecb484
JMP 0x00486042
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
JL 0x004860c5
MOV dword ptr [EDI],0x2c
MOV EAX,dword ptr [ESI]
PUSH EDI
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0xc]
CMP EAX,EBX
JL 0x004860c5
MOV EAX,dword ptr [ESI]
PUSH 0x49e720
PUSH EAX
MOV EDX,dword ptr [EAX]
CALL dword ptr [EDX + 0x2c]
CMP EAX,EBX
JL 0x004860c5
MOV EAX,dword ptr [ESI]
PUSH 0x6
MOV EDI,dword ptr [EAX]
CALL 0x0048c780
MOV ECX,dword ptr [ESI]
PUSH EAX
PUSH ECX
CALL dword ptr [EDI + 0x34]
CMP EAX,EBX
JL 0x004860c5
MOV EAX,dword ptr [ESI]
LEA ECX,[ESP + 0x10]
MOV dword ptr [ESP + 0x10],0x14
MOV dword ptr [ESP + 0x14],0x10
MOV dword ptr [ESP + 0x18],EBX
MOV dword ptr [ESP + 0x1c],EBX
MOV dword ptr [ESP + 0x20],0x20
MOV EDX,dword ptr [EAX]
PUSH ECX
PUSH 0x1
PUSH EAX
CALL dword ptr [EDX + 0x18]
CMP EAX,EBX
JGE 0x004860d3
MOV EAX,dword ptr [ESI]
CMP EAX,EBX
JZ 0x004860d1
MOV EDX,dword ptr [EAX]
PUSH EAX
CALL dword ptr [EDX + 0x8]
MOV dword ptr [ESI],EBX
MOV ECX,dword ptr [0x0050fec0]
INC EBP
ADD ESI,0x274
CMP EBP,ECX
JC 0x0048603d
CMP ECX,EBX
JZ 0x0048612f
PUSH EBX
PUSH 0xfa
PUSH 0xffffff06
PUSH 0x30
CALL 0x00486970
ADD ESP,0x10
PUSH EBX
PUSH 0xc8
PUSH 0xffffff38
PUSH 0x31
CALL 0x00486970
MOV EAX,[0x00ecb494]
ADD ESP,0x10
CMP EAX,0x2
JBE 0x0048612f
PUSH EBX
PUSH 0x14
PUSH -0x14
PUSH 0x32
CALL 0x00486970
ADD ESP,0x10
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x14
RET
