; FUN_0046e150
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
TEST byte ptr [ESI + 0x60],0x20
JNZ 0x0046e168
TEST dword ptr [ESI + 0x64],0x4000000
JZ 0x0046e2bd
MOV EAX,dword ptr [ESI + 0x64]
TEST AH,0x80
JZ 0x0046e216
MOV EAX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EAX + 0x4]
TEST EAX,EAX
JZ 0x0046e192
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV ECX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [ECX + 0x18]
TEST EAX,EAX
JZ 0x0046e1b0
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EDX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EDX + 0x28]
TEST EAX,EAX
JZ 0x0046e1ce
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EAX + 0xf8]
TEST EAX,EAX
JZ 0x0046e1ef
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV ECX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [ECX + 0x10c]
TEST EAX,EAX
JZ 0x0046e2bd
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
POP ESI
RET
TEST EAX,0x10000
JZ 0x0046e2bd
MOV EDX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EDX + 0x8]
TEST EAX,EAX
JZ 0x0046e23f
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EAX + 0x18]
TEST EAX,EAX
JZ 0x0046e25d
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV ECX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [ECX + 0x2c]
TEST EAX,EAX
JZ 0x0046e27b
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EDX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EDX + 0xfc]
TEST EAX,EAX
JZ 0x0046e29c
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
MOV EAX,dword ptr [ESI + 0x344]
MOV EAX,dword ptr [EAX + 0x110]
TEST EAX,EAX
JZ 0x0046e2bd
PUSH 0x3
PUSH 0x10
PUSH -0x4
PUSH 0x2
PUSH EAX
CALL 0x00431a50
ADD ESP,0x14
POP ESI
RET
