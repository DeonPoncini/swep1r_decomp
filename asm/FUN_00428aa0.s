; FUN_00428aa0
MOVSX ECX,word ptr [ESP + 0x4]
FLD dword ptr [ESP + 0x8]
MOV EAX,ECX
SHL EAX,0x5
SUB EAX,ECX
MOV ECX,dword ptr [0x004b91c4]
SHL EAX,0x2
FSTP dword ptr [ECX + EAX*0x1 + 0x54]
FLD dword ptr [ESP + 0xc]
MOV EDX,dword ptr [0x004b91c4]
FSTP dword ptr [EDX + EAX*0x1 + 0x58]
FLD dword ptr [ESP + 0x10]
MOV ECX,dword ptr [0x004b91c4]
FSTP dword ptr [ECX + EAX*0x1 + 0x5c]
FLD dword ptr [ESP + 0x14]
MOV EDX,dword ptr [0x004b91c4]
FSTP dword ptr [EDX + EAX*0x1 + 0x60]
FLD dword ptr [ESP + 0x18]
MOV ECX,dword ptr [0x004b91c4]
FSTP dword ptr [ECX + EAX*0x1 + 0x64]
FLD dword ptr [ESP + 0x1c]
MOV EDX,dword ptr [0x004b91c4]
FSTP dword ptr [EDX + EAX*0x1 + 0x68]
RET
