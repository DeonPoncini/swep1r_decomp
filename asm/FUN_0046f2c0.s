; FUN_0046f2c0
SUB ESP,0x4c
PUSH EBX
MOV EBX,dword ptr [ESP + 0x54]
PUSH EBP
PUSH ESI
PUSH EDI
XOR EDI,EDI
XOR EDX,EDX
XOR ESI,ESI
CMP EBX,EDI
MOV dword ptr [ESP + 0x10],EDI
JZ 0x0046f339
MOV EAX,dword ptr [EBX + 0x344]
CMP EAX,EDI
JZ 0x0046f948
MOV dword ptr [ESP + 0x64],EAX
MOV EAX,dword ptr [EBX + 0x1e70]
MOV ECX,dword ptr [EAX + 0x18]
MOV EAX,dword ptr [EBX + 0x60]
TEST EAX,0x800000
MOV EBP,dword ptr [ECX]
JNZ 0x0046f308
MOV EAX,dword ptr [EBX + 0x64]
TEST AH,0x20
JZ 0x0046f310
MOV dword ptr [ESP + 0x10],0x1
XOR EAX,EAX
LEA ECX,[EBX + 0x2a0]
TEST byte ptr [ECX],0x4
JZ 0x0046f32e
CMP EAX,0x3
JGE 0x0046f329
MOV EDX,0x1
JMP 0x0046f32e
MOV ESI,0x1
INC EAX
ADD ECX,0x4
CMP EAX,0x6
JL 0x0046f318
JMP 0x0046f343
MOV EAX,dword ptr [ESP + 0x64]
MOV EBP,dword ptr [EAX + 0xf0]
FLD dword ptr [ESP + 0x68]
FCOMP dword ptr [0x004ad968]
MOV dword ptr [ESP + 0x14],0x0
MOV dword ptr [ESP + 0x18],0x0
FNSTSW AX
TEST AH,0x1
JNZ 0x0046f36c
MOV ECX,dword ptr [ESP + 0x68]
MOV dword ptr [ESP + 0x14],ECX
FLD dword ptr [ESP + 0x6c]
FCOMP dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x1
JNZ 0x0046f385
MOV EAX,dword ptr [ESP + 0x6c]
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,[0x0050c048]
TEST AH,0x1
JZ 0x0046f3b5
CMP dword ptr [0x0050c040],EDI
JZ 0x0046f3b5
MOV EAX,[0x00e98e94]
TEST AH,0x10
JZ 0x0046f3b5
MOV dword ptr [ESP + 0x14],0x3f800000
MOV dword ptr [ESP + 0x18],0x3f800000
MOV dword ptr [ESP + 0x10],EDI
CMP EBX,EDI
JZ 0x0046f434
MOV AL,byte ptr [EBX + 0x64]
FLD dword ptr [EBX + 0x18c]
FLD dword ptr [EBX + 0x18c]
TEST AL,0x8
JZ 0x0046f3dc
FXCH
FMUL dword ptr [0x004ad95c]
FXCH
FMUL dword ptr [0x004ad95c]
CMP EDX,EDI
JZ 0x0046f3ea
FXCH
FMUL dword ptr [0x004ad980]
FXCH
CMP ESI,EDI
JZ 0x0046f3f4
FMUL dword ptr [0x004ad980]
FLD ST0
FXCH ST2
FADD dword ptr [EBX + 0x330]
FXCH ST2
FADD dword ptr [EBX + 0x334]
FXCH ST2
FMUL dword ptr [0x004ad95c]
FXCH ST2
FMUL dword ptr [0x004ad95c]
FXCH ST2
FST dword ptr [ESP + 0x14]
FXCH ST2
FST dword ptr [ESP + 0x18]
FXCH ST2
FSTP dword ptr [EBX + 0x330]
FXCH
FSTP dword ptr [EBX + 0x334]
FSTP ST0
MOV ECX,dword ptr [ESP + 0x64]
MOV ESI,dword ptr [ECX + 0x70]
CMP ESI,EDI
JZ 0x0046f5a1
CALL 0x004816b0
MOV dword ptr [ESP + 0x68],EAX
FILD dword ptr [ESP + 0x68]
FMUL dword ptr [0x004ad970]
FMUL dword ptr [0x004ada1c]
FSUB dword ptr [0x004ad9c0]
FSTP dword ptr [ESP + 0x68]
CALL 0x004816b0
FLD qword ptr [0x00e22a38]
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004ad97c]
MOV dword ptr [ESP + 0x60],0x3f800000
FMUL dword ptr [0x004ada20]
FNSTSW AX
TEST AH,0x1
FSTP dword ptr [ESP + 0x6c]
JZ 0x0046f4ac
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x68]
CMP EBX,EDI
FSTP dword ptr [ESP + 0x68]
JNZ 0x0046f4ac
MOV EDX,dword ptr [ESP + 0x14]
MOV dword ptr [ESP + 0x60],EDX
LEA EAX,[EBP + -0x4]
CMP EAX,0xc
JA 0x0046f500
XOR ECX,ECX
MOV CL,byte ptr [EAX + 0x46f968]
JMP dword ptr [ECX*0x4 + 0x46f950]
MOV dword ptr [ESP + 0x6c],0x0
JMP 0x0046f500
MOV dword ptr [ESP + 0x68],0x3f800000
MOV dword ptr [ESP + 0x6c],0x0
CALL 0x004816b0
MOV dword ptr [ESP + 0x60],EAX
FILD dword ptr [ESP + 0x60]
FMUL dword ptr [0x004ad970]
FMUL dword ptr [0x004ada24]
FSUB dword ptr [0x004ada28]
FSTP dword ptr [ESP + 0x60]
MOV EDX,dword ptr [ESP + 0x6c]
LEA EAX,[ESP + 0x1c]
PUSH EDX
PUSH EDI
PUSH EDI
PUSH EAX
CALL 0x00431020
MOV EDI,dword ptr [ESP + 0x78]
ADD ESP,0x10
LEA ECX,[ESP + 0x1c]
LEA EDX,[ESP + 0x1c]
PUSH ECX
PUSH EDI
PUSH EDX
CALL 0x0042fa50
ADD ESP,0xc
LEA EAX,[ESP + 0x3c]
LEA ECX,[ESP + 0x3c]
PUSH EAX
PUSH EDI
PUSH ECX
CALL 0x0042fa50
ADD ESP,0xc
TEST EBX,EBX
JZ 0x0046f556
LEA EDX,[ESP + 0x1c]
LEA EAX,[EBX + 0xa50]
PUSH EDX
PUSH EAX
CALL 0x0044bb10
ADD ESP,0x8
LEA ECX,[ESP + 0x1c]
PUSH ECX
PUSH ESI
CALL 0x00431640
ADD ESP,0x8
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH ESI
CALL 0x00431a50
FLD dword ptr [ESP + 0x74]
FMUL dword ptr [0x004ada2c]
ADD ESP,0x14
CALL 0x0049ed20
PUSH EAX
PUSH 0xff
PUSH 0xff
PUSH 0xff
PUSH 0x0
PUSH 0x0
PUSH ESI
CALL 0x0042b640
ADD ESP,0x1c
MOV EDX,dword ptr [ESP + 0x64]
MOV ESI,dword ptr [EDX + 0xa8]
TEST ESI,ESI
JZ 0x0046f713
CALL 0x004816b0
MOV dword ptr [ESP + 0x68],EAX
FILD dword ptr [ESP + 0x68]
FMUL dword ptr [0x004ad970]
FMUL dword ptr [0x004ada1c]
FSUB dword ptr [0x004ad9c0]
FSTP dword ptr [ESP + 0x68]
CALL 0x004816b0
FLD qword ptr [0x00e22a38]
FLD dword ptr [ESP + 0x18]
FCOMP qword ptr [0x004ada30]
MOV dword ptr [ESP + 0x60],0x3f800000
FMUL dword ptr [0x004ada20]
FNSTSW AX
TEST AH,0x1
FSTP dword ptr [ESP + 0x6c]
JZ 0x0046f61c
FLD dword ptr [ESP + 0x18]
FMUL dword ptr [ESP + 0x68]
TEST EBX,EBX
FSTP dword ptr [ESP + 0x68]
JNZ 0x0046f61c
MOV EAX,dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x60],EAX
LEA EAX,[EBP + -0x4]
CMP EAX,0xc
JA 0x0046f670
XOR ECX,ECX
MOV CL,byte ptr [EAX + 0x46f990]
JMP dword ptr [ECX*0x4 + 0x46f978]
MOV dword ptr [ESP + 0x6c],0x0
JMP 0x0046f670
MOV dword ptr [ESP + 0x68],0x3f800000
MOV dword ptr [ESP + 0x6c],0x0
CALL 0x004816b0
MOV dword ptr [ESP + 0x60],EAX
FILD dword ptr [ESP + 0x60]
FMUL dword ptr [0x004ad970]
FMUL dword ptr [0x004ada24]
FSUB dword ptr [0x004ada28]
FSTP dword ptr [ESP + 0x60]
MOV EDX,dword ptr [ESP + 0x6c]
LEA EAX,[ESP + 0x1c]
PUSH EDX
PUSH 0x0
PUSH 0x0
PUSH EAX
CALL 0x00431020
MOV EDI,dword ptr [ESP + 0x78]
ADD ESP,0x10
LEA ECX,[ESP + 0x1c]
LEA EDX,[ESP + 0x1c]
PUSH ECX
PUSH EDI
PUSH EDX
CALL 0x0042fa50
ADD ESP,0xc
LEA EAX,[ESP + 0x3c]
LEA ECX,[ESP + 0x3c]
PUSH EAX
PUSH EDI
PUSH ECX
CALL 0x0042fa50
ADD ESP,0xc
TEST EBX,EBX
JZ 0x0046f6c8
LEA EDX,[ESP + 0x1c]
LEA EAX,[EBX + 0xa50]
PUSH EDX
PUSH EAX
CALL 0x0044bb10
ADD ESP,0x8
LEA ECX,[ESP + 0x1c]
PUSH ECX
PUSH ESI
CALL 0x00431640
ADD ESP,0x8
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH ESI
CALL 0x00431a50
FLD dword ptr [ESP + 0x74]
FMUL dword ptr [0x004ada2c]
ADD ESP,0x14
CALL 0x0049ed20
PUSH EAX
PUSH 0xff
PUSH 0xff
PUSH 0xff
PUSH 0x0
PUSH 0x0
PUSH ESI
CALL 0x0042b640
ADD ESP,0x1c
MOV EDX,dword ptr [ESP + 0x64]
MOV ESI,dword ptr [EDX + 0x74]
TEST ESI,ESI
JZ 0x0046f82c
PUSH ESI
CALL 0x0042b560
ADD ESP,0x4
MOV EDI,EAX
CALL 0x004816b0
CALL 0x004816b0
MOV dword ptr [ESP + 0x68],EAX
FILD dword ptr [ESP + 0x68]
FMUL dword ptr [0x004ad970]
FMUL dword ptr [0x004ad97c]
FSUB dword ptr [0x004ad9c0]
FSTP dword ptr [ESP + 0x68]
CALL 0x004816b0
FLD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x68]
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
FSTP dword ptr [ESP + 0x68]
JZ 0x0046f791
CALL 0x004816b0
MOV dword ptr [ESP + 0x68],EAX
FILD dword ptr [ESP + 0x68]
FMUL dword ptr [0x004ad970]
FMUL dword ptr [0x004ada38]
FSUB dword ptr [0x004ada3c]
FSTP dword ptr [ESP + 0x68]
CALL 0x004816b0
PUSH 0x0
PUSH 0x0
LEA EAX,[ESP + 0x24]
PUSH 0x0
PUSH EAX
CALL 0x00431020
MOV EDX,dword ptr [ESP + 0x78]
ADD ESP,0x10
LEA ECX,[ESP + 0x2c]
LEA EAX,[ESP + 0x2c]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042fa50
ADD ESP,0xc
TEST EBX,EBX
JZ 0x0046f7d8
LEA ECX,[ESP + 0x1c]
LEA EDX,[EBX + 0xa90]
PUSH ECX
PUSH EDX
CALL 0x0044bb10
ADD ESP,0x8
LEA EAX,[ESP + 0x1c]
PUSH EAX
PUSH ESI
CALL 0x00431640
ADD ESP,0x8
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH ESI
CALL 0x00431a50
ADD ESP,0x14
TEST EDI,EDI
JZ 0x0046f82c
PUSH 0xff
PUSH 0xff
PUSH 0xff
PUSH 0xff
PUSH 0x0
PUSH 0x0
PUSH EDI
CALL 0x0042b5e0
ADD ESP,0x1c
PUSH 0x0
PUSH 0x3de147ae
PUSH EDI
CALL 0x0044fc00
ADD ESP,0xc
MOV ECX,dword ptr [ESP + 0x64]
MOV ESI,dword ptr [ECX + 0xac]
TEST ESI,ESI
JZ 0x0046f948
PUSH ESI
CALL 0x0042b560
ADD ESP,0x4
MOV EDI,EAX
CALL 0x004816b0
CALL 0x004816b0
MOV dword ptr [ESP + 0x64],EAX
FILD dword ptr [ESP + 0x64]
FMUL dword ptr [0x004ad970]
FMUL dword ptr [0x004ad97c]
FSUB dword ptr [0x004ad9c0]
FSTP dword ptr [ESP + 0x68]
CALL 0x004816b0
FLD dword ptr [ESP + 0x18]
FMUL dword ptr [ESP + 0x68]
MOV EAX,dword ptr [ESP + 0x10]
TEST EAX,EAX
FSTP dword ptr [ESP + 0x68]
JZ 0x0046f8ad
CALL 0x004816b0
MOV dword ptr [ESP + 0x64],EAX
FILD dword ptr [ESP + 0x64]
FMUL dword ptr [0x004ad970]
FMUL dword ptr [0x004ada38]
FSUB dword ptr [0x004ada3c]
FSTP dword ptr [ESP + 0x68]
CALL 0x004816b0
PUSH 0x0
PUSH 0x0
LEA EDX,[ESP + 0x24]
PUSH 0x0
PUSH EDX
CALL 0x00431020
MOV ECX,dword ptr [ESP + 0x78]
ADD ESP,0x10
LEA EAX,[ESP + 0x2c]
LEA EDX,[ESP + 0x2c]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042fa50
ADD ESP,0xc
TEST EBX,EBX
JZ 0x0046f8f4
LEA EAX,[ESP + 0x1c]
ADD EBX,0xe10
PUSH EAX
PUSH EBX
CALL 0x0044bb10
ADD ESP,0x8
LEA ECX,[ESP + 0x1c]
PUSH ECX
PUSH ESI
CALL 0x00431640
ADD ESP,0x8
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH ESI
CALL 0x00431a50
ADD ESP,0x14
TEST EDI,EDI
JZ 0x0046f948
PUSH 0xff
PUSH 0xff
PUSH 0xff
PUSH 0xff
PUSH 0x0
PUSH 0x0
PUSH EDI
CALL 0x0042b5e0
ADD ESP,0x1c
PUSH 0x0
PUSH 0x3de147ae
PUSH EDI
CALL 0x0044fc00
ADD ESP,0xc
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x4c
RET