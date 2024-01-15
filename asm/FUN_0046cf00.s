; FUN_0046cf00
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESI + 0x60]
MOV dword ptr [ESI + 0x18c],0x0
TEST AL,0x20
MOV dword ptr [ESI + 0x1f0],0x0
JZ 0x0046cf35
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EDX,dword ptr [ECX + 0xc]
TEST EDX,EDX
JZ 0x0046cf35
PUSH ESI
CALL 0x0046bec0
JMP 0x0046cf8b
TEST AL,0x40
JZ 0x0046cf52
AND EAX,0xf
CMP AL,0x2
JNZ 0x0046d032
MOV EDX,dword ptr [ESI + 0x1ec8]
MOV dword ptr [ESI + 0x1f0],EDX
JMP 0x0046cf8e
TEST AL,0x80
JZ 0x0046cf8e
PUSH ESI
CALL 0x0046bb70
MOV EAX,dword ptr [ESI + 0x64]
ADD ESP,0x4
TEST EAX,0x4000000
JZ 0x0046cf7b
MOV EDX,dword ptr [ESI + 0x60]
PUSH ESI
OR DH,0x4
MOV dword ptr [ESI + 0x60],EDX
CALL 0x0046ab10
ADD ESP,0x4
MOV EAX,dword ptr [ESI + 0x60]
AND EAX,0xf
CMP AL,0x2
JNZ 0x0046cf8e
PUSH ESI
CALL 0x0046b430
ADD ESP,0x4
MOV ECX,dword ptr [ESI + 0x60]
AND ECX,0xf
CMP CL,0x2
JNZ 0x0046cfa2
PUSH ESI
CALL 0x0046ce30
ADD ESP,0x4
TEST byte ptr [ESI + 0x60],0x80
JZ 0x0046cfba
FLD dword ptr [ESI + 0x1ac]
FMUL dword ptr [ESI + 0x18c]
FSTP dword ptr [ESI + 0x18c]
FLD dword ptr [ESI + 0x264]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046cfd7
MOV dword ptr [ESI + 0x18c],0x0
FLD dword ptr [ESI + 0x74]
FLD dword ptr [ESI + 0x1f0]
FMUL dword ptr [ESI + 0x22c]
FXCH
FMUL dword ptr [ESI + 0x22c]
FLD ST1
FXCH
FSTP dword ptr [ESP + 0x8]
FCOMP dword ptr [ESP + 0x8]
FSTP dword ptr [ESI + 0x1f0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046d011
MOV EDX,dword ptr [ESP + 0x8]
MOV dword ptr [ESI + 0x1f0],EDX
FLD dword ptr [ESI + 0x1f0]
FLD dword ptr [ESP + 0x8]
FCHS
FXCH
FCOMP
FNSTSW AX
TEST AH,0x1
JZ 0x0046d030
FSTP dword ptr [ESI + 0x1f0]
POP ESI
RET
FSTP ST0
POP ESI
RET
