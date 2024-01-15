; FUN_00440550
SUB ESP,0x8
XOR ECX,ECX
PUSH ESI
MOV CL,byte ptr [0x00e364a5]
MOV ESI,dword ptr [ESP + 0x10]
MOV dword ptr [ESP + 0x8],ECX
XOR EAX,EAX
FILD dword ptr [ESP + 0x8]
LEA ECX,[ESI + -0x4b]
MOV dword ptr [ESP + 0x4],0x3e000000
CMP ECX,0xd
FMUL dword ptr [0x004aca1c]
FSTP dword ptr [ESP + 0x8]
JA 0x004405cb
XOR EDX,EDX
MOV DL,byte ptr [ECX + 0x440608]
JMP dword ptr [EDX*0x4 + 0x4405f0]
MOV EAX,0x1
MOV dword ptr [ESP + 0x4],0x3f000000
JMP 0x004405d5
MOV dword ptr [ESP + 0x4],0x3e800000
JMP 0x004405d5
FLD dword ptr [ESP + 0x8]
FMUL qword ptr [0x004aca20]
MOV dword ptr [ESP + 0x4],0x3e800000
FSTP dword ptr [ESP + 0x8]
JMP 0x004405d5
MOV EAX,0x1
JMP 0x004405d5
MOV dword ptr [ESP + 0x4],0x3e800000
XOR EAX,EAX
MOV ECX,dword ptr [ESP + 0x4]
PUSH EAX
MOV EAX,dword ptr [ESP + 0xc]
PUSH EAX
PUSH ECX
PUSH 0x6
PUSH ESI
CALL 0x00426c80
ADD ESP,0x14
POP ESI
ADD ESP,0x8
RET
