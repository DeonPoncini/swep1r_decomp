; FUN_00444f10
SUB ESP,0xc
PUSH EBX
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x1c]
TEST EDI,EDI
JNZ 0x00444f2d
MOV dword ptr [0x00e98258],0xbf800000
JMP 0x00445131
MOV ESI,dword ptr [ESP + 0x20]
PUSH 0xe98e4c
LEA EAX,[ESP + 0x10]
MOV EBX,0x1
FLD dword ptr [ESI + 0x18]
FSUB dword ptr [0x004aca84]
FSTP dword ptr [0x00e98258]
MOV ECX,dword ptr [ESI + 0x18]
MOV dword ptr [0x00e98e58],ECX
MOV EDX,dword ptr [ESI + 0xc]
MOV dword ptr [0x00e98e4c],EDX
MOV EDX,dword ptr [ESI + 0x10]
MOV dword ptr [0x00e98e50],EDX
PUSH ECX
MOV ECX,dword ptr [ESI + 0x14]
PUSH 0xe98e40
MOV dword ptr [0x00e98e54],ECX
MOV EDX,dword ptr [ESI]
PUSH EAX
MOV dword ptr [0x00e98e40],EDX
MOV EAX,dword ptr [ESI + 0x4]
MOV [0x00e98e44],EAX
MOV ECX,dword ptr [ESI + 0x8]
MOV dword ptr [0x00e98e48],ECX
MOV word ptr [0x00e98e1c],BX
MOV dword ptr [0x00e98e20],0x442c30
MOV dword ptr [0x00e985ac],0x442720
CALL 0x0042fa80
FLD dword ptr [0x00e98e4c]
FCOMP dword ptr [0x004aca50]
ADD ESP,0x10
FNSTSW AX
TEST BL,AH
JZ 0x00444fde
MOV EDX,dword ptr [0x00e98e40]
MOV EAX,dword ptr [ESP + 0xc]
MOV dword ptr [0x00e98260],EDX
MOV [0x00e98270],EAX
JMP 0x00444ff4
MOV ECX,dword ptr [0x00e98e40]
MOV EDX,dword ptr [ESP + 0xc]
MOV dword ptr [0x00e98270],ECX
MOV dword ptr [0x00e98260],EDX
FLD dword ptr [0x00e98e50]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x0044501d
MOV EAX,[0x00e98e44]
MOV ECX,dword ptr [ESP + 0x10]
MOV [0x00e98264],EAX
MOV dword ptr [0x00e98274],ECX
JMP 0x00445032
MOV EDX,dword ptr [0x00e98e44]
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [0x00e98274],EDX
MOV [0x00e98264],EAX
FLD dword ptr [0x00e98e54]
FCOMP dword ptr [0x004aca50]
FNSTSW AX
TEST AH,0x1
JZ 0x0044505d
MOV ECX,dword ptr [0x00e98e48]
MOV EDX,dword ptr [ESP + 0x14]
MOV dword ptr [0x00e98268],ECX
MOV dword ptr [0x00e98278],EDX
JMP 0x00445071
MOV EAX,[0x00e98e48]
MOV ECX,dword ptr [ESP + 0x14]
MOV [0x00e98278],EAX
MOV dword ptr [0x00e98268],ECX
MOV EAX,[0x0050c5c8]
TEST EAX,EAX
JZ 0x00445088
MOV dword ptr [0x0050c5cc],EBX
MOV dword ptr [0x004c1774],EBX
JMP 0x004450ce
PUSH EBX
PUSH EDI
CALL 0x00431770
ADD ESP,0x4
PUSH EAX
CALL 0x00431880
ADD ESP,0x8
CMP EAX,EBX
JZ 0x004450aa
CMP EAX,0x3
MOV dword ptr [0x0050c5cc],EBX
JNZ 0x004450b4
MOV dword ptr [0x0050c5cc],0x0
CMP EAX,0x2
JZ 0x004450c4
CMP EAX,0x3
MOV dword ptr [0x004c1774],EBX
JNZ 0x004450ce
MOV dword ptr [0x004c1774],0x0
PUSH EDI
CALL 0x004439f0
FSTP ST0
FLD dword ptr [0x00e98258]
FCOMP dword ptr [ESI + 0x18]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x004450f5
MOV dword ptr [0x00e98258],0xbf800000
JMP 0x00445131
FLD dword ptr [0x00e98e60]
MOV EAX,dword ptr [ESP + 0x24]
FSTP dword ptr [EAX]
MOV EDX,dword ptr [0x00e98e64]
MOV dword ptr [EAX + 0x4],EDX
MOV ECX,dword ptr [0x00e98e68]
MOV dword ptr [EAX + 0x8],ECX
MOV EAX,dword ptr [ESP + 0x28]
FLD dword ptr [0x00e98290]
FSTP dword ptr [EAX]
MOV EDX,dword ptr [0x00e98294]
MOV dword ptr [EAX + 0x4],EDX
MOV ECX,dword ptr [0x00e98298]
MOV dword ptr [EAX + 0x8],ECX
MOV EAX,[0x00e98254]
TEST EAX,EAX
JZ 0x0044513f
MOV [0x0050c5d0],EAX
FLD dword ptr [0x00e98258]
POP EDI
POP ESI
POP EBX
ADD ESP,0xc
RET
