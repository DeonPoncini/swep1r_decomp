; FUN_00431020
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ESP + 0xc]
XOR ECX,ECX
MOV dword ptr [EAX + 0x30],ECX
MOV dword ptr [EAX + 0x34],ECX
MOV dword ptr [EAX + 0x38],ECX
MOV dword ptr [EAX + 0xc],ECX
MOV dword ptr [EAX + 0x1c],ECX
MOV dword ptr [EAX + 0x2c],ECX
MOV ECX,dword ptr [ESP + 0x10]
MOV dword ptr [EAX + 0x3c],0x3f800000
PUSH ECX
MOV ECX,dword ptr [ESP + 0xc]
PUSH EDX
PUSH ECX
PUSH EAX
CALL 0x00430e00
ADD ESP,0x10
RET
