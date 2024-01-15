; FUN_00431850
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0x8]
MOV ECX,dword ptr [EAX + 0x18]
MOV EAX,dword ptr [ECX + EDX*0x4]
RET
