; FUN_0043da90
MOV ECX,dword ptr [ESP + 0x8]
PUSH ESI
XOR ESI,ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xc]
MOV EAX,0x1
TEST ECX,ECX
JZ 0x0043dadc
MOV EAX,dword ptr [EDI + 0x8]
CMP EAX,0x7
JZ 0x0043db9a
CMP EAX,0x4
JZ 0x0043db9a
MOV CX,0x1
OR EDX,0xffffffff
MOV dword ptr [0x00e99358],0xc3960000
MOV word ptr [0x0050c468],CX
MOV dword ptr [0x004bfedc],EDX
XOR EAX,EAX
JMP 0x0043dae9
MOV CX,word ptr [0x0050c468]
MOV EDX,dword ptr [0x004bfedc]
TEST CX,CX
JZ 0x0043db9a
TEST EAX,EAX
JZ 0x0043db9a
FLD dword ptr [0x00e99358]
MOVSX EAX,CX
MOV dword ptr [ESP + 0x10],EAX
FILD dword ptr [ESP + 0x10]
FMUL dword ptr [0x00e22a50]
FMUL dword ptr [0x004ac848]
FMUL qword ptr [0x004ac9b0]
FSUBP
FST dword ptr [0x00e99358]
FCOMP dword ptr [0x004ac848]
FNSTSW AX
TEST AH,0x41
JZ 0x0043db41
MOV dword ptr [0x00e99358],0xc3960000
MOV ESI,0x1
FILD dword ptr [ESP + 0x14]
FLD dword ptr [0x00e99358]
FCOMP
FNSTSW AX
TEST AH,0x1
JNZ 0x0043db61
FSTP dword ptr [0x00e99358]
MOV ESI,0x1
JMP 0x0043db63
FSTP ST0
TEST ESI,ESI
JZ 0x0043db9a
CMP EDX,-0x1
MOV word ptr [0x0050c468],0x0
JZ 0x0043db9a
MOV EAX,[0x0050c944]
TEST EAX,EAX
JNZ 0x0043db9a
CMP word ptr [0x0050c930],0x0
JNZ 0x0043db9a
PUSH EDX
PUSH EDI
CALL 0x00454d40
ADD ESP,0x8
MOV EAX,0x1
POP EDI
POP ESI
RET
POP EDI
XOR EAX,EAX
POP ESI
RET
