; FUN_00447670
MOV EDX,dword ptr [0x0050c630]
XOR EAX,EAX
PUSH ESI
TEST EDX,EDX
JLE 0x0044769d
MOV ESI,dword ptr [ESP + 0x8]
MOV ECX,0xe68280
CMP dword ptr [ECX],ESI
JZ 0x00447696
INC EAX
ADD ECX,0x4
CMP EAX,EDX
JL 0x00447686
XOR EAX,EAX
POP ESI
RET
MOV EAX,0x1
POP ESI
RET
XOR EAX,EAX
POP ESI
RET