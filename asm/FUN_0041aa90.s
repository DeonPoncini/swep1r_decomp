; FUN_0041aa90
MOV EAX,dword ptr [ESP + 0x4]
SUB ESP,0x10
TEST EAX,EAX
PUSH EDI
JZ 0x0041aba4
MOV EDI,dword ptr [ESP + 0x1c]
TEST EDI,EDI
JZ 0x0041aba4
LEA EAX,[ESP + 0x1c]
PUSH ESI
LEA ECX,[ESP + 0x1c]
PUSH EAX
PUSH ECX
PUSH 0xbbf
CALL 0x00417120
MOV ESI,dword ptr [ESP + 0x30]
MOV EDX,dword ptr [ESP + 0x28]
ADD ESP,0xc
MOV EAX,dword ptr [ESI]
MOV ECX,dword ptr [ESI + 0x4]
MOV dword ptr [ESP + 0x8],EAX
MOV dword ptr [ESP + 0xc],ECX
LEA EAX,[EDX + EAX*0x1 + -0x1]
MOV EDX,dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x10],EAX
PUSH 0x0
LEA EAX,[EDX + ECX*0x1 + -0x1]
LEA ECX,[ESP + 0xc]
PUSH 0x1
PUSH ECX
PUSH 0xbbf
PUSH 0x0
PUSH EDI
MOV dword ptr [ESP + 0x2c],EAX
CALL 0x00412fb0
MOV EDX,dword ptr [ESI]
MOV ECX,dword ptr [ESP + 0x34]
MOV EAX,dword ptr [ESI + 0x4]
ADD EDX,ECX
MOV dword ptr [ESP + 0x20],EDX
MOV EDX,dword ptr [ESI + 0x8]
SUB EDX,ECX
MOV ECX,dword ptr [ESP + 0x38]
ADD ESP,0x18
MOV dword ptr [ESP + 0x10],EDX
MOV dword ptr [ESP + 0xc],EAX
LEA EDX,[ECX + EAX*0x1 + -0x1]
PUSH 0x0
LEA EAX,[ESP + 0xc]
PUSH 0x1
PUSH EAX
PUSH 0xbc0
PUSH 0x1
PUSH EDI
MOV dword ptr [ESP + 0x2c],EDX
CALL 0x00412fb0
MOV EAX,dword ptr [ESI + 0x8]
MOV EDX,dword ptr [ESP + 0x34]
MOV ECX,EAX
MOV ESI,dword ptr [ESI + 0x4]
SUB ECX,EDX
MOV EDX,dword ptr [ESP + 0x38]
ADD ESP,0x18
INC ECX
MOV dword ptr [ESP + 0x8],ECX
LEA ECX,[ESP + 0x8]
PUSH 0x400000
PUSH 0x1
PUSH ECX
MOV dword ptr [ESP + 0x1c],EAX
PUSH 0xbbf
LEA EAX,[EDX + ESI*0x1 + -0x1]
PUSH 0x2
PUSH EDI
MOV dword ptr [ESP + 0x24],ESI
MOV dword ptr [ESP + 0x2c],EAX
CALL 0x00412fb0
ADD ESP,0x18
PUSH 0x1
PUSH EDI
CALL 0x00414e30
ADD ESP,0x8
MOV dword ptr [EDI + 0x54],0x0
MOV dword ptr [EDI + 0x58],0x3
POP ESI
POP EDI
ADD ESP,0x10
RET
