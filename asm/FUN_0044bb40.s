; FUN_0044bb40
PUSH 0x0
PUSH 0x0
PUSH 0x3f800000
PUSH 0xe375c0
MOV dword ptr [0x0050c6f4],0x0
MOV dword ptr [0x004c3c0c],0x1
MOV dword ptr [0x0050c6f8],0x0
CALL 0x0042f7b0
MOV EAX,[0x0050c6f4]
ADD ESP,0x10
LEA EAX,[EAX + EAX*0x2]
PUSH 0x0
SHL EAX,0x4
PUSH 0x3f800000
ADD EAX,0xe375cc
PUSH 0x0
PUSH EAX
CALL 0x0042f7b0
MOV EAX,[0x0050c6f4]
ADD ESP,0x10
LEA ECX,[EAX + EAX*0x2]
PUSH 0x3f800000
SHL ECX,0x4
PUSH 0x0
ADD ECX,0xe375d8
PUSH 0x0
PUSH ECX
CALL 0x0042f7b0
MOV EAX,[0x0050c6f4]
ADD ESP,0x10
LEA EDX,[EAX + EAX*0x2]
PUSH 0x0
SHL EDX,0x4
PUSH 0x0
ADD EDX,0xe375e4
PUSH 0x0
PUSH EDX
CALL 0x0042f7b0
ADD ESP,0x10
RET
