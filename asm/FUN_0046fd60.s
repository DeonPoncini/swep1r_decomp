; FUN_0046fd60
SUB ESP,0x64
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x74]
PUSH EDI
XOR ECX,ECX
XOR EBX,EBX
XOR EDI,EDI
XOR EBP,EBP
CMP ESI,ECX
MOV dword ptr [ESP + 0x2c],ECX
MOV dword ptr [ESP + 0x28],ECX
MOV dword ptr [ESP + 0x14],ECX
MOV dword ptr [ESP + 0x1c],ECX
MOV dword ptr [ESP + 0x24],ECX
MOV dword ptr [ESP + 0x20],ECX
JZ 0x004704e8
TEST dword ptr [ESI + 0x60],0x2007800
JNZ 0x004704e8
FLD dword ptr [ESI + 0x1e8]
FCOMP dword ptr [0x004ad95c]
FNSTSW AX
TEST AH,0x41
JZ 0x004704e8
MOV EAX,dword ptr [ESI + 0x140]
CMP EAX,ECX
JZ 0x0046fe35
PUSH EAX
CALL 0x004318b0
ADD ESP,0x4
TEST EAX,EAX
JZ 0x0046fe2c
TEST byte ptr [EAX],0x20
JNZ 0x004704e8
MOV EAX,dword ptr [EAX + 0x2c]
MOV EDX,0x1
TEST AH,0x20
JZ 0x0046fde8
MOV dword ptr [ESP + 0x2c],EDX
TEST AH,0x40
JNZ 0x004704e8
TEST AH,0x80
JZ 0x0046fdfa
MOV dword ptr [ESP + 0x28],EDX
TEST AH,0x1
JZ 0x0046fe03
MOV dword ptr [ESP + 0x14],EDX
TEST AH,0x2
JZ 0x0046fe0a
MOV EBX,EDX
TEST AH,0x4
JZ 0x0046fe13
MOV dword ptr [ESP + 0x1c],EDX
TEST AH,0x10
JZ 0x0046fe1c
MOV dword ptr [ESP + 0x24],EDX
TEST AL,0x80
JZ 0x0046fe22
MOV EBP,EDX
TEST AL,0x40
JZ 0x0046fe31
MOV EDI,EDX
XOR ECX,ECX
JMP 0x0046fe3a
MOV EDX,0x1
XOR ECX,ECX
JMP 0x0046fe3a
MOV EDX,0x1
CMP dword ptr [ESP + 0x90],ECX
JZ 0x0046fe47
OR dword ptr [ESP + 0x30],EDX
LEA EAX,[ESP + 0x34]
PUSH EAX
CALL 0x004313d0
MOV EAX,dword ptr [ESP + 0x80]
ADD ESP,0x4
LEA ECX,[ESP + 0x34]
FLD dword ptr [EAX + 0x30]
FLD dword ptr [EAX + 0x34]
FLD dword ptr [EAX + 0x38]
FLD dword ptr [EAX + 0x20]
FLD dword ptr [EAX + 0x24]
FLD dword ptr [EAX + 0x28]
FXCH ST5
FSTP dword ptr [ESP + 0x64]
FLD dword ptr [EAX + 0x10]
FXCH ST4
FSTP dword ptr [ESP + 0x68]
FLD dword ptr [EAX + 0x14]
FXCH ST3
FSTP dword ptr [ESP + 0x6c]
FLD dword ptr [EAX + 0x18]
FXCH ST2
FSTP dword ptr [ESP + 0x44]
FLD dword ptr [EAX]
FXCH
FSTP dword ptr [ESP + 0x48]
FLD dword ptr [EAX + 0x4]
FXCH ST5
FSTP dword ptr [ESP + 0x4c]
FLD dword ptr [EAX + 0x8]
FXCH ST4
FSTP dword ptr [ESP + 0x34]
FXCH ST2
FSTP dword ptr [ESP + 0x38]
PUSH ECX
FSTP dword ptr [ESP + 0x40]
FSTP dword ptr [ESP + 0x58]
FXCH
FSTP dword ptr [ESP + 0x5c]
FSTP dword ptr [ESP + 0x60]
CALL 0x0042f9b0
ADD ESP,0x4
LEA EDX,[ESP + 0x44]
FSTP ST0
PUSH EDX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EAX,[ESP + 0x54]
FSTP ST0
PUSH EAX
CALL 0x0042f9b0
FLD dword ptr [ESI + 0x1a0]
FSUB dword ptr [0x004ad9e0]
FXCH
FSTP ST0
ADD ESP,0x4
FMUL dword ptr [0x004ada48]
FST dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x41
JNZ 0x004704e8
FLD dword ptr [ESP + 0x18]
FCOMP dword ptr [0x004ad958]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046ff2f
MOV dword ptr [ESP + 0x18],0x3f800000
MOV EAX,[0x0050ca8c]
MOV dword ptr [ESP + 0x78],0x0
CMP EAX,0x7
MOV dword ptr [ESP + 0x90],0x0
MOV dword ptr [ESP + 0x7c],0x0
MOV dword ptr [ESP + 0x10],0x0
JA 0x00470319
JMP dword ptr [EAX*0x4 + 0x4704f0]
TEST EDI,EDI
JNZ 0x0046ff9f
TEST EBX,EBX
JZ 0x0046ff97
MOV dword ptr [ESP + 0x10],0x43160000
MOV dword ptr [ESP + 0x7c],0x42f00000
MOV dword ptr [ESP + 0x90],0x42c80000
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
MOV EAX,dword ptr [ESP + 0x1c]
TEST EAX,EAX
JZ 0x0046ffb4
MOV dword ptr [ESP + 0x10],0x43480000
MOV dword ptr [ESP + 0x7c],0x432a0000
JMP 0x0047005f
MOV dword ptr [ESP + 0x10],0x43360000
MOV dword ptr [ESP + 0x7c],0x43240000
MOV dword ptr [ESP + 0x90],0x43080000
MOV dword ptr [ESP + 0x78],0x43480000
JMP 0x00470319
TEST EBP,EBP
MOV dword ptr [ESP + 0x10],0x435c0000
MOV dword ptr [ESP + 0x7c],0x437a0000
MOV dword ptr [ESP + 0x90],0x437f0000
JZ 0x00470008
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
TEST EDI,EDI
JZ 0x00470019
MOV dword ptr [ESP + 0x78],0x43160000
JMP 0x00470319
MOV EAX,dword ptr [ESP + 0x24]
TEST EAX,EAX
JZ 0x0047002e
MOV dword ptr [ESP + 0x78],0x0
JMP 0x00470319
MOV EAX,dword ptr [ESP + 0x28]
TEST EAX,EAX
JZ 0x004701ce
MOV dword ptr [ESP + 0x78],0x0
JMP 0x00470319
MOV EAX,dword ptr [ESP + 0x14]
TEST EAX,EAX
JZ 0x00470077
MOV dword ptr [ESP + 0x10],0x42f00000
MOV dword ptr [ESP + 0x7c],0x42c80000
MOV dword ptr [ESP + 0x90],0x42f00000
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
TEST EDI,EDI
JZ 0x004700a3
MOV dword ptr [ESP + 0x10],0x42960000
MOV dword ptr [ESP + 0x7c],0x42960000
MOV dword ptr [ESP + 0x90],0x42f00000
MOV dword ptr [ESP + 0x78],0x42800000
JMP 0x00470319
MOV dword ptr [ESP + 0x10],0x42f00000
MOV dword ptr [ESP + 0x7c],0x42c80000
MOV dword ptr [ESP + 0x90],0x42f00000
MOV dword ptr [ESP + 0x78],0x41800000
JMP 0x00470319
TEST EDI,EDI
JZ 0x004700f7
MOV dword ptr [ESP + 0x10],0x433e0000
MOV dword ptr [ESP + 0x7c],0x43160000
MOV dword ptr [ESP + 0x90],0x42dc0000
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
TEST EBX,EBX
JZ 0x00470123
MOV dword ptr [ESP + 0x10],0x432f0000
MOV dword ptr [ESP + 0x7c],0x43070000
MOV dword ptr [ESP + 0x90],0x42aa0000
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
MOV EAX,dword ptr [ESP + 0x1c]
TEST EAX,EAX
JZ 0x00470153
MOV dword ptr [ESP + 0x10],0x42960000
MOV dword ptr [ESP + 0x7c],0x428c0000
MOV dword ptr [ESP + 0x90],0x42480000
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
MOV EAX,dword ptr [ESP + 0x14]
TEST EAX,EAX
JZ 0x00470183
MOV dword ptr [ESP + 0x10],0x435c0000
MOV dword ptr [ESP + 0x7c],0x435c0000
MOV dword ptr [ESP + 0x90],0x43480000
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
MOV EAX,dword ptr [ESP + 0x2c]
TEST EAX,EAX
JZ 0x004701b3
MOV dword ptr [ESP + 0x10],0x437f0000
MOV dword ptr [ESP + 0x7c],0x42c80000
MOV dword ptr [ESP + 0x90],0x41f00000
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
MOV dword ptr [ESP + 0x10],0x42dc0000
MOV dword ptr [ESP + 0x7c],0x42b40000
MOV dword ptr [ESP + 0x90],0x42a00000
MOV dword ptr [ESP + 0x78],0x42480000
JMP 0x00470319
TEST EDI,EDI
JZ 0x00470207
MOV dword ptr [ESP + 0x10],0x43520000
MOV dword ptr [ESP + 0x7c],0x43020000
MOV dword ptr [ESP + 0x90],0x42700000
MOV dword ptr [ESP + 0x78],0x43480000
JMP 0x00470319
TEST EBX,EBX
MOV dword ptr [ESP + 0x10],0x43520000
MOV dword ptr [ESP + 0x7c],0x43020000
MOV dword ptr [ESP + 0x90],0x42700000
JZ 0x00470233
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
MOV dword ptr [ESP + 0x78],0x41800000
JMP 0x00470319
TEST EDI,EDI
JZ 0x0047026c
MOV dword ptr [ESP + 0x10],0x433a0000
MOV dword ptr [ESP + 0x7c],0x43330000
MOV dword ptr [ESP + 0x90],0x432a0000
MOV dword ptr [ESP + 0x78],0x43160000
JMP 0x00470319
TEST EBX,EBX
JZ 0x00470298
MOV dword ptr [ESP + 0x10],0x43090000
MOV dword ptr [ESP + 0x7c],0x42f40000
MOV dword ptr [ESP + 0x90],0x42d00000
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
MOV dword ptr [ESP + 0x10],0x434b0000
MOV dword ptr [ESP + 0x7c],0x434b0000
MOV dword ptr [ESP + 0x90],0x434c0000
MOV dword ptr [ESP + 0x78],0x42960000
JMP 0x00470319
MOV EAX,dword ptr [ESP + 0x14]
TEST EAX,EAX
JZ 0x004702ea
MOV dword ptr [ESP + 0x10],0x0
MOV dword ptr [ESP + 0x7c],0x437f0000
MOV dword ptr [ESP + 0x90],0x0
MOV dword ptr [ESP + 0x78],0x437f0000
JMP 0x00470319
TEST EBX,EBX
MOV dword ptr [ESP + 0x10],0x43160000
MOV dword ptr [ESP + 0x7c],0x43160000
MOV dword ptr [ESP + 0x90],0x43660000
MOV dword ptr [ESP + 0x78],0x437f0000
JNZ 0x00470319
MOV dword ptr [ESP + 0x78],0x43000000
FLD dword ptr [ESP + 0x4c]
FCOMP dword ptr [0x004adac8]
FNSTSW AX
TEST AH,0x41
JNZ 0x004704e8
MOV EAX,dword ptr [ESP + 0x14]
TEST EAX,EAX
JZ 0x00470346
FLD dword ptr [0x004ad968]
MOV dword ptr [ESP + 0x20],0x1
JMP 0x0047034d
FLD dword ptr [ESP + 0x8c]
LEA ECX,[ESP + 0x34]
LEA EDX,[ESP + 0x64]
PUSH ECX
PUSH ECX
FCHS
FSTP dword ptr [ESP]
LEA EAX,[ESP + 0x6c]
PUSH EDX
PUSH EAX
CALL 0x0042fa80
FLD dword ptr [ESP + 0x88]
FMUL dword ptr [ESP + 0x28]
FLD dword ptr [ESP + 0x44]
FLD dword ptr [ESP + 0x48]
FLD dword ptr [ESP + 0x4c]
FLD ST3
FCOMP dword ptr [0x004ad958]
FLD dword ptr [ESP + 0x54]
FLD dword ptr [ESP + 0x58]
FLD dword ptr [ESP + 0x5c]
FXCH ST5
FMUL dword ptr [ESP + 0x90]
FNSTSW AX
ADD ESP,0x10
TEST AH,0x1
FSTP dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x54]
FXCH ST4
FMUL dword ptr [ESP + 0x80]
FSTP dword ptr [ESP + 0x38]
FLD dword ptr [ESP + 0x58]
FXCH ST3
FMUL dword ptr [ESP + 0x80]
FSTP dword ptr [ESP + 0x3c]
FLD dword ptr [ESP + 0x5c]
FXCH ST2
FMUL dword ptr [ESP + 0x84]
FSTP dword ptr [ESP + 0x44]
FMUL dword ptr [ESP + 0x84]
FXCH ST4
FMUL dword ptr [ESP + 0x84]
FXCH ST3
FMUL dword ptr [ESP + 0x88]
FXCH ST4
FSTP dword ptr [ESP + 0x48]
FXCH
FMUL dword ptr [ESP + 0x88]
FXCH ST2
FSTP dword ptr [ESP + 0x4c]
FMUL dword ptr [ESP + 0x88]
FXCH ST2
FSTP dword ptr [ESP + 0x54]
FSTP dword ptr [ESP + 0x58]
FSTP dword ptr [ESP + 0x5c]
JNZ 0x00470436
FCOM dword ptr [0x004adacc]
FNSTSW AX
TEST AH,0x41
JNZ 0x0047043e
FSTP ST0
FLD dword ptr [0x004adacc]
JMP 0x0047043e
FSTP ST0
FLD dword ptr [0x004ad958]
MOV EAX,dword ptr [ESP + 0x1c]
TEST EAX,EAX
JZ 0x0047044e
MOV dword ptr [ESP + 0x20],0x1
FCOM dword ptr [0x004ad968]
FNSTSW AX
TEST AH,0x41
JNZ 0x004704e6
MOV ECX,dword ptr [ESP + 0x30]
PUSH ECX
PUSH 0x3e4ccccd
CALL 0x0049ed20
FLD dword ptr [ESP + 0x98]
PUSH EAX
CALL 0x0049ed20
FLD dword ptr [ESP + 0x88]
PUSH EAX
CALL 0x0049ed20
FLD dword ptr [ESP + 0x20]
PUSH EAX
CALL 0x0049ed20
LEA EDX,[ESP + 0x48]
PUSH EAX
PUSH EDX
CALL 0x0047bc40
ADD ESP,0x1c
TEST EAX,EAX
JZ 0x004704e8
MOV EAX,dword ptr [ESP + 0x20]
TEST EAX,EAX
JZ 0x004704e8
FLD dword ptr [ESP + 0x18]
FMUL dword ptr [0x004ad964]
PUSH 0x1
PUSH 0x3f800000
FMUL dword ptr [0x004ad97c]
FSTP dword ptr [ESP + 0x88]
MOV EAX,dword ptr [ESP + 0x88]
PUSH EAX
PUSH 0x7
PUSH 0x45
CALL 0x00426c80
ADD ESP,0x14
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x64
RET
FSTP ST0
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x64
RET
