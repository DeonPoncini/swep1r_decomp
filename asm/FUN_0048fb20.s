; FUN_0048fb20
MOV EAX,[0x00ecc428]
PUSH 0x64
CALL dword ptr [EAX + 0x20]
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,EAX
ADD ESP,0x4
TEST EDX,EDX
MOV dword ptr [ECX + 0x48],EDX
JNZ 0x0048fb3b
RET
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x004af7ac]
FNSTSW AX
TEST AH,0x1
JNZ 0x0048fb6b
FLD dword ptr [ESP + 0x8]
FCOMP dword ptr [0x004af7b0]
FNSTSW AX
TEST AH,0x41
JZ 0x0048fb63
FLD dword ptr [ESP + 0x8]
JMP 0x0048fb71
FLD dword ptr [0x004af7b0]
JMP 0x0048fb71
FLD dword ptr [0x004af7ac]
MOV EAX,dword ptr [ESP + 0xc]
PUSH 0x1
FSTP dword ptr [ECX + 0x38]
MOV dword ptr [EDX],EAX
MOV EDX,dword ptr [ECX + 0x48]
MOV EAX,dword ptr [ESP + 0x14]
PUSH ECX
MOV dword ptr [EDX + 0x4],EAX
MOV EDX,dword ptr [ECX + 0x48]
MOV EAX,dword ptr [ESP + 0x1c]
MOV dword ptr [EDX + 0x8],EAX
MOV EDX,dword ptr [ESP + 0x20]
MOV dword ptr [ECX + 0x40],EDX
MOV EDX,dword ptr [ECX + 0x48]
ADD EDX,0x34
XOR EAX,EAX
MOV dword ptr [ECX + 0x44],0x3f800000
MOV dword ptr [ECX + 0x4],0x0
MOV dword ptr [ECX + 0x6c],0x0
MOV dword ptr [ECX + 0x870],0x3e4ccccd
MOV dword ptr [ECX + 0x874],0x3dcccccd
MOV dword ptr [EDX],EAX
MOV dword ptr [EDX + 0x4],EAX
MOV dword ptr [EDX + 0x8],EAX
MOV EDX,dword ptr [ECX + 0x48]
ADD EDX,0x40
MOV dword ptr [EDX],EAX
MOV dword ptr [EDX + 0x4],EAX
MOV dword ptr [EDX + 0x8],EAX
MOV EDX,dword ptr [ECX + 0x48]
ADD EDX,0x4c
MOV dword ptr [EDX],EAX
MOV dword ptr [EDX + 0x4],EAX
MOV dword ptr [EDX + 0x8],EAX
MOV EDX,dword ptr [ECX + 0x48]
ADD EDX,0x58
MOV dword ptr [EDX],EAX
MOV dword ptr [EDX + 0x4],EAX
MOV dword ptr [EDX + 0x8],EAX
CALL 0x0048fc90
ADD ESP,0x8
MOV EAX,0x1
RET
