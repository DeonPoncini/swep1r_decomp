; FUN_00404190
MOV EAX,[0x004b2910]
PUSH ESI
TEST EAX,EAX
JNZ 0x0040419e
XOR EAX,EAX
POP ESI
RET
MOV ESI,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESI + 0x4]
TEST EAX,EAX
JNZ 0x004041ab
POP ESI
RET
PUSH EAX
MOV EAX,dword ptr [ESP + 0x10]
PUSH EAX
CALL dword ptr [0x004ac058]
MOV dword ptr [ESI + 0x4],0x0
POP ESI
RET
