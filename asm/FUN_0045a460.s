; FUN_0045a460
MOV EAX,[0x004c4008]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST EAX,EAX
PUSH EDI
MOV dword ptr [ESI*0x4 + 0x50c918],0x0
JZ 0x0045a7e0
MOV EAX,dword ptr [ESI*0x4 + 0xe98e90]
MOV EDI,0x1
AND EAX,EDI
PUSH EDI
PUSH EAX
PUSH ESI
CALL 0x0045a7f0
MOV ECX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND ECX,0x2
PUSH 0x2
PUSH ECX
PUSH ESI
CALL 0x0045a7f0
MOV EDX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EDX,0x4
PUSH 0x4
PUSH EDX
PUSH ESI
CALL 0x0045a7f0
MOV EAX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EAX,0x8
PUSH 0x8
PUSH EAX
PUSH ESI
CALL 0x0045a7f0
MOV ECX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND ECX,0x10
PUSH 0x10
PUSH ECX
PUSH ESI
CALL 0x0045a7f0
MOV EDX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EDX,0x20
PUSH 0x20
PUSH EDX
PUSH ESI
CALL 0x0045a7f0
MOV EAX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EAX,0x40
PUSH 0x40
PUSH EAX
PUSH ESI
CALL 0x0045a7f0
MOV ECX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND ECX,0x80
PUSH 0x80
PUSH ECX
PUSH ESI
CALL 0x0045a7f0
MOV EDX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EDX,0x100
PUSH 0x100
PUSH EDX
PUSH ESI
CALL 0x0045a7f0
MOV EAX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EAX,0x200
PUSH 0x200
PUSH EAX
PUSH ESI
CALL 0x0045a7f0
MOV ECX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND ECX,0x400
PUSH 0x400
PUSH ECX
PUSH ESI
CALL 0x0045a7f0
MOV EDX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EDX,0x800
PUSH 0x800
PUSH EDX
PUSH ESI
CALL 0x0045a7f0
MOV EAX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EAX,0x1000
PUSH 0x1000
PUSH EAX
PUSH ESI
CALL 0x0045a7f0
MOV ECX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND ECX,0x2000
PUSH 0x2000
PUSH ECX
PUSH ESI
CALL 0x0045a7f0
MOV EDX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EDX,0x4000
PUSH 0x4000
PUSH EDX
PUSH ESI
CALL 0x0045a7f0
MOV EAX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EAX,0x8000
PUSH 0x8000
PUSH EAX
PUSH ESI
CALL 0x0045a7f0
MOV ECX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND ECX,0x10000
PUSH 0x10000
PUSH ECX
PUSH ESI
CALL 0x0045a7f0
MOV EDX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EDX,0x20000
PUSH 0x20000
PUSH EDX
PUSH ESI
CALL 0x0045a7f0
MOV EAX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EAX,0x40000
PUSH 0x40000
PUSH EAX
PUSH ESI
CALL 0x0045a7f0
MOV ECX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND ECX,0x80000
PUSH 0x80000
PUSH ECX
PUSH ESI
CALL 0x0045a7f0
MOV EDX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EDX,0x100000
PUSH 0x100000
PUSH EDX
PUSH ESI
CALL 0x0045a7f0
MOV EAX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND EAX,0x200000
PUSH 0x200000
PUSH EAX
PUSH ESI
CALL 0x0045a7f0
MOV ECX,dword ptr [ESI*0x4 + 0xe98e90]
ADD ESP,0xc
AND ECX,0x400000
PUSH 0x400000
PUSH ECX
PUSH ESI
CALL 0x0045a7f0
ADD ESP,0xc
MOV EDX,dword ptr [ESI*0x4 + 0xe98e90]
PUSH 0x800000
AND EDX,0x800000
PUSH EDX
PUSH ESI
CALL 0x0045a7f0
MOV EAX,dword ptr [ESI*0x4 + 0x50c908]
ADD ESP,0xc
OR EDX,0xffffffff
TEST EAX,0x40000
JZ 0x0045a710
MOV dword ptr [ESI*0x4 + 0x50c970],0x0
JMP 0x0045a72e
TEST EAX,0x10000
JZ 0x0045a720
MOV dword ptr [ESI*0x4 + 0x50c970],EDX
JMP 0x0045a72e
TEST EAX,0x20000
JZ 0x0045a72e
MOV dword ptr [ESI*0x4 + 0x50c970],EDI
TEST EAX,0x80000
JZ 0x0045a742
MOV dword ptr [ESI*0x4 + 0x50c980],0x0
JMP 0x0045a75c
TEST AH,0x40
JZ 0x0045a750
MOV dword ptr [ESI*0x4 + 0x50c980],EDX
JMP 0x0045a75c
TEST AH,0x80
JZ 0x0045a75c
MOV dword ptr [ESI*0x4 + 0x50c980],EDI
MOV ECX,dword ptr [ESI*0x4 + 0x50c918]
TEST ECX,0x100000
JZ 0x0045a780
CMP dword ptr [ESI*0x4 + 0x50c970],EDX
JNZ 0x0045a780
OR EAX,0x10000
MOV dword ptr [ESI*0x4 + 0x50c908],EAX
TEST ECX,0x200000
JZ 0x0045a79c
CMP dword ptr [ESI*0x4 + 0x50c970],EDI
JNZ 0x0045a79c
OR dword ptr [ESI*0x4 + 0x50c908],0x20000
TEST ECX,0x400000
JZ 0x0045a7be
CMP dword ptr [ESI*0x4 + 0x50c980],EDX
JNZ 0x0045a7be
MOV EAX,dword ptr [ESI*0x4 + 0x50c908]
OR AH,0x40
MOV dword ptr [ESI*0x4 + 0x50c908],EAX
TEST ECX,0x800000
JZ 0x0045a7e0
CMP dword ptr [ESI*0x4 + 0x50c980],EDI
JNZ 0x0045a7e0
MOV EAX,dword ptr [ESI*0x4 + 0x50c908]
OR AH,0x80
MOV dword ptr [ESI*0x4 + 0x50c908],EAX
POP EDI
POP ESI
RET