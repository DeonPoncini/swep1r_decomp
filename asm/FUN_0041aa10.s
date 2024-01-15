; FUN_0041aa10
MOV EAX,dword ptr [ESP + 0x4]
TEST EAX,EAX
JZ 0x0041aa3e
MOV ECX,dword ptr [ESP + 0x8]
MOV EDX,dword ptr [EAX]
ADD EDX,ECX
MOV dword ptr [EAX],EDX
MOV EDX,dword ptr [EAX + 0x8]
ADD EDX,ECX
MOV ECX,dword ptr [ESP + 0xc]
MOV dword ptr [EAX + 0x8],EDX
MOV EDX,dword ptr [EAX + 0x4]
ADD EDX,ECX
MOV dword ptr [EAX + 0x4],EDX
MOV EDX,dword ptr [EAX + 0xc]
ADD EDX,ECX
MOV dword ptr [EAX + 0xc],EDX
RET
