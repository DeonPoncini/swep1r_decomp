; FUN_00450c00
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST ESI,ESI
JZ 0x00450c49
MOV ECX,dword ptr [0x004bfec0]
MOV EAX,dword ptr [ECX]
TEST EAX,EAX
JZ 0x00450c49
MOV EDX,dword ptr [ESI]
CMP dword ptr [EAX],EDX
JZ 0x00450c27
MOV EAX,dword ptr [ECX + 0x4]
ADD ECX,0x4
TEST EAX,EAX
JNZ 0x00450c17
POP ESI
RET
MOV EAX,dword ptr [EAX + 0x24]
TEST EAX,EAX
JZ 0x00450c49
MOV CX,word ptr [ESI + 0x6]
AND ECX,0x100
TEST CX,CX
JNZ 0x00450c49
MOV ECX,dword ptr [ESP + 0xc]
PUSH ECX
PUSH ECX
PUSH ESI
CALL EAX
ADD ESP,0xc
POP ESI
RET
