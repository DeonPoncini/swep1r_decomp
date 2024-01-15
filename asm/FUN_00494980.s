; FUN_00494980
PUSH EBP
MOV EBP,ESP
SUB ESP,0x2c
MOV EAX,dword ptr [EBP + 0x10]
MOV EDX,dword ptr [EBP + 0xc]
PUSH EBX
PUSH ESI
MOV ECX,dword ptr [EAX]
MOV EAX,dword ptr [EDX]
MOV ESI,dword ptr [EBP + 0x8]
PUSH EDI
PUSH ECX
PUSH EAX
PUSH ESI
CALL 0x00494c20
MOV ECX,dword ptr [EBP + 0x18]
MOV EDI,EAX
MOV EAX,dword ptr [EBP + 0x14]
ADD ESP,0xc
MOV EDX,dword ptr [ECX]
MOV ECX,dword ptr [EAX]
PUSH EDX
PUSH ECX
PUSH ESI
CALL 0x00494c20
XOR ECX,ECX
ADD ESP,0xc
CMP EDI,ECX
MOV EBX,EAX
JNZ 0x004949d0
CMP EBX,ECX
JNZ 0x004949d0
MOV EAX,0x1
POP EDI
POP ESI
POP EBX
MOV ESP,EBP
POP EBP
RET
TEST EDI,EBX
JNZ 0x00494c09
MOV EDX,dword ptr [EBP + 0xc]
MOV EAX,dword ptr [EBP + 0x10]
FILD dword ptr [EDX]
MOV EDX,dword ptr [EBP + 0x14]
FSTP dword ptr [EBP + 0x8]
FILD dword ptr [EAX]
MOV EAX,dword ptr [EBP + 0x18]
FSTP dword ptr [EBP + -0x4]
FILD dword ptr [EDX]
FSTP dword ptr [EBP + -0x8]
FILD dword ptr [EAX]
FSTP dword ptr [EBP + -0xc]
FLD dword ptr [EBP + 0x8]
FCOMP dword ptr [EBP + -0x8]
FNSTSW AX
TEST AH,0x40
JZ 0x00494a0f
MOV EDX,0x1
MOV dword ptr [EBP + -0x24],EDX
JMP 0x00494a14
MOV dword ptr [EBP + -0x24],ECX
MOV EDX,ECX
FLD dword ptr [EBP + -0x4]
FCOMP dword ptr [EBP + -0xc]
FNSTSW AX
TEST AH,0x40
JZ 0x00494a2b
MOV ECX,0x1
MOV dword ptr [EBP + -0x28],ECX
JMP 0x00494a31
MOV dword ptr [EBP + -0x28],ECX
MOV ECX,dword ptr [EBP + -0x28]
TEST EDI,EDI
MOV EAX,EDI
JNZ 0x00494a39
MOV EAX,EBX
TEST AH,0x10
JZ 0x00494a74
TEST EDX,EDX
JZ 0x00494a50
FLD dword ptr [EBP + 0x8]
FILD dword ptr [ESI + 0x14]
FSTP dword ptr [EBP + -0x10]
JMP 0x00494b0b
FLD dword ptr [EBP + -0x8]
FSUB dword ptr [EBP + 0x8]
FLD dword ptr [EBP + -0xc]
FSUB dword ptr [EBP + -0x4]
FDIVP
FILD dword ptr [ESI + 0x14]
FSUB dword ptr [EBP + -0x4]
FMULP
FADD dword ptr [EBP + 0x8]
FILD dword ptr [ESI + 0x14]
FSTP dword ptr [EBP + -0x10]
JMP 0x00494b0b
TEST AH,0x1
JZ 0x00494aac
TEST EDX,EDX
JZ 0x00494a8b
FLD dword ptr [EBP + 0x8]
FILD dword ptr [ESI + 0x1c]
FSTP dword ptr [EBP + -0x10]
JMP 0x00494b0b
FLD dword ptr [EBP + -0x8]
FSUB dword ptr [EBP + 0x8]
FLD dword ptr [EBP + -0xc]
FSUB dword ptr [EBP + -0x4]
FDIVP
FILD dword ptr [ESI + 0x1c]
FSUB dword ptr [EBP + -0x4]
FMULP
FADD dword ptr [EBP + 0x8]
FILD dword ptr [ESI + 0x1c]
FSTP dword ptr [EBP + -0x10]
JMP 0x00494b0b
TEST AL,0x10
JZ 0x00494ae0
TEST ECX,ECX
JZ 0x00494abf
MOV ECX,dword ptr [EBP + -0x4]
FILD dword ptr [ESI + 0x18]
MOV dword ptr [EBP + -0x10],ECX
JMP 0x00494b0b
FLD dword ptr [EBP + -0xc]
FSUB dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x8]
FSUB dword ptr [EBP + 0x8]
FDIVP
FILD dword ptr [ESI + 0x18]
FSUB dword ptr [EBP + 0x8]
FMULP
FADD dword ptr [EBP + -0x4]
FSTP dword ptr [EBP + -0x10]
FILD dword ptr [ESI + 0x18]
JMP 0x00494b0b
TEST ECX,ECX
JZ 0x00494aec
MOV EDX,dword ptr [EBP + -0x4]
MOV dword ptr [EBP + -0x10],EDX
JMP 0x00494b08
FLD dword ptr [EBP + -0xc]
FSUB dword ptr [EBP + -0x4]
FLD dword ptr [EBP + -0x8]
FSUB dword ptr [EBP + 0x8]
FDIVP
FILD dword ptr [ESI + 0x10]
FSUB dword ptr [EBP + 0x8]
FMULP
FADD dword ptr [EBP + -0x4]
FSTP dword ptr [EBP + -0x10]
FILD dword ptr [ESI + 0x10]
CMP EAX,EDI
JNZ 0x00494b4d
MOV EAX,dword ptr [EBP + -0x10]
LEA ECX,[EBP + -0x14]
FSTP dword ptr [EBP + 0x8]
MOV dword ptr [EBP + -0x4],EAX
MOV dword ptr [EBP + -0x2c],ECX
FLD dword ptr [EBP + -0x4]
MOV EAX,dword ptr [EBP + -0x2c]
FRNDINT
FISTP dword ptr [EAX]
MOV ECX,dword ptr [EBP + -0x14]
LEA EDX,[EBP + -0x1c]
MOV dword ptr [EBP + -0x2c],EDX
FLD dword ptr [EBP + 0x8]
MOV EAX,dword ptr [EBP + -0x2c]
FRNDINT
FISTP dword ptr [EAX]
MOV EAX,dword ptr [EBP + -0x1c]
PUSH ECX
PUSH EAX
PUSH ESI
CALL 0x00494c20
ADD ESP,0xc
MOV EDI,EAX
JMP 0x00494b89
MOV ECX,dword ptr [EBP + -0x10]
LEA EDX,[EBP + -0x18]
FSTP dword ptr [EBP + -0x8]
MOV dword ptr [EBP + -0xc],ECX
MOV dword ptr [EBP + -0x2c],EDX
FLD dword ptr [EBP + -0xc]
MOV EAX,dword ptr [EBP + -0x2c]
FRNDINT
FISTP dword ptr [EAX]
MOV ECX,dword ptr [EBP + -0x18]
LEA EAX,[EBP + -0x20]
MOV dword ptr [EBP + -0x2c],EAX
FLD dword ptr [EBP + -0x8]
MOV EAX,dword ptr [EBP + -0x2c]
FRNDINT
FISTP dword ptr [EAX]
PUSH ECX
MOV ECX,dword ptr [EBP + -0x20]
PUSH ECX
PUSH ESI
CALL 0x00494c20
ADD ESP,0xc
MOV EBX,EAX
TEST EDI,EDI
JNZ 0x00494b91
TEST EBX,EBX
JZ 0x00494b9d
TEST EDI,EBX
JNZ 0x00494c09
MOV EDX,dword ptr [EBP + -0x24]
JMP 0x00494a2e
LEA EDX,[EBP + -0x28]
MOV dword ptr [EBP + -0x2c],EDX
FLD dword ptr [EBP + 0x8]
MOV EAX,dword ptr [EBP + -0x2c]
FRNDINT
FISTP dword ptr [EAX]
MOV ECX,dword ptr [EBP + 0xc]
MOV EAX,dword ptr [EBP + -0x28]
LEA EDX,[EBP + 0xc]
MOV dword ptr [ECX],EAX
MOV dword ptr [EBP + 0x8],EDX
FLD dword ptr [EBP + -0x4]
MOV EAX,dword ptr [EBP + 0x8]
FRNDINT
FISTP dword ptr [EAX]
MOV ECX,dword ptr [EBP + 0x10]
MOV EAX,dword ptr [EBP + 0xc]
LEA EDX,[EBP + 0xc]
MOV dword ptr [ECX],EAX
MOV dword ptr [EBP + 0x10],EDX
FLD dword ptr [EBP + -0x8]
MOV EAX,dword ptr [EBP + 0x10]
FRNDINT
FISTP dword ptr [EAX]
MOV ECX,dword ptr [EBP + 0x14]
MOV EAX,dword ptr [EBP + 0xc]
LEA EDX,[EBP + 0xc]
MOV dword ptr [ECX],EAX
MOV dword ptr [EBP + 0x10],EDX
FLD dword ptr [EBP + -0xc]
MOV EAX,dword ptr [EBP + 0x10]
FRNDINT
FISTP dword ptr [EAX]
MOV ECX,dword ptr [EBP + 0x18]
MOV EAX,dword ptr [EBP + 0xc]
MOV dword ptr [ECX],EAX
MOV EAX,0x1
POP EDI
POP ESI
POP EBX
MOV ESP,EBP
POP EBP
RET
POP EDI
POP ESI
XOR EAX,EAX
POP EBX
MOV ESP,EBP
POP EBP
RET
