; FUN_004a8de0
MOV EAX,[0x00dfaf24]
PUSH EBX
XOR EBX,EBX
PUSH ESI
TEST EAX,EAX
PUSH EDI
JNZ 0x004a8e30
PUSH 0x4b0474
CALL dword ptr [0x004ac164]
MOV ESI,EAX
TEST ESI,ESI
JZ 0x004a8e69
MOV EDI,dword ptr [0x004ac178]
PUSH 0x4b0468
PUSH ESI
CALL EDI
TEST EAX,EAX
MOV [0x00dfaf24],EAX
JZ 0x004a8e69
PUSH 0x4b0458
PUSH ESI
CALL EDI
PUSH 0x4b0444
PUSH ESI
MOV [0x00dfaf28],EAX
CALL EDI
MOV [0x00dfaf2c],EAX
MOV EAX,[0x00dfaf28]
TEST EAX,EAX
JZ 0x004a8e3d
CALL EAX
MOV EBX,EAX
TEST EBX,EBX
JZ 0x004a8e4f
MOV EAX,[0x00dfaf2c]
TEST EAX,EAX
JZ 0x004a8e4f
PUSH EBX
CALL EAX
MOV EBX,EAX
MOV EAX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [ESP + 0x10]
PUSH EAX
PUSH ECX
PUSH EDX
PUSH EBX
CALL dword ptr [0x00dfaf24]
POP EDI
POP ESI
POP EBX
RET
POP EDI
POP ESI
XOR EAX,EAX
POP EBX
RET
