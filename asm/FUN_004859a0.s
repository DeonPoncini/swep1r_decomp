; FUN_004859a0
PUSH EBP
MOV EBP,ESP
PUSH ECX
MOV EAX,dword ptr [EBP + 0x8]
MOV ECX,dword ptr [EBP + 0xc]
MOV [0x004c817c],EAX
MOV AL,[0x0050f528]
TEST AL,0x1
MOV dword ptr [0x004c8180],ECX
JZ 0x004859ed
FLD dword ptr [EBP + 0x8]
FMUL dword ptr [0x004ae2dc]
LEA EDX,[EBP + 0x8]
MOV dword ptr [EBP + 0xc],EDX
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
MOV EAX,dword ptr [EBP + 0xc]
FRNDINT
FISTP dword ptr [EAX]
MOV EAX,dword ptr [EBP + 0x8]
PUSH 0x0
PUSH EAX
NEG EAX
PUSH EAX
PUSH 0x30
CALL 0x00486970
ADD ESP,0x10
TEST byte ptr [0x0050f540],0x1
JZ 0x00485a28
FLD dword ptr [0x004c8180]
FMUL dword ptr [0x004ae2e0]
LEA EAX,[EBP + 0x8]
MOV dword ptr [EBP + 0xc],EAX
FSTP dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x4]
MOV EAX,dword ptr [EBP + 0xc]
FRNDINT
FISTP dword ptr [EAX]
MOV EAX,dword ptr [EBP + 0x8]
PUSH 0x0
PUSH EAX
NEG EAX
PUSH EAX
PUSH 0x31
CALL 0x00486970
ADD ESP,0x10
MOV ESP,EBP
POP EBP
RET
