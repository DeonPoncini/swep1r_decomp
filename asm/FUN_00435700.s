; FUN_00435700
SUB ESP,0x150
MOV EAX,[0x004c4000]
PUSH EBX
PUSH EBP
MOV EBP,dword ptr [ESP + 0x15c]
PUSH ESI
XOR EBX,EBX
XOR ESI,ESI
CMP EAX,EBX
PUSH EDI
MOV dword ptr [ESP + 0x10],ESI
JZ 0x004357e6
PUSH 0x431d0000
MOV dword ptr [0x004c4000],EBX
CALL 0x0043e5b0
ADD ESP,0x4
MOV dword ptr [0x0050c4a0],EBX
MOV dword ptr [0x0050c49c],EBX
MOV dword ptr [0x00e295d4],EBX
PUSH EBX
PUSH -0x1
PUSH 0x24
PUSH EBP
MOV dword ptr [0x004c00b4],0xffffffff
MOV dword ptr [0x004c00c0],0x1
CALL 0x0045bee0
ADD ESP,0x10
PUSH EBP
CALL 0x0043da10
MOV EDX,dword ptr [0x00e295cc]
ADD ESP,0x4
XOR EDI,EDI
XOR EAX,EAX
CMP EDX,EBX
MOV dword ptr [0x00e295d0],EDI
JLE 0x004357b6
MOVSX ECX,byte ptr [EBP + 0x6f]
LEA ECX,[ECX + ECX*0x4]
SHL ECX,0x4
MOVSX ESI,byte ptr [ECX + 0xe35a84]
MOV ECX,0xe99240
CMP dword ptr [ECX],ESI
JZ 0x004357ae
INC EAX
ADD ECX,0x8
CMP EAX,EDX
JL 0x004357a0
JMP 0x004357b6
MOV EDI,EAX
MOV dword ptr [0x00e295d0],EDI
MOV EDX,dword ptr [EDI*0x8 + 0xe99240]
PUSH 0xff
PUSH EBX
PUSH -0x1
PUSH EDX
CALL 0x0045cf60
ADD ESP,0x10
PUSH EBX
PUSH EBP
CALL 0x004584a0
MOV ESI,dword ptr [ESP + 0x18]
ADD ESP,0x8
MOV dword ptr [0x00e99384],0x43b40000
CMP word ptr [0x0050c930],BX
JNZ 0x0043601c
FLD dword ptr [0x00e295a0]
FCOMP dword ptr [0x004ac778]
MOV EAX,[0x00e295d0]
MOV ECX,dword ptr [EAX*0x8 + 0xe99240]
FNSTSW AX
MOV dword ptr [0x0050c118],ECX
TEST AH,0x41
JNZ 0x0043585e
MOV ECX,dword ptr [0x00e295d4]
MOV EDX,dword ptr [0x00e2afb8]
PUSH EBX
PUSH EBX
FILD dword ptr [ECX*0x8 + 0xe99240]
PUSH EBX
FMUL dword ptr [0x004ac7b4]
FSUBR dword ptr [0x004ac7b8]
FSTP dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x1c]
PUSH EAX
PUSH EAX
PUSH EAX
PUSH EDX
CALL 0x0044b360
MOV EAX,[0x00e295d4]
ADD ESP,0x1c
PUSH EAX
CALL 0x00457350
ADD ESP,0x4
JMP 0x00435892
CMP ECX,-0x1
JZ 0x00435892
FILD dword ptr [0x0050c118]
MOV ECX,dword ptr [0x00e2afb8]
PUSH EBX
PUSH EBX
PUSH EBX
FMUL dword ptr [0x004ac7b4]
FSUBR dword ptr [0x004ac7b8]
FSTP dword ptr [ESP + 0x1c]
MOV EAX,dword ptr [ESP + 0x1c]
PUSH EAX
PUSH EAX
PUSH EAX
PUSH ECX
CALL 0x0044b360
ADD ESP,0x1c
CMP dword ptr [0x0050c49c],0x5
JNZ 0x004358fc
PUSH 0xc0533333
CALL 0x00469b90
FCOMP dword ptr [0x004ac778]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x40
JZ 0x004358fc
PUSH EBX
PUSH 0x1c
CALL 0x00468fe0
ADD ESP,0x8
CALL 0x0044e560
CMP dword ptr [0x004d5e00],EBX
JZ 0x004358e1
PUSH EBX
CALL 0x004118b0
ADD ESP,0x4
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
MOV EDX,dword ptr [0x004bfedc]
PUSH EDX
PUSH EBP
CALL 0x00454d40
ADD ESP,0x8
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
CMP dword ptr [0x0050c49c],EBX
JNZ 0x0043594e
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac7bc]
FSUBR dword ptr [0x00e295ac]
FST dword ptr [0x00e295ac]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x1
JZ 0x00435933
MOV dword ptr [0x00e295ac],0x0
CMP dword ptr [0x004c00c0],EBX
JZ 0x0043594e
PUSH 0x43070000
PUSH 0x42d20000
PUSH EBP
CALL 0x004550d0
ADD ESP,0xc
PUSH 0x4c08e4
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x19
PUSH 0xa0
CALL 0x00450560
MOV EAX,[0x0050c118]
ADD ESP,0xc
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
MOV EAX,dword ptr [EDX*0x4 + 0x4c2718]
PUSH EAX
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
MOV EAX,[0x0050c118]
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
MOV EAX,dword ptr [EDX*0x4 + 0x4c2714]
PUSH EAX
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x4c08d8
CALL 0x00421360
ADD ESP,0x4
LEA ECX,[ESP + 0x68]
PUSH EAX
PUSH ECX
CALL 0x0049eb80
ADD ESP,0x10
LEA EDX,[ESP + 0x60]
PUSH EDX
PUSH -0x1
PUSH EBX
PUSH -0x1
PUSH EBX
PUSH 0x2a
PUSH 0xa0
CALL 0x00450530
ADD ESP,0x1c
LEA EAX,[ESP + 0x60]
PUSH EBX
PUSH EAX
CALL 0x0042de10
ADD ESP,0x8
LEA ECX,[ESP + 0x60]
PUSH EAX
PUSH 0x2b
PUSH EBX
PUSH ECX
CALL 0x0042de10
MOV dword ptr [ESP + 0x20],EAX
ADD ESP,0x8
FILD dword ptr [ESP + 0x18]
FMUL qword ptr [0x004ac7c0]
FSUBR qword ptr [0x004ac7c8]
CALL 0x0049ed20
PUSH EAX
CALL 0x00440150
MOV ECX,dword ptr [EBP + 0x14]
ADD ESP,0xc
OR ECX,0x4
MOV dword ptr [EBP + 0x14],ECX
MOV EAX,[0x00e295dc]
CMP EAX,EBX
JNZ 0x00435a44
MOV EDX,dword ptr [0x00e295d4]
MOV EAX,[0x004c00b4]
CMP EAX,dword ptr [EDX*0x8 + 0xe99240]
JZ 0x00435a44
MOV ESI,0x1
CMP dword ptr [0x0050c118],-0x1
JZ 0x00435b1b
CMP dword ptr [0x00e2993c],EBX
JZ 0x00435a61
CMP ESI,EBX
JZ 0x00435b1b
CALL 0x004258e0
PUSH 0x3
CALL 0x0045ce90
MOV EAX,[0x0050c118]
ADD ESP,0x4
MOV dword ptr [0x00e99384],0x0
LEA ECX,[EAX + EAX*0x2]
PUSH EBX
PUSH 0xf
LEA EAX,[EAX + ECX*0x4]
SHL EAX,0x2
MOV EDX,dword ptr [EAX + 0x4c2708]
MOV EAX,dword ptr [EAX + 0x4c2704]
PUSH EDX
PUSH EAX
CALL 0x00454bc0
MOV EAX,[0x00e2993c]
ADD ESP,0x10
CMP EAX,EBX
JZ 0x00435ae9
CALL 0x004337d0
MOV EDX,dword ptr [0x00e2993c]
MOV ECX,dword ptr [0x0050c118]
MOV dword ptr [EDX + 0xf0],ECX
MOV EAX,[0x0050c118]
LEA ECX,[EAX + EAX*0x2]
LEA EAX,[EAX + ECX*0x4]
SHL EAX,0x2
MOV EDX,dword ptr [EAX + 0x4c2720]
MOV EAX,dword ptr [EAX + 0x4c2730]
PUSH EDX
PUSH 0x2
PUSH 0x1c
PUSH EAX
CALL 0x0045ce10
ADD ESP,0x10
MOV ECX,dword ptr [0x0050c118]
MOV dword ptr [0x004c00b4],ECX
CALL 0x00454c90
PUSH EBP
CALL 0x0043e620
MOV EDX,dword ptr [0x0050c118]
ADD ESP,0x4
PUSH 0xff
PUSH -0x1
PUSH -0x1
PUSH EDX
CALL 0x0045cf60
ADD ESP,0x10
CMP dword ptr [0x0050c4a0],EBX
JNZ 0x00435b2d
MOV dword ptr [0x0050c4a0],0x1
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac7d0]
FSUBR dword ptr [0x00e99384]
FST dword ptr [0x00e99384]
FCOMP dword ptr [0x004ac7d4]
FNSTSW AX
TEST AH,0x41
JNZ 0x00435b64
FLD dword ptr [0x00e99384]
FSUB dword ptr [0x004ac7d4]
FSTP dword ptr [0x00e99384]
CMP dword ptr [0x0050c49c],0x1
JNZ 0x00435b91
PUSH 0xc0533333
CALL 0x00469b90
FCOMP dword ptr [0x004ac778]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x40
JZ 0x00435b91
MOV dword ptr [0x0050c49c],0x2
FLD dword ptr [0x00e295a0]
FMUL dword ptr [0x004ac7d8]
FST dword ptr [0x004c00b8]
FCOMP dword ptr [0x004ac7dc]
FNSTSW AX
TEST AH,0x1
JZ 0x00435bba
MOV dword ptr [0x004c00b8],0x3a83126f
CMP dword ptr [0x00e2993c],EBX
JZ 0x00435d86
FLD dword ptr [0x00e295a0]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x41
JNZ 0x00435d86
CALL 0x0043e210
FLD dword ptr [0x00e99384]
FCOMP dword ptr [0x004ac7e0]
FNSTSW AX
TEST AH,0x1
JZ 0x00435c19
MOV EAX,[0x00e99384]
PUSH EBX
PUSH EBX
PUSH 0x44070000
PUSH EAX
CALL 0x0045a420
FSUBR dword ptr [0x004ac7e4]
ADD ESP,0x8
PUSH ECX
FSTP dword ptr [ESP]
JMP 0x00435ce6
FLD dword ptr [0x00e99384]
FCOMP dword ptr [0x004ac7e8]
FNSTSW AX
TEST AH,0x1
JZ 0x00435c67
FLD dword ptr [0x00e99384]
FSUB dword ptr [0x004ac7e0]
PUSH 0x43b40000
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0045a420
FSUBR dword ptr [0x004ac7ec]
ADD ESP,0x8
LEA EDX,[ESP + 0x14]
PUSH ECX
FSTP dword ptr [ESP]
PUSH 0x43340000
PUSH 0x42c828f6
PUSH EDX
JMP 0x00435ceb
FLD dword ptr [0x00e99384]
FCOMP dword ptr [0x004ac7e8]
FNSTSW AX
TEST AH,0x1
JNZ 0x00435cbd
FLD dword ptr [0x00e99384]
FCOMP dword ptr [0x004ac7f0]
FNSTSW AX
TEST AH,0x1
JZ 0x00435cbd
FLD dword ptr [0x00e99384]
FSUB dword ptr [0x004ac7e8]
PUSH EBX
PUSH EBX
PUSH 0x44070000
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0045a420
FSUBR dword ptr [0x004ac7f4]
ADD ESP,0x8
LEA EAX,[ESP + 0x1c]
PUSH ECX
FSTP dword ptr [ESP]
PUSH EAX
JMP 0x00435ceb
FLD dword ptr [0x00e99384]
FSUB dword ptr [0x004ac7f0]
PUSH 0x43b40000
PUSH ECX
FSTP dword ptr [ESP]
CALL 0x0045a420
ADD ESP,0x8
FCHS
PUSH ECX
FSTP dword ptr [ESP]
PUSH EBX
PUSH 0x42c828f6
LEA ECX,[ESP + 0x20]
PUSH ECX
CALL 0x00431020
ADD ESP,0x10
LEA EDX,[ESP + 0x44]
PUSH 0x4c449c
PUSH EDX
CALL 0x0042f7d0
FLD dword ptr [0x004c00b8]
FMUL dword ptr [0x004ac788]
ADD ESP,0x8
LEA EAX,[ESP + 0x44]
PUSH 0x4c4490
PUSH 0x3f000000
FSTP dword ptr [0x004c00b8]
PUSH 0x4c449c
PUSH 0x3f000000
PUSH EAX
CALL 0x0042fac0
MOV EAX,[0x004c00b8]
ADD ESP,0x14
MOV EDX,dword ptr [0x00e2993c]
LEA ECX,[ESP + 0x14]
PUSH 0x3f800000
PUSH 0x3f800000
PUSH EBX
PUSH 0xc490a000
PUSH EAX
PUSH EAX
PUSH EAX
PUSH 0x1
PUSH ECX
PUSH EDX
CALL 0x004337e0
MOV EAX,[0x00e2993c]
ADD ESP,0x28
MOV EAX,dword ptr [EAX + 0xec]
CMP EAX,EBX
JZ 0x00435d86
PUSH 0x2
PUSH 0x10
PUSH 0x3
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
CMP dword ptr [0x0050c49c],EBX
JZ 0x00435db6
FLD dword ptr [0x00e295a0]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x40
JZ 0x0043601c
INC dword ptr [0x0050c49c]
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
MOVSX EDI,byte ptr [EBP + 0x6f]
LEA ECX,[EDI + 0x1]
CMP EDI,ECX
JGE 0x00435e94
LEA EBX,[EDI*0x4 + 0x50c918]
CMP word ptr [0x0050c930],0x0
JNZ 0x00435e94
MOV ESI,dword ptr [0x00e295d0]
PUSH 0x1
PUSH 0x3f800000
PUSH EDI
CALL 0x00469c30
MOV EAX,[0x00e295d0]
ADD ESP,0xc
CMP ESI,EAX
JZ 0x00435e12
MOV EDX,dword ptr [EAX*0x8 + 0xe99240]
PUSH 0xff
PUSH 0x0
PUSH -0x1
PUSH EDX
CALL 0x0045cf60
ADD ESP,0x10
FLD dword ptr [0x00e295a0]
FCOMP dword ptr [0x004ac764]
FNSTSW AX
TEST AH,0x1
JNZ 0x00435e32
MOV EAX,[0x004d6b44]
TEST EAX,EAX
JNZ 0x00436027
FLD dword ptr [0x00e295a0]
FCOMP dword ptr [0x004ac764]
FNSTSW AX
TEST AH,0x1
JNZ 0x00435e62
MOV EAX,[0x004d6b48]
TEST EAX,EAX
JZ 0x00435e62
PUSH 0x54
CALL 0x00440550
ADD ESP,0x4
MOV dword ptr [0x0050c49c],0x1
TEST byte ptr [EBX],0x8
JZ 0x00435e83
PUSH 0x54
CALL 0x00440550
MOV ECX,dword ptr [0x004c00c0]
ADD ESP,0x4
XOR EAX,EAX
TEST ECX,ECX
SETZ AL
MOV [0x004c00c0],EAX
MOVSX ECX,byte ptr [EBP + 0x6f]
INC EDI
ADD EBX,0x4
INC ECX
CMP EDI,ECX
JL 0x00435dcc
MOV EAX,[0x0050c49c]
CMP EAX,0x1
JNZ 0x0043600d
MOV EDX,dword ptr [0x00e295d0]
MOV EAX,dword ptr [EDX*0x8 + 0xe99240]
LEA ECX,[EAX + EAX*0x2]
LEA EDX,[EAX + ECX*0x4]
MOV EAX,dword ptr [EDX*0x4 + 0x4c2720]
PUSH EAX
CALL 0x0043e5b0
MOVSX EDI,byte ptr [EBP + 0x6f]
ADD ESP,0x4
LEA ECX,[EDI + 0x1]
CMP EDI,ECX
JGE 0x00435f5a
LEA ESI,[EDI + EDI*0x4]
MOV EBX,0x190
SHL ESI,0x4
ADD ESI,0xe35aa0
MOV EDX,dword ptr [0x00e295d0]
MOV AL,byte ptr [EDX*0x8 + 0xe99240]
MOV byte ptr [EDI + EBP*0x1 + 0x73],AL
MOV ECX,dword ptr [0x00e295d0]
MOV EAX,[0x0050c4a4]
MOV CL,byte ptr [ECX*0x8 + 0xe99240]
CMP EAX,0x4
MOV byte ptr [ESI + -0x1c],CL
JGE 0x00435f2e
LEA EAX,[EAX + EAX*0x4]
SHL EAX,0x4
MOV DL,byte ptr [EAX + 0xe364b4]
TEST DL,DL
JNZ 0x00435f28
MOV byte ptr [ESI],0x1
MOV dword ptr [ESI + -0x8],EBX
JMP 0x00435f2e
MOV byte ptr [EAX + 0xe364d8],CL
CALL 0x0041d6b0
TEST EAX,EAX
JZ 0x00435f4d
MOV EDX,dword ptr [0x00e295d0]
MOV EAX,dword ptr [EDX*0x8 + 0xe99240]
PUSH EAX
CALL 0x0041dc30
ADD ESP,0x4
MOVSX ECX,byte ptr [EBP + 0x6f]
INC EDI
ADD ESI,0x50
INC ECX
CMP EDI,ECX
JL 0x00435ee5
PUSH EBP
CALL 0x0045cd50
MOV ECX,dword ptr [EBP + 0xc]
MOV EAX,0x3
ADD ESP,0x4
CMP ECX,EAX
JNZ 0x00435f7f
MOV [0x004bfedc],EAX
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
MOV EAX,[0x0050c4a4]
LEA EDX,[EAX + EAX*0x4]
SHL EDX,0x4
MOV CL,byte ptr [EDX + 0xe364b4]
TEST CL,CL
JNZ 0x00435fae
CMP EAX,0x4
JGE 0x00435fae
MOV dword ptr [0x004bfedc],0x2
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
MOV AL,byte ptr [EBP + 0x6f]
MOVSX ECX,byte ptr [EBP + 0x70]
MOVSX EDX,AL
DEC ECX
CMP EDX,ECX
JGE 0x00435fd7
INC AL
MOV byte ptr [EBP + 0x6f],AL
MOV dword ptr [0x004bfedc],0x9
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
MOV dword ptr [0x004bfedc],0xc
LEA EDX,[ESP + 0x54]
MOVSX EAX,byte ptr [EBP + 0x50]
LEA EAX,[EAX + EAX*0x2]
LEA ECX,[EAX*0x4 + 0x4c457c]
PUSH ECX
PUSH EDX
CALL 0x0042f7d0
ADD ESP,0x8
CALL 0x004816b0
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
CMP EAX,0x2
JNZ 0x0043601c
MOV dword ptr [0x0050c49c],0x3
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
PUSH 0x0
CALL 0x004118b0
ADD ESP,0x4
PUSH 0x4d
CALL 0x00440550
MOV ECX,dword ptr [EBP + 0xc]
MOV EAX,0x3
ADD ESP,0x4
CMP ECX,EAX
JNZ 0x00436061
MOV [0x004bfedc],EAX
MOV dword ptr [0x0050c49c],0x1
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
PUSH 0x4d
CALL 0x00440550
MOV AL,byte ptr [EBP + 0x6f]
ADD ESP,0x4
TEST AL,AL
JLE 0x00436099
MOV dword ptr [0x0050c49c],0x1
MOV AL,byte ptr [EBP + 0x6f]
DEC AL
MOV byte ptr [EBP + 0x6f],AL
MOV dword ptr [0x004bfedc],0x9
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
MOV EAX,0x1
OR ECX,0xffffffff
MOV dword ptr [0x0050c4a4],0x0
MOV [0x0050c49c],EAX
MOV dword ptr [0x004c00b4],ECX
MOV [0x004bfedc],EAX
MOV dword ptr [0x0050c944],ECX
CALL 0x0044e560
POP EDI
POP ESI
POP EBP
POP EBX
ADD ESP,0x150
RET
