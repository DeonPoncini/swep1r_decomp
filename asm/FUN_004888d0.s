; FUN_004888d0
SUB ESP,0x7c
XOR EAX,EAX
MOV ECX,0x1f
PUSH EBX
MOV EBX,dword ptr [ESP + 0x88]
PUSH ESI
MOV EDX,EBX
PUSH EDI
MOV ESI,dword ptr [ESP + 0x8c]
MOV EDI,0x52957c
PUSH 0x0
NEG EDX
STOSD.REP ES:EDI
MOV ECX,dword ptr [0x00ec8db0]
MOV EAX,[0x00ec8dac]
SBB EDX,EDX
MOV dword ptr [0x00529584],ECX
AND EDX,0xffffc800
MOV [0x00529588],EAX
MOV EAX,[0x0052d454]
ADD EDX,0x24000
MOV ECX,0x8
MOV EDI,0x5295c4
MOV dword ptr [0x0052957c],0x7c
MOV dword ptr [0x00529580],0x1007
MOV dword ptr [0x005295e4],EDX
PUSH 0x529578
MOVSD.REP ES:EDI,ESI
MOV ECX,dword ptr [EAX]
PUSH 0x52957c
PUSH EAX
CALL dword ptr [ECX + 0x18]
TEST EAX,EAX
JZ 0x00488967
MOV EAX,0x1
POP EDI
POP ESI
POP EBX
ADD ESP,0x7c
RET
TEST EBX,EBX
JNZ 0x004889ab
MOV ECX,0x1f
XOR EAX,EAX
LEA EDI,[ESP + 0xc]
PUSH EBX
STOSD.REP ES:EDI
MOV EAX,[0x00529578]
LEA ECX,[ESP + 0x10]
PUSH 0x1
MOV dword ptr [ESP + 0x14],0x7c
MOV EDX,dword ptr [EAX]
PUSH ECX
PUSH EBX
PUSH EAX
CALL dword ptr [EDX + 0x64]
TEST EAX,EAX
JNZ 0x00488a31
MOV EAX,[0x00529578]
PUSH EBX
PUSH EAX
MOV EDX,dword ptr [EAX]
CALL dword ptr [EDX + 0x80]
MOV ESI,dword ptr [ESP + 0x94]
CMP ESI,0x1
JZ 0x004889d9
MOV EAX,[0x00ec8e00]
MOV ECX,dword ptr [0x00529578]
PUSH ECX
PUSH EAX
MOV EDX,dword ptr [EAX]
CALL dword ptr [EDX + 0xc]
TEST EAX,EAX
JZ 0x004889d9
MOV EAX,0x1
POP EDI
POP ESI
POP EBX
ADD ESP,0x7c
RET
MOV EAX,[0x00529578]
PUSH 0x52957c
PUSH EAX
MOV EDX,dword ptr [EAX]
CALL dword ptr [EDX + 0x58]
TEST EAX,EAX
JZ 0x004889f9
MOV EAX,0x1
POP EDI
POP ESI
POP EBX
ADD ESP,0x7c
RET
MOV EAX,[0x0052d448]
TEST dword ptr [EAX + 0x11c],0x10000000
JZ 0x00488a19
CMP ESI,0x1
MOV dword ptr [0x004c86b8],0x488a90
JNZ 0x00488a23
MOV dword ptr [0x004c86b8],0x423cb0
CALL 0x00488a90
XOR EAX,EAX
POP EDI
POP ESI
POP EBX
ADD ESP,0x7c
RET
MOV EAX,[0x0052d454]
PUSH 0x0
MOV dword ptr [0x005295e4],0x800
MOV word ptr [0x004c86c0],0x0
MOV ECX,dword ptr [EAX]
PUSH 0x529578
PUSH 0x52957c
PUSH EAX
MOV ESI,0x1
CALL dword ptr [ECX + 0x18]
TEST EAX,EAX
JZ 0x004889b2
MOV EAX,ESI
POP EDI
POP ESI
POP EBX
ADD ESP,0x7c
RET
