; FUN_00445860
MOV AL,[0x0050c048]
SUB ESP,0x100
TEST AL,0x1
JZ 0x0044589a
PUSH 0x4c17c8
LEA EAX,[ESP + 0x4]
PUSH 0x4c178c
PUSH EAX
CALL 0x0049eb80
ADD ESP,0xc
LEA ECX,[ESP]
PUSH ECX
PUSH 0xd2
PUSH 0x1e
CALL 0x00450560
ADD ESP,0xc
MOV EAX,[0x0050c5f0]
CMP EAX,0x3
JNZ 0x004458f3
FLD dword ptr [0x00e9824c]
FCOMP dword ptr [0x004aca88]
FNSTSW AX
TEST AH,0x41
JZ 0x004458be
CALL 0x00445730
JMP 0x00445931
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004aca90]
FLD dword ptr [0x00e9824c]
FXCH
FSUBP
FST dword ptr [0x00e9824c]
FCOMP dword ptr [0x004aca88]
FNSTSW AX
TEST AH,0x1
JZ 0x00445931
MOV dword ptr [0x00e9824c],0x0
JMP 0x00445931
CMP EAX,0x2
JNZ 0x00445931
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004aca90]
FADD dword ptr [0x00e9824c]
FST dword ptr [0x00e9824c]
FCOMP dword ptr [0x004aca8c]
FNSTSW AX
TEST AH,0x41
JNZ 0x00445931
MOV dword ptr [0x00e9824c],0x3f800000
MOV dword ptr [0x0050c5f0],0x1
PUSH 0x0
PUSH 0x4a646765
CALL 0x00450b30
MOV DX,word ptr [EAX + 0x6]
ADD ESP,0x8
AND EDX,0x1000
TEST DX,DX
JNZ 0x00445954
CALL 0x00462cf0
CALL 0x0042ae00
ADD ESP,0x100
RET
