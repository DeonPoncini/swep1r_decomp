; FUN_004a2cb0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESI + 0xc]
TEST AL,0x83
JZ 0x004a2ce1
TEST AL,0x8
JZ 0x004a2ce1
MOV EAX,dword ptr [ESI + 0x8]
PUSH EAX
CALL 0x0049f200
MOV EAX,dword ptr [ESI + 0xc]
ADD ESP,0x4
AND EAX,0xfffffbf7
MOV dword ptr [ESI + 0xc],EAX
XOR EAX,EAX
MOV dword ptr [ESI],EAX
MOV dword ptr [ESI + 0x8],EAX
MOV dword ptr [ESI + 0x4],EAX
POP ESI
RET
