; FUN_0049f130
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EDI
OR EDI,0xffffffff
TEST byte ptr [ESI + 0xc],0x83
JZ 0x0049f189
PUSH ESI
CALL 0x004a2d30
ADD ESP,0x4
MOV EDI,EAX
PUSH ESI
CALL 0x004a2cb0
MOV EAX,dword ptr [ESI + 0x10]
ADD ESP,0x4
PUSH EAX
CALL 0x004a03e0
ADD ESP,0x4
TEST EAX,EAX
JGE 0x0049f172
OR EDI,0xffffffff
MOV dword ptr [ESI + 0xc],0x0
MOV EAX,EDI
POP EDI
POP ESI
RET
MOV EAX,dword ptr [ESI + 0x1c]
TEST EAX,EAX
JZ 0x0049f189
PUSH EAX
CALL 0x0049f200
ADD ESP,0x4
MOV dword ptr [ESI + 0x1c],0x0
MOV EAX,EDI
MOV dword ptr [ESI + 0xc],0x0
POP EDI
POP ESI
RET