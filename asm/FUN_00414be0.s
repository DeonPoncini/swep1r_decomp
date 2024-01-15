; FUN_00414be0
MOV EAX,dword ptr [ESP + 0x4]
MOV CL,byte ptr [ESP + 0x8]
MOV DL,byte ptr [ESP + 0xc]
MOV byte ptr [EAX + 0x4c0],CL
MOV CL,byte ptr [ESP + 0x10]
MOV byte ptr [EAX + 0x4c1],DL
MOV DL,byte ptr [ESP + 0x14]
MOV byte ptr [EAX + 0x4c2],CL
MOV byte ptr [EAX + 0x4c3],DL
RET
