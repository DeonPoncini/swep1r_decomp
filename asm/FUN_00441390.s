; FUN_00441390
FLD dword ptr [0x00e98258]
FSUB dword ptr [0x004aca64]
SUB ESP,0xc
FCOMP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x1
JZ 0x00441473
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x1c]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FSUB dword ptr [ECX]
FXCH
FSUB dword ptr [ECX + 0x4]
FXCH ST2
FSUB dword ptr [ECX + 0x8]
FXCH
FST dword ptr [ESP]
FXCH
FLD ST2
FXCH
FST dword ptr [ESP + 0x8]
FXCH ST2
FMUL dword ptr [0x00e98290]
FXCH ST2
FMUL dword ptr [EDX + 0x8]
FLD dword ptr [EDX]
FXCH ST2
FMUL dword ptr [EDX + 0x4]
FADDP
FXCH ST3
FMUL dword ptr [0x00e98294]
FLD dword ptr [ESP + 0x8]
FXCH ST2
FMUL dword ptr [ESP]
FADDP ST4,ST0
FADDP ST2,ST0
FMUL dword ptr [0x00e98298]
FADDP
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x004414ce
MOV EAX,dword ptr [ESP + 0x10]
MOV [0x00e98258],EAX
MOV EAX,dword ptr [ECX]
MOV [0x00e98e60],EAX
MOV EAX,dword ptr [ECX + 0x4]
MOV [0x00e98e64],EAX
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [0x00e98e68],ECX
MOV EAX,dword ptr [EDX]
MOV [0x00e98290],EAX
MOV ECX,dword ptr [EDX + 0x4]
MOV EAX,[0x00e98284]
MOV dword ptr [0x00e98294],ECX
MOV EDX,dword ptr [EDX + 0x8]
MOV [0x00e98254],EAX
MOV dword ptr [0x00e98298],EDX
MOV dword ptr [0x00e98250],0x1
ADD ESP,0xc
RET
MOV ECX,dword ptr [ESP + 0x10]
MOV EAX,dword ptr [ESP + 0x18]
MOV dword ptr [0x00e98258],ECX
MOV EDX,dword ptr [EAX]
MOV dword ptr [0x00e98e60],EDX
MOV ECX,dword ptr [EAX + 0x4]
MOV dword ptr [0x00e98e64],ECX
MOV EDX,dword ptr [EAX + 0x8]
MOV EAX,dword ptr [ESP + 0x1c]
MOV dword ptr [0x00e98e68],EDX
MOV ECX,dword ptr [EAX]
MOV dword ptr [0x00e98290],ECX
MOV EDX,dword ptr [EAX + 0x4]
MOV ECX,dword ptr [0x00e98284]
MOV dword ptr [0x00e98294],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [0x00e98254],ECX
MOV [0x00e98298],EAX
MOV dword ptr [0x00e98250],0x1
ADD ESP,0xc
RET
