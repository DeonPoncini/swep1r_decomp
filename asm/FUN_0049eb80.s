; FUN_0049eb80
SUB ESP,0x20
MOV EAX,dword ptr [ESP + 0x24]
MOV ECX,dword ptr [ESP + 0x28]
MOV dword ptr [ESP + 0x8],EAX
MOV dword ptr [ESP],EAX
LEA EAX,[ESP + 0x2c]
PUSH ESI
PUSH EAX
LEA EDX,[ESP + 0x8]
PUSH ECX
PUSH EDX
MOV dword ptr [ESP + 0x1c],0x42
MOV dword ptr [ESP + 0x14],0x7fffffff
CALL 0x004a1920
MOV ESI,EAX
MOV EAX,dword ptr [ESP + 0x14]
ADD ESP,0xc
DEC EAX
MOV dword ptr [ESP + 0x8],EAX
JS 0x0049ebd2
MOV EAX,dword ptr [ESP + 0x4]
MOV byte ptr [EAX],0x0
MOV EAX,ESI
POP ESI
ADD ESP,0x20
RET
LEA ECX,[ESP + 0x4]
PUSH ECX
PUSH 0x0
CALL 0x004a17f0
ADD ESP,0x8
MOV EAX,ESI
POP ESI
ADD ESP,0x20
RET