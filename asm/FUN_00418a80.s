; FUN_00418a80
SUB ESP,0x8
MOV EAX,dword ptr [ESP + 0x1c]
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x2c]
PUSH ESI
LEA ESI,[EAX + 0x1]
AND ESI,0xfffffffe
PUSH EDI
MOV EDI,ESI
IMUL EDI,EBP
IMUL EDI,dword ptr [ESP + 0x30]
PUSH EDI
CALL 0x0049f270
MOV ECX,EDI
MOV EDX,EAX
MOV EBX,ECX
XOR EAX,EAX
MOV EDI,EDX
ADD ESP,0x4
SHR ECX,0x2
STOSD.REP ES:EDI
MOV ECX,EBX
MOV dword ptr [ESP + 0x14],EDX
AND ECX,0x3
STOSB.REP ES:EDI
MOV EAX,[0x0050c96c]
MOV EDI,dword ptr [ESP + 0x28]
TEST EAX,EAX
JZ 0x00418ad4
TEST EDI,EDI
JLE 0x00418ad4
DEC EDI
MOV EAX,dword ptr [ESP + 0x30]
TEST EAX,EAX
JBE 0x00418b40
MOV EAX,dword ptr [ESP + 0x38]
IMUL ESI,EBP
MOV ECX,EAX
IMUL EAX,EDI
MOV dword ptr [ESP + 0x10],ESI
MOV ESI,dword ptr [ESP + 0x24]
IMUL ECX,EBP
ADD EAX,ESI
MOV EBX,EBP
IMUL EAX,EBP
IMUL EBX,dword ptr [ESP + 0x2c]
MOV dword ptr [ESP + 0x34],ECX
MOV ECX,dword ptr [ESP + 0x20]
ADD EAX,ECX
MOV ECX,dword ptr [ESP + 0x30]
MOV dword ptr [ESP + 0x28],ECX
MOV ECX,EBX
MOV ESI,EAX
MOV EBP,ECX
MOV EDI,EDX
SHR ECX,0x2
MOVSD.REP ES:EDI,ESI
MOV ECX,EBP
AND ECX,0x3
MOVSB.REP ES:EDI,ESI
MOV EDI,dword ptr [ESP + 0x34]
MOV ESI,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x28]
ADD EAX,EDI
ADD EDX,ESI
DEC ECX
MOV dword ptr [ESP + 0x28],ECX
JNZ 0x00418b11
MOV EDX,dword ptr [ESP + 0x14]
MOV EAX,dword ptr [ESP + 0x1c]
MOV CX,word ptr [ESP + 0x2c]
POP EDI
POP ESI
MOV word ptr [EAX],CX
MOV CX,word ptr [ESP + 0x28]
MOV dword ptr [EAX + 0x4],EDX
MOV word ptr [EAX + 0x2],CX
POP EBP
MOV EAX,EDX
POP EBX
ADD ESP,0x8
RET
