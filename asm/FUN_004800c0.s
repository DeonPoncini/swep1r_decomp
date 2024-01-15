; FUN_004800c0
MOV EAX,[0x004c7be4]
TEST EAX,EAX
JL 0x00480166
FLD dword ptr [0x00e25960]
MOV EAX,dword ptr [ESP + 0x4]
FSTP dword ptr [EAX]
MOV ECX,dword ptr [0x00e25964]
MOV dword ptr [EAX + 0x4],ECX
MOV EDX,dword ptr [0x00e25968]
MOV dword ptr [EAX + 0x8],EDX
MOV ECX,dword ptr [0x00e2596c]
MOV dword ptr [EAX + 0xc],ECX
MOV EDX,dword ptr [0x00e25970]
MOV dword ptr [EAX + 0x10],EDX
MOV ECX,dword ptr [0x00e25974]
MOV dword ptr [EAX + 0x14],ECX
MOV EDX,dword ptr [0x00e25978]
MOV dword ptr [EAX + 0x18],EDX
MOV ECX,dword ptr [0x00e2597c]
MOV dword ptr [EAX + 0x1c],ECX
MOV EDX,dword ptr [0x00e25980]
MOV dword ptr [EAX + 0x20],EDX
MOV ECX,dword ptr [0x00e25984]
MOV dword ptr [EAX + 0x24],ECX
MOV EDX,dword ptr [0x00e25988]
MOV dword ptr [EAX + 0x28],EDX
MOV ECX,dword ptr [0x00e2598c]
MOV dword ptr [EAX + 0x2c],ECX
MOV EDX,dword ptr [0x00e25990]
MOV dword ptr [EAX + 0x30],EDX
MOV ECX,dword ptr [0x00e25994]
MOV dword ptr [EAX + 0x34],ECX
MOV EDX,dword ptr [0x00e25998]
MOV dword ptr [EAX + 0x38],EDX
MOV ECX,dword ptr [0x00e2599c]
MOV dword ptr [EAX + 0x3c],ECX
MOV EAX,0x1
RET
XOR EAX,EAX
RET
