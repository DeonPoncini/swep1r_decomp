; FUN_00484c30
SUB ESP,0x8
MOV EAX,[0x0050d548]
MOV dword ptr [ESP],0x3f800000
TEST EAX,EAX
MOV dword ptr [ESP + 0x4],0x3f800000
JZ 0x00484d2e
FLD dword ptr [0x004ae188]
FSUB dword ptr [ESP + 0x10]
FLD dword ptr [ESP + 0x10]
FSUB dword ptr [0x004ae18c]
FXCH
FST dword ptr [ESP]
FCOMP dword ptr [0x004ae188]
FNSTSW AX
FSTP dword ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x4]
TEST AH,0x41
JNZ 0x00484c91
FDIV dword ptr [ESP]
MOV dword ptr [ESP],0x3f800000
FSTP dword ptr [ESP + 0x4]
JMP 0x00484cb2
FCOMP dword ptr [0x004ae188]
FNSTSW AX
TEST AH,0x41
JNZ 0x00484cb2
FLD dword ptr [ESP]
FDIV dword ptr [ESP + 0x4]
MOV dword ptr [ESP + 0x4],0x3f800000
FSTP dword ptr [ESP]
FLD dword ptr [ESP]
FCOMP dword ptr [0x004ae18c]
FNSTSW AX
TEST AH,0x1
JNZ 0x00484cde
FLD dword ptr [ESP]
FCOMP dword ptr [0x004ae188]
FNSTSW AX
TEST AH,0x41
JNZ 0x00484ce6
MOV dword ptr [ESP],0x3f800000
JMP 0x00484ce6
MOV dword ptr [ESP],0xbf800000
FLD dword ptr [ESP + 0x4]
FCOMP dword ptr [0x004ae18c]
FNSTSW AX
TEST AH,0x1
JNZ 0x00484d12
FLD dword ptr [ESP + 0x4]
FCOMP dword ptr [0x004ae188]
FNSTSW AX
TEST AH,0x41
JNZ 0x00484d1a
MOV dword ptr [ESP + 0x4],0x3f800000
JMP 0x00484d1a
MOV dword ptr [ESP + 0x4],0xbf800000
MOV EAX,dword ptr [ESP + 0xc]
LEA EDX,[ESP]
PUSH EDX
PUSH 0x2
MOV ECX,dword ptr [EAX]
PUSH EAX
CALL dword ptr [ECX + 0xe4]
ADD ESP,0x8
RET
