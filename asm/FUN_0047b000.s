; FUN_0047b000
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [ESI + 0x60]
TEST CH,0x70
JNZ 0x0047b0b2
MOV EAX,dword ptr [ESI + 0x64]
TEST EAX,0x2000000
JNZ 0x0047b0b2
TEST EAX,0x10000000
JZ 0x0047b030
AND EAX,0xefffffff
MOV dword ptr [ESI + 0x64],EAX
POP ESI
RET
FLD dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004c7bbc]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047b0b2
FLD dword ptr [ESP + 0xc]
FCOMP dword ptr [0x004c7bb8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047b0b2
MOV EAX,[0x0050ca28]
TEST EAX,EAX
JNZ 0x0047b0b2
FLD dword ptr [ESI + 0x1a0]
FCOMP dword ptr [0x004adcb4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047b0ac
TEST CL,0x80
JNZ 0x0047b0ac
FLD dword ptr [ESI + 0x1f4]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x0047b08a
PUSH 0x1
JMP 0x0047b08c
PUSH 0x2
PUSH ESI
CALL 0x004741d0
MOV EAX,dword ptr [ESI + 0x60]
ADD ESP,0x8
OR EAX,0x800000
MOV dword ptr [ESI + 0x18c],0x40a00000
MOV dword ptr [ESI + 0x60],EAX
POP ESI
RET
OR CH,0x10
MOV dword ptr [ESI + 0x60],ECX
POP ESI
RET
