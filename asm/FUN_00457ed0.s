; FUN_00457ed0
PUSH ESI
PUSH EDI
PUSH 0x1a
CALL 0x00446fb0
ADD ESP,0x4
MOV EDI,EAX
MOV ESI,0x82
PUSH EDI
PUSH ESI
CALL 0x004282f0
ADD ESP,0x8
INC ESI
CMP SI,0x90
JL 0x00457ee3
PUSH 0x1a
CALL 0x00446fb0
ADD ESP,0x4
MOV EDI,EAX
MOV ESI,0x90
PUSH EDI
PUSH ESI
CALL 0x004282f0
ADD ESP,0x8
PUSH 0x2000
PUSH ESI
CALL 0x004287e0
ADD ESP,0x8
INC ESI
CMP SI,0xa1
JLE 0x00457f06
PUSH 0x91
CALL 0x00446fb0
ADD ESP,0x4
PUSH EAX
PUSH 0x57
CALL 0x004282f0
ADD ESP,0x8
PUSH 0x93
CALL 0x00446fb0
ADD ESP,0x4
MOV EDI,EAX
MOV ESI,0x58
PUSH EDI
PUSH ESI
CALL 0x004282f0
ADD ESP,0x8
INC ESI
CMP SI,0x5e
JLE 0x00457f52
PUSH 0x94
CALL 0x00446fb0
ADD ESP,0x4
PUSH EAX
PUSH 0x5f
CALL 0x004282f0
ADD ESP,0x8
PUSH 0x8a
CALL 0x00446fb0
ADD ESP,0x4
PUSH EAX
PUSH 0x60
CALL 0x004282f0
ADD ESP,0x8
PUSH 0x92
CALL 0x00446fb0
ADD ESP,0x4
PUSH EAX
PUSH 0x61
CALL 0x004282f0
ADD ESP,0x8
MOV ESI,0x57
PUSH 0x8000
PUSH ESI
CALL 0x004287e0
ADD ESP,0x8
INC ESI
CMP SI,0x61
JLE 0x00457fb0
POP EDI
POP ESI
RET