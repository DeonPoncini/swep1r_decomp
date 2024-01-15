; FUN_0046bc50
MOV ECX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x4]
PUSH EBX
PUSH ESI
MOV ESI,dword ptr [ESP + 0x18]
OR BL,0xff
MOV byte ptr [ECX],0x0
MOV byte ptr [ECX + 0x1],BL
MOV byte ptr [ECX + 0x2],0x0
MOV byte ptr [EAX],BL
MOV byte ptr [EAX + 0x1],BL
MOV byte ptr [EAX + 0x2],BL
MOV byte ptr [EAX + 0x3],0x64
PUSH EDI
MOV dword ptr [ESI],0x0
MOV EDI,dword ptr [EDX + 0x210]
SUB EDI,0x0
JZ 0x0046bcdc
DEC EDI
JZ 0x0046bcb8
DEC EDI
JNZ 0x0046bd1a
MOV byte ptr [ECX],BL
MOV byte ptr [ECX + 0x1],BL
MOV byte ptr [ECX + 0x2],0x0
MOV byte ptr [EAX],BL
MOV byte ptr [EAX + 0x1],0x80
MOV byte ptr [EAX + 0x2],0x0
MOV byte ptr [EAX + 0x3],0xc8
MOV dword ptr [ESI],0x3f800000
POP EDI
POP ESI
POP EBX
RET
MOV byte ptr [ECX],0x0
MOV byte ptr [ECX + 0x1],BL
MOV byte ptr [ECX + 0x2],0x0
MOV byte ptr [EAX],BL
MOV byte ptr [EAX + 0x1],0x80
MOV byte ptr [EAX + 0x2],0x0
MOV byte ptr [EAX + 0x3],0xc8
MOV EAX,dword ptr [EDX + 0x214]
MOV dword ptr [ESI],EAX
POP EDI
POP ESI
POP EBX
RET
MOV byte ptr [ECX],0x0
MOV byte ptr [ECX + 0x1],BL
MOV byte ptr [ECX + 0x2],0x0
MOV byte ptr [EAX],BL
MOV byte ptr [EAX + 0x1],BL
MOV byte ptr [EAX + 0x2],BL
MOV byte ptr [EAX + 0x3],0x64
FLD dword ptr [EDX + 0x7c]
FMUL qword ptr [0x004ad8a8]
FLD dword ptr [EDX + 0x1a0]
FXCH
FDIVP
FCOM dword ptr [0x004ad7f4]
FSTP dword ptr [ESI]
FNSTSW AX
TEST AH,0x41
JNZ 0x0046bd1a
MOV dword ptr [ESI],0x3f800000
POP EDI
POP ESI
POP EBX
RET
