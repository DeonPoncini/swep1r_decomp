; FUN_00413b90
PUSH EDI
MOV EDI,dword ptr [ESP + 0x10]
TEST EDI,EDI
JNZ 0x00413b9d
XOR EAX,EAX
POP EDI
RET
MOV EAX,dword ptr [ESP + 0x1c]
MOV ECX,dword ptr [ESP + 0x20]
MOV EDX,dword ptr [ESP + 0xc]
PUSH ESI
PUSH EAX
MOV EAX,dword ptr [ESP + 0x10]
PUSH 0x415850
PUSH 0x0
PUSH ECX
PUSH 0x0
PUSH 0x0
PUSH -0x1
PUSH EDX
PUSH EAX
CALL 0x00416d90
MOV ESI,EAX
ADD ESP,0x24
MOV EAX,dword ptr [ESI + 0x20]
OR AL,0x4
MOV dword ptr [ESI + 0x20],EAX
MOV ECX,dword ptr [EDI + 0xc]
MOV EDX,dword ptr [EDI + 0x4]
SUB ECX,EDX
MOV EDX,dword ptr [EDI + 0x8]
INC ECX
PUSH ECX
MOV ECX,dword ptr [EDI]
SUB EDX,ECX
INC EDX
PUSH EDX
PUSH ESI
CALL 0x00414b40
MOV EAX,dword ptr [EDI + 0x4]
MOV ECX,dword ptr [EDI]
ADD ESP,0xc
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x00414b60
MOV EDX,dword ptr [ESP + 0x28]
MOV EAX,dword ptr [ESP + 0x24]
ADD ESP,0xc
PUSH EDX
PUSH 0x1
PUSH EDI
PUSH EAX
PUSH 0x0
PUSH ESI
CALL 0x00412fb0
ADD ESP,0x18
PUSH 0xff
PUSH 0xff
PUSH 0xff
PUSH 0xff
PUSH 0x0
PUSH ESI
CALL 0x00413090
ADD ESP,0x18
PUSH 0x1
PUSH ESI
CALL 0x00414e60
ADD ESP,0x8
MOV dword ptr [ESI + 0x18],0x7
MOV EAX,ESI
POP ESI
POP EDI
RET
