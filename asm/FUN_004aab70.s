; FUN_004aab70
MOV EAX,[0x00dfb014]
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [0x004ac148]
PUSH EDI
TEST EAX,EAX
JNZ 0x004aabb8
PUSH 0x0
PUSH 0x0
PUSH 0x1
PUSH 0x0
CALL ESI
TEST EAX,EAX
JZ 0x004aab98
MOV EAX,0x1
JMP 0x004aabb3
PUSH 0x0
PUSH 0x0
PUSH 0x1
PUSH 0x0
CALL dword ptr [0x004ac18c]
TEST EAX,EAX
JZ 0x004aac89
MOV EAX,0x2
MOV [0x00dfb014],EAX
CMP EAX,0x1
JNZ 0x004aabd8
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0x18]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x18]
PUSH ECX
PUSH EDX
PUSH EAX
CALL ESI
POP EDI
POP ESI
POP EBP
POP EBX
RET
CMP EAX,0x2
JNZ 0x004aac9b
MOV EAX,dword ptr [ESP + 0x24]
TEST EAX,EAX
JNZ 0x004aabf3
MOV ECX,dword ptr [0x00dfab48]
MOV dword ptr [ESP + 0x24],ECX
MOV EBX,dword ptr [ESP + 0x18]
MOV EBP,dword ptr [ESP + 0x14]
PUSH 0x0
PUSH 0x0
PUSH EBX
PUSH EBP
CALL dword ptr [0x004ac18c]
MOV ESI,EAX
TEST ESI,ESI
JNZ 0x004aac12
POP EDI
POP ESI
POP EBP
POP EBX
RET
PUSH ESI
CALL 0x0049f270
MOV EDI,EAX
ADD ESP,0x4
TEST EDI,EDI
JNZ 0x004aac26
POP EDI
POP ESI
POP EBP
POP EBX
RET
PUSH ESI
PUSH EDI
PUSH EBX
PUSH EBP
CALL dword ptr [0x004ac18c]
TEST EAX,EAX
JZ 0x004aac80
MOV EAX,dword ptr [ESP + 0x20]
TEST EAX,EAX
JNZ 0x004aac64
MOV EDX,dword ptr [ESP + 0x24]
PUSH EAX
PUSH EAX
PUSH -0x1
PUSH EDI
PUSH 0x1
PUSH EDX
CALL dword ptr [0x004ac174]
MOV ESI,EAX
TEST ESI,ESI
JZ 0x004aac80
PUSH EDI
CALL 0x0049f200
ADD ESP,0x4
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
RET
MOV ECX,dword ptr [ESP + 0x24]
PUSH EAX
MOV EAX,dword ptr [ESP + 0x20]
PUSH EAX
PUSH -0x1
PUSH EDI
PUSH 0x1
PUSH ECX
CALL dword ptr [0x004ac174]
MOV ESI,EAX
TEST ESI,ESI
JNZ 0x004aac90
PUSH EDI
CALL 0x0049f200
ADD ESP,0x4
XOR EAX,EAX
POP EDI
POP ESI
POP EBP
POP EBX
RET
PUSH EDI
CALL 0x0049f200
ADD ESP,0x4
MOV EAX,ESI
POP EDI
POP ESI
POP EBP
POP EBX
RET
