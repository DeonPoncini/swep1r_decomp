; FUN_004876d0
SUB ESP,0x100
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x10c]
PUSH 0x7f
LEA ECX,[ESP + 0xc]
MOV EAX,dword ptr [EDI + 0x30]
PUSH EAX
PUSH ECX
CALL 0x0049ef50
ADD ESP,0xc
LEA EDX,[ESP + 0x8]
MOV word ptr [ESP + 0x106],0x0
PUSH 0x4c8698
PUSH EDX
CALL 0x004a1250
MOV ESI,dword ptr [ESP + 0x118]
ADD ESP,0x8
TEST EAX,EAX
JZ 0x00487731
PUSH 0x1f
PUSH EAX
LEA EAX,[ESI + 0x58]
PUSH EAX
CALL 0x0049ef50
ADD ESP,0xc
MOV word ptr [ESI + 0x96],0x0
PUSH 0x4c8694
PUSH 0x0
CALL 0x004a1250
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0048775d
PUSH 0x1f
LEA ECX,[ESI + 0x98]
PUSH EAX
PUSH ECX
CALL 0x0048c380
ADD ESP,0xc
MOV byte ptr [ESI + 0xb7],0x0
LEA EDX,[EDI + 0x8]
MOV EAX,ESI
MOV ECX,dword ptr [EDX]
MOV dword ptr [EAX],ECX
MOV ECX,dword ptr [EDX + 0x4]
MOV dword ptr [EAX + 0x4],ECX
MOV ECX,dword ptr [EDX + 0x8]
MOV dword ptr [EAX + 0x8],ECX
MOV EDX,dword ptr [EDX + 0xc]
MOV dword ptr [EAX + 0xc],EDX
MOV EAX,dword ptr [EDI + 0x28]
MOV dword ptr [ESI + 0x10],EAX
MOV ECX,dword ptr [EDI + 0x2c]
MOV dword ptr [ESI + 0x14],ECX
MOV EDX,dword ptr [EDI + 0x40]
MOV dword ptr [ESI + 0xf8],EDX
MOV EAX,dword ptr [EDI + 0x48]
MOV dword ptr [ESI + 0xfc],EAX
MOV ECX,dword ptr [EDI + 0x4c]
MOV dword ptr [ESI + 0x100],ECX
POP EDI
POP ESI
ADD ESP,0x100
RET
