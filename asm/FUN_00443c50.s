; FUN_00443c50
SUB ESP,0x80
PUSH EBX
MOV BL,byte ptr [ESP + 0x88]
TEST BL,0x1
PUSH ESI
JZ 0x00443e06
LEA EAX,[ESP + 0x8]
PUSH EAX
CALL 0x00445500
ADD ESP,0x4
TEST BL,0x2
JZ 0x00443d4c
LEA ECX,[ESP + 0x8]
LEA EDX,[ESP + 0x48]
PUSH ECX
PUSH EDX
CALL 0x00430310
MOV ECX,dword ptr [ESP + 0x9c]
MOV EDX,dword ptr [ESP + 0x98]
ADD ESP,0x8
LEA EAX,[ESP + 0x48]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00430a00
ADD ESP,0xc
CMP word ptr [0x00e98e1c],0x3
JNZ 0x00443e64
MOV ECX,dword ptr [ESP + 0x9c]
MOV ESI,dword ptr [ESP + 0x98]
LEA EAX,[ESP + 0x48]
PUSH EAX
PUSH ECX
PUSH ESI
CALL 0x00430980
FLD dword ptr [ESP + 0x8c]
FLD dword ptr [ESP + 0x88]
FMUL dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
FXCH ST2
FMUL dword ptr [ESI + 0x8]
FLD dword ptr [ESP + 0x88]
FXCH ST3
FMUL dword ptr [ESP + 0x84]
FXCH
FADDP ST2,ST0
FLD dword ptr [ESP + 0x8c]
FXCH
FADDP ST2,ST0
FXCH
FADD dword ptr [0x00e9826c]
ADD ESP,0xc
FSTP dword ptr [0x00e9827c]
FXCH
FMUL dword ptr [ESI + 0x4]
FLD dword ptr [ESI]
FXCH ST2
FMUL dword ptr [ESI + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x78]
FXCH ST2
FADDP
FXCH
FADDP
FADD dword ptr [0x00e98280]
FSTP dword ptr [0x00e98e00]
POP ESI
POP EBX
ADD ESP,0x80
RET
MOV EAX,dword ptr [ESP + 0x94]
MOV ECX,dword ptr [ESP + 0x90]
FLD dword ptr [EAX]
FSUB dword ptr [ESP + 0x38]
FSTP dword ptr [ECX]
FLD dword ptr [EAX + 0x4]
FSUB dword ptr [ESP + 0x3c]
FSTP dword ptr [ECX + 0x4]
FLD dword ptr [EAX + 0x8]
FSUB dword ptr [ESP + 0x40]
FSTP dword ptr [ECX + 0x8]
CMP word ptr [0x00e98e1c],0x3
JNZ 0x00443e64
MOV ECX,dword ptr [ESP + 0x9c]
MOV EAX,dword ptr [ESP + 0x98]
MOV EDX,dword ptr [ECX]
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],EDX
FLD dword ptr [ECX + 0x8]
FLD dword ptr [ESP + 0x40]
FLD dword ptr [ESP + 0x3c]
FMUL dword ptr [EAX + 0x4]
FXCH
FMUL ST2
FLD dword ptr [EAX]
FMUL dword ptr [ESP + 0x38]
FXCH
FADDP ST2,ST0
FLD dword ptr [ESP + 0x40]
FXCH
FADDP ST2,ST0
FXCH ST2
FSTP dword ptr [EAX + 0x8]
FLD dword ptr [ESP + 0x3c]
FXCH
FSUBR dword ptr [0x00e9826c]
FSTP dword ptr [0x00e9827c]
FXCH
FMUL dword ptr [EAX + 0x8]
FLD dword ptr [EAX]
FXCH ST2
FMUL dword ptr [EAX + 0x4]
FXCH ST2
FMUL dword ptr [ESP + 0x38]
FXCH ST2
FADDP
FXCH
FADDP
FSUBR dword ptr [0x00e98280]
FSTP dword ptr [0x00e98e00]
POP ESI
POP EBX
ADD ESP,0x80
RET
MOV EAX,dword ptr [ESP + 0x94]
MOV ECX,dword ptr [ESP + 0x90]
MOV EDX,dword ptr [EAX]
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ECX + 0x8],EAX
CMP word ptr [0x00e98e1c],0x3
JNZ 0x00443e64
MOV EAX,dword ptr [ESP + 0x9c]
MOV ECX,dword ptr [ESP + 0x98]
MOV EDX,dword ptr [EAX]
MOV dword ptr [ECX],EDX
MOV EDX,dword ptr [EAX + 0x4]
MOV dword ptr [ECX + 0x4],EDX
MOV EAX,dword ptr [EAX + 0x8]
MOV dword ptr [ECX + 0x8],EAX
MOV ECX,dword ptr [0x00e9826c]
MOV EDX,dword ptr [0x00e98280]
MOV dword ptr [0x00e9827c],ECX
MOV dword ptr [0x00e98e00],EDX
POP ESI
POP EBX
ADD ESP,0x80
RET
