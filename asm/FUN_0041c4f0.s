; FUN_0041c4f0
MOV EDX,dword ptr [0x004e9eac]
PUSH EDI
MOV ECX,0x14
XOR EAX,EAX
MOV EDI,0x4ea8a0
OR EDX,0x1
STOSD.REP ES:EDI
MOV ECX,dword ptr [0x004e9eb0]
MOV [0x004eb1d4],EAX
OR ECX,0x1
MOV [0x004eb1d0],EAX
MOV dword ptr [0x004e9eac],EDX
MOV dword ptr [0x004e9eb0],ECX
MOV [0x004eb1f8],EAX
CALL 0x0041b920
XOR EAX,EAX
MOV [0x00ea05a0],EAX
MOV [0x00ea05a4],EAX
MOV [0x00ea05a8],EAX
MOV [0x00ea05ac],EAX
MOV [0x00ea05b0],EAX
CALL 0x0041bd60
MOV dword ptr [0x004b6714],0xffffffff
MOV EAX,0x1
POP EDI
RET
