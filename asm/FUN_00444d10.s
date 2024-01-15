; FUN_00444d10
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xc]
TEST EDI,EDI
JNZ 0x00444d29
MOV dword ptr [0x00e98258],0xbf800000
JMP 0x00444e1b
MOV ESI,dword ptr [ESP + 0x10]
FLD dword ptr [ESI + 0x18]
FSUB dword ptr [0x004aca84]
MOV dword ptr [0x00e98254],0x0
FSTP dword ptr [0x00e98258]
MOV EAX,dword ptr [ESI + 0x18]
MOV [0x00e98e58],EAX
MOV ECX,dword ptr [ESI + 0xc]
MOV dword ptr [0x00e98e4c],ECX
MOV EDX,dword ptr [ESI + 0x10]
MOV dword ptr [0x00e98e50],EDX
MOV EAX,dword ptr [ESI + 0x14]
MOV [0x00e98e54],EAX
MOV ECX,dword ptr [ESI]
MOV dword ptr [0x00e98e40],ECX
MOV EDX,dword ptr [ESI + 0x4]
MOV dword ptr [0x00e98e44],EDX
MOV EAX,dword ptr [ESI + 0x8]
MOV [0x00e98e48],EAX
MOV word ptr [0x00e98e1c],0x1
MOV dword ptr [0x00e98e20],0x442c30
MOV dword ptr [0x00e985ac],0x442720
MOV dword ptr [0x00e98e70],0x0
MOV dword ptr [0x00e98250],0x0
CALL 0x00445150
PUSH 0x0
PUSH ESI
PUSH EDI
CALL 0x00444bf0
FLD dword ptr [0x00e98258]
FCOMP dword ptr [ESI + 0x18]
ADD ESP,0xc
FNSTSW AX
TEST AH,0x41
JNZ 0x00444ddf
MOV dword ptr [0x00e98258],0xbf800000
JMP 0x00444e1b
FLD dword ptr [0x00e98e60]
MOV EAX,dword ptr [ESP + 0x14]
FSTP dword ptr [EAX]
MOV ECX,dword ptr [0x00e98e64]
MOV dword ptr [EAX + 0x4],ECX
MOV EDX,dword ptr [0x00e98e68]
MOV dword ptr [EAX + 0x8],EDX
MOV EAX,dword ptr [ESP + 0x18]
FLD dword ptr [0x00e98290]
FSTP dword ptr [EAX]
MOV ECX,dword ptr [0x00e98294]
MOV dword ptr [EAX + 0x4],ECX
MOV EDX,dword ptr [0x00e98298]
MOV dword ptr [EAX + 0x8],EDX
MOV EAX,[0x00e98254]
TEST EAX,EAX
JZ 0x00444e29
MOV [0x0050c5d0],EAX
FLD dword ptr [0x00e98258]
POP EDI
POP ESI
RET
