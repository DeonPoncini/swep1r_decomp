; FUN_00414c70
MOV EAX,dword ptr [ESP + 0x4]
MOV CL,byte ptr [ESP + 0x8]
MOV DL,byte ptr [ESP + 0xc]
MOV byte ptr [EAX + 0x4d0],CL
MOV CL,byte ptr [ESP + 0x10]
MOV byte ptr [EAX + 0x4d1],DL
MOV DL,byte ptr [ESP + 0x14]
MOV byte ptr [EAX + 0x4d2],CL
MOV byte ptr [EAX + 0x4d3],DL
RET
