; FUN_0044c4c0
MOV AL,byte ptr [ESP + 0x4]
XOR ECX,ECX
TEST AL,0x1
PUSH ESI
JZ 0x0044c4de
MOV ESI,dword ptr [0x0050c6d0]
XOR EDX,EDX
CMP ESI,ECX
SETZ DL
MOV dword ptr [0x0050c6d0],EDX
TEST AL,0x8
JZ 0x0044c4ec
MOV dword ptr [0x004c3b98],0x1
TEST AL,0x4
JZ 0x0044c507
PUSH 0x1
PUSH ECX
MOV dword ptr [0x0050c704],ECX
MOV dword ptr [0x0050c70c],ECX
CALL 0x00409510
ADD ESP,0x8
POP ESI
RET
