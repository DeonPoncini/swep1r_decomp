; FUN_0048c950
PUSH EBP
MOV EBP,ESP
SUB ESP,0x34
MOV EAX,dword ptr [EBP + 0x8]
PUSH EAX
CALL 0x0048c830
ADD ESP,0x4
FST dword ptr [EBP + -0x8]
FCOMP dword ptr [0x004af6d8]
FNSTSW AX
TEST AH,0x1
JZ 0x0048c97b
MOV dword ptr [EBP + -0x18],0x0
JMP 0x0048c9b4
FLD dword ptr [EBP + -0x8]
FCOMP dword ptr [0x004af6d0]
FNSTSW AX
TEST AH,0x1
JZ 0x0048c994
MOV dword ptr [EBP + -0x18],0x1
JMP 0x0048c9b4
FLD dword ptr [EBP + -0x8]
FCOMP dword ptr [0x004af6dc]
FNSTSW AX
TEST AH,0x1
JZ 0x0048c9ad
MOV dword ptr [EBP + -0x18],0x2
JMP 0x0048c9b4
MOV dword ptr [EBP + -0x18],0x3
FLD dword ptr [EBP + -0x8]
FMUL dword ptr [0x004af6e0]
FSTP dword ptr [EBP + -0x1c]
MOV ECX,dword ptr [EBP + -0x1c]
PUSH ECX
CALL 0x0048c8f0
ADD ESP,0x4
FSUBR dword ptr [EBP + -0x1c]
FSTP dword ptr [EBP + -0x20]
MOV EDX,dword ptr [EBP + -0x1c]
PUSH EDX
CALL 0x0048cd30
ADD ESP,0x4
MOV dword ptr [EBP + -0x10],EAX
MOV EAX,dword ptr [EBP + -0x10]
ADD EAX,0x1
MOV dword ptr [EBP + -0xc],EAX
MOV ECX,dword ptr [EBP + -0x18]
MOV dword ptr [EBP + -0x34],ECX
CMP dword ptr [EBP + -0x34],0x3
JA 0x0048cd17
MOV EDX,dword ptr [EBP + -0x34]
JMP dword ptr [EDX*0x4 + 0x48cd1b]
CMP dword ptr [EBP + -0xc],0x1000
JL 0x0048ca16
MOV dword ptr [EBP + -0x24],0x1
JMP 0x0048ca1d
MOV dword ptr [EBP + -0x24],0x0
MOV EAX,dword ptr [EBP + -0x10]
MOV ECX,dword ptr [EAX*0x4 + 0x4c98e8]
MOV dword ptr [EBP + -0x14],ECX
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048ca4c
MOV EDX,dword ptr [EBP + -0xc]
SUB EDX,0x1000
MOV EAX,0xfff
SUB EAX,EDX
MOV ECX,dword ptr [EAX*0x4 + 0x4c98e8]
MOV dword ptr [EBP + -0x4],ECX
JMP 0x0048ca59
MOV EDX,dword ptr [EBP + -0xc]
MOV EAX,dword ptr [EDX*0x4 + 0x4c98e8]
MOV dword ptr [EBP + -0x4],EAX
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
MOV ECX,dword ptr [EBP + 0xc]
FSTP dword ptr [ECX]
MOV EDX,0xfff
SUB EDX,dword ptr [EBP + -0x10]
MOV EAX,dword ptr [EDX*0x4 + 0x4c98e8]
MOV dword ptr [EBP + -0x14],EAX
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048ca93
MOV ECX,dword ptr [EBP + -0xc]
FLD dword ptr [ECX*0x4 + 0x4c58e8]
FCHS
FSTP dword ptr [EBP + -0x4]
JMP 0x0048caa5
MOV EDX,0xfff
SUB EDX,dword ptr [EBP + -0xc]
MOV EAX,dword ptr [EDX*0x4 + 0x4c98e8]
MOV dword ptr [EBP + -0x4],EAX
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
MOV ECX,dword ptr [EBP + 0x10]
FSTP dword ptr [ECX]
JMP 0x0048cd17
CMP dword ptr [EBP + -0xc],0x2000
JL 0x0048cacd
MOV dword ptr [EBP + -0x24],0x1
JMP 0x0048cad4
MOV dword ptr [EBP + -0x24],0x0
MOV EDX,dword ptr [EBP + -0x10]
SUB EDX,0x1000
MOV EAX,0xfff
SUB EAX,EDX
MOV ECX,dword ptr [EAX*0x4 + 0x4c98e8]
MOV dword ptr [EBP + -0x14],ECX
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048cb05
MOV EDX,dword ptr [EBP + -0xc]
FLD dword ptr [EDX*0x4 + 0x4c18e8]
FCHS
FSTP dword ptr [EBP + -0x4]
JMP 0x0048cb1e
MOV EAX,dword ptr [EBP + -0xc]
SUB EAX,0x1000
MOV ECX,0xfff
SUB ECX,EAX
MOV EDX,dword ptr [ECX*0x4 + 0x4c98e8]
MOV dword ptr [EBP + -0x4],EDX
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
MOV EAX,dword ptr [EBP + 0xc]
FSTP dword ptr [EAX]
MOV ECX,dword ptr [EBP + -0x10]
FLD dword ptr [ECX*0x4 + 0x4c58e8]
FCHS
FSTP dword ptr [EBP + -0x14]
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048cb62
MOV EDX,dword ptr [EBP + -0xc]
SUB EDX,0x2000
MOV EAX,0xfff
SUB EAX,EDX
FLD dword ptr [EAX*0x4 + 0x4c98e8]
FCHS
FSTP dword ptr [EBP + -0x4]
JMP 0x0048cb71
MOV ECX,dword ptr [EBP + -0xc]
FLD dword ptr [ECX*0x4 + 0x4c58e8]
FCHS
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
MOV EDX,dword ptr [EBP + 0x10]
FSTP dword ptr [EDX]
JMP 0x0048cd17
CMP dword ptr [EBP + -0xc],0x3000
JL 0x0048cb99
MOV dword ptr [EBP + -0x24],0x1
JMP 0x0048cba0
MOV dword ptr [EBP + -0x24],0x0
MOV EAX,dword ptr [EBP + -0x10]
FLD dword ptr [EAX*0x4 + 0x4c18e8]
FCHS
FSTP dword ptr [EBP + -0x14]
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048cbd3
MOV ECX,dword ptr [EBP + -0xc]
SUB ECX,0x3000
MOV EDX,0xfff
SUB EDX,ECX
FLD dword ptr [EDX*0x4 + 0x4c98e8]
FCHS
FSTP dword ptr [EBP + -0x4]
JMP 0x0048cbe2
MOV EAX,dword ptr [EBP + -0xc]
FLD dword ptr [EAX*0x4 + 0x4c18e8]
FCHS
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
MOV ECX,dword ptr [EBP + 0xc]
FSTP dword ptr [ECX]
MOV EDX,dword ptr [EBP + -0x10]
SUB EDX,0x2000
MOV EAX,0xfff
SUB EAX,EDX
FLD dword ptr [EAX*0x4 + 0x4c98e8]
FCHS
FSTP dword ptr [EBP + -0x14]
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048cc24
MOV ECX,dword ptr [EBP + -0xc]
MOV EDX,dword ptr [ECX*0x4 + 0x4bd8e8]
MOV dword ptr [EBP + -0x4],EDX
JMP 0x0048cc3f
MOV EAX,dword ptr [EBP + -0xc]
SUB EAX,0x2000
MOV ECX,0xfff
SUB ECX,EAX
FLD dword ptr [ECX*0x4 + 0x4c98e8]
FCHS
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
MOV EDX,dword ptr [EBP + 0x10]
FSTP dword ptr [EDX]
JMP 0x0048cd17
CMP dword ptr [EBP + -0xc],0x4000
JL 0x0048cc67
MOV dword ptr [EBP + -0x24],0x1
JMP 0x0048cc6e
MOV dword ptr [EBP + -0x24],0x0
MOV EAX,dword ptr [EBP + -0x10]
SUB EAX,0x3000
MOV ECX,0xfff
SUB ECX,EAX
FLD dword ptr [ECX*0x4 + 0x4c98e8]
FCHS
FSTP dword ptr [EBP + -0x14]
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048cc9e
MOV EDX,dword ptr [EBP + -0xc]
MOV EAX,dword ptr [EDX*0x4 + 0x4b98e8]
MOV dword ptr [EBP + -0x4],EAX
JMP 0x0048ccba
MOV ECX,dword ptr [EBP + -0xc]
SUB ECX,0x3000
MOV EDX,0xfff
SUB EDX,ECX
FLD dword ptr [EDX*0x4 + 0x4c98e8]
FCHS
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
MOV EAX,dword ptr [EBP + 0xc]
FSTP dword ptr [EAX]
MOV ECX,dword ptr [EBP + -0x10]
MOV EDX,dword ptr [ECX*0x4 + 0x4bd8e8]
MOV dword ptr [EBP + -0x14],EDX
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048ccf9
MOV EAX,dword ptr [EBP + -0xc]
SUB EAX,0x4000
MOV ECX,0xfff
SUB ECX,EAX
MOV EDX,dword ptr [ECX*0x4 + 0x4c98e8]
MOV dword ptr [EBP + -0x4],EDX
JMP 0x0048cd06
MOV EAX,dword ptr [EBP + -0xc]
MOV ECX,dword ptr [EAX*0x4 + 0x4bd8e8]
MOV dword ptr [EBP + -0x4],ECX
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
MOV EDX,dword ptr [EBP + 0x10]
FSTP dword ptr [EDX]
MOV ESP,EBP
POP EBP
RET
