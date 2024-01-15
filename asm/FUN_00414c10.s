; FUN_00414c10
MOV EAX,dword ptr [ESP + 0x4]
MOV CL,byte ptr [ESP + 0x8]
MOV DL,byte ptr [ESP + 0xc]
MOV byte ptr [EAX + 0x4cc],CL
MOV CL,byte ptr [ESP + 0x10]
MOV byte ptr [EAX + 0x4cd],DL
MOV DL,byte ptr [ESP + 0x14]
MOV byte ptr [EAX + 0x4ce],CL
MOV byte ptr [EAX + 0x4cf],DL
RET
