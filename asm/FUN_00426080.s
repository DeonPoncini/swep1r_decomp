; FUN_00426080
MOV ECX,dword ptr [ESP + 0x4]
PUSH ESI
PUSH EDI
MOV EDX,dword ptr [ECX + 0x118]
MOV EAX,dword ptr [ECX + 0x11c]
FLD dword ptr [ECX + 0x114]
FCOMP dword ptr [EAX + EDX*0x4 + 0x4]
LEA ESI,[EDX*0x4 + 0x4]
FNSTSW AX
TEST AH,0x41
JNZ 0x004260b5
MOV EDX,dword ptr [ECX + 0x120]
MOV EDI,dword ptr [EDX + ESI*0x1]
JMP 0x004260be
MOV EAX,dword ptr [ECX + 0x120]
MOV EDI,dword ptr [EAX + EDX*0x4]
MOV ECX,dword ptr [ECX + 0x124]
TEST ECX,ECX
JZ 0x004260e6
MOV EAX,dword ptr [ECX]
TEST EAX,EAX
JZ 0x004260e6
MOV ESI,ECX
PUSH EDI
PUSH 0x2
PUSH EAX
CALL 0x00431860
MOV EAX,dword ptr [ESI + 0x4]
ADD ESI,0x4
ADD ESP,0xc
TEST EAX,EAX
JNZ 0x004260d0
POP EDI
POP ESI
RET