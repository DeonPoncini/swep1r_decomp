; FUN_004315f0
MOV EAX,dword ptr [ESP + 0x10]
MOV ECX,dword ptr [ESP + 0xc]
MOV EDX,dword ptr [ESP + 0x8]
PUSH ESI
MOV ESI,dword ptr [ESP + 0x8]
PUSH EAX
PUSH ECX
PUSH EDX
LEA EAX,[ESI + 0x1c]
PUSH EAX
CALL 0x00430f10
OR byte ptr [ESI + 0xc],0x3
ADD ESP,0x10
POP ESI
RET