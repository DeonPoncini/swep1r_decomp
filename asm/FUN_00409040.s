; FUN_00409040
MOV EAX,[0x004d6c60]
SUB ESP,0xe4
PUSH EBX
XOR EBX,EBX
CMP EAX,EBX
JNZ 0x00409219
PUSH EDI
PUSH ESI
PUSH EBP
PUSH 0x4b48cc
CALL 0x0048e680
MOV ECX,dword ptr [ESP + 0xfc]
ADD ESP,0x4
MOV [0x004d6c60],EAX
LEA EAX,[ESP + 0x14]
PUSH 0x200
PUSH ECX
MOV dword ptr [ESP + 0x18],EAX
CALL 0x00408e60
MOV EDX,dword ptr [0x004d6c60]
ADD ESP,0x8
MOV EBP,EAX
PUSH 0x4b48c0
PUSH EDX
CALL 0x0049eb80
MOV ECX,dword ptr [0x004d6c60]
MOV EAX,0x3f800000
ADD ESP,0x8
MOV dword ptr [ECX + 0xa],EAX
MOV EDX,dword ptr [0x004d6c60]
MOV dword ptr [EDX + 0xe],EAX
MOV EAX,[0x004d6c60]
MOV EDX,0x1
MOV dword ptr [EAX + 0x44],EDX
MOV ECX,dword ptr [0x004d6c60]
MOV EAX,0x10
MOV dword ptr [ECX + 0x48],EAX
MOV ESI,dword ptr [0x004d6c60]
MOV ECX,0x5
MOV dword ptr [ESI + 0x4c],ECX
MOV ESI,dword ptr [0x004d6c60]
MOV dword ptr [ESI + 0x50],0x6
MOV ESI,dword ptr [0x004d6c60]
MOV dword ptr [ESI + 0x54],ECX
MOV ESI,dword ptr [0x004d6c60]
MOV dword ptr [ESI + 0x70],EBX
MOV ESI,dword ptr [0x004d6c60]
MOV dword ptr [ESI + 0x58],0xb
MOV ESI,dword ptr [0x004d6c60]
MOV dword ptr [ESI + 0x5c],ECX
MOV ECX,dword ptr [0x004d6c60]
MOV dword ptr [ECX + 0x60],EBX
MOV ECX,dword ptr [0x004d6c60]
MOV dword ptr [ECX + 0x74],EBX
MOV ESI,dword ptr [0x004d6c60]
MOV ECX,0x3
MOV dword ptr [ESI + 0x64],ECX
MOV ESI,dword ptr [0x004d6c60]
MOV dword ptr [ESI + 0x68],0x2
MOV ESI,dword ptr [0x004d6c60]
MOV dword ptr [ESI + 0x6c],ECX
MOV ECX,dword ptr [0x004d6c60]
MOV dword ptr [ECX + 0x78],EBX
MOV ECX,dword ptr [0x004d6c60]
MOV dword ptr [ECX + 0x7c],EBX
MOV ECX,dword ptr [0x004d6c60]
MOV dword ptr [ECX + 0x88],EDX
MOV EDX,dword ptr [0x004d6c60]
MOV dword ptr [EDX + 0x8c],EBX
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [ECX],EBX
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [EDX + 0x4],EBX
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [ECX + 0x8],EBX
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [EDX + 0xc],EAX
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [ECX + 0x10],EAX
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [EDX + 0x14],0x200
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [ECX + 0x18],0x20
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [EDX + 0x1c],EAX
MOV EAX,[0x004d6c60]
LEA ESI,[EAX + 0x44]
MOV ECX,dword ptr [ESP + 0x10]
LEA EDI,[ECX + 0x20]
MOV ECX,0xe
MOVSD.REP ES:EDI,ESI
MOV EDX,dword ptr [ESP + 0x10]
MOV ECX,0x80
MOV EDI,EBP
MOV dword ptr [EDX + 0x58],EBP
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [EAX + 0x5c],EBX
OR EAX,0xffffffff
STOSD.REP ES:EDI
MOV ECX,dword ptr [0x004d6c60]
MOV EDX,dword ptr [ECX + 0x90]
PUSH EDX
CALL 0x0048aa40
MOV EAX,[0x004d6c60]
ADD ESP,0x4
LEA EDX,[ESP + 0x10]
MOV ECX,dword ptr [EAX + 0x7c]
MOV EAX,dword ptr [EAX + 0x90]
PUSH ECX
PUSH 0x1
PUSH EDX
PUSH EAX
CALL 0x0048a5e0
ADD ESP,0x10
POP EBP
POP ESI
POP EDI
MOV EAX,[0x004d6c60]
POP EBX
ADD ESP,0xe4
RET
