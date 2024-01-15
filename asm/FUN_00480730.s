; FUN_00480730
PUSH EBX
PUSH EBP
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0x14]
PUSH EDI
CALL 0x0042f8c0
FLD dword ptr [0x004adfa8]
FXCH
FSTP dword ptr [ESP + 0x18]
FDIV dword ptr [ESP + 0x18]
MOV EBP,dword ptr [ESP + 0x24]
MOV ESI,dword ptr [ESP + 0x20]
ADD ESP,0x4
LEA EBX,[EDI + 0x10]
PUSH EBX
FLD dword ptr [ESP + 0x18]
FXCH
FSTP dword ptr [ESP + 0x18]
FSTP dword ptr [EBP]
FLD dword ptr [EDI]
FMUL dword ptr [ESP + 0x18]
FSTP dword ptr [ESI]
FLD dword ptr [EDI + 0x4]
FMUL dword ptr [ESP + 0x18]
FSTP dword ptr [ESI + 0x4]
FLD dword ptr [EDI + 0x8]
FMUL dword ptr [ESP + 0x18]
MOV dword ptr [ESI + 0xc],0x0
FSTP dword ptr [ESI + 0x8]
CALL 0x0042f8c0
FLD dword ptr [0x004adfa8]
FXCH
FSTP dword ptr [ESP + 0x18]
FDIV dword ptr [ESP + 0x18]
ADD ESP,0x4
LEA EAX,[EDI + 0x20]
PUSH EAX
FLD dword ptr [ESP + 0x18]
FXCH
FSTP dword ptr [ESP + 0x18]
FSTP dword ptr [EBP + 0x4]
FLD dword ptr [EBX]
FMUL dword ptr [ESP + 0x18]
XOR EBX,EBX
FSTP dword ptr [ESI + 0x10]
FLD dword ptr [EDI + 0x14]
FMUL dword ptr [ESP + 0x18]
FSTP dword ptr [ESI + 0x14]
FLD dword ptr [EDI + 0x18]
FMUL dword ptr [ESP + 0x18]
MOV dword ptr [ESI + 0x1c],EBX
FSTP dword ptr [ESI + 0x18]
CALL 0x0042f8c0
FLD dword ptr [0x004adfa8]
FXCH
FSTP dword ptr [ESP + 0x18]
FDIV dword ptr [ESP + 0x18]
MOV EAX,dword ptr [ESP + 0x1c]
ADD ESP,0x4
FLD dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [ESP + 0x14]
FSTP dword ptr [EBP + 0x8]
FLD dword ptr [EDI + 0x20]
FMUL dword ptr [ESP + 0x14]
FSTP dword ptr [ESI + 0x20]
FLD dword ptr [EDI + 0x24]
FMUL dword ptr [ESP + 0x14]
FSTP dword ptr [ESI + 0x24]
FLD dword ptr [EDI + 0x28]
FMUL dword ptr [ESP + 0x14]
MOV dword ptr [ESI + 0x2c],EBX
FSTP dword ptr [ESI + 0x28]
MOV ECX,dword ptr [EDI + 0x30]
MOV dword ptr [EAX],ECX
MOV EDX,dword ptr [EDI + 0x34]
MOV dword ptr [EAX + 0x4],EDX
MOV ECX,dword ptr [EDI + 0x38]
MOV dword ptr [EAX + 0x8],ECX
MOV dword ptr [ESI + 0x30],EBX
MOV dword ptr [ESI + 0x34],EBX
MOV dword ptr [ESI + 0x38],EBX
MOV dword ptr [ESI + 0x3c],0x3f800000
POP EDI
POP ESI
POP EBP
POP EBX
RET
