; FUN_00489bd0
SUB ESP,0x74
PUSH EBX
PUSH ESI
PUSH EDI
MOV ECX,0x19
XOR EAX,EAX
LEA EDI,[ESP + 0x1c]
MOV ESI,dword ptr [ESP + 0x84]
STOSD.REP ES:EDI
MOV EAX,dword ptr [ESP + 0x88]
MOV dword ptr [ESP + 0x1c],0x64
MOV dword ptr [ESP + 0x6c],EAX
MOV EAX,dword ptr [ESP + 0x8c]
TEST EAX,EAX
JZ 0x00489c49
MOV EDI,dword ptr [EAX + 0x8]
TEST EDI,EDI
JNZ 0x00489c1b
MOV EAX,0x1
POP EDI
POP ESI
POP EBX
ADD ESP,0x74
RET
MOV EDX,dword ptr [EAX + 0xc]
TEST EDX,EDX
JNZ 0x00489c2e
MOV EAX,0x1
POP EDI
POP ESI
POP EBX
ADD ESP,0x74
RET
MOV ECX,dword ptr [EAX]
MOV EAX,dword ptr [EAX + 0x4]
MOV dword ptr [ESP + 0xc],ECX
MOV dword ptr [ESP + 0x10],EAX
ADD ECX,EDI
ADD EAX,EDX
MOV dword ptr [ESP + 0x14],ECX
MOV dword ptr [ESP + 0x18],EAX
JMP 0x00489c67
MOV ECX,dword ptr [ESI + 0x10]
MOV EDX,dword ptr [ESI + 0xc]
MOV dword ptr [ESP + 0xc],0x0
MOV dword ptr [ESP + 0x10],0x0
MOV dword ptr [ESP + 0x14],ECX
MOV dword ptr [ESP + 0x18],EDX
MOV BL,0x4
MOV EAX,dword ptr [ESI]
LEA EDX,[ESP + 0x1c]
PUSH EDX
PUSH 0x1000400
MOV ECX,dword ptr [EAX]
PUSH 0x0
LEA EDX,[ESP + 0x18]
PUSH 0x0
PUSH EDX
PUSH EAX
CALL dword ptr [ECX + 0x14]
TEST EAX,EAX
JZ 0x00489cb9
CMP EAX,0x887601c2
JNZ 0x00489ca9
TEST byte ptr [ESI + 0x6c],BL
JZ 0x00489ca1
MOV EAX,[0x00ec8d00]
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0x6c]
JMP 0x00489ca9
MOV EAX,dword ptr [ESI]
PUSH EAX
MOV EDX,dword ptr [EAX]
CALL dword ptr [EDX + 0x6c]
TEST EAX,EAX
JZ 0x00489c69
MOV EAX,0x1
POP EDI
POP ESI
POP EBX
ADD ESP,0x74
RET
POP EDI
POP ESI
XOR EAX,EAX
POP EBX
ADD ESP,0x74
RET
