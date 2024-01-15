; FUN_0046ce30
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESI + 0x60]
TEST AL,0x20
JZ 0x0046ceca
MOV ECX,dword ptr [ESI + 0x1e70]
MOV EDX,dword ptr [ECX + 0xc]
TEST EDX,EDX
JZ 0x0046ceca
MOV dword ptr [ESI + 0x22c],0x3f800000
CALL 0x0045d350
CMP EAX,0x1
JLE 0x0046ceef
FLD dword ptr [ESI + 0x130]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046ceef
CALL 0x0047e870
FDIVR dword ptr [0x004ad850]
FLD dword ptr [ESI + 0x130]
FMUL dword ptr [0x004ad93c]
FXCH
FSTP dword ptr [ESP + 0x8]
FDIV dword ptr [ESP + 0x8]
FSUB dword ptr [0x004ad80c]
FCOM dword ptr [0x004ad948]
FSTP dword ptr [ESI + 0x22c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046ceef
MOV dword ptr [ESI + 0x22c],0x3fa00000
MOV EDX,dword ptr [ESI + 0x22c]
MOV dword ptr [ESI + 0x1ac],EDX
POP ESI
RET
TEST AL,0x80
JZ 0x0046cee5
PUSH ESI
CALL 0x0046b670
MOV EDX,dword ptr [ESI + 0x22c]
ADD ESP,0x4
MOV dword ptr [ESI + 0x1ac],EDX
POP ESI
RET
MOV dword ptr [ESI + 0x22c],0x3f800000
MOV EDX,dword ptr [ESI + 0x22c]
MOV dword ptr [ESI + 0x1ac],EDX
POP ESI
RET
