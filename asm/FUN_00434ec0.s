; FUN_00434ec0
MOV EAX,[0x004c4000]
PUSH ESI
TEST EAX,EAX
JZ 0x00434f10
MOV AL,[0x004c00a4]
MOV dword ptr [0x004c4000],0x0
INC AL
CMP AL,0x2
MOV [0x004c00a4],AL
JNZ 0x00434f06
PUSH 0x0
PUSH 0x3f000000
PUSH 0x3e800000
PUSH 0x6
PUSH 0x74
CALL 0x00426c80
ADD ESP,0x14
MOV dword ptr [0x004c00a8],0x40200000
MOV dword ptr [0x004c00ac],0x437f0000
MOV ESI,dword ptr [ESP + 0x8]
MOV dword ptr [ESI + 0x68],0x15
MOV dword ptr [0x004bfedc],0xe
MOVSX EAX,byte ptr [0x004c00a4]
SUB EAX,0x0
JZ 0x00435095
DEC EAX
JZ 0x0043506a
DEC EAX
JNZ 0x004351ca
MOV EAX,[0x0050c944]
MOV CL,byte ptr [0x0050c484]
CMP EAX,0x1
JNZ 0x00434f57
TEST CL,CL
JZ 0x00434fad
FLD dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac790]
FSUBR dword ptr [0x004c00ac]
FST dword ptr [0x004c00ac]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x1
JZ 0x00434fad
TEST CL,CL
MOV dword ptr [0x004c00ac],0x0
JZ 0x00434fad
PUSH -0x1
PUSH 0x0
PUSH 0x0
PUSH 0x0
PUSH -0x67
CALL 0x00428740
MOV EAX,[0x004bfedc]
ADD ESP,0x14
PUSH EAX
PUSH ESI
CALL 0x00454d40
ADD ESP,0x8
POP ESI
RET
PUSH 0x0
PUSH 0x34
PUSH 0x56
CALL 0x00428660
ADD ESP,0xc
PUSH 0x3f800000
PUSH 0x3f800000
PUSH 0x56
CALL 0x004286f0
MOV AL,[0x0050c484]
ADD ESP,0xc
TEST AL,AL
JNZ 0x00434fe4
PUSH 0x1
PUSH 0x56
CALL 0x004285d0
ADD ESP,0x8
FLD dword ptr [0x004c00ac]
CALL 0x0049ed20
PUSH EAX
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0x56
CALL 0x00428740
MOV EAX,[0x0050c944]
ADD ESP,0x14
CMP EAX,0x1
JZ 0x004351ca
PUSH 0xf
PUSH 0x52
PUSH 0x55
CALL 0x00428660
ADD ESP,0xc
PUSH 0x3f800000
PUSH 0x3f800000
PUSH 0x55
CALL 0x004286f0
ADD ESP,0xc
PUSH 0x1
PUSH 0x55
CALL 0x004285d0
MOV AL,[0x0050c484]
ADD ESP,0x8
TEST AL,AL
JZ 0x00435053
FLD dword ptr [0x004c00ac]
CALL 0x0049ed20
PUSH EAX
JMP 0x00435055
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0x55
CALL 0x00428740
ADD ESP,0x14
JMP 0x004351ca
PUSH 0x2e
PUSH 0x57
PUSH 0x50
CALL 0x00428660
ADD ESP,0xc
PUSH 0x3f800000
PUSH 0x3f800000
PUSH 0x50
CALL 0x004286f0
ADD ESP,0xc
PUSH 0x1
PUSH 0x50
JMP 0x004351c2
MOV EAX,[0x004c00b0]
TEST EAX,EAX
JLE 0x004350a9
DEC EAX
MOV [0x004c00b0],EAX
JMP 0x004351ca
PUSH 0x4c08a4
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x1e
PUSH 0x1e
CALL 0x00450560
ADD ESP,0xc
PUSH 0x4c0868
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x32
PUSH 0x1e
CALL 0x00450560
ADD ESP,0xc
PUSH 0x4c0824
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x3c
PUSH 0x1e
CALL 0x00450560
ADD ESP,0xc
PUSH 0x4c07f4
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x46
PUSH 0x1e
CALL 0x00450560
ADD ESP,0xc
PUSH 0x4c07bc
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x5a
PUSH 0x1e
CALL 0x00450560
ADD ESP,0xc
PUSH 0x4c0788
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x64
PUSH 0x1e
CALL 0x00450560
ADD ESP,0xc
PUSH 0x4c0758
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x6e
PUSH 0x1e
CALL 0x00450560
ADD ESP,0xc
PUSH 0x4c072c
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0x82
PUSH 0x1e
CALL 0x00450560
ADD ESP,0xc
PUSH 0x4c0700
CALL 0x00421360
ADD ESP,0x4
PUSH EAX
PUSH 0xb4
PUSH 0x1e
CALL 0x00450560
ADD ESP,0xc
PUSH 0x64
PUSH 0xb4
PUSH 0x52
CALL 0x00428660
ADD ESP,0xc
PUSH 0x3f800000
PUSH 0x3f800000
PUSH 0x52
CALL 0x004286f0
ADD ESP,0xc
PUSH 0x1
PUSH 0x52
CALL 0x004285d0
ADD ESP,0x8
MOV EAX,[0x0050c944]
TEST EAX,EAX
JNZ 0x004351f8
FLD dword ptr [0x004c00a8]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x41
JNZ 0x004351f8
FLD dword ptr [0x004c00a8]
FSUB dword ptr [0x00e22a50]
FSTP dword ptr [0x004c00a8]
FLD dword ptr [0x004c00a8]
FCOMP dword ptr [0x004ac778]
FNSTSW AX
TEST AH,0x41
JZ 0x0043523b
MOV AL,[0x004c00a4]
MOV dword ptr [0x004c00a8],0x3fa66666
CMP AL,0x2
JGE 0x0043522a
MOV dword ptr [0x0050c944],0xffffffff
POP ESI
RET
MOV byte ptr [0x0050c484],0x1
MOV dword ptr [0x004c00ac],0x437f0000
POP ESI
RET
