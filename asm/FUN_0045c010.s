; FUN_0045c010
MOV EAX,dword ptr [ESP + 0x14]
SUB ESP,0xc
TEST EAX,EAX
JNZ 0x0045c03f
PUSH 0xe2af60
PUSH 0xe2b3e0
CALL 0x0044bb10
ADD ESP,0x8
PUSH 0xe298c0
PUSH 0xe2ae80
CALL 0x0044bb10
ADD ESP,0x8
MOV EAX,dword ptr [ESP + 0x10]
PUSH EAX
PUSH 0xe29b90
CALL 0x0042f7d0
MOV ECX,dword ptr [ESP + 0x1c]
ADD ESP,0x8
PUSH ECX
PUSH 0xe2b470
CALL 0x0042f7d0
MOV EAX,dword ptr [ESP + 0x20]
ADD ESP,0x8
CMP AX,0x3
MOV [0x0050c930],AX
JNZ 0x0045c0a9
MOV EAX,dword ptr [ESP + 0x1c]
TEST EAX,EAX
JZ 0x0045c0a9
PUSH 0xe2af90
LEA EDX,[ESP + 0x4]
PUSH 0xe298f0
PUSH EDX
CALL 0x0042f860
ADD ESP,0xc
LEA EAX,[ESP]
PUSH EAX
PUSH 0xe2b470
PUSH 0xe29b90
CALL 0x0042f830
ADD ESP,0xc
ADD ESP,0xc
RET
