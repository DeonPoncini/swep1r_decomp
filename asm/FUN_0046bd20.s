; FUN_0046bd20
FLD dword ptr [0x00ec8850]
PUSH EBX
PUSH ESI
PUSH EDI
CALL 0x0049ed20
MOV ESI,dword ptr [ESP + 0x10]
MOV ECX,EAX
XOR EDI,EDI
XOR EBX,EBX
MOV EAX,dword ptr [ESI + 0x60]
TEST EAX,0x200000
JZ 0x0046bea5
TEST EAX,0x800000
JNZ 0x0046bea5
MOV EAX,dword ptr [ESI + 0x210]
SUB EAX,EDI
JZ 0x0046be56
DEC EAX
JZ 0x0046bde6
DEC EAX
JNZ 0x0046bead
FLD dword ptr [0x00ec883c]
FCOMP dword ptr [0x004ad8b0]
FNSTSW AX
TEST AH,0x1
JNZ 0x0046bead
CMP ECX,EDI
JZ 0x0046beb3
MOV dword ptr [ESI + 0x210],EDI
MOV EBX,0x1
CALL 0x004816b0
MOV dword ptr [ESP + 0x10],EAX
PUSH 0x43fa0000
FILD dword ptr [ESP + 0x14]
PUSH 0x41200000
PUSH EBX
ADD ESI,0x50
PUSH EDI
FMUL dword ptr [0x004ad768]
PUSH ESI
PUSH 0x3f800000
FMUL qword ptr [0x004ad8b8]
FSUB qword ptr [0x004ad8c0]
FSTP dword ptr [ESP + 0x28]
MOV EAX,dword ptr [ESP + 0x28]
PUSH EAX
PUSH 0x7
PUSH 0x72
CALL 0x00426d10
ADD ESP,0x24
MOV EAX,EBX
POP EDI
POP ESI
POP EBX
RET
FLD dword ptr [0x00ec884c]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x40
JZ 0x0046be10
FLD dword ptr [0x00ec8830]
FCOMP qword ptr [0x004ad8c8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046bead
FLD dword ptr [0x00ec883c]
FCOMP dword ptr [0x004ad8b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046bead
FLD dword ptr [ESI + 0x214]
FADD qword ptr [0x00e22a40]
FCOM dword ptr [0x004ad7f4]
FSTP dword ptr [ESI + 0x214]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046beb3
MOV dword ptr [ESI + 0x210],0x2
MOV EAX,EBX
POP EDI
POP ESI
POP EBX
RET
FLD dword ptr [0x00ec884c]
FCOMP dword ptr [0x004ad750]
FNSTSW AX
TEST AH,0x40
JZ 0x0046be7c
FLD dword ptr [0x00ec8830]
FCOMP qword ptr [0x004ad8c8]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046beb3
FLD dword ptr [0x00ec883c]
FCOMP dword ptr [0x004ad8b0]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046beb3
MOV dword ptr [ESI + 0x210],0x1
MOV dword ptr [ESI + 0x214],EDI
MOV EAX,EBX
POP EDI
POP ESI
POP EBX
RET
AND EAX,0xffbfffff
MOV dword ptr [ESI + 0x60],EAX
MOV dword ptr [ESI + 0x210],EDI
POP EDI
MOV EAX,EBX
POP ESI
POP EBX
RET
