; FUN_004276c0
PUSH ESI
CALL 0x004456a0
FCOMP dword ptr [0x004ac47c]
FNSTSW AX
TEST AH,0x41
JNZ 0x004276de
OR ECX,0xffffffff
MOV dword ptr [0x004b85d4],ECX
JMP 0x004276e4
MOV ECX,dword ptr [0x004b85d4]
MOV ESI,0x50b600
FLD dword ptr [ESI]
FCOMP dword ptr [0x004ac47c]
FNSTSW AX
TEST AH,0x1
JNZ 0x00427737
FLD dword ptr [ESI]
FSUB qword ptr [0x00e22a40]
FLD ST0
FCOMP dword ptr [0x004ac47c]
FSTP dword ptr [ESI]
FNSTSW AX
TEST AH,0x41
JZ 0x00427737
CMP ECX,-0x1
JZ 0x00427737
MOV EAX,[0x004b85dc]
PUSH 0x0
PUSH ECX
MOV ECX,dword ptr [0x004b85d8]
PUSH EAX
PUSH ECX
CALL 0x00427410
ADD ESP,0x10
OR ECX,0xffffffff
MOV dword ptr [0x004b85d4],ECX
ADD ESI,0x4
CMP ESI,0x50b620
JL 0x004276e9
MOV ESI,0x50b620
FLD dword ptr [ESI]
FCOMP dword ptr [0x004ac47c]
FNSTSW AX
TEST AH,0x1
JNZ 0x00427795
FLD dword ptr [ESI]
FSUB qword ptr [0x00e22a40]
FLD ST0
FCOMP dword ptr [0x004ac47c]
FSTP dword ptr [ESI]
FNSTSW AX
TEST AH,0x41
JZ 0x00427795
CMP ECX,-0x1
JZ 0x00427795
MOV EDX,dword ptr [0x004b85dc]
MOV EAX,[0x004b85d8]
PUSH 0x0
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x00427410
ADD ESP,0x10
OR ECX,0xffffffff
MOV dword ptr [0x004b85d4],ECX
ADD ESI,0x4
CMP ESI,0x50b67c
JL 0x00427747
POP ESI
RET
