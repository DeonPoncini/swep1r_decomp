; FUN_0043e490
FLD dword ptr [0x004c02ac]
FCOMP dword ptr [0x004ac790]
PUSH ESI
XOR ESI,ESI
FNSTSW AX
TEST AH,0x40
JNZ 0x0043e4af
MOV EAX,[0x004c02b4]
TEST EAX,EAX
JLE 0x0043e4d4
PUSH -0x1
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH -0x67
CALL 0x00428740
MOV EAX,[0x004c02b4]
ADD ESP,0x14
DEC EAX
TEST EAX,EAX
MOV [0x004c02b4],EAX
JG 0x0043e5a4
FLD dword ptr [0x004c02ac]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x41
JZ 0x0043e50b
MOV AX,[0x004c02b0]
DEC AX
TEST AX,AX
MOV [0x004c02b0],AX
JG 0x0043e4ff
MOV ESI,0x1
MOV dword ptr [0x004c02ac],0x0
JMP 0x0043e523
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac9c4]
FSUBR dword ptr [0x004c02ac]
FSTP dword ptr [0x004c02ac]
FLD dword ptr [0x004c02ac]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x1
JZ 0x0043e549
MOV word ptr [0x004c02b0],0x3
MOV dword ptr [0x004c02ac],0x0
FLD dword ptr [0x004c02ac]
CALL 0x0049ed20
PUSH EAX
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH -0x67
CALL 0x00428740
ADD ESP,0x14
TEST ESI,ESI
JZ 0x0043e5a4
PUSH 0x0
PUSH -0x67
CALL 0x004285d0
ADD ESP,0x8
MOV dword ptr [0x004c02ac],0x437f0000
MOV dword ptr [0x004c02b4],0x3
MOV dword ptr [0x004c4008],0x1
MOV dword ptr [0x0050c944],0x0
MOV EAX,0x1
POP ESI
RET
XOR EAX,EAX
POP ESI
RET