; FUN_00488100
MOV EAX,[0x0052d43c]
PUSH ESI
TEST EAX,EAX
JZ 0x004881b2
MOV EAX,[0x0052d440]
TEST EAX,EAX
JZ 0x004881b2
MOV EAX,dword ptr [ESP + 0x8]
TEST EAX,EAX
JZ 0x004881b2
MOV EAX,[0x0052d454]
MOV ECX,dword ptr [0x004c86bc]
PUSH ECX
MOV ESI,dword ptr [EAX]
CALL 0x0048c780
MOV EDX,dword ptr [0x0052d454]
PUSH EAX
PUSH EDX
CALL dword ptr [ESI + 0x50]
TEST EAX,EAX
JNZ 0x004881b2
MOV EAX,[0x0052d458]
TEST EAX,EAX
JZ 0x00488190
MOV ECX,dword ptr [0x0052d454]
TEST ECX,ECX
JZ 0x0048817b
MOV EAX,[0x0052d450]
MOV EDX,dword ptr [ECX]
PUSH 0x0
PUSH 0x0
MOV ESI,dword ptr [EAX + 0x1c]
PUSH ESI
MOV ESI,dword ptr [EAX + 0x8]
MOV EAX,dword ptr [EAX + 0x4]
PUSH ESI
PUSH EAX
PUSH ECX
CALL dword ptr [EDX + 0x54]
TEST EAX,EAX
JNZ 0x004881b2
MOV EAX,[0x00ec8d00]
TEST EAX,EAX
JZ 0x004881a3
MOV ECX,dword ptr [EAX]
PUSH EAX
CALL dword ptr [ECX + 0x6c]
TEST EAX,EAX
JNZ 0x004881b2
JMP 0x004881a3
MOV EAX,[0x00ec8e00]
TEST EAX,EAX
JZ 0x004881a3
MOV EDX,dword ptr [EAX]
PUSH EAX
CALL dword ptr [EDX + 0x6c]
TEST EAX,EAX
JNZ 0x004881b2
MOV EAX,[0x00529578]
TEST EAX,EAX
JZ 0x004881b2
MOV ECX,dword ptr [EAX]
PUSH EAX
CALL dword ptr [ECX + 0x6c]
POP ESI
RET
