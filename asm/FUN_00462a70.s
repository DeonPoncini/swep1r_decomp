; FUN_00462a70
MOV EAX,dword ptr [ESP + 0x4]
PUSH ESI
MOV ESI,dword ptr [ESP + 0xc]
CMP dword ptr [EAX + 0x1ac],0x1
JNZ 0x00462ae7
CMP dword ptr [EAX + 0x1c0],0x3
JNZ 0x00462ae7
FLD dword ptr [ESI + 0x50]
FCOMP dword ptr [0x004ad464]
FNSTSW AX
TEST AH,0x41
JNZ 0x00462ae7
FLD dword ptr [ESI + 0x50]
FCOMP dword ptr [0x004ad468]
FNSTSW AX
TEST AH,0x1
JZ 0x00462ae7
FLD dword ptr [ESI + 0x54]
FCOMP dword ptr [0x004ad46c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00462ae7
FLD dword ptr [ESI + 0x54]
FCOMP dword ptr [0x004ad470]
FNSTSW AX
TEST AH,0x1
JZ 0x00462ae7
MOV EAX,dword ptr [ESI + 0x140]
TEST EAX,EAX
JZ 0x00462ae7
PUSH EAX
CALL 0x004318b0
ADD ESP,0x4
TEST EAX,EAX
JZ 0x00462ae7
TEST byte ptr [EAX],0x8
JNZ 0x00462b14
TEST dword ptr [ESI + 0x64],0x2000000
JNZ 0x00462b14
CMP word ptr [ESI + 0x10c],0x4
JG 0x00462b0d
FLD dword ptr [ESI + 0x1a0]
FCOMP qword ptr [0x004ad478]
FNSTSW AX
TEST AH,0x1
JZ 0x00462b14
MOV EAX,0x1
POP ESI
RET
XOR EAX,EAX
POP ESI
RET