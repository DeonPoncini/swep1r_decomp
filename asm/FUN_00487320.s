; FUN_00487320
MOV EAX,[0x00510254]
MOV EDX,dword ptr [ESP + 0x4]
PUSH EDX
PUSH EAX
MOV ECX,dword ptr [EAX]
CALL dword ptr [ECX + 0x24]
RET
