; FUN_0047cd90
SUB ESP,0x40
PUSH EDI
MOV EDI,dword ptr [ESP + 0x4c]
PUSH EDI
CALL 0x0047bf20
ADD ESP,0x4
TEST EAX,EAX
JNZ 0x0047cdb7
MOV EAX,dword ptr [ESP + 0x48]
PUSH EAX
CALL 0x00450e30
ADD ESP,0x4
POP EDI
ADD ESP,0x40
RET
PUSH ESI
MOV ESI,dword ptr [ESP + 0x4c]
MOV ECX,0x1
MOV EAX,dword ptr [ESI + 0xc]
OR EAX,ECX
MOV dword ptr [ESI + 0xc],EAX
MOV EAX,dword ptr [ESI + 0x4c]
OR word ptr [EAX + 0x26],CX
MOV EDX,dword ptr [ESI + 0x4c]
LEA ECX,[ESP + 0x8]
MOV EAX,dword ptr [EDX + 0x20]
PUSH ECX
PUSH EAX
CALL 0x004316a0
MOV EDX,dword ptr [EDI*0x4 + 0xe26fe0]
ADD ESP,0x8
LEA ECX,[ESP + 0x8]
PUSH ECX
PUSH EDX
CALL 0x00431640
MOV EAX,dword ptr [EDI*0x4 + 0xe26fe0]
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0047ce15
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
PUSH EDI
CALL 0x0047bea0
ADD ESP,0x4
MOV dword ptr [ESI + 0x50],0x0
TEST EDI,EDI
JNZ 0x0047ce43
MOV EAX,[0x00e26fe0]
PUSH EAX
CALL 0x0047bce0
ADD ESP,0x4
MOV dword ptr [ESI + 0x54],EAX
MOV dword ptr [ESI + 0x10],EDI
POP ESI
POP EDI
ADD ESP,0x40
RET
MOV dword ptr [ESI + 0x54],0x0
MOV dword ptr [ESI + 0x10],0x0
POP ESI
POP EDI
ADD ESP,0x40
RET