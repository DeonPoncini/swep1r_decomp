; FUN_00440d50
PUSH ESI
CALL 0x00411810
MOV ESI,EAX
PUSH 0x2
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [ESP + 0x10]
ADD ESP,0x8
PUSH ECX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x4
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [ESP + 0x14]
ADD ESP,0x8
PUSH EDX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
POP ESI
RET