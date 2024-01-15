; FUN_0046a5f0
PUSH EBX
PUSH ESI
PUSH 0x536d6f6b
CALL 0x00450d20
MOV ESI,EAX
XOR EBX,EBX
ADD ESP,0x4
CMP ESI,EBX
JNZ 0x0046a60c
XOR EAX,EAX
POP ESI
POP EBX
RET
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0x14]
MOV dword ptr [ESI + 0x64],EAX
MOV EAX,dword ptr [ESP + 0x1c]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x10]
PUSH EAX
PUSH EAX
LEA EDX,[ESI + 0x20]
PUSH EAX
PUSH EDX
MOV dword ptr [ESI + 0x60],EDI
MOV dword ptr [ESI + 0x68],ECX
CALL 0x004310b0
MOV EAX,dword ptr [ESP + 0x2c]
ADD ESP,0x10
LEA ECX,[ESI + 0x50]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
LEA EAX,[EDI + -0x2]
ADD ESP,0x8
CMP EAX,0x6
JA 0x0046a8f3
JMP dword ptr [EAX*0x4 + 0x46a8fc]
FLD dword ptr [ESP + 0x20]
FMUL qword ptr [0x004ad730]
PUSH EBX
PUSH ECX
LEA EDX,[ESI + 0x74]
MOV dword ptr [ESI + 0x70],0x5
FSTP dword ptr [ESP]
PUSH EBX
PUSH EDX
CALL 0x0042f7b0
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [0x004ad738]
MOV EAX,dword ptr [ESP + 0x30]
ADD ESP,0x10
LEA ECX,[ESI + 0xb4]
MOV EDI,0x3f000000
PUSH 0x3f800000
PUSH 0x3f800000
FSTP dword ptr [ESI + 0x8c]
FLD dword ptr [ESP + 0x28]
FMUL dword ptr [0x004ad73c]
PUSH 0x3f800000
PUSH 0x3f800000
PUSH ECX
MOV dword ptr [ESI + 0x88],EAX
MOV dword ptr [ESI + 0x98],0x43b40000
MOV dword ptr [ESI + 0x9c],0xc1100000
FSTP dword ptr [ESI + 0x90]
FLD dword ptr [ESP + 0x34]
FMUL dword ptr [0x004ad740]
MOV dword ptr [ESI + 0xa0],0x3fb33333
MOV dword ptr [ESI + 0xa4],EBX
MOV dword ptr [ESI + 0xa8],0x40400000
MOV dword ptr [ESI + 0xac],0x3f800000
MOV dword ptr [ESI + 0xb0],EDI
FSTP dword ptr [ESI + 0x94]
CALL 0x00430a90
ADD ESP,0x14
LEA EDX,[ESI + 0xc4]
PUSH 0x3f800000
PUSH EBX
PUSH EBX
PUSH EBX
PUSH EDX
JMP 0x0046a8cf
FLD dword ptr [ESP + 0x20]
FMUL qword ptr [0x004ad748]
PUSH ECX
LEA EAX,[ESI + 0x74]
MOV dword ptr [ESI + 0x70],0x5
FSTP dword ptr [ESP]
PUSH EBX
PUSH EBX
PUSH EAX
CALL 0x0042f7b0
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [0x004ad740]
MOV ECX,dword ptr [ESP + 0x30]
ADD ESP,0x10
LEA EDX,[ESI + 0xb4]
MOV EDI,0x3f000000
PUSH 0x3f800000
PUSH 0x3f800000
FST dword ptr [ESI + 0x8c]
FLD dword ptr [ESP + 0x28]
FMUL dword ptr [0x004ad73c]
PUSH 0x3f800000
PUSH 0x3f800000
PUSH EDX
MOV dword ptr [ESI + 0x88],ECX
MOV dword ptr [ESI + 0x98],0x43b40000
MOV dword ptr [ESI + 0x9c],0xc1100000
FSTP dword ptr [ESI + 0x90]
MOV dword ptr [ESI + 0xa0],0x3fb33333
MOV dword ptr [ESI + 0xa4],EBX
FSTP dword ptr [ESI + 0x94]
MOV dword ptr [ESI + 0xa8],0x40400000
MOV dword ptr [ESI + 0xac],0x3f800000
MOV dword ptr [ESI + 0xb0],EDI
CALL 0x00430a90
ADD ESP,0x14
LEA EAX,[ESI + 0xc4]
PUSH 0x3f800000
PUSH EBX
PUSH EBX
PUSH EBX
PUSH EAX
JMP 0x0046a8cf
FLD dword ptr [ESP + 0x20]
FMUL qword ptr [0x004ad730]
PUSH EBX
PUSH ECX
LEA ECX,[ESI + 0x74]
MOV dword ptr [ESI + 0x70],0x5
FSTP dword ptr [ESP]
PUSH EBX
PUSH ECX
CALL 0x0042f7b0
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [0x004ad738]
MOV EDX,dword ptr [ESP + 0x30]
ADD ESP,0x10
LEA EAX,[ESI + 0xb4]
MOV EDI,0x3f000000
PUSH 0x3f800000
PUSH 0x3f800000
FSTP dword ptr [ESI + 0x8c]
FLD dword ptr [ESP + 0x28]
FMUL dword ptr [0x004ad73c]
PUSH 0x3f800000
PUSH 0x3f800000
PUSH EAX
MOV dword ptr [ESI + 0x88],EDX
MOV dword ptr [ESI + 0x98],0x43b40000
MOV dword ptr [ESI + 0x9c],0xc1100000
FSTP dword ptr [ESI + 0x90]
FLD dword ptr [ESP + 0x34]
FMUL dword ptr [0x004ad740]
MOV dword ptr [ESI + 0xa0],0x4019999a
MOV dword ptr [ESI + 0xa4],EDI
MOV dword ptr [ESI + 0xa8],0x40400000
MOV dword ptr [ESI + 0xac],0x3f800000
MOV dword ptr [ESI + 0xb0],EDI
FSTP dword ptr [ESI + 0x94]
CALL 0x00430a90
ADD ESP,0x14
LEA ECX,[ESI + 0xc4]
PUSH 0x3f800000
PUSH EBX
PUSH EBX
PUSH EBX
PUSH ECX
CALL 0x00430a90
ADD ESP,0x14
MOV dword ptr [ESI + 0x80],0x3dcccccd
MOV dword ptr [ESI + 0x84],EDI
MOV dword ptr [ESI + 0xd4],EBX
MOV dword ptr [ESI + 0xd8],EBX
MOV EAX,ESI
POP EDI
POP ESI
POP EBX
RET
