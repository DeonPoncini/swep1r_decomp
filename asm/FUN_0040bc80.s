; FUN_0040bc80
SUB ESP,0x40
PUSH ESI
MOV ESI,dword ptr [ESP + 0x48]
PUSH EDI
PUSH 0x2741
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [0x004eb458]
MOV EDI,dword ptr [0x004b6d20]
ADD ESP,0x8
NEG ECX
SBB ECX,ECX
AND ECX,EDI
PUSH ECX
PUSH EAX
CALL 0x00414420
ADD ESP,0x8
PUSH 0x2744
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [0x004b6d14]
ADD ESP,0x8
PUSH EDX
PUSH EAX
CALL 0x00414420
ADD ESP,0x8
PUSH 0x2742
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [0x0050d550]
ADD ESP,0x8
PUSH ECX
PUSH EAX
CALL 0x00414420
ADD ESP,0x8
PUSH 0x2743
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [0x004b6d18]
ADD ESP,0x8
PUSH EDX
PUSH EAX
CALL 0x00414420
ADD ESP,0x8
PUSH 0x2746
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [0x004b6d28]
ADD ESP,0x8
PUSH ECX
PUSH EAX
CALL 0x00414420
ADD ESP,0x8
PUSH 0x2747
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [0x004eb45c]
ADD ESP,0x8
PUSH EDX
PUSH EAX
CALL 0x00414420
MOV EAX,[0x004eb458]
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0040bdc1
CALL 0x00485340
MOV ECX,dword ptr [0x0050d55c]
AND EAX,0x8
TEST ECX,ECX
JNZ 0x0040bd6b
MOV EDI,0x4b3b2c
JMP 0x0040bd85
TEST EAX,EAX
JZ 0x0040bd76
PUSH 0x4b4f28
JMP 0x0040bd7b
PUSH 0x4b4f04
CALL 0x00421360
ADD ESP,0x4
MOV EDI,EAX
MOV EAX,[0x0050d55c]
TEST EAX,EAX
JNZ 0x0040bd9d
PUSH 0x4b4eec
CALL 0x00421360
ADD ESP,0x4
JMP 0x0040bda2
MOV EAX,0x4d55cc
PUSH EDI
PUSH EAX
PUSH 0x4b4eb4
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
LEA EAX,[ESP + 0x14]
PUSH EAX
CALL 0x0049eb80
ADD ESP,0x10
JMP 0x0040bddc
PUSH 0x4b4e88
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[ESP + 0x8]
PUSH EAX
PUSH ECX
CALL 0x0049eb80
ADD ESP,0x8
PUSH 0x58
PUSH ESI
CALL 0x00414d90
MOV EDI,EAX
ADD ESP,0x8
TEST EDI,EDI
JZ 0x0040be40
MOV EDX,dword ptr [EDI + 0x4d8]
LEA EAX,[ESP + 0x8]
PUSH EDX
PUSH EAX
PUSH EDI
CALL 0x00414b80
ADD ESP,0xc
PUSH 0xc8
PUSH 0x0
PUSH 0xff
PUSH 0xff
PUSH EDI
CALL 0x00414be0
ADD ESP,0x14
PUSH 0x1
PUSH EDI
CALL 0x00418cb0
MOV EDX,dword ptr [0x004eb458]
ADD ESP,0x8
XOR ECX,ECX
TEST EDX,EDX
SETZ CL
PUSH ECX
PUSH 0x0
PUSH EDI
CALL 0x004130e0
ADD ESP,0xc
PUSH 0x273e
PUSH ESI
CALL 0x00414d90
MOV EDI,EAX
XOR EAX,EAX
MOV AL,[0x00e364a5]
ADD ESP,0x8
LEA EAX,[EAX + EAX*0x4]
LEA ECX,[EAX + EAX*0x4]
MOV EAX,0x80808081
SHL ECX,0x2
IMUL ECX
ADD EDX,ECX
SAR EDX,0x7
MOV EAX,EDX
SHR EAX,0x1f
ADD EDX,EAX
PUSH EDX
PUSH EDI
CALL 0x00413b60
ADD ESP,0x8
PUSH 0x273f
PUSH ESI
CALL 0x00414d90
MOV EDI,EAX
XOR EAX,EAX
MOV AL,[0x00e364a6]
ADD ESP,0x8
LEA EAX,[EAX + EAX*0x4]
LEA ECX,[EAX + EAX*0x4]
MOV EAX,0x80808081
SHL ECX,0x2
IMUL ECX
ADD EDX,ECX
SAR EDX,0x7
MOV ECX,EDX
SHR ECX,0x1f
ADD EDX,ECX
PUSH EDX
PUSH EDI
CALL 0x00413b60
ADD ESP,0x8
PUSH 0x2740
PUSH ESI
CALL 0x00414d90
FLD dword ptr [0x004b6d24]
FMUL dword ptr [0x004ac3c8]
ADD ESP,0x8
MOV EDI,EAX
CALL 0x0049ed20
PUSH EAX
PUSH EDI
CALL 0x00413b60
FLD dword ptr [0x004b6d24]
FMUL dword ptr [0x004ac3c8]
ADD ESP,0x8
CALL 0x0049ed20
PUSH EAX
PUSH EDI
CALL 0x00413b30
ADD ESP,0x8
PUSH 0x2743
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [0x004b6d20]
ADD ESP,0x8
TEST ECX,ECX
JZ 0x0040bf2a
MOV ECX,dword ptr [0x004eb458]
TEST ECX,ECX
JZ 0x0040bf2a
MOV ECX,dword ptr [0x0050d550]
JMP 0x0040bf2c
XOR ECX,ECX
PUSH ECX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x2740
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [0x004b6d20]
ADD ESP,0x8
TEST ECX,ECX
JZ 0x0040bf60
MOV ECX,dword ptr [0x004eb458]
TEST ECX,ECX
JZ 0x0040bf60
MOV ECX,dword ptr [0x0050d550]
JMP 0x0040bf62
XOR ECX,ECX
PUSH ECX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x2712
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [0x004b6d20]
ADD ESP,0x8
TEST ECX,ECX
JZ 0x0040bf96
MOV ECX,dword ptr [0x004eb458]
TEST ECX,ECX
JZ 0x0040bf96
MOV ECX,dword ptr [0x0050d550]
JMP 0x0040bf98
XOR ECX,ECX
PUSH ECX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x2742
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [0x004eb458]
MOV EDI,dword ptr [0x004b6d20]
ADD ESP,0x8
NEG EDX
SBB EDX,EDX
AND EDX,EDI
PUSH EDX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x2744
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [0x004eb458]
MOV EDI,dword ptr [0x004b6d20]
ADD ESP,0x8
NEG ECX
SBB ECX,ECX
AND ECX,EDI
PUSH ECX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x273e
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [0x004eb458]
MOV ECX,dword ptr [0x004b6d20]
ADD ESP,0x8
NEG EDX
SBB EDX,EDX
AND EDX,ECX
PUSH EDX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x273f
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [0x004eb458]
MOV EDX,dword ptr [0x004b6d20]
ADD ESP,0x8
NEG ECX
SBB ECX,ECX
AND ECX,EDX
PUSH ECX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x2710
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [0x004eb458]
MOV EDI,dword ptr [0x004b6d20]
ADD ESP,0x8
NEG EDX
SBB EDX,EDX
AND EDX,EDI
PUSH EDX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x2711
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [0x004eb458]
MOV EDI,dword ptr [0x004b6d20]
ADD ESP,0x8
NEG ECX
SBB ECX,ECX
AND ECX,EDI
PUSH ECX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x2746
PUSH ESI
CALL 0x00414d90
MOV EDX,dword ptr [0x004eb458]
MOV ECX,dword ptr [0x004b6d20]
ADD ESP,0x8
NEG EDX
SBB EDX,EDX
AND EDX,ECX
PUSH EDX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x2747
PUSH ESI
CALL 0x00414d90
MOV ECX,dword ptr [0x004eb458]
MOV ESI,dword ptr [0x004b6d20]
ADD ESP,0x8
NEG ECX
SBB ECX,ECX
AND ECX,ESI
PUSH ECX
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0x40
RET
