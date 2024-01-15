; FUN_00484dd0
MOV EAX,[0x0050d548]
TEST EAX,EAX
JZ 0x00484deb
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0xc]
PUSH EDX
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0xa8]
RET
