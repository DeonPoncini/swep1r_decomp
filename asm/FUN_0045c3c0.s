; FUN_0045c3c0
SUB ESP,0xc
PUSH ESI
PUSH EDI
PUSH 0xe2b470
PUSH 0x50c998
CALL 0x0042f7f0
ADD ESP,0x8
TEST EAX,EAX
JNZ 0x0045c449
PUSH 0xe2b470
PUSH 0x50c998
CALL 0x0042f7d0
ADD ESP,0x8
LEA EAX,[ESP + 0x8]
PUSH 0xe298f0
PUSH 0xe2af90
PUSH EAX
CALL 0x0042f860
ADD ESP,0xc
LEA ECX,[ESP + 0x8]
PUSH ECX
CALL 0x0042f8c0
FCOMP dword ptr [0x004ad1d0]
ADD ESP,0x4
FNSTSW AX
TEST AH,0x41
JNZ 0x0045c449
LEA EDX,[ESP + 0x8]
PUSH EDX
CALL 0x0042f9b0
ADD ESP,0x4
LEA EAX,[ESP + 0x8]
FSTP ST0
PUSH EAX
PUSH 0x43fa0000
PUSH 0xe298f0
PUSH 0xe2af90
CALL 0x0042fa80
ADD ESP,0x10
MOV ESI,dword ptr [ESP + 0x18]
PUSH 0x3fc00000
PUSH 0xe2b410
PUSH 0xe2af90
PUSH 0xe2b470
PUSH 0x50c994
PUSH ESI
CALL 0x0045c560
ADD ESP,0x18
MOV EDI,EAX
PUSH 0x3f800000
PUSH 0xe2aeb0
PUSH 0xe298f0
PUSH 0xe29b90
PUSH 0x50c990
PUSH ESI
CALL 0x0045c560
ADD ESP,0x18
TEST EAX,EAX
JZ 0x0045c559
TEST EDI,EDI
JZ 0x0045c559
MOV ECX,0x1
MOV word ptr [0x0050c930],0x5
MOV byte ptr [0x004c400c],CL
MOV EAX,dword ptr [ESI + 0x8]
CMP EAX,0x8
JNZ 0x0045c4c8
MOV word ptr [0x0050c930],0x0
MOV EAX,[0x0050c940]
TEST EAX,EAX
JZ 0x0045c503
MOV EDI,dword ptr [0x0050c934]
XOR EAX,EAX
TEST EDI,EDI
SETZ AL
MOV dword ptr [0x0050c940],0x0
MOV [0x0050c934],EAX
CMP dword ptr [ESI + 0x38],ECX
JNZ 0x0045c503
CMP dword ptr [ESI + 0x34],0x3
JZ 0x0045c503
TEST EAX,EAX
JZ 0x0045c503
MOV word ptr [0x0050c468],CX
PUSH 0xe2af60
PUSH 0xe2b3e0
CALL 0x0044bb10
ADD ESP,0x8
PUSH 0xe298c0
PUSH 0xe2ae80
CALL 0x0044bb10
MOV EAX,[0x004bfedc]
ADD ESP,0x8
CMP EAX,-0x1
JZ 0x0045c559
CMP word ptr [0x0050c468],0x0
JNZ 0x0045c559
MOV ECX,dword ptr [0x0050c944]
MOV dword ptr [0x0050c934],0x0
TEST ECX,ECX
JNZ 0x0045c559
PUSH EAX
PUSH ESI
CALL 0x00454d40
ADD ESP,0x8
POP EDI
POP ESI
ADD ESP,0xc
RET