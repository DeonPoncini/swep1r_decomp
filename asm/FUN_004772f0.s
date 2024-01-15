; FUN_004772f0
SUB ESP,0x4c
PUSH ESI
MOV ESI,dword ptr [ESP + 0x54]
MOV EAX,dword ptr [ESI + 0x64]
TEST AH,0x4
JZ 0x00477326
FLD dword ptr [ESI + 0x160]
FCHS
FSTP dword ptr [ESP + 0x4]
FLD dword ptr [ESI + 0x164]
FCHS
FSTP dword ptr [ESP + 0x8]
FLD dword ptr [ESI + 0x168]
FCHS
FSTP dword ptr [ESP + 0xc]
JMP 0x00477344
MOV EAX,dword ptr [ESI + 0x194]
MOV ECX,dword ptr [ESI + 0x198]
MOV EDX,dword ptr [ESI + 0x19c]
MOV dword ptr [ESP + 0x4],EAX
MOV dword ptr [ESP + 0x8],ECX
MOV dword ptr [ESP + 0xc],EDX
MOV ECX,dword ptr [ESP + 0x58]
LEA EAX,[ESP + 0x4]
PUSH EAX
PUSH 0xc0000000
LEA EDX,[ESP + 0x24]
PUSH ECX
PUSH EDX
CALL 0x0042fa80
MOV EAX,dword ptr [ESP + 0x14]
MOV ECX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x1c]
MOV dword ptr [ESP + 0x50],EAX
MOV EAX,dword ptr [ESP + 0x2c]
MOV dword ptr [ESP + 0x54],ECX
MOV ECX,dword ptr [ESP + 0x30]
MOV dword ptr [ESP + 0x58],EDX
MOV EDX,dword ptr [ESP + 0x34]
ADD ESP,0x10
MOV dword ptr [ESP + 0x4c],0x461c4000
MOV dword ptr [ESP + 0x34],EAX
MOV dword ptr [ESP + 0x38],ECX
MOV dword ptr [ESP + 0x3c],EDX
CALL 0x00441020
TEST byte ptr [ESI + 0x64],0x80
JNZ 0x004773c7
LEA EAX,[ESP + 0x10]
LEA ECX,[ESP + 0x28]
PUSH EAX
MOV EAX,dword ptr [ESI + 0xec]
LEA EDX,[ESP + 0x38]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x00444f10
FSTP dword ptr [ESP + 0x64]
ADD ESP,0x10
JMP 0x004773cf
MOV dword ptr [ESP + 0x54],0xbf800000
FLD dword ptr [ESP + 0x54]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x00477402
LEA ECX,[ESP + 0x10]
LEA EDX,[ESP + 0x28]
PUSH ECX
MOV ECX,dword ptr [ESI + 0x13c]
LEA EAX,[ESP + 0x38]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x00444d10
FSTP dword ptr [ESP + 0x64]
ADD ESP,0x10
MOV EAX,dword ptr [ESI + 0x64]
TEST AH,0x4
JZ 0x0047746b
FLD dword ptr [ESP + 0x54]
FCOMP dword ptr [0x004adc48]
FNSTSW AX
TEST AH,0x1
JZ 0x0047746b
MOV EDX,dword ptr [ESI + 0x198]
MOV EAX,dword ptr [ESI + 0x19c]
FLD dword ptr [ESI + 0x194]
MOV dword ptr [ESP + 0x8],EDX
MOV ECX,EDX
FST dword ptr [ESP + 0x4]
FSTP dword ptr [ESP + 0x40]
MOV dword ptr [ESP + 0xc],EAX
MOV EDX,EAX
MOV dword ptr [ESP + 0x44],ECX
LEA EAX,[ESP + 0x10]
MOV dword ptr [ESP + 0x48],EDX
LEA ECX,[ESP + 0x28]
PUSH EAX
MOV EAX,dword ptr [ESI + 0x13c]
LEA EDX,[ESP + 0x38]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x00444d10
FSTP dword ptr [ESP + 0x64]
ADD ESP,0x10
CALL 0x00441030
FLD dword ptr [ESP + 0x54]
FCOMP dword ptr [0x004adc48]
MOV dword ptr [ESI + 0x140],EAX
FNSTSW AX
TEST AH,0x1
JZ 0x004774b4
MOV EAX,dword ptr [ESP + 0x5c]
FLD dword ptr [0x004adc98]
MOV dword ptr [EAX],0x0
MOV dword ptr [EAX + 0x4],0x0
MOV dword ptr [EAX + 0x8],0x3f800000
MOV dword ptr [ESI + 0x188],0xc61c4000
POP ESI
ADD ESP,0x4c
RET
FLD dword ptr [ESP + 0x54]
FLD dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x18]
FXCH ST3
FSUB dword ptr [0x004adc9c]
FLD dword ptr [ESP + 0x30]
FXCH ST3
MOV EAX,dword ptr [ESP + 0x5c]
FSTP dword ptr [EAX]
FXCH
FSTP dword ptr [EAX + 0x4]
FXCH ST2
FSTP dword ptr [EAX + 0x8]
FSTP dword ptr [ESI + 0x188]
POP ESI
ADD ESP,0x4c
RET
