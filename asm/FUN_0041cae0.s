; FUN_0041cae0
MOV EAX,dword ptr [ESP + 0x4]
LEA ECX,[EAX + EAX*0x4]
LEA EDX,[EAX + ECX*0x2]
SHL EDX,0x4
MOV ECX,dword ptr [EDX + 0xe9f448]
MOV EDX,dword ptr [0x00ec7620]
CMP ECX,EDX
JNZ 0x0041cb07
MOV dword ptr [0x00ec7620],0x0
PUSH EAX
CALL 0x00420ff0
ADD ESP,0x4
RET