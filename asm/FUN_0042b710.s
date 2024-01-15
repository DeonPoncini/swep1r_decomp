; FUN_0042b710
SUB ESP,0x6c
FLD dword ptr [0x00e37580]
FLD dword ptr [0x00e37584]
FLD dword ptr [0x00e37588]
FLD dword ptr [0x00e3758c]
FLD dword ptr [0x00e37590]
MOV ECX,dword ptr [ESP + 0x70]
PUSH EBX
FLD dword ptr [0x00e37594]
FXCH ST5
FSTP dword ptr [ESP + 0x30]
MOVSX EAX,word ptr [ECX + 0x10]
FLD dword ptr [0x00e37598]
FXCH ST4
FSTP dword ptr [ESP + 0x34]
FLD dword ptr [0x00e3759c]
FXCH ST3
FSTP dword ptr [ESP + 0x38]
CDQ
FLD dword ptr [0x00e375a0]
FXCH ST2
FSTP dword ptr [ESP + 0x3c]
PUSH ESI
SUB EAX,EDX
MOVSX ESI,word ptr [ECX + 0x12]
PUSH EDI
MOV EDI,EAX
MOV EAX,ESI
MOVSX ESI,word ptr [ECX + 0x18]
CDQ
SAR EDI,0x1
SUB EAX,EDX
MOV dword ptr [ESP + 0x7c],EDI
FILD dword ptr [ESP + 0x7c]
MOV EBX,EAX
MOV EAX,ESI
SAR EBX,0x1
FXCH
FSTP dword ptr [ESP + 0x48]
MOVSX ECX,word ptr [ECX + 0x1a]
MOV dword ptr [ESP + 0x18],EBX
FILD dword ptr [ESP + 0x18]
CDQ
FXCH ST5
FSTP dword ptr [ESP + 0x4c]
AND EDX,0x3
FST dword ptr [ESP + 0x14]
ADD EAX,EDX
FXCH ST4
FST dword ptr [ESP + 0x18]
MOV ESI,EAX
MOV EAX,ECX
FXCH ST4
FMUL dword ptr [0x004ac568]
FXCH ST4
FMUL dword ptr [0x004ac568]
CDQ
SAR ESI,0x2
AND EDX,0x3
MOV dword ptr [ESP + 0x7c],ESI
FILD dword ptr [ESP + 0x7c]
ADD EAX,EDX
MOV EDX,dword ptr [0x00e375a4]
SAR EAX,0x2
FXCH ST4
FSTP dword ptr [ESP + 0x50]
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,[0x00e375a8]
FILD dword ptr [ESP + 0x10]
FXCH ST3
FSTP dword ptr [ESP + 0x54]
FXCH ST4
FSTP dword ptr [ESP + 0xc]
FXCH ST2
FSUB dword ptr [ESP + 0xc]
FXCH ST3
FSTP dword ptr [ESP + 0x10]
FSUB dword ptr [ESP + 0x10]
FXCH
MOV ECX,dword ptr [0x00e375ac]
MOV dword ptr [ESP + 0x5c],EDX
MOV dword ptr [ESP + 0x60],EAX
FSTP dword ptr [ESP + 0x58]
FLD dword ptr [0x00e375b4]
FLD dword ptr [0x00e375b8]
FLD dword ptr [0x00e375bc]
FXCH ST2
FSTP dword ptr [ESP + 0x6c]
MOV ESI,dword ptr [ESP + 0x84]
MOV EDI,dword ptr [ESP + 0x88]
FSTP dword ptr [ESP + 0x70]
MOV EAX,dword ptr [ESP + 0x94]
MOV EDX,dword ptr [0x00e375b0]
FSTP dword ptr [ESP + 0x74]
FXCH
FSTP dword ptr [ESP + 0x7c]
MOV dword ptr [ESI],0xc47a0000
MOV dword ptr [ESP + 0x64],ECX
FSTP dword ptr [ESP + 0x84]
TEST EAX,EAX
MOV dword ptr [ESP + 0x68],EDX
MOV dword ptr [EDI],0xc47a0000
JNZ 0x0042b8cf
MOV EAX,dword ptr [ESP + 0x80]
LEA ECX,[ESP + 0x1c]
LEA EDX,[ESP + 0x28]
FLD dword ptr [EAX]
FLD dword ptr [EAX + 0x4]
FLD dword ptr [EAX + 0x8]
FXCH ST2
FSUB dword ptr [0x0050c6e8]
FXCH
FSUB dword ptr [0x0050c6ec]
FXCH ST2
FSUB dword ptr [0x0050c6f0]
FXCH
FSTP dword ptr [ESP + 0x1c]
FXCH
FSTP dword ptr [ESP + 0x20]
LEA EAX,[ESP + 0x38]
FSTP dword ptr [ESP + 0x24]
PUSH EAX
PUSH ECX
PUSH EDX
JMP 0x0042b8e1
MOV ECX,dword ptr [ESP + 0x80]
LEA EAX,[ESP + 0x38]
PUSH EAX
LEA EDX,[ESP + 0x2c]
PUSH ECX
PUSH EDX
CALL 0x00480690
MOV EAX,[0x00e996dc]
ADD ESP,0xc
TEST AH,0x40
JZ 0x0042b8fd
FLD dword ptr [ESP + 0x28]
FCHS
FSTP dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x34]
FCOMP qword ptr [0x004ac570]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042ba0a
FLD dword ptr [ESP + 0x28]
FDIV dword ptr [ESP + 0x34]
MOV EAX,dword ptr [ESP + 0x8c]
MOV ECX,dword ptr [ESP + 0x90]
FLD dword ptr [ESP + 0x2c]
FDIV dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x30]
FDIV dword ptr [ESP + 0x34]
FXCH ST2
FSUB dword ptr [0x004ac578]
FLD dword ptr [ESP + 0x7c]
FXCH ST2
FSUBR dword ptr [0x004ac57c]
FXCH
FMUL dword ptr [ESP + 0xc]
FXCH ST2
FSUB dword ptr [0x004ac580]
FXCH ST2
FADD dword ptr [ESP + 0x7c]
FXCH
FMUL dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x34]
FXCH ST2
FST dword ptr [ESP + 0x80]
FXCH
FADD dword ptr [ESP + 0x84]
FXCH ST3
FXCH
FCOMPP
FXCH ST2
FSTP dword ptr [EAX]
FSTP dword ptr [ESP + 0x88]
FNSTSW AX
FSTP dword ptr [ECX]
TEST AH,0x41
JNZ 0x0042ba0a
FLD dword ptr [ESP + 0x7c]
FADD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x80]
FXCH
FSUB dword ptr [0x004ac584]
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x0042ba0a
FLD dword ptr [ESP + 0x84]
FSUB dword ptr [0x004ac580]
FCOMP dword ptr [ESP + 0x88]
FNSTSW AX
TEST AH,0x1
JZ 0x0042ba0a
FLD dword ptr [ESP + 0x84]
FADD dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0x88]
FXCH
FSUB dword ptr [0x004ac584]
FXCH
FCOMPP
FNSTSW AX
TEST AH,0x1
JZ 0x0042ba0a
MOV EDX,dword ptr [ESP + 0x80]
MOV EAX,dword ptr [ESP + 0x88]
MOV dword ptr [ESI],EDX
MOV dword ptr [EDI],EAX
POP EDI
POP ESI
POP EBX
ADD ESP,0x6c
RET
