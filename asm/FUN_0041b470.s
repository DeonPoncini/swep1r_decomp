; FUN_0041b470
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xc]
PUSH 0x4
PUSH EDI
CALL 0x00414d90
MOV ESI,EAX
ADD ESP,0x8
TEST ESI,ESI
JZ 0x0041b49d
MOV EAX,dword ptr [ESP + 0x10]
PUSH EAX
PUSH ESI
CALL 0x00414e60
MOV EAX,dword ptr [ESI + 0x20]
ADD ESP,0x8
OR AL,0x4
MOV dword ptr [ESI + 0x20],EAX
PUSH 0x2
PUSH EDI
CALL 0x00414d90
MOV ESI,EAX
ADD ESP,0x8
TEST ESI,ESI
JZ 0x0041b4c4
MOV ECX,dword ptr [ESP + 0x14]
PUSH ECX
PUSH ESI
CALL 0x00414e60
MOV EAX,dword ptr [ESI + 0x20]
ADD ESP,0x8
OR AL,0x4
MOV dword ptr [ESI + 0x20],EAX
POP EDI
POP ESI
RET
