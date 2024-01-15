; FUN_004538d0
MOV EAX,[0x0050c894]
SUB ESP,0x10
TEST EAX,EAX
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0x20]
PUSH EDI
MOV EDI,0xbf800000
JZ 0x00453901
MOV EAX,[0x004c3ee0]
MOV ECX,dword ptr [0x004c3edc]
MOV dword ptr [ESP + 0x10],EAX
MOV dword ptr [ESP + 0x24],ECX
JMP 0x004539cf
TEST byte ptr [ESI + 0x2a8],0x1
JZ 0x004539ac
FLD dword ptr [ESI + 0x2d8]
FCOMP dword ptr [0x004acda0]
FNSTSW AX
TEST AH,0x41
JNZ 0x004539a0
FLD dword ptr [ESI + 0x2d4]
FCOMP dword ptr [ESI + 0x2d8]
FLD qword ptr [0x00e22a40]
FNSTSW AX
TEST AH,0x41
JNZ 0x0045396b
FMUL qword ptr [0x004acf08]
FLD dword ptr [ESI + 0x2d4]
FXCH
FSUBP
FCOM dword ptr [ESI + 0x2d8]
FSTP dword ptr [ESI + 0x2d4]
FNSTSW AX
TEST AH,0x1
JZ 0x004539a0
MOV EDX,dword ptr [ESI + 0x2d8]
MOV dword ptr [ESI + 0x2d4],EDX
JMP 0x0045399a
FMUL qword ptr [0x004acf10]
FLD dword ptr [ESI + 0x2d4]
FXCH
FSUBP
FCOM dword ptr [ESI + 0x2d8]
FSTP dword ptr [ESI + 0x2d4]
FNSTSW AX
TEST AH,0x41
JNZ 0x004539a0
MOV EAX,dword ptr [ESI + 0x2d8]
MOV dword ptr [ESI + 0x2d4],EAX
MOV dword ptr [ESI + 0x2d8],EDI
MOV ECX,dword ptr [ESI + 0x2d4]
MOV dword ptr [ESP + 0x24],ECX
JMP 0x004539b4
MOV dword ptr [ESP + 0x24],0xbf800000
MOV EDX,dword ptr [ESI + 0x2b4]
MOV ECX,dword ptr [ESP + 0x24]
MOV EAX,EDX
MOV dword ptr [ESP + 0x10],EDX
MOV [0x004c3ee0],EAX
MOV dword ptr [0x004c3edc],ECX
MOV EAX,[0x0050c898]
TEST EAX,EAX
JZ 0x004539e4
MOV EDX,dword ptr [0x004c3ed8]
MOV dword ptr [ESP + 0x14],EDX
JMP 0x004539f6
MOV EAX,dword ptr [ESI + 0x2b0]
MOV ECX,EAX
MOV dword ptr [ESP + 0x14],EAX
MOV dword ptr [0x004c3ed8],ECX
MOV EAX,[0x0050c890]
MOV EDX,dword ptr [ESI + 0x2b8]
TEST EAX,EAX
MOV dword ptr [ESP + 0x18],EDX
JZ 0x00453a1d
MOV EAX,[0x0050c89c]
MOV EBP,dword ptr [0x004c3ee4]
MOV dword ptr [ESP + 0x1c],EAX
JMP 0x00453adb
MOV EBX,dword ptr [ESI + 0x2a8]
AND EBX,0x2
MOV dword ptr [ESP + 0x1c],EBX
JZ 0x00453ac2
FLD dword ptr [ESI + 0x2e0]
FCOMP dword ptr [0x004acda0]
FNSTSW AX
TEST AH,0x1
JNZ 0x00453ac2
FLD dword ptr [ESI + 0x2dc]
FCOMP dword ptr [ESI + 0x2e0]
FLD qword ptr [0x00e22a40]
FNSTSW AX
TEST AH,0x41
JNZ 0x00453a8d
FMUL qword ptr [0x004acf18]
FLD dword ptr [ESI + 0x2dc]
FXCH
FSUBP
FCOM dword ptr [ESI + 0x2e0]
FSTP dword ptr [ESI + 0x2dc]
FNSTSW AX
TEST AH,0x1
JZ 0x00453ac2
MOV ECX,dword ptr [ESI + 0x2e0]
MOV dword ptr [ESI + 0x2dc],ECX
JMP 0x00453abc
FMUL qword ptr [0x004acee0]
FLD dword ptr [ESI + 0x2dc]
FXCH
FSUBP
FCOM dword ptr [ESI + 0x2e0]
FSTP dword ptr [ESI + 0x2dc]
FNSTSW AX
TEST AH,0x41
JNZ 0x00453ac2
MOV EDX,dword ptr [ESI + 0x2e0]
MOV dword ptr [ESI + 0x2dc],EDX
MOV dword ptr [ESI + 0x2e0],EDI
FLD dword ptr [ESI + 0x2dc]
CALL 0x0049ed20
MOV EBP,EAX
MOV dword ptr [0x0050c89c],EBX
MOV dword ptr [0x004c3ee4],EBP
FLD dword ptr [ESP + 0x14]
FCOMP qword ptr [0x004ace50]
FNSTSW AX
TEST AH,0x1
JZ 0x00453b1f
FLD dword ptr [ESP + 0x18]
FCOMP qword ptr [0x004ace50]
FNSTSW AX
TEST AH,0x1
JZ 0x00453b1f
FLD dword ptr [ESP + 0x10]
FCOMP qword ptr [0x004ace50]
FNSTSW AX
TEST AH,0x1
JZ 0x00453b1f
FLD dword ptr [ESP + 0x24]
FCOMP qword ptr [0x004ace50]
FNSTSW AX
TEST AH,0x1
JNZ 0x00453b6d
MOV EAX,[0x0050ca14]
TEST EAX,EAX
JZ 0x00453b4c
TEST byte ptr [0x00dfb318],0x1
JZ 0x00453b4c
MOV EAX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x24]
MOV EDX,dword ptr [ESP + 0x10]
PUSH EAX
MOV EAX,dword ptr [ESI + 0x74]
PUSH ECX
PUSH EDX
PUSH EDI
PUSH 0x42f00000
PUSH EAX
JMP 0x00453b65
MOV ECX,dword ptr [ESP + 0x18]
MOV EDX,dword ptr [ESP + 0x24]
MOV EAX,dword ptr [ESP + 0x10]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x18]
PUSH EDX
MOV EDX,dword ptr [ESI + 0x74]
PUSH EAX
PUSH EDI
PUSH ECX
PUSH EDX
CALL 0x00483590
ADD ESP,0x18
MOV EBX,dword ptr [ESI + 0x2a8]
TEST BL,0x10
JZ 0x00453ba1
MOV EAX,dword ptr [ESI + 0x2c8]
MOV ECX,dword ptr [ESI + 0x2cc]
MOV EDX,dword ptr [ESI + 0x2d0]
MOV dword ptr [ESI + 0x2bc],EAX
MOV dword ptr [ESI + 0x2c0],ECX
MOV dword ptr [ESI + 0x2c4],EDX
JMP 0x00453cc7
MOV EAX,dword ptr [ESI + 0x2bc]
MOV EDI,dword ptr [ESI + 0x2c8]
CMP EAX,EDI
MOV dword ptr [ESP + 0x24],EAX
JLE 0x00453bda
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004acf20]
FILD dword ptr [ESP + 0x24]
FXCH
FSUBP
CALL 0x0049ed20
CMP EAX,EDI
MOV dword ptr [ESI + 0x2bc],EAX
JGE 0x00453c03
JMP 0x00453bfd
JGE 0x00453c03
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004acf20]
FILD dword ptr [ESP + 0x24]
FADDP
CALL 0x0049ed20
CMP EAX,EDI
MOV dword ptr [ESI + 0x2bc],EAX
JLE 0x00453c03
MOV dword ptr [ESI + 0x2bc],EDI
MOV EAX,dword ptr [ESI + 0x2c0]
MOV EDI,dword ptr [ESI + 0x2cc]
CMP EAX,EDI
MOV dword ptr [ESP + 0x24],EAX
JLE 0x00453c3c
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004acf20]
FILD dword ptr [ESP + 0x24]
FXCH
FSUBP
CALL 0x0049ed20
CMP EAX,EDI
MOV dword ptr [ESI + 0x2c0],EAX
JGE 0x00453c65
JMP 0x00453c5f
JGE 0x00453c65
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004acf20]
FILD dword ptr [ESP + 0x24]
FADDP
CALL 0x0049ed20
CMP EAX,EDI
MOV dword ptr [ESI + 0x2c0],EAX
JLE 0x00453c65
MOV dword ptr [ESI + 0x2c0],EDI
MOV EAX,dword ptr [ESI + 0x2c4]
MOV EDI,dword ptr [ESI + 0x2d0]
CMP EAX,EDI
MOV dword ptr [ESP + 0x24],EAX
JLE 0x00453c9e
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004acf20]
FILD dword ptr [ESP + 0x24]
FXCH
FSUBP
CALL 0x0049ed20
CMP EAX,EDI
MOV dword ptr [ESI + 0x2c4],EAX
JGE 0x00453cc7
JMP 0x00453cc1
JGE 0x00453cc7
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004acf20]
FILD dword ptr [ESP + 0x24]
FADDP
CALL 0x0049ed20
CMP EAX,EDI
MOV dword ptr [ESI + 0x2c4],EAX
JLE 0x00453cc7
MOV dword ptr [ESI + 0x2c4],EDI
MOV EAX,dword ptr [ESP + 0x1c]
XOR EDI,EDI
CMP EAX,EDI
JZ 0x00453d2b
AND EBX,0xffffffef
PUSH 0x1
MOV dword ptr [ESI + 0x2a8],EBX
CALL 0x0044e0c0
MOV EAX,dword ptr [ESI + 0x2c4]
MOV ECX,dword ptr [ESI + 0x2c0]
MOV EDX,dword ptr [ESI + 0x2bc]
ADD ESP,0x4
PUSH 0xff
PUSH EAX
PUSH ECX
PUSH EDX
PUSH 0x3e8
PUSH EBP
CALL 0x0044e0e0
MOV EAX,dword ptr [ESI + 0x2c4]
MOV ECX,dword ptr [ESI + 0x2c0]
MOV EDX,dword ptr [ESI + 0x2bc]
ADD ESP,0x18
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x00483a60
ADD ESP,0xc
JMP 0x00453d34
PUSH EDI
CALL 0x0044e0c0
ADD ESP,0x4
MOV EAX,dword ptr [ESI + 0x2a8]
LEA ECX,[ESI + 0x50]
PUSH EAX
PUSH ECX
CALL 0x00466e40
MOV EAX,[0x0050ccf0]
ADD ESP,0x8
CMP EAX,EDI
JZ 0x00453df3
TEST byte ptr [ESI + 0x2a8],0x4
MOV EAX,dword ptr [ESI + 0x74]
JZ 0x00453d6d
LEA EDX,[EAX + EAX*0x2]
MOV word ptr [EDX*0x4 + 0xe226fe],DI
JMP 0x00453d7a
LEA EAX,[EAX + EAX*0x2]
MOV word ptr [EAX*0x4 + 0xe226fe],0x1
CMP dword ptr [ESP + 0x1c],EDI
JZ 0x00453de5
MOV EAX,dword ptr [ESI + 0x74]
LEA ECX,[EAX + EAX*0x2]
MOV word ptr [ECX*0x4 + 0xe226f4],0x1
MOV EAX,dword ptr [ESI + 0x74]
LEA EDX,[EAX + EAX*0x2]
MOV word ptr [EDX*0x4 + 0xe226f6],BP
MOV EAX,dword ptr [ESI + 0x74]
MOV CX,word ptr [ESI + 0x2bc]
LEA EAX,[EAX + EAX*0x2]
MOV word ptr [EAX*0x4 + 0xe226f8],CX
MOV EAX,dword ptr [ESI + 0x74]
LEA EDX,[EAX + EAX*0x2]
MOV AX,word ptr [ESI + 0x2c0]
MOV word ptr [EDX*0x4 + 0xe226fa],AX
MOV EAX,dword ptr [ESI + 0x74]
MOV DX,word ptr [ESI + 0x2c4]
LEA ECX,[EAX + EAX*0x2]
MOV word ptr [ECX*0x4 + 0xe226fc],DX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x10
RET
MOV ESI,dword ptr [ESI + 0x74]
LEA EAX,[ESI + ESI*0x2]
MOV word ptr [EAX*0x4 + 0xe226f4],DI
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x10
RET
