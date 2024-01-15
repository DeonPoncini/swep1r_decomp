; FUN_00409230
MOV EAX,dword ptr [ESP + 0x4]
PUSH EAX
CALL 0x00445b60
MOV ECX,dword ptr [0x0050c6b0]
ADD ESP,0x4
MOV EDX,dword ptr [ECX + 0x44]
INC EDX
MOV dword ptr [ECX + 0x44],EDX
MOV ECX,dword ptr [EAX*0x4 + 0xec8660]
INC ECX
MOV dword ptr [EAX*0x4 + 0xec8660],ECX
MOV EAX,dword ptr [EAX*0x4 + 0x4b4760]
ADD EAX,ECX
RET
