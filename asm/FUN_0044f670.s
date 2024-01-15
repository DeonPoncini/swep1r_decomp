; FUN_0044f670
SUB ESP,0x48
PUSH EBX
MOV EBX,dword ptr [ESP + 0x70]
PUSH EBP
PUSH ESI
TEST BL,0x8
PUSH EDI
JNZ 0x0044fbed
FLD dword ptr [ESP + 0x68]
FCOMP dword ptr [0x004acce8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044fbed
FLD dword ptr [ESP + 0x6c]
FCOMP dword ptr [0x004acce8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0044fbed
FLD dword ptr [ESP + 0x68]
FCOMP dword ptr [0x004accec]
FNSTSW AX
TEST AH,0x40
JZ 0x0044f6d5
FLD dword ptr [ESP + 0x6c]
FCOMP dword ptr [0x004accec]
FNSTSW AX
TEST AH,0x40
JZ 0x0044f6d5
OR EBX,0x20
JMP 0x0044f6d8
AND EBX,0xffffffdf
MOV ESI,dword ptr [ESP + 0x5c]
MOV dword ptr [ESP + 0x7c],EBX
TEST ESI,ESI
JZ 0x0044fbed
MOV EBP,dword ptr [ESI + 0x10]
MOV EAX,EBX
AND EAX,0x2000
MOV dword ptr [ESP + 0x18],EBP
MOV dword ptr [ESP + 0x10],EAX
MOV EAX,EBX
AND EAX,0x4000
TEST EBX,0x800000
MOV dword ptr [ESP + 0x14],EAX
JZ 0x0044f726
MOV EDX,dword ptr [ESP + 0x70]
LEA EAX,[ESP + 0x24]
LEA ECX,[ESP + 0x28]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0042f380
ADD ESP,0xc
JMP 0x0044f736
MOV dword ptr [ESP + 0x28],0x0
MOV dword ptr [ESP + 0x24],0x3f800000
TEST EBX,0x20000
JZ 0x0044f77b
MOVSX ECX,word ptr [ESI + 0x2]
MOVSX EAX,word ptr [ESI]
MOV dword ptr [ESP + 0x3c],ECX
MOV dword ptr [ESP + 0x70],EAX
FILD dword ptr [ESP + 0x3c]
FILD dword ptr [ESP + 0x70]
FMUL dword ptr [0x004accc8]
FXCH
FMUL dword ptr [0x004accc8]
FXCH
FMUL dword ptr [ESP + 0x68]
FXCH
FMUL dword ptr [ESP + 0x6c]
FXCH
FSTP dword ptr [ESP + 0x20]
FSTP dword ptr [ESP + 0x1c]
JMP 0x0044f78b
MOV dword ptr [ESP + 0x20],0x0
MOV dword ptr [ESP + 0x1c],0x0
MOV EDX,dword ptr [ESP + 0x8c]
MOV EAX,dword ptr [ESP + 0x88]
MOV ECX,dword ptr [ESP + 0x84]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x84]
PUSH EAX
PUSH ECX
PUSH EDX
PUSH 0x0
PUSH 0x0
MOV dword ptr [0x0050c748],EBX
CALL 0x0044e290
FLD dword ptr [0x004accf4]
FDIV dword ptr [ESP + 0x80]
ADD ESP,0x18
FSUBR dword ptr [0x004accc8]
CALL 0x0049ed20
FLD dword ptr [0x004accf4]
FDIV dword ptr [ESP + 0x6c]
MOV EDI,EAX
MOV dword ptr [ESP + 0x50],EDI
FSUBR dword ptr [0x004accc8]
CALL 0x0049ed20
MOV ECX,EBX
MOV dword ptr [ESP + 0x40],EAX
AND ECX,0x5000000
MOV dword ptr [ESP + 0x48],ECX
MOV ECX,0x400
MOV dword ptr [ESP + 0x30],ECX
JNZ 0x0044f80f
MOV dword ptr [ESP + 0x30],EDI
AND EBX,0xa000000
MOV dword ptr [ESP + 0x2c],ECX
MOV dword ptr [ESP + 0x44],EBX
JNZ 0x0044f823
MOV dword ptr [ESP + 0x2c],EAX
TEST EBP,EBP
JZ 0x0044fbed
OR EBP,0xffffffff
OR EBX,0xffffffff
CMP word ptr [ESI + 0xc],0x0
MOV EAX,0x2328
MOV dword ptr [ESP + 0x84],EBP
MOV dword ptr [ESP + 0x8c],EAX
MOV dword ptr [ESP + 0x70],EAX
MOV dword ptr [ESP + 0x3c],0x0
JLE 0x0044fbed
MOV EDI,dword ptr [ESP + 0x64]
JMP 0x0044f865
MOV ESI,dword ptr [ESP + 0x5c]
MOV ECX,dword ptr [ESP + 0x18]
MOV AX,word ptr [ECX]
TEST AX,AX
JLE 0x0044fbed
CMP word ptr [ESP + 0x10],0x0
MOVSX EDX,AX
JZ 0x0044f892
MOV EBP,dword ptr [ESP + 0x8c]
SUB EBP,EDX
MOV dword ptr [ESP + 0x84],EBP
JMP 0x0044f89d
LEA EAX,[EBP + EDX*0x1]
MOV dword ptr [ESP + 0x8c],EAX
TEST EBP,EBP
JL 0x0044f8b1
MOVSX EAX,word ptr [ESI]
CMP dword ptr [ESP + 0x8c],EAX
JLE 0x0044fa72
CMP EBX,-0x1
JNZ 0x0044f910
CMP word ptr [ESP + 0x14],0x0
JZ 0x0044f8ef
MOV CX,word ptr [ECX + 0x2]
MOVSX EAX,word ptr [ESI + 0x2]
TEST CX,CX
JZ 0x0044f8de
MOVSX ECX,CX
MOV EBX,EAX
SUB EBX,ECX
MOV dword ptr [ESP + 0x88],EBX
JMP 0x0044f96d
MOVSX ECX,word ptr [ESI + 0xe]
MOV EBX,EAX
SUB EBX,ECX
MOV dword ptr [ESP + 0x88],EBX
JMP 0x0044f96d
MOV AX,word ptr [ECX + 0x2]
XOR EBX,EBX
TEST AX,AX
MOV dword ptr [ESP + 0x88],EBX
JZ 0x0044f906
MOVSX EAX,AX
JMP 0x0044f96d
MOVSX ECX,word ptr [ESI + 0xe]
MOV dword ptr [ESP + 0x70],ECX
JMP 0x0044f971
CMP word ptr [ESP + 0x14],0x0
JZ 0x0044f942
MOV AX,word ptr [ECX + 0x2]
MOV dword ptr [ESP + 0x70],EBX
TEST AX,AX
JZ 0x0044f933
MOVSX EAX,AX
SUB EBX,EAX
MOV dword ptr [ESP + 0x88],EBX
JMP 0x0044f971
MOVSX ECX,word ptr [ESI + 0xe]
SUB EBX,ECX
MOV dword ptr [ESP + 0x88],EBX
JMP 0x0044f971
MOV AX,word ptr [ECX + 0x2]
MOV EBX,dword ptr [ESP + 0x70]
TEST AX,AX
MOV dword ptr [ESP + 0x88],EBX
JZ 0x0044f963
MOVSX EAX,AX
MOV ECX,EBX
ADD ECX,EAX
MOV dword ptr [ESP + 0x70],ECX
JMP 0x0044f971
MOVSX ECX,word ptr [ESI + 0xe]
MOV EAX,dword ptr [ESP + 0x70]
ADD EAX,ECX
MOV dword ptr [ESP + 0x70],EAX
TEST EBX,EBX
JL 0x0044fbed
MOVSX EAX,word ptr [ESI + 0x2]
CMP dword ptr [ESP + 0x70],EAX
JG 0x0044fbed
CMP word ptr [ESP + 0x10],0x0
JZ 0x0044f9a6
MOVSX EAX,word ptr [ESI]
MOV EBP,EAX
MOV dword ptr [ESP + 0x8c],EAX
SUB EBP,EDX
MOV dword ptr [ESP + 0x84],EBP
JMP 0x0044f9b6
XOR EBP,EBP
MOV dword ptr [ESP + 0x8c],EDX
MOV dword ptr [ESP + 0x84],EBP
MOVSX ECX,word ptr [ESP + 0x64]
FILD dword ptr [ESP + 0x88]
FILD dword ptr [ESP + 0x70]
MOV dword ptr [ESP + 0x88],ECX
FILD dword ptr [ESP + 0x88]
FXCH ST2
FMUL dword ptr [ESP + 0x6c]
FXCH ST2
FSUB dword ptr [ESP + 0x1c]
FXCH
FMUL dword ptr [ESP + 0x6c]
FXCH ST2
FADD ST0,ST1
FXCH ST2
FADD ST0,ST1
FXCH ST2
FST dword ptr [ESP + 0x88]
FSUB dword ptr [0x004accf8]
FXCH ST2
FSTP dword ptr [ESP + 0x34]
FXCH
CALL 0x0049ed20
CMP word ptr [ESP + 0x14],0x0
MOV dword ptr [ESP + 0x80],EAX
FSTP ST0
JNZ 0x0044fa27
MOV EDI,dword ptr [ESP + 0x70]
SUB EDI,EBX
DEC EDI
SHL EDI,0x5
JMP 0x0044fa72
FILD dword ptr [ESP + 0x80]
FSUB dword ptr [ESP + 0x88]
FIMUL dword ptr [ESP + 0x40]
CALL 0x0049ed20
MOV EDI,EAX
MOV EAX,dword ptr [ESP + 0x7c]
ADD EDI,0x10
SAR EDI,0x5
TEST AH,0x1
JZ 0x0044fa52
ADD EDI,0x10
MOV EAX,dword ptr [ESP + 0x44]
TEST EAX,EAX
JZ 0x0044fa72
FLD dword ptr [ESP + 0x34]
FSUB dword ptr [ESP + 0x88]
FMUL dword ptr [0x004accfc]
CALL 0x0049ed20
ADD EDI,EAX
MOVSX EDX,word ptr [ESP + 0x60]
FILD dword ptr [ESP + 0x84]
FILD dword ptr [ESP + 0x8c]
MOV dword ptr [ESP + 0x80],EDX
FILD dword ptr [ESP + 0x80]
FXCH ST2
FMUL dword ptr [ESP + 0x68]
FXCH ST2
FSUB dword ptr [ESP + 0x20]
FXCH
FMUL dword ptr [ESP + 0x68]
FXCH ST2
FADD ST0,ST1
FXCH ST2
FADD ST0,ST1
FXCH ST2
FST dword ptr [ESP + 0x80]
FSUB dword ptr [0x004accf8]
FXCH ST2
FSTP dword ptr [ESP + 0x38]
FXCH
CALL 0x0049ed20
CMP word ptr [ESP + 0x10],0x0
MOV dword ptr [ESP + 0x4c],EAX
FSTP ST0
JZ 0x0044fb06
MOV ESI,dword ptr [ESP + 0x8c]
MOV EAX,dword ptr [ESP + 0x48]
SUB ESI,EBP
DEC ESI
SHL ESI,0x5
TEST EAX,EAX
JZ 0x0044fb2e
FLD dword ptr [ESP + 0x38]
FSUB dword ptr [ESP + 0x80]
FMUL dword ptr [0x004acd00]
CALL 0x0049ed20
ADD ESI,EAX
JMP 0x0044fb2e
FILD dword ptr [ESP + 0x4c]
FSUB dword ptr [ESP + 0x80]
FIMUL dword ptr [ESP + 0x50]
CALL 0x0049ed20
MOV ESI,EAX
MOV EAX,dword ptr [ESP + 0x7c]
ADD ESI,0x10
SAR ESI,0x5
TEST AH,0x1
JZ 0x0044fb2e
ADD ESI,0x10
MOV EAX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [EAX + 0x4]
TEST ECX,ECX
JZ 0x0044fbad
MOV ECX,dword ptr [ESP + 0x7c]
MOV EDX,dword ptr [ESP + 0x24]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x2c]
PUSH EDX
XOR EDX,EDX
CMP word ptr [ESP + 0x1c],DX
PUSH ECX
MOV ECX,dword ptr [ESP + 0x1c]
SETZ DL
PUSH EDX
MOV EDX,dword ptr [ESP + 0x3c]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x44]
PUSH EDX
PUSH ECX
MOVSX EDX,word ptr [ESP + 0x94]
MOVSX ECX,word ptr [ESP + 0x90]
PUSH EDI
PUSH ESI
PUSH EDX
MOV EDX,dword ptr [ESP + 0x5c]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x64]
PUSH EDX
MOV EDX,dword ptr [ESP + 0xb8]
PUSH ECX
MOV ECX,dword ptr [ESP + 0xb4]
PUSH EDX
MOV EDX,dword ptr [ESP + 0x94]
PUSH ECX
PUSH EAX
LEA EAX,[ESP + 0x94]
PUSH EDX
PUSH EAX
CALL 0x0044f160
MOV EAX,dword ptr [ESP + 0x60]
ADD ESP,0x48
CMP word ptr [ESP + 0x10],0x0
JZ 0x0044fbc1
MOVSX ECX,word ptr [EAX]
SUB dword ptr [ESP + 0x8c],ECX
JMP 0x0044fbcd
MOVSX EDX,word ptr [EAX]
ADD EBP,EDX
MOV dword ptr [ESP + 0x84],EBP
MOV ECX,dword ptr [ESP + 0x3c]
ADD EAX,0x8
MOV dword ptr [ESP + 0x18],EAX
MOV EAX,dword ptr [ESP + 0x5c]
INC ECX
MOVSX EDX,word ptr [EAX + 0xc]
CMP ECX,EDX
MOV dword ptr [ESP + 0x3c],ECX
JL 0x0044f861
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x48
RET
