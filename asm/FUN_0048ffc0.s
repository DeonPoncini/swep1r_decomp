; FUN_0048ffc0
PUSH EBX
MOV EBX,dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x10]
FLD dword ptr [EBX + 0x3c]
PUSH EDI
LEA EDI,[ESI + 0x34]
FCHS
FSTP dword ptr [EDI]
FLD dword ptr [ESP + 0x18]
FMUL dword ptr [0x004af7b8]
PUSH EDI
MOV dword ptr [ESI + 0x3c],0x0
FCHS
FSTP dword ptr [ESI + 0x38]
CALL 0x00492440
MOV EDX,dword ptr [EDI]
LEA EAX,[ESI + 0x40]
MOV ECX,EAX
ADD ESP,0x4
FSTP ST0
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [EDI + 0x4]
MOV dword ptr [ESI + 0x4c],0x0
MOV dword ptr [ECX + 0x4],EDX
MOV EDX,dword ptr [EDI + 0x8]
LEA EDI,[ESI + 0x4c]
MOV dword ptr [ECX + 0x8],EDX
PUSH EDI
FLD dword ptr [EAX]
FCHS
FSTP dword ptr [EAX]
FLD dword ptr [ESP + 0x20]
FMUL dword ptr [0x004af7b8]
FCHS
FSTP dword ptr [ESI + 0x50]
MOV EAX,dword ptr [EBX + 0x3c]
MOV dword ptr [ESI + 0x54],EAX
CALL 0x00492440
MOV EDX,dword ptr [EDI]
MOV EAX,dword ptr [EDI + 0x4]
LEA ECX,[ESI + 0x58]
ADD ESP,0x4
FSTP ST0
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [EDI + 0x8]
POP EDI
MOV dword ptr [ECX + 0x4],EAX
MOV EAX,0x1
MOV dword ptr [ECX + 0x8],EDX
FLD dword ptr [ESI + 0x60]
FCHS
FSTP dword ptr [ESI + 0x60]
POP ESI
POP EBX
RET
