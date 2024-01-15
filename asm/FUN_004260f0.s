; FUN_004260f0
PUSH ECX
PUSH ESI
MOV ESI,dword ptr [ESP + 0xc]
PUSH EDI
LEA EDX,[ESP + 0x10]
MOV EAX,dword ptr [ESI + 0x118]
MOV ECX,dword ptr [ESI + 0x114]
PUSH EAX
PUSH ECX
PUSH ESI
PUSH EDX
CALL 0x004259b0
MOV EAX,dword ptr [ESI + 0x100]
ADD ESP,0x10
TEST EAX,0x20000000
JZ 0x00426161
MOV EAX,dword ptr [ESI + 0xe8]
LEA ECX,[ESP + 0x8]
FILD dword ptr [ESI + 0xec]
PUSH EAX
PUSH ECX
FSTP dword ptr [ESP]
PUSH ESI
PUSH ECX
CALL 0x00425a60
FLD dword ptr [0x004ac450]
FSUB dword ptr [ESI + 0xe4]
FLD dword ptr [ESP + 0x20]
FMUL dword ptr [ESI + 0xe4]
FXCH
FMUL dword ptr [ESP + 0x18]
ADD ESP,0x10
FADDP
FSTP dword ptr [ESP + 0x10]
MOV ESI,dword ptr [ESI + 0x124]
TEST ESI,ESI
JZ 0x00426218
MOV EDI,dword ptr [ESI + 0x8]
TEST EDI,EDI
JZ 0x00426218
MOV EAX,dword ptr [ESP + 0x14]
TEST EAX,EAX
JNZ 0x004261cf
MOVSX EDX,word ptr [EDI + 0x4]
MOV dword ptr [ESP + 0x14],EDX
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x10]
CALL 0x0049ed20
MOV word ptr [ESI + 0x4],AX
MOV CX,word ptr [EDI + 0x4]
CMP AX,CX
JLE 0x004261b5
SUB word ptr [ESI + 0x4],CX
MOV AX,word ptr [ESI + 0x4]
MOV CX,word ptr [EDI + 0x4]
CMP AX,CX
JG 0x004261a4
CMP word ptr [ESI + 0x4],0x0
JGE 0x00426218
MOV AX,word ptr [EDI + 0x4]
ADD word ptr [ESI + 0x4],AX
CMP word ptr [ESI + 0x4],0x0
JL 0x004261bc
POP EDI
POP ESI
POP ECX
RET
MOVSX ECX,word ptr [EDI + 0x6]
MOV dword ptr [ESP + 0x14],ECX
FILD dword ptr [ESP + 0x14]
FMUL dword ptr [ESP + 0x10]
CALL 0x0049ed20
MOV word ptr [ESI + 0x6],AX
MOV CX,word ptr [EDI + 0x6]
CMP AX,CX
JLE 0x00426202
SUB word ptr [ESI + 0x6],CX
MOV AX,word ptr [ESI + 0x6]
MOV CX,word ptr [EDI + 0x6]
CMP AX,CX
JG 0x004261f1
CMP word ptr [ESI + 0x6],0x0
JGE 0x00426218
MOV DX,word ptr [EDI + 0x6]
ADD word ptr [ESI + 0x6],DX
CMP word ptr [ESI + 0x6],0x0
JL 0x00426209
POP EDI
POP ESI
POP ECX
RET
