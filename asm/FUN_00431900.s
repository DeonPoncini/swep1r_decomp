; FUN_00431900
MOV ECX,dword ptr [ESP + 0x4]
SUB ESP,0x18
LEA EAX,[ESP]
ADD ECX,0xb0
PUSH EAX
PUSH ECX
CALL 0x00430b80
FLD dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x28]
MOV EDX,dword ptr [ESP + 0xc]
MOV ECX,dword ptr [ESP + 0x10]
ADD ESP,0x8
FSTP dword ptr [EAX]
FLD dword ptr [ESP + 0xc]
MOV dword ptr [EAX + 0x4],EDX
MOV EDX,dword ptr [ESP + 0x10]
MOV dword ptr [EAX + 0x8],ECX
MOV EAX,dword ptr [ESP + 0x24]
MOV ECX,dword ptr [ESP + 0x14]
FSTP dword ptr [EAX]
MOV dword ptr [EAX + 0x4],EDX
MOV dword ptr [EAX + 0x8],ECX
ADD ESP,0x18
RET
