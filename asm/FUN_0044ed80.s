; FUN_0044ed80
SUB ESP,0x54
LEA EAX,[ESP + 0x24]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x5c]
PUSH EAX
PUSH ESI
CALL 0x0044ec40
ADD ESP,0x8
LEA ECX,[ESP + 0x34]
PUSH ECX
CALL 0x0042f8c0
FCOMP qword ptr [0x004accb8]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x1
JZ 0x0044ede2
FLD dword ptr [ESI + 0x8]
FCOMP dword ptr [0x004accc0]
LEA EDX,[ESP + 0x28]
PUSH EDX
FNSTSW AX
TEST AH,0x1
LEA EAX,[ESI + 0x10]
PUSH EAX
JZ 0x0044edd0
PUSH 0x3a83126f
JMP 0x0044edd5
PUSH 0x3f7fbe77
MOV ECX,dword ptr [ESI]
PUSH 0x2
PUSH ECX
CALL 0x0044e660
ADD ESP,0x14
LEA EDX,[ESP + 0x4c]
LEA EAX,[ESP + 0x34]
PUSH EDX
LEA ECX,[ESP + 0x8]
PUSH EAX
PUSH ECX
CALL 0x0042f9f0
ADD ESP,0xc
LEA EDX,[ESP + 0x34]
LEA EAX,[ESP + 0x4]
LEA ECX,[ESP + 0x10]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0042f9f0
ADD ESP,0xc
LEA EDX,[ESP + 0x4]
PUSH EDX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EAX,[ESP + 0x10]
FSTP ST0
PUSH EAX
CALL 0x0042f9b0
ADD ESP,0x4
LEA ECX,[ESP + 0x34]
FSTP ST0
PUSH ECX
CALL 0x0042f9b0
MOV ESI,dword ptr [ESP + 0x64]
ADD ESP,0x4
LEA EDX,[ESP + 0x4]
XOR EAX,EAX
PUSH EDX
PUSH EAX
PUSH ESI
MOV dword ptr [ESI + 0xc],EAX
FSTP ST0
MOV dword ptr [ESI + 0x1c],EAX
MOV dword ptr [ESI + 0x2c],EAX
MOV dword ptr [ESI + 0x3c],0x3f800000
CALL 0x0042fb10
ADD ESP,0xc
LEA EAX,[ESP + 0x34]
PUSH EAX
PUSH 0x1
PUSH ESI
CALL 0x0042fb10
ADD ESP,0xc
LEA ECX,[ESP + 0x10]
PUSH ECX
PUSH 0x2
PUSH ESI
CALL 0x0042fb10
ADD ESP,0xc
LEA EDX,[ESP + 0x1c]
PUSH EDX
PUSH 0x3
PUSH ESI
CALL 0x0042fb40
ADD ESP,0xc
LEA EAX,[ESP + 0x28]
PUSH EAX
PUSH 0x3
PUSH ESI
CALL 0x0042fb10
ADD ESP,0xc
POP ESI
ADD ESP,0x54
RET
