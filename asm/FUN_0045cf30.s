; FUN_0045cf30
MOV EDX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x4]
PUSH ESI
MOV ESI,dword ptr [EDX*0x4 + 0xe29900]
MOV ECX,dword ptr [EAX*0x4 + 0xe29900]
MOV dword ptr [EAX*0x4 + 0xe29900],ESI
MOV dword ptr [EDX*0x4 + 0xe29900],ECX
POP ESI
RET
