; FUN_004131c0
MOV EAX,dword ptr [ESP + 0x20]
MOV ECX,dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [ESP + 0xc]
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x18]
PUSH 0x0
PUSH 0x415b80
PUSH 0x0
PUSH EAX
MOV EAX,dword ptr [ESP + 0x20]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x20]
PUSH EDI
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x00416d90
MOV ESI,EAX
ADD ESP,0x24
MOV EDX,dword ptr [ESI + 0x20]
OR EDX,0x4
MOV dword ptr [ESI + 0x20],EDX
MOV EDX,dword ptr [ESI + 0x4dc]
MOV EAX,dword ptr [EDX*0x4 + 0xe99720]
PUSH EAX
PUSH EDI
CALL 0x0042df70
MOV ECX,dword ptr [ESI + 0x4dc]
ADD ESP,0x8
MOV EDX,dword ptr [ECX*0x4 + 0xe99720]
PUSH EAX
PUSH EDX
PUSH EDI
CALL 0x0042de30
ADD ESP,0x8
PUSH EAX
PUSH ESI
CALL 0x00414b40
MOV EAX,dword ptr [ESI + 0x20]
ADD ESP,0xc
TEST EAX,0x10000
JZ 0x00413251
MOV ECX,dword ptr [ESI + 0x24]
MOV EDX,dword ptr [ESI + 0x2c]
SUB ECX,EDX
ADD ECX,0x27f
SAR ECX,0x1
JMP 0x00413255
MOV ECX,dword ptr [ESP + 0x1c]
TEST EAX,0x20000
JZ 0x0041326d
MOV EAX,dword ptr [ESI + 0x28]
MOV EDX,dword ptr [ESI + 0x30]
SUB EAX,EDX
ADD EAX,0x1df
SAR EAX,0x1
JMP 0x00413271
MOV EAX,dword ptr [ESP + 0x20]
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x00414b60
ADD ESP,0xc
PUSH 0x1
PUSH ESI
CALL 0x00414e60
MOV EAX,dword ptr [ESI + 0x20]
ADD ESP,0x8
OR AH,0x2
MOV dword ptr [ESI + 0x18],0x1
MOV dword ptr [ESI + 0x20],EAX
MOV EAX,ESI
POP EDI
POP ESI
RET
