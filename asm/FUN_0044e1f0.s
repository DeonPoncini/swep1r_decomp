; FUN_0044e1f0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST ESI,ESI
JL 0x0044e215
CMP ESI,0xc
JGE 0x0044e215
LEA EAX,[ESI + 0x1]
PUSH EAX
CALL 0x00409700
ADD ESP,0x4
MOV dword ptr [ESI*0x4 + 0x4c3ba0],0x1
POP ESI
RET