; FUN_0042cca0
MOV AL,[0x004b9520]
SUB ESP,0x3c
TEST AL,AL
JZ 0x0042d2e6
PUSH EDI
PUSH ESI
PUSH EBP
LEA EAX,[ESP + 0x40]
PUSH EBX
LEA ECX,[ESP + 0x48]
PUSH EAX
LEA EDX,[ESP + 0x40]
PUSH ECX
LEA EAX,[ESP + 0x40]
PUSH EDX
LEA ECX,[ESP + 0x30]
PUSH EAX
PUSH ECX
CALL 0x00431c40
MOV EDX,dword ptr [ESP + 0x38]
ADD ESP,0x14
LEA EAX,[EDX + -0x1]
CMP EAX,0x3
JA 0x0042cd10
JMP dword ptr [EAX*0x4 + 0x42d314]
MOV EAX,[0x004b94b0]
JMP 0x0042cd0c
MOV ECX,dword ptr [0x004b94b4]
MOV dword ptr [ESP + 0x1c],ECX
JMP 0x0042cd10
MOV EDX,dword ptr [0x004b94bc]
MOV dword ptr [ESP + 0x1c],EDX
JMP 0x0042cd10
MOV EAX,[0x004b94b8]
MOV dword ptr [ESP + 0x1c],EAX
MOV ECX,dword ptr [0x004b9534]
XOR EAX,EAX
TEST ECX,ECX
MOV dword ptr [ESP + 0x18],EAX
JLE 0x0042d2dd
MOV EDI,dword ptr [ESP + 0x50]
MOV EBX,0xe9a000
MOV EBP,0xe9a280
MOV dword ptr [ESP + 0x34],EBX
MOV dword ptr [ESP + 0x20],EBP
MOV ESI,0xe99868
CMP dword ptr [EBP],-0x1
JZ 0x0042d2b9
MOV CL,byte ptr [EAX + 0xe9a960]
TEST CL,CL
JNZ 0x0042d2ea
MOV CX,word ptr [EBP]
PUSH 0x0
PUSH ECX
CALL 0x004285d0
ADD ESP,0x8
CALL 0x004816b0
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FMUL dword ptr [0x004ac600]
FCOMP dword ptr [0x004ac58c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042cefe
FLD dword ptr [0x0050c6e8]
FLD dword ptr [0x0050c6ec]
FLD dword ptr [0x0050c6f0]
FXCH ST2
FSTP dword ptr [ESI + -0x8]
MOV EDX,dword ptr [ESP + 0x18]
FSTP dword ptr [ESI + -0x4]
MOV byte ptr [EDX + 0xe9a960],0x1
FSTP dword ptr [ESI]
CALL 0x004816b0
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FMUL dword ptr [0x004ac600]
FMUL dword ptr [0x004ac604]
FSUB dword ptr [0x004ac5d0]
FMUL dword ptr [EDI + 0x70]
FADD dword ptr [ESI + -0x8]
FSTP dword ptr [ESI + -0x8]
CALL 0x004816b0
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FMUL dword ptr [0x004ac600]
FMUL dword ptr [0x004ac604]
FSUB dword ptr [0x004ac5d0]
FMUL dword ptr [EDI + 0x74]
FADD dword ptr [ESI + -0x4]
FSTP dword ptr [ESI + -0x4]
CALL 0x004816b0
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FMUL dword ptr [0x004ac600]
FMUL dword ptr [0x004ac604]
FSUB dword ptr [0x004ac5d0]
FMUL dword ptr [EDI + 0x78]
FADD dword ptr [ESI]
FSTP dword ptr [ESI]
CALL 0x004816b0
FLD dword ptr [EDI + 0x80]
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FMUL dword ptr [0x004ac600]
FMUL dword ptr [0x004ac608]
FSUB dword ptr [0x004ac60c]
FXCH
FMUL ST1
FADD dword ptr [ESI + -0x8]
FSTP dword ptr [ESI + -0x8]
FLD dword ptr [EDI + 0x84]
FMUL ST1
FADD dword ptr [ESI + -0x4]
FSTP dword ptr [ESI + -0x4]
FLD dword ptr [EDI + 0x88]
FMUL ST1
FADD dword ptr [ESI]
FSTP dword ptr [ESI]
FSTP ST0
CALL 0x004816b0
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FMUL dword ptr [0x004ac600]
FMUL dword ptr [0x004ac610]
FSUB dword ptr [0x004ac60c]
FMUL dword ptr [EDI + 0x90]
FADD dword ptr [ESI + -0x8]
FSTP dword ptr [ESI + -0x8]
CALL 0x004816b0
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FMUL dword ptr [0x004ac600]
FMUL dword ptr [0x004ac610]
FSUB dword ptr [0x004ac60c]
FMUL dword ptr [EDI + 0x94]
FADD dword ptr [ESI + -0x4]
FSTP dword ptr [ESI + -0x4]
CALL 0x004816b0
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FMUL dword ptr [0x004ac600]
FMUL dword ptr [0x004ac610]
FSUB dword ptr [0x004ac60c]
FMUL dword ptr [EDI + 0x98]
MOV dword ptr [EBX],0xbf800000
MOV dword ptr [EBX + 0x4],0xbf800000
FADD dword ptr [ESI]
FSTP dword ptr [ESI]
MOV EAX,dword ptr [ESP + 0x18]
MOV CL,byte ptr [EAX + 0xe9a960]
TEST CL,CL
JZ 0x0042d2b9
CMP CL,0x2
JNZ 0x0042cf1c
MOV byte ptr [EAX + 0xe9a960],0x0
LEA EAX,[ESP + 0x2c]
PUSH 0x0
LEA ECX,[ESP + 0x2c]
PUSH EAX
LEA EDX,[ESP + 0x1c]
PUSH ECX
LEA EAX,[ESP + 0x1c]
PUSH EDX
LEA ECX,[ESI + -0x8]
PUSH EAX
PUSH ECX
PUSH EDI
CALL 0x0042b710
FLD dword ptr [ESP + 0x2c]
FCOMP dword ptr [0x004ac5b8]
ADD ESP,0x1c
FNSTSW AX
TEST AH,0x41
JNZ 0x0042d026
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004ac5b8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042d026
FILD dword ptr [0x00ec86c4]
FCOMP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042d026
FILD dword ptr [0x00ec85e8]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042d026
FLD dword ptr [ESP + 0x14]
CALL 0x0049ed20
MOV EBP,dword ptr [ESP + 0x38]
MOV EDX,dword ptr [ESP + 0x3c]
IMUL EBP,EAX
FLD dword ptr [ESP + 0x10]
ADD EBP,EDX
CALL 0x0049ed20
MOV ECX,dword ptr [ESP + 0x24]
ADD EBP,EAX
FLD dword ptr [0x004ac5b8]
TEST ECX,ECX
JLE 0x0042cff5
LEA EDX,[ECX + EBP*0x1]
LEA EAX,[ECX*0x8 + 0x0]
MOV EBX,ECX
XOR ECX,ECX
LEA EBP,[EAX + -0x8]
MOV CL,byte ptr [EDX + -0x1]
SUB EAX,0x8
MOV dword ptr [ESP + 0x50],ECX
MOV ECX,EBP
MOV EBP,dword ptr [ESP + 0x50]
SHL EBP,CL
DEC EDX
DEC EBX
MOV dword ptr [ESP + 0x50],EBP
FIADD dword ptr [ESP + 0x50]
JNZ 0x0042cfce
MOV EBX,dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x28]
FCOMP dword ptr [0x004ac5b8]
FMUL dword ptr [ESP + 0x1c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042d081
FLD dword ptr [ESP + 0x28]
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JNZ 0x0042d083
MOV EDX,dword ptr [ESP + 0x18]
MOV byte ptr [EDX + 0xe9a960],0x2
JMP 0x0042d083
MOV ECX,dword ptr [0x00ec86c4]
MOV EAX,ECX
NEG EAX
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FCOMP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x41
JZ 0x0042d074
ADD ECX,ECX
MOV dword ptr [ESP + 0x50],ECX
FILD dword ptr [ESP + 0x50]
FCOMP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x1
JNZ 0x0042d074
MOV EDX,dword ptr [0x00ec85e8]
LEA EAX,[EDX + EDX*0x1]
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FCOMP dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JZ 0x0042d087
MOV ECX,dword ptr [ESP + 0x18]
MOV byte ptr [ECX + 0xe9a960],0x0
JMP 0x0042d087
FSTP ST0
MOV EBP,dword ptr [ESP + 0x20]
FLD dword ptr [ESP + 0x2c]
FCOMP dword ptr [0x004ac614]
FLD dword ptr [0x004ac5f4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042d0a2
FDIV dword ptr [ESP + 0x2c]
FCOM dword ptr [0x004ac614]
FNSTSW AX
TEST AH,0x1
JZ 0x0042d0b7
FSTP ST0
FLD dword ptr [0x004ac614]
FLD dword ptr [0x004b952c]
FCOMP dword ptr [0x004ac5f4]
FMUL dword ptr [0x004ac618]
FNSTSW AX
TEST AH,0x41
FST dword ptr [ESP + 0x50]
JNZ 0x0042d0eb
FCOMP dword ptr [0x004ac61c]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042d12a
MOV dword ptr [ESP + 0x50],0x3d23d70a
JMP 0x0042d12a
FLD dword ptr [0x004b952c]
FCOMP dword ptr [0x004ac620]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042d115
FCOMP dword ptr [0x004ac5ec]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042d12a
MOV dword ptr [ESP + 0x50],0x3dcccccd
JMP 0x0042d12a
FCOMP dword ptr [0x004ac618]
FNSTSW AX
TEST AH,0x41
JNZ 0x0042d12a
MOV dword ptr [ESP + 0x50],0x3e19999a
MOVSX DX,byte ptr [0x004b9527]
MOV AX,word ptr [EBP]
PUSH 0x1
PUSH EAX
MOV word ptr [ESP + 0x3c],DX
CALL 0x004285d0
FLD dword ptr [ESP + 0x1c]
ADD ESP,0x8
CALL 0x0049ed20
FLD dword ptr [ESP + 0x10]
PUSH EAX
CALL 0x0049ed20
MOV CX,word ptr [EBP]
PUSH EAX
PUSH ECX
CALL 0x0042bb00
FLD dword ptr [EBX]
FCOMP dword ptr [0x004ac5b8]
ADD ESP,0xc
FNSTSW AX
TEST AH,0x1
JZ 0x0042d187
MOV DX,word ptr [EBP]
PUSH 0x0
PUSH EDX
CALL 0x004285d0
JMP 0x0042d24d
FLD dword ptr [0x004ac57c]
FSUB dword ptr [0x004b9530]
FLD dword ptr [ESP + 0x10]
FLD dword ptr [0x004b9530]
FMUL dword ptr [EBX]
FXCH
FMUL ST2
FXCH
FADDP
CALL 0x0049ed20
FLD dword ptr [EBX + 0x4]
FLD dword ptr [ESP + 0x14]
FMUL ST2
FXCH
FMUL dword ptr [0x004b9530]
MOV dword ptr [ESP + 0x30],EAX
FADDP
CALL 0x0049ed20
FSTP ST0
FILD dword ptr [ESP + 0x30]
MOV dword ptr [ESP + 0x20],EAX
FSUB dword ptr [ESP + 0x10]
FCOM dword ptr [0x004ac5b8]
FNSTSW AX
TEST AH,0x1
JZ 0x0042d1e5
FCHS
CALL 0x0049ed20
FILD dword ptr [ESP + 0x20]
MOV dword ptr [ESP + 0x40],EAX
FSUB dword ptr [ESP + 0x14]
FCOM dword ptr [0x004ac5b8]
FNSTSW AX
TEST AH,0x1
JZ 0x0042d205
FCHS
CALL 0x0049ed20
CMP dword ptr [ESP + 0x40],0x3
JGE 0x0042d227
CMP EAX,0x3
JGE 0x0042d227
MOV AX,word ptr [EBP]
PUSH 0x4000
PUSH EAX
CALL 0x00428800
JMP 0x0042d24d
MOV ECX,dword ptr [ESP + 0x20]
MOV EDX,dword ptr [ESP + 0x30]
MOV AX,word ptr [EBP]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042d330
MOV CX,word ptr [EBP]
ADD ESP,0xc
PUSH 0x4000
PUSH ECX
CALL 0x004287e0
MOV EAX,dword ptr [ESP + 0x58]
MOV DX,word ptr [EBP]
ADD ESP,0x8
PUSH EAX
PUSH EAX
PUSH EDX
CALL 0x004286f0
ADD ESP,0xc
CALL 0x00445690
TEST EAX,EAX
JZ 0x0042d286
MOVSX EAX,word ptr [ESP + 0x34]
MOV dword ptr [ESP + 0x50],EAX
FILD dword ptr [ESP + 0x50]
FMUL dword ptr [0x004ac568]
CALL 0x0049ed20
JMP 0x0042d28a
MOV EAX,dword ptr [ESP + 0x34]
MOV CL,byte ptr [0x004b9526]
PUSH EAX
MOV EAX,[0x004b9524]
PUSH ECX
MOV DL,AH
PUSH EDX
PUSH EAX
MOV AX,word ptr [EBP]
PUSH EAX
CALL 0x00428740
MOV ECX,dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x28]
MOV EAX,dword ptr [ESP + 0x2c]
MOV dword ptr [EBX],ECX
ADD ESP,0x14
MOV dword ptr [EBX + 0x4],EDX
MOV ECX,dword ptr [0x004b9534]
INC EAX
ADD ESI,0xc
ADD EBP,0x4
ADD EBX,0x8
CMP EAX,ECX
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [ESP + 0x20],EBP
MOV dword ptr [ESP + 0x34],EBX
JL 0x0042cd3f
CALL 0x00431cd0
POP EBX
POP EBP
POP ESI
POP EDI
ADD ESP,0x3c
RET
FLD qword ptr [0x00e22a40]
FLD dword ptr [0x004b952c]
FMUL ST1
FLD dword ptr [0x004b9528]
FMUL ST2
FXCH
FSUBR dword ptr [ESI]
FSTP dword ptr [ESI]
FSUBR dword ptr [ESI + -0x8]
FSTP dword ptr [ESI + -0x8]
FSTP ST0
JMP 0x0042cf02
