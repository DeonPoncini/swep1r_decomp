; FUN_004857b0
MOV EAX,[0x0050feb4]
SUB ESP,0x8
TEST EAX,EAX
JNZ 0x004857c6
FLD dword ptr [0x004ae2d0]
ADD ESP,0x8
RET
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [0x0050fed8]
MOV EAX,dword ptr [ECX*0x4 + 0x50e028]
TEST EAX,EAX
JNZ 0x004857e8
MOV EAX,dword ptr [ECX*0x4 + 0x50e868]
TEST EAX,EAX
JZ 0x00485828
MOV EAX,EDX
CMP EAX,EDX
JC 0x004857ee
MOV EAX,EDX
MOV dword ptr [ESP],EAX
MOV dword ptr [ESP + 0x4],0x0
FILD qword ptr [ESP]
MOV EAX,[0x0050feb0]
TEST EAX,EAX
FMUL dword ptr [0x004c8174]
JZ 0x00485824
FCOM dword ptr [0x004ae2d0]
FNSTSW AX
TEST AH,0x40
JNZ 0x00485824
MOV dword ptr [0x0050feb0],0x0
ADD ESP,0x8
RET
FLD dword ptr [0x004ae2d0]
ADD ESP,0x8
RET
