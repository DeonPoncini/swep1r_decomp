; FUN_00474cd0
MOV EAX,[0x0050ca28]
TEST EAX,EAX
JNZ 0x00474d75
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [ECX + 0x60]
TEST AH,0x60
JNZ 0x00474d75
TEST dword ptr [ECX + 0x64],0x2000000
JNZ 0x00474d75
FLD dword ptr [ECX + 0xa0]
FMUL dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x8]
AND EAX,0xff7fffff
MOV dword ptr [ECX + 0x60],EAX
FADD dword ptr [ECX + EDX*0x4 + 0x288]
FCOM dword ptr [0x004adbdc]
FSTP dword ptr [ECX + EDX*0x4 + 0x288]
FNSTSW AX
TEST AH,0x41
JNZ 0x00474d32
MOV dword ptr [ECX + EDX*0x4 + 0x288],0x3f800000
MOV EAX,dword ptr [ECX + EDX*0x4 + 0x2a0]
OR AL,0x1
MOV dword ptr [ECX + EDX*0x4 + 0x2a0],EAX
FLD dword ptr [ECX + EDX*0x4 + 0x270]
FCOMP dword ptr [ECX + EDX*0x4 + 0x288]
FNSTSW AX
TEST AH,0x1
JZ 0x00474d65
MOV EAX,dword ptr [ECX + EDX*0x4 + 0x288]
MOV dword ptr [ECX + EDX*0x4 + 0x270],EAX
FLD dword ptr [ESP + 0xc]
FADD dword ptr [ECX + 0x2c4]
FSTP dword ptr [ECX + 0x2c4]
RET
