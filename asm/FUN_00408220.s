; FUN_00408220
MOV EAX,[0x004b4314]
SUB ESP,0x8
TEST EAX,EAX
JLE 0x004082c4
LEA EAX,[ESP]
LEA ECX,[ESP + 0x4]
PUSH EAX
PUSH ECX
CALL 0x004082e0
ADD ESP,0x8
TEST EAX,EAX
JZ 0x004082d3
MOV EDX,dword ptr [ESP]
MOV EAX,dword ptr [ESP + 0x4]
PUSH EDX
PUSH EAX
PUSH 0xf9
CALL 0x00428660
ADD ESP,0xc
PUSH 0x3f800000
PUSH 0x3f800000
PUSH 0xf9
CALL 0x004286f0
ADD ESP,0xc
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH -0x1
PUSH 0xf9
CALL 0x00428740
ADD ESP,0x14
PUSH 0x1
PUSH 0xf9
CALL 0x004285d0
ADD ESP,0x8
PUSH 0x800
PUSH 0xf9
CALL 0x004287e0
ADD ESP,0x8
PUSH 0x10000
PUSH 0xf9
CALL 0x004287e0
ADD ESP,0x8
ADD ESP,0x8
RET
PUSH 0x0
PUSH 0xf9
CALL 0x004285d0
ADD ESP,0x8
ADD ESP,0x8
RET
