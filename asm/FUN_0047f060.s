; FUN_0047f060
SUB ESP,0x9c
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0xa8]
XOR EBX,EBX
PUSH EBX
PUSH ESI
MOV dword ptr [ESP + 0x30],EBX
CALL 0x0044e620
MOV ECX,EAX
ADD ESP,0x8
FLD dword ptr [ECX*0x8 + 0xe22a60]
FCOMP dword ptr [0x004adf40]
FNSTSW AX
TEST AH,0x41
JZ 0x0047f43e
MOV EAX,dword ptr [ESI + 0x2c]
PUSH EDI
CMP EAX,EBX
PUSH EBP
JNZ 0x0047f0b6
FLD dword ptr [0x004adf40]
MOV dword ptr [ESP + 0x30],0x1
FST dword ptr [ESP + 0x1c]
JMP 0x0047f0c4
MOV EAX,dword ptr [ESI + 0x10]
FLD dword ptr [EAX*0x8 + 0xe22a60]
FST dword ptr [ESP + 0x1c]
FSTP dword ptr [ECX*0x8 + 0xe22a60]
FLD dword ptr [0x004adf4c]
FDIV dword ptr [ESP + 0xb4]
MOV ECX,0xc
LEA EDI,[ESP + 0x7c]
MOVSD.REP ES:EDI,ESI
LEA ECX,[ESP + 0x3c]
LEA EDX,[ESP + 0x7c]
PUSH ECX
PUSH EDX
MOV dword ptr [ESP + 0x8c],0x0
MOV dword ptr [ESP + 0x18],0x0
FSTP dword ptr [ESP + 0x3c]
CALL 0x0044ed80
MOV EAX,dword ptr [ESP + 0x74]
MOV ECX,dword ptr [ESP + 0x78]
MOV EDX,dword ptr [ESP + 0x7c]
ADD ESP,0x8
MOV dword ptr [ESP + 0x24],EAX
MOV dword ptr [ESP + 0x28],ECX
MOV dword ptr [ESP + 0x2c],EDX
MOV dword ptr [ESP + 0x18],EBX
OR ESI,0xffffffff
FLD dword ptr [0x004adf4c]
MOV EAX,dword ptr [ESP + 0x18]
MOV dword ptr [ESP + 0x20],0x0
FCOMP dword ptr [ESP + 0xb4]
INC EAX
MOV EDI,0x1
MOV dword ptr [ESP + 0x18],EAX
FNSTSW AX
TEST AH,0x1
JZ 0x0047f1c1
FLD dword ptr [ESP + 0x20]
FADD dword ptr [ESP + 0x34]
LEA ECX,[ESP + 0x3c]
LEA EDX,[ESP + 0x7c]
FSTP dword ptr [ESP + 0x20]
MOV EAX,dword ptr [ESP + 0x20]
PUSH EAX
PUSH ECX
PUSH EDX
CALL 0x0044eeb0
ADD ESP,0xc
LEA EAX,[ESP + 0x6c]
LEA ECX,[ESP + 0x24]
PUSH EAX
PUSH ECX
CALL 0x0042f950
FADD dword ptr [ESP + 0x18]
ADD ESP,0x8
INC EDI
MOV EAX,dword ptr [ESP + 0x70]
MOV dword ptr [ESP + 0x38],EDI
MOV EDX,dword ptr [ESP + 0x6c]
MOV ECX,dword ptr [ESP + 0x74]
FSTP dword ptr [ESP + 0x10]
FILD dword ptr [ESP + 0x38]
MOV dword ptr [ESP + 0x28],EAX
MOV dword ptr [ESP + 0x24],EDX
MOV dword ptr [ESP + 0x2c],ECX
FCOMP dword ptr [ESP + 0xb4]
FNSTSW AX
TEST AH,0x1
JNZ 0x0047f155
LEA EDX,[ESP + 0x3c]
LEA EAX,[ESP + 0x7c]
PUSH EDX
PUSH EAX
MOV dword ptr [ESP + 0x8c],0x3f800000
CALL 0x0044ed80
ADD ESP,0x8
LEA ECX,[ESP + 0x7c]
MOV EBP,ESI
PUSH 0x0
PUSH ECX
CALL 0x0044e620
MOV ESI,EAX
ADD ESP,0x8
CMP EBP,ESI
JNZ 0x0047f2c3
MOV EAX,[0x004c7be4]
MOV EBX,0x1
CMP EAX,-0x2
MOV dword ptr [ESP + 0x14],0x3f800000
JNZ 0x0047f2b7
MOV EDX,dword ptr [ESP + 0x3c]
MOV EAX,dword ptr [ESP + 0x40]
MOV ECX,dword ptr [ESP + 0x44]
MOV dword ptr [0x00e25960],EDX
MOV EDX,dword ptr [ESP + 0x48]
MOV [0x00e25964],EAX
MOV EAX,dword ptr [ESP + 0x4c]
MOV dword ptr [0x00e25968],ECX
MOV ECX,dword ptr [ESP + 0x50]
MOV dword ptr [0x00e2596c],EDX
MOV EDX,dword ptr [ESP + 0x54]
MOV [0x00e25970],EAX
MOV EAX,dword ptr [ESP + 0x58]
MOV dword ptr [0x00e25974],ECX
MOV ECX,dword ptr [ESP + 0x5c]
MOV dword ptr [0x00e25978],EDX
MOV EDX,dword ptr [ESP + 0x60]
MOV [0x00e2597c],EAX
MOV EAX,dword ptr [ESP + 0x64]
MOV dword ptr [0x00e25980],ECX
MOV ECX,dword ptr [ESP + 0x68]
MOV dword ptr [0x00e25984],EDX
MOV EDX,dword ptr [ESP + 0x6c]
MOV [0x00e25988],EAX
MOV EAX,dword ptr [ESP + 0x70]
MOV dword ptr [0x00e2598c],ECX
MOV ECX,dword ptr [ESP + 0x74]
MOV dword ptr [0x00e25990],EDX
MOV EDX,dword ptr [ESP + 0x78]
MOV dword ptr [0x004c7be4],ESI
MOV [0x00e25994],EAX
MOV dword ptr [0x00e25998],ECX
MOV dword ptr [0x00e2599c],EDX
JMP 0x0047f331
MOV dword ptr [0x004c7be4],0xfffffffd
JMP 0x0047f331
LEA EAX,[ESP + 0x6c]
LEA ECX,[ESP + 0x24]
PUSH EAX
PUSH ECX
CALL 0x0042f950
FLD dword ptr [ESI*0x8 + 0xe22a60]
FCOMP dword ptr [0x004adf40]
MOV EAX,dword ptr [ESP + 0x78]
MOV EDX,dword ptr [ESP + 0x74]
MOV ECX,dword ptr [ESP + 0x7c]
MOV dword ptr [ESP + 0x30],EAX
ADD ESP,0x8
MOV dword ptr [ESP + 0x24],EDX
FADD dword ptr [ESP + 0x10]
FNSTSW AX
MOV dword ptr [ESP + 0x2c],ECX
TEST AH,0x1
FSTP dword ptr [ESP + 0x10]
JZ 0x0047f321
FLD dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x84],0x0
FSTP dword ptr [ESI*0x8 + 0xe22a60]
JMP 0x0047f331
FLD dword ptr [ESI*0x8 + 0xe22a60]
MOV EBX,0x1
FSTP dword ptr [ESP + 0x14]
TEST EBX,EBX
JZ 0x0047f12b
FLD dword ptr [ESP + 0x14]
FCOMP dword ptr [0x004adf40]
FNSTSW AX
TEST AH,0x40
JZ 0x0047f352
MOV dword ptr [ESP + 0x14],0x3f800000
MOV EAX,dword ptr [ESP + 0x30]
TEST EAX,EAX
JZ 0x0047f364
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [0x004c7be0],EDX
MOV ESI,dword ptr [ESP + 0xb0]
MOV EAX,dword ptr [ESP + 0x18]
MOV ECX,0xc
LEA EDI,[ESP + 0x7c]
MOVSD.REP ES:EDI,ESI
MOV EDI,dword ptr [ESP + 0xbc]
XOR ESI,ESI
TEST EAX,EAX
JLE 0x0047f427
MOV EBX,dword ptr [ESP + 0xb8]
LEA EAX,[ESP + 0x7c]
PUSH 0x0
PUSH EAX
CALL 0x0044e620
MOV CX,word ptr [EDI]
ADD ESP,0x8
MOV word ptr [EBX + EAX*0x2],CX
FLD dword ptr [EAX*0x8 + 0xe22a60]
FSUB dword ptr [ESP + 0x1c]
FLD dword ptr [0x004adf4c]
FXCH
FDIV dword ptr [ESP + 0x10]
FXCH
TEST ESI,ESI
FSUB ST0,ST1
FXCH
FMUL dword ptr [ESP + 0x14]
FXCH
FMUL dword ptr [ESP + 0x1c]
FXCH
FADDP
FST dword ptr [EAX*0x8 + 0xe22a60]
JZ 0x0047f3ee
FSUB dword ptr [EBP*0x8 + 0xe22a60]
FSTP dword ptr [EBP*0x8 + 0xe22a64]
JMP 0x0047f3f0
FSTP ST0
MOV EBP,EAX
LEA EDX,[ESP + 0x3c]
LEA EAX,[ESP + 0x7c]
PUSH EDX
PUSH EAX
MOV dword ptr [ESP + 0x8c],0x3f800000
CALL 0x0044ed80
MOV EAX,dword ptr [ESP + 0x20]
ADD ESP,0x8
INC ESI
MOV dword ptr [ESP + 0x84],0x0
CMP ESI,EAX
JL 0x0047f392
FLD dword ptr [ESP + 0x14]
FSUB dword ptr [EBP*0x8 + 0xe22a60]
FSTP dword ptr [EBP*0x8 + 0xe22a64]
INC word ptr [EDI]
POP EBP
POP EDI
POP ESI
POP EBX
ADD ESP,0x9c
RET
