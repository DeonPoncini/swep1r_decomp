; FUN_0044abc0
SUB ESP,0x28
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x38]
PUSH EDI
MOV EDI,dword ptr [ESP + 0x38]
LEA EAX,[ESP + 0x24]
PUSH EAX
XOR EBX,EBX
FLD dword ptr [EDI]
FSUB dword ptr [ESI]
FLD dword ptr [EDI + 0x8]
FLD dword ptr [EDI + 0x4]
FSUB dword ptr [ESI + 0x4]
FXCH
FSUB dword ptr [ESI + 0x8]
FXCH ST2
FSTP dword ptr [ESP + 0x28]
FSTP dword ptr [ESP + 0x2c]
FSTP dword ptr [ESP + 0x30]
CALL 0x0042f8c0
FST dword ptr [ESP + 0x34]
FCOMP dword ptr [0x004acc00]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x0044ac98
FLD dword ptr [0x004acc04]
FDIV dword ptr [ESP + 0x30]
MOV EDX,dword ptr [ESP + 0x44]
LEA ECX,[ESP + 0xc]
PUSH EDX
MOV EDX,dword ptr [ESI]
LEA EAX,[ESP + 0x1c]
PUSH ECX
MOV ECX,dword ptr [ESP + 0x48]
PUSH EAX
MOV EAX,dword ptr [ESI + 0x4]
PUSH ECX
MOV ECX,dword ptr [ESI + 0x8]
MOV dword ptr [ESP + 0x28],EDX
MOV dword ptr [ESP + 0x2c],EAX
MOV dword ptr [ESP + 0x30],ECX
FLD dword ptr [ESP + 0x34]
FLD dword ptr [ESP + 0x38]
FLD dword ptr [ESP + 0x3c]
FXCH ST2
FMUL ST3
FXCH
FMUL ST3
FXCH ST2
FMUL ST3
FXCH
FSTP dword ptr [ESP + 0x34]
FXCH
FSTP dword ptr [ESP + 0x38]
FSTP dword ptr [ESP + 0x3c]
FSTP ST0
CALL 0x00444d10
FCOMP dword ptr [0x004acc08]
ADD ESP,0x10
FNSTSW AX
TEST AH,0x1
JNZ 0x0044ac98
MOV EDX,dword ptr [ESI]
MOV EBX,0x1
MOV dword ptr [EDI],EDX
MOV EAX,dword ptr [ESI + 0x4]
MOV dword ptr [EDI + 0x4],EAX
MOV ECX,dword ptr [ESI + 0x8]
MOV dword ptr [EDI + 0x8],ECX
POP EDI
MOV EAX,EBX
POP ESI
POP EBX
ADD ESP,0x28
RET
