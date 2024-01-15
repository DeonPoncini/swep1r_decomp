; FUN_00431620
FLD dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x10]
FSTP dword ptr [EAX + 0x40]
OR byte ptr [EAX + 0xc],0x3
MOV dword ptr [EAX + 0x44],ECX
MOV dword ptr [EAX + 0x48],EDX
RET
