; FUN_0045e120
MOV EAX,[0x0050ca3c]
TEST EAX,EAX
JZ 0x0045e135
MOV EAX,[0x0050ca44]
TEST EAX,EAX
JNZ 0x0045e135
XOR EAX,EAX
RET
CMP dword ptr [0x0050ca18],0x1
JLE 0x0045e190
CALL 0x00445690
TEST EAX,EAX
JZ 0x0045e15a
MOV EAX,[0x0050ca4c]
MOV ECX,dword ptr [ESP + 0x4]
MOV EAX,dword ptr [EAX*0x4 + 0xe98eb0]
AND EAX,ECX
RET
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [0x00e98eb0]
TEST EAX,ECX
JZ 0x0045e178
MOV dword ptr [0x0050ca4c],0x0
MOV EAX,0x1
RET
TEST dword ptr [0x00e98eb4],EAX
JZ 0x0045e19c
MOV dword ptr [0x0050ca4c],0x1
MOV EAX,0x1
RET
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [0x00e98eb0]
AND EAX,ECX
RET