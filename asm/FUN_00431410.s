; FUN_00431410
MOV EAX,dword ptr [ESP + 0x18]
MOV ECX,dword ptr [ESP + 0x14]
MOV EDX,dword ptr [ESP + 0x10]
SUB ESP,0x40
PUSH EAX
MOV EAX,dword ptr [ESP + 0x50]
PUSH ECX
PUSH EDX
LEA ECX,[ESP + 0xc]
PUSH EAX
PUSH ECX
CALL 0x00431150
MOV EAX,dword ptr [ESP + 0x5c]
MOV ECX,dword ptr [ESP + 0x58]
ADD ESP,0x14
LEA EDX,[ESP]
PUSH EDX
PUSH EAX
PUSH ECX
CALL 0x0042fb70
ADD ESP,0xc
ADD ESP,0x40
RET
