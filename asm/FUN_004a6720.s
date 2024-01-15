; FUN_004a6720
MOV EAX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESP + 0x4]
PUSH EAX
PUSH ECX
CALL 0x004a9750
ADD ESP,0x8
CMP AX,0xffff
JNZ 0x004a6743
MOV EDX,dword ptr [ESP + 0xc]
MOV dword ptr [EDX],0xffffffff
RET
MOV EAX,dword ptr [ESP + 0xc]
INC dword ptr [EAX]
RET
