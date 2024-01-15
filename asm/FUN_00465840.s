; FUN_00465840
SUB ESP,0x30
MOV EAX,0x3
PUSH EBX
MOV dword ptr [ESP + 0x10],EAX
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [ESP + 0x20],EAX
MOV dword ptr [ESP + 0x28],EAX
MOV dword ptr [ESP + 0x30],EAX
MOV EAX,dword ptr [ESP + 0x38]
PUSH EBP
PUSH ESI
MOV ECX,dword ptr [EAX + 0x1bc]
MOV ESI,dword ptr [ESP + 0x44]
PUSH EDI
PUSH 0x0
ADD EAX,0x34
MOV EDI,0x4
PUSH ESI
PUSH EAX
MOV dword ptr [ESP + 0x24],EDI
MOV dword ptr [ESP + 0x2c],EDI
MOV dword ptr [ESP + 0x34],EDI
MOV dword ptr [ESP + 0x3c],EDI
MOV dword ptr [ESP + 0x44],EDI
MOV dword ptr [ESP + 0x20],ECX
CALL 0x0044eeb0
FLD dword ptr [ESI + 0x10]
FMUL dword ptr [0x004ad4f4]
LEA EBP,[ESI + 0x30]
MOV EDX,dword ptr [ESP + 0x58]
MOV EAX,EDI
MOV ECX,EDI
FSUBR dword ptr [EBP]
MOV EDI,dword ptr [ESP + 0x20]
ADD ESP,0xc
SUB ECX,EDI
MOV EDI,EDX
FSTP dword ptr [EBP]
FLD dword ptr [ESI + 0x14]
FMUL dword ptr [0x004ad4f4]
XOR EBX,EBX
CMP EDI,EAX
MOV dword ptr [ESP + 0x48],EBX
MOV dword ptr [ESP + 0x10],EDX
FSUBR dword ptr [ESI + 0x34]
MOV dword ptr [ESP + 0x44],EAX
FSTP dword ptr [ESI + 0x34]
FLD dword ptr [ESI + 0x18]
FMUL dword ptr [0x004ad4f4]
FSUBR dword ptr [ESI + 0x38]
FSTP dword ptr [ESI + 0x38]
JL 0x0046590a
LEA EDI,[ESP + 0x18]
ADD EDI,0x4
SUB EDX,EAX
INC EBX
MOV EAX,dword ptr [EDI]
ADD ECX,EAX
CMP EDX,EAX
JGE 0x004658f0
MOV dword ptr [ESP + 0x44],EAX
MOV dword ptr [ESP + 0x48],EBX
MOV dword ptr [ESP + 0x10],EDX
TEST ECX,ECX
JLE 0x00465914
SUB EAX,ECX
MOV dword ptr [ESP + 0x44],EAX
FILD dword ptr [ESP + 0x44]
FILD dword ptr [ESP + 0x48]
FILD dword ptr [ESP + 0x10]
FXCH ST2
FSUB dword ptr [0x004ad22c]
FXCH
FMUL dword ptr [0x004ad360]
FXCH
FMUL dword ptr [0x004ad228]
FXCH
FSTP dword ptr [ESP + 0x4c]
FXCH
FMUL dword ptr [0x004ad2d8]
FXCH
FMUL dword ptr [0x004ad29c]
MOV EDX,dword ptr [ESP + 0x4c]
LEA EAX,[ESI + 0x10]
PUSH EAX
PUSH EDX
FADDP
PUSH EBP
PUSH EBP
FSTP dword ptr [ESP + 0x5c]
CALL 0x0042fa80
MOV EAX,dword ptr [ESP + 0x5c]
ADD ESP,0x10
PUSH ESI
PUSH EAX
PUSH EBP
PUSH EBP
CALL 0x0042fa80
ADD ESP,0x10
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x30
RET
