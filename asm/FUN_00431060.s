; FUN_00431060
MOV ECX,dword ptr [ESP + 0x8]
MOV EAX,dword ptr [ESP + 0x4]
MOV EDX,dword ptr [ECX]
MOV dword ptr [EAX + 0x30],EDX
MOV EDX,dword ptr [ECX + 0x4]
MOV dword ptr [EAX + 0x34],EDX
MOV EDX,dword ptr [ECX + 0x8]
MOV dword ptr [EAX + 0x38],EDX
XOR EDX,EDX
MOV dword ptr [EAX + 0xc],EDX
MOV dword ptr [EAX + 0x1c],EDX
MOV dword ptr [EAX + 0x2c],EDX
MOV dword ptr [EAX + 0x3c],0x3f800000
MOV EDX,dword ptr [ECX + 0x14]
PUSH EDX
MOV EDX,dword ptr [ECX + 0x10]
MOV ECX,dword ptr [ECX + 0xc]
PUSH EDX
PUSH ECX
PUSH EAX
CALL 0x00430e00
ADD ESP,0x10
RET
