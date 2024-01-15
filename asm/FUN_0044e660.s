; FUN_0044e660
SUB ESP,0x28
MOV EAX,dword ptr [ESP + 0x34]
PUSH EBX
MOV dword ptr [ESP + 0x24],EAX
PUSH EBP
FLD dword ptr [ESP + 0x28]
FMUL dword ptr [ESP + 0x3c]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x38]
PUSH EDI
MOV dword ptr [ESP + 0x34],0x3f800000
CMP word ptr [ESI],0x0
FST dword ptr [ESP + 0x2c]
FMUL dword ptr [ESP + 0x44]
FSTP dword ptr [ESP + 0x28]
JNZ 0x0044e708
LEA ECX,[ESP + 0x28]
PUSH 0x4c3c38
LEA EDX,[ESP + 0x1c]
PUSH ECX
PUSH EDX
CALL 0x00430ab0
MOV EAX,dword ptr [ESP + 0x54]
MOV EDX,dword ptr [ESI + 0xc]
ADD ESP,0xc
MOV ESI,dword ptr [EAX]
MOV ECX,ESI
SHL ECX,0x3
SUB ECX,ESI
MOV ESI,dword ptr [EAX + 0x4]
LEA ECX,[ECX + ECX*0x2]
LEA EDI,[EDX + ECX*0x4 + 0x10]
MOV ECX,ESI
SHL ECX,0x3
SUB ECX,ESI
MOV ESI,dword ptr [EAX + 0x8]
MOV dword ptr [ESP + 0x48],EDI
LEA ECX,[ECX + ECX*0x2]
LEA EBP,[EDX + ECX*0x4 + 0x10]
MOV ECX,ESI
SHL ECX,0x3
SUB ECX,ESI
MOV ESI,dword ptr [EAX + 0xc]
MOV dword ptr [ESP + 0x14],EBP
LEA ECX,[ECX + ECX*0x2]
LEA EBX,[EDX + ECX*0x4 + 0x10]
MOV ECX,ESI
SHL ECX,0x3
SUB ECX,ESI
MOV dword ptr [ESP + 0x10],EBX
LEA ECX,[ECX + ECX*0x2]
LEA EDX,[EDX + ECX*0x4 + 0x10]
MOV dword ptr [ESP + 0x44],EDX
JMP 0x0044e763
LEA EDX,[ESP + 0x28]
PUSH 0x4c3cf8
LEA EAX,[ESP + 0x1c]
PUSH EDX
PUSH EAX
CALL 0x00430ab0
MOV EAX,dword ptr [ESP + 0x54]
MOV EDX,dword ptr [ESI + 0xc]
ADD ESP,0xc
MOV ESI,dword ptr [EAX]
MOV ECX,ESI
SHL ECX,0x3
SUB ECX,ESI
MOV ESI,dword ptr [EAX + 0x4]
LEA ECX,[ECX + ECX*0x2]
LEA EBP,[EDX + ECX*0x4]
MOV ECX,ESI
SHL ECX,0x3
SUB ECX,ESI
LEA EDI,[EBP + 0x10]
ADD EBP,0x34
MOV dword ptr [ESP + 0x48],EDI
LEA ECX,[ECX + ECX*0x2]
MOV dword ptr [ESP + 0x14],EBP
LEA ECX,[EDX + ECX*0x4]
LEA EBX,[ECX + 0x28]
ADD ECX,0x10
MOV dword ptr [ESP + 0x10],EBX
MOV dword ptr [ESP + 0x44],ECX
MOV EDX,ECX
MOV CL,byte ptr [ESP + 0x40]
MOV ESI,dword ptr [ESP + 0x4c]
TEST CL,0x1
JZ 0x0044e803
FLD dword ptr [EBP]
FLD dword ptr [EDX]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [EBX]
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FLD dword ptr [EDI]
FXCH ST3
FMUL dword ptr [ESP + 0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESI]
FLD dword ptr [EDI + 0x4]
FLD dword ptr [EDX + 0x4]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [EBX + 0x4]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FLD dword ptr [EBP + 0x4]
FXCH ST3
FMUL dword ptr [ESP + 0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESI + 0x4]
FLD dword ptr [EDI + 0x8]
FLD dword ptr [EDX + 0x8]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [EBX + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FLD dword ptr [EBP + 0x8]
FXCH ST3
FMUL dword ptr [ESP + 0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESI + 0x8]
TEST CL,0x8
JZ 0x0044e8f0
MOV EDX,dword ptr [ESP + 0x3c]
CMP word ptr [EDX],0x1
JNZ 0x0044e82a
XOR EAX,EAX
MOV dword ptr [ESI + 0x2c],0x3f800000
MOV dword ptr [ESI + 0x24],EAX
MOV dword ptr [ESI + 0x28],EAX
JMP 0x0044e8f0
MOV EDI,dword ptr [EAX]
MOV EDX,dword ptr [EDX + 0xc]
MOV ECX,EDI
MOV EBX,dword ptr [EAX + 0x4]
SHL ECX,0x3
SUB ECX,EDI
LEA ECX,[ECX + ECX*0x2]
LEA EDI,[EDX + ECX*0x4 + 0x1c]
MOV ECX,EBX
SHL ECX,0x3
SUB ECX,EBX
MOV EBX,dword ptr [EAX + 0x8]
MOV EAX,dword ptr [EAX + 0xc]
LEA ECX,[ECX + ECX*0x2]
LEA EBP,[EDX + ECX*0x4 + 0x1c]
MOV ECX,EBX
SHL ECX,0x3
FLD dword ptr [EBP]
FMUL dword ptr [ESP + 0x1c]
SUB ECX,EBX
LEA ECX,[ECX + ECX*0x2]
FLD dword ptr [EDX + ECX*0x4 + 0x1c]
FMUL dword ptr [ESP + 0x20]
LEA EBX,[EDX + ECX*0x4 + 0x1c]
MOV ECX,EAX
SHL ECX,0x3
FADDP
FLD dword ptr [EDI]
FMUL dword ptr [ESP + 0x18]
SUB ECX,EAX
LEA EAX,[ECX + ECX*0x2]
MOV CL,byte ptr [ESP + 0x40]
FADDP
FLD dword ptr [EDX + EAX*0x4 + 0x1c]
FMUL dword ptr [ESP + 0x24]
LEA EDX,[EDX + EAX*0x4 + 0x1c]
FADDP
FSTP dword ptr [ESI + 0x24]
FLD dword ptr [EDX + 0x4]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [EDI + 0x4]
FMUL dword ptr [ESP + 0x18]
FADDP
FLD dword ptr [EBX + 0x4]
FMUL dword ptr [ESP + 0x20]
FADDP
FLD dword ptr [EBP + 0x4]
FMUL dword ptr [ESP + 0x1c]
FADDP
FSTP dword ptr [ESI + 0x28]
FLD dword ptr [EDI + 0x8]
FMUL dword ptr [ESP + 0x18]
FLD dword ptr [EBX + 0x8]
FMUL dword ptr [ESP + 0x20]
MOV EDI,dword ptr [ESP + 0x48]
MOV EBX,dword ptr [ESP + 0x10]
FADDP
FLD dword ptr [EBP + 0x8]
FMUL dword ptr [ESP + 0x1c]
MOV EBP,dword ptr [ESP + 0x14]
FADDP
FLD dword ptr [EDX + 0x8]
FMUL dword ptr [ESP + 0x24]
FADDP
FSTP dword ptr [ESI + 0x2c]
TEST CL,0x2
JZ 0x0044e9c3
MOV ECX,dword ptr [ESP + 0x3c]
CMP word ptr [ECX],0x0
JNZ 0x0044e914
LEA EDX,[ESP + 0x28]
PUSH 0x4c3c78
LEA EAX,[ESP + 0x1c]
PUSH EDX
PUSH EAX
JMP 0x0044e923
LEA ECX,[ESP + 0x28]
PUSH 0x4c3d38
LEA EDX,[ESP + 0x1c]
PUSH ECX
PUSH EDX
CALL 0x00430ab0
MOV EAX,dword ptr [ESP + 0x50]
MOV CL,byte ptr [ESP + 0x4c]
FLD dword ptr [EBP]
FLD dword ptr [EAX]
FMUL dword ptr [ESP + 0x30]
FLD dword ptr [EBX]
FXCH ST2
FMUL dword ptr [ESP + 0x28]
FLD dword ptr [EDI]
FXCH ST3
FMUL dword ptr [ESP + 0x2c]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x24]
FXCH ST2
FADDP
FXCH
ADD ESP,0xc
FADDP
FSTP dword ptr [ESI + 0xc]
FLD dword ptr [EDI + 0x4]
FLD dword ptr [EAX + 0x4]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [EBX + 0x4]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FLD dword ptr [EBP + 0x4]
FXCH ST3
FMUL dword ptr [ESP + 0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESI + 0x10]
FLD dword ptr [EDI + 0x8]
FLD dword ptr [EAX + 0x8]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [EBX + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FLD dword ptr [EBP + 0x8]
FXCH ST3
FMUL dword ptr [ESP + 0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESI + 0x14]
TEST CL,0x4
JZ 0x0044ea92
MOV EAX,dword ptr [ESP + 0x3c]
CMP word ptr [EAX],0x0
JNZ 0x0044e9e7
LEA ECX,[ESP + 0x28]
PUSH 0x4c3cb8
LEA EDX,[ESP + 0x1c]
PUSH ECX
PUSH EDX
JMP 0x0044e9f6
LEA EAX,[ESP + 0x28]
PUSH 0x4c3d78
LEA ECX,[ESP + 0x1c]
PUSH EAX
PUSH ECX
CALL 0x00430ab0
MOV EAX,dword ptr [ESP + 0x50]
ADD ESP,0xc
FLD dword ptr [EBP]
FLD dword ptr [EAX]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [EBX]
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FLD dword ptr [EDI]
FXCH ST3
FMUL dword ptr [ESP + 0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESI + 0x18]
FLD dword ptr [EDI + 0x4]
FLD dword ptr [EAX + 0x4]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [EBX + 0x4]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FLD dword ptr [EBP + 0x4]
FXCH ST3
FMUL dword ptr [ESP + 0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESI + 0x1c]
FLD dword ptr [EDI + 0x8]
FLD dword ptr [EAX + 0x8]
FMUL dword ptr [ESP + 0x24]
FLD dword ptr [EBX + 0x8]
FXCH ST2
FMUL dword ptr [ESP + 0x18]
FLD dword ptr [EBP + 0x8]
FXCH ST3
FMUL dword ptr [ESP + 0x20]
FXCH
FADDP ST2,ST0
FXCH ST2
FMUL dword ptr [ESP + 0x1c]
FXCH ST2
FADDP
FXCH
FADDP
FSTP dword ptr [ESI + 0x20]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x28
RET
