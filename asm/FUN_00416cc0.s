; FUN_00416cc0
MOV ECX,dword ptr [ESP + 0xc]
TEST ECX,ECX
JZ 0x00416d67
MOV EDX,dword ptr [ESP + 0x10]
TEST EDX,EDX
JZ 0x00416d67
FLD dword ptr [ESP + 0x4]
FCOM dword ptr [0x004ac3d0]
FNSTSW AX
TEST AH,0x1
JZ 0x00416d06
FCOMP dword ptr [0x004ac3ec]
FNSTSW AX
TEST AH,0x1
JZ 0x00416cfe
MOV dword ptr [ECX],0xfffffffe
JMP 0x00416d21
MOV dword ptr [ECX],0xffffffff
JMP 0x00416d21
FCOMP dword ptr [0x004ac3f0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00416d1b
MOV dword ptr [ECX],0x1
JMP 0x00416d21
MOV dword ptr [ECX],0x2
FLD dword ptr [ESP + 0x8]
FCOM dword ptr [0x004ac3d0]
FNSTSW AX
TEST AH,0x1
JZ 0x00416d4d
FCOMP dword ptr [0x004ac3ec]
FNSTSW AX
TEST AH,0x1
JZ 0x00416d46
MOV dword ptr [EDX],0xfffffffe
RET
MOV dword ptr [EDX],0xffffffff
RET
FCOMP dword ptr [0x004ac3f0]
FNSTSW AX
TEST AH,0x41
JNZ 0x00416d61
MOV dword ptr [EDX],0x1
RET
MOV dword ptr [EDX],0x2
RET
