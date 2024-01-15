; FUN_00476ea0
SUB ESP,0xc
PUSH ESI
MOV ESI,dword ptr [ESP + 0x14]
PUSH EDI
MOV dword ptr [ESP + 0x10],0x3f800000
MOV EAX,dword ptr [ESI + 0x60]
MOV dword ptr [ESP + 0xc],0x3f800000
TEST EAX,0x2000000
MOV dword ptr [ESP + 0x8],0x0
JZ 0x00476eee
FLD dword ptr [ESI + 0x1a0]
FCOMP dword ptr [0x004adcb0]
FNSTSW AX
TEST AH,0x1
JZ 0x00476eee
FLD dword ptr [0x004adcb0]
FSUB dword ptr [ESI + 0x1a0]
FSTP dword ptr [ESP + 0x8]
MOV EDX,dword ptr [ESI + 0x64]
MOV EAX,dword ptr [ESI + 0x140]
AND EDX,0xff63fb1e
TEST EAX,EAX
MOV dword ptr [ESI + 0x64],EDX
JZ 0x004770ff
PUSH EAX
CALL 0x004318b0
MOV EDI,EAX
ADD ESP,0x4
TEST EDI,EDI
JZ 0x004770ff
MOV EAX,dword ptr [EDI + 0x34]
MOV ECX,dword ptr [ESI + 0x26c]
NOT EAX
AND ECX,EAX
MOV dword ptr [ESI + 0x26c],ECX
MOV EAX,ECX
MOV ECX,dword ptr [EDI + 0x38]
OR ECX,EAX
AND CL,0x0
MOV dword ptr [ESI + 0x26c],ECX
MOV AL,byte ptr [EDI]
TEST AL,0x10
JZ 0x00476f4c
MOV EAX,dword ptr [ESI + 0x64]
OR AL,0x80
MOV dword ptr [ESI + 0x64],EAX
TEST byte ptr [EDI],0x20
JZ 0x00476f5a
MOV EAX,dword ptr [ESI + 0x64]
OR AH,0x4
MOV dword ptr [ESI + 0x64],EAX
MOV EAX,dword ptr [EDI + 0x2c]
MOV EDX,0x2000
TEST EDX,EAX
JZ 0x00476f6d
OR dword ptr [ESI + 0x64],0x40000
MOV EAX,dword ptr [EDI + 0x2c]
TEST AH,0x40
JZ 0x00476f7c
OR dword ptr [ESI + 0x64],0x80000
MOV EAX,dword ptr [EDI + 0x2c]
MOV CL,0x80
TEST EAX,0x20000
JZ 0x00476f9f
TEST byte ptr [ESI + 0x60],CL
JZ 0x00476f9f
MOV EAX,dword ptr [ESI + 0x64]
TEST EAX,0x4000000
JNZ 0x00476f9f
OR EAX,0x800000
MOV dword ptr [ESI + 0x64],EAX
MOV EAX,dword ptr [EDI + 0x2c]
TEST AH,0x80
JZ 0x00476fae
OR dword ptr [ESI + 0x64],0x100000
TEST dword ptr [0x0050c048],EDX
JZ 0x00476fcf
MOV EAX,[0x00e98eb0]
TEST AH,0x1
JZ 0x00476fcf
TEST byte ptr [0x00e98e90],CL
JZ 0x00476fcf
XOR dword ptr [ESI + 0x60],0x2000000
TEST byte ptr [EDI + 0x2c],0x1
JZ 0x00476fdc
OR dword ptr [ESI + 0x60],0x2000000
TEST byte ptr [EDI + 0x2c],0x2
JZ 0x00477050
MOV EAX,dword ptr [ESI + 0x60]
TEST EAX,0x2000000
JZ 0x00477050
FLD dword ptr [ESI + 0x50]
FLD dword ptr [ESI + 0x54]
FLD dword ptr [ESI + 0x58]
FXCH ST2
FSUB dword ptr [ESI + 0x16c]
FXCH
FSUB dword ptr [ESI + 0x170]
FXCH ST2
FSUB dword ptr [ESI + 0x174]
FXCH
FSTP dword ptr [ESI + 0x1b8]
FXCH
FSTP dword ptr [ESI + 0x1bc]
AND EAX,0xfdffffff
XOR EDX,EDX
FSTP dword ptr [ESI + 0x1c0]
OR EAX,0x4000000
MOV dword ptr [ESI + 0x228],0x40400000
MOV dword ptr [ESI + 0x1c4],EDX
MOV dword ptr [ESI + 0x1c8],EDX
MOV dword ptr [ESI + 0x1cc],EDX
MOV dword ptr [ESI + 0x60],EAX
JMP 0x00477052
XOR EDX,EDX
MOV EAX,dword ptr [EDI + 0x2c]
TEST AL,0x4
JZ 0x00477061
MOV dword ptr [ESP + 0x8],0x43480000
TEST AL,0x8
JZ 0x0047707f
MOV EAX,dword ptr [ESI + 0x60]
MOV dword ptr [ESP + 0xc],0x3f400000
TEST EAX,0x2000000
JZ 0x0047707f
AND EAX,0xff7fffff
MOV dword ptr [ESI + 0x60],EAX
TEST byte ptr [EDI + 0x2c],0x10
JZ 0x00477098
MOV EAX,dword ptr [ESI + 0x60]
MOV dword ptr [ESP + 0xc],0x3dcccccd
AND EAX,0xff7fffff
MOV dword ptr [ESI + 0x60],EAX
MOV ECX,dword ptr [EDI + 0x2c]
TEST CL,0x20
JZ 0x004770a8
MOV dword ptr [ESP + 0x10],0x3e4ccccd
MOV EAX,dword ptr [ESI + 0x64]
TEST EAX,0x2000000
JZ 0x004770ba
MOV dword ptr [ESP + 0x10],0x3f800000
TEST CH,0x4
JZ 0x004770c4
OR AL,0x1
MOV dword ptr [ESI + 0x64],EAX
MOV EAX,dword ptr [EDI + 0x3c]
CMP EAX,EDX
JZ 0x004770d5
PUSH EAX
PUSH ESI
CALL 0x00476ac0
ADD ESP,0x8
MOV EAX,dword ptr [EDI + 0x2c]
TEST AH,0x10
JZ 0x004770ee
CMP dword ptr [0x00ec86a0],0x1
JNZ 0x004770ee
MOV EAX,dword ptr [ESI + 0x64]
OR AL,0x40
MOV dword ptr [ESI + 0x64],EAX
TEST dword ptr [EDI + 0x2c],0x20000000
JZ 0x004770ff
MOV EAX,dword ptr [ESI + 0x64]
OR AL,0x20
MOV dword ptr [ESI + 0x64],EAX
MOV EAX,[0x0050cb48]
TEST EAX,EAX
JZ 0x00477112
PUSH EAX
PUSH ESI
CALL 0x00476ac0
ADD ESP,0x8
FLD dword ptr [ESI + 0x240]
FCOMP dword ptr [ESP + 0x8]
FNSTSW AX
TEST AH,0x1
JZ 0x00477152
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004adcc8]
FADD dword ptr [ESI + 0x240]
FCOM dword ptr [ESP + 0x8]
FSTP dword ptr [ESI + 0x240]
FNSTSW AX
TEST AH,0x41
JNZ 0x00477194
MOV EDX,dword ptr [ESP + 0x8]
MOV dword ptr [ESI + 0x240],EDX
JMP 0x00477194
FLD dword ptr [ESI + 0x240]
FCOMP dword ptr [ESP + 0x8]
FNSTSW AX
TEST AH,0x41
JNZ 0x00477194
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004adcc8]
FLD dword ptr [ESI + 0x240]
FXCH
FSUBP
FCOM dword ptr [ESP + 0x8]
FSTP dword ptr [ESI + 0x240]
FNSTSW AX
TEST AH,0x1
JZ 0x00477194
MOV EAX,dword ptr [ESP + 0x8]
MOV dword ptr [ESI + 0x240],EAX
FLD dword ptr [ESI + 0x244]
FCOMP dword ptr [ESP + 0xc]
FNSTSW AX
TEST AH,0x1
JZ 0x004771d4
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004adcd0]
FADD dword ptr [ESI + 0x244]
FCOM dword ptr [ESP + 0xc]
FSTP dword ptr [ESI + 0x244]
FNSTSW AX
TEST AH,0x41
JNZ 0x00477216
MOV ECX,dword ptr [ESP + 0xc]
MOV dword ptr [ESI + 0x244],ECX
JMP 0x00477216
FLD dword ptr [ESI + 0x244]
FCOMP dword ptr [ESP + 0xc]
FNSTSW AX
TEST AH,0x41
JNZ 0x00477216
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004adcd0]
FLD dword ptr [ESI + 0x244]
FXCH
FSUBP
FCOM dword ptr [ESP + 0xc]
FSTP dword ptr [ESI + 0x244]
FNSTSW AX
TEST AH,0x1
JZ 0x00477216
MOV EDX,dword ptr [ESP + 0xc]
MOV dword ptr [ESI + 0x244],EDX
FLD dword ptr [ESI + 0x248]
FCOMP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x1
JZ 0x00477256
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004adcd0]
FADD dword ptr [ESI + 0x248]
FCOM dword ptr [ESP + 0x10]
FSTP dword ptr [ESI + 0x248]
FNSTSW AX
TEST AH,0x41
JNZ 0x00477298
MOV EAX,dword ptr [ESP + 0x10]
MOV dword ptr [ESI + 0x248],EAX
JMP 0x00477298
FLD dword ptr [ESI + 0x248]
FCOMP dword ptr [ESP + 0x10]
FNSTSW AX
TEST AH,0x41
JNZ 0x00477298
FLD qword ptr [0x00e22a40]
FMUL qword ptr [0x004adcd0]
FLD dword ptr [ESI + 0x248]
FXCH
FSUBP
FCOM dword ptr [ESP + 0x10]
FSTP dword ptr [ESI + 0x248]
FNSTSW AX
TEST AH,0x1
JZ 0x00477298
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [ESI + 0x248],ECX
FILD dword ptr [ESI + 0x1998]
MOV dword ptr [ESI + 0x250],0x0
FSUB dword ptr [0x004adcd8]
FMUL dword ptr [0x004adcdc]
FCOMP qword ptr [0x004adc90]
FNSTSW AX
TEST AH,0x1
JNZ 0x004772d0
TEST byte ptr [ESI + 0x60],0x20
JNZ 0x004772d0
TEST dword ptr [ESI + 0x64],0x4000000
JZ 0x004772e8
MOV EAX,dword ptr [ESI + 0x64]
TEST EAX,0x80000
JZ 0x004772e8
TEST AH,0x2
JNZ 0x004772e8
MOV EAX,dword ptr [ESI + 0x60]
OR AH,0x10
MOV dword ptr [ESI + 0x60],EAX
POP EDI
POP ESI
ADD ESP,0xc
RET
