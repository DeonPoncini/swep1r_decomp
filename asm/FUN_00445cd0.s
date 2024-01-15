; FUN_00445cd0
SUB ESP,0xe4
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
LEA EAX,[ESP + 0x14]
PUSH 0x4b48cc
MOV dword ptr [ESP + 0x14],EAX
CALL 0x0048e680
MOV ECX,dword ptr [ESP + 0x10c]
ADD ESP,0x4
MOV EBX,EAX
PUSH EBX
PUSH ECX
CALL 0x00408fb0
ADD ESP,0x8
PUSH 0x4b48c0
PUSH EBX
CALL 0x0049eb80
FILD dword ptr [ESP + 0x100]
MOV ECX,dword ptr [ESP + 0x108]
MOV EAX,0x5
LEA ESI,[EBX + 0x44]
XOR EDX,EDX
FIDIV dword ptr [ESP + 0x108]
MOV EBP,0x1
ADD ESP,0x8
FSTP dword ptr [EBX + 0xa]
FILD dword ptr [ESP + 0xfc]
FIDIV dword ptr [ESP + 0x104]
FSTP dword ptr [EBX + 0xe]
MOV dword ptr [EBX + 0x4c],EAX
MOV dword ptr [EBX + 0x50],EAX
MOV dword ptr [EBX + 0x54],EAX
MOV EAX,0x3
MOV dword ptr [EBX + 0x64],EAX
MOV dword ptr [EBX + 0x68],EAX
MOV dword ptr [EBX + 0x6c],EAX
MOV EAX,dword ptr [ESP + 0x104]
MOV dword ptr [EBX + 0x40],EDX
MOV dword ptr [ESI],0x2
MOV dword ptr [EBX + 0x48],0x10
MOV dword ptr [EBX + 0x70],EBP
MOV dword ptr [EBX + 0x58],0xb
MOV dword ptr [EBX + 0x5c],0x6
MOV dword ptr [EBX + 0x60],EBP
MOV dword ptr [EBX + 0x74],EDX
MOV dword ptr [EBX + 0x78],0x7
MOV dword ptr [EBX + 0x7c],EBP
MOV dword ptr [EBX + 0x80],ECX
MOV dword ptr [EBX + 0x84],EAX
MOV dword ptr [EBX + 0x88],EBP
MOV dword ptr [EBX + 0x8c],EDX
MOV EDI,dword ptr [ESP + 0x10]
MOV dword ptr [EDI],EDX
MOV EDI,dword ptr [ESP + 0x10]
MOV dword ptr [EDI + 0x4],EDX
MOV EDI,dword ptr [ESP + 0x10]
MOV dword ptr [EDI + 0x8],EDX
MOV EDI,dword ptr [ESP + 0x10]
MOV dword ptr [EDI + 0xc],ECX
MOV EDI,dword ptr [ESP + 0x10]
MOV dword ptr [EDI + 0x10],EAX
IMUL EAX,ECX
MOV EDI,dword ptr [ESP + 0x10]
SHL EAX,0x1
MOV dword ptr [EDI + 0x14],EAX
MOV EDI,dword ptr [ESP + 0x10]
LEA EAX,[ECX + ECX*0x1]
MOV dword ptr [EDI + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [EAX + 0x1c],ECX
MOV ECX,dword ptr [ESP + 0x10]
LEA EDI,[ECX + 0x20]
MOV ECX,0xe
MOVSD.REP ES:EDI,ESI
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x110]
MOV dword ptr [EAX + 0x58],ECX
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [EAX + 0x5c],EDX
MOV ECX,dword ptr [EBX + 0x90]
PUSH ECX
CALL 0x0048aa40
MOV EDX,dword ptr [EBX + 0x7c]
MOV ECX,dword ptr [EBX + 0x90]
ADD ESP,0x4
LEA EAX,[ESP + 0x10]
PUSH EDX
PUSH EBP
PUSH EAX
PUSH ECX
CALL 0x0048a5e0
MOV EDX,dword ptr [ESP + 0x11c]
ADD ESP,0x10
POP EDI
POP ESI
MOV dword ptr [EDX],EBX
POP EBP
POP EBX
ADD ESP,0xe4
RET
