; FUN_0048c7f0
PUSH EBP
MOV EBP,ESP
SUB ESP,0x8
MOV EAX,dword ptr [EBP + 0x8]
MOV dword ptr [EBP + -0x4],EAX
MOV dword ptr [EBP + -0x8],0x0
JMP 0x0048c80e
MOV ECX,dword ptr [EBP + -0x8]
ADD ECX,0x1
MOV dword ptr [EBP + -0x8],ECX
MOV EDX,dword ptr [EBP + 0xc]
SUB EDX,0x1
CMP dword ptr [EBP + -0x8],EDX
JGE 0x0048c824
FLD dword ptr [EBP + -0x4]
FMUL dword ptr [EBP + 0x8]
FSTP dword ptr [EBP + -0x4]
JMP 0x0048c805
FLD dword ptr [EBP + -0x4]
MOV ESP,EBP
POP EBP
RET
