; FUN_0045b5d0
MOV EAX,dword ptr [ESP + 0x4]
OR ECX,0xffffffff
MOVSX EDX,byte ptr [EAX + 0x70]
MOV dword ptr [0x004c3fe8],ECX
XOR EAX,EAX
MOV dword ptr [0x004c3fec],ECX
MOV dword ptr [0x004c3ff0],ECX
TEST EDX,EDX
MOV dword ptr [0x004c3ff4],ECX
JLE 0x0045b608
MOV ECX,0x4c3fe8
MOV dword ptr [ECX],EAX
INC EAX
ADD ECX,0x4
CMP EAX,EDX
JL 0x0045b5fe
RET
