; FUN_004787f0
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST dword ptr [ESI + 0x60],0x800000
JZ 0x00478818
FLD qword ptr [0x00e22a40]
FMUL dword ptr [0x004add20]
FADD dword ptr [ESI + 0x1a8]
FSTP dword ptr [ESI + 0x1a8]
JMP 0x0047886b
FLD dword ptr [ESI + 0x1a8]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047884e
FLD qword ptr [0x00e22a40]
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x40a00000
CALL 0x00480650
FMUL dword ptr [ESI + 0x1a8]
ADD ESP,0x8
FSTP dword ptr [ESI + 0x1a8]
FLD dword ptr [ESI + 0x1a8]
FCOMP dword ptr [0x004add54]
FNSTSW AX
TEST AH,0x1
JZ 0x0047886b
MOV dword ptr [ESI + 0x1a8],0x0
MOV EAX,dword ptr [ESI + 0x60]
TEST AH,0x2
JZ 0x0047887b
AND EAX,0xff7fffff
MOV dword ptr [ESI + 0x60],EAX
FLD dword ptr [ESI + 0x1a8]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x41
JNZ 0x004788ae
FLD dword ptr [ESI + 0x1a8]
FLD dword ptr [ESI + 0x1a8]
FSUB dword ptr [0x004add58]
FXCH
FMUL dword ptr [ESI + 0x88]
FXCH
FDIVP
POP ESI
RET
FLD dword ptr [0x004adc48]
POP ESI
RET
