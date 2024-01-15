; FUN_00452aa0
SUB ESP,0xdc
PUSH EBX
PUSH EBP
PUSH ESI
MOV ESI,dword ptr [ESP + 0xec]
PUSH EDI
XOR EBP,EBP
MOV EDI,dword ptr [ESI + 0xf4]
TEST EDI,EDI
JZ 0x00453393
MOV EAX,dword ptr [EDI + 0x60]
MOV ECX,EBP
AND EAX,0x20
SETZ CL
TEST EAX,EAX
MOV dword ptr [ESP + 0x2c],ECX
JZ 0x00452b0b
FLD dword ptr [EDI + 0x1a0]
FCOMP dword ptr [0x004acdac]
FNSTSW AX
TEST AH,0x1
JZ 0x00452b0b
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004ace78]
LEA EDX,[EDI + 0x30]
LEA EAX,[ESI + 0x254]
PUSH EDX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EAX
PUSH EAX
CALL 0x0042fa80
ADD ESP,0x10
TEST dword ptr [EDI + 0x60],0x6000000
JZ 0x00452b1e
MOV dword ptr [ESP + 0x1c],0x1
JMP 0x00452b2b
MOV dword ptr [ESP + 0x1c],0x0
MOV EBP,0x1
MOV dword ptr [ESI + 0x2b0],0x42c80000
MOV EAX,dword ptr [EDI + 0x1e70]
TEST EBP,EBP
MOV ECX,dword ptr [EAX + 0x18]
MOV EAX,dword ptr [ECX]
LEA EAX,[EAX + EAX*0x2]
JZ 0x00452b6d
LEA EAX,[EAX + EAX*0x8]
SHL EAX,0x2
FLD dword ptr [EAX + 0x4c70d8]
FLD dword ptr [EDI + 0x19b4]
FMUL qword ptr [0x004acdf0]
MOV EDX,dword ptr [EAX + 0x4c70d4]
MOV dword ptr [ESP + 0x10],EDX
FADDP
JMP 0x00452bbb
LEA EDX,[EAX + EAX*0x8]
MOV EAX,dword ptr [EDX*0x4 + 0x4c70d4]
MOV dword ptr [ESI + 0x148],EAX
MOV ECX,dword ptr [EDI + 0x1e70]
MOV EDX,dword ptr [ECX + 0x18]
MOV EAX,dword ptr [EDX]
LEA EAX,[EAX + EAX*0x2]
LEA EAX,[EAX + EAX*0x8]
FLD dword ptr [EAX*0x4 + 0x4c70d8]
FST dword ptr [ESI + 0x14c]
FLD dword ptr [EDI + 0x19b4]
FMUL qword ptr [0x004acdf0]
FXCH
FADDP
FST dword ptr [ESI + 0x14c]
MOV ECX,dword ptr [ESI + 0x148]
MOV dword ptr [ESP + 0x10],ECX
CMP dword ptr [ESI + 0x7c],0x2
FLD ST0
JNZ 0x00452c05
FSTP ST0
FLD dword ptr [ESP + 0x10]
FADD ST0,ST0
FXCH
FADD ST0,ST0
FXCH
FST dword ptr [ESP + 0x10]
FCOMP dword ptr [0x004ace68]
FNSTSW AX
TEST AH,0x41
JNZ 0x00452bea
MOV dword ptr [ESP + 0x10],0x41f00000
FCOM dword ptr [0x004ace80]
FNSTSW AX
TEST AH,0x41
JNZ 0x00452bff
FSTP ST0
FLD dword ptr [0x004ace80]
FLD dword ptr [0x004ace84]
FLD dword ptr [EDI + 0x1a0]
FSUB dword ptr [0x004acdd0]
FMUL qword ptr [0x004ace88]
FCOM qword ptr [0x004ace50]
FNSTSW AX
TEST AH,0x1
JZ 0x00452c2c
FSTP ST0
FLD dword ptr [0x004acda0]
FCOM qword ptr [0x004ace00]
FNSTSW AX
TEST AH,0x41
JNZ 0x00452c41
FSTP ST0
FLD dword ptr [0x004acdc0]
FMUL qword ptr [0x004acde8]
FLD dword ptr [ESP + 0x10]
FXCH
FSUB qword ptr [0x004ace90]
FXCH
FMUL ST1
FXCH ST3
FMUL ST1
FXCH ST2
FMUL ST1
FXCH ST3
FSTP dword ptr [ESP + 0x10]
FXCH
FSTP dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [ESP + 0x18]
FSTP ST0
CALL 0x0045d350
CMP EAX,0x2
JNZ 0x00452c8b
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004ace98]
FSTP dword ptr [ESP + 0x10]
FLD dword ptr [ESI + 0x294]
FLD dword ptr [ESI + 0x298]
FLD dword ptr [ESI + 0x29c]
FXCH ST2
FSUB dword ptr [ESI + 0x254]
FXCH
FSUB dword ptr [ESI + 0x258]
FXCH ST2
FSUB dword ptr [ESI + 0x25c]
FXCH
FSTP dword ptr [ESP + 0x3c]
LEA EBX,[ESI + 0x254]
LEA EDX,[ESP + 0x3c]
FXCH
FSTP dword ptr [ESP + 0x40]
PUSH EDX
FSTP dword ptr [ESP + 0x48]
CALL 0x0042f9b0
MOV EAX,dword ptr [ESI + 0xf4]
ADD ESP,0x4
TEST EBP,EBP
FLD dword ptr [EAX + 0x30]
FLD dword ptr [EAX + 0x38]
FMUL dword ptr [ESP + 0x44]
FLD dword ptr [EAX + 0x34]
FXCH ST2
FMUL dword ptr [ESP + 0x3c]
FXCH ST2
FMUL dword ptr [ESP + 0x40]
FXCH ST2
FADDP
FXCH ST2
FSTP ST0
FADDP
FSUBR dword ptr [0x004acdc0]
FMUL dword ptr [0x004acdc8]
FSUB dword ptr [0x004acd90]
FMUL dword ptr [ESP + 0x10]
FSTP dword ptr [ESP + 0x10]
JZ 0x00452d5f
FLD dword ptr [ESP + 0x14]
FLD dword ptr [ESP + 0x10]
FADD dword ptr [ESI + 0x148]
FXCH
FADD dword ptr [ESI + 0x14c]
FXCH
FMUL dword ptr [0x004acdc8]
FXCH
FMUL dword ptr [0x004acdc8]
FXCH
FST dword ptr [ESP + 0x10]
FXCH
FST dword ptr [ESP + 0x14]
FXCH
FSTP dword ptr [ESI + 0x148]
FSTP dword ptr [ESI + 0x14c]
MOV EAX,dword ptr [ESI + 0xf4]
LEA ECX,[ESP + 0x88]
ADD EAX,0x20
PUSH EAX
PUSH ECX
CALL 0x0044bb10
FLD dword ptr [ESP + 0xc8]
FADD dword ptr [EDI + 0x250]
ADD ESP,0x8
LEA EDX,[ESP + 0x88]
LEA EAX,[ESP + 0x48]
PUSH EDX
PUSH EAX
FSTP dword ptr [ESP + 0xc8]
CALL 0x0044bb10
ADD ESP,0x8
LEA ECX,[ESP + 0x78]
LEA EDX,[ESP + 0x20]
PUSH ECX
PUSH EBX
PUSH EDX
CALL 0x0042f860
MOV EBX,dword ptr [ESP + 0x28]
ADD ESP,0xc
TEST EBX,EBX
JNZ 0x00452ee2
LEA EAX,[ESP + 0x20]
MOV dword ptr [ESP + 0x28],EBX
PUSH EAX
CALL 0x0042f8c0
ADD ESP,0x4
LEA ECX,[ESP + 0x20]
FSTP ST0
PUSH ECX
CALL 0x0042f9b0
MOV EAX,dword ptr [ESP + 0x30]
ADD ESP,0x4
TEST EAX,EAX
FSTP ST0
JZ 0x00452e50
MOV EAX,[0x0050c8a4]
SUB EAX,EBX
JZ 0x00452e2f
DEC EAX
JZ 0x00452e0e
FLD dword ptr [ESP + 0x10]
DEC EAX
JZ 0x00452e06
FMUL dword ptr [0x004ace9c]
JMP 0x00452e18
FMUL dword ptr [0x004acea0]
JMP 0x00452e39
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004acea4]
FLD dword ptr [ESP + 0x14]
FADD dword ptr [ESP + 0x80]
FXCH
FSUBR dword ptr [ESP + 0x7c]
FSTP dword ptr [ESP + 0x7c]
JMP 0x00452e7a
FLD dword ptr [ESP + 0x10]
FMUL dword ptr [0x004acea8]
FLD dword ptr [ESP + 0x14]
FADD dword ptr [ESP + 0x80]
FXCH
FSUBR dword ptr [ESP + 0x78]
FSTP dword ptr [ESP + 0x78]
JMP 0x00452e7a
MOV EAX,dword ptr [ESP + 0x10]
LEA EDX,[ESP + 0x20]
PUSH EDX
LEA ECX,[ESP + 0x7c]
PUSH EAX
LEA EDX,[ESP + 0x80]
PUSH ECX
PUSH EDX
CALL 0x0042fa80
FLD dword ptr [ESP + 0x24]
FADD dword ptr [ESP + 0x90]
ADD ESP,0x10
FSTP dword ptr [ESP + 0x80]
LEA EAX,[ESP + 0x78]
LEA ECX,[ESP + 0xc8]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
FLD dword ptr [ESP + 0x20]
FADD dword ptr [ESP + 0xc8]
MOV EDX,dword ptr [ESP + 0xc0]
MOV EAX,dword ptr [ESP + 0xc4]
MOV dword ptr [ESP + 0x38],EDX
MOV dword ptr [ESP + 0x3c],EAX
ADD ESP,0x8
LEA ECX,[ESP + 0x98]
FSTP dword ptr [ESP + 0x38]
FLD dword ptr [EDI + 0x1e8]
FMUL qword ptr [0x004aceb0]
PUSH ECX
PUSH ECX
LEA EDX,[ESP + 0x38]
LEA EAX,[ESP + 0x38]
FSTP dword ptr [ESP]
PUSH EDX
PUSH EAX
JMP 0x00452fd3
FLD dword ptr [ESP + 0x20]
FMUL dword ptr [ESP + 0xa8]
FLD dword ptr [ESP + 0x24]
FMUL dword ptr [ESP + 0xac]
LEA ECX,[ESP + 0xa8]
LEA EDX,[ESP + 0x20]
PUSH ECX
PUSH ECX
FADDP
FLD dword ptr [ESP + 0x30]
FMUL dword ptr [ESP + 0xb8]
LEA EAX,[ESP + 0x28]
FADDP
FCHS
FSTP dword ptr [ESP]
PUSH EDX
PUSH EAX
CALL 0x0042fa80
ADD ESP,0x10
LEA ECX,[ESP + 0x20]
PUSH ECX
CALL 0x0042f8c0
ADD ESP,0x4
LEA EDX,[ESP + 0x20]
FSTP ST0
PUSH EDX
CALL 0x0042f9b0
MOV ECX,dword ptr [ESP + 0x14]
ADD ESP,0x4
LEA EAX,[ESP + 0x20]
LEA EDX,[ESP + 0x78]
PUSH EAX
PUSH ECX
LEA EAX,[ESP + 0x80]
PUSH EDX
PUSH EAX
FSTP ST0
CALL 0x0042fa80
MOV EDX,dword ptr [ESP + 0x24]
ADD ESP,0x10
LEA ECX,[ESP + 0xa8]
LEA EAX,[ESP + 0x78]
PUSH ECX
PUSH EDX
LEA ECX,[ESP + 0x80]
PUSH EAX
PUSH ECX
CALL 0x0042fa80
ADD ESP,0x10
LEA EDX,[ESP + 0x78]
LEA EAX,[ESP + 0xc8]
PUSH EDX
PUSH EAX
CALL 0x0042f7d0
MOV ECX,dword ptr [ESP + 0xc0]
MOV EDX,dword ptr [ESP + 0xc4]
MOV EAX,dword ptr [ESP + 0xc8]
ADD ESP,0x8
MOV dword ptr [ESP + 0x30],ECX
MOV dword ptr [ESP + 0x34],EDX
MOV EDX,dword ptr [ESP + 0x18]
LEA ECX,[ESP + 0xa8]
MOV dword ptr [ESP + 0x38],EAX
PUSH ECX
LEA EAX,[ESP + 0x34]
PUSH EDX
LEA ECX,[ESP + 0x38]
PUSH EAX
PUSH ECX
CALL 0x0042fa80
ADD ESP,0x10
TEST EBX,EBX
JNZ 0x0045302e
FLD dword ptr [ESP + 0xa0]
FCOMP qword ptr [0x004ace50]
FNSTSW AX
TEST AH,0x1
JZ 0x0045302e
FLD dword ptr [ESP + 0xa0]
FMUL dword ptr [ESP + 0xa0]
FMUL dword ptr [0x004ace68]
FCOM qword ptr [0x004aceb0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0045301c
FSTP ST0
FLD dword ptr [0x004aceb8]
FLD dword ptr [ESP + 0xd0]
FADD ST0,ST1
FSTP dword ptr [ESP + 0xd0]
FSTP ST0
MOV EAX,dword ptr [ESI + 0xf4]
LEA EDX,[ESP + 0xd4]
ADD EAX,0x20
PUSH EDX
PUSH EAX
CALL 0x00430b80
FLD dword ptr [ESP + 0xf0]
FMUL dword ptr [0x004acebc]
ADD ESP,0x8
TEST EBX,EBX
JNZ 0x004530af
FLD ST0
FMUL ST1
FMULP
FMUL dword ptr [0x004ace58]
FCOM dword ptr [0x004acda0]
FST dword ptr [ESP + 0x14]
FNSTSW AX
TEST AH,0x1
JZ 0x00453078
FCHS
FSTP dword ptr [ESP + 0x18]
FLD dword ptr [ESP + 0xe8]
FMUL qword ptr [0x004acec0]
FCOM qword ptr [0x004ace50]
FLD ST0
FNSTSW AX
TEST AH,0x1
JZ 0x0045309a
FCHS
FLD dword ptr [ESP + 0x18]
FCOMP
FNSTSW AX
TEST AH,0x41
FSTP ST0
JZ 0x004530bb
FSTP dword ptr [ESP + 0x14]
JMP 0x004530bd
FMUL dword ptr [0x004ace58]
FSTP dword ptr [ESP + 0x14]
JMP 0x004530bd
FSTP ST0
MOV ECX,dword ptr [ESP + 0x14]
LEA EDX,[ESP + 0x48]
PUSH ECX
PUSH 0x0
PUSH 0x0
PUSH EDX
CALL 0x00431020
ADD ESP,0x10
LEA EAX,[ESP + 0xc8]
LEA ECX,[ESP + 0x78]
PUSH EAX
PUSH ECX
CALL 0x0042f7d0
ADD ESP,0x8
LEA EDX,[ESP + 0x48]
LEA EBX,[ESI + 0x224]
PUSH EDX
PUSH EBX
CALL 0x0044bb10
MOV EAX,dword ptr [ESI + 0xf4]
ADD ESP,0x8
ADD EAX,0x20
LEA ECX,[ESP + 0x48]
PUSH EAX
PUSH ECX
CALL 0x0044bb10
ADD ESP,0x8
LEA EDX,[ESP + 0x30]
LEA EAX,[ESP + 0x78]
PUSH EDX
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
LEA ECX,[ESP + 0x48]
LEA EBP,[ESI + 0x264]
PUSH ECX
PUSH EBP
CALL 0x0044bb10
MOV EDX,dword ptr [EBX]
LEA EAX,[ESI + 0x20]
MOV dword ptr [ESP + 0x34],EAX
LEA EBX,[ESI + 0x50]
MOV dword ptr [EAX],EDX
MOV EAX,dword ptr [ESI + 0x228]
MOV dword ptr [ESI + 0x24],EAX
MOV ECX,dword ptr [ESI + 0x22c]
MOV dword ptr [ESI + 0x28],ECX
MOV EDX,dword ptr [ESI + 0x230]
MOV dword ptr [ESI + 0x2c],EDX
MOV ECX,dword ptr [ESI + 0x234]
LEA EAX,[ESI + 0x30]
ADD ESP,0x8
MOV dword ptr [ESP + 0x1c],EAX
MOV dword ptr [EAX],ECX
MOV EDX,dword ptr [ESI + 0x238]
MOV dword ptr [ESI + 0x34],EDX
MOV EAX,dword ptr [ESI + 0x23c]
MOV dword ptr [ESI + 0x38],EAX
MOV ECX,dword ptr [ESI + 0x240]
MOV dword ptr [ESI + 0x3c],ECX
MOV EDX,dword ptr [ESI + 0x244]
MOV dword ptr [ESI + 0x40],EDX
MOV EAX,dword ptr [ESI + 0x248]
MOV dword ptr [ESI + 0x44],EAX
MOV ECX,dword ptr [ESI + 0x24c]
MOV dword ptr [ESI + 0x48],ECX
MOV EDX,dword ptr [ESI + 0x250]
MOV dword ptr [ESI + 0x4c],EDX
MOV EAX,dword ptr [ESI + 0x254]
MOV dword ptr [EBX],EAX
MOV ECX,dword ptr [ESI + 0x258]
MOV EAX,dword ptr [ESI + 0x260]
MOV dword ptr [ESI + 0x54],ECX
MOV EDX,dword ptr [ESI + 0x25c]
MOV ECX,dword ptr [EBP]
MOV dword ptr [ESI + 0x5c],EAX
LEA EAX,[ESI + 0x108]
MOV dword ptr [ESI + 0x58],EDX
MOV EDX,dword ptr [ESI + 0x268]
MOV dword ptr [ESP + 0x18],EAX
MOV dword ptr [EAX],ECX
MOV EAX,dword ptr [ESI + 0x26c]
MOV ECX,dword ptr [ESI + 0x270]
MOV dword ptr [ESI + 0x10c],EDX
MOV EDX,dword ptr [ESI + 0x274]
MOV dword ptr [ESI + 0x110],EAX
MOV EAX,dword ptr [ESI + 0x278]
MOV dword ptr [ESI + 0x114],ECX
MOV ECX,dword ptr [ESI + 0x27c]
MOV dword ptr [ESI + 0x118],EDX
MOV EDX,dword ptr [ESI + 0x280]
MOV dword ptr [ESI + 0x11c],EAX
MOV EAX,dword ptr [ESI + 0x284]
MOV dword ptr [ESI + 0x120],ECX
MOV ECX,dword ptr [ESI + 0x288]
MOV dword ptr [ESI + 0x124],EDX
MOV EDX,dword ptr [ESI + 0x28c]
MOV dword ptr [ESI + 0x128],EAX
MOV EAX,dword ptr [ESI + 0x290]
MOV dword ptr [ESI + 0x12c],ECX
MOV ECX,dword ptr [ESI + 0x294]
LEA EBP,[ESI + 0x138]
MOV dword ptr [ESI + 0x130],EDX
MOV EDX,dword ptr [ESI + 0x298]
MOV dword ptr [ESI + 0x134],EAX
MOV EAX,dword ptr [ESI + 0x29c]
MOV dword ptr [EBP],ECX
MOV ECX,dword ptr [ESI + 0x2a0]
MOV dword ptr [ESI + 0x13c],EDX
MOV dword ptr [ESI + 0x140],EAX
MOV dword ptr [ESI + 0x144],ECX
TEST dword ptr [EDI + 0x60],0x100000
JZ 0x00453393
LEA EDX,[EDI + 0x20]
LEA EAX,[ESP + 0x88]
PUSH EDX
PUSH EAX
CALL 0x0044bb10
FLD dword ptr [ESP + 0xc8]
FADD dword ptr [EDI + 0x250]
MOV ESI,dword ptr [ESP + 0x34]
ADD ESP,0x8
LEA ECX,[ESP + 0x88]
PUSH ECX
PUSH ESI
FSTP dword ptr [ESP + 0xc8]
CALL 0x0044bb10
MOV EAX,dword ptr [ESP + 0x20]
ADD ESP,0x8
LEA EDX,[ESP + 0x88]
PUSH EDX
PUSH EAX
CALL 0x0044bb10
MOV EAX,dword ptr [ESP + 0x24]
ADD ESP,0x8
PUSH EAX
PUSH 0xbf800000
PUSH EAX
CALL 0x0042fa50
ADD ESP,0xc
PUSH ESI
PUSH 0xbf800000
PUSH ESI
CALL 0x0042fa50
ADD ESP,0xc
LEA ECX,[ESP + 0x98]
PUSH ECX
PUSH 0xbf800000
PUSH EBP
PUSH EBP
CALL 0x0042fa80
FLD dword ptr [EDI + 0xa8]
ADD ESP,0x10
LEA EDX,[ESP + 0x98]
FADD ST0,ST0
PUSH EDX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EBX
PUSH EBX
CALL 0x0042fa80
FLD dword ptr [EDI + 0xa8]
FMUL dword ptr [0x004acec8]
ADD ESP,0x10
LEA EAX,[ESP + 0xa8]
PUSH EAX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EBP
PUSH EBP
CALL 0x0042fa80
FLD dword ptr [EDI + 0xa8]
FMUL dword ptr [0x004acec8]
ADD ESP,0x10
LEA ECX,[ESP + 0xa8]
PUSH ECX
PUSH ECX
FSTP dword ptr [ESP]
PUSH EBX
PUSH EBX
CALL 0x0042fa80
ADD ESP,0x10
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0xdc
RET
