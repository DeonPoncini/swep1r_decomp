; FUN_00422770
PUSH EBX
MOV EBX,dword ptr [ESP + 0x8]
PUSH ESI
PUSH EDI
LEA EAX,[EBX + EBX*0x8]
LEA ESI,[EBX + EAX*0x2]
SHL ESI,0x2
PUSH ESI
CALL 0x0049f270
MOV ECX,dword ptr [0x004b6d34]
ADD ESP,0x4
MOV dword ptr [ECX + 0x28],EAX
MOV EDX,dword ptr [0x004b6d34]
MOV EDI,dword ptr [EDX + 0x28]
TEST EDI,EDI
JNZ 0x004227a5
XOR EAX,EAX
POP EDI
POP ESI
POP EBX
RET
MOV ECX,ESI
XOR EAX,EAX
MOV EDX,ECX
SHR ECX,0x2
STOSD.REP ES:EDI
MOV ECX,EDX
AND ECX,0x3
STOSB.REP ES:EDI
MOV EAX,[0x004b6d34]
POP EDI
POP ESI
MOV dword ptr [EAX + 0x24],EBX
MOV ECX,dword ptr [0x004b6d34]
MOV EAX,0x1
POP EBX
MOV dword ptr [ECX + 0x20],0x0
RET