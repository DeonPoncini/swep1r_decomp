; FUN_00431640
MOV ECX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ECX]
MOV dword ptr [EAX + 0x1c],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x20],EDX
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x24],EDX
MOV EDX,dword ptr [ECX + 0x10]
MOV dword ptr [EAX + 0x28],EDX
MOV EDX,dword ptr [ECX + 0x14]
MOV dword ptr [EAX + 0x2c],EDX
MOV EDX,dword ptr [ECX + 0x18]
MOV dword ptr [EAX + 0x30],EDX
MOV EDX,dword ptr [ECX + 0x20]
MOV dword ptr [EAX + 0x34],EDX
MOV EDX,dword ptr [ECX + 0x24]
MOV dword ptr [EAX + 0x38],EDX
MOV EDX,dword ptr [ECX + 0x28]
MOV dword ptr [EAX + 0x3c],EDX
MOV EDX,dword ptr [ECX + 0x30]
MOV dword ptr [EAX + 0x40],EDX
MOV EDX,dword ptr [ECX + 0x34]
MOV dword ptr [EAX + 0x44],EDX
MOV ECX,dword ptr [ECX + 0x38]
OR byte ptr [EAX + 0xc],0x3
MOV dword ptr [EAX + 0x48],ECX
RET
