; FUN_0048fc70
MOV EAX,dword ptr [ESP + 0x4]
MOV ECX,dword ptr [0x00df7f2c]
CMP ECX,EAX
JZ 0x0048fc83
MOV [0x00df7f2c],EAX
MOV EAX,0x1
RET