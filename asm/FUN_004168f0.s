; FUN_004168f0
PUSH ESI
CALL 0x00414fe0
MOV ESI,dword ptr [ESP + 0x8]
CMP ESI,EAX
JNZ 0x00416908
PUSH 0x0
CALL 0x00414eb0
ADD ESP,0x4
CALL 0x00414ff0
CMP ESI,EAX
JNZ 0x0041691b
PUSH 0x0
CALL 0x00414f00
ADD ESP,0x4
CALL 0x00415000
CMP ESI,EAX
JNZ 0x0041692e
PUSH 0x0
CALL 0x00414f70
ADD ESP,0x4
POP ESI
RET
