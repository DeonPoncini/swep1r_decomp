; FUN_00433760
MOV EAX,[0x004d5e00]
TEST EAX,EAX
JZ 0x004337b4
PUSH 0x186b8
PUSH 0x0
CALL 0x00414d90
ADD ESP,0x8
PUSH 0x0
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
PUSH 0x30d41
CALL 0x00411820
ADD ESP,0x4
PUSH 0x30d41
PUSH 0x0
CALL 0x00414d90
ADD ESP,0x8
PUSH 0x0
PUSH EAX
CALL 0x00414e60
ADD ESP,0x8
MOV dword ptr [0x00ea0180],0x0
OR EAX,0xffffffff
MOV [0x004bfedc],EAX
MOV [0x0050c944],EAX
RET
