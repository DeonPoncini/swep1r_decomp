; FUN_0046d4c0
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xc]
MOV EAX,dword ptr [EDI + 0x344]
TEST EAX,EAX
JZ 0x0046d5b2
MOV dword ptr [0x004c7a50],0x0
XOR ESI,ESI
MOV EAX,dword ptr [EDI + 0x344]
MOV EAX,dword ptr [EAX + ESI*0x1]
TEST EAX,EAX
JZ 0x0046d4fe
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
ADD ESI,0x4
CMP ESI,0x12c
JL 0x0046d4e0
MOV ECX,dword ptr [EDI + 0x344]
MOV EAX,dword ptr [ECX + 0xf4]
TEST EAX,EAX
JZ 0x0046d52a
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV ESI,0xf8
MOV EDX,dword ptr [EDI + 0x344]
MOV EAX,dword ptr [EDX + ESI*0x1]
TEST EAX,EAX
JZ 0x0046d54d
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
ADD ESI,0x4
CMP ESI,0x100
JLE 0x0046d52f
MOV EAX,dword ptr [EDI + 0x344]
MOV EAX,dword ptr [EAX + 0x40]
TEST EAX,EAX
JZ 0x0046d576
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV ECX,dword ptr [EDI + 0x344]
MOV EAX,dword ptr [ECX + 0x38]
TEST EAX,EAX
JZ 0x0046d594
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EDX,dword ptr [EDI + 0x344]
MOV EAX,dword ptr [EDX + 0x3c]
TEST EAX,EAX
JZ 0x0046d5b2
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
POP EDI
POP ESI
RET