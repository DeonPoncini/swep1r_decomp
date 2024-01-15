; FUN_0048cd50
PUSH EBP
MOV EBP,ESP
SUB ESP,0x34
MOV EAX,dword ptr [EBP + 0x8]
PUSH EAX
CALL 0x0048c830
ADD ESP,0x4
FST dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af6d8]
FNSTSW AX
TEST AH,0x1
JZ 0x0048cd7b
MOV dword ptr [EBP + -0x18],0x0
JMP 0x0048cdb4
FLD dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af6d0]
FNSTSW AX
TEST AH,0x1
JZ 0x0048cd94
MOV dword ptr [EBP + -0x18],0x1
JMP 0x0048cdb4
FLD dword ptr [EBP + 0x8]
FCOMP dword ptr [0x004af6dc]
FNSTSW AX
TEST AH,0x1
JZ 0x0048cdad
MOV dword ptr [EBP + -0x18],0x2
JMP 0x0048cdb4
MOV dword ptr [EBP + -0x18],0x3
FLD dword ptr [EBP + 0x8]
FDIV dword ptr [0x004af6cc]
FMUL dword ptr [0x004af6e4]
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
MOV dword ptr [EBP + -0x8],EAX
MOV ECX,dword ptr [EBP + -0x18]
MOV dword ptr [EBP + -0x34],ECX
CMP dword ptr [EBP + -0x34],0x3
JA 0x0048cfca
MOV EDX,dword ptr [EBP + -0x34]
JMP dword ptr [EDX*0x4 + 0x48cfd1]
CMP dword ptr [EBP + -0x8],0x1000
JL 0x0048ce1c
MOV dword ptr [EBP + -0x24],0x1
JMP 0x0048ce23
MOV dword ptr [EBP + -0x24],0x0
MOV EAX,dword ptr [EBP + -0x10]
MOV ECX,dword ptr [EAX*0x4 + 0x4cd8e8]
MOV dword ptr [EBP + -0x14],ECX
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048ce54
MOV EDX,dword ptr [EBP + -0x8]
SUB EDX,0x1000
MOV EAX,0xfff
SUB EAX,EDX
FLD dword ptr [EAX*0x4 + 0x4cd8e8]
FCHS
FSTP dword ptr [EBP + -0x4]
JMP 0x0048ce61
MOV ECX,dword ptr [EBP + -0x8]
MOV EDX,dword ptr [ECX*0x4 + 0x4cd8e8]
MOV dword ptr [EBP + -0x4],EDX
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
FSTP dword ptr [EBP + -0xc]
JMP 0x0048cfca
CMP dword ptr [EBP + -0x8],0x2000
JL 0x0048ce87
MOV dword ptr [EBP + -0x24],0x1
JMP 0x0048ce8e
MOV dword ptr [EBP + -0x24],0x0
MOV EAX,dword ptr [EBP + -0x10]
SUB EAX,0x1000
MOV ECX,0xfff
SUB ECX,EAX
FLD dword ptr [ECX*0x4 + 0x4cd8e8]
FCHS
FSTP dword ptr [EBP + -0x14]
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048cebe
MOV EDX,dword ptr [EBP + -0x8]
MOV EAX,dword ptr [EDX*0x4 + 0x4c58e8]
MOV dword ptr [EBP + -0x4],EAX
JMP 0x0048ceda
MOV ECX,dword ptr [EBP + -0x8]
SUB ECX,0x1000
MOV EDX,0xfff
SUB EDX,ECX
FLD dword ptr [EDX*0x4 + 0x4cd8e8]
FCHS
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
FSTP dword ptr [EBP + -0xc]
JMP 0x0048cfca
CMP dword ptr [EBP + -0x8],0x3000
JL 0x0048cf00
MOV dword ptr [EBP + -0x24],0x1
JMP 0x0048cf07
MOV dword ptr [EBP + -0x24],0x0
MOV EAX,dword ptr [EBP + -0x10]
MOV ECX,dword ptr [EAX*0x4 + 0x4c58e8]
MOV dword ptr [EBP + -0x14],ECX
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048cf38
MOV EDX,dword ptr [EBP + -0x8]
SUB EDX,0x3000
MOV EAX,0xfff
SUB EAX,EDX
FLD dword ptr [EAX*0x4 + 0x4cd8e8]
FCHS
FSTP dword ptr [EBP + -0x4]
JMP 0x0048cf45
MOV ECX,dword ptr [EBP + -0x8]
MOV EDX,dword ptr [ECX*0x4 + 0x4c58e8]
MOV dword ptr [EBP + -0x4],EDX
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
FSTP dword ptr [EBP + -0xc]
JMP 0x0048cfca
CMP dword ptr [EBP + -0x8],0x4000
JL 0x0048cf68
MOV dword ptr [EBP + -0x24],0x1
JMP 0x0048cf6f
MOV dword ptr [EBP + -0x24],0x0
MOV EAX,dword ptr [EBP + -0x10]
SUB EAX,0x3000
MOV ECX,0xfff
SUB ECX,EAX
FLD dword ptr [ECX*0x4 + 0x4cd8e8]
FCHS
FSTP dword ptr [EBP + -0x14]
CMP dword ptr [EBP + -0x24],0x0
JZ 0x0048cf9f
MOV EDX,dword ptr [EBP + -0x8]
MOV EAX,dword ptr [EDX*0x4 + 0x4bd8e8]
MOV dword ptr [EBP + -0x4],EAX
JMP 0x0048cfbb
MOV ECX,dword ptr [EBP + -0x8]
SUB ECX,0x3000
MOV EDX,0xfff
SUB EDX,ECX
FLD dword ptr [EDX*0x4 + 0x4cd8e8]
FCHS
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
FSUB dword ptr [EBP + -0x14]
FMUL dword ptr [EBP + -0x20]
FADD dword ptr [EBP + -0x14]
FSTP dword ptr [EBP + -0xc]
FLD dword ptr [EBP + -0xc]
MOV ESP,EBP
POP EBP
RET
