; FUN_00465d00
PUSH ESI
PUSH EDI
CALL 0x00445b40
MOV ESI,dword ptr [ESP + 0xc]
MOV EDI,EAX
MOV EAX,dword ptr [ESI + 0x1b4]
PUSH EAX
CALL 0x004472e0
ADD ESP,0x4
MOV dword ptr [ESI + 0x2c],EAX
CALL 0x00445b40
MOV ECX,dword ptr [0x00e288b4]
SUB EAX,EDI
ADD ECX,EAX
MOV dword ptr [0x00e288b4],ECX
MOV ECX,dword ptr [ESI + 0x30]
MOV EDX,dword ptr [ESI + 0x2c]
PUSH ECX
PUSH EDX
CALL 0x0047f6f0
ADD ESP,0x8
PUSH ESI
CALL 0x00465cb0
ADD ESP,0x4
POP EDI
POP ESI
RET