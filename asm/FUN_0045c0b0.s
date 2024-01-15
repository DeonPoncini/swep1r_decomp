; FUN_0045c0b0
SUB ESP,0x18
LEA EAX,[ESP]
PUSH ESI
PUSH EDI
PUSH 0xe298f0
PUSH EAX
CALL 0x0042f7d0
ADD ESP,0x8
LEA ECX,[ESP + 0x14]
PUSH 0xe2af90
PUSH ECX
CALL 0x0042f7d0
MOV EAX,[0x004c4004]
MOV ECX,dword ptr [ESP + 0x2c]
XOR ESI,ESI
ADD ESP,0x8
CMP EAX,ESI
MOV EDX,0x1
JZ 0x0045c1e4
FLD dword ptr [0x00e2b470]
FSUB dword ptr [0x00e2b410]
FLD dword ptr [0x00e2b474]
FLD dword ptr [0x00e2b478]
FLD dword ptr [0x00e29b90]
FXCH ST3
FST dword ptr [0x0050c8b4]
FCOMP dword ptr [0x004ad1d0]
FLD dword ptr [0x00e29b94]
FLD dword ptr [0x00e29b98]
FXCH ST3
FSUB dword ptr [0x00e2b414]
FXCH ST2
FSUB dword ptr [0x00e2b418]
FXCH ST4
FSUB dword ptr [0x00e2aeb0]
FXCH
FSUB dword ptr [0x00e2aeb4]
FXCH ST3
FSUB dword ptr [0x00e2aeb8]
FLD dword ptr [0x004acf50]
FXCH ST3
FSTP dword ptr [0x0050c8c4]
FLD dword ptr [0x004ad118]
FXCH ST5
FSTP dword ptr [0x0050c8e4]
FXCH
FSTP dword ptr [0x0050c8b8]
FXCH ST2
FSTP dword ptr [0x0050c8b0]
FXCH
FSTP dword ptr [0x0050c8bc]
FNSTSW AX
FSTP dword ptr [0x0050c8e0]
TEST DL,AH
FSTP dword ptr [0x0050c8c0]
JZ 0x0045c1de
FLD dword ptr [0x0050c8b4]
FCOMP dword ptr [0x004ad1d4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0045c1de
FLD dword ptr [0x0050c8c4]
FCOMP dword ptr [0x004ad1d0]
FNSTSW AX
TEST DL,AH
JZ 0x0045c1de
FLD dword ptr [0x0050c8c4]
FCOMP dword ptr [0x004ad1d4]
FNSTSW AX
TEST AH,0x41
JNZ 0x0045c1de
CMP dword ptr [ECX + 0x38],EDX
JNZ 0x0045c1de
MOV dword ptr [0x0050c8c0],0x3e99999a
MOV dword ptr [0x004c4004],ESI
FLD dword ptr [0x0050c8e0]
FCOMP dword ptr [0x0050c8c0]
FNSTSW AX
TEST AH,0x1
JZ 0x0045c310
FLD dword ptr [0x0050c8e0]
FADD dword ptr [0x00e22a50]
FST dword ptr [0x0050c8e0]
FCOMP dword ptr [0x0050c8c0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0045c226
MOV EDX,dword ptr [0x0050c8c0]
MOV dword ptr [0x0050c8e0],EDX
FLD dword ptr [0x0050c8e0]
FDIV dword ptr [0x0050c8c0]
CMP word ptr [0x0050c930],0x3
FLD dword ptr [0x00e2b470]
FLD dword ptr [0x00e2b474]
FLD dword ptr [0x00e2b478]
FXCH ST2
FSUB dword ptr [0x00e2b410]
FXCH
FSUB dword ptr [0x00e2b414]
FXCH ST2
FSUB dword ptr [0x00e2b418]
FXCH
FMUL ST3
FXCH ST2
FMUL ST3
FXCH
FMUL ST3
FXCH ST2
FADD dword ptr [0x00e2b410]
FXCH
FADD dword ptr [0x00e2b414]
FXCH ST2
FADD dword ptr [0x00e2b418]
FXCH
FSTP dword ptr [0x00e2af90]
FXCH
FSTP dword ptr [0x00e2af94]
FSTP dword ptr [0x00e2af98]
JZ 0x0045c3aa
FLD dword ptr [0x00e29b90]
FLD dword ptr [0x00e29b94]
FLD dword ptr [0x00e29b98]
FXCH ST2
FSUB dword ptr [0x00e2aeb0]
FXCH
FSUB dword ptr [0x00e2aeb4]
FXCH ST2
FSUB dword ptr [0x00e2aeb8]
FXCH
FMUL ST3
FXCH ST2
FMUL ST3
FXCH
FMUL ST3
FXCH ST2
FADD dword ptr [0x00e2aeb0]
FXCH
FADD dword ptr [0x00e2aeb4]
FXCH ST2
FADD dword ptr [0x00e2aeb8]
FXCH
FSTP dword ptr [0x00e298f0]
FXCH
FSTP dword ptr [0x00e298f4]
FSTP dword ptr [0x00e298f8]
FSTP ST0
POP EDI
POP ESI
ADD ESP,0x18
RET
MOV word ptr [0x0050c930],0x5
MOV EAX,dword ptr [ECX + 0x8]
CMP EAX,0x8
JNZ 0x0045c328
MOV word ptr [0x0050c930],SI
MOV EAX,[0x0050c940]
MOV dword ptr [0x004c4004],EDX
CMP EAX,ESI
JZ 0x0045c367
MOV EDI,dword ptr [0x0050c934]
XOR EAX,EAX
CMP EDI,ESI
MOV dword ptr [0x0050c940],ESI
SETZ AL
MOV [0x0050c934],EAX
MOV EDI,dword ptr [ECX + 0x38]
CMP EDI,EDX
JNZ 0x0045c367
CMP dword ptr [ECX + 0x34],0x3
JZ 0x0045c367
CMP EAX,ESI
JZ 0x0045c367
MOV word ptr [0x0050c468],DX
PUSH 0xe2af60
PUSH 0xe2b3e0
CALL 0x0044bb10
ADD ESP,0x8
PUSH 0xe298c0
PUSH 0xe2ae80
CALL 0x0044bb10
MOV EAX,[0x004bfedc]
ADD ESP,0x8
CMP EAX,-0x1
JZ 0x0045c3ac
CMP word ptr [0x0050c468],SI
JNZ 0x0045c3ac
MOV dword ptr [0x0050c934],ESI
POP EDI
POP ESI
ADD ESP,0x18
RET
FSTP ST0
POP EDI
POP ESI
ADD ESP,0x18
RET
