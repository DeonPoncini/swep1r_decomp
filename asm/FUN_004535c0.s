; FUN_004535c0
SUB ESP,0x88
PUSH EBX
PUSH ESI
PUSH EDI
CALL 0x0045d350
CMP EAX,0x1
JNZ 0x004535f3
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004acef0]
FLD dword ptr [0x0050c8a8]
FXCH
FSUBP
MOV dword ptr [ESP + 0xc],0x40000000
JMP 0x0045361a
MOV dword ptr [ESP + 0xc],0x3fc00000
CALL 0x0045d350
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FDIVR dword ptr [0x004ace6c]
FMUL qword ptr [0x00e22a40]
FADD dword ptr [0x0050c8a8]
FSTP dword ptr [0x0050c8a8]
FLD dword ptr [0x0050c8a8]
FCOMP dword ptr [0x004acdc0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0045363d
MOV dword ptr [0x0050c8a8],0xbf800000
MOV EDI,dword ptr [ESP + 0x98]
MOV ESI,dword ptr [EDI + 0xf4]
TEST ESI,ESI
JZ 0x004538c1
TEST dword ptr [ESI + 0x60],0x8000000
JZ 0x004538c1
MOV EAX,dword ptr [ESI + 0x254]
TEST EAX,EAX
JZ 0x004538c1
LEA EAX,[ESP + 0x54]
PUSH EAX
CALL 0x004313d0
ADD ESP,0x4
LEA EBX,[EDI + 0x50]
LEA ECX,[EDI + 0x138]
LEA EDX,[ESP + 0x64]
PUSH EBX
PUSH ECX
PUSH EDX
CALL 0x0042f860
ADD ESP,0xc
ADD EDI,0x40
LEA EAX,[ESP + 0x74]
PUSH EDI
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
LEA ECX,[ESP + 0x74]
LEA EDX,[ESP + 0x64]
LEA EAX,[ESP + 0x54]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042f9f0
ADD ESP,0xc
LEA ECX,[ESP + 0x64]
LEA EDX,[ESP + 0x54]
LEA EAX,[ESP + 0x74]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042f9f0
ADD ESP,0xc
LEA ECX,[ESP + 0x54]
PUSH ECX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EDX,[ESP + 0x64]
FSTP ST0
PUSH EDX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EAX,[ESP + 0x74]
FSTP ST0
PUSH EAX
CALL 0x0042f9b0
ADD ESP,0x4
LEA ECX,[ESP + 0x84]
FSTP ST0
PUSH EBX
PUSH ECX
CALL 0x0042f7d0
MOV EAX,dword ptr [ESI + 0x254]
ADD ESP,0x8
TEST EAX,EAX
JZ 0x0045372a
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
FLD dword ptr [0x0050c8a8]
FCOMP dword ptr [0x004acda0]
FLD dword ptr [0x0050c8a8]
FNSTSW AX
TEST AH,0x1
JZ 0x00453745
FCHS
FLD dword ptr [0x004acdc0]
FSUB ST0,ST1
FMUL dword ptr [0x004acdd4]
CALL 0x0049ed20
MOV EDX,dword ptr [ESI + 0x254]
PUSH EAX
PUSH 0x36
PUSH 0x8c
PUSH 0x59
PUSH 0x0
PUSH 0x0
PUSH EDX
FSTP ST0
CALL 0x0042b640
ADD ESP,0x1c
LEA EAX,[ESP + 0x14]
PUSH EAX
CALL 0x004313d0
ADD ESP,0x4
LEA ECX,[ESI + 0x50]
LEA EDX,[ESI + 0x258]
LEA EAX,[ESP + 0x24]
PUSH ECX
PUSH EDX
PUSH EAX
CALL 0x0042f860
ADD ESP,0xc
LEA ECX,[ESP + 0x24]
MOV dword ptr [ESP + 0x2c],0x0
PUSH ECX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EDX,[ESP + 0x34]
LEA EAX,[ESP + 0x24]
LEA ECX,[ESP + 0x14]
PUSH EDX
PUSH EAX
PUSH ECX
FSTP ST0
CALL 0x0042f9f0
ADD ESP,0xc
LEA EDX,[ESP + 0x24]
LEA EAX,[ESP + 0x14]
LEA ECX,[ESP + 0x34]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0042f9f0
ADD ESP,0xc
LEA EDX,[ESP + 0x14]
PUSH EDX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EAX,[ESP + 0x34]
FSTP ST0
PUSH EAX
CALL 0x0042f9b0
ADD ESP,0x4
LEA ECX,[ESP + 0x14]
LEA EDX,[ESP + 0x14]
PUSH ECX
PUSH 0xbbf5c28f
PUSH 0x3c75c28f
PUSH 0xbc75c28f
PUSH EDX
FSTP ST0
CALL 0x00431450
ADD ESP,0x14
LEA EAX,[ESP + 0x84]
LEA ECX,[ESP + 0x44]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EDX,[ESP + 0x64]
LEA EAX,[ESP + 0x44]
LEA ECX,[ESP + 0x44]
PUSH EDX
PUSH 0x40a00000
PUSH EAX
PUSH ECX
CALL 0x0042fa80
MOV EAX,dword ptr [ESP + 0x1c]
ADD ESP,0x10
LEA EDX,[ESP + 0x74]
LEA ECX,[ESP + 0x44]
PUSH EDX
PUSH EAX
LEA EDX,[ESP + 0x4c]
PUSH ECX
PUSH EDX
CALL 0x0042fa80
ADD ESP,0x10
LEA EAX,[ESP + 0x54]
LEA ECX,[ESP + 0x44]
LEA EDX,[ESP + 0x44]
PUSH EAX
PUSH 0x0
PUSH ECX
PUSH EDX
CALL 0x0042fa80
FLD dword ptr [0x0050c8a8]
FMUL qword ptr [0x004acf00]
ADD ESP,0x10
LEA EAX,[ESP + 0x24]
LEA EDX,[ESP + 0x44]
PUSH EAX
PUSH ECX
LEA ECX,[ESP + 0x4c]
FSTP dword ptr [ESP]
PUSH ECX
PUSH EDX
CALL 0x0042fa80
MOV ECX,dword ptr [ESI + 0x254]
ADD ESP,0x10
LEA EAX,[ESP + 0x14]
PUSH EAX
PUSH ECX
CALL 0x00431640
ADD ESP,0x8
POP EDI
POP ESI
POP EBX
ADD ESP,0x88
RET