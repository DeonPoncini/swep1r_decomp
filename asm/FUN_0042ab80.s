; FUN_0042ab80
PUSH ESI
PUSH EDI
MOV EDI,dword ptr [ESP + 0xc]
MOV ESI,0x1
TEST EDI,EDI
JNZ 0x0042aba0
MOV dword ptr [0x0050c054],EDI
MOV dword ptr [0x004b2940],ESI
CALL 0x00445780
CMP EDI,0x2
JNZ 0x0042abd9
MOV EAX,[0x0050c064]
TEST EAX,EAX
JNZ 0x0042abc3
MOV EAX,EDI
MOV dword ptr [0x0050c064],ESI
MOV [0x0050c068],EAX
MOV dword ptr [0x0050c04c],ESI
JMP 0x0042abde
MOV EAX,[0x0050c068]
MOV dword ptr [0x0050c064],0x0
MOV [0x0050c04c],EAX
JMP 0x0042abde
MOV EAX,[0x0050c068]
CMP EDI,ESI
JNZ 0x0042ac2f
MOV ECX,dword ptr [0x0050c064]
TEST ECX,ECX
JNZ 0x0042ac03
MOV dword ptr [0x004b2940],ESI
MOV dword ptr [0x0050c054],0x2
CALL 0x00445780
JMP 0x0042ac2f
CMP EAX,0x2
JNZ 0x0042ac1b
MOV dword ptr [0x004b2940],ESI
MOV dword ptr [0x0050c054],ESI
CALL 0x00445780
JMP 0x0042ac2f
CMP EAX,0x3
JNZ 0x0042ac2f
CALL 0x004240d0
PUSH 0x0
CALL 0x0049ea40
ADD ESP,0x4
CMP EDI,0x3
JNZ 0x0042ac4f
MOV EAX,[0x0050c064]
TEST EAX,EAX
JNZ 0x0042ac4f
MOV dword ptr [0x0050c064],ESI
MOV dword ptr [0x0050c068],EDI
MOV dword ptr [0x0050c04c],ESI
CMP EDI,0x4
JNZ 0x0042ac5e
PUSH 0x0
CALL 0x00429cd0
ADD ESP,0x4
POP EDI
POP ESI
RET