; FUN_00405cf0
MOV EAX,dword ptr [ESP + 0x4]
XOR ECX,ECX
CMP EAX,ECX
JGE 0x00405d3c
XOR EDX,EDX
MOV word ptr [0x00e98ee0],CX
MOV dword ptr [0x00ec8810],EDX
MOV word ptr [0x00e98ee2],CX
MOV dword ptr [0x00ec8814],EDX
MOV dword ptr [0x00ec8818],EDX
MOV dword ptr [0x00ec881c],EDX
MOV dword ptr [0x00e98ee4],EDX
MOV dword ptr [0x00e98ee8],EDX
MOV dword ptr [0x00e98eec],EDX
MOV dword ptr [0x00e98ef0],EDX
NEG EAX
SUB EAX,ECX
JZ 0x00405da2
DEC EAX
JZ 0x00405d65
DEC EAX
JNZ 0x00405dc0
MOV dword ptr [0x00ec87f8],0x0
MOV dword ptr [0x00ec87f4],0x0
MOV dword ptr [0x00ec87f0],0x0
RET
MOV dword ptr [0x00ec87e0],0x0
MOV dword ptr [0x00ec87dc],0x0
MOV dword ptr [0x00ec87d8],0x0
MOV dword ptr [0x004d6b68],0x0
MOV dword ptr [0x004d6b64],0x0
MOV dword ptr [0x004d6b60],0x0
RET
MOV dword ptr [0x00ec87c8],0x0
MOV dword ptr [0x00ec87c4],0x0
MOV dword ptr [0x00ec87c0],0x0
RET
