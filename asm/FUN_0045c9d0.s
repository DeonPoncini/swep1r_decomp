; FUN_0045c9d0
MOV EAX,dword ptr [ESP + 0x8]
SUB ESP,0x18
TEST EAX,EAX
PUSH ESI
JZ 0x0045cb27
CMP dword ptr [0x004bfedc],-0x1
JZ 0x0045ca1c
PUSH 0xe29b90
LEA EAX,[ESP + 0x8]
PUSH 0xe2b470
PUSH EAX
CALL 0x0042f860
ADD ESP,0xc
LEA ECX,[ESP + 0x4]
PUSH ECX
PUSH 0x41200000
PUSH 0xe2b470
PUSH 0xe2b470
CALL 0x0042fa80
ADD ESP,0x10
PUSH 0xe2b470
PUSH 0x3f2aacda
PUSH 0xe29b90
PUSH 0x3eaaa64c
PUSH 0xe29b90
CALL 0x0042fac0
MOV EDX,dword ptr [ESP + 0x34]
ADD ESP,0x14
CMP dword ptr [EDX + 0x34],0x1
JNZ 0x0045cb5e
PUSH 0x4c4558
PUSH 0xe29b90
CALL 0x0042f7d0
ADD ESP,0x8
CALL 0x0045cf00
FSTP dword ptr [ESP + 0x24]
CALL 0x004816b0
MOV dword ptr [ESP + 0x20],EAX
FILD dword ptr [ESP + 0x20]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad0b4]
FSUB dword ptr [0x004ad100]
FMUL dword ptr [ESP + 0x24]
FADD dword ptr [0x00e29b90]
FSTP dword ptr [0x00e29b90]
CALL 0x004816b0
MOV dword ptr [ESP + 0x20],EAX
FILD dword ptr [ESP + 0x20]
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad1f8]
FSUB dword ptr [0x004ad1fc]
FADD dword ptr [0x00e29b94]
FSTP dword ptr [0x00e29b94]
CALL 0x004816b0
MOV dword ptr [ESP + 0x20],EAX
PUSH 0x4c4558
FILD dword ptr [ESP + 0x24]
PUSH 0xe2b470
FMUL dword ptr [0x004acfa8]
FMUL dword ptr [0x004ad038]
FSUB dword ptr [0x004ad0c4]
FSTP dword ptr [0x00e29b98]
CALL 0x0042f7d0
ADD ESP,0x8
LEA EAX,[ESP + 0x10]
PUSH 0xe29b90
PUSH 0xe2b470
PUSH EAX
CALL 0x0042f860
ADD ESP,0xc
LEA ECX,[ESP + 0x10]
PUSH ECX
PUSH 0xe2b470
PUSH 0xe2b470
CALL 0x0042f830
ADD ESP,0xc
JMP 0x0045cb5e
MOV ESI,dword ptr [ESP + 0x20]
MOV EDX,dword ptr [ESI + 0x34]
SHL EDX,0x5
ADD EDX,0x4c401c
PUSH EDX
PUSH 0xe2b470
CALL 0x0042f7d0
MOV EAX,dword ptr [ESI + 0x34]
ADD ESP,0x8
SHL EAX,0x5
ADD EAX,0x4c4010
PUSH EAX
PUSH 0xe29b90
CALL 0x0042f7d0
ADD ESP,0x8
MOV word ptr [0x0050c930],0x1
MOV dword ptr [0x0050c940],0x1
POP ESI
ADD ESP,0x18
RET
