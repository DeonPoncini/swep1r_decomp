; FUN_00414c40
MOV EAX,dword ptr [ESP + 0x4]
MOV CL,byte ptr [ESP + 0x8]
MOV DL,byte ptr [ESP + 0xc]
MOV byte ptr [EAX + 0x4c8],CL
MOV CL,byte ptr [ESP + 0x10]
MOV byte ptr [EAX + 0x4c9],DL
MOV DL,byte ptr [ESP + 0x14]
MOV byte ptr [EAX + 0x4ca],CL
MOV byte ptr [EAX + 0x4cb],DL
RET
