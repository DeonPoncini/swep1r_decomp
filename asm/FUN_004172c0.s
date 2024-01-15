; FUN_004172c0
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [ESP + 0x8]
CMP ECX,dword ptr [EAX]
JL 0x004172e7
CMP ECX,dword ptr [EAX + 0x8]
JG 0x004172e7
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [EAX + 0x4]
CMP ECX,EDX
JL 0x004172e7
CMP ECX,dword ptr [EAX + 0xc]
JG 0x004172e7
MOV EAX,0x1
RET
XOR EAX,EAX
RET
