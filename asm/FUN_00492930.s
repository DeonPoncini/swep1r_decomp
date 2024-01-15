; FUN_00492930
MOV EAX,dword ptr [ESP + 0x4]
PUSH ESI
PUSH EDI
MOV ECX,0xc
MOV ESI,0x4af880
MOV EDI,EAX
MOVSD.REP ES:EDI,ESI
MOV ECX,dword ptr [ESP + 0x10]
ADD EAX,0x24
POP EDI
POP ESI
MOV EDX,dword ptr [ECX]
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x4],EDX
MOV ECX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x8],ECX
RET
