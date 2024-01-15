; FUN_00480540
MOV EAX,[0x0050cb68]
SUB ESP,0x8
TEST EAX,EAX
JNZ 0x004805bc
CALL 0x0048c490
MOV EDX,dword ptr [0x0050cb60]
MOV ECX,EAX
SUB EAX,EDX
MOV dword ptr [ESP + 0x4],0x0
MOV dword ptr [ESP],EAX
FILD qword ptr [ESP]
FMUL qword ptr [0x004adf80]
FSTP qword ptr [0x00e22a40]
FLD qword ptr [0x00e22a40]
FCOMP qword ptr [0x004adf88]
MOV EAX,[0x00e22a44]
MOV EDX,dword ptr [0x00e22a40]
MOV [0x00e22a4c],EAX
MOV dword ptr [0x00e22a48],EDX
FNSTSW AX
TEST AH,0x41
JNZ 0x004805b4
MOV dword ptr [0x00e22a40],0xa0000000
MOV dword ptr [0x00e22a44],0x3fb99999
MOV dword ptr [0x0050cb60],ECX
JMP 0x004805d4
MOV ECX,dword ptr [0x0050cb70]
MOV EDX,dword ptr [0x0050cb74]
MOV dword ptr [0x00e22a40],ECX
MOV dword ptr [0x00e22a44],EDX
MOV EAX,[0x0050cb64]
TEST EAX,EAX
JZ 0x004805f1
MOV dword ptr [0x00e22a40],0x0
MOV dword ptr [0x00e22a44],0x0
FLD qword ptr [0x00e22a40]
FCOMP qword ptr [0x004adf70]
FNSTSW AX
TEST AH,0x41
JZ 0x00480618
MOV dword ptr [0x00e22a40],0xe0000000
MOV dword ptr [0x00e22a44],0x3f60624d
FLD qword ptr [0x00e22a38]
FADD qword ptr [0x00e22a40]
FLD qword ptr [0x00e22a40]
MOV EAX,[0x00e22a30]
FSTP dword ptr [0x00e22a50]
INC EAX
FSTP qword ptr [0x00e22a38]
MOV [0x00e22a30],EAX
ADD ESP,0x8
RET
